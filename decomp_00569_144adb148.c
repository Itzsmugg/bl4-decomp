// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144adb148 FUN_144adb148 body=293 status=ok
// SIG undefined FUN_144adb148(void)

void FUN_144adb148(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  void *_Src;
  ulonglong *puVar3;
  void *_Dst;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 1);
  if ((int)uVar2 < (int)param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    uVar4 = 4;
    if (4 < uVar2) {
      uVar4 = uVar2;
    }
  }
  else {
    uVar4 = uVar2 + (int)((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + 0x10;
  }
  uVar5 = 0x7fffffff;
  if ((int)uVar2 <= (int)uVar4) {
    uVar5 = uVar4;
  }
  *(uint *)((longlong)param_1 + 0xc) = uVar5;
  if (uVar5 != 0) {
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456bd9fc(uVar5,0x38);
    }
    _Src = (void *)*param_1;
    iVar7 = uVar5 * 0x38;
    puVar3 = TlsGetValue(DAT_14ca954e4);
    uVar6 = (ulonglong)((uint)(0xf < iVar7) * 8);
    lVar1 = uVar6 + 7;
    uVar6 = uVar6 ^ 0xfffffffffffffff8;
    _Dst = (void *)(*puVar3 + lVar1 & uVar6);
    uVar8 = (longlong)_Dst + (longlong)iVar7;
    if (puVar3[1] < uVar8) {
      FUN_140023dd8(puVar3,iVar7 + (uint)(0xf < iVar7) * 8 + 8);
      _Dst = (void *)(lVar1 + *puVar3 & uVar6);
      uVar8 = (longlong)iVar7 + (longlong)_Dst;
    }
    *puVar3 = uVar8;
    *param_1 = _Dst;
    if (param_2 != 0 && _Src != (void *)0x0) {
      if ((int)uVar5 < (int)param_2) {
        param_2 = uVar5;
      }
      memcpy(_Dst,_Src,(longlong)(int)param_2 * 0x38);
      return;
    }
  }
  return;
}



// FUNCTION 144adb26e FUN_144adb26e body=297 status=ok
// SIG undefined FUN_144adb26e(void)

void FUN_144adb26e(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  void *_Src;
  ulonglong *puVar3;
  void *_Dst;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 1);
  if ((int)uVar2 < (int)param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    uVar4 = 4;
    if (4 < uVar2) {
      uVar4 = uVar2;
    }
  }
  else {
    uVar4 = uVar2 + (int)((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + 0x10;
  }
  uVar5 = 0x7fffffff;
  if ((int)uVar2 <= (int)uVar4) {
    uVar5 = uVar4;
  }
  *(uint *)((longlong)param_1 + 0xc) = uVar5;
  if (uVar5 != 0) {
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456bd9fc(uVar5,4);
    }
    _Src = (void *)*param_1;
    iVar7 = uVar5 * 4;
    puVar3 = TlsGetValue(DAT_14ca954e4);
    uVar6 = (ulonglong)((uint)(0xf < iVar7) * 8);
    lVar1 = uVar6 + 7;
    uVar6 = uVar6 ^ 0xfffffffffffffff8;
    _Dst = (void *)(*puVar3 + lVar1 & uVar6);
    uVar8 = (longlong)_Dst + (longlong)iVar7;
    if (puVar3[1] < uVar8) {
      FUN_140023dd8(puVar3,iVar7 + (uint)(0xf < iVar7) * 8 + 8);
      _Dst = (void *)(lVar1 + *puVar3 & uVar6);
      uVar8 = (longlong)iVar7 + (longlong)_Dst;
    }
    *puVar3 = uVar8;
    *param_1 = _Dst;
    if (param_2 != 0 && _Src != (void *)0x0) {
      if ((int)uVar5 < (int)param_2) {
        param_2 = uVar5;
      }
      memcpy(_Dst,_Src,(longlong)(int)param_2 << 2);
      return;
    }
  }
  return;
}



// FUNCTION 144adb398 FUN_144adb398 body=26 status=ok
// SIG undefined FUN_144adb398(void)

void FUN_144adb398(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) != param_2) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_1400335d4(param_1,*(undefined4 *)(param_1 + 8),param_2,0x38);
    return;
  }
  return;
}



// FUNCTION 144adb3b2 FUN_144adb3b2 body=646 status=ok
// SIG undefined FUN_144adb3b2(void)

void FUN_144adb3b2(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  ulonglong uVar16;
  
  plVar1 = param_1 + 7;
  plVar2 = param_1 + 8;
  uVar8 = *(uint *)(param_1 + 0xb);
  if (uVar8 != 1) {
    if (uVar8 == 0) {
      return;
    }
    if ((4 < uVar8) && (FUN_14018bd92(), (int)uVar8 < 1)) goto LAB_144adb422;
  }
  uVar3 = 0;
  do {
    plVar6 = (longlong *)param_1[10];
    if ((longlong *)param_1[10] == (longlong *)0x0) {
      plVar6 = plVar2;
    }
    if (plVar6 == (longlong *)0x0) {
      plVar6 = plVar1;
    }
    *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[0xb] + 0x7fffffffU & uVar3) * 4) =
         0xffffffff;
    uVar3 = uVar3 + 1;
  } while (uVar8 != uVar3);
LAB_144adb422:
  iVar15 = (int)param_1[5];
  if (iVar15 == 0) {
    uVar4 = 0;
    uVar12 = 1;
    iVar13 = 0;
    iVar5 = 0;
  }
  else {
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = (uint *)(param_1 + 2);
    }
    uVar8 = *puVar11;
    uVar4 = 0;
    iVar5 = 0;
    if (uVar8 == 0) {
      iVar13 = iVar15 + 0x1e;
      if (-1 < iVar15 + -1) {
        iVar13 = iVar15 + -1;
      }
      uVar4 = 0;
      uVar12 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
        uVar12 = uVar4;
      }
      do {
        if (uVar12 == uVar4) {
          return;
        }
        iVar5 = iVar5 + 0x20;
        uVar8 = puVar11[uVar4 + 1];
        uVar4 = uVar4 + 1;
      } while (uVar8 == 0);
    }
    uVar12 = (ulonglong)(-uVar8 & uVar8);
    uVar16 = uVar12 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar13 = (iVar5 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    if (iVar15 <= iVar13) {
      iVar13 = iVar15;
    }
  }
  if (iVar13 < iVar15) {
    uVar8 = 0xffffffff;
    do {
      lVar7 = *param_1;
      lVar14 = (longlong)iVar13 * 0x20;
      uVar3 = (int)((ulonglong)*(undefined8 *)(lVar7 + lVar14) >> 0x20) * 0x17 +
              (int)*(undefined8 *)(lVar7 + lVar14);
      uVar16 = (longlong)
               (int)((uVar3 >> 2) + uVar3 * 0x40 + (uint)*(byte *)(lVar7 + 8 + lVar14) + 0x9e3779b9
                    ^ uVar3) & (longlong)(int)param_1[0xb] - 1U;
      iVar15 = (int)uVar16;
      *(int *)(lVar7 + 0x1c + lVar14) = iVar15;
      plVar6 = (longlong *)param_1[10];
      if ((longlong *)param_1[10] == (longlong *)0x0) {
        plVar6 = plVar2;
      }
      if (plVar6 == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)(lVar7 + 0x18 + lVar14) =
           *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[0xb] - 1U & uVar16) * 4);
      plVar6 = (longlong *)param_1[10];
      if ((longlong *)param_1[10] == (longlong *)0x0) {
        plVar6 = plVar2;
      }
      if (plVar6 == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(int *)((longlong)plVar6 + ((longlong)iVar15 & (longlong)(int)param_1[0xb] - 1U) * 4) =
           iVar13;
      uVar8 = ~(uint)uVar12 & uVar8;
      puVar11 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar11 = (uint *)(param_1 + 2);
      }
      iVar15 = (int)param_1[5];
      iVar13 = (int)uVar4;
      lVar7 = (longlong)iVar13;
      uVar3 = puVar11[lVar7] & uVar8;
      if (uVar3 == 0) {
        iVar9 = iVar15 + 0x1e;
        if (-1 < iVar15 + -1) {
          iVar9 = iVar15 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar10 = iVar9;
        if (iVar9 < iVar13) {
          iVar10 = iVar13;
        }
        if (iVar9 <= iVar13) {
          return;
        }
        lVar14 = 0;
        while( true ) {
          iVar5 = iVar5 + 0x20;
          uVar3 = puVar11[lVar7 + lVar14 + 1];
          if (uVar3 != 0) break;
          lVar14 = lVar14 + 1;
          if (iVar10 - lVar7 == lVar14) {
            return;
          }
        }
        uVar4 = (ulonglong)(iVar13 + (int)lVar14 + 1);
        uVar8 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-uVar3 & uVar3);
      uVar16 = uVar12 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar13 = (iVar5 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    } while (iVar13 < iVar15);
  }
  return;
}



// FUNCTION 144adb638 FUN_144adb638 body=300 status=ok
// SIG undefined FUN_144adb638(void)

void FUN_144adb638(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  void *_Src;
  ulonglong *puVar3;
  void *_Dst;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 1);
  if ((int)uVar2 < (int)param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    uVar4 = 4;
    if (4 < uVar2) {
      uVar4 = uVar2;
    }
  }
  else {
    uVar4 = uVar2 + (int)((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + 0x10;
  }
  uVar5 = 0x7fffffff;
  if ((int)uVar2 <= (int)uVar4) {
    uVar5 = uVar4;
  }
  *(uint *)((longlong)param_1 + 0xc) = uVar5;
  if (uVar5 != 0) {
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456bd9fc(uVar5,8);
    }
    _Src = (void *)*param_1;
    iVar7 = uVar5 * 8;
    puVar3 = TlsGetValue(DAT_14ca954e4);
    uVar6 = (ulonglong)((uint)(0xf < iVar7) * 8);
    lVar1 = uVar6 + 7;
    uVar6 = uVar6 ^ 0xfffffffffffffff8;
    _Dst = (void *)(*puVar3 + lVar1 & uVar6);
    uVar8 = (longlong)_Dst + (longlong)iVar7;
    if (puVar3[1] < uVar8) {
      FUN_140023dd8(puVar3,iVar7 + (uint)(0xf < iVar7) * 8 + 8);
      _Dst = (void *)(lVar1 + *puVar3 & uVar6);
      uVar8 = (longlong)iVar7 + (longlong)_Dst;
    }
    *puVar3 = uVar8;
    *param_1 = _Dst;
    if (param_2 != 0 && _Src != (void *)0x0) {
      if ((int)uVar5 < (int)param_2) {
        param_2 = uVar5;
      }
      memcpy(_Dst,_Src,(longlong)(int)param_2 << 3);
      return;
    }
  }
  return;
}



// FUNCTION 144adb766 FUN_144adb766 body=299 status=ok
// SIG undefined FUN_144adb766(void)

void FUN_144adb766(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  void *_Src;
  ulonglong *puVar3;
  void *_Dst;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 1);
  if ((int)uVar2 < (int)param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    uVar4 = 4;
    if (4 < uVar2) {
      uVar4 = uVar2;
    }
  }
  else {
    uVar4 = uVar2 + (int)((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + 0x10;
  }
  uVar5 = 0x7fffffff;
  if ((int)uVar2 <= (int)uVar4) {
    uVar5 = uVar4;
  }
  *(uint *)((longlong)param_1 + 0xc) = uVar5;
  if (uVar5 != 0) {
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456bd9fc(uVar5,0x10);
    }
    _Src = (void *)*param_1;
    iVar7 = uVar5 * 0x10;
    puVar3 = TlsGetValue(DAT_14ca954e4);
    uVar6 = (ulonglong)((uint)(0xf < iVar7) * 8);
    lVar1 = uVar6 + 7;
    uVar6 = uVar6 ^ 0xfffffffffffffff8;
    _Dst = (void *)(*puVar3 + lVar1 & uVar6);
    uVar8 = (longlong)_Dst + (longlong)iVar7;
    if (puVar3[1] < uVar8) {
      FUN_140023dd8(puVar3,iVar7 + (uint)(0xf < iVar7) * 8 + 8);
      _Dst = (void *)(lVar1 + *puVar3 & uVar6);
      uVar8 = (longlong)iVar7 + (longlong)_Dst;
    }
    *puVar3 = uVar8;
    *param_1 = _Dst;
    if (param_2 != 0 && _Src != (void *)0x0) {
      if ((int)uVar5 < (int)param_2) {
        param_2 = uVar5;
      }
      memcpy(_Dst,_Src,(longlong)(int)param_2 << 4);
      return;
    }
  }
  return;
}



// FUNCTION 144adb892 FUN_144adb892 body=300 status=ok
// SIG undefined FUN_144adb892(void)

void FUN_144adb892(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  void *_Src;
  ulonglong *puVar2;
  void *_Dst;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar6 = *(uint *)(param_1 + 1);
  if ((int)uVar6 < (int)param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar6) {
      uVar3 = uVar6;
    }
  }
  else {
    uVar3 = uVar6 + (int)((ulonglong)((longlong)(int)uVar6 * 3) >> 3) + 0x10;
  }
  uVar4 = 0x7fffffff;
  if ((int)uVar6 <= (int)uVar3) {
    uVar4 = uVar3;
  }
  *(uint *)((longlong)param_1 + 0xc) = uVar4;
  if (uVar4 != 0) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456bd9fc(uVar4,0x20);
    }
    _Src = (void *)*param_1;
    uVar6 = uVar4 * 0x20;
    puVar2 = TlsGetValue(DAT_14ca954e4);
    uVar5 = (ulonglong)((uint)(0xf < (int)uVar6) * 8);
    lVar1 = uVar5 + 7;
    uVar5 = uVar5 ^ 0xfffffffffffffff8;
    _Dst = (void *)(*puVar2 + lVar1 & uVar5);
    uVar7 = (longlong)_Dst + (longlong)(int)uVar6;
    if (puVar2[1] < uVar7) {
      FUN_140023dd8(puVar2,uVar6 | (uint)(0xf < (int)uVar6) * 8 + 8);
      _Dst = (void *)(lVar1 + *puVar2 & uVar5);
      uVar7 = (longlong)(int)uVar6 + (longlong)_Dst;
    }
    *puVar2 = uVar7;
    *param_1 = _Dst;
    if (param_2 != 0 && _Src != (void *)0x0) {
      if ((int)uVar4 < (int)param_2) {
        param_2 = uVar4;
      }
      memcpy(_Dst,_Src,(longlong)(int)param_2 << 5);
      return;
    }
  }
  return;
}



// FUNCTION 144adb9c0 FUN_144adb9c0 body=590 status=ok
// SIG undefined FUN_144adb9c0(void)

void FUN_144adb9c0(void *param_1,uint param_2)

{
  longlong lVar1;
  char cVar2;
  ulonglong *puVar3;
  void *pvVar4;
  void *_Src;
  ulonglong uVar5;
  int iVar6;
  uint uVar8;
  ulonglong uVar9;
  uint uVar7;
  
  uVar7 = *(uint *)((longlong)param_1 + 0x28);
  if ((int)uVar7 < (int)param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (uVar7 < 5) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 4;
    _Src = *(void **)((longlong)param_1 + 0x20);
LAB_144adbbb9:
    pvVar4 = param_1;
    if (_Src == (void *)0x0) {
      return;
    }
    goto LAB_144adba6b;
  }
  if (*(uint *)((longlong)param_1 + 0x2c) < 5) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar7;
    _Src = *(void **)((longlong)param_1 + 0x20);
    cVar2 = (char)(uVar7 >> 0x18);
joined_r0x000144adbab7:
    if (_Src != (void *)0x0) {
      if (cVar2 < '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_1456bd9fc(uVar7,8);
      }
LAB_144adbad5:
      iVar6 = uVar7 * 8;
      puVar3 = TlsGetValue(DAT_14ca954e4);
      uVar5 = (ulonglong)((uint)(0xf < iVar6) * 8);
      lVar1 = uVar5 + 7;
      uVar5 = uVar5 ^ 0xfffffffffffffff8;
      pvVar4 = (void *)(*puVar3 + lVar1 & uVar5);
      uVar9 = (longlong)pvVar4 + (longlong)iVar6;
      if (puVar3[1] < uVar9) {
        FUN_140023dd8(puVar3,iVar6 + (uint)(0xf < iVar6) * 8 + 8);
        pvVar4 = (void *)(lVar1 + *puVar3 & uVar5);
        uVar9 = (longlong)iVar6 + (longlong)pvVar4;
      }
      *puVar3 = uVar9;
      *(void **)((longlong)param_1 + 0x20) = pvVar4;
      if (param_2 == 0) {
        return;
      }
      if ((int)uVar7 < (int)param_2) {
        param_2 = uVar7;
      }
      memcpy(pvVar4,_Src,(longlong)(int)param_2 << 3);
      return;
    }
    if (cVar2 < '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_1456bd9fc(uVar7,8);
    }
  }
  else {
    uVar8 = uVar7 + (int)((ulonglong)((longlong)(int)uVar7 * 3) >> 3) + 0x10;
    if ((int)uVar7 <= (int)uVar8) {
      *(uint *)((longlong)param_1 + 0x2c) = uVar8;
      _Src = *(void **)((longlong)param_1 + 0x20);
      if (uVar8 < 5) goto LAB_144adbbb9;
      cVar2 = (char)(uVar8 >> 0x18);
      uVar7 = uVar8;
      goto joined_r0x000144adbab7;
    }
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x7fffffff;
    _Src = *(void **)((longlong)param_1 + 0x20);
    uVar7 = 0x7fffffff;
    if (_Src != (void *)0x0) goto LAB_144adbad5;
  }
  iVar6 = uVar7 * 8;
  puVar3 = TlsGetValue(DAT_14ca954e4);
  uVar5 = (ulonglong)((uint)(0xf < iVar6) * 8);
  lVar1 = uVar5 + 7;
  uVar5 = uVar5 ^ 0xfffffffffffffff8;
  pvVar4 = (void *)(*puVar3 + lVar1 & uVar5);
  uVar9 = (longlong)pvVar4 + (longlong)iVar6;
  if (puVar3[1] < uVar9) {
    FUN_140023dd8(puVar3,iVar6 + (uint)(0xf < iVar6) * 8 + 8);
    pvVar4 = (void *)(lVar1 + *puVar3 & uVar5);
    uVar9 = (longlong)iVar6 + (longlong)pvVar4;
  }
  *puVar3 = uVar9;
  *(void **)((longlong)param_1 + 0x20) = pvVar4;
  _Src = param_1;
LAB_144adba6b:
  memmove(pvVar4,_Src,(longlong)(int)param_2 << 3);
  return;
}



// FUNCTION 144adbc10 FUN_144adbc10 body=427 status=ok
// SIG undefined FUN_144adbc10(void)

void FUN_144adbc10(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  ulonglong _Size;
  int *piVar8;
  void *_Dst;
  
  if (*(uint *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  *(uint *)((longlong)param_1 + 0xc) = param_2;
  _Size = (ulonglong)param_2 * 0x20;
  _Src = (void *)*param_1;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_144adbc63;
  while( true ) {
    FUN_14472e504(puVar1);
    puVar4 = (uint *)*puVar1;
LAB_144adbc63:
    _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    if (puVar6 <= puVar4 + 0x4000) break;
    if (0x7fd < param_2) {
      puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
      *puVar4 = 0xffffffff;
      puVar4[0x12] = 0;
      _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
      *(uint **)(puVar4 + 0x10) = puVar4 + (ulonglong)param_2 * 8 + 0x18;
      *puVar4 = 1;
      goto LAB_144adbcf0;
    }
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
        goto LAB_144adbce5;
      }
    }
  }
  uVar7 = puVar4[0x12] + 1;
LAB_144adbce5:
  *(uint **)(puVar4 + 0x10) = puVar6 + 2;
  puVar4[0x12] = uVar7;
LAB_144adbcf0:
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src != (void *)0x0) {
    uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
    if (uVar3 != 0) {
      if (uVar3 < _Size) {
        _Size = uVar3;
      }
      memcpy(_Dst,_Src,_Size);
    }
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
  *param_1 = _Dst;
  return;
}



// FUNCTION 144adbdbb FUN_144adbdbb body=1025 status=ok
// SIG undefined FUN_144adbdbb(void)

undefined8 FUN_144adbdbb(uint param_1)

{
  undefined3 uVar1;
  char cVar2;
  int iVar3;
  DWORD DVar4;
  DWORD DVar5;
  int iVar6;
  ulonglong uVar7;
  bool bVar8;
  longlong *plVar9;
  undefined4 *puVar10;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca96fb0) && (FUN_144b3d300(&DAT_14ca96fb0), DAT_14ca96fb0 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14ca96fa8 =
         (longlong *)
         (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Shadow.Virtual.NonNaniteVSM",1);
    _Init_thread_footer(&DAT_14ca96fb0);
  }
  plVar9 = DAT_14ca96fa8;
  if (*(code **)(*DAT_14ca96fa8 + 0xb0) == FUN_14473e48a) {
    iVar3 = FUN_140052f36(DAT_14ca96fa8);
    if (iVar3 == 0) {
      plVar9 = plVar9 + 0xb;
    }
    else {
      plVar9 = (longlong *)plVar9[10];
    }
    iVar3 = (int)*plVar9;
  }
  else {
    iVar3 = (**(code **)(*DAT_14ca96fa8 + 0xb0))(DAT_14ca96fa8);
  }
  if (iVar3 != 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14ca96f90) && (FUN_144b3d300(&DAT_14ca96f90), DAT_14ca96f90 == -1)) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14ca96f88 =
           (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Shadow.Virtual.Enable",1);
      _Init_thread_footer(&DAT_14ca96f90);
    }
    plVar9 = DAT_14ca96f88;
    if (DAT_14ca96f88 != (longlong *)0x0) {
      if (*(code **)(*DAT_14ca96f88 + 0xb0) == FUN_14474d4e4) {
        iVar3 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
        ;
        if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
          uVar7 = 0;
        }
        else if (iVar3 == 1) {
          DVar4 = FUN_140ad26c0();
          DVar5 = GetCurrentThreadId();
          uVar7 = (ulonglong)(DVar4 != DVar5);
        }
        else {
          uVar7 = 1;
        }
        iVar3 = *(int *)((longlong)plVar9 + uVar7 * 4 + 0x50);
      }
      else {
        iVar3 = (**(code **)(*DAT_14ca96f88 + 0xb0))(DAT_14ca96f88);
      }
      cVar2 = DAT_14ca84e0a;
      if (iVar3 != 0) {
        uVar7 = (ulonglong)(ushort)param_1;
        puVar10 = &DAT_14ca96aa8;
        if (DAT_14ca96af8 != (undefined4 *)0x0) {
          puVar10 = DAT_14ca96af8;
        }
        bVar8 = true;
        if (((uint)puVar10[(ushort)((ushort)param_1 >> 5)] >> (param_1 & 0x1f) & 1) != 0) {
          bVar8 = (int)(&DAT_14ca814b8)[uVar7 * 0xf] < 3;
        }
        if ((byte)((byte)((uint)(&DAT_14ca814c8)[uVar7 * 0xf] >> 0x1d) &
                   *(byte *)((longlong)&DAT_14ca814d8 + uVar7 * 0x3c + 3) >> 4 &
                  (byte)((*(uint *)(&DAT_14ca814cc + uVar7 * 0x3c) & 8) >> 3)) != 0) {
          uVar1 = (undefined3)(param_1 >> 8);
          uVar7 = (ulonglong)CONCAT31(uVar1,DAT_14ca84e0a);
          iVar3 = 3;
          if (*(code **)(*DAT_14ca83900 + 0x28) != (code *)&LAB_14474d4de) {
            iVar3 = (**(code **)(*DAT_14ca83900 + 0x28))();
          }
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14ca96ee0) && (FUN_144b3d300(&DAT_14ca96ee0), DAT_14ca96ee0 == -1)) {
            if (DAT_14c8407a8 == (longlong *)0x0) {
              FUN_1414b00ea();
            }
            DAT_14ca96ed8 =
                 (longlong *)
                 (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Nanite.RequireDX12",1);
            _Init_thread_footer(&DAT_14ca96ee0);
          }
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14ca96ee8) && (FUN_144b3d300(&DAT_14ca96ee8), DAT_14ca96ee8 == -1)) {
            iVar6 = 1;
            if (DAT_14ca96ed8 != (longlong *)0x0) {
              iVar6 = (**(code **)(*DAT_14ca96ed8 + 0xb0))();
            }
            DAT_14ca96ee4 = iVar6;
            _Init_thread_footer(&DAT_14ca96ee8);
          }
          if ((((cVar2 != '\0') && (DAT_14ca96ee4 != 0)) &&
              (uVar7 = (ulonglong)CONCAT31(uVar1,iVar3 != 2), iVar3 == 3)) && (DAT_14ca96ee4 == 1))
          {
            uVar7 = 0;
            if (DAT_14ca84e0b != '\0') {
              uVar7 = 1;
            }
          }
          return CONCAT71((int7)(uVar7 >> 8),(byte)uVar7 & bVar8);
        }
      }
    }
  }
  return 0;
}



// FUNCTION 144adc1bc FUN_144adc1bc body=244 status=ok
// SIG undefined FUN_144adc1bc(void)

longlong * FUN_144adc1bc(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  code *pcVar3;
  
  puVar1 = *(undefined8 **)param_1[1];
  if ((undefined8 *)((longlong *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) != 0) {
      FUN_146821949(param_1);
      return param_1;
    }
    pcVar3 = *(code **)(*param_1 + 0x170);
    plVar2 = param_1;
    if (pcVar3 == FUN_14473a572) {
      plVar2 = (longlong *)param_1[0x12];
      pcVar3 = *(code **)(*plVar2 + 0x170);
      if (pcVar3 == FUN_14004e24c) {
        FUN_14004e24c(plVar2,param_2,8);
        return param_1;
      }
      if (pcVar3 == FUN_1447395b8) {
        *param_2 = *(undefined8 *)(plVar2[0x12] + plVar2[0x13]);
        plVar2[0x13] = plVar2[0x13] + 8;
        return param_1;
      }
      if (pcVar3 == FUN_144a6950e) {
        if ((*(byte *)((longlong)plVar2 + 0x29) & 2) != 0) {
          return param_1;
        }
        *param_2 = **(undefined8 **)plVar2[1];
        plVar2 = (longlong *)plVar2[1];
        goto LAB_144adc25d;
      }
    }
    (*pcVar3)(plVar2,param_2,8);
  }
  else {
    *param_2 = *puVar1;
    plVar2 = (longlong *)param_1[1];
LAB_144adc25d:
    *plVar2 = *plVar2 + 8;
  }
  return param_1;
}



// FUNCTION 144adc2b0 FUN_144adc2b0 body=1766 status=ok
// SIG undefined FUN_144adc2b0(void)

longlong FUN_144adc2b0(longlong *param_1,uint param_2,int *param_3,undefined1 *param_4)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  byte bVar10;
  int iVar11;
  uint *puVar12;
  ulonglong uVar13;
  int iVar14;
  longlong *plVar15;
  ulonglong uVar16;
  uint uVar17;
  int iVar18;
  ulonglong uVar19;
  longlong lVar20;
  int iVar21;
  ulonglong uVar22;
  
  iVar18 = (int)param_1[1];
  iVar21 = *(int *)((longlong)param_1 + 0x34);
  if (iVar18 != iVar21) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      do {
        lVar9 = *param_1 + (longlong)iVar4 * 0x20;
        if (*(int *)(*param_1 + (longlong)iVar4 * 0x20) == *param_3) {
          if (lVar9 != 0) goto LAB_144adc4d7;
          break;
        }
        iVar4 = *(int *)(lVar9 + 0x18);
      } while (iVar4 != -1);
    }
  }
  if (iVar21 == 0) {
    *(int *)(param_1 + 1) = iVar18 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar18) {
      FUN_1447711aa(param_1,iVar18);
    }
    iVar21 = (int)param_1[5];
    if (iVar21 == 0) {
      iVar4 = -1;
    }
    else {
      iVar4 = iVar21 + 0x1e;
      if (-1 < iVar21 + -1) {
        iVar4 = iVar21 + -1;
      }
      iVar4 = iVar4 >> 5;
    }
    plVar8 = param_1 + 2;
    iVar11 = iVar21 + 1;
    iVar14 = iVar21 + 0x1f;
    if (-1 < iVar21) {
      iVar14 = iVar21;
    }
    if (iVar14 >> 5 == iVar4) {
      *(int *)(param_1 + 5) = iVar11;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar21) {
        iVar4 = iVar21;
        if (iVar21 + 0x20U < 0xa0) {
          iVar11 = 0x80;
        }
        else {
          uVar17 = iVar21 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar5 = 4;
            if (4 < uVar17) {
              uVar5 = uVar17;
            }
          }
          else {
            uVar5 = uVar17 + (uVar17 * 3 >> 3) + 0x10;
          }
          uVar13 = (ulonglong)(uVar5 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar6 = (uint)(uVar13 + 0xf);
              if (uVar5 < 0x1ffd) {
                uVar13 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar13 + 0xf >> 4]];
              }
              else {
                uVar16 = (ulonglong)(uVar6 & 0xfffffff0);
                if (uVar16 < 0x7ff1) {
                  bVar10 = (&DAT_14c841e00)[uVar6 >> 4];
                  uVar22 = 0x32;
                  if (0x32 < bVar10) {
                    uVar22 = (ulonglong)bVar10;
                  }
                  uVar19 = 0x32 - (ulonglong)bVar10;
                  do {
                    uVar13 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar19 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar19 & 0xffffffff] & 0xf) == 0) goto LAB_144adc82e;
                    lVar9 = uVar22 + 1 + uVar19;
                    uVar19 = uVar19 - 1;
                  } while (lVar9 != 0x33);
                }
                uVar13 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar13 = (ulonglong)DAT_14c841df8;
                }
                uVar13 = -uVar13 & (uVar16 + uVar13) - 1;
              }
            }
            else {
              uVar13 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar13,0);
              iVar4 = (int)param_1[5];
            }
          }
LAB_144adc82e:
          iVar7 = (int)(uVar13 >> 2);
          iVar11 = -0x20;
          if ((int)uVar17 <= iVar7) {
            iVar11 = iVar7 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar11;
        FUN_1446efbd8(plVar8,iVar4);
        iVar11 = (int)param_1[5] + 1;
      }
      iVar4 = iVar11 + 0x1f;
      if (-1 < iVar11) {
        iVar4 = iVar11;
      }
      *(int *)(param_1 + 5) = iVar11;
      if (iVar11 % 0x20 != 0) {
        plVar15 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar15 = plVar8;
        }
        bVar10 = -(char)(iVar11 % 0x20);
        *(uint *)((longlong)plVar15 + (longlong)(iVar4 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar15 + (longlong)(iVar4 >> 5) * 4) << (bVar10 & 0x1f)) >>
             (bVar10 & 0x1f);
      }
    }
    lVar9 = (longlong)iVar18;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[4];
    }
    bVar10 = (byte)iVar21 & 0x1f;
    puVar3 = (uint *)((longlong)plVar8 + (longlong)(iVar14 >> 5) * 4);
    *puVar3 = *puVar3 & (-2 << bVar10 | 0xfffffffeU >> 0x20 - bVar10);
  }
  else {
    iVar18 = (int)param_1[6];
    lVar9 = (longlong)iVar18;
    iVar4 = *(int *)(*param_1 + 4 + lVar9 * 0x20);
    *(int *)(param_1 + 6) = iVar4;
    *(int *)((longlong)param_1 + 0x34) = iVar21 + -1;
    if (iVar21 + -1 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x20) = 0xffffffff;
    }
  }
  puVar3 = (uint *)(param_1 + 2);
  uVar17 = 1;
  puVar12 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar12 = puVar3;
  }
  iVar21 = iVar18 + 0x1f;
  if (-1 < iVar18) {
    iVar21 = iVar18;
  }
  puVar12[iVar21 >> 5] = puVar12[iVar21 >> 5] | 1 << ((byte)iVar18 & 0x1f);
  lVar20 = *param_1;
  lVar9 = lVar9 * 0x20;
  piVar1 = (int *)(lVar20 + lVar9);
  *(int *)(lVar20 + lVar9) = *param_3;
  *(undefined1 *)(lVar20 + 8 + lVar9) = *param_4;
  *(undefined8 *)(lVar20 + 0x10 + lVar9) = *(undefined8 *)(param_4 + 8);
  *(undefined8 *)(param_4 + 8) = 0;
  *(undefined4 *)(lVar20 + 0x18 + lVar9) = 0xffffffff;
  uVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar5 != 1) {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      plVar8 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar8 = (longlong *)param_1[8];
      }
      iVar21 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
      if (iVar21 != -1) {
        do {
          piVar2 = (int *)(*param_1 + (longlong)iVar21 * 0x20);
          if (*(int *)(*param_1 + (longlong)iVar21 * 0x20) == *piVar1) {
            if (*(longlong *)(piVar2 + 4) != 0) {
              LOCK();
              puVar3 = (uint *)(*(longlong *)(piVar2 + 4) + 8);
              uVar17 = *puVar3;
              *puVar3 = *puVar3 - 1;
              UNLOCK();
              if ((uVar17 & 0x3fffffff) == 1) {
                FUN_144a54812();
              }
            }
            iVar21 = *piVar1;
            iVar4 = piVar1[1];
            iVar11 = piVar1[2];
            iVar14 = piVar1[3];
            *(undefined8 *)(piVar2 + 4) = *(undefined8 *)(piVar1 + 4);
            *piVar2 = iVar21;
            piVar2[1] = iVar4;
            piVar2[2] = iVar11;
            piVar2[3] = iVar14;
            FUN_14054dce8(param_1,iVar18);
            goto LAB_144adc4b7;
          }
          iVar21 = piVar2[6];
        } while (iVar21 != -1);
      }
    }
    if (3 < uVar5) {
      uVar13 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uVar17 = 1 << ((byte)lVar9 & 0x1f);
    }
  }
  if (((int)uVar5 < 1) || ((int)uVar17 <= (int)param_1[9])) {
    param_2 = (int)param_1[9] - 1U & param_2;
    piVar1[7] = param_2;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    piVar1[6] = *(int *)((longlong)plVar8 +
                        ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4) =
         iVar18;
    goto LAB_144adc4b7;
  }
  *(uint *)(param_1 + 9) = uVar17;
  plVar8 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar8,0,0,4);
    uVar17 = *(uint *)(param_1 + 9);
  }
  plVar15 = param_1 + 7;
  if (uVar17 == 1) {
    if (*plVar8 != 0) {
      FUN_1446efa72(plVar8,0,0,4);
    }
LAB_144adc5ba:
    uVar5 = 0;
    do {
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = plVar15;
      }
      *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar5) * 4) =
           0xffffffff;
      uVar5 = uVar5 + 1;
    } while (uVar17 != uVar5);
  }
  else {
    if (uVar17 == 0) goto LAB_144adc4b7;
    FUN_1446efa72(plVar8,0,uVar17,4);
    if (0 < (int)uVar17) goto LAB_144adc5ba;
  }
  iVar21 = (int)param_1[5];
  if (iVar21 == 0) {
    uVar13 = 0;
    uVar16 = 1;
    iVar4 = 0;
    iVar11 = 0;
  }
  else {
    puVar12 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar12 = puVar3;
    }
    uVar17 = *puVar12;
    if (uVar17 == 0) {
      iVar4 = iVar21 + 0x1e;
      if (-1 < iVar21 + -1) {
        iVar4 = iVar21 + -1;
      }
      uVar13 = 0;
      uVar16 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar16 = uVar13;
      }
      iVar11 = 0;
      do {
        if (uVar16 == uVar13) goto LAB_144adc4b7;
        iVar11 = iVar11 + 0x20;
        uVar17 = puVar12[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar17 == 0);
    }
    else {
      uVar13 = 0;
      iVar11 = 0;
    }
    uVar16 = (ulonglong)(-uVar17 & uVar17);
    uVar22 = uVar16 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar4 = (iVar11 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar21 <= iVar4) {
      iVar4 = iVar21;
    }
  }
  if (iVar4 < iVar21) {
    uVar17 = 0xffffffff;
    do {
      lVar9 = *param_1;
      lVar20 = (longlong)iVar4 * 0x20;
      uVar22 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar9 + lVar20);
      iVar21 = (int)uVar22;
      *(int *)(lVar9 + 0x1c + lVar20) = iVar21;
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = plVar15;
      }
      *(undefined4 *)(lVar9 + 0x18 + lVar20) =
           *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar22) * 4);
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = plVar15;
      }
      *(int *)((longlong)plVar8 + ((longlong)iVar21 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
      uVar17 = ~(uint)uVar16 & uVar17;
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puVar3;
      }
      iVar21 = (int)param_1[5];
      iVar4 = (int)uVar13;
      lVar9 = (longlong)iVar4;
      uVar5 = puVar12[lVar9] & uVar17;
      if (uVar5 == 0) {
        iVar14 = iVar21 + 0x1e;
        if (-1 < iVar21 + -1) {
          iVar14 = iVar21 + -1;
        }
        iVar14 = iVar14 >> 5;
        iVar7 = iVar14;
        if (iVar14 < iVar4) {
          iVar7 = iVar4;
        }
        if (iVar14 <= iVar4) break;
        lVar20 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar5 = puVar12[lVar9 + lVar20 + 1];
          if (uVar5 != 0) break;
          lVar20 = lVar20 + 1;
          if (iVar7 - lVar9 == lVar20) goto LAB_144adc4b7;
        }
        uVar13 = (ulonglong)(iVar4 + (int)lVar20 + 1);
        uVar17 = 0xffffffff;
      }
      uVar16 = (ulonglong)(-uVar5 & uVar5);
      uVar22 = uVar16 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar4 = (iVar11 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    } while (iVar4 < iVar21);
  }
LAB_144adc4b7:
  lVar9 = *param_1 + (longlong)iVar18 * 0x20;
LAB_144adc4d7:
  return lVar9 + 8;
}



// FUNCTION 144adc996 FUN_144adc996 body=1469 status=ok
// SIG undefined FUN_144adc996(void)

void FUN_144adc996(ulonglong *param_1,undefined8 param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5)

{
  ushort uVar1;
  uint uVar2;
  undefined2 *puVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulonglong *puVar15;
  undefined8 *puVar16;
  ulonglong *puVar17;
  void *_Dst;
  void *_Dst_00;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong *plVar21;
  undefined2 *puVar22;
  ulonglong *puVar23;
  ulonglong _Size;
  undefined2 uVar24;
  bool bVar25;
  undefined1 auStack_c8 [46];
  undefined2 local_9a;
  undefined2 local_98;
  ushort local_96;
  undefined4 local_94;
  ulonglong local_90;
  int local_84;
  undefined2 *local_80;
  undefined8 local_78;
  longlong local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar21 = (longlong *)param_1[0x10];
  if (plVar21 != (longlong *)0x0) goto LAB_144adc9d9;
  puVar15 = (ulonglong *)param_1[1];
  plVar21 = (longlong *)(*param_1 + 0xf & 0xfffffffffffffff0);
  puVar17 = (ulonglong *)(plVar21 + 9);
  if (puVar15 < puVar17) {
    FUN_140023dd8(param_1,0x58);
    puVar15 = (ulonglong *)param_1[1];
    plVar21 = (longlong *)(*param_1 + 0xf & 0xfffffffffffffff0);
    puVar17 = (ulonglong *)(plVar21 + 9);
  }
  *param_1 = (ulonglong)puVar17;
  puVar23 = (ulonglong *)((longlong)puVar17 + 0xfU & 0xfffffffffffffff0);
  puVar17 = puVar23 + 0x16;
  if (puVar15 < puVar17) {
    FUN_140023dd8(param_1,0xc0);
    puVar23 = (ulonglong *)(*param_1 + 0xf & 0xfffffffffffffff0);
    puVar17 = puVar23 + 0x16;
  }
  *param_1 = (ulonglong)puVar17;
  *puVar23 = param_1[0x11];
  puVar23[1] = (ulonglong)param_1;
  puVar23[2] = 0;
  puVar23[3] = 0;
  puVar23[4] = 0;
  puVar23[5] = 0;
  *(undefined8 *)((longlong)puVar23 + 0x2e) = 0;
  if (DAT_14c872d30 == 0) {
    FUN_145bdc178();
    bVar25 = DAT_14c872d30 != 0;
    puVar23[7] = 0;
    puVar23[8] = 0;
    puVar23[9] = 0;
    puVar23[10] = 0;
    *(undefined8 *)((longlong)puVar23 + 0x56) = 0;
    if (bVar25) goto LAB_144adccda;
    FUN_145bdc178();
    bVar25 = DAT_14c872d30 != 0;
    puVar23[0xc] = 0;
    puVar23[0xd] = 0;
    puVar23[0xe] = 0;
    puVar23[0xf] = 0;
    *(undefined8 *)((longlong)puVar23 + 0x7e) = 0;
    if (bVar25) goto LAB_144adcced;
    FUN_145bdc178();
    bVar25 = DAT_14c872d30 == 0;
    puVar23[0x11] = 0;
    puVar23[0x12] = 0;
    puVar23[0x13] = 0;
    puVar23[0x14] = 0;
    *(undefined8 *)((longlong)puVar23 + 0xa6) = 0;
    if (bVar25) {
      FUN_145bdc178();
    }
  }
  else {
    puVar23[9] = 0;
    puVar23[10] = 0;
    puVar23[7] = 0;
    puVar23[8] = 0;
    *(undefined8 *)((longlong)puVar23 + 0x56) = 0;
LAB_144adccda:
    puVar23[0xe] = 0;
    puVar23[0xf] = 0;
    puVar23[0xc] = 0;
    puVar23[0xd] = 0;
    *(undefined8 *)((longlong)puVar23 + 0x7e) = 0;
LAB_144adcced:
    puVar23[0x13] = 0;
    puVar23[0x14] = 0;
    puVar23[0x11] = 0;
    puVar23[0x12] = 0;
    *(undefined8 *)((longlong)puVar23 + 0xa6) = 0;
  }
  param_1[0x11] = (ulonglong)puVar23;
  *plVar21 = (longlong)puVar23;
  plVar21[1] = 0;
  *(undefined4 *)(plVar21 + 2) = 0;
  plVar21[3] = 0;
  *(undefined4 *)(plVar21 + 4) = 0;
  plVar21[5] = 0;
  *(undefined4 *)(plVar21 + 6) = 0;
  plVar21[7] = 0;
  *(undefined4 *)(plVar21 + 8) = 0;
  param_1[0x10] = (ulonglong)plVar21;
LAB_144adc9d9:
  iVar11 = (int)plVar21[6] + (int)plVar21[4];
  iVar12 = iVar11 + (int)plVar21[8];
  if (iVar12 != 0 && SCARRY4(iVar11,(int)plVar21[8]) == iVar12 < 0) {
    plVar21[1] = 0;
    *(undefined4 *)(plVar21 + 2) = 0;
    plVar21[3] = 0;
    *(undefined4 *)(plVar21 + 4) = 0;
    plVar21[5] = 0;
    *(undefined4 *)(plVar21 + 6) = 0;
    plVar21[7] = 0;
    *(undefined4 *)(plVar21 + 8) = 0;
    plVar21 = (longlong *)param_1[0x10];
  }
  puVar3 = (undefined2 *)*param_3;
  puVar22 = (undefined2 *)(((longlong)puVar3 >> 0x18) + (longlong)param_3);
  if (((ulonglong)puVar3 & 1) == 0) {
    puVar22 = puVar3;
  }
  local_68 = *(undefined4 *)(param_4 + 0x3c);
  if ((longlong)*(int *)(param_3 + 1) != 0) {
    local_80 = puVar22 + (longlong)*(int *)(param_3 + 1) * 4;
    local_94 = *(undefined4 *)(param_4 + 0x3c);
    local_78 = param_2;
    do {
      uVar1 = puVar22[2];
      local_96 = puVar22[3];
      _Size = (ulonglong)local_96;
      local_9a = *puVar22;
      local_98 = puVar22[1];
      uVar2 = *(uint *)(plVar21 + 2);
      local_90 = (ulonglong)uVar2;
      local_84 = uVar2 + local_96;
      lVar19 = *plVar21;
      puVar17 = (ulonglong *)(lVar19 + 0x10);
      _Dst_00 = *(void **)(lVar19 + 0x10);
      uVar6 = *(ulonglong *)(lVar19 + 0x18);
      uVar20 = (longlong)_Dst_00 + _Size;
      if (uVar2 == 0) {
        if (uVar6 < uVar20) {
          FUN_140023dd8(puVar17,local_96 + 1);
          _Dst_00 = (void *)*puVar17;
          uVar20 = (longlong)_Dst_00 + _Size;
        }
        *puVar17 = uVar20;
        _Dst = _Dst_00;
      }
      else if (uVar6 < uVar20) {
        lVar19 = (longlong)local_84;
        uVar20 = (longlong)_Dst_00 + lVar19;
        _Dst = _Dst_00;
        if (uVar6 < uVar20) {
          FUN_140023dd8(puVar17,local_84 + 1);
          _Dst = (void *)*puVar17;
          uVar20 = lVar19 + (longlong)_Dst;
        }
        *puVar17 = uVar20;
        memcpy(_Dst,(void *)plVar21[1],(longlong)(int)plVar21[2]);
        _Dst_00 = (void *)((longlong)(int)plVar21[2] + (longlong)_Dst);
      }
      else {
        _Dst = (void *)plVar21[1];
        *puVar17 = uVar20;
      }
      memcpy(_Dst_00,(void *)((ulonglong)uVar1 + param_5),_Size);
      plVar21[1] = (longlong)_Dst;
      *(int *)(plVar21 + 2) = local_84;
      lVar18 = *plVar21;
      puVar17 = (ulonglong *)(lVar18 + 0x38);
      lVar19 = (longlong)(int)plVar21[4] + 1;
      puVar14 = *(undefined8 **)(lVar18 + 0x38);
      if ((longlong)(int)plVar21[4] == 0) {
        puVar14 = (undefined8 *)((longlong)puVar14 + 1U & 0xfffffffffffffffe);
        puVar13 = puVar14 + 1;
        puVar16 = puVar14;
        if (*(undefined8 **)(lVar18 + 0x40) < puVar13) {
          FUN_140023dd8(puVar17,10);
          puVar14 = (undefined8 *)(*puVar17 + 1 & 0xfffffffffffffffe);
          puVar13 = puVar14 + 1;
          puVar16 = puVar14;
        }
LAB_144adcbcf:
        *puVar17 = (ulonglong)puVar13;
LAB_144adcbd7:
        uVar24 = (undefined2)local_90;
      }
      else {
        puVar13 = puVar14 + 1;
        if (puVar13 <= *(undefined8 **)(lVar18 + 0x40)) {
          puVar16 = (undefined8 *)plVar21[3];
          goto LAB_144adcbcf;
        }
        puVar16 = (undefined8 *)((longlong)puVar14 + 1U & 0xfffffffffffffffe);
        puVar14 = puVar16 + lVar19;
        if (*(undefined8 **)(lVar18 + 0x40) < puVar14) {
          FUN_140023dd8(puVar17);
          puVar16 = (undefined8 *)(*puVar17 + 1 & 0xfffffffffffffffe);
          puVar14 = puVar16 + lVar19;
        }
        *puVar17 = (ulonglong)puVar14;
        puVar14 = puVar16;
        if ((int)plVar21[4] < 1) goto LAB_144adcbd7;
        lVar18 = 0;
        uVar24 = (undefined2)local_90;
        do {
          *puVar14 = *(undefined8 *)(plVar21[3] + lVar18 * 8);
          lVar18 = lVar18 + 1;
          puVar14 = puVar14 + 1;
        } while (lVar18 < (int)plVar21[4]);
      }
      *(undefined2 *)puVar14 = local_9a;
      *(undefined2 *)((longlong)puVar14 + 2) = local_98;
      *(undefined2 *)((longlong)puVar14 + 4) = uVar24;
      *(ushort *)((longlong)puVar14 + 6) = local_96;
      plVar21[3] = (longlong)puVar16;
      *(int *)(plVar21 + 4) = (int)lVar19;
      puVar22 = puVar22 + 4;
      param_2 = local_78;
      local_68 = local_94;
    } while (puVar22 != local_80);
  }
  local_70 = param_5;
  FUN_140023e89(plVar21,param_3,&local_70,CONCAT71((uint7)(uint3)((uint)local_68 >> 8),1));
  iVar11 = (int)plVar21[6] + (int)plVar21[4];
  iVar12 = iVar11 + (int)plVar21[8];
  if (iVar12 != 0 && SCARRY4(iVar11,(int)plVar21[8]) == iVar12 < 0) {
    puVar13 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar14 = puVar13 + 0xb;
    if ((undefined8 *)param_1[1] < puVar14) {
      FUN_140023dd8(param_1,0x60);
      puVar13 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar14 = puVar13 + 0xb;
    }
    *param_1 = (ulonglong)puVar14;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar13;
    param_1[6] = (ulonglong)(puVar13 + 1);
    lVar19 = plVar21[7];
    lVar7 = plVar21[8];
    lVar18 = plVar21[5];
    lVar8 = plVar21[6];
    lVar4 = plVar21[3];
    lVar9 = plVar21[4];
    lVar5 = plVar21[1];
    lVar10 = plVar21[2];
    puVar13[1] = 0;
    *puVar13 = &PTR_FUN_14a1e7fa8;
    puVar13[2] = param_2;
    puVar13[3] = lVar5;
    *(int *)(puVar13 + 4) = (int)lVar10;
    puVar13[5] = lVar4;
    *(int *)(puVar13 + 6) = (int)lVar9;
    puVar13[7] = lVar18;
    *(int *)(puVar13 + 8) = (int)lVar8;
    puVar13[9] = lVar19;
    *(int *)(puVar13 + 10) = (int)lVar7;
    plVar21[1] = 0;
    *(undefined4 *)(plVar21 + 2) = 0;
    plVar21[3] = 0;
    *(undefined4 *)(plVar21 + 4) = 0;
    plVar21[5] = 0;
    *(undefined4 *)(plVar21 + 6) = 0;
    plVar21[7] = 0;
    *(undefined4 *)(plVar21 + 8) = 0;
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144adcf54 FUN_144adcf54 body=351 status=ok
// SIG undefined FUN_144adcf54(void)

void FUN_144adcf54(uint *param_1,ulonglong *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_68 [40];
  uint local_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  uint local_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *param_1;
  if ((int)uVar1 < 0) {
    local_30 = uVar1 >> 4 & 0x7ffffff;
    uStack_38 = *(undefined8 *)(param_1 + 1);
    local_40 = uVar1 & 0xf;
    if (*(char *)((longlong)param_2 + 100) == '\x01') {
      FUN_144b1d2d2(&local_40,param_2);
    }
    else {
      puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar4 = puVar3 + 5;
      if ((undefined8 *)param_2[1] < puVar4) {
        FUN_140023dd8(param_2,0x30);
        puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar4 = puVar3 + 5;
      }
      *param_2 = (ulonglong)puVar4;
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      *(undefined8 **)param_2[6] = puVar3;
      param_2[6] = (ulonglong)(puVar3 + 1);
      puVar3[1] = 0;
      *puVar3 = &PTR_FUN_14a399cc8;
      *(uint *)(puVar3 + 2) = local_40;
      *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_3c;
      *(undefined4 *)(puVar3 + 3) = (undefined4)uStack_38;
      *(undefined4 *)((longlong)puVar3 + 0x1c) = uStack_38._4_4_;
      puVar3[4] = CONCAT44(uStack_2c,local_30);
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 1);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 5;
    if ((undefined8 *)param_2[1] < puVar4) {
      FUN_140023dd8(param_2,0x30);
      puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar4 = puVar3 + 5;
    }
    *param_2 = (ulonglong)puVar4;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar3;
    param_2[6] = (ulonglong)(puVar3 + 1);
    puVar3[1] = 0;
    *puVar3 = &PTR_LAB_14a1fb5a8;
    *(uint *)(puVar3 + 2) = uVar1 & 0xf;
    puVar3[3] = uVar2;
    *(uint *)(puVar3 + 4) = uVar1 >> 4;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144add0b4 FUN_144add0b4 body=40 status=ok
// SIG undefined FUN_144add0b4(void)

undefined8 FUN_144add0b4(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144add0dc FUN_144add0dc body=2303 status=ok
// SIG undefined FUN_144add0dc(void)

void FUN_144add0dc(ulonglong *param_1,longlong *param_2,longlong param_3,longlong param_4,
                  undefined4 *param_5)

{
  byte bVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined2 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  void *pvVar19;
  ulonglong *puVar20;
  undefined8 *puVar21;
  ulonglong *puVar22;
  void *pvVar23;
  longlong lVar24;
  longlong lVar25;
  undefined8 *puVar26;
  ulonglong uVar27;
  ulonglong _Size;
  undefined2 *puVar28;
  ulonglong *puVar29;
  size_t _Size_00;
  ulonglong uVar30;
  void *_Dst;
  longlong *plVar31;
  bool bVar32;
  undefined1 auStack_d8 [42];
  undefined2 local_ae;
  undefined2 local_ac;
  ushort local_aa;
  longlong local_a8;
  int local_a0;
  undefined4 local_9c;
  undefined4 *local_98;
  ulonglong local_90;
  undefined2 *local_88;
  ulonglong local_80;
  longlong *local_78;
  longlong local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a8 = param_4;
  if (*param_2 == 0) {
    local_80 = 0;
  }
  else {
    lVar24 = (longlong)*(int *)(*param_2 + 0xd4);
    local_80 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar24 * 8);
    if (local_80 == 0) {
      local_80 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar24,1);
    }
  }
  uVar16 = FUN_140029432(param_1,local_80,0);
  param_1[0x37] = local_80;
  puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar18 = puVar17 + 3;
  if ((undefined8 *)param_1[1] < puVar18) {
    FUN_140023dd8(param_1,0x20);
    puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar18 = puVar17 + 3;
  }
  *param_1 = (ulonglong)puVar18;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar17;
  param_1[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a37d340;
  puVar17[2] = uVar16;
  puVar18 = (undefined8 *)*param_2;
  plVar31 = (longlong *)param_1[0x10];
  if (plVar31 != (longlong *)0x0) goto LAB_144add1c3;
  puVar20 = (ulonglong *)param_1[1];
  plVar31 = (longlong *)(*param_1 + 0xf & 0xfffffffffffffff0);
  puVar22 = (ulonglong *)(plVar31 + 9);
  if (puVar20 < puVar22) {
    FUN_140023dd8(param_1,0x58);
    puVar20 = (ulonglong *)param_1[1];
    plVar31 = (longlong *)(*param_1 + 0xf & 0xfffffffffffffff0);
    puVar22 = (ulonglong *)(plVar31 + 9);
  }
  *param_1 = (ulonglong)puVar22;
  puVar29 = (ulonglong *)((longlong)puVar22 + 0xfU & 0xfffffffffffffff0);
  puVar22 = puVar29 + 0x16;
  if (puVar20 < puVar22) {
    FUN_140023dd8(param_1,0xc0);
    puVar29 = (ulonglong *)(*param_1 + 0xf & 0xfffffffffffffff0);
    puVar22 = puVar29 + 0x16;
  }
  *param_1 = (ulonglong)puVar22;
  *puVar29 = param_1[0x11];
  puVar29[1] = (ulonglong)param_1;
  puVar29[2] = 0;
  puVar29[3] = 0;
  puVar29[4] = 0;
  puVar29[5] = 0;
  *(undefined8 *)((longlong)puVar29 + 0x2e) = 0;
  if (DAT_14c872d30 == 0) {
    FUN_145bdc178();
    bVar32 = DAT_14c872d30 != 0;
    puVar29[7] = 0;
    puVar29[8] = 0;
    puVar29[9] = 0;
    puVar29[10] = 0;
    *(undefined8 *)((longlong)puVar29 + 0x56) = 0;
    if (bVar32) goto LAB_144add6d1;
    FUN_145bdc178();
    bVar32 = DAT_14c872d30 != 0;
    puVar29[0xc] = 0;
    puVar29[0xd] = 0;
    puVar29[0xe] = 0;
    puVar29[0xf] = 0;
    *(undefined8 *)((longlong)puVar29 + 0x7e) = 0;
    if (bVar32) goto LAB_144add6e4;
    FUN_145bdc178();
    bVar32 = DAT_14c872d30 == 0;
    puVar29[0x11] = 0;
    puVar29[0x12] = 0;
    puVar29[0x13] = 0;
    puVar29[0x14] = 0;
    *(undefined8 *)((longlong)puVar29 + 0xa6) = 0;
    if (bVar32) {
      FUN_145bdc178();
    }
  }
  else {
    puVar29[9] = 0;
    puVar29[10] = 0;
    puVar29[7] = 0;
    puVar29[8] = 0;
    *(undefined8 *)((longlong)puVar29 + 0x56) = 0;
LAB_144add6d1:
    puVar29[0xe] = 0;
    puVar29[0xf] = 0;
    puVar29[0xc] = 0;
    puVar29[0xd] = 0;
    *(undefined8 *)((longlong)puVar29 + 0x7e) = 0;
LAB_144add6e4:
    puVar29[0x13] = 0;
    puVar29[0x14] = 0;
    puVar29[0x11] = 0;
    puVar29[0x12] = 0;
    *(undefined8 *)((longlong)puVar29 + 0xa6) = 0;
  }
  param_1[0x11] = (ulonglong)puVar29;
  *plVar31 = (longlong)puVar29;
  plVar31[1] = 0;
  *(undefined4 *)(plVar31 + 2) = 0;
  plVar31[3] = 0;
  *(undefined4 *)(plVar31 + 4) = 0;
  plVar31[5] = 0;
  *(undefined4 *)(plVar31 + 6) = 0;
  plVar31[7] = 0;
  *(undefined4 *)(plVar31 + 8) = 0;
  param_1[0x10] = (ulonglong)plVar31;
LAB_144add1c3:
  iVar13 = (int)plVar31[6] + (int)plVar31[4];
  iVar14 = iVar13 + (int)plVar31[8];
  if (iVar14 != 0 && SCARRY4(iVar13,(int)plVar31[8]) == iVar14 < 0) {
    plVar31[1] = 0;
    *(undefined4 *)(plVar31 + 2) = 0;
    plVar31[3] = 0;
    *(undefined4 *)(plVar31 + 4) = 0;
    plVar31[5] = 0;
    *(undefined4 *)(plVar31 + 6) = 0;
    plVar31[7] = 0;
    *(undefined4 *)(plVar31 + 8) = 0;
    plVar31 = (longlong *)param_1[0x10];
  }
  puVar6 = (undefined2 *)*puVar18;
  puVar28 = (undefined2 *)(((longlong)puVar6 >> 0x18) + (longlong)puVar18);
  if (((ulonglong)puVar6 & 1) == 0) {
    puVar28 = puVar6;
  }
  local_68 = *(undefined4 *)(param_3 + 0x3c);
  local_78 = param_2;
  if ((longlong)*(int *)(puVar18 + 1) != 0) {
    local_88 = puVar28 + (longlong)*(int *)(puVar18 + 1) * 4;
    local_98 = param_5;
    local_9c = *(undefined4 *)(param_3 + 0x3c);
    do {
      uVar2 = puVar28[2];
      local_aa = puVar28[3];
      _Size = (ulonglong)local_aa;
      local_ae = *puVar28;
      local_ac = puVar28[1];
      uVar15 = *(uint *)(plVar31 + 2);
      local_90 = (ulonglong)uVar15;
      local_a0 = uVar15 + local_aa;
      lVar24 = *plVar31;
      puVar22 = (ulonglong *)(lVar24 + 0x10);
      pvVar23 = *(void **)(lVar24 + 0x10);
      uVar30 = *(ulonglong *)(lVar24 + 0x18);
      uVar27 = (longlong)pvVar23 + _Size;
      if (uVar15 == 0) {
        if (uVar30 < uVar27) {
          FUN_140023dd8(puVar22,local_aa + 1);
          pvVar23 = (void *)*puVar22;
          uVar27 = (longlong)pvVar23 + _Size;
        }
        *puVar22 = uVar27;
        pvVar19 = pvVar23;
      }
      else if (uVar30 < uVar27) {
        lVar24 = (longlong)local_a0;
        uVar27 = (longlong)pvVar23 + lVar24;
        pvVar19 = pvVar23;
        if (uVar30 < uVar27) {
          FUN_140023dd8(puVar22,local_a0 + 1);
          pvVar19 = (void *)*puVar22;
          uVar27 = lVar24 + (longlong)pvVar19;
        }
        *puVar22 = uVar27;
        memcpy(pvVar19,(void *)plVar31[1],(longlong)(int)plVar31[2]);
        pvVar23 = (void *)((longlong)(int)plVar31[2] + (longlong)pvVar19);
      }
      else {
        pvVar19 = (void *)plVar31[1];
        *puVar22 = uVar27;
      }
      memcpy(pvVar23,(void *)((ulonglong)uVar2 + local_a8),_Size);
      param_5 = local_98;
      plVar31[1] = (longlong)pvVar19;
      *(int *)(plVar31 + 2) = local_a0;
      lVar25 = *plVar31;
      puVar22 = (ulonglong *)(lVar25 + 0x38);
      lVar24 = (longlong)(int)plVar31[4] + 1;
      puVar17 = *(undefined8 **)(lVar25 + 0x38);
      if ((longlong)(int)plVar31[4] == 0) {
        puVar17 = (undefined8 *)((longlong)puVar17 + 1U & 0xfffffffffffffffe);
        puVar26 = puVar17 + 1;
        puVar21 = puVar17;
        if (*(undefined8 **)(lVar25 + 0x40) < puVar26) {
          FUN_140023dd8(puVar22,10);
          puVar17 = (undefined8 *)(*puVar22 + 1 & 0xfffffffffffffffe);
          puVar26 = puVar17 + 1;
          puVar21 = puVar17;
        }
LAB_144add42a:
        *puVar22 = (ulonglong)puVar26;
      }
      else {
        puVar26 = puVar17 + 1;
        if (puVar26 <= *(undefined8 **)(lVar25 + 0x40)) {
          puVar21 = (undefined8 *)plVar31[3];
          goto LAB_144add42a;
        }
        puVar21 = (undefined8 *)((longlong)puVar17 + 1U & 0xfffffffffffffffe);
        puVar17 = puVar21 + lVar24;
        if (*(undefined8 **)(lVar25 + 0x40) < puVar17) {
          FUN_140023dd8(puVar22);
          puVar21 = (undefined8 *)(*puVar22 + 1 & 0xfffffffffffffffe);
          puVar17 = puVar21 + lVar24;
        }
        *puVar22 = (ulonglong)puVar17;
        puVar17 = puVar21;
        if (0 < (int)plVar31[4]) {
          lVar25 = 0;
          do {
            *puVar17 = *(undefined8 *)(plVar31[3] + lVar25 * 8);
            lVar25 = lVar25 + 1;
            puVar17 = puVar17 + 1;
          } while (lVar25 < (int)plVar31[4]);
        }
      }
      *(undefined2 *)puVar17 = local_ae;
      *(undefined2 *)((longlong)puVar17 + 2) = local_ac;
      *(short *)((longlong)puVar17 + 4) = (short)local_90;
      *(ushort *)((longlong)puVar17 + 6) = local_aa;
      plVar31[3] = (longlong)puVar21;
      *(int *)(plVar31 + 4) = (int)lVar24;
      puVar28 = puVar28 + 4;
      local_68 = local_9c;
    } while (puVar28 != local_88);
  }
  local_70 = local_a8;
  FUN_140023e89(plVar31,puVar18,&local_70,1);
  iVar13 = (int)plVar31[6] + (int)plVar31[4];
  iVar14 = iVar13 + (int)plVar31[8];
  if (iVar14 != 0 && SCARRY4(iVar13,(int)plVar31[8]) == iVar14 < 0) {
    puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar18 = puVar17 + 0xb;
    if ((undefined8 *)param_1[1] < puVar18) {
      FUN_140023dd8(param_1,0x60);
      puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar18 = puVar17 + 0xb;
    }
    *param_1 = (ulonglong)puVar18;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar17;
    param_1[6] = (ulonglong)(puVar17 + 1);
    lVar24 = plVar31[7];
    lVar9 = plVar31[8];
    lVar25 = plVar31[5];
    lVar10 = plVar31[6];
    lVar7 = plVar31[3];
    lVar11 = plVar31[4];
    lVar8 = plVar31[1];
    lVar12 = plVar31[2];
    puVar17[1] = 0;
    *puVar17 = &PTR_FUN_14a1e7fa8;
    puVar17[2] = local_80;
    puVar17[3] = lVar8;
    *(int *)(puVar17 + 4) = (int)lVar12;
    puVar17[5] = lVar7;
    *(int *)(puVar17 + 6) = (int)lVar11;
    puVar17[7] = lVar25;
    *(int *)(puVar17 + 8) = (int)lVar10;
    puVar17[9] = lVar24;
    *(int *)(puVar17 + 10) = (int)lVar9;
    plVar31[1] = 0;
    *(undefined4 *)(plVar31 + 2) = 0;
    plVar31[3] = 0;
    *(undefined4 *)(plVar31 + 4) = 0;
    plVar31[5] = 0;
    *(undefined4 *)(plVar31 + 6) = 0;
    plVar31[7] = 0;
    *(undefined4 *)(plVar31 + 8) = 0;
  }
  uVar3 = param_5[2];
  uVar4 = *param_5;
  uVar5 = param_5[1];
  puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar18 = puVar17 + 4;
  if ((undefined8 *)param_1[1] < puVar18) {
    FUN_140023dd8(param_1,0x28);
    puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar18 = puVar17 + 4;
  }
  plVar31 = local_78;
  *param_1 = (ulonglong)puVar18;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar17;
  param_1[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar17 + 2) = uVar4;
  *(undefined4 *)((longlong)puVar17 + 0x14) = uVar5;
  *(undefined4 *)(puVar17 + 3) = uVar3;
  if (*local_78 == 0) {
    lVar24 = 0;
  }
  else {
    lVar25 = (longlong)*(int *)(*local_78 + 0xd4);
    lVar24 = *(longlong *)(*(longlong *)(*(longlong *)(local_78[1] + 8) + 0x50) + lVar25 * 8);
    if (lVar24 == 0) {
      lVar24 = FUN_1400bafc2(*(longlong *)(local_78[1] + 8),lVar25,1);
    }
  }
  local_a8 = lVar24;
  if (DAT_14ca8507b == '\x01') {
    puVar22 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar22,0);
    }
    lVar24 = *plVar31;
    uVar27 = *(ulonglong *)(lVar24 + 0x10);
    uVar30 = lVar24 + 0x10 + ((longlong)uVar27 >> 0x18);
    if ((uVar27 & 1) == 0) {
      uVar30 = uVar27;
    }
    iVar13 = *(int *)(lVar24 + 0x18);
    if ((longlong)iVar13 != 0) {
      lVar24 = 0;
      do {
        uVar15 = (uint)*(byte *)(uVar30 + 3 + lVar24);
        if ((uVar15 < 0x13) && ((0x44080U >> (uVar15 & 0x1f) & 1) != 0)) {
          bVar1 = *(byte *)(uVar30 + 2 + lVar24);
          iVar14 = (int)param_1[0x13];
          *(uint *)(param_1 + 0x13) = iVar14 + 1U;
          if (*(uint *)((longlong)param_1 + 0x9c) < iVar14 + 1U) {
            FUN_1447477d8(puVar22,iVar14);
          }
          uVar27 = *puVar22;
          *(ushort *)(uVar27 + (longlong)iVar14 * 4) = (ushort)bVar1;
          *(undefined1 *)(uVar27 + 2 + (longlong)iVar14 * 4) = 1;
        }
        lVar24 = lVar24 + 4;
      } while ((longlong)iVar13 * 4 != lVar24);
    }
    uVar27 = param_1[0x13];
    lVar24 = (longlong)(int)uVar27;
    if (0 < lVar24) {
      if (DAT_14ca8507b == '\x01') {
        pvVar23 = (void *)*puVar22;
        puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar18 = puVar17 + 5;
        if ((undefined8 *)param_1[1] < puVar18) {
          FUN_140023dd8(param_1,0x30);
          puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar18 = puVar17 + 5;
        }
        *param_1 = (ulonglong)puVar18;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar17;
        param_1[6] = (ulonglong)(puVar17 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar19 = (void *)((longlong)_Dst + lVar24 * 4);
        _Size_00 = lVar24 * 4;
        if ((void *)param_1[1] < pvVar19) {
          FUN_140023dd8(param_1,(uint)_Size_00 | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar19 = (void *)((longlong)_Dst + _Size_00);
        }
        *param_1 = (ulonglong)pvVar19;
        memcpy(_Dst,pvVar23,_Size_00);
        puVar17[1] = 0;
        *puVar17 = &PTR_FUN_14a1fbc38;
        puVar17[2] = local_a8;
        puVar17[3] = _Dst;
        *(int *)(puVar17 + 4) = (int)uVar27;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_d8);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144adda01 FUN_144adda01 body=381 status=ok
// SIG undefined FUN_144adda01(void)

longlong * FUN_144adda01(longlong *param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined2 *local_40;
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar1 = *(undefined2 **)param_1[1];
  if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      if (*(code **)(*param_1 + 0x170) == FUN_144a2420a) {
        lVar3 = param_1[0x13];
        iVar4 = *(int *)(lVar3 + 8);
        lVar5 = (param_1[0x12] - (longlong)iVar4) + 2;
        if (0 < lVar5) {
          if (0x7ffffffc < param_1[0x12]) {
            FUN_1400021e4(param_1 + 0x14,&local_38);
            local_40 = local_38;
            if (local_30 == 0) {
              local_40 = &DAT_149dfb77a;
            }
            local_48 = 0x7fffffff;
            FUN_140033559("Runtime\\Core\\Public\\Serialization/MemoryWriter.h",0x31,
                          L"TMemoryWriter with IndexSize=%d does not support data larger than %d bytes. Archive name: %s."
                          ,4);
            if (local_38 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            lVar3 = param_1[0x13];
            iVar4 = *(int *)(lVar3 + 8);
          }
          uVar2 = (uint)lVar5;
          *(uint *)(lVar3 + 8) = iVar4 + uVar2;
          if ((uint)(*(int *)(lVar3 + 0xc) - iVar4) < uVar2) {
            FUN_1447403be();
          }
        }
        *(undefined2 *)(*(longlong *)param_1[0x13] + (longlong)(int)param_1[0x12]) = *param_2;
        param_1[0x12] = param_1[0x12] + 2;
      }
      else {
        (**(code **)(*param_1 + 0x170))(param_1,param_2,2);
      }
    }
    else {
      thunk_FUN_1457251a8(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 144addb80 FUN_144addb80 body=328 status=ok
// SIG undefined FUN_144addb80(void)

void FUN_144addb80(longlong param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  
  if (param_2 == 0) {
    iVar8 = 0;
  }
  else {
    uVar5 = (longlong)param_2 * 0x38;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar7 = 0x32;
            if (0x32 < bVar3) {
              uVar7 = (ulonglong)bVar3;
            }
            uVar9 = 0x32 - (ulonglong)bVar3;
            do {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_144addbea;
              lVar2 = uVar7 + 1 + uVar9;
              uVar9 = uVar9 - 1;
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
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
      }
    }
LAB_144addbea:
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar4 * ZEXT816(0x2492492492492493),8);
    iVar8 = 0x7fffffff;
    if (param_2 <= iVar6) {
      iVar8 = iVar6;
    }
  }
  if (iVar8 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar8;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar8,0x38,8);
  }
  return;
}



// FUNCTION 144addcc8 FUN_144addcc8 body=104 status=ok
// SIG undefined FUN_144addcc8(void)

ulonglong FUN_144addcc8(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if ((uVar1 != *param_2) || (uVar4 = 1, uVar2 != param_2[1])) {
    if (((uVar2 != 0) &&
        (((-1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)) &&
         (lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar3 != 0)))) &&
       ((*(uint *)(lVar3 + 0x10) == uVar2 && ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)))) {
      return 0;
    }
    uVar4 = FUN_144729dda(param_2);
    uVar4 = uVar4 ^ 1;
  }
  return uVar4;
}



// FUNCTION 144addd30 FUN_144addd30 body=104 status=ok
// SIG undefined FUN_144addd30(void)

ulonglong FUN_144addd30(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if ((uVar1 != *param_2) || (uVar4 = 1, uVar2 != param_2[1])) {
    if (((uVar2 != 0) &&
        (((-1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)) &&
         (lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar3 != 0)))) &&
       ((*(uint *)(lVar3 + 0x10) == uVar2 && ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)))) {
      return 0;
    }
    uVar4 = FUN_144729dda(param_2);
    uVar4 = uVar4 ^ 1;
  }
  return uVar4;
}



// FUNCTION 144addd98 FUN_144addd98 body=655 status=ok
// SIG undefined FUN_144addd98(void)

void FUN_144addd98(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  ulonglong uVar10;
  int iVar11;
  undefined1 auStack_78 [32];
  longlong *local_58;
  int local_50;
  uint local_4c;
  uint *local_48;
  uint local_40;
  int local_3c;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar4 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar4,0,0);
  }
  plVar1 = param_1 + 7;
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 == 1) {
    if (*plVar4 != 0) {
      FUN_1446efa72(plVar4,0,0);
    }
LAB_144addddd:
    uVar3 = 0;
    do {
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = plVar1;
      }
      *(undefined4 *)((longlong)plVar4 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
           0xffffffff;
      uVar3 = uVar3 + 1;
    } while (uVar7 != uVar3);
  }
  else {
    if (uVar7 == 0) goto LAB_144addecf;
    FUN_1446efa72(plVar4,0);
    if (0 < (int)uVar7) goto LAB_144addddd;
  }
  local_48 = (uint *)(param_1 + 2);
  iVar8 = (int)param_1[5];
  local_4c = 1;
  if (iVar8 == 0) {
    local_38 = 0;
    local_50 = 0;
    local_3c = 0;
  }
  else {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = local_48;
    }
    uVar7 = *puVar9;
    if (uVar7 == 0) {
      iVar11 = iVar8 + 0x1e;
      if (-1 < iVar8 + -1) {
        iVar11 = iVar8 + -1;
      }
      uVar6 = 0;
      uVar10 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar10 = uVar6;
      }
      local_50 = (int)uVar10 + 1;
      local_38 = (int)uVar10 * 0x20 + 0x20;
      iVar11 = 0;
      do {
        local_3c = iVar8;
        if (uVar10 == uVar6) goto LAB_144addea1;
        iVar11 = iVar11 + 0x20;
        uVar7 = puVar9[uVar6 + 1];
        uVar6 = uVar6 + 1;
      } while (uVar7 == 0);
      local_50 = (int)uVar6;
      local_38 = iVar11;
    }
    else {
      local_38 = 0;
      local_50 = 0;
    }
    local_4c = -uVar7 & uVar7;
    uVar10 = (ulonglong)local_4c * 2 + 1;
    lVar2 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    local_3c = (local_38 - ((uint)lVar2 ^ 0x3f)) + 0x3e;
    if (iVar8 <= local_3c) {
      local_3c = iVar8;
    }
  }
LAB_144addea1:
  local_40 = 0xffffffff;
  local_58 = param_1;
  if (local_3c < iVar8) {
    do {
      lVar2 = *local_58;
      lVar5 = (longlong)local_3c * 0x10;
      uVar7 = ((uint)(*(ulonglong *)(lVar2 + lVar5) >> 0x14) & 0xffff ^
              (uint)(*(ulonglong *)(lVar2 + lVar5) >> 4)) * -0x7a143595;
      uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
      uVar10 = (longlong)(int)(uVar7 >> 0x10 ^ uVar7) & (longlong)(int)param_1[9] - 1U;
      iVar8 = (int)uVar10;
      *(int *)(lVar2 + 0xc + lVar5) = iVar8;
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = plVar1;
      }
      *(undefined4 *)(lVar2 + 8 + lVar5) =
           *(undefined4 *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = plVar1;
      }
      *(int *)((longlong)plVar4 + ((longlong)iVar8 & (longlong)(int)param_1[9] - 1U) * 4) = local_3c
      ;
      local_40 = local_40 & ~local_4c;
      FUN_1449c0562(&local_50);
    } while (local_3c < (int)local_48[6]);
  }
LAB_144addecf:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144ade028 FUN_144ade028 body=84 status=ok
// SIG undefined FUN_144ade028(void)

undefined8 FUN_144ade028(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  longlong local_20 [2];
  undefined1 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_1 + 0x20) == 0) {
    uVar1 = 0;
  }
  else {
    local_20[1] = 0;
    local_10 = 0;
    local_20[0] = param_1;
    uVar1 = FUN_14008db60(local_20);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144ade07e FUN_144ade07e body=226 status=ok
// SIG undefined FUN_144ade07e(void)

longlong * FUN_144ade07e(longlong *param_1,longlong *param_2,byte param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  *param_1 = *param_2;
  iVar3 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0xffffffffffffffff;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x39) = 0;
  *(undefined8 *)((longlong)param_1 + 0x41) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(byte *)(param_1 + 0x13) = param_3 | *(byte *)(param_2 + 0x13);
  lVar2 = *param_2;
  *param_1 = lVar2;
  lVar2 = *(longlong *)(lVar2 + 0x6a0);
  param_1[6] = lVar2;
  uVar1 = *(uint *)(lVar2 + 8);
  if (-1 < (int)uVar1) {
    *(undefined4 *)(param_1 + 5) = 0;
    iVar4 = 0;
    if (uVar1 != 0) {
      FUN_144717690(param_1 + 4,uVar1);
      iVar4 = (int)param_1[5];
      iVar3 = *(int *)((longlong)param_1 + 0x2c);
    }
    *(uint *)(param_1 + 5) = iVar4 + uVar1;
    if ((uint)(iVar3 - iVar4) < uVar1) {
      FUN_1406600da(param_1 + 4);
    }
    param_1[10] = lVar2 + 0xb0;
    *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
    *(int *)(param_1 + 3) = (int)param_2[3];
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 144ade160 FUN_144ade160 body=93 status=ok
// SIG undefined FUN_144ade160(void)

undefined8 * FUN_144ade160(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_144716758(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1474d487e(param_1,iVar1);
      FUN_1474d48e0(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 144ade1be FUN_144ade1be body=29 status=ok
// SIG undefined FUN_144ade1be(void)

undefined8 FUN_144ade1be(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144ade1dc FUN_144ade1dc body=370 status=ok
// SIG undefined FUN_144ade1dc(void)

void FUN_144ade1dc(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 0x18;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_144ade265;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_144ade265:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 144ade34e FUN_144ade34e body=255 status=ok
// SIG undefined FUN_144ade34e(void)

void FUN_144ade34e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar3 = (ulonglong)(int)uVar2;
    }
    else {
      uVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = uVar3 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x7ffffffffffffff) * 2]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar3 & (uVar4 + uVar3) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 5)) {
      uVar3 = uVar4 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 144ade44e FUN_144ade44e body=255 status=ok
// SIG undefined FUN_144ade44e(void)

void FUN_144ade44e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar3 = (ulonglong)(int)uVar2;
    }
    else {
      uVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = uVar3 * 0x40;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x3ffffffffffffff) * 4]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar3 & (uVar4 + uVar3) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 6)) {
      uVar3 = uVar4 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 144ade54e FUN_144ade54e body=137 status=ok
// SIG undefined FUN_144ade54e(void)

undefined8 * FUN_144ade54e(longlong *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  lVar3 = (longlong)param_3;
  if (*(char *)(param_1[3] + lVar3) != '\0') {
    iVar1 = *(int *)(*(longlong *)(param_1[2] + 0x90) + lVar3 * 4);
    lVar2 = (longlong)iVar1;
    if (lVar2 != -1) {
      if (*(char *)(param_1[3] + lVar2) == '\0') {
        FUN_1447d5d8e(param_1,iVar1);
      }
      FUN_1449437a2(lVar3 * 0x60 + *param_1,param_2,lVar2 * 0x60 + *param_1);
      return param_2;
    }
  }
  puVar4 = (undefined8 *)(lVar3 * 0x60 + *param_1);
  puVar5 = param_2;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  return param_2;
}



// FUNCTION 144ade5d8 FUN_144ade5d8 body=191 status=ok
// SIG undefined FUN_144ade5d8(void)

longlong * FUN_144ade5d8(longlong *param_1,longlong param_2,undefined1 param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0xffffffffffffffff;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x39) = 0;
  *(undefined8 *)((longlong)param_1 + 0x41) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = param_3;
  *param_1 = param_2;
  lVar2 = *(longlong *)(param_2 + 0x6a0);
  param_1[6] = lVar2;
  uVar1 = *(uint *)(lVar2 + 8);
  if (-1 < (int)uVar1) {
    *(undefined4 *)(param_1 + 5) = 0;
    iVar4 = 0;
    if (uVar1 != 0) {
      FUN_144717690(param_1 + 4,uVar1);
      iVar4 = (int)param_1[5];
      iVar3 = *(int *)((longlong)param_1 + 0x2c);
    }
    *(uint *)(param_1 + 5) = iVar4 + uVar1;
    if ((uint)(iVar3 - iVar4) < uVar1) {
      FUN_1406600da(param_1 + 4);
    }
    param_1[10] = lVar2 + 0xb0;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 144ade698 FUN_144ade698 body=831 status=ok
// SIG undefined FUN_144ade698(void)

double * FUN_144ade698(char *param_1,double *param_2,double *param_3,longlong *param_4,
                      undefined8 param_5)

{
  uint uVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  ulonglong uVar7;
  double *pdVar8;
  double *pdVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_f8 [32];
  double local_d8 [4];
  double local_b8;
  double dStack_b0;
  double local_a8;
  double local_98;
  double dStack_90;
  double local_88;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *param_2 = 0.0;
  param_2[1] = 0.0;
  *(undefined4 *)(param_2 + 2) = 0;
  *(undefined4 *)((longlong)param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 3) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1c) = 0x3ff00000;
  param_2[4] = 0.0;
  param_2[5] = 0.0;
  param_2[6] = 0.0;
  param_2[7] = 0.0;
  param_2[8] = 1.0;
  param_2[9] = 1.0;
  param_2[10] = 1.0;
  param_2[0xb] = 0.0;
  if (*param_1 == '\x01') {
    if (*(int *)(param_1 + 0x8c) != -1) {
      FUN_1474fe94a(param_1 + 0x20,local_d8,param_4);
      local_98 = *param_3 * local_98;
      dStack_90 = param_3[1] * dStack_90;
      local_88 = param_3[2] * local_88;
      dVar14 = dStack_90 * local_d8[0] - local_98 * local_d8[1];
      dVar16 = local_88 * local_d8[1] - dStack_90 * local_d8[2];
      dVar13 = local_98 * local_d8[2] - local_d8[0] * local_88;
      dVar16 = dVar16 + dVar16;
      dVar13 = dVar13 + dVar13;
      dVar14 = dVar14 + dVar14;
      local_b8 = (dVar14 * local_d8[1] - dVar13 * local_d8[2]) + local_d8[3] * dVar16 + local_98 +
                 local_b8;
      dStack_b0 = (local_d8[2] * dVar16 - local_d8[0] * dVar14) + local_d8[3] * dVar13 + dStack_90 +
                  dStack_b0;
      local_a8 = dVar14 * local_d8[3] + local_88 + (dVar13 * local_d8[0] - dVar16 * local_d8[1]) +
                 local_a8;
      pdVar8 = local_d8;
      pdVar9 = param_2;
      for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
        *pdVar9 = *pdVar8;
        pdVar8 = pdVar8 + 1;
        pdVar9 = pdVar9 + 1;
      }
LAB_144ade860:
      auVar2._8_4_ = SUB84(dStack_b0,0);
      auVar2._0_8_ = local_b8;
      auVar2._12_4_ = (int)((ulonglong)dStack_b0 >> 0x20);
      *(undefined1 (*) [16])(param_2 + 4) = auVar2;
      param_2[6] = local_a8;
      param_2[7] = 0.0;
      goto LAB_144ade86b;
    }
  }
  else if (((~*(uint *)(param_1 + 0xc) & 0x7fffffff) != 0) && (-1 < (int)*(uint *)(param_1 + 0xc)))
  {
    uVar1 = *(uint *)(param_1 + 0x10);
    uVar7 = (ulonglong)uVar1;
    if ((uVar7 != 0xffffffff) && ((-1 < (int)uVar1 && ((int)uVar1 < (int)param_4[1])))) {
      if (*(char *)(param_4[3] + uVar7) == '\0') {
        FUN_1447d5d8e(param_4,uVar1);
      }
      pdVar8 = (double *)(uVar7 * 0x60 + *param_4);
      pdVar9 = param_2;
      for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
        *pdVar9 = *pdVar8;
        pdVar8 = pdVar8 + 1;
        pdVar9 = pdVar9 + 1;
      }
      dVar11 = *param_3 * param_2[8];
      dVar12 = param_3[1] * param_2[9];
      dVar10 = param_3[2] * param_2[10];
      dVar3 = *param_2;
      dVar4 = param_2[1];
      dVar5 = param_2[2];
      dVar14 = param_2[3];
      dVar13 = dVar12 * dVar3 - dVar11 * dVar4;
      dVar15 = dVar10 * dVar4 - dVar12 * dVar5;
      dVar16 = dVar11 * dVar5 - dVar3 * dVar10;
      dVar15 = dVar15 + dVar15;
      dVar16 = dVar16 + dVar16;
      dVar13 = dVar13 + dVar13;
      local_b8 = (dVar13 * dVar4 - dVar16 * dVar5) + dVar14 * dVar15 + dVar11 + param_2[4];
      dStack_b0 = (dVar5 * dVar15 - dVar3 * dVar13) + param_2[3] * dVar16 + dVar12 + param_2[5];
      local_a8 = dVar13 * dVar14 + dVar10 + (dVar16 * dVar3 - dVar15 * dVar4) + param_2[6];
      goto LAB_144ade860;
    }
  }
  FUN_1474ff0b8(local_d8,param_3,param_5,param_2);
LAB_144ade86b:
  if ((local_70 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 144adea3e FUN_144adea3e body=187 status=ok
// SIG undefined FUN_144adea3e(void)

ulonglong FUN_144adea3e(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  bool bVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  
  if ((char)param_1[2] == '\0') {
    FUN_144716af1(*param_1,(int)param_1[1]);
    *(undefined1 *)(param_1 + 2) = 1;
  }
  uVar1 = *(uint *)(param_1 + 1);
  iVar6 = (int)((ulonglong)param_2 >> 0x20);
  if ((int)uVar1 < 1) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    uVar7 = (ulonglong)uVar1;
    uVar8 = uVar1;
    do {
      uVar7 = uVar7 >> 1;
      uVar9 = (uint)uVar7 + (int)uVar4;
      uVar2 = *(undefined8 *)(*param_1 + (ulonglong)uVar9 * 0x10);
      iVar5 = (int)uVar2 - (int)param_2;
      if (iVar5 == 0) {
        iVar5 = (int)((ulonglong)uVar2 >> 0x20) - iVar6;
      }
      if (iVar5 < 0) {
        uVar4 = (ulonglong)(uVar9 + (uVar8 & 1));
      }
      bVar3 = 1 < uVar8;
      uVar8 = (uint)uVar7;
    } while (bVar3);
  }
  if ((int)uVar4 < (int)uVar1) {
    uVar2 = *(undefined8 *)(*param_1 + uVar4 * 0x10);
    iVar5 = (int)param_2 - (int)uVar2;
    if (iVar5 == 0) {
      iVar5 = iVar6 - (int)((ulonglong)uVar2 >> 0x20);
    }
    if (-1 < iVar5) {
      return uVar4;
    }
  }
  return 0xffffffff;
}



// FUNCTION 144adeafa FUN_144adeafa body=77 status=ok
// SIG undefined FUN_144adeafa(void)

void FUN_144adeafa(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_1447bda9c(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
  if (*(longlong *)(param_1 + 0x38) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 144adeb48 FUN_144adeb48 body=61 status=ok
// SIG undefined FUN_144adeb48(void)

void FUN_144adeb48(undefined8 *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  
  bVar1 = *(byte *)(param_1 + 8);
  if ((bVar1 & 1) != 0) {
    puVar2 = param_1;
    if ((bVar1 & 2) == 0) {
      puVar2 = (undefined8 *)*param_1;
    }
    *(byte *)(param_1 + 8) = bVar1 & 0xfe;
    (**(code **)*puVar2)(puVar2,0);
    if ((*(byte *)(param_1 + 8) & 2) == 0) {
      FUN_1400020a8(*param_1);
      return;
    }
  }
  return;
}



// FUNCTION 144adeb86 FUN_144adeb86 body=872 status=ok
// SIG undefined FUN_144adeb86(void)

void FUN_144adeb86(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong uVar7;
  ulonglong uVar8;
  double *_Dst;
  double *pdVar9;
  double *pdVar10;
  double *pdVar11;
  int iVar12;
  double *pdVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auStack_178 [32];
  double local_158 [10];
  byte local_108;
  double local_100;
  undefined1 local_f8 [80];
  byte local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  puVar2 = (uint *)*param_2;
  lVar3 = *(longlong *)(*(longlong *)(*param_1 + 0x60) + (longlong)(int)param_1[1] * 8);
  lVar4 = *(longlong *)(lVar3 + 0x20);
  pdVar9 = (double *)0x0;
  pdVar10 = (double *)(lVar4 + (ulonglong)puVar2[3]);
  if ((ulonglong)puVar2[3] == 0xffffffff) {
    pdVar10 = pdVar9;
  }
  _Dst = (double *)(lVar4 + (ulonglong)puVar2[2]);
  if ((ulonglong)puVar2[2] == 0xffffffff) {
    _Dst = pdVar9;
  }
  pdVar11 = (double *)(lVar4 + (ulonglong)puVar2[1]);
  if ((ulonglong)puVar2[1] == 0xffffffff) {
    pdVar11 = pdVar9;
  }
  pdVar13 = (double *)(lVar4 + (ulonglong)*puVar2);
  if ((ulonglong)*puVar2 == 0xffffffff) {
    pdVar13 = pdVar9;
  }
  uVar8 = (ulonglong)*(ushort *)(lVar3 + 0xe);
  if (uVar8 != 0) {
    uVar7 = 0;
    do {
      dVar16 = pdVar11[uVar7];
      iVar12 = SUB84(dVar16,0);
      if ((iVar12 < *(int *)(_Dst + 0xb)) ||
         (*(int *)((longlong)_Dst + 0x5c) != 0x7fffffff && *(int *)((longlong)_Dst + 0x5c) <= iVar12
         )) {
        FUN_140108c2a(local_158,pdVar13[uVar7],0,dVar16);
        if (_Dst != local_158) {
          local_a8 = local_108;
          (*(code *)(&PTR_LAB_14a46c4a0)[local_108])(local_f8,local_158);
          memmove(_Dst,local_f8,0x58);
        }
        _Dst[0xb] = local_100;
      }
      cVar1 = *(char *)(_Dst + 10);
      if ((_Dst == (double *)0x0) || (cVar1 != '\x01')) {
        fVar14 = (float)((ulonglong)dVar16 >> 0x20);
        if (cVar1 == '\x02' && _Dst != (double *)0x0) {
          auVar18 = roundps(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14),1);
          fVar14 = (fVar14 - auVar18._0_4_) + 0.5 + -0.5;
          auVar17 = ZEXT416((uint)fVar14);
          if (0.99999994 <= fVar14) {
            auVar17 = ZEXT416(0x3f7fffff);
          }
          if (auVar17._0_4_ <= 0.0) {
            auVar5._12_4_ = 0;
            auVar5._0_12_ = auVar17._4_12_;
            auVar17 = auVar5 << 0x20;
          }
          dVar15 = ((double)auVar17._0_4_ +
                   (double)((iVar12 - *(int *)(_Dst + 2)) + (int)auVar18._0_4_)) * *_Dst + _Dst[1];
        }
        else if (cVar1 == '\x03' && _Dst != (double *)0x0) {
          auVar18 = roundps(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14),1);
          fVar14 = (fVar14 - auVar18._0_4_) + 0.5 + -0.5;
          auVar17 = ZEXT416((uint)fVar14);
          if (0.99999994 <= fVar14) {
            auVar17 = ZEXT416(0x3f7fffff);
          }
          if (auVar17._0_4_ <= 0.0) {
            auVar6._12_4_ = 0;
            auVar6._0_12_ = auVar17._4_12_;
            auVar17 = auVar6 << 0x20;
          }
          dVar16 = (double)auVar17._0_4_ +
                   (double)((iVar12 - *(int *)(_Dst + 3)) + (int)auVar18._0_4_);
          dVar15 = dVar16 * _Dst[1] + *_Dst * dVar16 * dVar16 + _Dst[2];
        }
        else if (cVar1 == '\x04' && _Dst != (double *)0x0) {
          dVar15 = (double)FUN_14752ffda(_Dst,dVar16);
        }
        else if (cVar1 == '\x05' && _Dst != (double *)0x0) {
          dVar15 = (double)FUN_14753018a(_Dst,dVar16);
        }
        else if ((_Dst == (double *)0x0) || (cVar1 != '\x06')) {
          dVar15 = 2.2250738585072014e-308;
          if (cVar1 == '\a' && _Dst != (double *)0x0) {
            dVar15 = (double)FUN_1475303de(_Dst,dVar16);
          }
        }
        else {
          dVar15 = (double)FUN_1400f028e(_Dst,dVar16);
        }
      }
      else {
        dVar15 = *_Dst;
      }
      pdVar10[uVar7] = dVar15;
      uVar7 = uVar7 + 1;
      _Dst = _Dst + 0xc;
    } while (uVar8 != uVar7);
  }
  if ((local_a0 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144adeef0 FUN_144adeef0 body=568 status=ok
// SIG undefined FUN_144adeef0(void)

void FUN_144adeef0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  int *piVar16;
  uint uVar17;
  uint uVar18;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  longlong local_98;
  longlong *local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  int local_58;
  char local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar3 = *(int *)(param_1 + 0x80);
  local_90 = param_3;
  local_70 = param_2;
  if (0 < iVar3) {
    lVar5 = *(longlong *)(param_1 + 0x78);
    local_78 = lVar5 + 0x3c;
    uVar17 = 0;
    do {
      cVar9 = DAT_14cb0cab9;
      lVar14 = (longlong)(int)uVar17;
      lVar15 = lVar14 * 0x30;
      piVar2 = (int *)(lVar15 + lVar5);
      iVar4 = *(int *)(lVar5 + 0x18 + lVar15);
      if (iVar4 == 0) {
        local_49 = -1;
      }
      else {
        FUN_14007e9ac((longlong)(iVar4 + -1) * 0x20 + *(longlong *)(piVar2 + 4),&local_49);
      }
      if (local_49 == cVar9) {
        FUN_1432dad42(local_70,&local_60,piVar2);
        local_88 = (longlong)local_58;
        if (local_88 != 0) {
          local_80 = local_60;
          local_88 = local_88 << 3;
          local_98 = 0;
          do {
            local_68 = *(undefined8 *)(local_80 + local_98);
            local_a0 = FUN_14479d2ce(&local_68);
            if (local_a0 == 0) {
LAB_144adf049:
              iVar4 = (int)local_90[1];
              *(uint *)(local_90 + 1) = iVar4 + 1U;
              if (*(uint *)((longlong)local_90 + 0xc) < iVar4 + 1U) {
                FUN_140c60952(local_90,iVar4);
              }
              iVar6 = piVar2[1];
              iVar7 = piVar2[2];
              iVar8 = piVar2[3];
              piVar16 = (int *)(*local_90 + (longlong)iVar4 * 0x10);
              *piVar16 = *piVar2;
              piVar16[1] = iVar6;
              piVar16[2] = iVar7;
              piVar16[3] = iVar8;
            }
            else {
              lVar10 = FUN_1402e44f4();
              if (((*(int *)(*(longlong *)(local_a0 + 0x10) + 0x38) < *(int *)(lVar10 + 0x38)) ||
                  (*(longlong *)
                    (*(longlong *)(*(longlong *)(local_a0 + 0x10) + 0x30) +
                    (longlong)*(int *)(lVar10 + 0x38) * 8) != lVar10 + 0x30)) ||
                 (lVar11 = FUN_144a49ec8(local_a0), lVar10 = local_a0, lVar11 == 0))
              goto LAB_144adf049;
              uVar12 = FUN_144a49ec8(local_a0);
              lVar11 = FUN_144a7a45a(uVar12);
              if (lVar11 != lVar10) goto LAB_144adf049;
            }
            local_98 = local_98 + 8;
          } while (local_88 != local_98);
        }
        uVar1 = iVar3 - 1;
        uVar13 = uVar1;
        if ((int)uVar1 < (int)uVar17) {
          uVar13 = uVar17;
        }
        piVar16 = (int *)(lVar15 + local_78);
        uVar18 = uVar17 - 1;
        do {
          uVar17 = uVar13;
          if ((((longlong)(ulonglong)uVar1 <= lVar14) ||
              (uVar17 = uVar18 + 1, piVar16[-3] != *piVar2)) ||
             ((piVar16[-2] != piVar2[1] || (piVar16[-1] != piVar2[2])))) break;
          lVar14 = lVar14 + 1;
          iVar4 = *piVar16;
          piVar16 = piVar16 + 0xc;
          uVar18 = uVar17;
        } while (iVar4 == piVar2[3]);
      }
      uVar17 = uVar17 + 1;
    } while ((int)uVar17 < iVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144adf12a FUN_144adf12a body=1222 status=ok
// SIG undefined FUN_144adf12a(void)

void FUN_144adf12a(longlong *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  bool bVar10;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  code *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  undefined **local_50;
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 == 0) goto LAB_144adf31a;
  bVar10 = true;
  bVar9 = true;
  if ((*(byte *)(param_1 + 0xc) & 0x30) == 0) {
    if (param_1[0x39] == 0) {
      bVar9 = false;
    }
    else {
      bVar9 = -1 < *(char *)(param_1[0x39] + 0x9c);
    }
  }
  if ((*(byte *)(param_1 + 0xc) & 0x50) == 0) {
    if (param_1[0x39] == 0) {
      bVar10 = false;
    }
    else {
      bVar10 = -1 < *(char *)(param_1[0x39] + 0x9c);
    }
  }
  local_50 = &PTR_FUN_14a78d090;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c998000) && (FUN_144b3d300(), DAT_14c998000 == -1)) {
    FUN_145984cc0(&DAT_14c997f90);
    atexit((_func_5014 *)&LAB_142a64008);
    _Init_thread_footer();
  }
  uVar3 = DAT_14c997ff8;
  DAT_14c997ff8 = 1;
  if (bVar9) {
    lVar8 = param_1[0x2f];
    if ((((*(uint *)(param_1 + 1) & 0x10) == 0) && (lVar6 = param_1[4], lVar6 != 0)) &&
       (-1 < (short)*(undefined4 *)(lVar6 + 8))) {
      uVar1 = *(uint *)(lVar6 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) >> 0x1c & 1) != 0) goto LAB_144adf346;
      if (DAT_14cae8b20 == 0) {
        local_70 = &local_48;
        local_48 = (code *)&LAB_14355090c;
        local_60 = FUN_14081d0ea;
        local_68 = FUN_14081d0ea;
        local_78 = &LAB_147b8e16d;
        local_80 = (code *)&LAB_140810a38;
        local_88 = L"Engine";
        local_90 = 0x800000000;
        local_98 = 0x10000000;
        local_a0 = 8;
        local_a8 = 0x3f0;
        FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
      }
      lVar6 = DAT_14cae8b20;
      if (DAT_14c951858 == 0) {
        local_70 = &local_48;
        local_48 = FUN_1449e2820;
        local_60 = FUN_14081d0ea;
        local_68 = FUN_14081d0ea;
        local_78 = &LAB_1468c5283;
        local_80 = FUN_142809da0;
        local_88 = L"Engine";
        local_90 = 0x400000000;
        local_98 = 0x10000000;
        local_a0 = 8;
        local_a8 = 0x50;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar5 = param_1[4];
      if (lVar5 == 0) goto LAB_144adf346;
      iVar2 = *(int *)(lVar6 + 0x38);
      do {
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < iVar2) ||
           (lVar7 = lVar5,
           *(longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar2 * 8) !=
           lVar6 + 0x30)) {
          lVar7 = 0;
        }
      } while ((lVar7 == 0) && (lVar5 = *(longlong *)(lVar5 + 0x20), lVar5 != 0));
      if (lVar7 == 0) goto LAB_144adf346;
      lVar6 = *(longlong *)(lVar7 + 0xc0);
    }
    else {
LAB_144adf346:
      lVar6 = 0;
    }
    if (((char)lVar8 == '\x03') ||
       ((((char)lVar8 == '\x02' && (lVar6 != 0)) && (cVar4 = FUN_144b2c478(), cVar4 != '\0')))) {
      (**(code **)(*param_1 + 0x2e8))(param_1);
    }
  }
  if (bVar10) {
    if (DAT_14cad5cd8 == 0) {
      local_70 = &local_48;
      local_48 = FUN_1414bb1f4;
      local_60 = FUN_14081d0ea;
      local_68 = (code *)&LAB_1463c345a;
      local_78 = &LAB_147a5f179;
      local_80 = (code *)&LAB_145c3bbe3;
      local_88 = L"Engine";
      local_90 = 0;
      local_98 = 0x1000000c;
      local_a0 = 0x10;
      local_a8 = 0x15b0;
      FUN_14081cfa3(L"/Script/Engine",L"DemoNetDriver",&DAT_14cad5cd8,&DAT_147a5f178);
    }
    if (((*(int *)(DAT_14cad5cd8 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cad5cd8 + 0x38) * 8) == DAT_14cad5cd8 + 0x30)) ||
       ((*(byte *)(param_2 + 0x309) & 4) != 0)) {
      (**(code **)(*param_1 + 0x2f0))(param_1);
    }
  }
  DAT_14c997ff8 = uVar3;
  if ((bVar9) && ((longlong)(int)param_1[0x47] != 0)) {
    lVar8 = 0;
    do {
      lVar8 = lVar8 + 8;
    } while ((longlong)(int)param_1[0x47] * 8 != lVar8);
  }
LAB_144adf31a:
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144adf5f2 FUN_144adf5f2 body=196 status=ok
// SIG undefined FUN_144adf5f2(void)

void FUN_144adf5f2(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 auStack_118 [40];
  undefined1 local_f0 [192];
  undefined1 *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_30 = (undefined1 *)0x0;
  local_28 = 0x1800000000;
  FUN_1448c0c58(param_1,local_f0,0);
  puVar3 = local_30;
  if (local_30 == (undefined1 *)0x0) {
    puVar3 = local_f0;
  }
  lVar2 = (longlong)(int)local_28;
  if (lVar2 != 0) {
    lVar1 = 0;
    do {
      if ((*(byte *)((longlong)*(longlong **)(puVar3 + lVar1) + 0x9f) & 8) != 0) {
        (**(code **)(**(longlong **)(puVar3 + lVar1) + 0x398))();
      }
      lVar1 = lVar1 + 8;
    } while (lVar2 * 8 != lVar1);
  }
  if (local_30 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144adf6b8 FUN_144adf6b8 body=29 status=ok
// SIG undefined FUN_144adf6b8(void)

undefined8 FUN_144adf6b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144adf6d6 FUN_144adf6d6 body=321 status=ok
// SIG undefined FUN_144adf6d6(void)

void FUN_144adf6d6(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined4 local_5c;
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = DAT_14cacb558;
  local_5c = param_2;
  lVar1 = FUN_1400796d0(param_1[2],DAT_14cacb558,1);
  if (lVar1 == 0) {
    local_48 = (undefined2 *)0x0;
    uStack_40 = 0;
    FUN_14005eb28(&local_48,0x80);
    FUN_1468fef7a(param_1,0,&local_48,0);
    local_68 = &DAT_149dfb77a;
    if ((int)uStack_40 != 0) {
      local_68 = local_48;
    }
    FUN_1400021e4(&local_38,&local_58);
    puVar2 = &DAT_149dfb77a;
    if (local_50 != 0) {
      puVar2 = local_58;
    }
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/ScriptCore.cpp",0x5ce,
                  L"Failed to find function %s in %s",puVar2);
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (*(code **)(*param_1 + 0x248) == switchD_143c3d4dc::caseD_4f) {
    switchD_143c3d4dc::caseD_4f(param_1,lVar1);
  }
  else {
    (**(code **)(*param_1 + 0x248))(param_1,lVar1,&local_5c);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144adf818 FUN_144adf818 body=956 status=ok
// SIG undefined FUN_144adf818(void)

void FUN_144adf818(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  byte *pbVar2;
  undefined8 uVar3;
  code *pcVar4;
  uint uVar5;
  longlong lVar6;
  DWORD DVar7;
  DWORD DVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  code *local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  longlong local_38;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_78 = FUN_1446ddbd2();
      local_70 = FUN_1409e12a0;
      local_80 = 0;
      local_88 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
  }
  pbVar2 = *(byte **)(param_2 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar2 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_38);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_38);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      local_38 = *(longlong *)(pbVar2 + 1);
      *(byte **)(param_2 + 0x20) = pbVar2 + 9;
    }
    else {
      (*pcVar4)(uVar3,param_2,&local_38);
    }
  }
  lVar6 = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar9 = param_1[4];
  if (lVar9 != 0) {
    if (DAT_14cad2858 == 0) {
      local_50 = &local_30;
      local_30 = FUN_144a7958c;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_146395584;
      local_58 = &LAB_147a0ba80;
      local_60 = &LAB_14575ccce;
      local_68 = L"Engine";
      local_70 = (code *)0x40000000000;
      local_78 = CONCAT44(local_78._4_4_,0x10000004);
      local_80 = CONCAT44(local_80._4_4_,0x10);
      local_88 = CONCAT44(local_88._4_4_,0x1180);
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
    }
    lVar9 = *(longlong *)(lVar9 + 0x10);
    if ((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(lVar9 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) ==
        DAT_14cad2858 + 0x30)) {
      if (DAT_14c86a9f8 == '\x01') {
        iVar10 = *(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60
                         );
        if (iVar10 != 2) {
          if (iVar10 != 1) goto LAB_144adf95b;
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 != DVar8) goto LAB_144adf95b;
        }
      }
      FUN_14036294a(param_1[4],1,1);
    }
  }
LAB_144adf95b:
  lVar9 = param_1[0x7c];
  if (lVar9 == 0) {
    lVar9 = (**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = lVar9;
  }
  uVar13 = 0;
  if (*(int *)(lVar9 + 0x478) != *(int *)(lVar9 + 0x4a4)) {
    uVar5 = (uint)((ulonglong)lVar6 >> 0x10);
    uVar12 = (uint)lVar6 & 0xffff;
    lVar11 = lVar9 + 0x4a8;
    if (*(longlong *)(lVar9 + 0x4b0) != 0) {
      lVar11 = *(longlong *)(lVar9 + 0x4b0);
    }
    iVar10 = *(int *)(lVar11 + (ulonglong)
                               (*(int *)(lVar9 + 0x4b8) - 1U &
                               (int)((ulonglong)lVar6 >> 0x20) + ((uint)lVar6 << 0x10 | uVar12) +
                               (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar12 >> 4)) * 4);
    if (iVar10 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(lVar9 + 0x470) + (longlong)iVar10 * 0x14);
        if (*plVar1 == lVar6) {
          if (plVar1 != (longlong *)0x0) {
            uVar13 = (undefined4)plVar1[1];
          }
          break;
        }
        iVar10 = *(int *)((longlong)plVar1 + 0xc);
      } while (iVar10 != -1);
    }
  }
  *param_3 = uVar13;
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144adfbd6 FUN_144adfbd6 body=689 status=ok
// SIG undefined FUN_144adfbd6(void)

ulonglong FUN_144adfbd6(longlong *param_1,float param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  DWORD DVar5;
  DWORD DVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong unaff_RBX;
  ulonglong uVar9;
  bool bVar11;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  code *local_48;
  ulonglong local_40;
  undefined7 uVar10;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (DAT_14cac0148 == 0) {
    local_60 = &local_48;
    local_48 = FUN_1417f6a96;
    local_50 = FUN_14081d0ea;
    local_58 = FUN_14081d0ea;
    local_68 = &LAB_147863ed7;
    local_70 = &LAB_146373c3b;
    local_78 = L"Engine";
    local_80 = 0;
    local_88 = 0x1000000f;
    local_90 = 8;
    local_98 = 0x1350;
    FUN_14081cfa3(L"/Script/Engine",L"Engine",&DAT_14cac0148,&DAT_147863ed6);
  }
  lVar2 = DAT_14cac0148;
  lVar7 = *(longlong *)(DAT_14cac0148 + 0x110);
  if (lVar7 == 0) {
    FUN_140aa6c08(DAT_14cac0148);
    lVar7 = *(longlong *)(lVar2 + 0x110);
  }
  uVar9 = DAT_14cad2bb0;
  if (((*(byte *)(lVar7 + 0xc44) & 4) == 0) || ((*(byte *)((longlong)param_1 + 0x31) & 1) == 0)) {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if ((iVar1 == 0x40000002) || ((DAT_14c86a9f8 != '\x01' || (iVar1 == 2)))) {
      uVar8 = 0;
    }
    else if (iVar1 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar8 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar8 = 1;
    }
    bVar11 = *(int *)(uVar9 + uVar8 * 4) == 0;
  }
  else {
    bVar11 = false;
    uVar9 = unaff_RBX;
  }
  if (*(code **)(*param_1 + 0x2b8) != (code *)&LAB_144b085fa) {
    cVar4 = (**(code **)(*param_1 + 0x2b8))(param_1);
    uVar9 = CONCAT71((int7)(uVar9 >> 8),1);
    if (cVar4 == '\0') goto LAB_144adfcb8;
  }
  lVar2 = DAT_14cad2bc8;
  lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar1 = *(int *)(lVar7 + 0xc60);
  if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
    uVar8 = 0;
  }
  else if (iVar1 == 1) {
    DVar5 = FUN_140ad26c0();
    DVar6 = GetCurrentThreadId();
    uVar8 = (ulonglong)(DVar5 != DVar6);
  }
  else {
    uVar8 = 1;
  }
  lVar3 = DAT_14cad2be0;
  uVar10 = (undefined7)(uVar9 >> 8);
  uVar9 = CONCAT71(uVar10,1);
  if (*(int *)(lVar2 + uVar8 * 4) != 0) {
    iVar1 = *(int *)(lVar7 + 0xc60);
    if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
      uVar8 = 0;
    }
    else if (iVar1 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar8 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar8 = 1;
    }
    if (*(int *)(lVar3 + uVar8 * 4) != 0) {
      uVar9 = CONCAT71(uVar10,param_2 == 0.0 | bVar11);
    }
  }
LAB_144adfcb8:
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 144adfe88 FUN_144adfe88 body=1543 status=ok
// SIG undefined FUN_144adfe88(void)

void FUN_144adfe88(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined1 auStack_b8 [32];
  uint *local_98;
  longlong local_90;
  undefined8 local_88;
  longlong local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(undefined4 *)(param_1 + 0xc58) = 0;
  if (*(longlong *)(param_1 + 0xc50) != 0) {
    FUN_1400020a8();
  }
  lVar11 = param_1 + 0xa98;
  lVar9 = param_1 + 0xc28;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  local_60 = lVar9;
  if (*(int *)(param_1 + 0xc38) != 0) {
    FUN_144a81a4c(&local_68);
  }
  local_88 = local_68;
  local_80 = local_60;
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_90 = lVar11;
  if (iStack_54 < *(int *)(local_60 + 0x10)) {
    do {
      lVar8 = *(longlong *)(local_90 + 0x180);
      if (*(longlong *)(local_90 + 0x180) == 0) {
        lVar8 = local_90;
      }
      if (*(longlong *)(lVar8 + 0x48 + (longlong)iStack_74 * 0x60) != 0) {
        FUN_1400020a8();
      }
      local_78 = local_78 & ~local_88._4_4_;
      FUN_144a81a4c(&local_88);
    } while (iStack_74 < *(int *)(local_80 + 0x10));
  }
  *(undefined4 *)(param_1 + 0xc20) = 0;
  if (*(int *)(param_1 + 0xc24) != 0) {
    FUN_144729344(lVar11,0);
  }
  *(undefined8 *)(param_1 + 0xc40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc38) = 0;
  if (0x20 < *(uint *)(param_1 + 0xc3c)) {
    *(undefined4 *)(param_1 + 0xc3c) = 0x20;
    FUN_14008f53c(lVar9,0);
  }
  if (*(longlong *)(param_1 + 0xc30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xc18) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xa90) = 0;
  if (*(longlong *)(param_1 + 0xa88) != 0) {
    FUN_1400020a8();
  }
  local_98 = (uint *)(param_1 + 0xa58);
  iVar2 = *(int *)(param_1 + 0xa68);
  if (iVar2 == 0) {
    uVar14 = 0;
    uVar12 = 1;
    iVar3 = 0;
    iVar10 = 0;
  }
  else {
    puVar7 = *(uint **)(param_1 + 0xa60);
    if (*(uint **)(param_1 + 0xa60) == (uint *)0x0) {
      puVar7 = local_98;
    }
    uVar13 = *puVar7;
    if (uVar13 == 0) {
      iVar3 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar3 = iVar2 + -1;
      }
      uVar14 = 0;
      uVar12 = (ulonglong)(uint)(iVar3 >> 5);
      if (iVar3 >> 5 < 1) {
        uVar12 = uVar14;
      }
      iVar10 = 0;
      do {
        if (uVar12 == uVar14) goto LAB_144ae0028;
        iVar10 = iVar10 + 0x20;
        uVar13 = puVar7[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar14 = 0;
      iVar10 = 0;
    }
    uVar12 = (ulonglong)(-uVar13 & uVar13);
    uVar1 = uVar12 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar3 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar3) {
      iVar3 = iVar2;
    }
  }
  if (iVar3 < iVar2) {
    uVar13 = 0xffffffff;
    do {
      lVar11 = *(longlong *)(param_1 + 0xa48);
      if (*(longlong *)(param_1 + 0xa48) == 0) {
        lVar11 = param_1 + 0x148;
      }
      lVar11 = lVar11 + (longlong)iVar3 * 0x120;
      lVar9 = *(longlong *)(lVar11 + 0x108);
      if (*(longlong *)(lVar11 + 0x108) == 0) {
        lVar9 = lVar11 + 8;
      }
      FUN_14474a06b(lVar9,*(undefined4 *)(lVar11 + 0x110));
      if (*(longlong *)(lVar11 + 0x108) != 0) {
        FUN_1400020a8();
      }
      uVar13 = uVar13 & ~(uint)uVar12;
      puVar7 = *(uint **)(param_1 + 0xa60);
      if (*(uint **)(param_1 + 0xa60) == (uint *)0x0) {
        puVar7 = local_98;
      }
      iVar2 = *(int *)(param_1 + 0xa68);
      iVar3 = (int)uVar14;
      lVar11 = (longlong)iVar3;
      uVar4 = puVar7[lVar11] & uVar13;
      if (uVar4 == 0) {
        iVar5 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar5 = iVar2 + -1;
        }
        iVar5 = iVar5 >> 5;
        iVar6 = iVar5;
        if (iVar5 < iVar3) {
          iVar6 = iVar3;
        }
        if (iVar5 <= iVar3) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar4 = puVar7[lVar11 + lVar9 + 1];
          if (uVar4 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar6 - lVar11 == lVar9) goto LAB_144ae0028;
        }
        uVar14 = (ulonglong)(iVar3 + (int)lVar9 + 1);
        uVar13 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-uVar4 & uVar4);
      uVar1 = uVar12 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar3 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar3 < iVar2);
  }
LAB_144ae0028:
  *(undefined4 *)(param_1 + 0xa50) = 0;
  if (*(int *)(param_1 + 0xa54) != 0) {
    FUN_14472925c(param_1 + 0x148,0);
  }
  *(undefined8 *)(param_1 + 0xa70) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa68) = 0;
  if (0x20 < *(uint *)(param_1 + 0xa6c)) {
    *(undefined4 *)(param_1 + 0xa6c) = 0x20;
    FUN_14008f53c(local_98,0);
  }
  if (*(longlong *)(param_1 + 0xa60) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xa48) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x140) = 0;
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FUN_1400020a8();
  }
  lVar11 = param_1 + 0x110;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  local_60 = lVar11;
  if (*(int *)(param_1 + 0x120) != 0) {
    FUN_144a81a4c(&local_68);
  }
  local_88 = local_68;
  local_80 = local_60;
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_90 = param_1;
  if (iStack_54 < *(int *)(local_60 + 0x10)) {
    do {
      lVar9 = *(longlong *)(local_90 + 0x100);
      if (*(longlong *)(local_90 + 0x100) == 0) {
        lVar9 = local_90;
      }
      if (*(longlong *)(lVar9 + 0x28 + (longlong)iStack_74 * 0x40) != 0) {
        FUN_1400020a8();
      }
      local_78 = local_78 & ~local_88._4_4_;
      FUN_144a81a4c(&local_88);
    } while (iStack_74 < *(int *)(local_80 + 0x10));
  }
  *(undefined4 *)(param_1 + 0x108) = 0;
  if (*(int *)(param_1 + 0x10c) != 0) {
    FUN_144729186(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x128) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x120) = 0;
  if (0x20 < *(uint *)(param_1 + 0x124)) {
    *(undefined4 *)(param_1 + 0x124) = 0x20;
    FUN_14008f53c(lVar11,0);
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144ae0490 FUN_144ae0490 body=1038 status=ok
// SIG undefined FUN_144ae0490(void)

ulonglong FUN_144ae0490(uint *param_1,ulonglong param_2,float param_3)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  float *pfVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_98 [32];
  float local_78;
  float local_70;
  uint local_68;
  undefined4 local_58;
  float local_54;
  ulonglong local_50;
  
  fVar8 = (float)param_2;
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  fVar7 = (float)param_1[3];
  local_54 = fVar8;
  if (0.0 < fVar7) {
    if (param_3 <= 0.0001) {
      param_2 = (ulonglong)*param_1;
      goto LAB_144ae04d6;
    }
    param_1[9] = (uint)((float)param_1[9] + param_3);
    if (param_1[1] == 5) {
      puVar1 = param_1 + 10;
      if (param_1[0xc] != 2) {
        param_1[0xc] = 0;
        if (param_1[0xd] == 2) {
          uVar5 = 0;
          uVar3 = 2;
        }
        else {
          FUN_1401e1376(puVar1,2);
          uVar5 = param_1[0xc];
          uVar3 = param_1[0xd];
        }
        param_1[0xc] = uVar5 + 1;
        if (uVar3 < uVar5 + 1) {
          FUN_1401e187e(puVar1,uVar5);
        }
        lVar2 = *(longlong *)(param_1 + 10);
        *(float *)(lVar2 + (longlong)(int)uVar5 * 8) = fVar8;
        *(undefined4 *)(lVar2 + 4 + (longlong)(int)uVar5 * 8) = 0;
        uVar5 = param_1[0xc];
        param_1[0xc] = uVar5 + 1;
        if (param_1[0xd] < uVar5 + 1) {
          FUN_1401e187e(puVar1,uVar5);
        }
        *(undefined8 *)(*(longlong *)(param_1 + 10) + (longlong)(int)uVar5 * 8) = 0;
        fVar7 = (float)param_1[3];
      }
      pfVar4 = *(float **)(param_1 + 10);
      fVar6 = *pfVar4;
      local_58 = 0;
      if (fVar7 / 2.7182817 < 1e-08) {
        pfVar4[2] = (fVar8 - fVar6) / param_3;
        *pfVar4 = fVar8;
      }
      else {
        local_70 = 1.0 / ((fVar7 / 2.7182817) * 3.1415927);
        local_78 = param_3;
        local_68 = param_1[4];
        FUN_1401e0d16(pfVar4,pfVar4 + 2,&local_54,&local_58);
      }
      if (0.0 < (float)param_1[7]) {
        param_3 = (float)param_1[7] * param_3;
        fVar8 = param_3 + fVar6;
        fVar6 = fVar6 - param_3;
        fVar7 = **(float **)(param_1 + 10);
        if (fVar8 <= fVar7) {
          fVar7 = fVar8;
        }
        if (fVar7 <= fVar6) {
          fVar7 = fVar6;
        }
        **(float **)(param_1 + 10) = fVar7;
        fVar7 = (float)param_1[7];
        fVar8 = *(float *)(*(longlong *)(param_1 + 10) + 8);
        if (fVar7 <= fVar8) {
          fVar8 = fVar7;
        }
        if (fVar8 <= -fVar7) {
          fVar8 = -fVar7;
        }
        *(float *)(*(longlong *)(param_1 + 10) + 8) = fVar8;
      }
      pfVar4 = *(float **)(param_1 + 10);
      if ((char)param_1[8] == '\x01') {
        if ((float)param_1[6] < *pfVar4) {
          *pfVar4 = (float)param_1[6];
          pfVar4 = *(float **)puVar1;
          if (0.0 < pfVar4[2]) {
            pfVar4[2] = 0.0;
            pfVar4 = *(float **)puVar1;
          }
        }
        fVar7 = (float)param_1[5];
        if (*pfVar4 <= fVar7 && fVar7 != *pfVar4) {
          *pfVar4 = fVar7;
          pfVar4 = *(float **)puVar1;
          if (pfVar4[2] <= 0.0 && pfVar4[2] != 0.0) {
            pfVar4[2] = 0.0;
            goto LAB_144ae067c;
          }
        }
      }
    }
    else {
      if (param_1[1] != 4) {
        if (0.0 < fVar7) {
          FUN_1448d6cba(param_1);
          uVar3 = FUN_1401e0ac6(param_1);
          param_1[2] = uVar3;
          lVar2 = *(longlong *)(param_1 + 10);
          uVar5 = param_1[9];
          *(float *)(lVar2 + (longlong)(int)uVar3 * 8) = fVar8;
          *(uint *)(lVar2 + 4 + (longlong)(int)uVar3 * 8) = uVar5;
          param_2 = FUN_1448d6d6a(param_1);
          uVar5 = 0;
          if ((int)param_1[2] < (int)(param_1[0xc] - 1)) {
            uVar5 = param_1[2] + 1;
          }
          param_1[2] = uVar5;
        }
        goto LAB_144ae04d2;
      }
      puVar1 = param_1 + 10;
      if (param_1[0xc] != 1) {
        param_1[0xc] = 0;
        if (param_1[0xd] == 1) {
          uVar5 = 0;
          uVar3 = 1;
        }
        else {
          FUN_1401e1376(puVar1,1);
          uVar5 = param_1[0xc];
          uVar3 = param_1[0xd];
        }
        param_1[0xc] = uVar5 + 1;
        if (uVar3 < uVar5 + 1) {
          FUN_1401e187e(puVar1,uVar5);
        }
        lVar2 = *(longlong *)(param_1 + 10);
        *(float *)(lVar2 + (longlong)(int)uVar5 * 8) = fVar8;
        *(undefined4 *)(lVar2 + 4 + (longlong)(int)uVar5 * 8) = 0;
        fVar7 = (float)param_1[3];
      }
      fVar6 = **(float **)puVar1;
      if (0.0001 < fVar7 / 2.7182817) {
        fVar7 = param_3 / (fVar7 / 2.7182817);
        fVar8 = fVar8 + (fVar6 - fVar8) *
                        (1.0 / (fVar7 * 0.25724632 * fVar7 * fVar7 +
                               fVar7 * 0.45053902 * fVar7 + fVar7 * 1.0074606 + 1.0));
      }
      **(float **)puVar1 = fVar8;
      if (0.0 < (float)param_1[7]) {
        param_3 = (float)param_1[7] * param_3;
        fVar8 = param_3 + fVar6;
        fVar6 = fVar6 - param_3;
        fVar7 = **(float **)puVar1;
        if (fVar8 <= fVar7) {
          fVar7 = fVar8;
        }
        if (fVar7 <= fVar6) {
          fVar7 = fVar6;
        }
        **(float **)puVar1 = fVar7;
      }
LAB_144ae067c:
      pfVar4 = *(float **)(param_1 + 10);
    }
    param_2 = (ulonglong)(uint)*pfVar4;
  }
LAB_144ae04d2:
  *param_1 = (uint)param_2;
LAB_144ae04d6:
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144ae08a0 FUN_144ae08a0 body=277 status=ok
// SIG undefined FUN_144ae08a0(void)

undefined4 * FUN_144ae08a0(undefined4 *param_1)

{
  longlong *plVar1;
  
  *param_1 = 0xbf800000;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  *(longlong **)(param_1 + 8) = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  param_1[10] = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0x10] = 0xffffffff;
  *(undefined8 *)(param_1 + 0x12) = 0;
  return param_1;
}



// FUNCTION 144ae09b6 FUN_144ae09b6 body=179 status=ok
// SIG undefined FUN_144ae09b6(void)

void FUN_144ae09b6(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    uStack_34 = *(undefined4 *)(param_1 + 0x20);
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    local_38 = param_2[4];
    uStack_30 = param_2[5];
    uStack_2c = param_2[7];
    local_28 = param_2[8];
    uStack_24 = param_2[9];
    uStack_20 = param_2[10];
    uStack_1c = param_2[0xb];
    if ((plVar1[1] != 0) && ((*(byte *)(plVar1[1] + 0x24) & 7) != 0)) {
      FUN_144b1fcbe(&local_48,plVar1);
      FUN_144b1fd46(&local_48,*(undefined8 *)(param_1 + 0x18));
      FUN_144b1fe18(&local_48,*(undefined8 *)(param_1 + 0x18));
      plVar1 = *(longlong **)(param_1 + 0x18);
    }
    (**(code **)(*plVar1 + 0x20))(plVar1,&local_48);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144ae0a6a FUN_144ae0a6a body=179 status=ok
// SIG undefined FUN_144ae0a6a(void)

void FUN_144ae0a6a(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    uStack_34 = *(undefined4 *)(param_1 + 0x20);
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    local_38 = param_2[4];
    uStack_30 = param_2[5];
    uStack_2c = param_2[7];
    local_28 = param_2[8];
    uStack_24 = param_2[9];
    uStack_20 = param_2[10];
    uStack_1c = param_2[0xb];
    if ((plVar1[1] != 0) && ((*(byte *)(plVar1[1] + 0x24) & 7) != 0)) {
      FUN_144b1fcbe(&local_48,plVar1);
      FUN_144b1fd46(&local_48,*(undefined8 *)(param_1 + 0x18));
      FUN_144b1fe18(&local_48,*(undefined8 *)(param_1 + 0x18));
      plVar1 = *(longlong **)(param_1 + 0x18);
    }
    (**(code **)(*plVar1 + 0x20))(plVar1,&local_48);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144ae0b6c FUN_144ae0b6c body=570 status=ok
// SIG undefined FUN_144ae0b6c(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ae0b6c(undefined8 param_1)

{
  undefined1 *_Dst;
  undefined8 *puVar1;
  int iVar2;
  DWORD DVar3;
  DWORD dwTlsIndex;
  DWORD DVar4;
  LPVOID lpTlsValue;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_11d8 [32];
  undefined1 local_11b8 [4352];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_11d8;
  dwTlsIndex = DAT_14c7612d8;
  if (DAT_14c7612d8 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar4 = 0xffffffff;
    LOCK();
    bVar7 = DAT_14c7612d8 != 0xffffffff;
    DVar3 = dwTlsIndex;
    if (bVar7) {
      DVar4 = DAT_14c7612d8;
      DVar3 = DAT_14c7612d8;
    }
    DAT_14c7612d8 = DVar3;
    UNLOCK();
    if (bVar7) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar4;
    }
  }
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_1400bf9a2(local_11b8);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  memset(local_11b8,0,0x1180);
  local_b0 = CONCAT44(0x20,(undefined4)local_b0);
  local_94 = 0x20;
  uStack_90 = 0xffffffff;
  iVar2 = *(int *)((longlong)lpTlsValue + 0x1198);
  *(uint *)((longlong)lpTlsValue + 0x1198) = iVar2 + 1U;
  if (*(uint *)((longlong)lpTlsValue + 0x119c) < iVar2 + 1U) {
    FUN_14791fc56((longlong)lpTlsValue + 0x10,iVar2);
  }
  lVar6 = (longlong)lpTlsValue + 0x10;
  if (*(longlong *)((longlong)lpTlsValue + 0x1190) != 0) {
    lVar6 = *(longlong *)((longlong)lpTlsValue + 0x1190);
  }
  lVar5 = (longlong)iVar2 * 0x1180;
  _Dst = (undefined1 *)(lVar6 + lVar5);
  *(undefined8 *)(&DAT_00001100 + lVar5 + lVar6) = 0;
  *(undefined8 *)(lVar6 + 0x1108 + lVar5) = 0x2000000000;
  *(undefined8 *)(lVar6 + 0x1118 + lVar5) = 0;
  puVar1 = (undefined8 *)(lVar6 + 0x1120 + lVar5);
  *puVar1 = 0x2000000000;
  puVar1[1] = 0xffffffff;
  if (_Dst != local_11b8) {
    memmove(_Dst,local_11b8,0x1100);
    local_b8 = 0;
    *(undefined4 *)(_Dst + 0x110c) = 0x20;
    local_b0 = 0x2000000000;
    *(undefined4 *)(_Dst + 0x1110) = 0;
    local_a0 = 0;
    *(undefined4 *)(_Dst + 0x1124) = 0x20;
    uStack_98 = 0;
    local_94 = 0;
    *(undefined4 *)(_Dst + 0x112c) = 0;
    uStack_90 = 0xffffffff;
    uStack_8c = 0;
  }
  *(undefined4 *)(_Dst + 0x1160) = local_58;
  *(undefined4 *)(_Dst + 0x1164) = uStack_54;
  *(undefined4 *)(_Dst + 0x1168) = uStack_50;
  *(undefined4 *)(_Dst + 0x116c) = uStack_4c;
  *(undefined4 *)(_Dst + 0x1150) = local_68;
  *(undefined4 *)(_Dst + 0x1154) = uStack_64;
  *(undefined4 *)(_Dst + 0x1158) = uStack_60;
  *(undefined4 *)(_Dst + 0x115c) = uStack_5c;
  *(undefined4 *)(_Dst + 0x1140) = local_78;
  *(undefined4 *)(_Dst + 0x1144) = uStack_74;
  *(undefined4 *)(_Dst + 0x1148) = uStack_70;
  *(undefined4 *)(_Dst + 0x114c) = uStack_6c;
  *(undefined4 *)(_Dst + 0x1130) = local_88;
  *(undefined4 *)(_Dst + 0x1134) = uStack_84;
  *(undefined4 *)(_Dst + 0x1138) = uStack_80;
  *(undefined4 *)(_Dst + 0x113c) = uStack_7c;
  *(undefined8 *)(_Dst + 0x1170) = 0;
  local_48 = 0;
  *(undefined4 *)(_Dst + 0x1178) = 0;
  local_40 = 0;
  FUN_1447a64de();
  if ((local_38 ^ (ulonglong)auStack_11d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 144ae0da8 FUN_144ae0da8 body=29 status=ok
// SIG undefined FUN_144ae0da8(void)

undefined8 FUN_144ae0da8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144ae0dc6 FUN_144ae0dc6 body=509 status=ok
// SIG undefined FUN_144ae0dc6(void)

void FUN_144ae0dc6(longlong *param_1,float *param_2,float *param_3,longlong *param_4)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_b8 [32];
  float local_98;
  float local_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  pcVar1 = *(code **)(*param_1 + 0x3e0);
  if (pcVar1 == FUN_140c9189e) {
    if (((int)param_1[0x12] == 0) ||
       (fVar5 = (float)(**(code **)(*param_1 + 0x2b0))(param_1), fVar5 <= 0.0)) goto LAB_144ae0e36;
  }
  else {
    cVar2 = (*pcVar1)(param_1);
    if (cVar2 == '\0') goto LAB_144ae0e36;
  }
  fVar5 = *param_3;
  fVar7 = *param_2;
  local_94 = fVar7;
  fVar6 = (float)(**(code **)(*param_1 + 0x2b0))(param_1);
  uVar4 = 2;
  if ((0.0 < fVar6) && (fVar6 < ABS(*param_3))) {
    uVar4 = (uint)(longlong)(fVar5 / fVar6);
    uVar3 = 1000;
    if (uVar4 < 1000) {
      uVar3 = uVar4;
    }
    uVar4 = 2;
    if (2 < uVar3) {
      uVar4 = uVar3;
    }
  }
  fVar8 = fVar5;
  while ((local_98 = fVar7 + fVar8, local_98 < 0.0 || (fVar6 < local_98))) {
    if (fVar6 <= local_98) {
      local_98 = fVar6;
    }
    if (local_98 <= 0.0) {
      local_98 = 0.0;
    }
    (**(code **)(*param_1 + 0x2c8))(param_1,&local_94,&local_98,param_4);
    if ((*param_4 == 0) || (*(char *)(*param_4 + 0x1c) != '\x01')) goto LAB_144ae0e36;
    fVar7 = 0.0;
    fVar9 = local_98 - local_94;
    if (fVar5 < 0.0) {
      fVar7 = (float)(**(code **)(*param_1 + 0x2b0))(param_1);
    }
    fVar8 = fVar8 - fVar9;
    uVar4 = uVar4 - 1;
    local_98 = fVar7;
    local_94 = fVar7;
    if (uVar4 == 0) goto LAB_144ae0e36;
  }
  (**(code **)(*param_1 + 0x2c8))(param_1,&local_94,&local_98,param_4);
LAB_144ae0e36:
  if ((local_90 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144ae0fc4 FUN_144ae0fc4 body=57 status=ok
// SIG undefined FUN_144ae0fc4(void)

void FUN_144ae0fc4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cacca00 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cacca00 = FUN_140002ddd(FUN_1463a8113,uVar1,L"AnimSubsystem_Base");
  }
  return;
}



// FUNCTION 144ae0ffe FUN_144ae0ffe body=317 status=ok
// SIG undefined FUN_144ae0ffe(void)

void FUN_144ae0ffe(longlong param_1,int param_2,int param_3)

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
    uVar5 = (longlong)param_2 * 8;
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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_144ae106c;
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
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
      }
    }
LAB_144ae106c:
    iVar4 = (int)(uVar5 >> 3);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar4) {
      iVar7 = iVar4;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,8,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 144ae113c FUN_144ae113c body=221 status=ok
// SIG undefined FUN_144ae113c(void)

longlong FUN_144ae113c(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cacda40 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147957ee7;
    local_40 = FUN_1463ac712;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"AssetUserData",&DAT_14cacda40,&DAT_147957ee6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cacda40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144ae121a FUN_144ae121a body=250 status=ok
// SIG undefined FUN_144ae121a(void)

undefined8 FUN_144ae121a(longlong param_1,longlong param_2,longlong param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (param_2 != 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cace978) && (FUN_144b3d300(&DAT_14cace978), DAT_14cace978 == -1)) {
      DAT_14cace974 = '\0';
      FUN_14052bb08(DAT_14c872ce0,L"Kismet",L"bPersistentUberGraphFrame",&DAT_14cace974,
                    &DAT_14c872ce8);
      _Init_thread_footer(&DAT_14cace978);
    }
    if (((DAT_14cace974 == '\x01') && (*(longlong *)(param_1 + 0x2c8) != 0)) &&
       (*(longlong *)(param_1 + 0x2d0) == param_3 && *(longlong *)(param_1 + 0x2d0) != 0)) {
      return *(undefined8 *)(param_2 + *(int *)(*(longlong *)(param_1 + 0x2c8) + 0x44));
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(**(longlong **)(param_1 + 0x40) + 0x388);
  if (UNRECOVERED_JUMPTABLE == (code *)&LAB_144aff918) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000144ae1311. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)(*(longlong **)(param_1 + 0x40),param_2,param_3);
  return uVar1;
}



// FUNCTION 144ae1314 FUN_144ae1314 body=743 status=ok
// SIG undefined FUN_144ae1314(void)

void FUN_144ae1314(longlong *param_1,int param_2,int param_3)

{
  ulonglong *puVar1;
  longlong *plVar2;
  code *pcVar3;
  int iVar4;
  undefined8 *_Dst;
  int iVar5;
  undefined8 *puVar6;
  uint uVar7;
  longlong *plVar8;
  int iVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined1 auStack_98 [44];
  int local_6c;
  longlong *local_68;
  ulonglong local_60;
  byte local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_6c = param_3;
  if (0 < param_3) {
    puVar1 = (ulonglong *)param_1[1];
    if ((int)puVar1[1] == 0) {
      _Dst = (undefined8 *)0x0;
    }
    else {
      if ((*(byte *)(param_1 + 3) & 1) == 0) {
        uVar10 = *puVar1;
      }
      else {
        uVar10 = *puVar1;
        if ((uVar10 & 1) != 0) {
          uVar10 = (longlong)puVar1 + ((longlong)uVar10 >> 0x18);
        }
      }
      _Dst = (undefined8 *)((longlong)(int)param_1[2] * (longlong)param_2 + uVar10);
    }
    local_68 = param_1;
    if ((*(byte *)(*param_1 + 0x39) & 2) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
    }
    iVar9 = 0;
    do {
      plVar8 = (longlong *)*param_1;
      if ((*(byte *)((longlong)plVar8 + 0x39) & 2) == 0) {
        if (*(code **)(*plVar8 + 0x160) == FUN_14491456e) {
          plVar2 = (longlong *)plVar8[0xe];
          if (*(code **)(*plVar2 + 0x2e8) == FUN_1449e46ce) {
            uVar7 = -*(int *)((longlong)plVar2 + 0x5c) &
                    ((int)plVar2[0xb] + *(int *)((longlong)plVar2 + 0x5c)) - 1U;
            iVar5 = 0;
            local_60 = (ulonglong)*(uint *)(plVar8 + 6);
            memset(_Dst,0,(longlong)(int)(uVar7 * *(uint *)(plVar8 + 6)));
            plVar8 = (longlong *)plVar2[0x17];
            if (plVar8 != (longlong *)0x0) {
              pcVar3 = *(code **)(*plVar8 + 8);
              bVar11 = true;
              if (pcVar3 != (code *)&LAB_144a77730 && pcVar3 != (code *)&LAB_144a77706) {
                (*pcVar3)(plVar8);
                bVar11 = (local_4c & 2) == 0;
              }
              if ((0 < (int)local_60) && (bVar11)) {
                puVar6 = _Dst;
                uVar10 = local_60;
                do {
                  pcVar3 = *(code **)(*plVar8 + 0x10);
                  if (pcVar3 == (code *)&LAB_144a77714) {
                    *puVar6 = 0;
                    *(undefined4 *)(puVar6 + 1) = 0;
                  }
                  else if (pcVar3 == (code *)&LAB_144a77724) {
                    *puVar6 = 0;
                    *(undefined1 *)(puVar6 + 1) = 2;
                  }
                  else {
                    (*pcVar3)(plVar8);
                  }
                  puVar6 = (undefined8 *)((longlong)puVar6 + (longlong)(int)uVar7);
                  uVar10 = uVar10 - 1;
                } while (uVar10 != 0);
              }
              iVar5 = (int)plVar8[1];
              param_1 = local_68;
            }
            if ((iVar5 < (int)plVar2[0xb]) &&
               (plVar8 = (longlong *)plVar2[0xe], plVar8 != (longlong *)0x0)) {
              do {
                iVar4 = *(int *)((longlong)plVar8 + 0x34) * (int)plVar8[6] +
                        *(int *)((longlong)plVar8 + 0x44);
                bVar11 = iVar4 <= iVar5;
                if ((0 < (int)local_60) && (uVar10 = local_60, puVar6 = _Dst, iVar5 < iVar4)) {
                  do {
                    if ((*(byte *)((longlong)plVar8 + 0x39) & 2) == 0) {
                      (**(code **)(*plVar8 + 0x160))(plVar8);
                    }
                    else {
                      memset((void *)((longlong)*(int *)((longlong)plVar8 + 0x44) + (longlong)puVar6
                                     ),0,
                             (longlong)(int)plVar8[6] * (longlong)*(int *)((longlong)plVar8 + 0x34))
                      ;
                    }
                    uVar10 = uVar10 - 1;
                    puVar6 = (undefined8 *)((longlong)puVar6 + (longlong)(int)uVar7);
                  } while (uVar10 != 0);
                  bVar11 = false;
                }
              } while ((!bVar11) && (plVar8 = (longlong *)plVar8[9], plVar8 != (longlong *)0x0));
            }
          }
          else {
            (**(code **)(*plVar2 + 0x2e8))(plVar2);
          }
        }
        else {
          (**(code **)(*plVar8 + 0x160))();
        }
      }
      else {
        memset(_Dst,0,(longlong)(int)plVar8[6] * (longlong)*(int *)((longlong)plVar8 + 0x34));
      }
      iVar9 = iVar9 + 1;
      _Dst = (undefined8 *)((longlong)_Dst + (longlong)(int)param_1[2]);
    } while (iVar9 != local_6c);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144ae161a FUN_144ae161a body=499 status=ok
// SIG undefined FUN_144ae161a(void)

void FUN_144ae161a(void *param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  void *_Src;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)((longlong)param_1 + 0x18);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3);
  }
  if (uVar3 < 7) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 6;
    _Src = *(void **)((longlong)param_1 + 0x10);
joined_r0x000144ae1792:
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 2);
    param_2 = 0;
    uVar8 = 0;
  }
  else {
    lVar7 = (longlong)(int)uVar3;
    if (6 < *(uint *)((longlong)param_1 + 0x1c)) {
      lVar7 = lVar7 + ((ulonglong)(lVar7 * 3) >> 3) + 0x10;
    }
    uVar8 = lVar7 * 2;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar8 + 0xf;
        if (uVar8 < 0x7ff1) {
          uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar5 = 0x32 - (ulonglong)bVar2;
            do {
              uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar5 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar5 & 0xffffffff] & 0xf) == 0) goto LAB_144ae16a7;
              lVar7 = uVar4 + 1 + uVar5;
              uVar5 = uVar5 - 1;
            } while (lVar7 != 0x33);
          }
          uVar8 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar8 = (ulonglong)DAT_14c841df8;
          }
          uVar8 = -uVar8 & ((uVar1 & 0xfffffffffffffff0) + uVar8) - 1;
        }
      }
      else {
        uVar8 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar8,0);
      }
    }
LAB_144ae16a7:
    uVar8 = uVar8 >> 1;
    uVar6 = (uint)uVar8;
    if ((int)uVar6 < (int)uVar3) {
      *(undefined4 *)((longlong)param_1 + 0x1c) = 0x7fffffff;
      uVar8 = 0x7fffffff;
      _Src = *(void **)((longlong)param_1 + 0x10);
    }
    else {
      *(uint *)((longlong)param_1 + 0x1c) = uVar6;
      _Src = *(void **)((longlong)param_1 + 0x10);
      if (uVar6 < 7) goto joined_r0x000144ae1792;
    }
    if (_Src == (void *)0x0) {
      FUN_1446efa72((longlong)param_1 + 0x10,0,uVar8,2);
      memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)param_2 * 2);
      return;
    }
  }
  FUN_1446efa72((longlong)param_1 + 0x10,param_2,uVar8,2);
  return;
}



// FUNCTION 144ae180e FUN_144ae180e body=118 status=ok
// SIG undefined FUN_144ae180e(void)

void FUN_144ae180e(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar2 = (int)param_2[1];
  if (0 < iVar2) {
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(*param_2 + lVar4 * 8);
      if (lVar3 != 0) {
        uVar1 = *(undefined4 *)(lVar3 + 0xc);
        iVar2 = *(int *)(param_1 + 0x78);
        *(uint *)(param_1 + 0x78) = iVar2 + 1U;
        if (*(uint *)(param_1 + 0x7c) < iVar2 + 1U) {
          FUN_1447de67e(param_1 + 0x60,iVar2);
        }
        lVar3 = *(longlong *)(param_1 + 0x70);
        if (*(longlong *)(param_1 + 0x70) == 0) {
          lVar3 = param_1 + 0x60;
        }
        *(undefined4 *)(lVar3 + (longlong)iVar2 * 4) = uVar1;
        iVar2 = (int)param_2[1];
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar2);
  }
  return;
}



// FUNCTION 144ae1884 FUN_144ae1884 body=505 status=ok
// SIG undefined FUN_144ae1884(void)

void FUN_144ae1884(longlong param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  byte bVar4;
  void *_Dst;
  undefined4 *puVar5;
  ulonglong uVar6;
  void *pvVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = *(int *)(param_1 + 0xa08);
  uVar8 = param_2 - iVar1;
  if (uVar8 != 0 && iVar1 <= (int)param_2) {
    uVar6 = (ulonglong)param_2;
    iVar10 = *(int *)(param_1 + 0xa0c);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_1401cab6a(param_1);
      iVar11 = *(int *)(param_1 + 0xa08);
      iVar10 = *(int *)(param_1 + 0xa0c);
    }
    *(uint *)(param_1 + 0xa08) = iVar11 + uVar8;
    if ((uint)(iVar10 - iVar11) < uVar8) {
      FUN_1479aff5a(param_1);
    }
    lVar3 = *(longlong *)(param_1 + 0xa00);
    if (*(longlong *)(param_1 + 0xa00) == 0) {
      lVar3 = param_1;
    }
    if (iVar11 < (int)param_2) {
      iVar10 = *(int *)(param_1 + 0xa2c);
      puVar5 = (undefined4 *)(lVar3 + uVar6 * 0x28 + -0x24);
      do {
        iVar9 = (int)uVar6;
        if (iVar10 != 0) {
          *(int *)(lVar3 + (longlong)*(int *)(param_1 + 0xa28) * 0x28) = iVar9 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)(param_1 + 0xa2c) < 1) {
          uVar2 = 0xffffffff;
        }
        else {
          uVar2 = *(undefined4 *)(param_1 + 0xa28);
        }
        uVar6 = uVar6 - 1;
        *puVar5 = uVar2;
        *(int *)(param_1 + 0xa28) = iVar9 + -1;
        iVar10 = *(int *)(param_1 + 0xa2c) + 1;
        *(int *)(param_1 + 0xa2c) = iVar10;
        puVar5 = puVar5 + -10;
      } while ((longlong)iVar11 < (longlong)uVar6);
    }
    if (iVar1 == 0) {
      pvVar7 = (void *)(param_1 + 0xa10);
      *(uint *)(param_1 + 0xa20) = uVar8;
      uVar12 = uVar8 + 0x1f >> 5;
      if (*(int *)(param_1 + 0xa24) + 0x1fU >> 5 < uVar12) {
        FUN_1401cadc2(pvVar7,0,uVar12,4);
        *(uint *)(param_1 + 0xa24) = uVar8 + 0x1f & 0xffffffe0;
      }
      _Dst = *(void **)(param_1 + 0xa18);
      if (*(void **)(param_1 + 0xa18) == (void *)0x0) {
        _Dst = pvVar7;
      }
      if (uVar8 < 0x101) {
        uVar12 = uVar12 + (uVar12 == 0);
      }
      memset(_Dst,0,(ulonglong)(uVar12 << 2));
      iVar1 = *(int *)(param_1 + 0xa20);
      iVar10 = iVar1 + 0x1f;
      if (-1 < iVar1) {
        iVar10 = iVar1;
      }
      if (iVar1 % 0x20 != 0) {
        if (*(void **)(param_1 + 0xa18) != (void *)0x0) {
          pvVar7 = *(void **)(param_1 + 0xa18);
        }
        bVar4 = -(char)(iVar1 % 0x20);
        *(uint *)((longlong)pvVar7 + (longlong)(iVar10 >> 5) * 4) =
             (uint)(*(int *)((longlong)pvVar7 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    else if (-1 < (int)uVar8) {
      uVar2 = FUN_1407c4842(param_1 + 0xa10,uVar8);
      FUN_142b31174(param_1 + 0xa10,uVar2,uVar8,0);
      return;
    }
  }
  return;
}



// FUNCTION 144ae1a7e FUN_144ae1a7e body=339 status=ok
// SIG undefined FUN_144ae1a7e(void)

void FUN_144ae1a7e(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 in_stack_ffffffffffffffc8;
  undefined8 uVar3;
  undefined4 uVar4;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uVar1 = (ulonglong)*(uint *)(param_1 + 0x40);
  lVar2 = *(longlong *)(param_1 + 0x38);
  if (*(code **)(*param_2 + 0x90) == FUN_144915770) {
    if (0 < (int)*(uint *)(param_1 + 0x40)) {
      do {
        if (*(code **)(*param_2 + 0x88) == FUN_1447507a2) {
          in_stack_ffffffffffffffc8 =
               CONCAT44((int)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20),
                        (uint)*(byte *)(param_2 + 2));
          FUN_144710830(param_2 + 8,0,lVar2,0x20000000,in_stack_ffffffffffffffc8);
        }
        else {
          (**(code **)(*param_2 + 0x88))(param_2,lVar2,0,0);
        }
        uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
        lVar2 = lVar2 + 8;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
  }
  else {
    uVar4 = 0;
    (**(code **)(*param_2 + 0x90))(param_2,lVar2,uVar1,0,0);
  }
  if (*(code **)(*param_2 + 0x88) == FUN_1447507a2) {
    uVar3 = CONCAT44(uVar4,(uint)*(byte *)(param_2 + 2));
    FUN_144710830(param_2 + 8,0,param_1 + 0x18,0x20000000,uVar3);
    uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
  }
  else {
    (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x18,0,0);
  }
  if (*(code **)(*param_2 + 0x88) == FUN_1447507a2) {
    FUN_144710830(param_2 + 8,0,param_1 + 0xe8,0x20000000,
                  CONCAT44(uVar4,(uint)*(byte *)(param_2 + 2)));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000144ae1bce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0xe8,0,0);
  return;
}



// FUNCTION 144ae1bd2 FUN_144ae1bd2 body=314 status=ok
// SIG undefined FUN_144ae1bd2(void)

float FUN_144ae1bd2(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  float fVar4;
  
  if (*(code **)(*param_1 + 0x4a0) == FUN_14064a596) {
    lVar2 = param_1[0x22];
    if (lVar2 == 0) {
      lVar2 = param_1[0x16];
      if (lVar2 == 0) {
        lVar2 = FUN_1448abda6(param_1);
      }
LAB_144ae1c8f:
      plVar3 = *(longlong **)(lVar2 + 0x118);
      if (plVar3 == (longlong *)0x0) {
        plVar3 = (longlong *)FUN_14572cb46(lVar2);
        goto LAB_144ae1caa;
      }
    }
    else if (((((*(int *)(lVar2 + 0x11c) == 0) || (uVar1 = *(uint *)(lVar2 + 0x118), (int)uVar1 < 0)
               ) || (DAT_14c9647dc <= (int)uVar1)) ||
             ((plVar3 = (longlong *)
                        ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
              plVar3 == (longlong *)0x0 || ((int)plVar3[2] != *(int *)(lVar2 + 0x11c))))) ||
            (((*(uint *)(plVar3 + 1) & 0x10200000) != 0 ||
             (plVar3 = (longlong *)*plVar3, plVar3 == (longlong *)0x0)))) {
      lVar2 = *(longlong *)(lVar2 + 0xb0);
      if ((lVar2 != 0) || (lVar2 = FUN_1448abda6(), lVar2 != 0)) goto LAB_144ae1c8f;
      goto LAB_144ae1cdb;
    }
  }
  else {
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x4a0))(param_1);
LAB_144ae1caa:
    if (plVar3 == (longlong *)0x0) {
LAB_144ae1cdb:
      plVar3 = (longlong *)FUN_144800528();
      lVar2 = plVar3[0x22];
      if (lVar2 == 0) {
        (**(code **)(*plVar3 + 1000))(plVar3);
        lVar2 = plVar3[0x22];
      }
      fVar4 = *(float *)(lVar2 + 0x38);
      goto LAB_144ae1c74;
    }
  }
  if (*(code **)(*plVar3 + 0x668) == FUN_14480014e) {
    fVar4 = (float)FUN_14480014e(plVar3);
  }
  else {
    fVar4 = (float)(**(code **)(*plVar3 + 0x668))(plVar3);
  }
LAB_144ae1c74:
  return fVar4 * *(float *)(param_1 + 0x3f);
}



// FUNCTION 144ae1d0c FUN_144ae1d0c body=185 status=ok
// SIG undefined FUN_144ae1d0c(void)

undefined8 FUN_144ae1d0c(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (((*(byte *)(param_1 + 0x2d5) & 0x20) != 0) &&
     (lVar2 = *(longlong *)(param_1 + 0xa8), lVar2 != 0)) {
    while ((DAT_14cad1f88 == 0 && (*(int *)(lVar2 + 0x1ec) != 0))) {
      uVar1 = *(uint *)(lVar2 + 0x1e8);
      if ((int)uVar1 < 0) {
        return 0;
      }
      if (DAT_14c9647dc <= (int)uVar1) {
        return 0;
      }
      plVar3 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if (plVar3 == (longlong *)0x0) {
        return 0;
      }
      if ((int)plVar3[2] != *(int *)(lVar2 + 0x1ec)) {
        return 0;
      }
      if ((*(uint *)(plVar3 + 1) & 0x10200000) != 0) {
        return 0;
      }
      if ((*(uint *)(plVar3 + 1) & 0x10200000) != 0) {
        return 0;
      }
      if (*plVar3 == 0) {
        return 0;
      }
      if (*(longlong *)(*plVar3 + 0xa8) == 0) {
        return 0;
      }
      if (((*(uint *)(plVar3 + 1) & 0x10200000) == 0) && (lVar2 = FUN_14479d2ce(), lVar2 != 0)) {
        lVar2 = *(longlong *)(lVar2 + 0xa8);
      }
      else {
        lVar2 = 0;
      }
    }
  }
  return 0;
}



// FUNCTION 144ae1dc6 FUN_144ae1dc6 body=231 status=ok
// SIG undefined FUN_144ae1dc6(void)

undefined4 * FUN_144ae1dc6(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
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
  undefined4 *puVar13;
  undefined4 *puVar14;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar6 = param_2[4];
  uVar7 = param_2[5];
  uVar8 = param_2[6];
  uVar9 = param_2[7];
  uVar10 = *(undefined4 *)((longlong)param_2 + 0x1e);
  uVar11 = *(undefined4 *)((longlong)param_2 + 0x22);
  uVar12 = *(undefined4 *)((longlong)param_2 + 0x26);
  *(undefined4 *)((longlong)param_1 + 0x1a) = *(undefined4 *)((longlong)param_2 + 0x1a);
  *(undefined4 *)((longlong)param_1 + 0x1e) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0x22) = uVar11;
  *(undefined4 *)((longlong)param_1 + 0x26) = uVar12;
  param_1[4] = uVar6;
  param_1[5] = uVar7;
  param_1[6] = uVar8;
  param_1[7] = uVar9;
  *param_1 = uVar2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  *(undefined8 *)(param_1 + 0x14) = 0;
  iVar1 = param_2[0x16];
  puVar13 = *(undefined4 **)(param_2 + 0x14);
  param_1[0x16] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x17] = 8;
  }
  else {
    puVar14 = param_2 + 0xc;
    if (puVar13 != (undefined4 *)0x0) {
      puVar14 = puVar13;
    }
    FUN_14470be6c(param_1 + 0xc,iVar1,0);
    puVar13 = *(undefined4 **)(param_1 + 0x14);
    if (*(undefined4 **)(param_1 + 0x14) == (undefined4 *)0x0) {
      puVar13 = param_1 + 0xc;
    }
    memcpy(puVar13,puVar14,(longlong)iVar1 << 2);
  }
  *(undefined8 *)(param_1 + 0x1c) = 0;
  iVar1 = param_2[0x1e];
  puVar13 = *(undefined4 **)(param_2 + 0x1c);
  param_1[0x1e] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x1f] = 4;
  }
  else {
    puVar14 = param_2 + 0x18;
    if (puVar13 != (undefined4 *)0x0) {
      puVar14 = puVar13;
    }
    FUN_1447163e6(param_1 + 0x18,iVar1,0);
    puVar13 = *(undefined4 **)(param_1 + 0x1c);
    if (*(undefined4 **)(param_1 + 0x1c) == (undefined4 *)0x0) {
      puVar13 = param_1 + 0x18;
    }
    memcpy(puVar13,puVar14,(longlong)iVar1 << 2);
  }
  return param_1;
}



// FUNCTION 144ae1eae FUN_144ae1eae body=657 status=ok
// SIG undefined FUN_144ae1eae(void)

undefined8 FUN_144ae1eae(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  code *pcVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(byte *)((longlong)param_1 + 0xc72) & 8) != 0) goto LAB_144ae1fef;
  lVar11 = param_1[0xcb];
  if (lVar11 == 0) {
    lVar11 = param_1[0xcc];
    if ((DAT_14c950c29 & lVar11 != 0) != 0) goto LAB_144ae20df;
    if (lVar11 == 0) goto LAB_144ae1fef;
  }
  else if (DAT_14c950c29 == 1) {
LAB_144ae20df:
    FUN_1456cec3c(lVar11);
  }
  if (DAT_14cb06da8 == 0) {
    local_40 = &local_28;
    local_28 = FUN_1449e2820;
    local_30 = FUN_14081d0ea;
    local_38 = &LAB_1464003b0;
    local_48 = &LAB_147d17bdf;
    local_50 = &LAB_1417edf22;
    local_58 = L"Engine";
    local_60 = 0;
    local_68 = 0x10000000;
    local_70 = 8;
    local_78 = 0x588;
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
  }
  lVar4 = DAT_14cb07778;
  if (((*(int *)(DAT_14cb06da8 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
      (*(longlong *)
        (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
        (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) == DAT_14cb06da8 + 0x30)) &&
     ((*(byte *)((longlong)param_1 + 0xc62) & 2) != 0)) {
    iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar2 == 2)) {
      uVar10 = 0;
    }
    else if (iVar2 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar10 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar10 = 1;
    }
    if (*(int *)(lVar4 + uVar10 * 4) != 0) {
      if (*(code **)(*param_1 + 0xd20) != FUN_14479f92a) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
      }
      pcVar3 = *(code **)(*param_1 + 0xbf0);
      if (pcVar3 == (code *)&LAB_1447a6898) {
        lVar11 = (longlong)(int)param_1[0x2cc];
        if (lVar11 < 1) {
LAB_144ae212d:
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
        }
      }
      else {
        cVar5 = (*pcVar3)(param_1);
        if (cVar5 == '\0') goto LAB_144ae212d;
        lVar11 = (longlong)(int)param_1[0x2cc];
        if (lVar11 == 0) goto LAB_144ae1fef;
      }
      plVar8 = (longlong *)param_1[0x2cb];
      plVar1 = plVar8 + lVar11;
      do {
        if ((*plVar8 != 0) && ((*(byte *)(*plVar8 + 0x2b5) & 8) != 0)) {
          uVar9 = CONCAT71((int7)((ulonglong)plVar8 >> 8),1);
          goto LAB_144ae1ff1;
        }
        plVar8 = plVar8 + 1;
      } while (plVar8 != plVar1);
    }
  }
LAB_144ae1fef:
  uVar9 = 0;
LAB_144ae1ff1:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 144ae2166 FUN_144ae2166 body=65 status=ok
// SIG undefined FUN_144ae2166(void)

undefined8 * FUN_144ae2166(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if ((*(byte *)(param_1 + 0x9c) & 1) == 0) {
    puVar2 = &DAT_14c846480;
    puVar3 = param_2;
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  else {
    FUN_140084aae(param_1,param_2,param_3,param_1 + 0x240);
  }
  return param_2;
}



// FUNCTION 144ae21a8 FUN_144ae21a8 body=140 status=ok
// SIG undefined FUN_144ae21a8(void)

void FUN_144ae21a8(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x100);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 5);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x100,0,param_3,0x20);
    memmove(*(void **)((longlong)param_1 + 0x100),param_1,(longlong)param_2 << 5);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x100,param_2,param_3,0x20);
  return;
}



// FUNCTION 144ae2234 FUN_144ae2234 body=337 status=ok
// SIG undefined FUN_144ae2234(void)

ulonglong FUN_144ae2234(byte *param_1,double param_2)

{
  byte bVar1;
  byte bVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  undefined1 auStack_e8 [32];
  double local_c8;
  undefined1 local_c0 [16];
  byte *local_b0;
  undefined1 local_a1;
  undefined1 *local_a0;
  byte **local_98;
  LARGE_INTEGER local_90;
  undefined1 *local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  bVar2 = *param_1;
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((bVar2 & 1) == 0) {
    do {
      if ((param_2 < INFINITY) &&
         (QueryPerformanceCounter(&local_90),
         param_2 <= (double)local_90.QuadPart * DAT_14c83f420 + 16777216.0)) {
        uVar3 = 0;
        break;
      }
      if ((bVar2 & 2) == 0) {
        LOCK();
        bVar1 = *param_1;
        if (bVar2 == bVar1) {
          *param_1 = 2;
        }
        UNLOCK();
        if (bVar2 == bVar1) goto LAB_144ae2306;
      }
      else {
LAB_144ae2306:
        local_88 = &local_a1;
        local_90.QuadPart = (LONGLONG)&DAT_142743e10;
        local_98 = &local_b0;
        local_a0 = &LAB_142743e12;
        local_c8 = param_2;
        local_b0 = param_1;
        FUN_1456d3e9c(local_c0,param_1,&local_a0,&local_90);
      }
      bVar2 = *param_1;
    } while ((bVar2 & 1) == 0);
  }
  if ((local_80 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 144ae2386 FUN_144ae2386 body=262 status=ok
// SIG undefined FUN_144ae2386(void)

undefined8 FUN_144ae2386(void)

{
  uint uVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined4 extraout_var;
  ulonglong uVar8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cadba18) {
    FUN_144b3d300(&DAT_14cadba18);
    if (DAT_14cadba18 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar7 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.EdgeDetection.Enabled",1);
      if (plVar7 == (longlong *)0x0) {
        DAT_14cadba10 = 0;
      }
      else {
        DAT_14cadba10 = (**(code **)(*plVar7 + 0x68))(plVar7);
      }
      _Init_thread_footer(&DAT_14cadba18);
    }
  }
  lVar2 = DAT_14cadba10;
  if (DAT_14cadba10 == 0) {
    uVar6 = 0;
  }
  else {
    uVar1 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
    uVar5 = (ulonglong)uVar1;
    if (((uVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (uVar1 == 2)) {
      uVar8 = 0;
    }
    else if (uVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      uVar5 = CONCAT44(extraout_var,DVar4);
      uVar8 = (ulonglong)(DVar3 != DVar4);
    }
    else {
      uVar8 = 1;
    }
    uVar6 = CONCAT71((int7)(uVar5 >> 8),*(int *)(lVar2 + uVar8 * 4) == 1);
  }
  return uVar6;
}



// FUNCTION 144ae248c FUN_144ae248c body=355 status=ok
// SIG undefined FUN_144ae248c(void)

undefined8 * FUN_144ae248c(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  ulonglong uVar6;
  bool bVar7;
  
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cadba18) {
    FUN_144b3d300(&DAT_14cadba18);
    if (DAT_14cadba18 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar5 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.EdgeDetection.Enabled",1);
      if (plVar5 == (longlong *)0x0) {
        DAT_14cadba10 = 0;
      }
      else {
        DAT_14cadba10 = (**(code **)(*plVar5 + 0x68))(plVar5);
      }
      _Init_thread_footer(&DAT_14cadba18);
    }
  }
  lVar2 = DAT_14cadba10;
  if (DAT_14cadba10 == 0) {
    bVar7 = false;
  }
  else {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
      uVar6 = 0;
    }
    else if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      uVar6 = (ulonglong)(DVar3 != DVar4);
    }
    else {
      uVar6 = 1;
    }
    bVar7 = *(int *)(lVar2 + uVar6 * 4) == 1;
  }
  *(byte *)((longlong)param_1 + 4) = *(byte *)((longlong)param_1 + 4) & 0xfe | bVar7;
  param_1[1] = 0x3f80000040000000;
  param_1[2] = 0x3f80000040000000;
  param_1[3] = 0x477de800;
  param_1[4] = 0x400000003f800000;
  param_1[5] = 0x461c400044bb8000;
  param_1[6] = 0x3f0000003f666666;
  *(undefined4 *)(param_1 + 7) = 0x3dcccccd;
  return param_1;
}



// FUNCTION 144ae25f0 FUN_144ae25f0 body=574 status=ok
// SIG undefined FUN_144ae25f0(void)

undefined8 * FUN_144ae25f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  DWORD DVar5;
  DWORD DVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cade0d0) {
    FUN_144b3d300(&DAT_14cade0d0);
    if (DAT_14cade0d0 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar7 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.OutlineTech.Enabled",1);
      if (plVar7 == (longlong *)0x0) {
        DAT_14cade0c8 = 0;
      }
      else {
        DAT_14cade0c8 = (**(code **)(*plVar7 + 0x68))(plVar7);
      }
      _Init_thread_footer(&DAT_14cade0d0);
    }
  }
  lVar3 = DAT_14cade0c8;
  if (DAT_14cade0c8 == 0) {
    bVar4 = 2;
  }
  else {
    iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar2 == 2)) {
      uVar8 = 0;
    }
    else if (iVar2 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar8 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar8 = 1;
    }
    bVar4 = *(int *)(lVar3 + uVar8 * 4) == 1 | 2;
  }
  *(byte *)((longlong)param_1 + 4) = *(byte *)((longlong)param_1 + 4) & 0xfc | bVar4;
  *(undefined4 *)(param_1 + 1) = 0x40800000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x43480000;
  *(undefined4 *)(param_1 + 2) = 0x44e10000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x40600000;
  param_1[3] = 0x3f0000003dcccccd;
  iVar2 = *(int *)(param_1 + 5);
  *(int *)(param_1 + 5) = iVar2 + 8;
  if ((uint)(*(int *)((longlong)param_1 + 0x2c) - iVar2) < 8) {
    FUN_14489624a(param_1 + 4,iVar2);
  }
  lVar3 = param_1[4];
  lVar9 = (longlong)iVar2 * 0x10;
  puVar1 = (undefined8 *)(lVar3 + 0x70 + lVar9);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + 0x60 + lVar9);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + 0x50 + lVar9);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + 0x40 + lVar9);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar9);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar9);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar9);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar3 + lVar9) = 0;
  ((undefined8 *)(lVar3 + lVar9))[1] = 0;
  puVar1 = (undefined8 *)param_1[4];
  *puVar1 = 0;
  puVar1[1] = 0x3ff0000000000000;
  lVar3 = param_1[4];
  *(undefined8 *)(lVar3 + 0x10) = 0x3ff0000000000000;
  *(undefined8 *)(lVar3 + 0x18) = 0;
  lVar3 = param_1[4];
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 0xbff0000000000000;
  lVar3 = param_1[4];
  *(undefined8 *)(lVar3 + 0x30) = 0xbff0000000000000;
  *(undefined8 *)(lVar3 + 0x38) = 0;
  lVar3 = param_1[4];
  *(undefined8 *)(lVar3 + 0x40) = 0xbfe0000000000000;
  *(undefined8 *)(lVar3 + 0x48) = 0x3fe0000000000000;
  lVar3 = param_1[4];
  *(undefined8 *)(lVar3 + 0x50) = 0x3fe0000000000000;
  *(undefined8 *)(lVar3 + 0x58) = 0x3fe0000000000000;
  lVar3 = param_1[4];
  *(undefined8 *)(lVar3 + 0x60) = 0x3fe0000000000000;
  *(undefined8 *)(lVar3 + 0x68) = 0xbfe0000000000000;
  lVar3 = param_1[4];
  *(undefined8 *)(lVar3 + 0x70) = 0xbfe0000000000000;
  *(undefined8 *)(lVar3 + 0x78) = 0xbfe0000000000000;
  return param_1;
}



// FUNCTION 144ae282e FUN_144ae282e body=155 status=ok
// SIG undefined FUN_144ae282e(void)

int FUN_144ae282e(int *param_1,int param_2)

{
  int *_Dst;
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  ulonglong uVar5;
  int iVar6;
  
  uVar2 = param_1[0x18];
  if (0 < (int)uVar2) {
    piVar4 = *(int **)(param_1 + 0x16);
    if (*(int **)(param_1 + 0x16) == (int *)0x0) {
      piVar4 = param_1 + 2;
    }
    uVar5 = 0;
    do {
      if (param_2 <= piVar4[uVar5 * 2 + 1]) {
        _Dst = piVar4 + uVar5 * 2;
        iVar1 = *_Dst;
        iVar6 = _Dst[1] - param_2;
        if (iVar6 != 0 && param_2 <= _Dst[1]) {
          *(ulonglong *)_Dst = CONCAT44(iVar6,param_2 + iVar1);
          return iVar1;
        }
        if (uVar2 - 1 != (int)uVar5) {
          iVar3 = (uVar2 - 1) - (int)uVar5;
          iVar6 = 1;
          if (iVar3 < 1) {
            iVar6 = iVar3;
          }
          memmove(_Dst,piVar4 + (ulonglong)(uVar2 - iVar6) * 2,(longlong)iVar6 << 3);
          uVar2 = param_1[0x18];
        }
        param_1[0x18] = uVar2 - 1;
        FUN_140903856(param_1 + 2);
        return iVar1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar2 != uVar5);
  }
  iVar1 = *param_1;
  *param_1 = param_2 + iVar1;
  return iVar1;
}



// FUNCTION 144ae28ca FUN_144ae28ca body=153 status=ok
// SIG undefined FUN_144ae28ca(void)

longlong FUN_144ae28ca(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)(param_1 + 0x10);
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14a920140;
  if (*(longlong *)(param_1 + 0x340) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x220) != 0) {
    FUN_1400020a8();
  }
  *puVar1 = &PTR_FUN_14a920148;
  lVar2 = 0x100;
  do {
    FUN_1400200e4((longlong)puVar1 + lVar2);
    lVar2 = lVar2 + -0x10;
  } while (lVar2 != 0x80);
  lVar2 = 0x80;
  do {
    FUN_1400200e4((longlong)puVar1 + lVar2);
    lVar2 = lVar2 + -0x10;
  } while (lVar2 != 0);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144ae2964 FUN_144ae2964 body=246 status=ok
// SIG undefined FUN_144ae2964(void)

void FUN_144ae2964(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  undefined1 auStack_68 [32];
  LARGE_INTEGER local_48;
  undefined8 uStack_40;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *param_1;
  if (lVar2 == 0) goto LAB_144ae29b7;
  if (DAT_14c87e718 == '\0') {
    iVar1 = *(int *)(lVar2 + 0x1c);
    if (2 < iVar1) {
      bVar3 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0);
      if (bVar3 < 3) {
        local_48.QuadPart = 0x20100000001;
        uStack_40 = 0x30100000101;
        local_38 = DAT_14c7585c8;
        local_34 = DAT_14c7585c8 | 0x200;
        local_30 = DAT_14c7585c8 | 0x100;
        local_2c = DAT_14c7585c8 | 0x300;
        local_28 = 0;
        uStack_24 = 0x200;
        uStack_20 = 0x100;
        uStack_1c = 0x300;
        if (*(byte *)((longlong)&local_48 + (ulonglong)(iVar1 - 3) * 4) == bVar3)
        goto LAB_144ae2a4e;
      }
    }
    QueryPerformanceCounter(&local_48);
    uStack_40 = 0xffffffffffffffff;
    FUN_140056092(lVar2,&local_48);
  }
  else {
LAB_144ae2a4e:
    FUN_140082318(lVar2);
  }
LAB_144ae29b7:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144ae2a5c FUN_144ae2a5c body=2220 status=ok
// SIG undefined FUN_144ae2a5c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_144ae2a5c(longlong *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  double dVar10;
  undefined1 auVar9 [16];
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar16;
  double dVar17;
  undefined1 auVar15 [16];
  double dVar18;
  undefined1 auVar19 [16];
  double dVar22;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined1 auStack_2f8 [32];
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  double local_2b0;
  double local_2a8;
  double local_2a0;
  undefined1 local_298 [16];
  double local_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  double local_278;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined1 local_228 [16];
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  longlong local_168;
  longlong lStack_160;
  longlong local_158;
  undefined8 uStack_150;
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double local_100;
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  uVar30 = 0x44b1f3f6;
  if (*(code **)(*param_1 + 0xba0) == (code *)&LAB_144b1f3f6) {
    local_278 = DAT_14c8464f0;
    local_288 = DAT_14c8464e0;
    uStack_280 = (undefined4)DAT_14c8464e8;
    uStack_27c = (undefined4)((ulonglong)DAT_14c8464e8 >> 0x20);
    dVar25 = DAT_14c8464f0;
  }
  else {
    plVar7 = param_1;
    dVar25 = (double)(**(code **)(*param_1 + 0xba0))(param_1,&local_288);
    uVar30 = SUB84(plVar7,0);
  }
  auVar28._8_4_ = uStack_280;
  auVar28._0_8_ = local_288;
  local_298 = *(undefined1 (*) [16])(param_1 + 0x50);
  dVar17 = local_298._0_8_;
  dVar10 = local_298._8_8_;
  auVar20 = *(undefined1 (*) [16])(param_1 + 0x52);
  dVar1 = auVar20._0_8_;
  auVar12 = minpd(_DAT_149934d80,local_298);
  auVar19 = minpd(ZEXT816(0x3ff0000000000000),auVar20);
  auVar13._8_8_ = -(ulonglong)(auVar12._8_8_ < 0.0);
  auVar13._0_8_ = -(ulonglong)(auVar12._0_8_ < 0.0);
  iVar5 = movmskpd(SUB84(dVar25,0),auVar13);
  auVar12._8_8_ = -(ulonglong)(auVar19._8_8_ < 0.0);
  auVar12._0_8_ = -(ulonglong)(auVar19._0_8_ < 0.0);
  uVar6 = movmskpd(uVar30,auVar12);
  if ((uVar6 & 0x3fffffff) == 0 && iVar5 == 0) {
    dVar2 = (double)param_1[0x48];
    dVar3 = (double)param_1[0x49];
    dVar4 = (double)param_1[0x4a];
    dVar14 = (double)param_1[0x4b];
    dVar16 = (double)param_1[0x4b];
    dVar17 = local_288 * dVar17;
    dVar10 = (double)CONCAT44(uStack_27c,uStack_280) * dVar10;
    dVar26 = local_278 * dVar1;
    dVar25 = auVar20._8_8_ * 0.0;
    local_2d8._8_4_ = SUB84(dVar25,0);
    local_2d8._0_8_ = dVar26;
    local_2d8._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
    dVar18 = dVar10 * dVar2 - dVar17 * dVar3;
    dVar22 = dVar26 * dVar3 - dVar10 * dVar4;
    dVar11 = dVar17 * dVar4 - dVar26 * dVar2;
    dVar22 = dVar22 + dVar22;
    dVar11 = dVar11 + dVar11;
    dVar18 = dVar18 + dVar18;
    dVar23 = (double)param_1[0x49];
    dVar24 = (double)param_1[0x49];
    uVar30 = 0;
    uVar31 = 0x3ff00000;
    uVar32 = 0;
    uVar33 = 0x3ff00000;
    dVar25 = dVar4 * 0.0 * -1.0 + dVar23 * 0.0 + (double)param_1[0x48] * 1.0 * 1.0 + dVar14 * 0.0;
    dVar27 = dVar4 * 0.0 * 1.0 + dVar24 * 1.0 + (double)param_1[0x48] * 0.0 * -1.0 + dVar16 * 0.0;
    auVar29._0_8_ =
         (double)param_1[0x4a] * 1.0 * 1.0 + ((dVar2 * 0.0 * 1.0 + dVar14 * 0.0) - dVar23 * 0.0);
    auVar29._8_8_ =
         (double)param_1[0x4a] * 0.0 * -1.0 + ((dVar2 * 0.0 * -1.0 + dVar16 * 1.0) - dVar24 * 0.0);
    local_e8 = (dVar18 * dVar3 - dVar4 * dVar11) + dVar14 * dVar22 + dVar17 + (double)param_1[0x4c];
    dStack_e0 = (dVar22 * dVar4 - dVar18 * dVar2) + dVar16 * dVar11 + dVar10 + (double)param_1[0x4d]
    ;
    local_d8 = (dVar11 * dVar2 - dVar3 * dVar22) + dVar14 * dVar18 + dVar26 + (double)param_1[0x4e];
    local_2c8 = auVar20;
  }
  else {
    dVar27 = (double)param_1[0x48];
    dVar14 = (double)param_1[0x49];
    dVar25 = (double)param_1[0x4a];
    dVar16 = dVar14 + dVar14;
    dVar23 = dVar25 + dVar25;
    dVar26 = dVar27 * (dVar27 + dVar27);
    local_1c8 = ((double)DAT_149934d80 - (dVar25 * dVar23 + dVar14 * dVar16)) * dVar17;
    dStack_1a0 = (DAT_149934d80._8_8_ - (dVar25 * dVar23 + dVar26)) * dVar10;
    dVar25 = (double)param_1[0x4b];
    dVar24 = dVar23 * dVar25;
    dVar18 = (dVar27 + dVar27) * (double)param_1[0x4b];
    dVar25 = dVar16 * dVar25;
    local_1a8 = (dVar16 * dVar27 - dVar24) * dVar10;
    dStack_180 = (dVar23 * dVar14 - dVar18) * dVar1;
    local_188 = (dVar25 + (double)param_1[0x48] * dVar23) * dVar1;
    dStack_1c0 = (dVar16 * dVar27 + dVar24) * dVar17;
    local_198 = (dVar23 * dVar14 + dVar18) * dVar10;
    local_1b8 = ((double)param_1[0x48] * dVar23 - dVar25) * dVar17;
    uStack_1b0 = 0;
    uStack_190 = 0;
    local_178 = (1.0 - (dVar26 + dVar14 * dVar16)) * dVar1;
    uStack_170 = 0;
    local_168 = param_1[0x4c];
    lStack_160 = param_1[0x4d];
    local_158 = param_1[0x4e];
    uStack_150 = 0x3ff0000000000000;
    local_248 = 0x3ff0000000000000;
    uStack_240 = 0;
    local_238 = 0;
    uStack_230 = 0;
    local_218 = 0;
    uStack_210 = 0;
    local_208 = 0;
    uStack_200 = 0;
    local_1f8 = 0x3ff0000000000000;
    uStack_1f0 = 0;
    auVar28._12_4_ = uStack_27c;
    local_1d8._8_4_ = 0;
    local_1d8._0_8_ = local_278;
    local_1d8._12_4_ = 0x3ff00000;
    local_228 = ZEXT816(0x3ff0000000000000) << 0x40;
    local_1e8 = auVar28;
    FUN_1447fea8d(&local_148);
    auVar20 = _DAT_149934d80;
    local_2c8._0_8_ = local_140;
    local_2d8._0_8_ = local_138;
    dVar25 = local_138 * local_138 + local_148 * local_148 + local_140 * local_140;
    local_2a0 = local_128;
    dVar10 = local_118 * local_118 + local_128 * local_128 + local_120 * local_120;
    local_2a8 = local_108;
    local_2b0 = local_f8;
    dVar27 = local_f8 * local_f8 + local_108 * local_108 + local_100 * local_100;
    uVar8 = -(ulonglong)(0.0 <= dVar25 + -9.99999993922529e-09);
    dVar17 = (double)(~uVar8 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar25)) & uVar8);
    uVar8 = -(ulonglong)(0.0 <= dVar10 + -9.99999993922529e-09);
    dVar25 = (double)(~uVar8 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar10)) & uVar8);
    uVar8 = -(ulonglong)(0.0 <= dVar27 + -9.99999993922529e-09);
    dVar10 = (double)(~uVar8 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar27)) & uVar8);
    auVar19._8_8_ = -(ulonglong)(0.0 <= (double)local_298._8_8_);
    auVar19._0_8_ = -(ulonglong)(0.0 <= (double)local_298._0_8_);
    auVar28 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar19);
    uVar8 = -(ulonglong)(0.0 <= dVar1 * 1.0);
    dVar27 = (double)(~uVar8 & 0xbff0000000000000 |
                     (ulonglong)((uint)(uVar8 >> 0x20) & 0x3ff00000) << 0x20);
    uVar30 = (undefined4)DAT_149934d80;
    uVar31 = DAT_149934d80._4_4_;
    uVar32 = DAT_149934d80._8_4_;
    uVar33 = DAT_149934d80._12_4_;
    dVar14 = auVar28._0_8_;
    local_148 = local_148 * dVar17 * dVar14;
    local_140 = local_140 * dVar17 * dVar14;
    local_138 = dVar17 * local_138 * dVar14;
    dVar17 = auVar28._8_8_;
    local_118 = dVar25 * local_118 * dVar17;
    local_120 = local_120 * dVar25 * dVar17;
    local_128 = dVar17 * local_128 * dVar25;
    local_f8 = dVar10 * local_f8 * dVar27;
    local_100 = local_100 * dVar10 * dVar27;
    local_108 = dVar27 * local_108 * dVar10;
    FUN_14481fd10(&local_268,&local_148);
    dVar25 = local_258 * local_258 + local_268 * local_268;
    dVar17 = dStack_250 * dStack_250 + dStack_260 * dStack_260;
    auVar15._0_8_ = dVar25 + dVar17;
    auVar15._8_8_ = dVar25 + dVar17;
    auVar9._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar15._8_8_);
    auVar9._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar15._0_8_);
    auVar28 = sqrtpd(auVar15,auVar15);
    auVar20 = divpd(auVar20,auVar28);
    auVar21._0_8_ = auVar20._0_8_ * local_258;
    auVar21._8_8_ = auVar20._8_8_ * dStack_250;
    dVar25 = (double)((ulonglong)(local_268 * auVar20._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar15._0_8_));
    dVar27 = (double)((ulonglong)(dStack_260 * auVar20._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar15._8_8_));
    auVar29 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar21,auVar9);
  }
  dVar1 = dVar1 * 1.0;
  dVar10 = dVar27 + dVar27;
  dVar24 = auVar29._0_8_;
  dVar18 = auVar29._8_8_;
  dVar14 = dVar24 + dVar24;
  dVar23 = dVar25 * (dVar25 + dVar25);
  dVar17 = ((double)CONCAT44(uVar33,uVar32) - (dVar24 * dVar14 + dVar23)) * (double)local_298._8_8_;
  dVar16 = (dVar25 + dVar25) * dVar18;
  *param_2 = ((double)CONCAT44(uVar31,uVar30) - (dVar24 * dVar14 + dVar27 * dVar10)) *
             (double)local_298._0_8_;
  param_2[1] = (dVar10 * dVar25 + dVar14 * dVar18) * (double)local_298._0_8_;
  param_2[2] = (dVar25 * dVar14 - dVar10 * dVar18) * (double)local_298._0_8_;
  param_2[3] = 0.0;
  auVar20._8_4_ = SUB84(dVar17,0);
  auVar20._0_8_ = (dVar10 * dVar25 - dVar14 * dVar18) * (double)local_298._8_8_;
  auVar20._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 4) = auVar20;
  param_2[6] = (dVar14 * dVar27 + dVar16) * (double)local_298._8_8_;
  param_2[7] = 0.0;
  param_2[8] = (dVar10 * dVar18 + dVar25 * dVar14) * dVar1;
  param_2[9] = (dVar14 * dVar27 - dVar16) * dVar1;
  param_2[10] = (1.0 - (dVar23 + dVar27 * dVar10)) * dVar1;
  param_2[0xb] = 0.0;
  param_2[0xc] = local_e8;
  param_2[0xd] = dStack_e0;
  param_2[0xe] = local_d8;
  param_2[0xf] = 1.0;
  if ((local_c0 ^ (ulonglong)auStack_2f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144ae330a FUN_144ae330a body=181 status=ok
// SIG undefined FUN_144ae330a(void)

bool FUN_144ae330a(longlong param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  bool bVar2;
  
  if ((*(longlong *)(param_1 + 0x660) != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  else if (*(longlong *)(param_1 + 0x660) == 0) {
    lVar1 = param_3[1];
    goto LAB_144ae3388;
  }
  lVar1 = FUN_1448c9576(param_1,param_2);
  *param_3 = lVar1;
  lVar1 = *(longlong *)(param_1 + 0x660);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  if (((int)param_2 < 0) || (*(int *)(lVar1 + 0x160) <= (int)param_2)) {
    lVar1 = 0;
  }
  else {
    lVar1 = (ulonglong)param_2 * 0x30 + *(longlong *)(lVar1 + 0x158) + 0x18;
  }
  param_3[1] = lVar1;
  *(undefined4 *)(param_3 + 2) = 0xffff0000;
LAB_144ae3388:
  bVar2 = false;
  if ((*param_3 != 0) && (lVar1 != 0)) {
    bVar2 = (int)param_3[2] != 0;
  }
  return bVar2;
}



// FUNCTION 144ae33c0 FUN_144ae33c0 body=275 status=ok
// SIG undefined FUN_144ae33c0(void)

void FUN_144ae33c0(longlong *param_1)

{
  longlong *plVar1;
  
  if ((char)param_1[0x35] == '\x01') {
    *(undefined1 *)(param_1 + 0x35) = 0;
  }
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  plVar1 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar1 = (longlong *)param_1[2];
  }
                    /* WARNING: Could not recover jumptable at 0x000144ae347c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))(plVar1);
  return;
}



// FUNCTION 144ae34d4 FUN_144ae34d4 body=443 status=ok
// SIG undefined FUN_144ae34d4(void)

void FUN_144ae34d4(undefined8 param_1,longlong param_2,ulonglong *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  code *local_30;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952420) {
    FUN_144b3d300(&DAT_14c952420);
    if (DAT_14c952420 == -1) {
      FUN_14475b26a();
      local_30 = FUN_14079c5e4;
      local_38 = &DAT_14c9520b8;
      local_48 = 0x101008001;
      local_40 = 0;
      FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0);
      atexit(FUN_1428170bb);
      _Init_thread_footer(&DAT_14c952420);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_20 = *(ulonglong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_20);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_20 & 0x7fffffffffffffff;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144ae3690 FUN_144ae3690 body=796 status=ok
// SIG undefined FUN_144ae3690(void)

void FUN_144ae3690(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  int local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_20 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_68);
  uStack_1c = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_68) >> 0x20);
  iStack_24 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_14067a048;
      local_40 = 0;
      local_48 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&iStack_24);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&iStack_24);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&iStack_24);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      iStack_24 = (int)uVar2;
      local_20 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&iStack_24);
    }
  }
  iVar4 = iStack_24;
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_14067a048;
      local_40 = 0;
      local_48 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_28 = (int)uVar2;
      iStack_24 = (int)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_28);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)param_3 = local_28 != 0 && iVar4 != 0;
  if ((CONCAT44(uStack_1c,local_20) ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144ae39ae FUN_144ae39ae body=786 status=ok
// SIG undefined FUN_144ae39ae(void)

void FUN_144ae39ae(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  int local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_20 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_68);
  uStack_1c = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_68) >> 0x20);
  iStack_24 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_14067a048;
      local_40 = 0;
      local_48 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&iStack_24);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&iStack_24);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&iStack_24);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      iStack_24 = (int)uVar2;
      local_20 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&iStack_24);
    }
  }
  iVar4 = iStack_24;
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_14067a048;
      local_40 = 0;
      local_48 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_28 = (int)uVar2;
      iStack_24 = (int)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_28);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)param_3 = iVar4 != 0 || local_28 != 0;
  if ((CONCAT44(uStack_1c,local_20) ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144ae3cc2 FUN_144ae3cc2 body=1105 status=ok
// SIG undefined FUN_144ae3cc2(void)

void FUN_144ae3cc2(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_1403a682c;
      local_70 = 0;
      local_78 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar4 = *(byte **)(param_2 + 0x20);
  if (pbVar4 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
LAB_144ae3d6f:
    pbVar4 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar4 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar4];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_40);
      goto LAB_144ae3d6f;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_40);
      goto LAB_144ae3d6f;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&local_40);
      goto LAB_144ae3d6f;
    }
    local_40 = *(undefined8 *)(pbVar4 + 1);
    pbVar4 = pbVar4 + 9;
    *(byte **)(param_2 + 0x20) = pbVar4;
  }
  local_48 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar4 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
LAB_144ae3df0:
    pbVar4 = *(byte **)(param_2 + 0x20);
    puVar6 = *(undefined8 **)(param_2 + 0x38);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar4 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar4];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_48);
      goto LAB_144ae3df0;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_48);
      goto LAB_144ae3df0;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&local_48);
      goto LAB_144ae3df0;
    }
    local_48 = *(undefined8 *)(pbVar4 + 1);
    pbVar4 = pbVar4 + 9;
    *(byte **)(param_2 + 0x20) = pbVar4;
    puVar6 = (undefined8 *)0x0;
  }
  local_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar4 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar4 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar4];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_50);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_50);
    }
    else {
      if (pcVar2 == (code *)&LAB_1428293cc) {
        local_50 = *(undefined8 *)(pbVar4 + 1);
        pbVar4 = pbVar4 + 9;
        *(byte **)(param_2 + 0x20) = pbVar4;
        puVar5 = (undefined8 *)0x0;
        goto LAB_144ae3e78;
      }
      (*pcVar2)(uVar1,param_2,&local_50);
    }
  }
  pbVar4 = *(byte **)(param_2 + 0x20);
  puVar5 = *(undefined8 **)(param_2 + 0x38);
LAB_144ae3e78:
  local_58 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar4 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar4 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar4];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_58);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_58);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      *(byte **)(param_2 + 0x20) = pbVar4 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_58);
    }
  }
  puVar3 = &local_50;
  if (puVar5 != (undefined8 *)0x0) {
    puVar3 = puVar5;
  }
  puVar5 = &local_48;
  if (puVar6 != (undefined8 *)0x0) {
    puVar5 = puVar6;
  }
  puVar6 = &local_58;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar6 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *puVar5 = local_40;
  *puVar3 = local_38;
  *puVar6 = local_30;
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144ae4114 FUN_144ae4114 body=434 status=ok
// SIG undefined FUN_144ae4114(void)

void FUN_144ae4114(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  byte *pbVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  int local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_68);
  uStack_14 = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_68) >> 0x20);
  local_1c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_14067a048;
      local_40 = 0;
      local_48 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_1c);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_1c);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar3 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_1c = (int)uVar3;
      uStack_18 = (undefined4)((ulonglong)uVar3 >> 0x20);
    }
    else {
      (*pcVar2)(uVar3,param_2,&local_1c);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar3 = 0;
  if (local_1c != 0) {
    uVar3 = 0x3ff0000000000000;
  }
  *param_3 = uVar3;
  if ((CONCAT44(uStack_14,uStack_18) ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144ae42c8 FUN_144ae42c8 body=792 status=ok
// SIG undefined FUN_144ae42c8(void)

void FUN_144ae42c8(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  code *local_30;
  char local_1a;
  char cStack_19;
  undefined6 uStack_18;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  uVar4 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uStack_18 = (undefined6)uVar4;
  uStack_12 = (undefined1)(uVar4 >> 0x30);
  uStack_11 = (undefined1)(uVar4 >> 0x38);
  cStack_19 = '\0';
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d78) {
    FUN_144b3d300(&DAT_14c951d78);
    if (DAT_14c951d78 == -1) {
      FUN_14475b26a();
      local_30 = FUN_1409f1a5c;
      local_38 = &DAT_14c9520b8;
      local_40 = 0;
      local_48 = 0x1008041;
      FUN_14000176a(&DAT_14c951d28,L"FByteProperty",0x40,0);
      atexit(FUN_14281201f);
      _Init_thread_footer(&DAT_14c951d78);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&cStack_19);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&cStack_19);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&cStack_19);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      cStack_19 = (char)uVar2;
      uStack_18 = (undefined6)((ulonglong)uVar2 >> 8);
      uStack_12 = (undefined1)((ulonglong)uVar2 >> 0x38);
    }
    else {
      (*pcVar3)(uVar2,param_2,&cStack_19);
    }
  }
  local_1a = '\0';
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d78) {
    FUN_144b3d300(&DAT_14c951d78);
    if (DAT_14c951d78 == -1) {
      FUN_14475b26a();
      local_30 = FUN_1409f1a5c;
      local_38 = &DAT_14c9520b8;
      local_40 = 0;
      local_48 = 0x1008041;
      FUN_14000176a(&DAT_14c951d28,L"FByteProperty",0x40,0);
      atexit(FUN_14281201f);
      _Init_thread_footer(&DAT_14c951d78);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1a);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_1a);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_1a);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_1a = (char)uVar2;
      cStack_19 = (char)((ulonglong)uVar2 >> 8);
      uStack_18 = (undefined6)((ulonglong)uVar2 >> 0x10);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_1a);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)param_3 = cStack_19 == local_1a;
  if ((CONCAT17(uStack_11,CONCAT16(uStack_12,uStack_18)) ^ (ulonglong)auStack_68) == DAT_14c707940)
  {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144ae45e2 FUN_144ae45e2 body=1198 status=ok
// SIG undefined FUN_144ae45e2(void)

void FUN_144ae45e2(undefined8 param_1,longlong param_2,double *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  double dVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0.0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952420) {
    FUN_144b3d300(&DAT_14c952420);
    if (DAT_14c952420 == -1) {
      FUN_14475b26a();
      local_40 = FUN_14079c5e4;
      local_48 = &DAT_14c9520b8;
      local_58 = 0x101008001;
      local_50 = 0;
      FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0);
      atexit(FUN_1428170bb);
      _Init_thread_footer(&DAT_14c952420);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_20 = *(double *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_20);
    }
  }
  local_28 = 0.0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952420) {
    FUN_144b3d300(&DAT_14c952420);
    if (DAT_14c952420 == -1) {
      FUN_14475b26a();
      local_40 = FUN_14079c5e4;
      local_48 = &DAT_14c9520b8;
      local_58 = 0x101008001;
      local_50 = 0;
      FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0);
      atexit(FUN_1428170bb);
      _Init_thread_footer(&DAT_14c952420);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_28 = *(double *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_28);
    }
  }
  local_30 = 0.0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952420) {
    FUN_144b3d300(&DAT_14c952420);
    if (DAT_14c952420 == -1) {
      FUN_14475b26a();
      local_40 = FUN_14079c5e4;
      local_48 = &DAT_14c9520b8;
      local_58 = 0x101008001;
      local_50 = 0;
      FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0);
      atexit(FUN_1428170bb);
      _Init_thread_footer(&DAT_14c952420);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_30 = *(double *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_30);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar4 = local_20;
  if (local_30 <= local_20) {
    dVar4 = local_30;
  }
  if (dVar4 <= local_28) {
    dVar4 = local_28;
  }
  *param_3 = dVar4;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144ae4a92 FUN_144ae4a92 body=819 status=ok
// SIG undefined FUN_144ae4a92(void)

void FUN_144ae4a92(undefined8 param_1,longlong param_2,double *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  code *local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0.0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952420) {
    FUN_144b3d300(&DAT_14c952420);
    if (DAT_14c952420 == -1) {
      FUN_14475b26a();
      local_30 = FUN_14079c5e4;
      local_38 = &DAT_14c9520b8;
      local_48 = 0x101008001;
      local_40 = 0;
      FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0);
      atexit(FUN_1428170bb);
      _Init_thread_footer(&DAT_14c952420);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_20 = *(double *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_20);
    }
  }
  local_28 = 0.0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952420) {
    FUN_144b3d300(&DAT_14c952420);
    if (DAT_14c952420 == -1) {
      FUN_14475b26a();
      local_30 = FUN_14079c5e4;
      local_38 = &DAT_14c9520b8;
      local_48 = 0x101008001;
      local_40 = 0;
      FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0);
      atexit(FUN_1428170bb);
      _Init_thread_footer(&DAT_14c952420);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_28 = *(double *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_28);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_28 * local_20;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144ae4dc6 FUN_144ae4dc6 body=420 status=ok
// SIG undefined FUN_144ae4dc6(void)

void FUN_144ae4dc6(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  int local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_68);
  uStack_14 = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_68) >> 0x20);
  local_1c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_14067a048;
      local_40 = 0;
      local_48 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_1c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_1c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_1c = (int)uVar2;
      uStack_18 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_1c);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)param_3 = local_1c == 0;
  if ((CONCAT44(uStack_14,uStack_18) ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144ae4f6c FUN_144ae4f6c body=819 status=ok
// SIG undefined FUN_144ae4f6c(void)

void FUN_144ae4f6c(undefined8 param_1,longlong param_2,double *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  code *local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0.0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952420) {
    FUN_144b3d300(&DAT_14c952420);
    if (DAT_14c952420 == -1) {
      FUN_14475b26a();
      local_30 = FUN_14079c5e4;
      local_38 = &DAT_14c9520b8;
      local_48 = 0x101008001;
      local_40 = 0;
      FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0);
      atexit(FUN_1428170bb);
      _Init_thread_footer(&DAT_14c952420);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_20 = *(double *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_20);
    }
  }
  local_28 = 0.0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952420) {
    FUN_144b3d300(&DAT_14c952420);
    if (DAT_14c952420 == -1) {
      FUN_14475b26a();
      local_30 = FUN_14079c5e4;
      local_38 = &DAT_14c9520b8;
      local_48 = 0x101008001;
      local_40 = 0;
      FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0);
      atexit(FUN_1428170bb);
      _Init_thread_footer(&DAT_14c952420);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_28 = *(double *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_28);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_20 - local_28;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144ae52a0 FUN_144ae52a0 body=321 status=ok
// SIG undefined FUN_144ae52a0(void)

longlong FUN_144ae52a0(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0x1000000000;
  uVar2 = DAT_14ca8b9f8;
  if ((int)DAT_14ca8b9f8 < 1) {
    if ((int)DAT_14ca8b9f8 < 0) {
LAB_144ae53b0:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(DAT_14ca8b9f8);
    }
  }
  else {
    *(uint *)(param_2 + 0x48) = DAT_14ca8b9f8;
    if (uVar2 < 0x11) {
      lVar3 = 0;
    }
    else {
      FUN_1472ddbf0(param_2,0);
      lVar3 = *(longlong *)(param_2 + 0x40);
    }
    if (lVar3 == 0) {
      lVar3 = param_2;
    }
    FUN_1448b6b1e(lVar3,uVar2);
    uVar2 = DAT_14ca8b9f8;
    iVar1 = *(int *)(param_2 + 0x48);
    if (iVar1 < (int)DAT_14ca8b9f8) {
      *(uint *)(param_2 + 0x48) = DAT_14ca8b9f8;
      if ((uint)(*(int *)(param_2 + 0x4c) - iVar1) < uVar2 - iVar1) {
        FUN_1472ddbf0(param_2,iVar1);
      }
      lVar3 = *(longlong *)(param_2 + 0x40);
      if (*(longlong *)(param_2 + 0x40) == 0) {
        lVar3 = param_2;
      }
      FUN_1448b6b1e(lVar3 + (longlong)iVar1 * 4,uVar2 - iVar1);
    }
    else {
      if ((int)DAT_14ca8b9f8 < 0) goto LAB_144ae53b0;
      if ((int)DAT_14ca8b9f8 < iVar1) {
        *(uint *)(param_2 + 0x48) = DAT_14ca8b9f8;
        FUN_1472ddc66(param_2);
      }
    }
  }
  if (0 < *(int *)(param_2 + 0x48)) {
    lVar3 = 0;
    do {
      lVar4 = *(longlong *)(param_2 + 0x40);
      if (*(longlong *)(param_2 + 0x40) == 0) {
        lVar4 = param_2;
      }
      *(undefined4 *)(lVar4 + lVar3 * 4) = 0x3f800000;
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_2 + 0x48));
  }
  if ((*(byte *)(*(longlong *)(param_1 + 8) + 0x4f) & 2) != 0) {
    fVar5 = *(float *)(param_1 + 0x14);
    if (4.0 <= fVar5) {
      fVar5 = 4.0;
    }
    if (fVar5 <= 0.01) {
      fVar5 = 0.01;
    }
    lVar3 = *(longlong *)(param_2 + 0x40);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      lVar3 = param_2;
    }
    *(float *)(lVar3 + (longlong)DAT_14cad82fc * 4) = fVar5;
  }
  return param_2;
}



// FUNCTION 144ae53e2 FUN_144ae53e2 body=402 status=ok
// SIG undefined FUN_144ae53e2(void)

void FUN_144ae53e2(longlong param_1,longlong param_2,byte param_3)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined1 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_98 [47];
  byte local_69;
  longlong local_68;
  undefined1 local_60 [8];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x100000000;
  iVar1 = *(int *)(param_1 + 0x90);
  if ((longlong)iVar1 != 0) {
    lVar7 = *(longlong *)(param_1 + 0x88);
    lVar6 = 0;
    do {
      plVar2 = *(longlong **)(lVar7 + lVar6);
      if (*(code **)(*plVar2 + 0x2d0) == (code *)&LAB_1448cb888) {
        if ((*(byte *)(plVar2 + 0x1d) & 2) == 0) {
          plVar2[0x31] = plVar2[6];
          *(byte *)(plVar2 + 0x1d) = *(byte *)(plVar2 + 0x1d) | 2;
          lVar8 = plVar2[6];
        }
        else {
          lVar8 = plVar2[0x31];
        }
      }
      else {
        (**(code **)(*plVar2 + 0x2d0))(plVar2,&local_68);
        lVar8 = local_68;
      }
      uVar3 = local_50;
      if (lVar8 == param_2) {
        lVar8 = (longlong)(int)local_50;
        uVar4 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,uVar4);
        if (local_50._4_4_ < uVar4) {
          local_69 = param_3;
          FUN_147b9bf1e(local_60,uVar3 & 0xffffffff);
          param_3 = local_69;
        }
        puVar5 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar5 = local_60;
        }
        *(longlong **)(puVar5 + lVar8 * 8) = plVar2;
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
    lVar7 = (longlong)(int)local_50;
    puVar5 = local_60;
    if (local_58 != (undefined1 *)0x0) {
      puVar5 = local_58;
    }
    if (lVar7 != 0) {
      lVar6 = 0;
      do {
        FUN_1447cd2ec(*(longlong *)(puVar5 + lVar6) + (ulonglong)(param_3 ^ 1) * 0x10 + 0x158,0);
        lVar6 = lVar6 + 8;
      } while (lVar7 * 8 != lVar6);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144ae5576 FUN_144ae5576 body=184 status=ok
// SIG undefined FUN_144ae5576(void)

byte FUN_144ae5576(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  
  if (((((*(longlong *)(param_1 + 0x30) != 0) &&
        (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x2b0), lVar4 != 0)) &&
       (*(longlong *)(lVar4 + 0x588) != 0)) &&
      (*(double *)(param_1 + 0x708) <= *(double *)(param_1 + 0x6d0))) ||
     (((*(byte *)(param_1 + 0x154) & 0x40) != 0 && (iVar3 = FUN_14490d72a(param_1), iVar3 == 3)))) {
    bVar2 = 1;
  }
  else {
    if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0) {
      lVar4 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar4);
        if (*(longlong *)(lVar1 + 0x360) == param_1) {
          if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x278) & 1) != 0)) {
            return 1;
          }
          break;
        }
        lVar4 = lVar4 + 8;
      } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar4);
    }
    if (*(char *)(param_1 + 0x152) == '\x03') {
      bVar2 = *(byte *)(param_1 + 0x155) >> 7;
    }
    else {
      bVar2 = 0;
    }
  }
  return bVar2;
}



// FUNCTION 144ae562e FUN_144ae562e body=502 status=ok
// SIG undefined FUN_144ae562e(void)

undefined8 FUN_144ae562e(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 *param_4)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_2 = *param_4;
  param_2[1] = param_4[1];
  fVar1 = *(float *)(param_1 + 0x298);
  dVar2 = *(double *)(param_1 + 0x140);
  dVar3 = *(double *)(param_1 + 0x130);
  dVar4 = *(double *)(param_1 + 0x138);
  dVar9 = dVar2 - *(double *)(param_3 + 0x1058);
  dVar10 = dVar4 - *(double *)(param_3 + 0x1050);
  dVar11 = dVar3 - *(double *)(param_3 + 0x1048);
  if ((double)(fVar1 * fVar1) < dVar9 * dVar9 + dVar11 * dVar11 + dVar10 * dVar10) {
    local_80 = param_2 + 1;
    dVar11 = *(double *)(param_3 + 0x9b8);
    dVar5 = *(double *)(param_3 + 0x9d8);
    dVar6 = *(double *)(param_3 + 0x9f8);
    dVar9 = *(double *)(param_3 + 0xa18);
    dVar10 = dVar3 * *(double *)(param_3 + 0x9c0) + dVar4 * *(double *)(param_3 + 0x9e0) +
             dVar2 * *(double *)(param_3 + 0xa00) + *(double *)(param_3 + 0xa20);
    local_78 = 0x3ff0000000000000;
    local_70 = 0;
    uStack_68 = 0;
    local_90 = 0x3ff0000000000000;
    local_98 = &local_78;
    local_88 = param_2;
    cVar7 = FUN_14007c3b4(SUB84(dVar2 * *(double *)(param_3 + 0x9f0) +
                                dVar4 * *(double *)(param_3 + 0x9d0) +
                                dVar3 * *(double *)(param_3 + 0x9b0) + *(double *)(param_3 + 0xa10),
                                0),dVar10,(double)fVar1,param_3 + 0x830);
    if (cVar7 != '\0') {
      local_80 = (undefined8 *)((longlong)param_2 + 0xc);
      local_88 = (undefined8 *)((longlong)param_2 + 4);
      local_78 = 0;
      local_70 = 0x3ff0000000000000;
      uStack_68 = 0;
      local_90 = 0xbff0000000000000;
      local_98 = &local_78;
      uVar8 = FUN_14007c3b4(SUB84(dVar2 * dVar6 + dVar4 * dVar5 + dVar3 * dVar11 + dVar9,0),dVar10,
                            (double)fVar1,param_3 + 0x830);
      goto LAB_144ae57ea;
    }
  }
  uVar8 = 0;
LAB_144ae57ea:
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144ae5826 FUN_144ae5826 body=37 status=ok
// SIG undefined FUN_144ae5826(void)

bool FUN_144ae5826(longlong *param_1)

{
  uint uVar1;
  bool bVar2;
  
  if ((*(byte *)((longlong)param_1 + 0x1d7) & 0x10) == 0) {
    bVar2 = false;
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0x408))();
    bVar2 = 1 < uVar1;
  }
  return bVar2;
}



// FUNCTION 144ae584c FUN_144ae584c body=869 status=ok
// SIG undefined FUN_144ae584c(void)

undefined8 FUN_144ae584c(longlong param_1,char param_2,int *param_3,float *param_4,longlong param_5)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  float fVar10;
  float extraout_XMM0_Da;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar5 = *(longlong **)(param_1 + 200);
  iVar2 = *(int *)(*(longlong *)(param_5 + 8) + 0x24);
  if (*(code **)(*plVar5 + 0x350) == FUN_14478329a) {
    if (0 < (longlong)(int)plVar5[0x4b]) {
      lVar7 = 0;
      lVar8 = 0;
      do {
        lVar6 = *(longlong *)(plVar5[0x4a] + lVar7 * 8);
        if (*(int *)(lVar6 + 0x24) == iVar2) {
          if (*(char *)(lVar6 + 0x20) == '\x04') {
            lVar8 = lVar6;
          }
          if (*(char *)(lVar6 + 0x20) == DAT_14cb0cc00) break;
        }
        lVar6 = lVar8;
        lVar7 = lVar7 + 1;
        lVar8 = lVar6;
      } while ((int)plVar5[0x4b] != lVar7);
      goto LAB_144ae58f6;
    }
LAB_144ae5a2f:
    bVar1 = *(byte *)(*(longlong *)(param_1 + 200) + 0x128);
    FUN_14003fbd6();
    lVar6 = (**(code **)(*(longlong *)(&DAT_14caea080)[bVar1] + 0x2f0))();
    if (lVar6 != param_1) {
      bVar1 = *(byte *)(*(longlong *)(param_1 + 200) + 0x128);
      FUN_14003fbd6();
      (**(code **)(*(longlong *)(&DAT_14caea080)[bVar1] + 0x2f0))();
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
    }
  }
  else {
    lVar6 = (**(code **)(*plVar5 + 0x350))(plVar5,iVar2,0x144783204);
LAB_144ae58f6:
    if ((lVar6 == 0) || (*(longlong *)(lVar6 + 0x18) == 0)) goto LAB_144ae5a2f;
    if (param_2 == '\0') {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb019a0) && (FUN_144b3d300(&DAT_14cb019a0), DAT_14cb019a0 == -1))
      {
        FUN_1446f470e(&DAT_14cb01998,L"__SubsurfaceProfile",1);
        _Init_thread_footer(&DAT_14cb019a0);
      }
      if ((*param_3 != (int)DAT_14cb01998) ||
         (param_3[2] != (int)((ulonglong)DAT_14cb01998 >> 0x20))) {
        iVar2 = *(int *)(param_1 + 0x78);
        if (iVar2 == 0) {
          iVar2 = *(int *)(param_1 + 0x88);
          iVar9 = 0;
          uVar3 = 0;
          if (iVar2 != 0) {
            do {
              FUN_1456bb432(local_58,*(undefined8 *)
                                      (*(longlong *)(param_1 + 0x80) + (longlong)iVar9 * 8));
              if ((*param_3 == local_58._0_4_) && (param_3[2] == local_58._4_4_)) {
                FUN_147cdb8bb(*(undefined8 *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar9 * 8));
                fVar10 = extraout_XMM0_Da;
                goto LAB_144ae59e0;
              }
              iVar9 = iVar9 + 1;
              uVar3 = 0;
            } while (iVar2 != iVar9);
          }
        }
        else {
          lVar6 = *(longlong *)(param_1 + 0x68);
          iVar9 = 0;
          do {
            lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar9 * 8);
            FUN_1456bb484(&local_50,lVar8);
            if ((*param_3 == (int)local_50) && (param_3[2] == (int)((ulonglong)local_50 >> 0x20))) {
              if (lVar6 != 0) {
                lVar8 = lVar6;
              }
              if (lVar8 == 0) goto LAB_144ae5b8a;
              fVar10 = -1.0;
              if ((int)DAT_14cb026c0 < 2) goto LAB_144ae59d8;
              uVar4 = 1;
              lVar6 = 0x148;
              goto LAB_144ae5b78;
            }
            iVar9 = iVar9 + 1;
            uVar3 = 0;
          } while (iVar2 != iVar9);
        }
        goto LAB_144ae596d;
      }
      if (*(longlong *)(param_1 + 0x68) == 0) {
LAB_144ae5b8a:
        fVar10 = 0.0;
      }
      else {
        fVar10 = -1.0;
        if (1 < (int)DAT_14cb026c0) {
          plVar5 = (longlong *)(DAT_14cb026b8 + 0x148);
          uVar4 = 1;
          do {
            if (*plVar5 == *(longlong *)(param_1 + 0x68)) {
              fVar10 = (float)(int)uVar4;
              break;
            }
            uVar4 = uVar4 + 1;
            plVar5 = plVar5 + 0x15;
          } while (DAT_14cb026c0 != uVar4);
        }
      }
      goto LAB_144ae59d8;
    }
  }
  uVar3 = 0;
LAB_144ae596d:
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
  while( true ) {
    uVar4 = uVar4 + 1;
    lVar6 = lVar6 + 0xa8;
    if (DAT_14cb026c0 == uVar4) break;
LAB_144ae5b78:
    if (*(longlong *)(DAT_14cb026b8 + lVar6) == lVar8) {
      fVar10 = (float)(int)uVar4;
      break;
    }
  }
LAB_144ae59d8:
  fVar10 = fVar10 / 255.0;
LAB_144ae59e0:
  *param_4 = fVar10;
  *(undefined1 *)(param_4 + 8) = 0;
  uVar3 = 1;
  goto LAB_144ae596d;
}



// FUNCTION 144ae5bd4 FUN_144ae5bd4 body=49 status=ok
// SIG undefined FUN_144ae5bd4(void)

void FUN_144ae5bd4(longlong *param_1)

{
  if (*(code **)(*param_1 + 0x18) != FUN_147bbb374) {
    (**(code **)(*param_1 + 0x18))(param_1,0);
  }
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 144ae5c06 FUN_144ae5c06 body=623 status=ok
// SIG undefined FUN_144ae5c06(void)

undefined8 FUN_144ae5c06(longlong *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  code *pcVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  pcVar7 = *(code **)(*param_1 + 0x2c0);
  if (pcVar7 == FUN_14470b416) {
    plVar1 = (longlong *)FUN_14470b416(param_1,&local_38);
  }
  else {
    plVar1 = param_1;
    if (pcVar7 != (code *)&LAB_14470b6fe) {
      plVar1 = (longlong *)(*pcVar7)(param_1,&local_38);
    }
  }
  if (plVar1 != (longlong *)0x0) {
    pcVar7 = *(code **)(*param_1 + 0x348);
    if (pcVar7 == FUN_144b25140) {
      pcVar7 = *(code **)(*param_1 + 0x350);
      if (pcVar7 == FUN_144a131d6) {
        do {
          if ((*(byte *)(param_1 + 0x2a) & 1) != 0) {
            if ((int)*(uint *)(param_1 + 0x5a) < 1) goto LAB_144ae5e36;
            uVar6 = 0;
            lVar4 = 0;
            goto LAB_144ae5d3b;
          }
          param_1 = (longlong *)param_1[0x22];
          if (param_1 == (longlong *)0x0) goto LAB_144ae5e36;
          pcVar7 = *(code **)(*param_1 + 0x350);
        } while (pcVar7 == FUN_144a131d6);
        if (pcVar7 == FUN_14478329a) {
          if ((longlong)(int)param_1[0x4b] < 1) goto LAB_144ae5e36;
          lVar5 = 0;
          lVar4 = 0;
          do {
            lVar3 = *(longlong *)(param_1[0x4a] + lVar5 * 8);
            if (*(int *)(lVar3 + 0x24) == param_2) {
              if (*(char *)(lVar3 + 0x20) == '\x04') {
                lVar4 = lVar3;
              }
              if (*(char *)(lVar3 + 0x20) == DAT_14cb0cc00) break;
            }
            lVar3 = lVar4;
            lVar5 = lVar5 + 1;
            lVar4 = lVar3;
          } while ((int)param_1[0x4b] != lVar5);
          goto LAB_144ae5d60;
        }
      }
      lVar3 = (*pcVar7)(param_1,param_2,4);
LAB_144ae5d60:
      if ((lVar3 == 0) || (*(longlong *)(lVar3 + 0x40) == 0)) goto LAB_144ae5e36;
    }
    else {
      if (pcVar7 != FUN_14470b71c) {
        lVar3 = (*pcVar7)(param_1,param_2,4);
        goto LAB_144ae5d60;
      }
      if (0 < (longlong)(int)param_1[0x4b]) {
        lVar5 = 0;
        lVar4 = 0;
        do {
          lVar3 = *(longlong *)(param_1[0x4a] + lVar5 * 8);
          if (*(int *)(lVar3 + 0x24) == param_2) {
            if (*(char *)(lVar3 + 0x20) == '\x04') {
              lVar4 = lVar3;
            }
            if (*(char *)(lVar3 + 0x20) == DAT_14cb0cc00) break;
          }
          lVar3 = lVar4;
          lVar5 = lVar5 + 1;
          lVar4 = lVar3;
        } while ((int)param_1[0x4b] != lVar5);
        goto LAB_144ae5d60;
      }
LAB_144ae5e36:
      lVar3 = (**(code **)(*plVar1 + 0x348))(plVar1,param_2,4);
      if (lVar3 == 0) goto LAB_144ae5e50;
    }
    if (*(longlong *)(lVar3 + 0x10) != 0) {
      lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x28);
      uVar6 = CONCAT71((int7)((ulonglong)lVar3 >> 8),*(undefined1 *)(lVar3 + 0x246)) &
              0xffffffffffffff10;
      uVar2 = CONCAT71((int7)(uVar6 >> 8),(byte)uVar6 >> 4);
      goto LAB_144ae5d90;
    }
  }
LAB_144ae5e50:
  uVar2 = 0;
LAB_144ae5d90:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_144ae5d3b:
  do {
    lVar3 = *(longlong *)(param_1[0x59] + uVar6 * 8);
    if (*(int *)(lVar3 + 0x24) == param_2) {
      if (*(char *)(lVar3 + 0x20) == '\x04') {
        lVar4 = lVar3;
      }
      if (*(char *)(lVar3 + 0x20) == DAT_14cb0cc00) break;
    }
    lVar3 = lVar4;
    uVar6 = uVar6 + 1;
    lVar4 = lVar3;
  } while (*(uint *)(param_1 + 0x5a) != uVar6);
  goto LAB_144ae5d60;
}



// FUNCTION 144ae5e76 FUN_144ae5e76 body=129 status=ok
// SIG undefined FUN_144ae5e76(void)

bool FUN_144ae5e76(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_38 [4];
  undefined1 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = 0xff;
  local_48 = param_4;
  if (*(code **)(*param_1 + 0x48) == FUN_144727fec) {
    cVar1 = FUN_144727fec(param_1,0x144727f03,param_2,local_38);
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0x48))(param_1,0x144727f03,param_2,local_38);
  }
  if (cVar1 != '\0') {
    *param_3 = local_38[0];
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return cVar1 != '\0';
}



// FUNCTION 144ae5ef8 FUN_144ae5ef8 body=270 status=ok
// SIG undefined FUN_144ae5ef8(void)

undefined8 * FUN_144ae5ef8(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined *puVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x48);
  if (plVar3 != (longlong *)0x0) {
    local_28 = 0;
    uStack_20 = 0;
    if (*(code **)(*plVar3 + 0x2d0) == FUN_14470b4c6) {
      lVar2 = FUN_14470b4c6(plVar3,&local_28);
    }
    else {
      lVar2 = (**(code **)(*plVar3 + 0x2d0))(plVar3,&local_28);
    }
    *param_2 = *(undefined8 *)(lVar2 + 0x3a0);
    iVar1 = *(int *)(lVar2 + 0x3a8);
    *(int *)(param_2 + 1) = iVar1;
    if (iVar1 != 0) goto LAB_144ae5f5f;
  }
  plVar3 = *(longlong **)(param_1 + 0x40);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)FUN_1447277f0(0);
    local_28 = 0;
    uStack_20 = 0;
    puVar4 = (undefined *)(**(code **)(*plVar3 + 0x2d0))(plVar3);
  }
  else {
    local_28 = 0;
    uStack_20 = 0;
    if (*(code **)(*plVar3 + 0x2d0) == (code *)&LAB_14470b6e8) {
      puVar4 = &DAT_14caea5a0;
      if ((undefined *)plVar3[0x18] != (undefined *)0x0) {
        puVar4 = (undefined *)plVar3[0x18];
      }
    }
    else {
      puVar4 = (undefined *)(**(code **)(*plVar3 + 0x2d0))(plVar3,&local_28);
    }
  }
  *param_2 = *(undefined8 *)(puVar4 + 0x3a0);
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar4 + 0x3a8);
LAB_144ae5f5f:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144ae6008 FUN_144ae6008 body=527 status=ok
// SIG undefined FUN_144ae6008(void)

void FUN_144ae6008(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  void *_Src;
  ulonglong uVar2;
  uint *puVar3;
  longlong lVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  void *_Dst;
  uint uVar8;
  int *piVar9;
  ulonglong _Size;
  
  uVar7 = *(uint *)(param_1 + 1);
  if ((int)uVar7 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    uVar6 = 4;
    if (4 < uVar7) {
      uVar6 = uVar7;
    }
  }
  else {
    uVar6 = uVar7 + (int)((ulonglong)((longlong)(int)uVar7 * 3) >> 3) + 0x10;
  }
  uVar8 = 0x7fffffff;
  if ((int)uVar7 <= (int)uVar6) {
    uVar8 = uVar6;
  }
  *(uint *)((longlong)param_1 + 0xc) = uVar8;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar8,0x40);
  }
  _Src = (void *)*param_1;
  if (uVar8 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_144ae6148:
      piVar9 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (*piVar9 == 0) {
        if (*(longlong *)(piVar9 + 0x10) - (longlong)piVar9 == 0x10000) {
          lVar4 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar4 = FUN_145bdc178();
          }
          FUN_140028df4(lVar4,piVar9);
        }
        else {
          FUN_144705e74(piVar9);
        }
      }
    }
LAB_144ae61a5:
    *param_1 = _Dst;
    return;
  }
  _Size = (ulonglong)uVar8 * 0x40;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xde8);
  puVar3 = (uint *)*puVar1;
  if (puVar3 != (uint *)0x0) goto LAB_144ae608c;
LAB_144ae6081:
  FUN_144769a66(puVar1);
  puVar3 = (uint *)*puVar1;
LAB_144ae608c:
  _Dst = (void *)(*(longlong *)(puVar3 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar5 = (uint *)((longlong)_Dst + _Size);
  if (puVar3 + 0x4000 < puVar5) {
    if (uVar8 < 0x3ff) goto code_r0x000144ae60b8;
    puVar3 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar3 = 0xffffffff;
    puVar3[0x12] = 0;
    _Dst = (void *)((longlong)puVar3 + 0x5fU & 0xfffffffffffffff8);
    *(uint **)(puVar3 + 0x10) = puVar3 + (ulonglong)uVar8 * 0x10 + 0x18;
    *puVar3 = 1;
  }
  else {
    uVar7 = puVar3[0x12] + 1;
LAB_144ae610e:
    *(uint **)(puVar3 + 0x10) = puVar5 + 2;
    puVar3[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar3;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_144ae61a5;
  uVar2 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar2 != 0) {
    if (uVar2 < _Size) {
      _Size = uVar2;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_144ae6148;
code_r0x000144ae60b8:
  uVar7 = puVar3[0x12];
  while( true ) {
    *(uint **)(puVar3 + 0x10) = puVar3 + 0x4000;
    LOCK();
    uVar6 = *puVar3;
    *puVar3 = *puVar3 + uVar7 + 1;
    UNLOCK();
    if ((uVar6 ^ uVar7) != 0xffffffff) break;
    puVar3 = (uint *)*puVar1;
    *puVar3 = 0xffffffff;
    *(uint **)(puVar3 + 0x10) = puVar3 + 0x16;
    puVar3[0x12] = 0;
    *puVar1 = puVar3;
    _Dst = (void *)((longlong)puVar3 + 0x5fU & 0xfffffffffffffff8);
    puVar5 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar5 <= puVar3 + 0x4000) {
      uVar7 = 1;
      goto LAB_144ae610e;
    }
  }
  goto LAB_144ae6081;
}



// FUNCTION 144ae6218 FUN_144ae6218 body=437 status=ok
// SIG undefined FUN_144ae6218(void)

void FUN_144ae6218(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  int *piVar8;
  ulonglong _Size;
  void *_Dst;
  
  if ((int)param_2 < 1) {
    param_2 = 0;
LAB_144ae636a:
    *(uint *)((longlong)param_1 + 0xc) = param_2;
    return;
  }
  _Size = (ulonglong)param_2 * 8;
  _Src = (void *)*param_1;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xde8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_144ae626b;
  while( true ) {
    FUN_144769a66(puVar1);
    puVar4 = (uint *)*puVar1;
LAB_144ae626b:
    _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    if (puVar6 <= puVar4 + 0x4000) break;
    if (0x1ff4 < param_2) {
      puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
      *puVar4 = 0xffffffff;
      puVar4[0x12] = 0;
      _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
      *(uint **)(puVar4 + 0x10) = puVar4 + (ulonglong)param_2 * 2 + 0x18;
      *puVar4 = 1;
      goto LAB_144ae62fa;
    }
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
        goto LAB_144ae62ef;
      }
    }
  }
  uVar7 = puVar4[0x12] + 1;
LAB_144ae62ef:
  *(uint **)(puVar4 + 0x10) = puVar6 + 2;
  puVar4[0x12] = uVar7;
LAB_144ae62fa:
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src != (void *)0x0) {
    uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
    if (uVar3 != 0) {
      if (uVar3 < _Size) {
        _Size = uVar3;
      }
      memcpy(_Dst,_Src,_Size);
    }
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
  *param_1 = _Dst;
  goto LAB_144ae636a;
}



// FUNCTION 144ae63ce FUN_144ae63ce body=1827 status=ok
// SIG undefined FUN_144ae63ce(void)

int * FUN_144ae63ce(longlong *param_1,int *param_2,ulonglong *param_3,char *param_4)

{
  ulonglong *puVar1;
  uint *puVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  byte bVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  uint *puVar12;
  longlong *plVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  undefined4 uVar19;
  int iVar20;
  longlong lVar21;
  char cVar22;
  int iVar23;
  ulonglong uVar24;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar23 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar23 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar23) {
      FUN_1446efaca(param_1,iVar23);
    }
    iVar20 = (int)param_1[5];
    if (iVar20 == 0) {
      iVar9 = -1;
    }
    else {
      iVar9 = iVar20 + 0x1e;
      if (-1 < iVar20 + -1) {
        iVar9 = iVar20 + -1;
      }
      iVar9 = iVar9 >> 5;
    }
    plVar11 = param_1 + 2;
    iVar7 = iVar20 + 1;
    iVar10 = iVar20 + 0x1f;
    if (-1 < iVar20) {
      iVar10 = iVar20;
    }
    if (iVar10 >> 5 == iVar9) {
      *(int *)(param_1 + 5) = iVar7;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar20) {
        iVar9 = iVar20;
        if (iVar20 + 0x20U < 0xa0) {
          iVar7 = 0x80;
        }
        else {
          uVar17 = iVar20 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar15 = 4;
            if (4 < uVar17) {
              uVar15 = uVar17;
            }
          }
          else {
            uVar15 = uVar17 + (uVar17 * 3 >> 3) + 0x10;
          }
          uVar8 = (ulonglong)(uVar15 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar18 = (uint)(uVar8 + 0xf);
              if (uVar15 < 0x1ffd) {
                uVar8 = (ulonglong)
                        (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar8 + 0xf >> 4]];
              }
              else {
                uVar14 = (ulonglong)(uVar18 & 0xfffffff0);
                if (uVar14 < 0x7ff1) {
                  bVar6 = (&DAT_14c841e00)[uVar18 >> 4];
                  uVar24 = 0x32;
                  if (0x32 < bVar6) {
                    uVar24 = (ulonglong)bVar6;
                  }
                  uVar16 = 0x32 - (ulonglong)bVar6;
                  do {
                    uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar16 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar16 & 0xffffffff] & 0xf) == 0) goto LAB_144ae69ad;
                    lVar5 = uVar24 + 1 + uVar16;
                    uVar16 = uVar16 - 1;
                  } while (lVar5 != 0x33);
                }
                uVar8 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar8 = (ulonglong)DAT_14c841df8;
                }
                uVar8 = -uVar8 & (uVar14 + uVar8) - 1;
              }
            }
            else {
              uVar8 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar8,0);
              iVar9 = (int)param_1[5];
            }
          }
LAB_144ae69ad:
          iVar4 = (int)(uVar8 >> 2);
          iVar7 = -0x20;
          if ((int)uVar17 <= iVar4) {
            iVar7 = iVar4 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar7;
        FUN_1446efbd8(plVar11,iVar9);
        iVar7 = (int)param_1[5] + 1;
      }
      iVar9 = iVar7 + 0x1f;
      if (-1 < iVar7) {
        iVar9 = iVar7;
      }
      *(int *)(param_1 + 5) = iVar7;
      if (iVar7 % 0x20 != 0) {
        plVar13 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar13 = plVar11;
        }
        bVar6 = -(char)(iVar7 % 0x20);
        *(uint *)((longlong)plVar13 + (longlong)(iVar9 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar13 + (longlong)(iVar9 >> 5) * 4) << (bVar6 & 0x1f)) >>
             (bVar6 & 0x1f);
      }
    }
    lVar5 = (longlong)iVar23;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar11 = (longlong *)param_1[4];
    }
    bVar6 = (byte)iVar20 & 0x1f;
    puVar2 = (uint *)((longlong)plVar11 + (longlong)(iVar10 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
  }
  else {
    iVar23 = (int)param_1[6];
    lVar5 = (longlong)iVar23;
    iVar20 = *(int *)(*param_1 + 4 + lVar5 * 0x10);
    *(int *)(param_1 + 6) = iVar20;
    iVar9 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar20 * 0x10) = 0xffffffff;
    }
  }
  puVar2 = (uint *)(param_1 + 2);
  uVar17 = 1 << ((byte)iVar23 & 0x1f);
  puVar12 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar12 = puVar2;
  }
  iVar20 = iVar23 + 0x1f;
  if (-1 < iVar23) {
    iVar20 = iVar23;
  }
  puVar12[iVar20 >> 5] = puVar12[iVar20 >> 5] | uVar17;
  lVar21 = *param_1;
  lVar5 = lVar5 * 0x10;
  uVar8 = *param_3;
  *(ulonglong *)(lVar21 + lVar5) = uVar8;
  *(undefined4 *)(lVar21 + 8 + lVar5) = 0xffffffff;
  uVar15 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
  uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
  uVar15 = uVar15 >> 0x10 ^ uVar15;
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar11 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar11 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar11 + (ulonglong)((int)param_1[9] - 1U & uVar15) * 4);
    if (iVar9 != -1) {
      do {
        puVar1 = (ulonglong *)(*param_1 + (longlong)iVar9 * 0x10);
        if (*(ulonglong *)(*param_1 + (longlong)iVar9 * 0x10) == uVar8) {
          *puVar1 = uVar8;
          lVar3 = *param_1;
          if (*(int *)((longlong)param_1 + 0x34) != 0) {
            *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x10) = iVar23;
          }
          *(undefined4 *)(lVar3 + (longlong)iVar23 * 0x10) = 0xffffffff;
          uVar19 = 0xffffffff;
          if (0 < *(int *)((longlong)param_1 + 0x34)) {
            uVar19 = (undefined4)param_1[6];
          }
          *(undefined4 *)(lVar3 + (longlong)iVar23 * 0x10 + 4) = uVar19;
          *(int *)(param_1 + 6) = iVar23;
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
          puVar12 = (uint *)param_1[4];
          if ((uint *)param_1[4] == (uint *)0x0) {
            puVar12 = puVar2;
          }
          puVar12[iVar20 >> 5] = puVar12[iVar20 >> 5] & ~uVar17;
          cVar22 = '\x01';
          goto LAB_144ae65c0;
        }
        iVar9 = (int)puVar1[1];
      } while (iVar9 != -1);
    }
  }
  cVar22 = '\0';
  iVar9 = iVar23;
LAB_144ae65c0:
  if (param_4 != (char *)0x0) {
    *param_4 = cVar22;
  }
  if (cVar22 != '\0') goto LAB_144ae65ce;
  uVar18 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  uVar17 = 1;
  if (3 < uVar18) {
    uVar8 = (ulonglong)(uVar18 & 0xfffffffe) + 0xf;
    lVar3 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar17 = 1 << ((byte)lVar3 & 0x1f);
  }
  if (((int)uVar18 < 1) || ((int)uVar17 <= (int)param_1[9])) {
    uVar15 = (int)param_1[9] - 1U & uVar15;
    *(uint *)(lVar21 + lVar5 + 0xc) = uVar15;
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(undefined4 *)(lVar21 + lVar5 + 8) =
         *(undefined4 *)
          ((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4);
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(int *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4) =
         iVar9;
    goto LAB_144ae65ce;
  }
  *(uint *)(param_1 + 9) = uVar17;
  plVar11 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar11,0,0,4);
    uVar17 = *(uint *)(param_1 + 9);
  }
  plVar13 = param_1 + 7;
  if (uVar17 == 1) {
    if (*plVar11 != 0) {
      FUN_1446efa72(plVar11,0,0,4);
    }
LAB_144ae6688:
    uVar15 = 0;
    do {
      plVar11 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar11 = plVar13;
      }
      *(undefined4 *)((longlong)plVar11 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar15) * 4) =
           0xffffffff;
      uVar15 = uVar15 + 1;
    } while (uVar17 != uVar15);
  }
  else {
    if (uVar17 == 0) goto LAB_144ae65ce;
    FUN_1446efa72(plVar11,0,uVar17,4);
    if (0 < (int)uVar17) goto LAB_144ae6688;
  }
  iVar23 = (int)param_1[5];
  if (iVar23 == 0) {
    uVar8 = 0;
    uVar14 = 1;
    iVar20 = 0;
    iVar7 = 0;
  }
  else {
    puVar12 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar12 = puVar2;
    }
    uVar17 = *puVar12;
    if (uVar17 == 0) {
      iVar20 = iVar23 + 0x1e;
      if (-1 < iVar23 + -1) {
        iVar20 = iVar23 + -1;
      }
      uVar8 = 0;
      uVar14 = (ulonglong)(uint)(iVar20 >> 5);
      if (iVar20 >> 5 < 1) {
        uVar14 = uVar8;
      }
      iVar7 = 0;
      do {
        if (uVar14 == uVar8) goto LAB_144ae65ce;
        iVar7 = iVar7 + 0x20;
        uVar17 = puVar12[uVar8 + 1];
        uVar8 = uVar8 + 1;
      } while (uVar17 == 0);
    }
    else {
      uVar8 = 0;
      iVar7 = 0;
    }
    uVar14 = (ulonglong)(-uVar17 & uVar17);
    uVar24 = uVar14 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar24 != 0) {
      for (; uVar24 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    iVar20 = (iVar7 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
    if (iVar23 <= iVar20) {
      iVar20 = iVar23;
    }
  }
  if (iVar20 < iVar23) {
    uVar17 = 0xffffffff;
    do {
      lVar5 = *param_1;
      lVar21 = (longlong)iVar20 * 0x10;
      uVar15 = ((uint)(*(ulonglong *)(lVar5 + lVar21) >> 0x14) & 0xffff ^
               (uint)(*(ulonglong *)(lVar5 + lVar21) >> 4)) * -0x7a143595;
      uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
      uVar24 = (longlong)(int)(uVar15 >> 0x10 ^ uVar15) & (longlong)(int)param_1[9] - 1U;
      iVar23 = (int)uVar24;
      *(int *)(lVar5 + 0xc + lVar21) = iVar23;
      plVar11 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar11 = plVar13;
      }
      *(undefined4 *)(lVar5 + 8 + lVar21) =
           *(undefined4 *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & uVar24) * 4);
      plVar11 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar11 = plVar13;
      }
      *(int *)((longlong)plVar11 + ((longlong)iVar23 & (longlong)(int)param_1[9] - 1U) * 4) = iVar20
      ;
      uVar17 = ~(uint)uVar14 & uVar17;
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puVar2;
      }
      iVar23 = (int)param_1[5];
      iVar20 = (int)uVar8;
      lVar5 = (longlong)iVar20;
      uVar15 = puVar12[lVar5] & uVar17;
      if (uVar15 == 0) {
        iVar10 = iVar23 + 0x1e;
        if (-1 < iVar23 + -1) {
          iVar10 = iVar23 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar4 = iVar10;
        if (iVar10 < iVar20) {
          iVar4 = iVar20;
        }
        if (iVar10 <= iVar20) break;
        lVar21 = 0;
        while( true ) {
          iVar7 = iVar7 + 0x20;
          uVar15 = puVar12[lVar5 + lVar21 + 1];
          if (uVar15 != 0) break;
          lVar21 = lVar21 + 1;
          if (iVar4 - lVar5 == lVar21) goto LAB_144ae65ce;
        }
        uVar8 = (ulonglong)(iVar20 + (int)lVar21 + 1);
        uVar17 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar15 & uVar15);
      uVar24 = uVar14 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar20 = (iVar7 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
    } while (iVar20 < iVar23);
  }
LAB_144ae65ce:
  *param_2 = iVar9;
  return param_2;
}



// FUNCTION 144ae6af2 FUN_144ae6af2 body=161 status=ok
// SIG undefined FUN_144ae6af2(void)

void FUN_144ae6af2(longlong *param_1,int *param_2,undefined4 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_48 [4];
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_2[2] != 0 || *param_2 != 0) &&
     (plVar1 = (longlong *)*param_1, plVar1 != (longlong *)0x0)) {
    local_28 = 0xff;
    local_58 = param_1;
    if (*(code **)(*plVar1 + 0x48) == FUN_144727fec) {
      cVar2 = FUN_144727fec(plVar1,0x144727f03,param_2,local_48);
    }
    else {
      cVar2 = (**(code **)(*plVar1 + 0x48))(plVar1,0x144727f03,param_2,local_48);
    }
    if (cVar2 != '\0') goto LAB_144ae6b62;
  }
  local_48[0] = FUN_140081bf9(param_1[1],param_3);
LAB_144ae6b62:
  *param_4 = local_48[0];
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144ae6b94 FUN_144ae6b94 body=2716 status=ok
// SIG undefined FUN_144ae6b94(void)

void FUN_144ae6b94(longlong param_1,uint param_2,int param_3,longlong *param_4,undefined8 param_5,
                  longlong *param_6)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  byte bVar10;
  uint uVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint *puVar18;
  longlong lVar19;
  undefined *puVar20;
  uint uVar21;
  uint uVar22;
  longlong *plVar23;
  bool bVar24;
  bool bVar25;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  undefined4 local_190;
  undefined4 local_188;
  undefined8 local_180;
  wchar_t *local_178;
  undefined1 *local_170;
  undefined1 *local_168;
  code **local_160;
  undefined1 *local_158;
  code *local_150;
  undefined4 local_144;
  uint *local_140;
  longlong local_138;
  undefined1 *local_130;
  longlong local_128;
  code *local_120;
  longlong local_118 [4];
  undefined1 local_f8;
  undefined4 local_f0;
  undefined1 local_ec;
  longlong *local_e8;
  undefined *puStack_e0;
  undefined1 local_d8 [128];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  *param_6 = 0;
  uVar4 = *(ulonglong *)(param_1 + 0x30 + (ulonglong)param_2 * 0x10);
  if ((uVar4 & 1) != 0) {
    uVar4 = ((longlong)uVar4 >> 0x18) + param_1 + (ulonglong)param_2 * 0x10 + 0x30;
  }
  lVar5 = (longlong)param_3 * 0x1c;
  puVar18 = (uint *)(uVar4 + lVar5);
  if ((*(int *)(uVar4 + lVar5) != 0) || (puVar18[2] != 0)) {
    lVar19 = *param_4;
    local_140 = puVar18;
    if (*(code **)(lVar19 + 0x3c8) == FUN_14487c068) {
      local_f8 = 0xff;
      local_f0 = 0xffffffff;
      local_ec = 0;
      if (*(code **)(lVar19 + 0x3c0) == FUN_144989384) {
        local_58 = (undefined1 *)0x0;
        local_50 = 0x1000000000;
        local_e8 = (longlong *)0x0;
        puStack_e0 = (undefined *)0x0;
        if (*(code **)(lVar19 + 0x2c8) == FUN_144b24fbc) {
          do {
            uVar4 = local_50;
            puVar6 = local_58;
            if (local_58 == (undefined1 *)0x0) {
              puVar6 = local_d8;
            }
            lVar5 = (longlong)(int)local_50;
            if (lVar5 != 0) {
              lVar19 = 0;
              do {
                if (*(longlong **)(puVar6 + lVar19) == param_4) goto LAB_144ae754e;
                lVar19 = lVar19 + 8;
              } while (lVar5 * 8 - lVar19 != 0);
            }
            uVar7 = (int)local_50 + 1;
            local_50 = CONCAT44(local_50._4_4_,uVar7);
            if (local_50._4_4_ < uVar7) {
              FUN_147bba0a6(local_d8,uVar4 & 0xffffffff);
              puVar18 = local_140;
            }
            puVar6 = local_58;
            if (local_58 == (undefined1 *)0x0) {
              puVar6 = local_d8;
            }
            *(longlong **)(puVar6 + lVar5 * 8) = param_4;
            if (puStack_e0 == (undefined *)0x0) {
              puStack_e0 = (undefined *)param_4[0x18];
            }
            param_4 = (longlong *)param_4[0x22];
            if (param_4 == (longlong *)0x0) {
LAB_144ae754e:
              FUN_14003fbd6();
              (**(code **)(*DAT_14caea080 + 0x2c8))(DAT_14caea080,&local_e8);
              puVar18 = local_140;
              goto LAB_144ae6d9d;
            }
            pcVar2 = *(code **)(*param_4 + 0x2c8);
          } while (pcVar2 == FUN_144b24fbc);
          if (pcVar2 == (code *)&LAB_147bae246) {
            local_e8 = param_4;
            if (puStack_e0 == (undefined *)0x0) {
              puStack_e0 = &DAT_14caea5a0;
              if ((undefined *)param_4[0x18] != (undefined *)0x0) {
                puStack_e0 = (undefined *)param_4[0x18];
              }
            }
          }
          else {
            (*pcVar2)(param_4,&local_e8);
            puVar18 = local_140;
          }
        }
        else {
          (**(code **)(lVar19 + 0x2c8))(param_4,&local_e8);
          puVar18 = local_140;
        }
LAB_144ae6d9d:
        uVar7 = *puVar18;
        uVar14 = puVar18[2];
        bVar10 = (byte)puVar18[4];
        if (*(int *)(puStack_e0 + 0xf8) == *(int *)(puStack_e0 + 0x124)) {
          local_144 = 0;
        }
        else {
          uVar21 = puVar18[3];
          uVar15 = uVar21 >> 0xd ^
                   ((uVar7 << 0x10 | uVar7 & 0xffff) + ((uVar7 & 0xffff) >> 4) +
                    ((uVar7 >> 0x10) << 0x13 | uVar7 >> 0x10) + uVar14) - uVar21;
          uVar17 = uVar15 << 8 ^ (-0x61c88647 - uVar21) - uVar15;
          uVar11 = uVar17 >> 0xd ^ (uVar21 - uVar15) - uVar17;
          uVar15 = uVar11 >> 0xc ^ (uVar15 - uVar17) - uVar11;
          uVar22 = uVar15 << 0x10 ^ (uVar17 - uVar11) - uVar15;
          uVar17 = uVar22 >> 5 ^ (uVar11 - uVar15) - uVar22;
          uVar11 = uVar17 >> 3 ^ (uVar15 - uVar22) - uVar17;
          uVar15 = uVar11 << 10 ^ (uVar22 - uVar17) - uVar11;
          uVar11 = uVar15 >> 0xf ^ uVar17 - (uVar11 + uVar15);
          iVar16 = uVar11 - bVar10;
          uVar11 = iVar16 * 0x100 ^ 0x9e3779b9 - uVar11;
          uVar15 = uVar11 >> 0xd ^ ((uint)bVar10 - iVar16) - uVar11;
          uVar17 = uVar15 >> 0xc ^ (iVar16 - uVar11) - uVar15;
          uVar11 = uVar17 << 0x10 ^ (uVar11 - uVar15) - uVar17;
          uVar15 = uVar11 >> 5 ^ (uVar15 - uVar17) - uVar11;
          uVar17 = uVar15 >> 3 ^ (uVar17 - uVar11) - uVar15;
          uVar11 = uVar17 << 10 ^ (uVar11 - uVar15) - uVar17;
          puVar20 = puStack_e0 + 0x128;
          if (*(undefined **)(puStack_e0 + 0x130) != (undefined *)0x0) {
            puVar20 = *(undefined **)(puStack_e0 + 0x130);
          }
          iVar16 = *(int *)(puVar20 +
                           (ulonglong)
                           (*(int *)(puStack_e0 + 0x138) - 1U &
                           (uVar11 >> 0xf ^ uVar15 - (uVar17 + uVar11))) * 4);
          puVar18 = local_140;
          if (iVar16 == -1) {
            local_144 = 0;
          }
          else {
            lVar5 = *(longlong *)(puStack_e0 + 0xf0);
            do {
              lVar19 = (longlong)iVar16;
              if ((((*(uint *)(lVar5 + lVar19 * 0x18) == uVar7) &&
                   (*(uint *)(lVar5 + 4 + lVar19 * 0x18) == uVar14)) &&
                  (lVar1 = lVar5 + lVar19 * 0x18, *(byte *)(lVar1 + 8) == bVar10)) &&
                 (*(uint *)(lVar1 + 0xc) == uVar21)) {
                pcVar8 = (char *)(lVar19 * 5);
                puVar18 = (uint *)(*(longlong *)(puStack_e0 + 0x340) + lVar19 * 0x28);
                if (puVar18[1] == 0) {
LAB_144ae71c7:
                  if (*(longlong *)(puVar18 + 2) != 0) {
                    pcVar9 = (char *)(puVar18 + 2);
                    pcVar8 = pcVar9;
                    lVar5 = FUN_140007850();
                    cVar3 = (*(code *)PTR_FUN_14c758760)();
                    if ((lVar5 == 0) || (cVar3 == '\0')) {
                      if (lVar5 != 0) {
                        uVar7 = *(uint *)(lVar5 + 0xc);
                        *puVar18 = uVar7;
                        if ((int)uVar7 < DAT_14c9647dc) {
                          pcVar8 = (char *)(ulonglong)(uVar7 & 0xffff);
                          lVar19 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
                        }
                        else {
                          lVar19 = 0;
                        }
                        uVar7 = *(uint *)(lVar19 + 0x10);
                        if (*(uint *)(lVar19 + 0x10) == 0) {
                          LOCK();
                          iVar16 = DAT_14c964868 + 1;
                          UNLOCK();
                          uVar14 = DAT_14c964868 + 1;
                          bVar24 = DAT_14c964868 < 1000;
                          DAT_14c964868 = iVar16;
                          if (bVar24) {
                            pcVar8 = ".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp";
                            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",
                                          0x23d,
                                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                          ,uVar14);
                          }
                          LOCK();
                          uVar7 = *(uint *)(lVar19 + 0x10);
                          bVar24 = uVar7 == 0;
                          if (bVar24) {
                            *(uint *)(lVar19 + 0x10) = uVar14;
                            uVar7 = 0;
                          }
                          UNLOCK();
                          if (bVar24) {
                            uVar7 = uVar14;
                          }
                        }
                        puVar18[1] = uVar7;
                        goto LAB_144ae7237;
                      }
                      puVar18[0] = 0;
                      puVar18[1] = 0;
                    }
                    else {
                      uVar7 = *(uint *)(lVar5 + 0xc);
                      if ((int)uVar7 < DAT_14c9647dc) {
                        pcVar8 = (char *)((ulonglong)((uVar7 & 0xffff) * 0x18) +
                                         *(longlong *)
                                          (DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
                      }
                      else {
                        pcVar8 = (char *)0x0;
                      }
                      if ((*(uint *)((longlong)pcVar8 + 8) & 0x8400000) == 0) {
                        pcVar8 = (char *)puVar18;
                        FUN_14485c47a(puVar18,lVar5);
                      }
LAB_144ae7237:
                      if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) == 0) goto LAB_144ae6fde;
                    }
                    if (*(longlong *)pcVar9 != 0) {
                      pcVar8 = pcVar9;
                      FUN_140081d40(pcVar9,0);
                      if (puVar18[1] != 0) {
                        uVar7 = *puVar18;
                        pcVar8 = (char *)(ulonglong)uVar7;
                        if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) {
                          pcVar8 = (char *)(ulonglong)(uVar7 >> 0x10);
                          plVar23 = (longlong *)
                                    ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                                    *(longlong *)(DAT_14c9647c8 + (longlong)pcVar8 * 8));
                          if ((plVar23 != (longlong *)0x0) &&
                             (((*(uint *)(plVar23 + 2) == puVar18[1] &&
                               ((*(uint *)(plVar23 + 1) & 0x10200000) == 0)) &&
                              (lVar5 = *plVar23, lVar5 != 0)))) goto LAB_144ae6fde;
                        }
                      }
                      if (*(longlong *)pcVar9 != 0) {
                        lVar5 = FUN_140007850();
                        cVar3 = (*(code *)PTR_FUN_14c758760)();
                        if ((lVar5 == 0) || (cVar3 == '\0')) {
                          if (lVar5 != 0) {
                            uVar7 = *(uint *)(lVar5 + 0xc);
                            *puVar18 = uVar7;
                            if ((int)uVar7 < DAT_14c9647dc) goto LAB_144ae7301;
LAB_144ae73b6:
                            lVar19 = 0;
                            goto LAB_144ae7319;
                          }
                          puVar18[0] = 0;
                          puVar18[1] = 0;
                          pcVar8 = pcVar9;
                        }
                        else {
                          uVar7 = *(uint *)(lVar5 + 0xc);
                          if ((int)uVar7 < DAT_14c9647dc) {
                            lVar19 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
                          }
                          else {
                            lVar19 = 0;
                          }
                          pcVar9 = (char *)(ulonglong)*(uint *)(lVar19 + 8);
                          if ((*(uint *)(lVar19 + 8) & 0x8400000) == 0) {
                            *puVar18 = uVar7;
                            if (DAT_14c9647dc <= (int)uVar7) goto LAB_144ae73b6;
LAB_144ae7301:
                            pcVar9 = (char *)(ulonglong)(uVar7 & 0xffff);
                            lVar19 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
LAB_144ae7319:
                            uVar7 = *(uint *)(lVar19 + 0x10);
                            if (*(uint *)(lVar19 + 0x10) == 0) {
                              LOCK();
                              iVar16 = DAT_14c964868 + 1;
                              UNLOCK();
                              uVar14 = DAT_14c964868 + 1;
                              bVar24 = DAT_14c964868 < 1000;
                              DAT_14c964868 = iVar16;
                              if (bVar24) {
                                pcVar9 = ".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp";
                                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp"
                                              ,0x23d,
                                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                              ,uVar14);
                              }
                              LOCK();
                              uVar7 = *(uint *)(lVar19 + 0x10);
                              bVar24 = uVar7 == 0;
                              if (bVar24) {
                                *(uint *)(lVar19 + 0x10) = uVar14;
                                uVar7 = 0;
                              }
                              UNLOCK();
                              if (bVar24) {
                                uVar7 = uVar14;
                              }
                            }
                            puVar18[1] = uVar7;
                          }
                          pcVar8 = pcVar9;
                          if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) == 0) goto LAB_144ae6fde;
                        }
                      }
                    }
                  }
LAB_144ae73c9:
                  lVar5 = 0;
                }
                else {
                  uVar7 = *puVar18;
                  pcVar8 = (char *)(ulonglong)uVar7;
                  if (((int)uVar7 < 0) || (DAT_14c9647dc <= (int)uVar7)) goto LAB_144ae71c7;
                  pcVar8 = (char *)(ulonglong)(uVar7 >> 0x10);
                  plVar23 = (longlong *)
                            ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (longlong)pcVar8 * 8));
                  if (((plVar23 == (longlong *)0x0) ||
                      ((*(uint *)(plVar23 + 2) != puVar18[1] ||
                       ((*(uint *)(plVar23 + 1) & 0x10200000) != 0)))) ||
                     (lVar5 = *plVar23, lVar5 == 0)) goto LAB_144ae71c7;
LAB_144ae6fde:
                  if (DAT_14cb0b430 == 0) {
                    local_160 = &local_120;
                    local_120 = FUN_1449e2820;
                    local_150 = FUN_14081d0ea;
                    local_158 = &LAB_145892f94;
                    local_168 = &LAB_147d6dbf3;
                    local_170 = &LAB_1464081e0;
                    local_178 = L"Engine";
                    local_180 = 0;
                    local_188 = 0x10000001;
                    local_190 = 8;
                    local_198 = 0x138;
                    FUN_14081cfa3(L"/Script/Engine",L"Texture",&DAT_14cb0b430,FUN_1464081be);
                  }
                  pcVar8 = *(char **)(lVar5 + 0x10);
                  if (((int)*(uint *)((longlong)pcVar8 + 0x38) < *(int *)(DAT_14cb0b430 + 0x38)) ||
                     (pcVar8 = *(char **)((longlong)pcVar8 + 0x30),
                     *(longlong *)
                      ((longlong)pcVar8 + (longlong)*(int *)(DAT_14cb0b430 + 0x38) * 2 * 4) !=
                     DAT_14cb0b430 + 0x30)) goto LAB_144ae73c9;
                }
                uVar7 = *local_140;
                uVar14 = local_140[2];
                bVar10 = (byte)local_140[4];
                local_144 = (undefined4)CONCAT71((int7)((ulonglong)pcVar8 >> 8),1);
                puVar18 = local_140;
                local_138 = lVar5;
                goto LAB_144ae702a;
              }
              iVar16 = *(int *)(lVar5 + 0x10 + lVar19 * 0x18);
            } while (iVar16 != -1);
            local_144 = 0;
          }
        }
LAB_144ae702a:
        local_128 = (longlong)(int)local_50;
        local_130 = local_58;
        uVar12 = local_144;
        if (0 < local_128) {
          puVar6 = local_d8;
          if (local_58 != (undefined1 *)0x0) {
            puVar6 = local_58;
          }
          uVar21 = puVar18[3];
          lVar5 = 0;
          do {
            lVar19 = *(longlong *)(puVar6 + lVar5 * 8);
            uVar4 = (ulonglong)*(int *)(lVar19 + 0x1b8);
            if (0 < (longlong)uVar4) {
              plVar23 = (longlong *)(*(longlong *)(lVar19 + 0x1b0) + 0x10);
              bVar24 = true;
              uVar13 = 1;
              do {
                lVar1 = *plVar23;
                if ((((lVar1 != 0) && (uVar7 == (uint)plVar23[-2])) &&
                    (uVar14 == (uint)((ulonglong)plVar23[-2] >> 0x20))) &&
                   ((*(uint *)((longlong)plVar23 + -4) == uVar21 &&
                    (*(byte *)(plVar23 + -1) == bVar10)))) {
                  uVar12 = 1;
                  local_138 = lVar1;
                  if (bVar24) goto LAB_144ae7177;
                  break;
                }
                bVar24 = uVar13 < uVar4;
                plVar23 = plVar23 + 5;
                bVar25 = uVar13 != uVar4;
                uVar13 = uVar13 + 1;
              } while (bVar25);
            }
            plVar23 = *(longlong **)(lVar19 + 0x2b0);
            if (plVar23 == (longlong *)0x0) {
              plVar23 = &DAT_14caec320;
            }
            if (bVar10 != 2) {
              if (bVar10 == 1) {
                uVar12 = local_144;
                if ((((int)uVar21 < -1) || ((int)plVar23[1] <= (int)(uVar21 + 1))) ||
                   (iVar16 = *(int *)(*plVar23 + 4 + (longlong)(int)uVar21 * 4), iVar16 == -1))
                break;
                uVar21 = iVar16 - 1;
              }
              else {
                uVar12 = local_144;
                if (((bVar10 != 0) || ((int)uVar21 < 0)) ||
                   (((int)plVar23[1] <= (int)uVar21 ||
                    (uVar21 = *(uint *)(*plVar23 + (ulonglong)uVar21 * 4), uVar21 == 0xffffffff))))
                break;
              }
            }
            lVar5 = lVar5 + 1;
            uVar12 = local_144;
          } while (lVar5 != local_128);
        }
LAB_144ae7177:
        lVar5 = local_138;
        if (local_58 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        cVar3 = (char)uVar12;
      }
      else {
        local_198 = 3;
        cVar3 = (**(code **)(lVar19 + 0x3c0))
                          (param_4,CONCAT71((int7)((ulonglong)lVar5 >> 8),3),puVar18,local_118);
        lVar5 = local_118[0];
      }
      puVar18 = local_140;
      if (cVar3 != '\0') {
        *param_6 = lVar5;
        goto LAB_144ae6c1b;
      }
    }
    else {
      cVar3 = (**(code **)(lVar19 + 0x3c8))(param_4,puVar18,param_6,0);
      puVar18 = local_140;
      if (cVar3 != '\0') goto LAB_144ae6c1b;
    }
  }
  lVar5 = FUN_140081bf9(param_5,puVar18[5]);
  *param_6 = lVar5;
LAB_144ae6c1b:
  if ((local_48 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144ae7632 FUN_144ae7632 body=1458 status=ok
// SIG undefined FUN_144ae7632(void)

ulonglong FUN_144ae7632(longlong param_1,ushort param_2,int *param_3,undefined8 param_4,uint param_5
                       ,undefined4 param_6)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  char cVar7;
  byte bVar8;
  uint uVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined1 auStack_c8 [44];
  uint local_9c;
  ushort local_98 [2];
  uint local_94;
  undefined4 local_90;
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int local_68;
  int iStack_64;
  uint uStack_60;
  int iStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_94 = param_5;
  local_90 = param_6;
  local_88 = *param_3;
  iStack_84 = param_3[1];
  iStack_80 = param_3[2];
  iStack_7c = param_3[3];
  local_78 = param_3[4];
  iStack_74 = param_3[5];
  iStack_70 = param_3[6];
  iStack_6c = param_3[7];
  local_68 = param_3[8];
  iStack_64 = param_3[9];
  uStack_60 = (uint)*(ulonglong *)(param_3 + 10);
  iStack_5c = param_3[0xb];
  uVar13 = *(ulonglong *)(param_3 + 10);
  local_58 = *(undefined8 *)(param_3 + 0xc);
  uVar15 = (ulonglong)param_2;
  lVar18 = uVar15 * 0x3c;
  local_98[0] = param_2;
  local_50 = param_4;
  if ((&DAT_14ca814b8)[uVar15 * 0xf] == 1) {
    uVar11 = 0;
    if ((5 < *(byte *)(param_1 + 0x48)) ||
       (uVar11 = 0, (0x29U >> (*(byte *)(param_1 + 0x48) & 0x1f) & 1) == 0)) goto LAB_144ae79df;
  }
  pcVar1 = *(code **)(param_1 + 0x68);
  if (pcVar1 == FUN_14482e810) {
    if (DAT_14c760e34 != 0) {
      uVar11 = 0;
      if ((((*(byte *)((longlong)&DAT_14ca814d8 + lVar18 + 3) & 0x10) == 0) ||
          (((&DAT_14ca814c8)[uVar15 * 0xf] & 0x20000000) == 0)) ||
         (uVar11 = 0, (*(uint *)(&DAT_14ca814cc + lVar18) & 8) == 0)) goto LAB_144ae79df;
      uVar17 = param_5 + 7;
      uVar20 = param_5 + 0xf;
      uVar16 = param_5 + 0x1f;
      uVar19 = param_5 + 0x3f;
      uVar21 = param_5 + 0x7f;
      uVar3 = param_5 + 0xff;
      uVar4 = param_5 + 0x1ff;
      uVar2 = param_5 + 0x3ff;
      if (-1 < (int)param_5) {
        uVar17 = param_5;
        uVar20 = param_5;
        uVar16 = param_5;
        uVar19 = param_5;
        uVar21 = param_5;
        uVar3 = param_5;
        uVar4 = param_5;
        uVar2 = param_5;
      }
      if ((*(uint *)(&DAT_14ca814cc + lVar18) & 2) != 0) {
        uVar14 = param_5 & 0x80000001;
        uVar9 = (int)uVar17 >> 3 & 0x80000001;
        uVar17 = param_5 + 3;
        if (-1 < (int)param_5) {
          uVar17 = param_5;
        }
        if (((uVar9 == 1) || (((int)uVar17 >> 2 & 0x80000001U) != 1)) || (uVar14 != 1)) {
          uVar20 = (int)uVar20 >> 4 & 0x80000001;
          uVar17 = (int)uVar16 >> 5 & 0x80000001;
          if ((uVar13 & 1) == 0) {
            uVar11 = 0;
            if ((uVar14 != 1 && uVar9 == 1) ||
               ((((int)param_5 / 2 & 0x80000001U) == 1) == ((uVar13 & 0x10) == 0)))
            goto LAB_144ae79df;
            if ((uVar13 & 0x1000004) == 0) {
              bVar6 = false;
            }
            else if ((uVar13 & 0x1000000000000) == 0) {
              bVar6 = 0 < iStack_6c;
            }
            else {
              bVar6 = true;
            }
            if (((uStack_60 >> 0x17 & 1) != 0) ||
               ((byte)((byte)(uVar13 >> 0x15) & 1 | bVar6 | uVar20 != 1) == 1)) {
              uVar11 = 0;
              if ((uVar20 != 1 && uVar17 != 1) || ((uVar13 & 0x1000004) == 0 && uVar17 == 1))
              goto LAB_144ae79df;
              goto LAB_144ae78f0;
            }
          }
          else if (uVar14 == 1 || uVar9 != 1) {
LAB_144ae78f0:
            uVar16 = (int)uVar19 >> 6 & 0x80000001;
            uVar19 = (int)uVar21 >> 7 & 0x80000001;
            if ((((uVar16 != 1 && uVar19 != 1) ||
                 ((uVar20 == 1 || uVar16 != 1) && (uVar13 & 0x200001) != 0)) &&
                ((uVar21 = (int)uVar3 >> 8 & 0x80000001, uVar21 != 1 ||
                 (local_9c = uVar2, cVar7 = FUN_1449373d8(), uVar2 = local_9c,
                 (uVar13 & 0x400000001) != 0 && cVar7 == '\x01')))) &&
               ((((int)uVar4 >> 9 & 0x80000001U) != 1 ||
                ((cVar7 = FUN_144937519(), cVar7 != '\0' &&
                 ((uVar13 & 0x800000001) != 0 && uVar21 != 1)))))) {
              if ((((int)uVar2 >> 10 & 0x80000001U) != 1) ||
                 ((((uVar11 = 0, uVar19 != 1 && (uVar16 != 1)) && (uVar17 != 1)) &&
                  ((uVar20 != 1 && ((uVar13 & 1) != 0)))))) {
                uVar11 = FUN_140701f96(local_98);
              }
              goto LAB_144ae79df;
            }
          }
        }
      }
    }
  }
  else if (pcVar1 == FUN_144ab386a) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14ca96ef8) && (FUN_144b3d300(&DAT_14ca96ef8), DAT_14ca96ef8 == -1)) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar12 = (longlong *)
                (**(code **)(*DAT_14c8407a8 + 200))
                          (DAT_14c8407a8,L"r.Nanite.AllowWorkGraphMaterials",1);
      if (plVar12 == (longlong *)0x0) {
        DAT_14ca96ef0 = 0;
      }
      else {
        DAT_14ca96ef0 = (**(code **)(*plVar12 + 0x68))(plVar12);
      }
      _Init_thread_footer(&DAT_14ca96ef8);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14ca96f00) &&
       (FUN_144b3d300(&DAT_14ca96f00), lVar5 = DAT_14ca96ef0, DAT_14ca96f00 == -1)) {
      if (DAT_14ca96ef0 == 0) {
        DAT_14ca96efc = false;
      }
      else {
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60) == 0x40000002) {
          uVar13 = 0;
        }
        else {
          bVar8 = FUN_144a61b4f();
          uVar13 = (ulonglong)(bVar8 ^ 1);
        }
        DAT_14ca96efc = *(int *)(lVar5 + uVar13 * 4) != 0;
      }
      _Init_thread_footer(&DAT_14ca96f00);
    }
    if ((DAT_14ca96efc == '\x01') && ((*(byte *)((longlong)&DAT_14ca814d8 + lVar18 + 3) & 8) != 0))
    {
      uVar11 = FUN_14725a6fa(local_98);
      goto LAB_144ae79df;
    }
  }
  else {
    if (pcVar1 != (code *)&LAB_144b10e74) {
      uVar11 = (*pcVar1)(local_98);
      goto LAB_144ae79df;
    }
    uVar17 = param_5 + 7;
    if (-1 < (int)param_5) {
      uVar17 = param_5;
    }
    if (2 < (int)(&DAT_14ca814b8)[uVar15 * 0xf] &&
        0x55555554 < ((int)uVar17 >> 3) * -0x55555555 + 0x2aaaaaaaU) {
      puVar10 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar10 = DAT_14ca96af8;
      }
      if (((uint)puVar10[param_2 >> 5] >> (param_2 & 0x1f) & 1) == 0) {
        uVar11 = (ulonglong)((byte)((uint)iStack_5c >> 0x1b) & 1 & local_88 == 3);
        goto LAB_144ae79df;
      }
    }
  }
  uVar11 = 0;
LAB_144ae79df:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144ae7be5 FUN_144ae7be5 body=123 status=ok
// SIG undefined FUN_144ae7be5(void)

bool FUN_144ae7be5(int param_1)

{
  bool bVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf1e74) {
    FUN_144b3d300(&DAT_14caf1e74);
    if (DAT_14caf1e74 == -1) {
      DAT_14caf1e71 = FUN_14473b0f0();
      _Init_thread_footer(&DAT_14caf1e74);
    }
  }
  if (DAT_14caf1e71 == '\x01') {
    bVar1 = param_1 == 2 || param_1 == 7;
  }
  else {
    bVar1 = param_1 == 2;
  }
  return bVar1;
}



// FUNCTION 144ae7c60 FUN_144ae7c60 body=513 status=ok
// SIG undefined FUN_144ae7c60(void)

void FUN_144ae7c60(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_c8 [32];
  uint local_a8;
  longlong *local_98;
  undefined8 local_90;
  longlong local_88;
  uint local_80;
  int iStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  longlong *local_70;
  longlong *local_68;
  undefined2 local_60;
  undefined8 local_58;
  longlong local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((longlong)*(int *)(param_1 + 0x13f8) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x13f0);
    lVar3 = (longlong)*(int *)(param_1 + 0x13f8) << 3;
    do {
      if (*(code **)(*param_2 + 0x88) == FUN_1447507a2) {
        local_a8 = (uint)*(byte *)(param_2 + 2);
        FUN_144710830(param_2 + 8,param_1,lVar2);
      }
      else {
        (**(code **)(*param_2 + 0x88))(param_2,lVar2,param_1,0);
      }
      lVar2 = lVar2 + 8;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  plVar1 = (longlong *)(param_1 + 0x1580);
  local_50 = param_1 + 0x1590;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  if (*(int *)(param_1 + 0x15a8) != 0) {
    FUN_1449c0562(&local_58);
  }
  local_80 = local_48;
  iStack_7c = iStack_44;
  local_78 = local_40;
  local_74 = local_3c;
  local_90 = local_58;
  local_88 = local_50;
  local_60 = 0;
  local_98 = plVar1;
  local_70 = plVar1;
  local_68 = plVar1;
  if (iStack_44 < *(int *)(local_50 + 0x18)) {
    do {
      lVar2 = (longlong)*(int *)(*local_98 + 0x10 + (longlong)iStack_7c * 0x20);
      if (lVar2 != 0) {
        lVar3 = *(longlong *)(*local_98 + 8 + (longlong)iStack_7c * 0x20);
        lVar2 = lVar2 << 3;
        do {
          (**(code **)(*param_2 + 0x88))(param_2,lVar3,param_1,0);
          lVar3 = lVar3 + 8;
          lVar2 = lVar2 + -8;
        } while (lVar2 != 0);
      }
      local_80 = local_80 & ~local_90._4_4_;
      FUN_1449c0562(&local_90);
    } while (iStack_7c < *(int *)(local_88 + 0x18));
    if (((local_60 & 1) != 0) && (local_60._1_1_ == '\x01')) {
      FUN_147bd306e(local_68,(int)local_68[1] - *(int *)((longlong)local_68 + 0x34));
    }
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144ae7e62 FUN_144ae7e62 body=1102 status=ok
// SIG undefined FUN_144ae7e62(void)

ulonglong FUN_144ae7e62(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  bool bVar10;
  bool bVar11;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(longlong *)(param_1 + 0x1b0) != 0) &&
     (param_3[0x300] == *(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x18))) {
    if (DAT_14cae8b20 == 0) {
      local_40 = &local_28;
      local_28 = (code *)&LAB_14355090c;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_147b8e16d;
      local_50 = (code *)&LAB_140810a38;
      local_58 = L"Engine";
      local_60 = 0x800000000;
      local_68 = 0x10000000;
      local_70 = 8;
      local_78 = 0x3f0;
      FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
    }
    lVar4 = DAT_14cae8b20;
    if (DAT_14c951858 == 0) {
      local_40 = &local_28;
      local_28 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_1468c5283;
      local_50 = FUN_142809da0;
      local_58 = L"Engine";
      local_60 = 0x400000000;
      local_68 = 0x10000000;
      local_70 = 8;
      local_78 = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar3 = *(longlong *)(param_2 + 0x20);
    if (lVar3 == 0) {
      lVar8 = 0;
    }
    else {
      iVar7 = *(int *)(lVar4 + 0x38);
      do {
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < iVar7) ||
           (lVar8 = lVar3,
           *(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar7 * 8) !=
           lVar4 + 0x30)) {
          lVar8 = 0;
        }
      } while ((lVar8 == 0) && (lVar3 = *(longlong *)(lVar3 + 0x20), lVar3 != 0));
    }
    if (*(code **)(*param_3 + 0x388) == FUN_144a541fe) {
LAB_144ae7f15:
      lVar3 = lVar8;
      lVar4 = lVar3;
      if (*(longlong *)(lVar3 + 0x20) != 0) goto code_r0x000144ae7f24;
      goto LAB_144ae7f32;
    }
    uVar2 = (**(code **)(*param_3 + 0x388))(param_3);
    goto LAB_144ae7fd2;
  }
  uVar9 = 0;
  goto LAB_144ae7fe3;
code_r0x000144ae7f24:
  lVar8 = *(longlong *)(lVar3 + 0x20);
  if ((*(uint *)(lVar3 + 8) >> 0x1c & 1) == 0) goto LAB_144ae7f15;
  lVar4 = FUN_142840154(lVar3);
LAB_144ae7f32:
  if (lVar4 == 0) {
    lVar8 = *(longlong *)(lVar3 + 0x20);
    goto LAB_144ae7f15;
  }
  local_28 = *(code **)(lVar4 + 0x18);
  if ((int)param_3[0x2e3] != *(int *)((longlong)param_3 + 0x1744)) {
    uVar2 = (uint)((ulonglong)local_28 >> 0x10);
    uVar6 = (uint)local_28 & 0xffff;
    plVar5 = param_3 + 0x2e9;
    if ((longlong *)param_3[0x2ea] != (longlong *)0x0) {
      plVar5 = (longlong *)param_3[0x2ea];
    }
    iVar7 = *(int *)((longlong)plVar5 +
                    (ulonglong)
                    ((int)param_3[0x2eb] - 1U &
                    (int)((ulonglong)local_28 >> 0x20) + ((uint)local_28 << 0x10 | uVar6) +
                    (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        puVar1 = (undefined8 *)(param_3[0x2e2] + (longlong)iVar7 * 0x14);
        if ((code *)*puVar1 == local_28) {
          if ((puVar1 != (undefined8 *)0x0) && (puVar1 + 1 != (undefined8 *)0x0)) {
            uVar9 = CONCAT71((int7)((ulonglong)lVar3 >> 8),*(undefined1 *)(puVar1 + 1));
            goto LAB_144ae7fe3;
          }
          break;
        }
        iVar7 = *(int *)((longlong)puVar1 + 0xc);
      } while (iVar7 != -1);
    }
  }
  uVar2 = FUN_140a2b886(param_3,&local_28);
LAB_144ae7fd2:
  uVar9 = (ulonglong)uVar2;
LAB_144ae7fe3:
  if (DAT_14cabf8e8 == 0) {
    local_40 = &local_28;
    local_28 = FUN_144ae7c60;
    local_30 = FUN_14081d0ea;
    local_38 = (code *)&LAB_14637144c;
    local_48 = &LAB_147861001;
    local_50 = (code *)&LAB_145acec30;
    local_58 = L"Engine";
    local_60 = 0;
    local_68 = 0x1000000c;
    local_70 = 8;
    local_78 = 0x1df0;
    FUN_14081cfa3(L"/Script/Engine",L"ChildConnection",&DAT_14cabf8e8,&DAT_147861000);
  }
  if ((*(int *)(param_3[2] + 0x38) < *(int *)(DAT_14cabf8e8 + 0x38)) ||
     (*(longlong *)(*(longlong *)(param_3[2] + 0x30) + (longlong)*(int *)(DAT_14cabf8e8 + 0x38) * 8)
      != DAT_14cabf8e8 + 0x30)) goto LAB_144ae800e;
  if (param_3 == (longlong *)0x0) {
LAB_144ae8271:
    param_3 = (longlong *)0x0;
  }
  else {
    lVar4 = FUN_14486dd68();
    if ((*(int *)(param_3[2] + 0x38) < *(int *)(lVar4 + 0x38)) ||
       (*(longlong *)(*(longlong *)(param_3[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
        lVar4 + 0x30)) goto LAB_144ae8271;
  }
  param_3 = (longlong *)param_3[0x3bd];
LAB_144ae800e:
  if (param_3[6] == param_2) {
    bVar10 = true;
  }
  else if ((longlong)(int)param_3[10] == 0) {
    bVar10 = false;
  }
  else {
    lVar4 = 0;
    do {
      bVar10 = *(longlong *)(*(longlong *)(param_3[9] + lVar4) + 0x30) == param_2;
      if (bVar10) break;
      bVar11 = (longlong)(int)param_3[10] * 8 + -8 != lVar4;
      lVar4 = lVar4 + 8;
    } while (bVar11);
  }
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)(uVar9 >> 8),(byte)uVar9 | bVar10) & 0xffffffff;
}



// FUNCTION 144ae82b2 FUN_144ae82b2 body=129 status=ok
// SIG undefined FUN_144ae82b2(void)

undefined8
FUN_144ae82b2(longlong *param_1,undefined4 *param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  *(undefined8 *)(param_4 + 4) = *(undefined8 *)(param_2 + 4);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *param_4 = uVar1;
  param_4[1] = uVar2;
  param_4[2] = uVar3;
  param_4[3] = uVar4;
  if (*(code **)(*param_1 + 0x7b8) == FUN_14480566e) {
    plVar6 = (longlong *)param_1[0xa3];
    if (plVar6 != (longlong *)0x0) goto LAB_144ae8302;
    plVar6 = param_1 + 0x82;
  }
  else {
    plVar6 = (longlong *)(**(code **)(*param_1 + 0x7b8))(uVar1,0,1,0xffffffff);
  }
  if (plVar6 == (longlong *)0x0) {
    return 0;
  }
LAB_144ae8302:
  uVar5 = FUN_14004245a(plVar6,param_2,param_3,param_4);
  return uVar5;
}



// FUNCTION 144ae8334 FUN_144ae8334 body=232 status=ok
// SIG undefined FUN_144ae8334(void)

undefined4 * FUN_144ae8334(longlong *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  undefined1 auStack_58 [32];
  undefined4 *local_38;
  longlong local_30;
  undefined1 *local_28;
  undefined4 **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(code **)(*param_1 + 0x480) == FUN_1448e80fa) {
    cVar5 = FUN_1448e80fa(param_1,0);
  }
  else {
    cVar5 = (**(code **)(*param_1 + 0x480))(param_1,0);
  }
  if (cVar5 != '\0') {
    local_30 = (**(code **)(*param_1 + 0x7b8))(param_1,0,1,0xffffffff);
    if (local_30 != 0) {
      *(undefined8 *)(param_2 + 4) = DAT_14c8464f0;
      uVar4 = DAT_14c8464e8._4_4_;
      uVar2 = (undefined4)DAT_14c8464e8;
      uVar1 = DAT_14c8464e0._4_4_;
      *param_2 = (undefined4)DAT_14c8464e0;
      param_2[1] = uVar1;
      param_2[2] = uVar2;
      param_2[3] = uVar4;
      local_20 = &local_38;
      local_28 = &LAB_143620340;
      local_38 = param_2;
      FUN_1448e6002(local_30 + 0x138);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
    }
  }
  *(longlong *)(param_2 + 4) = param_1[0x3e];
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x1e4);
  lVar3 = param_1[0x3d];
  uVar2 = *(undefined4 *)((longlong)param_1 + 0x1ec);
  *param_2 = (int)param_1[0x3c];
  param_2[1] = uVar1;
  param_2[2] = (int)lVar3;
  param_2[3] = uVar2;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144ae8422 FUN_144ae8422 body=758 status=ok
// SIG undefined FUN_144ae8422(void)

undefined8
FUN_144ae8422(longlong param_1,longlong param_2,double *param_3,double *param_4,double *param_5)

{
  double *pdVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_78 [32];
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(double *)(param_1 + 0x1f0) == *param_5) &&
     (!NAN(*(double *)(param_1 + 0x1f0)) && !NAN(*param_5))) {
    if ((*(double *)(param_1 + 0x1f8) == param_5[1]) &&
       (!NAN(*(double *)(param_1 + 0x1f8)) && !NAN(param_5[1]))) {
      if ((*(double *)(param_1 + 0x200) == param_5[2]) &&
         (!NAN(*(double *)(param_1 + 0x200)) && !NAN(param_5[2]))) {
        fVar6 = 0.0;
        if ((~*(byte *)(param_1 + 0x75) & 0x14) == 0 || (*(byte *)(param_1 + 0x75) & 0x20) != 0) {
          fVar6 = *(float *)(param_1 + 0xb8);
        }
        fVar7 = -*(float *)(param_1 + 0xbc);
        if (-*(float *)(param_1 + 0xbc) <= *(float *)(param_1 + 0xc0)) {
          fVar7 = *(float *)(param_1 + 0xc0);
        }
        fVar7 = fVar7 + fVar6;
        FUN_140083b55(&local_58,param_2,CONCAT44(0x80000000,fVar7));
        if ((*(double *)(param_1 + 0x1b8) == *param_4) &&
           (!NAN(*(double *)(param_1 + 0x1b8)) && !NAN(*param_4))) {
          if ((*(double *)(param_1 + 0x1c0) == param_4[1]) &&
             (!NAN(*(double *)(param_1 + 0x1c0)) && !NAN(param_4[1]))) {
            if ((*(double *)(param_1 + 0x1c8) == param_4[2]) &&
               (!NAN(*(double *)(param_1 + 0x1c8)) && !NAN(param_4[2]))) {
              if ((*(double *)(param_1 + 0x1d0) == param_4[3] + local_58) &&
                 (!NAN(*(double *)(param_1 + 0x1d0)) && !NAN(param_4[3] + local_58))) {
                if ((*(double *)(param_1 + 0x1d8) == param_4[4] + local_50) &&
                   (!NAN(*(double *)(param_1 + 0x1d8)) && !NAN(param_4[4] + local_50))) {
                  if ((*(double *)(param_1 + 0x1e0) == param_4[5] + local_48) &&
                     (!NAN(*(double *)(param_1 + 0x1e0)) && !NAN(param_4[5] + local_48))) {
                    dVar5 = SQRT(local_48 * local_48 + local_58 * local_58 + local_50 * local_50) +
                            param_4[6];
                    if ((*(double *)(param_1 + 0x1e8) == dVar5) &&
                       (!NAN(*(double *)(param_1 + 0x1e8)) && !NAN(dVar5))) {
                      if ((*(double *)(param_1 + 0x180) == *param_3) &&
                         (!NAN(*(double *)(param_1 + 0x180)) && !NAN(*param_3))) {
                        if ((*(double *)(param_1 + 0x188) == param_3[1]) &&
                           (!NAN(*(double *)(param_1 + 0x188)) && !NAN(param_3[1]))) {
                          if ((*(double *)(param_1 + 400) == param_3[2]) &&
                             (!NAN(*(double *)(param_1 + 400)) && !NAN(param_3[2]))) {
                            dVar5 = (double)fVar7;
                            if ((*(double *)(param_1 + 0x198) == param_3[3] + dVar5) &&
                               (!NAN(*(double *)(param_1 + 0x198)) && !NAN(param_3[3] + dVar5))) {
                              if ((*(double *)(param_1 + 0x1a0) == param_3[4] + dVar5) &&
                                 (!NAN(*(double *)(param_1 + 0x1a0)) && !NAN(param_3[4] + dVar5))) {
                                if ((*(double *)(param_1 + 0x1a8) == dVar5 + param_3[5]) &&
                                   (!NAN(*(double *)(param_1 + 0x1a8)) && !NAN(dVar5 + param_3[5])))
                                {
                                  dVar5 = (double)(fVar7 * 1.7320508) + param_3[6];
                                  if ((*(double *)(param_1 + 0x1b0) == dVar5) &&
                                     (!NAN(*(double *)(param_1 + 0x1b0)) && !NAN(dVar5))) {
                                    param_1 = param_1 + 0x100;
                                    lVar4 = 0;
                                    do {
                                      lVar2 = 0;
                                      do {
                                        dVar5 = *(double *)(param_1 + lVar2 * 8);
                                        pdVar1 = (double *)(param_2 + lVar2 * 8);
                                        if ((dVar5 != *pdVar1) || (NAN(dVar5) || NAN(*pdVar1)))
                                        goto LAB_144ae845a;
                                        lVar2 = lVar2 + 1;
                                      } while (lVar2 != 4);
                                      lVar4 = lVar4 + 1;
                                      param_2 = param_2 + 0x20;
                                      param_1 = param_1 + 0x20;
                                      uVar3 = 1;
                                    } while (lVar4 != 4);
                                    goto LAB_144ae845c;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_144ae845a:
  uVar3 = 0;
LAB_144ae845c:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 144ae871a FUN_144ae871a body=1181 status=ok
// SIG undefined FUN_144ae871a(void)

void FUN_144ae871a(longlong param_1,char param_2)

{
  float *pfVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  char cVar10;
  uint uVar11;
  longlong *plVar12;
  longlong lVar13;
  byte bVar14;
  byte bVar15;
  longlong lVar16;
  longlong lVar17;
  bool bVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_98 [38];
  char local_72;
  char local_71;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xbc) = DAT_14c84635c;
  *(undefined4 *)(param_1 + 0x2b4) = 0x7f7fffff;
  *(byte *)(param_1 + 0x2bd) = *(byte *)(param_1 + 0x2bd) & 0xf8;
  *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) & 0x9f;
  local_71 = param_2;
  local_72 = FUN_1447f4973();
  iVar3 = *(int *)(param_1 + 0x2a0);
  if ((longlong)iVar3 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x298);
    iVar4 = (&DAT_14ca814b8)
            [(ulonglong)
             *(ushort *)
              (&DAT_14ca85070 + (longlong)*(int *)(*(longlong *)(param_1 + 0x210) + 8) * 2) * 0xf];
    lVar16 = lVar5 + 0x50;
    lVar17 = 0;
    do {
      plVar12 = *(longlong **)(lVar5 + 8 + lVar17);
      pcVar6 = *(code **)(*plVar12 + 0x40);
      if (pcVar6 == (code *)&LAB_144b24fb4) {
        plVar12 = (longlong *)plVar12[0x1a];
      }
      else {
        plVar12 = (longlong *)(*pcVar6)();
      }
      if (local_71 == '\0') {
        FUN_14470a074(plVar12,&local_70,*(undefined4 *)(*(longlong *)(param_1 + 0x210) + 8));
        pfVar1 = (float *)(lVar5 + 0x28 + lVar17);
        *pfVar1 = local_70;
        pfVar1[1] = fStack_6c;
        pfVar1[2] = fStack_68;
        pfVar1[3] = fStack_64;
      }
      *(ulonglong *)(param_1 + 0x98) =
           *(ulonglong *)(param_1 + 0x98) | *(ulonglong *)(lVar5 + 0x28 + lVar17);
      bVar7 = *(byte *)(lVar5 + 0x2a + lVar17);
      bVar9 = *(byte *)(param_1 + 0x9a);
      if (*(byte *)(param_1 + 0x9a) < bVar7) {
        bVar9 = bVar7;
      }
      *(byte *)(param_1 + 0x9a) = bVar9;
      if ((*(byte *)(param_1 + 0x75) & 4) == 0) {
        bVar7 = 0;
      }
      else {
        bVar7 = (*(byte *)(lVar5 + 0x2d + lVar17) & 0x20) >> 5;
      }
      bVar9 = *(byte *)(lVar5 + 0x2d + lVar17);
      if ((*(byte *)(lVar5 + 0x2e + lVar17) & 1) == 0) {
        bVar14 = 0;
LAB_144ae8886:
        bVar15 = 1;
        bVar8 = 1;
        if (bVar7 == 0 && bVar14 == 0) {
          bVar8 = (bVar9 & 0x40) >> 6;
        }
        if (-1 < (char)bVar9) {
          bVar15 = (*(byte *)(lVar5 + 0x2c + lVar17) & 4) >> 2;
        }
      }
      else {
        if (-1 < (char)bVar9) {
          bVar14 = (*(byte *)(lVar5 + 0x2c + lVar17) & 4) >> 2;
          goto LAB_144ae8886;
        }
        bVar8 = 1;
        bVar15 = 1;
      }
      *(byte *)(param_1 + 0x2bd) =
           ((*(byte *)(param_1 + 0x2bd) & 2) >> 1 | bVar15) * '\x02' |
           *(byte *)(param_1 + 0x2bd) & 0xfd | bVar8;
      if ((*(byte *)(lVar16 + lVar17) & 4) == 0) {
        if ((bVar8 | bVar15) == 1) {
          lVar13 = *(longlong *)(lVar5 + 8 + lVar17);
        }
        else {
          FUN_14003fbd6();
          if (*(code **)(*DAT_14caea080 + 0x2f0) == (code *)&LAB_1447f4cc2) {
            lVar13 = DAT_14caea080[0x47];
          }
          else {
            lVar13 = (**(code **)(*DAT_14caea080 + 0x2f0))();
          }
        }
      }
      else {
        lVar13 = (**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0x4c0) + 0x2f0))();
      }
      *(longlong *)(lVar5 + lVar17) = lVar13;
      bVar7 = *(byte *)(lVar5 + 0x2d + lVar17);
      if ((bVar7 & 0x20) == 0) {
        bVar9 = 0;
      }
      else {
        cVar10 = (**(code **)(*plVar12 + 0x4f0))(plVar12);
        bVar9 = cVar10 << 4;
      }
      *(byte *)(lVar16 + lVar17) = *(byte *)(lVar16 + lVar17) & 0xef | bVar9;
      *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) | bVar9 * '\x02';
      if (*(code **)(*plVar12 + 0x508) == (code *)&LAB_14474d4d2) {
        bVar9 = (*(byte *)((longlong)plVar12 + 0x151) & 4) >> 2;
      }
      else {
        bVar9 = (**(code **)(*plVar12 + 0x508))();
      }
      bVar18 = false;
      if ((iVar4 != 1) && (bVar18 = false, bVar9 != 0)) {
        uVar11 = (**(code **)(*plVar12 + 0x408))(plVar12);
        bVar18 = uVar11 < 2;
      }
      bVar9 = *(byte *)(param_1 + 0x75);
      *(byte *)(param_1 + 0x75) = bVar9 & 0xbf | ((bVar9 & 0x40) >> 6 | bVar18) << 6;
      if (((*(byte *)(lVar16 + lVar17) & 0x10) == 0) && ((bVar9 & 4) == 0 || (bVar7 & 0x20) == 0)) {
        *(undefined4 *)(lVar5 + 0x14 + lVar17) = 0;
      }
      else {
        fVar19 = (float)(**(code **)(*plVar12 + 0x4e8))(plVar12);
        *(float *)(lVar5 + 0x14 + lVar17) = fVar19;
        fVar20 = *(float *)(param_1 + 0xb8);
        if (*(float *)(param_1 + 0xb8) <= fVar19) {
          fVar20 = fVar19;
        }
        *(float *)(param_1 + 0xb8) = fVar20;
      }
      if ((local_72 == '\0') || ((*(byte *)(lVar5 + 0x2d + lVar17) & 0x40) == 0)) {
        puVar2 = (undefined8 *)(lVar5 + 0x18 + lVar17);
        *puVar2 = 0x3f00000040800000;
        puVar2[1] = 0;
        if (bVar15 != 0) {
          *(undefined4 *)(param_1 + 0x2b4) = 0;
        }
      }
      else {
        (**(code **)(*plVar12 + 0x4d0))(plVar12,&local_70);
        *(ulonglong *)(lVar5 + 0x18 + lVar17) = CONCAT44(fStack_6c,local_70);
        cVar10 = (**(code **)(*plVar12 + 0x4d8))(plVar12);
        if (cVar10 == '\0') {
          *(undefined8 *)(lVar5 + 0x20 + lVar17) = 0;
          fVar20 = 0.0;
        }
        else {
          (**(code **)(*plVar12 + 0x4e0))(plVar12,&local_70);
          *(ulonglong *)(lVar5 + 0x20 + lVar17) = CONCAT44(fStack_6c,local_70);
          fVar20 = 0.0;
          if ((*(byte *)(lVar5 + 0x2c + lVar17) & 4) == 0) {
            fVar20 = *(float *)(param_1 + 0x2b4);
          }
          if (local_70 <= fVar20) {
            fVar20 = local_70;
          }
          if (fStack_6c <= fVar20) {
            fVar20 = fStack_6c;
          }
        }
        *(float *)(param_1 + 0x2b4) = fVar20;
        fVar20 = *(float *)(lVar5 + 0x18 + lVar17);
        fVar19 = *(float *)(lVar5 + 0x1c + lVar17);
        fVar21 = (0.0 - fVar19) * fVar20;
        fVar20 = (1.0 - fVar19) * fVar20;
        fVar19 = *(float *)(param_1 + 0xbc);
        if (fVar21 <= *(float *)(param_1 + 0xbc)) {
          fVar19 = fVar21;
        }
        fVar21 = *(float *)(param_1 + 0xc0);
        if (*(float *)(param_1 + 0xc0) <= fVar20) {
          fVar21 = fVar20;
        }
        *(float *)(param_1 + 0xbc) = fVar19;
        *(float *)(param_1 + 0xc0) = fVar21;
        *(byte *)(param_1 + 0x2bd) = *(byte *)(param_1 + 0x2bd) | 4;
      }
      lVar17 = lVar17 + 0x60;
    } while ((longlong)iVar3 * 0x60 != lVar17);
  }
  if ((*(byte *)(param_1 + 0x2bd) & 4) == 0) {
    *(undefined4 *)(param_1 + 0x2b4) = 0;
  }
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144ae8bb8 FUN_144ae8bb8 body=475 status=ok
// SIG undefined FUN_144ae8bb8(void)

void FUN_144ae8bb8(void *param_1,int param_2)

{
  uint uVar1;
  void *_Src;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)((longlong)param_1 + 0xd0);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (uVar1 < 5) {
    *(undefined4 *)((longlong)param_1 + 0xd4) = 4;
    _Src = *(void **)((longlong)param_1 + 0xc0);
joined_r0x000144ae8d1c:
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x30);
    param_2 = 0;
    uVar5 = 0;
  }
  else {
    lVar2 = (longlong)(int)uVar1;
    if (4 < *(uint *)((longlong)param_1 + 0xd4)) {
      lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
    }
    uVar5 = lVar2 * 0x30;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar3 & (uVar5 + uVar3) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,0);
      }
    }
    uVar5 = uVar5 / 0x30;
    uVar4 = (uint)uVar5;
    if ((int)uVar4 < (int)uVar1) {
      *(undefined4 *)((longlong)param_1 + 0xd4) = 0x7fffffff;
      uVar5 = 0x7fffffff;
      _Src = *(void **)((longlong)param_1 + 0xc0);
    }
    else {
      *(uint *)((longlong)param_1 + 0xd4) = uVar4;
      _Src = *(void **)((longlong)param_1 + 0xc0);
      if (uVar4 < 5) goto joined_r0x000144ae8d1c;
    }
    if (_Src == (void *)0x0) {
      FUN_1446efa72((longlong)param_1 + 0xc0,0,uVar5,0x30);
      memmove(*(void **)((longlong)param_1 + 0xc0),param_1,(longlong)param_2 * 0x30);
      return;
    }
  }
  FUN_1446efa72((longlong)param_1 + 0xc0,param_2,uVar5,0x30);
  return;
}



// FUNCTION 144ae8d93 FUN_144ae8d93 body=993 status=ok
// SIG undefined FUN_144ae8d93(void)

uint FUN_144ae8d93(int param_1)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  DWORD DVar5;
  DWORD DVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  
  iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110);
  if (param_1 == 1) {
    if ((iVar2 < DAT_14cb02e38) && (FUN_144b3d300(&DAT_14cb02e38), DAT_14cb02e38 == -1)) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar8 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Mobile.AntiAliasing",1);
      if (plVar8 == (longlong *)0x0) {
        DAT_14cb02e30 = 0;
      }
      else {
        DAT_14cb02e30 = (**(code **)(*plVar8 + 0x68))(plVar8);
      }
      _Init_thread_footer(&DAT_14cb02e38);
    }
    lVar3 = DAT_14cb02e30;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar11 = 0;
    }
    else {
      bVar4 = FUN_144a61b4f();
      uVar11 = (ulonglong)(bVar4 ^ 1);
    }
    uVar13 = *(uint *)(lVar3 + uVar11 * 4);
    uVar10 = 5;
    if ((int)uVar13 < 5) {
      uVar10 = uVar13;
    }
    if ((int)uVar10 < 1) {
      uVar10 = 0;
    }
    uVar12 = 0;
    if (DAT_14c760e14 != 0) {
      uVar12 = uVar10;
    }
    if (uVar13 == 3) {
      uVar12 = uVar10;
    }
  }
  else {
    if ((iVar2 < DAT_14cb02e48) && (FUN_144b3d300(&DAT_14cb02e48), DAT_14cb02e48 == -1)) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar8 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.AntiAliasingMethod",1);
      if (plVar8 == (longlong *)0x0) {
        DAT_14cb02e40 = 0;
      }
      else {
        DAT_14cb02e40 = (**(code **)(*plVar8 + 0x68))(plVar8);
      }
      _Init_thread_footer(&DAT_14cb02e48);
    }
    lVar3 = DAT_14cb02e40;
    iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar2 == 2)) {
      uVar11 = 0;
    }
    else if (iVar2 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar11 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar11 = 1;
    }
    uVar13 = *(uint *)(lVar3 + uVar11 * 4);
    uVar10 = 5;
    if ((int)uVar13 < 5) {
      uVar10 = uVar13;
    }
    uVar12 = 0;
    if (0 < (int)uVar10) {
      uVar12 = uVar10;
    }
  }
  uVar13 = 0;
  if (uVar12 != 5) {
    uVar13 = uVar12;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb02e58) && (FUN_144b3d300(&DAT_14cb02e58), DAT_14cb02e58 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar8 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.MSAACount",1);
    if (plVar8 == (longlong *)0x0) {
      DAT_14cb02e50 = 0;
    }
    else {
      DAT_14cb02e50 = (**(code **)(*plVar8 + 0x68))(plVar8);
    }
    _Init_thread_footer(&DAT_14cb02e58);
  }
  lVar3 = DAT_14cb02e50;
  if (2 < uVar13) {
    uVar1 = *(ushort *)(&DAT_14ca85070 + (longlong)param_1 * 2);
    uVar11 = (ulonglong)uVar1;
    if (uVar12 == 4) {
      uVar13 = (uint)(((&DAT_14ca814cf)[uVar11 * 0x3c] & 0x40) >> 6) * 2 + 2;
    }
    else {
      uVar13 = uVar12;
      if (uVar12 == 3) {
        uVar13 = 0;
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60) == 0x40000002) {
          uVar7 = 0;
        }
        else {
          bVar4 = FUN_144a61b4f();
          uVar7 = (ulonglong)(bVar4 ^ 1);
        }
        if (0 < *(int *)(lVar3 + uVar7 * 4)) {
          if (param_1 < 3) {
            if ((&DAT_14ca814b8)[uVar11 * 0xf] != 1) {
              return 3;
            }
            if (DAT_14ca964f0 != '\x01') {
              return 3;
            }
            if ((DAT_14c760e14 & 1) == 0) {
              return 3;
            }
          }
          else {
            puVar9 = &DAT_14ca96aa8;
            if (DAT_14ca96af8 != (undefined4 *)0x0) {
              puVar9 = DAT_14ca96af8;
            }
            if ((((uint)puVar9[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) != 0) &&
               (2 < (int)(&DAT_14ca814b8)[uVar11 * 0xf])) {
              return 3;
            }
          }
          uVar13 = 0;
        }
      }
    }
  }
  return uVar13;
}



// FUNCTION 144ae9174 FUN_144ae9174 body=596 status=ok
// SIG undefined FUN_144ae9174(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144ae9174(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  void *_Dst;
  undefined *_Dst_00;
  undefined *_Src;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb05a18) {
    FUN_144b3d300(&DAT_14cb05a18);
    if (DAT_14cb05a18 == -1) {
      InitializeSRWLock((PSRWLOCK)&DAT_14cb05a10);
      _Init_thread_footer(&DAT_14cb05a18);
    }
  }
  AcquireSRWLockShared((PSRWLOCK)&DAT_14cb05a10);
  if (param_2 == 3) {
    FUN_147d11d00();
    iVar5 = DAT_14cb05a38;
    *(int *)(param_1 + 0x38) = DAT_14cb05a38;
    uVar1 = iVar5 + 0x1f;
    if (0x1f < uVar1) {
      pvVar4 = (void *)(param_1 + 0x20);
      uVar6 = uVar1 >> 5;
      if (*(int *)(param_1 + 0x3c) + 0x1fU >> 5 < uVar6) {
        FUN_14499171c(pvVar4,0,uVar6,4);
        *(uint *)(param_1 + 0x3c) = uVar1 & 0xffffffe0;
      }
      _Dst = *(void **)(param_1 + 0x30);
      if (*(void **)(param_1 + 0x30) == (void *)0x0) {
        _Dst = pvVar4;
      }
      if (uVar1 < 0x120) {
        uVar6 = uVar1 >> 3 & 0x3c;
      }
      else {
        uVar6 = uVar6 << 2;
      }
      memset(_Dst,0,(ulonglong)uVar6);
      iVar5 = *(int *)(param_1 + 0x38);
      iVar2 = iVar5 + 0x1f;
      if (-1 < iVar5) {
        iVar2 = iVar5;
      }
      if (iVar5 % 0x20 != 0) {
        if (*(void **)(param_1 + 0x30) != (void *)0x0) {
          pvVar4 = *(void **)(param_1 + 0x30);
        }
        bVar3 = -(char)(iVar5 % 0x20);
        *(uint *)((longlong)pvVar4 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)pvVar4 + (longlong)(iVar2 >> 5) * 4) << (bVar3 & 0x1f)) >>
             (bVar3 & 0x1f);
      }
    }
  }
  else {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb05a40) {
      FUN_144b3d300(&DAT_14cb05a40);
      if (DAT_14cb05a40 == -1) {
        DAT_14cb05a30 = (undefined *)0x0;
        _DAT_14cb05a38 = 0x8000000000;
        atexit((_func_5014 *)&LAB_1436af56b);
        _Init_thread_footer(&DAT_14cb05a40);
      }
    }
    _Dst_00 = (undefined *)(param_1 + 0x20);
    if (_Dst_00 != &DAT_14cb05a20) {
      iVar5 = DAT_14cb05a38;
      uVar1 = DAT_14cb05a38 + 0x1fU & 0xffffffe0;
      *(undefined4 *)(param_1 + 0x38) = 0;
      if ((*(int *)(param_1 + 0x3c) < (int)uVar1) || (0x80 < *(int *)(param_1 + 0x3c))) {
        uVar6 = 0x80;
        if (0x80 < (int)uVar1) {
          uVar6 = uVar1;
        }
        *(uint *)(param_1 + 0x3c) = uVar6;
        FUN_1446efbd8(_Dst_00,0);
        iVar5 = DAT_14cb05a38;
      }
      *(int *)(param_1 + 0x38) = iVar5;
      if (iVar5 != 0) {
        _Src = &DAT_14cb05a20;
        if (DAT_14cb05a30 != (undefined *)0x0) {
          _Src = DAT_14cb05a30;
        }
        if (*(undefined **)(param_1 + 0x30) != (undefined *)0x0) {
          _Dst_00 = *(undefined **)(param_1 + 0x30);
        }
        memcpy(_Dst_00,_Src,(ulonglong)(iVar5 + 0x1fU >> 3 & 0xfffffffc));
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000144ae922f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14cb05a10);
  return;
}



// FUNCTION 144ae93c8 FUN_144ae93c8 body=431 status=ok
// SIG undefined FUN_144ae93c8(void)

ulonglong FUN_144ae93c8(longlong *param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  DWORD DVar5;
  DWORD DVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  
  lVar3 = DAT_14cb06b90;
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
    uVar9 = 0;
  }
  else if (iVar1 == 1) {
    DVar5 = FUN_140ad26c0();
    DVar6 = GetCurrentThreadId();
    uVar9 = (ulonglong)(DVar5 != DVar6);
  }
  else {
    uVar9 = 1;
  }
  uVar11 = CONCAT71((int7)((ulonglong)param_3 >> 8),1);
  if (*(int *)(lVar3 + uVar9 * 4) != 0) {
    plVar2 = (longlong *)param_1[0x1d];
    if ((plVar2 != (longlong *)0x0) && (0 < (int)plVar2[1])) {
      uVar9 = 0;
      do {
        lVar3 = *(longlong *)(*plVar2 + uVar9 * 8);
        if (*(int *)(lVar3 + 0x460) != 0) {
          if (*(code **)(*param_1 + 0x318) == (code *)&LAB_1436b1a7c) {
            if ((longlong)uVar9 < (longlong)(int)param_1[0x3e]) {
              lVar13 = uVar9 * 0xf0 + param_1[0x3d];
            }
            else {
              lVar13 = 0;
            }
          }
          else {
            lVar13 = (**(code **)(*param_1 + 0x318))(param_1,uVar9 & 0xffffffff);
            uVar11 = CONCAT71((int7)(uVar11 >> 8),1);
          }
          if (0 < *(int *)(lVar3 + 0x18)) {
            lVar10 = 0;
            lVar12 = 0;
            do {
              lVar4 = *(longlong *)(lVar3 + 0x10);
              if (lVar12 < *(int *)(lVar13 + 0x10)) {
                lVar7 = (**(code **)(*param_1 + 0x3b0))(param_1);
                uVar11 = CONCAT71((int7)(uVar11 >> 8),1);
                uVar8 = *(uint *)(*(longlong *)(lVar13 + 8) + lVar12 * 4);
                if (((int)uVar8 < 0) || (*(int *)(lVar7 + 8) <= (int)uVar8)) goto LAB_144ae94b8;
              }
              else {
LAB_144ae94b8:
                uVar8 = (uint)*(ushort *)(lVar4 + lVar10);
              }
              if (uVar8 == param_2) goto LAB_144ae951a;
              lVar12 = lVar12 + 1;
              lVar10 = lVar10 + 0xf8;
            } while (lVar12 < *(int *)(lVar3 + 0x18));
          }
        }
        uVar9 = uVar9 + 1;
      } while ((longlong)uVar9 < (longlong)(int)plVar2[1]);
    }
    uVar11 = 0;
  }
LAB_144ae951a:
  return uVar11 & 0xffffffff;
}



// FUNCTION 144ae9578 FUN_144ae9578 body=864 status=ok
// SIG undefined FUN_144ae9578(void)

void FUN_144ae9578(longlong *param_1,longlong param_2,double *param_3)

{
  double dVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  byte bVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  
  if (*(char *)(*(longlong *)(param_2 + 8) + 0xde) != '\0') {
    return;
  }
  if (*(char *)(*(longlong *)(param_2 + 8) + 0x1b2) != '\x01') {
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb07ad8) && (FUN_144b3d300(&DAT_14cb07ad8), DAT_14cb07ad8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar6 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SkeletalMeshLODRadiusScale",1);
    if (plVar6 == (longlong *)0x0) {
      DAT_14cb07ad0 = 0;
    }
    else {
      DAT_14cb07ad0 = (**(code **)(*plVar6 + 0x70))(plVar6);
    }
    _Init_thread_footer(&DAT_14cb07ad8);
  }
  fVar18 = *(float *)(DAT_14cb07ad0 + 4);
  if (1.0 <= fVar18) {
    fVar18 = 1.0;
  }
  if (fVar18 <= 0.25) {
    fVar18 = 0.25;
  }
  dVar1 = param_3[6];
  dVar15 = *(double *)(param_2 + 0x1048) - *param_3;
  dVar16 = *(double *)(param_2 + 0x1050) - param_3[1];
  dVar17 = *(double *)(param_2 + 0x1058) - param_3[2];
  fVar14 = (float)((dVar17 * dVar17 + dVar16 * dVar16 + dVar15 * dVar15) *
                  *(double *)(param_2 + 0x888));
  dVar16 = *(double *)(param_2 + 0x858) * 0.5;
  dVar15 = *(double *)(param_2 + 0x830) * 0.5;
  if (dVar15 <= dVar16) {
    dVar15 = dVar16;
  }
  fVar13 = 1.0;
  if (1.0 <= fVar14) {
    fVar13 = fVar14;
  }
  lVar7 = *(longlong *)(param_2 + 8);
  iVar3 = *(int *)(lVar7 + 0xac);
  if (*(code **)(*param_1 + 0x90) == (code *)&LAB_144b2aad8) {
    if (param_1[0x48] == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(param_1[0x48] + 0x50);
    }
  }
  else {
    iVar5 = (**(code **)(*param_1 + 0x90))(param_1);
    lVar7 = *(longlong *)(param_2 + 8);
  }
  fVar18 = fVar18 * (((float)dVar15 * (float)dVar1 * (float)dVar15 * (float)dVar1) / fVar13) *
                    fVar18;
  if ((*(byte *)(lVar7 + 0x54) & 4) == 0) {
LAB_144ae97e0:
    iVar11 = 0;
  }
  else {
    iVar11 = *(int *)(param_1[8] + 8);
    lVar10 = (ulonglong)(iVar11 - 1) * 0x18 + 0x14;
    do {
      if (iVar11 < 2) goto LAB_144ae97e0;
      iVar11 = iVar11 + -1;
      fVar14 = *(float *)(param_1[1] + -4 + lVar10);
      if (iVar11 <= iVar5) {
        fVar14 = fVar14 + *(float *)(param_1[1] + lVar10);
      }
      lVar10 = lVar10 + -0x18;
    } while (fVar14 * 0.5 * fVar14 * 0.5 <= fVar18);
  }
  iVar5 = *(int *)(lVar7 + 0x10);
  if (1 < iVar5) {
    LOCK();
    bVar12 = *(char *)((longlong)param_1 + 0x5c) == '\0';
    if (bVar12) {
      *(char *)((longlong)param_1 + 0x5c) = '\x01';
    }
    UNLOCK();
    if (!bVar12) {
      FUN_1447d2058();
    }
  }
  if ((int)param_1[0xb] == 0) {
    *(int *)(param_1 + 6) = iVar11;
  }
  if (iVar3 == (int)param_1[0xb]) {
    fVar14 = *(float *)((longlong)param_1 + 0x34);
    if (*(float *)((longlong)param_1 + 0x34) <= fVar18) {
      fVar14 = fVar18;
    }
    *(float *)((longlong)param_1 + 0x34) = fVar14;
    if ((int)param_1[6] < iVar11) {
      iVar11 = (int)param_1[6];
    }
    goto LAB_144ae9796;
  }
  if (((param_2 != 0) && (*(longlong *)(param_2 + 8) != 0)) &&
     (plVar6 = *(longlong **)(*(longlong *)(param_2 + 8) + 0x40), plVar6 != (longlong *)0x0)) {
    if ((int)param_1[5] == (int)param_1[6]) {
      bVar2 = *(byte *)(param_1[8] + 0x1b);
      bVar8 = (byte)*(undefined4 *)(param_1[8] + 0x1c);
      if (bVar8 < bVar2) {
        bVar8 = bVar2;
      }
      uVar4 = *(uint *)((longlong)param_1 + 0x144);
      if (uVar4 != bVar8) {
        uVar9 = (uint)bVar8;
        if ((int)(uint)bVar8 <= (int)uVar4) {
          uVar9 = uVar4;
        }
        if ((int)param_1[5] < (int)uVar9) goto LAB_144ae97f9;
      }
    }
    else {
LAB_144ae97f9:
      (**(code **)(*plVar6 + 0x500))(plVar6,*(undefined8 *)((longlong)param_1 + 0x13c));
    }
  }
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x34);
  *(int *)(param_1 + 5) = (int)param_1[6];
  *(int *)(param_1 + 0xb) = iVar3;
  *(float *)((longlong)param_1 + 0x34) = fVar18;
LAB_144ae9796:
  *(int *)(param_1 + 6) = iVar11;
  if (1 < iVar5) {
    LOCK();
    bVar12 = *(char *)((longlong)param_1 + 0x5c) == '\x01';
    if (bVar12) {
      *(char *)((longlong)param_1 + 0x5c) = '\0';
    }
    UNLOCK();
    if (!bVar12) {
      FUN_14008cdb0((longlong)param_1 + 0x5c);
    }
  }
  *(uint *)((longlong)param_1 + 0x144) = (uint)*(byte *)(param_1[8] + 0x1b);
  return;
}



// FUNCTION 144ae98d8 FUN_144ae98d8 body=116 status=ok
// SIG undefined FUN_144ae98d8(void)

longlong FUN_144ae98d8(longlong param_1)

{
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar1 != 2) {
      lVar4 = 8;
      if (iVar1 == 1) {
        DVar2 = FUN_140ad26c0();
        DVar3 = GetCurrentThreadId();
        if (DVar2 != DVar3) goto LAB_144ae990e;
      }
      else if (iVar1 != 0x10) goto LAB_144ae990e;
    }
  }
  else if (iVar1 != 0x10) {
    lVar4 = 8;
    goto LAB_144ae990e;
  }
  lVar4 = 0x2d8;
LAB_144ae990e:
  return param_1 + lVar4;
}



// FUNCTION 144ae994c FUN_144ae994c body=885 status=ok
// SIG undefined FUN_144ae994c(void)

longlong * FUN_144ae994c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  longlong local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_1 == param_2) goto LAB_144ae9acf;
  iVar6 = (int)param_2[9];
  plVar7 = param_1 + 8;
  if ((ulonglong)(longlong)iVar6 < 2) {
    if (*plVar7 != 0) {
      FUN_1446efa72(plVar7,0,0,4);
    }
    if (iVar6 != 0) goto LAB_144ae9b13;
  }
  else {
    FUN_1446efa72(plVar7,0,iVar6,4);
LAB_144ae9b13:
    plVar9 = param_1 + 7;
    if ((longlong *)*plVar7 != (longlong *)0x0) {
      plVar9 = (longlong *)*plVar7;
    }
    plVar7 = param_2 + 7;
    if ((longlong *)param_2[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[8];
    }
    memcpy(plVar9,plVar7,(longlong)iVar6 << 2);
  }
  *(int *)(param_1 + 9) = iVar6;
  uVar5 = *(uint *)(param_2 + 1);
  uVar10 = (ulonglong)uVar5;
  plVar7 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = plVar7;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_68);
  }
  local_88 = local_68;
  local_80 = local_60;
  local_78 = local_58;
  uVar3 = local_78;
  local_70 = local_50;
  local_6c = local_4c;
  local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
  local_90 = param_1;
  if (local_78._4_4_ < (int)local_60[3]) {
    iVar6 = local_78._4_4_;
    local_78 = uVar3;
    do {
      if (*(longlong *)(*local_90 + 0x10 + (longlong)iVar6 * 0x30) != 0) {
        FUN_1400020a8();
      }
      local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
      FUN_1449c0562(&local_88);
      iVar6 = local_78._4_4_;
      uVar3 = local_78;
    } while (local_78._4_4_ < (int)local_80[3]);
  }
  local_78 = uVar3;
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar10);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(uint *)((longlong)param_1 + 0xc) != uVar5) {
    FUN_14494313c(param_1,uVar5);
  }
  param_1[6] = 0xffffffff;
  uVar4 = uVar5 + 0x1f & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar4) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar8 = 0x80;
    if (0x80 < (int)uVar4) {
      uVar8 = uVar4;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar8;
    FUN_1446efbd8(plVar7,0);
  }
  lVar2 = param_1[1];
  *(uint *)(param_1 + 1) = (int)lVar2 + uVar5;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar2) < uVar5) {
    FUN_140044672(param_1);
  }
  *(int *)(param_1 + 6) = (int)param_2[6];
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar5 = (int)param_2[5] + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar5) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar4 = 0x80;
    if (0x80 < (int)uVar5) {
      uVar4 = uVar5;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    FUN_1446efbd8(plVar7,0);
  }
  iVar6 = (int)param_2[5];
  *(int *)(param_1 + 5) = iVar6;
  if (iVar6 != 0) {
    plVar9 = (longlong *)param_2[4];
    if ((longlong *)param_2[4] == (longlong *)0x0) {
      plVar9 = param_2 + 2;
    }
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[4];
    }
    memcpy(plVar7,plVar9,(ulonglong)(iVar6 + 0x1fU >> 3 & 0xfffffffc));
  }
  if (uVar10 != 0) {
    lVar2 = *param_1;
    lVar1 = *param_2;
    local_98 = lVar1 + 8;
    local_a0 = lVar2 + 8;
    lVar12 = 0;
    uVar11 = 0;
    do {
      plVar7 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar7 = param_2 + 2;
      }
      uVar5 = *(uint *)((longlong)plVar7 + (uVar11 >> 5 & 0x7ffffff) * 4);
      *(undefined4 *)(lVar2 + lVar12) = *(undefined4 *)(lVar1 + lVar12);
      if ((uVar5 >> ((uint)uVar11 & 0x1f) & 1) == 0) {
        *(undefined4 *)(lVar2 + 4 + lVar12) = *(undefined4 *)(lVar1 + 4 + lVar12);
      }
      else {
        FUN_147d2d380(local_a0 + lVar12,local_98 + lVar12);
        *(undefined8 *)(lVar2 + 0x28 + lVar12) = *(undefined8 *)(lVar1 + 0x28 + lVar12);
      }
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 0x30;
    } while (uVar10 != uVar11);
  }
LAB_144ae9acf:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 144ae9cc2 FUN_144ae9cc2 body=458 status=ok
// SIG undefined FUN_144ae9cc2(void)

undefined8 FUN_144ae9cc2(longlong *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  void *_Dst;
  undefined8 uVar11;
  byte bVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  uint uVar19;
  
  iVar9 = *(int *)((longlong)param_1 + 0x34);
  if ((longlong)iVar9 == 0) {
    uVar11 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 1);
    iVar13 = uVar3 - iVar9;
    iVar8 = iVar13;
    if ((int)param_1[6] == -1) {
      uVar11 = 0;
    }
    else {
      lVar6 = *param_1;
      uVar11 = 0;
      iVar7 = (int)param_1[6];
      uVar15 = uVar3;
      do {
        iVar4 = *(int *)(lVar6 + 4 + (longlong)iVar7 * 0xc);
        if (iVar7 < iVar13) {
          puVar1 = (undefined8 *)(lVar6 + (longlong)iVar7 * 0xc);
          plVar10 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar10 = param_1 + 2;
          }
          puVar18 = (undefined8 *)(lVar6 + 0xc + (longlong)(int)(uVar15 - 1) * 0xc);
          uVar14 = uVar15;
          do {
            puVar17 = puVar18;
            uVar15 = uVar14 - 1;
            uVar19 = uVar14 + 0x1e;
            if (-1 < (int)uVar15) {
              uVar19 = uVar15;
            }
            puVar18 = (undefined8 *)((longlong)puVar17 + -0xc);
            uVar14 = uVar15;
          } while ((*(uint *)((longlong)plVar10 + (longlong)((int)uVar19 >> 5) * 4) >>
                    (uVar15 & 0x1f) & 1) == 0);
          uVar11 = *puVar18;
          uVar5 = *(undefined4 *)((longlong)puVar17 + -4);
          *(undefined4 *)(puVar1 + 1) = uVar5;
          *puVar1 = uVar11;
          plVar10 = param_1 + 2;
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar10 = (longlong *)param_1[4];
          }
          iVar16 = iVar7 + 0x1f;
          if (-1 < iVar7) {
            iVar16 = iVar7;
          }
          puVar2 = (uint *)((longlong)plVar10 + (longlong)(iVar16 >> 5) * 4);
          *puVar2 = *puVar2 | 1 << ((byte)iVar7 & 0x1f);
          uVar11 = CONCAT71((uint7)(uint3)((uint)uVar5 >> 8),1);
        }
        iVar7 = iVar4;
      } while (iVar4 != -1);
      iVar7 = (int)param_1[1] - uVar3;
      if (iVar7 != 0) {
        _Dst = (void *)((longlong)iVar13 * 0xc + *param_1);
        memmove(_Dst,(void *)((longlong)_Dst + (longlong)iVar9 * 0xc),(longlong)iVar7 * 0xc);
        iVar8 = (int)param_1[1] - iVar9;
      }
    }
    *(int *)(param_1 + 1) = iVar8;
    iVar8 = (int)param_1[5] - uVar3;
    if (iVar8 != 0) {
      plVar10 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar10 = param_1 + 2;
      }
      FUN_14493566c(plVar10,iVar13,plVar10,uVar3,iVar8);
      iVar13 = (int)param_1[5] - iVar9;
    }
    iVar9 = iVar13 + 0x1f;
    if (-1 < iVar13) {
      iVar9 = iVar13;
    }
    *(int *)(param_1 + 5) = iVar13;
    if (iVar13 % 0x20 != 0) {
      plVar10 = param_1 + 2;
      if ((longlong *)param_1[4] != (longlong *)0x0) {
        plVar10 = (longlong *)param_1[4];
      }
      bVar12 = -(char)(iVar13 % 0x20);
      *(uint *)((longlong)plVar10 + (longlong)(iVar9 >> 5) * 4) =
           (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar9 >> 5) * 4) << (bVar12 & 0x1f)) >>
           (bVar12 & 0x1f);
    }
    param_1[6] = 0xffffffff;
    if (*(int *)((longlong)param_1 + 0xc) != (int)param_1[1]) {
      FUN_1447a08a2(param_1);
    }
  }
  return uVar11;
}



// FUNCTION 144ae9e8c FUN_144ae9e8c body=918 status=ok
// SIG undefined FUN_144ae9e8c(void)

bool FUN_144ae9e8c(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = *(longlong *)(param_1 + 0xb0);
  if (lVar3 == 0) {
    lVar3 = *(longlong *)(param_1 + 0xa8);
    if ((((lVar3 != 0) && ((*(uint *)(lVar3 + 8) & 0x10) == 0)) &&
        ((*(uint *)(lVar3 + 8) & 0x10) == 0)) &&
       ((lVar4 = *(longlong *)(lVar3 + 0x20), lVar4 != 0 && (-1 < (short)*(undefined4 *)(lVar4 + 8))
        ))) {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) >> 0x1c & 1) == 0) {
        if (DAT_14cae8b20 == 0) {
          local_40 = &local_28;
          local_28 = (code *)&LAB_14355090c;
          local_30 = FUN_14081d0ea;
          local_38 = FUN_14081d0ea;
          local_48 = &LAB_147b8e16d;
          local_50 = (code *)&LAB_140810a38;
          local_58 = L"Engine";
          local_60 = 0x800000000;
          local_68 = 0x10000000;
          local_70 = 8;
          local_78 = 0x3f0;
          FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
        }
        lVar4 = DAT_14cae8b20;
        if (DAT_14c951858 == 0) {
          local_40 = &local_28;
          local_28 = FUN_1449e2820;
          local_30 = FUN_14081d0ea;
          local_38 = FUN_14081d0ea;
          local_48 = &LAB_1468c5283;
          local_50 = FUN_142809da0;
          local_58 = L"Engine";
          local_60 = 0x400000000;
          local_68 = 0x10000000;
          local_70 = 8;
          local_78 = 0x50;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
        }
        lVar3 = *(longlong *)(lVar3 + 0x20);
        if (lVar3 != 0) {
          iVar2 = *(int *)(lVar4 + 0x38);
          do {
            if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < iVar2) ||
               (lVar5 = lVar3,
               *(longlong *)
                (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar2 * 8) !=
               lVar4 + 0x30)) {
              lVar5 = 0;
            }
          } while ((lVar5 == 0) && (lVar3 = *(longlong *)(lVar3 + 0x20), lVar3 != 0));
          if ((lVar5 != 0) && (lVar3 = *(longlong *)(lVar5 + 0xc0), lVar3 != 0)) goto LAB_144ae9eb4;
        }
      }
    }
    lVar3 = *(longlong *)(param_1 + 0x20);
    if (lVar3 != 0) {
      if (DAT_14cb10130 == 0) {
        local_40 = &local_28;
        local_28 = FUN_140754f84;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_14081d0ea;
        local_48 = &LAB_147da9a76;
        local_50 = FUN_1409f3105;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10000000;
        local_70 = 8;
        local_78 = 0x990;
        FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
      }
      if ((*(int *)(DAT_14cb10130 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) == DAT_14cb10130 + 0x30))
      goto LAB_144ae9eb4;
    }
LAB_144ae9ed6:
    if (*(char *)(param_1 + 0x2cf) != '\x02') {
      if (*(int *)(param_1 + 0x6b0) < 1) {
        bVar6 = false;
      }
      else {
        lVar3 = FUN_1403fc0e6(param_1,*(undefined8 *)(param_1 + 0x6a8),1);
        bVar6 = lVar3 != 0;
      }
      goto LAB_144ae9ef2;
    }
  }
  else {
LAB_144ae9eb4:
    if ((*(longlong *)(lVar3 + 0x30) == 0) ||
       ((lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x30) + 0x2b0), lVar3 == 0 ||
        ((*(byte *)(lVar3 + 0x39e) & 0x10) == 0)))) goto LAB_144ae9ed6;
  }
  bVar6 = true;
LAB_144ae9ef2:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar6;
}



// FUNCTION 144aea224 FUN_144aea224 body=403 status=ok
// SIG undefined FUN_144aea224(void)

void FUN_144aea224(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [96];
  longlong local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6b0));
  if ((((param_2 == 0) || ((*(uint *)(param_2 + 8) >> 0x1e & 1) != 0)) ||
      ((*(uint *)(param_2 + 8) & 0x18000) != 0)) && (0 < (longlong)*(int *)(param_1 + 0x400))) {
    lVar3 = 0;
    do {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x3f8) + lVar3 * 8);
      if ((plVar2 != (longlong *)0x0) && (*plVar2 == param_2)) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x3f8) + lVar3 * 8) = 0;
        lVar3 = *(longlong *)(param_1 + 0x408);
        if (lVar3 == 0) {
          local_38 = 0;
          local_30 = 0xc00000000;
          FUN_140097686(plVar2,local_98);
          FUN_144942036(param_1,local_98);
          *(undefined4 *)(plVar2 + 0x16) = 0;
          if (plVar2[0x15] != 0) {
            FUN_1400020a8();
          }
          FUN_140096ee6(plVar2 + 0xd);
          if (plVar2[0xb] != 0) {
            FUN_1400020a8();
          }
          if (plVar2[9] != 0) {
            FUN_1400020a8();
          }
          FUN_140096f1e(plVar2 + 2);
          FUN_1400020a8(plVar2);
          if (local_38 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          iVar1 = *(int *)(lVar3 + 0x20);
          *(uint *)(lVar3 + 0x20) = iVar1 + 1U;
          if (*(uint *)(lVar3 + 0x24) < iVar1 + 1U) {
            FUN_1456c51ec((longlong *)(lVar3 + 0x18),iVar1);
          }
          *(longlong **)(*(longlong *)(lVar3 + 0x18) + (longlong)iVar1 * 8) = plVar2;
        }
        break;
      }
      lVar3 = lVar3 + 1;
    } while (*(int *)(param_1 + 0x400) != lVar3);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6b0));
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144aea3b8 FUN_144aea3b8 body=1177 status=ok
// SIG undefined FUN_144aea3b8(void)

void FUN_144aea3b8(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined1 auStack_228 [32];
  undefined4 local_208;
  undefined4 local_200;
  undefined4 local_1f8;
  undefined8 local_1f0;
  wchar_t *local_1e8;
  code *local_1e0;
  undefined1 *local_1d8;
  code **local_1d0;
  code *local_1c8;
  code *local_1c0;
  longlong local_1b0;
  LPCRITICAL_SECTION local_1a8;
  longlong *local_1a0;
  longlong *local_198;
  code *local_190;
  longlong local_188 [24];
  longlong *local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [96];
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_228;
  local_1a8 = (LPCRITICAL_SECTION)(param_1 + 0x6b0);
  local_1b0 = param_1;
  EnterCriticalSection(local_1a8);
  iVar16 = 0;
  local_58 = 0;
  local_50 = 0xc00000000;
  local_c8 = (longlong *)0x0;
  local_c0 = 0x1800000000;
  FUN_14024dbd6(param_2,local_188,0);
  iVar2 = (int)local_c0;
  lVar10 = (longlong)(int)local_c0;
  if (lVar10 != 0) {
    plVar8 = local_c8;
    if (local_c8 == (longlong *)0x0) {
      plVar8 = local_188;
    }
    bVar9 = *plVar8 == 0;
    iVar13 = 0;
    do {
      lVar6 = (longlong)iVar13;
      lVar12 = lVar6;
      iVar14 = iVar13;
      iVar5 = iVar13 + 1;
      if (iVar13 + 1 < iVar2) {
        iVar5 = iVar2;
      }
      do {
        lVar12 = lVar12 + 1;
        iVar15 = iVar5;
        if (lVar10 <= lVar12) break;
        iVar15 = iVar14 + 1;
        iVar14 = iVar15;
      } while (bVar9 == (plVar8[lVar12] == 0));
      if (bVar9 == false) {
        if (iVar16 != iVar13) {
          memmove(plVar8 + iVar16,plVar8 + lVar6,(longlong)(iVar15 - iVar13) << 3);
        }
        iVar16 = iVar16 + (iVar15 - iVar13);
      }
      bVar9 = (bool)(bVar9 ^ 1);
      iVar13 = iVar15;
    } while (lVar12 < lVar10);
    local_c0 = CONCAT44(local_c0._4_4_,iVar16);
  }
  if (DAT_14cae8b20 == 0) {
    local_1d0 = &local_190;
    local_190 = (code *)&LAB_14355090c;
    local_1c0 = FUN_14081d0ea;
    local_1c8 = FUN_14081d0ea;
    local_1d8 = &LAB_147b8e16d;
    local_1e0 = (code *)&LAB_140810a38;
    local_1e8 = L"Engine";
    local_1f0 = 0x800000000;
    local_1f8 = 0x10000000;
    local_200 = 8;
    local_208 = 0x3f0;
    FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
  }
  lVar10 = DAT_14cae8b20;
  if (DAT_14c951858 == 0) {
    local_1d0 = &local_190;
    local_190 = FUN_1449e2820;
    local_1c0 = FUN_14081d0ea;
    local_1c8 = FUN_14081d0ea;
    local_1d8 = &LAB_1468c5283;
    local_1e0 = FUN_142809da0;
    local_1e8 = L"Engine";
    local_1f0 = 0x400000000;
    local_1f8 = 0x10000000;
    local_200 = 8;
    local_208 = 0x50;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  lVar12 = *(longlong *)(param_2 + 0x20);
  if (lVar12 == 0) {
    lVar6 = 0;
  }
  else {
    iVar2 = *(int *)(lVar10 + 0x38);
    do {
      if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x38) < iVar2) ||
         (lVar6 = lVar12,
         *(longlong *)(*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) + (longlong)iVar2 * 8) !=
         lVar10 + 0x30)) {
        lVar6 = 0;
      }
    } while ((lVar6 == 0) && (lVar12 = *(longlong *)(lVar12 + 0x20), lVar12 != 0));
  }
  if ((longlong)*(int *)(local_1b0 + 0x400) != 0) {
    plVar11 = *(longlong **)(local_1b0 + 0x3f8);
    plVar8 = plVar11 + *(int *)(local_1b0 + 0x400);
    do {
      plVar3 = (longlong *)*plVar11;
      if ((plVar3 != (longlong *)0x0) && ((lVar6 == 0 || (*plVar3 == lVar6)))) {
        plVar7 = local_c8;
        if (local_c8 == (longlong *)0x0) {
          plVar7 = local_188;
        }
        lVar10 = (longlong)(int)local_c0;
        if (lVar10 != 0) {
          local_198 = plVar3 + 2;
          local_1a0 = plVar3 + 9;
          lVar12 = 0;
          do {
            local_190 = *(code **)((longlong)plVar7 + lVar12);
            FUN_1402d4df2(local_198,local_190,local_b8);
            FUN_1402d4e38(local_1a0,&local_190,1);
            FUN_1402d4e38(plVar3 + 0xb,&local_190,1);
            lVar12 = lVar12 + 8;
          } while (lVar10 * 8 != lVar12);
        }
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != plVar8);
  }
  plVar8 = local_188;
  if (local_c8 != (longlong *)0x0) {
    plVar8 = local_c8;
  }
  lVar10 = (longlong)(int)local_c0;
  if (lVar10 != 0) {
    lVar12 = local_1b0 + 0x2b8;
    lVar6 = 0;
    do {
      lVar4 = *(longlong *)((longlong)plVar8 + lVar6);
      FUN_14494216a(lVar12,lVar4,local_b8);
      pbVar1 = (byte *)(lVar4 + 0x2d2);
      *pbVar1 = *pbVar1 & 0xef;
      lVar6 = lVar6 + 8;
    } while (lVar10 * 8 != lVar6);
  }
  FUN_144942036(local_1b0,local_b8);
  if (local_c8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  LeaveCriticalSection(local_1a8);
  if ((local_48 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144aea852 FUN_144aea852 body=235 status=ok
// SIG undefined FUN_144aea852(void)

void FUN_144aea852(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  
  if ((*(int *)(param_1 + 0x180) < 1) && (7 < (longlong)*(int *)(param_1 + 0x140))) {
    bVar6 = false;
    uVar5 = (longlong)*(int *)(param_1 + 0x140);
    do {
      uVar1 = uVar5 - 8;
      uVar9 = uVar1;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x138) + uVar9 * 8) != 0) {
          if (!bVar6) {
            return;
          }
          goto LAB_144aea8bb;
        }
        uVar9 = uVar9 + 1;
      } while (uVar5 != (uVar9 & 0xffffffff));
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -2;
      *(int *)(param_1 + 0x140) = (int)uVar1;
      bVar6 = true;
      bVar3 = 0xf < uVar5;
      uVar5 = uVar1;
    } while (bVar3);
LAB_144aea8bb:
    iVar4 = *(int *)(param_1 + 0x150);
    if (0 < iVar4) {
      uVar7 = 0;
      do {
        lVar2 = *(longlong *)(param_1 + 0x148);
        if (*(int *)(param_1 + 0x140) <= *(int *)(lVar2 + (longlong)(int)uVar7 * 4)) {
          iVar8 = ~uVar7 + iVar4;
          if (iVar8 != 0) {
            if (0 < iVar8) {
              iVar8 = 1;
            }
            memmove((void *)(lVar2 + (longlong)(int)uVar7 * 4),
                    (void *)(lVar2 + (longlong)(iVar4 - iVar8) * 4),(longlong)iVar8 << 2);
            iVar4 = *(int *)(param_1 + 0x150);
          }
          *(int *)(param_1 + 0x150) = iVar4 + -1;
          FUN_14479f406(param_1 + 0x148);
          uVar7 = uVar7 - 1;
          iVar4 = *(int *)(param_1 + 0x150);
        }
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < iVar4);
    }
  }
  return;
}



// FUNCTION 144aea93e FUN_144aea93e body=275 status=ok
// SIG undefined FUN_144aea93e(void)

longlong FUN_144aea93e(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(param_1 + -0x10);
  if (lVar1 != 0) {
    if (DAT_14cb10130 == 0) {
      local_30 = &local_18;
      local_18 = FUN_140754f84;
      local_20 = FUN_14081d0ea;
      local_28 = FUN_14081d0ea;
      local_38 = &LAB_147da9a76;
      local_40 = FUN_1409f3105;
      local_48 = L"Engine";
      local_50 = 0;
      local_58 = 0x10000000;
      local_60 = 8;
      local_68 = 0x990;
      FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
    }
    if ((*(int *)(DAT_14cb10130 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) == DAT_14cb10130 + 0x30)) goto LAB_144aea991;
  }
  lVar1 = 0;
LAB_144aea991:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144aeaa52 FUN_144aeaa52 body=520 status=ok
// SIG undefined FUN_144aeaa52(void)

ulonglong FUN_144aeaa52(longlong param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  double dVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != 0) {
    if (DAT_14cb11be0 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
      local_30 = &LAB_14639adaa;
      local_38 = &LAB_14594a852;
      local_48 = &LAB_147dccb45;
      local_50 = FUN_1437b166d;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000000;
      local_70 = 8;
      local_78 = 0x150;
      FUN_14081cfa3(L"/Script/Engine",L"WorldPartitionRuntimeCellDataSpatialHash",&DAT_14cb11be0,
                    &DAT_147dccb44);
    }
    if ((*(int *)(DAT_14cb11be0 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb11be0 + 0x38) * 8) == DAT_14cb11be0 + 0x30)) {
      uVar1 = (uint)*(byte *)(param_1 + 0x28) - (uint)*(byte *)(param_2 + 0x28);
      uVar2 = (ulonglong)uVar1;
      if (uVar1 == 0) {
        if (DAT_14c761ee8 == '\x01') {
          uVar1 = (uint)(*(float *)(param_2 + 0xf8) - *(float *)(param_1 + 0xf8));
        }
        else {
          uVar1 = *(int *)(param_2 + 0xd4) - *(int *)(param_1 + 0xd4);
        }
        uVar2 = (ulonglong)uVar1;
        if ((uVar1 != 0) ||
           ((DAT_14c761ee9 == 1 &&
            (uVar1 = *(int *)(param_1 + 0xd0) - *(int *)(param_2 + 0xd0), uVar2 = (ulonglong)uVar1,
            uVar1 != 0)))) goto LAB_144aeab4d;
        dVar3 = *(double *)(param_1 + 0x108) - *(double *)(param_2 + 0x108);
        if (ABS(dVar3) <= 1e-08) {
          dVar3 = *(double *)(param_1 + 0x100) - *(double *)(param_2 + 0x100);
        }
        uVar2 = 0xffffffff;
        if (0.0 <= dVar3) {
          uVar2 = (ulonglong)(0.0 < dVar3);
        }
      }
      if (((int)uVar2 == 0) && ((DAT_14c761ee9 & 1) == 0)) {
        uVar2 = (ulonglong)(uint)(*(int *)(param_1 + 0xd0) - *(int *)(param_2 + 0xd0));
      }
      goto LAB_144aeab4d;
    }
  }
  uVar2 = FUN_147dcc9f2(param_1,param_2);
LAB_144aeab4d:
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 144aeaca8 FUN_144aeaca8 body=48 status=ok
// SIG undefined FUN_144aeaca8(void)

void FUN_144aeaca8(longlong param_1,undefined8 param_2,longlong param_3)

{
  FUN_1400020a8(param_2);
  if (*(char *)(param_1 + 0x10) == '\x01') {
    LOCK();
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) - param_3;
    UNLOCK();
    LOCK();
    *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + -1;
    UNLOCK();
  }
  return;
}



// FUNCTION 144aeacd8 FUN_144aeacd8 body=321 status=ok
// SIG undefined FUN_144aeacd8(void)

void FUN_144aeacd8(longlong param_1,undefined8 *param_2,uint param_3,int param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x198));
  uVar1 = *(uint *)(param_1 + 0x58);
  lVar9 = (longlong)(int)uVar1;
  uVar3 = param_3;
  if ((int)uVar1 < (int)param_3) {
    uVar3 = uVar1;
  }
  if (0 < (int)uVar3) {
    uVar4 = (ulonglong)uVar3;
    puVar8 = param_2;
    uVar6 = uVar1;
    do {
      uVar6 = uVar6 - 1;
      puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x50) + (longlong)(int)uVar6 * 8);
      *puVar2 = 0x100010000;
      *(undefined1 *)(puVar2 + 1) = 0;
      *(undefined4 *)(puVar2 + 3) = 0;
      puVar2[8] = 0;
      *puVar8 = puVar2;
      puVar8 = (undefined8 *)((longlong)puVar8 + (longlong)param_4);
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - uVar3;
  }
  if ((int)uVar1 < (int)param_3) {
    do {
      puVar8 = *(undefined8 **)(param_1 + 0x160);
      if (puVar8 == (undefined8 *)0x0) {
        puVar8 = (undefined8 *)FUN_140595974(0xfc0,0);
        lVar7 = 0x37;
        puVar2 = puVar8;
        do {
          puVar5 = puVar2 + 9;
          *puVar2 = puVar5;
          lVar7 = lVar7 + -1;
          puVar2 = puVar5;
        } while (lVar7 != 0);
        *puVar5 = *(undefined8 *)(param_1 + 0x160);
        *(undefined8 **)(param_1 + 0x160) = puVar8;
        *(int *)(param_1 + 0x168) = *(int *)(param_1 + 0x168) + 0x38;
      }
      *(undefined8 *)(param_1 + 0x160) = *puVar8;
      *(int *)(param_1 + 0x16c) = *(int *)(param_1 + 0x16c) + 1;
      puVar8[2] = puVar8 + 4;
      *puVar8 = 0x100010000;
      *(undefined1 *)(puVar8 + 1) = 0;
      puVar8[3] = 0x8000000400000000;
      puVar8[8] = 0;
      *(undefined8 **)(lVar9 * param_4 + (longlong)param_2) = puVar8;
      lVar9 = lVar9 + 1;
    } while ((uint)lVar9 != param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x000144aead77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x198));
  return;
}



// FUNCTION 144aeae1a FUN_144aeae1a body=91 status=ok
// SIG undefined FUN_144aeae1a(void)

undefined8 FUN_144aeae1a(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  longlong local_20 [2];
  undefined1 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_2 + 0x20) == 0) {
    uVar1 = 0;
  }
  else {
    local_20[1] = 0;
    local_10 = 0;
    local_20[0] = param_2;
    uVar1 = FUN_14008db60(local_20,param_1 + 0x18);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144aeae76 FUN_144aeae76 body=856 status=ok
// SIG undefined FUN_144aeae76(void)

longlong FUN_144aeae76(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14cb1c498 == 0) {
    local_40 = &local_28;
    local_28 = FUN_1449e2820;
    local_30 = FUN_14081d0ea;
    local_38 = FUN_1427b09ee;
    local_48 = &LAB_147e36893;
    local_50 = FUN_146420564;
    local_58 = L"Engine";
    local_60 = 0;
    local_68 = 0x10004001;
    local_70 = 8;
    local_78 = 0x28;
    FUN_14081cfa3(L"/Script/GbxNav",L"GbxStanceUser");
  }
  if ((DAT_14cb1c498 == param_2) && (lVar3 = *(longlong *)(param_1 + 0x858), lVar3 != 0))
  goto LAB_144aeafe9;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xd20);
  lVar4 = (longlong)iVar2;
  if (0 < lVar4) {
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    lVar6 = *(longlong *)(lVar3 + 0xd18);
    if (lVar6 == 0) {
      lVar6 = lVar3 + 0xcf8;
    }
    lVar3 = 0;
    lVar5 = 0;
    do {
      if (*(longlong *)(lVar6 + lVar5) == param_1) goto LAB_144aeafe9;
      lVar5 = lVar5 + 8;
    } while (lVar4 * 8 - lVar5 != 0);
  }
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  *(uint *)(lVar3 + 0xd20) = iVar2 + 1U;
  if (*(uint *)(lVar3 + 0xd24) < iVar2 + 1U) {
    FUN_1468740ae(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xcf8,iVar2);
  }
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  lVar6 = *(longlong *)(lVar3 + 0xd18);
  if (lVar6 == 0) {
    lVar6 = lVar3 + 0xcf8;
  }
  *(longlong *)(lVar6 + lVar4 * 8) = param_1;
  lVar3 = 0;
  if ((param_2 != 0) && (lVar4 = *(longlong *)(param_1 + 0x10), lVar4 != 0)) {
    if ((*(byte *)(param_2 + 0xd5) & 0x40) != 0) {
      if (DAT_14c950d78 == 0) {
        local_40 = &local_28;
        local_28 = FUN_1449e2820;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_14081d0ea;
        local_48 = &LAB_1468b50ee;
        local_50 = FUN_1427f23a3;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10004001;
        local_70 = 8;
        local_78 = 0x28;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Interface",&DAT_14c950d78);
      }
      if (DAT_14c950d78 != param_2) {
        do {
          if (0 < (longlong)*(int *)(lVar4 + 0x1e0)) {
            lVar6 = 0;
            do {
              lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x1d8) + lVar6);
              if (((lVar5 != 0) && (*(int *)(param_2 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
                 (lVar3 = param_1,
                 *(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(param_2 + 0x38) * 8)
                 == param_2 + 0x30)) goto LAB_144aeafd0;
              lVar6 = lVar6 + 0x10;
            } while ((longlong)*(int *)(lVar4 + 0x1e0) * 0x10 != lVar6);
          }
          lVar4 = *(longlong *)(lVar4 + 0x40);
          lVar3 = 0;
        } while (lVar4 != 0);
        goto LAB_144aeafd0;
      }
    }
    lVar3 = 0;
  }
LAB_144aeafd0:
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xd20);
  *piVar1 = *piVar1 + -1;
LAB_144aeafe9:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 144aeb1d0 FUN_144aeb1d0 body=285 status=ok
// SIG undefined FUN_144aeb1d0(void)

undefined8 * FUN_144aeb1d0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *_Src;
  
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = *param_2;
  lVar11 = param_2[2];
  if (DAT_14c950c29 == '\x01') {
    if (lVar11 == 0) {
      lVar11 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar11 = param_2[2];
    }
  }
  param_1[2] = lVar11;
  if (param_2 != param_1) {
    if (*(char *)(param_2 + 0xe) == '\x01') {
      if ((*(char *)(param_1 + 0xe) != '\0') && (param_1[0xc] != 0)) {
        FUN_1400020a8();
      }
      param_1[7] = param_2[7];
      uVar2 = *(undefined4 *)(param_2 + 3);
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
      uVar4 = *(undefined4 *)(param_2 + 4);
      uVar5 = *(undefined4 *)((longlong)param_2 + 0x24);
      uVar6 = *(undefined4 *)((longlong)param_2 + 0x2c);
      uVar7 = *(undefined4 *)(param_2 + 6);
      uVar8 = *(undefined4 *)((longlong)param_2 + 0x34);
      *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
      *(undefined4 *)((longlong)param_1 + 0x2c) = uVar6;
      *(undefined4 *)(param_1 + 6) = uVar7;
      *(undefined4 *)((longlong)param_1 + 0x34) = uVar8;
      *(undefined4 *)(param_1 + 3) = uVar2;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
      *(undefined4 *)(param_1 + 4) = uVar4;
      *(undefined4 *)((longlong)param_1 + 0x24) = uVar5;
      param_1[0xc] = 0;
      iVar1 = *(int *)(param_2 + 0xd);
      puVar10 = (undefined8 *)param_2[0xc];
      *(int *)(param_1 + 0xd) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0x6c) = 2;
      }
      else {
        _Src = param_2 + 8;
        if (puVar10 != (undefined8 *)0x0) {
          _Src = puVar10;
        }
        FUN_144891736(param_1 + 8,iVar1,0);
        puVar10 = (undefined8 *)param_1[0xc];
        if ((undefined8 *)param_1[0xc] == (undefined8 *)0x0) {
          puVar10 = param_1 + 8;
        }
        memcpy(puVar10,_Src,(longlong)iVar1 << 4);
      }
      uVar9 = 1;
    }
    else {
      if (*(char *)(param_1 + 0xe) == '\0') {
        return param_1;
      }
      if (param_1[0xc] != 0) {
        FUN_1400020a8();
      }
      uVar9 = 0;
    }
    *(undefined1 *)(param_1 + 0xe) = uVar9;
  }
  return param_1;
}



// FUNCTION 144aeb2ee FUN_144aeb2ee body=617 status=ok
// SIG undefined FUN_144aeb2ee(void)

void FUN_144aeb2ee(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  ulonglong uVar10;
  int iVar11;
  undefined1 auStack_78 [32];
  longlong *local_58;
  int local_50;
  uint local_4c;
  uint *local_48;
  uint local_40;
  int local_3c;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar4 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar4,0,0);
  }
  plVar1 = param_1 + 7;
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 == 1) {
    if (*plVar4 != 0) {
      FUN_1446efa72(plVar4,0,0);
    }
LAB_144aeb333:
    uVar3 = 0;
    do {
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = plVar1;
      }
      *(undefined4 *)((longlong)plVar4 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
           0xffffffff;
      uVar3 = uVar3 + 1;
    } while (uVar7 != uVar3);
  }
  else {
    if (uVar7 == 0) goto LAB_144aeb425;
    FUN_1446efa72(plVar4,0);
    if (0 < (int)uVar7) goto LAB_144aeb333;
  }
  local_48 = (uint *)(param_1 + 2);
  iVar8 = (int)param_1[5];
  local_4c = 1;
  if (iVar8 == 0) {
    local_38 = 0;
    local_50 = 0;
    local_3c = 0;
  }
  else {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = local_48;
    }
    uVar7 = *puVar9;
    if (uVar7 == 0) {
      iVar11 = iVar8 + 0x1e;
      if (-1 < iVar8 + -1) {
        iVar11 = iVar8 + -1;
      }
      uVar6 = 0;
      uVar10 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar10 = uVar6;
      }
      local_50 = (int)uVar10 + 1;
      local_38 = (int)uVar10 * 0x20 + 0x20;
      iVar11 = 0;
      do {
        local_3c = iVar8;
        if (uVar10 == uVar6) goto LAB_144aeb3f7;
        iVar11 = iVar11 + 0x20;
        uVar7 = puVar9[uVar6 + 1];
        uVar6 = uVar6 + 1;
      } while (uVar7 == 0);
      local_50 = (int)uVar6;
      local_38 = iVar11;
    }
    else {
      local_38 = 0;
      local_50 = 0;
    }
    local_4c = -uVar7 & uVar7;
    uVar10 = (ulonglong)local_4c * 2 + 1;
    lVar2 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    local_3c = (local_38 - ((uint)lVar2 ^ 0x3f)) + 0x3e;
    if (iVar8 <= local_3c) {
      local_3c = iVar8;
    }
  }
LAB_144aeb3f7:
  local_40 = 0xffffffff;
  local_58 = param_1;
  if (local_3c < iVar8) {
    do {
      lVar2 = *local_58;
      lVar5 = (longlong)local_3c * 0x10;
      uVar10 = (longlong)
               (int)((uint)((ulonglong)*(undefined8 *)(lVar2 + lVar5) >> 0x20) ^
                    (uint)*(undefined8 *)(lVar2 + lVar5)) & (longlong)(int)param_1[9] - 1U;
      iVar8 = (int)uVar10;
      *(int *)(lVar2 + 0xc + lVar5) = iVar8;
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = plVar1;
      }
      *(undefined4 *)(lVar2 + 8 + lVar5) =
           *(undefined4 *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = plVar1;
      }
      *(int *)((longlong)plVar4 + ((longlong)iVar8 & (longlong)(int)param_1[9] - 1U) * 4) = local_3c
      ;
      local_40 = local_40 & ~local_4c;
      FUN_1449c0562(&local_50);
    } while (local_3c < (int)local_48[6]);
  }
LAB_144aeb425:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144aeb558 FUN_144aeb558 body=1084 status=ok
// SIG undefined FUN_144aeb558(void)

double * FUN_144aeb558(longlong *param_1,double *param_2,longlong param_3,longlong param_4)

{
  double *pdVar1;
  int iVar2;
  double dVar3;
  undefined1 uVar4;
  int iVar5;
  longlong lVar6;
  char cVar7;
  longlong *plVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  
  if ((((*(longlong *)(param_3 + 0x70) == 0) ||
       (fVar15 = *(float *)(*(longlong *)(param_3 + 0x70) + 0xfc), fVar15 <= 0.1)) ||
      ((int)param_1[0x227] == 0)) ||
     ((*(float *)(param_4 + 0x50) <= 10.0 && *(float *)(param_4 + 0x50) != 10.0 &&
      ((*(longlong *)(param_4 + 0x70) == 0 || (cVar7 = FUN_14494aec6(), cVar7 == '\0')))))) {
LAB_144aeb598:
    uVar4 = 0;
  }
  else {
    fVar16 = *(float *)(param_3 + 400);
    fVar15 = fVar15 * *(float *)(param_3 + 0x5c);
    iVar5 = (**(code **)(*param_1 + 0x18))(param_1);
    plVar8 = param_1 + 0xfe;
    if ((longlong *)param_1[0x226] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[0x226];
    }
    iVar2 = (int)param_1[0x227];
    if ((longlong)iVar2 != 0) {
      fVar16 = fVar16 + 10.0;
      if (fVar15 <= fVar16) {
        fVar15 = fVar16;
      }
      lVar6 = 0;
      fVar16 = 0.0;
      do {
        cVar7 = *(char *)((longlong)plVar8 + lVar6 + 0x120);
        if (iVar5 == 1) {
          if (cVar7 == '\x01') {
            dVar10 = *(double *)((longlong)plVar8 + lVar6) -
                     *(double *)((longlong)plVar8 + lVar6 + 0x18);
            dVar13 = *(double *)((longlong)plVar8 + lVar6 + 8) -
                     *(double *)((longlong)plVar8 + lVar6 + 0x20);
            dVar10 = dVar13 * dVar13 + dVar10 * dVar10;
LAB_144aeb669:
            fVar9 = (float)SQRT(dVar10);
            cVar7 = '\x01';
          }
          else if (cVar7 == '\x02') {
            dVar10 = *(double *)((longlong)plVar8 + lVar6 + 0xa0) -
                     *(double *)((longlong)plVar8 + lVar6 + 0x28);
            dVar13 = *(double *)((longlong)plVar8 + lVar6 + 0xa8) -
                     *(double *)((longlong)plVar8 + lVar6 + 0x30);
            fVar9 = (float)SQRT(dVar13 * dVar13 + dVar10 * dVar10);
            cVar7 = '\x02';
          }
          else {
            fVar9 = (ABS(*(float *)((longlong)plVar8 + lVar6 + 0x20)) / 360.0) *
                    *(float *)((longlong)plVar8 + lVar6 + 0x18) * 6.2831855;
          }
          fVar12 = fVar15 - fVar16;
          if ((fVar12 <= fVar9) && (0.0 < fVar9)) {
            if (cVar7 == '\x01') {
              fVar12 = fVar12 / fVar9;
              if (1.0 <= fVar12) {
                fVar12 = 1.0;
              }
              if (fVar12 <= 0.0) {
                fVar12 = 0.0;
              }
              dVar10 = *(double *)((longlong)plVar8 + lVar6 + 0x28);
              dVar13 = *(double *)((longlong)plVar8 + lVar6 + 0x10);
              dVar11 = *(double *)((longlong)plVar8 + lVar6 + 0x20);
              dVar3 = *(double *)((longlong)plVar8 + lVar6 + 8);
              dVar14 = (double)fVar12;
              *param_2 = (*(double *)((longlong)plVar8 + lVar6 + 0x18) -
                         *(double *)((longlong)plVar8 + lVar6)) * dVar14 +
                         *(double *)((longlong)plVar8 + lVar6);
              param_2[1] = (dVar11 - dVar3) * dVar14 + dVar3;
              param_2[2] = (dVar10 - dVar13) * dVar14 + dVar13;
            }
            else if (cVar7 == '\x02') {
              param_2[2] = *(double *)((longlong)plVar8 + lVar6 + 0x38);
              pdVar1 = (double *)((longlong)plVar8 + lVar6 + 0x28);
              dVar10 = pdVar1[1];
              *param_2 = *pdVar1;
              param_2[1] = dVar10;
            }
            else {
              if (cVar7 != '\0') goto LAB_144aeb598;
              fVar12 = fVar12 / fVar9;
              if (1.0 <= fVar12) {
                fVar12 = 1.0;
              }
              if (fVar12 <= 0.0) {
                fVar12 = 0.0;
              }
              dVar10 = (double)(fVar12 * *(float *)((longlong)plVar8 + lVar6 + 0x20) +
                               *(float *)((longlong)plVar8 + lVar6 + 0x1c)) * 0.017453292519943295;
              dVar11 = sin(dVar10);
              dVar3 = cos(dVar10);
              dVar14 = (double)*(float *)((longlong)plVar8 + lVar6 + 0x18);
              dVar10 = *(double *)((longlong)plVar8 + lVar6 + 0x10);
              dVar13 = *(double *)((longlong)plVar8 + lVar6 + 8);
              *param_2 = (dVar3 - dVar11 * 0.0) * dVar14 + *(double *)((longlong)plVar8 + lVar6);
              param_2[1] = (dVar3 * 0.0 + dVar11) * dVar14 + dVar13;
              param_2[2] = dVar14 * 0.0 + dVar10;
            }
            goto LAB_144aeb75f;
          }
        }
        else {
          if (cVar7 == '\x01') {
            dVar10 = *(double *)((longlong)plVar8 + lVar6) -
                     *(double *)((longlong)plVar8 + lVar6 + 0x18);
            dVar11 = *(double *)((longlong)plVar8 + lVar6 + 8) -
                     *(double *)((longlong)plVar8 + lVar6 + 0x20);
            dVar13 = *(double *)((longlong)plVar8 + lVar6 + 0x10) -
                     *(double *)((longlong)plVar8 + lVar6 + 0x28);
            dVar10 = dVar13 * dVar13 + dVar11 * dVar11 + dVar10 * dVar10;
            goto LAB_144aeb669;
          }
          fVar9 = 0.0;
        }
        fVar16 = fVar16 + fVar9;
        lVar6 = lVar6 + 0x128;
      } while ((longlong)iVar2 * 0x128 - lVar6 != 0);
    }
    pdVar1 = (double *)(plVar8 + (longlong)(iVar2 + -1) * 0x25);
    if ((char)plVar8[(longlong)(iVar2 + -1) * 0x25 + 0x24] == '\x01') {
      dVar10 = pdVar1[3];
      dVar13 = pdVar1[4];
      dVar11 = pdVar1[5];
    }
    else if ((char)plVar8[(longlong)(iVar2 + -1) * 0x25 + 0x24] == '\x02') {
      dVar10 = pdVar1[0x14];
      dVar13 = pdVar1[0x15];
      dVar11 = pdVar1[0x16];
    }
    else {
      dVar13 = (double)(*(float *)(pdVar1 + 4) + *(float *)((longlong)pdVar1 + 0x1c)) *
               0.017453292519943295;
      dVar10 = sin(dVar13);
      dVar3 = cos(dVar13);
      dVar14 = (double)*(float *)(pdVar1 + 3);
      dVar11 = dVar14 * 0.0 + pdVar1[2];
      dVar13 = (dVar3 * 0.0 + dVar10) * dVar14 + pdVar1[1];
      dVar10 = (dVar3 - dVar10 * 0.0) * dVar14 + *pdVar1;
    }
    *param_2 = dVar10;
    param_2[1] = dVar13;
    param_2[2] = dVar11;
LAB_144aeb75f:
    uVar4 = 1;
  }
  *(undefined1 *)(param_2 + 3) = uVar4;
  return param_2;
}



// FUNCTION 144aeb994 FUN_144aeb994 body=511 status=ok
// SIG undefined FUN_144aeb994(void)

void FUN_144aeb994(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14cb1d318 == 0) {
    local_40 = &local_20;
    local_20 = FUN_1449e2820;
    local_30 = FUN_14081d0ea;
    local_38 = &LAB_141737a50;
    local_48 = &LAB_147e6cfb7;
    local_50 = &LAB_145dec2d4;
    local_58 = L"Engine";
    local_60 = 0;
    local_68 = 0x10000000;
    local_70 = 8;
    local_78 = 0x120;
    FUN_14081cfa3(L"/Script/NavigationSystem",L"NavigationObjectRepository",&DAT_14cb1d318,
                  &DAT_147e6cfb6);
  }
  lVar1 = DAT_14cb1d318;
  if ((DAT_14cb1d318 == 0) || (DAT_14c950c29 == '\0')) {
    if (DAT_14cb1d318 != 0) goto LAB_144aeb9e3;
  }
  else {
    FUN_1456cec3c(DAT_14cb1d318);
    if (DAT_14cb1d318 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_141737a50;
      local_48 = &LAB_147e6cfb7;
      local_50 = &LAB_145dec2d4;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000000;
      local_70 = 8;
      local_78 = 0x120;
      FUN_14081cfa3(L"/Script/NavigationSystem",L"NavigationObjectRepository",&DAT_14cb1d318,
                    &DAT_147e6cfb6);
      if (DAT_14cb1d318 == 0) goto LAB_144aebb8d;
    }
LAB_144aeb9e3:
    if (*(int *)(DAT_14cb1d318 + 0x38) <= *(int *)(lVar1 + 0x38)) {
      lVar2 = 0;
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cb1d318 + 0x38) * 8)
          == DAT_14cb1d318 + 0x30) {
        lVar2 = lVar1;
      }
      goto LAB_144aeba02;
    }
  }
LAB_144aebb8d:
  lVar2 = 0;
LAB_144aeba02:
  FUN_1448a6f9c(param_1 + 0x870,lVar2);
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144aebb94 FUN_144aebb94 body=510 status=ok
// SIG undefined FUN_144aebb94(void)

undefined8 * FUN_144aebb94(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar2 = *(int *)(param_2 + 9);
  plVar1 = param_1 + 8;
  if ((ulonglong)(longlong)iVar2 < 2) {
    if (*plVar1 != 0) {
      FUN_1446efa72(plVar1,0,0,4);
    }
    if (iVar2 == 0) goto LAB_144aebbd0;
  }
  else {
    FUN_1446efa72(plVar1,0,iVar2,4);
  }
  puVar5 = param_1 + 7;
  if ((undefined8 *)*plVar1 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)*plVar1;
  }
  puVar7 = param_2 + 7;
  if ((undefined8 *)param_2[8] != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)param_2[8];
  }
  memcpy(puVar5,puVar7,(longlong)iVar2 << 2);
LAB_144aebbd0:
  *(int *)(param_1 + 9) = iVar2;
  uVar4 = *(uint *)(param_2 + 1);
  uVar8 = (ulonglong)uVar4;
  if (-1 < (int)uVar4) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(uint *)((longlong)param_1 + 0xc) != uVar4) {
      FUN_1401ad22e(param_1,uVar4);
    }
    param_1[6] = 0xffffffff;
    uVar3 = uVar4 + 0x1f & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar6 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar6 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar6;
      FUN_1446efbd8(param_1 + 2,0);
    }
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar4;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar4) {
      FUN_140171ad2(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar4 = *(int *)(param_2 + 5) + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar4) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar3 = 0x80;
      if (0x80 < (int)uVar4) {
        uVar3 = uVar4;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar3;
      FUN_1446efbd8(param_1 + 2,0);
    }
    iVar2 = *(int *)(param_2 + 5);
    *(int *)(param_1 + 5) = iVar2;
    if (iVar2 != 0) {
      puVar5 = param_2 + 2;
      if ((undefined8 *)param_2[4] != (undefined8 *)0x0) {
        puVar5 = (undefined8 *)param_2[4];
      }
      puVar7 = param_1 + 2;
      if ((undefined8 *)param_1[4] != (undefined8 *)0x0) {
        puVar7 = (undefined8 *)param_1[4];
      }
      memcpy(puVar7,puVar5,(ulonglong)(iVar2 + 0x1fU >> 3 & 0xfffffffc));
    }
    if (uVar8 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,uVar8 * 0x14);
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar8);
}



// FUNCTION 144aebd92 FUN_144aebd92 body=225 status=ok
// SIG undefined FUN_144aebd92(void)

char FUN_144aebd92(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  
  bVar1 = *(byte *)(param_1 + 0xb5);
  if (bVar1 == 2) {
    lVar5 = 0x72;
  }
  else {
    if (bVar1 != 1) {
      if (1 < bVar1 - 3) {
        return '\x01';
      }
      goto LAB_144aebde2;
    }
    lVar5 = 0x71;
  }
  cVar4 = *(char *)(*(longlong *)(param_1 + 0x48) + lVar5);
  if (cVar4 != '\0') {
    return cVar4;
  }
LAB_144aebde2:
  lVar5 = param_1 + 0xd8;
  if (*(longlong *)(param_1 + 0x118) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x118);
  }
  iVar2 = *(int *)(param_1 + 0x120);
  if ((longlong)iVar2 != 0) {
    lVar6 = 0;
    do {
      plVar3 = *(longlong **)(lVar5 + lVar6);
      cVar4 = (**(code **)(*plVar3 + 0x28))(plVar3);
      if (cVar4 != '\0') {
        cVar4 = *(char *)(param_1 + 0xb5);
        if ((cVar4 == '\x02') && (*(char *)(*(longlong *)(param_1 + 0x48) + 0x73) != '\0')) {
          cVar4 = '\x01';
        }
        cVar4 = (**(code **)(*plVar3 + 0x118))(plVar3,param_2,cVar4);
        if (cVar4 != '\0') {
          return '\x02';
        }
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar2 * 8 != lVar6);
  }
  return '\0';
}



// FUNCTION 144aebe74 FUN_144aebe74 body=1582 status=ok
// SIG undefined FUN_144aebe74(void)

undefined8 *
FUN_144aebe74(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  code *local_70;
  undefined1 *local_68;
  undefined8 *local_60;
  code *local_58;
  code *local_50;
  undefined8 local_48;
  longlong *plStack_40;
  undefined4 local_38;
  uint uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar4 = (longlong *)FUN_1447262c2(param_4);
  if (plVar4 != (longlong *)0x0) {
    if (DAT_14cb22240 == 0) {
      local_60 = &local_48;
      local_48 = FUN_1449e2820;
      local_50 = FUN_14081d0ea;
      local_58 = (code *)&LAB_1464376fa;
      local_68 = &LAB_147f28935;
      local_70 = FUN_146437c39;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10004001;
      local_90 = 8;
      local_98 = 0x28;
      FUN_14081cfa3(L"/Script/GbxAI",L"GbxTargeter",&DAT_14cb22240,&DAT_147f28934);
    }
    if (*(code **)(*plVar4 + 0x288) == FUN_14478438a) {
      plVar4 = (longlong *)FUN_14478438a(plVar4);
    }
    else {
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0x288))(plVar4,DAT_14cb22240);
    }
    if (plVar4 != (longlong *)0x0) {
      if (DAT_14cb22240 == 0) {
        local_60 = &local_48;
        local_48 = FUN_1449e2820;
        local_50 = FUN_14081d0ea;
        local_58 = (code *)&LAB_1464376fa;
        local_68 = &LAB_147f28935;
        local_70 = FUN_146437c39;
        local_78 = L"Engine";
        local_80 = 0;
        local_88 = 0x10004001;
        local_90 = 8;
        local_98 = 0x28;
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxTargeter",&DAT_14cb22240,&DAT_147f28934);
        if (DAT_14cb22240 == 0) goto LAB_144aec32a;
      }
      lVar5 = DAT_14cb22240;
      if ((*(byte *)(DAT_14cb22240 + 0xd5) & 0x40) != 0) {
        if (DAT_14c950d78 == 0) {
          local_60 = &local_48;
          local_48 = FUN_1449e2820;
          local_50 = FUN_14081d0ea;
          local_58 = FUN_14081d0ea;
          local_68 = &LAB_1468b50ee;
          local_70 = FUN_1427f23a3;
          local_78 = L"Engine";
          local_80 = 0;
          local_88 = 0x10004001;
          local_90 = 8;
          local_98 = 0x28;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Interface",&DAT_14c950d78,&DAT_1468b50f4);
        }
        if (DAT_14c950d78 != lVar5) {
          lVar11 = plVar4[2];
          if ((char)*(uint *)(lVar5 + 0xd4) < '\0') {
            if (lVar11 != 0) {
              do {
                if (0 < (longlong)*(int *)(lVar11 + 0x1e0)) {
                  lVar10 = *(longlong *)(lVar11 + 0x1d8);
                  lVar9 = 0;
                  do {
                    if (*(char *)(lVar10 + 0xc + lVar9) == '\0') {
                      if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar10 + lVar9) + 0x38))
                         && (*(longlong *)
                              (*(longlong *)(*(longlong *)(lVar10 + lVar9) + 0x30) +
                              (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
                        plVar7 = (longlong *)
                                 ((longlong)*(int *)(lVar10 + 8 + lVar9) + (longlong)plVar4);
                        goto LAB_144aebf81;
                      }
                    }
                    lVar9 = lVar9 + 0x10;
                  } while ((longlong)*(int *)(lVar11 + 0x1e0) * 0x10 != lVar9);
                }
                plVar7 = (longlong *)0x0;
LAB_144aebf81:
              } while ((plVar7 == (longlong *)0x0) &&
                      (lVar11 = *(longlong *)(lVar11 + 0x40), lVar11 != 0));
LAB_144aec01c:
              if ((plVar4 != plVar7) && (plVar7 != (longlong *)0x0)) {
                if (*(code **)(*plVar7 + 0x30) == (code *)&LAB_14493be02) {
                  plVar4 = plVar7 + 0x4b;
                }
                else {
                  plVar4 = (longlong *)(**(code **)(*plVar7 + 0x30))(plVar7);
                }
                if ((((((((int)plVar4[0x18] != 0) && (0 < (int)plVar4[0x10])) &&
                       (*(int *)plVar4[0xf] != 0x7fffffff)) &&
                      ((uVar1 = *(ulonglong *)((int *)plVar4[0xf] + 1), uVar1 >> 0x20 != 0 &&
                       (uVar6 = (uint)uVar1, -1 < (int)uVar6)))) &&
                     (((int)uVar6 < DAT_14c9647dc &&
                      ((plVar4 = (longlong *)
                                 ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0xd & 0x3fff8)))
                       , plVar4 != (longlong *)0x0 && ((int)plVar4[2] == (int)(uVar1 >> 0x20)))))))
                    && ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) && (*plVar4 != 0)) {
                  local_48 = (code *)0x0;
                  plStack_40 = (longlong *)0x0;
                  lVar5 = (**(code **)(*plVar7 + 8))(plVar7);
                  if (lVar5 == 0) {
                    local_48 = (code *)0x0;
                    iVar3 = 0;
                  }
                  else {
                    uVar6 = *(uint *)(lVar5 + 0xc);
                    local_48 = (code *)CONCAT44(local_48._4_4_,uVar6);
                    if ((int)uVar6 < DAT_14c9647dc) {
                      lVar5 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
                    }
                    else {
                      lVar5 = 0;
                    }
                    iVar3 = *(int *)(lVar5 + 0x10);
                    if (*(int *)(lVar5 + 0x10) == 0) {
                      LOCK();
                      iVar3 = DAT_14c964868 + 1;
                      UNLOCK();
                      iVar8 = DAT_14c964868 + 1;
                      bVar12 = DAT_14c964868 < 1000;
                      DAT_14c964868 = iVar3;
                      if (bVar12) {
                        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",
                                      0x23d,
                                      L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                      ,iVar8);
                      }
                      LOCK();
                      iVar3 = *(int *)(lVar5 + 0x10);
                      bVar12 = iVar3 == 0;
                      if (bVar12) {
                        *(int *)(lVar5 + 0x10) = iVar8;
                        iVar3 = 0;
                      }
                      UNLOCK();
                      if (bVar12) {
                        iVar3 = iVar8;
                      }
                    }
                  }
                  local_48 = (code *)CONCAT44(iVar3,(undefined4)local_48);
                  cVar2 = FUN_14493c216(&local_48,0);
                  if (cVar2 == '\0') {
                    plStack_40 = plVar7;
                  }
                  local_38 = 0;
                  uStack_34 = uStack_34 & 0xffffff00;
                  *(undefined2 *)(param_2 + 3) = 0x18;
                  *param_2 = local_48;
                  param_2[1] = plStack_40;
                  param_2[2] = (ulonglong)uStack_34 << 0x20;
                  *(undefined1 *)(param_2 + 4) = 0xc;
                  goto LAB_144aec184;
                }
              }
            }
          }
          else if ((*(uint *)(lVar5 + 0xd4) >> 0xe & 1) != 0) {
            if (DAT_14c950d78 == 0) {
              local_60 = &local_48;
              local_48 = FUN_1449e2820;
              local_50 = FUN_14081d0ea;
              local_58 = FUN_14081d0ea;
              local_68 = &LAB_1468b50ee;
              local_70 = FUN_1427f23a3;
              local_78 = L"Engine";
              local_80 = 0;
              local_88 = 0x10004001;
              local_90 = 8;
              local_98 = 0x28;
              FUN_14081cfa3(L"/Script/CoreUObject",L"Interface",&DAT_14c950d78,&DAT_1468b50f4);
            }
            if ((lVar11 != 0) && (DAT_14c950d78 != lVar5)) {
              do {
                if (0 < (longlong)*(int *)(lVar11 + 0x1e0)) {
                  lVar10 = 0;
                  do {
                    lVar9 = *(longlong *)(*(longlong *)(lVar11 + 0x1d8) + lVar10);
                    if (((lVar9 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar9 + 0x38))) &&
                       (plVar7 = plVar4,
                       *(longlong *)
                        (*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
                       lVar5 + 0x30)) goto LAB_144aec01c;
                    lVar10 = lVar10 + 0x10;
                  } while ((longlong)*(int *)(lVar11 + 0x1e0) * 0x10 != lVar10);
                }
                lVar11 = *(longlong *)(lVar11 + 0x40);
              } while (lVar11 != 0);
            }
          }
        }
      }
    }
  }
LAB_144aec32a:
  *(undefined2 *)(param_2 + 3) = 0;
  *(undefined1 *)(param_2 + 4) = 0;
LAB_144aec184:
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 144aec4a4 FUN_144aec4a4 body=152 status=ok
// SIG undefined FUN_144aec4a4(void)

void FUN_144aec4a4(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x60);
    lVar3 = *(longlong *)(param_2 + 0x48);
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 8));
    uVar1 = *(uint *)(lVar3 + 0x30);
    if ((LPCRITICAL_SECTION)(lVar3 + 8) != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 8));
    }
    if ((uVar1 & 0xfffffffe) != 2) {
      if (uVar1 != 4) {
        FUN_14013517c();
        return;
      }
      FUN_147f84e74(lVar2 + 0x20,param_2);
      lVar2 = *(longlong *)(param_2 + 0x48);
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 8));
      *(undefined4 *)(lVar2 + 0x30) = 2;
      if ((LPCRITICAL_SECTION)(lVar2 + 8) != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144aec535. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 8));
        return;
      }
    }
  }
  return;
}



// FUNCTION 144aec53c FUN_144aec53c body=239 status=ok
// SIG undefined FUN_144aec53c(void)

void FUN_144aec53c(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ushort *puVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  
  puVar7 = *(ushort **)(param_1 + 0x10);
  uVar1 = *puVar7;
  *(ushort **)(param_1 + 0x10) = puVar7 + 1;
  uVar2 = puVar7[1];
  *(ushort **)(param_1 + 0x10) = puVar7 + 2;
  uVar3 = puVar7[2];
  *(ushort **)(param_1 + 0x10) = puVar7 + 3;
  if (0 < *(int *)(param_1 + 0x40)) {
    uVar11 = (ulonglong)((uint)uVar1 * 0xa0);
    plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0x40 + uVar11);
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x50) + 0x3c + uVar11);
    lVar9 = *(longlong *)(param_1 + 0x70);
    iVar5 = *(int *)(param_1 + 0x80);
    plVar12 = (longlong *)((ulonglong)((uint)uVar1 * 0x18) + *(longlong *)(param_1 + 0x60));
    lVar13 = 0;
    do {
      iVar6 = *(int *)((ulonglong)((uint)uVar2 * iVar5) + lVar9 + lVar13 * 4);
      iVar10 = *(int *)((ulonglong)((uint)uVar3 * iVar5) + lVar9 + lVar13 * 4);
      if (iVar10 == -1) {
        iVar10 = (int)plVar12[1];
        *(uint *)(plVar12 + 1) = iVar10 + 1U;
        if (*(uint *)((longlong)plVar12 + 0xc) < iVar10 + 1U) {
          FUN_1446f48e2(plVar12,(longlong)iVar10);
        }
        *(int *)(*plVar12 + (longlong)iVar10 * 4) = iVar6;
      }
      else {
        *(int *)(*plVar8 + (longlong)iVar6 * 4) = iVar10 + iVar4;
        iVar10 = (int)plVar12[2];
        if ((int)plVar12[2] < iVar6) {
          iVar10 = iVar6;
        }
        *(int *)(plVar12 + 2) = iVar10;
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 < *(int *)(param_1 + 0x40));
  }
  return;
}



// FUNCTION 144aec62c FUN_144aec62c body=423 status=ok
// SIG undefined FUN_144aec62c(void)

undefined * FUN_144aec62c(void)

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
  if (DAT_14c846b14 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c926f30) {
      FUN_144b3d300(&DAT_14c926f30);
      if (DAT_14c926f30 == -1) {
        FUN_1413288e0(&DAT_14c926ca8);
        atexit(FUN_1427ac032);
        _Init_thread_footer(&DAT_14c926f30);
      }
    }
    if (*(code **)(DAT_14c926ca8 + 0x28) != (code *)&LAB_144aff468) {
      (**(code **)(DAT_14c926ca8 + 0x28))(&DAT_14c926ca8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb2c4e8) {
    FUN_144b3d300(&DAT_14cb2c4e8);
    if (DAT_14cb2c4e8 == -1) {
      FUN_1415e0876(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"NiagaraMeshVF";
      local_78 = L"FNiagaraMeshUniformParameters";
      local_50 = 0x230;
      local_58 = 0x52;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb2c468,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1438f5d0d);
      _Init_thread_footer(&DAT_14cb2c4e8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cb2c468;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144aec7d4 FUN_144aec7d4 body=605 status=ok
// SIG undefined FUN_144aec7d4(void)

void FUN_144aec7d4(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  
  lVar14 = *param_3;
  uVar4 = *(undefined4 *)((longlong)param_3 + 4);
  lVar10 = param_3[1];
  uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
  lVar11 = param_3[2];
  uVar6 = *(undefined4 *)((longlong)param_3 + 0x14);
  lVar12 = param_3[3];
  uVar7 = *(undefined4 *)((longlong)param_3 + 0x1c);
  uVar8 = *(undefined4 *)((longlong)param_3 + 0x24);
  lVar13 = param_3[5];
  uVar9 = *(undefined4 *)((longlong)param_3 + 0x2c);
  *(int *)(param_1 + 0x2a) = (int)param_3[4];
  *(undefined4 *)((longlong)param_1 + 0x154) = uVar8;
  *(int *)(param_1 + 0x2b) = (int)lVar13;
  *(undefined4 *)((longlong)param_1 + 0x15c) = uVar9;
  *(int *)(param_1 + 0x28) = (int)lVar11;
  *(undefined4 *)((longlong)param_1 + 0x144) = uVar6;
  *(int *)(param_1 + 0x29) = (int)lVar12;
  *(undefined4 *)((longlong)param_1 + 0x14c) = uVar7;
  *(int *)(param_1 + 0x26) = (int)lVar14;
  *(undefined4 *)((longlong)param_1 + 0x134) = uVar4;
  *(int *)(param_1 + 0x27) = (int)lVar10;
  *(undefined4 *)((longlong)param_1 + 0x13c) = uVar5;
  if (param_1 + 0x26 != param_3) {
    iVar3 = (int)param_3[0xe];
    *(int *)(param_1 + 0x34) = iVar3;
    if (iVar3 == 0 && *(int *)((longlong)param_1 + 0x1a4) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x1a4) = 4;
    }
    else {
      FUN_144780848(param_1 + 0x2c,iVar3);
      if (iVar3 != 0) {
        memcpy(param_1 + 0x2c,param_3 + 6,(longlong)iVar3 << 4);
      }
    }
  }
  plVar15 = param_3 + 0xf;
  plVar16 = param_1 + 0x35;
  for (lVar14 = 8; lVar14 != 0; lVar14 = lVar14 + -1) {
    *plVar16 = *plVar15;
    plVar15 = plVar15 + 1;
    plVar16 = plVar16 + 1;
  }
  lVar14 = param_3[0x17];
  *(undefined4 *)((longlong)param_1 + 0x1eb) = *(undefined4 *)((longlong)param_3 + 0xbb);
  *(int *)(param_1 + 0x3d) = (int)lVar14;
  if (((int)param_1[1] == -1) || (DAT_14ca84d88 != '\x01')) {
    return;
  }
  if (*(code **)(*param_1 + 0x10) == FUN_144846d14) {
    lVar14 = param_1[0x22];
    if (lVar14 != 0) {
      param_1[0x22] = 0;
      LOCK();
      puVar1 = (uint *)(lVar14 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    lVar14 = param_1[0x23];
    if (lVar14 != 0) {
      param_1[0x23] = 0;
      LOCK();
      puVar1 = (uint *)(lVar14 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    lVar14 = param_1[0x24];
    if (lVar14 != 0) {
      param_1[0x24] = 0;
      LOCK();
      puVar1 = (uint *)(lVar14 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    *(undefined4 *)(param_1 + 0x13) = 0;
    if (*(int *)((longlong)param_1 + 0x9c) != 0) {
      FUN_14472574a(param_1 + 2,0);
    }
    *(undefined4 *)(param_1 + 0x19) = 0;
    if (*(int *)((longlong)param_1 + 0xcc) != 0) {
      FUN_144725820(param_1 + 0x14,0);
    }
    *(undefined4 *)(param_1 + 0x21) = 0;
    if (*(int *)((longlong)param_1 + 0x10c) != 0) {
      FUN_1447258e4(param_1 + 0x1a,0);
    }
  }
  else {
    (**(code **)(*param_1 + 0x10))(param_1);
  }
  if (*(code **)(*param_1 + 8) == FUN_1447fd290) {
    FUN_1447fd290(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000144aec9b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,param_2);
  return;
}



// FUNCTION 144aeca32 FUN_144aeca32 body=423 status=ok
// SIG undefined FUN_144aeca32(void)

undefined * FUN_144aeca32(void)

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
  if (DAT_14c846b14 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c926f30) {
      FUN_144b3d300(&DAT_14c926f30);
      if (DAT_14c926f30 == -1) {
        FUN_1413288e0(&DAT_14c926ca8);
        atexit(FUN_1427ac032);
        _Init_thread_footer(&DAT_14c926f30);
      }
    }
    if (*(code **)(DAT_14c926ca8 + 0x28) != (code *)&LAB_144aff468) {
      (**(code **)(DAT_14c926ca8 + 0x28))(&DAT_14c926ca8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb2cab0) {
    FUN_144b3d300(&DAT_14cb2cab0);
    if (DAT_14cb2cab0 == -1) {
      FUN_141612130(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"NiagaraSpriteVF";
      local_78 = L"FNiagaraSpriteUniformParameters";
      local_50 = 0x260;
      local_58 = 0x15;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb2ca30,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1438f6788);
      _Init_thread_footer(&DAT_14cb2cab0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cb2ca30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144aecbda FUN_144aecbda body=423 status=ok
// SIG undefined FUN_144aecbda(void)

undefined * FUN_144aecbda(void)

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
  if (DAT_14c846b14 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c926f30) {
      FUN_144b3d300(&DAT_14c926f30);
      if (DAT_14c926f30 == -1) {
        FUN_1413288e0(&DAT_14c926ca8);
        atexit(FUN_1427ac032);
        _Init_thread_footer(&DAT_14c926f30);
      }
    }
    if (*(code **)(DAT_14c926ca8 + 0x28) != (code *)&LAB_144aff468) {
      (**(code **)(DAT_14c926ca8 + 0x28))(&DAT_14c926ca8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb2cb48) {
    FUN_144b3d300(&DAT_14cb2cb48);
    if (DAT_14cb2cb48 == -1) {
      FUN_1461a6bd8(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"NiagaraSpriteVFLooseParameters";
      local_78 = L"FNiagaraSpriteVFLooseParameters";
      local_50 = 0x40;
      local_58 = 0x5e;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb2cac8,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1438f6794);
      _Init_thread_footer(&DAT_14cb2cb48);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cb2cac8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144aecd82 FUN_144aecd82 body=40 status=ok
// SIG undefined FUN_144aecd82(void)

undefined8 FUN_144aecd82(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144aecdaa FUN_144aecdaa body=2340 status=ok
// SIG undefined FUN_144aecdaa(void)

void FUN_144aecdaa(ulonglong *param_1,longlong *param_2,longlong param_3,longlong param_4,
                  undefined4 *param_5)

{
  byte bVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined2 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  void *pvVar19;
  ulonglong *puVar20;
  undefined8 *puVar21;
  ulonglong *puVar22;
  void *pvVar23;
  longlong lVar24;
  longlong lVar25;
  undefined8 *puVar26;
  ulonglong uVar27;
  ulonglong _Size;
  undefined2 *puVar28;
  ulonglong *puVar29;
  size_t _Size_00;
  ulonglong uVar30;
  void *_Dst;
  longlong *plVar31;
  bool bVar32;
  undefined1 auStack_d8 [38];
  undefined2 local_b2;
  undefined2 local_b0;
  ushort local_ae;
  undefined4 local_ac;
  longlong local_a8;
  ulonglong local_a0;
  int local_94;
  undefined4 *local_90;
  undefined2 *local_88;
  ulonglong local_80;
  longlong *local_78;
  longlong local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a8 = param_4;
  if (*param_2 == 0) {
    local_80 = 0;
  }
  else {
    lVar24 = (longlong)*(int *)(*param_2 + 0xd4);
    local_80 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar24 * 8);
    if (local_80 == 0) {
      local_80 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar24,1);
    }
  }
  uVar16 = FUN_140029432(param_1,local_80,0);
  param_1[0x37] = local_80;
  puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar18 = puVar17 + 3;
  if ((undefined8 *)param_1[1] < puVar18) {
    FUN_140023dd8(param_1,0x20);
    puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar18 = puVar17 + 3;
  }
  *param_1 = (ulonglong)puVar18;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar17;
  param_1[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a37d340;
  puVar17[2] = uVar16;
  puVar18 = (undefined8 *)*param_2;
  plVar31 = (longlong *)param_1[0x10];
  if (plVar31 != (longlong *)0x0) goto LAB_144aece91;
  puVar20 = (ulonglong *)param_1[1];
  plVar31 = (longlong *)(*param_1 + 0xf & 0xfffffffffffffff0);
  puVar22 = (ulonglong *)(plVar31 + 9);
  if (puVar20 < puVar22) {
    FUN_140023dd8(param_1,0x58);
    puVar20 = (ulonglong *)param_1[1];
    plVar31 = (longlong *)(*param_1 + 0xf & 0xfffffffffffffff0);
    puVar22 = (ulonglong *)(plVar31 + 9);
  }
  *param_1 = (ulonglong)puVar22;
  puVar29 = (ulonglong *)((longlong)puVar22 + 0xfU & 0xfffffffffffffff0);
  puVar22 = puVar29 + 0x16;
  if (puVar20 < puVar22) {
    FUN_140023dd8(param_1,0xc0);
    puVar29 = (ulonglong *)(*param_1 + 0xf & 0xfffffffffffffff0);
    puVar22 = puVar29 + 0x16;
  }
  *param_1 = (ulonglong)puVar22;
  *puVar29 = param_1[0x11];
  puVar29[1] = (ulonglong)param_1;
  puVar29[2] = 0;
  puVar29[3] = 0;
  puVar29[4] = 0;
  puVar29[5] = 0;
  *(undefined8 *)((longlong)puVar29 + 0x2e) = 0;
  if (DAT_14c872d30 == 0) {
    FUN_145bdc178();
    bVar32 = DAT_14c872d30 != 0;
    puVar29[7] = 0;
    puVar29[8] = 0;
    puVar29[9] = 0;
    puVar29[10] = 0;
    *(undefined8 *)((longlong)puVar29 + 0x56) = 0;
    if (bVar32) goto LAB_144aed3a8;
    FUN_145bdc178();
    bVar32 = DAT_14c872d30 != 0;
    puVar29[0xc] = 0;
    puVar29[0xd] = 0;
    puVar29[0xe] = 0;
    puVar29[0xf] = 0;
    *(undefined8 *)((longlong)puVar29 + 0x7e) = 0;
    if (bVar32) goto LAB_144aed3bb;
    FUN_145bdc178();
    bVar32 = DAT_14c872d30 == 0;
    puVar29[0x11] = 0;
    puVar29[0x12] = 0;
    puVar29[0x13] = 0;
    puVar29[0x14] = 0;
    *(undefined8 *)((longlong)puVar29 + 0xa6) = 0;
    if (bVar32) {
      FUN_145bdc178();
    }
  }
  else {
    puVar29[9] = 0;
    puVar29[10] = 0;
    puVar29[7] = 0;
    puVar29[8] = 0;
    *(undefined8 *)((longlong)puVar29 + 0x56) = 0;
LAB_144aed3a8:
    puVar29[0xe] = 0;
    puVar29[0xf] = 0;
    puVar29[0xc] = 0;
    puVar29[0xd] = 0;
    *(undefined8 *)((longlong)puVar29 + 0x7e) = 0;
LAB_144aed3bb:
    puVar29[0x13] = 0;
    puVar29[0x14] = 0;
    puVar29[0x11] = 0;
    puVar29[0x12] = 0;
    *(undefined8 *)((longlong)puVar29 + 0xa6) = 0;
  }
  param_1[0x11] = (ulonglong)puVar29;
  *plVar31 = (longlong)puVar29;
  plVar31[1] = 0;
  *(undefined4 *)(plVar31 + 2) = 0;
  plVar31[3] = 0;
  *(undefined4 *)(plVar31 + 4) = 0;
  plVar31[5] = 0;
  *(undefined4 *)(plVar31 + 6) = 0;
  plVar31[7] = 0;
  *(undefined4 *)(plVar31 + 8) = 0;
  param_1[0x10] = (ulonglong)plVar31;
LAB_144aece91:
  iVar13 = (int)plVar31[6] + (int)plVar31[4];
  iVar14 = iVar13 + (int)plVar31[8];
  if (iVar14 != 0 && SCARRY4(iVar13,(int)plVar31[8]) == iVar14 < 0) {
    plVar31[1] = 0;
    *(undefined4 *)(plVar31 + 2) = 0;
    plVar31[3] = 0;
    *(undefined4 *)(plVar31 + 4) = 0;
    plVar31[5] = 0;
    *(undefined4 *)(plVar31 + 6) = 0;
    plVar31[7] = 0;
    *(undefined4 *)(plVar31 + 8) = 0;
    plVar31 = (longlong *)param_1[0x10];
  }
  puVar6 = (undefined2 *)*puVar18;
  puVar28 = (undefined2 *)(((longlong)puVar6 >> 0x18) + (longlong)puVar18);
  if (((ulonglong)puVar6 & 1) == 0) {
    puVar28 = puVar6;
  }
  local_68 = *(undefined4 *)(param_3 + 0x3c);
  local_78 = param_2;
  if ((longlong)*(int *)(puVar18 + 1) != 0) {
    local_88 = puVar28 + (longlong)*(int *)(puVar18 + 1) * 4;
    local_90 = param_5;
    local_ac = *(undefined4 *)(param_3 + 0x3c);
    do {
      uVar2 = puVar28[2];
      local_ae = puVar28[3];
      _Size = (ulonglong)local_ae;
      local_b2 = *puVar28;
      local_b0 = puVar28[1];
      uVar15 = *(uint *)(plVar31 + 2);
      local_a0 = (ulonglong)uVar15;
      local_94 = uVar15 + local_ae;
      lVar24 = *plVar31;
      puVar22 = (ulonglong *)(lVar24 + 0x10);
      pvVar23 = *(void **)(lVar24 + 0x10);
      uVar30 = *(ulonglong *)(lVar24 + 0x18);
      uVar27 = (longlong)pvVar23 + _Size;
      if (uVar15 == 0) {
        if (uVar30 < uVar27) {
          FUN_140023dd8(puVar22,local_ae + 1);
          pvVar23 = (void *)*puVar22;
          uVar27 = (longlong)pvVar23 + _Size;
        }
        *puVar22 = uVar27;
        pvVar19 = pvVar23;
      }
      else if (uVar30 < uVar27) {
        lVar24 = (longlong)local_94;
        uVar27 = (longlong)pvVar23 + lVar24;
        pvVar19 = pvVar23;
        if (uVar30 < uVar27) {
          FUN_140023dd8(puVar22,local_94 + 1);
          pvVar19 = (void *)*puVar22;
          uVar27 = lVar24 + (longlong)pvVar19;
        }
        *puVar22 = uVar27;
        memcpy(pvVar19,(void *)plVar31[1],(longlong)(int)plVar31[2]);
        pvVar23 = (void *)((longlong)(int)plVar31[2] + (longlong)pvVar19);
      }
      else {
        pvVar19 = (void *)plVar31[1];
        *puVar22 = uVar27;
      }
      memcpy(pvVar23,(void *)((ulonglong)uVar2 + local_a8),_Size);
      param_5 = local_90;
      plVar31[1] = (longlong)pvVar19;
      *(int *)(plVar31 + 2) = local_94;
      lVar25 = *plVar31;
      puVar22 = (ulonglong *)(lVar25 + 0x38);
      lVar24 = (longlong)(int)plVar31[4] + 1;
      puVar17 = *(undefined8 **)(lVar25 + 0x38);
      if ((longlong)(int)plVar31[4] == 0) {
        puVar17 = (undefined8 *)((longlong)puVar17 + 1U & 0xfffffffffffffffe);
        puVar26 = puVar17 + 1;
        puVar21 = puVar17;
        if (*(undefined8 **)(lVar25 + 0x40) < puVar26) {
          FUN_140023dd8(puVar22,10);
          puVar17 = (undefined8 *)(*puVar22 + 1 & 0xfffffffffffffffe);
          puVar26 = puVar17 + 1;
          puVar21 = puVar17;
        }
LAB_144aed0f9:
        *puVar22 = (ulonglong)puVar26;
      }
      else {
        puVar26 = puVar17 + 1;
        if (puVar26 <= *(undefined8 **)(lVar25 + 0x40)) {
          puVar21 = (undefined8 *)plVar31[3];
          goto LAB_144aed0f9;
        }
        puVar21 = (undefined8 *)((longlong)puVar17 + 1U & 0xfffffffffffffffe);
        puVar17 = puVar21 + lVar24;
        if (*(undefined8 **)(lVar25 + 0x40) < puVar17) {
          FUN_140023dd8(puVar22);
          puVar21 = (undefined8 *)(*puVar22 + 1 & 0xfffffffffffffffe);
          puVar17 = puVar21 + lVar24;
        }
        *puVar22 = (ulonglong)puVar17;
        puVar17 = puVar21;
        if (0 < (int)plVar31[4]) {
          lVar25 = 0;
          do {
            *puVar17 = *(undefined8 *)(plVar31[3] + lVar25 * 8);
            lVar25 = lVar25 + 1;
            puVar17 = puVar17 + 1;
          } while (lVar25 < (int)plVar31[4]);
        }
      }
      *(undefined2 *)puVar17 = local_b2;
      *(undefined2 *)((longlong)puVar17 + 2) = local_b0;
      *(short *)((longlong)puVar17 + 4) = (short)local_a0;
      *(ushort *)((longlong)puVar17 + 6) = local_ae;
      plVar31[3] = (longlong)puVar21;
      *(int *)(plVar31 + 4) = (int)lVar24;
      puVar28 = puVar28 + 4;
      local_68 = local_ac;
    } while (puVar28 != local_88);
  }
  local_70 = local_a8;
  FUN_140023e89(plVar31,puVar18,&local_70,CONCAT71((uint7)(uint3)((uint)local_68 >> 8),1));
  iVar13 = (int)plVar31[6] + (int)plVar31[4];
  iVar14 = iVar13 + (int)plVar31[8];
  if (iVar14 != 0 && SCARRY4(iVar13,(int)plVar31[8]) == iVar14 < 0) {
    puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar18 = puVar17 + 0xb;
    if ((undefined8 *)param_1[1] < puVar18) {
      FUN_140023dd8(param_1,0x60);
      puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar18 = puVar17 + 0xb;
    }
    *param_1 = (ulonglong)puVar18;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar17;
    param_1[6] = (ulonglong)(puVar17 + 1);
    lVar24 = plVar31[7];
    lVar9 = plVar31[8];
    lVar25 = plVar31[5];
    lVar10 = plVar31[6];
    lVar7 = plVar31[3];
    lVar11 = plVar31[4];
    lVar8 = plVar31[1];
    lVar12 = plVar31[2];
    puVar17[1] = 0;
    *puVar17 = &PTR_FUN_14a1e7fa8;
    puVar17[2] = local_80;
    puVar17[3] = lVar8;
    *(int *)(puVar17 + 4) = (int)lVar12;
    puVar17[5] = lVar7;
    *(int *)(puVar17 + 6) = (int)lVar11;
    puVar17[7] = lVar25;
    *(int *)(puVar17 + 8) = (int)lVar10;
    puVar17[9] = lVar24;
    *(int *)(puVar17 + 10) = (int)lVar9;
    plVar31[1] = 0;
    *(undefined4 *)(plVar31 + 2) = 0;
    plVar31[3] = 0;
    *(undefined4 *)(plVar31 + 4) = 0;
    plVar31[5] = 0;
    *(undefined4 *)(plVar31 + 6) = 0;
    plVar31[7] = 0;
    *(undefined4 *)(plVar31 + 8) = 0;
  }
  uVar3 = param_5[2];
  uVar4 = *param_5;
  uVar5 = param_5[1];
  puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar18 = puVar17 + 4;
  if ((undefined8 *)param_1[1] < puVar18) {
    FUN_140023dd8(param_1,0x28);
    puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar18 = puVar17 + 4;
  }
  plVar31 = local_78;
  *param_1 = (ulonglong)puVar18;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar17;
  param_1[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar17 + 2) = uVar4;
  *(undefined4 *)((longlong)puVar17 + 0x14) = uVar5;
  *(undefined4 *)(puVar17 + 3) = uVar3;
  if (*local_78 == 0) {
    lVar24 = 0;
  }
  else {
    lVar25 = (longlong)*(int *)(*local_78 + 0xd4);
    lVar24 = *(longlong *)(*(longlong *)(*(longlong *)(local_78[1] + 8) + 0x50) + lVar25 * 8);
    if (lVar24 == 0) {
      lVar24 = FUN_1400bafc2(*(longlong *)(local_78[1] + 8),lVar25,1);
    }
  }
  local_a8 = lVar24;
  if (DAT_14ca8507b == '\x01') {
    puVar22 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar22,0);
    }
    lVar24 = *plVar31;
    uVar27 = *(ulonglong *)(lVar24 + 0x10);
    uVar30 = lVar24 + 0x10 + ((longlong)uVar27 >> 0x18);
    if ((uVar27 & 1) == 0) {
      uVar30 = uVar27;
    }
    iVar13 = *(int *)(lVar24 + 0x18);
    if ((longlong)iVar13 != 0) {
      lVar24 = 0;
      do {
        uVar15 = (uint)*(byte *)(uVar30 + 3 + lVar24);
        if ((uVar15 < 0x13) && ((0x44080U >> (uVar15 & 0x1f) & 1) != 0)) {
          bVar1 = *(byte *)(uVar30 + 2 + lVar24);
          iVar14 = (int)param_1[0x13];
          *(uint *)(param_1 + 0x13) = iVar14 + 1U;
          if (*(uint *)((longlong)param_1 + 0x9c) < iVar14 + 1U) {
            FUN_1447477d8(puVar22,iVar14);
          }
          uVar27 = *puVar22;
          *(ushort *)(uVar27 + (longlong)iVar14 * 4) = (ushort)bVar1;
          *(undefined1 *)(uVar27 + 2 + (longlong)iVar14 * 4) = 1;
        }
        lVar24 = lVar24 + 4;
      } while ((longlong)iVar13 * 4 != lVar24);
    }
    uVar27 = param_1[0x13];
    lVar24 = (longlong)(int)uVar27;
    if (0 < lVar24) {
      if (DAT_14ca8507b == '\x01') {
        pvVar23 = (void *)*puVar22;
        puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar18 = puVar17 + 5;
        if ((undefined8 *)param_1[1] < puVar18) {
          FUN_140023dd8(param_1,0x30);
          puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar18 = puVar17 + 5;
        }
        *param_1 = (ulonglong)puVar18;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar17;
        param_1[6] = (ulonglong)(puVar17 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar19 = (void *)((longlong)_Dst + lVar24 * 4);
        _Size_00 = lVar24 * 4;
        if ((void *)param_1[1] < pvVar19) {
          FUN_140023dd8(param_1,(uint)_Size_00 | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar19 = (void *)((longlong)_Dst + _Size_00);
        }
        *param_1 = (ulonglong)pvVar19;
        memcpy(_Dst,pvVar23,_Size_00);
        puVar17[1] = 0;
        *puVar17 = &PTR_FUN_14a1fbc38;
        puVar17[2] = local_a8;
        puVar17[3] = _Dst;
        *(int *)(puVar17 + 4) = (int)uVar27;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_d8);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144aed6f4 FUN_144aed6f4 body=261 status=ok
// SIG undefined FUN_144aed6f4(void)

undefined2 FUN_144aed6f4(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined2 uVar5;
  int iVar6;
  undefined1 auStack_868 [32];
  undefined1 *local_848;
  undefined1 *local_840;
  undefined1 *local_838;
  char local_830;
  undefined1 local_828 [2070];
  undefined1 local_12 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_868;
  local_848 = local_828;
  local_830 = '\0';
  local_838 = local_12;
  local_840 = local_848;
  FUN_14005eb5c(param_1 + 0x20);
  if ((int)((ulonglong)((longlong)local_840 - (longlong)local_848) >> 1) < 5) {
    uVar5 = 0;
LAB_144aed7b6:
    if (local_830 == '\x01') {
      FUN_1400020a8();
    }
    if ((local_10 ^ (ulonglong)auStack_868) == DAT_14c707940) {
      return uVar5;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  lVar3 = 5;
  lVar4 = 0;
LAB_144aed767:
  uVar1 = *(ushort *)((longlong)L"User." + lVar4);
  uVar2 = *(ushort *)(local_848 + lVar4);
  if (uVar1 == uVar2) {
    iVar6 = 0;
    if ((uVar1 == 0) || (lVar3 == 1)) goto LAB_144aed7af;
  }
  else {
    if (0x7f < (uVar2 | uVar1)) {
      iVar6 = (uint)uVar1 - (uint)uVar2;
LAB_144aed7af:
      uVar5 = CONCAT11((char)(uVar2 >> 8),iVar6 == 0);
      goto LAB_144aed7b6;
    }
    if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2]) {
      iVar6 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
      goto LAB_144aed7af;
    }
    if (lVar3 == 1) {
      iVar6 = 0;
      goto LAB_144aed7af;
    }
  }
  lVar3 = lVar3 + -1;
  lVar4 = lVar4 + 2;
  goto LAB_144aed767;
}



// FUNCTION 144aed7fa FUN_144aed7fa body=287 status=ok
// SIG undefined FUN_144aed7fa(void)

ulonglong FUN_144aed7fa(undefined8 param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 **ppuVar5;
  ushort uVar6;
  ulonglong uVar7;
  ushort uVar8;
  ulonglong uVar9;
  undefined1 auStack_878 [40];
  undefined1 *local_850;
  undefined1 *local_848;
  undefined1 *local_840;
  char local_838;
  undefined1 local_830 [2070];
  undefined1 local_1a [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_878;
  local_850 = local_830;
  local_838 = '\0';
  local_840 = local_1a;
  ppuVar5 = &local_850;
  local_848 = local_850;
  FUN_14005eb5c(param_1);
  if ((int)((ulonglong)((longlong)local_848 - (longlong)local_850) >> 1) < 5) {
LAB_144aed8ed:
    plVar2 = (longlong *)FUN_1402d67b8(param_1);
    if (plVar2 != (longlong *)0x0) {
      iVar1 = (**(code **)(*plVar2 + 0x318))(plVar2);
      if (0 < iVar1) {
LAB_144aed8b5:
        ppuVar5 = (undefined1 **)CONCAT71((int7)((ulonglong)ppuVar5 >> 8),1);
        goto LAB_144aed8b8;
      }
    }
    ppuVar5 = (undefined1 **)0x0;
  }
  else {
    lVar3 = 5;
    lVar4 = 0;
    while( true ) {
      uVar6 = *(ushort *)((longlong)L"User." + lVar4);
      uVar7 = (ulonglong)uVar6;
      uVar8 = *(ushort *)(local_850 + lVar4);
      if (uVar6 != uVar8) {
        ppuVar5 = (undefined1 **)(ulonglong)(uint)(uVar8 | uVar6);
        if ((uVar8 | uVar6) < 0x80) {
          uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
          uVar9 = (ulonglong)uVar8;
          uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
          if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar9]) {
            if (lVar3 != 1) goto LAB_144aed88d;
            goto LAB_144aed8b5;
          }
        }
        if (uVar6 != uVar8) goto LAB_144aed8ed;
        goto LAB_144aed8b5;
      }
      ppuVar5 = (undefined1 **)CONCAT71((int7)((ulonglong)ppuVar5 >> 8),1);
      if ((uVar6 == 0) || (lVar3 == 1)) break;
LAB_144aed88d:
      lVar3 = lVar3 + -1;
      lVar4 = lVar4 + 2;
    }
  }
LAB_144aed8b8:
  if (local_838 == '\x01') {
    FUN_1400020a8(local_850);
  }
  if ((local_18 ^ (ulonglong)auStack_878) == DAT_14c707940) {
    return (ulonglong)ppuVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144aed91a FUN_144aed91a body=476 status=ok
// SIG undefined FUN_144aed91a(void)

undefined8 FUN_144aed91a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  int *piVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined4 local_a8 [2];
  longlong local_a0;
  undefined8 uStack_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar10 = *(uint *)(param_1 + 0xf8);
  uVar11 = (ulonglong)uVar10;
  if ((uVar10 & 2) != 0) {
    plVar1 = (longlong *)(param_1 + 0x78);
    if ((uVar10 & 8) != 0) {
      fVar2 = *(float *)(param_2 + 0x14);
      fVar3 = *(float *)(param_2 + 0x10);
      fVar4 = *(float *)(param_2 + 0xc);
      uVar10 = uVar10 & 0xfffffff7;
      *(uint *)(param_1 + 0xf8) = uVar10;
      iVar7 = *(int *)(param_1 + 0xd0);
      if ((longlong)iVar7 != 0) {
        lVar8 = *(longlong *)(param_1 + 200);
        lVar14 = 0;
        do {
          local_b0 = *(undefined8 *)(lVar8 + lVar14);
          local_a8[0] = FUN_144830b78(local_a8,&DAT_14cb42130);
          local_a0 = 0;
          uStack_98 = 0;
          piVar12 = (int *)(**(code **)(*plVar1 + 0x58))(plVar1,&local_b0,0);
          if ((piVar12 != (int *)0x0) && (lVar13 = (longlong)*piVar12, lVar13 != -1)) {
            dVar5 = *(double *)(lVar8 + 0x10 + lVar14);
            dVar6 = *(double *)(lVar8 + 0x18 + lVar14);
            lVar9 = *(longlong *)(param_1 + 0x98);
            *(float *)(lVar9 + lVar13) =
                 (float)(*(double *)(lVar8 + 8 + lVar14) - (double)fVar4 * 65536.0);
            *(float *)(lVar9 + 4 + lVar13) = (float)(dVar5 - (double)fVar3 * 65536.0);
            *(float *)(lVar9 + 8 + lVar13) = (float)(dVar6 - (double)fVar2 * 65536.0);
          }
          if (local_a0 != 0) {
            FUN_1400020a8();
          }
          lVar14 = lVar14 + 0x20;
        } while ((longlong)iVar7 * 0x20 != lVar14);
        uVar10 = *(uint *)(param_1 + 0xf8);
      }
      uVar11 = (ulonglong)(uVar10 | 1);
      *(uint *)(param_1 + 0xf8) = uVar10 | 1;
    }
    uVar10 = (uint)uVar11;
    if ((0 < *(int *)(param_1 + 0xe0)) && ((uVar11 & 7) != 0)) {
      FUN_14004222e(plVar1);
      uVar10 = *(uint *)(param_1 + 0xf8);
    }
    uVar11 = (ulonglong)(uVar10 & 0xfffffff8);
    *(uint *)(param_1 + 0xf8) = uVar10 & 0xfffffff8;
  }
  if ((local_90 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return CONCAT71((int7)(uVar11 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144aedaf8 FUN_144aedaf8 body=3443 status=ok
// SIG undefined FUN_144aedaf8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144aedaf8(longlong param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  DWORD DVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  DWORD DVar10;
  DWORD DVar11;
  longlong *plVar12;
  LPVOID lpTlsValue;
  longlong lVar13;
  double *pdVar14;
  longlong lVar15;
  byte bVar16;
  ulonglong uVar17;
  longlong *plVar18;
  bool bVar19;
  float fVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double _X;
  double _X_00;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double _X_01;
  undefined1 auStack_148 [32];
  longlong **local_128;
  undefined1 local_120;
  longlong local_110;
  longlong *local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  longlong local_e0 [2];
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (*(int *)(param_1 + 0x1c) == 0) {
LAB_144aee19c:
    lVar15 = 0;
  }
  else {
    uVar8 = *(uint *)(param_1 + 0x18);
    lVar15 = 0;
    if ((-1 < (int)uVar8) && ((int)uVar8 < DAT_14c9647dc)) {
      plVar12 = (longlong *)
                ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
      if ((plVar12 == (longlong *)0x0) ||
         (((int)plVar12[2] != *(int *)(param_1 + 0x1c) ||
          ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)))) goto LAB_144aee19c;
      lVar15 = *plVar12;
    }
  }
  plVar12 = (longlong *)(*(int *)(param_1 + 0x28) + lVar15);
  if (*(code **)(param_1 + 0x20) != FUN_148110656) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_d0 ^ (ulonglong)auStack_148);
  }
  DVar10 = DAT_14c75ec34;
  if (DAT_14c75ec34 == 0xffffffff) {
    DVar10 = TlsAlloc();
    DVar11 = 0xffffffff;
    LOCK();
    bVar19 = DAT_14c75ec34 != 0xffffffff;
    DVar6 = DVar10;
    if (bVar19) {
      DVar11 = DAT_14c75ec34;
      DVar6 = DAT_14c75ec34;
    }
    DAT_14c75ec34 = DVar6;
    UNLOCK();
    if (bVar19) {
      TlsFree(DVar10);
      DVar10 = DVar11;
    }
  }
  lpTlsValue = TlsGetValue(DVar10);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_14001cc68(0x60,0x10);
    FUN_141073f92(lpTlsValue);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(DVar10,lpTlsValue);
  }
  if (*(char *)((longlong)lpTlsValue + 0x20) != '\0') goto LAB_144aedf7f;
  lVar15 = plVar12[0xec];
  if ((*(int *)((longlong)plVar12 + 0x3d4) < 0) &&
     ((lVar13 = plVar12[0x16], lVar13 != 0 || (lVar13 = FUN_1448abda6(plVar12), lVar13 != 0)))) {
    fVar20 = (float)*(double *)(lVar13 + 0x6d0);
  }
  else {
    fVar20 = *(float *)((longlong)plVar12 + 0x3c4);
  }
  *(float *)(*(longlong *)(lVar15 + 0x30) + 0xd4) = fVar20;
  if (((~*(byte *)((longlong)plVar12 + 0x9c) & 3) == 0) &&
     (*(byte *)((longlong)plVar12 + 0x9d) = *(byte *)((longlong)plVar12 + 0x9d) | 4,
     (*(byte *)((longlong)plVar12 + 0x9e) & 1) == 0)) {
    lVar15 = plVar12[0x16];
    if ((lVar15 == 0) && (lVar15 = FUN_1448abda6(), lVar15 == 0)) {
      uVar8 = *(uint *)((longlong)plVar12 + 0xc);
      if ((int)uVar8 < DAT_14c9647dc) {
        lVar15 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
      }
      else {
        lVar15 = 0;
      }
      if ((*(uint *)(lVar15 + 8) >> 0x1c & 1) == 0) {
        FUN_14342d574(plVar12);
      }
    }
    else {
      if (*(code **)(*plVar12 + 0x3d8) != (code *)&LAB_1479b7ec0) {
        cVar7 = (**(code **)(*plVar12 + 0x3d8))(plVar12);
        bVar16 = *(byte *)(plVar12 + 0x17) >> 1 & 3;
        if ((cVar7 == '\0') || (bVar16 != 1)) {
          if (bVar16 != 0) goto LAB_144aedddb;
          if (cVar7 == '\0') goto LAB_144aedc8d;
        }
        else {
          *(undefined8 *)(*(longlong *)(lVar15 + 0x2e0) + (longlong)(int)plVar12[0x12] * 8) = 0;
        }
        goto LAB_144aee494;
      }
      if ((*(byte *)(plVar12 + 0x17) & 6) != 0) goto LAB_144aedddb;
LAB_144aedc8d:
      if (DAT_14ca9a438 == '\x01') {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c846598) &&
           (FUN_144b3d300(&DAT_14c846598), DAT_14c846598 == -1)) {
          if (DAT_14c846b14 == '\0') {
            FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                          L"Attempting to get the command line but it hasn\'t been initialized yet."
                         );
          }
          cVar7 = FUN_14054d46e(&DAT_14c846b20,L"onethread");
          bVar19 = true;
          if (cVar7 == '\0') {
            if (DAT_14c846b14 == '\0') {
              FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                            L"Attempting to get the command line but it hasn\'t been initialized yet."
                           );
            }
            cVar7 = FUN_14054d46e(&DAT_14c846b20,L"noperfthreads");
            if ((cVar7 == '\0') && (cVar7 = FUN_144a53f06(), cVar7 != '\0')) {
              iVar9 = FUN_144a885dc();
              bVar19 = iVar9 == 1;
            }
          }
          DAT_14c846594 = bVar19;
          _Init_thread_footer(&DAT_14c846598);
        }
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c8465a0) &&
           (FUN_144b3d300(&DAT_14c8465a0), DAT_14c8465a0 == -1)) {
          if (DAT_14c846b14 == '\0') {
            FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                          L"Attempting to get the command line but it hasn\'t been initialized yet."
                         );
          }
          DAT_14c84659c = FUN_14054d46e(&DAT_14c846b20,L"useperfthreads");
          _Init_thread_footer(&DAT_14c8465a0);
        }
        lVar13 = DAT_14cae9160;
        if ((DAT_14c846594 == '\x01') && ((DAT_14c84659c & 1) == 0)) goto LAB_144aee494;
        iVar9 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
        ;
        if ((iVar9 == 0x40000002) || ((DAT_14c86a9f8 != '\x01' || (iVar9 == 2)))) {
          uVar17 = 0;
        }
        else if (iVar9 == 1) {
          DVar10 = FUN_140ad26c0();
          DVar11 = GetCurrentThreadId();
          uVar17 = (ulonglong)(DVar10 != DVar11);
        }
        else {
          uVar17 = 1;
        }
        if (*(int *)(lVar13 + uVar17 * 4) == 0) goto LAB_144aee494;
        uVar1 = *(undefined4 *)(lVar15 + 0x2e8);
        *(byte *)(plVar12 + 0x17) = *(byte *)(plVar12 + 0x17) & 0xf9 | 2;
        *(undefined4 *)(plVar12 + 0x12) = uVar1;
        if ((plVar12 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(plVar12);
        }
        plVar18 = (longlong *)(lVar15 + 0x2e0);
        uVar17 = (ulonglong)*(int *)(lVar15 + 0x2e8);
        uVar8 = *(int *)(lVar15 + 0x2e8) + 1;
        *(uint *)(lVar15 + 0x2e8) = uVar8;
        if (*(uint *)(lVar15 + 0x2ec) < uVar8) goto LAB_144aee4e8;
      }
      else {
LAB_144aee494:
        uVar1 = *(undefined4 *)(lVar15 + 0x2f8);
        *(byte *)(plVar12 + 0x17) = *(byte *)(plVar12 + 0x17) & 0xf9 | 4;
        *(undefined4 *)(plVar12 + 0x12) = uVar1;
        if ((plVar12 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(plVar12);
        }
        plVar18 = (longlong *)(lVar15 + 0x2f0);
        uVar17 = (ulonglong)*(int *)(lVar15 + 0x2f8);
        uVar8 = *(int *)(lVar15 + 0x2f8) + 1;
        *(uint *)(lVar15 + 0x2f8) = uVar8;
        if (*(uint *)(lVar15 + 0x2fc) < uVar8) {
LAB_144aee4e8:
          FUN_14092ecf6(plVar18,uVar17 & 0xffffffff);
        }
      }
      *(longlong **)(*plVar18 + uVar17 * 8) = plVar12;
      if ((plVar12 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(plVar12);
      }
      lVar13 = DAT_14cb06e38;
      pcVar2 = *(code **)(*plVar12 + 1000);
      if (pcVar2 != (code *)&LAB_144b20ecc) {
        if (pcVar2 == FUN_144b295e4) {
          if (((plVar12[0x1ca] != 0) && (*DAT_14cb07778 != 0)) &&
             (*(char *)((longlong)plVar12 + 0xc7c) == '\0')) {
            iVar9 = *(int *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0xc60);
            if (((iVar9 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar9 == 2)) {
              uVar17 = 0;
            }
            else if (iVar9 == 1) {
              DVar10 = FUN_140ad26c0();
              DVar11 = GetCurrentThreadId();
              uVar17 = (ulonglong)(DVar10 != DVar11);
            }
            else {
              uVar17 = 1;
            }
            if (*(int *)(lVar13 + uVar17 * 4) == 0) goto LAB_144aee085;
          }
        }
        else {
          cVar7 = (*pcVar2)(plVar12);
          if (cVar7 != '\0') {
LAB_144aee085:
            *(byte *)(plVar12 + 0x17) = *(byte *)(plVar12 + 0x17) | 8;
            local_108 = plVar12;
            if ((plVar12 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(plVar12);
            }
            FUN_14482925a(lVar15 + 0x290,local_e0,&local_108,0);
          }
        }
      }
    }
  }
LAB_144aedddb:
  lVar15 = *(longlong *)(plVar12[0xec] + 0x30);
  dVar21 = *(double *)(lVar15 + 0x830);
  dVar22 = *(double *)(lVar15 + 0x838);
  dVar23 = *(double *)(lVar15 + 0x840);
  dVar24 = *(double *)(lVar15 + 0x848);
  dVar25 = *(double *)(lVar15 + 0x850);
  dVar35 = *(double *)(lVar15 + 0x858);
  lVar15 = *(longlong *)(lVar15 + 0x860);
  lVar13 = plVar12[0x16];
  if (lVar13 == 0) {
    lVar13 = FUN_1448abda6(plVar12);
  }
  fVar20 = *(float *)(lVar13 + 0x6f4) + *(float *)((longlong)plVar12 + 0x82c);
  *(float *)((longlong)plVar12 + 0x82c) = fVar20;
  if ((((((((char)plVar12[0x10c] == '\0') || (dVar21 < (double)plVar12[0x106])) ||
         ((double)plVar12[0x109] < dVar21)) ||
        ((dVar22 < (double)plVar12[0x107] || ((double)plVar12[0x10a] < dVar22)))) ||
       (dVar23 < (double)plVar12[0x108])) ||
      (((double)plVar12[0x10b] < dVar23 || (dVar24 < (double)plVar12[0x106])))) ||
     ((((double)plVar12[0x109] < dVar24 ||
       (((dVar25 < (double)plVar12[0x107] || ((double)plVar12[0x10a] < dVar25)) ||
        (dVar35 < (double)plVar12[0x108])))) ||
      (((double)plVar12[0x10b] < dVar35 ||
       (*(float *)((longlong)plVar12 + 0x794) <= fVar20 &&
        fVar20 != *(float *)((longlong)plVar12 + 0x794))))))) {
    plVar12[0x106] = (longlong)dVar21;
    plVar12[0x107] = (longlong)dVar22;
    plVar12[0x108] = (longlong)dVar23;
    plVar12[0x109] = (longlong)dVar24;
    plVar12[0x10a] = (longlong)dVar25;
    plVar12[0x10b] = (longlong)dVar35;
    plVar12[0x10c] = lVar15;
    *(undefined4 *)((longlong)plVar12 + 0x82c) = 0;
    auVar26 = *(undefined1 (*) [16])(plVar12 + 0x36);
    dVar22 = auVar26._0_8_;
    dVar23 = auVar26._8_8_;
    dVar21 = (double)plVar12[0x38];
    pdVar14 = (double *)plVar12[0x46];
    if (pdVar14 == (double *)0x0) {
      pdVar14 = (double *)FUN_14001cc68(0x40,0x10);
      dVar24 = DAT_14c8463d8;
      *pdVar14 = DAT_14c8463d0;
      pdVar14[1] = dVar24;
      dVar24 = DAT_14c8463e8;
      pdVar14[2] = DAT_14c8463e0;
      pdVar14[3] = dVar24;
      dVar24 = DAT_14c846500;
      pdVar14[4] = DAT_14c8464f8;
      pdVar14[5] = dVar24;
      pdVar14[6] = DAT_14c846508;
      plVar12[0x46] = (longlong)pdVar14;
    }
    auVar30 = _DAT_1499387d0;
    if (((pdVar14[4] != dVar22) || (NAN(pdVar14[4]) || NAN(dVar22))) ||
       ((pdVar14[5] != dVar23 ||
        (((NAN(pdVar14[5]) || NAN(dVar23) || (pdVar14[6] != dVar21)) ||
         (NAN(pdVar14[6]) || NAN(dVar21))))))) {
      auVar32._8_8_ = 0;
      auVar32._0_8_ = dVar21;
      dVar24 = (double)DAT_1499387d0;
      dVar25 = DAT_1499387d0._8_8_;
      auVar26 = divpd(auVar26,_DAT_1499387d0);
      auVar29 = divpd(auVar32,_DAT_1499387d0);
      auVar26 = roundpd(auVar26,auVar26,3);
      auVar29 = roundpd(auVar29,auVar29,3);
      auVar38._0_8_ = dVar22 - auVar26._0_8_ * dVar24;
      auVar38._8_8_ = dVar23 - auVar26._8_8_ * dVar25;
      auVar33._0_8_ = dVar21 - auVar29._0_8_ * dVar24;
      auVar33._8_8_ = 0.0 - auVar29._8_8_ * dVar25;
      auVar36._0_8_ = auVar38._0_8_ + dVar24;
      auVar36._8_8_ = auVar38._8_8_ + dVar25;
      auVar31._0_8_ = auVar33._0_8_ + dVar24;
      auVar31._8_8_ = auVar33._8_8_ + dVar25;
      auVar29._8_8_ = -(ulonglong)(0.0 <= auVar38._8_8_);
      auVar29._0_8_ = -(ulonglong)(0.0 <= auVar38._0_8_);
      auVar26 = blendvpd(auVar36,auVar38,auVar29);
      auVar37._8_8_ = -(ulonglong)(0.0 <= auVar33._8_8_);
      auVar37._0_8_ = -(ulonglong)(0.0 <= auVar33._0_8_);
      auVar29 = blendvpd(auVar31,auVar33,auVar37);
      auVar34._0_8_ = auVar26._0_8_ + -360.0;
      auVar34._8_8_ = auVar26._8_8_ + -360.0;
      auVar27._8_8_ = -(ulonglong)(180.0 < auVar26._8_8_);
      auVar27._0_8_ = -(ulonglong)(180.0 < auVar26._0_8_);
      auVar37 = blendvpd(auVar26,auVar34,auVar27);
      auVar28._8_8_ = -(ulonglong)(180.0 < auVar29._8_8_);
      auVar28._0_8_ = -(ulonglong)(180.0 < auVar29._0_8_);
      auVar26._8_8_ = auVar29._8_8_ + 0.0;
      auVar26._0_8_ = auVar29._0_8_ + -360.0;
      auVar26 = blendvpd(auVar29,auVar26,auVar28);
      *(undefined1 (*) [16])(pdVar14 + 4) = auVar37;
      dVar21 = auVar26._0_8_;
      pdVar14[6] = dVar21;
      auVar39._8_8_ = 0;
      auVar39._0_8_ = dVar21;
      auVar26 = divpd(auVar37,auVar30);
      auVar30 = divpd(auVar39,auVar30);
      auVar26 = roundpd(auVar26,auVar26,3);
      auVar30 = roundpd(auVar30,auVar30,3);
      dVar35 = (auVar37._0_8_ - auVar26._0_8_ * dVar24) * 0.008726646259971648;
      _X = (auVar37._8_8_ - auVar26._8_8_ * dVar25) * 0.008726646259971648;
      _X_00 = (dVar21 - auVar30._0_8_ * dVar24) * 0.008726646259971648;
      _X_01 = (0.0 - auVar30._8_8_ * dVar25) * 0.008726646259971648;
      dVar21 = sin(dVar35);
      dVar22 = sin(_X);
      dVar23 = sin(_X_00);
      sin(_X_01);
      dVar24 = cos(dVar35);
      dVar25 = cos(_X);
      dVar35 = cos(_X_00);
      cos(_X_01);
      *pdVar14 = dVar21 * dVar22 * dVar35 - dVar24 * dVar25 * dVar23;
      pdVar14[1] = -(dVar21 * dVar25 * dVar35) - dVar24 * dVar22 * dVar23;
      pdVar14[2] = -(dVar25 * dVar21 * dVar23) + dVar22 * dVar24 * dVar35;
      pdVar14[3] = dVar22 * dVar21 * dVar23 + dVar25 * dVar24 * dVar35;
    }
    local_108 = (longlong *)*pdVar14;
    dStack_100 = pdVar14[1];
    local_f8 = pdVar14[2];
    dStack_f0 = pdVar14[3];
    local_128 = &local_108;
    local_120 = 0;
    FUN_140092404(plVar12,plVar12[0x24],plVar12[0x25],0);
  }
  if ((plVar12[0xb5] != 0) && (lVar15 = *(longlong *)(plVar12[0xb5] + 0x2f0), lVar15 != 0)) {
    lVar13 = plVar12[0xec];
    lVar3 = *(longlong *)(lVar13 + 0x30);
    if (lVar3 != 0) {
      uVar8 = *(uint *)(lVar13 + 0x60);
      if ((uVar8 & 2) != 0) {
        *(uint *)(lVar13 + 0x60) = uVar8 & 0xfffffffd;
        local_f8 = (double)*(float *)(lVar3 + 0x14) * 65536.0;
        dStack_100 = (double)*(float *)(lVar3 + 0x10) * 65536.0;
        local_108 = (longlong *)((double)*(float *)(lVar3 + 0xc) * 65536.0);
        FUN_144aefa36(*(undefined8 *)(lVar13 + 0x28));
        FUN_14472d10a(*(undefined8 *)(lVar13 + 0x28));
        uVar8 = *(uint *)(lVar13 + 0x60);
      }
      if ((uVar8 & 4) != 0) {
        *(uint *)(lVar13 + 0x60) = uVar8 & 0xfffffffb;
        FUN_14090c93a(lVar13);
        uVar8 = *(uint *)(lVar13 + 0x60);
      }
      if ((uVar8 & 1) != 0) {
        FUN_14098c1d0(lVar15,lVar3,lVar13);
        *(byte *)(lVar13 + 0x60) = *(byte *)(lVar13 + 0x60) & 0xfe;
      }
      if (0 < *(int *)(lVar15 + 0x18)) {
        lVar13 = (longlong)*(int *)(*(longlong *)(lVar3 + 0x38) + 0x478);
        if (lVar13 != 0) {
          lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x38) + 0x470);
          local_110 = lVar13 * 0xc;
          lVar13 = 0;
          do {
            iVar9 = *(int *)(lVar4 + 8 + lVar13);
            if (((-1 < (longlong)iVar9) && (iVar9 < *(int *)(lVar15 + 0x18))) &&
               ((plVar18 = *(longlong **)
                            (*(longlong *)(lVar3 + 0x108) +
                            (longlong)*(int *)(lVar4 + lVar13) * 0x10),
                1 < *(int *)((longlong)plVar18 + 0xd4) - 3U &&
                (plVar5 = *(longlong **)(*(longlong *)(lVar15 + 0x10) + (longlong)iVar9 * 8),
                plVar5 != (longlong *)0x0)))) {
              iVar9 = *(int *)(lVar4 + 4 + lVar13);
              (**(code **)(*plVar18 + 0x78))(plVar18,local_e0);
              (**(code **)(*plVar5 + 0x70))
                        (plVar5,*(undefined8 *)(local_e0[0] + (longlong)iVar9 * 8),plVar18);
            }
            lVar13 = lVar13 + 0xc;
          } while (local_110 != lVar13);
        }
      }
    }
  }
  if ((*(byte *)((longlong)plVar12 + 0x7cd) & 4) != 0) {
    (**(code **)(*plVar12 + 0x310))(plVar12);
    *(byte *)((longlong)plVar12 + 0x7cd) = *(byte *)((longlong)plVar12 + 0x7cd) & 0xfb;
  }
LAB_144aedf7f:
  if ((local_d0 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144aee8ce FUN_144aee8ce body=110 status=ok
// SIG undefined FUN_144aee8ce(void)

undefined8 FUN_144aee8ce(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  int *piVar3;
  
  if ((((*param_2 != 0) && (plVar2 = (longlong *)FUN_144741050(param_2 + 1), *plVar2 != 0)) &&
      (*(longlong *)(param_1 + 8) != 0)) &&
     (plVar2 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x40), plVar2 != (longlong *)0x0)) {
    piVar3 = (int *)(**(code **)(*plVar2 + 0x58))(plVar2,param_2,0);
    if (piVar3 == (int *)0x0) {
      return 0;
    }
    iVar1 = *piVar3;
    if ((-1 < (longlong)iVar1) && (iVar1 < (int)plVar2[9])) {
      return *(undefined8 *)(plVar2[8] + (longlong)iVar1 * 8);
    }
  }
  return 0;
}



// FUNCTION 144aee93c FUN_144aee93c body=784 status=ok
// SIG undefined FUN_144aee93c(void)

ulonglong FUN_144aee93c(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar3 = FUN_14021f064();
  if ((*(byte *)(param_1 + 0xcc) & 2) == 0) {
    uVar5 = (ulonglong)uVar3;
  }
  else {
    FUN_1446ddc76(&local_88,"User.ResolutionMaxAxis",1);
    local_80 = local_88;
    if (DAT_14cb420d0 == 0) {
      local_78 = 0xffffffff;
    }
    else {
      local_78 = FUN_14005ac26(&DAT_14cb420d0);
    }
    local_70 = 0;
    uStack_68 = 0;
    local_98 = 0;
    (**(code **)(*param_2 + 0x10))(param_2,&local_80,0,1);
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    FUN_1446ddc76(&local_88,"User.WorldSpaceSize",1);
    if (DAT_14cb42140 == 0) {
      local_78 = 0xffffffff;
    }
    else {
      local_78 = FUN_14005ac26(&DAT_14cb42140);
    }
    local_80 = local_88;
    local_70 = 0;
    uStack_68 = 0;
    local_98 = 0;
    uVar5 = CONCAT71((int7)((ulonglong)local_88 >> 8),1);
    (**(code **)(*param_2 + 0x10))(param_2,&local_80,0,1);
    if (local_70 != 0) {
      FUN_1400020a8();
    }
  }
  iVar1 = *(int *)(param_1 + 0xb0);
  if ((longlong)iVar1 != 0) {
    lVar8 = *(longlong *)(param_1 + 0xa8);
    lVar7 = 0;
    do {
      lVar2 = *(longlong *)(lVar8 + lVar7);
      if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x35) & 3) == 1)) {
        local_78 = *(undefined4 *)(lVar2 + 0x28);
        local_80 = *(undefined8 *)(lVar2 + 0x20);
        local_70 = 0;
        uStack_68 = 0;
        local_98 = 0;
        uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
        (**(code **)(*param_2 + 0x10))(param_2,&local_80,0,1);
        if (local_70 != 0) {
          FUN_1400020a8();
        }
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar1 * 8 != lVar7);
  }
  iVar1 = *(int *)(param_1 + 0x4d0);
  if ((longlong)iVar1 != 0) {
    lVar8 = *(longlong *)(param_1 + 0x4c8);
    lVar7 = 0;
    uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
    do {
      local_78 = *(undefined4 *)(lVar8 + 0x1c + lVar7);
      local_80 = *(undefined8 *)(lVar8 + 0x14 + lVar7);
      local_70 = 0;
      uStack_68 = 0;
      local_98 = 0;
      (**(code **)(*param_2 + 0x10))(param_2,&local_80,0,1);
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      lVar7 = lVar7 + 0x2c;
    } while ((longlong)iVar1 * 0x2c - lVar7 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0xc0) != 0) {
    lVar8 = (longlong)*(int *)(param_1 + 0xc0) << 7;
    puVar6 = (undefined4 *)(*(longlong *)(param_1 + 0xb8) + 0x10);
    do {
      if ((*(longlong *)(puVar6 + -2) != 0) &&
         (plVar4 = (longlong *)FUN_144741050(puVar6), *plVar4 != 0)) {
        local_78 = *puVar6;
        local_80 = *(undefined8 *)(puVar6 + -2);
        local_70 = 0;
        uStack_68 = 0;
        local_98 = 0;
        uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
        (**(code **)(*param_2 + 0x10))(param_2,&local_80,0,1);
        if (local_70 != 0) {
          FUN_1400020a8();
        }
      }
      puVar6 = puVar6 + 0x20;
      lVar8 = lVar8 + -0x80;
    } while (lVar8 != 0);
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffff01;
}



// FUNCTION 144aeec4e FUN_144aeec4e body=1389 status=ok
// SIG undefined FUN_144aeec4e(void)

void FUN_144aeec4e(longlong param_1,undefined8 param_2,longlong *param_3,int *param_4)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  longlong lVar6;
  undefined1 uVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  char cVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined1 uVar19;
  int iVar20;
  undefined1 auStack_158 [44];
  int local_12c;
  int local_128;
  int local_124;
  undefined8 local_120;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined4 uStack_d0;
  undefined1 auStack_cc [52];
  undefined8 local_98;
  longlong local_90 [2];
  undefined8 *local_80;
  int6 iStack_78;
  undefined2 uStack_72;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined1 uStack_4b;
  undefined1 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = (undefined8 *)0x0;
  _iStack_78 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0xffffffff;
  local_4c = 0xff;
  uStack_4b = 0;
  iVar8 = 0;
  local_4a = 0;
  lVar12 = *(longlong *)(**(longlong **)(param_1 + 0x20) + (longlong)*param_4 * 8);
  local_108 = lVar12 + 0x118;
  uStack_100 = CONCAT26(3,(uint6)*(byte *)(lVar12 + 0x148) << 0x28);
  local_70 = *(undefined8 *)(lVar12 + 0x130);
  uStack_68 = *(undefined8 *)(lVar12 + 0xd8);
  cVar2 = *(char *)(lVar12 + 0x111);
  local_f8 = lVar12 + 0xa0;
  cVar5 = cVar2 * '\b' + '\b';
  cVar14 = (cVar2 != '\0') * '\t' + '\x05';
  uStack_f0 = CONCAT17(4,(uint7)CONCAT11(cVar14,cVar5) << 0x28);
  uStack_e0 = CONCAT17(4,(uint7)CONCAT12(cVar14,CONCAT11(cVar5,cVar2 * '\x04' + '\x04')) << 0x20);
  local_98 = 0x400000000;
  local_120 = param_2;
  local_e8 = local_f8;
  FUN_14472d7c8(&local_d8);
  iVar17 = *(int *)(lVar12 + 0x108);
  uStack_4b = (char)iVar17;
  local_60 = *(undefined8 *)(lVar12 + 0xe8);
  bVar4 = *(byte *)(lVar12 + 0x110);
  iVar20 = 4;
  if (iVar17 < 4) {
    iVar20 = iVar17;
  }
  uVar19 = (undefined1)(iVar17 << (bVar4 & 0x1f | 2));
  if (1 < iVar17) {
    iVar17 = iVar20 + -1;
    lVar10 = lVar12 + 0xb8;
    iVar15 = (uint)(bVar4 == 0) * 9 + 4;
    iVar8 = 0;
    do {
      iVar16 = iVar8 << (bVar4 & 0x1f | 2);
      lVar11 = (longlong)(int)local_98;
      uVar3 = (int)local_98 + 1;
      local_98 = CONCAT44(local_98._4_4_,uVar3);
      if (local_98._4_4_ < uVar3) {
        local_12c = iVar16;
        local_128 = iVar15;
        local_124 = iVar17;
        local_118 = lVar11;
        local_110 = lVar10;
        FUN_14472d7dc();
        lVar11 = local_118;
        lVar10 = local_110;
        iVar16 = local_12c;
        iVar17 = local_124;
        iVar15 = local_128;
      }
      lVar6 = lVar11 * 0x10;
      (&local_d8)[lVar11 * 2] = lVar10;
      (&uStack_d0)[lVar11 * 4] = 0;
      auStack_cc[lVar6] = (char)iVar16;
      auStack_cc[lVar6 + 1] = uVar19;
      auStack_cc[lVar6 + 2] = (char)iVar15;
      auStack_cc[lVar6 + 3] = 4;
      iVar8 = iVar8 + 2;
    } while (iVar8 < iVar17);
  }
  if (iVar8 < iVar20) {
    uVar7 = 0xc;
    if (bVar4 != 0) {
      uVar7 = 2;
    }
    lVar10 = (longlong)(int)local_98;
    uVar3 = (int)local_98 + 1;
    local_98 = CONCAT44(local_98._4_4_,uVar3);
    if (local_98._4_4_ < uVar3) {
      FUN_14472d7dc();
    }
    lVar11 = lVar10 * 0x10;
    (&local_d8)[lVar10 * 2] = lVar12 + 0xb8;
    (&uStack_d0)[lVar10 * 4] = 0;
    auStack_cc[lVar11] = (char)(iVar8 << (bVar4 & 0x1f | 2));
    auStack_cc[lVar11 + 1] = uVar19;
    auStack_cc[lVar11 + 2] = uVar7;
    auStack_cc[lVar11 + 3] = 4;
  }
  if (*(int *)(lVar12 + 0x18c) == 0) {
    local_80 = &DAT_14ca94d98;
    local_50 = 0;
    puVar18 = &DAT_14ca94db0;
    bVar4 = 0;
  }
  else {
    local_80 = (undefined8 *)(lVar12 + 0x158);
    bVar4 = *(byte *)(lVar12 + 0x188);
    puVar18 = (undefined8 *)(lVar12 + 0x178);
    local_50 = 0xffffffff;
  }
  uStack_58 = *puVar18;
  _iStack_78 = CONCAT26(0x408,(uint6)bVar4 << 0x28);
  *(undefined4 *)(param_3 + 0x2a) = (undefined4)local_e8;
  *(undefined4 *)((longlong)param_3 + 0x154) = local_e8._4_4_;
  *(undefined4 *)(param_3 + 0x2b) = (undefined4)uStack_e0;
  *(undefined4 *)((longlong)param_3 + 0x15c) = uStack_e0._4_4_;
  *(undefined4 *)(param_3 + 0x28) = (undefined4)local_f8;
  *(undefined4 *)((longlong)param_3 + 0x144) = local_f8._4_4_;
  *(undefined4 *)(param_3 + 0x29) = (undefined4)uStack_f0;
  *(undefined4 *)((longlong)param_3 + 0x14c) = uStack_f0._4_4_;
  *(undefined4 *)(param_3 + 0x26) = (undefined4)local_108;
  *(undefined4 *)((longlong)param_3 + 0x134) = local_108._4_4_;
  *(undefined4 *)(param_3 + 0x27) = (undefined4)uStack_100;
  *(undefined4 *)((longlong)param_3 + 0x13c) = uStack_100._4_4_;
  if (param_3 + 0x26 != &local_108) {
    iVar17 = (int)local_98;
    lVar12 = (longlong)(int)local_98;
    *(int *)(param_3 + 0x34) = (int)local_98;
    if ((int)local_98 == 0 && *(int *)((longlong)param_3 + 0x1a4) == 0) {
      *(undefined4 *)((longlong)param_3 + 0x1a4) = 4;
    }
    else {
      FUN_144780848(param_3 + 0x2c,local_98 & 0xffffffff);
      if (iVar17 != 0) {
        memcpy(param_3 + 0x2c,&local_d8,lVar12 << 4);
      }
    }
  }
  plVar9 = local_90;
  plVar13 = param_3 + 0x35;
  for (lVar12 = 8; lVar12 != 0; lVar12 = lVar12 + -1) {
    *plVar13 = *plVar9;
    plVar9 = plVar9 + 1;
    plVar13 = plVar13 + 1;
  }
  *(uint *)((longlong)param_3 + 0x1eb) =
       CONCAT13(local_4a,CONCAT12(uStack_4b,CONCAT11(local_4c,local_50._3_1_)));
  *(undefined4 *)(param_3 + 0x3d) = local_50;
  if (((int)param_3[1] != -1) && (DAT_14ca84d88 == '\x01')) {
    if (*(code **)(*param_3 + 0x10) == FUN_144846d14) {
      lVar12 = param_3[0x22];
      if (lVar12 != 0) {
        param_3[0x22] = 0;
        LOCK();
        puVar1 = (uint *)(lVar12 + 8);
        uVar3 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar3 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
      lVar12 = param_3[0x23];
      if (lVar12 != 0) {
        param_3[0x23] = 0;
        LOCK();
        puVar1 = (uint *)(lVar12 + 8);
        uVar3 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar3 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
      lVar12 = param_3[0x24];
      if (lVar12 != 0) {
        param_3[0x24] = 0;
        LOCK();
        puVar1 = (uint *)(lVar12 + 8);
        uVar3 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar3 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
      *(undefined4 *)(param_3 + 0x13) = 0;
      if (*(int *)((longlong)param_3 + 0x9c) != 0) {
        FUN_14472574a(param_3 + 2,0);
      }
      *(undefined4 *)(param_3 + 0x19) = 0;
      if (*(int *)((longlong)param_3 + 0xcc) != 0) {
        FUN_144725820(param_3 + 0x14,0);
      }
      *(undefined4 *)(param_3 + 0x21) = 0;
      if (*(int *)((longlong)param_3 + 0x10c) != 0) {
        FUN_1447258e4(param_3 + 0x1a,0);
      }
    }
    else {
      (**(code **)(*param_3 + 0x10))(param_3);
    }
    if (*(code **)(*param_3 + 8) == FUN_1447fd290) {
      FUN_1447fd290(param_3,local_120);
    }
    else {
      (**(code **)(*param_3 + 8))(param_3,local_120);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144aef1bc FUN_144aef1bc body=354 status=ok
// SIG undefined FUN_144aef1bc(void)

void FUN_144aef1bc(longlong param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*(longlong *)(param_1 + 0x288) != 0) {
      LOCK();
      puVar1 = (uint *)(*(longlong *)(param_1 + 0x288) + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    if (*(longlong *)(param_1 + 0x38) != 0) {
      LOCK();
      puVar1 = (uint *)(*(longlong *)(param_1 + 0x38) + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    lVar4 = *(longlong *)(param_1 + 0x20);
    if (lVar4 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar4 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar4 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar4;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar8 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar8) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar8);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar8 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar8) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar8);
          }
        }
      }
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
      LOCK();
      puVar1 = (uint *)(*(longlong *)(param_1 + 0x18) + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    if (*(longlong *)(param_1 + 0x10) != 0) {
      LOCK();
      puVar1 = (uint *)(*(longlong *)(param_1 + 0x10) + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    param_1 = param_1 + 0x2b0;
  }
  return;
}



// FUNCTION 144aef31e FUN_144aef31e body=372 status=ok
// SIG undefined FUN_144aef31e(void)

void FUN_144aef31e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar6;
  
  uVar3 = *(uint *)(param_1 + 8);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar5 = 4;
    if (4 < uVar3) {
      uVar5 = uVar3;
    }
    lVar6 = (longlong)(int)uVar5;
  }
  else {
    lVar6 = ((ulonglong)((longlong)(int)uVar3 * 3) >> 3) + (longlong)(int)uVar3 + 0x10;
  }
  uVar7 = lVar6 * 0xa8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar1 = uVar7 + 0xf;
      if (uVar7 < 0x7ff1) {
        uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
      }
      else {
        if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
          uVar9 = 0x32;
          if (0x32 < bVar2) {
            uVar9 = (ulonglong)bVar2;
          }
          uVar11 = 0x32 - (ulonglong)bVar2;
          do {
            uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar11 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar11 & 0xffffffff] & 0xf) == 0) goto LAB_144aef3a6;
            lVar6 = uVar9 + 1 + uVar11;
            uVar11 = uVar11 - 1;
          } while (lVar6 != 0x33);
        }
        uVar7 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar7 = (ulonglong)DAT_14c841df8;
        }
        uVar7 = -uVar7 & ((uVar1 & 0xfffffffffffffff0) + uVar7) - 1;
      }
    }
    else {
      uVar7 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar7,8);
    }
  }
LAB_144aef3a6:
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar7 >> 3;
  iVar8 = SUB164(auVar4 * ZEXT816(0xc30c30c30c30c31),8);
  iVar10 = 0x7fffffff;
  if ((int)uVar3 <= iVar8) {
    iVar10 = iVar8;
  }
  *(int *)(param_1 + 0xc) = iVar10;
  FUN_1446f8d3c(param_1,param_2,iVar10,0xa8,8);
  return;
}



// FUNCTION 144aef493 FUN_144aef493 body=533 status=ok
// SIG undefined FUN_144aef493(void)

void FUN_144aef493(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  void *_Src;
  uint uVar6;
  undefined8 *puVar7;
  void *pvVar8;
  undefined8 *puVar9;
  size_t _Size;
  longlong lVar10;
  ulonglong uVar11;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar10 = *param_2;
    uVar5 = *(ulonglong *)(lVar10 + 0x10);
    uVar11 = lVar10 + 0x10 + ((longlong)uVar5 >> 0x18);
    if ((uVar5 & 1) == 0) {
      uVar11 = uVar5;
    }
    iVar3 = *(int *)(lVar10 + 0x18);
    if ((longlong)iVar3 != 0) {
      lVar10 = 0;
      do {
        uVar6 = (uint)*(byte *)(uVar11 + 3 + lVar10);
        if ((uVar6 < 0x13) && ((0x44080U >> (uVar6 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar11 + 2 + lVar10);
          iVar4 = (int)param_1[0x13];
          *(uint *)(param_1 + 0x13) = iVar4 + 1U;
          if (*(uint *)((longlong)param_1 + 0x9c) < iVar4 + 1U) {
            FUN_1447477d8(puVar1,iVar4);
          }
          uVar5 = *puVar1;
          *(ushort *)(uVar5 + (longlong)iVar4 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar5 + 2 + (longlong)iVar4 * 4) = 1;
        }
        lVar10 = lVar10 + 4;
      } while ((longlong)iVar3 * 4 != lVar10);
    }
    uVar5 = param_1[0x13];
    lVar10 = (longlong)(int)uVar5;
    if (0 < lVar10) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar9 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar7 = puVar9 + 5;
        if ((undefined8 *)param_1[1] < puVar7) {
          FUN_140023dd8(param_1,0x30);
          puVar9 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar7 = puVar9 + 5;
        }
        *param_1 = (ulonglong)puVar7;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar9;
        param_1[6] = (ulonglong)(puVar9 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar8 = (void *)((longlong)_Dst + lVar10 * 4);
        _Size = lVar10 * 4;
        if ((void *)param_1[1] < pvVar8) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar8 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar8;
        memcpy(_Dst,_Src,_Size);
        puVar9[1] = 0;
        *puVar9 = &PTR_FUN_14a1fbc38;
        puVar9[2] = param_3;
        puVar9[3] = _Dst;
        *(int *)(puVar9 + 4) = (int)uVar5;
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



// FUNCTION 144aef6a8 FUN_144aef6a8 body=909 status=ok
// SIG undefined FUN_144aef6a8(void)

void FUN_144aef6a8(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  void *_Src;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  void *pvVar13;
  longlong lVar14;
  longlong lVar15;
  size_t _Size;
  ulonglong uVar16;
  void *_Dst;
  
  if (*param_2 == 0) {
    uVar9 = 0;
  }
  else {
    lVar14 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar14 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar14,1);
    }
  }
  uVar10 = FUN_140029432(param_1,uVar9,0);
  param_1[0x37] = uVar9;
  puVar11 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar11 + 3;
  if ((undefined8 *)param_1[1] < puVar12) {
    FUN_140023dd8(param_1,0x20);
    puVar11 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar11 + 3;
  }
  *param_1 = (ulonglong)puVar12;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar11;
  param_1[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_14a37d340;
  puVar11[2] = uVar10;
  FUN_14480864a(param_1,uVar9,*param_2,param_3,param_4);
  uVar3 = param_5[2];
  uVar4 = *param_5;
  uVar5 = param_5[1];
  puVar11 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar11 + 4;
  if ((undefined8 *)param_1[1] < puVar12) {
    FUN_140023dd8(param_1,0x28);
    puVar11 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar11 + 4;
  }
  *param_1 = (ulonglong)puVar12;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar11;
  param_1[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar11 + 2) = uVar4;
  *(undefined4 *)((longlong)puVar11 + 0x14) = uVar5;
  *(undefined4 *)(puVar11 + 3) = uVar3;
  if (*param_2 == 0) {
    lVar14 = 0;
  }
  else {
    lVar15 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar14 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar15 * 8);
    if (lVar14 == 0) {
      lVar14 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar15,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar15 = *param_2;
    uVar9 = *(ulonglong *)(lVar15 + 0x10);
    uVar16 = lVar15 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar16 = uVar9;
    }
    iVar6 = *(int *)(lVar15 + 0x18);
    if ((longlong)iVar6 != 0) {
      lVar15 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar16 + 3 + lVar15);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar16 + 2 + lVar15);
          iVar7 = (int)param_1[0x13];
          *(uint *)(param_1 + 0x13) = iVar7 + 1U;
          if (*(uint *)((longlong)param_1 + 0x9c) < iVar7 + 1U) {
            FUN_1447477d8(puVar1,iVar7);
          }
          uVar9 = *puVar1;
          *(ushort *)(uVar9 + (longlong)iVar7 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar7 * 4) = 1;
        }
        lVar15 = lVar15 + 4;
      } while ((longlong)iVar6 * 4 != lVar15);
    }
    uVar9 = param_1[0x13];
    lVar15 = (longlong)(int)uVar9;
    if (0 < lVar15) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar11 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar12 = puVar11 + 5;
        if ((undefined8 *)param_1[1] < puVar12) {
          FUN_140023dd8(param_1,0x30);
          puVar11 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar12 = puVar11 + 5;
        }
        *param_1 = (ulonglong)puVar12;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar11;
        param_1[6] = (ulonglong)(puVar11 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar13 = (void *)((longlong)_Dst + lVar15 * 4);
        _Size = lVar15 * 4;
        if ((void *)param_1[1] < pvVar13) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar13 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar13;
        memcpy(_Dst,_Src,_Size);
        puVar11[1] = 0;
        *puVar11 = &PTR_FUN_14a1fbc38;
        puVar11[2] = lVar14;
        puVar11[3] = _Dst;
        *(int *)(puVar11 + 4) = (int)uVar9;
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



// FUNCTION 144aefa36 FUN_144aefa36 body=322 status=ok
// SIG undefined FUN_144aefa36(void)

void FUN_144aefa36(longlong *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  int *piVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78 [2];
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(uint *)(param_1 + 0x10) & 8) != 0) {
    uVar8 = *(uint *)(param_1 + 0x10) & 0xfffffff7;
    *(uint *)(param_1 + 0x10) = uVar8;
    lVar7 = param_1[0xb];
    if ((longlong)(int)lVar7 != 0) {
      lVar5 = param_1[10];
      lVar11 = 0;
      do {
        local_80 = *(undefined8 *)(lVar5 + lVar11);
        local_78[0] = FUN_144830b78(local_78,&DAT_14cb42130);
        local_70 = 0;
        uStack_68 = 0;
        piVar9 = (int *)(**(code **)(*param_1 + 0x58))(param_1,&local_80,0);
        if ((piVar9 != (int *)0x0) && (lVar10 = (longlong)*piVar9, lVar10 != -1)) {
          dVar1 = *(double *)(lVar5 + 0x10 + lVar11);
          dVar2 = *(double *)(lVar5 + 0x18 + lVar11);
          dVar3 = param_2[2];
          dVar4 = param_2[1];
          lVar6 = param_1[4];
          *(float *)(lVar6 + lVar10) = (float)(*(double *)(lVar5 + 8 + lVar11) - *param_2);
          *(float *)(lVar6 + 4 + lVar10) = (float)(dVar1 - dVar4);
          *(float *)(lVar6 + 8 + lVar10) = (float)(dVar2 - dVar3);
        }
        if (local_70 != 0) {
          FUN_1400020a8();
        }
        lVar11 = lVar11 + 0x20;
      } while ((longlong)(int)lVar7 * 0x20 != lVar11);
      uVar8 = *(uint *)(param_1 + 0x10);
    }
    *(uint *)(param_1 + 0x10) = uVar8 | 1;
  }
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144aefb7a FUN_144aefb7a body=658 status=ok
// SIG undefined FUN_144aefb7a(void)

void FUN_144aefb7a(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_d8 [32];
  int **local_b8;
  undefined8 local_b0;
  int *local_a0;
  uint local_98;
  longlong local_90 [2];
  undefined8 local_80;
  longlong local_78;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_50;
  uint local_48;
  uint local_44;
  uint local_40;
  int local_38 [2];
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(char *)(param_1 + 0x1c4) != '\0') {
    *(longlong *)(param_2 + 0x30) = DAT_14cb427b0;
    *(longlong *)(param_2 + 0x38) = DAT_14cb429b0;
    *(longlong *)(param_2 + 0x40) = DAT_14cb428b0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined4 *)(param_2 + 0x50) = 0;
    goto LAB_144aefc34;
  }
  if (*(char *)(param_1 + 0xf4) != '\0') {
    lVar2 = *(longlong *)(param_2 + 0x10);
    lVar6 = *(longlong *)(lVar2 + 0x70);
    if (*(longlong *)(lVar2 + 0x70) == 0) {
      lVar6 = DAT_14cb427b0;
    }
    *(longlong *)(param_2 + 0x30) = lVar6;
    lVar6 = *(longlong *)(lVar2 + 0x100);
    if (*(longlong *)(lVar2 + 0x100) == 0) {
      lVar6 = DAT_14cb429b0;
    }
    *(longlong *)(param_2 + 0x38) = lVar6;
    lVar6 = *(longlong *)(lVar2 + 0xa0);
    if (*(longlong *)(lVar2 + 0xa0) == 0) {
      lVar6 = DAT_14cb428b0;
    }
    *(longlong *)(param_2 + 0x40) = lVar6;
    *(uint *)(param_2 + 0x48) = *(uint *)(lVar2 + 0x128) >> 2;
    *(uint *)(param_2 + 0x4c) = *(uint *)(lVar2 + 0x130) >> 1;
    *(uint *)(param_2 + 0x50) = *(uint *)(lVar2 + 300) >> 2;
    *(undefined4 *)(param_2 + 0x90) = *(undefined4 *)(param_1 + 0x200);
    *(undefined4 *)(param_2 + 0x94) = *(undefined4 *)(param_1 + 0x204);
    goto LAB_144aefc34;
  }
  local_30 = 0;
  local_28 = 0x200000000;
  if ((*(char *)(param_2 + 0x1d) == '\0') && (*(char *)(param_2 + 0x18) != '\x01')) {
    local_98 = 0;
  }
  else {
    if ((*(char *)(param_2 + 0x1b) == '\0') && (*(char *)(param_2 + 0x18) != '\x01')) {
      *(undefined4 *)(param_2 + 0x90) = *(undefined4 *)(param_1 + 0x200);
      uVar4 = *(uint *)(param_1 + 0x204);
      uVar3 = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x200);
      bVar7 = iVar1 != -1;
      if (bVar7) {
        local_28 = 0x200000001;
        *(undefined4 *)(param_2 + 0x90) = 0;
        local_38[0] = iVar1;
      }
      local_98 = (uint)bVar7;
      if (*(int *)(param_1 + 0x204) == -1) goto LAB_144aefcb7;
      local_28 = CONCAT44(local_28._4_4_,bVar7 + 1);
      local_38[bVar7] = *(int *)(param_1 + 0x204);
      uVar3 = bVar7 + 1;
      uVar4 = local_98;
    }
    local_98 = uVar3;
    *(uint *)(param_2 + 0x94) = uVar4;
  }
LAB_144aefcb7:
  local_b0 = *(undefined8 *)(param_2 + 0x10);
  local_a0 = local_38;
  local_b8 = &local_a0;
  FUN_1448714fe(local_90,local_b8,param_3,*(undefined8 *)(param_2 + 0x20));
  puVar5 = &DAT_14cb427b0;
  if (local_90[0] != 0) {
    puVar5 = &local_80;
  }
  *(undefined8 *)(param_2 + 0x30) = *puVar5;
  puVar5 = &DAT_14cb429b0;
  if (local_78 != 0) {
    puVar5 = &local_68;
  }
  *(undefined8 *)(param_2 + 0x38) = *puVar5;
  puVar5 = &DAT_14cb428b0;
  if (local_60 != 0) {
    puVar5 = &local_50;
  }
  *(undefined8 *)(param_2 + 0x40) = *puVar5;
  *(uint *)(param_2 + 0x48) = local_48 >> 2;
  *(uint *)(param_2 + 0x4c) = local_44 >> 1;
  *(uint *)(param_2 + 0x50) = local_40 >> 2;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
LAB_144aefc34:
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144aefe0e FUN_144aefe0e body=957 status=ok
// SIG undefined FUN_144aefe0e(void)

void FUN_144aefe0e(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong *param_5)

{
  float fVar1;
  float fVar2;
  double dVar3;
  byte bVar4;
  longlong *plVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong local_108;
  longlong lStack_100;
  longlong local_f8;
  longlong lStack_f0;
  longlong local_e8;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_c0 = *(undefined4 *)(param_1 + 0x1dc);
  local_c8 = *(undefined8 *)(param_1 + 0x1d4);
  local_d0 = *(undefined4 *)((longlong)param_5 + 0x44);
  local_d8 = *(undefined8 *)((longlong)param_5 + 0x3c);
  plVar5 = (longlong *)*param_5;
  if (*(code **)(*plVar5 + 0x10) == (code *)&LAB_144b366cc) {
    local_e8 = plVar5[0xc];
    local_118 = (undefined4)plVar5[6];
    uStack_114 = *(undefined4 *)((longlong)plVar5 + 0x34);
    uStack_110 = (undefined4)plVar5[7];
    uStack_10c = *(undefined4 *)((longlong)plVar5 + 0x3c);
    local_108 = plVar5[8];
    lStack_100 = plVar5[9];
    local_f8 = plVar5[10];
    lStack_f0 = plVar5[0xb];
  }
  else {
    (**(code **)(*plVar5 + 0x10))(plVar5,&local_118);
  }
  FUN_1400e4e82(&local_b8,&local_118,&local_d8,&local_c8);
  dVar6 = (local_a8 + local_90) * 0.5;
  dVar7 = (local_b0 + local_98) * 0.5;
  dVar8 = (local_b8 + local_a0) * 0.5;
  *(double *)(param_2 + 200) = dVar8;
  *(double *)(param_2 + 0xd0) = dVar7;
  *(double *)(param_2 + 0xd8) = dVar6;
  dVar10 = (local_90 - local_a8) * 0.5;
  dVar14 = (local_98 - local_b0) * 0.5;
  dVar13 = (local_a0 - local_b8) * 0.5;
  *(double *)(param_2 + 0xe0) = SQRT(dVar10 * dVar10 + dVar13 * dVar13 + dVar14 * dVar14);
  if ((char)param_5[7] == '\0') {
    *(undefined8 *)(param_2 + 0xc0) = DAT_14c8464f0;
    uVar12 = DAT_14c8464e8;
    *(undefined8 *)(param_2 + 0xb0) = DAT_14c8464e0;
    *(undefined8 *)(param_2 + 0xb8) = uVar12;
    fVar1 = *(float *)((longlong)param_5 + 0x34);
    fVar2 = *(float *)(param_5 + 6);
    *(double *)(param_2 + 200) = dVar8 + (double)*(float *)((longlong)param_5 + 0x2c);
    *(double *)(param_2 + 0xd0) = dVar7 + (double)fVar2;
    *(double *)(param_2 + 0xd8) = dVar6 + (double)fVar1;
  }
  else {
    dVar7 = (double)*(float *)((longlong)param_5 + 0x34);
    dVar8 = (double)*(float *)(param_5 + 6);
    dVar6 = (double)*(float *)((longlong)param_5 + 0x2c);
    *(double *)(param_2 + 0xb0) = dVar6;
    *(double *)(param_2 + 0xb8) = dVar8;
    *(double *)(param_2 + 0xc0) = dVar7;
    if (((char)param_5[7] == '\x03') ||
       (((char)param_5[7] == '\x01' && ((*(uint *)(param_1 + 0xf0) & 1) != 0)))) {
      dVar10 = *(double *)(param_4 + 0x170);
      dVar13 = *(double *)(param_4 + 0x150);
      dVar14 = *(double *)(param_4 + 0x130);
      dVar11 = *(double *)(param_4 + 0x168) * 0.0 +
               dVar7 * *(double *)(param_4 + 0x148) +
               dVar8 * *(double *)(param_4 + 0x128) + dVar6 * *(double *)(param_4 + 0x108);
      dVar3 = *(double *)(param_4 + 0x110);
      auVar9._8_4_ = SUB84(dVar11,0);
      auVar9._0_8_ = *(double *)(param_4 + 0x160) * 0.0 +
                     dVar7 * *(double *)(param_4 + 0x140) +
                     dVar8 * *(double *)(param_4 + 0x120) + dVar6 * *(double *)(param_4 + 0x100);
      auVar9._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
      *(undefined1 (*) [16])(param_2 + 0xb0) = auVar9;
      *(double *)(param_2 + 0xc0) = dVar6 * dVar3 + dVar8 * dVar14 + dVar7 * dVar13 + dVar10 * 0.0;
    }
  }
  if ((*(byte *)((longlong)&DAT_14ca814d0 +
                (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_1 + 0xf8) * 2) *
                0x3c + 6) & 0x10) == 0) {
    *(undefined4 *)(param_2 + 100) = 0xffffffff;
    *(undefined4 *)(param_2 + 0x68) = 0xffffffff;
    *(undefined4 *)(param_2 + 0x6c) = 0xffffffff;
    *(undefined4 *)(param_2 + 0x70) = 0xffffffff;
    *(undefined8 *)(param_2 + 0x78) = DAT_14cb427f0;
    uVar12 = DAT_14cb42830;
    *(undefined8 *)(param_2 + 0x80) = DAT_14cb42830;
  }
  else {
    bVar4 = *(byte *)(param_3 + 0x1ed);
    *(undefined4 *)(param_2 + 100) = *(undefined4 *)(param_3 + 0x1e8);
    *(uint *)(param_2 + 0x68) = (uint)bVar4;
    *(undefined8 *)(param_2 + 0x6c) = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(param_3 + 0x1d8);
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(param_3 + 0x1d0);
    uVar12 = *(undefined8 *)(param_3 + 0x1e0);
  }
  *(undefined8 *)(param_2 + 0x88) = uVar12;
  if ((local_80 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144af01cc FUN_144af01cc body=1453 status=ok
// SIG undefined FUN_144af01cc(void)

longlong * FUN_144af01cc(longlong param_1,longlong *param_2,longlong param_3,void *param_4)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_2e8 [32];
  wchar_t *local_2c8;
  wchar_t *local_2c0;
  undefined8 local_2b8;
  char *local_2b0;
  undefined4 local_2a8;
  undefined4 local_2a0;
  longlong *local_298;
  undefined1 local_290;
  undefined8 local_288;
  undefined1 local_280;
  longlong local_278 [2];
  undefined1 local_268 [336];
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  uint local_d0;
  uint local_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint local_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  uint local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  memset(&local_118,0,0xe0);
  memcpy(local_268,param_4,0x150);
  uVar5 = *(uint *)(param_1 + 0x214);
  local_e8 = *(float *)(param_1 + 0x1cc);
  local_e4 = *(float *)(param_1 + 0x1d0);
  local_dc = 1.0 / local_e4;
  local_e0 = 1.0 / local_e8;
  local_48 = *(uint *)(param_1 + 0x1c8) >> 0xb & 1;
  local_98 = &DAT_3f8000003f800000;
  puStack_90 = &DAT_3f8000003f800000;
  local_88 = &DAT_3f8000003f800000;
  puStack_80 = &DAT_3f8000003f800000;
  local_78 = &DAT_3f8000003f800000;
  puStack_70 = &DAT_3f8000003f800000;
  local_68 = &DAT_3f8000003f800000;
  puStack_60 = &DAT_3f8000003f800000;
  local_58 = &DAT_3f8000003f800000;
  puStack_50 = &DAT_3f8000003f800000;
  if (*(char *)(param_1 + 0x1c4) == '\0') {
    lVar4 = *(longlong *)(*(longlong *)(param_3 + 0x20) + 0x10);
    uStack_c0 = (uint)*(ushort *)(lVar4 + 0x12);
    if (uStack_c0 == 0xffff) {
      uStack_c0 = 0xffffffff;
    }
    uStack_c0 = (uint)*(byte *)(lVar4 + 0x17) << 0x1f | uStack_c0;
    uStack_c4 = (uint)*(ushort *)(lVar4 + 0x2a);
    if (uStack_c4 == 0xffff) {
      uStack_c4 = 0xffffffff;
    }
    uStack_c4 = (uint)*(byte *)(lVar4 + 0x2f) << 0x1f | uStack_c4;
    local_cc = (uint)*(ushort *)(lVar4 + 0x32);
    if (local_cc == 0xffff) {
      local_cc = 0xffffffff;
    }
    local_cc = (uint)*(byte *)(lVar4 + 0x37) << 0x1f | local_cc;
    uStack_c8 = (uint)*(ushort *)(lVar4 + 0x42);
    if (uStack_c8 == 0xffff) {
      uStack_c8 = 0xffffffff;
    }
    uStack_c8 = (uint)*(byte *)(lVar4 + 0x47) << 0x1f | uStack_c8;
    local_bc = (uint)*(ushort *)(lVar4 + 0x4a);
    if (local_bc == 0xffff) {
      local_bc = 0xffffffff;
    }
    local_bc = (uint)*(byte *)(lVar4 + 0x4f) << 0x1f | local_bc;
    uStack_b8 = (uint)*(ushort *)(lVar4 + 0x52);
    if (uStack_b8 == 0xffff) {
      uStack_b8 = 0xffffffff;
    }
    uStack_b8 = (uint)*(byte *)(lVar4 + 0x57) << 0x1f | uStack_b8;
    uStack_b4 = (uint)*(ushort *)(lVar4 + 0x5a);
    if (uStack_b4 == 0xffff) {
      uStack_b4 = 0xffffffff;
    }
    uStack_b4 = (uint)*(byte *)(lVar4 + 0x5f) << 0x1f | uStack_b4;
    uStack_b0 = (uint)*(ushort *)(lVar4 + 0x62);
    if (*(ushort *)(lVar4 + 0x62) == 0xffff) {
      uStack_b0 = 0xffffffff;
    }
    uStack_b0 = (uint)*(byte *)(lVar4 + 0x67) << 0x1f | uStack_b0;
  }
  else if (*(char *)(param_1 + 0x1c4) == '\x01') {
    local_bc = 0xffffffff;
    uStack_b8 = 0xffffffff;
    uStack_b4 = 0xffffffff;
    uStack_b0 = 0xffffffff;
    local_cc = 0xffffffff;
    uStack_c8 = 0xffffffff;
    uStack_c4 = 0xffffffff;
    uStack_c0 = 0xffffffff;
  }
  local_f8 = *(undefined8 *)(param_3 + 100);
  uStack_f0 = *(undefined8 *)(param_3 + 0x6c);
  local_118 = *(undefined8 *)(param_3 + 0x78);
  local_110 = *(undefined8 *)(param_3 + 0x80);
  local_108 = *(undefined8 *)(param_3 + 0x88);
  local_d0 = uVar5;
  if ((*(byte *)(param_1 + 0x26c) & 1) != 0) {
    lVar4 = *(longlong *)(*(longlong *)(param_3 + 8) + 0xa0);
    lVar10 = 0;
    do {
      iVar3 = *(int *)(param_1 + 0x220 + lVar10 * 4);
      lVar9 = (longlong)iVar3;
      if ((-1 < lVar9) && (iVar3 < *(int *)(*(longlong *)(param_3 + 8) + 0xa8))) {
        switch((int)lVar10) {
        case 2:
          local_98 = *(undefined1 **)(lVar4 + lVar9);
          puStack_90 = (undefined1 *)((undefined8 *)(lVar4 + lVar9))[1];
          break;
        case 5:
          local_a4 = *(undefined4 *)(lVar4 + lVar9);
          break;
        case 6:
          local_ac = *(undefined4 *)(lVar4 + lVar9);
          break;
        case 8:
          local_a8 = *(undefined4 *)(lVar4 + lVar9);
          break;
        case 9:
          local_88 = *(undefined1 **)(lVar4 + lVar9);
          puStack_80 = (undefined1 *)((undefined8 *)(lVar4 + lVar9))[1];
          uVar5 = uVar5 | 0xf;
          local_d0 = uVar5;
          break;
        case 10:
          local_78 = *(undefined1 **)(lVar4 + lVar9);
          puStack_70 = (undefined1 *)((undefined8 *)(lVar4 + lVar9))[1];
          uVar5 = uVar5 | 0xf0;
          local_d0 = uVar5;
          break;
        case 0xb:
          local_68 = *(undefined1 **)(lVar4 + lVar9);
          puStack_60 = (undefined1 *)((undefined8 *)(lVar4 + lVar9))[1];
          uVar5 = uVar5 | 0xf00;
          local_d0 = uVar5;
          break;
        case 0xc:
          local_58 = *(undefined1 **)(lVar4 + lVar9);
          puStack_50 = (undefined1 *)((undefined8 *)(lVar4 + lVar9))[1];
          uVar5 = uVar5 | 0xf000;
          local_d0 = uVar5;
        }
      }
      lVar10 = lVar10 + 1;
    } while ((ulonglong)(*(uint *)(param_1 + 0x1c8) >> 8 & 1) * 5 + 0xe != lVar10);
  }
  if (DAT_14c846b14 == '\x01') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c926f30) && (FUN_144b3d300(&DAT_14c926f30), DAT_14c926f30 == -1)) {
      FUN_1413288e0(&DAT_14c926ca8);
      atexit(FUN_1427ac032);
      _Init_thread_footer(&DAT_14c926f30);
    }
    if (*(code **)(DAT_14c926ca8 + 0x28) != (code *)&LAB_144aff468) {
      (**(code **)(DAT_14c926ca8 + 0x28))(&DAT_14c926ca8);
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb2c4e8) && (FUN_144b3d300(&DAT_14cb2c4e8), DAT_14cb2c4e8 == -1)) {
    FUN_1415e0876(local_278);
    local_280 = 0;
    local_288 = 0;
    local_290 = 0;
    local_2b0 = "Unknown";
    local_2b8 = 0;
    local_2c0 = L"NiagaraMeshVF";
    local_2c8 = L"FNiagaraMeshUniformParameters";
    local_2a0 = 0x230;
    local_2a8 = 0x52;
    local_298 = local_278;
    FUN_140b49562(&DAT_14cb2c468,1,1);
    if (local_278[0] != 0) {
      FUN_1400020a8();
    }
    atexit((_func_5014 *)&LAB_1438f5d0d);
    _Init_thread_footer(&DAT_14cb2c4e8);
  }
  local_2c0 = (wchar_t *)CONCAT44(local_2c0._4_4_,1);
  local_2c8 = (wchar_t *)CONCAT44(local_2c8._4_4_,1);
  (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,local_278,local_268,DAT_14cb2c4b0);
  *param_2 = local_278[0];
  if (local_278[0] != 0) {
    LOCK();
    *(int *)(local_278[0] + 8) = *(int *)(local_278[0] + 8) + 1;
    UNLOCK();
    if (local_278[0] != 0) {
      LOCK();
      puVar1 = (uint *)(local_278[0] + 8);
      uVar5 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar5 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_278[0] + 8);
        LOCK();
        uVar5 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar5 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(local_278[0] + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = local_278[0];
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
  if ((local_38 ^ (ulonglong)auStack_2e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144af077a FUN_144af077a body=499 status=ok
// SIG undefined FUN_144af077a(void)

undefined8 * FUN_144af077a(longlong param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong *plVar3;
  uint *puVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  undefined8 *puVar8;
  bool bVar9;
  
  plVar3 = *(longlong **)(param_1 + 0xe8);
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_144af07b5;
  while( true ) {
    FUN_14472e504(puVar1);
    puVar4 = (uint *)*puVar1;
LAB_144af07b5:
    puVar8 = (undefined8 *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
    uVar7 = puVar4[0x12];
    if (puVar8 + 0x44 <= puVar4 + 0x4000) break;
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
      puVar8 = (undefined8 *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
      uVar7 = 0;
      if (puVar8 + 0x44 <= puVar4 + 0x4000) {
        uVar7 = 1;
        goto LAB_144af0831;
      }
    }
  }
  uVar7 = uVar7 + 1;
LAB_144af0831:
  *(undefined8 **)(puVar4 + 0x10) = puVar8 + 0x45;
  puVar4[0x12] = uVar7;
  *(int *)(puVar8 + -1) = ((int)puVar8 + -8) - (int)puVar4;
  *(undefined4 *)((longlong)puVar8 + -4) = 0x220;
  puVar8[1] = 0;
  *puVar8 = &PTR_FUN_14ae0ec38;
  lVar5 = *plVar3;
  do {
    puVar8[1] = lVar5;
    LOCK();
    lVar6 = *plVar3;
    bVar9 = lVar5 == lVar6;
    if (bVar9) {
      *plVar3 = (longlong)puVar8;
      lVar6 = lVar5;
    }
    UNLOCK();
    lVar5 = lVar6;
  } while (!bVar9);
  memset(puVar8 + 4,0,0x1f8);
  puVar8[2] = &PTR_FUN_14ae0ec40;
  *(undefined4 *)(puVar8 + 4) = 0xffffffff;
  *(undefined2 *)((longlong)puVar8 + 0x24) = 0x105;
  puVar8[0x15] = 0;
  *(undefined4 *)((longlong)puVar8 + 0xb4) = 8;
  puVar8[0x1c] = 0x200000000;
  puVar8[0x24] = 0x300000000;
  puVar8[0x25] = 0;
  puVar8[0x26] = 0;
  puVar8[0x27] = 0;
  *(undefined1 *)((longlong)puVar8 + 0x142) = 0xff;
  *(undefined2 *)(puVar8 + 0x28) = 0xffff;
  puVar8[3] = &PTR_FUN_14ae0ec50;
  puVar8[0x29] = 0;
  puVar8[0x2a] = 0;
  puVar8[0x2b] = 0;
  puVar8[0x2c] = 0;
  puVar8[0x2d] = 0;
  puVar8[0x2e] = 0;
  *(undefined4 *)((longlong)puVar8 + 0x1bc) = 4;
  puVar8[0x3e] = 0;
  puVar8[0x3f] = 0;
  puVar8[0x3c] = 0;
  puVar8[0x3d] = 0;
  puVar8[0x3a] = 0;
  puVar8[0x3b] = 0;
  puVar8[0x38] = 0;
  puVar8[0x39] = 0;
  *(undefined4 *)(puVar8 + 0x40) = 0xffffffff;
  *(undefined1 *)((longlong)puVar8 + 0x204) = 0xff;
  *(undefined1 *)((longlong)puVar8 + 0x206) = 0;
  *(undefined1 *)(puVar8 + 0x41) = 1;
  puVar8[0x43] = 0;
  return puVar8 + 2;
}



// FUNCTION 144af096e FUN_144af096e body=607 status=ok
// SIG undefined FUN_144af096e(void)

undefined8 * FUN_144af096e(undefined8 *param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  lVar4 = param_2[2];
  lVar5 = param_1[2];
  if (lVar5 != lVar4) {
    param_1[2] = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    if (lVar5 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar5 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  lVar4 = param_2[3];
  lVar5 = param_1[3];
  if (lVar5 != lVar4) {
    param_1[3] = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    if (lVar5 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar5 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  lVar4 = param_2[4];
  lVar5 = param_1[4];
  if (lVar5 != lVar4) {
    param_1[4] = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    if (lVar5 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar5 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  param_1[5] = param_2[5];
  lVar4 = param_2[7];
  lVar5 = param_1[7];
  if (lVar5 != lVar4) {
    param_1[7] = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    if (lVar5 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar5 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  memcpy(param_1 + 8,param_2 + 8,0xb0);
  if (param_1 != param_2) {
    iVar3 = *(int *)(param_2 + 0x4e);
    *(int *)(param_1 + 0x4e) = iVar3;
    if (iVar3 == 0 && *(int *)((longlong)param_1 + 0x274) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x274) = 0xc;
    }
    else {
      FUN_1447d2040(param_1 + 0x1e,iVar3);
      if (iVar3 != 0) {
        memcpy(param_1 + 0x1e,param_2 + 0x1e,(longlong)iVar3 << 5);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  lVar4 = param_2[0x51];
  lVar5 = param_1[0x51];
  if (lVar5 != lVar4) {
    param_1[0x51] = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    if (lVar5 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar5 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  param_1[0x52] = param_2[0x52];
  *(undefined4 *)(param_1 + 0x53) = *(undefined4 *)(param_2 + 0x53);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  return param_1;
}



// FUNCTION 144af0bce FUN_144af0bce body=318 status=ok
// SIG undefined FUN_144af0bce(void)

void FUN_144af0bce(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  if (*(longlong *)(param_1 + 0x288) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x288) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x38) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x20);
  if (lVar4 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x18) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
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



// FUNCTION 144af0d0c FUN_144af0d0c body=125 status=ok
// SIG undefined FUN_144af0d0c(void)

longlong FUN_144af0d0c(longlong param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14ae0eb58;
  plVar1 = (longlong *)(param_1 + 0x60);
  if (*(int *)(param_1 + 0x68) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_144af0d37;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_144af0d37:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144af0d8a FUN_144af0d8a body=4998 status=ok
// SIG undefined FUN_144af0d8a(void)

longlong *
FUN_144af0d8a(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4,longlong param_5
             ,longlong param_6,longlong param_7)

{
  uint *puVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [12];
  undefined1 auVar14 [16];
  int iVar15;
  longlong *plVar16;
  longlong *plVar17;
  float *pfVar18;
  longlong *plVar19;
  float *pfVar20;
  uint uVar21;
  byte bVar22;
  longlong lVar23;
  longlong *plVar24;
  uint uVar25;
  uint uVar26;
  ulonglong uVar27;
  undefined8 uVar28;
  bool bVar29;
  double dVar30;
  double dVar31;
  float fVar32;
  float fVar33;
  undefined1 auStack_448 [32];
  wchar_t *local_428;
  wchar_t *local_420;
  undefined8 local_418;
  char *local_410;
  undefined4 local_408;
  undefined4 local_400;
  longlong *local_3f8;
  undefined1 local_3f0;
  undefined8 local_3e8;
  undefined1 local_3e0;
  double local_3d8;
  double dStack_3d0;
  longlong *local_3c0;
  double local_3b8;
  undefined8 uStack_3b0;
  double local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  double dStack_390;
  double local_388;
  undefined8 uStack_380;
  double local_378;
  double dStack_370;
  longlong local_368 [2];
  uint local_358 [4];
  ulonglong local_348;
  undefined8 uStack_340;
  undefined4 local_338;
  undefined8 local_330;
  undefined8 local_324;
  float local_318;
  float local_314;
  float local_310;
  float local_30c;
  undefined8 local_308;
  float local_300;
  undefined4 local_2fc;
  float local_2f8;
  float local_2f4;
  float local_2f0;
  float local_2ec;
  undefined4 local_2e8;
  undefined4 local_2dc;
  double local_2d8;
  double local_2d0;
  uint local_2c8;
  uint local_2c4;
  uint local_2c0;
  uint local_2bc;
  uint local_2b8;
  uint local_2b4;
  uint local_2b0;
  uint local_2ac;
  undefined8 local_2a8;
  uint local_2a0;
  undefined1 local_29c [16];
  uint local_28c;
  uint local_288;
  uint local_284;
  uint local_280;
  uint local_27c;
  uint local_278;
  uint local_274;
  undefined8 local_270;
  uint local_268;
  undefined8 local_264;
  float local_258;
  float fStack_254;
  float fStack_250;
  undefined4 uStack_24c;
  undefined1 local_248 [16];
  undefined8 local_238;
  undefined8 uStack_230;
  undefined1 *local_228;
  undefined8 local_218;
  undefined4 local_210;
  undefined8 local_208;
  undefined4 local_200;
  undefined8 local_1f8;
  float local_1f0;
  undefined8 local_1ec;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined4 local_1b8;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined1 local_198 [16];
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  uint local_128;
  undefined1 local_118 [8];
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_448;
  local_3c0 = param_2;
  memset(local_358,0,0x260);
  bVar22 = *(byte *)(param_6 + 0x388) | *(byte *)(param_1 + 0xf0);
  local_358[0] = bVar22 & 1;
  local_2e8 = 0x3f800000;
  local_348 = (ulonglong)(uint)local_348;
  uStack_340 = CONCAT44(0x3f800000,(undefined4)uStack_340);
  local_2dc = *(undefined4 *)(param_5 + 0x9c);
  local_338 = 0;
  local_330 = 0x3f80000000000000;
  local_324 = 0x3f80000000000000;
  fVar32 = 0.0;
  fVar33 = 0.0;
  local_2f0 = 1.0;
  local_2ec = 1.0;
  if (0.0 < *(float *)(param_1 + 300)) {
    local_388 = *(double *)(param_6 + 0x200);
    local_3b8 = *(double *)(param_6 + 0x1f0);
    local_3a8 = *(double *)(param_6 + 0x1f8);
    local_3d8 = *(double *)(param_4 + 0xab0);
    dStack_3d0 = *(double *)(param_4 + 0xab8);
    local_398 = *(undefined8 *)(param_4 + 0xac0);
    dStack_390 = *(double *)(param_4 + 0xac8);
    dVar11 = *(double *)(param_4 + 0xae8);
    local_378 = *(double *)(param_4 + 0xaf0);
    dStack_370 = *(double *)(param_4 + 0xaf8);
    dVar12 = *(double *)(param_4 + 0xb08);
    dVar30 = *(double *)(param_4 + 0xb28);
    dVar7 = local_388 * dVar12 + local_3a8 * dVar11 + local_3b8 * dStack_390 + dVar30;
    if (dVar7 <= 9.999999747378752e-06) {
      dVar7 = 9.999999747378752e-06;
    }
    dVar10 = (local_388 * dStack_370 +
              local_3a8 * *(double *)(param_4 + 0xad8) + dStack_3d0 * local_3b8 +
             *(double *)(param_4 + 0xb18)) * (1.0 / dVar7);
    dVar5 = (1.0 / dVar7) *
            (local_388 * local_378 +
             local_3a8 * *(double *)(param_4 + 0xad0) + local_3d8 * local_3b8 +
            *(double *)(param_4 + 0xb10));
    dVar31 = (double)*(float *)(param_1 + 300);
    uStack_3a0 = 0;
    dVar6 = *(double *)(param_4 + 0xc50) * dVar31 + local_3a8;
    uStack_3b0 = 0;
    dVar8 = *(double *)(param_4 + 0xc30) * dVar31 + local_3b8;
    uStack_380 = 0;
    dVar7 = *(double *)(param_4 + 0xc70) * dVar31 + local_388;
    dVar9 = dVar7 * dVar12 + dVar6 * dVar11 + dVar8 * dStack_390 + dVar30;
    if (dVar9 <= 9.999999747378752e-05) {
      dVar9 = 9.999999747378752e-05;
    }
    dVar7 = (dVar7 * local_378 + dVar6 * *(double *)(param_4 + 0xad0) + dVar8 * local_3d8 +
            *(double *)(param_4 + 0xb10)) / dVar9 - dVar5;
    if (8796093022208.0 <= dVar7) {
      dVar7 = 8796093022208.0;
    }
    fVar32 = (float)dVar5;
    fVar33 = (float)dVar10;
    if ((dVar7 != 0.0) || (NAN(dVar7))) {
      dVar8 = local_388 + *(double *)(param_4 + 0xc78) * dVar31;
      dVar5 = local_3a8 + *(double *)(param_4 + 0xc58) * dVar31;
      dVar6 = local_3b8 + dVar31 * *(double *)(param_4 + 0xc38);
      dVar30 = dVar30 + dVar12 * dVar8 + dVar11 * dVar5 + dStack_390 * dVar6;
      if (dVar30 <= 9.999999747378752e-05) {
        dVar30 = 9.999999747378752e-05;
      }
      dVar10 = (*(double *)(param_4 + 0xb18) +
               dStack_370 * dVar8 + *(double *)(param_4 + 0xad8) * dVar5 + dStack_3d0 * dVar6) /
               dVar30 - dVar10;
      if (8796093022208.0 <= dVar10) {
        dVar10 = 8796093022208.0;
      }
      if (((((dVar10 != 0.0) || (NAN(dVar10))) && (iVar15 = _isnan(dVar7), iVar15 == 0)) &&
          ((iVar15 = _finite(dVar7), iVar15 != 0 && (iVar15 = _isnan(dVar10), iVar15 == 0)))) &&
         (iVar15 = _finite(dVar10), iVar15 != 0)) {
        local_2f0 = 1.0 / (float)dVar7;
        local_2ec = -1.0 / (float)dVar10;
        goto LAB_144af0ec2;
      }
    }
    local_2f0 = 1.0;
    local_2ec = 1.0;
  }
LAB_144af0ec2:
  local_308 = 0;
  local_300 = 0.0;
  local_2fc = 0x3f800000;
  if ((*(byte *)(param_1 + 0x13c) & 2) != 0) {
    local_2fc = 0;
  }
  local_318 = *(float *)(param_1 + 0x130);
  local_314 = *(float *)(param_1 + 0x134);
  local_30c = 1.0 / local_314;
  local_310 = 1.0 / local_318;
  if ((bVar22 & 1) == 0) {
    pfVar20 = *(float **)(param_6 + 0x2f0);
    pfVar18 = (float *)&DAT_14c846330;
    if (pfVar20 != (float *)0x0) {
      pfVar18 = pfVar20;
    }
    fStack_250 = (float)(*(double *)(param_6 + 0x170) - (double)pfVar18[2] * 65536.0);
    fStack_254 = (float)(*(double *)(param_6 + 0x168) - (double)pfVar18[1] * 65536.0);
    local_258 = (float)(*(double *)(param_6 + 0x160) - (double)*pfVar18 * 65536.0);
  }
  else {
    pfVar20 = *(float **)(param_6 + 0x2f0);
    local_258 = 0.0;
    fStack_254 = 0.0;
    fStack_250 = 0.0;
  }
  uStack_24c = 0x3f800000;
  local_248._4_4_ = fStack_254;
  local_248._0_4_ = local_258;
  local_248._12_4_ = 0x3f800000;
  local_248._8_4_ = fStack_250;
  local_238 = 0x4248000042480000;
  uStack_230 = 0x4248000042480000;
  local_228 = &DAT_3f8000003f800000;
  local_2d8 = *(double *)(param_1 + 0x124);
  local_218 = 0;
  local_210 = 0;
  local_208 = 0;
  local_200 = 0;
  pfVar18 = (float *)&DAT_14c846330;
  if (pfVar20 != (float *)0x0) {
    pfVar18 = pfVar20;
  }
  local_1f8 = *(undefined8 *)pfVar18;
  local_1f0 = pfVar18[2];
  local_1ec = 0;
  local_1d8._8_8_ = &DAT_3f8000003f800000;
  local_1d8._0_8_ = &DAT_3f8000003f800000;
  local_1c8 = (undefined1  [16])0x0;
  local_1b8 = 0;
  local_1a8 = 0x3f800000;
  uStack_1a4 = 0;
  uStack_1a0 = 0;
  uStack_19c = 0;
  local_198._0_12_ = ZEXT812(0x3f800000);
  local_198._12_4_ = 0;
  local_188 = 0x3f800000;
  uStack_184 = 0;
  uStack_180 = 0;
  uStack_17c = 0;
  local_178._0_12_ = ZEXT812(0x3f800000);
  local_178._12_4_ = 0;
  local_168._8_8_ = &DAT_3f8000003f800000;
  local_168._0_8_ = &DAT_3f8000003f800000;
  local_158._8_8_ = &DAT_3f8000003f800000;
  local_158._0_8_ = &DAT_3f8000003f800000;
  local_148._8_8_ = &DAT_3f8000003f800000;
  local_148._0_8_ = &DAT_3f8000003f800000;
  local_138._8_8_ = &DAT_3f8000003f800000;
  local_138._0_8_ = &DAT_3f8000003f800000;
  local_2c4 = 0xffffffff;
  local_2bc = 0xffffffff;
  local_2b4 = 0xffffffff;
  local_2ac = 0xffffffff;
  local_288 = 0xffffffff;
  local_280 = 0xffffffff;
  local_274 = 0xffffffff;
  local_268 = 0xffffffff;
  local_2f8 = fVar32;
  local_2f4 = fVar33;
  local_2d0 = local_2d8;
  if (1.0 < *(double *)(param_4 + 0x8a8) || *(double *)(param_4 + 0x8a8) == 1.0) {
    local_128 = 0;
    _local_118 = (undefined1  [16])0x0;
    auVar14 = _local_118;
    goto LAB_144af1173;
  }
  cVar2 = *(char *)(param_1 + 0x140);
  local_128 = (uint)(cVar2 != '\x01');
  _local_118 = (undefined1  [16])0x0;
  auVar14 = _local_118;
  _local_118 = SUB1612((undefined1  [16])0x0,0);
  if (cVar2 == '\x01') goto LAB_144af1173;
  if (cVar2 == '\0') {
    local_128 = (uint)*(byte *)((longlong)param_3 + 0x14);
    if (local_128 != 1) goto LAB_144af1173;
    iVar15 = (int)param_3[2];
    _local_118 = auVar14;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14caf1e74) && (FUN_144b3d300(&DAT_14caf1e74), DAT_14caf1e74 == -1)) {
      DAT_14caf1e71 = FUN_14473b0f0();
      _Init_thread_footer(&DAT_14caf1e74);
    }
    if (DAT_14caf1e71 == '\x01') {
      if ((iVar15 != 2) && (iVar15 != 7)) goto LAB_144af2011;
    }
    else if (iVar15 != 2) {
LAB_144af2011:
      if ((int)param_3[2] != 3) {
        local_128 = 0;
        auVar14 = _local_118;
        goto LAB_144af1173;
      }
      goto LAB_144af201b;
    }
    uStack_10c = *(undefined4 *)(param_1 + 0x144);
    _local_118 = ZEXT812(0);
  }
  else {
    local_128 = 1;
    if (cVar2 == '\x05') {
      uStack_10c = *(undefined4 *)(param_1 + 0x144);
    }
    else {
      if (cVar2 == '\x04') {
        local_118._0_4_ = *(undefined4 *)(param_1 + 0x144);
        stack0xfffffffffffffeec = SUB1612((undefined1  [16])0x0,4);
        auVar13 = stack0xfffffffffffffeec;
        local_118._4_4_ = local_118._0_4_;
        uStack_10c = auVar13._8_4_;
        uStack_110 = local_118._0_4_;
        auVar14 = _local_118;
        goto LAB_144af1173;
      }
      if (cVar2 != '\x03') goto LAB_144af1173;
LAB_144af201b:
      uStack_10c = *(undefined4 *)(param_1 + 0x144);
      local_118._4_4_ = uStack_10c;
      local_118._0_4_ = uStack_10c;
      uStack_110 = uStack_10c;
    }
  }
  auVar14 = _local_118;
LAB_144af1173:
  _local_118 = auVar14;
  plVar24 = local_3c0;
  local_108 = 0;
  if (*(char *)(param_1 + 0x120) == '\0') {
    lVar3 = *(longlong *)(param_3[3] + 0x10);
    local_2c8 = (uint)*(ushort *)(lVar3 + 2);
    if (local_2c8 == 0xffff) {
      local_2c8 = 0xffffffff;
    }
    local_2c8 = (uint)*(byte *)(lVar3 + 7) << 0x1f | local_2c8;
    local_2c0 = (uint)*(ushort *)(lVar3 + 0x12);
    if (local_2c0 == 0xffff) {
      local_2c0 = 0xffffffff;
    }
    local_2c0 = (uint)*(byte *)(lVar3 + 0x17) << 0x1f | local_2c0;
    local_2b8 = (uint)*(ushort *)(lVar3 + 0x1a);
    if (local_2b8 == 0xffff) {
      local_2b8 = 0xffffffff;
    }
    local_2b8 = (uint)*(byte *)(lVar3 + 0x1f) << 0x1f | local_2b8;
    local_2b0 = (uint)*(ushort *)(lVar3 + 0x22);
    if (local_2b0 == 0xffff) {
      local_2b0 = 0xffffffff;
    }
    local_2b0 = (uint)*(byte *)(lVar3 + 0x27) << 0x1f | local_2b0;
    uVar21 = (uint)*(ushort *)(lVar3 + 10);
    if (uVar21 == 0xffff) {
      uVar21 = 0xffffffff;
    }
    uVar25 = (uint)*(ushort *)(lVar3 + 0x42);
    if (uVar25 == 0xffff) {
      uVar25 = 0xffffffff;
    }
    uVar26 = (uint)*(ushort *)(lVar3 + 0x4a);
    if (uVar26 == 0xffff) {
      uVar26 = 0xffffffff;
    }
    local_29c._4_4_ = (uint)*(byte *)(lVar3 + 0x4f) << 0x1f | uVar26;
    local_29c._0_4_ = (uint)*(byte *)(lVar3 + 0x47) << 0x1f | uVar25;
    uVar25 = (uint)*(ushort *)(lVar3 + 0x52);
    if (uVar25 == 0xffff) {
      uVar25 = 0xffffffff;
    }
    local_29c._8_4_ = (uint)*(byte *)(lVar3 + 0x57) << 0x1f | uVar25;
    uVar25 = (uint)*(ushort *)(lVar3 + 0x5a);
    if (uVar25 == 0xffff) {
      uVar25 = 0xffffffff;
    }
    local_29c._12_4_ = (uint)*(byte *)(lVar3 + 0x5f) << 0x1f | uVar25;
    uVar25 = (uint)*(ushort *)(lVar3 + 0x3a);
    if (uVar25 == 0xffff) {
      uVar25 = 0xffffffff;
    }
    local_2a8 = CONCAT44((uint)*(byte *)(lVar3 + 0xf) << 0x1f | uVar21,
                         (uint)*(byte *)(lVar3 + 0x3f) << 0x1f | uVar25);
    local_28c = (uint)*(ushort *)(lVar3 + 0x2a);
    if (local_28c == 0xffff) {
      local_28c = 0xffffffff;
    }
    local_28c = (uint)*(byte *)(lVar3 + 0x2f) << 0x1f | local_28c;
    local_284 = (uint)*(ushort *)(lVar3 + 0x32);
    if (local_284 == 0xffff) {
      local_284 = 0xffffffff;
    }
    local_284 = (uint)*(byte *)(lVar3 + 0x37) << 0x1f | local_284;
    local_278 = (uint)*(ushort *)(lVar3 + 0x62);
    if (local_278 == 0xffff) {
      local_278 = 0xffffffff;
    }
    local_278 = (uint)*(byte *)(lVar3 + 0x67) << 0x1f | local_278;
    uVar21 = (uint)*(ushort *)(lVar3 + 0x6a);
    if (uVar21 == 0xffff) {
      uVar21 = 0xffffffff;
    }
    uVar25 = (uint)*(ushort *)(lVar3 + 0x72);
    if (uVar25 == 0xffff) {
      uVar25 = 0xffffffff;
    }
    local_270 = CONCAT44((uint)*(byte *)(lVar3 + 0x77) << 0x1f | uVar25,
                         (uint)*(byte *)(lVar3 + 0x6f) << 0x1f | uVar21);
    uVar21 = (uint)*(ushort *)(lVar3 + 0x8a);
    if (uVar21 == 0xffff) {
      uVar21 = 0xffffffff;
    }
    uVar25 = (uint)*(ushort *)(lVar3 + 0x7a);
    if (*(ushort *)(lVar3 + 0x7a) == 0xffff) {
      uVar25 = 0xffffffff;
    }
    local_264 = CONCAT44((uint)*(byte *)(lVar3 + 0x7f) << 0x1f | uVar25,
                         (uint)*(byte *)(lVar3 + 0x8f) << 0x1f | uVar21);
    if ((*(byte *)(param_1 + 0x13c) & 0x80) != 0) {
      local_108 = 1;
      local_2c4 = (uint)*(ushort *)(lVar3 + 0x92);
      if (local_2c4 == 0xffff) {
        local_2c4 = 0xffffffff;
      }
      local_2c4 = (uint)*(byte *)(lVar3 + 0x97) << 0x1f | local_2c4;
      local_2bc = (uint)*(ushort *)(lVar3 + 0x9a);
      if (local_2bc == 0xffff) {
        local_2bc = 0xffffffff;
      }
      local_2bc = (uint)*(byte *)(lVar3 + 0x9f) << 0x1f | local_2bc;
      local_2b4 = (uint)*(ushort *)(lVar3 + 0xa2);
      if (local_2b4 == 0xffff) {
        local_2b4 = 0xffffffff;
      }
      local_2b4 = (uint)*(byte *)(lVar3 + 0xa7) << 0x1f | local_2b4;
      local_2ac = (uint)*(ushort *)(lVar3 + 0xaa);
      if (local_2ac == 0xffff) {
        local_2ac = 0xffffffff;
      }
      local_2ac = (uint)*(byte *)(lVar3 + 0xaf) << 0x1f | local_2ac;
      local_288 = (uint)*(ushort *)(lVar3 + 0xb2);
      if (local_288 == 0xffff) {
        local_288 = 0xffffffff;
      }
      local_288 = (uint)*(byte *)(lVar3 + 0xb7) << 0x1f | local_288;
      local_280 = (uint)*(ushort *)(lVar3 + 0xba);
      if (local_280 == 0xffff) {
        local_280 = 0xffffffff;
      }
      local_280 = (uint)*(byte *)(lVar3 + 0xbf) << 0x1f | local_280;
      local_274 = (uint)*(ushort *)(lVar3 + 0xc2);
      if (local_274 == 0xffff) {
        local_274 = 0xffffffff;
      }
      local_274 = (uint)*(byte *)(lVar3 + 199) << 0x1f | local_274;
      local_268 = (uint)*(ushort *)(lVar3 + 0xca);
      if (*(ushort *)(lVar3 + 0xca) == 0xffff) {
        local_268 = 0xffffffff;
      }
      local_268 = (uint)*(byte *)(lVar3 + 0xcf) << 0x1f | local_268;
    }
  }
  else if (*(char *)(param_1 + 0x120) == '\x01') {
    local_2c8 = 0xffffffff;
    local_2c0 = 0xffffffff;
    local_2b8 = 0xffffffff;
    local_2b0 = 0xffffffff;
    local_2a8 = 0xffffffffffffffff;
    local_284 = 0xffffffff;
    local_278 = 0xffffffff;
    local_270 = 0xffffffffffffffff;
    local_264 = 0xffffffffffffffff;
    local_29c._8_4_ = 0xffffffff;
    local_29c._0_8_ = 0xffffffffffffffff;
    local_29c._12_4_ = 0xffffffff;
    local_28c = 0xffffffff;
  }
  uVar21 = *(uint *)(param_1 + 0x18c);
  local_27c = *(uint *)(param_1 + 0x13c);
  local_2a0 = uVar21;
  if ((local_27c >> 9 & 1) != 0) {
    lVar3 = *param_3;
    local_3d8 = local_2d8;
    uVar27 = 0;
    uVar28 = local_238;
    do {
      iVar15 = *(int *)(param_1 + 0x198 + uVar27 * 4);
      lVar23 = (longlong)iVar15;
      uVar4 = local_1c8._0_8_;
      if ((lVar23 < 0) || (*(int *)(lVar3 + 0x60) <= iVar15)) {
        switch((int)uVar27) {
        case 0x12:
          local_248._4_4_ = fStack_254;
          local_248._0_4_ = local_258;
          local_248._8_4_ = fStack_250;
          local_248._12_4_ = uStack_24c;
          break;
        case 0x13:
          local_200 = local_210;
          local_208 = local_218;
          break;
        case 0x14:
          local_1ec = CONCAT44((undefined4)local_1ec,(undefined4)local_1ec);
          break;
        case 0x15:
          uStack_230 = uVar28;
          break;
        case 0x16:
          local_198._4_4_ = uStack_1a4;
          local_198._0_4_ = local_1a8;
          local_198._8_4_ = uStack_1a0;
          local_198._12_4_ = uStack_19c;
          break;
        case 0x17:
          local_178._4_4_ = uStack_184;
          local_178._0_4_ = local_188;
          local_178._8_4_ = uStack_180;
          local_178._12_4_ = uStack_17c;
          break;
        case 0x18:
          local_1c8._8_4_ = local_1c8._4_4_;
          local_1c8._0_12_ = CONCAT48(local_1c8._8_4_,uVar4);
          break;
        case 0x19:
          local_2d0 = local_3d8;
        }
      }
      else {
        switch(uVar27 & 0xffffffff) {
        case 0:
          fStack_250 = *(float *)(*(longlong *)(lVar3 + 0x58) + 8 + lVar23);
          uVar4 = *(undefined8 *)(*(longlong *)(lVar3 + 0x58) + lVar23);
          local_258 = (float)uVar4;
          fStack_254 = (float)((ulonglong)uVar4 >> 0x20);
          break;
        case 1:
          local_1d8 = *(undefined1 (*) [16])(*(longlong *)(lVar3 + 0x58) + lVar23);
          break;
        case 2:
          local_210 = *(undefined4 *)(*(longlong *)(lVar3 + 0x58) + 8 + lVar23);
          local_218 = *(undefined8 *)(*(longlong *)(lVar3 + 0x58) + lVar23);
          break;
        case 3:
          local_1ec = CONCAT44(local_1ec._4_4_,*(undefined4 *)(*(longlong *)(lVar3 + 0x58) + lVar23)
                              );
          break;
        case 4:
          uVar28 = *(undefined8 *)(*(longlong *)(lVar3 + 0x58) + lVar23);
          local_238 = uVar28;
          break;
        case 5:
          uStack_1a0 = *(undefined4 *)(*(longlong *)(lVar3 + 0x58) + 8 + lVar23);
          uVar4 = *(undefined8 *)(*(longlong *)(lVar3 + 0x58) + lVar23);
          local_1a8 = (undefined4)uVar4;
          uStack_1a4 = (undefined4)((ulonglong)uVar4 >> 0x20);
          break;
        case 6:
          uStack_180 = *(undefined4 *)(*(longlong *)(lVar3 + 0x58) + 8 + lVar23);
          uVar4 = *(undefined8 *)(*(longlong *)(lVar3 + 0x58) + lVar23);
          local_188 = (undefined4)uVar4;
          uStack_184 = (undefined4)((ulonglong)uVar4 >> 0x20);
          break;
        case 7:
          local_1b8 = *(undefined4 *)(*(longlong *)(lVar3 + 0x58) + lVar23);
          break;
        case 8:
          local_168 = *(undefined1 (*) [16])(*(longlong *)(lVar3 + 0x58) + lVar23);
          uVar21 = uVar21 | 0xf;
          local_2a0 = uVar21;
          break;
        case 9:
          local_158 = *(undefined1 (*) [16])(*(longlong *)(lVar3 + 0x58) + lVar23);
          uVar21 = uVar21 | 0xf0;
          local_2a0 = uVar21;
          break;
        case 10:
          local_148 = *(undefined1 (*) [16])(*(longlong *)(lVar3 + 0x58) + lVar23);
          uVar21 = uVar21 | 0xf00;
          local_2a0 = uVar21;
          break;
        case 0xb:
          local_138 = *(undefined1 (*) [16])(*(longlong *)(lVar3 + 0x58) + lVar23);
          uVar21 = uVar21 | 0xf000;
          local_2a0 = uVar21;
          break;
        case 0xc:
          local_1c8._4_4_ = *(undefined4 *)(*(longlong *)(lVar3 + 0x58) + lVar23);
          break;
        case 0xd:
          local_228 = *(undefined1 **)(*(longlong *)(lVar3 + 0x58) + lVar23);
          break;
        case 0xe:
          local_3d8 = *(double *)(*(longlong *)(lVar3 + 0x58) + lVar23);
          local_2d8 = local_3d8;
          break;
        case 0xf:
          local_1c8._0_4_ = *(undefined4 *)(*(longlong *)(lVar3 + 0x58) + lVar23);
          break;
        case 0x11:
          local_1c8._12_4_ = *(undefined4 *)(*(longlong *)(lVar3 + 0x58) + lVar23);
          break;
        case 0x12:
          local_248._8_4_ = *(undefined4 *)(*(longlong *)(lVar3 + 0x58) + 8 + lVar23);
          local_248._0_8_ = *(undefined8 *)(*(longlong *)(lVar3 + 0x58) + lVar23);
          break;
        case 0x13:
          local_200 = *(undefined4 *)(*(longlong *)(lVar3 + 0x58) + 8 + lVar23);
          local_208 = *(undefined8 *)(*(longlong *)(lVar3 + 0x58) + lVar23);
          break;
        case 0x14:
          local_1ec = CONCAT44(*(undefined4 *)(*(longlong *)(lVar3 + 0x58) + lVar23),
                               (undefined4)local_1ec);
          break;
        case 0x15:
          uStack_230 = *(undefined8 *)(*(longlong *)(lVar3 + 0x58) + lVar23);
          break;
        case 0x16:
          local_198._8_4_ = *(undefined4 *)(*(longlong *)(lVar3 + 0x58) + 8 + lVar23);
          local_198._0_8_ = *(undefined8 *)(*(longlong *)(lVar3 + 0x58) + lVar23);
          break;
        case 0x17:
          local_178._8_4_ = *(undefined4 *)(*(longlong *)(lVar3 + 0x58) + 8 + lVar23);
          local_178._0_8_ = *(undefined8 *)(*(longlong *)(lVar3 + 0x58) + lVar23);
          break;
        case 0x18:
          local_1c8._8_4_ = *(undefined4 *)(*(longlong *)(lVar3 + 0x58) + lVar23);
          break;
        case 0x19:
          local_2d0 = *(double *)(*(longlong *)(lVar3 + 0x58) + lVar23);
        }
      }
      uVar27 = uVar27 + 1;
    } while ((ulonglong)(byte)((byte)local_27c >> 7) * 8 + 0x12 != uVar27);
  }
  local_27c = local_27c & 1;
  if (*(int *)(param_7 + 0x15c) == 4) {
    local_300 = *(float *)(param_1 + 0x148) * *(float *)(param_1 + 0x148);
    fVar32 = *(float *)(param_1 + 0x14c) * *(float *)(param_1 + 0x14c) - local_300;
    if (fVar32 <= 1.0) {
      fVar32 = 1.0;
    }
    local_300 = local_300 * (1.0 / fVar32);
    local_308 = CONCAT44(1.0 / fVar32,0x3f800000);
  }
  if (*(int *)(param_7 + 0x158) == 1) {
    local_2e8 = 0;
    local_348 = 0x3f80000000000000;
    uStack_340 = 0;
  }
  if (DAT_14c846b14 == '\x01') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c926f30) && (FUN_144b3d300(&DAT_14c926f30), DAT_14c926f30 == -1)) {
      FUN_1413288e0(&DAT_14c926ca8);
      atexit(FUN_1427ac032);
      _Init_thread_footer(&DAT_14c926f30);
    }
    if (*(code **)(DAT_14c926ca8 + 0x28) != (code *)&LAB_144aff468) {
      (**(code **)(DAT_14c926ca8 + 0x28))(&DAT_14c926ca8);
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb2cab0) && (FUN_144b3d300(&DAT_14cb2cab0), DAT_14cb2cab0 == -1)) {
    FUN_141612130(local_368);
    local_3e0 = 0;
    local_3e8 = 0;
    local_3f0 = 0;
    local_410 = "Unknown";
    local_418 = 0;
    local_420 = L"NiagaraSpriteVF";
    local_428 = L"FNiagaraSpriteUniformParameters";
    local_400 = 0x260;
    local_408 = 0x15;
    local_3f8 = local_368;
    FUN_140b49562(&DAT_14cb2ca30,1,1);
    if (local_368[0] != 0) {
      FUN_1400020a8();
    }
    atexit((_func_5014 *)&LAB_1438f6788);
    _Init_thread_footer(&DAT_14cb2cab0);
    plVar24 = local_3c0;
  }
  local_420 = (wchar_t *)CONCAT44(local_420._4_4_,1);
  local_428 = (wchar_t *)CONCAT44(local_428._4_4_,1);
  (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,local_368,local_358,DAT_14cb2ca78);
  *plVar24 = local_368[0];
  if (local_368[0] != 0) {
    LOCK();
    *(int *)(local_368[0] + 8) = *(int *)(local_368[0] + 8) + 1;
    UNLOCK();
    if (local_368[0] != 0) {
      LOCK();
      puVar1 = (uint *)(local_368[0] + 8);
      uVar21 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar21 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_368[0] + 8);
        LOCK();
        uVar21 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar21 >> 0x1e & 1) == 0) {
          bVar22 = *(byte *)(local_368[0] + 0xd);
          plVar16 = (longlong *)FUN_14001cc68(0x10,8);
          plVar16[1] = local_368[0];
          plVar19 = DAT_14ca843c0;
          plVar17 = DAT_14ca843c8;
          if ((bVar22 & 2) == 0) {
            do {
              *plVar16 = (longlong)plVar19;
              LOCK();
              bVar29 = plVar19 != DAT_14ca843c0;
              plVar17 = plVar16;
              if (bVar29) {
                plVar19 = DAT_14ca843c0;
                plVar17 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar17;
              UNLOCK();
            } while (bVar29);
          }
          else {
            do {
              *plVar16 = (longlong)plVar17;
              LOCK();
              bVar29 = plVar17 != DAT_14ca843c8;
              plVar19 = plVar16;
              if (bVar29) {
                plVar17 = DAT_14ca843c8;
                plVar19 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar19;
              UNLOCK();
            } while (bVar29);
          }
        }
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_448) == DAT_14c707940) {
    return plVar24;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144af2112 FUN_144af2112 body=360 status=ok
// SIG undefined FUN_144af2112(void)

ulonglong FUN_144af2112(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  longlong local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar4 = FUN_14021f064();
  uVar5 = (ulonglong)uVar4;
  iVar1 = *(int *)(param_1 + 0xb0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xa8);
    lVar6 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar6);
      if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0x35) & 3) == 1)) {
        local_68 = *(undefined4 *)(lVar3 + 0x28);
        local_70 = *(undefined8 *)(lVar3 + 0x20);
        local_60 = 0;
        uStack_58 = 0;
        local_78 = 0;
        uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
        (**(code **)(*param_2 + 0x10))(param_2,&local_70,0,1);
        if (local_60 != 0) {
          FUN_1400020a8();
        }
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  iVar1 = *(int *)(param_1 + 0x5a0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x598);
    lVar6 = 0;
    uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
    do {
      local_68 = *(undefined4 *)(lVar2 + 0x1c + lVar6);
      local_70 = *(undefined8 *)(lVar2 + 0x14 + lVar6);
      local_60 = 0;
      uStack_58 = 0;
      local_78 = 0;
      (**(code **)(*param_2 + 0x10))(param_2,&local_70,0,1);
      if (local_60 != 0) {
        FUN_1400020a8();
      }
      lVar6 = lVar6 + 0x2c;
    } while ((longlong)iVar1 * 0x2c - lVar6 != 0);
  }
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffffffffff01;
}



// FUNCTION 144af227c FUN_144af227c body=1100 status=ok
// SIG undefined FUN_144af227c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_144af227c(longlong param_1,longlong param_2,undefined4 param_3,int param_4,undefined8 param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  undefined4 local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((((*(byte *)(param_1 + 0x264) & 4) != 0) &&
      (plVar6 = *(longlong **)(param_1 + 0x2a8), plVar6 != (longlong *)0x0)) &&
     (lVar8 = plVar6[1], (longlong)(int)lVar8 != 0)) {
    lVar10 = *plVar6;
    lVar11 = 0;
    do {
      uVar5 = *(undefined8 *)(lVar10 + lVar11);
      lVar7 = FUN_1481f5150(uVar5,*(undefined1 *)(*(longlong *)(param_1 + 8) + 0x30));
      if (lVar7 != 0) {
        FUN_144b347bc(lVar7,uVar5,param_3);
      }
      lVar11 = lVar11 + 8;
    } while ((longlong)(int)lVar8 * 8 != lVar11);
  }
  if (param_4 == 0) {
    FUN_1481dec34(param_1 + 0x220);
  }
  else {
    _DAT_14cb430e4 = _DAT_14cb430e4 + 1;
    local_70 = 0;
    local_64 = *(undefined1 *)(param_1 + 0x290);
    iVar12 = *(int *)(param_1 + 0x278);
    local_78 = param_2;
    local_68 = param_3;
    if ((longlong)iVar12 != 0) {
      lVar8 = *(longlong *)(param_1 + 0x270);
      lVar10 = 0;
      do {
        iVar3 = *(int *)(lVar8 + lVar10);
        if (((longlong)iVar3 < 0) || (*(int *)(param_2 + 0x170) <= iVar3)) {
          local_70 = 0;
        }
        else {
          lVar11 = (longlong)iVar3 * 0xc;
          plVar6 = (longlong *)FUN_14479d2ce(*(longlong *)(param_2 + 0x168) + lVar11);
          local_70 = (longlong)*(int *)(*(longlong *)(param_2 + 0x168) + 8 + lVar11) +
                     *(longlong *)(param_2 + 0x138);
          if ((plVar6 != (longlong *)0x0) && (local_70 != 0)) {
            (**(code **)(*plVar6 + 0x2f8))(plVar6,&local_78);
          }
        }
        lVar10 = lVar10 + 4;
      } while ((longlong)iVar12 * 4 != lVar10);
    }
    if (DAT_14c7629d0 != 0) {
      if (*(char *)(param_1 + 0x268) == '\x01') {
        FUN_143abcdd4(param_1,param_4,param_5);
      }
      else {
        FUN_14007eb1e(param_1,param_4);
      }
      iVar12 = *(int *)(param_1 + 600);
      if (0 < iVar12) {
        lVar8 = 0x38;
        lVar10 = 0x14;
        lVar11 = 0;
        do {
          lVar7 = *(longlong *)(param_1 + 0x250);
          if (*(longlong *)(param_1 + 0x250) == 0) {
            lVar7 = param_1 + 0x220;
          }
          if ((*(char *)(lVar7 + lVar10) == '\x01') &&
             (lVar4 = *(longlong *)(*(longlong *)(lVar7 + lVar10 + -0x14) + 0x80), lVar4 != 0)) {
            lVar9 = *(longlong *)(param_1 + 0x210);
            if (*(longlong *)(param_1 + 0x210) == 0) {
              lVar9 = param_1 + 0xd0;
            }
            *(int *)(lVar4 + 0x120) = *(int *)(lVar7 + lVar10 + -4) + *(int *)(lVar9 + lVar8) + 1;
            iVar12 = *(int *)(param_1 + 600);
          }
          lVar11 = lVar11 + 1;
          lVar8 = lVar8 + 0xa0;
          lVar10 = lVar10 + 0x18;
        } while (lVar11 < iVar12);
        if (0 < iVar12) {
          lVar8 = 0x14;
          lVar10 = 0;
          lVar11 = 0;
          do {
            lVar7 = *(longlong *)(param_1 + 0x250);
            if (*(longlong *)(param_1 + 0x250) == 0) {
              lVar7 = param_1 + 0x220;
            }
            *(undefined8 *)(lVar7 + lVar8 + -0x14) = 0;
            lVar4 = *(longlong *)(lVar7 + lVar8 + -0xc);
            if (lVar4 != 0) {
              *(undefined8 *)(lVar7 + lVar8 + -0xc) = 0;
              LOCK();
              piVar1 = (int *)(lVar4 + 8);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
            }
            *(undefined4 *)(lVar7 + lVar8 + -4) = 0xffffffff;
            *(undefined1 *)(lVar7 + lVar8) = 0;
            lVar7 = *(longlong *)(param_1 + 0x210);
            if (*(longlong *)(param_1 + 0x210) == 0) {
              lVar7 = param_1 + 0xd0;
            }
            *(undefined8 *)(lVar7 + lVar10) = 0;
            *(undefined4 *)(lVar7 + 8 + lVar10) = 0;
            *(undefined8 *)(lVar7 + 0x10 + lVar10) = 0;
            *(undefined4 *)(lVar7 + 0x18 + lVar10) = 0;
            *(undefined8 *)(lVar7 + 0x38 + lVar10) = 0xffffffffffffffff;
            puVar2 = (undefined8 *)(lVar7 + 0x40 + lVar10);
            *puVar2 = 0;
            puVar2[1] = 0;
            puVar2 = (undefined8 *)(lVar7 + 0x50 + lVar10);
            *puVar2 = 0;
            puVar2[1] = 0;
            *(undefined8 *)(lVar7 + 0x60 + lVar10) = 0;
            *(undefined4 *)(lVar7 + 0x70 + lVar10) = 0xffffffff;
            lVar11 = lVar11 + 1;
            lVar10 = lVar10 + 0xa0;
            lVar8 = lVar8 + 0x18;
          } while (lVar11 < *(int *)(param_1 + 600));
        }
      }
    }
    local_70 = 0;
    local_64 = *(undefined1 *)(param_1 + 0x290);
    iVar12 = *(int *)(param_1 + 0x288);
    local_78 = param_2;
    local_68 = param_3;
    if ((longlong)iVar12 != 0) {
      lVar8 = *(longlong *)(param_1 + 0x280);
      lVar10 = 0;
      do {
        iVar3 = *(int *)(lVar8 + lVar10);
        if (((longlong)iVar3 < 0) || (*(int *)(param_2 + 0x170) <= iVar3)) {
          local_70 = 0;
        }
        else {
          lVar11 = (longlong)iVar3 * 0xc;
          plVar6 = (longlong *)FUN_14479d2ce(*(longlong *)(param_2 + 0x168) + lVar11);
          local_70 = (longlong)*(int *)(*(longlong *)(param_2 + 0x168) + 8 + lVar11) +
                     *(longlong *)(param_2 + 0x138);
          if ((plVar6 != (longlong *)0x0) && (local_70 != 0)) {
            (**(code **)(*plVar6 + 0x300))(plVar6,&local_78);
          }
        }
        lVar10 = lVar10 + 4;
      } while ((longlong)iVar12 * 4 != lVar10);
    }
  }
  if ((((*(byte *)(param_1 + 0x264) & 8) != 0) &&
      (plVar6 = *(longlong **)(param_1 + 0x2a8), plVar6 != (longlong *)0x0)) &&
     (lVar8 = plVar6[1], (longlong)(int)lVar8 != 0)) {
    lVar10 = *plVar6;
    lVar11 = 0;
    do {
      uVar5 = *(undefined8 *)(lVar10 + lVar11);
      lVar7 = FUN_1481f5150(uVar5,*(undefined1 *)(*(longlong *)(param_1 + 8) + 0x30));
      if (lVar7 != 0) {
        FUN_144b348aa(lVar7,uVar5,param_3);
      }
      lVar11 = lVar11 + 8;
    } while ((longlong)(int)lVar8 * 8 != lVar11);
  }
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 144af26ca FUN_144af26ca body=436 status=ok
// SIG undefined FUN_144af26ca(void)

undefined8 * FUN_144af26ca(longlong *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint *puVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 *puVar7;
  bool bVar8;
  
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar3 = (uint *)*puVar1;
  if (puVar3 != (uint *)0x0) goto LAB_144af2701;
  while( true ) {
    FUN_14472e504(puVar1);
    puVar3 = (uint *)*puVar1;
LAB_144af2701:
    puVar7 = (undefined8 *)(*(longlong *)(puVar3 + 0x10) + 7U & 0xfffffffffffffff8);
    uVar6 = puVar3[0x12];
    if (puVar7 + 0x32 <= puVar3 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar3 + 0x10) = puVar3 + 0x4000;
      LOCK();
      uVar2 = *puVar3;
      *puVar3 = *puVar3 + uVar6 + 1;
      UNLOCK();
      if ((uVar2 ^ uVar6) != 0xffffffff) break;
      puVar3 = (uint *)*puVar1;
      *puVar3 = 0xffffffff;
      *(uint **)(puVar3 + 0x10) = puVar3 + 0x16;
      puVar3[0x12] = 0;
      *puVar1 = puVar3;
      puVar7 = (undefined8 *)((longlong)puVar3 + 0x5fU & 0xfffffffffffffff8);
      uVar6 = 0;
      if (puVar7 + 0x32 <= puVar3 + 0x4000) {
        uVar6 = 1;
        goto LAB_144af277d;
      }
    }
  }
  uVar6 = uVar6 + 1;
LAB_144af277d:
  *(undefined8 **)(puVar3 + 0x10) = puVar7 + 0x33;
  puVar3[0x12] = uVar6;
  *(int *)(puVar7 + -1) = ((int)puVar7 + -8) - (int)puVar3;
  *(undefined4 *)((longlong)puVar7 + -4) = 400;
  puVar7[1] = 0;
  *puVar7 = &PTR_FUN_14ae1ddb8;
  lVar4 = *param_1;
  do {
    puVar7[1] = lVar4;
    LOCK();
    lVar5 = *param_1;
    bVar8 = lVar4 == lVar5;
    if (bVar8) {
      *param_1 = (longlong)puVar7;
      lVar5 = lVar4;
    }
    UNLOCK();
    lVar4 = lVar5;
  } while (!bVar8);
  memset(puVar7 + 4,0,0x168);
  puVar7[2] = &PTR_FUN_14ae1ddc0;
  *(undefined4 *)(puVar7 + 4) = 0xffffffff;
  *(undefined2 *)((longlong)puVar7 + 0x24) = 0x105;
  puVar7[0x15] = 0;
  *(undefined4 *)((longlong)puVar7 + 0xb4) = 8;
  puVar7[0x1c] = 0x200000000;
  puVar7[0x24] = 0x300000000;
  puVar7[0x25] = 0;
  puVar7[0x26] = 0;
  puVar7[0x27] = 0;
  *(undefined2 *)(puVar7 + 0x28) = 0xffff;
  *(undefined1 *)((longlong)puVar7 + 0x142) = 0xff;
  puVar7[3] = &PTR_FUN_14ae1ddd0;
  puVar7[0x31] = 0;
  puVar7[0x29] = 0;
  puVar7[0x2a] = 0;
  *(undefined8 *)((longlong)puVar7 + 0x154) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x15c) = 0;
  puVar7[0x2d] = 0;
  puVar7[0x2e] = 0;
  *(undefined8 *)((longlong)puVar7 + 0x174) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x17c) = 0;
  return puVar7 + 2;
}



// FUNCTION 144af287e FUN_144af287e body=1486 status=ok
// SIG undefined FUN_144af287e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_144af287e(longlong param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  code *pcVar4;
  longlong lVar5;
  DWORD DVar6;
  uint uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint *puVar11;
  bool bVar12;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14ae1ddc0;
  if ((DAT_14c868880 != '\0') || (*(int *)(param_1 + 0x20) == -1)) goto LAB_144af2a5c;
  if (DAT_14ca84d88 == '\x01') {
    pcVar4 = *(code **)(*(longlong *)(param_1 + 0x18) + 0x10);
    if (pcVar4 == FUN_144846d14) {
      lVar5 = *(longlong *)(param_1 + 0x128);
      if (lVar5 != 0) {
        *(undefined8 *)(param_1 + 0x128) = 0;
        LOCK();
        puVar11 = (uint *)(lVar5 + 8);
        uVar7 = *puVar11;
        *puVar11 = *puVar11 - 1;
        UNLOCK();
        if ((uVar7 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
      lVar5 = *(longlong *)(param_1 + 0x130);
      if (lVar5 != 0) {
        *(undefined8 *)(param_1 + 0x130) = 0;
        LOCK();
        puVar11 = (uint *)(lVar5 + 8);
        uVar7 = *puVar11;
        *puVar11 = *puVar11 - 1;
        UNLOCK();
        if ((uVar7 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
      lVar5 = *(longlong *)(param_1 + 0x138);
      if (lVar5 != 0) {
        *(undefined8 *)(param_1 + 0x138) = 0;
        LOCK();
        puVar11 = (uint *)(lVar5 + 8);
        uVar7 = *puVar11;
        *puVar11 = *puVar11 - 1;
        UNLOCK();
        if ((uVar7 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
      *(undefined4 *)(param_1 + 0xb0) = 0;
      if (*(int *)(param_1 + 0xb4) != 0) {
        FUN_14472574a(param_1 + 0x28,0);
      }
      *(undefined4 *)(param_1 + 0xe0) = 0;
      if (*(int *)(param_1 + 0xe4) != 0) {
        FUN_144725820(param_1 + 0xb8,0);
      }
      *(undefined4 *)(param_1 + 0x120) = 0;
      if (*(int *)(param_1 + 0x124) != 0) {
        FUN_1447258e4(param_1 + 0xe8,0);
      }
    }
    else if (pcVar4 == FUN_14003f40e) {
      FUN_14003f40e();
    }
    else {
      (*pcVar4)();
    }
  }
  if (*(char *)(param_1 + 0x25) == '\0') {
    puVar11 = (uint *)FUN_14003f496();
  }
  else {
    puVar11 = &DAT_14ca99ff8;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14ca9a020) && (FUN_144b3d300(&DAT_14ca9a020), DAT_14ca9a020 == -1)) {
      _DAT_14ca9a008 = 0;
      DAT_14ca9a010 = 0;
      _DAT_14ca99ff8 = 0;
      DAT_14ca9a000 = 0;
      _DAT_14ca9a018 = 0;
      atexit(FUN_14322f458);
      _Init_thread_footer(&DAT_14ca9a020);
    }
  }
  iVar3 = *(int *)(param_1 + 0x20);
  DVar6 = GetCurrentThreadId();
  uVar7 = *puVar11;
  if ((uVar7 & 1) == 0) {
    LOCK();
    uVar1 = *puVar11;
    bVar12 = uVar7 == uVar1;
    if (bVar12) {
      *puVar11 = uVar7 | 1;
      uVar1 = uVar7;
    }
    uVar7 = uVar1;
    UNLOCK();
    if (!bVar12) goto LAB_144af2a3e;
    puVar11[1] = DVar6;
  }
  else {
LAB_144af2a3e:
    if (puVar11[1] == DVar6) {
      LOCK();
      *puVar11 = *puVar11 + 4;
      UNLOCK();
    }
    else {
      FUN_1402441ea(puVar11,uVar7);
    }
  }
  uVar7 = puVar11[4];
  puVar11[4] = uVar7 + 1;
  if (puVar11[5] < uVar7 + 1) {
    FUN_1446f48e2(puVar11 + 2,uVar7);
  }
  *(int *)(*(longlong *)(puVar11 + 2) + (longlong)(int)uVar7 * 4) = iVar3;
  *(undefined8 *)(*(longlong *)(puVar11 + 6) + (longlong)iVar3 * 8) = 0;
  uVar7 = *puVar11;
  if (uVar7 < 4) {
    puVar11[1] = 0;
    if (uVar7 < 2) {
      LOCK();
      uVar1 = *puVar11;
      if (uVar7 == uVar1) {
        *puVar11 = 0;
      }
      UNLOCK();
      if (uVar7 == uVar1) goto LAB_144af2a54;
    }
    FUN_140d366d2(puVar11);
  }
  else {
    LOCK();
    *puVar11 = *puVar11 - 4;
    UNLOCK();
  }
LAB_144af2a54:
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
LAB_144af2a5c:
  if (*(longlong *)(param_1 + 0x188) != 0) {
    LOCK();
    puVar11 = (uint *)(*(longlong *)(param_1 + 0x188) + 8);
    uVar7 = *puVar11;
    *puVar11 = *puVar11 - 1;
    UNLOCK();
    if ((uVar7 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  *(undefined ***)(param_1 + 0x18) = &PTR_FUN_14ae1ddd0;
  if (*(longlong *)(param_1 + 0x178) != 0) {
    LOCK();
    puVar11 = (uint *)(*(longlong *)(param_1 + 0x178) + 8);
    uVar7 = *puVar11;
    *puVar11 = *puVar11 - 1;
    UNLOCK();
    if ((uVar7 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x168) != 0) {
    LOCK();
    puVar11 = (uint *)(*(longlong *)(param_1 + 0x168) + 8);
    uVar7 = *puVar11;
    *puVar11 = *puVar11 - 1;
    UNLOCK();
    if ((uVar7 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar5 = *(longlong *)(param_1 + 0x158);
  if (lVar5 != 0) {
    LOCK();
    puVar11 = (uint *)(lVar5 + 8);
    uVar7 = *puVar11;
    *puVar11 = *puVar11 - 1;
    UNLOCK();
    if ((uVar7 & 0x3fffffff) == 1) {
      puVar11 = (uint *)(lVar5 + 8);
      LOCK();
      uVar7 = *puVar11;
      *puVar11 = *puVar11 | 0x40000000;
      UNLOCK();
      if ((uVar7 >> 0x1e & 1) == 0) {
        bVar2 = *(byte *)(lVar5 + 0xd);
        plVar8 = (longlong *)FUN_14001cc68(0x10,8);
        plVar8[1] = lVar5;
        plVar10 = DAT_14ca843c0;
        plVar9 = DAT_14ca843c8;
        if ((bVar2 & 2) == 0) {
          do {
            *plVar8 = (longlong)plVar10;
            LOCK();
            bVar12 = plVar10 != DAT_14ca843c0;
            plVar9 = plVar8;
            if (bVar12) {
              plVar10 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar9;
            UNLOCK();
          } while (bVar12);
        }
        else {
          do {
            *plVar8 = (longlong)plVar9;
            LOCK();
            bVar12 = plVar9 != DAT_14ca843c8;
            plVar10 = plVar8;
            if (bVar12) {
              plVar9 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar12);
        }
      }
    }
  }
  lVar5 = *(longlong *)(param_1 + 0x148);
  if (lVar5 != 0) {
    LOCK();
    puVar11 = (uint *)(lVar5 + 8);
    uVar7 = *puVar11;
    *puVar11 = *puVar11 - 1;
    UNLOCK();
    if ((uVar7 & 0x3fffffff) == 1) {
      puVar11 = (uint *)(lVar5 + 8);
      LOCK();
      uVar7 = *puVar11;
      *puVar11 = *puVar11 | 0x40000000;
      UNLOCK();
      if ((uVar7 >> 0x1e & 1) == 0) {
        bVar2 = *(byte *)(lVar5 + 0xd);
        plVar8 = (longlong *)FUN_14001cc68(0x10,8);
        plVar8[1] = lVar5;
        plVar10 = DAT_14ca843c0;
        plVar9 = DAT_14ca843c8;
        if ((bVar2 & 2) == 0) {
          do {
            *plVar8 = (longlong)plVar10;
            LOCK();
            bVar12 = plVar10 != DAT_14ca843c0;
            plVar9 = plVar8;
            if (bVar12) {
              plVar10 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar9;
            UNLOCK();
          } while (bVar12);
        }
        else {
          do {
            *plVar8 = (longlong)plVar9;
            LOCK();
            bVar12 = plVar9 != DAT_14ca843c8;
            plVar10 = plVar8;
            if (bVar12) {
              plVar9 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar12);
        }
      }
    }
  }
  *(undefined ***)(param_1 + 0x18) = &PTR_FUN_14a1ca4e0;
  if (*(longlong *)(param_1 + 0x138) != 0) {
    LOCK();
    puVar11 = (uint *)(*(longlong *)(param_1 + 0x138) + 8);
    uVar7 = *puVar11;
    *puVar11 = *puVar11 - 1;
    UNLOCK();
    if ((uVar7 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x130) != 0) {
    LOCK();
    puVar11 = (uint *)(*(longlong *)(param_1 + 0x130) + 8);
    uVar7 = *puVar11;
    *puVar11 = *puVar11 - 1;
    UNLOCK();
    if ((uVar7 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x128) != 0) {
    LOCK();
    puVar11 = (uint *)(*(longlong *)(param_1 + 0x128) + 8);
    uVar7 = *puVar11;
    *puVar11 = *puVar11 - 1;
    UNLOCK();
    if ((uVar7 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_1 + 0x18) = &PTR_FUN_14a38cd70;
  *(undefined1 *)(param_1 + 0x26) = 2;
  if ((*(int *)(param_1 + 0x20) != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144af2e4c FUN_144af2e4c body=232 status=ok
// SIG undefined FUN_144af2e4c(void)

void FUN_144af2e4c(uint *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined2 local_38;
  undefined1 local_36;
  undefined4 local_34;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0xffffffff;
  local_40 = DAT_14cb41328;
  if ((DAT_14cb41328 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  local_38 = 3;
  local_36 = 0;
  local_34 = 0xffffffff;
  iVar3 = FUN_144830b78(local_24);
  if ((longlong)(int)param_2[1] != 0) {
    lVar2 = *param_2;
    lVar4 = 0;
    do {
      if ((*(longlong *)(lVar2 + lVar4) == param_3) && (*(int *)(lVar2 + 8 + lVar4) == iVar3)) {
        iVar3 = (int)(lVar4 >> 2) * -0x55555555;
        if (iVar3 != -1) {
          *param_1 = (uint)*(ushort *)(param_2[2] + 2 + (longlong)iVar3 * 0x20);
        }
        break;
      }
      lVar1 = lVar2 + lVar4;
      lVar4 = lVar4 + 0xc;
    } while (lVar1 + 0xc != lVar2 + (longlong)(int)param_2[1] * 0xc);
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144af2f36 FUN_144af2f36 body=125 status=ok
// SIG undefined FUN_144af2f36(void)

void FUN_144af2f36(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((*(int *)(param_1 + 0x86c) != 4 && *(int *)(param_1 + 0x86c) != param_2) &&
     (*(int *)(param_1 + 0x86c) = param_2, param_2 == 0)) {
    *(byte *)(param_1 + 0x798) = *(byte *)(param_1 + 0x798) | 1;
    iVar1 = *(int *)(param_1 + 0x110);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x108);
      lVar4 = 0;
      do {
        lVar3 = (**(code **)(**(longlong **)(lVar2 + lVar4) + 0x68))();
        if ((lVar3 != 0) && (*(int *)(lVar3 + 0xd4) != 4)) {
          *(undefined4 *)(lVar3 + 0xd4) = 0;
        }
        lVar4 = lVar4 + 0x10;
      } while ((longlong)iVar1 * 0x10 != lVar4);
    }
  }
  return;
}



// FUNCTION 144af2fb4 FUN_144af2fb4 body=342 status=ok
// SIG undefined FUN_144af2fb4(void)

longlong FUN_144af2fb4(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
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
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0x4c) != 0) {
    uVar1 = *(uint *)(param_1 + 0x48);
    lVar3 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_144af3046;
    plVar2 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar2 != (longlong *)0x0) &&
       ((((int)plVar2[2] == *(int *)(param_1 + 0x4c) && ((*(uint *)(plVar2 + 1) & 0x10200000) == 0))
        && (lVar3 = *plVar2, lVar3 != 0)))) {
      if (DAT_14cb39ca0 == 0) {
        local_30 = &local_18;
        local_18 = FUN_144a7958c;
        local_20 = FUN_14081d0ea;
        local_28 = &LAB_14638c6c0;
        local_38 = &LAB_14811044c;
        local_40 = &LAB_1407f5cf8;
        local_48 = L"Engine";
        local_50 = 0;
        local_58 = 0x10000004;
        local_60 = 0x10;
        local_68 = 0x8e0;
        FUN_14081cfa3(L"/Script/Niagara",L"NiagaraComponent",&DAT_14cb39ca0,FUN_14646d392);
      }
      if ((*(int *)(DAT_14cb39ca0 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cb39ca0 + 0x38) * 8) == DAT_14cb39ca0 + 0x30)) {
        lVar3 = *(longlong *)(lVar3 + 0x120);
      }
      goto LAB_144af3046;
    }
  }
  lVar3 = 0;
LAB_144af3046:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144af310c FUN_144af310c body=9 status=ok
// SIG undefined FUN_144af310c(void)

void FUN_144af310c(longlong param_1)

{
  FUN_1400bd118(*(undefined8 *)(param_1 + 0x30));
  return;
}



// FUNCTION 144af3116 FUN_144af3116 body=5852 status=ok
// SIG undefined FUN_144af3116(void)

void FUN_144af3116(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auVar6 [16];
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
  undefined8 uVar17;
  int iVar18;
  longlong lVar19;
  double *pdVar20;
  double *pdVar21;
  uint uVar22;
  ulonglong uVar23;
  float fVar24;
  double dVar25;
  double dVar26;
  float fVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined4 uVar38;
  float fVar39;
  float fVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined1 auStack_398 [32];
  double local_378;
  double local_370;
  float local_364;
  float local_360;
  float local_35c;
  undefined1 local_358 [16];
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  double local_320;
  float local_314;
  float local_310;
  float local_30c;
  float local_308;
  float local_304;
  float local_300;
  float local_2fc;
  float local_2f8;
  float local_2f4;
  double local_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double local_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  undefined1 local_298 [16];
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  double local_268;
  undefined8 uStack_260;
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  double local_238;
  undefined8 uStack_230;
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8 [4];
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  undefined1 local_128 [16];
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  undefined1 local_f8 [24];
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_398;
  uVar22 = *(byte *)(param_1 + 0x790) & 1;
  lVar3 = param_1 + (ulonglong)(uVar22 << 9);
  local_1f8 = *(double *)(param_1 + 0x8c0);
  dStack_1f0 = *(double *)(param_1 + 0x8c8);
  local_208 = *(double *)(param_1 + 0x8d0);
  dStack_200 = *(double *)(param_1 + 0x8d8);
  local_2e8 = *(double *)(param_1 + 0x8e0);
  dStack_2e0 = *(double *)(param_1 + 0x8e8);
  dVar28 = local_1f8 + local_1f8;
  dVar33 = dStack_1f0 + dStack_1f0;
  dVar7 = local_208 + local_208;
  dVar32 = local_1f8 * dVar28;
  dVar29 = dStack_1f0 * dVar33;
  auVar6._8_4_ = SUB84(dVar29,0);
  auVar6._0_8_ = dVar32;
  auVar6._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
  local_168 = 1.0 - (local_208 * dVar7 + dVar29);
  dStack_140 = 1.0 - (local_208 * dVar7 + dVar32);
  dVar30 = *(double *)(param_1 + 0x8f0);
  uVar17 = *(undefined8 *)(param_1 + 0x8f8);
  local_118 = 1.0 - (dVar32 + dVar29);
  dVar11 = 0.0 - (dVar32 + auVar6._8_8_);
  dVar9 = *(double *)(param_1 + 0x900);
  dVar16 = *(double *)(param_1 + 0x908);
  dVar10 = *(double *)(param_1 + 0x910);
  local_158 = *(double *)(param_1 + 0x8c0) * dVar7;
  dVar31 = *(double *)(param_1 + 0x8c0) * dVar28;
  dVar29 = *(double *)(param_1 + 0x8d8);
  dVar32 = *(double *)(param_1 + 0x8d8);
  local_148 = dVar7 * dVar29;
  dVar8 = dVar28 * dVar32;
  dVar29 = dVar33 * dVar29;
  dVar28 = dVar28 * dVar32;
  dStack_160 = dVar33 * local_1f8 + local_148;
  local_138 = dVar7 * dStack_1f0 + dVar8;
  dVar32 = dVar29 + local_158;
  dVar12 = dVar28 + dVar31;
  dVar13 = dVar9 * dStack_160;
  dVar15 = dVar16 * local_138;
  uVar41 = (undefined4)((ulonglong)dVar15 >> 0x20);
  local_148 = dVar33 * local_1f8 - local_148;
  dVar8 = dVar7 * dStack_1f0 - dVar8;
  local_158 = local_158 - dVar29;
  dVar31 = dVar31 - dVar28;
  local_2f0 = *(double *)(param_1 + 0x8e8);
  dStack_150 = 0.0;
  dVar7 = local_158 * dVar9;
  dVar9 = dVar9 * local_168;
  dVar29 = dVar16 * dStack_140;
  dVar16 = dVar16 * local_148;
  dVar28 = dVar10 * dVar8;
  uVar42 = (undefined4)((ulonglong)dVar28 >> 0x20);
  dStack_130 = 0.0;
  local_128._8_4_ = SUB84(dVar8,0);
  local_128._0_8_ = dVar32;
  local_128._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  dStack_110 = 0.0;
  local_f8._8_4_ = 0;
  local_f8._0_8_ = dVar30;
  local_f8._12_4_ = 0x3ff00000;
  uVar38 = (undefined4)((ulonglong)dVar29 >> 0x20);
  dVar32 = dVar32 * dVar10;
  dVar10 = local_118 * dVar10;
  local_2fc = (float)dVar9;
  local_2f8 = (float)dVar13;
  *(float *)(lVar3 + 0x330) = local_2fc;
  *(float *)(lVar3 + 0x334) = local_2f8;
  local_2f4 = (float)dVar7;
  *(float *)(lVar3 + 0x338) = local_2f4;
  *(undefined4 *)(lVar3 + 0x33c) = 0;
  local_348._8_4_ = SUB84(dVar28,0);
  local_348._0_8_ = dVar16;
  local_348._12_4_ = uVar42;
  local_308 = (float)dVar16;
  *(float *)(lVar3 + 0x340) = local_308;
  local_358._8_4_ = SUB84(dVar29,0);
  local_358._0_8_ = dVar29;
  local_358._12_4_ = uVar38;
  local_304 = (float)dVar29;
  *(float *)(lVar3 + 0x344) = local_304;
  local_300 = (float)dVar15;
  *(float *)(lVar3 + 0x348) = local_300;
  *(undefined4 *)(lVar3 + 0x34c) = 0;
  local_314 = (float)dVar32;
  local_338._8_4_ = SUB84(dVar28,0);
  local_338._0_8_ = dVar28;
  local_338._12_4_ = uVar42;
  local_310 = (float)dVar28;
  *(float *)(lVar3 + 0x350) = local_314;
  *(float *)(lVar3 + 0x354) = local_310;
  local_30c = (float)dVar10;
  *(float *)(lVar3 + 0x358) = local_30c;
  *(undefined4 *)(lVar3 + 0x35c) = 0;
  local_35c = (float)local_2e8;
  *(float *)(lVar3 + 0x360) = local_35c;
  local_360 = (float)local_2f0;
  *(float *)(lVar3 + 0x364) = local_360;
  local_364 = (float)dVar30;
  *(float *)(lVar3 + 0x368) = local_364;
  *(undefined4 *)(lVar3 + 0x36c) = 0x3f800000;
  local_108 = local_2e8;
  dStack_100 = dStack_2e0;
  if (((((9.99999993922529e-09 < ABS(dVar9)) || (9.99999993922529e-09 < ABS(dVar13))) ||
       (9.99999993922529e-09 < ABS(dVar7))) ||
      (((9.99999993922529e-09 < ABS(dVar16) || (9.99999993922529e-09 < ABS(dVar29))) ||
       ((9.99999993922529e-09 < ABS(dVar15) ||
        ((9.99999993922529e-09 < ABS(dVar32) || (9.99999993922529e-09 < ABS(dVar28))))))))) ||
     (9.99999993922529e-09 < ABS(dVar10))) {
    dVar8 = dVar30 * -0.0;
    dVar14 = dVar10 + dVar8;
    dVar33 = dVar15 + dVar8;
    local_218._8_4_ = SUB84(dVar11,0);
    local_218._0_8_ = dVar10;
    local_218._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    dVar11 = dVar15 * 0.0 + dVar10 * -0.0;
    dVar8 = dVar8 + dVar7;
    local_228._8_4_ = SUB84(dVar31,0);
    local_228._0_8_ = dVar7;
    local_228._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
    dVar31 = dVar10 * -0.0 + dVar7 * 0.0;
    local_258._8_4_ = SUB84(dVar15,0);
    local_258._0_8_ = dVar15;
    local_258._12_4_ = uVar41;
    local_320 = dVar15 * -0.0 + dVar7 * 0.0;
    local_2a0 = local_2f0 * dVar11 + (dVar29 * dVar14 - dVar33 * dVar28);
    local_2a8 = local_2f0 * dVar31 + (dVar13 * dVar14 - dVar8 * dVar28);
    local_2b0 = local_2f0 * local_320 + (dVar13 * dVar33 - dVar8 * dVar29);
    local_248._8_4_ = SUB84(dVar15,0);
    local_248._0_8_ = dVar13;
    local_248._12_4_ = uVar41;
    local_2b8 = dVar28 * local_320 + (dVar13 * dVar11 - dVar31 * dVar29);
    dVar7 = (dVar32 * local_2b0 + (dVar9 * local_2a0 - local_2a8 * dVar16)) - local_2e8 * local_2b8;
    local_238 = dVar30;
    uStack_230 = uVar17;
    if (((dVar7 != 0.0) || (NAN(dVar7))) && (iVar18 = _finite(dVar7), iVar18 != 0)) {
      local_268 = 1.0 / dVar7;
      uStack_260 = 0;
      local_2c0 = local_2e8 * dVar31 + (dVar14 * dVar9 - dVar8 * dVar32);
      dVar25 = -(double)local_348._0_8_;
      dVar30 = local_2e8 * local_320;
      local_320 = local_320 * dVar32 + dVar11 * dVar9 + dVar31 * dVar25;
      dVar7 = local_2f0 * -0.0;
      dVar31 = (double)local_358._0_8_ * 0.0 + (double)local_338._0_8_ * -0.0;
      local_2c8 = local_2e8 * dVar31 +
                  ((double)local_348._0_8_ * (dVar7 + (double)local_338._0_8_) -
                  (dVar7 + (double)local_358._0_8_) * dVar32);
      dVar13 = (double)local_338._0_8_ * -0.0 + (double)local_248._0_8_ * 0.0;
      local_278._8_4_ = local_348._8_4_;
      local_278._0_8_ = dVar25;
      local_278._12_4_ = local_348._12_4_ ^ 0x80000000;
      local_298._8_4_ = SUB84(dVar29,0);
      local_298._0_8_ = dVar9;
      local_298._12_4_ = uVar38;
      dVar29 = (double)local_358._0_8_ * -0.0 + (double)local_248._0_8_ * 0.0;
      local_2d0 = local_2e8 * dVar29 +
                  (dVar7 + (double)local_358._0_8_) * dVar9 +
                  (dVar7 + (double)local_248._0_8_) * dVar25;
      local_2d8 = dVar29 * dVar32 + dVar31 * dVar9 + dVar13 * dVar25;
      dVar16 = (double)local_338._0_8_ * local_238 - local_2f0 * (double)local_218._0_8_;
      dVar15 = (double)local_358._0_8_ * local_238 - local_2f0 * (double)local_258._0_8_;
      local_288._8_4_ = SUB84(dVar12,0);
      local_288._0_8_ = dVar32;
      local_288._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
      dVar26 = (double)local_348._0_8_ * dVar16;
      dVar12 = (double)local_358._0_8_ * (double)local_218._0_8_ -
               (double)local_338._0_8_ * (double)local_258._0_8_;
      dVar31 = local_238 * (double)local_248._0_8_ - local_2f0 * (double)local_228._0_8_;
      dVar28 = (double)local_218._0_8_ * (double)local_248._0_8_ -
               (double)local_338._0_8_ * (double)local_228._0_8_;
      dVar29 = (double)local_248._0_8_ * (double)local_258._0_8_ -
               (double)local_228._0_8_ * (double)local_358._0_8_;
      dVar10 = -local_268;
      local_378 = (local_2e8 * dVar11 + ((double)local_348._0_8_ * dVar14 - dVar33 * dVar32)) *
                  dVar10;
      local_370 = (dVar30 + dVar33 * dVar9 + dVar8 * dVar25) * dVar10;
      local_348._0_8_ =
           (local_2e8 * dVar13 +
           ((dVar7 + (double)local_338._0_8_) * dVar9 - (dVar7 + (double)local_248._0_8_) * dVar32))
           * dVar10;
      local_358._0_8_ = (local_2e8 * dVar28 + (dVar16 * dVar9 - dVar31 * dVar32)) * local_268;
      dVar7 = local_2a8 * dVar10;
      dVar8 = local_2b8 * dVar10;
      dVar31 = (local_2e8 * dVar29 + dVar15 * dVar9 + dVar31 * dVar25) * dVar10;
      dVar11 = local_2a0 * local_268;
      dVar13 = local_2b0 * local_268;
      dVar16 = local_2c0 * local_268;
      dVar30 = local_320 * local_268;
      dVar33 = local_2d0 * local_268;
      dVar29 = (dVar29 * dVar32 + dVar12 * dVar9 + dVar28 * dVar25) * local_268;
      dVar28 = local_2c8 * local_268;
      dVar9 = local_2d8 * dVar10;
      dVar32 = (local_2e8 * dVar12 + (dVar26 - dVar15 * dVar32)) * dVar10;
      goto LAB_144af3ae1;
    }
  }
  local_378 = DAT_14c846420;
  local_370 = DAT_14c846430;
  local_348._0_8_ = DAT_14c846448;
  local_358._0_8_ = DAT_14c846468;
  dVar7 = DAT_14c846408;
  dVar8 = DAT_14c846418;
  dVar31 = DAT_14c846470;
  dVar11 = DAT_14c846400;
  dVar13 = DAT_14c846410;
  dVar16 = DAT_14c846428;
  dVar30 = DAT_14c846438;
  dVar33 = DAT_14c846450;
  dVar29 = DAT_14c846478;
  dVar28 = DAT_14c846440;
  dVar9 = DAT_14c846458;
  dVar32 = DAT_14c846460;
LAB_144af3ae1:
  *(float *)(lVar3 + 0x370) = (float)dVar11;
  *(float *)(lVar3 + 0x374) = (float)dVar7;
  *(float *)(lVar3 + 0x378) = (float)dVar13;
  *(float *)(lVar3 + 0x37c) = (float)dVar8;
  *(float *)(lVar3 + 0x380) = (float)local_378;
  *(float *)(lVar3 + 900) = (float)dVar16;
  *(float *)(lVar3 + 0x388) = (float)local_370;
  *(float *)(lVar3 + 0x38c) = (float)dVar30;
  *(float *)(lVar3 + 0x390) = (float)dVar28;
  *(float *)(lVar3 + 0x394) = (float)(double)local_348._0_8_;
  *(float *)(lVar3 + 0x398) = (float)dVar33;
  *(float *)(lVar3 + 0x39c) = (float)dVar9;
  *(float *)(lVar3 + 0x3a0) = (float)dVar32;
  *(float *)(lVar3 + 0x3a4) = (float)(double)local_358._0_8_;
  *(float *)(lVar3 + 0x3a8) = (float)dVar31;
  *(float *)(lVar3 + 0x3ac) = (float)dVar29;
  *(float *)(lVar3 + 0x3b0) = local_2fc;
  *(float *)(lVar3 + 0x3b4) = local_308;
  *(float *)(lVar3 + 0x3b8) = local_314;
  *(float *)(lVar3 + 0x3bc) = local_35c;
  *(float *)(lVar3 + 0x3c0) = local_2f8;
  *(float *)(lVar3 + 0x3c4) = local_304;
  *(float *)(lVar3 + 0x3c8) = local_310;
  *(float *)(lVar3 + 0x3cc) = local_360;
  *(float *)(lVar3 + 0x3d0) = local_2f4;
  *(float *)(lVar3 + 0x3d4) = local_300;
  *(float *)(lVar3 + 0x3d8) = local_30c;
  *(float *)(lVar3 + 0x3dc) = local_364;
  *(undefined8 *)(lVar3 + 0x3e0) = 0;
  *(undefined8 *)(lVar3 + 1000) = 0x3f80000000000000;
  *(float *)(lVar3 + 0x3f0) = (float)dVar11;
  *(float *)(lVar3 + 0x3f4) = (float)local_378;
  *(float *)(lVar3 + 0x3f8) = (float)dVar28;
  *(float *)(lVar3 + 0x3fc) = (float)dVar32;
  *(float *)(lVar3 + 0x400) = (float)dVar7;
  *(float *)(lVar3 + 0x404) = (float)dVar16;
  *(float *)(lVar3 + 0x408) = (float)(double)local_348._0_8_;
  *(float *)(lVar3 + 0x40c) = (float)(double)local_358._0_8_;
  *(float *)(lVar3 + 0x410) = (float)dVar13;
  *(float *)(lVar3 + 0x414) = (float)local_370;
  *(float *)(lVar3 + 0x418) = (float)dVar33;
  *(float *)(lVar3 + 0x41c) = (float)dVar31;
  *(float *)(lVar3 + 0x420) = (float)dVar8;
  *(float *)(lVar3 + 0x424) = (float)dVar30;
  *(float *)(lVar3 + 0x428) = (float)dVar9;
  *(float *)(lVar3 + 0x42c) = (float)dVar29;
  local_348._0_4_ = (float)dStack_130;
  *(float *)(lVar3 + 0x430) = (float)local_168;
  *(float *)(lVar3 + 0x434) = (float)dStack_160;
  *(float *)(lVar3 + 0x438) = (float)local_158;
  *(float *)(lVar3 + 0x43c) = (float)dStack_150;
  local_358._8_8_ = 0;
  local_358._0_8_ = local_148;
  local_338._8_8_ = 0;
  local_338._0_8_ = dStack_140;
  *(float *)(lVar3 + 0x440) = (float)local_148;
  *(float *)(lVar3 + 0x444) = (float)dStack_140;
  *(float *)(lVar3 + 0x448) = (float)local_138;
  *(float *)(lVar3 + 0x44c) = (float)dStack_130;
  *(float *)(lVar3 + 0x450) = (float)(double)local_128._0_8_;
  *(float *)(lVar3 + 0x454) = (float)(double)local_128._8_8_;
  *(float *)(lVar3 + 0x458) = (float)local_118;
  *(float *)(lVar3 + 0x45c) = (float)dStack_110;
  *(float *)(lVar3 + 0x460) = (float)local_108;
  *(float *)(lVar3 + 0x464) = (float)dStack_100;
  *(float *)(lVar3 + 0x468) = (float)(double)local_f8._0_8_;
  *(float *)(lVar3 + 0x46c) = (float)(double)local_f8._8_8_;
  lVar4 = param_1 + 0x2b0 + (ulonglong)(uVar22 << 6);
  if ((((9.99999993922529e-09 < ABS(local_168)) || (9.99999993922529e-09 < ABS(dStack_160))) ||
      (((9.99999993922529e-09 < ABS(local_158) ||
        ((9.99999993922529e-09 < ABS(local_148) || (9.99999993922529e-09 < ABS(dStack_140))))) ||
       (9.99999993922529e-09 < ABS(local_138))))) ||
     (((9.99999993922529e-09 < ABS((double)local_128._0_8_) ||
       (9.99999993922529e-09 < ABS((double)local_128._8_8_))) ||
      (9.99999993922529e-09 < ABS(local_118))))) {
    FUN_14007522e(local_1e8,&local_168);
  }
  else {
    pdVar20 = &DAT_14c846400;
    pdVar21 = local_1e8;
    for (lVar19 = 0x10; lVar19 != 0; lVar19 = lVar19 + -1) {
      *pdVar21 = *pdVar20;
      pdVar20 = pdVar20 + 1;
      pdVar21 = pdVar21 + 1;
    }
  }
  *(float *)(lVar3 + 0x470) = (float)local_1e8[0];
  *(float *)(lVar3 + 0x474) = (float)local_1e8[1];
  *(float *)(lVar3 + 0x478) = (float)local_1e8[2];
  *(float *)(lVar3 + 0x47c) = (float)local_1e8[3];
  *(float *)(lVar3 + 0x480) = (float)local_1c8;
  *(float *)(lVar3 + 0x484) = (float)local_1c0;
  *(float *)(lVar3 + 0x488) = (float)local_1b8;
  *(float *)(lVar3 + 0x48c) = (float)local_1b0;
  *(float *)(lVar3 + 0x490) = (float)local_1a8;
  *(float *)(lVar3 + 0x494) = (float)local_1a0;
  *(float *)(lVar3 + 0x498) = (float)local_198;
  *(float *)(lVar3 + 0x49c) = (float)local_190;
  *(float *)(lVar3 + 0x4a0) = (float)local_188;
  *(float *)(lVar3 + 0x4a4) = (float)local_180;
  fVar27 = (float)local_208;
  *(float *)(lVar3 + 0x4a8) = (float)local_178;
  fVar34 = (float)dStack_200;
  *(float *)(lVar3 + 0x4ac) = (float)local_170;
  fVar24 = (float)local_1f8;
  fVar35 = (float)dStack_1f0;
  *(float *)(lVar3 + 0x4b0) = fVar24;
  *(float *)(lVar3 + 0x4b4) = fVar35;
  *(float *)(lVar3 + 0x4b8) = fVar27;
  *(float *)(lVar3 + 0x4bc) = fVar34;
  *(float *)(lVar3 + 0x4c0) = local_35c;
  *(float *)(lVar3 + 0x4c4) = local_360;
  *(float *)(lVar3 + 0x4c8) = local_364;
  dVar32 = *(double *)(param_1 + 0x930);
  dVar29 = *(double *)(param_1 + 0x928);
  *(float *)(lVar3 + 0x4d0) = (float)*(double *)(param_1 + 0x920);
  *(float *)(lVar3 + 0x4d4) = (float)dVar29;
  *(float *)(lVar3 + 0x4d8) = (float)dVar32;
  fVar36 = fVar35 * -0.0 + fVar24 * 0.0;
  fVar37 = fVar24 * 0.0 - fVar35;
  fVar39 = fVar24 * -0.0 + fVar27;
  fVar40 = fVar35 * 0.0 + fVar27 * -0.0;
  fVar37 = fVar37 + fVar37;
  fVar39 = fVar39 + fVar39;
  fVar40 = fVar40 + fVar40;
  *(float *)(lVar3 + 0x4e0) = (fVar35 * fVar37 - fVar39 * fVar27) + fVar40 * fVar34 + 1.0;
  *(float *)(lVar3 + 0x4e4) = (fVar27 * fVar40 - fVar37 * fVar24) + fVar39 * fVar34 + 0.0;
  *(float *)(lVar3 + 0x4e8) = (fVar24 * fVar39 - fVar40 * fVar35) + fVar37 * fVar34 + 0.0;
  fVar39 = fVar35 * -0.0 + fVar24;
  fVar37 = fVar24 * -0.0 + fVar27 * 0.0;
  fVar40 = fVar35 * 0.0 - fVar27;
  fVar39 = fVar39 + fVar39;
  fVar37 = fVar37 + fVar37;
  fVar40 = fVar40 + fVar40;
  *(float *)(lVar3 + 0x4f0) = (fVar35 * fVar39 - fVar37 * fVar27) + fVar40 * fVar34 + 0.0;
  *(float *)(lVar3 + 0x4f4) = (fVar27 * fVar40 - fVar39 * fVar24) + fVar37 * fVar34 + 1.0;
  *(float *)(lVar3 + 0x4f8) = (fVar24 * fVar37 - fVar40 * fVar35) + fVar39 * fVar34 + 0.0;
  fVar39 = fVar27 * 0.0 - fVar24;
  fVar37 = fVar27 * -0.0 + fVar35;
  fVar36 = fVar36 + fVar36;
  fVar39 = fVar39 + fVar39;
  fVar37 = fVar37 + fVar37;
  *(float *)(lVar3 + 0x500) = (fVar35 * fVar36 - fVar39 * fVar27) + fVar34 * fVar37 + 0.0;
  *(float *)(lVar3 + 0x504) = (fVar27 * fVar37 - fVar36 * fVar24) + fVar39 * fVar34 + 0.0;
  *(float *)(lVar3 + 0x508) = (fVar24 * fVar39 - fVar37 * fVar35) + fVar36 * fVar34 + 1.0;
  dVar32 = *(double *)(param_1 + 0x910);
  dVar29 = *(double *)(param_1 + 0x908);
  *(float *)(lVar3 + 0x510) = (float)*(double *)(param_1 + 0x900);
  *(float *)(lVar3 + 0x514) = (float)dVar29;
  *(float *)(lVar3 + 0x518) = (float)dVar32;
  uVar38 = *(undefined4 *)(param_1 + 0x14);
  *(undefined8 *)(lVar3 + 0x520) = *(undefined8 *)(param_1 + 0xc);
  *(undefined4 *)(lVar3 + 0x528) = uVar38;
  *(undefined4 *)(lVar3 + 0x52c) = 0x47800000;
  *(undefined4 *)(lVar4 + 0x18) = *(undefined4 *)(param_1 + 0x948);
  *(undefined4 *)(lVar4 + 0x1c) = *(undefined4 *)(param_1 + 0x94c);
  *(undefined4 *)(lVar4 + 0x20) = *(undefined4 *)(param_1 + 0x1c);
  *(int *)(lVar4 + 0x24) = *(int *)(param_1 + 0xe0) + *(int *)(param_1 + 0xdc);
  lVar3 = *(longlong *)(param_1 + 0x20);
  plVar5 = *(longlong **)(param_1 + 0x28);
  if (plVar5 == (longlong *)0x0) {
    *(undefined4 *)(lVar4 + 0x28) = *(undefined4 *)(lVar3 + 0x574);
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *(undefined4 *)(lVar4 + 0x28) = *(undefined4 *)(lVar3 + 0x574);
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x20);
  plVar5 = *(longlong **)(param_1 + 0x28);
  if (plVar5 == (longlong *)0x0) {
    *(undefined4 *)(lVar4 + 0x2c) = *(undefined4 *)(lVar3 + 0x570);
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *(undefined4 *)(lVar4 + 0x2c) = *(undefined4 *)(lVar3 + 0x570);
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x20);
  plVar5 = *(longlong **)(param_1 + 0x28);
  if (plVar5 == (longlong *)0x0) {
    *(undefined4 *)(lVar4 + 0x30) = *(undefined4 *)(lVar3 + 0x578);
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *(undefined4 *)(lVar4 + 0x30) = *(undefined4 *)(lVar3 + 0x578);
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  uVar23 = (ulonglong)(uVar22 << 5);
  *(undefined4 *)(param_1 + 0x270 + uVar23) = *(undefined4 *)(param_1 + 0x944);
  fVar24 = *(float *)(param_1 + 0x938);
  *(float *)(param_1 + 0x274 + uVar23) = fVar24;
  *(uint *)(param_1 + 0x278 + uVar23) = -(uint)(0.0 < fVar24) & (uint)(1.0 / fVar24);
  *(undefined4 *)(param_1 + 0x280 + uVar23) = *(undefined4 *)(param_1 + 0x940);
  *(undefined4 *)(param_1 + 0x27c + uVar23) = *(undefined4 *)(param_1 + 0x93c);
  iVar18 = DAT_14c762948;
  if (DAT_14c762948 == -1) {
    iVar18 = DAT_14c762934;
  }
  if (DAT_14c762938 != -1) {
    iVar18 = DAT_14c762938;
  }
  *(int *)(param_1 + 0x284 + uVar23) = iVar18;
  if ((0 < *(int *)(param_1 + 0x250)) && ((*(byte *)(param_1 + 0x268) & 7) != 0)) {
    FUN_14004222e(param_1 + 0x1e8);
  }
  *(uint *)(param_1 + 0x268) = (*(uint *)(param_1 + 0x268) & 0xfffffff8) + 1;
  if ((local_e0 ^ (ulonglong)auStack_398) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144af47f4 FUN_144af47f4 body=324 status=ok
// SIG undefined FUN_144af47f4(void)

void FUN_144af47f4(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  code *pcVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  plVar8 = (longlong *)param_1[0x10];
  if ((longlong *)param_1[0x10] == (longlong *)0x0) {
    plVar8 = param_1;
  }
  if ((longlong)(int)param_1[0x11] != 0) {
    plVar7 = plVar8 + (longlong)(int)param_1[0x11] * 2;
    do {
      lVar2 = *plVar8;
      lVar3 = plVar8[1];
      puVar4 = *(undefined8 **)(lVar2 + 8);
      if (puVar4 != (undefined8 *)0x0) {
        pcVar5 = *(code **)*puVar4;
        if (pcVar5 == FUN_1448435c6) {
          *puVar4 = &PTR_FUN_14ae1b180;
          if (puVar4[0xb] != 0) {
            FUN_1400020a8();
          }
          if (puVar4[9] != 0) {
            FUN_1400020a8();
          }
          lVar6 = puVar4[7];
        }
        else {
          if (pcVar5 != FUN_140137b66) {
            (*pcVar5)(puVar4,1);
            goto LAB_144af4893;
          }
          *puVar4 = &PTR_FUN_14ae0dda0;
          if (puVar4[0x14] != 0) {
            FUN_1400020a8();
          }
          if (puVar4[0x12] != 0) {
            FUN_1400020a8();
          }
          if (puVar4[0x10] != 0) {
            FUN_1400020a8();
          }
          lVar6 = puVar4[0xe];
        }
        if (lVar6 != 0) {
          FUN_1400020a8();
        }
        *puVar4 = &PTR_FUN_14ae09a28;
        if (puVar4[4] != 0) {
          LOCK();
          piVar1 = (int *)(puVar4[4] + 8);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
        }
        FUN_1400020a8(puVar4);
      }
LAB_144af4893:
      *(longlong *)(lVar2 + 8) = lVar3;
      plVar8 = plVar8 + 2;
    } while (plVar8 != plVar7);
  }
  return;
}



// FUNCTION 144af4938 FUN_144af4938 body=1109 status=ok
// SIG undefined FUN_144af4938(void)

void FUN_144af4938(longlong *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint *puVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong *plVar18;
  undefined8 *puVar19;
  longlong *plVar20;
  longlong lVar21;
  longlong *plVar22;
  longlong *plVar23;
  uint uVar24;
  int iVar25;
  longlong *plVar26;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  ulonglong local_80;
  longlong *local_78;
  longlong local_70;
  uint *local_68;
  longlong *local_60;
  longlong *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar26 = (longlong *)param_1[0x30];
  if ((longlong *)param_1[0x30] == (longlong *)0x0) {
    plVar26 = param_1;
  }
  if ((longlong)(int)param_1[0x31] != 0) {
    local_60 = plVar26 + (longlong)(int)param_1[0x31] * 0xc;
    do {
      lVar13 = *plVar26;
      iVar25 = *(int *)(lVar13 + 0x58);
      *(uint *)(lVar13 + 0x58) = iVar25 + 1U;
      if (*(uint *)(lVar13 + 0x5c) < iVar25 + 1U) {
        FUN_1447502d0((longlong *)(lVar13 + 0x50),iVar25);
      }
      lVar13 = *(longlong *)(lVar13 + 0x50);
      lVar12 = (longlong)iVar25 * 0x58;
      puVar19 = (undefined8 *)(lVar13 + lVar12);
      *(undefined8 *)(lVar13 + lVar12) = 0;
      iVar25 = (int)plVar26[2];
      lVar21 = plVar26[1];
      *(int *)(lVar13 + 8 + lVar12) = iVar25;
      if (iVar25 == 0) {
        *(undefined4 *)((longlong)puVar19 + 0xc) = 0;
      }
      else {
        FUN_1481f79f8(puVar19,iVar25);
        FUN_1481f7a51(*puVar19,lVar21,iVar25);
      }
      plVar23 = plVar26 + 3;
      plVar18 = plVar23;
      plVar20 = puVar19 + 2;
      for (lVar13 = 8; lVar13 != 0; lVar13 = lVar13 + -1) {
        *plVar20 = *plVar18;
        plVar18 = plVar18 + 1;
        plVar20 = plVar20 + 1;
      }
      *(short *)(puVar19 + 10) = (short)plVar26[0xb];
      plVar18 = (longlong *)plVar26[5];
      if (plVar18 != (longlong *)0x0) {
        lVar13 = *plVar18;
        uVar2 = *(uint *)(plVar18 + 6);
        if (uVar2 == 0) {
          uVar17 = 1;
          uVar16 = 0;
          uVar7 = 0;
          iVar25 = 0;
        }
        else {
          puVar8 = (uint *)plVar18[5];
          if ((uint *)plVar18[5] == (uint *)0x0) {
            puVar8 = (uint *)(plVar18 + 3);
          }
          uVar7 = *puVar8;
          if (uVar7 == 0) {
            iVar25 = uVar2 + 0x1e;
            if (-1 < (int)(uVar2 - 1)) {
              iVar25 = uVar2 - 1;
            }
            uVar16 = 0;
            uVar17 = (ulonglong)(uint)(iVar25 >> 5);
            if (iVar25 >> 5 < 1) {
              uVar17 = uVar16;
            }
            iVar25 = 0;
            do {
              if (uVar17 == uVar16) goto LAB_144af49fa;
              iVar25 = iVar25 + 0x20;
              uVar7 = puVar8[uVar16 + 1];
              uVar16 = uVar16 + 1;
            } while (uVar7 == 0);
          }
          else {
            uVar16 = 0;
            iVar25 = 0;
          }
          uVar17 = (ulonglong)(-uVar7 & uVar7);
          uVar1 = uVar17 * 2 + 1;
          lVar21 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar21 == 0; lVar21 = lVar21 + -1) {
            }
          }
          uVar7 = (iVar25 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
          if ((int)uVar2 <= (int)uVar7) {
            uVar7 = uVar2;
          }
        }
        if (uVar7 != uVar2) {
          uVar24 = 0xffffffff;
          local_80 = (ulonglong)uVar2;
          local_70 = lVar13;
          local_68 = (uint *)(plVar18 + 3);
          do {
            plVar20 = *(longlong **)(plVar18[1] + (longlong)(int)uVar7 * 0x18);
            puVar19 = (undefined8 *)
                      (*(int *)(plVar18[1] + 8 + (longlong)(int)uVar7 * 0x18) + lVar13);
            pcVar3 = *(code **)(*plVar20 + 0x10);
            if (pcVar3 == FUN_14475043e) {
              plVar22 = plVar20 + 2;
              lVar13 = *plVar23;
              if ((int)plVar20[3] != *(int *)((longlong)plVar20 + 0x44)) {
                plVar14 = plVar20 + 9;
                if ((longlong *)plVar20[10] != (longlong *)0x0) {
                  plVar14 = (longlong *)plVar20[10];
                }
                iVar15 = *(int *)((longlong)plVar14 +
                                 (ulonglong)
                                 ((int)plVar20[0xb] - 1U &
                                 (int)((ulonglong)lVar13 >> 0x20) * 0x17 + (int)lVar13) * 4);
                if (iVar15 != -1) {
                  do {
                    lVar21 = *plVar22 + (longlong)iVar15 * 0x20;
                    if (*(longlong *)(*plVar22 + (longlong)iVar15 * 0x20) == lVar13) {
                      if (lVar21 != 0) goto LAB_144af4b44;
                      break;
                    }
                    iVar15 = *(int *)(lVar21 + 0x18);
                  } while (iVar15 != -1);
                }
              }
              local_88 = 0;
              local_78 = plVar23;
              local_58 = plVar23;
              FUN_14005cab6(plVar22,&local_4c);
              lVar21 = *plVar22 + (longlong)local_4c * 0x20;
              plVar23 = local_78;
LAB_144af4b44:
              uVar4 = *(undefined4 *)((longlong)puVar19 + 4);
              uVar5 = *(undefined4 *)(puVar19 + 1);
              uVar6 = *(undefined4 *)((longlong)puVar19 + 0xc);
              *(undefined4 *)(lVar21 + 8) = *(undefined4 *)puVar19;
              *(undefined4 *)(lVar21 + 0xc) = uVar4;
              *(undefined4 *)(lVar21 + 0x10) = uVar5;
              *(undefined4 *)(lVar21 + 0x14) = uVar6;
              lVar13 = local_70;
            }
            else if (pcVar3 == (code *)&LAB_14475051c) {
              if ((int)plVar20[3] != *(int *)((longlong)plVar20 + 0x44)) {
                lVar21 = *plVar23;
                plVar22 = plVar20 + 9;
                if ((longlong *)plVar20[10] != (longlong *)0x0) {
                  plVar22 = (longlong *)plVar20[10];
                }
                iVar15 = *(int *)((longlong)plVar22 +
                                 (ulonglong)
                                 ((int)plVar20[0xb] - 1U &
                                 (int)lVar21 + (int)((ulonglong)lVar21 >> 0x20) * 0x17) * 4);
                if (iVar15 != -1) {
                  do {
                    lVar12 = plVar20[2] + (longlong)iVar15 * 0x58;
                    if (*(longlong *)(plVar20[2] + (longlong)iVar15 * 0x58) == lVar21) {
                      if ((lVar12 != 0) && ((undefined8 *)(lVar12 + 8) != (undefined8 *)0x0)) {
                        if (puVar19 == (undefined8 *)0x0) {
                          uVar9 = 0;
                        }
                        else {
                          uVar9 = *puVar19;
                        }
                        *(undefined8 *)(lVar12 + 8) = uVar9;
                      }
                      break;
                    }
                    iVar15 = *(int *)(lVar12 + 0x50);
                  } while (iVar15 != -1);
                }
              }
            }
            else {
              (*pcVar3)(plVar20,puVar19,plVar23);
            }
            uVar24 = uVar24 & ~(uint)uVar17;
            puVar8 = (uint *)plVar18[5];
            if ((uint *)plVar18[5] == (uint *)0x0) {
              puVar8 = local_68;
            }
            uVar2 = *(uint *)(plVar18 + 6);
            iVar15 = (int)uVar16;
            lVar21 = (longlong)iVar15;
            uVar7 = puVar8[lVar21] & uVar24;
            if (uVar7 == 0) {
              iVar10 = uVar2 + 0x1e;
              if (-1 < (int)(uVar2 - 1)) {
                iVar10 = uVar2 - 1;
              }
              iVar10 = iVar10 >> 5;
              iVar25 = iVar25 + 0x20;
              iVar11 = iVar10;
              if (iVar10 < iVar15) {
                iVar11 = iVar15;
              }
              if (iVar15 < iVar10) {
                lVar12 = 0;
                do {
                  uVar7 = puVar8[lVar21 + lVar12 + 1];
                  if (uVar7 != 0) {
                    uVar16 = (ulonglong)(iVar15 + (int)lVar12 + 1);
                    uVar24 = 0xffffffff;
                    goto LAB_144af4bbf;
                  }
                  iVar25 = iVar25 + 0x20;
                  lVar12 = lVar12 + 1;
                } while (iVar11 - lVar21 != lVar12);
                uVar24 = 0xffffffff;
                iVar15 = iVar11;
              }
              uVar16 = (ulonglong)(iVar15 + 1);
              uVar7 = uVar2;
            }
            else {
LAB_144af4bbf:
              uVar17 = (ulonglong)(-uVar7 & uVar7);
              uVar1 = uVar17 * 2 + 1;
              lVar21 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar21 == 0; lVar21 = lVar21 + -1) {
                }
              }
              uVar7 = (iVar25 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
              if ((int)uVar2 <= (int)uVar7) {
                uVar7 = uVar2;
              }
            }
          } while (uVar7 != (uint)local_80);
        }
      }
LAB_144af49fa:
      plVar26 = plVar26 + 0xc;
    } while (plVar26 != local_60);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144af4d8e FUN_144af4d8e body=107 status=ok
// SIG undefined FUN_144af4d8e(void)

void FUN_144af4d8e(longlong *param_1)

{
  longlong *plVar1;
  
  if (*(code **)(*param_1 + 0x18) == FUN_1481f85a2) {
    *param_1 = (longlong)&PTR_LAB_14ae26c50;
    plVar1 = param_1 + 1;
    if ((longlong *)param_1[0x31] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x31];
    }
    FUN_14474ade3(plVar1,(int)param_1[0x32]);
    if (param_1[0x31] != 0) {
      FUN_1400020a8();
    }
  }
  else {
    (**(code **)(*param_1 + 0x18))(param_1,0);
  }
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 144af4dfa FUN_144af4dfa body=1109 status=ok
// SIG undefined FUN_144af4dfa(void)

void FUN_144af4dfa(longlong *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint *puVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong *plVar18;
  undefined8 *puVar19;
  longlong *plVar20;
  longlong lVar21;
  longlong *plVar22;
  longlong *plVar23;
  uint uVar24;
  int iVar25;
  longlong *plVar26;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  ulonglong local_80;
  longlong *local_78;
  longlong local_70;
  uint *local_68;
  longlong *local_60;
  longlong *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar26 = (longlong *)param_1[0x30];
  if ((longlong *)param_1[0x30] == (longlong *)0x0) {
    plVar26 = param_1;
  }
  if ((longlong)(int)param_1[0x31] != 0) {
    local_60 = plVar26 + (longlong)(int)param_1[0x31] * 0xc;
    do {
      lVar13 = *plVar26;
      iVar25 = *(int *)(lVar13 + 0x58);
      *(uint *)(lVar13 + 0x58) = iVar25 + 1U;
      if (*(uint *)(lVar13 + 0x5c) < iVar25 + 1U) {
        FUN_1447502d0((longlong *)(lVar13 + 0x50),iVar25);
      }
      lVar13 = *(longlong *)(lVar13 + 0x50);
      lVar12 = (longlong)iVar25 * 0x58;
      puVar19 = (undefined8 *)(lVar13 + lVar12);
      *(undefined8 *)(lVar13 + lVar12) = 0;
      iVar25 = (int)plVar26[2];
      lVar21 = plVar26[1];
      *(int *)(lVar13 + 8 + lVar12) = iVar25;
      if (iVar25 == 0) {
        *(undefined4 *)((longlong)puVar19 + 0xc) = 0;
      }
      else {
        FUN_1481f79f8(puVar19,iVar25);
        FUN_1481f7a51(*puVar19,lVar21,iVar25);
      }
      plVar23 = plVar26 + 3;
      plVar18 = plVar23;
      plVar20 = puVar19 + 2;
      for (lVar13 = 8; lVar13 != 0; lVar13 = lVar13 + -1) {
        *plVar20 = *plVar18;
        plVar18 = plVar18 + 1;
        plVar20 = plVar20 + 1;
      }
      *(short *)(puVar19 + 10) = (short)plVar26[0xb];
      plVar18 = (longlong *)plVar26[5];
      if (plVar18 != (longlong *)0x0) {
        lVar13 = *plVar18;
        uVar2 = *(uint *)(plVar18 + 6);
        if (uVar2 == 0) {
          uVar17 = 1;
          uVar16 = 0;
          uVar7 = 0;
          iVar25 = 0;
        }
        else {
          puVar8 = (uint *)plVar18[5];
          if ((uint *)plVar18[5] == (uint *)0x0) {
            puVar8 = (uint *)(plVar18 + 3);
          }
          uVar7 = *puVar8;
          if (uVar7 == 0) {
            iVar25 = uVar2 + 0x1e;
            if (-1 < (int)(uVar2 - 1)) {
              iVar25 = uVar2 - 1;
            }
            uVar16 = 0;
            uVar17 = (ulonglong)(uint)(iVar25 >> 5);
            if (iVar25 >> 5 < 1) {
              uVar17 = uVar16;
            }
            iVar25 = 0;
            do {
              if (uVar17 == uVar16) goto LAB_144af4ebc;
              iVar25 = iVar25 + 0x20;
              uVar7 = puVar8[uVar16 + 1];
              uVar16 = uVar16 + 1;
            } while (uVar7 == 0);
          }
          else {
            uVar16 = 0;
            iVar25 = 0;
          }
          uVar17 = (ulonglong)(-uVar7 & uVar7);
          uVar1 = uVar17 * 2 + 1;
          lVar21 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar21 == 0; lVar21 = lVar21 + -1) {
            }
          }
          uVar7 = (iVar25 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
          if ((int)uVar2 <= (int)uVar7) {
            uVar7 = uVar2;
          }
        }
        if (uVar7 != uVar2) {
          uVar24 = 0xffffffff;
          local_80 = (ulonglong)uVar2;
          local_70 = lVar13;
          local_68 = (uint *)(plVar18 + 3);
          do {
            plVar20 = *(longlong **)(plVar18[1] + (longlong)(int)uVar7 * 0x18);
            puVar19 = (undefined8 *)
                      (*(int *)(plVar18[1] + 8 + (longlong)(int)uVar7 * 0x18) + lVar13);
            pcVar3 = *(code **)(*plVar20 + 0x10);
            if (pcVar3 == FUN_14475043e) {
              plVar22 = plVar20 + 2;
              lVar13 = *plVar23;
              if ((int)plVar20[3] != *(int *)((longlong)plVar20 + 0x44)) {
                plVar14 = plVar20 + 9;
                if ((longlong *)plVar20[10] != (longlong *)0x0) {
                  plVar14 = (longlong *)plVar20[10];
                }
                iVar15 = *(int *)((longlong)plVar14 +
                                 (ulonglong)
                                 ((int)plVar20[0xb] - 1U &
                                 (int)((ulonglong)lVar13 >> 0x20) * 0x17 + (int)lVar13) * 4);
                if (iVar15 != -1) {
                  do {
                    lVar21 = *plVar22 + (longlong)iVar15 * 0x20;
                    if (*(longlong *)(*plVar22 + (longlong)iVar15 * 0x20) == lVar13) {
                      if (lVar21 != 0) goto LAB_144af5006;
                      break;
                    }
                    iVar15 = *(int *)(lVar21 + 0x18);
                  } while (iVar15 != -1);
                }
              }
              local_88 = 0;
              local_78 = plVar23;
              local_58 = plVar23;
              FUN_14005cab6(plVar22,&local_4c);
              lVar21 = *plVar22 + (longlong)local_4c * 0x20;
              plVar23 = local_78;
LAB_144af5006:
              uVar4 = *(undefined4 *)((longlong)puVar19 + 4);
              uVar5 = *(undefined4 *)(puVar19 + 1);
              uVar6 = *(undefined4 *)((longlong)puVar19 + 0xc);
              *(undefined4 *)(lVar21 + 8) = *(undefined4 *)puVar19;
              *(undefined4 *)(lVar21 + 0xc) = uVar4;
              *(undefined4 *)(lVar21 + 0x10) = uVar5;
              *(undefined4 *)(lVar21 + 0x14) = uVar6;
              lVar13 = local_70;
            }
            else if (pcVar3 == (code *)&LAB_14475051c) {
              if ((int)plVar20[3] != *(int *)((longlong)plVar20 + 0x44)) {
                lVar21 = *plVar23;
                plVar22 = plVar20 + 9;
                if ((longlong *)plVar20[10] != (longlong *)0x0) {
                  plVar22 = (longlong *)plVar20[10];
                }
                iVar15 = *(int *)((longlong)plVar22 +
                                 (ulonglong)
                                 ((int)plVar20[0xb] - 1U &
                                 (int)lVar21 + (int)((ulonglong)lVar21 >> 0x20) * 0x17) * 4);
                if (iVar15 != -1) {
                  do {
                    lVar12 = plVar20[2] + (longlong)iVar15 * 0x58;
                    if (*(longlong *)(plVar20[2] + (longlong)iVar15 * 0x58) == lVar21) {
                      if ((lVar12 != 0) && ((undefined8 *)(lVar12 + 8) != (undefined8 *)0x0)) {
                        if (puVar19 == (undefined8 *)0x0) {
                          uVar9 = 0;
                        }
                        else {
                          uVar9 = *puVar19;
                        }
                        *(undefined8 *)(lVar12 + 8) = uVar9;
                      }
                      break;
                    }
                    iVar15 = *(int *)(lVar12 + 0x50);
                  } while (iVar15 != -1);
                }
              }
            }
            else {
              (*pcVar3)(plVar20,puVar19,plVar23);
            }
            uVar24 = uVar24 & ~(uint)uVar17;
            puVar8 = (uint *)plVar18[5];
            if ((uint *)plVar18[5] == (uint *)0x0) {
              puVar8 = local_68;
            }
            uVar2 = *(uint *)(plVar18 + 6);
            iVar15 = (int)uVar16;
            lVar21 = (longlong)iVar15;
            uVar7 = puVar8[lVar21] & uVar24;
            if (uVar7 == 0) {
              iVar10 = uVar2 + 0x1e;
              if (-1 < (int)(uVar2 - 1)) {
                iVar10 = uVar2 - 1;
              }
              iVar10 = iVar10 >> 5;
              iVar25 = iVar25 + 0x20;
              iVar11 = iVar10;
              if (iVar10 < iVar15) {
                iVar11 = iVar15;
              }
              if (iVar15 < iVar10) {
                lVar12 = 0;
                do {
                  uVar7 = puVar8[lVar21 + lVar12 + 1];
                  if (uVar7 != 0) {
                    uVar16 = (ulonglong)(iVar15 + (int)lVar12 + 1);
                    uVar24 = 0xffffffff;
                    goto LAB_144af5081;
                  }
                  iVar25 = iVar25 + 0x20;
                  lVar12 = lVar12 + 1;
                } while (iVar11 - lVar21 != lVar12);
                uVar24 = 0xffffffff;
                iVar15 = iVar11;
              }
              uVar16 = (ulonglong)(iVar15 + 1);
              uVar7 = uVar2;
            }
            else {
LAB_144af5081:
              uVar17 = (ulonglong)(-uVar7 & uVar7);
              uVar1 = uVar17 * 2 + 1;
              lVar21 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar21 == 0; lVar21 = lVar21 + -1) {
                }
              }
              uVar7 = (iVar25 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
              if ((int)uVar2 <= (int)uVar7) {
                uVar7 = uVar2;
              }
            }
          } while (uVar7 != (uint)local_80);
        }
      }
LAB_144af4ebc:
      plVar26 = plVar26 + 0xc;
    } while (plVar26 != local_60);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144af5250 FUN_144af5250 body=107 status=ok
// SIG undefined FUN_144af5250(void)

void FUN_144af5250(longlong *param_1)

{
  longlong *plVar1;
  
  if (*(code **)(*param_1 + 0x18) == FUN_1481f8604) {
    *param_1 = (longlong)&PTR_LAB_14ae26c90;
    plVar1 = param_1 + 1;
    if ((longlong *)param_1[0x31] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x31];
    }
    FUN_14474ade3(plVar1,(int)param_1[0x32]);
    if (param_1[0x31] != 0) {
      FUN_1400020a8();
    }
  }
  else {
    (**(code **)(*param_1 + 0x18))(param_1,0);
  }
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 144af52bc FUN_144af52bc body=755 status=ok
// SIG undefined FUN_144af52bc(void)

void FUN_144af52bc(undefined8 param_1,undefined8 *param_2)

{
  PSRWLOCK SRWLock;
  longlong lVar1;
  longlong lVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  uint local_4c;
  uint *local_48;
  undefined4 *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_2 = 0;
  if (DAT_14cb42160 == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb41300) {
      FUN_144b3d300(&DAT_14cb41300);
      if (DAT_14cb41300 == -1) {
        FUN_1456bda78(&DAT_14cb3f130);
        DAT_14cb412f0 = &DAT_14cb3f130;
        atexit(FUN_143a9fd0b);
        _Init_thread_footer(&DAT_14cb41300);
      }
    }
    puVar3 = DAT_14cb412f0;
    uVar6 = (uint)(ushort)DAT_14cb42168;
    uVar5 = ((uint)(DAT_14cb42160 >> 0x14) & 0xffff ^ (uint)(DAT_14cb42160 >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    uVar5 = (uint)((ushort)DAT_14cb42168 >> 0xd) ^ (uVar5 >> 0x10 ^ uVar5) - uVar6;
    uVar9 = uVar5 << 8 ^ (-0x61c88647 - uVar5) - uVar6;
    uVar10 = uVar9 >> 0xd ^ (uVar6 - uVar5) - uVar9;
    uVar5 = uVar10 >> 0xc ^ (uVar5 - uVar9) - uVar10;
    uVar6 = uVar5 << 0x10 ^ (uVar9 - uVar10) - uVar5;
    uVar9 = uVar6 >> 5 ^ (uVar10 - uVar5) - uVar6;
    uVar10 = uVar9 >> 3 ^ (uVar5 - uVar6) - uVar9;
    uVar5 = uVar10 << 10 ^ (uVar6 - uVar9) - uVar10;
    uVar5 = uVar5 >> 0xf ^ uVar9 - (uVar10 + uVar5);
    iVar7 = uVar5 - DAT_14cb42168._2_1_;
    uVar9 = iVar7 * 0x100 ^ 0x9e3779b9 - uVar5;
    uVar6 = uVar9 >> 0xd ^ ((uint)DAT_14cb42168._2_1_ - iVar7) - uVar9;
    uVar5 = uVar6 >> 0xc ^ (iVar7 - uVar9) - uVar6;
    uVar9 = uVar5 << 0x10 ^ (uVar9 - uVar6) - uVar5;
    uVar10 = uVar9 >> 5 ^ (uVar6 - uVar5) - uVar9;
    uVar5 = uVar10 >> 3 ^ (uVar5 - uVar9) - uVar10;
    uVar6 = uVar5 << 10 ^ (uVar9 - uVar10) - uVar5;
    uVar5 = uVar6 >> 0xf ^ uVar10 - (uVar5 + uVar6);
    SRWLock = (PSRWLOCK)(DAT_14cb412f0 + 0x2198);
    local_4c = uVar5;
    AcquireSRWLockShared(SRWLock);
    if (*(int *)(puVar3 + 0x20b0) != *(int *)(puVar3 + 0x20dc)) {
      puVar4 = puVar3 + 0x20e0;
      if (*(undefined **)(puVar3 + 0x20e8) != (undefined *)0x0) {
        puVar4 = *(undefined **)(puVar3 + 0x20e8);
      }
      iVar7 = *(int *)(puVar4 + (ulonglong)(*(int *)(puVar3 + 0x20f0) - 1U & uVar5) * 4);
      if (iVar7 != -1) {
        lVar2 = *(longlong *)(puVar3 + 0x20a8);
        do {
          lVar1 = lVar2 + (longlong)iVar7 * 0x10;
          if (*(uint *)(lVar2 + (longlong)iVar7 * 0x10) == uVar5) {
            if ((lVar1 != 0) && ((undefined4 *)(lVar1 + 4) != (undefined4 *)0x0)) {
              uVar8 = *(undefined4 *)(lVar1 + 4);
              ReleaseSRWLockShared(SRWLock);
              goto LAB_144af54d0;
            }
            break;
          }
          iVar7 = *(int *)(lVar1 + 8);
        } while (iVar7 != -1);
      }
    }
    ReleaseSRWLockShared(SRWLock);
    AcquireSRWLockExclusive(SRWLock);
    local_50 = FUN_1401220aa(puVar3 + 0x10,&DAT_14cb42160);
    local_40 = &local_50;
    local_48 = &local_4c;
    FUN_14012212c(puVar3 + 0x20a8,local_34,&local_48,0);
    uVar8 = local_50;
    ReleaseSRWLockExclusive(SRWLock);
  }
LAB_144af54d0:
  *(undefined4 *)(param_2 + 1) = uVar8;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144af55b0 FUN_144af55b0 body=312 status=ok
// SIG undefined FUN_144af55b0(void)

undefined8 FUN_144af55b0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144af56e2;
    if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_144af56e2;
    }
    FUN_1400841de(param_1 + 0x18,&local_48);
    lVar8 = local_48;
  }
  else {
LAB_144af56e2:
    lVar8 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar7 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144af5689;
    plVar6 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar6 != (longlong *)0x0) &&
       ((((int)plVar6[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar6 + 1) & 0x10200000) == 0))
        && (lVar3 = *plVar6, lVar3 != 0)))) {
      if (*(code **)(param_1 + 0x20) == FUN_1447ae4de) {
        FUN_1447ae4de(lVar3,FUN_1447ae4de,param_3);
      }
      else {
        (**(code **)(param_1 + 0x20))(lVar3,param_2,param_3);
      }
      uVar7 = 1;
      goto LAB_144af5689;
    }
  }
  uVar7 = 0;
LAB_144af5689:
  if (lVar8 != 0) {
    FUN_140113f3a(lVar8);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144af56ea FUN_144af56ea body=70 status=ok
// SIG undefined FUN_144af56ea(void)

void FUN_144af56ea(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar2 = 0;
  puVar2[1] = param_2;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x90);
    *(undefined8 **)(param_1 + 0x90) = puVar2;
    *puVar1 = puVar2;
  }
  return;
}



// FUNCTION 144af5730 FUN_144af5730 body=1521 status=ok
// SIG undefined FUN_144af5730(void)

void FUN_144af5730(longlong param_1,longlong param_2)

{
  uint *puVar1;
  short sVar2;
  ushort uVar3;
  longlong *plVar4;
  uint uVar5;
  ulonglong uVar6;
  short sVar7;
  uint uVar8;
  short sVar9;
  int iVar10;
  byte bVar11;
  short sVar12;
  short sVar13;
  longlong lVar14;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  longlong *local_f0;
  longlong local_e0;
  longlong local_d8;
  longlong *local_d0;
  longlong local_c8;
  undefined **local_c0;
  ulonglong local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8;
  int local_9c [3];
  longlong local_90;
  undefined ***local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined8 uStack_74;
  uint local_6c;
  undefined1 local_68;
  undefined4 local_64;
  wchar_t *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  iVar10 = *(int *)(param_1 + 0x1c);
  local_d0 = (longlong *)(param_1 + 0x10);
  local_d8 = param_2;
  if (iVar10 < 0x100) {
    local_b8 = 0;
    uStack_b0 = 0;
    local_c0 = &PTR_FUN_14a3d46e0;
    local_a8 = 0;
    if (iVar10 != 0) {
      local_e0 = param_1;
      FUN_1404d5fcc(&local_b8,iVar10 * iVar10 * 6);
      iVar10 = *(int *)(local_e0 + 0x1c);
      param_1 = local_e0;
      if (iVar10 != 0) {
        uVar8 = 0;
        do {
          lVar14 = (longlong)(int)(uint)uStack_b0;
          uVar5 = (uint)uStack_b0 + 1;
          if (uStack_b0._4_4_ < uVar5) {
            uVar6 = uStack_b0 & 0xffffffff;
            uStack_b0._0_4_ = uVar5;
            FUN_141794766(&local_b8,uVar6);
            param_1 = local_e0;
            uVar5 = (uint)uStack_b0;
          }
          uStack_b0._0_4_ = uVar5;
          uVar5 = ((uVar8 & 0x55555555) >> 1 | uVar8 & 0x55555555) & 0x33333333;
          uVar5 = (uVar5 >> 2 | uVar5) & 0xf0f0f0f;
          uVar5 = uVar5 >> 4 | uVar5;
          uVar3 = (ushort)uVar5 & 0xff | (ushort)(uVar5 >> 8) & 0xff00;
          uVar5 = uVar8 & 0x22222222 | uVar8 >> 1 & 0x4444444;
          uVar5 = (uVar5 >> 3 | uVar5 >> 1) & 0x70f0f0f;
          uVar5 = uVar5 >> 4 | uVar5;
          sVar7 = (short)iVar10;
          sVar9 = (sVar7 + 1) * ((ushort)uVar5 & 0xff | (ushort)(uVar5 >> 8) & 0x7f00);
          sVar2 = uVar3 + sVar9;
          sVar13 = sVar7 + sVar2 + 2;
          uVar6 = ((longlong)local_b8 >> 0x18) + (longlong)&local_b8;
          if ((local_b8 & 1) == 0) {
            uVar6 = local_b8;
          }
          *(short *)(uVar6 + lVar14 * 2) = sVar13;
          uVar5 = (uint)uStack_b0;
          lVar14 = (longlong)(int)(uint)uStack_b0;
          uStack_b0._0_4_ = (uint)uStack_b0 + 1;
          if (uStack_b0._4_4_ < (uint)uStack_b0) {
            FUN_141794766(&local_b8,uVar5);
            param_1 = local_e0;
          }
          bVar11 = (byte)uVar8 >> 1 ^ (byte)uVar8;
          sVar12 = uVar3 + sVar9 + 1;
          sVar9 = sVar7 + sVar2 + 1;
          uVar6 = ((longlong)local_b8 >> 0x18) + (longlong)&local_b8;
          if ((local_b8 & 1) == 0) {
            uVar6 = local_b8;
          }
          *(short *)(uVar6 + lVar14 * 2) = sVar12;
          uVar5 = (uint)uStack_b0;
          sVar7 = sVar2;
          if ((bVar11 & 1) != 0) {
            sVar7 = sVar9;
          }
          lVar14 = (longlong)(int)(uint)uStack_b0;
          uStack_b0._0_4_ = (uint)uStack_b0 + 1;
          if (uStack_b0._4_4_ < (uint)uStack_b0) {
            FUN_141794766(&local_b8,uVar5);
            param_1 = local_e0;
          }
          uVar6 = ((longlong)local_b8 >> 0x18) + (longlong)&local_b8;
          if ((local_b8 & 1) == 0) {
            uVar6 = local_b8;
          }
          *(short *)(uVar6 + lVar14 * 2) = sVar7;
          uVar5 = (uint)uStack_b0;
          lVar14 = (longlong)(int)(uint)uStack_b0;
          uStack_b0._0_4_ = (uint)uStack_b0 + 1;
          if (uStack_b0._4_4_ < (uint)uStack_b0) {
            FUN_141794766(&local_b8,uVar5);
            param_1 = local_e0;
          }
          uVar6 = ((longlong)local_b8 >> 0x18) + (longlong)&local_b8;
          if ((local_b8 & 1) == 0) {
            uVar6 = local_b8;
          }
          *(short *)(uVar6 + lVar14 * 2) = sVar2;
          uVar5 = (uint)uStack_b0;
          lVar14 = (longlong)(int)(uint)uStack_b0;
          uStack_b0._0_4_ = (uint)uStack_b0 + 1;
          if (uStack_b0._4_4_ < (uint)uStack_b0) {
            FUN_141794766(&local_b8,uVar5);
            param_1 = local_e0;
          }
          uVar6 = ((longlong)local_b8 >> 0x18) + (longlong)&local_b8;
          if ((local_b8 & 1) == 0) {
            uVar6 = local_b8;
          }
          *(short *)(uVar6 + lVar14 * 2) = sVar9;
          uVar5 = (uint)uStack_b0;
          if ((bVar11 & 1) != 0) {
            sVar13 = sVar12;
          }
          lVar14 = (longlong)(int)(uint)uStack_b0;
          uStack_b0._0_4_ = (uint)uStack_b0 + 1;
          if (uStack_b0._4_4_ < (uint)uStack_b0) {
            FUN_141794766(&local_b8,uVar5);
            param_1 = local_e0;
          }
          uVar6 = ((longlong)local_b8 >> 0x18) + (longlong)&local_b8;
          if ((local_b8 & 1) == 0) {
            uVar6 = local_b8;
          }
          *(short *)(uVar6 + lVar14 * 2) = sVar13;
          uVar8 = uVar8 + 1;
          iVar10 = *(int *)(param_1 + 0x1c);
        } while (uVar8 < (uint)(iVar10 * iVar10));
      }
    }
    *(uint *)(param_1 + 0x18) = (uint)uStack_b0;
    if ((int)(uint)uStack_b0 < 0) {
      FUN_140033559("Runtime\\Core\\Public\\Containers/DynamicRHIResourceArray.h",0x47,
                    L"Resource data size too large for uint32, will overflow. Calculate with larger data type or use fewer elements. sizeof(ElementType): %d"
                    ,2);
      local_9c[0] = 0;
    }
    else {
      local_9c[0] = (uint)uStack_b0 * 2;
    }
    lVar14 = local_d8;
    local_90 = 0;
    local_80 = 1;
    local_7c = 0;
    uStack_74 = 0;
    local_6c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_68 = 0;
    local_64 = 0;
    local_60 = L"FWaterMeshIndexBuffer";
    local_58 = 0;
    uStack_50 = 0;
    local_88 = &local_c0;
    local_9c[1] = 2;
    local_9c[2] = 0x8001;
    if (local_9c[0] == 0) {
      FUN_14570b4be(local_d8,&local_90,0x8001,2);
    }
    if (*(char *)(lVar14 + 0x69) == '\0') {
      FUN_14002049c(lVar14,1);
      local_f0 = &local_90;
      local_f8 = 8;
      (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_c8,lVar14,local_9c);
      *(undefined4 *)(local_c8 + 0x18) = 8;
      FUN_14002049c(lVar14,0);
    }
    else {
      local_f0 = &local_90;
      local_f8 = 8;
      (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_c8,lVar14,local_9c);
      *(undefined4 *)(local_c8 + 0x18) = 8;
    }
    plVar4 = local_d0;
    if (local_b8 != 0 && (local_b8 & 1) == 0) {
      FUN_1400020a8();
    }
    lVar14 = local_c8;
    if (plVar4 != &local_c8) {
      lVar14 = *plVar4;
      *plVar4 = local_c8;
      local_c8 = 0;
      if (lVar14 == 0) goto LAB_144af5ae9;
      LOCK();
      puVar1 = (uint *)(lVar14 + 8);
      uVar8 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      lVar14 = local_c8;
      if ((uVar8 & 0x3fffffff) == 1) {
        FUN_144a54812();
        lVar14 = local_c8;
      }
    }
  }
  else {
    FUN_148403e7c(param_1,&local_90,param_2);
    lVar14 = local_90;
    if (local_d0 != &local_90) {
      lVar14 = *local_d0;
      *local_d0 = local_90;
      local_90 = 0;
      if (lVar14 == 0) goto LAB_144af5ae9;
      LOCK();
      puVar1 = (uint *)(lVar14 + 8);
      uVar8 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      lVar14 = local_90;
      if ((uVar8 & 0x3fffffff) == 1) {
        FUN_144a54812();
        lVar14 = local_90;
      }
    }
  }
  if (lVar14 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar14 + 8);
    uVar8 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar8 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_144af5ae9:
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144af5d22 FUN_144af5d22 body=67 status=ok
// SIG undefined FUN_144af5d22(void)

void FUN_144af5d22(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 144af5d66 FUN_144af5d66 body=201 status=ok
// SIG undefined FUN_144af5d66(void)

undefined8 * FUN_144af5d66(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *param_1 = &PTR_FUN_14a1fb9b8;
  lVar4 = param_1[6];
  if (lVar4 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  if (param_1[4] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[4] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144af5e30 FUN_144af5e30 body=945 status=ok
// SIG undefined FUN_144af5e30(void)

/* WARNING: Removing unreachable block (ram,0x000144af60c2) */

undefined8 FUN_144af5e30(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_1e8 [32];
  longlong local_1c8 [2];
  longlong local_1b8 [2];
  longlong local_1a8;
  ulonglong uStack_1a0;
  longlong local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined2 local_17c;
  undefined2 local_17a;
  undefined8 local_178;
  undefined8 local_170;
  int local_168;
  undefined8 local_160;
  undefined8 local_158;
  longlong local_60;
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  cVar3 = FUN_1447a1774();
  if ((cVar3 != '\0') &&
     (cVar3 = (**(code **)(*(longlong *)(param_1 + -8) + 0x10))(param_1 + -8), cVar3 != '\0')) {
    local_188 = 0;
    local_180 = 0xcfa32f9b;
    local_17c = 0x23c;
    local_17a = 0x420e;
    local_178 = 0xb5894fb732685690;
    local_170 = 1;
    if (DAT_14cb52e48 == (code *)0x0) {
      (*DAT_14cb52768)(4,"slPCLGetState",&DAT_14cb52e48);
    }
    local_198 = 0;
    uStack_190 = 0;
    FUN_140002266(&local_160,L"arg%d",0);
    uVar5 = uStack_190;
    lVar7 = (longlong)(int)uStack_190;
    uVar4 = (int)uStack_190 + 1;
    uStack_190 = CONCAT44(uStack_190._4_4_,uVar4);
    if (uStack_190._4_4_ < uVar4) {
      FUN_1447a1bd6(&local_198,uVar5 & 0xffffffff);
    }
    lVar2 = local_198;
    lVar7 = lVar7 * 0x10;
    *(undefined8 *)(local_198 + lVar7) = 0;
    *(undefined8 *)(local_198 + lVar7) = local_160;
    *(undefined4 *)(local_198 + 8 + lVar7) = (undefined4)local_158;
    *(undefined4 *)(local_198 + 0xc + lVar7) = local_158._4_4_;
    local_158 = 0;
    local_160 = 0;
    local_1a8 = 0;
    uStack_1a0 = 0;
    lVar7 = (longlong)(int)uStack_190;
    if (lVar7 != 0) {
      iVar8 = 1;
      lVar10 = 0;
      do {
        if ((char)iVar8 == '\0') {
          FUN_1400020e8(&local_1a8,&DAT_149e19f34,2);
        }
        iVar1 = *(int *)(lVar2 + 8 + lVar10);
        iVar8 = 0;
        iVar9 = iVar1 + -1;
        if (iVar1 == 0) {
          iVar9 = iVar8;
        }
        FUN_1400020e8(&local_1a8,*(undefined8 *)(lVar2 + lVar10),iVar9);
        lVar10 = lVar10 + 0x10;
      } while (lVar7 * 0x10 != lVar10);
    }
    local_60 = 0;
    local_50 = 0xd;
    lVar7 = 0;
    do {
      *(short *)((longlong)&local_160 + lVar7 * 2) = (short)"slPCLGetState"[lVar7];
      lVar7 = lVar7 + 1;
    } while (lVar7 != 0xe);
    local_58 = &local_160;
    FUN_140002266(local_1b8,&DAT_149e0625e,&local_160);
    if (local_1b8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    if (local_1a8 != 0) {
      FUN_1400020a8();
    }
    (*DAT_14cb52e48)(&local_188);
    FUN_1447a1747(local_198,uStack_190 & 0xffffffff);
    if (local_198 != 0) {
      FUN_1400020a8();
    }
    if (local_168 == param_3) {
      uVar5 = FUN_144b3946c(DAT_14cb527c8,DAT_14c872be0);
      if (DAT_14cb52e50 == (code *)0x0) {
        (*DAT_14cb52768)(4,"slPCLSetMarker",&DAT_14cb52e50);
      }
      local_198 = CONCAT44(local_198._4_4_,8);
      local_1a8 = 0;
      uStack_1a0 = 0;
      uStack_190 = uVar5;
      FUN_1447a1a70(&local_1a8);
      FUN_1418422e6(&local_1a8,uVar5);
      FUN_144a8b2a0(local_1b8,&local_1a8,&DAT_149e19f34);
      FUN_144a81018(&local_160,"slPCLSetMarker");
      FUN_140002266(local_1c8,&DAT_149e0625e,local_58);
      if (local_1c8[0] != 0) {
        FUN_1400020a8();
      }
      if (local_60 != 0) {
        FUN_1400020a8();
      }
      if (local_1b8[0] != 0) {
        FUN_1400020a8();
      }
      (*DAT_14cb52e50)(8,uVar5);
      FUN_1447a1747(local_1a8,uStack_1a0 & 0xffffffff);
      if (local_1a8 != 0) {
        FUN_1400020a8();
      }
      uVar6 = 1;
      goto LAB_144af6076;
    }
  }
  uVar6 = 0;
LAB_144af6076:
  if ((local_48 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 144af61e2 FUN_144af61e2 body=1738 status=ok
// SIG undefined FUN_144af61e2(void)

void FUN_144af61e2(longlong param_1,float param_2,float param_3)

{
  float fVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  char *pcVar7;
  ulonglong uVar8;
  uint uVar9;
  char *pcVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_158 [32];
  uint local_138;
  float local_130;
  float local_128;
  undefined4 local_120;
  undefined4 local_118;
  uint local_110;
  float local_108;
  float local_fc;
  byte local_f8 [4];
  undefined4 local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (0.0 < param_3) {
    lVar11 = param_1 + 0x230;
    lVar12 = 0;
    if (1.0 <= param_3) {
      do {
        fVar20 = (float)FUN_1448c9f94(lVar11,param_2,0);
        if (255.0 <= fVar20) {
          fVar20 = 255.0;
        }
        if (fVar20 <= 0.0) {
          fVar20 = 0.0;
        }
        *(char *)((longlong)&local_f4 + lVar12) =
             -(char)((uint)(int)ROUND(-0.5 - (fVar20 + fVar20)) >> 1);
        lVar12 = lVar12 + 1;
        lVar11 = lVar11 + 0x80;
      } while (lVar12 != 4);
    }
    else {
      do {
        fVar20 = (float)FUN_1448c9f94(lVar11 + -0x210,param_2,0);
        if (255.0 <= fVar20) {
          fVar20 = 255.0;
        }
        if (fVar20 <= 0.0) {
          fVar20 = 0.0;
        }
        fVar18 = (float)FUN_1448c9f94(lVar11,param_2,0);
        if (255.0 <= fVar18) {
          fVar18 = 255.0;
        }
        if (fVar18 <= 0.0) {
          fVar18 = 0.0;
        }
        fVar20 = (fVar18 - fVar20) * param_3 + fVar20;
        *(char *)((longlong)&local_f4 + lVar12) =
             -(char)((uint)(int)ROUND(-0.5 - (fVar20 + fVar20)) >> 1);
        lVar12 = lVar12 + 1;
        lVar11 = lVar11 + 0x80;
      } while (lVar12 != 4);
    }
    local_f8[3] = local_f4._3_1_;
    local_f8[2] = local_f4._2_1_;
    local_f8[0] = (byte)local_f4;
    local_f8[1] = local_f4._1_1_;
  }
  else {
    lVar11 = 0;
    do {
      lVar12 = param_1 + 0x20 + lVar11 * 0x80;
      iVar4 = *(int *)(param_1 + 0x98 + lVar11 * 0x80);
      local_fc = param_2;
      if ((longlong)iVar4 < 2) {
        if (iVar4 == 0) {
          fVar18 = (float)(~-(uint)(*(float *)(lVar12 + 0x68) == 3.4028235e+38) &
                          (uint)*(float *)(lVar12 + 0x68));
          fVar20 = 0.0;
        }
        else {
          lVar13 = *(longlong *)(lVar12 + 0x70);
          fVar20 = 0.0;
LAB_144af6485:
          fVar18 = *(float *)(lVar13 + 8);
        }
      }
      else {
        lVar13 = *(longlong *)(lVar12 + 0x70);
        fVar18 = *(float *)(lVar13 + 4);
        if (param_2 <= fVar18) {
          bVar3 = *(byte *)(lVar12 + 0x6c);
          fVar20 = 0.0;
          if (1 < bVar3 - 3) {
            lVar5 = (ulonglong)(iVar4 - 1) * 0x1c;
            fVar15 = *(float *)(lVar13 + 4 + lVar5);
            local_f4 = 0;
            FUN_147a40fa2(fVar18,fVar15,&local_fc);
            fVar20 = 0.0;
            if (bVar3 == 2) goto LAB_144af6798;
            if (bVar3 == 1) {
              fVar20 = *(float *)(lVar13 + 8) - *(float *)(lVar13 + 8 + lVar5);
              goto LAB_144af66e0;
            }
          }
        }
        else {
          lVar5 = (ulonglong)(iVar4 - 1) * 0x1c;
          fVar15 = *(float *)(lVar13 + 4 + lVar5);
          fVar20 = 0.0;
          if ((fVar15 <= param_2) && (bVar3 = *(byte *)(lVar12 + 0x6d), 1 < bVar3 - 3)) {
            local_f4 = 0;
            FUN_147a40fa2(fVar18,fVar15,&local_fc);
            fVar20 = 0.0;
            if (bVar3 == 2) {
LAB_144af6798:
              fVar20 = 0.0;
              if ((local_f4 & 0x80000001) == 1) {
                local_fc = (fVar15 - local_fc) + fVar18;
              }
            }
            else if (bVar3 == 1) {
              fVar20 = *(float *)(lVar13 + 8 + lVar5) - *(float *)(lVar13 + 8);
LAB_144af66e0:
              fVar20 = (float)(int)local_f4 * fVar20;
            }
          }
        }
        if (local_fc < fVar18) {
          if ((*(char *)(lVar12 + 0x6c) != '\x03') ||
             (fVar15 = *(float *)(lVar13 + 0x20) - fVar18, ABS(fVar15) <= 1e-08))
          goto LAB_144af6485;
          fVar18 = (local_fc - fVar18) *
                   ((*(float *)(lVar13 + 0x24) - *(float *)(lVar13 + 8)) / fVar15) +
                   *(float *)(lVar13 + 8);
        }
        else {
          lVar5 = (longlong)iVar4 * 0x1c;
          fVar18 = *(float *)(lVar13 + -0x18 + lVar5);
          if (fVar18 < local_fc) {
            lVar13 = lVar13 + lVar5;
            if ((*(char *)(lVar12 + 0x6d) != '\x03') ||
               (fVar15 = *(float *)(lVar13 + -0x34) - fVar18, ABS(fVar15) <= 1e-08)) {
              fVar18 = *(float *)(lVar13 + -0x14);
            }
            else {
              fVar18 = (local_fc - fVar18) *
                       ((*(float *)(lVar13 + -0x30) - *(float *)(lVar13 + -0x14)) / fVar15) +
                       *(float *)(lVar13 + -0x14);
            }
          }
          else {
            if (iVar4 == 2) {
              uVar8 = 1;
            }
            else {
              uVar14 = iVar4 - 2;
              uVar6 = 1;
              do {
                uVar9 = uVar14 >> 1;
                if (*(float *)(lVar13 + 4 + (ulonglong)(uVar9 + uVar6) * 0x1c) <= local_fc) {
                  uVar6 = uVar6 + uVar9 + 1;
                  uVar9 = uVar14 + ~uVar9;
                }
                uVar14 = uVar9;
              } while (0 < (int)uVar14);
              uVar8 = (ulonglong)uVar6;
            }
            lVar12 = uVar8 * 0x1c;
            pcVar7 = (char *)(lVar13 + lVar12);
            fVar18 = *(float *)(lVar13 + -0x18 + lVar12);
            fVar15 = *(float *)(lVar13 + 4 + lVar12);
            fVar19 = fVar15 - fVar18;
            if (fVar19 <= 0.0) {
              fVar18 = *(float *)(pcVar7 + -0x14);
            }
            else {
              pcVar10 = (char *)(lVar13 + lVar12 + -0x1c);
              cVar2 = *pcVar10;
              if (cVar2 == '\x01') {
                if (local_fc < fVar15) {
                  pcVar7 = pcVar10;
                }
                fVar18 = *(float *)(pcVar7 + 8);
              }
              else {
                fVar17 = (local_fc - fVar18) / fVar19;
                fVar18 = *(float *)(pcVar7 + -0x14);
                fVar1 = *(float *)(pcVar7 + 8);
                if (cVar2 == '\0') {
                  fVar18 = fVar17 * (fVar1 - fVar18) + fVar18;
                }
                else {
                  bVar3 = pcVar7[2];
                  if (((byte)pcVar7[-0x1a] < 2) && ((bVar3 & 0xfd) == 0)) {
                    fVar15 = *(float *)(pcVar7 + -8) * fVar19 * 0.33333334 + fVar18;
                    fVar19 = fVar1 - fVar19 * *(float *)(pcVar7 + 0xc) * 0.33333334;
                    fVar16 = (fVar19 - fVar15) * fVar17 + fVar15;
                    fVar18 = (fVar15 - fVar18) * fVar17 + fVar18;
                    fVar18 = (fVar16 - fVar18) * fVar17 + fVar18;
                    fVar18 = (((((fVar1 - fVar19) * fVar17 + fVar19) - fVar16) * fVar17 + fVar16) -
                             fVar18) * fVar17 + fVar18;
                  }
                  else {
                    local_118 = *(undefined4 *)(pcVar7 + 0x10);
                    local_120 = *(undefined4 *)(pcVar7 + 0xc);
                    local_108 = local_fc;
                    local_138 = (uint)(byte)pcVar7[-0x1a];
                    local_130 = fVar1;
                    local_128 = fVar15;
                    local_110 = (uint)bVar3;
                    fVar18 = (float)FUN_147a3e1e7(fVar18,bVar3,*(undefined4 *)(pcVar7 + -8),
                                                  *(undefined4 *)(pcVar7 + -4));
                  }
                }
              }
            }
          }
        }
      }
      fVar20 = fVar20 + fVar18;
      if (255.0 <= fVar20) {
        fVar20 = 255.0;
      }
      if (fVar20 <= 0.0) {
        fVar20 = 0.0;
      }
      local_f8[lVar11] = -(char)((uint)(int)ROUND(-0.5 - (fVar20 + fVar20)) >> 1);
      lVar11 = lVar11 + 1;
    } while (lVar11 != 4);
  }
  *(uint *)(param_1 + 8) =
       (uint)local_f8[1] << 8 | (uint)local_f8[3] << 0x18 | (uint)local_f8[2] |
       (uint)local_f8[0] << 0x10;
  if ((local_f0 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144af68ae FUN_144af68ae body=57 status=ok
// SIG undefined FUN_144af68ae(void)

void FUN_144af68ae(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb62b08 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb62b08 = FUN_140002ddd(FUN_1464f9fb1,uVar1,L"GbxRotationChannelSettings");
  }
  return;
}



// FUNCTION 144af68e8 FUN_144af68e8 body=57 status=ok
// SIG undefined FUN_144af68e8(void)

void FUN_144af68e8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb62b20 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb62b20 = FUN_140002ddd(FUN_1464fa00b,uVar1,L"GbxRotationChannel");
  }
  return;
}



// FUNCTION 144af6922 FUN_144af6922 body=57 status=ok
// SIG undefined FUN_144af6922(void)

void FUN_144af6922(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb62bb0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb62bb0 = FUN_140002ddd(FUN_1464fa24d,uVar1,L"GbxRotationChannelSettings_Body");
  }
  return;
}



// FUNCTION 144af695c FUN_144af695c body=57 status=ok
// SIG undefined FUN_144af695c(void)

void FUN_144af695c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb62c10 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb62c10 = FUN_140002ddd(FUN_1464fa3f9,uVar1,L"GbxRotationChannelSettings_Child");
  }
  return;
}



// FUNCTION 144af6996 FUN_144af6996 body=358 status=ok
// SIG undefined FUN_144af6996(void)

void FUN_144af6996(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_144af6a1f;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  plVar2 = (longlong *)*param_2;
  if (plVar2 == (longlong *)0x0 || (int)param_2[1] == 0) {
    puVar4 = (undefined8 *)0x0;
    iVar5 = 0;
  }
  else {
    (**(code **)(*plVar2 + 0x40))(plVar2,&local_30);
    puVar4 = local_30;
    iVar5 = local_28;
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_1[1] == 0) {
LAB_144af69f8:
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar3 = (undefined8 *)*param_1;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,0);
      FUN_1446efa72(param_1,0,0,0x10);
      *(undefined4 *)(param_1 + 1) = 0;
      goto LAB_144af69f8;
    }
  }
  *param_1 = (longlong)puVar4;
  *(int *)(param_1 + 1) = iVar5;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_144af6a1f;
    if (*(code **)*local_30 == FUN_145715146) {
      *local_30 = &PTR_FUN_14b478da0;
      plVar2 = (longlong *)local_30[4];
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
    }
    else {
      (**(code **)*local_30)(local_30,0);
    }
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_144af6a1f:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144af6afe FUN_144af6afe body=997 status=ok
// SIG undefined FUN_144af6afe(void)

undefined8
FUN_144af6afe(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  byte bVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined8 unaff_RBX;
  undefined8 uVar11;
  code *pcVar12;
  longlong lVar13;
  ushort uVar14;
  ulonglong uVar15;
  ushort uVar16;
  ulonglong uVar17;
  byte bVar18;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  code *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar1 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar1 != 2)) {
    if (iVar1 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      if (DVar6 == DVar7) goto LAB_144af6ec2;
    }
    FUN_140192332(param_1 + 0x18,&local_50,0);
    pcVar12 = local_50;
  }
  else {
LAB_144af6ec2:
    pcVar12 = (code *)0x0;
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
LAB_144af6dbf:
    uVar11 = 0;
    goto LAB_144af6c8a;
  }
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar11 = 0;
  if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144af6c8a;
  plVar9 = (longlong *)
           ((ulonglong)((uVar2 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
  if ((plVar9 == (longlong *)0x0) ||
     ((((int)plVar9[2] != *(int *)(param_1 + 0x1c) || ((*(uint *)(plVar9 + 1) & 0x10200000) != 0))
      || (*plVar9 == 0)))) goto LAB_144af6dbf;
  lVar13 = *plVar9 + (longlong)*(int *)(param_1 + 0x28);
  if (*(code **)(param_1 + 0x20) != FUN_1487adb86) {
    local_a0 = CONCAT31(local_a0._1_3_,param_6);
    local_a8 = CONCAT31(local_a8._1_3_,param_5);
    (**(code **)(param_1 + 0x20))(lVar13,param_2,param_3,param_4);
    uVar11 = 1;
    goto LAB_144af6c8a;
  }
  if (param_3 == 0) {
LAB_144af6c3b:
    plVar9 = (longlong *)0x0;
    bVar5 = 0;
  }
  else {
    if (DAT_14cae8e78 == 0) {
      local_70 = &local_50;
      local_50 = FUN_1449e2820;
      local_60 = &LAB_1457dfdaa;
      local_68 = &LAB_14637debc;
      local_78 = &LAB_147b97a51;
      local_80 = FUN_1417ddfba;
      local_88 = L"Engine";
      local_90 = 0;
      local_98 = 0x10000008;
      local_a0 = 0x10;
      local_a8 = 0x1f0;
      FUN_14081cfa3(L"/Script/Engine",L"LevelStreamingLevelInstance",&DAT_14cae8e78,&DAT_147b97a50);
    }
    if (((*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(DAT_14cae8e78 + 0x38)) ||
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cae8e78 + 0x38) * 8) != DAT_14cae8e78 + 0x30)) ||
       (plVar9 = (longlong *)FUN_1448a53de(param_3), plVar9 == (longlong *)0x0)) goto LAB_144af6c3b;
    bVar5 = (**(code **)(*plVar9 + 0x18))(plVar9);
  }
  plVar8 = (longlong *)(lVar13 + 0x390);
  pcVar4 = *(code **)(*(longlong *)(lVar13 + 0x390) + 0x18);
  if (pcVar4 == (code *)&LAB_1401924c6) {
    bVar18 = ((*(int *)(lVar13 + 0x40c) != 0 || *(int *)(lVar13 + 0x408) != 0) ||
             *(int *)(lVar13 + 0x410) != 0) || *(int *)(lVar13 + 0x414) != 0;
  }
  else {
    bVar18 = (*pcVar4)(plVar8);
  }
  uVar11 = 1;
  if ((bVar5 & bVar18) == 1) {
    plVar9 = (longlong *)(**(code **)(*plVar9 + 0x10))(plVar9);
    plVar8 = (longlong *)(**(code **)(*plVar8 + 0x10))(plVar8);
    if (((*plVar9 == *plVar8) && ((int)plVar9[1] == (int)plVar8[1])) &&
       ((*(int *)((longlong)plVar9 + 0xc) == *(int *)((longlong)plVar8 + 0xc) &&
        ((((int)plVar9[2] == (int)plVar8[2] &&
          (*(int *)((longlong)plVar9 + 0x14) == *(int *)((longlong)plVar8 + 0x14))) &&
         (plVar9[3] == plVar8[3])))))) {
      uVar2 = *(uint *)(plVar9 + 5);
      uVar3 = *(uint *)(plVar8 + 5);
      uVar10 = (ulonglong)uVar3;
      if (uVar2 == uVar3) {
        if (1 < (int)uVar2) {
          uVar10 = 0;
          while( true ) {
            uVar14 = *(ushort *)(plVar9[4] + uVar10);
            uVar15 = (ulonglong)uVar14;
            uVar16 = *(ushort *)(plVar8[4] + uVar10);
            if (uVar14 != uVar16) break;
            if (uVar14 == 0) goto LAB_144af6ed4;
LAB_144af6d8a:
            uVar10 = uVar10 + 2;
          }
          if ((uVar16 | uVar14) < 0x80) {
            uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
            uVar17 = (ulonglong)uVar16;
            uVar16 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
            if ((&DAT_149e05da0)[uVar15] == (&DAT_149e05da0)[uVar17]) goto LAB_144af6d8a;
          }
          if (uVar14 != uVar16) goto LAB_144af6c8a;
        }
      }
      else {
        uVar10 = (ulonglong)(uVar3 + uVar2);
        if (uVar3 + uVar2 != 1) goto LAB_144af6c8a;
      }
LAB_144af6ed4:
      FUN_1401927c2(lVar13,uVar10,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_6) & 0xffffffff);
    }
  }
LAB_144af6c8a:
  if ((pcVar12 != (code *)0x0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(pcVar12);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11;
}



// FUNCTION 144af6ee4 FUN_144af6ee4 body=1345 status=ok
// SIG undefined FUN_144af6ee4(void)

void FUN_144af6ee4(longlong param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  uint *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  byte bVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  int iVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  longlong lVar22;
  bool bVar23;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  ulonglong local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((param_2 != (longlong *)0x0) && ((*(uint *)(param_2 + 1) >> 0x1e & 1) == 0)) &&
     ((*(char *)((longlong)param_2 + 0xc5c) != '\x01' ||
      ((param_3 == '\x01' && (cVar5 = (**(code **)(*param_2 + 0x488))(param_2), cVar5 != '\0'))))))
  {
    uVar4 = *(uint *)((longlong)param_2 + 0xc);
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar22 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar22 = 0;
    }
    uVar7 = *(uint *)(lVar22 + 0x10);
    if (*(uint *)(lVar22 + 0x10) == 0) {
      LOCK();
      iVar17 = DAT_14c964868 + 1;
      UNLOCK();
      uVar6 = DAT_14c964868 + 1;
      bVar23 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar17;
      if (bVar23) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar6);
      }
      LOCK();
      uVar7 = *(uint *)(lVar22 + 0x10);
      bVar23 = uVar7 == 0;
      if (bVar23) {
        *(uint *)(lVar22 + 0x10) = uVar6;
        uVar7 = 0;
      }
      UNLOCK();
      if (bVar23) {
        uVar7 = uVar6;
      }
    }
    plVar1 = (longlong *)(param_1 + 0x40);
    if (*(int *)(param_1 + 0x74) == 0) {
      uVar6 = *(uint *)(param_1 + 0x48);
      uVar19 = (ulonglong)uVar6;
      *(uint *)(param_1 + 0x48) = uVar6 + 1;
      if (*(uint *)(param_1 + 0x4c) == uVar6) {
        FUN_144869a3c(plVar1,uVar6);
      }
      iVar17 = *(int *)(param_1 + 0x68);
      if (iVar17 == 0) {
        iVar14 = -1;
      }
      else {
        iVar14 = iVar17 + 0x1e;
        if (-1 < iVar17 + -1) {
          iVar14 = iVar17 + -1;
        }
        iVar14 = iVar14 >> 5;
      }
      lVar22 = param_1 + 0x50;
      iVar11 = iVar17 + 1;
      iVar18 = iVar17 + 0x1f;
      if (-1 < iVar17) {
        iVar18 = iVar17;
      }
      if (iVar18 >> 5 == iVar14) {
        *(int *)(param_1 + 0x68) = iVar11;
      }
      else {
        if (*(int *)(param_1 + 0x6c) <= iVar17) {
          iVar14 = iVar17;
          if (iVar17 + 0x20U < 0xa0) {
            iVar11 = 0x80;
          }
          else {
            uVar21 = iVar17 + 0x20U >> 5;
            local_68 = (ulonglong)uVar21;
            if (*(int *)(param_1 + 0x6c) + 0x1fU < 0xa0) {
              uVar15 = 4;
              if (4 < uVar21) {
                uVar15 = uVar21;
              }
            }
            else {
              uVar15 = uVar21 + (uVar21 * 3 >> 3) + 0x10;
            }
            uVar12 = (ulonglong)(uVar15 * 4);
            if (DAT_14c872d28 != (longlong *)0x0) {
              if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                uVar21 = (uint)(uVar12 + 0xf);
                if (uVar15 < 0x1ffd) {
                  uVar12 = (ulonglong)
                           (ushort)(&DAT_14c841d90)
                                   [0x32 - (byte)(&DAT_14c841e00)[uVar12 + 0xf >> 4]];
                }
                else {
                  uVar13 = (ulonglong)(uVar21 & 0xfffffff0);
                  if (uVar13 < 0x7ff1) {
                    bVar10 = (&DAT_14c841e00)[uVar21 >> 4];
                    uVar16 = 0x32;
                    if (0x32 < bVar10) {
                      uVar16 = (ulonglong)bVar10;
                    }
                    uVar20 = 0x32 - (ulonglong)bVar10;
                    do {
                      uVar12 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar20 & 0xffffffff];
                      if (((&DAT_14c841d90)[uVar20 & 0xffffffff] & 0xf) == 0) goto LAB_144af72d6;
                      lVar9 = uVar16 + 1 + uVar20;
                      uVar20 = uVar20 - 1;
                    } while (lVar9 != 0x33);
                  }
                  uVar12 = 0x10;
                  if (0x10 < DAT_14c841df8) {
                    uVar12 = (ulonglong)DAT_14c841df8;
                  }
                  uVar12 = -uVar12 & (uVar13 + uVar12) - 1;
                }
              }
              else {
                uVar12 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar12,0);
                iVar14 = *(int *)(param_1 + 0x68);
              }
            }
LAB_144af72d6:
            iVar8 = (int)(uVar12 >> 2);
            iVar11 = -0x20;
            if ((int)local_68 <= iVar8) {
              iVar11 = iVar8 << 5;
            }
          }
          *(int *)(param_1 + 0x6c) = iVar11;
          FUN_1446efbd8(lVar22,iVar14);
          iVar11 = *(int *)(param_1 + 0x68) + 1;
        }
        iVar14 = iVar11 + 0x1f;
        if (-1 < iVar11) {
          iVar14 = iVar11;
        }
        *(int *)(param_1 + 0x68) = iVar11;
        if (iVar11 % 0x20 != 0) {
          lVar9 = *(longlong *)(param_1 + 0x60);
          if (*(longlong *)(param_1 + 0x60) == 0) {
            lVar9 = lVar22;
          }
          bVar10 = -(char)(iVar11 % 0x20);
          *(uint *)(lVar9 + (longlong)(iVar14 >> 5) * 4) =
               (uint)(*(int *)(lVar9 + (longlong)(iVar14 >> 5) * 4) << (bVar10 & 0x1f)) >>
               (bVar10 & 0x1f);
        }
      }
      lVar9 = (longlong)(int)uVar6;
      if (*(longlong *)(param_1 + 0x60) != 0) {
        lVar22 = *(longlong *)(param_1 + 0x60);
      }
      bVar10 = (byte)iVar17 & 0x1f;
      puVar2 = (uint *)(lVar22 + (longlong)(iVar18 >> 5) * 4);
      *puVar2 = *puVar2 & (-2 << bVar10 | 0xfffffffeU >> 0x20 - bVar10);
    }
    else {
      uVar19 = (ulonglong)*(uint *)(param_1 + 0x70);
      lVar9 = (longlong)(int)*(uint *)(param_1 + 0x70);
      iVar17 = *(int *)(*(longlong *)(param_1 + 0x40) + 4 + lVar9 * 0x10);
      *(int *)(param_1 + 0x70) = iVar17;
      iVar14 = *(int *)(param_1 + 0x74) + -1;
      *(int *)(param_1 + 0x74) = iVar14;
      if (iVar14 != 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar17 * 0x10) = 0xffffffff;
      }
    }
    iVar17 = 1;
    iVar14 = (int)uVar19;
    lVar22 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar22 = *(longlong *)(param_1 + 0x60);
    }
    iVar11 = iVar14 + 0x1f;
    if (-1 < iVar14) {
      iVar11 = iVar14;
    }
    puVar2 = (uint *)(lVar22 + (longlong)(iVar11 >> 5) * 4);
    *puVar2 = *puVar2 | 1 << ((byte)uVar19 & 0x1f);
    lVar22 = *(longlong *)(param_1 + 0x40);
    lVar9 = lVar9 * 0x10;
    puVar3 = (undefined8 *)(lVar22 + lVar9);
    *(ulonglong *)(lVar22 + lVar9) = CONCAT44(uVar7,uVar4);
    *(undefined4 *)(lVar22 + 8 + lVar9) = 0xffffffff;
    uVar21 = uVar4 ^ uVar7;
    uVar6 = *(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x74);
    if ((uVar6 != 0) && (uVar6 != 1)) {
      lVar22 = param_1 + 0x78;
      if (*(longlong *)(param_1 + 0x80) != 0) {
        lVar22 = *(longlong *)(param_1 + 0x80);
      }
      iVar14 = *(int *)(lVar22 + (ulonglong)(*(int *)(param_1 + 0x88) - 1U & uVar21) * 4);
      if (iVar14 != -1) {
        lVar22 = *plVar1;
        local_68 = uVar19;
        local_60 = (ulonglong)uVar21;
        do {
          lVar9 = (longlong)iVar14 * 0x10;
          local_50 = *(undefined8 *)(lVar22 + lVar9);
          local_58 = CONCAT44(uVar7,uVar4);
          cVar5 = FUN_144717174(&local_50,&local_58);
          lVar22 = *plVar1;
          if (cVar5 != '\0') {
            *(undefined8 *)(lVar22 + lVar9) = *puVar3;
            FUN_1401f8b5c(plVar1,local_68);
            goto LAB_144af70ae;
          }
          iVar14 = *(int *)(lVar22 + 8 + lVar9);
        } while (iVar14 != -1);
        uVar6 = *(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x74);
        uVar21 = (uint)local_60;
        uVar19 = local_68;
      }
    }
    if (3 < uVar6) {
      uVar12 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar22 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar22 == 0; lVar22 = lVar22 + -1) {
        }
      }
      iVar17 = 1 << ((byte)lVar22 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar17 <= *(int *)(param_1 + 0x88))) {
      uVar21 = *(int *)(param_1 + 0x88) - 1U & uVar21;
      *(uint *)((longlong)puVar3 + 0xc) = uVar21;
      lVar22 = *(longlong *)(param_1 + 0x80);
      if (*(longlong *)(param_1 + 0x80) == 0) {
        lVar22 = param_1 + 0x78;
      }
      *(undefined4 *)(puVar3 + 1) =
           *(undefined4 *)
            (lVar22 + ((longlong)*(int *)(param_1 + 0x88) - 1U & (longlong)(int)uVar21) * 4);
      lVar22 = *(longlong *)(param_1 + 0x80);
      if (*(longlong *)(param_1 + 0x80) == 0) {
        lVar22 = param_1 + 0x78;
      }
      *(int *)(lVar22 + ((longlong)*(int *)(param_1 + 0x88) - 1U & (longlong)(int)uVar21) * 4) =
           (int)uVar19;
    }
    else {
      *(int *)(param_1 + 0x88) = iVar17;
      FUN_1448eaa10(plVar1);
    }
  }
LAB_144af70ae:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144af7426 FUN_144af7426 body=1029 status=ok
// SIG undefined FUN_144af7426(void)

undefined1 (*) [16]
FUN_144af7426(undefined1 (*param_1) [16],undefined8 param_2,longlong *param_3,char *param_4,
             int param_5,double *param_6)

{
  uint uVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *puVar4;
  double *pdVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  double *pdVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_178 [32];
  int local_158;
  undefined1 local_148 [16];
  double local_138;
  double dStack_130;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  double local_108;
  double dStack_100;
  double local_f8;
  undefined8 uStack_f0;
  double local_e8 [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  double local_a8;
  double dStack_a0;
  double local_98;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_178;
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0x3ff0000000000000;
  *(undefined8 *)param_1[4] = 0x3ff0000000000000;
  *(undefined8 *)(param_1[4] + 8) = 0x3ff0000000000000;
  *(undefined8 *)param_1[5] = 0x3ff0000000000000;
  *(undefined8 *)(param_1[5] + 8) = 0;
  if (param_5 != 3) {
    dVar14 = param_6[1];
    dVar12 = param_6[2];
    *(double *)param_1[2] = *param_6;
    *(double *)(param_1[2] + 8) = dVar14;
    *(double *)param_1[3] = dVar12;
    *(undefined8 *)(param_1[3] + 8) = 0;
    pcVar3 = param_4 + 0x10;
    if (*param_4 != '\0') {
      pcVar3 = param_4 + 0x8c;
    }
    local_158 = param_5;
    FUN_14045df82(param_2,param_3,param_1,*(undefined4 *)pcVar3);
    if ((local_80 ^ (ulonglong)auStack_178) == DAT_14c707940) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  local_148 = (undefined1  [16])0x0;
  local_138 = 0.0;
  dStack_130 = 1.0;
  local_128 = (undefined1  [16])0x0;
  local_118 = (undefined1  [16])0x0;
  local_108 = 1.0;
  dStack_100 = 1.0;
  local_f8 = 1.0;
  uStack_f0 = 0;
  if (*param_4 == '\x01') {
    if (*(int *)(param_4 + 0x8c) != -1) {
      FUN_1474fe94a(param_4 + 0x20,local_e8,param_3);
      local_a8 = *param_6 * local_a8;
      dStack_a0 = param_6[1] * dStack_a0;
      local_98 = param_6[2] * local_98;
      dVar14 = dStack_a0 * local_e8[0] - local_a8 * local_e8[1];
      dVar9 = local_98 * local_e8[1] - dStack_a0 * local_e8[2];
      dVar12 = local_a8 * local_e8[2] - local_e8[0] * local_98;
      dVar9 = dVar9 + dVar9;
      dVar12 = dVar12 + dVar12;
      dVar14 = dVar14 + dVar14;
      local_c8 = (dVar14 * local_e8[1] - dVar12 * local_e8[2]) + local_e8[3] * dVar9 + local_a8 +
                 local_c8;
      dStack_c0 = (local_e8[2] * dVar9 - local_e8[0] * dVar14) + local_e8[3] * dVar12 + dStack_a0 +
                  dStack_c0;
      local_118._0_8_ =
           dVar14 * local_e8[3] + local_98 + (dVar12 * local_e8[0] - dVar9 * local_e8[1]) + local_b8
      ;
      pdVar5 = local_e8;
      pdVar8 = (double *)local_148;
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *pdVar8 = *pdVar5;
        pdVar5 = pdVar5 + 1;
        pdVar8 = pdVar8 + 1;
      }
LAB_144af7632:
      local_128._8_4_ = SUB84(dStack_c0,0);
      local_128._0_8_ = local_c8;
      local_128._12_4_ = (int)((ulonglong)dStack_c0 >> 0x20);
      local_118._8_8_ = 0;
      goto LAB_144af763d;
    }
  }
  else if (((~*(uint *)(param_4 + 0xc) & 0x7fffffff) != 0) && (-1 < (int)*(uint *)(param_4 + 0xc)))
  {
    uVar1 = *(uint *)(param_4 + 0x10);
    uVar6 = (ulonglong)uVar1;
    if ((uVar6 != 0xffffffff) && ((-1 < (int)uVar1 && ((int)uVar1 < (int)param_3[1])))) {
      if (*(char *)(param_3[3] + uVar6) == '\0') {
        FUN_1447d5d8e(param_3,uVar1);
      }
      puVar4 = (undefined8 *)(uVar6 * 0x60 + *param_3);
      puVar7 = (undefined8 *)local_148;
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar7 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar7 = puVar7 + 1;
      }
      dVar10 = *param_6 * local_108;
      dVar11 = param_6[1] * dStack_100;
      dVar9 = param_6[2] * local_f8;
      dVar12 = dVar11 * (double)local_148._0_8_ - dVar10 * (double)local_148._8_8_;
      dVar13 = dVar9 * (double)local_148._8_8_ - dVar11 * local_138;
      dVar14 = dVar10 * local_138 - (double)local_148._0_8_ * dVar9;
      dVar13 = dVar13 + dVar13;
      dVar14 = dVar14 + dVar14;
      dVar12 = dVar12 + dVar12;
      local_c8 = (dVar12 * (double)local_148._8_8_ - dVar14 * local_138) +
                 dStack_130 * dVar13 + dVar10 + (double)local_128._0_8_;
      dStack_c0 = (local_138 * dVar13 - (double)local_148._0_8_ * dVar12) +
                  dStack_130 * dVar14 + dVar11 + (double)local_128._8_8_;
      local_118._0_8_ =
           dVar12 * dStack_130 + dVar9 +
           (dVar14 * (double)local_148._0_8_ - dVar13 * (double)local_148._8_8_) +
           (double)local_118._0_8_;
      goto LAB_144af7632;
    }
  }
  FUN_1474ff0b8(local_e8,param_6,param_2,local_148);
LAB_144af763d:
  puVar4 = (undefined8 *)local_148;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined8 *)*param_1 = *puVar4;
    puVar4 = puVar4 + 1;
    param_1 = (undefined1 (*) [16])(*param_1 + 8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_80 ^ (ulonglong)auStack_178);
}



// FUNCTION 144af782c FUN_144af782c body=1018 status=ok
// SIG undefined FUN_144af782c(void)

void FUN_144af782c(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  double dVar3;
  double dVar5;
  double dVar7;
  uint uVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  double *pdVar21;
  longlong *plVar22;
  undefined1 uVar23;
  longlong lVar24;
  double dVar25;
  double dVar26;
  undefined1 auStack_118 [40];
  undefined8 local_f0;
  code *local_e8;
  undefined8 **ppuStack_e0;
  undefined8 local_d8;
  undefined8 *local_d0;
  longlong *local_c8;
  undefined1 *local_c0;
  undefined8 **local_b8;
  longlong local_b0;
  longlong *local_a8;
  undefined1 **local_a0;
  code *local_98;
  longlong **local_90;
  code **local_88;
  ulonglong local_80;
  double dVar4;
  double dVar6;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar22 = *(longlong **)(param_1 + 0x158);
  if ((plVar22 != (longlong *)0x0) && (*(int *)(param_1 + 0x154) != 0)) {
    uVar8 = *(uint *)(param_1 + 0x150);
    uVar23 = 0;
    if (((int)uVar8 < 0) || (DAT_14c9647dc <= (int)uVar8)) goto LAB_144af7b93;
    lVar24 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
    if (((lVar24 != 0) && (*(int *)(lVar24 + 0x10) == *(int *)(param_1 + 0x154))) &&
       ((*(uint *)(lVar24 + 8) & 0x10200000) == 0)) {
      if (*(code **)(*plVar22 + 0x10) == (code *)&LAB_144944cea) {
        plVar22 = plVar22 + 0xe1;
      }
      else {
        plVar22 = (longlong *)(**(code **)(*plVar22 + 0x10))(plVar22);
      }
      local_f0 = *(undefined8 *)(param_1 + 0x120);
      local_d0 = &local_f0;
      local_c8 = &local_b0;
      local_b0 = 0;
      local_b8 = &local_d0;
      local_c0 = &LAB_143cbcae0;
      if (plVar22[8] != 0) {
        local_90 = &local_a8;
        local_a0 = &local_c0;
        local_88 = &local_98;
        local_98 = FUN_143cbca2e;
        ppuStack_e0 = &local_88;
        local_e8 = FUN_1487df56e;
        local_a8 = plVar22;
        FUN_1447c5ba2();
        lVar24 = local_b0;
        uVar20 = DAT_14c8463e8;
        if (local_b0 != 0) {
          if (*(char *)(local_b0 + 0x558) == '\0') {
            puVar1 = (undefined8 *)(local_b0 + 0x540);
            puVar2 = (undefined8 *)(local_b0 + 0x510);
            if (*(char *)(local_b0 + 0x530) == '\0') {
              lVar9 = *(longlong *)(local_b0 + 0xd0);
              if (lVar9 == 0) {
                if (puVar2 == &DAT_14c8463d0) goto LAB_144af7b31;
                *(undefined8 *)(local_b0 + 0x520) = DAT_14c8463e0;
                *(undefined8 *)(local_b0 + 0x528) = uVar20;
                uVar19 = DAT_14c8463d8._4_4_;
                uVar18 = (undefined4)DAT_14c8463d8;
                uVar17 = DAT_14c8463d0._4_4_;
                *(undefined4 *)puVar2 = (undefined4)DAT_14c8463d0;
                *(undefined4 *)(local_b0 + 0x514) = uVar17;
                *(undefined4 *)(local_b0 + 0x518) = uVar18;
                *(undefined4 *)(local_b0 + 0x51c) = uVar19;
              }
              else {
                pdVar21 = (double *)FUN_1447c6d68(lVar9);
                dVar13 = *(double *)(lVar9 + 0x450);
                dVar14 = *(double *)(lVar9 + 0x458);
                dVar15 = *(double *)(lVar9 + 0x460);
                dVar16 = *(double *)(lVar9 + 0x468);
                dVar3 = pdVar21[3];
                dVar4 = pdVar21[3];
                dVar5 = pdVar21[1];
                dVar6 = pdVar21[1];
                dVar7 = pdVar21[2];
                dVar26 = pdVar21[2];
                dVar10 = dVar14 * dVar7 * -1.0 +
                         dVar15 * dVar5 + *pdVar21 * dVar16 * 1.0 + dVar3 * dVar13;
                dVar11 = dVar13 * dVar26 * 1.0 +
                         dVar16 * dVar6 + *pdVar21 * dVar15 * -1.0 + dVar4 * dVar14;
                dVar25 = (dVar16 * dVar7 * 1.0 +
                         ((*pdVar21 * dVar14 * 1.0 + dVar3 * dVar15) - dVar5 * dVar13)) * -1.0;
                dVar26 = (dVar15 * dVar26 * -1.0 +
                         ((*pdVar21 * dVar13 * -1.0 + dVar4 * dVar16) - dVar6 * dVar14)) * 1.0;
                dVar3 = *(double *)(lVar24 + 0x3c0);
                dVar5 = *(double *)(lVar24 + 0x3c8);
                dVar6 = *(double *)(lVar24 + 0x3d0);
                dVar7 = *(double *)(lVar24 + 0x3d8);
                dVar4 = dVar6 * dVar25 * -1.0 +
                        dVar11 * dVar5 + (dVar26 * dVar7 - dVar10 * dVar3 * -1.0);
                *(double *)(lVar24 + 0x510) =
                     dVar5 * dVar25 * -1.0 +
                     ((dVar3 * dVar26 - dVar7 * dVar10 * 1.0) - dVar6 * dVar11);
                *(double *)(lVar24 + 0x518) =
                     dVar3 * dVar25 * 1.0 +
                     ((dVar5 * dVar26 - dVar6 * dVar10 * -1.0) - dVar7 * dVar11);
                auVar12._8_4_ = SUB84(dVar4,0);
                auVar12._0_8_ =
                     dVar7 * dVar25 * 1.0 + dVar11 * dVar3 + (dVar26 * dVar6 - dVar10 * dVar5 * 1.0)
                ;
                auVar12._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
                *(undefined1 (*) [16])(lVar24 + 0x520) = auVar12;
              }
              *(undefined1 *)(lVar24 + 0x530) = 1;
            }
LAB_144af7b31:
            FUN_1448052ee(puVar2,&local_e8);
            *(undefined8 *)(lVar24 + 0x550) = local_d8;
            *puVar1 = local_e8;
            *(undefined8 ***)(lVar24 + 0x548) = ppuStack_e0;
            *(undefined1 *)(lVar24 + 0x558) = 1;
          }
          *(float *)(param_1 + 0x140) = (float)*(double *)(lVar24 + 0x548);
          *(float *)(param_1 + 0x144) = (float)*(double *)(lVar24 + 0x540);
          *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(lVar24 + 0x2a4);
          uVar23 = 1;
          goto LAB_144af7b93;
        }
      }
    }
  }
  uVar23 = 0;
LAB_144af7b93:
  *(undefined1 *)(param_1 + 0x14c) = uVar23;
  if ((local_80 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144af7c28 FUN_144af7c28 body=3992 status=ok
// SIG undefined FUN_144af7c28(void)

void FUN_144af7c28(float *param_1,float param_2,float param_3,char param_4)

{
  uint *puVar1;
  float fVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong *plVar9;
  char *pcVar10;
  int iVar11;
  byte bVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  bool bVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_158 [32];
  uint local_138;
  float local_130;
  float local_128;
  undefined8 local_120;
  wchar_t *local_118;
  undefined1 *local_110;
  undefined1 *local_108;
  undefined8 *local_100;
  code *local_f8;
  code *local_f0;
  undefined8 local_e0;
  float local_d4;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (DAT_14cb253f8 == (longlong *)0x0) {
    local_100 = &local_e0;
    local_e0 = FUN_1449e2820;
    local_f0 = FUN_14081d0ea;
    local_f8 = FUN_14081d0ea;
    local_108 = &LAB_147f6f09d;
    local_110 = &LAB_146201c25;
    local_118 = L"Game";
    local_120 = 0;
    local_128 = 2.5243567e-29;
    local_130 = 1.12104e-44;
    local_138 = 0x480;
    FUN_14081cfa3(L"/Script/GbxAudio",L"GbxAudioSettings",&DAT_14cb253f8,&DAT_147f6f09c);
  }
  plVar9 = DAT_14cb253f8;
  if (((DAT_14cb253f8[0x22] != 0) ||
      ((**(code **)(*DAT_14cb253f8 + 1000))(DAT_14cb253f8), plVar9[0x22] != 0)) &&
     (lVar13 = DAT_14cb25be0, DAT_14cb25be0 != 0)) {
    if (DAT_14cb5e220 == 0) {
      local_100 = &local_e0;
      local_e0 = FUN_1449e2820;
      local_f0 = FUN_14081d0ea;
      local_f8 = (code *)&LAB_1459ebe90;
      local_108 = &LAB_1486a1487;
      local_110 = &LAB_1464e0171;
      local_118 = L"Engine";
      local_120 = 0;
      local_128 = 2.524355e-29;
      local_130 = 1.12104e-44;
      local_138 = 0x440;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameAudioGlobals",&DAT_14cb5e220,&DAT_1486a1486);
    }
    lVar15 = *(longlong *)(lVar13 + 0x10);
    if (((*(int *)(DAT_14cb5e220 + 0x38) <= *(int *)(lVar15 + 0x38)) &&
        (*(longlong *)(*(longlong *)(lVar15 + 0x30) + (longlong)*(int *)(DAT_14cb5e220 + 0x38) * 8)
         == DAT_14cb5e220 + 0x30)) && (lVar13 = *(longlong *)(lVar13 + 0x2e0), lVar13 != 0)) {
      puVar1 = (uint *)(lVar13 + 0x118);
      if (((*(int *)(lVar13 + 0x11c) == 0) || (uVar4 = *puVar1, (int)uVar4 < 0)) ||
         ((DAT_14c9647dc <= (int)uVar4 ||
          ((((plVar9 = (longlong *)
                       ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
             plVar9 == (longlong *)0x0 || ((int)plVar9[2] != *(int *)(lVar13 + 0x11c))) ||
            ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)) || (lVar15 = *plVar9, lVar15 == 0)))))) {
        if (*(longlong *)(lVar13 + 0x120) != 0) {
          lVar15 = FUN_140007850();
          cVar3 = (*(code *)PTR_FUN_14c758760)();
          if ((lVar15 == 0) || (cVar3 == '\0')) {
            if (lVar15 == 0) {
              *(undefined8 *)(lVar13 + 0x118) = 0;
              goto LAB_144af7d73;
            }
            uVar4 = *(uint *)(lVar15 + 0xc);
            *puVar1 = uVar4;
            if ((int)uVar4 < DAT_14c9647dc) {
              lVar14 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
            }
            else {
              lVar14 = 0;
            }
            iVar5 = *(int *)(lVar14 + 0x10);
            if (*(int *)(lVar14 + 0x10) == 0) {
              LOCK();
              iVar5 = DAT_14c964868 + 1;
              UNLOCK();
              iVar11 = DAT_14c964868 + 1;
              bVar17 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar5;
              if (bVar17) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar11);
              }
              LOCK();
              iVar5 = *(int *)(lVar14 + 0x10);
              bVar17 = iVar5 == 0;
              if (bVar17) {
                *(int *)(lVar14 + 0x10) = iVar11;
                iVar5 = 0;
              }
              UNLOCK();
              if (bVar17) {
                iVar5 = iVar11;
              }
            }
            *(int *)(lVar13 + 0x11c) = iVar5;
          }
          else {
            uVar4 = *(uint *)(lVar15 + 0xc);
            if ((int)uVar4 < DAT_14c9647dc) {
              lVar14 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
            }
            else {
              lVar14 = 0;
            }
            if ((*(uint *)(lVar14 + 8) & 0x8400000) == 0) {
              FUN_14485c47a(puVar1,lVar15);
            }
          }
          if ((*(uint *)(lVar15 + 8) >> 0x1e & 1) == 0) goto LAB_144af85e5;
        }
LAB_144af7d73:
        lVar13 = lVar13 + 0x98;
      }
      else {
LAB_144af85e5:
        lVar14 = FUN_1400d1e14();
        if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x38) < *(int *)(lVar14 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar14 + 0x38) * 8) != lVar14 + 0x30)) goto LAB_144af7d73;
        lVar13 = FUN_1447e736e(puVar1);
        lVar13 = lVar13 + 0x30;
      }
      if (lVar13 != 0) {
        local_d4 = *param_1;
        iVar5 = *(int *)(lVar13 + 0x78);
        if (1 < (longlong)iVar5) {
          lVar15 = *(longlong *)(lVar13 + 0x70);
          fVar18 = *(float *)(lVar15 + 4);
          if (local_d4 <= fVar18) {
            bVar12 = *(byte *)(lVar13 + 0x6c);
            if (1 < bVar12 - 3) {
              fVar25 = *(float *)(lVar15 + 4 + (ulonglong)(iVar5 - 1) * 0x1c);
              goto LAB_144af8327;
            }
          }
          else {
            fVar25 = *(float *)(lVar15 + 4 + (ulonglong)(iVar5 - 1) * 0x1c);
            if ((fVar25 <= local_d4) && (bVar12 = *(byte *)(lVar13 + 0x6d), 1 < bVar12 - 3)) {
LAB_144af8327:
              local_e0 = (code *)((ulonglong)local_e0 & 0xffffffff00000000);
              FUN_147a40fa2(fVar18,fVar25,&local_d4);
              if ((bVar12 == 2) && (((uint)local_e0 & 0x80000001) == 1)) {
                local_d4 = (fVar25 - local_d4) + fVar18;
              }
            }
          }
          if ((fVar18 <= local_d4) &&
             (local_d4 <= *(float *)(lVar15 + -0x18 + (longlong)iVar5 * 0x1c))) {
            if (iVar5 == 2) {
              uVar7 = 1;
            }
            else {
              uVar16 = iVar5 - 2;
              uVar4 = 1;
              do {
                uVar8 = uVar16 >> 1;
                if (*(float *)(lVar15 + 4 + (ulonglong)(uVar8 + uVar4) * 0x1c) <= local_d4) {
                  uVar4 = uVar4 + uVar8 + 1;
                  uVar8 = uVar16 + ~uVar8;
                }
                uVar16 = uVar8;
              } while (0 < (int)uVar16);
              uVar7 = (ulonglong)uVar4;
            }
            lVar13 = uVar7 * 0x1c;
            fVar18 = *(float *)(lVar15 + -0x18 + lVar13);
            fVar25 = *(float *)(lVar15 + 4 + lVar13);
            if (fVar18 < fVar25) {
              lVar15 = lVar15 + lVar13;
              if ((*(char *)(lVar15 + -0x1c) != '\x01') && (*(char *)(lVar15 + -0x1c) != '\0')) {
                if ((1 < *(byte *)(lVar15 + -0x1a)) || ((*(byte *)(lVar15 + 2) & 0xfd) != 0)) {
                  local_108 = (undefined1 *)CONCAT44(local_108._4_4_,local_d4);
                  local_110 = (undefined1 *)CONCAT44(local_110._4_4_,(uint)*(byte *)(lVar15 + 2));
                  local_118 = (wchar_t *)CONCAT44(local_118._4_4_,*(undefined4 *)(lVar15 + 0x10));
                  local_120 = CONCAT44(local_120._4_4_,*(undefined4 *)(lVar15 + 0xc));
                  local_138 = (uint)*(byte *)(lVar15 + -0x1a);
                  local_130 = *(float *)(lVar15 + 8);
                  local_128 = fVar25;
                  FUN_147a3e1e7(*(undefined4 *)(lVar15 + -0x14),fVar18,*(undefined4 *)(lVar15 + -8),
                                *(undefined4 *)(lVar15 + -4));
                }
              }
            }
          }
        }
      }
    }
  }
  dVar20 = (double)param_1[8];
  if (1.0 <= dVar20) {
    dVar20 = 1.0;
  }
  if (dVar20 <= 0.0) {
    dVar20 = 0.0;
  }
  fVar25 = 1.0;
  fVar18 = (float)dVar20 * *param_1 + (1.0 - (float)dVar20) * param_2;
  *param_1 = fVar18;
  if (param_4 == '\0') {
    fVar18 = 0.0;
  }
  else {
    fVar18 = fVar18 * 5.831e-05;
    if (0.29155 <= fVar18) {
      fVar18 = 0.29155;
    }
  }
  dVar20 = (double)param_1[9];
  if (1.0 <= dVar20) {
    dVar20 = 1.0;
  }
  if (dVar20 <= 0.0) {
    dVar20 = 0.0;
  }
  param_1[3] = (float)dVar20 * param_1[3] + (1.0 - (float)dVar20) * fVar18;
  if (DAT_14cb253f8 == (longlong *)0x0) {
    local_100 = &local_e0;
    local_e0 = FUN_1449e2820;
    local_f0 = FUN_14081d0ea;
    local_f8 = FUN_14081d0ea;
    local_108 = &LAB_147f6f09d;
    local_110 = &LAB_146201c25;
    local_118 = L"Game";
    local_120 = 0;
    local_128 = 2.5243567e-29;
    local_130 = 1.12104e-44;
    local_138 = 0x480;
    FUN_14081cfa3(L"/Script/GbxAudio",L"GbxAudioSettings",&DAT_14cb253f8,&DAT_147f6f09c);
  }
  plVar9 = DAT_14cb253f8;
  if (DAT_14cb253f8[0x22] == 0) {
    (**(code **)(*DAT_14cb253f8 + 1000))(DAT_14cb253f8);
    fVar18 = 0.0;
    if (plVar9[0x22] == 0) goto LAB_144af811e;
  }
  lVar13 = DAT_14cb25be0;
  fVar18 = 0.0;
  if (DAT_14cb25be0 == 0) goto LAB_144af811e;
  if (DAT_14cb5e220 == 0) {
    local_100 = &local_e0;
    local_e0 = FUN_1449e2820;
    local_f0 = FUN_14081d0ea;
    local_f8 = (code *)&LAB_1459ebe90;
    local_108 = &LAB_1486a1487;
    local_110 = &LAB_1464e0171;
    local_118 = L"Engine";
    local_120 = 0;
    local_128 = 2.524355e-29;
    local_130 = 1.12104e-44;
    local_138 = 0x440;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameAudioGlobals",&DAT_14cb5e220,&DAT_1486a1486);
  }
  lVar15 = *(longlong *)(lVar13 + 0x10);
  if (((*(int *)(lVar15 + 0x38) < *(int *)(DAT_14cb5e220 + 0x38)) ||
      (*(longlong *)(*(longlong *)(lVar15 + 0x30) + (longlong)*(int *)(DAT_14cb5e220 + 0x38) * 8) !=
       DAT_14cb5e220 + 0x30)) || (lVar13 = *(longlong *)(lVar13 + 0x2e0), lVar13 == 0))
  goto LAB_144af811e;
  puVar1 = (uint *)(lVar13 + 0x118);
  if (((((*(int *)(lVar13 + 0x11c) == 0) || (uVar4 = *puVar1, (int)uVar4 < 0)) ||
       ((DAT_14c9647dc <= (int)uVar4 ||
        ((plVar9 = (longlong *)
                   ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
         plVar9 == (longlong *)0x0 || ((int)plVar9[2] != *(int *)(lVar13 + 0x11c))))))) ||
      ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)) || (lVar15 = *plVar9, lVar15 == 0)) {
    if (*(longlong *)(lVar13 + 0x120) != 0) {
      lVar15 = FUN_140007850();
      cVar3 = (*(code *)PTR_FUN_14c758760)();
      if ((lVar15 == 0) || (cVar3 == '\0')) {
        if (lVar15 == 0) {
          *(undefined8 *)(lVar13 + 0x118) = 0;
          goto LAB_144af7fd5;
        }
        uVar4 = *(uint *)(lVar15 + 0xc);
        *puVar1 = uVar4;
        if ((int)uVar4 < DAT_14c9647dc) {
          lVar14 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
        }
        else {
          lVar14 = 0;
        }
        iVar5 = *(int *)(lVar14 + 0x10);
        if (*(int *)(lVar14 + 0x10) == 0) {
          LOCK();
          iVar5 = DAT_14c964868 + 1;
          UNLOCK();
          iVar11 = DAT_14c964868 + 1;
          bVar17 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar5;
          if (bVar17) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar11);
          }
          LOCK();
          iVar5 = *(int *)(lVar14 + 0x10);
          bVar17 = iVar5 == 0;
          if (bVar17) {
            *(int *)(lVar14 + 0x10) = iVar11;
            iVar5 = 0;
          }
          UNLOCK();
          if (bVar17) {
            iVar5 = iVar11;
          }
        }
        *(int *)(lVar13 + 0x11c) = iVar5;
      }
      else {
        uVar4 = *(uint *)(lVar15 + 0xc);
        if ((int)uVar4 < DAT_14c9647dc) {
          lVar14 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
        }
        else {
          lVar14 = 0;
        }
        if ((*(uint *)(lVar14 + 8) & 0x8400000) == 0) {
          FUN_14485c47a(puVar1,lVar15);
        }
      }
      if ((*(uint *)(lVar15 + 8) >> 0x1e & 1) == 0) goto LAB_144af8699;
    }
LAB_144af7fd5:
    lVar13 = lVar13 + 0x98;
  }
  else {
LAB_144af8699:
    lVar14 = FUN_1400d1e14();
    if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x38) < *(int *)(lVar14 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8
         ) != lVar14 + 0x30)) goto LAB_144af7fd5;
    lVar13 = FUN_1447e736e(puVar1);
    lVar13 = lVar13 + 0x30;
  }
  if (lVar13 == 0) goto LAB_144af811e;
  local_d4 = *param_1;
  iVar5 = *(int *)(lVar13 + 0x78);
  if ((longlong)iVar5 < 2) {
    if (iVar5 == 0) {
      fVar23 = (float)(~-(uint)(*(float *)(lVar13 + 0x68) == 3.4028235e+38) &
                      (uint)*(float *)(lVar13 + 0x68));
      fVar18 = 0.0;
    }
    else {
      lVar15 = *(longlong *)(lVar13 + 0x70);
      fVar18 = 0.0;
LAB_144af8450:
      fVar23 = *(float *)(lVar15 + 8);
    }
  }
  else {
    lVar15 = *(longlong *)(lVar13 + 0x70);
    fVar23 = *(float *)(lVar15 + 4);
    if (local_d4 <= fVar23) {
      bVar12 = *(byte *)(lVar13 + 0x6c);
      fVar18 = 0.0;
      if (1 < bVar12 - 3) {
        lVar14 = (ulonglong)(iVar5 - 1) * 0x1c;
        fVar19 = *(float *)(lVar15 + 4 + lVar14);
        local_e0 = (code *)((ulonglong)local_e0._4_4_ << 0x20);
        FUN_147a40fa2(fVar23,fVar19,&local_d4);
        fVar18 = 0.0;
        if (bVar12 == 2) goto LAB_144af8a69;
        if (bVar12 == 1) {
          fVar18 = *(float *)(lVar15 + 8) - *(float *)(lVar15 + 8 + lVar14);
          goto LAB_144af82d4;
        }
      }
    }
    else {
      lVar14 = (ulonglong)(iVar5 - 1) * 0x1c;
      fVar19 = *(float *)(lVar15 + 4 + lVar14);
      fVar18 = 0.0;
      if ((fVar19 <= local_d4) && (bVar12 = *(byte *)(lVar13 + 0x6d), 1 < bVar12 - 3)) {
        local_e0 = (code *)((ulonglong)local_e0._4_4_ << 0x20);
        FUN_147a40fa2(fVar23,fVar19,&local_d4);
        fVar18 = 0.0;
        if (bVar12 == 2) {
LAB_144af8a69:
          fVar18 = 0.0;
          if (((uint)local_e0 & 0x80000001) == 1) {
            local_d4 = (fVar19 - local_d4) + fVar23;
          }
        }
        else if (bVar12 == 1) {
          fVar18 = *(float *)(lVar15 + 8 + lVar14) - *(float *)(lVar15 + 8);
LAB_144af82d4:
          fVar18 = (float)(int)(uint)local_e0 * fVar18;
        }
      }
    }
    if (local_d4 < fVar23) {
      if ((*(char *)(lVar13 + 0x6c) != '\x03') ||
         (fVar19 = *(float *)(lVar15 + 0x20) - fVar23, ABS(fVar19) <= 1e-08)) goto LAB_144af8450;
      fVar23 = (local_d4 - fVar23) * ((*(float *)(lVar15 + 0x24) - *(float *)(lVar15 + 8)) / fVar19)
               + *(float *)(lVar15 + 8);
    }
    else {
      lVar14 = (longlong)iVar5 * 0x1c;
      fVar23 = *(float *)(lVar15 + -0x18 + lVar14);
      if (fVar23 < local_d4) {
        lVar15 = lVar15 + lVar14;
        if ((*(char *)(lVar13 + 0x6d) != '\x03') ||
           (fVar19 = *(float *)(lVar15 + -0x34) - fVar23, ABS(fVar19) <= 1e-08)) {
          fVar23 = *(float *)(lVar15 + -0x14);
        }
        else {
          fVar23 = (local_d4 - fVar23) *
                   ((*(float *)(lVar15 + -0x30) - *(float *)(lVar15 + -0x14)) / fVar19) +
                   *(float *)(lVar15 + -0x14);
        }
      }
      else {
        if (iVar5 == 2) {
          uVar7 = 1;
        }
        else {
          uVar16 = iVar5 - 2;
          uVar4 = 1;
          do {
            uVar8 = uVar16 >> 1;
            if (*(float *)(lVar15 + 4 + (ulonglong)(uVar8 + uVar4) * 0x1c) <= local_d4) {
              uVar4 = uVar4 + uVar8 + 1;
              uVar8 = uVar16 + ~uVar8;
            }
            uVar16 = uVar8;
          } while (0 < (int)uVar16);
          uVar7 = (ulonglong)uVar4;
        }
        lVar13 = uVar7 * 0x1c;
        pcVar6 = (char *)(lVar15 + lVar13);
        fVar23 = *(float *)(lVar15 + -0x18 + lVar13);
        fVar19 = *(float *)(lVar15 + 4 + lVar13);
        fVar24 = fVar19 - fVar23;
        if (fVar24 <= 0.0) {
          fVar23 = *(float *)(pcVar6 + -0x14);
        }
        else {
          pcVar10 = (char *)(lVar15 + lVar13 + -0x1c);
          cVar3 = *pcVar10;
          if (cVar3 == '\x01') {
            if (local_d4 < fVar19) {
              pcVar6 = pcVar10;
            }
            fVar23 = *(float *)(pcVar6 + 8);
          }
          else {
            fVar22 = (local_d4 - fVar23) / fVar24;
            fVar23 = *(float *)(pcVar6 + -0x14);
            fVar2 = *(float *)(pcVar6 + 8);
            if (cVar3 == '\0') {
              fVar23 = fVar22 * (fVar2 - fVar23) + fVar23;
            }
            else {
              bVar12 = pcVar6[2];
              if (((byte)pcVar6[-0x1a] < 2) && ((bVar12 & 0xfd) == 0)) {
                fVar19 = *(float *)(pcVar6 + -8) * fVar24 * 0.33333334 + fVar23;
                fVar24 = fVar2 - fVar24 * *(float *)(pcVar6 + 0xc) * 0.33333334;
                fVar21 = (fVar24 - fVar19) * fVar22 + fVar19;
                fVar23 = (fVar19 - fVar23) * fVar22 + fVar23;
                fVar23 = (fVar21 - fVar23) * fVar22 + fVar23;
                fVar23 = (((((fVar2 - fVar24) * fVar22 + fVar24) - fVar21) * fVar22 + fVar21) -
                         fVar23) * fVar22 + fVar23;
              }
              else {
                local_108 = (undefined1 *)CONCAT44(local_108._4_4_,local_d4);
                local_110 = (undefined1 *)CONCAT44(local_110._4_4_,(uint)bVar12);
                local_118 = (wchar_t *)CONCAT44(local_118._4_4_,*(undefined4 *)(pcVar6 + 0x10));
                local_120 = CONCAT44(local_120._4_4_,*(undefined4 *)(pcVar6 + 0xc));
                local_138 = (uint)(byte)pcVar6[-0x1a];
                local_130 = fVar2;
                local_128 = fVar19;
                fVar23 = (float)FUN_147a3e1e7(fVar23,bVar12,*(undefined4 *)(pcVar6 + -8),
                                              *(undefined4 *)(pcVar6 + -4));
              }
            }
          }
        }
      }
    }
  }
  fVar18 = fVar18 + fVar23;
LAB_144af811e:
  if (param_4 == '\0') {
    fVar18 = 0.0;
  }
  else {
    fVar25 = (float)(~-(uint)(ABS(param_2 - *param_1) <= fVar18) & 0x3f800000);
    fVar18 = 0.100000024;
  }
  dVar20 = (double)param_1[6];
  if (1.0 <= dVar20) {
    dVar20 = 1.0;
  }
  if (dVar20 <= 0.0) {
    dVar20 = 0.0;
  }
  param_1[2] = (float)dVar20 * param_1[2] + (1.0 - (float)dVar20) * fVar25;
  dVar20 = (double)param_1[7];
  if (1.0 <= dVar20) {
    dVar20 = 1.0;
  }
  if (dVar20 <= 0.0) {
    dVar20 = 0.0;
  }
  param_1[1] = (float)dVar20 * param_1[1] + (1.0 - (float)dVar20) * param_3;
  param_1[4] = param_1[4] * 0.9 + fVar18;
  if ((local_d0 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144af8bc2 FUN_144af8bc2 body=487 status=ok
// SIG undefined FUN_144af8bc2(void)

longlong * FUN_144af8bc2(longlong *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar1 = (int)param_2[9];
  plVar10 = param_1 + 8;
  if ((ulonglong)(longlong)iVar1 < 2) {
    if (*plVar10 != 0) {
      FUN_1446efa72(plVar10,0,0,4);
    }
    if (iVar1 == 0) goto LAB_144af8c25;
  }
  else {
    FUN_1446efa72(plVar10,0,iVar1,4);
  }
  plVar8 = param_1 + 7;
  if ((longlong *)*plVar10 != (longlong *)0x0) {
    plVar8 = (longlong *)*plVar10;
  }
  plVar10 = param_2 + 7;
  if ((longlong *)param_2[8] != (longlong *)0x0) {
    plVar10 = (longlong *)param_2[8];
  }
  memcpy(plVar8,plVar10,(longlong)iVar1 << 2);
LAB_144af8c25:
  *(int *)(param_1 + 9) = iVar1;
  uVar2 = *(uint *)(param_2 + 1);
  FUN_1448c503e(param_1,(ulonglong)uVar2);
  lVar5 = param_1[1];
  *(uint *)(param_1 + 1) = (int)lVar5 + uVar2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar5) < uVar2) {
    FUN_14482b872(param_1);
  }
  *(int *)(param_1 + 6) = (int)param_2[6];
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar6 = (int)param_2[5] + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar6) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar7 = 0x80;
    if (0x80 < (int)uVar6) {
      uVar7 = uVar6;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar7;
    FUN_1446efbd8(param_1 + 2);
  }
  iVar1 = (int)param_2[5];
  *(int *)(param_1 + 5) = iVar1;
  if (iVar1 != 0) {
    plVar10 = (longlong *)param_2[4];
    if ((longlong *)param_2[4] == (longlong *)0x0) {
      plVar10 = param_2 + 2;
    }
    plVar8 = param_1 + 2;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[4];
    }
    memcpy(plVar8,plVar10,(ulonglong)(iVar1 + 0x1fU >> 3 & 0xfffffffc));
  }
  if (0 < (int)uVar2) {
    lVar5 = *param_1;
    lVar3 = *param_2;
    lVar9 = 0;
    uVar11 = 0;
    do {
      plVar10 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar10 = param_2 + 2;
      }
      if ((*(uint *)((longlong)plVar10 + (uVar11 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar11 & 0x1f) & 1
          ) == 0) {
        *(undefined4 *)(lVar5 + lVar9) = *(undefined4 *)(lVar3 + lVar9);
        *(undefined4 *)(lVar5 + 4 + lVar9) = *(undefined4 *)(lVar3 + 4 + lVar9);
      }
      else {
        *(undefined8 *)(lVar5 + lVar9) = *(undefined8 *)(lVar3 + lVar9);
        lVar4 = *(longlong *)(lVar3 + 8 + lVar9);
        *(longlong *)(lVar5 + 8 + lVar9) = lVar4;
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
          UNLOCK();
        }
        *(undefined8 *)(lVar5 + 0x10 + lVar9) = *(undefined8 *)(lVar3 + 0x10 + lVar9);
      }
      uVar11 = uVar11 + 1;
      lVar9 = lVar9 + 0x18;
    } while (uVar2 != uVar11);
  }
  return param_1;
}



// FUNCTION 144af8daa FUN_144af8daa body=331 status=ok
// SIG undefined FUN_144af8daa(void)

undefined8 FUN_144af8daa(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 *local_68;
  longlong **local_60;
  undefined1 *local_58;
  undefined8 **local_50;
  longlong *local_48;
  longlong local_40;
  undefined1 **local_38;
  code *local_30;
  longlong *local_28;
  code **local_20;
  code *local_18;
  code ***local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = *(longlong *)(&DAT_00001ce8 + param_1);
  if ((lVar2 == 0) || (*(longlong *)(param_1 + 0x110) == 0)) goto LAB_144af8ef2;
  if (*(code **)(*(longlong *)(&DAT_00001100 + lVar2) + 0x10) == (code *)&LAB_144944cea) {
    lVar2 = lVar2 + 0x1808;
  }
  else {
    lVar2 = (**(code **)(*(longlong *)(&DAT_00001100 + lVar2) + 0x10))(&DAT_00001100 + lVar2);
  }
  local_68 = &local_70;
  local_70 = DAT_14cb72618;
  local_60 = &local_48;
  local_48 = (longlong *)0x0;
  local_50 = &local_68;
  local_58 = &LAB_143cbcae0;
  if (*(longlong *)(lVar2 + 0x40) != 0) {
    local_28 = &local_40;
    local_38 = &local_58;
    local_20 = &local_30;
    local_30 = FUN_143cbca2e;
    local_10 = &local_20;
    local_18 = FUN_1487df56e;
    local_40 = lVar2;
    FUN_1447c5ba2();
    if (local_48 != (longlong *)0x0) {
      if (*(code **)(*local_48 + 0x28) == (code *)&LAB_1447c9426) {
        if (*(float *)(local_48 + 0x54) <= 1e-08) {
LAB_144af8ef2:
          uVar3 = 0;
          goto LAB_144af8eba;
        }
      }
      else {
        cVar1 = (**(code **)(*local_48 + 0x28))();
        if (cVar1 == '\0') goto LAB_144af8ef2;
      }
    }
  }
  uVar3 = 1;
LAB_144af8eba:
  if ((local_8 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144af8ef6 FUN_144af8ef6 body=371 status=ok
// SIG undefined FUN_144af8ef6(void)

ulonglong FUN_144af8ef6(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  
  lVar6 = *param_1;
  if (*(code **)(lVar6 + 0xbf0) == (code *)&LAB_1447a6898) {
    if ((int)param_1[0x2cc] < 1) {
LAB_144af901d:
      uVar10 = FUN_1400d3d9a(param_1,param_2);
      return uVar10;
    }
  }
  else {
    cVar4 = (**(code **)(lVar6 + 0xbf0))(param_1);
    if (cVar4 == '\0') goto LAB_144af901d;
    lVar6 = *param_1;
  }
  if (*(code **)(lVar6 + 0xc10) != FUN_148811d38) {
    uVar5 = (**(code **)(lVar6 + 0xc10))(param_1);
    goto LAB_144af8f66;
  }
  if (*(code **)(lVar6 + 0xbf0) == (code *)&LAB_1447a6898) {
    if ((int)param_1[0x2cc] < 1) {
LAB_144af9048:
      if (param_1[0x115] == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(int *)(*(longlong *)(param_1[0x115] + 0x40) + 8) - 1;
      }
      goto LAB_144af8f66;
    }
  }
  else {
    cVar4 = (**(code **)(lVar6 + 0xbf0))(param_1);
    if (cVar4 == '\0') goto LAB_144af9048;
  }
  uVar5 = *(uint *)((longlong)param_1 + 0x167c);
LAB_144af8f66:
  if ((longlong)(int)param_1[0x2c2] == 0) {
    uVar7 = 0xffffffff;
  }
  else {
    plVar8 = (longlong *)param_1[0x2c1];
    plVar1 = plVar8 + (longlong)(int)param_1[0x2c2] * 3;
    uVar7 = 0xffffffff;
    do {
      if (*plVar8 != 0) {
        plVar3 = *(longlong **)(*plVar8 + 0x40);
        uVar2 = *(uint *)(plVar3 + 1);
        uVar11 = 0xffffffff;
        if ((ulonglong)uVar2 != 0) {
          uVar9 = uVar2 - 1;
          if ((int)param_2 < (int)(uVar2 - 1)) {
            uVar9 = param_2;
          }
          if ((int)uVar9 < 1) {
            uVar9 = 0;
          }
          if ((int)uVar9 < (int)uVar2) {
            uVar10 = (ulonglong)uVar9;
            do {
              if (*(int *)(*(longlong *)(*plVar3 + uVar10 * 8) + 0xec) != 0) {
                uVar11 = (uint)uVar10;
                break;
              }
              uVar10 = uVar10 + 1;
            } while (uVar2 != uVar10);
          }
        }
        if ((int)uVar7 < (int)uVar11) {
          uVar7 = uVar11;
        }
      }
      plVar8 = plVar8 + 3;
    } while (plVar8 != plVar1);
  }
  if ((int)uVar7 < (int)uVar5) {
    uVar5 = uVar7;
  }
  uVar7 = 0;
  if (0 < (int)uVar5) {
    uVar7 = uVar5;
  }
  return (ulonglong)uVar7;
}



// FUNCTION 144af906a FUN_144af906a body=332 status=ok
// SIG undefined FUN_144af906a(void)

undefined8 FUN_144af906a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  
  lVar3 = FUN_1447262c2(param_3);
  if (lVar3 != 0) {
    uVar4 = FUN_1401b0f18();
    plVar5 = (longlong *)FUN_144718840(lVar3,uVar4);
    if (plVar5 != (longlong *)0x0) {
      cVar1 = *(char *)(param_1 + 0x10);
      lVar3 = (**(code **)(*plVar5 + 0x28))(plVar5);
      iVar2 = *(int *)(param_1 + 0x20);
      if (cVar1 != '\0') {
        if (iVar2 != 0) {
          plVar6 = *(longlong **)(param_1 + 0x18);
          plVar5 = plVar6 + iVar2;
          do {
            if (*(int *)(lVar3 + 0x80) != 0) {
              lVar7 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar3 + 0x78) + lVar7) == *plVar6)
                goto LAB_144af91a6;
                lVar7 = lVar7 + 8;
              } while ((longlong)*(int *)(lVar3 + 0x80) << 3 != lVar7);
            }
            if (*(int *)(lVar3 + 0x90) == 0) {
              return 0;
            }
            lVar7 = 0;
            while (*(longlong *)(*(longlong *)(lVar3 + 0x88) + lVar7) != *plVar6) {
              lVar7 = lVar7 + 8;
              if ((longlong)*(int *)(lVar3 + 0x90) << 3 == lVar7) {
                return 0;
              }
            }
LAB_144af91a6:
            plVar6 = plVar6 + 1;
          } while (plVar6 != plVar5);
        }
        return 1;
      }
      if (iVar2 != 0) {
        plVar6 = *(longlong **)(param_1 + 0x18);
        plVar5 = plVar6 + iVar2;
        do {
          if (*(int *)(lVar3 + 0x80) != 0) {
            lVar7 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar3 + 0x78) + lVar7) == *plVar6) {
                return 1;
              }
              lVar7 = lVar7 + 8;
            } while ((longlong)*(int *)(lVar3 + 0x80) << 3 != lVar7);
          }
          if (*(int *)(lVar3 + 0x90) != 0) {
            lVar7 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar3 + 0x88) + lVar7) == *plVar6) {
                return 1;
              }
              lVar7 = lVar7 + 8;
            } while ((longlong)*(int *)(lVar3 + 0x90) << 3 != lVar7);
          }
          plVar6 = plVar6 + 1;
        } while (plVar6 != plVar5);
      }
    }
  }
  return 0;
}



// FUNCTION 144af91b6 FUN_144af91b6 body=270 status=ok
// SIG undefined FUN_144af91b6(void)

void FUN_144af91b6(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined1 uVar16;
  longlong *plVar17;
  int iVar18;
  
  if (1 < (uint)((int)param_1[2] - *(int *)((longlong)param_1 + 0x3c))) {
    plVar17 = param_1 + 8;
    if ((longlong *)param_1[9] != (longlong *)0x0) {
      plVar17 = (longlong *)param_1[9];
    }
    iVar18 = *(int *)((longlong)plVar17 + (ulonglong)((int)param_1[10] - 1U & param_2) * 4);
    if (iVar18 != -1) {
      do {
        piVar3 = (int *)(*param_1 + (longlong)iVar18 * 0x40);
        if (*(int *)(*param_1 + (longlong)iVar18 * 0x40) == *param_3) {
          plVar17 = *(longlong **)(piVar3 + 0xc);
          if (plVar17 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar17 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar17)(plVar17);
              LOCK();
              piVar2 = (int *)((longlong)plVar17 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar17 + 0x10))(plVar17);
              }
            }
          }
          if (*(longlong *)(piVar3 + 6) != 0) {
            FUN_1400020a8();
          }
          iVar4 = *param_3;
          iVar5 = param_3[1];
          iVar6 = param_3[2];
          iVar7 = param_3[3];
          iVar8 = param_3[4];
          iVar9 = param_3[5];
          iVar10 = param_3[6];
          iVar11 = param_3[7];
          iVar12 = param_3[8];
          iVar13 = param_3[9];
          iVar14 = param_3[10];
          iVar15 = param_3[0xb];
          *(undefined8 *)(piVar3 + 0xc) = *(undefined8 *)(param_3 + 0xc);
          piVar3[8] = iVar12;
          piVar3[9] = iVar13;
          piVar3[10] = iVar14;
          piVar3[0xb] = iVar15;
          piVar3[4] = iVar8;
          piVar3[5] = iVar9;
          piVar3[6] = iVar10;
          piVar3[7] = iVar11;
          *piVar3 = iVar4;
          piVar3[1] = iVar5;
          piVar3[2] = iVar6;
          piVar3[3] = iVar7;
          FUN_140458984(param_1,*param_4,1);
          *param_4 = iVar18;
          uVar16 = 1;
          break;
        }
        iVar18 = piVar3[0xe];
        uVar16 = 0;
      } while (iVar18 != -1);
      goto LAB_144af922c;
    }
  }
  uVar16 = 0;
LAB_144af922c:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar16;
  }
  return;
}



// FUNCTION 144af92c4 FUN_144af92c4 body=700 status=ok
// SIG undefined FUN_144af92c4(void)

int * FUN_144af92c4(longlong *param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar15 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar15 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar15) {
      FUN_144869a3c(param_1,iVar15);
    }
    iVar7 = (int)param_1[5];
    if (iVar7 == 0) {
      iVar10 = -1;
    }
    else {
      iVar10 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar10 = iVar7 + -1;
      }
      iVar10 = iVar10 >> 5;
    }
    plVar12 = param_1 + 2;
    iVar8 = iVar7 + 1;
    iVar16 = iVar7 + 0x1f;
    if (-1 < iVar7) {
      iVar16 = iVar7;
    }
    if (iVar16 >> 5 == iVar10) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar7) {
        iVar10 = iVar7;
        if (iVar7 + 0x20U < 0xa0) {
          iVar8 = 0x80;
        }
        else {
          uVar18 = iVar7 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar11 = 4;
            if (4 < uVar18) {
              uVar11 = uVar18;
            }
          }
          else {
            uVar11 = uVar18 + (uVar18 * 3 >> 3) + 0x10;
          }
          uVar5 = (ulonglong)(uVar11 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar2 = (uint)(uVar5 + 0xf);
              if (uVar11 < 0x1ffd) {
                uVar5 = (ulonglong)
                        (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 + 0xf >> 4]];
              }
              else {
                uVar9 = (ulonglong)(uVar2 & 0xfffffff0);
                if (uVar9 < 0x7ff1) {
                  bVar6 = (&DAT_14c841e00)[uVar2 >> 4];
                  uVar14 = 0x32;
                  if (0x32 < bVar6) {
                    uVar14 = (ulonglong)bVar6;
                  }
                  uVar17 = 0x32 - (ulonglong)bVar6;
                  do {
                    uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar17 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar17 & 0xffffffff] & 0xf) == 0) goto LAB_144af9499;
                    lVar4 = uVar14 + 1 + uVar17;
                    uVar17 = uVar17 - 1;
                  } while (lVar4 != 0x33);
                }
                uVar5 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar5 = (ulonglong)DAT_14c841df8;
                }
                uVar5 = -uVar5 & (uVar9 + uVar5) - 1;
              }
            }
            else {
              uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,0);
              iVar10 = (int)param_1[5];
            }
          }
LAB_144af9499:
          iVar3 = (int)(uVar5 >> 2);
          iVar8 = -0x20;
          if ((int)uVar18 <= iVar3) {
            iVar8 = iVar3 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar12,iVar10);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar10 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar10 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar13 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar13 = plVar12;
        }
        bVar6 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar13 + (longlong)(iVar10 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar13 + (longlong)(iVar10 >> 5) * 4) << (bVar6 & 0x1f)) >>
             (bVar6 & 0x1f);
      }
    }
    lVar4 = (longlong)iVar15;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[4];
    }
    bVar6 = (byte)iVar7 & 0x1f;
    puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar16 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
  }
  else {
    iVar15 = (int)param_1[6];
    lVar4 = (longlong)iVar15;
    iVar7 = *(int *)(*param_1 + 4 + lVar4 * 0x10);
    *(int *)(param_1 + 6) = iVar7;
    iVar10 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar7 * 0x10) = 0xffffffff;
    }
  }
  plVar12 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar12 = (longlong *)param_1[4];
  }
  iVar7 = iVar15 + 0x1f;
  if (-1 < iVar15) {
    iVar7 = iVar15;
  }
  puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar7 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar15 & 0x1f);
  *param_2 = iVar15;
  *(longlong *)(param_2 + 2) = lVar4 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 144af9580 FUN_144af9580 body=227 status=ok
// SIG undefined FUN_144af9580(void)

longlong FUN_144af9580(longlong param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  
  FUN_1401baf3e();
  uVar3 = *(uint *)(param_2 + 0x10) & 0xfffffffe | *(uint *)(param_2 + 0x10) * 2 & 2;
  *(uint *)(param_2 + 0x10) = uVar3;
  iVar2 = *(int *)(param_1 + 0x3d8);
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0x3c8) == 0) {
      return param_2;
    }
    uVar8 = 0;
  }
  else {
    uVar8 = 0x20000;
  }
  bVar1 = *(byte *)(param_2 + 4);
  uVar4 = 0;
  if ((bVar1 & 4) != 0) {
    uVar4 = uVar8;
  }
  if ((((*(byte *)(param_2 + 5) & 2) == 0) && (bVar1 < 0x40 && (*(byte *)(param_2 + 5) & 1) == 0))
     && (bVar5 = *(byte *)(param_2 + 8), (bVar5 & 1) == 0)) {
    iVar7 = *(int *)(param_1 + 0x3c8);
    uVar8 = 0;
  }
  else {
    iVar7 = *(int *)(param_1 + 0x3c8);
    uVar8 = (uint)(iVar7 != 0) << 0x12;
    bVar5 = *(byte *)(param_2 + 8);
  }
  bVar6 = 4;
  if ((bVar1 & 4) == 0) {
    bVar6 = (iVar7 != 0) << 2;
  }
  *(uint *)(param_2 + 0x10) = uVar4 | uVar3 | uVar8;
  *(byte *)(param_2 + 4) = bVar1 & 0xfb | bVar6;
  *(byte *)(param_2 + 8) = iVar2 != 0 | bVar5;
  return param_2;
}



// FUNCTION 144af9664 FUN_144af9664 body=2579 status=ok
// SIG undefined FUN_144af9664(void)

undefined1 *
FUN_144af9664(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  code *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar4 = FUN_1447262c2(param_4);
  if (lVar4 != 0) {
    if (DAT_14cb63988 == 0) {
      local_60 = &local_48;
      local_48 = FUN_1449e2820;
      local_50 = FUN_14081d0ea;
      local_58 = FUN_14081d0ea;
      local_68 = &LAB_1486f5f94;
      local_70 = (code *)&LAB_14106aa88;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10000000;
      local_90 = 8;
      local_98 = 0x250;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkill");
    }
    if ((*(int *)(DAT_14cb63988 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb63988 + 0x38) * 8) == DAT_14cb63988 + 0x30)) {
      lVar11 = *(longlong *)(lVar4 + 0xa8);
      lVar9 = *(longlong *)(param_1 + 0x10);
      if (lVar9 == 0) {
        uVar8 = FUN_140feeb70();
        lVar9 = FUN_14477b664(uVar8);
        *(longlong *)(param_1 + 0x10) = lVar9;
      }
      lVar10 = *(longlong *)(param_1 + 0x18);
      if (((lVar10 == 0) && (lVar10 = 0, lVar9 != 0)) && (*(longlong *)(param_1 + 8) != 0)) {
        plVar5 = *(longlong **)(lVar9 + 0xb8);
        if ((plVar5 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar3 == '\0')) {
          lVar10 = 0;
        }
        else {
          uVar8 = (**(code **)(*plVar5 + 0x110))(plVar5);
          lVar10 = FUN_144aff482(uVar8);
        }
        *(longlong *)(param_1 + 0x18) = lVar10;
      }
      if (lVar11 == lVar10) {
        *(undefined8 *)(param_2 + 0x30) = 0;
        *(undefined1 **)(param_2 + 0x38) = &DAT_100000001;
        *param_2 = 0;
        *(undefined4 *)(param_2 + 0x28) = 0;
LAB_144af9bd4:
        FUN_1456bb102(param_2,lVar4);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_b8);
      }
    }
  }
  plVar5 = (longlong *)FUN_1447262c2(param_4);
  if (plVar5 == (longlong *)0x0) goto LAB_144af9b7b;
  if (DAT_14cb652c0 == 0) {
    local_60 = &local_48;
    local_48 = FUN_1449e2820;
    local_50 = FUN_14081d0ea;
    local_58 = FUN_1427b09ee;
    local_68 = &LAB_148715fe1;
    local_70 = FUN_146508b0f;
    local_78 = L"Engine";
    local_80 = 0;
    local_88 = 0x10004001;
    local_90 = 8;
    local_98 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame");
  }
  lVar4 = DAT_14cb652c0;
  pcVar6 = *(code **)(*plVar5 + 0x288);
  if (pcVar6 == FUN_14478407a) {
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xd20);
    lVar11 = (longlong)iVar2;
    if (0 < lVar11) {
      lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      lVar10 = *(longlong *)(lVar9 + 0xd18);
      if (lVar10 == 0) {
        lVar10 = lVar9 + 0xcf8;
      }
      lVar9 = 0;
      do {
        if (*(longlong **)(lVar10 + lVar9) == plVar5) goto LAB_144af9837;
        lVar9 = lVar9 + 8;
      } while (lVar11 * 8 - lVar9 != 0);
    }
    lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    *(uint *)(lVar9 + 0xd20) = iVar2 + 1U;
    if (*(uint *)(lVar9 + 0xd24) < iVar2 + 1U) {
      FUN_1468740ae(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                    0xcf8,iVar2);
    }
    lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    lVar10 = *(longlong *)(lVar9 + 0xd18);
    if (lVar10 == 0) {
      lVar10 = lVar9 + 0xcf8;
    }
    *(longlong **)(lVar10 + lVar11 * 8) = plVar5;
    if (((lVar4 != 0) && (lVar11 = plVar5[2], lVar11 != 0)) &&
       ((*(byte *)(lVar4 + 0xd5) & 0x40) != 0)) {
      if (DAT_14c950d78 == 0) {
        local_60 = &local_48;
        local_48 = FUN_1449e2820;
        local_50 = FUN_14081d0ea;
        local_58 = FUN_14081d0ea;
        local_68 = &LAB_1468b50ee;
        local_70 = FUN_1427f23a3;
        local_78 = L"Engine";
        local_80 = 0;
        local_88 = 0x10004001;
        local_90 = 8;
        local_98 = 0x28;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Interface");
      }
      if (DAT_14c950d78 != lVar4) {
        do {
          if (0 < (longlong)*(int *)(lVar11 + 0x1e0)) {
            lVar9 = 0;
            do {
              lVar10 = *(longlong *)(*(longlong *)(lVar11 + 0x1d8) + lVar9);
              if (((lVar10 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar10 + 0x38))) &&
                 (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
                  == lVar4 + 0x30)) {
                piVar1 = (int *)(*(longlong *)
                                  ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                                + 0xd20);
                *piVar1 = *piVar1 + -1;
                goto LAB_144af988f;
              }
              lVar9 = lVar9 + 0x10;
            } while ((longlong)*(int *)(lVar11 + 0x1e0) * 0x10 != lVar9);
          }
          lVar11 = *(longlong *)(lVar11 + 0x40);
        } while (lVar11 != 0);
      }
    }
    piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xd20);
    *piVar1 = *piVar1 + -1;
LAB_144af9837:
    if (((*(uint *)(plVar5 + 1) & 0x10) != 0) ||
       (plVar5 = *(longlong **)(plVar5[4] + 0xa8), plVar5 == (longlong *)0x0)) goto LAB_144af9b7b;
    pcVar6 = *(code **)(*plVar5 + 0x288);
    if (pcVar6 == FUN_14478438a) goto LAB_144af9884;
LAB_144af99cb:
    plVar5 = (longlong *)(*pcVar6)(plVar5,lVar4);
  }
  else {
    if (pcVar6 != FUN_14478438a) goto LAB_144af99cb;
LAB_144af9884:
    plVar5 = (longlong *)FUN_14478438a(plVar5,lVar4);
  }
LAB_144af988f:
  if (plVar5 != (longlong *)0x0) {
    if (DAT_14cb652c0 == 0) {
      local_60 = &local_48;
      local_48 = FUN_1449e2820;
      local_50 = FUN_14081d0ea;
      local_58 = FUN_1427b09ee;
      local_68 = &LAB_148715fe1;
      local_70 = FUN_146508b0f;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10004001;
      local_90 = 8;
      local_98 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkillOwner");
      if (DAT_14cb652c0 == 0) goto LAB_144af9b7b;
    }
    lVar4 = DAT_14cb652c0;
    if ((*(byte *)(DAT_14cb652c0 + 0xd5) & 0x40) != 0) {
      if (DAT_14c950d78 == 0) {
        local_60 = &local_48;
        local_48 = FUN_1449e2820;
        local_50 = FUN_14081d0ea;
        local_58 = FUN_14081d0ea;
        local_68 = &LAB_1468b50ee;
        local_70 = FUN_1427f23a3;
        local_78 = L"Engine";
        local_80 = 0;
        local_88 = 0x10004001;
        local_90 = 8;
        local_98 = 0x28;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Interface");
      }
      if (DAT_14c950d78 != lVar4) {
        lVar11 = plVar5[2];
        if ((char)*(uint *)(lVar4 + 0xd4) < '\0') {
          if (lVar11 != 0) {
            do {
              if (0 < (longlong)*(int *)(lVar11 + 0x1e0)) {
                lVar9 = *(longlong *)(lVar11 + 0x1d8);
                lVar10 = 0;
                do {
                  if (*(char *)(lVar9 + 0xc + lVar10) == '\0') {
                    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar9 + lVar10) + 0x38))
                       && (*(longlong *)
                            (*(longlong *)(*(longlong *)(lVar9 + lVar10) + 0x30) +
                            (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
                      plVar7 = (longlong *)
                               ((longlong)*(int *)(lVar9 + 8 + lVar10) + (longlong)plVar5);
                      goto LAB_144af9937;
                    }
                  }
                  lVar10 = lVar10 + 0x10;
                } while ((longlong)*(int *)(lVar11 + 0x1e0) * 0x10 != lVar10);
              }
              plVar7 = (longlong *)0x0;
LAB_144af9937:
            } while ((plVar7 == (longlong *)0x0) &&
                    (lVar11 = *(longlong *)(lVar11 + 0x40), lVar11 != 0));
LAB_144af9af1:
            if ((plVar5 != plVar7) && (plVar7 != (longlong *)0x0)) {
              if (*(code **)(*plVar7 + 0x10) == (code *)&LAB_1448fffbe) {
                plVar7 = plVar7 + 0x641;
              }
              else {
                plVar7 = (longlong *)(**(code **)(*plVar7 + 0x10))(plVar7);
              }
              lVar4 = *(longlong *)(param_1 + 0x10);
              if (lVar4 == 0) {
                uVar8 = FUN_140feeb70();
                lVar4 = FUN_14477b664(uVar8);
                *(longlong *)(param_1 + 0x10) = lVar4;
              }
              lVar11 = *(longlong *)(param_1 + 0x18);
              if (((lVar11 == 0) && (lVar11 = 0, lVar4 != 0)) && (*(longlong *)(param_1 + 8) != 0))
              {
                plVar5 = *(longlong **)(lVar4 + 0xb8);
                if ((plVar5 == (longlong *)0x0) ||
                   (cVar3 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar3 == '\0')) {
                  lVar11 = 0;
                }
                else {
                  uVar8 = (**(code **)(*plVar5 + 0x110))(plVar5);
                  lVar11 = FUN_144aff482(uVar8,(longlong *)(param_1 + 8));
                }
                *(longlong *)(param_1 + 0x18) = lVar11;
              }
              if (((*(byte *)((longlong)plVar7 + 0x20c) & 1) == 0) &&
                 ((longlong)(int)plVar7[8] != 0)) {
                lVar9 = 0;
                do {
                  lVar4 = *(longlong *)(plVar7[7] + lVar9);
                  if (((lVar4 != 0) && ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0)) &&
                     (*(longlong *)(lVar4 + 0xa8) == lVar11)) {
                    if ((*(byte *)(lVar4 + 0x248) & 2) != 0) {
                      *(undefined8 *)(param_2 + 0x30) = 0;
                      *(undefined1 **)(param_2 + 0x38) = &DAT_100000001;
                      *param_2 = 0;
                      *(undefined4 *)(param_2 + 0x28) = 0;
                      goto LAB_144af9bd4;
                    }
                    break;
                  }
                  lVar9 = lVar9 + 8;
                } while ((longlong)(int)plVar7[8] * 8 != lVar9);
              }
            }
          }
        }
        else if ((*(uint *)(lVar4 + 0xd4) >> 0xe & 1) != 0) {
          if (DAT_14c950d78 == 0) {
            local_60 = &local_48;
            local_48 = FUN_1449e2820;
            local_50 = FUN_14081d0ea;
            local_58 = FUN_14081d0ea;
            local_68 = &LAB_1468b50ee;
            local_70 = FUN_1427f23a3;
            local_78 = L"Engine";
            local_80 = 0;
            local_88 = 0x10004001;
            local_90 = 8;
            local_98 = 0x28;
            FUN_14081cfa3(L"/Script/CoreUObject",L"Interface",&DAT_14c950d78,&DAT_1468b50f4);
          }
          if ((lVar11 != 0) && (DAT_14c950d78 != lVar4)) {
            do {
              if (0 < (longlong)*(int *)(lVar11 + 0x1e0)) {
                lVar9 = 0;
                do {
                  lVar10 = *(longlong *)(*(longlong *)(lVar11 + 0x1d8) + lVar9);
                  if (((lVar10 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar10 + 0x38))) &&
                     (plVar7 = plVar5,
                     *(longlong *)
                      (*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
                     lVar4 + 0x30)) goto LAB_144af9af1;
                  lVar9 = lVar9 + 0x10;
                } while ((longlong)*(int *)(lVar11 + 0x1e0) * 0x10 != lVar9);
              }
              lVar11 = *(longlong *)(lVar11 + 0x40);
            } while (lVar11 != 0);
          }
        }
      }
    }
  }
LAB_144af9b7b:
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0x100000000;
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144afa078 FUN_144afa078 body=459 status=ok
// SIG undefined FUN_144afa078(void)

undefined8 * FUN_144afa078(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  uint uVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *(longlong *)(param_1 + 0xbc8);
  if (lVar2 != 0) {
    uVar3 = DAT_14cb8c228;
    if (param_1 == 0) goto LAB_144afa1cc;
    if (*(char *)(lVar2 + 0x408) != '\x01') goto LAB_144afa1c1;
    if (*(char *)(lVar2 + 0x409) != '\x01') goto LAB_144afa1cc;
    FUN_1447e6dee(lVar2,&local_38);
    if ((local_38 == 0) || (*(int *)(local_38 + 0x1c) == 0)) {
LAB_144afa1fc:
      bVar8 = false;
    }
    else {
      uVar7 = *(uint *)(local_38 + 0x18);
      bVar8 = false;
      if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) {
        plVar6 = (longlong *)
                 ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
        if ((((plVar6 != (longlong *)0x0) && ((int)plVar6[2] == *(int *)(local_38 + 0x1c))) &&
            ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)) && (lVar2 = *plVar6, lVar2 != 0)) {
          uVar7 = 0;
          bVar8 = false;
          if ((longlong)*(int *)(lVar2 + 0x498) == 0) goto LAB_144afa1ac;
          lVar4 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar2 + 0x490) + lVar4) == param_1) {
              if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)(local_38 + 0x40))) {
                lVar2 = local_38 + 0x28;
                if (*(longlong *)(local_38 + 0x38) != 0) {
                  lVar2 = *(longlong *)(local_38 + 0x38);
                }
                bVar8 = (*(uint *)(lVar2 + (ulonglong)((uint)((ulonglong)lVar4 >> 8) & 0x7ffffff) *
                                           4) >> (uVar7 & 0x1f) & 1) != 0;
                goto LAB_144afa1ac;
              }
              break;
            }
            lVar4 = lVar4 + 8;
            uVar7 = uVar7 + 1;
          } while ((longlong)*(int *)(lVar2 + 0x498) * 8 != lVar4);
        }
        goto LAB_144afa1fc;
      }
    }
LAB_144afa1ac:
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_30 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
        }
      }
    }
    uVar3 = DAT_14cb8c228;
    if (!bVar8) goto LAB_144afa1cc;
  }
LAB_144afa1c1:
  if ((*(char *)(param_1 + 0x848) == '\0') && (*(char *)(param_1 + 0xcb8) == '\0')) {
    puVar5 = &DAT_14cb8c238;
    if ((*(byte *)(param_1 + 0xe10) & 2) == 0) {
      puVar5 = &DAT_14cb8c230;
    }
    uVar3 = *puVar5;
  }
  else {
    uVar3 = 0;
  }
LAB_144afa1cc:
  *param_2 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 144afa244 FUN_144afa244 body=210 status=ok
// SIG undefined FUN_144afa244(void)

undefined8 FUN_144afa244(longlong param_1,int param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  cVar2 = DAT_14ca85169;
  if ((longlong)*(int *)(param_1 + 0x178) != 0) {
    uVar5 = 0;
    lVar4 = 0;
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x170) + uVar5) == param_2) {
        if ((int)(~uVar5 >> 4) == 0) {
          return 0;
        }
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x170) + 8 + (lVar4 >> 0x20) * 0x10);
        uVar1 = *(undefined4 *)(lVar4 + 0x1c);
        uVar3 = *(undefined8 *)(lVar4 + 0x10);
        if (DAT_14ca85169 == '\0') {
          FUN_14002049c(&DAT_14ca85100,1);
        }
        uVar3 = (**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,&DAT_14ca85100,uVar3,0,uVar1,1);
        if (cVar2 == '\0') {
          FUN_14002049c(&DAT_14ca85100,0);
        }
        *(undefined8 *)(lVar4 + 0x20) = uVar3;
        return uVar3;
      }
      lVar4 = lVar4 + 0x100000000;
      uVar5 = uVar5 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x178) * 0x10 != uVar5);
  }
  return 0;
}



// FUNCTION 144afa316 FUN_144afa316 body=210 status=ok
// SIG undefined FUN_144afa316(void)

undefined8 FUN_144afa316(longlong param_1,int param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  cVar2 = DAT_14ca85169;
  if ((longlong)*(int *)(param_1 + 0x188) != 0) {
    uVar5 = 0;
    lVar4 = 0;
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x180) + uVar5) == param_2) {
        if ((int)(~uVar5 >> 4) == 0) {
          return 0;
        }
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x180) + 8 + (lVar4 >> 0x20) * 0x10);
        uVar1 = *(undefined4 *)(lVar4 + 0x1c);
        uVar3 = *(undefined8 *)(lVar4 + 0x10);
        if (DAT_14ca85169 == '\0') {
          FUN_14002049c(&DAT_14ca85100,1);
        }
        uVar3 = (**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,&DAT_14ca85100,uVar3,0,uVar1,1);
        if (cVar2 == '\0') {
          FUN_14002049c(&DAT_14ca85100,0);
        }
        *(undefined8 *)(lVar4 + 0x28) = uVar3;
        return uVar3;
      }
      lVar4 = lVar4 + 0x100000000;
      uVar5 = uVar5 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x188) * 0x10 != uVar5);
  }
  return 0;
}



// FUNCTION 144afa3e8 FUN_144afa3e8 body=426 status=ok
// SIG undefined FUN_144afa3e8(void)

void FUN_144afa3e8(longlong param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar6 = *(float *)(param_1 + 0x2c0);
  fVar5 = *(float *)(param_1 + 0x2d4);
  fVar4 = fVar5;
  if (fVar5 <= fVar6) {
    fVar4 = fVar6;
  }
  fVar5 = fVar5 + *(float *)(param_1 + 0x2dc);
  fVar6 = fVar6 + *(float *)(param_1 + 0x2c8);
  if (fVar6 <= fVar5) {
    fVar5 = fVar6;
  }
  fVar6 = 0.0;
  if (fVar5 <= fVar4) {
    fVar10 = 0.0;
    fVar9 = 0.0;
    fVar11 = 0.0;
  }
  else {
    fVar9 = *(float *)(param_1 + 700);
    fVar8 = *(float *)(param_1 + 0x2d0);
    fVar7 = fVar8;
    if (fVar8 <= fVar9) {
      fVar7 = fVar9;
    }
    fVar8 = fVar8 + *(float *)(param_1 + 0x2d8);
    fVar9 = fVar9 + *(float *)(param_1 + 0x2c4);
    if (fVar9 <= fVar8) {
      fVar8 = fVar9;
    }
    fVar10 = 0.0;
    fVar9 = 0.0;
    fVar11 = 0.0;
    if (fVar7 < fVar8) {
      fVar10 = fVar8 - fVar7;
      fVar6 = fVar5 - fVar4;
      fVar9 = fVar4;
      fVar11 = fVar7;
    }
  }
  uVar1 = *(undefined1 *)(param_1 + 0x2b8);
  puVar2 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
  puVar3 = puVar2 + 5;
  if (DAT_14ca85108 < puVar3) {
    FUN_140023dd8(&DAT_14ca85100,0x30);
    puVar2 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar3 = puVar2 + 5;
  }
  DAT_14ca85160 = DAT_14ca85160 + 1;
  DAT_14ca85100 = puVar3;
  *DAT_14ca85130 = puVar2;
  DAT_14ca85130 = puVar2 + 1;
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a20cb90;
  *(undefined1 *)(puVar2 + 2) = uVar1;
  *(int *)((longlong)puVar2 + 0x14) = (int)(longlong)fVar11;
  *(int *)(puVar2 + 3) = (int)(longlong)fVar9;
  *(int *)((longlong)puVar2 + 0x1c) = -((int)ROUND(-0.5 - (fVar10 + fVar11 + fVar10 + fVar11)) >> 1)
  ;
  *(int *)(puVar2 + 4) = -((int)ROUND(-0.5 - (fVar6 + fVar9 + fVar6 + fVar9)) >> 1);
  return;
}



// FUNCTION 144afa592 FUN_144afa592 body=516 status=ok
// SIG undefined FUN_144afa592(void)

int FUN_144afa592(char param_1)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  
  FUN_140596bca();
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cb8fbf8);
  if (param_1 == '\0') {
LAB_144afa75a:
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    if (DAT_14cb8fbd0 == 0) {
      uVar5 = 1;
      uVar3 = 0;
      iVar11 = 0;
      iVar8 = 0;
    }
    else {
      puVar9 = &DAT_14cb8fbb8;
      if (DAT_14cb8fbc8 != (uint *)0x0) {
        puVar9 = DAT_14cb8fbc8;
      }
      uVar6 = *puVar9;
      if (uVar6 == 0) {
        iVar11 = DAT_14cb8fbd0 + 0x1e;
        if (-1 < DAT_14cb8fbd0 + -1) {
          iVar11 = DAT_14cb8fbd0 + -1;
        }
        uVar3 = 0;
        uVar5 = (ulonglong)(uint)(iVar11 >> 5);
        if (iVar11 >> 5 < 1) {
          uVar5 = uVar3;
        }
        iVar8 = 0;
        do {
          if (uVar5 == uVar3) goto LAB_144afa75a;
          iVar8 = iVar8 + 0x20;
          uVar6 = puVar9[uVar3 + 1];
          uVar3 = uVar3 + 1;
        } while (uVar6 == 0);
      }
      else {
        uVar3 = 0;
        iVar8 = 0;
      }
      uVar5 = (ulonglong)(-uVar6 & uVar6);
      uVar1 = uVar5 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar11 = (iVar8 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      if (DAT_14cb8fbd0 <= iVar11) {
        iVar11 = DAT_14cb8fbd0;
      }
    }
    if (iVar11 != DAT_14cb8fbd0) {
      puVar9 = &DAT_14cb8fbb8;
      if (DAT_14cb8fbc8 != (uint *)0x0) {
        puVar9 = DAT_14cb8fbc8;
      }
      iVar10 = DAT_14cb8fbd0 + 0x1e;
      if (-1 < DAT_14cb8fbd0 + -1) {
        iVar10 = DAT_14cb8fbd0 + -1;
      }
      iVar10 = iVar10 >> 5;
      uVar6 = 0xffffffff;
      iVar2 = 0;
      iVar7 = 0;
      do {
        lVar13 = *(longlong *)(DAT_14cb8fba8 + (longlong)iVar11 * 0x10);
        if (lVar13 != 0) {
          if (*(char *)(lVar13 + 0x88) == '\x01') {
            iVar7 = iVar7 + 1;
          }
          else {
            iVar2 = iVar2 + (uint)(*(char *)(lVar13 + 0x70) == '\x04');
          }
        }
        uVar6 = uVar6 & ~(uint)uVar5;
        iVar11 = (int)uVar3;
        lVar13 = (longlong)iVar11;
        uVar12 = puVar9[lVar13] & uVar6;
        if (uVar12 == 0) {
          iVar4 = iVar10;
          if (iVar10 < iVar11) {
            iVar4 = iVar11;
          }
          if (iVar10 <= iVar11) break;
          lVar14 = 0;
          while( true ) {
            iVar8 = iVar8 + 0x20;
            uVar12 = puVar9[lVar13 + lVar14 + 1];
            if (uVar12 != 0) break;
            lVar14 = lVar14 + 1;
            if (iVar4 - lVar13 == lVar14) goto LAB_144afa722;
          }
          uVar3 = (ulonglong)(iVar11 + (int)lVar14 + 1);
          uVar6 = 0xffffffff;
        }
        uVar5 = (ulonglong)(-uVar12 & uVar12);
        uVar1 = uVar5 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar11 = (iVar8 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      } while (iVar11 < DAT_14cb8fbd0);
LAB_144afa722:
      iVar2 = iVar2 + iVar7;
    }
  }
  iVar2 = DAT_14cb8fbb0 - (iVar2 + DAT_14cb8fbdc);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cb8fbf8);
  return iVar2;
}



// FUNCTION 144afa7b6 FUN_144afa7b6 body=3767 status=ok
// SIG undefined FUN_144afa7b6(void)

undefined8 FUN_144afa7b6(longlong *param_1,longlong *param_2,longlong param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  ulonglong uVar3;
  char cVar4;
  size_t sVar5;
  undefined8 uVar6;
  undefined *puVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  undefined4 uVar11;
  wchar_t *_Str;
  undefined8 *puVar12;
  uint uVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  code *local_140;
  undefined *local_138;
  code *local_130;
  longlong local_120;
  int local_118;
  undefined4 local_114;
  ulonglong local_110;
  undefined4 *local_108;
  longlong local_100 [2];
  wchar_t *local_f0;
  int local_e8;
  undefined8 local_e0 [16];
  undefined8 *local_60;
  undefined8 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_108 = param_4;
  local_114 = (**(code **)(*param_2 + 0x88))(param_2);
  (**(code **)(*param_2 + 0x80))(param_2,4);
  local_120 = param_3;
  if (*(code **)(*param_1 + 0x10) == FUN_1405c1c5a) {
    lVar14 = param_1[3];
    if (lVar14 == 0) {
      lVar14 = 0;
      lVar9 = 0;
    }
    else {
      puVar7 = *(undefined **)(lVar14 + 8);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c952a58) && (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1))
      {
        local_138 = (undefined *)FUN_1446ddbd2();
        local_130 = FUN_1403a682c;
        local_140 = (code *)0x0;
        local_148 = (undefined1 *)0x108001;
        FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
        atexit(FUN_142818c9e);
        _Init_thread_footer(&DAT_14c952a58);
      }
      if (DAT_14c952a10 == 0) {
        bVar15 = puVar7 != (undefined *)0x0;
        if (puVar7 != &DAT_14c952a08 && bVar15) {
          do {
            puVar7 = *(undefined **)(puVar7 + 0x30);
            bVar15 = puVar7 != (undefined *)0x0;
            param_3 = local_120;
            if (puVar7 == &DAT_14c952a08) break;
          } while (puVar7 != (undefined *)0x0);
        }
      }
      else {
        bVar15 = (*(ulonglong *)(puVar7 + 0x18) & DAT_14c952a10) != 0;
      }
      lVar9 = 0;
      if (bVar15) {
        lVar9 = lVar14;
      }
      lVar14 = param_1[3];
    }
    if (*(uint *)(lVar14 + 0x30) < 2) {
      lVar14 = *(int *)(lVar9 + 0x44) + param_3;
      uVar3 = *(ulonglong *)(lVar9 + 0x70);
      (**(code **)(*param_2 + 0x28))(param_2);
      param_3 = local_120;
      if (DAT_14cb90f60 != DAT_14cb90f8c) {
        uVar13 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
        uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
        puVar7 = &DAT_14cb90f90;
        if (DAT_14cb90f98 != (undefined *)0x0) {
          puVar7 = DAT_14cb90f98;
        }
        iVar10 = *(int *)(puVar7 + (ulonglong)(DAT_14cb90fa0 - 1U & (uVar13 >> 0x10 ^ uVar13)) * 4);
        while (iVar10 != -1) {
          puVar1 = (ulonglong *)(DAT_14cb90f58 + (longlong)iVar10 * 0x18);
          if (*puVar1 == uVar3) {
            if (puVar1 + 1 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) {
              (*(code *)puVar1[1])(param_2,lVar14);
              goto LAB_144afa9b9;
            }
            break;
          }
          iVar10 = (int)puVar1[2];
        }
      }
      local_118 = (**(code **)(*param_2 + 0x88))(param_2);
      local_e0[0] = *(undefined8 *)(uVar3 + 0x18);
      local_110 = uVar3;
      FUN_1400021e4(local_e0,&local_f0);
      _Str = local_f0;
      if (local_e8 == 0) {
        _Str = L"";
      }
      local_60 = (undefined8 *)0x0;
      if (_Str == (wchar_t *)0x0) {
        local_58 = (undefined8 *)0x0;
        local_50 = 0;
      }
      else {
        sVar5 = wcslen(_Str);
        local_50 = FUN_14475aa65(0,_Str,sVar5 & 0xffffffff);
        uVar13 = local_50 + 1;
        puVar12 = (undefined8 *)0x0;
        if (0x80 < uVar13) {
          FUN_1446efa72(&local_60,0,uVar13,1);
          puVar12 = local_60;
        }
        local_58 = local_e0;
        if (puVar12 != (undefined8 *)0x0) {
          local_58 = puVar12;
        }
        FUN_14475a98a(local_58,uVar13,_Str,(int)sVar5 + 1);
      }
      (**(code **)(*param_2 + 0x10))(param_2,local_100,local_58,lVar14);
      param_3 = local_120;
      if (local_60 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      uVar3 = local_110;
      if (local_100[0] != 0) {
        FUN_14475ab45(param_2,lVar14,local_110,local_118 == 0);
        FUN_140066842(param_2,uVar3);
      }
      cohtml::TypeDescription::~TypeDescription((TypeDescription *)local_100);
      if (local_f0 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
LAB_144afa9b9:
      (**(code **)(*param_2 + 0x48))(param_2,lVar14);
    }
    else {
      plVar8 = (longlong *)FUN_1489e59be(param_1,param_3);
      *plVar8 = param_3;
      plVar8[1] = param_1[3];
      local_140 = FUN_143e9dc4a;
      local_148 = &LAB_143e9109a;
      cVar4 = (**(code **)(*param_2 + 0x158))(param_2,plVar8,FUN_1489e5b48,FUN_1489e5aaa);
      if (cVar4 == '\0') {
        (**(code **)(*param_2 + 0x160))(param_2,(longlong)*(int *)(param_1[3] + 0x30));
        lVar14 = param_1[3];
        if (0 < *(int *)(lVar14 + 0x30)) {
          iVar10 = 0;
          do {
            FUN_1401e1be1(param_2,(longlong)*(int *)(lVar14 + 0x34) * (longlong)iVar10 +
                                  *(int *)(lVar9 + 0x44) + local_120,*(undefined8 *)(lVar9 + 0x70));
            iVar10 = iVar10 + 1;
            lVar14 = param_1[3];
          } while (iVar10 < *(int *)(lVar14 + 0x30));
        }
        (**(code **)(*param_2 + 0x168))(param_2);
        param_3 = local_120;
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3);
  }
  (**(code **)(*param_2 + 0x80))(param_2,local_114);
  uVar6 = (**(code **)(*param_2 + 0x40))(param_2);
  lVar14 = param_1[3];
  iVar10 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110);
  if (lVar14 == 0) {
    lVar9 = 0;
  }
  else {
    puVar7 = *(undefined **)(lVar14 + 8);
    if ((iVar10 < DAT_14c952a58) && (FUN_144b3d300(), DAT_14c952a58 == -1)) {
      local_138 = (undefined *)FUN_1446ddbd2();
      local_130 = FUN_1403a682c;
      local_140 = (code *)0x0;
      local_148 = (undefined1 *)0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer();
    }
    if (DAT_14c952a10 == 0) {
      bVar15 = puVar7 != (undefined *)0x0;
      if (puVar7 != &DAT_14c952a08 && bVar15) {
        do {
          puVar7 = *(undefined **)(puVar7 + 0x30);
          bVar15 = puVar7 != (undefined *)0x0;
          param_3 = local_120;
          if (puVar7 == &DAT_14c952a08) break;
        } while (puVar7 != (undefined *)0x0);
      }
    }
    else {
      bVar15 = (*(ulonglong *)(puVar7 + 0x18) & DAT_14c952a10) != 0;
    }
    lVar9 = 0;
    if (bVar15) {
      lVar9 = lVar14;
    }
    iVar10 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110);
  }
  iVar2 = *(int *)(lVar9 + 0x44);
  if ((iVar10 < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
    local_138 = (undefined *)FUN_140342cba();
    local_130 = FUN_1468c7f1e;
    local_140 = (code *)0x0;
    local_148 = (undefined1 *)0x8001;
    FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
    atexit(FUN_14280c819);
    _Init_thread_footer(&DAT_14c951a88);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951d20) && (FUN_144b3d300(&DAT_14c951d20), DAT_14c951d20 == -1)) {
    local_138 = (undefined *)FUN_1446ddbd2();
    local_130 = FUN_14067a048;
    local_140 = (code *)0x0;
    local_148 = (undefined1 *)0x28001;
    FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
    atexit(FUN_142811fe5);
    _Init_thread_footer(&DAT_14c951d20);
  }
  puVar7 = (undefined *)FUN_14475a8dc();
  if (puVar7 == &DAT_14c951a38) {
    uVar11 = 5;
  }
  else {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952210) && (FUN_144b3d300(&DAT_14c952210), DAT_14c952210 == -1)) {
      FUN_14475b26a();
      local_130 = FUN_1405ebbb2;
      local_138 = &DAT_14c9520b8;
      local_140 = (code *)0x0;
      local_148 = (undefined1 *)0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952268) && (FUN_144b3d300(&DAT_14c952268), DAT_14c952268 == -1)) {
      FUN_14475b26a();
      local_130 = FUN_1459738d6;
      local_138 = &DAT_14c9520b8;
      local_140 = (code *)0x0;
      local_148 = (undefined1 *)0x1408001;
      FUN_14000176a(&DAT_14c952218,L"FInt64Property",0x400000,0);
      atexit(FUN_142816fda);
      _Init_thread_footer(&DAT_14c952268);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952318) && (FUN_144b3d300(&DAT_14c952318), DAT_14c952318 == -1)) {
      FUN_14475b26a();
      local_130 = FUN_1468e122c;
      local_138 = &DAT_14c9520b8;
      local_140 = (code *)0x0;
      local_148 = (undefined1 *)0x1008801;
      FUN_14000176a(&DAT_14c9522c8,L"FUInt32Property",0x800,0);
      atexit(FUN_142817034);
      _Init_thread_footer(&DAT_14c952318);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952370) && (FUN_144b3d300(&DAT_14c952370), DAT_14c952370 == -1)) {
      FUN_14475b26a();
      local_130 = FUN_1468e12e4;
      local_138 = &DAT_14c9520b8;
      local_140 = (code *)0x0;
      local_148 = (undefined1 *)0x1008201;
      FUN_14000176a(&DAT_14c952320,L"FUInt64Property",0x200,0);
      atexit(FUN_142817061);
      _Init_thread_footer(&DAT_14c952370);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9523c8) && (FUN_144b3d300(&DAT_14c9523c8), DAT_14c9523c8 == -1)) {
      FUN_14475b26a();
      local_130 = FUN_1408a629c;
      local_138 = &DAT_14c9520b8;
      local_140 = (code *)0x0;
      local_148 = (undefined1 *)0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952420) && (FUN_144b3d300(&DAT_14c952420), DAT_14c952420 == -1)) {
      FUN_14475b26a();
      local_130 = FUN_14079c5e4;
      local_138 = &DAT_14c9520b8;
      local_148 = (undefined1 *)0x101008001;
      local_140 = (code *)0x0;
      FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0);
      atexit(FUN_1428170bb);
      _Init_thread_footer(&DAT_14c952420);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c963e88) && (FUN_144b3d300(&DAT_14c963e88), DAT_14c963e88 == -1)) {
      local_138 = (undefined *)FUN_1446ddbd2();
      local_130 = FUN_140dafe7a;
      local_140 = (code *)0x0;
      local_148 = (undefined1 *)0xc001;
      FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0);
      atexit(FUN_142829758);
      _Init_thread_footer(&DAT_14c963e88);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9520b0) && (FUN_144b3d300(&DAT_14c9520b0), DAT_14c9520b0 == -1)) {
      local_138 = (undefined *)FUN_1446ddbd2();
      local_130 = FUN_1409e12a0;
      local_140 = (code *)0x0;
      local_148 = (undefined1 *)0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c963ee0) && (FUN_144b3d300(&DAT_14c963ee0), DAT_14c963ee0 == -1)) {
      local_138 = (undefined *)FUN_1446ddbd2();
      local_130 = FUN_140fb5c52;
      local_140 = (code *)0x0;
      local_148 = (undefined1 *)0x40008001;
      FUN_14000176a(&DAT_14c963e90,L"FTextProperty",0x40000000,0);
      atexit(FUN_14282980e);
      _Init_thread_footer(&DAT_14c963ee0);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951ae0) && (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1)) {
      FUN_1446ddbd2();
      local_130 = FUN_140b31576;
      local_138 = &DAT_14c951a38;
      local_140 = (code *)0x0;
      local_148 = (undefined1 *)0x208001;
      FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0);
      atexit(FUN_14280cbf7);
      _Init_thread_footer(&DAT_14c951ae0);
    }
    uVar11 = 0x10;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951f40) &&
       (FUN_144b3d300(&DAT_14c951f40), param_3 = local_120, DAT_14c951f40 == -1)) {
      local_138 = (undefined *)FUN_1446ddbd2();
      local_130 = FUN_140eb3340;
      local_148 = (undefined1 *)0x400000008001;
      local_140 = (code *)0x0;
      FUN_14000176a(&DAT_14c951ef0,L"FMapProperty",0x400000000000,0);
      atexit(FUN_142815b60);
      _Init_thread_footer(&DAT_14c951f40);
      param_3 = local_120;
    }
  }
  *local_108 = uVar11;
  *(undefined8 *)(local_108 + 2) = uVar6;
  *(longlong *)(local_108 + 4) = param_3 + iVar2;
  if ((local_48 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144afb66e FUN_144afb66e body=516 status=ok
// SIG undefined FUN_144afb66e(void)

longlong FUN_144afb66e(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  bool bVar7;
  
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (lVar4 == 0) {
    lVar4 = 0;
    lVar5 = 0;
  }
  else {
    puVar6 = *(undefined8 **)(lVar4 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9523c8) && (FUN_144b3d300(&DAT_14c9523c8), DAT_14c9523c8 == -1)) {
      FUN_14475b26a();
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0,0x1008101,0,&DAT_14c9520b8,
                    FUN_1408a629c);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
    if (DAT_14c952380 == 0) {
      bVar7 = puVar6 != (undefined8 *)0x0;
      if (puVar6 != &DAT_14c952378 && bVar7) {
        do {
          puVar6 = (undefined8 *)puVar6[6];
          bVar7 = puVar6 != (undefined8 *)0x0;
          if (puVar6 == &DAT_14c952378) break;
        } while (puVar6 != (undefined8 *)0x0);
      }
    }
    else {
      bVar7 = (puVar6[3] & DAT_14c952380) != 0;
    }
    lVar5 = 0;
    if (bVar7) {
      lVar5 = lVar4;
    }
    lVar4 = *(longlong *)(param_1 + 0x18);
  }
  if (*(uint *)(lVar4 + 0x30) < 2) {
    (**(code **)(*param_2 + 0xe8))(param_2,*(undefined4 *)(param_3 + *(int *)(lVar5 + 0x44)));
  }
  else {
    plVar3 = (longlong *)FUN_1489e8ace(param_1,param_3);
    *plVar3 = param_3;
    plVar3[1] = *(longlong *)(param_1 + 0x18);
    cVar2 = (**(code **)(*param_2 + 0x158))
                      (param_2,plVar3,FUN_143ea0fe2,FUN_143ea1143,&LAB_143e9109a,FUN_143ea0ec0);
    if (cVar2 == '\0') {
      (**(code **)(*param_2 + 0x160))(param_2,(longlong)*(int *)(lVar5 + 0x30));
      if (0 < *(int *)(lVar5 + 0x30)) {
        iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x44);
        lVar4 = 0;
        do {
          (**(code **)(*param_2 + 0xe8))(param_2,*(undefined4 *)(iVar1 + param_3 + lVar4 * 4));
          lVar4 = lVar4 + 1;
        } while (lVar4 < *(int *)(lVar5 + 0x30));
      }
      (**(code **)(*param_2 + 0x168))(param_2);
    }
  }
  return param_3;
}



// FUNCTION 144afb872 FUN_144afb872 body=662 status=ok
// SIG undefined FUN_144afb872(void)

undefined8 FUN_144afb872(longlong param_1,longlong param_2,void *param_3,ulonglong *param_4)

{
  wchar_t wVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  size_t sVar5;
  uint uVar6;
  wchar_t *_Str;
  ulonglong uVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  int iVar10;
  uint uVar11;
  undefined1 auStack_118 [40];
  undefined1 *local_f0;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar4 = (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + 0x44);
  if (*(int *)(param_2 + 8 + lVar4) == 0) {
    _Str = L"";
  }
  else {
    _Str = *(wchar_t **)(param_2 + lVar4);
  }
  local_60 = (undefined1 *)0x0;
  if (_Str == (wchar_t *)0x0) {
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    uVar7 = 0;
  }
  else {
    sVar5 = wcslen(_Str);
    local_e4 = 0;
    local_f0 = (undefined1 *)CONCAT44(local_f0._4_4_,0x7fffffff);
    uVar7 = sVar5 & 0xffffffff;
    pwVar9 = _Str;
    do {
      iVar10 = (int)uVar7;
      if (iVar10 < 1) {
LAB_144afb98a:
        local_50 = local_e4;
        uVar6 = local_e4 + 1;
        if (uVar6 < 0x81) goto LAB_144afb9a7;
        FUN_1446efa72(&local_60,0,uVar6,1);
        local_f0 = local_60;
        goto LAB_144afb9a9;
      }
      wVar1 = *pwVar9;
      uVar6 = (uint)(ushort)wVar1;
      pwVar8 = pwVar9 + 1;
      uVar11 = iVar10 - 1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar10 == 1) {
          cVar3 = FUN_140024707(uVar6,&local_e4,&local_f0);
          if (cVar3 != '\0') goto LAB_144afb98a;
          break;
        }
        if (((ushort)*pwVar8 & 0xfc00) == 0xdc00) {
          uVar6 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar8 + 0xfca02400;
          pwVar8 = pwVar9 + 2;
          uVar11 = iVar10 - 2;
        }
      }
      cVar3 = FUN_140024707(uVar6,&local_e4,&local_f0);
      uVar7 = (ulonglong)uVar11;
      pwVar9 = pwVar8;
    } while (cVar3 != '\0');
    local_50 = 0xffffffff;
    uVar6 = 0;
LAB_144afb9a7:
    local_f0 = (undefined1 *)0x0;
LAB_144afb9a9:
    if (local_f0 == (undefined1 *)0x0) {
      local_f0 = local_e0;
    }
    iVar10 = (int)sVar5 + 1;
    local_e4 = uVar6;
    local_58 = local_f0;
    do {
      if (iVar10 < 1) break;
      wVar1 = *_Str;
      uVar6 = (uint)(ushort)wVar1;
      pwVar9 = _Str + 1;
      iVar2 = iVar10 + -1;
      if ((wVar1 & 0xfc00U) == 0xd800) {
        if (iVar10 == 1) {
          FUN_1400247af(uVar6,&local_f0,&local_e4);
          break;
        }
        if (((ushort)*pwVar9 & 0xfc00) == 0xdc00) {
          uVar6 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar9 + 0xfca02400;
          pwVar9 = _Str + 2;
          iVar2 = iVar10 + -2;
        }
      }
      iVar10 = iVar2;
      _Str = pwVar9;
      cVar3 = FUN_1400247af(uVar6,&local_f0,&local_e4);
    } while (cVar3 != '\0');
    uVar7 = (ulonglong)(int)local_50;
  }
  if ((param_3 != (void *)0x0) && (uVar7 <= *param_4)) {
    memcpy(param_3,local_58,uVar7);
  }
  *param_4 = uVar7;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144afbb0a FUN_144afbb0a body=118 status=ok
// SIG undefined FUN_144afbb0a(void)

void FUN_144afbb0a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b478da0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 144afbb80 FUN_144afbb80 body=1513 status=ok
// SIG undefined FUN_144afbb80(void)

/* WARNING: Removing unreachable block (ram,0x000144afbcbf) */
/* WARNING: Removing unreachable block (ram,0x000144afbe93) */
/* WARNING: Removing unreachable block (ram,0x000144afbcd3) */
/* WARNING: Removing unreachable block (ram,0x000144afbfff) */
/* WARNING: Removing unreachable block (ram,0x000144afc010) */
/* WARNING: Removing unreachable block (ram,0x000144afc01d) */
/* WARNING: Removing unreachable block (ram,0x000144afc02a) */
/* WARNING: Removing unreachable block (ram,0x000144afc03b) */
/* WARNING: Removing unreachable block (ram,0x000144afc139) */
/* WARNING: Removing unreachable block (ram,0x000144afc148) */
/* WARNING: Removing unreachable block (ram,0x000144afc048) */
/* WARNING: Removing unreachable block (ram,0x000144afc068) */
/* WARNING: Removing unreachable block (ram,0x000144afc06c) */
/* WARNING: Removing unreachable block (ram,0x000144afc07b) */
/* WARNING: Removing unreachable block (ram,0x000144afc150) */
/* WARNING: Removing unreachable block (ram,0x000144afc15c) */
/* WARNING: Heritage AFTER dead removal. Example location: r0x00014cb98d68 : 0x000144afbd01 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined1 * FUN_144afbb80(undefined1 *param_1,longlong param_2,longlong param_3,double *param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 **ppuVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  double dVar10;
  undefined1 auStack_a8 [32];
  double *local_88;
  longlong local_80;
  undefined8 *local_78;
  undefined8 **local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined8 **local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  param_1[1] = 0;
  local_88 = param_4;
  if ((param_2 != 0) && (param_3 != 0)) {
    local_80 = param_2;
    LOCK();
    UNLOCK();
    for (local_78 = DAT_14cb98d60; local_78 != (undefined8 *)0x0; local_78 = (undefined8 *)*local_78
        ) {
      lVar5 = local_78[2];
      if ((lVar5 != 0) && ((*(uint *)(lVar5 + 8) & 0x40018000) == 0)) {
        uVar1 = *(uint *)(lVar5 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar5 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          if ((*(uint *)(lVar5 + 8 + (ulonglong)(uVar1 & 0xffff) * 0x18) >> 0x15 & 1) == 0) {
            lVar5 = lVar5 + (ulonglong)(uVar1 & 0xffff) * 0x18;
LAB_144afbc38:
            if ((*(uint *)(lVar5 + 8) >> 0x1c & 1) == 0) goto LAB_144afbc47;
          }
        }
        else if ((_DAT_00000008 >> 0x15 & 1) == 0) {
          lVar5 = 0;
          goto LAB_144afbc38;
        }
      }
    }
    local_78 = (undefined8 *)0x0;
LAB_144afbc47:
    local_70 = &DAT_14cb98d60;
    LOCK();
    DAT_14cb98d68 = DAT_14cb98d68 + 2;
    UNLOCK();
    local_68 = &local_80;
    if (local_78 != (undefined8 *)0x0) {
      lVar5 = local_78[2];
LAB_144afbc73:
      plVar4 = local_68;
      lVar5 = *(longlong *)(lVar5 + 0xb0);
      if (lVar5 == 0) {
        lVar5 = FUN_1448abda6();
      }
      if (lVar5 != *plVar4) {
        local_78 = (undefined8 *)*local_78;
        if (local_78 != (undefined8 *)0x0) {
          do {
            lVar5 = local_78[2];
            if ((lVar5 != 0) && ((*(uint *)(lVar5 + 8) & 0x40018000) == 0)) {
              uVar1 = *(uint *)(lVar5 + 0xc);
              if ((int)uVar1 < DAT_14c9647dc) {
                lVar6 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
                if ((*(uint *)(lVar6 + 8 + (ulonglong)(uVar1 & 0xffff) * 0x18) >> 0x15 & 1) == 0) {
                  lVar6 = lVar6 + (ulonglong)(uVar1 & 0xffff) * 0x18;
LAB_144afbfe1:
                  if ((*(uint *)(lVar6 + 8) >> 0x1c & 1) == 0) goto code_r0x000144afbff0;
                }
              }
              else if ((_DAT_00000008 >> 0x15 & 1) == 0) {
                lVar6 = 0;
                goto LAB_144afbfe1;
              }
            }
            local_78 = (undefined8 *)*local_78;
            if (local_78 == (undefined8 *)0x0) break;
          } while( true );
        }
        local_78 = (undefined8 *)0x0;
      }
    }
    plVar4 = local_68;
    ppuVar3 = local_70;
    LOCK();
    UNLOCK();
    LOCK();
    UNLOCK();
    local_50 = &local_80;
    local_60 = 0;
    local_58 = &DAT_14cb98d60;
    LOCK();
    UNLOCK();
    local_58 = &DAT_14cb98d60;
    local_60 = 0;
    LOCK();
    UNLOCK();
    LOCK();
    *(int *)(local_70 + 1) = *(int *)(local_70 + 1) + 1;
    UNLOCK();
    LOCK();
    DAT_14cb98d68 = DAT_14cb98d68 + 1;
    UNLOCK();
    if (local_78 != (undefined8 *)0x0) {
      iVar8 = -0x80000000;
      puVar7 = local_78;
LAB_144afbd15:
      lVar5 = puVar7[2];
      iVar2 = *(int *)(lVar5 + 0x688);
      if ((iVar8 < iVar2) && (*(longlong *)(lVar5 + 0x678) == param_3)) {
        dVar10 = *(double *)(lVar5 + 0x640) * *(double *)(lVar5 + 0x280);
        if ((*(double *)(lVar5 + 0x260) - dVar10 < *local_88) &&
           (*local_88 < dVar10 + *(double *)(lVar5 + 0x260))) {
          dVar10 = *(double *)(lVar5 + 0x288) * *(double *)(lVar5 + 0x648);
          if ((*(double *)(lVar5 + 0x268) - dVar10 < local_88[1]) &&
             (local_88[1] < *(double *)(lVar5 + 0x268) + dVar10)) {
            dVar10 = *(double *)(lVar5 + 0x650) * *(double *)(lVar5 + 0x290);
            if ((*(double *)(lVar5 + 0x270) - dVar10 < local_88[2]) &&
               (local_88[2] < *(double *)(lVar5 + 0x270) + dVar10)) {
              *param_1 = *(undefined1 *)(lVar5 + 0x68c);
              param_1[1] = 1;
              iVar8 = iVar2;
            }
          }
        }
      }
      for (puVar7 = (undefined8 *)*puVar7; puVar7 != (undefined8 *)0x0;
          puVar7 = (undefined8 *)*puVar7) {
        lVar5 = puVar7[2];
        if ((lVar5 != 0) && ((*(uint *)(lVar5 + 8) & 0x40018000) == 0)) {
          uVar1 = *(uint *)(lVar5 + 0xc);
          if ((int)uVar1 < DAT_14c9647dc) {
            lVar6 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
            if ((*(uint *)(lVar6 + 8 + (ulonglong)(uVar1 & 0xffff) * 0x18) >> 0x15 & 1) == 0) {
              lVar6 = lVar6 + (ulonglong)(uVar1 & 0xffff) * 0x18;
LAB_144afbd98:
              if ((*(uint *)(lVar6 + 8) >> 0x1c & 1) == 0) goto LAB_144afbda7;
            }
          }
          else if ((_DAT_00000008 >> 0x15 & 1) == 0) {
            lVar6 = 0;
            goto LAB_144afbd98;
          }
        }
      }
LAB_144afc0ad:
      puVar7 = (undefined8 *)0x0;
      goto LAB_144afbdbb;
    }
LAB_144afbe41:
    LOCK();
    DAT_14cb98d68 = DAT_14cb98d68 + -1;
    UNLOCK();
    LOCK();
    *(int *)(ppuVar3 + 1) = *(int *)(ppuVar3 + 1) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_58 + 1) = *(int *)(local_58 + 1) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_70 + 1) = *(int *)(local_70 + 1) + -1;
    UNLOCK();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
code_r0x000144afbff0:
  goto LAB_144afbc73;
LAB_144afbda7:
  lVar5 = *(longlong *)(lVar5 + 0xb0);
  if (lVar5 == 0) {
    lVar5 = FUN_1448abda6();
  }
  if (lVar5 != *plVar4) {
    puVar9 = (undefined8 *)*puVar7;
    if (puVar9 != (undefined8 *)0x0) {
      do {
        lVar5 = puVar9[2];
        if ((lVar5 != 0) && ((*(uint *)(lVar5 + 8) & 0x40018000) == 0)) {
          uVar1 = *(uint *)(lVar5 + 0xc);
          if ((int)uVar1 < DAT_14c9647dc) {
            lVar6 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
            if ((*(uint *)(lVar6 + 8 + (ulonglong)(uVar1 & 0xffff) * 0x18) >> 0x15 & 1) == 0) {
              lVar6 = lVar6 + (ulonglong)(uVar1 & 0xffff) * 0x18;
LAB_144afbe2f:
              puVar7 = puVar9;
              if ((*(uint *)(lVar6 + 8) >> 0x1c & 1) == 0) goto LAB_144afbda7;
            }
          }
          else if ((_DAT_00000008 >> 0x15 & 1) == 0) {
            lVar6 = 0;
            goto LAB_144afbe2f;
          }
        }
        puVar9 = (undefined8 *)*puVar9;
        puVar7 = (undefined8 *)0x0;
        if (puVar9 == (undefined8 *)0x0) goto LAB_144afbdbb;
      } while( true );
    }
    goto LAB_144afc0ad;
  }
LAB_144afbdbb:
  if (puVar7 == (undefined8 *)0x0) goto LAB_144afbe41;
  goto LAB_144afbd15;
}



// FUNCTION 144afc170 FUN_144afc170 body=661 status=ok
// SIG undefined FUN_144afc170(void)

void FUN_144afc170(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  bool bVar4;
  longlong *plVar5;
  int *piVar6;
  char cVar7;
  int iVar8;
  ulonglong uVar9;
  int *piVar10;
  bool bVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 auStack_68 [32];
  int *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(longlong *)(param_1 + 0x20) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x20) + 8) == '\x01')) {
    if (DAT_14cb99c48 == (longlong *)0x0) {
      DAT_14cb99c48 = (longlong *)FUN_14001cc68(0x18,0x10);
      *DAT_14cb99c48 = 0;
      DAT_14cb99c48[1] = 0;
      DAT_14cb99c48[2] = 2;
    }
    plVar5 = DAT_14cb99c48;
    local_48 = (int *)0x0;
    vx_get_message(&local_48);
    if (local_48 != (int *)0x0) {
      do {
        piVar6 = local_48;
        if (*local_48 == 3) {
          iVar8 = *(int *)((longlong)plVar5 + 0x14);
          *(int *)((longlong)plVar5 + 0x14) = iVar8 + 1;
          uVar9 = (ulonglong)(int)plVar5[1];
          if ((longlong)uVar9 < 1) {
            *(int *)((longlong)plVar5 + 0x14) = iVar8;
          }
          else {
            bVar11 = false;
            do {
              lVar14 = uVar9 * 0x10 + -8;
              uVar13 = uVar9;
              while (((*(int *)(*plVar5 + lVar14) != 0 &&
                      (plVar2 = *(longlong **)(*plVar5 + -8 + lVar14), plVar2 != (longlong *)0x0))
                     && (cVar7 = (**(code **)(*plVar2 + 0x60))(plVar2,piVar6), cVar7 != '\0'))) {
                lVar14 = lVar14 + -0x10;
                bVar4 = uVar13 < 2;
                uVar13 = uVar13 - 1;
                if (bVar4) {
                  iVar8 = *(int *)((longlong)plVar5 + 0x14) + -1;
                  *(int *)((longlong)plVar5 + 0x14) = iVar8;
                  if (bVar11) goto LAB_144afc381;
                  goto LAB_144afc2a7;
                }
              }
              uVar9 = uVar13 - 1;
              bVar11 = true;
            } while (1 < uVar13);
            iVar8 = *(int *)((longlong)plVar5 + 0x14) + -1;
            *(int *)((longlong)plVar5 + 0x14) = iVar8;
LAB_144afc381:
            if (iVar8 < 1) {
              iVar1 = (int)plVar5[1];
              iVar8 = iVar1;
              if (0 < iVar1) {
                iVar12 = 0;
                do {
                  if (((*(int *)(*plVar5 + 8 + (longlong)iVar12 * 0x10) == 0) ||
                      (plVar2 = *(longlong **)(*plVar5 + (longlong)iVar12 * 0x10),
                      plVar2 == (longlong *)0x0)) ||
                     (cVar7 = (**(code **)(*plVar2 + 0x28))(), cVar7 != '\0')) {
                    FUN_14005b288(plVar5,iVar12);
                    FUN_14005b248(plVar5);
                  }
                  else {
                    iVar12 = iVar12 + 1;
                  }
                  iVar8 = (int)plVar5[1];
                } while (iVar12 < iVar8);
              }
              iVar12 = iVar8 * 2;
              if (iVar12 < 3) {
                iVar12 = 2;
              }
              *(int *)(plVar5 + 2) = iVar12;
              if ((iVar12 < iVar1) && (*(int *)((longlong)plVar5 + 0xc) != iVar8)) {
                FUN_14045812c(plVar5);
              }
            }
          }
        }
        else {
          piVar10 = (int *)0x0;
          if (*local_48 == 2) {
            piVar10 = local_48;
          }
          plVar2 = *(longlong **)(*(longlong *)(piVar10 + 0xc) + 0x28);
          if (plVar2 != (longlong *)0x0) {
            if ((int)plVar2[1] == 0) {
LAB_144afc293:
              if (*plVar2 != 0) {
                FUN_1400020a8();
              }
            }
            else if ((longlong *)*plVar2 != (longlong *)0x0) {
              (**(code **)(*(longlong *)*plVar2 + 0x60))();
              if ((int)plVar2[1] != 0) {
                puVar3 = (undefined8 *)*plVar2;
                if (puVar3 == (undefined8 *)0x0) goto LAB_144afc29f;
                (**(code **)*puVar3)(puVar3,0);
                FUN_1446efa72(plVar2,0,0,0x10);
                *(undefined4 *)(plVar2 + 1) = 0;
              }
              goto LAB_144afc293;
            }
LAB_144afc29f:
            FUN_1400020a8(plVar2);
          }
        }
LAB_144afc2a7:
        vx_destroy_message(piVar6);
        local_48 = (int *)0x0;
        vx_get_message(&local_48);
      } while (local_48 != (int *)0x0);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144afc406 FUN_144afc406 body=1544 status=ok
// SIG undefined FUN_144afc406(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144afc406(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  float fVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auVar5 [16];
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  double *pdVar13;
  double *pdVar14;
  double *pdVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  double dVar22;
  double dVar26;
  double dVar27;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar28;
  double dVar32;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar33;
  undefined1 auVar34 [16];
  double dVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    if (*(char *)(param_2 + 0x98) == '\x01') {
      FUN_1433edd58(param_2 + 0x20);
    }
    else {
      FUN_1448859f0(param_2 + 0x20,*(undefined8 *)(param_2 + 0x30));
    }
  }
  else {
    uVar36 = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_2 + 0x14);
    *(undefined4 *)(param_2 + 0x14) = uVar36;
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x28))(*(longlong **)(param_1 + 0x18),param_2);
  }
  if ((longlong)*(int *)(param_1 + 0x30) != 0) {
    lVar17 = *(longlong *)(param_1 + 0x28);
    lVar16 = (longlong)*(int *)(param_1 + 0x30) * 0x40 + lVar17;
    do {
      if ((-1 < *(int *)(lVar17 + 8)) && (lVar10 = (longlong)*(int *)(lVar17 + 0xc), lVar10 != -1))
      {
        plVar4 = *(longlong **)(param_2 + 0x30);
        if (plVar4[0x1d] == 0) {
          pdVar15 = (double *)
                    ((ulonglong)((uint)*(ushort *)(*plVar4 + lVar10 * 2) * 0x60) +
                    *(longlong *)(plVar4[9] + 0x30));
        }
        else {
          pdVar15 = (double *)(*(longlong *)(plVar4[0x1d] + 0x10) + lVar10 * 0x60);
        }
        pdVar13 = (double *)(lVar10 * 0x60 + *(longlong *)(param_2 + 0x20));
        pdVar14 = pdVar13;
        if (*(char *)(lVar17 + 0x28) != '\0') {
          pdVar14 = pdVar15;
          pdVar15 = pdVar13;
        }
        dVar22 = pdVar15[2] * -1.0;
        dVar26 = pdVar15[3] * 1.0;
        dVar28 = *pdVar14;
        dVar33 = pdVar14[1];
        dVar32 = pdVar14[2];
        dVar35 = pdVar14[3];
        dVar19 = pdVar15[1];
        dVar20 = pdVar15[1];
        dVar27 = dVar32 * dVar22 * -1.0 +
                 dVar20 * dVar33 + (dVar26 * dVar35 - *pdVar15 * dVar28 * -1.0);
        dVar20 = *(double *)(lVar17 + 0x20) *
                 (dVar35 * dVar22 * 1.0 +
                 dVar19 * dVar28 + (dVar26 * dVar32 - *pdVar15 * dVar33 * 1.0)) +
                 (dVar33 * dVar22 * -1.0 +
                 ((dVar28 * dVar26 - *pdVar15 * dVar35 * 1.0) - dVar32 * dVar19)) *
                 *(double *)(lVar17 + 0x10) +
                 (dVar28 * dVar22 * 1.0 +
                 ((dVar33 * dVar26 - *pdVar15 * dVar32 * -1.0) - dVar35 * dVar20)) *
                 *(double *)(lVar17 + 0x18);
        dVar33 = *(double *)(lVar17 + 0x20) * dVar20;
        dVar19 = *(double *)(lVar17 + 0x18) * dVar20;
        dVar20 = dVar20 * *(double *)(lVar17 + 0x10);
        dVar28 = dVar27 * dVar27 + dVar33 * dVar33 + dVar20 * dVar20 + dVar19 * dVar19;
        if ((dVar28 != 0.0) || (NAN(dVar28))) {
          dVar28 = dVar33 * dVar33 + dVar20 * dVar20;
          dVar32 = dVar27 * dVar27 + dVar19 * dVar19;
          auVar29._0_8_ = dVar28 + dVar32;
          auVar29._8_8_ = dVar28 + dVar32;
          auVar24._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_);
          auVar24._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_);
          auVar30 = sqrtpd(auVar29,auVar29);
          auVar30 = divpd(_DAT_149934d80,auVar30);
          auVar34._0_8_ = auVar30._0_8_ * dVar33;
          auVar34._8_8_ = auVar30._8_8_ * dVar27;
          uVar6 = (ulonglong)(dVar20 * auVar30._0_8_) &
                  -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_);
          uVar7 = (ulonglong)(dVar19 * auVar30._8_8_) &
                  -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_);
          auVar30 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar34,auVar24);
          uVar36 = (int)uVar6;
          uVar37 = (int)(uVar6 >> 0x20);
          uVar38 = (int)uVar7;
          uVar39 = (int)(uVar7 >> 0x20);
        }
        else {
          auVar30._8_8_ = DAT_14c8463e8;
          auVar30._0_8_ = DAT_14c8463e0;
          uVar36 = (undefined4)DAT_14c8463d0;
          uVar37 = DAT_14c8463d0._4_4_;
          uVar38 = (undefined4)DAT_14c8463d8;
          uVar39 = DAT_14c8463d8._4_4_;
        }
        iVar3 = *(int *)(lVar17 + 0x38);
        if ((longlong)iVar3 != 0) {
          lVar10 = *(longlong *)(lVar17 + 0x30);
          lVar18 = 0;
          do {
            if (-1 < *(int *)(lVar10 + 8 + lVar18)) {
              iVar9 = *(int *)(lVar10 + 0xc + lVar18);
              lVar11 = (longlong)iVar9;
              if (lVar11 != -1) {
                fVar2 = *(float *)(lVar10 + 0x10 + lVar18);
                if (0.99999 <= fVar2) {
                  lVar12 = *(longlong *)(param_2 + 0x20) + lVar11 * 0x60;
                  puVar1 = (undefined4 *)(*(longlong *)(param_2 + 0x20) + lVar11 * 0x60);
                  *puVar1 = uVar36;
                  puVar1[1] = uVar37;
                  puVar1[2] = uVar38;
                  puVar1[3] = uVar39;
                  auVar25 = auVar30;
                }
                else if (fVar2 <= 1e-05) {
                  lVar12 = *(longlong *)(param_2 + 0x20) + lVar11 * 0x60;
                  auVar8._4_4_ = DAT_14c8463d0._4_4_;
                  auVar8._0_4_ = (undefined4)DAT_14c8463d0;
                  auVar8._8_4_ = (undefined4)DAT_14c8463d8;
                  auVar8._12_4_ = DAT_14c8463d8._4_4_;
                  auVar25._8_8_ = DAT_14c8463e8;
                  auVar25._0_8_ = DAT_14c8463e0;
                  *(undefined1 (*) [16])(*(longlong *)(param_2 + 0x20) + lVar11 * 0x60) = auVar8;
                }
                else {
                  dVar28 = (double)CONCAT44(DAT_14c8463d0._4_4_,(undefined4)DAT_14c8463d0);
                  dVar33 = (double)CONCAT44(DAT_14c8463d8._4_4_,(undefined4)DAT_14c8463d8);
                  dVar19 = auVar30._8_8_ * DAT_14c8463e8 +
                           auVar30._0_8_ * DAT_14c8463e0 +
                           (double)CONCAT44(uVar37,uVar36) * dVar28 +
                           (double)CONCAT44(uVar39,uVar38) * dVar33;
                  dVar32 = dVar19 * (double)(&DAT_149931160)[0.0 <= dVar19];
                  dVar20 = 1.0 - (double)fVar2;
                  dVar19 = (double)(&DAT_149931160)[0.0 <= dVar19] * (double)fVar2;
                  if (dVar32 < 0.9999) {
                    dVar28 = dVar32;
                    if (1.0 <= dVar32) {
                      dVar28 = 1.0;
                    }
                    dVar28 = acos((double)(-(ulonglong)(dVar32 < -1.0) & 0xbff0000000000000 |
                                          ~-(ulonglong)(dVar32 < -1.0) & (ulonglong)dVar28));
                    dVar33 = sin(dVar28);
                    dVar20 = sin(dVar20 * dVar28);
                    dVar20 = dVar20 * (1.0 / dVar33);
                    dVar19 = sin(dVar19 * dVar28);
                    dVar19 = dVar19 * (1.0 / dVar33);
                    dVar33 = (double)CONCAT44(DAT_14c8463d8._4_4_,(undefined4)DAT_14c8463d8);
                    dVar28 = (double)CONCAT44(DAT_14c8463d0._4_4_,(undefined4)DAT_14c8463d0);
                    iVar9 = *(int *)(lVar10 + 0xc + lVar18);
                  }
                  dVar32 = dVar20 * auVar30._8_8_ + DAT_14c8463e8 * dVar19;
                  dVar35 = dVar20 * auVar30._0_8_ + DAT_14c8463e0 * dVar19;
                  dVar33 = dVar20 * (double)CONCAT44(uVar39,uVar38) + dVar33 * dVar19;
                  dVar20 = dVar20 * (double)CONCAT44(uVar37,uVar36) + dVar28 * dVar19;
                  dVar19 = dVar35 * dVar35 + dVar20 * dVar20;
                  dVar28 = dVar32 * dVar32 + dVar33 * dVar33;
                  auVar23._0_8_ = dVar19 + dVar28;
                  auVar23._8_8_ = dVar19 + dVar28;
                  auVar21._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar23._8_8_);
                  auVar21._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar23._0_8_);
                  auVar24 = sqrtpd(auVar23,auVar23);
                  auVar24 = divpd(_DAT_149934d80,auVar24);
                  auVar31._0_8_ = auVar24._0_8_ * dVar35;
                  auVar31._8_8_ = auVar24._8_8_ * dVar32;
                  uVar6 = (ulonglong)(dVar33 * auVar24._8_8_) &
                          -(ulonglong)(9.99999993922529e-09 <= auVar23._8_8_);
                  auVar25 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar31,auVar21);
                  lVar12 = *(longlong *)(param_2 + 0x20) + (longlong)iVar9 * 0x60;
                  auVar5._8_4_ = (int)uVar6;
                  auVar5._0_8_ = (ulonglong)(dVar20 * auVar24._0_8_) &
                                 -(ulonglong)(9.99999993922529e-09 <= auVar23._0_8_);
                  auVar5._12_4_ = (int)(uVar6 >> 0x20);
                  *(undefined1 (*) [16])(*(longlong *)(param_2 + 0x20) + (longlong)iVar9 * 0x60) =
                       auVar5;
                }
                *(undefined1 (*) [16])(lVar12 + 0x10) = auVar25;
              }
            }
            lVar18 = lVar18 + 0x14;
          } while ((longlong)iVar3 * 0x14 != lVar18);
        }
      }
      lVar17 = lVar17 + 0x40;
    } while (lVar17 != lVar16);
  }
  return;
}



// FUNCTION 144afca0e FUN_144afca0e body=566 status=ok
// SIG undefined FUN_144afca0e(void)

undefined8 * FUN_144afca0e(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  uint uVar8;
  bool bVar9;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(param_1 + 0xed8);
  if (lVar3 != 0) {
    pcVar2 = *(code **)(*(longlong *)(lVar3 + 0x428) + 0x10);
    if (pcVar2 == (code *)&LAB_144b395c6) {
      lVar3 = lVar3 + 0x448;
    }
    else {
      lVar3 = (*pcVar2)(lVar3 + 0x428);
    }
    if ((*(longlong *)(lVar3 + 0x28) != 0) &&
       (uVar4 = DAT_14cbd3558, *(char *)(*(longlong *)(lVar3 + 0x28) + 0x540) == '\0'))
    goto LAB_144afcba3;
  }
  lVar3 = *(longlong *)(param_1 + 0xbc8);
  if (lVar3 != 0) {
    uVar4 = DAT_14cb8c228;
    if (param_1 == 0) goto LAB_144afcba3;
    if (*(char *)(lVar3 + 0x408) != '\x01') goto LAB_144afcb98;
    if (*(char *)(lVar3 + 0x409) != '\x01') goto LAB_144afcba3;
    FUN_1447e6dee(lVar3,&local_38);
    if ((local_38 == 0) || (*(int *)(local_38 + 0x1c) == 0)) {
LAB_144afcbd3:
      bVar9 = false;
    }
    else {
      uVar8 = *(uint *)(local_38 + 0x18);
      bVar9 = false;
      if ((-1 < (int)uVar8) && ((int)uVar8 < DAT_14c9647dc)) {
        plVar7 = (longlong *)
                 ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
        if ((((plVar7 != (longlong *)0x0) && ((int)plVar7[2] == *(int *)(local_38 + 0x1c))) &&
            ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)) && (lVar3 = *plVar7, lVar3 != 0)) {
          uVar8 = 0;
          bVar9 = false;
          if ((longlong)*(int *)(lVar3 + 0x498) == 0) goto LAB_144afcb7f;
          lVar5 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar3 + 0x490) + lVar5) == param_1) {
              if ((-1 < (int)uVar8) && ((int)uVar8 < *(int *)(local_38 + 0x40))) {
                lVar3 = local_38 + 0x28;
                if (*(longlong *)(local_38 + 0x38) != 0) {
                  lVar3 = *(longlong *)(local_38 + 0x38);
                }
                bVar9 = (*(uint *)(lVar3 + (ulonglong)((uint)((ulonglong)lVar5 >> 8) & 0x7ffffff) *
                                           4) >> (uVar8 & 0x1f) & 1) != 0;
                goto LAB_144afcb7f;
              }
              break;
            }
            lVar5 = lVar5 + 8;
            uVar8 = uVar8 + 1;
          } while ((longlong)*(int *)(lVar3 + 0x498) * 8 != lVar5);
        }
        goto LAB_144afcbd3;
      }
    }
LAB_144afcb7f:
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_30 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
        }
      }
    }
    uVar4 = DAT_14cb8c228;
    if (!bVar9) goto LAB_144afcba3;
  }
LAB_144afcb98:
  if ((*(char *)(param_1 + 0x848) == '\0') && (*(char *)(param_1 + 0xcb8) == '\0')) {
    puVar6 = &DAT_14cb8c238;
    if ((*(byte *)(param_1 + 0xe10) & 2) == 0) {
      puVar6 = &DAT_14cb8c230;
    }
    uVar4 = *puVar6;
  }
  else {
    uVar4 = 0;
  }
LAB_144afcba3:
  *param_2 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 144afcc46 FUN_144afcc46 body=101 status=ok
// SIG undefined FUN_144afcc46(void)

void FUN_144afcc46(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a82c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144afccac FUN_144afccac body=295 status=ok
// SIG undefined FUN_144afccac(void)

undefined8 FUN_144afccac(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(param_1 + -0x10);
  if (lVar1 != 0) {
    if (DAT_14cba8288 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141864c34;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_1464cee30;
      local_38 = &LAB_148bfac22;
      local_40 = &LAB_140f21842;
      local_48 = &DAT_149e063b2;
      local_50 = 0;
      local_58 = 0x10000004;
      local_60 = 0x10;
      local_68 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if (((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) &&
       (uVar2 = CONCAT71((int7)((ulonglong)(DAT_14cba8288 + 0x30) >> 8),1),
       *(longlong *)(lVar1 + 0x3f70) != 0)) goto LAB_144afcd0f;
  }
  uVar2 = 0;
LAB_144afcd0f:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144afcdd4 FUN_144afcdd4 body=259 status=ok
// SIG undefined FUN_144afcdd4(void)

undefined8 FUN_144afcdd4(void)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  DWORD DVar4;
  DWORD DVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined4 extraout_var;
  ulonglong uVar8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf43c8) {
    FUN_144b3d300(&DAT_14cbf43c8);
    if (DAT_14cbf43c8 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14cbf43c0 =
           (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.TemporalAA.Upscaler",1)
      ;
      _Init_thread_footer(&DAT_14cbf43c8);
    }
  }
  iVar3 = (**(code **)(*DAT_14cbf43c0 + 0xb0))();
  lVar2 = DAT_14cbf4388;
  if (iVar3 == 0) {
    uVar7 = 0;
  }
  else {
    uVar1 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
    uVar6 = (ulonglong)uVar1;
    if (((uVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (uVar1 == 2)) {
      uVar8 = 0;
    }
    else if (uVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      uVar6 = CONCAT44(extraout_var,DVar5);
      uVar8 = (ulonglong)(DVar4 != DVar5);
    }
    else {
      uVar8 = 1;
    }
    uVar7 = CONCAT71((int7)(uVar6 >> 8),*(int *)(lVar2 + uVar8 * 4) != 0);
  }
  return uVar7;
}



// FUNCTION 144afced8 FUN_144afced8 body=133 status=ok
// SIG undefined FUN_144afced8(void)

undefined8 * FUN_144afced8(longlong param_1,undefined8 *param_2,uint param_3,byte param_4)

{
  byte bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (((((int)param_3 < 0) || (*(int *)(param_1 + 0xc0) <= (int)param_3)) ||
      (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xb8) + (ulonglong)param_3 * 8), lVar2 == 0))
     || (((bVar1 = *(byte *)(lVar2 + 0x10), 1 < bVar1 - 1 && (bVar1 != 0x80)) &&
         ((0x20 < bVar1 || ((0x100010010U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)))))) {
    puVar3 = &DAT_14c846480;
    puVar4 = param_2;
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  else {
    FUN_1401571e4(param_1,param_2,lVar2,param_4 ^ 1);
  }
  return param_2;
}



// FUNCTION 144afcf66 FUN_144afcf66 body=166 status=ok
// SIG undefined FUN_144afcf66(void)

void FUN_144afcf66(undefined8 *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  uVar2 = *(uint *)(param_1 + 0x15);
  if (*(code **)(*DAT_14c82b500 + 0x58) == (code *)&LAB_142733b8e) {
    plVar3 = *(longlong **)(DAT_14c82b500[6] + (ulonglong)(uVar2 & 0xff) * 0x18);
    if (*(code **)(*plVar3 + 0x48) == FUN_145c3baf2) {
      if (plVar3[0x31] != 0) {
        *(undefined1 *)((longlong)plVar3 + (ulonglong)((uVar2 >> 8 & 1) * 0x180) + 0x184) = 1;
      }
    }
    else {
      (**(code **)(*plVar3 + 0x48))();
    }
  }
  else {
    (**(code **)(*DAT_14c82b500 + 0x58))(DAT_14c82b500,uVar2);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144afd009. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 144afd00c FUN_144afd00c body=417 status=ok
// SIG undefined FUN_144afd00c(void)

longlong FUN_144afd00c(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_78 [40];
  LARGE_INTEGER local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar6 = *(uint *)(param_1 + 0xa0558);
  if (uVar6 == 0xffffffff) {
    QueryPerformanceCounter(&local_50);
    uVar6 = local_50.s.LowPart * 0x2c9277b5 + 0xac564b05;
    uVar6 = (uVar6 >> (byte)(uVar6 >> 0x1c) + 4 ^ uVar6) * 0x108ef2d9;
    uVar6 = uVar6 >> 0x16 ^ uVar6;
    *(uint *)(param_1 + 0xa0558) = uVar6;
  }
  lVar3 = *(longlong *)(param_1 + 0xa0550);
  uVar2 = *(uint *)(lVar3 + 0x7a00);
  *(uint *)(param_1 + 0xa0558) = uVar6 % uVar2;
  if (*(int *)(lVar3 + 0x7a00) != 0) {
    uVar6 = (param_2 & 0xff) * 3 + 2;
    uVar10 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + 0x5a00 + uVar10 * 8);
      if (lVar4 != 0) {
        uVar9 = 0;
        do {
          lVar1 = lVar4 + uVar9 * 0x20100;
          lVar13 = lVar4 + uVar9 * 0x20100 + 0x100;
          do {
            while( true ) {
              uVar7 = *(uint *)(lVar1 + 0x80);
              uVar11 = (ulonglong)((uVar7 & 0x3ff) << 7);
              lVar5 = *(longlong *)(lVar13 + uVar11);
              if (lVar5 == 0) break;
              if (lVar5 != 1) {
                plVar12 = (longlong *)(uVar11 + lVar13);
                LOCK();
                lVar8 = *plVar12;
                bVar14 = lVar5 == lVar8;
                if (bVar14) {
                  *plVar12 = 1;
                  lVar8 = lVar5;
                }
                UNLOCK();
                if (bVar14) {
                  if (uVar7 == *(uint *)(lVar1 + 0x80)) {
                    LOCK();
                    *(int *)(lVar1 + 0x80) = *(int *)(lVar1 + 0x80) + 1;
                    UNLOCK();
                    *plVar12 = 0;
                    goto LAB_144afd17d;
                  }
                  *plVar12 = lVar8;
                }
              }
            }
          } while (uVar7 != *(uint *)(lVar1 + 0x80));
          uVar7 = *(int *)(param_1 + 0xa055c) + 1;
          if (uVar6 <= uVar7) {
            uVar7 = 0;
          }
          *(uint *)(param_1 + 0xa055c) = uVar7;
          uVar9 = uVar9 + 1;
        } while (uVar9 != uVar6);
        uVar7 = *(int *)(param_1 + 0xa0558) + 1;
        if (uVar2 <= uVar7) {
          uVar7 = 0;
        }
        *(uint *)(param_1 + 0xa0558) = uVar7;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < *(uint *)(lVar3 + 0x7a00));
  }
  *(undefined8 *)(param_1 + 0xa0558) = 0xffffffff;
  lVar8 = 0;
LAB_144afd17d:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar8;
}



// FUNCTION 144afd1ae FUN_144afd1ae body=94 status=ok
// SIG undefined FUN_144afd1ae(void)

void FUN_144afd1ae(undefined8 *param_1)

{
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 144afd20c FUN_144afd20c body=46 status=ok
// SIG undefined FUN_144afd20c(void)

void FUN_144afd20c(longlong *param_1,short param_2,short param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  short sVar4;
  
  lVar2 = param_1[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_1;
    lVar3 = 0;
    do {
      sVar4 = *(short *)(lVar1 + lVar3);
      if (sVar4 == param_2) {
        sVar4 = param_3;
      }
      *(short *)(lVar1 + lVar3) = sVar4;
      lVar3 = lVar3 + 2;
    } while ((longlong)(int)lVar2 * 2 != lVar3);
  }
  return;
}



// FUNCTION 144afd251 FUN_144afd251 body=57 status=ok
// SIG undefined FUN_144afd251(void)

void FUN_144afd251(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x40);
    do {
      puVar1[-3] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateDummy::vftable;
      puVar1[-2] = 0;
      puVar1[-1] = 0xe800000000000020;
      *puVar1 = 0xffffffffffffffff;
      puVar1 = puVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 144afd28a FUN_144afd28a body=66 status=ok
// SIG undefined FUN_144afd28a(void)

void FUN_144afd28a(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x28);
    do {
      if (*(code **)(*plVar1 + 0x18) != FUN_144713626) {
        (**(code **)(*plVar1 + 0x18))(plVar1,plVar1 + -5);
      }
      plVar1 = plVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 144afd2cc FUN_144afd2cc body=46 status=ok
// SIG undefined FUN_144afd2cc(void)

void FUN_144afd2cc(DWORD *param_1)

{
  LPVOID pvVar1;
  
  if (*param_1 != 0) {
    pvVar1 = TlsGetValue(*param_1);
                    /* WARNING: Could not recover jumptable at 0x000144afd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    TlsSetValue(*param_1,(LPVOID)(longlong)((int)pvVar1 + -1));
    return;
  }
  return;
}



// FUNCTION 144afd2fa FUN_144afd2fa body=50 status=ok
// SIG undefined FUN_144afd2fa(void)

int FUN_144afd2fa(DWORD *param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  if (*param_1 == 0) {
    iVar2 = 0;
  }
  else {
    pvVar1 = TlsGetValue(*param_1);
    iVar2 = (int)pvVar1 + 1;
    TlsSetValue(*param_1,(LPVOID)(longlong)iVar2);
  }
  return iVar2;
}



// FUNCTION 144afd32c FUN_144afd32c body=50 status=ok
// SIG undefined FUN_144afd32c(void)

int FUN_144afd32c(DWORD *param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  if (*param_1 == 0) {
    iVar2 = 0;
  }
  else {
    pvVar1 = TlsGetValue(*param_1);
    iVar2 = (int)pvVar1 + -1;
    TlsSetValue(*param_1,(LPVOID)(longlong)iVar2);
  }
  return iVar2;
}



// FUNCTION 144afd35e FUN_144afd35e body=30 status=ok
// SIG undefined FUN_144afd35e(void)

double FUN_144afd35e(double param_1,double param_2)

{
  double dVar1;
  
  if ((((param_1 == 0.0) && (!NAN(param_1))) && (param_2 == 0.0)) && (!NAN(param_2))) {
    return 0.0;
  }
  dVar1 = atan2(param_1,param_2);
  return dVar1;
}



// FUNCTION 144afd37c FUN_144afd37c body=82 status=ok
// SIG undefined FUN_144afd37c(void)

int FUN_144afd37c(longlong param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  
  lVar3 = 0;
  do {
    bVar1 = *(byte *)(param_1 + lVar3);
    bVar2 = *(byte *)(param_2 + lVar3);
    if (bVar1 == bVar2) {
      if (bVar1 == 0) {
        return 0;
      }
    }
    else {
      if (0x7f < (bVar2 | bVar1)) {
        return (uint)bVar1 - (uint)bVar2;
      }
      if ((&DAT_149e05da0)[bVar1] != (&DAT_149e05da0)[(uint)bVar2]) {
        return (uint)(byte)(&DAT_149e05da0)[bVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)bVar2];
      }
    }
    lVar3 = lVar3 + 1;
  } while( true );
}



// FUNCTION 144afd3ce FUN_144afd3ce body=92 status=ok
// SIG undefined FUN_144afd3ce(void)

int FUN_144afd3ce(longlong param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 == 0) {
    return 0;
  }
  lVar3 = 0;
  do {
    bVar1 = *(byte *)(param_1 + lVar3);
    bVar2 = *(byte *)(param_2 + lVar3);
    if (bVar1 == bVar2) {
      if ((ulonglong)bVar1 == 0) {
        return 0;
      }
      if (param_3 == 1) {
        return 0;
      }
    }
    else {
      if ((char)(bVar2 | bVar1) < '\0') {
        return (uint)bVar1 - (uint)bVar2;
      }
      if ((&DAT_149e05da0)[bVar1] != (&DAT_149e05da0)[bVar2]) {
        return (uint)(byte)(&DAT_149e05da0)[bVar1] - (uint)(byte)(&DAT_149e05da0)[bVar2];
      }
      if (param_3 == 1) {
        return 0;
      }
    }
    param_3 = param_3 + -1;
    lVar3 = lVar3 + 1;
  } while( true );
}



// FUNCTION 144afd42a FUN_144afd42a body=57 status=ok
// SIG undefined FUN_144afd42a(void)

void FUN_144afd42a(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x40);
    do {
      puVar1[-3] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateDummy::vftable;
      puVar1[-2] = 0;
      puVar1[-1] = 0xe800000000000020;
      *puVar1 = 0xffffffffffffffff;
      puVar1 = puVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 144afd463 FUN_144afd463 body=66 status=ok
// SIG undefined FUN_144afd463(void)

void FUN_144afd463(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x28);
    do {
      if (*(code **)(*plVar1 + 0x18) != FUN_144713626) {
        (**(code **)(*plVar1 + 0x18))(plVar1,plVar1 + -5);
      }
      plVar1 = plVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 144afd4a5 FUN_144afd4a5 body=30 status=ok
// SIG undefined FUN_144afd4a5(void)

undefined8 FUN_144afd4a5(void)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(int *)(lVar1 + 0xc60) == 0x20);
}



// FUNCTION 144afd4c3 FUN_144afd4c3 body=212 status=ok
// SIG undefined FUN_144afd4c3(void)

undefined4 FUN_144afd4c3(int *param_1)

{
  int iVar1;
  PSRWLOCK SRWLock;
  undefined4 uVar2;
  
  if (*param_1 == -1) {
    uVar2 = 0;
  }
  else {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c845168) {
      FUN_144b3d300(&DAT_14c845168);
      if (DAT_14c845168 == -1) {
        FUN_1456aef72(&DAT_14c8450d0);
        DAT_14c845160 = (PSRWLOCK)&DAT_14c8450d0;
        atexit(FUN_142767c9e);
        _Init_thread_footer(&DAT_14c845168);
      }
    }
    SRWLock = DAT_14c845160;
    iVar1 = *param_1;
    AcquireSRWLockShared(DAT_14c845160);
    uVar2 = *(undefined4 *)
             (*(longlong *)((longlong)SRWLock[3].Ptr + (longlong)(iVar1 / 0x555) * 8) + 0xc +
             (longlong)(iVar1 % 0x555) * 0x18);
    ReleaseSRWLockShared(SRWLock);
  }
  return uVar2;
}



// FUNCTION 144afd598 FUN_144afd598 body=1 status=ok
// SIG undefined FUN_144afd598(void)

void FUN_144afd598(void)

{
  return;
}



// FUNCTION 144afd59a FUN_144afd59a body=40 status=ok
// SIG undefined FUN_144afd59a(void)

undefined4 * FUN_144afd59a(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  memcpy(param_1 + 1,param_2 + 1,0x100);
  return param_1;
}



// FUNCTION 144afd5c2 FUN_144afd5c2 body=12 status=ok
// SIG undefined FUN_144afd5c2(void)

undefined4 * FUN_144afd5c2(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  *(undefined2 *)(param_1 + 1) = 0;
  return param_1;
}



// FUNCTION 144afd5ce FUN_144afd5ce body=411 status=ok
// SIG undefined FUN_144afd5ce(void)

undefined8 FUN_144afd5ce(longlong param_1,ulonglong param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  ushort uVar3;
  uint uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  uint *puVar8;
  int *piVar9;
  int *piVar10;
  ulonglong uVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  longlong lVar16;
  
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    lVar16 = *(longlong *)(param_1 + 0x10);
    lVar1 = lVar16 + (longlong)*(int *)(param_1 + 0x18) * 0x18;
    do {
      plVar5 = *(longlong **)(lVar16 + 8);
      if (*(code **)(*plVar5 + 0x20) == FUN_144b07bc2) {
        uVar11 = (ulonglong)*(uint *)(plVar5 + 10);
        if (uVar11 != 0) {
          uVar6 = (ulonglong)
                  *(uint *)(plVar5[0xb] +
                           (param_2 >> (-*(char *)((longlong)plVar5 + 0x54) & 0x3fU) & 0xffffffff) *
                           4);
          lVar2 = plVar5[0xc] + uVar11 * 2;
          if (uVar6 != 0xffffffff) {
            do {
              uVar3 = *(ushort *)(plVar5[0xc] + uVar6 * 2);
              if ((((uint)uVar3 ^ (uint)param_2) & 0x7fff) == 0) {
                if (*(int *)(lVar2 + uVar6 * 4) == (int)(param_2 >> 0xf)) {
                  puVar8 = (uint *)(lVar2 + uVar11 * 4 + uVar6 * 4);
                  if (puVar8 != (uint *)0x0) {
                    uVar4 = *puVar8;
                    if (-1 < (int)uVar4 && (uVar4 >> 0x1e & 1) == 0) {
                      return 3;
                    }
                    iVar12 = 0;
                    if ((uVar4 >> 0x1e & 1) == 0) {
                      puVar14 = (undefined4 *)0x0;
                      uVar15 = 0;
                    }
                    else {
                      puVar13 = (undefined4 *)((ulonglong)(uVar4 << 2) + plVar5[0xd]);
                      puVar14 = puVar13 + 1;
                      uVar15 = *puVar13;
                    }
                    *param_4 = puVar14;
                    *(undefined4 *)(param_4 + 1) = uVar15;
                    uVar4 = *puVar8;
                    if ((int)uVar4 < 0) {
                      piVar10 = (int *)((ulonglong)(uVar4 * 4) + plVar5[0xd]);
                      if ((uVar4 >> 0x1e & 1) == 0) {
                        uVar11 = 0;
                      }
                      else {
                        uVar11 = (ulonglong)(*piVar10 * 2 + 1);
                      }
                      piVar10 = piVar10 + uVar11;
                      piVar9 = piVar10 + 1;
                      iVar12 = *piVar10;
                    }
                    else {
                      piVar9 = (int *)0x0;
                    }
                    param_4[2] = piVar9;
                    *(int *)(param_4 + 3) = iVar12;
                    return 3;
                  }
                  break;
                }
              }
              else if ((short)uVar3 < 0) break;
              uVar6 = (ulonglong)((int)uVar6 + 1);
            } while( true );
          }
        }
      }
      else {
        uVar7 = (**(code **)(*plVar5 + 0x20))(plVar5,param_2,param_3,param_4);
        if (1 < (int)uVar7) {
          return uVar7;
        }
      }
      lVar16 = lVar16 + 0x18;
    } while (lVar16 != lVar1);
  }
  return 1;
}



// FUNCTION 144afd76a FUN_144afd76a body=8 status=ok
// SIG undefined FUN_144afd76a(void)

undefined8 FUN_144afd76a(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



// FUNCTION 144afd82e FUN_144afd82e body=525 status=ok
// SIG undefined FUN_144afd82e(void)

void FUN_144afd82e(float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar12 = fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2;
  fVar4 = param_1[4];
  fVar5 = param_1[5];
  fVar6 = param_1[6];
  fVar13 = fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5;
  fVar7 = param_1[8];
  fVar8 = param_1[9];
  fVar9 = param_1[10];
  fVar11 = fVar9 * fVar9 + fVar7 * fVar7 + fVar8 * fVar8;
  uVar10 = -(uint)(0.0 <= fVar12 - param_2);
  fVar12 = (float)(~uVar10 & 0x3f800000 | (uint)(1.0 / SQRT(fVar12)) & uVar10);
  uVar10 = -(uint)(0.0 <= fVar13 - param_2);
  fVar13 = (float)(~uVar10 & 0x3f800000 | (uint)(1.0 / SQRT(fVar13)) & uVar10);
  uVar10 = -(uint)(0.0 <= fVar11 - param_2);
  fVar11 = (float)(~uVar10 & 0x3f800000 | (uint)(1.0 / SQRT(fVar11)) & uVar10);
  *param_1 = fVar1 * fVar12;
  param_1[1] = fVar2 * fVar12;
  param_1[2] = fVar12 * fVar3;
  param_1[4] = fVar4 * fVar13;
  param_1[5] = fVar5 * fVar13;
  param_1[6] = fVar13 * fVar6;
  param_1[8] = fVar7 * fVar11;
  param_1[9] = fVar8 * fVar11;
  param_1[10] = fVar11 * fVar9;
  return;
}



// FUNCTION 144afda3c FUN_144afda3c body=506 status=ok
// SIG undefined FUN_144afda3c(void)

void FUN_144afda3c(double *param_1,double *param_2,double param_3)

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
  double dVar13;
  
  dVar12 = *param_1;
  dVar13 = param_1[1];
  dVar1 = param_1[2];
  dVar10 = dVar1 * dVar1 + dVar12 * dVar12 + dVar13 * dVar13;
  dVar2 = param_1[4];
  dVar3 = param_1[5];
  dVar4 = param_1[6];
  dVar9 = dVar4 * dVar4 + dVar2 * dVar2 + dVar3 * dVar3;
  dVar5 = param_1[8];
  dVar6 = param_1[9];
  dVar7 = param_1[10];
  dVar8 = 0.0;
  dVar11 = 0.0;
  if (param_3 < dVar10) {
    dVar11 = SQRT(dVar10);
    dVar10 = 1.0 / dVar11;
    *param_1 = dVar12 * dVar10;
    param_1[1] = dVar13 * dVar10;
    param_1[2] = dVar1 * dVar10;
  }
  dVar12 = dVar7 * dVar7 + dVar5 * dVar5 + dVar6 * dVar6;
  *param_2 = dVar11;
  if (param_3 < dVar9) {
    dVar8 = SQRT(dVar9);
    dVar13 = 1.0 / dVar8;
    param_1[4] = dVar2 * dVar13;
    param_1[5] = dVar3 * dVar13;
    param_1[6] = dVar4 * dVar13;
  }
  param_2[1] = dVar8;
  if (dVar12 <= param_3) {
    dVar12 = 0.0;
  }
  else {
    dVar12 = SQRT(dVar12);
    dVar13 = 1.0 / dVar12;
    param_1[8] = dVar5 * dVar13;
    param_1[9] = dVar6 * dVar13;
    param_1[10] = dVar7 * dVar13;
  }
  param_2[2] = dVar12;
  return;
}



// FUNCTION 144afdc36 FUN_144afdc36 body=722 status=ok
// SIG undefined FUN_144afdc36(void)

float * FUN_144afdc36(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_a8 [32];
  float local_88 [6];
  ulonglong local_70;
  
  fVar9 = DAT_14c84634c;
  fVar8 = DAT_14c846348;
  fVar16 = DAT_14c846344;
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  fVar15 = param_1[2];
  fVar17 = *param_1;
  fVar1 = param_1[1];
  if (((0.0001 < ABS(fVar17)) || (0.0001 < ABS(fVar1))) || (0.0001 < ABS(fVar15))) {
    fVar2 = param_1[6];
    fVar3 = param_1[4];
    fVar4 = param_1[5];
    if (((0.0001 < ABS(fVar3)) || (0.0001 < ABS(fVar4))) || (0.0001 < ABS(fVar2))) {
      fVar5 = param_1[10];
      fVar6 = param_1[8];
      fVar7 = param_1[9];
      if (((0.0001 < ABS(fVar6)) || (0.0001 < ABS(fVar7))) || (0.0001 < ABS(fVar5))) {
        fVar16 = fVar17 + fVar4 + fVar5;
        if (fVar16 <= 0.0) {
          uVar12 = (ulonglong)(fVar17 < fVar4);
          uVar11 = 2;
          if (fVar5 < param_1[(ulonglong)(fVar17 < fVar4) * 4 + uVar12] ||
              fVar5 == param_1[(ulonglong)(fVar17 < fVar4) * 4 + uVar12]) {
            uVar11 = uVar12;
          }
          uVar12 = (ulonglong)(uint)((int)uVar11 * 4);
          lVar13 = (longlong)*(int *)(&DAT_149e25df0 + uVar12);
          uVar10 = (int)uVar11 << 4;
          lVar14 = (longlong)*(int *)(&DAT_149e25df0 + lVar13 * 4);
          fVar15 = 1.0 / SQRT(((*(float *)((longlong)param_1 + uVar12 + uVar10) -
                               param_1[lVar13 * 5]) - param_1[lVar14 * 5]) + 1.0);
          *(float *)((longlong)local_88 + uVar12) = (1.0 / fVar15) * 0.5;
          fVar15 = fVar15 * 0.5;
          local_88[3] = (param_1[lVar13 * 4 + lVar14] - param_1[lVar14 * 4 + lVar13]) * fVar15;
          local_88[lVar13] =
               (*(float *)((longlong)param_1 + lVar13 * 4 + (ulonglong)uVar10) +
               *(float *)((longlong)param_1 + uVar12 + lVar13 * 0x10)) * fVar15;
          local_88[lVar14] =
               (*(float *)((longlong)param_1 + lVar14 * 4 + (ulonglong)uVar10) +
               *(float *)((longlong)param_1 + uVar12 + lVar14 * 0x10)) * fVar15;
          *param_2 = local_88[0];
          param_2[1] = local_88[1];
          param_2[2] = local_88[2];
          param_2[3] = local_88[3];
        }
        else {
          fVar17 = 1.0 / SQRT(fVar16 + 1.0);
          param_2[3] = (1.0 / fVar17) * 0.5;
          fVar17 = fVar17 * 0.5;
          *param_2 = (fVar2 - fVar7) * fVar17;
          param_2[1] = (fVar6 - fVar15) * fVar17;
          param_2[2] = (fVar1 - fVar3) * fVar17;
        }
        if ((local_70 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
          return param_2;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
    }
  }
  *param_2 = DAT_14c84633c._4_4_;
  param_2[1] = fVar16;
  param_2[2] = fVar8;
  param_2[3] = fVar9;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_a8);
}



// FUNCTION 144afdf0e FUN_144afdf0e body=266 status=ok
// SIG undefined FUN_144afdf0e(void)

void FUN_144afdf0e(double *param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar4 = param_3[2];
  dVar6 = param_4[2] - dVar4;
  dVar5 = *param_3;
  dVar1 = param_3[1];
  dVar8 = param_4[1] - dVar1;
  dVar7 = *param_4 - dVar5;
  dVar2 = (param_2[2] - dVar4) * dVar6 + (*param_2 - dVar5) * dVar7 + (param_2[1] - dVar1) * dVar8;
  if (dVar2 <= 0.0) {
    param_1[2] = param_3[2];
    dVar4 = *param_3;
    dVar5 = param_3[1];
  }
  else {
    dVar3 = dVar6 * dVar6 + dVar7 * dVar7 + dVar8 * dVar8;
    if (dVar2 < dVar3) {
      dVar2 = dVar2 / dVar3;
      *param_1 = dVar5 + dVar7 * dVar2;
      param_1[1] = dVar1 + dVar8 * dVar2;
      param_1[2] = dVar4 + dVar6 * dVar2;
      return;
    }
    param_1[2] = param_4[2];
    dVar4 = *param_4;
    dVar5 = param_4[1];
  }
  *param_1 = dVar4;
  param_1[1] = dVar5;
  return;
}



// FUNCTION 144afe018 FUN_144afe018 body=311 status=ok
// SIG undefined FUN_144afe018(void)

void FUN_144afe018(double *param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar6 = param_3[2] - param_2[2];
  dVar1 = param_3[1] - param_2[1];
  dVar3 = *param_3 - *param_2;
  dVar2 = param_4[2] - param_2[2];
  dVar7 = param_4[1] - param_2[1];
  dVar5 = *param_4 - *param_2;
  dVar4 = dVar3 * dVar7 - dVar5 * dVar1;
  dVar5 = dVar6 * dVar5 - dVar2 * dVar3;
  dVar2 = dVar1 * dVar2 - dVar7 * dVar6;
  dVar7 = dVar4 * dVar4 + dVar2 * dVar2 + dVar5 * dVar5;
  if (((dVar7 != 1.0) || (dVar1 = dVar2, dVar3 = dVar4, dVar6 = dVar5, NAN(dVar7))) &&
     (dVar1 = DAT_14c8464e0, dVar3 = DAT_14c8464f0, dVar6 = DAT_14c8464e8,
     9.99999993922529e-09 <= dVar7)) {
    dVar7 = 1.0 / SQRT(dVar7);
    dVar1 = dVar2 * dVar7;
    dVar3 = dVar4 * dVar7;
    dVar6 = dVar5 * dVar7;
  }
  *param_1 = dVar1;
  param_1[1] = dVar6;
  param_1[2] = dVar3;
  param_1[3] = dVar3 * param_2[2] + dVar1 * *param_2 + dVar6 * param_2[1];
  return;
}



// FUNCTION 144afe150 FUN_144afe150 body=148 status=ok
// SIG undefined FUN_144afe150(void)

ulonglong FUN_144afe150(float param_1)

{
  bool bVar1;
  ulonglong uVar2;
  float fVar3;
  undefined1 auStack_48 [36];
  float local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0.0;
  fVar3 = modff(param_1,&local_24);
  uVar2 = 0;
  bVar1 = fVar3 < 0.5;
  if (param_1 < 0.0) {
    bVar1 = -0.5 < fVar3;
  }
  fVar3 = local_24;
  if (!bVar1) {
    uVar2 = (ulonglong)(param_1 < 0.0);
    fVar3 = local_24 + *(float *)(&DAT_149e1eeb0 + uVar2 * 4);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(fVar3);
}



// FUNCTION 144afe1e6 FUN_144afe1e6 body=488 status=ok
// SIG undefined FUN_144afe1e6(void)

float * FUN_144afe1e6(float *param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar3 = *param_2;
  fVar2 = param_2[1];
  fVar4 = *param_3;
  fVar9 = param_3[1];
  fVar5 = param_2[2];
  fVar10 = param_3[2];
  fVar8 = param_2[3];
  fVar11 = param_3[3];
  fVar1 = fVar8 * fVar11 + fVar5 * fVar10 + fVar3 * fVar4 + fVar2 * fVar9;
  fVar6 = *(float *)((longlong)&DAT_149935368 + (ulonglong)(0.0 <= fVar1) * 4);
  fVar1 = fVar1 * fVar6;
  fVar7 = 1.0 - param_4;
  fVar6 = fVar6 * param_4;
  if (fVar1 < 0.9999) {
    fVar3 = fVar1;
    if (1.0 <= fVar1) {
      fVar3 = 1.0;
    }
    fVar3 = acosf((float)(-(uint)(fVar1 < -1.0) & 0xbf800000 | ~-(uint)(fVar1 < -1.0) & (uint)fVar3)
                 );
    fVar2 = sinf(fVar3);
    fVar7 = sinf(fVar7 * fVar3);
    fVar7 = fVar7 * (1.0 / fVar2);
    fVar6 = sinf(fVar6 * fVar3);
    fVar6 = fVar6 * (1.0 / fVar2);
    fVar8 = param_2[3];
    fVar11 = param_3[3];
    fVar5 = param_2[2];
    fVar10 = param_3[2];
    fVar3 = *param_2;
    fVar2 = param_2[1];
    fVar4 = *param_3;
    fVar9 = param_3[1];
  }
  *param_1 = fVar3 * fVar7 + fVar4 * fVar6;
  param_1[1] = fVar2 * fVar7 + fVar9 * fVar6;
  param_1[2] = fVar5 * fVar7 + fVar10 * fVar6;
  param_1[3] = fVar8 * fVar7 + fVar11 * fVar6;
  return param_1;
}



// FUNCTION 144afe3ce FUN_144afe3ce body=435 status=ok
// SIG undefined FUN_144afe3ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_144afe3ce(double *param_1,double *param_2)

{
  double dVar1;
  double _X;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  auVar8 = divpd(*(undefined1 (*) [16])(param_2 + 1),_DAT_1499387d0);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = *param_2;
  auVar9 = divpd(auVar9,_DAT_1499387d0);
  auVar8 = roundpd(auVar8,auVar8,3);
  auVar9 = roundpd(auVar9,auVar9,3);
  dVar5 = (*(double *)*(undefined1 (*) [16])(param_2 + 1) - auVar8._0_8_ * (double)DAT_1499387d0) *
          0.008726646259971648;
  dVar6 = (param_2[2] - auVar8._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar1 = (*param_2 - auVar9._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  _X = (0.0 - auVar9._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar2 = sin(dVar5);
  dVar3 = sin(dVar6);
  dVar4 = sin(dVar1);
  sin(_X);
  dVar5 = cos(dVar5);
  dVar6 = cos(dVar6);
  dVar7 = cos(dVar1);
  cos(_X);
  dVar1 = dVar3 * dVar2 * dVar4 + dVar6 * dVar5 * dVar7;
  *param_1 = dVar2 * dVar3 * dVar7 - dVar5 * dVar6 * dVar4;
  param_1[1] = -(dVar2 * dVar6 * dVar7) - dVar5 * dVar3 * dVar4;
  auVar8._8_4_ = SUB84(dVar1,0);
  auVar8._0_8_ = -(dVar6 * dVar2 * dVar4) + dVar3 * dVar5 * dVar7;
  auVar8._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 2) = auVar8;
  return param_1;
}



// FUNCTION 144afe582 FUN_144afe582 body=484 status=ok
// SIG undefined FUN_144afe582(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144afe582(double *param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar3;
  ulonglong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar14;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar15;
  undefined1 auVar16 [16];
  double dVar2;
  double dVar4;
  
  dVar15 = param_1[2] * param_2[2] + *param_1 * *param_2 + param_1[1] * param_2[1];
  dVar9 = param_2[2] * dVar15;
  dVar6 = param_2[1] * dVar15;
  dVar15 = dVar15 * *param_2;
  dVar7 = param_1[3];
  *param_4 = dVar15;
  param_4[1] = dVar6;
  param_4[2] = dVar9;
  param_4[3] = dVar7;
  dVar8 = DAT_14c8463d8;
  dVar7 = dVar7 * dVar7 + dVar9 * dVar9 + dVar15 * dVar15 + dVar6 * dVar6;
  if ((dVar7 != 0.0) || (NAN(dVar7))) {
    dVar7 = *param_4;
    dVar8 = param_4[1];
    dVar6 = param_4[2];
    dVar9 = param_4[3];
    dVar15 = dVar6 * dVar6 + dVar7 * dVar7;
    dVar14 = dVar9 * dVar9 + dVar8 * dVar8;
    auVar12._0_8_ = dVar15 + dVar14;
    auVar12._8_8_ = dVar15 + dVar14;
    uVar5 = -(ulonglong)(9.99999993922529e-09 <= auVar12._8_8_);
    auVar13 = sqrtpd(auVar12,auVar12);
    auVar13 = divpd(_DAT_149934d80,auVar13);
    auVar16._0_8_ = auVar13._0_8_ * dVar6;
    auVar16._8_8_ = auVar13._8_8_ * dVar9;
    dVar7 = (double)((ulonglong)(dVar7 * auVar13._0_8_) &
                    -(ulonglong)(9.99999993922529e-09 <= auVar12._0_8_));
    dVar8 = (double)((ulonglong)(dVar8 * auVar13._8_8_) & uVar5);
    *param_4 = dVar7;
    param_4[1] = dVar8;
    auVar13._8_4_ = (int)uVar5;
    auVar13._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar12._0_8_);
    auVar13._12_4_ = (int)(uVar5 >> 0x20);
    auVar13 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar16,auVar13);
    *(undefined1 (*) [16])(param_4 + 2) = auVar13;
  }
  else {
    *param_4 = DAT_14c8463d0;
    param_4[1] = dVar8;
    dVar7 = DAT_14c8463e8;
    param_4[2] = DAT_14c8463e0;
    param_4[3] = dVar7;
    dVar7 = *param_4;
    dVar8 = param_4[1];
    auVar13 = *(undefined1 (*) [16])(param_4 + 2);
  }
  dVar10 = auVar13._0_8_ * -1.0;
  dVar11 = auVar13._8_8_ * 1.0;
  dVar6 = param_1[3];
  dVar9 = param_1[3];
  dVar14 = *param_1;
  dVar15 = *param_1;
  dVar1 = param_1[1];
  dVar2 = param_1[1];
  dVar3 = param_1[2];
  dVar4 = param_1[2];
  *param_3 = (dVar10 * dVar1 + (dVar11 * dVar14 * 1.0 - dVar6 * dVar7)) - dVar8 * dVar3 * -1.0;
  param_3[1] = (dVar11 * dVar2 + (dVar10 * dVar15 * -1.0 - dVar9 * dVar8)) - dVar7 * dVar4 * 1.0;
  param_3[2] = dVar11 * dVar3 * 1.0 + dVar7 * dVar1 + (dVar10 * dVar6 - dVar14 * dVar8 * 1.0);
  param_3[3] = dVar10 * dVar4 * -1.0 + dVar8 * dVar2 + (dVar11 * dVar9 - dVar15 * dVar7 * -1.0);
  return;
}



// FUNCTION 144afe766 FUN_144afe766 body=80 status=ok
// SIG undefined FUN_144afe766(void)

ulonglong FUN_144afe766(double *param_1)

{
  int iVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  undefined7 uVar3;
  
  iVar1 = _finite(*param_1);
  uVar3 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar2 = CONCAT71(uVar3,1);
  if (iVar1 != 0) {
    iVar1 = _finite(param_1[1]);
    if (iVar1 != 0) {
      iVar1 = _finite(param_1[2]);
      if (iVar1 != 0) {
        iVar1 = _finite(param_1[3]);
        uVar2 = CONCAT71(uVar3,iVar1 == 0);
      }
    }
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 144afe7b6 FUN_144afe7b6 body=71 status=ok
// SIG undefined FUN_144afe7b6(void)

ulonglong FUN_144afe7b6(float *param_1)

{
  int iVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  undefined7 uVar3;
  
  iVar1 = _finite((double)*param_1);
  uVar3 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar2 = CONCAT71(uVar3,1);
  if (iVar1 != 0) {
    iVar1 = _finite((double)param_1[1]);
    if (iVar1 != 0) {
      iVar1 = _finite((double)param_1[2]);
      uVar2 = CONCAT71(uVar3,iVar1 == 0);
    }
  }
  return uVar2 & 0xffffffff;
}


