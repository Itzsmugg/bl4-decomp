// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1403b0d76 FUN_1403b0d76 body=98 status=ok
// SIG undefined FUN_1403b0d76(void)

undefined8 FUN_1403b0d76(int *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_1[2];
  if (*(char *)((longlong)param_1 + 0xa2) == '\x01') {
    iVar1 = iVar1 * 2 + 1;
  }
  iVar3 = param_1[1];
  if (*(char *)((longlong)param_1 + 0xa1) == '\x01') {
    iVar3 = iVar3 * 2 + 1;
  }
  iVar2 = *param_1;
  if ((char)param_1[0x28] == '\x01') {
    iVar2 = iVar2 * 2 + 1;
  }
  FUN_1403b0e52(param_2,param_1,iVar2,iVar3,iVar1);
  return param_2;
}



// FUNCTION 1403b0dd8 FUN_1403b0dd8 body=121 status=ok
// SIG undefined FUN_1403b0dd8(void)

void FUN_1403b0dd8(undefined8 *param_1)

{
  ulonglong uVar1;
  
  *param_1 = &PTR_FUN_149f3cfd0;
  if (0 < (longlong)*(int *)((longlong)param_1 + 0xc)) {
    uVar1 = (longlong)*(int *)((longlong)param_1 + 0xc) + 1;
    do {
      if ((0 < *(int *)(param_1[7] + -8 + uVar1 * 4)) &&
         (*(longlong *)(param_1[0x14] + -0x10 + uVar1 * 8) != 0)) {
        FUN_1400020a8();
      }
      uVar1 = uVar1 - 1;
    } while (1 < uVar1);
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_1403b0fea(param_1);
  return;
}



// FUNCTION 1403b0e52 FUN_1403b0e52 body=407 status=ok
// SIG undefined FUN_1403b0e52(void)

longlong * FUN_1403b0e52(longlong *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  void *_Dst;
  int iVar6;
  longlong lVar7;
  int iVar8;
  void *pvVar9;
  
  *param_1 = param_2;
  dVar2 = *(double *)(param_2 + 0x18);
  param_1[1] = (longlong)dVar2;
  dVar3 = *(double *)(param_2 + 0x20);
  param_1[2] = (longlong)dVar3;
  dVar4 = *(double *)(param_2 + 0x28);
  param_1[3] = (longlong)dVar4;
  param_1[4] = *(longlong *)(param_2 + 0x30);
  param_1[5] = *(longlong *)(param_2 + 0x38);
  param_1[6] = *(longlong *)(param_2 + 0x40);
  *(int *)(param_1 + 7) = param_3;
  *(int *)((longlong)param_1 + 0x3c) = param_4;
  *(int *)(param_1 + 8) = param_5;
  iVar6 = param_4 * param_3;
  *(int *)((longlong)param_1 + 0x44) = iVar6;
  iVar8 = iVar6 + (param_4 + param_3) * param_5 + 3;
  iVar6 = iVar6 * param_5;
  *(int *)(param_1 + 9) = iVar6;
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)(param_2 + 200);
  param_1[10] = *(longlong *)(param_2 + 0xa8);
  param_1[0xb] = *(longlong *)(param_2 + 0xb0);
  param_1[0xc] = *(longlong *)(param_2 + 0xb8);
  param_1[0xd] = (longlong)(dVar4 * dVar4 + dVar2 * dVar2 + dVar3 * dVar3);
  *(undefined4 *)(param_1 + 0xe) = 0;
  iVar5 = iVar8 * 3;
  *(int *)((longlong)param_1 + 0x74) = iVar5;
  param_1[0xf] = (longlong)&DAT_149f3d010;
  param_1[0x10] = *(longlong *)(param_2 + 0x48);
  lVar1 = (longlong)iVar6 * 4;
  lVar7 = lVar1 + (ulonglong)(lVar1 == 0);
  if (iVar6 < 0) {
    lVar7 = -1;
  }
  _Dst = (void *)FUN_14001cc68(lVar7,0x10);
  lVar7 = (longlong)iVar5 * 4;
  lVar7 = lVar7 + (ulonglong)(lVar7 == 0);
  param_1[0x11] = (longlong)_Dst;
  if (iVar8 < 0) {
    lVar7 = -1;
  }
  lVar7 = FUN_14001cc68(lVar7);
  param_1[0x12] = lVar7;
  param_1[0x13] = lVar7 + (longlong)iVar5 * 4;
  if (0 < iVar6) {
    pvVar9 = (void *)(lVar1 + (longlong)_Dst);
    if ((void *)(lVar1 + (longlong)_Dst) <= (void *)((longlong)_Dst + 4U)) {
      pvVar9 = (void *)((longlong)_Dst + 4U);
    }
    memset(_Dst,0,(~(ulonglong)_Dst + (longlong)pvVar9 & 0xfffffffffffffffc) + 4);
  }
  return param_1;
}



// FUNCTION 1403b0fea FUN_1403b0fea body=210 status=ok
// SIG undefined FUN_1403b0fea(void)

void FUN_1403b0fea(undefined8 *param_1)

{
  ulonglong uVar1;
  
  *param_1 = &PTR_FUN_149f3cfb0;
  if (0 < (longlong)*(int *)((longlong)param_1 + 0xc)) {
    uVar1 = (longlong)*(int *)((longlong)param_1 + 0xc) + 1;
    do {
      if ((0 < *(int *)(param_1[7] + -8 + uVar1 * 4)) &&
         (*(longlong *)(param_1[9] + -0x10 + uVar1 * 8) != 0)) {
        FUN_1400020a8();
      }
      uVar1 = uVar1 - 1;
    } while (1 < uVar1);
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1403b10bc FUN_1403b10bc body=226 status=ok
// SIG undefined FUN_1403b10bc(void)

void FUN_1403b10bc(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
      }
    }
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 1403b119e FUN_1403b119e body=231 status=ok
// SIG undefined FUN_1403b119e(void)

void FUN_1403b119e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    if (0 < iVar1) {
      lVar2 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0xb0) + lVar2 * 8) != 0) {
          FUN_1400020a8();
          iVar1 = *(int *)(param_1 + 0x10);
        }
        lVar2 = lVar2 + 1;
      } while (lVar2 < iVar1);
      if (*(longlong *)(param_1 + 0xb0) == 0) goto LAB_1403b11f0;
    }
    FUN_1400020a8();
  }
LAB_1403b11f0:
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    if (0 < iVar1) {
      lVar2 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + lVar2 * 8) != 0) {
          FUN_1400020a8();
          iVar1 = *(int *)(param_1 + 0x10);
        }
        lVar2 = lVar2 + 1;
      } while (lVar2 < iVar1);
      if (*(longlong *)(param_1 + 0xa8) == 0) goto LAB_1403b1239;
    }
    FUN_1400020a8();
  }
LAB_1403b1239:
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1403b1286 FUN_1403b1286 body=262 status=ok
// SIG undefined FUN_1403b1286(void)

undefined8 * FUN_1403b1286(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1403b1e5c();
  *param_1 = &PTR_FUN_149f3cfd0;
  lVar2 = (longlong)*(int *)((longlong)param_1 + 0xc) * 8;
  lVar2 = lVar2 + (ulonglong)(lVar2 == 0);
  if ((longlong)*(int *)((longlong)param_1 + 0xc) < 0) {
    lVar2 = -1;
  }
  uVar1 = FUN_14001cc68(lVar2,0x10);
  param_1[0x14] = uVar1;
  lVar2 = (longlong)*(int *)(param_1 + 1) * 8;
  lVar2 = lVar2 + (ulonglong)(lVar2 == 0);
  if ((longlong)*(int *)(param_1 + 1) < 0) {
    lVar2 = -1;
  }
  uVar1 = FUN_14001cc68(lVar2,0x10);
  param_1[0x15] = uVar1;
  lVar3 = 0;
  lVar2 = 0;
  do {
    uVar1 = FUN_14001cc68(lVar3 + (ulonglong)(lVar3 == 0),0x10);
    *(undefined8 *)(param_1[0x14] + lVar2 * 8) = uVar1;
    lVar2 = lVar2 + 1;
    lVar3 = lVar3 + 0x20;
  } while (lVar2 != 3);
  uVar1 = FUN_14001cc68(0xc00,0x10);
  *(undefined8 *)(param_1[0x14] + 0x18) = uVar1;
  if (4 < *(int *)((longlong)param_1 + 0xc)) {
    lVar2 = 4;
    lVar3 = 0x80;
    do {
      uVar1 = FUN_14001cc68(lVar3,0x10);
      *(undefined8 *)(param_1[0x14] + lVar2 * 8) = uVar1;
      lVar2 = lVar2 + 1;
      lVar3 = lVar3 + 0x20;
    } while (lVar2 < *(int *)((longlong)param_1 + 0xc));
  }
  return param_1;
}



// FUNCTION 1403b138c FUN_1403b138c body=499 status=ok
// SIG undefined FUN_1403b138c(void)

void FUN_1403b138c(longlong param_1,uint param_2,longlong param_3,int param_4,int param_5,
                  int param_6,longlong *param_7)

{
  int *piVar1;
  
  if ((param_2 >> 0x16 & 1) == 0) {
    if ((param_2 >> 0x15 & 1) != 0) {
LAB_1403b14a2:
      if (param_4 < *(int *)(param_1 + 0x38) + -1) {
        *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_1 + 0x70);
        piVar1 = (int *)*param_7;
        *param_7 = (longlong)(piVar1 + 1);
        *piVar1 = param_4 + 1;
        piVar1 = (int *)*param_7;
        *param_7 = (longlong)(piVar1 + 1);
        *piVar1 = param_5;
        piVar1 = (int *)*param_7;
        *param_7 = (longlong)(piVar1 + 1);
        *piVar1 = param_6;
      }
    }
  }
  else {
    if (0 < param_4) {
      *(undefined4 *)(param_3 + -4) = *(undefined4 *)(param_1 + 0x70);
      piVar1 = (int *)*param_7;
      *param_7 = (longlong)(piVar1 + 1);
      *piVar1 = param_4 + -1;
      piVar1 = (int *)*param_7;
      *param_7 = (longlong)(piVar1 + 1);
      *piVar1 = param_5;
      piVar1 = (int *)*param_7;
      *param_7 = (longlong)(piVar1 + 1);
      *piVar1 = param_6;
    }
    if ((param_2 >> 0x15 & 1) == 0) goto LAB_1403b14a2;
  }
  if ((param_2 >> 0x19 & 1) == 0) {
    if ((param_2 >> 0x18 & 1) == 0) goto LAB_1403b13be;
  }
  else {
    if (0 < param_5) {
      *(undefined4 *)(param_3 + (longlong)*(int *)(param_1 + 0x38) * -4) =
           *(undefined4 *)(param_1 + 0x70);
      piVar1 = (int *)*param_7;
      *param_7 = (longlong)(piVar1 + 1);
      *piVar1 = param_4;
      piVar1 = (int *)*param_7;
      *param_7 = (longlong)(piVar1 + 1);
      *piVar1 = param_5 + -1;
      piVar1 = (int *)*param_7;
      *param_7 = (longlong)(piVar1 + 1);
      *piVar1 = param_6;
    }
    if ((param_2 >> 0x18 & 1) != 0) goto LAB_1403b13be;
  }
  if (param_5 < *(int *)(param_1 + 0x3c) + -1) {
    *(undefined4 *)(param_3 + (longlong)*(int *)(param_1 + 0x38) * 4) =
         *(undefined4 *)(param_1 + 0x70);
    piVar1 = (int *)*param_7;
    *param_7 = (longlong)(piVar1 + 1);
    *piVar1 = param_4;
    piVar1 = (int *)*param_7;
    *param_7 = (longlong)(piVar1 + 1);
    *piVar1 = param_5 + 1;
    piVar1 = (int *)*param_7;
    *param_7 = (longlong)(piVar1 + 1);
    *piVar1 = param_6;
  }
LAB_1403b13be:
  if ((param_2 >> 0x1c & 1) == 0) {
    if ((param_2 >> 0x1b & 1) == 0) {
      return;
    }
  }
  else {
    if (0 < param_6) {
      *(undefined4 *)(param_3 + (longlong)*(int *)(param_1 + 0x44) * -4) =
           *(undefined4 *)(param_1 + 0x70);
      piVar1 = (int *)*param_7;
      *param_7 = (longlong)(piVar1 + 1);
      *piVar1 = param_4;
      piVar1 = (int *)*param_7;
      *param_7 = (longlong)(piVar1 + 1);
      *piVar1 = param_5;
      piVar1 = (int *)*param_7;
      *param_7 = (longlong)(piVar1 + 1);
      *piVar1 = param_6 + -1;
    }
    if ((param_2 >> 0x1b & 1) != 0) {
      return;
    }
  }
  if (param_6 < *(int *)(param_1 + 0x40) + -1) {
    *(undefined4 *)(param_3 + (longlong)*(int *)(param_1 + 0x44) * 4) =
         *(undefined4 *)(param_1 + 0x70);
    piVar1 = (int *)*param_7;
    *param_7 = (longlong)(piVar1 + 1);
    *piVar1 = param_4;
    piVar1 = (int *)*param_7;
    *param_7 = (longlong)(piVar1 + 1);
    *piVar1 = param_5;
    piVar1 = (int *)*param_7;
    *param_7 = (longlong)(piVar1 + 1);
    *piVar1 = param_6 + 1;
  }
  return;
}



// FUNCTION 1403b1580 FUN_1403b1580 body=198 status=ok
// SIG undefined FUN_1403b1580(void)

undefined8
FUN_1403b1580(longlong param_1,double param_2,double param_3,double param_4,double param_5)

{
  double *pdVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  ulonglong in_R8;
  longlong in_R9;
  double dVar5;
  double dVar6;
  
  *(undefined4 *)(param_1 + 0x1c) = 0;
  pdVar1 = *(double **)(param_1 + 0x30);
  dVar5 = pdVar1[2] * param_4 + *pdVar1 * param_2 + pdVar1[1] * param_3;
  if (param_5 <= dVar5) {
LAB_1403b1642:
    uVar2 = CONCAT71((int7)((ulonglong)pdVar1 >> 8),1);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x18) >> 3;
    if (1 < iVar3) {
      pdVar1 = pdVar1 + 5;
      in_R8 = 1;
      in_R9 = 1;
      do {
        dVar6 = *pdVar1 * param_4 + pdVar1[-2] * param_2 + pdVar1[-1] * param_3;
        if (dVar5 < dVar6) {
          if (param_5 < dVar6) goto LAB_1403b1642;
          *(int *)(param_1 + 0x1c) = (int)in_R9;
          dVar5 = dVar6;
        }
        uVar4 = (int)in_R8 + (int)in_R9;
        in_R8 = (ulonglong)uVar4;
        in_R9 = in_R9 + 1;
        pdVar1 = pdVar1 + 3;
      } while ((int)uVar4 < iVar3);
    }
    uVar2 = FUN_1403b1646(param_5,iVar3,in_R8,in_R9,param_5,dVar5);
  }
  return uVar2;
}



// FUNCTION 1403b1646 FUN_1403b1646 body=552 status=ok
// SIG undefined FUN_1403b1646(void)

longlong FUN_1403b1646(longlong param_1,double param_2,double param_3,double param_4,double param_5,
                      double param_6)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  int *piVar15;
  ulonglong uVar16;
  bool bVar17;
  double dVar18;
  
  lVar5 = *(longlong *)(param_1 + 0x28);
  iVar7 = *(int *)(lVar5 + (longlong)*(int *)(param_1 + 0x1c) * 4);
  if (0 < (longlong)iVar7) {
    lVar10 = *(longlong *)(param_1 + 0x20);
    lVar2 = *(longlong *)(param_1 + 0x30);
    lVar3 = *(longlong *)(lVar10 + (longlong)*(int *)(param_1 + 0x1c) * 8);
    lVar12 = 0;
    do {
      iVar13 = *(int *)(lVar3 + lVar12 * 4);
      uVar14 = (ulonglong)iVar13;
      dVar18 = *(double *)(lVar2 + 0x10 + uVar14 * 0x18) * param_4 +
               *(double *)(lVar2 + uVar14 * 0x18) * param_2 +
               *(double *)(lVar2 + 8 + uVar14 * 0x18) * param_3;
      if (param_6 < dVar18) {
        uVar4 = (ulonglong)(uint)(iVar7 + (int)lVar12);
        uVar8 = *(uint *)(lVar3 + uVar4 * 4);
        *(int *)(param_1 + 0x1c) = iVar13;
        if (param_5 <= dVar18) goto LAB_1403b1801;
        uVar1 = *(uint *)(param_1 + 0x18);
        uVar11 = 1;
        if (1 < (int)uVar1) {
          uVar11 = uVar1;
        }
        iVar7 = 0;
        goto LAB_1403b170b;
      }
      lVar12 = lVar12 + 1;
    } while (iVar7 != lVar12);
  }
  return 0;
LAB_1403b170b:
  if (iVar7 == uVar11 - 1) {
    if ((int)uVar1 < 1) {
      return 0;
    }
    lVar5 = (ulonglong)uVar1 * 3;
    lVar10 = 0;
    do {
      dVar18 = *(double *)(lVar2 + 0x10 + lVar10) * param_4 +
               *(double *)(lVar2 + lVar10) * param_2 + *(double *)(lVar2 + 8 + lVar10) * param_3;
      lVar5 = CONCAT71((int7)((ulonglong)lVar5 >> 8),param_5 < dVar18);
      if (param_5 < dVar18) {
        return lVar5;
      }
      bVar17 = (ulonglong)uVar1 * 0x18 + -0x18 != lVar10;
      lVar10 = lVar10 + 0x18;
    } while (bVar17);
    return lVar5;
  }
  iVar13 = (int)uVar14;
  if ((int)uVar8 < 1) {
    uVar16 = 0;
    uVar4 = uVar14 & 0xffffffff;
LAB_1403b17c4:
    uVar9 = (uint)uVar16;
    if (uVar9 == uVar8) goto LAB_1403b1764;
    uVar6 = *(uint *)(lVar5 + (longlong)iVar13 * 4);
  }
  else {
    uVar16 = 0;
    do {
      uVar4 = (ulonglong)*(int *)(*(longlong *)(lVar10 + (longlong)iVar13 * 8) + uVar16 * 4);
      param_6 = *(double *)(lVar2 + 0x10 + uVar4 * 0x18) * param_4 +
                *(double *)(lVar2 + uVar4 * 0x18) * param_2 +
                *(double *)(lVar2 + 8 + uVar4 * 0x18) * param_3;
      if (dVar18 < param_6) goto LAB_1403b17c4;
      uVar16 = uVar16 + 1;
    } while (uVar8 != uVar16);
LAB_1403b1764:
    uVar6 = *(uint *)(lVar5 + (longlong)iVar13 * 4);
    uVar9 = uVar8 + 1;
    if ((int)uVar9 < (int)uVar6) {
      piVar15 = (int *)((ulonglong)uVar9 * 4 + *(longlong *)(lVar10 + (longlong)iVar13 * 8));
      while( true ) {
        uVar4 = (ulonglong)*piVar15;
        param_6 = *(double *)(lVar2 + 0x10 + uVar4 * 0x18) * param_4 +
                  *(double *)(lVar2 + uVar4 * 0x18) * param_2 +
                  *(double *)(lVar2 + 8 + uVar4 * 0x18) * param_3;
        if (dVar18 < param_6) break;
        uVar9 = uVar9 + 1;
        piVar15 = piVar15 + 1;
        if ((int)uVar6 <= (int)uVar9) {
          return 0;
        }
      }
    }
    if (uVar9 == uVar6) {
      return 0;
    }
  }
  iVar7 = iVar7 + 1;
  uVar8 = *(uint *)(*(longlong *)(lVar10 + (longlong)iVar13 * 8) +
                   (longlong)(int)(uVar6 + uVar9) * 4);
  *(int *)(param_1 + 0x1c) = (int)uVar4;
  uVar14 = uVar4 & 0xffffffff;
  dVar18 = param_6;
  if (param_5 <= param_6) {
LAB_1403b1801:
    return CONCAT71((int7)(uVar4 >> 8),1);
  }
  goto LAB_1403b170b;
}



// FUNCTION 1403b186e FUN_1403b186e body=237 status=ok
// SIG undefined FUN_1403b186e(void)

void FUN_1403b186e(longlong param_1)

{
  undefined8 *puVar1;
  
  FUN_14497db28();
  puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0xa0) + 0x18);
  *puVar1 = 0xfffffffdfffffffb;
  puVar1[1] = 0xfffffffbffffffff;
  puVar1[2] = 0xfffffffdfffffffe;
  puVar1[3] = 0xfffffffffffffffb;
  puVar1[4] = 0xfffffffbfffffffc;
  puVar1[5] = 0xfffffffefffffffc;
  puVar1[6] = 0xfffffffffffffffa;
  puVar1[7] = 0xfffffffafffffffd;
  puVar1[8] = 0xfffffffefffffffd;
  puVar1[9] = 0xfffffffcfffffffa;
  puVar1[10] = 0xfffffffaffffffff;
  puVar1[0xb] = 0xfffffffcfffffffe;
  **(undefined8 **)(param_1 + 0xa8) = puVar1;
  *(longlong *)(*(longlong *)(param_1 + 0xa8) + 8) = (longlong)puVar1 + 0xc;
  *(undefined8 **)(*(longlong *)(param_1 + 0xa8) + 0x10) = puVar1 + 3;
  *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x18) = (longlong)puVar1 + 0x24;
  *(undefined8 **)(*(longlong *)(param_1 + 0xa8) + 0x20) = puVar1 + 6;
  *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x28) = (longlong)puVar1 + 0x3c;
  *(undefined8 **)(*(longlong *)(param_1 + 0xa8) + 0x30) = puVar1 + 9;
  *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x38) = (longlong)puVar1 + 0x54;
  return;
}



// FUNCTION 1403b195c FUN_1403b195c body=529 status=ok
// SIG undefined FUN_1403b195c(void)

ulonglong FUN_1403b195c(undefined8 param_1,double param_2,double param_3,double param_4,
                       double param_5,double param_6,double param_7)

{
  double dVar1;
  double dVar2;
  char cVar3;
  ulonglong uVar4;
  double dVar5;
  
  dVar2 = param_2 * param_5 + param_3 * param_3;
  dVar1 = param_4 * param_4;
  dVar5 = dVar1 + dVar2;
  cVar3 = FUN_1403b1580(dVar5,param_5,param_3,param_4,dVar5);
  if (cVar3 == '\0') {
    cVar3 = FUN_14497a4b4(param_1,param_5,param_6,param_4,
                          param_2 * param_5 + param_3 * param_6 + dVar1);
    if (cVar3 == '\0') {
      dVar5 = param_3 * param_6 + param_2 * param_2;
      cVar3 = FUN_14497a4b4(param_1,param_2,param_6,param_4,dVar1 + dVar5);
      if (cVar3 == '\0') {
        param_4 = param_4 * param_7;
        cVar3 = FUN_14497a4b4(param_1,param_2,param_6,param_7,dVar5 + param_4);
        if ((cVar3 == '\0') &&
           (cVar3 = FUN_14497a4b4(param_1,param_2,param_3,param_7,
                                  param_2 * param_2 + param_3 * param_3 + param_4), cVar3 == '\0'))
        {
          uVar4 = FUN_14497a4b4(param_1,param_5,param_3,param_7,param_4 + dVar2);
          return uVar4 ^ 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1403b1b6e FUN_1403b1b6e body=750 status=ok
// SIG undefined FUN_1403b1b6e(void)

void FUN_1403b1b6e(longlong param_1,int param_2,int param_3,int param_4,longlong *param_5)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  
  lVar1 = (longlong)param_2 * 4 + *(longlong *)(param_1 + 0x88) +
          (longlong)(*(int *)(param_1 + 0x3c) * param_4 + param_3) *
          (longlong)*(int *)(param_1 + 0x38) * 4;
  if (0 < param_4) {
    lVar4 = (longlong)*(int *)(param_1 + 0x44);
    iVar3 = *(int *)(param_1 + 0x70);
    if (*(int *)(lVar1 + lVar4 * -4) != iVar3) {
      if (*param_5 == *(longlong *)(param_1 + 0x98)) {
        *param_5 = *(longlong *)(param_1 + 0x90);
        iVar3 = *(int *)(param_1 + 0x70);
        lVar4 = (longlong)*(int *)(param_1 + 0x44);
      }
      *(int *)(lVar1 + lVar4 * -4) = iVar3;
      piVar2 = (int *)*param_5;
      *param_5 = (longlong)(piVar2 + 1);
      *piVar2 = param_2;
      piVar2 = (int *)*param_5;
      *param_5 = (longlong)(piVar2 + 1);
      *piVar2 = param_3;
      piVar2 = (int *)*param_5;
      *param_5 = (longlong)(piVar2 + 1);
      *piVar2 = param_4 + -1;
    }
  }
  if (0 < param_3) {
    lVar4 = (longlong)*(int *)(param_1 + 0x38);
    iVar3 = *(int *)(param_1 + 0x70);
    if (*(int *)(lVar1 + lVar4 * -4) != iVar3) {
      if (*param_5 == *(longlong *)(param_1 + 0x98)) {
        *param_5 = *(longlong *)(param_1 + 0x90);
        iVar3 = *(int *)(param_1 + 0x70);
        lVar4 = (longlong)*(int *)(param_1 + 0x38);
      }
      *(int *)(lVar1 + lVar4 * -4) = iVar3;
      piVar2 = (int *)*param_5;
      *param_5 = (longlong)(piVar2 + 1);
      *piVar2 = param_2;
      piVar2 = (int *)*param_5;
      *param_5 = (longlong)(piVar2 + 1);
      *piVar2 = param_3 + -1;
      piVar2 = (int *)*param_5;
      *param_5 = (longlong)(piVar2 + 1);
      *piVar2 = param_4;
    }
  }
  if ((0 < param_2) && (iVar3 = *(int *)(param_1 + 0x70), *(int *)(lVar1 + -4) != iVar3)) {
    if (*param_5 == *(longlong *)(param_1 + 0x98)) {
      *param_5 = *(longlong *)(param_1 + 0x90);
      iVar3 = *(int *)(param_1 + 0x70);
    }
    *(int *)(lVar1 + -4) = iVar3;
    piVar2 = (int *)*param_5;
    *param_5 = (longlong)(piVar2 + 1);
    *piVar2 = param_2 + -1;
    piVar2 = (int *)*param_5;
    *param_5 = (longlong)(piVar2 + 1);
    *piVar2 = param_3;
    piVar2 = (int *)*param_5;
    *param_5 = (longlong)(piVar2 + 1);
    *piVar2 = param_4;
  }
  if ((param_2 < *(int *)(param_1 + 0x38) + -1) &&
     (iVar3 = *(int *)(param_1 + 0x70), *(int *)(lVar1 + 4) != iVar3)) {
    if (*param_5 == *(longlong *)(param_1 + 0x98)) {
      *param_5 = *(longlong *)(param_1 + 0x90);
      iVar3 = *(int *)(param_1 + 0x70);
    }
    *(int *)(lVar1 + 4) = iVar3;
    piVar2 = (int *)*param_5;
    *param_5 = (longlong)(piVar2 + 1);
    *piVar2 = param_2 + 1;
    piVar2 = (int *)*param_5;
    *param_5 = (longlong)(piVar2 + 1);
    *piVar2 = param_3;
    piVar2 = (int *)*param_5;
    *param_5 = (longlong)(piVar2 + 1);
    *piVar2 = param_4;
  }
  if (param_3 < *(int *)(param_1 + 0x3c) + -1) {
    lVar4 = (longlong)*(int *)(param_1 + 0x38);
    iVar3 = *(int *)(param_1 + 0x70);
    if (*(int *)(lVar1 + lVar4 * 4) != iVar3) {
      if (*param_5 == *(longlong *)(param_1 + 0x98)) {
        *param_5 = *(longlong *)(param_1 + 0x90);
        iVar3 = *(int *)(param_1 + 0x70);
        lVar4 = (longlong)*(int *)(param_1 + 0x38);
      }
      *(int *)(lVar1 + lVar4 * 4) = iVar3;
      piVar2 = (int *)*param_5;
      *param_5 = (longlong)(piVar2 + 1);
      *piVar2 = param_2;
      piVar2 = (int *)*param_5;
      *param_5 = (longlong)(piVar2 + 1);
      *piVar2 = param_3 + 1;
      piVar2 = (int *)*param_5;
      *param_5 = (longlong)(piVar2 + 1);
      *piVar2 = param_4;
    }
  }
  if (param_4 < *(int *)(param_1 + 0x40) + -1) {
    lVar4 = (longlong)*(int *)(param_1 + 0x44);
    iVar3 = *(int *)(param_1 + 0x70);
    if (*(int *)(lVar1 + lVar4 * 4) != iVar3) {
      if (*param_5 == *(longlong *)(param_1 + 0x98)) {
        *param_5 = *(longlong *)(param_1 + 0x90);
        iVar3 = *(int *)(param_1 + 0x70);
        lVar4 = (longlong)*(int *)(param_1 + 0x44);
      }
      *(int *)(lVar1 + lVar4 * 4) = iVar3;
      piVar2 = (int *)*param_5;
      *param_5 = (longlong)(piVar2 + 1);
      *piVar2 = param_2;
      piVar2 = (int *)*param_5;
      *param_5 = (longlong)(piVar2 + 1);
      *piVar2 = param_3;
      piVar2 = (int *)*param_5;
      *param_5 = (longlong)(piVar2 + 1);
      *piVar2 = param_4 + 1;
    }
  }
  return;
}



// FUNCTION 1403b1e5c FUN_1403b1e5c body=448 status=ok
// SIG undefined FUN_1403b1e5c(void)

undefined8 * FUN_1403b1e5c(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  *param_1 = &PTR_FUN_149f3cfb0;
  *(undefined4 *)(param_1 + 1) = 0x100;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x40;
  *(undefined4 *)(param_1 + 2) = 0x100;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x100;
  uVar1 = FUN_14001cc68(0x800,0x10);
  param_1[4] = uVar1;
  uVar1 = FUN_14001cc68(0x400,0x10);
  param_1[5] = uVar1;
  uVar1 = FUN_14001cc68(0x1800,0x10);
  param_1[6] = uVar1;
  uVar1 = FUN_14001cc68(0x100,0x10);
  param_1[7] = uVar1;
  uVar1 = FUN_14001cc68(0x100,0x10);
  param_1[8] = uVar1;
  uVar1 = FUN_14001cc68(0x200,0x10);
  param_1[9] = uVar1;
  lVar2 = FUN_14001cc68(0x400,0x10);
  param_1[10] = lVar2;
  param_1[0xb] = lVar2 + 0x400;
  lVar2 = FUN_14001cc68(0x400,0x10);
  param_1[0xc] = lVar2;
  param_1[0xd] = lVar2 + 0x400;
  *(undefined4 *)(param_1 + 0xe) = 0x40;
  uVar1 = FUN_14001cc68(0x100,0x10);
  param_1[0xf] = uVar1;
  lVar4 = 0x20;
  lVar2 = 0;
  do {
    *(undefined4 *)(param_1[7] + lVar2 * 4) = 8;
    *(undefined4 *)(param_1[8] + lVar2 * 4) = 0;
    uVar1 = FUN_14001cc68(lVar4,0x10);
    *(undefined8 *)(param_1[9] + lVar2 * 8) = uVar1;
    lVar2 = lVar2 + 1;
    lVar4 = lVar4 + 0x40;
  } while (lVar4 != 0xe0);
  *(undefined4 *)(param_1[7] + 0xc) = 0x100;
  *(undefined4 *)(param_1[8] + 0xc) = 0;
  uVar1 = FUN_14001cc68(0x1c00,0x10);
  *(undefined8 *)(param_1[9] + 0x18) = uVar1;
  if (4 < *(int *)((longlong)param_1 + 0xc)) {
    lVar2 = 4;
    iVar3 = 0x40;
    do {
      *(undefined4 *)(param_1[7] + lVar2 * 4) = 8;
      *(undefined4 *)(param_1[8] + lVar2 * 4) = 0;
      lVar4 = (longlong)(iVar3 + 8) << 2;
      if (iVar3 < 0) {
        lVar4 = -1;
      }
      uVar1 = FUN_14001cc68(lVar4,0x10);
      *(undefined8 *)(param_1[9] + lVar2 * 8) = uVar1;
      lVar2 = lVar2 + 1;
      iVar3 = iVar3 + 0x10;
    } while (lVar2 < *(int *)((longlong)param_1 + 0xc));
  }
  return param_1;
}



// FUNCTION 1403b201c FUN_1403b201c body=1030 status=ok
// SIG undefined FUN_1403b201c(void)

undefined8 *
FUN_1403b201c(undefined8 *param_1,longlong *param_2,double *param_3,double param_4,double param_5)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_1d8 [32];
  double *local_1b8;
  double *local_1b0;
  double *local_1a8;
  undefined1 *local_1a0;
  undefined1 *local_198;
  int local_190;
  undefined1 local_188;
  undefined1 local_180;
  undefined1 local_178;
  undefined4 local_170;
  undefined4 local_168;
  undefined8 *local_158;
  undefined1 local_14c [4];
  double local_148;
  double local_140;
  double local_138;
  undefined1 local_130 [136];
  longlong local_a8;
  longlong local_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  dVar10 = param_3[5];
  dVar11 = param_3[4];
  dVar12 = param_3[3];
  dVar9 = param_3[2];
  dVar1 = *param_3;
  dVar2 = param_3[1];
  lVar7 = param_2[1];
  *param_3 = dVar1 - param_4;
  param_3[1] = dVar2 - param_4;
  param_3[2] = dVar9 - param_4;
  param_3[3] = dVar12 + param_4;
  param_3[4] = dVar11 + param_4;
  param_3[5] = dVar10 + param_4;
  *(undefined1 *)(param_3 + 6) = 1;
  dVar10 = (dVar10 + param_4) - (dVar9 - param_4);
  dVar11 = (dVar11 + param_4) - (dVar2 - param_4);
  dVar12 = (dVar12 + param_4) - (dVar1 - param_4);
  dVar9 = pow((double)(int)lVar7 / (dVar12 * 5.6 * dVar11 * dVar10),0.3333333333333333);
  puVar6 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
  *puVar6 = FUN_1403b0d12;
  puVar6[1] = 0;
  puVar6 = puVar6 + 2;
  local_1a8 = (double *)param_3[5];
  local_1b0 = (double *)param_3[2];
  local_1b8 = (double *)param_3[4];
  local_178 = 0;
  local_180 = 0;
  local_188 = 0;
  local_198 = (undefined1 *)CONCAT44(local_198._4_4_,(int)(dVar11 * dVar9 + 1.0));
  local_1a0 = (undefined1 *)CONCAT44(local_1a0._4_4_,(int)(dVar12 * dVar9 + 1.0));
  local_168 = 3;
  local_170 = 10;
  local_190 = (int)(dVar10 * dVar9 + 1.0);
  FUN_140e56f16(puVar6,*param_3,param_3[3],param_3[1]);
  *param_1 = puVar6;
  if (param_5 <= 0.0) {
    if (0 < (int)param_2[1]) {
      lVar7 = 0x10;
      uVar8 = 0;
      do {
        lVar3 = *param_2;
        iVar5 = _finite(*(double *)(lVar3 + -0x10 + lVar7));
        if (((iVar5 != 0) && (iVar5 = _finite(*(double *)(lVar3 + -8 + lVar7)), iVar5 != 0)) &&
           (iVar5 = _finite(*(double *)(lVar3 + lVar7)), iVar5 != 0)) {
          local_1b8 = *(double **)(lVar3 + lVar7);
          FUN_140436ad0(puVar6,uVar8 & 0xffffffff,*(undefined8 *)(lVar3 + -0x10 + lVar7),
                        *(undefined8 *)(lVar3 + -8 + lVar7));
        }
        uVar8 = uVar8 + 1;
        lVar7 = lVar7 + 0x18;
      } while ((longlong)uVar8 < (longlong)(int)param_2[1]);
    }
  }
  else {
    local_158 = param_1;
    FUN_1403b0d76(puVar6,local_130);
    if (0 < (int)param_2[1]) {
      lVar7 = 0x10;
      uVar8 = 0;
      do {
        lVar3 = *param_2;
        iVar5 = _finite(*(double *)(lVar3 + -0x10 + lVar7));
        if (((iVar5 != 0) && (iVar5 = _finite(*(double *)(lVar3 + -8 + lVar7)), iVar5 != 0)) &&
           (iVar5 = _finite(*(double *)(lVar3 + lVar7)), iVar5 != 0)) {
          local_1a0 = local_14c;
          local_1a8 = &local_148;
          local_1b0 = &local_140;
          local_1b8 = &local_138;
          local_198 = local_130;
          cVar4 = FUN_1405c6c3a(puVar6,*(undefined8 *)(lVar3 + -0x10 + lVar7),
                                *(undefined8 *)(lVar3 + -8 + lVar7),*(undefined8 *)(lVar3 + lVar7));
          if ((cVar4 == '\0') ||
             (dVar10 = *(double *)(lVar3 + -0x10 + lVar7) - local_138,
             dVar11 = *(double *)(lVar3 + -8 + lVar7) - local_140,
             dVar12 = (double)*(double **)(lVar3 + lVar7) - local_148,
             param_5 <= dVar12 * dVar12 + dVar10 * dVar10 + dVar11 * dVar11)) {
            local_1b8 = *(double **)(lVar3 + lVar7);
            FUN_140436ad0(puVar6,uVar8 & 0xffffffff);
          }
        }
        uVar8 = uVar8 + 1;
        lVar7 = lVar7 + 0x18;
      } while ((longlong)uVar8 < (longlong)(int)param_2[1]);
    }
    if (local_a0 != 0) {
      FUN_1400020a8();
    }
    param_1 = local_158;
    if (local_a8 != 0) {
      FUN_1400020a8();
      param_1 = local_158;
    }
  }
  if ((local_90 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1403b2424 FUN_1403b2424 body=242 status=ok
// SIG undefined FUN_1403b2424(void)

undefined8 *
FUN_1403b2424(longlong *param_1,ulonglong *param_2,undefined8 *param_3,undefined8 *param_4)

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
  FUN_1403b2516();
  puVar6[3] = uVar3;
  lVar4 = DAT_14c9fbaa8;
  puVar6[4] = DAT_14c9fbaa8;
  if (lVar4 != 0) {
    LOCK();
    piVar1 = (int *)(lVar4 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  puVar6[5] = &DAT_14c9fba60;
  puVar6[6] = 0;
  *(undefined4 *)(puVar6 + 7) = 0xffffffff;
  *(undefined1 *)((longlong)puVar6 + 0x3c) = 0;
  *puVar6 = &PTR_FUN_14a2791f0;
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



// FUNCTION 1403b2516 FUN_1403b2516 body=434 status=ok
// SIG undefined FUN_1403b2516(void)

undefined * FUN_1403b2516(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  wchar_t *local_68;
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
              0x110) < DAT_14c9fbae0) {
    FUN_144b3d300(&DAT_14c9fbae0);
    if (DAT_14c9fbae0 == -1) {
      FUN_14570849c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = L"SceneTextures";
      local_70 = L"LumenCardPass";
      local_78 = L"FLumenCardPassUniformParameters";
      local_38 = 0;
      local_50 = 0xa0;
      local_58 = 0x170;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9fba60,1,2);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d806d2);
      _Init_thread_footer(&DAT_14c9fbae0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9fba60;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403b26ca FUN_1403b26ca body=270 status=ok
// SIG undefined FUN_1403b26ca(void)

undefined8 FUN_1403b26ca(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1403b27d2;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1403b27d2;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1403b27d2:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1403b2780;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))();
      uVar6 = 1;
      goto LAB_1403b2780;
    }
  }
  uVar6 = 0;
LAB_1403b2780:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403b27dc FUN_1403b27dc body=3102 status=ok
// SIG undefined FUN_1403b27dc(void)

void FUN_1403b27dc(longlong param_1)

{
  ulonglong uVar1;
  short sVar2;
  ushort uVar3;
  ushort uVar4;
  undefined2 uVar5;
  uint uVar6;
  longlong lVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  uint *puVar21;
  longlong *plVar22;
  ulonglong uVar23;
  longlong *plVar24;
  longlong *plVar25;
  uint uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  undefined1 auStack_158 [32];
  ulonglong local_138;
  undefined2 local_12c;
  undefined2 local_12a;
  longlong local_128;
  longlong *local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  longlong *local_100;
  ulonglong local_f8;
  uint *local_f0;
  longlong local_e8;
  uint *local_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  longlong *local_c0;
  longlong local_b8;
  int local_b0;
  longlong local_a8 [2];
  uint local_98 [4];
  uint *local_88;
  int local_80;
  undefined8 local_7c;
  undefined4 local_74;
  longlong local_68;
  ulonglong local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  *(longlong *)(param_1 + 0x270) = *(longlong *)(param_1 + 0x270) + 1;
  plVar24 = *(longlong **)(param_1 + 0x548);
  uVar15 = *(uint *)(plVar24 + 6);
  local_108 = param_1;
  if (uVar15 == 0) {
    local_138 = 0;
    uVar27 = 1;
    uVar6 = 0;
    iVar13 = 0;
  }
  else {
    puVar21 = (uint *)plVar24[5];
    if ((uint *)plVar24[5] == (uint *)0x0) {
      puVar21 = (uint *)(plVar24 + 3);
    }
    uVar6 = *puVar21;
    if (uVar6 == 0) {
      iVar13 = uVar15 + 0x1e;
      if (-1 < (int)(uVar15 - 1)) {
        iVar13 = uVar15 - 1;
      }
      local_138 = 0;
      uVar27 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
        uVar27 = 0;
      }
      iVar13 = 0;
      do {
        if (uVar27 == local_138) goto LAB_1403b2bf7;
        iVar13 = iVar13 + 0x20;
        uVar6 = puVar21[local_138 + 1];
        local_138 = local_138 + 1;
      } while (uVar6 == 0);
    }
    else {
      local_138 = 0;
      iVar13 = 0;
    }
    uVar27 = (ulonglong)(-uVar6 & uVar6);
    uVar28 = uVar27 * 2 + 1;
    lVar20 = 0x3f;
    if (uVar28 != 0) {
      for (; uVar28 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    uVar6 = (iVar13 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
    if ((int)uVar15 <= (int)uVar6) {
      uVar6 = uVar15;
    }
  }
  if (uVar6 != uVar15) {
    uVar26 = 0xffffffff;
    local_100 = plVar24;
    local_f8 = (ulonglong)uVar15;
    local_e0 = (uint *)(plVar24 + 3);
    do {
      local_128 = *local_100;
      lVar19 = local_100[1];
      lVar16 = (longlong)(int)uVar6 * 0x128;
      lVar20 = lVar19 + lVar16;
      lVar7 = FUN_14009d2a0();
      local_12a = *(undefined2 *)(lVar7 + 0x11a);
      lVar7 = FUN_14009d2a0();
      local_12c = *(undefined2 *)(lVar7 + 0x11c);
      puVar21 = (uint *)(lVar19 + lVar16 + 0x20);
      iVar11 = *(int *)(lVar19 + lVar16 + 0x38);
      local_110 = CONCAT44(local_110._4_4_,iVar13);
      local_118 = CONCAT44(local_118._4_4_,uVar26);
      if (iVar11 == 0) {
        uVar28 = 1;
        uVar23 = 0;
        iVar13 = 0;
        iVar14 = 0;
      }
      else {
        puVar12 = *(uint **)(lVar20 + 0x30);
        if (*(uint **)(lVar20 + 0x30) == (uint *)0x0) {
          puVar12 = puVar21;
        }
        uVar15 = *puVar12;
        if (uVar15 == 0) {
          iVar13 = iVar11 + 0x1e;
          if (-1 < iVar11 + -1) {
            iVar13 = iVar11 + -1;
          }
          uVar23 = 0;
          uVar28 = (ulonglong)(uint)(iVar13 >> 5);
          if (iVar13 >> 5 < 1) {
            uVar28 = uVar23;
          }
          iVar14 = 0;
          do {
            if (uVar28 == uVar23) goto LAB_1403b2b31;
            iVar14 = iVar14 + 0x20;
            uVar15 = puVar12[uVar23 + 1];
            uVar23 = uVar23 + 1;
          } while (uVar15 == 0);
        }
        else {
          uVar23 = 0;
          iVar14 = 0;
        }
        uVar28 = (ulonglong)(-uVar15 & uVar15);
        uVar1 = uVar28 * 2 + 1;
        lVar7 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        iVar13 = (iVar14 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
        if (iVar11 <= iVar13) {
          iVar13 = iVar11;
        }
      }
      if (iVar13 < iVar11) {
        plVar24 = (longlong *)(lVar19 + lVar16 + 0x10);
        uVar15 = 0xffffffff;
        local_128 = local_128 + 0x28;
        local_120 = plVar24;
        do {
          lVar16 = local_128;
          lVar19 = *plVar24;
          lVar7 = (longlong)iVar13 * 0x1c;
          iVar9 = *(int *)(lVar19 + 4 + lVar7);
          if ((((iVar9 == 0) || (uVar6 = *(uint *)(lVar19 + lVar7), (int)uVar6 < 0)) ||
              (DAT_14c9647dc <= (int)uVar6)) ||
             (((lVar18 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8),
               plVar24 = local_120, lVar18 == 0 || (*(int *)(lVar18 + 0x10) != iVar9)) ||
              ((*(uint *)(lVar18 + 8) & 0x10200000) != 0)))) {
            sVar2 = *(short *)(lVar19 + 0x10 + lVar7);
            local_f0 = puVar21;
            local_e8 = lVar20;
            if (sVar2 != -1) {
              FUN_14055c5c4(local_128,sVar2,local_12a);
              plVar24 = local_120;
              FUN_1405e0992(lVar16,*(undefined2 *)(*local_120 + 0x10 + lVar7),local_12c,3);
            }
            FUN_1403b3472(plVar24,iVar13);
            iVar11 = *(int *)(local_e8 + 0x38);
            puVar21 = local_f0;
            lVar20 = local_e8;
          }
          uVar15 = uVar15 & ~(uint)uVar28;
          puVar12 = *(uint **)(lVar20 + 0x30);
          if (*(uint **)(lVar20 + 0x30) == (uint *)0x0) {
            puVar12 = puVar21;
          }
          iVar13 = (int)uVar23;
          lVar19 = (longlong)iVar13;
          uVar6 = puVar12[lVar19] & uVar15;
          if (uVar6 == 0) {
            iVar9 = iVar11 + 0x1e;
            if (-1 < iVar11 + -1) {
              iVar9 = iVar11 + -1;
            }
            iVar9 = iVar9 >> 5;
            iVar10 = iVar9;
            if (iVar9 < iVar13) {
              iVar10 = iVar13;
            }
            if (iVar9 <= iVar13) break;
            lVar7 = 0;
            while( true ) {
              iVar14 = iVar14 + 0x20;
              uVar6 = (puVar12 + lVar19 + 1)[lVar7];
              if (uVar6 != 0) break;
              lVar7 = lVar7 + 1;
              if (iVar10 - lVar19 == lVar7) goto LAB_1403b2b31;
            }
            uVar23 = (ulonglong)(iVar13 + (int)lVar7 + 1);
            uVar15 = 0xffffffff;
          }
          uVar28 = (ulonglong)(-uVar6 & uVar6);
          uVar1 = uVar28 * 2 + 1;
          lVar19 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          iVar13 = (iVar14 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
        } while (iVar13 < iVar11);
      }
LAB_1403b2b31:
      uVar26 = (uint)local_118 & ~(uint)uVar27;
      puVar21 = (uint *)local_100[5];
      if ((uint *)local_100[5] == (uint *)0x0) {
        puVar21 = local_e0;
      }
      uVar15 = *(uint *)(local_100 + 6);
      lVar20 = (longlong)(int)local_138;
      uVar6 = puVar21[lVar20] & uVar26;
      iVar13 = (int)local_110;
      if (uVar6 == 0) {
        iVar11 = uVar15 + 0x1e;
        if (-1 < (int)(uVar15 - 1)) {
          iVar11 = uVar15 - 1;
        }
        iVar11 = iVar11 >> 5;
        iVar13 = (int)local_110 + 0x20;
        iVar14 = iVar11;
        if (iVar11 < (int)local_138) {
          iVar14 = (int)local_138;
        }
        if ((int)local_138 < iVar11) {
          lVar19 = 0;
          do {
            uVar6 = puVar21[lVar20 + lVar19 + 1];
            if (uVar6 != 0) {
              local_138 = (ulonglong)((int)local_138 + (int)lVar19 + 1);
              uVar26 = 0xffffffff;
              goto LAB_1403b2bbf;
            }
            iVar13 = iVar13 + 0x20;
            lVar19 = lVar19 + 1;
          } while (iVar14 - lVar20 != lVar19);
          uVar26 = 0xffffffff;
          lVar20 = (longlong)iVar14;
        }
        local_138 = lVar20 + 1;
        uVar6 = uVar15;
      }
      else {
LAB_1403b2bbf:
        uVar27 = (ulonglong)(-uVar6 & uVar6);
        uVar28 = uVar27 * 2 + 1;
        lVar20 = 0x3f;
        if (uVar28 != 0) {
          for (; uVar28 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        uVar6 = (iVar13 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
        if ((int)uVar15 <= (int)uVar6) {
          uVar6 = uVar15;
        }
      }
    } while (uVar6 != (uint)local_f8);
  }
LAB_1403b2bf7:
  local_110 = FUN_14009d2a0();
  local_d8 = 0;
  uStack_d0 = 0;
  uVar3 = *(ushort *)(local_110 + 0x4c);
  iVar11 = uVar3 + 1;
  local_88 = (uint *)0x10000000000;
  local_60 = 0x10000000000;
  local_58 = 0;
  uStack_50 = 0;
  iVar13 = iVar11;
  if (0xff < uVar3) {
    FUN_14497ddce(local_a8,0);
    iVar13 = (int)local_88 + iVar11;
  }
  lVar20 = local_108;
  iVar14 = iVar13 + 0x1f;
  if (-1 < iVar13) {
    iVar14 = iVar13;
  }
  local_88 = (uint *)CONCAT44(local_88._4_4_,iVar13);
  if (iVar13 % 0x20 != 0) {
    bVar8 = -(char)(iVar13 % 0x20);
    *(uint *)((longlong)local_a8 + (longlong)(iVar14 >> 5) * 4) =
         (uint)(*(int *)((longlong)local_a8 + (longlong)(iVar14 >> 5) * 4) << (bVar8 & 0x1f)) >>
         (bVar8 & 0x1f);
  }
  FUN_1447c45ca(local_a8,0,iVar11,0);
  puVar21 = (uint *)((longlong)local_a8 + (ulonglong)(uVar3 >> 5) * 4);
  *puVar21 = *puVar21 | 1 << ((byte)uVar3 & 0x1f);
  local_128 = lVar20 + 0x28;
  if (uVar3 != 0xffff) {
    local_138 = CONCAT71(local_138._1_7_,*(char *)(lVar20 + 0x298));
    if (*(char *)(lVar20 + 0x298) == '\0') {
      *(int *)(lVar20 + 0x28c) = *(int *)(lVar20 + 0x28c) + 1;
    }
    else {
      LOCK();
      *(int *)(lVar20 + 0x28c) = *(int *)(lVar20 + 0x28c) + 1;
      UNLOCK();
    }
    local_c0 = local_a8;
    local_b8 = local_128;
    local_b0 = FUN_1403b8464(&local_c0,0);
    local_120 = (longlong *)CONCAT44(local_120._4_4_,*(int *)(lVar20 + 0x38));
    if (local_b0 != *(int *)(lVar20 + 0x38)) {
      do {
        plVar24 = *(longlong **)(*(longlong *)(local_b8 + 0x60) + (longlong)local_b0 * 8);
        if ((char)local_138 == '\0') {
          *(undefined4 *)((longlong)plVar24 + 0x14) = 0;
          plVar22 = plVar24;
        }
        else {
          plVar22 = (longlong *)0x0;
        }
        if (*(ushort *)((longlong)plVar24 + 0xc) != 0) {
          plVar25 = (longlong *)plVar24[5];
          lVar20 = (ulonglong)*(ushort *)((longlong)plVar24 + 0xc) << 5;
          do {
            if (*(ushort *)((longlong)plVar25 + 0x1e) == uVar3) goto LAB_1403b2d62;
            plVar25 = plVar25 + 4;
            lVar20 = lVar20 + -0x20;
          } while (lVar20 != 0);
        }
        plVar25 = (longlong *)0x0;
LAB_1403b2d62:
        iVar13 = *(int *)((longlong)plVar24 + 0x14);
        if (iVar13 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(plVar25 + 1));
        }
        LOCK();
        *(int *)(plVar25 + 3) = (int)plVar25[3] + 1;
        UNLOCK();
        uVar4 = *(ushort *)((longlong)plVar24 + 0xe);
        if ((ulonglong)uVar4 != 0) {
          lVar20 = *plVar25;
          lVar19 = plVar24[3];
          uVar27 = 0;
          do {
            uVar5 = *(undefined2 *)(lVar19 + uVar27 * 2);
            iVar11 = *(int *)(lVar20 + 4 + uVar27 * 8);
            if (((iVar11 == 0) || (uVar15 = *(uint *)(lVar20 + uVar27 * 8), (int)uVar15 < 0)) ||
               ((DAT_14c9647dc <= (int)uVar15 ||
                ((((plVar24 = (longlong *)
                              ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8)),
                   plVar24 == (longlong *)0x0 || ((int)plVar24[2] != iVar11)) ||
                  ((*(uint *)(plVar24 + 1) & 0x10200000) != 0)) ||
                 ((lVar7 = *plVar24, lVar7 == 0 || ((*(uint *)(lVar7 + 8) >> 0x1e & 1) != 0))))))))
            {
LAB_1403b31f6:
              lVar7 = (longlong)(int)uStack_d0;
              uVar15 = (int)uStack_d0 + 1;
              uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar15);
              if (uStack_d0._4_4_ < uVar15) {
                local_118 = lVar7;
                local_100 = plVar22;
                FUN_1405e07ae(&local_d8,lVar7);
                lVar7 = local_118;
                plVar22 = local_100;
              }
              *(undefined2 *)(local_d8 + lVar7 * 2) = uVar5;
            }
            else {
              uVar15 = *(uint *)(lVar7 + 0xc);
              if ((int)uVar15 < DAT_14c9647dc) {
                lVar7 = (ulonglong)((uVar15 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8);
              }
              else {
                lVar7 = 0;
              }
              if ((*(uint *)(lVar7 + 8) >> 0x1c & 1) != 0) goto LAB_1403b31f6;
            }
            uVar27 = uVar27 + 1;
          } while (uVar4 != uVar27);
        }
        if (plVar25 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar25 + 3) = (int)plVar25[3] + -1;
          UNLOCK();
          if (iVar13 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(plVar25 + 1));
          }
        }
        if (plVar22 != (longlong *)0x0) {
          *(undefined4 *)((longlong)plVar22 + 0x14) = 1;
        }
        local_b0 = FUN_1403b8464(&local_c0,local_b0 + 1);
        lVar20 = local_108;
      } while (local_b0 != (int)local_120);
    }
    if (local_c0 != (longlong *)0x0) {
      if (*(char *)(local_b8 + 0x270) == '\0') {
        *(int *)(local_b8 + 0x264) = *(int *)(local_b8 + 0x264) + -1;
      }
      else {
        LOCK();
        *(int *)(local_b8 + 0x264) = *(int *)(local_b8 + 0x264) + -1;
        UNLOCK();
      }
    }
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  lVar16 = local_d8;
  lVar7 = local_110;
  lVar19 = local_128;
  lVar18 = (longlong)(int)uStack_d0;
  if (lVar18 != 0) {
    lVar17 = 0;
    do {
      uVar5 = *(undefined2 *)(lVar16 + lVar17);
      FUN_14055c5c4(lVar19,uVar5,*(undefined2 *)(lVar7 + 0x11a));
      FUN_1405e0992(lVar19,uVar5,*(undefined2 *)(lVar7 + 0x11c),3);
      lVar17 = lVar17 + 2;
      lVar20 = local_108;
    } while (lVar18 * 2 != lVar17);
  }
  if (local_d8 != 0) {
    FUN_1400020a8(local_d8);
  }
  FUN_14009e37a(lVar20 + 0x658,lVar20);
  local_88 = (uint *)0x0;
  local_80 = 0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_7c = 0xffffffff00000080;
  local_74 = 0;
  local_68 = 0;
  local_60 = local_60 & 0xffffffff00000000;
  lVar19 = lVar20 + 0x2a0;
  FUN_14009d97a(lVar19);
  lVar7 = *(longlong *)(lVar20 + 0x2a8);
  if (*(longlong *)(lVar20 + 0x2a8) == 0) {
    lVar7 = lVar19;
  }
  iVar13 = *(int *)(lVar20 + 0x2b0);
  if ((longlong)iVar13 != 0) {
    lVar16 = 0;
    do {
      local_c0 = *(longlong **)
                  (*(longlong *)(lVar20 + 0x358) + 0x20 +
                  (ulonglong)*(ushort *)(lVar7 + lVar16) * 0x28);
      FUN_1403b34d6(local_a8,&local_d8,&local_c0);
      lVar16 = lVar16 + 2;
    } while ((longlong)iVar13 * 2 != lVar16);
  }
  FUN_14009d97a(lVar19);
  lVar19 = lVar20 + 0x2b8;
  if (*(longlong *)(lVar20 + 0x2c8) != 0) {
    lVar19 = *(longlong *)(lVar20 + 0x2c8);
  }
  iVar13 = *(int *)(lVar20 + 0x2d0);
  if ((longlong)iVar13 != 0) {
    lVar7 = 0;
    do {
      local_c0 = *(longlong **)
                  (*(longlong *)(lVar20 + 0x358) + 0x20 +
                  (ulonglong)*(ushort *)(lVar19 + lVar7) * 0x28);
      FUN_1403b34d6(local_a8,&local_d8,&local_c0);
      lVar7 = lVar7 + 2;
    } while ((longlong)iVar13 * 2 != lVar7);
  }
  iVar13 = local_80;
  if (local_80 == 0) {
    uVar28 = 1;
    uVar27 = 0;
    iVar11 = 0;
    iVar14 = 0;
  }
  else {
    puVar21 = local_88;
    if (local_88 == (uint *)0x0) {
      puVar21 = local_98;
    }
    uVar15 = *puVar21;
    if (uVar15 == 0) {
      iVar11 = local_80 + 0x1e;
      if (-1 < local_80 + -1) {
        iVar11 = local_80 + -1;
      }
      uVar27 = 0;
      uVar28 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar28 = uVar27;
      }
      iVar14 = 0;
      do {
        if (uVar28 == uVar27) goto LAB_1403b3140;
        iVar14 = iVar14 + 0x20;
        uVar15 = puVar21[uVar27 + 1];
        uVar27 = uVar27 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar27 = 0;
      iVar14 = 0;
    }
    uVar28 = (ulonglong)(-uVar15 & uVar15);
    uVar23 = uVar28 * 2 + 1;
    lVar19 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    iVar11 = (iVar14 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
    if (local_80 <= iVar11) {
      iVar11 = local_80;
    }
  }
  if (iVar11 != local_80) {
    uVar15 = 0xffffffff;
    do {
      (**(code **)(**(longlong **)(local_a8[0] + (longlong)iVar11 * 0x10) + 0x2d0))();
      uVar15 = ~(uint)uVar28 & uVar15;
      puVar21 = local_88;
      if (local_88 == (uint *)0x0) {
        puVar21 = local_98;
      }
      iVar11 = (int)uVar27;
      lVar19 = (longlong)iVar11;
      uVar6 = puVar21[lVar19] & uVar15;
      if (uVar6 == 0) {
        iVar9 = local_80 + 0x1e;
        if (-1 < local_80 + -1) {
          iVar9 = local_80 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar14 = iVar14 + 0x20;
        iVar10 = iVar9;
        if (iVar9 < iVar11) {
          iVar10 = iVar11;
        }
        if (iVar11 < iVar9) {
          lVar7 = 0;
          do {
            uVar6 = puVar21[lVar19 + lVar7 + 1];
            if (uVar6 != 0) {
              uVar27 = (ulonglong)(iVar11 + (int)lVar7 + 1);
              uVar15 = 0xffffffff;
              goto LAB_1403b310a;
            }
            iVar14 = iVar14 + 0x20;
            lVar7 = lVar7 + 1;
          } while (iVar10 - lVar19 != lVar7);
          uVar15 = 0xffffffff;
          iVar11 = iVar10;
        }
        uVar27 = (ulonglong)(iVar11 + 1);
        lVar20 = local_108;
        iVar11 = local_80;
      }
      else {
LAB_1403b310a:
        uVar28 = (ulonglong)(-uVar6 & uVar6);
        uVar23 = uVar28 * 2 + 1;
        lVar19 = 0x3f;
        if (uVar23 != 0) {
          for (; uVar23 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        iVar11 = (iVar14 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
        if (local_80 <= iVar11) {
          iVar11 = local_80;
        }
      }
    } while (iVar11 != iVar13);
  }
LAB_1403b3140:
  FUN_1403b3b6e(lVar20);
  local_60 = local_60 & 0xffffffff00000000;
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  FUN_1403b33fe(local_a8);
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403b33fe FUN_1403b33fe body=116 status=ok
// SIG undefined FUN_1403b33fe(void)

void FUN_1403b33fe(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14474875a(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1403b3472 FUN_1403b3472 body=99 status=ok
// SIG undefined FUN_1403b3472(void)

void FUN_1403b3472(longlong *param_1,int param_2)

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
  FUN_1403b793c();
  return;
}



// FUNCTION 1403b34d6 FUN_1403b34d6 body=1687 status=ok
// SIG undefined FUN_1403b34d6(void)

int * FUN_1403b34d6(longlong *param_1,int *param_2,ulonglong *param_3)

{
  uint *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  byte bVar7;
  int iVar8;
  uint *puVar9;
  ulonglong uVar10;
  int iVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  longlong lVar20;
  int iVar21;
  ulonglong uVar22;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar16 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar16 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar16) {
      FUN_1446efaca(param_1,iVar16);
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
    plVar12 = param_1 + 2;
    iVar8 = iVar21 + 1;
    iVar11 = iVar21 + 0x1f;
    if (-1 < iVar21) {
      iVar11 = iVar21;
    }
    if (iVar11 >> 5 == iVar4) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar21) {
        iVar4 = iVar21;
        if (iVar21 + 0x20U < 0xa0) {
          iVar8 = 0x80;
        }
        else {
          uVar15 = iVar21 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar17 = 4;
            if (4 < uVar15) {
              uVar17 = uVar15;
            }
          }
          else {
            uVar17 = uVar15 + (uVar15 * 3 >> 3) + 0x10;
          }
          uVar10 = (ulonglong)(uVar17 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar19 = (uint)(uVar10 + 0xf);
              if (uVar17 < 0x1ffd) {
                uVar10 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar10 + 0xf >> 4]];
              }
              else {
                uVar14 = (ulonglong)(uVar19 & 0xfffffff0);
                if (uVar14 < 0x7ff1) {
                  bVar7 = (&DAT_14c841e00)[uVar19 >> 4];
                  uVar22 = 0x32;
                  if (0x32 < bVar7) {
                    uVar22 = (ulonglong)bVar7;
                  }
                  uVar18 = 0x32 - (ulonglong)bVar7;
                  do {
                    uVar10 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar18 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar18 & 0xffffffff] & 0xf) == 0) goto LAB_1403b39eb;
                    lVar6 = uVar22 + 1 + uVar18;
                    uVar18 = uVar18 - 1;
                  } while (lVar6 != 0x33);
                }
                uVar10 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar10 = (ulonglong)DAT_14c841df8;
                }
                uVar10 = -uVar10 & (uVar14 + uVar10) - 1;
              }
            }
            else {
              uVar10 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar10,0);
              iVar4 = (int)param_1[5];
            }
          }
LAB_1403b39eb:
          iVar5 = (int)(uVar10 >> 2);
          iVar8 = -0x20;
          if ((int)uVar15 <= iVar5) {
            iVar8 = iVar5 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar12,iVar4);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar4 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar4 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar13 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar13 = plVar12;
        }
        bVar7 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar13 + (longlong)(iVar4 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar13 + (longlong)(iVar4 >> 5) * 4) << (bVar7 & 0x1f)) >>
             (bVar7 & 0x1f);
      }
    }
    lVar6 = (longlong)iVar16;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[4];
    }
    bVar7 = (byte)iVar21 & 0x1f;
    puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar11 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
  }
  else {
    iVar16 = (int)param_1[6];
    lVar6 = (longlong)iVar16;
    iVar21 = *(int *)(*param_1 + 4 + lVar6 * 0x10);
    *(int *)(param_1 + 6) = iVar21;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar21 * 0x10) = 0xffffffff;
    }
  }
  puVar1 = (uint *)(param_1 + 2);
  uVar15 = 1;
  puVar9 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar9 = puVar1;
  }
  iVar21 = iVar16 + 0x1f;
  if (-1 < iVar16) {
    iVar21 = iVar16;
  }
  puVar9[iVar21 >> 5] = puVar9[iVar21 >> 5] | 1 << ((byte)iVar16 & 0x1f);
  lVar20 = *param_1;
  lVar6 = lVar6 * 0x10;
  uVar10 = *param_3;
  *(ulonglong *)(lVar20 + lVar6) = uVar10;
  *(undefined4 *)(lVar20 + 8 + lVar6) = 0xffffffff;
  uVar17 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
  uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
  uVar17 = uVar17 >> 0x10 ^ uVar17;
  uVar19 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if ((uVar19 != 0) && (uVar19 != 1)) {
    plVar12 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[8];
    }
    iVar21 = *(int *)((longlong)plVar12 + (ulonglong)((int)param_1[9] - 1U & uVar17) * 4);
    if (iVar21 != -1) {
      do {
        puVar2 = (ulonglong *)(*param_1 + (longlong)iVar21 * 0x10);
        if (*(ulonglong *)(*param_1 + (longlong)iVar21 * 0x10) == uVar10) {
          *puVar2 = uVar10;
          FUN_14754ff9c(param_1,iVar16);
          iVar16 = iVar21;
          goto LAB_1403b36a9;
        }
        iVar21 = (int)puVar2[1];
      } while (iVar21 != -1);
    }
  }
  if (3 < uVar19) {
    uVar10 = (ulonglong)(uVar19 & 0xfffffffe) + 0xf;
    lVar3 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar15 = 1 << ((byte)lVar3 & 0x1f);
  }
  if (((int)uVar19 < 1) || ((int)uVar15 <= (int)param_1[9])) {
    uVar17 = (int)param_1[9] - 1U & uVar17;
    *(uint *)(lVar20 + lVar6 + 0xc) = uVar17;
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(undefined4 *)(lVar20 + lVar6 + 8) =
         *(undefined4 *)
          ((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar17) * 4);
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(int *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar17) * 4) =
         iVar16;
    goto LAB_1403b36a9;
  }
  *(uint *)(param_1 + 9) = uVar15;
  plVar12 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar12,0,0,4);
    uVar15 = *(uint *)(param_1 + 9);
  }
  plVar13 = param_1 + 7;
  if (uVar15 == 1) {
    if (*plVar12 != 0) {
      FUN_1446efa72(plVar12,0,0,4);
    }
LAB_1403b36e8:
    uVar17 = 0;
    do {
      plVar12 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar12 = plVar13;
      }
      *(undefined4 *)((longlong)plVar12 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar17) * 4) =
           0xffffffff;
      uVar17 = uVar17 + 1;
    } while (uVar15 != uVar17);
  }
  else {
    if (uVar15 == 0) goto LAB_1403b36a9;
    FUN_1446efa72(plVar12,0,uVar15,4);
    if (0 < (int)uVar15) goto LAB_1403b36e8;
  }
  iVar21 = (int)param_1[5];
  if (iVar21 == 0) {
    uVar10 = 0;
    uVar14 = 1;
    iVar4 = 0;
    iVar8 = 0;
  }
  else {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar15 = *puVar9;
    if (uVar15 == 0) {
      iVar4 = iVar21 + 0x1e;
      if (-1 < iVar21 + -1) {
        iVar4 = iVar21 + -1;
      }
      uVar10 = 0;
      uVar14 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar14 = uVar10;
      }
      iVar8 = 0;
      do {
        if (uVar14 == uVar10) goto LAB_1403b36a9;
        iVar8 = iVar8 + 0x20;
        uVar15 = puVar9[uVar10 + 1];
        uVar10 = uVar10 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar10 = 0;
      iVar8 = 0;
    }
    uVar14 = (ulonglong)(-uVar15 & uVar15);
    uVar22 = uVar14 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar4 = (iVar8 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar21 <= iVar4) {
      iVar4 = iVar21;
    }
  }
  if (iVar4 < iVar21) {
    uVar15 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar20 = (longlong)iVar4 * 0x10;
      uVar17 = ((uint)(*(ulonglong *)(lVar6 + lVar20) >> 0x14) & 0xffff ^
               (uint)(*(ulonglong *)(lVar6 + lVar20) >> 4)) * -0x7a143595;
      uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
      uVar22 = (longlong)(int)(uVar17 >> 0x10 ^ uVar17) & (longlong)(int)param_1[9] - 1U;
      iVar21 = (int)uVar22;
      *(int *)(lVar6 + 0xc + lVar20) = iVar21;
      plVar12 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar12 = plVar13;
      }
      *(undefined4 *)(lVar6 + 8 + lVar20) =
           *(undefined4 *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & uVar22) * 4);
      plVar12 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar12 = plVar13;
      }
      *(int *)((longlong)plVar12 + ((longlong)iVar21 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
      uVar15 = ~(uint)uVar14 & uVar15;
      puVar9 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar9 = puVar1;
      }
      iVar21 = (int)param_1[5];
      iVar4 = (int)uVar10;
      lVar6 = (longlong)iVar4;
      uVar17 = puVar9[lVar6] & uVar15;
      if (uVar17 == 0) {
        iVar11 = iVar21 + 0x1e;
        if (-1 < iVar21 + -1) {
          iVar11 = iVar21 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar5 = iVar11;
        if (iVar11 < iVar4) {
          iVar5 = iVar4;
        }
        if (iVar11 <= iVar4) break;
        lVar20 = 0;
        while( true ) {
          iVar8 = iVar8 + 0x20;
          uVar17 = puVar9[lVar6 + lVar20 + 1];
          if (uVar17 != 0) break;
          lVar20 = lVar20 + 1;
          if (iVar5 - lVar6 == lVar20) goto LAB_1403b36a9;
        }
        uVar10 = (ulonglong)(iVar4 + (int)lVar20 + 1);
        uVar15 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar17 & uVar17);
      uVar22 = uVar14 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar4 = (iVar8 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar4 < iVar21);
  }
LAB_1403b36a9:
  *param_2 = iVar16;
  return param_2;
}



// FUNCTION 1403b3b6e FUN_1403b3b6e body=4810 status=ok
// SIG undefined FUN_1403b3b6e(void)

void FUN_1403b3b6e(longlong param_1)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  undefined1 auVar5 [8];
  undefined1 auVar6 [8];
  undefined2 uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint *puVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  ushort *_Dst;
  int iVar17;
  ulonglong uVar18;
  longlong *plVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  longlong *plVar23;
  uint uVar24;
  undefined1 *puVar25;
  longlong lVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  longlong *plVar29;
  longlong *plVar30;
  undefined1 auStack_248 [40];
  undefined8 local_220;
  longlong *local_218;
  ulonglong local_210;
  longlong local_208;
  int local_200;
  undefined2 local_1fa;
  longlong *local_1f8;
  ulonglong local_1f0;
  uint *local_1e8;
  int local_1dc;
  longlong local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined2 local_1b0;
  undefined8 local_1a8;
  longlong *plStack_1a0;
  int local_198 [4];
  longlong local_188;
  undefined4 local_180;
  uint local_17c;
  undefined4 uStack_178;
  int local_174;
  undefined1 local_170 [8];
  undefined1 *local_168;
  int local_160;
  undefined1 local_158 [8];
  undefined8 uStack_150;
  uint local_148 [10];
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  longlong local_108;
  undefined8 uStack_100;
  longlong local_f8;
  undefined8 uStack_f0;
  undefined8 local_c8;
  undefined8 local_a0;
  longlong local_98 [2];
  uint local_88 [4];
  uint *local_78;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_248;
  FUN_1403b4e3c(param_1 + 0x430);
  uVar9 = FUN_14009d2a0();
  uVar2 = *(ushort *)(uVar9 + 0x11c);
  lVar10 = FUN_14482820e((longlong *)(param_1 + 0x28));
  if ((uVar2 == 0xffff) ||
     (*(uint *)(lVar10 + 0x20) == (uint)uVar2 || (int)*(uint *)(lVar10 + 0x20) < (int)(uint)uVar2))
  goto LAB_1403b3be0;
  if ((*(uint *)(lVar10 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
  goto LAB_1403b3be0;
  local_1e8 = (uint *)CONCAT44(local_1e8._4_4_,1 << ((byte)uVar2 & 0x1f));
  *(undefined8 *)(param_1 + 0x6e0) = 0;
  local_78 = (uint *)0x0;
  local_70 = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  lVar10 = param_1 + 0x2a0;
  local_220 = uVar9;
  local_218 = (longlong *)(param_1 + 0x28);
  local_1f0 = (ulonglong)(uVar2 >> 5);
  FUN_14009d97a(lVar10);
  lVar22 = *(longlong *)(param_1 + 0x2a8);
  if (*(longlong *)(param_1 + 0x2a8) == 0) {
    lVar22 = lVar10;
  }
  iVar21 = *(int *)(param_1 + 0x2b0);
  if ((longlong)iVar21 != 0) {
    lVar26 = 0;
    do {
      local_158 = *(undefined1 (*) [8])
                   (*(longlong *)(param_1 + 0x358) + 0x20 +
                   (ulonglong)*(ushort *)(lVar22 + lVar26) * 0x28);
      FUN_1403b34d6(local_98,&local_1a8,local_158);
      lVar26 = lVar26 + 2;
    } while ((longlong)iVar21 * 2 != lVar26);
  }
  FUN_14009d97a(lVar10);
  lVar10 = param_1 + 0x2b8;
  if (*(longlong *)(param_1 + 0x2c8) != 0) {
    lVar10 = *(longlong *)(param_1 + 0x2c8);
  }
  iVar21 = *(int *)(param_1 + 0x2d0);
  if ((longlong)iVar21 != 0) {
    lVar22 = 0;
    do {
      local_158 = *(undefined1 (*) [8])
                   (*(longlong *)(param_1 + 0x358) + 0x20 +
                   (ulonglong)*(ushort *)(lVar10 + lVar22) * 0x28);
      FUN_1403b34d6(local_98,&local_1a8,local_158);
      lVar22 = lVar22 + 2;
    } while ((longlong)iVar21 * 2 != lVar22);
  }
  iVar21 = local_70;
  if (local_70 == 0) {
    uVar9 = 1;
    uVar28 = 0;
    iVar8 = 0;
    iVar20 = 0;
  }
  else {
    puVar11 = local_78;
    if (local_78 == (uint *)0x0) {
      puVar11 = local_88;
    }
    uVar13 = *puVar11;
    if (uVar13 == 0) {
      iVar8 = local_70 + 0x1e;
      if (-1 < local_70 + -1) {
        iVar8 = local_70 + -1;
      }
      uVar28 = 0;
      uVar9 = (ulonglong)(uint)(iVar8 >> 5);
      if (iVar8 >> 5 < 1) {
        uVar9 = uVar28;
      }
      iVar20 = 0;
      do {
        if (uVar9 == uVar28) goto LAB_1403b3e70;
        iVar20 = iVar20 + 0x20;
        uVar13 = puVar11[uVar28 + 1];
        uVar28 = uVar28 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar28 = 0;
      iVar20 = 0;
    }
    uVar9 = (ulonglong)(-uVar13 & uVar13);
    uVar27 = uVar9 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar27 != 0) {
      for (; uVar27 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar8 = (iVar20 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    if (local_70 <= iVar8) {
      iVar8 = local_70;
    }
  }
  if (iVar8 != local_70) {
    uVar13 = 0xffffffff;
    do {
      (**(code **)(**(longlong **)(local_98[0] + (longlong)iVar8 * 0x10) + 0x2d8))();
      uVar13 = ~(uint)uVar9 & uVar13;
      puVar11 = local_78;
      if (local_78 == (uint *)0x0) {
        puVar11 = local_88;
      }
      iVar8 = (int)uVar28;
      lVar10 = (longlong)iVar8;
      uVar24 = puVar11[lVar10] & uVar13;
      if (uVar24 == 0) {
        iVar17 = local_70 + 0x1e;
        if (-1 < local_70 + -1) {
          iVar17 = local_70 + -1;
        }
        iVar17 = iVar17 >> 5;
        iVar20 = iVar20 + 0x20;
        iVar15 = iVar17;
        if (iVar17 < iVar8) {
          iVar15 = iVar8;
        }
        if (iVar8 < iVar17) {
          lVar22 = 0;
          do {
            uVar24 = puVar11[lVar10 + lVar22 + 1];
            if (uVar24 != 0) {
              uVar28 = (ulonglong)(iVar8 + (int)lVar22 + 1);
              uVar13 = 0xffffffff;
              goto LAB_1403b3e39;
            }
            iVar20 = iVar20 + 0x20;
            lVar22 = lVar22 + 1;
          } while (iVar15 - lVar10 != lVar22);
          uVar13 = 0xffffffff;
          iVar8 = iVar15;
        }
        uVar28 = (ulonglong)(iVar8 + 1);
        iVar8 = local_70;
      }
      else {
LAB_1403b3e39:
        uVar9 = (ulonglong)(-uVar24 & uVar24);
        uVar27 = uVar9 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar27 != 0) {
          for (; uVar27 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar8 = (iVar20 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
        if (local_70 <= iVar8) {
          iVar8 = local_70;
        }
      }
    } while (iVar8 != iVar21);
  }
LAB_1403b3e70:
  FUN_14009e37a(param_1 + 0x670,param_1);
  auVar5 = local_158;
  local_1c8 = 0;
  uStack_1c0 = 0;
  uVar3 = *(ushort *)(local_220 + 0x4a);
  iVar8 = uVar3 + 1;
  local_1b8._0_6_ =
       CONCAT24(*(undefined2 *)(local_220 + 0x12e),
                CONCAT22(*(undefined2 *)(local_220 + 0x130),*(undefined2 *)(local_220 + 0x11c)));
  local_158._2_2_ = *(undefined2 *)(local_220 + 0x48);
  local_158._0_2_ = uVar3;
  auVar6 = local_158;
  local_158._6_2_ = auVar5._6_2_;
  local_158._0_5_ = auVar6._0_5_;
  local_158[5] = 0;
  uStack_150 = CONCAT35(uStack_150._5_3_,0x6ff);
  local_148[8] = 0;
  local_148[9] = 0x100;
  uStack_100 = 0x10000000000;
  local_c8 = 0x10000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  local_a0 = 0x10000000000;
  iVar21 = iVar8;
  if (0xff < uVar3) {
    FUN_14497ddce(local_148,0);
    iVar21 = local_148[8] + iVar8;
  }
  iVar20 = iVar21 + 0x1f;
  if (-1 < iVar21) {
    iVar20 = iVar21;
  }
  local_148[8] = iVar21;
  if (iVar21 % 0x20 != 0) {
    bVar12 = -(char)(iVar21 % 0x20);
    local_148[iVar20 >> 5] = (local_148[iVar20 >> 5] << (bVar12 & 0x1f)) >> (bVar12 & 0x1f);
  }
  FUN_1447c45ca(local_148,0,iVar8,0);
  auVar5 = local_158;
  local_148[uVar3 >> 5] = local_148[uVar3 >> 5] | 1 << ((byte)uVar3 & 0x1f);
  uVar13 = local_148[8];
  uVar7 = local_158._2_2_;
  uVar24 = (ushort)local_158._2_2_ + 1;
  iVar21 = uVar24 - local_148[8];
  if (iVar21 != 0 && (int)local_148[8] <= (int)uVar24) {
    if (local_148[8] == 0) {
LAB_1403b3fc2:
      if ((int)local_148[9] <= (int)(uint)(ushort)local_158._2_2_) {
        local_148[9] = 0x100;
        FUN_14497ddce(local_148,local_148[8]);
        uVar24 = local_148[8] + iVar21;
      }
      iVar8 = uVar24 + 0x1f;
      if (-1 < (int)uVar24) {
        iVar8 = uVar24;
      }
      local_148[8] = uVar24;
      uVar24 = local_148[8];
      if ((int)uVar24 % 0x20 != 0) {
        bVar12 = -(char)((int)uVar24 % 0x20);
        local_148[iVar8 >> 5] = (local_148[iVar8 >> 5] << (bVar12 & 0x1f)) >> (bVar12 & 0x1f);
        uVar24 = local_148[8];
      }
    }
    else {
      iVar8 = local_148[8] + 0x1e;
      if (-1 < (int)(local_148[8] + -1)) {
        iVar8 = local_148[8] + -1;
      }
      if (iVar8 >> 5 != (uint)((ushort)local_158._2_2_ >> 5)) goto LAB_1403b3fc2;
    }
    local_148[8] = uVar24;
    FUN_1447c45ca(local_148,uVar13,iVar21,0);
  }
  local_148[(ushort)uVar7 >> 5] = local_148[(ushort)uVar7 >> 5] | 1 << (auVar5[2] & 0x1f);
  local_210 = CONCAT62(local_210._2_6_,uVar2);
  lVar10 = 0;
  do {
    uVar9 = uStack_100;
    uVar3 = *(ushort *)((longlong)&local_1b8 + lVar10);
    iVar21 = uVar3 + 1;
    iVar8 = iVar21 - (int)uStack_100;
    if (iVar8 != 0 && (int)uStack_100 <= iVar21) {
      if ((int)uStack_100 == 0) {
LAB_1403b406f:
        if (uStack_100._4_4_ <= (int)(uint)uVar3) {
          uStack_100 = CONCAT44(0x100,(int)uStack_100);
          FUN_14497ddce(&uStack_120,uVar9 & 0xffffffff);
          iVar21 = (int)uStack_100 + iVar8;
        }
        iVar20 = iVar21 + 0x1f;
        if (-1 < iVar21) {
          iVar20 = iVar21;
        }
        uStack_100 = CONCAT44(uStack_100._4_4_,iVar21);
        if (iVar21 % 0x20 != 0) {
          bVar12 = -(char)(iVar21 % 0x20);
          *(uint *)((longlong)&uStack_120 + (longlong)(iVar20 >> 5) * 4) =
               (uint)(*(int *)((longlong)&uStack_120 + (longlong)(iVar20 >> 5) * 4) <<
                     (bVar12 & 0x1f)) >> (bVar12 & 0x1f);
        }
      }
      else {
        iVar20 = (int)uStack_100 + 0x1e;
        if (-1 < (int)uStack_100 + -1) {
          iVar20 = (int)uStack_100 + -1;
        }
        if (iVar20 >> 5 != (uint)(uVar3 >> 5)) goto LAB_1403b406f;
        uStack_100 = CONCAT44(uStack_100._4_4_,iVar21);
      }
      FUN_1447c45ca(&uStack_120,uVar9 & 0xffffffff,iVar8,0);
    }
    plVar29 = local_218;
    puVar11 = (uint *)((longlong)&uStack_120 + (ulonglong)(uVar3 >> 5) * 4);
    *puVar11 = *puVar11 | 1 << ((byte)uVar3 & 0x1f);
    lVar10 = lVar10 + 2;
  } while (lVar10 != 6);
  if ((local_158._0_2_ != -1) && (local_158._2_2_ != -1)) {
    cVar1 = *(char *)(param_1 + 0x298);
    plStack_1a0 = local_218;
    if (cVar1 == '\0') {
      *(int *)(param_1 + 0x28c) = *(int *)(param_1 + 0x28c) + 1;
    }
    else {
      LOCK();
      *(int *)(param_1 + 0x28c) = *(int *)(param_1 + 0x28c) + 1;
      UNLOCK();
    }
    local_1a8 = local_148;
    local_198[0] = FUN_1403b8464(&local_1a8);
    iVar21 = *(int *)(param_1 + 0x38);
    while (local_198[0] != iVar21) {
      plVar29 = *(longlong **)(plStack_1a0[0xc] + (longlong)local_198[0] * 8);
      if (cVar1 == '\0') {
        *(undefined4 *)((longlong)plVar29 + 0x14) = 0;
        plVar19 = plVar29;
      }
      else {
        plVar19 = (longlong *)0x0;
      }
      if (*(ushort *)((longlong)plVar29 + 0xc) != 0) {
        plVar30 = (longlong *)plVar29[5];
        lVar10 = (ulonglong)*(ushort *)((longlong)plVar29 + 0xc) << 5;
        do {
          if (*(short *)((longlong)plVar30 + 0x1e) == local_158._2_2_) goto LAB_1403b46b2;
          plVar30 = plVar30 + 4;
          lVar10 = lVar10 + -0x20;
        } while (lVar10 != 0);
      }
      plVar30 = (longlong *)0x0;
LAB_1403b46b2:
      iVar8 = *(int *)((longlong)plVar29 + 0x14);
      if (iVar8 == 1) {
        AcquireSRWLockShared((PSRWLOCK)(plVar30 + 1));
      }
      LOCK();
      *(int *)(plVar30 + 3) = (int)plVar30[3] + 1;
      UNLOCK();
      if (*(ushort *)((longlong)plVar29 + 0xc) != 0) {
        plVar23 = (longlong *)plVar29[5];
        lVar10 = (ulonglong)*(ushort *)((longlong)plVar29 + 0xc) << 5;
        do {
          if (*(short *)((longlong)plVar23 + 0x1e) == local_158._0_2_) goto LAB_1403b46f3;
          plVar23 = plVar23 + 4;
          lVar10 = lVar10 + -0x20;
        } while (lVar10 != 0);
      }
      plVar23 = (longlong *)0x0;
LAB_1403b46f3:
      iVar20 = *(int *)((longlong)plVar29 + 0x14);
      lVar10 = *plVar30;
      if (iVar20 == 1) {
        local_208 = *plVar30;
        local_200 = iVar20;
        local_1f8 = plVar19;
        AcquireSRWLockShared((PSRWLOCK)(plVar23 + 1));
        plVar19 = local_1f8;
        lVar10 = local_208;
        iVar20 = local_200;
      }
      LOCK();
      *(int *)(plVar23 + 3) = (int)plVar23[3] + 1;
      UNLOCK();
      uVar3 = *(ushort *)((longlong)plVar29 + 0xe);
      if ((ulonglong)uVar3 != 0) {
        lVar22 = *plVar23;
        uVar9 = 0;
        do {
          if (*(longlong *)(lVar22 + uVar9 * 8) == 0) {
            local_1fa = *(undefined2 *)(lVar10 + uVar9 * 2);
            local_1d8 = (longlong)(int)uStack_1c0;
            uVar13 = (int)uStack_1c0 + 1;
            uStack_1c0 = CONCAT44(uStack_1c0._4_4_,uVar13);
            local_208 = lVar10;
            local_200 = iVar20;
            local_1f8 = plVar19;
            local_1dc = iVar8;
            local_1d0 = lVar22;
            if (uStack_1c0._4_4_ < uVar13) {
              FUN_1405e07ae(&local_1c8,local_1d8);
            }
            *(undefined2 *)(local_1c8 + local_1d8 * 2) = local_1fa;
            lVar22 = local_1d0;
            plVar19 = local_1f8;
            lVar10 = local_208;
            iVar20 = local_200;
            iVar8 = local_1dc;
          }
          uVar9 = uVar9 + 1;
        } while (uVar3 != uVar9);
      }
      if (plVar30 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar30 + 3) = (int)plVar30[3] + -1;
        UNLOCK();
        if (iVar8 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(plVar30 + 1));
        }
      }
      if (plVar23 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar23 + 3) = (int)plVar23[3] + -1;
        UNLOCK();
        if (iVar20 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(plVar23 + 1));
        }
      }
      plVar29 = local_218;
      if (plVar19 != (longlong *)0x0) {
        *(undefined4 *)((longlong)plVar19 + 0x14) = 1;
      }
      local_198[0] = FUN_1403b8464(&local_1a8);
    }
    if (local_1a8 != (uint *)0x0) {
      if ((char)plStack_1a0[0x4e] == '\0') {
        *(int *)((longlong)plStack_1a0 + 0x264) = *(int *)((longlong)plStack_1a0 + 0x264) + -1;
      }
      else {
        LOCK();
        *(int *)((longlong)plStack_1a0 + 0x264) = *(int *)((longlong)plStack_1a0 + 0x264) + -1;
        UNLOCK();
      }
    }
  }
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  lVar10 = local_1c8;
  lVar22 = (longlong)(int)uStack_1c0;
  if (lVar22 != 0) {
    lVar26 = 0;
    do {
      FUN_1405e0ab4(plVar29,*(undefined2 *)(lVar10 + lVar26),*(undefined2 *)(local_220 + 0x11e));
      lVar26 = lVar26 + 2;
    } while (lVar22 * 2 != lVar26);
  }
  local_1b0 = *(undefined2 *)(local_220 + 0x11a);
  local_1b8 = &PTR_FUN_14a474150;
  local_148[6] = 0;
  local_148[7] = 0;
  local_148[8] = 0;
  local_148[9] = 0;
  uStack_120 = 0;
  local_148[0] = 0;
  local_148[1] = 0;
  local_148[2] = 0;
  local_148[3] = 0;
  local_158 = (undefined1  [8])0x0;
  uStack_150 = 0;
  local_118 = 0;
  local_148[4] = 0;
  local_148[5] = 0x100;
  local_110 = 0x10000000000;
  local_108 = 0;
  uStack_100 = 0;
  local_1a8._0_4_ = CONCAT22((ushort)local_210,local_1b0);
  lVar10 = 0;
  do {
    uVar13 = local_148[4];
    uVar3 = *(ushort *)((longlong)&local_1a8 + lVar10);
    uVar24 = uVar3 + 1;
    iVar21 = uVar24 - local_148[4];
    if (iVar21 != 0 && (int)local_148[4] <= (int)uVar24) {
      if (local_148[4] == 0) {
LAB_1403b4251:
        if ((int)local_148[5] <= (int)(uint)uVar3) {
          local_148[5] = 0x100;
          FUN_14497ddce(local_158,local_148[4]);
          uVar24 = local_148[4] + iVar21;
        }
        iVar8 = uVar24 + 0x1f;
        if (-1 < (int)uVar24) {
          iVar8 = uVar24;
        }
        local_148[4] = uVar24;
        uVar24 = local_148[4];
        if ((int)uVar24 % 0x20 != 0) {
          bVar12 = -(char)((int)uVar24 % 0x20);
          *(uint *)(local_158 + (longlong)(iVar8 >> 5) * 4) =
               (uint)(*(int *)(local_158 + (longlong)(iVar8 >> 5) * 4) << (bVar12 & 0x1f)) >>
               (bVar12 & 0x1f);
          uVar24 = local_148[4];
        }
      }
      else {
        iVar8 = local_148[4] + 0x1e;
        if (-1 < (int)(local_148[4] + -1)) {
          iVar8 = local_148[4] + -1;
        }
        if (iVar8 >> 5 != (uint)(uVar3 >> 5)) goto LAB_1403b4251;
      }
      local_148[4] = uVar24;
      FUN_1447c45ca(local_158,uVar13,iVar21,0);
    }
    *(uint *)(local_158 + (ulonglong)(uVar3 >> 5) * 4) =
         *(uint *)(local_158 + (ulonglong)(uVar3 >> 5) * 4) | 1 << ((byte)uVar3 & 0x1f);
    lVar10 = lVar10 + 2;
  } while (lVar10 != 4);
  FUN_140857d6a(plVar29,local_158,&local_1b8);
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  local_188 = 0;
  local_180 = 0;
  local_1a8 = (uint *)0x0;
  plStack_1a0 = (longlong *)0x0;
  local_17c = 0x80;
  uStack_178 = 0xffffffff;
  local_174 = 0;
  local_168 = (undefined1 *)0x0;
  local_160 = 0;
  local_148[6] = 0;
  local_148[7] = 0;
  local_118 = 0;
  local_148[8] = 0;
  local_148[9] = 0;
  uStack_120 = 0;
  local_148[0] = 0;
  local_148[1] = 0;
  local_148[2] = 0;
  local_148[3] = 0;
  local_158 = (undefined1  [8])0x0;
  uStack_150 = 0;
  local_148[4] = 0;
  local_148[5] = 0x100;
  local_110 = 0x10000000000;
  iVar8 = uVar2 + 1;
  local_108 = 0;
  uStack_100 = 0;
  iVar21 = iVar8;
  if (0xff < (ushort)local_210) {
    FUN_14497ddce(local_158,0);
    iVar21 = local_148[4] + iVar8;
  }
  iVar20 = iVar21 + 0x1f;
  if (-1 < iVar21) {
    iVar20 = iVar21;
  }
  local_148[4] = iVar21;
  if (iVar21 % 0x20 != 0) {
    bVar12 = -(char)(iVar21 % 0x20);
    *(uint *)(local_158 + (longlong)(iVar20 >> 5) * 4) =
         (uint)(*(int *)(local_158 + (longlong)(iVar20 >> 5) * 4) << (bVar12 & 0x1f)) >>
         (bVar12 & 0x1f);
  }
  FUN_1447c45ca(local_158,0,iVar8);
  *(uint *)(local_158 + local_1f0 * 4) = *(uint *)(local_158 + local_1f0 * 4) | (uint)local_1e8;
  FUN_1403b5634(plVar29,local_158,&local_1a8);
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  if ((int)plStack_1a0 != local_174) {
    lVar10 = *(longlong *)(param_1 + 0x548);
    iVar21 = *(int *)(lVar10 + 0x30);
    if (iVar21 == 0) {
      uVar9 = 0;
      uVar28 = 1;
      iVar8 = 0;
      iVar20 = 0;
    }
    else {
      puVar11 = *(uint **)(lVar10 + 0x28);
      if (*(uint **)(lVar10 + 0x28) == (uint *)0x0) {
        puVar11 = (uint *)(lVar10 + 0x18);
      }
      uVar13 = *puVar11;
      if (uVar13 == 0) {
        iVar8 = iVar21 + 0x1e;
        if (-1 < iVar21 + -1) {
          iVar8 = iVar21 + -1;
        }
        uVar9 = 0;
        uVar28 = (ulonglong)(uint)(iVar8 >> 5);
        if (iVar8 >> 5 < 1) {
          uVar28 = uVar9;
        }
        iVar20 = 0;
        do {
          if (uVar28 == uVar9) goto LAB_1403b44b5;
          iVar20 = iVar20 + 0x20;
          uVar13 = puVar11[uVar9 + 1];
          uVar9 = uVar9 + 1;
        } while (uVar13 == 0);
      }
      else {
        uVar9 = 0;
        iVar20 = 0;
      }
      uVar28 = (ulonglong)(-uVar13 & uVar13);
      uVar27 = uVar28 * 2 + 1;
      lVar22 = 0x3f;
      if (uVar27 != 0) {
        for (; uVar27 >> lVar22 == 0; lVar22 = lVar22 + -1) {
        }
      }
      iVar8 = (iVar20 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
      if (iVar21 <= iVar8) {
        iVar8 = iVar21;
      }
    }
    if (iVar8 != iVar21) {
      uVar13 = 0xffffffff;
      do {
        local_218 = (longlong *)(*(longlong *)(lVar10 + 8) + (longlong)iVar8 * 0x128);
        uVar24 = *(uint *)(*(longlong *)(lVar10 + 8) + 8 + (longlong)iVar8 * 0x128);
        uVar27 = (longlong)(int)uVar24;
        if (0 < (longlong)(int)uVar24) {
          do {
            local_208 = CONCAT44(local_208._4_4_,uVar13);
            if ((int)plStack_1a0 != local_174) {
              _Dst = (ushort *)(*local_218 + uVar27 * 2 + -2);
              uVar2 = *_Dst;
              puVar25 = local_168;
              if (local_168 == (undefined1 *)0x0) {
                puVar25 = local_170;
              }
              for (uVar13 = *(uint *)(puVar25 + (ulonglong)(local_160 - 1U & (uint)uVar2) * 4);
                  uVar13 != 0xffffffff; uVar13 = local_1a8[(longlong)(int)uVar13 * 3 + 1]) {
                if ((ushort)local_1a8[(longlong)(int)uVar13 * 3] == uVar2) {
                  if (uVar27 != uVar24) {
                    iVar17 = uVar24 - (int)uVar27;
                    iVar8 = 1;
                    if (iVar17 < 1) {
                      iVar8 = iVar17;
                    }
                    memmove(_Dst,(void *)(*local_218 + (longlong)(int)(uVar24 - iVar8) * 2),
                            (longlong)iVar8 * 2);
                    uVar24 = *(uint *)(local_218 + 1);
                  }
                  uVar24 = uVar24 - 1;
                  *(uint *)(local_218 + 1) = uVar24;
                  break;
                }
              }
            }
            bVar4 = 1 < (longlong)uVar27;
            uVar27 = uVar27 - 1;
            uVar13 = (uint)local_208;
          } while (bVar4);
        }
        local_1e8 = (uint *)(local_218 + 4);
        iVar8 = (int)local_218[7];
        if (iVar8 == 0) {
          uVar27 = 1;
          local_210 = 0;
          iVar17 = 0;
          local_220 = (ulonglong)local_220._4_4_ << 0x20;
        }
        else {
          puVar11 = (uint *)local_218[6];
          if ((uint *)local_218[6] == (uint *)0x0) {
            puVar11 = local_1e8;
          }
          uVar24 = *puVar11;
          if (uVar24 == 0) {
            iVar17 = iVar8 + 0x1e;
            if (-1 < iVar8 + -1) {
              iVar17 = iVar8 + -1;
            }
            uVar27 = 0;
            uVar18 = (ulonglong)(uint)(iVar17 >> 5);
            if (iVar17 >> 5 < 1) {
              uVar18 = uVar27;
            }
            local_220 = local_220 & 0xffffffff00000000;
            do {
              if (uVar18 == uVar27) goto LAB_1403b4991;
              local_220 = CONCAT44(local_220._4_4_,(int)local_220 + 0x20);
              uVar24 = puVar11[uVar27 + 1];
              uVar27 = uVar27 + 1;
            } while (uVar24 == 0);
          }
          else {
            local_210 = 0;
            local_220 = (ulonglong)local_220._4_4_ << 0x20;
            uVar27 = local_210;
          }
          local_210 = uVar27;
          uVar27 = (ulonglong)(-uVar24 & uVar24);
          uVar18 = uVar27 * 2 + 1;
          lVar22 = 0x3f;
          if (uVar18 != 0) {
            for (; uVar18 >> lVar22 == 0; lVar22 = lVar22 + -1) {
            }
          }
          iVar17 = ((int)local_220 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
          if (iVar8 <= iVar17) {
            iVar17 = iVar8;
          }
        }
        if (iVar17 < iVar8) {
          local_1f8 = local_218 + 2;
          uVar24 = 0xffffffff;
          do {
            local_1f0 = CONCAT44(local_1f0._4_4_,uVar24);
            uVar2 = *(ushort *)(*local_1f8 + 0x10 + (longlong)iVar17 * 0x1c);
            if ((uVar2 != 0xffff) && ((int)plStack_1a0 != local_174)) {
              puVar25 = local_168;
              if (local_168 == (undefined1 *)0x0) {
                puVar25 = local_170;
              }
              for (uVar24 = *(uint *)(puVar25 + (ulonglong)(local_160 - 1U & (uint)uVar2) * 4);
                  uVar24 != 0xffffffff; uVar24 = local_1a8[(longlong)(int)uVar24 * 3 + 1]) {
                if ((ushort)local_1a8[(longlong)(int)uVar24 * 3] == uVar2) {
                  local_208 = CONCAT44(local_208._4_4_,uVar13);
                  FUN_1403b3472(local_1f8);
                  iVar8 = (int)local_218[7];
                  uVar13 = (uint)local_208;
                  break;
                }
              }
            }
            uVar24 = (uint)local_1f0 & ~(uint)uVar27;
            puVar11 = (uint *)local_218[6];
            if ((uint *)local_218[6] == (uint *)0x0) {
              puVar11 = local_1e8;
            }
            iVar17 = (int)local_210;
            lVar22 = (longlong)iVar17;
            uVar14 = puVar11[lVar22] & uVar24;
            if (uVar14 == 0) {
              iVar15 = iVar8 + 0x1e;
              if (-1 < iVar8 + -1) {
                iVar15 = iVar8 + -1;
              }
              iVar15 = iVar15 >> 5;
              iVar16 = iVar15;
              if (iVar15 < iVar17) {
                iVar16 = iVar17;
              }
              if (iVar15 <= iVar17) break;
              local_220 = CONCAT44(local_220._4_4_,(int)local_220 + 0x20);
              lVar26 = 0;
              while (uVar14 = puVar11[lVar22 + lVar26 + 1], uVar14 == 0) {
                local_220 = CONCAT44(local_220._4_4_,(int)local_220 + 0x20);
                lVar26 = lVar26 + 1;
                if (iVar16 - lVar22 == lVar26) goto LAB_1403b4991;
              }
              local_210 = (ulonglong)(iVar17 + (int)lVar26 + 1);
              uVar24 = 0xffffffff;
            }
            uVar27 = (ulonglong)(-uVar14 & uVar14);
            uVar18 = uVar27 * 2 + 1;
            lVar22 = 0x3f;
            if (uVar18 != 0) {
              for (; uVar18 >> lVar22 == 0; lVar22 = lVar22 + -1) {
              }
            }
            iVar17 = ((int)local_220 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
          } while (iVar17 < iVar8);
        }
LAB_1403b4991:
        uVar13 = uVar13 & ~(uint)uVar28;
        puVar11 = *(uint **)(lVar10 + 0x28);
        if (*(uint **)(lVar10 + 0x28) == (uint *)0x0) {
          puVar11 = (uint *)(lVar10 + 0x18);
        }
        iVar17 = *(int *)(lVar10 + 0x30);
        iVar8 = (int)uVar9;
        lVar22 = (longlong)iVar8;
        uVar24 = puVar11[lVar22] & uVar13;
        if (uVar24 == 0) {
          iVar15 = iVar17 + 0x1e;
          if (-1 < iVar17 + -1) {
            iVar15 = iVar17 + -1;
          }
          iVar15 = iVar15 >> 5;
          iVar20 = iVar20 + 0x20;
          iVar16 = iVar15;
          if (iVar15 < iVar8) {
            iVar16 = iVar8;
          }
          if (iVar8 < iVar15) {
            lVar26 = 0;
            do {
              uVar24 = puVar11[lVar22 + lVar26 + 1];
              if (uVar24 != 0) {
                uVar9 = (ulonglong)(iVar8 + (int)lVar26 + 1);
                uVar13 = 0xffffffff;
                goto LAB_1403b49fe;
              }
              iVar20 = iVar20 + 0x20;
              lVar26 = lVar26 + 1;
            } while (iVar16 - lVar22 != lVar26);
            uVar13 = 0xffffffff;
            iVar8 = iVar16;
          }
          uVar9 = (ulonglong)(iVar8 + 1);
          iVar8 = iVar17;
        }
        else {
LAB_1403b49fe:
          uVar28 = (ulonglong)(-uVar24 & uVar24);
          uVar27 = uVar28 * 2 + 1;
          lVar22 = 0x3f;
          if (uVar27 != 0) {
            for (; uVar27 >> lVar22 == 0; lVar22 = lVar22 + -1) {
            }
          }
          iVar8 = (iVar20 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
          if (iVar17 <= iVar8) {
            iVar8 = iVar17;
          }
        }
      } while (iVar8 != iVar21);
    }
  }
LAB_1403b44b5:
  uVar13 = *(uint *)(*(longlong *)(param_1 + 0x5d8) + 0x80);
  if ((uVar13 & 0x14) == 0 && (uVar13 & 0x1e0) != 0) {
    *(uint *)(*(longlong *)(param_1 + 0x5d8) + 0x80) = DAT_14c760fec & 0xfffffffb;
  }
  local_160 = 0;
  if (local_168 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar9 = (ulonglong)plStack_1a0 >> 0x20;
  plStack_1a0 = (longlong *)((ulonglong)plStack_1a0 & 0xffffffff00000000);
  if ((int)uVar9 != 0) {
    FUN_1447a08a2(&local_1a8,0);
  }
  uStack_178 = 0xffffffff;
  local_174 = 0;
  local_180 = 0;
  if (0x80 < local_17c) {
    local_17c = 0x80;
    FUN_1446efbd8(local_198,0);
  }
  if (local_188 != 0) {
    FUN_1400020a8();
  }
  if (local_1a8 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if (local_1c8 != 0) {
    FUN_1400020a8();
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1403b33fe(local_98);
LAB_1403b3be0:
  if ((local_48 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403b4e3c FUN_1403b4e3c body=291 status=ok
// SIG undefined FUN_1403b4e3c(void)

void FUN_1403b4e3c(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  if (*(int *)(param_1 + 0x100) < 1) {
    *(undefined1 *)(param_1 + 0x110) = 1;
  }
  else {
    lVar7 = 0;
    do {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xf8) + 0x10 + lVar7 * 0x18);
      if (plVar2 != (longlong *)0x0) {
        plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xf8) + 8 + lVar7 * 0x18);
        LOCK();
        *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
        UNLOCK();
        iVar6 = (int)plVar2[1];
        do {
          if (iVar6 == 0) goto LAB_1403b4edb;
          LOCK();
          iVar5 = (int)plVar2[1];
          bVar9 = iVar6 == iVar5;
          if (bVar9) {
            *(int *)(plVar2 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
        } while (!bVar9);
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x18))(plVar3,&local_38);
        }
        LOCK();
        plVar3 = plVar2 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar2)(plVar2);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
LAB_1403b4edb:
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
      lVar4 = local_38;
      lVar7 = lVar7 + 1;
    } while ((int)lVar7 < *(int *)(param_1 + 0x100));
    lVar7 = (longlong)(int)uStack_30;
    if (lVar7 != 0) {
      lVar8 = 0;
      do {
        FUN_1403b8f32(param_1,*(undefined4 *)(lVar4 + lVar8));
        lVar8 = lVar8 + 4;
      } while (lVar7 * 4 != lVar8);
    }
    *(undefined1 *)(param_1 + 0x110) = 1;
    if (local_38 != 0) {
      FUN_1400020a8(local_38);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403b4f60 FUN_1403b4f60 body=199 status=ok
// SIG undefined FUN_1403b4f60(void)

void FUN_1403b4f60(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_148 [40];
  undefined2 *local_120;
  undefined1 *local_118;
  longlong local_110 [2];
  undefined1 local_100;
  undefined2 local_f2;
  undefined1 local_f0 [2];
  undefined2 local_ee;
  undefined1 local_eb;
  undefined4 local_e8;
  undefined1 local_e4;
  undefined1 local_e0 [96];
  longlong local_80;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar1 = FUN_14009d2a0();
  local_110[1] = 0;
  local_100 = 0;
  local_ee = *(undefined2 *)(lVar1 + 0x58);
  local_eb = 0;
  local_e8 = 0x6ff;
  local_e4 = 0;
  local_f2 = *(undefined2 *)(lVar1 + 0x11c);
  local_120 = &local_f2;
  local_118 = local_f0;
  local_110[0] = param_1;
  FUN_1403b5028(local_f0,local_e0);
  FUN_1403b79be(local_e0,*(longlong *)(param_1 + 0x28) + 0x28,local_110);
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403b5028 FUN_1403b5028 body=253 status=ok
// SIG undefined FUN_1403b5028(void)

undefined8 * FUN_1403b5028(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  uint *puVar2;
  ushort uVar3;
  undefined8 uVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar4;
  puVar1 = param_2 + 2;
  param_2[6] = 0x10000000000;
  param_2[0xb] = 0x10000000000;
  param_2[0x12] = 0x10000000000;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0x17] = 0x10000000000;
  uVar3 = *(ushort *)((longlong)param_2 + 2);
  iVar8 = uVar3 + 1;
  iVar7 = iVar8;
  if (0xff < uVar3) {
    FUN_14497ddce(puVar1,0);
    iVar7 = *(int *)(param_2 + 6) + iVar8;
  }
  iVar5 = iVar7 + 0x1f;
  if (-1 < iVar7) {
    iVar5 = iVar7;
  }
  *(int *)(param_2 + 6) = iVar7;
  if (iVar7 % 0x20 != 0) {
    bVar6 = -(char)(iVar7 % 0x20);
    *(uint *)((longlong)puVar1 + (longlong)(iVar5 >> 5) * 4) =
         (uint)(*(int *)((longlong)puVar1 + (longlong)(iVar5 >> 5) * 4) << (bVar6 & 0x1f)) >>
         (bVar6 & 0x1f);
  }
  FUN_1447c45ca(puVar1,0,iVar8,0);
  puVar2 = (uint *)((longlong)puVar1 + (ulonglong)(uVar3 >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)uVar3 & 0x1f);
  local_48 = *param_3;
  uStack_44 = param_3[1];
  uStack_40 = param_3[2];
  uStack_3c = param_3[3];
  FUN_1403b5126(puVar1,&local_48,2);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403b5126 FUN_1403b5126 body=300 status=ok
// SIG undefined FUN_1403b5126(void)

longlong FUN_1403b5126(longlong param_1,longlong *param_2,undefined1 param_3)

{
  uint *puVar1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  longlong lVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  ushort *puVar11;
  
  if (param_2[1] != *param_2) {
    iVar3 = *(int *)(param_1 + 0x58);
    *(uint *)(param_1 + 0x58) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x5c) < iVar3 + 1U) {
      FUN_1403b5252((longlong *)(param_1 + 0x50),iVar3);
    }
    lVar10 = *(longlong *)(param_1 + 0x50);
    lVar5 = (longlong)iVar3 * 0x2c;
    *(undefined8 *)(lVar10 + 0x20 + lVar5) = 0x10000000000;
    *(undefined1 *)(lVar10 + 0x28 + lVar5) = param_3;
    puVar11 = (ushort *)*param_2;
    puVar4 = (ushort *)param_2[1];
    if (puVar11 != puVar4) {
      lVar10 = lVar10 + lVar5;
      do {
        uVar2 = *puVar11;
        iVar7 = uVar2 + 1;
        iVar3 = *(int *)(lVar10 + 0x20);
        iVar9 = iVar7 - iVar3;
        if (iVar9 != 0 && iVar3 <= iVar7) {
          if (iVar3 == 0) {
LAB_1403b51c7:
            if (*(int *)(lVar10 + 0x24) <= (int)(uint)uVar2) {
              *(undefined4 *)(lVar10 + 0x24) = 0x100;
              FUN_14497ddce(lVar10,iVar3);
              iVar7 = *(int *)(lVar10 + 0x20) + iVar9;
            }
            iVar8 = iVar7 + 0x1f;
            if (-1 < iVar7) {
              iVar8 = iVar7;
            }
            *(int *)(lVar10 + 0x20) = iVar7;
            if (iVar7 % 0x20 != 0) {
              bVar6 = -(char)(iVar7 % 0x20);
              *(uint *)(lVar10 + (longlong)(iVar8 >> 5) * 4) =
                   (uint)(*(int *)(lVar10 + (longlong)(iVar8 >> 5) * 4) << (bVar6 & 0x1f)) >>
                   (bVar6 & 0x1f);
            }
          }
          else {
            iVar8 = iVar3 + 0x1e;
            if (-1 < iVar3 + -1) {
              iVar8 = iVar3 + -1;
            }
            if (iVar8 >> 5 != (uint)(uVar2 >> 5)) goto LAB_1403b51c7;
            *(int *)(lVar10 + 0x20) = iVar7;
          }
          FUN_1447c45ca(lVar10,iVar3,iVar9,0);
        }
        puVar1 = (uint *)(lVar10 + (ulonglong)(uVar2 >> 5) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
        puVar11 = puVar11 + 1;
      } while (puVar11 != puVar4);
    }
  }
  return param_1;
}



// FUNCTION 1403b5252 FUN_1403b5252 body=366 status=ok
// SIG undefined FUN_1403b5252(void)

void FUN_1403b5252(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x2c;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1403b52d7;
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
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_1403b52d7:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x2c)) {
    uVar7 = uVar5 / 0x2c & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x2c,4);
  return;
}



// FUNCTION 1403b53c0 FUN_1403b53c0 body=627 status=ok
// SIG undefined FUN_1403b53c0(void)

void FUN_1403b53c0(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  uint *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 == 0) {
    uVar13 = 1;
    uVar15 = 0;
    iVar10 = 0;
    iVar5 = 0;
  }
  else {
    puVar7 = *(uint **)(param_1 + 0x38);
    if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
      puVar7 = (uint *)(param_1 + 0x28);
    }
    uVar14 = *puVar7;
    if (uVar14 == 0) {
      iVar10 = iVar1 + 0x1e;
      if (-1 < iVar1 + -1) {
        iVar10 = iVar1 + -1;
      }
      uVar15 = 0;
      uVar9 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar9 = uVar15;
      }
      iVar10 = 0;
      do {
        if (uVar9 == uVar15) {
          return;
        }
        iVar10 = iVar10 + 0x20;
        uVar14 = puVar7[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar15 = 0;
      iVar10 = 0;
    }
    uVar13 = (ulonglong)(-uVar14 & uVar14);
    uVar9 = uVar13 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar5 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar1 <= iVar5) {
      iVar5 = iVar1;
    }
  }
  if (iVar5 < iVar1) {
    uVar14 = 0xffffffff;
    do {
      lVar11 = *(longlong *)(param_1 + 0x18);
      lVar6 = (longlong)iVar5;
      iVar5 = *(int *)(lVar11 + 4 + lVar6 * 0x14);
      if (((((iVar5 == 0) || (uVar2 = *(uint *)(lVar11 + lVar6 * 0x14), (int)uVar2 < 0)) ||
           (DAT_14c9647dc <= (int)uVar2)) ||
          ((plVar12 = (longlong *)
                      ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
           plVar12 == (longlong *)0x0 || ((int)plVar12[2] != iVar5)))) ||
         (((*(uint *)(plVar12 + 1) & 0x10200000) != 0 ||
          ((lVar8 = *plVar12, lVar8 == 0 || ((*(uint *)(lVar8 + 8) >> 0x1e & 1) != 0)))))) {
LAB_1403b55c7:
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_1403b8dd0(param_2,(longlong)iVar1);
        }
        *(undefined4 *)(*param_2 + (longlong)iVar1 * 4) = *(undefined4 *)(lVar11 + lVar6 * 0x14 + 8)
        ;
        iVar1 = *(int *)(param_1 + 0x40);
      }
      else {
        uVar2 = *(uint *)(lVar8 + 0xc);
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar8 = 0;
        }
        if ((*(uint *)(lVar8 + 8) >> 0x1c & 1) != 0) goto LAB_1403b55c7;
      }
      uVar14 = uVar14 & ~(uint)uVar13;
      puVar7 = *(uint **)(param_1 + 0x38);
      if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
        puVar7 = (uint *)(param_1 + 0x28);
      }
      iVar5 = (int)uVar15;
      lVar11 = (longlong)iVar5;
      uVar2 = puVar7[lVar11] & uVar14;
      if (uVar2 == 0) {
        iVar3 = iVar1 + 0x1e;
        if (-1 < iVar1 + -1) {
          iVar3 = iVar1 + -1;
        }
        iVar3 = iVar3 >> 5;
        iVar4 = iVar3;
        if (iVar3 < iVar5) {
          iVar4 = iVar5;
        }
        if (iVar3 <= iVar5) {
          return;
        }
        lVar6 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar2 = puVar7[lVar11 + lVar6 + 1];
          if (uVar2 != 0) break;
          lVar6 = lVar6 + 1;
          if (iVar4 - lVar11 == lVar6) {
            return;
          }
        }
        uVar15 = (ulonglong)(iVar5 + (int)lVar6 + 1);
        uVar14 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar2 & uVar2);
      uVar9 = uVar13 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar5 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar5 < iVar1);
  }
  return;
}



// FUNCTION 1403b5634 FUN_1403b5634 body=577 status=ok
// SIG undefined FUN_1403b5634(void)

void FUN_1403b5634(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  iVar2 = *(int *)(param_1 + 0x30);
  local_80 = param_3;
  local_58 = param_1;
  if (iVar2 == 0) {
    uVar13 = 0;
    uVar14 = 1;
    iVar10 = 0;
    iVar9 = 0;
  }
  else {
    puVar7 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar7 = (uint *)(param_1 + 0x18);
    }
    uVar11 = *puVar7;
    if (uVar11 == 0) {
      iVar10 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar10 = iVar2 + -1;
      }
      uVar13 = 0;
      uVar14 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar14 = uVar13;
      }
      iVar9 = 0;
      do {
        if (uVar14 == uVar13) goto LAB_1403b581a;
        iVar9 = iVar9 + 0x20;
        uVar11 = puVar7[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar13 = 0;
      iVar9 = 0;
    }
    uVar14 = (ulonglong)(-uVar11 & uVar11);
    uVar1 = uVar14 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar10 = (iVar9 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar10) {
      iVar10 = iVar2;
    }
  }
  if (iVar10 < iVar2) {
    uVar11 = 0xffffffff;
    do {
      cVar3 = FUN_1403b852a(param_2,(longlong)iVar10 * 0x28 + *(longlong *)(param_1 + 8));
      uVar1 = uStack_70;
      if (cVar3 != '\0') {
        lVar12 = (longlong)(int)uStack_70;
        uVar4 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar4);
        local_88 = param_2;
        if (uStack_70._4_4_ < uVar4) {
          FUN_1446f48e2(&local_78,uVar1 & 0xffffffff);
        }
        *(int *)(local_78 + lVar12 * 4) = iVar10;
        param_2 = local_88;
      }
      uVar11 = uVar11 & ~(uint)uVar14;
      puVar7 = *(uint **)(param_1 + 0x28);
      if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
        puVar7 = (uint *)(param_1 + 0x18);
      }
      iVar2 = *(int *)(param_1 + 0x30);
      iVar10 = (int)uVar13;
      lVar12 = (longlong)iVar10;
      uVar4 = puVar7[lVar12] & uVar11;
      if (uVar4 == 0) {
        iVar5 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar5 = iVar2 + -1;
        }
        iVar5 = iVar5 >> 5;
        iVar6 = iVar5;
        if (iVar5 < iVar10) {
          iVar6 = iVar10;
        }
        if (iVar5 <= iVar10) break;
        lVar8 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar4 = puVar7[lVar12 + lVar8 + 1];
          if (uVar4 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar6 - lVar12 == lVar8) goto LAB_1403b581a;
        }
        uVar13 = (ulonglong)(iVar10 + (int)lVar8 + 1);
        uVar11 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar4 & uVar4);
      uVar1 = uVar14 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar10 = (iVar9 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar10 < iVar2);
  }
LAB_1403b581a:
  FUN_1403b5876(param_1,&local_78,local_80);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403b5876 FUN_1403b5876 body=3851 status=ok
// SIG undefined FUN_1403b5876(void)

void FUN_1403b5876(longlong param_1,undefined8 *param_2,uint *param_3)

{
  undefined8 *puVar1;
  ushort uVar2;
  short sVar3;
  ushort uVar4;
  ulonglong *puVar5;
  uint *puVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  uint *puVar12;
  void *_Src;
  byte bVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  longlong *plVar18;
  longlong lVar19;
  void *_Dst;
  longlong lVar20;
  longlong lVar21;
  int iVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  undefined1 auStack_1f8 [40];
  uint *local_1d0;
  longlong local_1c8;
  short local_1be;
  short local_1bc;
  undefined2 local_1ba;
  ulonglong local_1b8;
  longlong local_1b0;
  ulonglong local_1a8;
  longlong *local_1a0;
  ulonglong local_198;
  ulonglong local_190;
  longlong *local_188;
  int local_17c;
  uint local_178;
  int local_174;
  ulonglong local_170;
  longlong local_168;
  ulonglong local_160;
  uint *local_158;
  ulonglong local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  undefined8 local_130;
  undefined1 *local_128;
  undefined8 local_120;
  ulonglong local_118;
  int local_10c;
  longlong local_108;
  uint *local_100;
  longlong local_f8;
  ulonglong uStack_f0;
  uint local_e8 [4];
  uint *local_d8;
  uint local_d0;
  uint local_cc;
  undefined4 uStack_c8;
  int local_c4;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined1 local_90 [16];
  undefined1 *local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  if (*(int *)(param_2 + 1) != 0 || *(int *)(param_2 + 3) != 0) {
    local_170 = *(ulonglong *)(param_1 + 0x248);
    local_1b0 = param_1;
    local_158 = param_3;
    FUN_14009d2a0();
    local_d8 = (uint *)0x0;
    local_d0 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_cc = 0x80;
    uStack_c8 = 0xffffffff;
    local_c4 = 0;
    local_b8 = (undefined1 *)0x0;
    local_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_118 = FUN_14009d2a0();
    local_128 = local_90;
    local_70 = 0;
    local_68 = 0x1000000000;
    local_130 = param_2;
    local_120 = &local_f8;
    if ((longlong)*(int *)(param_2 + 1) != 0) {
      puVar12 = (uint *)*param_2;
      local_1d0 = puVar12 + *(int *)(param_2 + 1);
      do {
        uVar9 = *puVar12;
        lVar21 = *(longlong *)(*(longlong *)(param_2[4] + 0x60) + (longlong)(int)uVar9 * 8);
        FUN_1403b6b28(&local_f8,&local_108);
        puVar6 = local_100;
        *local_100 = uVar9;
        local_100[2] = 0;
        local_100[3] = 0;
        local_100[4] = 0;
        local_100[5] = 0;
        local_100[5] = 0;
        local_100[6] = 0;
        local_100[7] = 0;
        local_100[8] = 0;
        local_100[9] = 0x80;
        *(undefined1 *)(local_100 + 10) = 0;
        local_100[0xc] = 0xffffffff;
        local_10c = (int)local_108;
        cVar7 = FUN_1403b6a0e(&local_f8,uVar9,local_100,&local_10c);
        iVar16 = local_10c;
        if (cVar7 == '\0') {
          uVar8 = (int)uStack_f0 - local_c4;
          iVar22 = 1;
          if (3 < uVar8) {
            uVar23 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
            lVar19 = 0x3f;
            if (uVar23 != 0) {
              for (; uVar23 >> lVar19 == 0; lVar19 = lVar19 + -1) {
              }
            }
            iVar22 = 1 << ((byte)lVar19 & 0x1f);
          }
          if (((int)uVar8 < 1) || (iVar22 <= local_b0)) {
            uVar9 = local_b0 - 1U & uVar9;
            puVar6[0xd] = uVar9;
            puVar11 = local_b8;
            if (local_b8 == (undefined1 *)0x0) {
              puVar11 = local_c0;
            }
            puVar6[0xc] = *(uint *)(puVar11 + ((longlong)local_b0 - 1U & (longlong)(int)uVar9) * 4);
            puVar11 = local_b8;
            if (local_b8 == (undefined1 *)0x0) {
              puVar11 = local_c0;
            }
            *(int *)(puVar11 + ((longlong)local_b0 - 1U & (longlong)(int)uVar9) * 4) = local_10c;
          }
          else {
            local_b0 = iVar22;
            FUN_1403b7182(&local_f8);
          }
        }
        *(undefined1 *)(local_f8 + 0x28 + (longlong)iVar16 * 0x38) = 1;
        uVar2 = *(ushort *)(lVar21 + 0xe);
        if (uVar2 != 0) {
          lVar21 = *(longlong *)(lVar21 + 0x18);
          uVar23 = 0;
          do {
            FUN_1403b6d00(&local_130,*(undefined2 *)(lVar21 + uVar23));
            uVar23 = uVar23 + 2;
          } while ((uint)uVar2 * 2 != uVar23);
        }
        puVar12 = puVar12 + 1;
      } while (puVar12 != local_1d0);
    }
    iVar16 = *(int *)(param_2 + 3);
    if ((longlong)iVar16 != 0) {
      local_1d0 = (uint *)param_2[2];
      lVar21 = 0;
      do {
        uVar23 = uStack_a0;
        uVar2 = *(ushort *)((longlong)local_1d0 + lVar21);
        uVar24 = (ulonglong)uVar2;
        uVar4 = *(ushort *)(*(longlong *)(param_2[4] + 0x98) + uVar24 * 8);
        if (uVar4 == 0xffff) {
          lVar19 = (longlong)(int)uStack_a0;
          uVar9 = (int)uStack_a0 + 1;
          uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar9);
          if (uStack_a0._4_4_ < uVar9) {
            FUN_1405e07ae(&local_a8,uVar23 & 0xffffffff);
          }
          *(ushort *)(local_a8 + lVar19 * 2) = uVar2;
        }
        else {
          uVar2 = *(ushort *)(*(longlong *)(param_2[4] + 0x98) + 2 + uVar24 * 8);
          local_108 = CONCAT44(local_108._4_4_,(uint)uVar4);
          lVar19 = FUN_14179e0e6(&local_f8,uVar4,&local_108);
          if (*(char *)(lVar19 + 0x20) == '\0') {
            iVar22 = ((uint)uVar2 - *(int *)(lVar19 + 0x18)) + 1;
            if (0 < iVar22) {
              uVar10 = FUN_144a54ea4(lVar19,iVar22);
              FUN_1447c6044(lVar19,uVar10,iVar22,0);
            }
            if (*(longlong *)(lVar19 + 0x10) != 0) {
              lVar19 = *(longlong *)(lVar19 + 0x10);
            }
            puVar12 = (uint *)(lVar19 + (ulonglong)(uVar2 >> 5) * 4);
            *puVar12 = *puVar12 | 1 << ((byte)uVar2 & 0x1f);
          }
        }
        FUN_1403b6d00(&local_130,uVar24);
        lVar21 = lVar21 + 2;
      } while ((longlong)iVar16 * 2 != lVar21);
    }
    puVar12 = local_158;
    lVar21 = local_1b0;
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    lVar19 = local_a8;
    local_108 = lVar21;
    local_100 = puVar12;
    iVar16 = *(int *)(lVar21 + 0x160) - *(int *)(lVar21 + 0x18c);
    uVar23 = (ulonglong)(int)uStack_a0;
    if (uVar23 != 0) {
      lVar20 = 0;
      do {
        FUN_1432d4cf0(&local_108,*(undefined2 *)(lVar19 + lVar20));
        lVar20 = lVar20 + 2;
      } while (uVar23 * 2 != lVar20);
    }
    local_80 = (undefined1 *)0x0;
    local_78 = 0x8000000000;
    local_17c = iVar16;
    if (local_d0 == 0) {
      uVar25 = 1;
      uVar24 = 0;
      uVar9 = 0;
      iVar16 = 0;
    }
    else {
      puVar12 = local_d8;
      if (local_d8 == (uint *)0x0) {
        puVar12 = local_e8;
      }
      uVar9 = *puVar12;
      if (uVar9 == 0) {
        iVar16 = local_d0 + 0x1e;
        if (-1 < (int)(local_d0 - 1)) {
          iVar16 = local_d0 - 1;
        }
        uVar24 = 0;
        uVar25 = (ulonglong)(uint)(iVar16 >> 5);
        if (iVar16 >> 5 < 1) {
          uVar25 = uVar24;
        }
        iVar16 = 0;
        do {
          if (uVar25 == uVar24) goto LAB_1403b5e88;
          iVar16 = iVar16 + 0x20;
          uVar9 = puVar12[uVar24 + 1];
          uVar24 = uVar24 + 1;
        } while (uVar9 == 0);
      }
      else {
        uVar24 = 0;
        iVar16 = 0;
      }
      uVar25 = (ulonglong)(-uVar9 & uVar9);
      uVar26 = uVar25 * 2 + 1;
      lVar19 = 0x3f;
      if (uVar26 != 0) {
        for (; uVar26 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      uVar9 = (iVar16 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
      if ((int)local_d0 <= (int)uVar9) {
        uVar9 = local_d0;
      }
    }
    if (uVar9 != local_d0) {
      plVar18 = (longlong *)(lVar21 + 0x60);
      local_188 = (longlong *)(lVar21 + 0x98);
      local_168 = lVar21 + 0x40;
      local_140 = lVar21 + 8;
      local_1d0 = (uint *)(lVar21 + 0xd0);
      local_138 = lVar21 + 0x158;
      uVar8 = 0xffffffff;
      local_1a0 = plVar18;
      local_160 = (ulonglong)local_d0;
      do {
        lVar21 = local_f8;
        lVar19 = (longlong)(int)uVar9 * 0x38;
        iVar22 = *(int *)(local_f8 + lVar19);
        puVar5 = *(ulonglong **)(*plVar18 + (longlong)iVar22 * 8);
        uVar2 = *(ushort *)((longlong)puVar5 + 0xe);
        local_150 = puVar5[3];
        uVar9 = (uint)uVar2;
        local_178 = uVar8;
        local_174 = iVar16;
        if (*(char *)(local_f8 + 0x28 + lVar19) == '\x01') {
          local_1a8 = (ulonglong)((int)uVar23 + uVar9);
LAB_1403b5ca3:
          if ((ulonglong)uVar2 != 0) {
            uVar23 = 0;
            do {
              uVar2 = *(ushort *)(local_150 + uVar23);
              local_10c = CONCAT22(local_10c._2_2_,uVar2);
              sVar3 = *(short *)(*local_188 + 4 + (ulonglong)uVar2 * 8);
              if (sVar3 != -1) {
                local_130 = (undefined8 *)CONCAT62(local_130._2_6_,sVar3);
                FUN_1403b68b0(local_1d0,&local_130,&local_10c);
              }
              FUN_1403b6834(local_1d0,&local_10c);
              FUN_1403b6782(local_138,&local_10c);
              FUN_1403b67d4(local_188,(ulonglong)uVar2);
              if (local_158 != (uint *)0x0) {
                FUN_1403b73fc(local_158,&local_130,&local_10c);
              }
              uVar23 = uVar23 + 2;
            } while (uVar9 * 2 != uVar23);
          }
          lVar21 = local_1b0;
          FUN_14085836e(local_1b0,puVar5);
          plVar18 = local_1a0;
          FUN_14055d5b2(local_1a0,iVar22);
          FUN_14055d61a(local_140,iVar22);
          lVar19 = *(longlong *)(lVar21 + 0x50);
          if (lVar19 == 0) {
            lVar19 = local_168;
          }
          iVar16 = iVar22 + 0x1f;
          if (-1 < iVar22) {
            iVar16 = iVar22;
          }
          bVar13 = (byte)iVar22 & 0x1f;
          puVar12 = (uint *)(lVar19 + (longlong)(iVar16 >> 5) * 4);
          *puVar12 = *puVar12 & (-2 << bVar13 | 0xfffffffeU >> 0x20 - bVar13);
        }
        else {
          local_1c8 = local_f8 + lVar19 + 8;
          uVar8 = FUN_144b07aaa(local_1c8,0,0xffffffff);
          local_1a8 = (ulonglong)((int)uVar23 + uVar8);
          if (uVar8 == uVar9) goto LAB_1403b5ca3;
          uVar4 = *(ushort *)((longlong)puVar5 + 0xc);
          uVar23 = puVar5[5];
          uVar26 = *puVar5;
          if (*puVar5 < local_170) {
            uVar26 = local_170;
          }
          local_1be = *(short *)((longlong)puVar5 + 0xe);
          local_1bc = *(short *)((longlong)puVar5 + 0x12);
          *puVar5 = uVar26;
          if (uVar4 != 0) {
            lVar20 = 0;
            do {
              uVar26 = *(ulonglong *)(uVar23 + 0x10 + lVar20);
              if (uVar26 < local_170) {
                uVar26 = local_170;
              }
              *(ulonglong *)(uVar23 + 0x10 + lVar20) = uVar26;
              lVar20 = lVar20 + 0x20;
            } while ((ulonglong)uVar4 * 0x20 != lVar20);
          }
          uVar9 = *(uint *)(lVar21 + lVar19 + 0x20);
          local_198 = (ulonglong)uVar9;
          local_78 = CONCAT44(local_78._4_4_,uVar9 + 1);
          if (uVar9 < 0xffffffe0) {
            uVar9 = uVar9 + 0x20;
            uVar8 = uVar9 >> 5;
            if (local_78._4_4_ + 0x1fU >> 5 < uVar8) {
              FUN_14499171c(local_90,0,uVar8,4);
              local_78 = CONCAT44(uVar9,(int)local_78) & 0xffffffe0ffffffff;
            }
            puVar11 = local_80;
            if (local_80 == (undefined1 *)0x0) {
              puVar11 = local_90;
            }
            if (uVar9 < 0x120) {
              uVar8 = uVar9 >> 3 & 0x3c;
            }
            else {
              uVar8 = uVar8 << 2;
            }
            memset(puVar11,0,(ulonglong)uVar8);
            iVar16 = (int)local_78 + 0x1f;
            if (-1 < (int)local_78) {
              iVar16 = (int)local_78;
            }
            if ((int)local_78 % 0x20 != 0) {
              puVar11 = local_80;
              if (local_80 == (undefined1 *)0x0) {
                puVar11 = local_90;
              }
              bVar13 = -(char)((int)local_78 % 0x20);
              *(uint *)(puVar11 + (longlong)(iVar16 >> 5) * 4) =
                   (uint)(*(int *)(puVar11 + (longlong)(iVar16 >> 5) * 4) << (bVar13 & 0x1f)) >>
                   (bVar13 & 0x1f);
            }
          }
          local_130 = (undefined8 *)0x100000000;
          local_128 = (undefined1 *)local_1c8;
          local_120._0_4_ = 0xffffffff;
          local_120._4_4_ = 0;
          local_118 = local_118 & 0xffffffff00000000;
          if (*(int *)(lVar21 + lVar19 + 0x20) != 0) {
            FUN_1449c0562(&local_130);
            local_1c8 = (longlong)local_128;
          }
          while (local_120._4_4_ < *(int *)((longlong)local_128 + 0x18)) {
            iVar16 = (int)local_198 - local_120._4_4_;
            puVar11 = local_80;
            if (local_80 == (undefined1 *)0x0) {
              puVar11 = local_90;
            }
            iVar14 = iVar16 + 0x1f;
            if (-1 < iVar16) {
              iVar14 = iVar16;
            }
            *(uint *)(puVar11 + (longlong)(iVar14 >> 5) * 4) =
                 *(uint *)(puVar11 + (longlong)(iVar14 >> 5) * 4) | 1 << ((byte)iVar16 & 0x1f);
            local_120._0_4_ = (uint)local_120 & ~local_130._4_4_;
            FUN_1449c0562(&local_130);
          }
          local_130 = (undefined8 *)&DAT_100000000;
          local_128 = local_90;
          local_120 = (longlong *)&DAT_ffffffff;
          local_118 = local_118 & 0xffffffff00000000;
          if ((int)local_78 != 0) {
            FUN_1449c0562(&local_130);
            uVar23 = (ulonglong)uVar2;
            if (local_120._4_4_ < *(int *)(local_128 + 0x18)) {
              do {
                local_1b8 = uVar23;
                local_1b8 = local_1b8 - 1;
                iVar16 = (int)local_198 - local_120._4_4_;
                local_1c8 = CONCAT44(local_1c8._4_4_,iVar16);
                local_148 = (longlong)iVar16;
                local_1ba = *(undefined2 *)(local_150 + local_148 * 2);
                local_190 = (ulonglong)*(ushort *)((longlong)puVar5 + 0xc);
                if (local_190 != 0) {
                  uVar23 = puVar5[5];
                  local_190 = (ulonglong)*(ushort *)((longlong)puVar5 + 0xc) << 5;
                  uVar26 = 0;
                  do {
                    bVar13 = *(byte *)(uVar23 + 0x1c + uVar26);
                    if (bVar13 != 0) {
                      lVar21 = *(longlong *)(*(longlong *)(local_1b0 + 0x230) + 0x118);
                      lVar19 = (ulonglong)*(ushort *)(uVar23 + 0x1e + uVar26) * 0x10;
                      puVar1 = (undefined8 *)(lVar21 + lVar19);
                      _Dst = (void *)((longlong)(int)((uint)bVar13 * (int)local_1c8) +
                                     *(longlong *)(uVar23 + uVar26));
                      if ((*(byte *)(lVar21 + 10 + lVar19) & 2) == 0) {
                        (**(code **)(*(longlong *)*puVar1 + 0x10))((longlong *)*puVar1,_Dst,1);
                      }
                      if ((int)local_1c8 != (int)local_1b8) {
                        _Src = (void *)(*(byte *)(uVar23 + 0x1c + uVar26) * local_1b8 +
                                       *(longlong *)(uVar23 + uVar26));
                        if ((~*(byte *)((longlong)puVar1 + 10) & 6) == 0) {
                          memmove(_Dst,_Src,(ulonglong)*(byte *)(puVar1 + 1));
                        }
                        else {
                          (**(code **)(*(longlong *)*puVar1 + 0x20))
                                    ((longlong *)*puVar1,_Dst,_Src,1);
                        }
                      }
                    }
                    uVar26 = uVar26 + 0x20;
                  } while (local_190 != uVar26);
                }
                if ((int)local_1c8 != (int)local_1b8) {
                  *(undefined2 *)(puVar5[3] + local_148 * 2) =
                       *(undefined2 *)(puVar5[3] + local_1b8 * 2);
                  uVar23 = (ulonglong)*(ushort *)(puVar5[3] + local_148 * 2);
                  lVar21 = *local_188;
                  *(short *)(lVar21 + uVar23 * 8) = (short)iVar22;
                  *(short *)(lVar21 + 2 + uVar23 * 8) = (short)local_148;
                }
                *(undefined2 *)(puVar5[3] + local_1b8 * 2) = 0xffff;
                *(short *)((longlong)puVar5 + 0xe) = *(short *)((longlong)puVar5 + 0xe) + -1;
                FUN_1432d4cf0(&local_108,local_1ba);
                local_120 = (longlong *)CONCAT44(local_120._4_4_,(uint)local_120 & ~local_130._4_4_)
                ;
                FUN_1449c0562(&local_130);
                uVar23 = local_1b8;
              } while (local_120._4_4_ < *(int *)(local_128 + 0x18));
            }
          }
          plVar18 = local_1a0;
          lVar21 = local_1b0;
          if (local_1be == local_1bc) {
            lVar19 = *(longlong *)(local_1b0 + 0x50);
            if (*(longlong *)(local_1b0 + 0x50) == 0) {
              lVar19 = local_168;
            }
            iVar16 = iVar22 + 0x1f;
            if (-1 < iVar22) {
              iVar16 = iVar22;
            }
            puVar12 = (uint *)(lVar19 + (longlong)(iVar16 >> 5) * 4);
            *puVar12 = *puVar12 | 1 << ((byte)iVar22 & 0x1f);
          }
        }
        uVar8 = local_178 & ~(uint)uVar25;
        puVar12 = local_d8;
        if (local_d8 == (uint *)0x0) {
          puVar12 = local_e8;
        }
        iVar22 = (int)uVar24;
        lVar19 = (longlong)iVar22;
        uVar9 = puVar12[lVar19] & uVar8;
        iVar16 = local_174;
        if (uVar9 == 0) {
          iVar14 = local_d0 + 0x1e;
          if (-1 < (int)(local_d0 - 1)) {
            iVar14 = local_d0 - 1;
          }
          iVar14 = iVar14 >> 5;
          iVar16 = local_174 + 0x20;
          iVar15 = iVar14;
          if (iVar14 < iVar22) {
            iVar15 = iVar22;
          }
          if (iVar22 < iVar14) {
            lVar20 = 0;
            do {
              uVar9 = puVar12[lVar19 + lVar20 + 1];
              if (uVar9 != 0) {
                uVar24 = (ulonglong)(iVar22 + (int)lVar20 + 1);
                uVar8 = 0xffffffff;
                goto LAB_1403b5e45;
              }
              iVar16 = iVar16 + 0x20;
              lVar20 = lVar20 + 1;
            } while (iVar15 - lVar19 != lVar20);
            uVar8 = 0xffffffff;
            iVar22 = iVar15;
          }
          uVar24 = (ulonglong)(iVar22 + 1);
          plVar18 = local_1a0;
          lVar21 = local_1b0;
          uVar9 = local_d0;
        }
        else {
LAB_1403b5e45:
          uVar25 = (ulonglong)(-uVar9 & uVar9);
          uVar23 = uVar25 * 2 + 1;
          lVar19 = 0x3f;
          if (uVar23 != 0) {
            for (; uVar23 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          uVar9 = (iVar16 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
          if ((int)local_d0 <= (int)uVar9) {
            uVar9 = local_d0;
          }
        }
        uVar23 = local_1a8;
      } while (uVar9 != (uint)local_160);
    }
LAB_1403b5e88:
    if (local_17c != *(int *)(lVar21 + 0x160) - *(int *)(lVar21 + 0x18c)) {
      *(undefined1 *)(lVar21 + 0x260) = 1;
    }
    *(undefined8 *)(lVar21 + 0x250) = *(undefined8 *)(lVar21 + 0x248);
    *(undefined1 *)(lVar21 + 0x261) = 1;
    if (local_80 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    local_b0 = 0;
    if (local_b8 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (local_d0 == 0) {
      uVar24 = 0;
      uVar23 = 1;
      uVar9 = 0;
      iVar16 = 0;
    }
    else {
      puVar12 = local_d8;
      if (local_d8 == (uint *)0x0) {
        puVar12 = local_e8;
      }
      uVar9 = *puVar12;
      if (uVar9 == 0) {
        iVar16 = local_d0 + 0x1e;
        if (-1 < (int)(local_d0 - 1)) {
          iVar16 = local_d0 - 1;
        }
        uVar24 = 0;
        uVar23 = (ulonglong)(uint)(iVar16 >> 5);
        if (iVar16 >> 5 < 1) {
          uVar23 = uVar24;
        }
        iVar16 = 0;
        do {
          if (uVar23 == uVar24) goto LAB_1403b6023;
          iVar16 = iVar16 + 0x20;
          uVar9 = puVar12[uVar24 + 1];
          uVar24 = uVar24 + 1;
        } while (uVar9 == 0);
      }
      else {
        uVar24 = 0;
        iVar16 = 0;
      }
      uVar23 = (ulonglong)(-uVar9 & uVar9);
      uVar25 = uVar23 * 2 + 1;
      lVar21 = 0x3f;
      if (uVar25 != 0) {
        for (; uVar25 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      uVar9 = (iVar16 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
      if ((int)local_d0 <= (int)uVar9) {
        uVar9 = local_d0;
      }
    }
    if ((int)uVar9 < (int)local_d0) {
      uVar17 = 0xffffffff;
      uVar8 = local_d0;
      do {
        if (*(longlong *)(local_f8 + 0x18 + (longlong)(int)uVar9 * 0x38) != 0) {
          FUN_1400020a8();
          uVar8 = local_d0;
        }
        uVar17 = uVar17 & ~(uint)uVar23;
        puVar12 = local_d8;
        if (local_d8 == (uint *)0x0) {
          puVar12 = local_e8;
        }
        iVar22 = (int)uVar24;
        lVar21 = (longlong)iVar22;
        uVar9 = puVar12[lVar21] & uVar17;
        if (uVar9 == 0) {
          iVar14 = uVar8 + 0x1e;
          if (-1 < (int)(uVar8 - 1)) {
            iVar14 = uVar8 - 1;
          }
          iVar14 = iVar14 >> 5;
          iVar15 = iVar14;
          if (iVar14 < iVar22) {
            iVar15 = iVar22;
          }
          if (iVar14 <= iVar22) break;
          lVar19 = 0;
          while( true ) {
            iVar16 = iVar16 + 0x20;
            uVar9 = puVar12[lVar21 + lVar19 + 1];
            if (uVar9 != 0) break;
            lVar19 = lVar19 + 1;
            if (iVar15 - lVar21 == lVar19) goto LAB_1403b6023;
          }
          uVar24 = (ulonglong)(iVar22 + (int)lVar19 + 1);
          uVar17 = 0xffffffff;
        }
        uVar23 = (ulonglong)(-uVar9 & uVar9);
        uVar25 = uVar23 * 2 + 1;
        lVar21 = 0x3f;
        if (uVar25 != 0) {
          for (; uVar25 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        uVar9 = (iVar16 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
      } while ((int)uVar9 < (int)uVar8);
    }
LAB_1403b6023:
    uVar23 = uStack_f0 >> 0x20;
    uStack_f0 = uStack_f0 & 0xffffffff00000000;
    if ((int)uVar23 != 0) {
      FUN_144748838(&local_f8,0);
    }
    uStack_c8 = 0xffffffff;
    local_c4 = 0;
    local_d0 = 0;
    if (0x80 < local_cc) {
      local_cc = 0x80;
      FUN_1446efbd8(local_e8,0);
    }
    if (local_d8 != (uint *)0x0) {
      FUN_1400020a8();
    }
    if (local_f8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403b6782 FUN_1403b6782 body=82 status=ok
// SIG undefined FUN_1403b6782(void)

void FUN_1403b6782(longlong *param_1,ushort *param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & (uint)*param_2) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ushort *)(*param_1 + (longlong)iVar1 * 0x10) == *param_2) {
          FUN_147548a44();
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x10 + *param_1 + 8);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 1403b67d4 FUN_1403b67d4 body=95 status=ok
// SIG undefined FUN_1403b67d4(void)

void FUN_1403b67d4(longlong *param_1,uint param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(uint *)(lVar2 + (longlong)(int)param_1[6] * 8) = param_2;
  }
  *(undefined4 *)(lVar2 + (ulonglong)param_2 * 8) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + 4 + (ulonglong)param_2 * 8) = uVar5;
  *(uint *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (ulonglong)(param_2 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1403b6834 FUN_1403b6834 body=123 status=ok
// SIG undefined FUN_1403b6834(void)

void FUN_1403b6834(longlong *param_1,ushort *param_2)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int *piVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    uVar3 = (ulonglong)((int)param_1[9] - 1U & (uint)*param_2);
    iVar1 = *(int *)((longlong)plVar2 + uVar3 * 4);
    if (iVar1 != -1) {
      piVar4 = (int *)((longlong)plVar2 + uVar3 * 4);
      do {
        if (*(ushort *)(*param_1 + (longlong)iVar1 * 0xc) == *param_2) {
          FUN_1403b694e(param_1);
        }
        else {
          piVar4 = (int *)(*param_1 + (longlong)iVar1 * 0xc + 4);
        }
        iVar1 = *piVar4;
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 1403b68b0 FUN_1403b68b0 body=157 status=ok
// SIG undefined FUN_1403b68b0(void)

void FUN_1403b68b0(longlong *param_1,ushort *param_2,short *param_3)

{
  ushort uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  
  if ((int)param_1[9] != 0) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    uVar1 = *param_2;
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & (uint)uVar1) * 4);
    while (iVar5 = iVar4, iVar5 != -1) {
      lVar2 = *param_1;
      iVar4 = *(int *)(lVar2 + 4 + (longlong)iVar5 * 0xc);
      if (*(ushort *)(lVar2 + (longlong)iVar5 * 0xc) == uVar1) {
        do {
          if (*(short *)(lVar2 + 2 + (longlong)iVar5 * 0xc) == *param_3) {
            FUN_1403b694e(param_1);
            uVar1 = *param_2;
          }
          do {
            iVar5 = iVar4;
            if (iVar5 == -1) {
              return;
            }
            lVar2 = *param_1;
            iVar4 = *(int *)(lVar2 + 4 + (longlong)iVar5 * 0xc);
          } while (*(ushort *)(lVar2 + (longlong)iVar5 * 0xc) != uVar1);
        } while( true );
      }
    }
  }
  return;
}



// FUNCTION 1403b694e FUN_1403b694e body=191 status=ok
// SIG undefined FUN_1403b694e(void)

void FUN_1403b694e(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  uint *puVar3;
  byte bVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = *param_1 + (longlong)param_2 * 0xc;
  lVar6 = (longlong)*(int *)(lVar1 + 8);
  iVar8 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar8 == param_2) {
    piVar9 = (int *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      piVar9 = (int *)(*param_1 + (longlong)iVar8 * 0xc + 4);
      iVar8 = *piVar9;
    } while (iVar8 != param_2);
  }
  *piVar9 = *(int *)(lVar1 + 4);
  lVar1 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar1 + (longlong)(int)param_1[6] * 0xc) = param_2;
  }
  puVar2 = (undefined4 *)(lVar1 + (longlong)param_2 * 0xc);
  *puVar2 = 0xffffffff;
  uVar7 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar7 = (undefined4)param_1[6];
  }
  puVar2[1] = uVar7;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar8 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar8 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar3 = (uint *)((longlong)plVar5 + (longlong)(iVar8 >> 5) * 4);
  *puVar3 = *puVar3 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 1403b6a0e FUN_1403b6a0e body=282 status=ok
// SIG undefined FUN_1403b6a0e(void)

undefined8 FUN_1403b6a0e(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  undefined8 *puVar1;
  uint *puVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar11 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar11 = (longlong *)param_1[8];
    }
    iVar14 = *(int *)((longlong)plVar11 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar14 != -1) {
      do {
        puVar1 = (undefined8 *)(*param_1 + (longlong)iVar14 * 0x38);
        if (*(int *)(*param_1 + (longlong)iVar14 * 0x38) == *param_3) {
          if (puVar1[3] != 0) {
            FUN_1400020a8();
          }
          uVar6 = *(undefined8 *)param_3;
          uVar7 = *(undefined8 *)(param_3 + 2);
          uVar8 = *(undefined8 *)(param_3 + 4);
          uVar9 = *(undefined8 *)(param_3 + 6);
          uVar10 = *(undefined8 *)(param_3 + 10);
          puVar1[4] = *(undefined8 *)(param_3 + 8);
          puVar1[5] = uVar10;
          puVar1[2] = uVar8;
          puVar1[3] = uVar9;
          *puVar1 = uVar6;
          puVar1[1] = uVar7;
          iVar3 = *param_4;
          lVar4 = *param_1;
          if (*(int *)((longlong)param_1 + 0x34) != 0) {
            *(int *)(lVar4 + (longlong)(int)param_1[6] * 0x38) = iVar3;
          }
          *(undefined4 *)(lVar4 + (longlong)iVar3 * 0x38) = 0xffffffff;
          uVar12 = 0xffffffff;
          if (0 < *(int *)((longlong)param_1 + 0x34)) {
            uVar12 = (undefined4)param_1[6];
          }
          *(undefined4 *)(lVar4 + (longlong)iVar3 * 0x38 + 4) = uVar12;
          *(int *)(param_1 + 6) = iVar3;
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
          plVar11 = param_1 + 2;
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar11 = (longlong *)param_1[4];
          }
          iVar13 = iVar3 + 0x1f;
          if (-1 < iVar3) {
            iVar13 = iVar3;
          }
          bVar5 = (byte)iVar3 & 0x1f;
          puVar2 = (uint *)((longlong)plVar11 + (longlong)(iVar13 >> 5) * 4);
          *puVar2 = *puVar2 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
          *param_4 = iVar14;
          return CONCAT71((int7)((ulonglong)plVar11 >> 8),1);
        }
        iVar14 = *(int *)(puVar1 + 6);
      } while (iVar14 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1403b6b28 FUN_1403b6b28 body=472 status=ok
// SIG undefined FUN_1403b6b28(void)

int * FUN_1403b6b28(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_1447030e2(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar2 = iVar6 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar2 = iVar6;
        }
        else {
          uVar13 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar4 = FUN_144a3809e(uVar7 << 2,0);
          iVar2 = (int)(uVar4 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar2) {
            iVar8 = iVar2 << 5;
          }
          iVar2 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar2);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar2 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar2 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar5 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar5 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar3 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x38);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x38) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar6 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar6 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar3 * 0x38 + *param_1;
  return param_2;
}



// FUNCTION 1403b6d00 FUN_1403b6d00 body=1153 status=ok
// SIG undefined FUN_1403b6d00(void)

void FUN_1403b6d00(longlong *param_1,ushort param_2)

{
  uint *puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  void *_Dst;
  int iVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  void *pvVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  undefined1 auStack_98 [32];
  longlong *local_78;
  uint local_6c;
  ulonglong local_68;
  longlong local_60;
  ulonglong local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar17 = *param_1;
  lVar7 = *(longlong *)(lVar17 + 0x20);
  local_78 = param_1;
  if (*(int *)(lVar7 + 0x118) != 0) {
    lVar13 = lVar7 + 0x108;
    if (*(longlong *)(lVar7 + 0x110) != 0) {
      lVar13 = *(longlong *)(lVar7 + 0x110);
    }
    iVar15 = *(int *)(lVar13 + (ulonglong)(*(int *)(lVar7 + 0x118) - 1U & (uint)param_2) * 4);
    while (iVar11 = iVar15, iVar11 != -1) {
      lVar13 = *(longlong *)(lVar7 + 0xd0);
      iVar15 = *(int *)(lVar13 + 4 + (longlong)iVar11 * 0xc);
      if (*(ushort *)(lVar13 + (longlong)iVar11 * 0xc) == param_2) {
        do {
          lVar8 = param_1[1];
          iVar16 = *(int *)(lVar8 + 0x28);
          *(uint *)(lVar8 + 0x28) = iVar16 + 1U;
          if (*(uint *)(lVar8 + 0x2c) < iVar16 + 1U) {
            FUN_147548954(lVar8,iVar16);
            param_1 = local_78;
          }
          lVar6 = *(longlong *)(lVar8 + 0x20);
          if (*(longlong *)(lVar8 + 0x20) == 0) {
            lVar6 = lVar8;
          }
          *(undefined2 *)(lVar6 + (longlong)iVar16 * 2) =
               *(undefined2 *)(lVar13 + (longlong)iVar11 * 0xc + 2);
          do {
            iVar11 = iVar15;
            if (iVar11 == -1) goto LAB_1403b6df0;
            lVar13 = *(longlong *)(lVar7 + 0xd0);
            iVar15 = *(int *)(lVar13 + 4 + (longlong)iVar11 * 0xc);
          } while (*(ushort *)(lVar13 + (longlong)iVar11 * 0xc) != param_2);
        } while( true );
      }
    }
  }
LAB_1403b6df0:
  pvVar18 = (void *)param_1[1];
  uVar19 = *(uint *)((longlong)pvVar18 + 0x28);
  lVar7 = lVar17;
  do {
    if (uVar19 == 0) {
      if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    local_60 = lVar7;
    if (0 < (int)uVar19) {
      local_58 = (ulonglong)uVar19;
      uVar21 = 0;
      local_6c = uVar19;
      do {
        lVar7 = *(longlong *)(param_1[1] + 0x20);
        if (lVar7 == 0) {
          lVar7 = param_1[1];
        }
        uVar2 = *(ushort *)(lVar7 + uVar21 * 2);
        lVar7 = *(longlong *)(*(longlong *)(lVar17 + 0x20) + 0x98);
        uVar3 = *(ushort *)(lVar7 + (ulonglong)uVar2 * 8);
        if (uVar3 == 0xffff) {
          lVar7 = param_1[2];
          iVar15 = *(int *)(lVar7 + 0x58);
          *(uint *)(lVar7 + 0x58) = iVar15 + 1U;
          if (*(uint *)(lVar7 + 0x5c) < iVar15 + 1U) {
            FUN_1405e07ae((longlong *)(lVar7 + 0x50),iVar15);
          }
          *(ushort *)(*(longlong *)(lVar7 + 0x50) + (longlong)iVar15 * 2) = uVar2;
        }
        else {
          uVar4 = *(ushort *)(lVar7 + 2 + (ulonglong)uVar2 * 8);
          uVar19 = (uint)uVar4;
          local_4c = (uint)uVar3;
          lVar7 = FUN_14179e0e6(param_1[2],uVar3,&local_4c);
          if (*(char *)(lVar7 + 0x20) == '\0') {
            iVar11 = uVar4 + 1;
            iVar15 = *(int *)(lVar7 + 0x18);
            iVar16 = iVar11 - iVar15;
            if (iVar16 != 0 && iVar15 <= iVar11) {
              if (iVar15 == 0) {
LAB_1403b6fe1:
                if (*(int *)(lVar7 + 0x1c) <= (int)uVar19) {
                  iVar11 = iVar15;
                  if (uVar19 < 0x80) {
                    iVar14 = 0x80;
                  }
                  else {
                    uVar19 = uVar19 + 0x20 >> 5;
                    if (*(int *)(lVar7 + 0x1c) + 0x1fU < 0xa0) {
                      uVar9 = 4;
                      if (4 < uVar19) {
                        uVar9 = (ulonglong)uVar19;
                      }
                    }
                    else {
                      uVar9 = (ulonglong)(uVar19 * 3 >> 3) + (ulonglong)uVar19 + 0x10;
                    }
                    uVar9 = uVar9 * 4;
                    if (DAT_14c872d28 != (longlong *)0x0) {
                      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                        uVar9 = (ulonglong)
                                (ushort)(&DAT_14c841d90)
                                        [0x32 - (byte)(&DAT_14c841e00)[uVar9 + 0xf >> 4]];
                      }
                      else {
                        local_68 = (ulonglong)uVar19;
                        uVar9 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar9,0);
                        uVar19 = (uint)local_68;
                        iVar11 = *(int *)(lVar7 + 0x18);
                      }
                    }
                    iVar5 = (int)(uVar9 >> 2);
                    iVar14 = iVar5 << 5;
                    if (iVar5 < (int)uVar19) {
                      iVar14 = -0x20;
                    }
                  }
                  *(int *)(lVar7 + 0x1c) = iVar14;
                  FUN_1446efbd8(lVar7,iVar11);
                  iVar11 = *(int *)(lVar7 + 0x18) + iVar16;
                }
                iVar14 = iVar11 + 0x1f;
                if (-1 < iVar11) {
                  iVar14 = iVar11;
                }
                *(int *)(lVar7 + 0x18) = iVar11;
                if (iVar11 % 0x20 != 0) {
                  lVar13 = *(longlong *)(lVar7 + 0x10);
                  if (*(longlong *)(lVar7 + 0x10) == 0) {
                    lVar13 = lVar7;
                  }
                  bVar10 = -(char)(iVar11 % 0x20);
                  *(uint *)(lVar13 + (longlong)(iVar14 >> 5) * 4) =
                       (uint)(*(int *)(lVar13 + (longlong)(iVar14 >> 5) * 4) << (bVar10 & 0x1f)) >>
                       (bVar10 & 0x1f);
                }
              }
              else {
                iVar14 = iVar15 + 0x1e;
                if (-1 < iVar15 + -1) {
                  iVar14 = iVar15 + -1;
                }
                if (iVar14 >> 5 != (uint)(uVar4 >> 5)) goto LAB_1403b6fe1;
                *(int *)(lVar7 + 0x18) = iVar11;
              }
              FUN_1447c6044(lVar7,iVar15,iVar16,0);
            }
            if (*(longlong *)(lVar7 + 0x10) != 0) {
              lVar7 = *(longlong *)(lVar7 + 0x10);
            }
            puVar1 = (uint *)(lVar7 + (ulonglong)(uVar4 >> 5) * 4);
            *puVar1 = *puVar1 | 1 << ((byte)uVar4 & 0x1f);
          }
        }
        lVar17 = *(longlong *)(lVar17 + 0x20);
        param_1 = local_78;
        if (*(int *)(lVar17 + 0x118) != 0) {
          lVar7 = lVar17 + 0x108;
          if (*(longlong *)(lVar17 + 0x110) != 0) {
            lVar7 = *(longlong *)(lVar17 + 0x110);
          }
          iVar15 = *(int *)(lVar7 + (ulonglong)(*(int *)(lVar17 + 0x118) - 1U & (uint)uVar2) * 4);
          while (iVar11 = iVar15, iVar11 != -1) {
            lVar7 = *(longlong *)(lVar17 + 0xd0);
            iVar15 = *(int *)(lVar7 + 4 + (longlong)iVar11 * 0xc);
            if (*(ushort *)(lVar7 + (longlong)iVar11 * 0xc) == uVar2) {
              do {
                lVar13 = param_1[1];
                iVar16 = *(int *)(lVar13 + 0x28);
                *(uint *)(lVar13 + 0x28) = iVar16 + 1U;
                if (*(uint *)(lVar13 + 0x2c) < iVar16 + 1U) {
                  FUN_147548954(lVar13,iVar16);
                  param_1 = local_78;
                }
                lVar8 = *(longlong *)(lVar13 + 0x20);
                if (*(longlong *)(lVar13 + 0x20) == 0) {
                  lVar8 = lVar13;
                }
                *(undefined2 *)(lVar8 + (longlong)iVar16 * 2) =
                     *(undefined2 *)(lVar7 + (longlong)iVar11 * 0xc + 2);
                do {
                  iVar11 = iVar15;
                  if (iVar11 == -1) goto LAB_1403b6fc9;
                  lVar7 = *(longlong *)(lVar17 + 0xd0);
                  iVar15 = *(int *)(lVar7 + 4 + (longlong)iVar11 * 0xc);
                } while (*(ushort *)(lVar7 + (longlong)iVar11 * 0xc) != uVar2);
              } while( true );
            }
          }
        }
LAB_1403b6fc9:
        uVar21 = uVar21 + 1;
        lVar17 = local_60;
      } while (uVar21 != local_58);
      pvVar18 = (void *)param_1[1];
      uVar19 = local_6c;
    }
    uVar12 = *(int *)((longlong)pvVar18 + 0x28) - uVar19;
    uVar20 = uVar12;
    if ((int)uVar19 < (int)uVar12) {
      uVar20 = uVar19;
    }
    if (uVar20 != 0) {
      _Dst = *(void **)((longlong)pvVar18 + 0x20);
      if (*(void **)((longlong)pvVar18 + 0x20) == (void *)0x0) {
        _Dst = pvVar18;
      }
      memmove(_Dst,(void *)((longlong)_Dst +
                           (longlong)(int)(*(int *)((longlong)pvVar18 + 0x28) - uVar20) * 2),
              (longlong)(int)uVar20 * 2);
      uVar12 = *(int *)((longlong)pvVar18 + 0x28) - uVar19;
      param_1 = local_78;
    }
    *(uint *)((longlong)pvVar18 + 0x28) = uVar12;
    pvVar18 = (void *)param_1[1];
    uVar19 = *(uint *)((longlong)pvVar18 + 0x28);
    lVar7 = local_60;
  } while( true );
}



// FUNCTION 1403b7182 FUN_1403b7182 body=634 status=ok
// SIG undefined FUN_1403b7182(void)

void FUN_1403b7182(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar7 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar7,4);
    if ((int)uVar7 < 1) goto LAB_1403b71e5;
  }
  uVar2 = 0;
  do {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar2) * 4) =
         0xffffffff;
    uVar2 = uVar2 + 1;
  } while (uVar7 != uVar2);
LAB_1403b71e5:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar12 = 0;
    iVar4 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar7 = *puVar10;
    if (uVar7 == 0) {
      iVar12 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar12 = iVar14 + -1;
      }
      uVar3 = 0;
      uVar11 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar11 = uVar3;
      }
      iVar4 = 0;
      do {
        if (uVar11 == uVar3) {
          return;
        }
        iVar4 = iVar4 + 0x20;
        uVar7 = puVar10[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar3 = 0;
      iVar4 = 0;
    }
    uVar11 = (ulonglong)(-uVar7 & uVar7);
    uVar15 = uVar11 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar12) {
      iVar12 = iVar14;
    }
  }
  if (iVar12 < iVar14) {
    uVar7 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar13 = (longlong)iVar12 * 0x38;
      uVar15 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar6 + lVar13);
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0x34 + lVar13) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 0x30 + lVar13) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar15) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar14 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12;
      uVar7 = ~(uint)uVar11 & uVar7;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar14 = (int)param_1[5];
      iVar12 = (int)uVar3;
      lVar6 = (longlong)iVar12;
      uVar2 = puVar10[lVar6] & uVar7;
      if (uVar2 == 0) {
        iVar8 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar8 = iVar14 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar12) {
          iVar9 = iVar12;
        }
        if (iVar8 <= iVar12) {
          return;
        }
        lVar13 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar10[lVar6 + lVar13 + 1];
          if (uVar2 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar9 - lVar6 == lVar13) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar12 + (int)lVar13 + 1);
        uVar7 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar15 = uVar11 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar12 < iVar14);
  }
  return;
}



// FUNCTION 1403b73fc FUN_1403b73fc body=1343 status=ok
// SIG undefined FUN_1403b73fc(void)

int * FUN_1403b73fc(longlong *param_1,int *param_2,ushort *param_3)

{
  uint *puVar1;
  ulonglong uVar2;
  ushort uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  byte bVar7;
  int iVar8;
  uint *puVar9;
  longlong *plVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  ulonglong uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  uint uVar20;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar17 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar17 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar17) {
      FUN_1447cc1b4(param_1,iVar17);
    }
    iVar18 = (int)param_1[5];
    if (iVar18 == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = iVar18 + 0x1e;
      if (-1 < iVar18 + -1) {
        iVar5 = iVar18 + -1;
      }
      iVar5 = iVar5 >> 5;
    }
    plVar10 = param_1 + 2;
    iVar8 = iVar18 + 1;
    iVar12 = iVar18 + 0x1f;
    if (-1 < iVar18) {
      iVar12 = iVar18;
    }
    if (iVar12 >> 5 == iVar5) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar18) {
        if (iVar18 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar5 = iVar18;
        }
        else {
          uVar16 = iVar18 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar20 = 4;
            if (4 < uVar16) {
              uVar20 = uVar16;
            }
          }
          else {
            uVar20 = (uVar16 * 3 >> 3) + uVar16 + 0x10;
          }
          uVar11 = FUN_144a3809e(uVar20 << 2,0);
          iVar5 = (int)(uVar11 >> 2);
          iVar8 = -0x20;
          if ((int)uVar16 <= iVar5) {
            iVar8 = iVar5 << 5;
          }
          iVar5 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar10,iVar5);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar5 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar5 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar14 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar14 = plVar10;
        }
        bVar7 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar14 + (longlong)(iVar5 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar14 + (longlong)(iVar5 >> 5) * 4) << (bVar7 & 0x1f)) >>
             (bVar7 & 0x1f);
      }
    }
    lVar6 = (longlong)iVar17;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[4];
    }
    bVar7 = (byte)iVar18 & 0x1f;
    puVar1 = (uint *)((longlong)plVar10 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
  }
  else {
    iVar17 = (int)param_1[6];
    lVar6 = (longlong)iVar17;
    iVar18 = *(int *)(*param_1 + 4 + lVar6 * 0xc);
    *(int *)(param_1 + 6) = iVar18;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar18 * 0xc) = 0xffffffff;
    }
  }
  puVar1 = (uint *)(param_1 + 2);
  uVar16 = 1;
  puVar9 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar9 = puVar1;
  }
  iVar18 = iVar17 + 0x1f;
  if (-1 < iVar17) {
    iVar18 = iVar17;
  }
  puVar9[iVar18 >> 5] = puVar9[iVar18 >> 5] | 1 << ((byte)iVar17 & 0x1f);
  lVar19 = *param_1;
  uVar3 = *param_3;
  *(ushort *)(lVar19 + lVar6 * 0xc) = uVar3;
  *(undefined4 *)(lVar19 + 4 + lVar6 * 0xc) = 0xffffffff;
  uVar20 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (1 < uVar20) {
    plVar10 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[8];
    }
    iVar18 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[9] - 1U & (uint)uVar3) * 4);
    if (iVar18 != -1) {
      do {
        if (*(ushort *)(*param_1 + (longlong)iVar18 * 0xc) == uVar3) {
          FUN_147548b10(param_1,iVar17);
          iVar17 = iVar18;
          goto LAB_1403b777f;
        }
        iVar18 = *(int *)(*param_1 + (longlong)iVar18 * 0xc + 4);
      } while (iVar18 != -1);
    }
  }
  if (3 < uVar20) {
    uVar11 = (ulonglong)(uVar20 & 0xfffffffe) + 0xf;
    lVar4 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar16 = 1 << ((byte)lVar4 & 0x1f);
  }
  if (((int)uVar20 < 1) || ((int)uVar16 <= (int)param_1[9])) {
    lVar19 = lVar19 + lVar6 * 0xc;
    uVar16 = (int)param_1[9] - 1U & (uint)uVar3;
    *(uint *)(lVar19 + 8) = uVar16;
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(undefined4 *)(lVar19 + 4) =
         *(undefined4 *)((longlong)plVar10 + (ulonglong)((int)param_1[9] - 1U & uVar16) * 4);
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[9] - 1U & uVar16) * 4) = iVar17;
    goto LAB_1403b777f;
  }
  *(uint *)(param_1 + 9) = uVar16;
  plVar10 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar10,0,0,4);
    uVar16 = *(uint *)(param_1 + 9);
  }
  plVar14 = param_1 + 7;
  if (uVar16 == 1) {
    if (*plVar10 != 0) {
      FUN_1446efa72(plVar10,0,0,4);
    }
LAB_1403b7592:
    uVar20 = 0;
    do {
      plVar10 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar10 = plVar14;
      }
      *(undefined4 *)((longlong)plVar10 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar20) * 4) =
           0xffffffff;
      uVar20 = uVar20 + 1;
    } while (uVar16 != uVar20);
  }
  else {
    if (uVar16 == 0) goto LAB_1403b777f;
    FUN_1446efa72(plVar10,0,uVar16,4);
    if (0 < (int)uVar16) goto LAB_1403b7592;
  }
  iVar18 = (int)param_1[5];
  if (iVar18 == 0) {
    uVar11 = 0;
    uVar15 = 1;
    iVar5 = 0;
    iVar8 = 0;
  }
  else {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar16 = *puVar9;
    if (uVar16 == 0) {
      iVar5 = iVar18 + 0x1e;
      if (-1 < iVar18 + -1) {
        iVar5 = iVar18 + -1;
      }
      uVar11 = 0;
      uVar15 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar15 = uVar11;
      }
      iVar8 = 0;
      do {
        if (uVar15 == uVar11) goto LAB_1403b777f;
        iVar8 = iVar8 + 0x20;
        uVar16 = puVar9[uVar11 + 1];
        uVar11 = uVar11 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar11 = 0;
      iVar8 = 0;
    }
    uVar15 = (ulonglong)(-uVar16 & uVar16);
    uVar2 = uVar15 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar5 = (iVar8 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar18 <= iVar5) {
      iVar5 = iVar18;
    }
  }
  if (iVar5 < iVar18) {
    uVar16 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar19 = (longlong)iVar5;
      uVar20 = (int)param_1[9] - 1U & (uint)*(ushort *)(lVar6 + lVar19 * 0xc);
      *(uint *)(lVar6 + 8 + lVar19 * 0xc) = uVar20;
      plVar10 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar10 = plVar14;
      }
      *(undefined4 *)(lVar6 + 4 + lVar19 * 0xc) =
           *(undefined4 *)((longlong)plVar10 + (ulonglong)((int)param_1[9] - 1U & uVar20) * 4);
      plVar10 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar10 = plVar14;
      }
      *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[9] - 1U & uVar20) * 4) = iVar5;
      uVar16 = ~(uint)uVar15 & uVar16;
      puVar9 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar9 = puVar1;
      }
      iVar18 = (int)param_1[5];
      iVar5 = (int)uVar11;
      lVar6 = (longlong)iVar5;
      uVar20 = puVar9[lVar6] & uVar16;
      if (uVar20 == 0) {
        iVar12 = iVar18 + 0x1e;
        if (-1 < iVar18 + -1) {
          iVar12 = iVar18 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar13 = iVar12;
        if (iVar12 < iVar5) {
          iVar13 = iVar5;
        }
        if (iVar12 <= iVar5) break;
        lVar19 = 0;
        while( true ) {
          iVar8 = iVar8 + 0x20;
          uVar20 = puVar9[lVar6 + lVar19 + 1];
          if (uVar20 != 0) break;
          lVar19 = lVar19 + 1;
          if (iVar13 - lVar6 == lVar19) goto LAB_1403b777f;
        }
        uVar11 = (ulonglong)(iVar5 + (int)lVar19 + 1);
        uVar16 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar20 & uVar20);
      uVar2 = uVar15 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = (iVar8 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar5 < iVar18);
  }
LAB_1403b777f:
  *param_2 = iVar17;
  return param_2;
}



// FUNCTION 1403b793c FUN_1403b793c body=130 status=ok
// SIG undefined FUN_1403b793c(void)

void FUN_1403b793c(longlong *param_1,int param_2)

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
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 1403b79be FUN_1403b79be body=2724 status=ok
// SIG undefined FUN_1403b79be(void)

void FUN_1403b79be(undefined4 *param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  longlong lVar13;
  uint *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  int iVar21;
  ulonglong uVar22;
  undefined8 uVar23;
  int iVar24;
  undefined8 *puVar25;
  int iVar26;
  longlong lVar27;
  int iVar28;
  undefined1 auStack_238 [32];
  longlong *local_218;
  char local_201;
  int local_200;
  int local_1fc;
  uint local_1f8;
  int local_1f4;
  longlong local_1f0;
  longlong *local_1e8;
  longlong local_1e0;
  ulonglong local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  uint *local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  ulonglong local_1a8;
  undefined1 *local_1a0;
  longlong local_198;
  int local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined1 local_178 [80];
  longlong local_128;
  undefined1 local_118 [32];
  longlong local_f8;
  undefined1 auStack_f0 [32];
  longlong local_d0;
  longlong local_c8;
  ulonglong local_c0;
  uint local_b8 [4];
  uint *local_a8;
  undefined8 local_a0;
  longlong local_98;
  int iStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  longlong local_70;
  int iStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_238;
  if (*(short *)((longlong)param_1 + 2) != -1) {
    local_188 = *param_1;
    uStack_184 = param_1[1];
    uStack_180 = param_1[2];
    uStack_17c = param_1[3];
    FUN_1403b8af8(local_178,param_1 + 4);
    local_f8 = 0;
    iVar4 = param_1[0x24];
    uVar3 = iVar4 + 0x1fU & 0xffffffe0;
    if (0 < (int)uVar3) {
      uVar11 = 0x100;
      if (0x100 < uVar3) {
        uVar11 = uVar3;
      }
      local_f8 = (ulonglong)uVar11 << 0x20;
      FUN_14497ddce(local_118,0);
      iVar4 = param_1[0x24];
    }
    local_f8 = CONCAT44(local_f8._4_4_,iVar4);
    if (iVar4 != 0) {
      memcpy(local_118,param_1 + 0x1c,(ulonglong)(iVar4 + 0x1fU >> 3 & 0xfffffffc));
    }
    local_d0 = 0;
    iVar4 = param_1[0x2e];
    uVar3 = iVar4 + 0x1fU & 0xffffffe0;
    if (0 < (int)uVar3) {
      uVar11 = 0x100;
      if (0x100 < uVar3) {
        uVar11 = uVar3;
      }
      local_d0 = (ulonglong)uVar11 << 0x20;
      FUN_14497ddce(auStack_f0,0);
      iVar4 = param_1[0x2e];
    }
    local_d0 = CONCAT44(local_d0._4_4_,iVar4);
    if (iVar4 != 0) {
      memcpy(auStack_f0,param_1 + 0x26,(ulonglong)(iVar4 + 0x1fU >> 3 & 0xfffffffc));
    }
    local_c0 = *(ulonglong *)(param_2 + 0x248);
    local_c8 = param_2;
    lVar7 = FUN_14009d2a0();
    param_3[1] = lVar7;
    lVar7 = *param_3;
    if (*(int *)(lVar7 + 0xe4) < *(int *)(lVar7 + 0xb8)) {
      lVar17 = 0;
      lVar27 = 0;
      do {
        if ((*(byte *)(*(longlong *)(lVar7 + 0xb0) + 0x100 + lVar17) & 1) != 0) {
          plVar12 = (longlong *)(*(longlong *)(lVar7 + 0xb0) + lVar17);
          iStack_68 = (int)lVar27;
          if ((*(byte *)(plVar12 + 0x20) & 2) == 0) {
            plVar12 = (longlong *)*plVar12;
          }
          local_70 = lVar7;
          (**(code **)(*plVar12 + 8))(plVar12,&local_70);
          lVar7 = *param_3;
        }
        lVar27 = lVar27 + 1;
        lVar17 = lVar17 + 0x130;
      } while (lVar27 < (longlong)*(int *)(lVar7 + 0xb8) - (longlong)*(int *)(lVar7 + 0xe4));
    }
    lVar7 = local_c8;
    local_201 = *(char *)(local_c8 + 0x270);
    local_198 = local_c8;
    if (local_201 == '\0') {
      *(int *)(local_c8 + 0x264) = *(int *)(local_c8 + 0x264) + 1;
    }
    else {
      LOCK();
      *(int *)(local_c8 + 0x264) = *(int *)(local_c8 + 0x264) + 1;
      UNLOCK();
    }
    local_1a0 = local_178;
    iVar4 = FUN_1403b8464(&local_1a0,0);
    local_1fc = *(int *)(lVar7 + 0x10);
    local_190 = iVar4;
    if (iVar4 != local_1fc) {
      local_1f0 = local_198;
      lVar7 = local_198;
      local_1e8 = param_3;
      do {
        if (local_201 == '\0') {
          lVar17 = *(longlong *)(*(longlong *)(lVar7 + 0x60) + (longlong)iVar4 * 8);
          *(undefined4 *)(lVar17 + 0x14) = 0;
        }
        else {
          lVar17 = 0;
        }
        lVar20 = (longlong)iVar4;
        local_1a8 = local_c0;
        lVar27 = *(longlong *)(*(longlong *)(lVar7 + 0x60) + lVar20 * 8);
        if (*(ushort *)(lVar27 + 0xc) != 0) {
          puVar25 = *(undefined8 **)(lVar27 + 0x28);
          lVar13 = (ulonglong)*(ushort *)(lVar27 + 0xc) << 5;
          do {
            if (*(short *)((longlong)puVar25 + 0x1e) == local_188._2_2_) goto LAB_1403b7d49;
            puVar25 = puVar25 + 4;
            lVar13 = lVar13 + -0x20;
          } while (lVar13 != 0);
        }
        puVar25 = (undefined8 *)0x0;
LAB_1403b7d49:
        local_1f4 = *(int *)(lVar27 + 0x14);
        local_190 = iVar4;
        if (local_1f4 == 1) {
          AcquireSRWLockExclusive((PSRWLOCK)(puVar25 + 1));
        }
        LOCK();
        *(int *)(puVar25 + 3) = *(int *)(puVar25 + 3) + 1;
        UNLOCK();
        uVar23 = *puVar25;
        local_1b0 = *(undefined8 *)(*(longlong *)(*(longlong *)(lVar7 + 0x60) + lVar20 * 8) + 0x18);
        local_a8 = (uint *)0x0;
        local_a0 = 0x8000000000;
        local_1b8 = lVar20 * 0x28 + *(longlong *)(lVar7 + 8);
        lVar7 = *param_3;
        local_1c0 = (uint *)(lVar7 + 0xc0);
        iVar21 = *(int *)(lVar7 + 0xd8);
        local_1e0 = lVar17;
        if (iVar21 == 0) {
          uVar19 = 0;
          uVar18 = 1;
          iVar26 = 0;
          iVar28 = 0;
        }
        else {
          puVar14 = *(uint **)(lVar7 + 0xd0);
          if (*(uint **)(lVar7 + 0xd0) == (uint *)0x0) {
            puVar14 = local_1c0;
          }
          uVar3 = *puVar14;
          if (uVar3 == 0) {
            iVar26 = iVar21 + 0x1e;
            if (-1 < iVar21 + -1) {
              iVar26 = iVar21 + -1;
            }
            uVar19 = 0;
            uVar18 = (ulonglong)(uint)(iVar26 >> 5);
            if (iVar26 >> 5 < 1) {
              uVar18 = uVar19;
            }
            iVar28 = 0;
            do {
              if (uVar18 == uVar19) goto LAB_1403b8089;
              iVar28 = iVar28 + 0x20;
              uVar3 = puVar14[uVar19 + 1];
              uVar19 = uVar19 + 1;
            } while (uVar3 == 0);
          }
          else {
            uVar19 = 0;
            iVar28 = 0;
          }
          uVar18 = (ulonglong)(-uVar3 & uVar3);
          uVar1 = uVar18 * 2 + 1;
          lVar17 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          iVar26 = (iVar28 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
          if (iVar21 <= iVar26) {
            iVar26 = iVar21;
          }
        }
        if (iVar26 < iVar21) {
          uVar3 = 0xffffffff;
          local_1d0 = lVar7;
          local_1c8 = uVar23;
          do {
            lVar7 = *(longlong *)(local_1d0 + 0xb0) + (longlong)iVar26 * 0x130 + 0x108;
            local_50 = 0x10000000000;
            local_218 = &local_98;
            local_1f8 = uVar3;
            FUN_14009e926(local_1b8,lVar7,&local_70,2);
            local_98 = local_70;
            iStack_90 = iStack_68;
            uStack_8c = uStack_64;
            local_88 = local_60;
            uStack_84 = uStack_5c;
            uStack_80 = uStack_58;
            uStack_7c = uStack_54;
            local_78 = local_50;
            cVar2 = FUN_1403b8874(&local_98,lVar7,0);
            uVar1 = local_a0;
            if (cVar2 != '\0') {
              iVar10 = iVar26 + 1;
              iVar21 = iVar10 - (int)local_a0;
              if (iVar21 == 0 || iVar10 < (int)local_a0) {
                iVar24 = iVar26 + 0x1f;
                if (-1 < iVar26) {
                  iVar24 = iVar26;
                }
                iVar24 = iVar24 >> 5;
              }
              else {
                if ((int)local_a0 == 0) {
                  iVar5 = -1;
                }
                else {
                  iVar5 = (int)local_a0 + 0x1e;
                  if (-1 < (int)local_a0 + -1) {
                    iVar5 = (int)local_a0 + -1;
                  }
                  iVar5 = iVar5 >> 5;
                }
                iVar24 = iVar26 + 0x1f;
                if (-1 < iVar26) {
                  iVar24 = iVar26;
                }
                iVar24 = iVar24 >> 5;
                if (iVar24 == iVar5) {
                  local_a0 = CONCAT44(local_a0._4_4_,iVar10);
                }
                else {
                  if (local_a0._4_4_ <= iVar26) {
                    local_200 = iVar21;
                    if (iVar26 + 0x20U < 0xa0) {
                      iVar21 = 0x80;
                      uVar15 = local_a0 & 0xffffffff;
                    }
                    else {
                      uVar3 = iVar26 + 0x20U >> 5;
                      if (local_a0._4_4_ + 0x1fU < 0xa0) {
                        uVar11 = 4;
                        if (4 < uVar3) {
                          uVar11 = uVar3;
                        }
                      }
                      else {
                        uVar11 = uVar3 + (uVar3 * 3 >> 3) + 0x10;
                      }
                      uVar8 = (ulonglong)(uVar11 * 4);
                      if (DAT_14c872d28 == (longlong *)0x0) {
LAB_1403b82b8:
                        uVar15 = local_a0 & 0xffffffff;
                      }
                      else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                        uVar6 = (uint)(uVar8 + 0xf);
                        if (uVar11 < 0x1ffd) {
                          uVar8 = (ulonglong)
                                  (ushort)(&DAT_14c841d90)
                                          [0x32 - (byte)(&DAT_14c841e00)[uVar8 + 0xf >> 4]];
                          goto LAB_1403b82b8;
                        }
                        uVar15 = (ulonglong)(uVar6 & 0xfffffff0);
                        if (uVar15 < 0x7ff1) {
                          bVar9 = (&DAT_14c841e00)[uVar6 >> 4];
                          uVar16 = 0x32;
                          if (0x32 < bVar9) {
                            uVar16 = (ulonglong)bVar9;
                          }
                          uVar22 = 0x32 - (ulonglong)bVar9;
                          do {
                            uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar22 & 0xffffffff];
                            if (((&DAT_14c841d90)[uVar22 & 0xffffffff] & 0xf) == 0)
                            goto LAB_1403b8348;
                            lVar7 = uVar16 + 1 + uVar22;
                            uVar22 = uVar22 - 1;
                          } while (lVar7 != 0x33);
                        }
                        uVar8 = 0x10;
                        if (0x10 < DAT_14c841df8) {
                          uVar8 = (ulonglong)DAT_14c841df8;
                        }
                        uVar8 = -uVar8 & (uVar15 + uVar8) - 1;
LAB_1403b8348:
                        uVar15 = local_a0 & 0xffffffff;
                      }
                      else {
                        local_1d8 = (ulonglong)uVar3;
                        uVar8 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar8,0);
                        uVar3 = (uint)local_1d8;
                        uVar15 = local_a0 & 0xffffffff;
                      }
                      iVar10 = (int)(uVar8 >> 2);
                      iVar21 = iVar10 << 5;
                      if (iVar10 < (int)uVar3) {
                        iVar21 = -0x20;
                      }
                    }
                    local_a0 = CONCAT44(iVar21,(int)local_a0);
                    FUN_1446efbd8(local_b8,uVar15);
                    iVar10 = (int)local_a0 + local_200;
                    iVar21 = local_200;
                  }
                  iVar5 = iVar10 + 0x1f;
                  if (-1 < iVar10) {
                    iVar5 = iVar10;
                  }
                  local_a0 = CONCAT44(local_a0._4_4_,iVar10);
                  if (iVar10 % 0x20 != 0) {
                    puVar14 = local_a8;
                    if (local_a8 == (uint *)0x0) {
                      puVar14 = local_b8;
                    }
                    bVar9 = -(char)(iVar10 % 0x20);
                    puVar14[iVar5 >> 5] = (puVar14[iVar5 >> 5] << (bVar9 & 0x1f)) >> (bVar9 & 0x1f);
                  }
                }
                FUN_1447c6044(local_b8,uVar1 & 0xffffffff,iVar21,0);
              }
              puVar14 = local_a8;
              if (local_a8 == (uint *)0x0) {
                puVar14 = local_b8;
              }
              puVar14[iVar24] = puVar14[iVar24] | 1 << ((byte)iVar26 & 0x1f);
            }
            uVar3 = local_1f8 & ~(uint)uVar18;
            puVar14 = *(uint **)(local_1d0 + 0xd0);
            if (*(uint **)(local_1d0 + 0xd0) == (uint *)0x0) {
              puVar14 = local_1c0;
            }
            iVar21 = *(int *)(local_1d0 + 0xd8);
            iVar26 = (int)uVar19;
            lVar7 = (longlong)iVar26;
            uVar11 = puVar14[lVar7] & uVar3;
            uVar23 = local_1c8;
            if (uVar11 == 0) {
              iVar10 = iVar21 + 0x1e;
              if (-1 < iVar21 + -1) {
                iVar10 = iVar21 + -1;
              }
              iVar10 = iVar10 >> 5;
              iVar24 = iVar10;
              if (iVar10 < iVar26) {
                iVar24 = iVar26;
              }
              if (iVar10 <= iVar26) break;
              lVar17 = 0;
              while( true ) {
                iVar28 = iVar28 + 0x20;
                uVar11 = puVar14[lVar7 + lVar17 + 1];
                if (uVar11 != 0) break;
                lVar17 = lVar17 + 1;
                if (iVar24 - lVar7 == lVar17) goto LAB_1403b8089;
              }
              uVar19 = (ulonglong)(iVar26 + (int)lVar17 + 1);
              uVar3 = 0xffffffff;
            }
            uVar18 = (ulonglong)(-uVar11 & uVar11);
            uVar1 = uVar18 * 2 + 1;
            lVar7 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
              }
            }
            iVar26 = (iVar28 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
          } while (iVar26 < iVar21);
        }
LAB_1403b8089:
        lVar17 = local_1e0;
        param_3 = local_1e8;
        lVar7 = local_1f0;
        puVar14 = local_a8;
        if (local_a8 == (uint *)0x0) {
          puVar14 = local_b8;
        }
        if (0x1f < (int)local_a0 + 0x1fU) {
          lVar27 = 0;
LAB_1403b80c5:
          uVar3 = *puVar14;
          if (uVar3 == 0) goto LAB_1403b8385;
          iVar21 = 0;
          if (uVar3 != 0) {
            for (; (uVar3 >> iVar21 & 1) == 0; iVar21 = iVar21 + 1) {
            }
          }
          iVar26 = iVar21 - (int)lVar27;
          if ((iVar26 < (int)local_a0) && (iVar21 + 1 != (int)lVar27)) {
            local_70 = *local_1e8;
            plVar12 = (longlong *)(*(longlong *)(local_70 + 0xb0) + (longlong)iVar26 * 0x130);
            if ((*(byte *)(*(longlong *)(local_70 + 0xb0) + 0x100 + (longlong)iVar26 * 0x130) & 2)
                == 0) {
              plVar12 = (longlong *)*plVar12;
            }
            local_98 = local_1f0;
            local_218 = &local_70;
            iStack_90 = iVar4;
            iStack_68 = iVar26;
            (**(code **)(*plVar12 + 0x10))(plVar12,&local_98,local_1b0,uVar23);
          }
        }
LAB_1403b815a:
        if (local_a8 != (uint *)0x0) {
          FUN_1400020a8();
        }
        if (puVar25 != (undefined8 *)0x0) {
          uVar18 = puVar25[2];
          if ((ulonglong)puVar25[2] < local_1a8) {
            uVar18 = local_1a8;
          }
          puVar25[2] = uVar18;
          LOCK();
          *(int *)(puVar25 + 3) = *(int *)(puVar25 + 3) + -1;
          UNLOCK();
          if (local_1f4 == 1) {
            ReleaseSRWLockExclusive((PSRWLOCK)(puVar25 + 1));
          }
        }
        if (lVar17 != 0) {
          *(undefined4 *)(lVar17 + 0x14) = 1;
        }
        iVar4 = FUN_1403b8464(&local_1a0,iVar4 + 1);
        local_190 = iVar4;
      } while (iVar4 != local_1fc);
    }
    if (local_1a0 != (undefined1 *)0x0) {
      if (*(char *)(local_198 + 0x270) == '\0') {
        *(int *)(local_198 + 0x264) = *(int *)(local_198 + 0x264) + -1;
      }
      else {
        LOCK();
        *(int *)(local_198 + 0x264) = *(int *)(local_198 + 0x264) + -1;
        UNLOCK();
      }
    }
    lVar7 = *param_3;
    if (*(int *)(lVar7 + 0xe4) < *(int *)(lVar7 + 0xb8)) {
      lVar27 = 0;
      lVar17 = 0;
      do {
        if ((*(byte *)(*(longlong *)(lVar7 + 0xb0) + 0x100 + lVar27) & 1) != 0) {
          plVar12 = (longlong *)(*(longlong *)(lVar7 + 0xb0) + lVar27);
          iStack_68 = (int)lVar17;
          if ((*(byte *)(plVar12 + 0x20) & 2) == 0) {
            plVar12 = (longlong *)*plVar12;
          }
          local_70 = lVar7;
          (**(code **)(*plVar12 + 0x18))(plVar12,(char)param_3[2],&local_70);
          lVar7 = *param_3;
        }
        lVar17 = lVar17 + 1;
        lVar27 = lVar27 + 0x130;
      } while (lVar17 < (longlong)*(int *)(lVar7 + 0xb8) - (longlong)*(int *)(lVar7 + 0xe4));
    }
    if (local_128 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_1403b8385:
  lVar27 = lVar27 + -0x20;
  puVar14 = puVar14 + 1;
  if ((ulonglong)((int)local_a0 + 0x1fU & 0xffffffe0) + lVar27 == 0) goto LAB_1403b815a;
  goto LAB_1403b80c5;
}



// FUNCTION 1403b8464 FUN_1403b8464 body=197 status=ok
// SIG undefined FUN_1403b8464(void)

ulonglong FUN_1403b8464(undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar7 = param_2 & 0xffffffff;
  lVar9 = param_1[1];
  lVar1 = lVar9 + 0x1d0;
  cVar3 = FUN_1403b89d6(lVar1);
  if ((int)param_2 < *(int *)(lVar9 + 0x10)) {
    uVar7 = (ulonglong)(int)param_2;
    lVar8 = uVar7 * 0x28;
    do {
      lVar5 = lVar9 + 0x18;
      if (*(longlong *)(lVar9 + 0x28) != 0) {
        lVar5 = *(longlong *)(lVar9 + 0x28);
      }
      uVar2 = (uint)uVar7;
      uVar6 = uVar2 + 0x1f;
      if (-1 < (int)uVar2) {
        uVar6 = uVar2;
      }
      if ((*(uint *)(lVar5 + (longlong)((int)uVar6 >> 5) * 4) >> (uVar2 & 0x1f) & 1) != 0) {
        if (cVar3 != '\0') {
          cVar4 = FUN_1403b852a(lVar1,*(longlong *)(lVar9 + 8) + lVar8);
          lVar9 = param_1[1];
          if (cVar4 == '\0') goto LAB_1403b84e0;
        }
        cVar4 = FUN_1403b852a(*param_1,*(longlong *)(lVar9 + 8) + lVar8);
        lVar9 = param_1[1];
        if ((cVar4 != '\0') &&
           (*(short *)(*(longlong *)(*(longlong *)(lVar9 + 0x60) + uVar7 * 8) + 0xe) != 0)) break;
      }
LAB_1403b84e0:
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x28;
    } while ((longlong)uVar7 < (longlong)*(int *)(lVar9 + 0x10));
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 1403b852a FUN_1403b852a body=379 status=ok
// SIG undefined FUN_1403b852a(void)

ulonglong FUN_1403b852a(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  void *_Src;
  undefined8 unaff_RDI;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_98 [39];
  undefined1 local_71;
  undefined1 local_70 [32];
  int local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((*(int *)(param_1 + 0x20) < 1) || (cVar2 = FUN_1403b86a6(param_2,param_1), cVar2 != '\0')) &&
     ((*(int *)(param_1 + 0x48) < 1 ||
      (cVar2 = FUN_1403b8782(param_2,param_1 + 0x28), cVar2 == '\0')))) {
    uVar5 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    if ((longlong)*(int *)(param_1 + 0x58) != 0) {
      _Src = *(void **)(param_1 + 0x50);
      lVar6 = (longlong)*(int *)(param_1 + 0x58) * 0x2c;
      do {
        bVar1 = *(byte *)((longlong)_Src + 0x28);
        if ((bVar1 & 1) == 0) {
          if ((bVar1 & 2) != 0) {
            cVar2 = FUN_1403b8782(param_2);
            goto LAB_1403b85e6;
          }
          if ((bVar1 & 4) != 0) {
            cVar2 = FUN_1403b86a6(param_2);
            goto LAB_1403b85e6;
          }
          if (-1 < (char)bVar1) goto LAB_1403b8564;
        }
        else {
          local_4c = 0;
          iVar4 = *(int *)((longlong)_Src + 0x20);
          local_50 = 0;
          uVar3 = iVar4 + 0x1fU & 0xffffffe0;
          if (0 < (int)uVar3) {
            if (uVar3 < 0x101) {
              uVar3 = 0x100;
            }
            local_4c = uVar3;
            FUN_14497ddce(local_70,0);
            iVar4 = *(int *)((longlong)_Src + 0x20);
          }
          local_50 = iVar4;
          if (iVar4 != 0) {
            memcpy(local_70,_Src,(ulonglong)(iVar4 + 0x1fU >> 3 & 0xfffffffc));
          }
          FUN_14497de01(param_2,local_70,4,&local_71);
          iVar4 = FUN_14055dcee(local_70,0,0xffffffff);
          cVar2 = iVar4 == 1;
LAB_1403b85e6:
          if ((bool)cVar2 == *(char *)((longlong)_Src + 0x28) < '\0') goto LAB_1403b8564;
        }
        _Src = (void *)((longlong)_Src + 0x2c);
        lVar6 = lVar6 + -0x2c;
      } while (lVar6 != 0);
    }
  }
  else {
LAB_1403b8564:
    uVar5 = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 1403b86a6 FUN_1403b86a6 body=219 status=ok
// SIG undefined FUN_1403b86a6(void)

undefined8 FUN_1403b86a6(undefined8 param_1,void *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 extraout_var;
  undefined8 uVar3;
  undefined1 auStack_78 [47];
  undefined1 local_49;
  undefined1 local_48 [32];
  int local_28;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_24 = 0;
  iVar2 = *(int *)((longlong)param_2 + 0x20);
  local_28 = 0;
  uVar1 = iVar2 + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar1) {
    local_24 = 0x100;
    if (0x100 < uVar1) {
      local_24 = uVar1;
    }
    FUN_14497ddce(local_48,0);
    iVar2 = *(int *)((longlong)param_2 + 0x20);
  }
  local_28 = iVar2;
  if (iVar2 != 0) {
    memcpy(local_48,param_2,(ulonglong)(iVar2 + 0x1fU >> 3 & 0xfffffffc));
  }
  FUN_14497de01(param_1,local_48,4,&local_49);
  if (local_28 == *(int *)((longlong)param_2 + 0x20)) {
    iVar2 = memcmp(local_48,param_2,(ulonglong)(local_28 + 0x1fU >> 3 & 0xfffffffc));
    uVar3 = CONCAT71((int7)(CONCAT44(extraout_var,iVar2) >> 8),iVar2 == 0);
  }
  else {
    uVar3 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403b8782 FUN_1403b8782 body=240 status=ok
// SIG undefined FUN_1403b8782(void)

undefined8 FUN_1403b8782(undefined8 param_1,void *param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint *puVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [39];
  undefined1 local_41;
  uint local_40 [8];
  int local_20;
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_1c = 0;
  iVar5 = *(int *)((longlong)param_2 + 0x20);
  local_20 = 0;
  uVar2 = iVar5 + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar2) {
    local_1c = 0x100;
    if (0x100 < uVar2) {
      local_1c = uVar2;
    }
    FUN_14497ddce(local_40,0);
    iVar5 = *(int *)((longlong)param_2 + 0x20);
  }
  local_20 = iVar5;
  if (iVar5 != 0) {
    memcpy(local_40,param_2,(ulonglong)(iVar5 + 0x1fU >> 3 & 0xfffffffc));
  }
  puVar4 = local_40;
  FUN_14497de01(param_1,puVar4,4,&local_41);
  uVar3 = 0xffffffff;
  if (0x1f < local_20 + 0x1fU) {
    lVar6 = 0;
    do {
      uVar2 = *puVar4;
      if (uVar2 != 0) {
        uVar1 = 0;
        if (uVar2 != 0) {
          for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
          }
        }
        if ((int)((ulonglong)uVar1 - lVar6) < local_20) {
          uVar3 = (ulonglong)uVar1 - lVar6 & 0xffffffff;
        }
        break;
      }
      lVar6 = lVar6 + -0x20;
      puVar4 = puVar4 + 1;
    } while ((ulonglong)(local_20 + 0x1fU & 0xffffffe0) + lVar6 != 0);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return CONCAT71((int7)(uVar3 >> 8),(int)uVar3 != -1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403b8874 FUN_1403b8874 body=353 status=ok
// SIG undefined FUN_1403b8874(void)

undefined8 FUN_1403b8874(longlong param_1,longlong param_2,byte param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  bool bVar13;
  
  iVar1 = *(int *)(param_1 + 0x20);
  iVar4 = iVar1 + 0x3e;
  if (-1 < iVar1 + 0x1f) {
    iVar4 = iVar1 + 0x1f;
  }
  iVar2 = *(int *)(param_2 + 0x20);
  bVar13 = iVar1 < 1;
  uVar5 = 0xffffffff >> (-(char)(iVar1 % 0x20) & 0x1fU);
  if (iVar1 % 0x20 < 1) {
    uVar5 = 0xffffffff;
  }
  iVar11 = iVar2 + 0x3e;
  if (-1 < iVar2 + 0x1f) {
    iVar11 = iVar2 + 0x1f;
  }
  uVar6 = 0xffffffff >> (-(char)(iVar2 % 0x20) & 0x1fU);
  if (iVar2 % 0x20 < 1) {
    uVar6 = 0xffffffff;
  }
  if (bVar13 && iVar2 < 1) {
    uVar8 = CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
  }
  else {
    iVar11 = iVar11 >> 5;
    uVar10 = 0xffffffff;
    if (iVar2 - 1U < 0x20) {
      uVar10 = uVar6;
    }
    uVar9 = 0xffffffff;
    if (iVar1 - 1U < 0x20) {
      uVar9 = uVar5;
    }
    uVar12 = 0;
    do {
      uVar7 = (ulonglong)-(uint)param_3;
      if (!bVar13) {
        uVar3 = *(uint *)(param_1 + uVar12 * 4);
        uVar7 = (ulonglong)uVar3;
        if (uVar9 != 0xffffffff) {
          if (param_3 == 0) {
            uVar7 = (ulonglong)(uVar3 & uVar9);
          }
          else {
            uVar7 = (ulonglong)(uVar3 | ~uVar9);
          }
        }
      }
      uVar9 = -(uint)param_3;
      if (((longlong)uVar12 < (longlong)iVar11) &&
         (uVar9 = *(uint *)(param_2 + uVar12 * 4), uVar10 != 0xffffffff)) {
        if (param_3 == 0) {
          uVar9 = uVar9 & uVar10;
        }
        else {
          uVar9 = uVar9 | ~uVar10;
        }
      }
      bVar13 = (uint)uVar7 == uVar9;
      uVar8 = CONCAT71((int7)(uVar7 >> 8),bVar13);
      if (!bVar13) {
        return uVar8;
      }
      uVar9 = 0xffffffff;
      if ((iVar4 >> 5) - 2 == uVar12) {
        uVar9 = uVar5;
      }
      uVar10 = 0xffffffff;
      if (iVar11 - 2 == uVar12) {
        uVar10 = uVar6;
      }
      uVar12 = uVar12 + 1;
      bVar13 = iVar4 >> 5 <= (int)uVar12;
    } while ((int)uVar12 < iVar11 || !bVar13);
  }
  return uVar8;
}



// FUNCTION 1403b89d6 FUN_1403b89d6 body=289 status=ok
// SIG undefined FUN_1403b89d6(void)

undefined8 FUN_1403b89d6(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  uint *puVar9;
  ulonglong uVar10;
  
  uVar1 = param_1[8];
  if (0x1f < uVar1 + 0x1f) {
    lVar6 = 0;
    puVar9 = param_1;
LAB_1403b8a05:
    uVar2 = *puVar9;
    if (uVar2 == 0) goto code_r0x0001403b8a11;
    iVar3 = 0;
    if (uVar2 != 0) {
      for (; (uVar2 >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
      }
    }
    bVar4 = iVar3 - (int)lVar6 < (int)uVar1;
    uVar10 = (ulonglong)CONCAT31((int3)(uVar1 >> 8),bVar4);
    if (bVar4 && iVar3 + 1 != (int)lVar6) goto LAB_1403b8aae;
  }
LAB_1403b89e3:
  uVar1 = param_1[0x12];
  if (0x1f < uVar1 + 0x1f) {
    puVar9 = param_1 + 10;
    lVar6 = 0;
    do {
      uVar2 = *puVar9;
      if (uVar2 != 0) {
        iVar3 = 0;
        if (uVar2 != 0) {
          for (; (uVar2 >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
          }
        }
        bVar4 = iVar3 - (int)lVar6 < (int)uVar1;
        uVar10 = (ulonglong)CONCAT31((int3)(uVar1 >> 8),bVar4);
        if (bVar4 && iVar3 + 1 != (int)lVar6) {
LAB_1403b8aae:
          return CONCAT71((int7)(uVar10 >> 8),1);
        }
        break;
      }
      lVar6 = lVar6 + -0x20;
      puVar9 = puVar9 + 1;
    } while ((ulonglong)(uVar1 + 0x1f & 0xffffffe0) + lVar6 != 0);
  }
  if ((longlong)(int)param_1[0x16] != 0) {
    lVar6 = *(longlong *)(param_1 + 0x14);
    lVar7 = (longlong)(int)param_1[0x16] * 0x2c + lVar6;
    do {
      iVar3 = *(int *)(lVar6 + 0x20);
      if (0x1f < iVar3 + 0x1fU) {
        iVar8 = 0;
        uVar10 = 0;
LAB_1403b8a7a:
        uVar1 = *(uint *)(lVar6 + uVar10 * 4);
        if (uVar1 == 0) goto code_r0x0001403b8a83;
        iVar5 = 0;
        if (uVar1 != 0) {
          for (; (uVar1 >> iVar5 & 1) == 0; iVar5 = iVar5 + 1) {
          }
        }
        bVar4 = iVar5 - iVar8 < iVar3;
        uVar10 = (ulonglong)CONCAT31((int3)((uint)iVar3 >> 8),bVar4);
        if (bVar4 && iVar5 + 1 != iVar8) goto LAB_1403b8aae;
      }
LAB_1403b8a63:
      lVar6 = lVar6 + 0x2c;
    } while (lVar6 != lVar7);
  }
  return 0;
code_r0x0001403b8a11:
  lVar6 = lVar6 + -0x20;
  puVar9 = puVar9 + 1;
  if ((ulonglong)(uVar1 + 0x1f & 0xffffffe0) + lVar6 == 0) goto LAB_1403b89e3;
  goto LAB_1403b8a05;
code_r0x0001403b8a83:
  uVar10 = uVar10 + 1;
  iVar8 = iVar8 + -0x20;
  if (iVar3 + 0x1fU >> 5 == uVar10) goto LAB_1403b8a63;
  goto LAB_1403b8a7a;
}



// FUNCTION 1403b8af8 FUN_1403b8af8 body=261 status=ok
// SIG undefined FUN_1403b8af8(void)

void * FUN_1403b8af8(void *param_1,void *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  iVar4 = *(int *)((longlong)param_2 + 0x20);
  uVar2 = iVar4 + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar2) {
    uVar3 = 0x100;
    if (0x100 < uVar2) {
      uVar3 = uVar2;
    }
    *(uint *)((longlong)param_1 + 0x24) = uVar3;
    FUN_14497ddce(param_1,0);
    iVar4 = *(int *)((longlong)param_2 + 0x20);
  }
  *(int *)((longlong)param_1 + 0x20) = iVar4;
  if (iVar4 != 0) {
    memcpy(param_1,param_2,(ulonglong)(iVar4 + 0x1fU >> 3 & 0xfffffffc));
  }
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  iVar4 = *(int *)((longlong)param_2 + 0x48);
  uVar2 = iVar4 + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar2) {
    uVar3 = 0x100;
    if (0x100 < uVar2) {
      uVar3 = uVar2;
    }
    *(uint *)((longlong)param_1 + 0x4c) = uVar3;
    FUN_14497ddce((void *)((longlong)param_1 + 0x28),0);
    iVar4 = *(int *)((longlong)param_2 + 0x48);
  }
  *(int *)((longlong)param_1 + 0x48) = iVar4;
  if (iVar4 != 0) {
    memcpy((void *)((longlong)param_1 + 0x28),(void *)((longlong)param_2 + 0x28),
           (ulonglong)(iVar4 + 0x1fU >> 3 & 0xfffffffc));
  }
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  iVar4 = *(int *)((longlong)param_2 + 0x58);
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x50);
  *(int *)((longlong)param_1 + 0x58) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    FUN_1403b8c86((undefined8 *)((longlong)param_1 + 0x50),iVar4,0);
    FUN_1403b8bfd(*(undefined8 *)((longlong)param_1 + 0x50),uVar1,iVar4);
  }
  return param_1;
}



// FUNCTION 1403b8bfd FUN_1403b8bfd body=136 status=ok
// SIG undefined FUN_1403b8bfd(void)

void FUN_1403b8bfd(void *param_1,longlong param_2,int param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  
  if (param_3 != 0) {
    puVar2 = (undefined1 *)(param_2 + 0x28);
    do {
      *(undefined8 *)((longlong)param_1 + 0x20) = 0;
      iVar3 = *(int *)(puVar2 + -8);
      uVar1 = iVar3 + 0x1fU & 0xffffffe0;
      if (0 < (int)uVar1) {
        if (uVar1 < 0x101) {
          uVar1 = 0x100;
        }
        *(uint *)((longlong)param_1 + 0x24) = uVar1;
        FUN_14497ddce(param_1,0);
        iVar3 = *(int *)(puVar2 + -8);
      }
      *(int *)((longlong)param_1 + 0x20) = iVar3;
      if (iVar3 != 0) {
        memcpy(param_1,puVar2 + -0x28,(ulonglong)(iVar3 + 0x1fU >> 3 & 0xfffffffc));
      }
      *(undefined1 *)((longlong)param_1 + 0x28) = *puVar2;
      param_1 = (void *)((longlong)param_1 + 0x2c);
      puVar2 = puVar2 + 0x2c;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1403b8c86 FUN_1403b8c86 body=330 status=ok
// SIG undefined FUN_1403b8c86(void)

void FUN_1403b8c86(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar4 = (longlong)param_2 * 0x2c;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
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
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1403b8cf4;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar1 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
      }
    }
LAB_1403b8cf4:
    iVar5 = (int)(uVar4 / 0x2c);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x2c,4);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1403b8dd0 FUN_1403b8dd0 body=353 status=ok
// SIG undefined FUN_1403b8dd0(void)

void FUN_1403b8dd0(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 4;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1403b8e55;
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
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_1403b8e55:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 2)) {
    uVar7 = uVar5 >> 2 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,4,4);
  return;
}



// FUNCTION 1403b8f32 FUN_1403b8f32 body=630 status=ok
// SIG undefined FUN_1403b8f32(void)

void FUN_1403b8f32(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined4 *puVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *local_60;
  longlong local_58 [3];
  
  local_58[2] = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58[0] = 0;
  local_58[1] = 0;
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,param_2,local_58);
  }
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,param_2,local_58);
  }
  plVar2 = *(longlong **)(param_1 + 0x18);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,param_2,local_58);
  }
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,param_2,local_58);
  }
  plVar2 = *(longlong **)(param_1 + 0x28);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,param_2,local_58);
  }
  if (0 < (longlong)*(int *)(param_1 + 0x38)) {
    lVar10 = (longlong)*(int *)(param_1 + 0x38);
    do {
      lVar3 = *(longlong *)(param_1 + 0x30);
      lVar8 = (lVar10 + -1) * 0x10;
      plVar2 = *(longlong **)(lVar3 + 8 + lVar8);
      if (plVar2 != (longlong *)0x0) {
        iVar6 = (int)plVar2[1];
        do {
          if (iVar6 == 0) goto LAB_1403b9141;
          LOCK();
          iVar5 = (int)plVar2[1];
          bVar11 = iVar6 == iVar5;
          if (bVar11) {
            *(int *)(plVar2 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
        } while (!bVar11);
        plVar4 = *(longlong **)(lVar3 + lVar8);
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x20))(plVar4,param_2,local_58);
        }
        LOCK();
        plVar4 = plVar2 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*plVar2)(plVar2);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
LAB_1403b9141:
      bVar11 = 1 < lVar10;
      lVar10 = lVar10 + -1;
    } while (bVar11);
  }
  lVar3 = *(longlong *)(param_1 + 0x60);
  lVar8 = (longlong)param_2 * 0x70;
  lVar10 = lVar8 + lVar3;
  puVar7 = *(undefined4 **)(lVar10 + 0x60);
  if (*(undefined4 **)(lVar10 + 0x60) == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)(lVar10 + 0x10);
  }
  if ((longlong)*(int *)(lVar10 + 0x68) != 0) {
    puVar9 = puVar7 + (longlong)*(int *)(lVar10 + 0x68) * 5;
    do {
      FUN_140875a5e(param_1,&local_68,*puVar7);
      (**(code **)(*local_68 + 0x28))(local_68,puVar7[1],1);
      plVar2 = local_60;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_60 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
      puVar7 = puVar7 + 5;
    } while (puVar7 != puVar9);
  }
  plVar2 = *(longlong **)(lVar3 + lVar8);
  (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
  lVar10 = *(longlong *)(param_1 + 0x60);
  if (*(longlong *)(lVar10 + 0x60 + lVar8) != 0) {
    FUN_1400020a8();
  }
  plVar2 = *(longlong **)(lVar10 + lVar8 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar2 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  FUN_140875ae0((longlong *)(param_1 + 0x60),param_2);
  *(undefined1 *)(param_1 + 0x110) = 1;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_58[2] ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403b91aa FUN_1403b91aa body=716 status=ok
// SIG undefined FUN_1403b91aa(void)

void FUN_1403b91aa(longlong param_1,int param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  bool bVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong uVar6;
  uint *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  int iVar19;
  int iVar20;
  
  iVar5 = *(int *)(param_1 + 0x30);
  if (iVar5 == 0) {
    uVar14 = 1;
    uVar18 = 0;
    iVar11 = 0;
    iVar19 = 0;
  }
  else {
    puVar7 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar7 = (uint *)(param_1 + 0x18);
    }
    uVar17 = *puVar7;
    if (uVar17 == 0) {
      iVar19 = iVar5 + 0x1e;
      if (-1 < iVar5 + -1) {
        iVar19 = iVar5 + -1;
      }
      uVar18 = 0;
      uVar14 = (ulonglong)(uint)(iVar19 >> 5);
      if (iVar19 >> 5 < 1) {
        uVar14 = uVar18;
      }
      iVar19 = 0;
      do {
        if (uVar14 == uVar18) {
          return;
        }
        iVar19 = iVar19 + 0x20;
        uVar17 = puVar7[uVar18 + 1];
        uVar18 = uVar18 + 1;
      } while (uVar17 == 0);
    }
    else {
      uVar18 = 0;
      iVar19 = 0;
    }
    uVar14 = (ulonglong)(-uVar17 & uVar17);
    uVar6 = uVar14 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar11 = (iVar19 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if (iVar5 <= iVar11) {
      iVar11 = iVar5;
    }
  }
  if (iVar11 < iVar5) {
    uVar17 = 0xffffffff;
    do {
      lVar15 = *(longlong *)(param_1 + 8);
      iVar5 = *(int *)(lVar15 + 0x30 + (longlong)iVar11 * 0x40);
      uVar6 = (ulonglong)iVar5;
      if (0 < (longlong)uVar6) {
        lVar15 = lVar15 + (longlong)iVar11 * 0x40;
        iVar20 = -iVar5;
        lVar10 = uVar6 * 0x14;
        uVar13 = uVar6;
        do {
          lVar9 = *(longlong *)(lVar15 + 0x28);
          if (*(longlong *)(lVar15 + 0x28) == 0) {
            lVar9 = lVar15 + 0x10;
          }
          if (*(int *)(lVar9 + -0x14 + lVar10) == param_2) {
            lVar8 = (longlong)(int)param_3[1];
            uVar12 = (int)param_3[1] + 1;
            *(uint *)(param_3 + 1) = uVar12;
            if (*(uint *)((longlong)param_3 + 0xc) < uVar12) {
              FUN_14087648e(param_3,lVar8);
            }
            lVar9 = lVar10 + lVar9;
            lVar2 = *param_3;
            *(undefined4 *)(lVar2 + 0x10 + lVar8 * 0x14) = *(undefined4 *)(lVar9 + -4);
            uVar4 = *(undefined8 *)(lVar9 + -0xc);
            puVar1 = (undefined8 *)(lVar2 + lVar8 * 0x14);
            *puVar1 = *(undefined8 *)(lVar9 + -0x14);
            puVar1[1] = uVar4;
            uVar12 = *(uint *)(lVar15 + 0x30);
            if (uVar13 != uVar12) {
              lVar9 = *(longlong *)(lVar15 + 0x28);
              if (*(longlong *)(lVar15 + 0x28) == 0) {
                lVar9 = lVar15 + 0x10;
              }
              memmove((void *)(lVar9 + lVar10 + -0x14),(void *)(lVar9 + lVar10),
                      (longlong)(int)(uVar12 + iVar20) * 0x14);
              uVar12 = *(uint *)(lVar15 + 0x30);
            }
            uVar6 = (ulonglong)(uVar12 - 1);
            *(uint *)(lVar15 + 0x30) = uVar12 - 1;
          }
          iVar5 = (int)uVar6;
          iVar20 = iVar20 + 1;
          lVar10 = lVar10 + -0x14;
          bVar3 = 1 < uVar13;
          uVar13 = uVar13 - 1;
        } while (bVar3);
      }
      if (iVar5 == 0) {
        FUN_140da27c2((longlong *)(param_1 + 8),iVar11);
      }
      uVar17 = uVar17 & ~(uint)uVar14;
      puVar7 = *(uint **)(param_1 + 0x28);
      if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
        puVar7 = (uint *)(param_1 + 0x18);
      }
      iVar5 = *(int *)(param_1 + 0x30);
      iVar11 = (int)uVar18;
      lVar15 = (longlong)iVar11;
      uVar12 = puVar7[lVar15] & uVar17;
      if (uVar12 == 0) {
        iVar20 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar20 = iVar5 + -1;
        }
        iVar20 = iVar20 >> 5;
        iVar16 = iVar20;
        if (iVar20 < iVar11) {
          iVar16 = iVar11;
        }
        if (iVar20 <= iVar11) {
          return;
        }
        lVar10 = 0;
        while( true ) {
          iVar19 = iVar19 + 0x20;
          uVar12 = puVar7[lVar15 + lVar10 + 1];
          if (uVar12 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar16 - lVar15 == lVar10) {
            return;
          }
        }
        uVar18 = (ulonglong)(iVar11 + (int)lVar10 + 1);
        uVar17 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar12 & uVar12);
      uVar6 = uVar14 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar11 = (iVar19 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    } while (iVar11 < iVar5);
  }
  return;
}



// FUNCTION 1403b9476 FUN_1403b9476 body=438 status=ok
// SIG undefined FUN_1403b9476(void)

undefined8 FUN_1403b9476(longlong param_1,int param_2,char param_3)

{
  undefined4 *puVar1;
  byte *pbVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))();
    uVar6 = 3;
    if (cVar5 == '\0') goto LAB_1403b9510;
  }
  if (param_3 == '\x01') {
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x40);
    local_38 = *puVar1;
    uStack_34 = puVar1[1];
    uStack_30 = puVar1[2];
    uStack_2c = puVar1[3];
    FUN_140cc16f8(param_1 + 0x18);
    FUN_140275104(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x40 + 0x10);
    FUN_140cc15ce(param_1 + 0x68);
    uVar3 = *(uint *)(param_1 + 0xa8);
    uVar7 = 0;
    if (0 < (int)uVar3) {
      uVar7 = 0;
      uVar8 = (ulonglong)uVar3;
      uVar9 = uVar3;
      do {
        uVar8 = uVar8 >> 1;
        uVar10 = (uint)uVar8 + (int)uVar7;
        if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar10 * 0x30) < param_2) {
          uVar7 = (ulonglong)(uVar10 + (uVar9 & 1));
        }
        bVar4 = 1 < uVar9;
        uVar9 = (uint)uVar8;
      } while (bVar4);
    }
    if (((int)uVar7 < (int)uVar3) &&
       (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar7 * 0x30) <= param_2)) {
      FUN_14756c10c(param_1 + 0xa0);
    }
    uVar6 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xa8);
    uVar7 = 0;
    if (0 < (int)uVar3) {
      uVar8 = (ulonglong)uVar3;
      uVar9 = uVar3;
      do {
        uVar8 = uVar8 >> 1;
        uVar10 = (uint)uVar8 + (int)uVar7;
        if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar10 * 0x30) < param_2) {
          uVar7 = (ulonglong)(uVar10 + (uVar9 & 1));
        }
        bVar4 = 1 < uVar9;
        uVar9 = (uint)uVar8;
      } while (bVar4);
    }
    if (((int)uVar7 < (int)uVar3) &&
       (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar7 * 0x30) <= param_2)) {
      FUN_14756c10c(param_1 + 0xa0);
    }
    else {
      pbVar2 = (byte *)(*(longlong *)(param_1 + 0x68) + 0x38 + (longlong)param_2 * 0x40);
      *pbVar2 = *pbVar2 | 2;
    }
    uVar6 = 1;
  }
LAB_1403b9510:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1403b962e FUN_1403b962e body=723 status=ok
// SIG undefined FUN_1403b962e(void)

void FUN_1403b962e(longlong param_1,int param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  bool bVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong uVar6;
  uint *puVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  
  iVar5 = *(int *)(param_1 + 0x30);
  if (iVar5 == 0) {
    uVar20 = 1;
    uVar19 = 0;
    iVar11 = 0;
    iVar17 = 0;
  }
  else {
    puVar7 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar7 = (uint *)(param_1 + 0x18);
    }
    uVar14 = *puVar7;
    if (uVar14 == 0) {
      iVar17 = iVar5 + 0x1e;
      if (-1 < iVar5 + -1) {
        iVar17 = iVar5 + -1;
      }
      uVar19 = 0;
      uVar20 = (ulonglong)(uint)(iVar17 >> 5);
      if (iVar17 >> 5 < 1) {
        uVar20 = uVar19;
      }
      iVar17 = 0;
      do {
        if (uVar20 == uVar19) {
          return;
        }
        iVar17 = iVar17 + 0x20;
        uVar14 = puVar7[uVar19 + 1];
        uVar19 = uVar19 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar19 = 0;
      iVar17 = 0;
    }
    uVar20 = (ulonglong)(-uVar14 & uVar14);
    uVar6 = uVar20 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar11 = (iVar17 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if (iVar5 <= iVar11) {
      iVar11 = iVar5;
    }
  }
  if (iVar11 < iVar5) {
    uVar14 = 0xffffffff;
    do {
      lVar15 = *(longlong *)(param_1 + 8);
      iVar5 = *(int *)(lVar15 + 0x28 + (longlong)iVar11 * 0x38);
      uVar6 = (ulonglong)iVar5;
      if (0 < (longlong)uVar6) {
        lVar15 = lVar15 + (longlong)iVar11 * 0x38;
        iVar10 = -iVar5;
        lVar13 = uVar6 * 0x14;
        uVar18 = uVar6;
        do {
          lVar9 = *(longlong *)(lVar15 + 0x20);
          if (*(longlong *)(lVar15 + 0x20) == 0) {
            lVar9 = lVar15 + 8;
          }
          if (*(int *)(lVar9 + -0x14 + lVar13) == param_2) {
            lVar8 = (longlong)(int)param_3[1];
            uVar12 = (int)param_3[1] + 1;
            *(uint *)(param_3 + 1) = uVar12;
            if (*(uint *)((longlong)param_3 + 0xc) < uVar12) {
              FUN_14087648e(param_3,lVar8);
            }
            lVar9 = lVar9 + lVar13;
            lVar2 = *param_3;
            *(undefined4 *)(lVar2 + 0x10 + lVar8 * 0x14) = *(undefined4 *)(lVar9 + -4);
            uVar4 = *(undefined8 *)(lVar9 + -0xc);
            puVar1 = (undefined8 *)(lVar2 + lVar8 * 0x14);
            *puVar1 = *(undefined8 *)(lVar9 + -0x14);
            puVar1[1] = uVar4;
            uVar12 = *(uint *)(lVar15 + 0x28);
            if (uVar18 != uVar12) {
              lVar9 = *(longlong *)(lVar15 + 0x20);
              if (*(longlong *)(lVar15 + 0x20) == 0) {
                lVar9 = lVar15 + 8;
              }
              memmove((void *)(lVar9 + lVar13 + -0x14),(void *)(lVar9 + lVar13),
                      (longlong)(int)(uVar12 + iVar10) * 0x14);
              uVar12 = *(uint *)(lVar15 + 0x28);
            }
            uVar6 = (ulonglong)(uVar12 - 1);
            *(uint *)(lVar15 + 0x28) = uVar12 - 1;
          }
          iVar5 = (int)uVar6;
          iVar10 = iVar10 + 1;
          lVar13 = lVar13 + -0x14;
          bVar3 = 1 < uVar18;
          uVar18 = uVar18 - 1;
        } while (bVar3);
      }
      if (iVar5 == 0) {
        FUN_140cc0dc4((longlong *)(param_1 + 8),iVar11);
      }
      uVar14 = uVar14 & ~(uint)uVar20;
      puVar7 = *(uint **)(param_1 + 0x28);
      if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
        puVar7 = (uint *)(param_1 + 0x18);
      }
      iVar5 = *(int *)(param_1 + 0x30);
      iVar11 = (int)uVar19;
      lVar15 = (longlong)iVar11;
      uVar12 = puVar7[lVar15] & uVar14;
      if (uVar12 == 0) {
        iVar10 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar10 = iVar5 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar16 = iVar10;
        if (iVar10 < iVar11) {
          iVar16 = iVar11;
        }
        if (iVar10 <= iVar11) {
          return;
        }
        lVar13 = 0;
        while( true ) {
          iVar17 = iVar17 + 0x20;
          uVar12 = puVar7[lVar15 + lVar13 + 1];
          if (uVar12 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar16 - lVar15 == lVar13) {
            return;
          }
        }
        uVar19 = (ulonglong)(iVar11 + (int)lVar13 + 1);
        uVar14 = 0xffffffff;
      }
      uVar20 = (ulonglong)(-uVar12 & uVar12);
      uVar6 = uVar20 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar11 = (iVar17 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    } while (iVar11 < iVar5);
  }
  return;
}



// FUNCTION 1403b9902 FUN_1403b9902 body=55 status=ok
// SIG undefined FUN_1403b9902(void)

void FUN_1403b9902(longlong *param_1)

{
  FUN_1403b993a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1403b993a FUN_1403b993a body=123 status=ok
// SIG undefined FUN_1403b993a(void)

void FUN_1403b993a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14474875a(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1403b99b6 FUN_1403b99b6 body=189 status=ok
// SIG undefined FUN_1403b99b6(void)

longlong * FUN_1403b99b6(longlong *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  uint local_58;
  longlong *local_48;
  code *local_40;
  longlong **local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  uVar1 = FUN_14482ca40();
  uVar2 = FUN_1403b9a74();
  local_38 = &local_48;
  local_40 = FUN_142840874;
  local_58 = uVar1 | param_4 | 0x90000000;
  local_48 = param_1;
  FUN_140245161(uVar2,&local_40,param_3,param_2);
  lVar3 = (longlong)(int)param_1[2];
  do {
    lVar3 = lVar3 + 1;
    *(int *)(param_1 + 2) = (int)lVar3;
    if ((int)param_1[1] <= lVar3) break;
  } while (*(longlong *)(*param_1 + lVar3 * 8) == 0);
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1403b9a74 FUN_1403b9a74 body=228 status=ok
// SIG undefined FUN_1403b9a74(void)

longlong FUN_1403b9a74(void)

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
  if (DAT_14cb90860 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_1489c8b59;
    local_40 = FUN_1465669bc;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x3d8;
    FUN_14081cfa3(L"/Script/CohtmlPlugin",L"CohtmlSystem",&DAT_14cb90860,&DAT_1489c8b58);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb90860;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403b9b5a FUN_1403b9b5a body=296 status=ok
// SIG undefined FUN_1403b9b5a(void)

void FUN_1403b9b5a(undefined8 param_1)

{
  byte bVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1403bb7fe();
  local_28[0] = 0;
  local_28[1] = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar1 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') goto LAB_1403b9bc2;
    bVar1 = DAT_14c8442b8 & 1;
  }
  if (bVar1 == 0) {
    FUN_1403b9dac(param_1);
  }
LAB_1403b9bc2:
  FUN_1403b9c84(local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403b9c84 FUN_1403b9c84 body=295 status=ok
// SIG undefined FUN_1403b9c84(void)

void FUN_1403b9c84(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = param_1[1];
  if (0 < (longlong)(int)lVar3) {
    local_58 = 0;
    uStack_50 = 0;
    lVar1 = *param_1;
    lVar6 = 0;
    do {
      plVar2 = *(longlong **)(lVar1 + lVar6);
      (**(code **)(*plVar2 + 8))(plVar2);
      uVar4 = uStack_50;
      lVar7 = (longlong)(int)uStack_50;
      uVar5 = (int)uStack_50 + 1;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
      if (uStack_50._4_4_ < uVar5) {
        FUN_147bb1fa6(&local_58,uVar4 & 0xffffffff);
      }
      *(longlong **)(local_58 + lVar7 * 8) = plVar2;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar2 + 1;
        lVar7 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + 1;
        UNLOCK();
        if ((int)lVar7 < 0) {
          FUN_140033559(".\\Runtime/Engine/Private/Materials/MaterialShared.cpp",0x9ae,
                        L"FMaterial::AddRef, Invalid NumDebugRefs %d",(int)lVar7 + 1);
        }
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar6);
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != 0) {
      FUN_14063db1c(param_1,0);
    }
    FUN_14357d55c(&local_58);
    FUN_147bb202b(local_58,uStack_50 & 0xffffffff);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403b9dac FUN_1403b9dac body=1508 status=ok
// SIG undefined FUN_1403b9dac(void)

void FUN_1403b9dac(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined2 *puVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  undefined1 local_101;
  longlong *local_100;
  longlong *local_f8;
  longlong local_f0;
  longlong local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  undefined8 *local_c0;
  int local_b8;
  undefined8 local_b0;
  undefined2 *local_a8;
  int local_a0;
  undefined8 *local_98 [2];
  longlong local_88;
  longlong *plStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_1403bb7fe();
  if ((*(byte *)(param_1 + 0x2a) & 1) != 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
      _Init_thread_footer(&DAT_14c8442bc);
    }
    bVar1 = DAT_14c8442b8;
    if (DAT_14c872bf0 == '\x01') {
      if (DAT_14c872bf1 != '\x01') goto LAB_1403b9ded;
      bVar1 = DAT_14c8442b8 & 1;
    }
    if (bVar1 == 0) {
      local_100 = param_3;
      local_e0 = (**(code **)(*param_1 + 0x2b8))(param_1);
      local_101 = DAT_14cb0cc00;
      local_d8 = 0;
      uStack_d0 = 0;
      local_f8 = param_1 + 0x59;
      uVar14 = DAT_14caec4b4 | *(uint *)(param_1 + 0x17) | 1 << ((byte)DAT_14c760db4 & 0x1f);
      do {
        uVar9 = -uVar14 & uVar14;
        uVar3 = 0;
        if (uVar14 != 0) {
          for (; (uVar14 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
          }
        }
        if (uVar9 == 0) {
          uVar3 = 0;
        }
        uVar13 = (ulonglong)*(ushort *)(&DAT_14ca85070 + (ulonglong)uVar3 * 2);
        local_118 = local_101;
        lVar5 = FUN_1403bc388(local_f8,local_e0,param_1,(ulonglong)uVar3);
        cVar2 = FUN_1403bb732(param_1);
        if (cVar2 != '\0') {
          plStack_80 = (longlong *)0x0;
          local_78 = 0x400000000;
          uVar15 = 0;
          FUN_1403bc586(param_1,&local_88,uVar13,0);
          iVar11 = (int)param_1[0x5a];
          if (0 < iVar11) {
            do {
              local_e8 = (longlong)(int)uVar15;
              lVar6 = *(longlong *)(*local_f8 + local_e8 * 8);
              if (((lVar6 != lVar5) && (*(uint *)(lVar6 + 0x24) == uVar3)) &&
                 ((ulonglong)*(byte *)(lVar6 + 0x20) != 4)) {
                plVar8 = plStack_80;
                if (plStack_80 == (longlong *)0x0) {
                  plVar8 = &local_88;
                }
                if (*(char *)((longlong)plVar8 + (ulonglong)*(byte *)(lVar6 + 0x20)) == '\0') {
                  local_f0 = (longlong)(int)local_100[1];
                  uVar4 = (int)local_100[1] + 1;
                  *(uint *)(local_100 + 1) = uVar4;
                  if (*(uint *)((longlong)local_100 + 0xc) < uVar4) {
                    FUN_1403bc9ae(local_100,local_f0);
                  }
                  *(longlong *)(*local_100 + local_f0 * 8) = lVar6;
                  iVar11 = (int)param_1[0x5a];
                  iVar10 = ~uVar15 + iVar11;
                  if (iVar10 != 0) {
                    if (0 < iVar10) {
                      iVar10 = 1;
                    }
                    memmove((void *)(param_1[0x59] + local_e8 * 8),
                            (void *)(param_1[0x59] + (longlong)(iVar11 - iVar10) * 8),
                            (longlong)iVar10 << 3);
                    iVar11 = (int)param_1[0x5a];
                  }
                  *(int *)(param_1 + 0x5a) = iVar11 + -1;
                  FUN_147bbac7e(local_f8);
                  uVar15 = uVar15 - 1;
                  iVar11 = (int)param_1[0x5a];
                }
              }
              uVar15 = uVar15 + 1;
            } while ((int)uVar15 < iVar11);
          }
          if (plStack_80 != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
        uVar3 = uStack_d0._4_4_;
        iVar11 = 0;
        if (uStack_d0 < 0) {
          uStack_d0 = (ulonglong)uStack_d0._4_4_ << 0x20;
          FUN_14063db1c(&local_d8,0);
          uVar3 = uStack_d0._4_4_;
          iVar11 = (int)uStack_d0;
        }
        uStack_d0 = CONCAT44(uStack_d0._4_4_,iVar11 + 1U);
        if (uVar3 < iVar11 + 1U) {
          FUN_1403bc9ae(&local_d8,iVar11);
        }
        *(longlong *)(local_d8 + (longlong)iVar11 * 8) = lVar5;
        (**(code **)(*param_1 + 0x2b8))(param_1);
        if (0 < (int)uStack_d0) {
          lVar5 = 0;
          do {
            plVar8 = *(longlong **)(local_d8 + lVar5 * 8);
            local_88 = 0;
            plStack_80 = (longlong *)0x0;
            local_78 = CONCAT35((int3)((ulonglong)local_78 >> 0x28),0x100000000);
            local_70 = 0xffffffff00000003;
            local_68 = 0;
            (**(code **)(*plVar8 + 0x28))(plVar8,uVar13,0,&local_88);
            cVar2 = FUN_1409ee962(plVar8);
            if (cVar2 == '\0') {
              lVar6 = (**(code **)(*param_1 + 0x2b8))(param_1);
              local_88 = 0;
              plStack_80 = (longlong *)0x0;
              local_b0 = *(undefined8 *)(&DAT_14ca814bc + uVar13 * 0x3c);
              FUN_1400021e4(&local_b0,&local_a8);
              puVar12 = &DAT_149dfb77a;
              if (local_a0 != 0) {
                puVar12 = local_a8;
              }
              if (lVar6 == 0) {
                FUN_140002266(local_98,
                              L"Failed to compile Material Instance with Base %s for platform %s, Default Material will be used in game.\n"
                              ,&DAT_149e43d78,puVar12);
                FUN_1400020e8(&local_88,local_98[0]);
                puVar7 = local_98[0];
              }
              else {
                local_98[0] = *(undefined8 **)(lVar6 + 0x18);
                FUN_1400021e4(local_98,&local_c0);
                puVar7 = (undefined8 *)&DAT_149dfb77a;
                if (local_b8 != 0) {
                  puVar7 = local_c0;
                }
                FUN_140002266(local_98,
                              L"Failed to compile Material Instance with Base %s for platform %s, Default Material will be used in game.\n"
                              ,puVar7,puVar12);
                FUN_1400020e8(&local_88,local_98[0]);
                puVar7 = local_c0;
                if (local_98[0] != (undefined8 *)0x0) {
                  FUN_1400020a8();
                  puVar7 = local_c0;
                }
              }
              if (puVar7 != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
              if (local_a8 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              if (local_88 != 0) {
                FUN_1400020a8();
              }
            }
            lVar5 = lVar5 + 1;
          } while (lVar5 < (int)uStack_d0);
        }
        bVar16 = uVar9 != uVar14;
        uVar14 = uVar9 ^ uVar14;
      } while (bVar16);
      if (local_d8 != 0) {
        FUN_1400020a8();
      }
    }
  }
LAB_1403b9ded:
  (**(code **)(*param_1 + 0x568))(param_1,1);
  FUN_1403ba93c(param_1);
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403ba3b2 FUN_1403ba3b2 body=1416 status=ok
// SIG undefined FUN_1403ba3b2(void)

void FUN_1403ba3b2(undefined8 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  byte bVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined ***pppuVar15;
  uint *puVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined1 local_69;
  undefined8 local_68;
  undefined ***local_58;
  undefined **local_48;
  undefined8 local_40;
  undefined1 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar5 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') goto LAB_1403ba519;
    bVar5 = DAT_14c8442b8 & 1;
  }
  if (bVar5 != 0) goto LAB_1403ba519;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar8 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar8 != 2) {
      if (iVar8 != 1) goto LAB_1403ba448;
      DVar9 = FUN_140ad26c0();
      DVar10 = GetCurrentThreadId();
      if (DVar9 == DVar10) goto LAB_1403ba44d;
      goto LAB_1403ba47f;
    }
  }
  else {
LAB_1403ba448:
    if (iVar8 != 0x10) {
LAB_1403ba47f:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar8 = *(int *)(lVar4 + 0xc60), iVar8 == 2))
        goto LAB_1403ba44d;
        if (iVar8 == 1) {
          DVar9 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          if (DVar9 == DVar10) goto LAB_1403ba44d;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar12 = (uint *)*puVar2;
        if (puVar12 != (uint *)0x0) goto LAB_1403ba5da;
        while( true ) {
          uVar14 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar14 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar14 | 1;
            __tlregdtor(&LAB_14357e25f);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar11 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar11 == (undefined4 *)0x0) {
            puVar11 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar11 = 0xffffffff;
          *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
          puVar11[0x12] = 0;
          *puVar2 = puVar11;
          FUN_140217a48(puVar2);
          puVar12 = (uint *)*puVar2;
LAB_1403ba5da:
          puVar18 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar16 = (uint *)(puVar18 + 0x17);
          uVar14 = puVar12[0x12];
          if (puVar16 <= puVar12 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
            LOCK();
            uVar3 = *puVar12;
            *puVar12 = *puVar12 + uVar14 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar14) != 0xffffffff) break;
            puVar12 = (uint *)*puVar2;
            *puVar12 = 0xffffffff;
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
            puVar12[0x12] = 0;
            *puVar2 = puVar12;
            puVar18 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
            puVar16 = (uint *)(puVar18 + 0x17);
            uVar14 = 0;
            if (puVar16 <= puVar12 + 0x4000) {
              uVar14 = 1;
              goto LAB_1403ba65a;
            }
          }
        }
        uVar14 = uVar14 + 1;
LAB_1403ba65a:
        *(uint **)(puVar12 + 0x10) = puVar16;
        puVar12[0x12] = uVar14;
        iVar8 = 0;
        FUN_1447247dc(puVar18,0);
        *puVar18 = &PTR_FUN_14a9db900;
        puVar18[0x15] = param_1;
        *(char *)(puVar18 + 0x16) = (char)param_2;
        uVar6 = (undefined4)local_68;
        *(undefined4 *)((longlong)puVar18 + 0xb1) = uVar6;
        *(undefined4 *)((longlong)puVar18 + 0xb4) = local_68._3_4_;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar14 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar14 < 2) {
            uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
            iVar8 = 0;
          }
          else {
            uVar17 = 2;
          }
        }
        else {
          iVar8 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar17 = 5;
        }
        if (*(code **)(puVar18[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar18[0xe] + 0x18))(puVar18 + 0xe,puVar18 + 9);
        }
        puVar18[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar18[9] = puVar18;
        puVar18[10] = puVar18;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar7 = 1;
          if ((char)uVar17 != '\x06') {
            uVar7 = uVar17;
          }
          uVar17 = uVar7;
          uVar13 = 0;
        }
        else {
          if ((char)uVar17 == '\x06') {
            uVar17 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar13 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar18[0xf] = uVar13;
        puVar18[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar18 + 0x1c) = iVar8;
        if (puVar18 == (undefined8 *)0x0) {
          local_69 = 1;
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
          UNLOCK();
          local_69 = 1;
          FUN_1447439e4(puVar18);
          LOCK();
          piVar1 = (int *)(puVar18 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar18)(puVar18,1);
          }
        }
      }
      else {
        local_78 = &local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14a9db8a0;
        local_68 = &LAB_14357ffea;
        local_40 = param_1;
        local_38 = (char)param_2;
        FUN_14005a792(&DAT_14ca9a440,L"FCacheUniformExpressionsCommand",&DAT_14caf122c);
        if (local_68 != (undefined1 *)0x0) {
          pppuVar15 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar15 = &local_48;
          }
          (*(code *)(*pppuVar15)[2])();
        }
      }
      goto LAB_1403ba519;
    }
  }
LAB_1403ba44d:
  FUN_14006fee2(param_1,&DAT_14ca85100,param_2);
LAB_1403ba519:
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403ba93c FUN_1403ba93c body=522 status=ok
// SIG undefined FUN_1403ba93c(void)

void FUN_1403ba93c(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 unaff_RBX;
  longlong *plVar5;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  code *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar5 = (longlong *)param_1[0x22];
  if (plVar5 != (longlong *)0x0) {
    local_48 = 0;
    uStack_40 = 0;
    cVar2 = (**(code **)(*plVar5 + 0x2e0))(plVar5,param_1);
    if (cVar2 == '\0') {
      if (DAT_14caec470 == 0) {
        local_60 = &local_30;
        local_30 = FUN_1417df956;
        local_50 = FUN_14081d0ea;
        local_58 = &LAB_1463eaa20;
        local_68 = &LAB_147bbd9ea;
        local_70 = FUN_1401cf6d7;
        local_78 = L"Engine";
        local_80 = 0;
        local_88 = 0x10000000;
        local_90 = 8;
        local_98 = 0x330;
        FUN_14081cfa3(L"/Script/Engine",L"MaterialInstanceDynamic",&DAT_14caec470,FUN_1463eb22e);
      }
      if ((*(int *)(plVar5[2] + 0x38) < *(int *)(DAT_14caec470 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(plVar5[2] + 0x30) + (longlong)*(int *)(DAT_14caec470 + 0x38) * 8) !=
          DAT_14caec470 + 0x30)) goto LAB_1403ba9bf;
    }
  }
  FUN_14003fbd6();
  plVar5 = DAT_14caea080;
LAB_1403ba9bf:
  if (*(char *)((longlong)param_1 + 0x154) == '\x01') {
    uVar3 = (undefined4)
            CONCAT71((int7)((ulonglong)unaff_RBX >> 8),*(undefined1 *)((longlong)param_1 + 0x155));
  }
  else {
    uVar3 = 0;
  }
  if (plVar5 != (longlong *)0x0) {
    uVar3 = (**(code **)(*param_1 + 0x468))(param_1);
    (**(code **)(*param_1 + 0x468))(param_1);
  }
  lVar1 = param_1[0x49];
  if (lVar1 != 0) {
    FUN_1403bb18e(lVar1,plVar5,uVar3,uVar3);
    puVar4 = &DAT_14caec320;
    if ((undefined8 *)param_1[0x56] != (undefined8 *)0x0) {
      puVar4 = (undefined8 *)param_1[0x56];
    }
    FUN_1403bac02(lVar1,puVar4);
  }
  FUN_1403bcb49(param_1);
  if (param_1[0x49] != 0) {
    FUN_1403bde7a(param_1);
    if (param_1[0x49] != 0) {
      LOCK();
      *(uint *)(param_1 + 0x5b) = *(uint *)(param_1 + 0x5b) | 2;
      UNLOCK();
      FUN_1403ba3b2(param_1[0x49],0);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403bab48 FUN_1403bab48 body=62 status=ok
// SIG undefined FUN_1403bab48(void)

byte FUN_1403bab48(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = 0;
  bVar2 = 0;
  if (*(char *)(param_1 + 0x154) == '\x01') {
    bVar2 = *(byte *)(param_1 + 0x155);
  }
  if (*(longlong **)(param_1 + 0x110) != (longlong *)0x0) {
    bVar1 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x468))();
  }
  return bVar1 | bVar2;
}



// FUNCTION 1403bab86 FUN_1403bab86 body=123 status=ok
// SIG undefined FUN_1403bab86(void)

undefined8 FUN_1403bab86(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  longlong *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar2 = CONCAT71((int7)(local_8 >> 8),1);
  if (param_2 != param_1) {
    plVar3 = param_3;
    if (*(longlong *)(param_1 + 0x110) == 0) {
      uVar2 = 0;
    }
    else {
      do {
        if (*plVar3 == param_1) goto LAB_1403babe2;
        plVar1 = plVar3 + 1;
        plVar3 = (longlong *)*plVar1;
      } while ((longlong *)*plVar1 != (longlong *)0x0);
      *param_3 = param_1;
      local_18 = 0;
      local_10 = param_3;
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x2e0))
                        (*(longlong **)(param_1 + 0x110),param_2,&local_18);
    }
  }
LAB_1403babe2:
  if ((local_8 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1403bac02 FUN_1403bac02 body=1419 status=ok
// SIG undefined FUN_1403bac02(void)

void FUN_1403bac02(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  void *_Src;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 auStack_a8 [32];
  code **local_88;
  longlong local_80;
  void *local_78;
  undefined8 uStack_70;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = (void *)0x0;
  uVar12 = *(uint *)(param_2 + 1);
  _Src = (void *)*param_2;
  uStack_70 = CONCAT44(uStack_70._4_4_,uVar12);
  local_80 = param_1;
  if ((longlong)(int)uVar12 == 0) {
    uStack_70 = (ulonglong)uVar12;
  }
  else {
    FUN_144a06ca8(&local_78,uVar12,0);
    memcpy(local_78,_Src,(longlong)(int)uVar12 << 2);
  }
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_1403bac8a;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_1403bac8f;
      goto LAB_1403bad01;
    }
  }
  else {
LAB_1403bac8a:
    if (iVar6 != 0x10) {
LAB_1403bad01:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_1403bac8f;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_1403bac8f;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_1403bae8a;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_143574684);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar9 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar2 = puVar9;
          FUN_140217a48(puVar2);
          puVar10 = (uint *)*puVar2;
LAB_1403bae8a:
          puVar16 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar16 + 0x18);
          uVar12 = puVar10[0x12];
          if (puVar14 <= puVar10 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
            LOCK();
            uVar3 = *puVar10;
            *puVar10 = *puVar10 + uVar12 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar12) != 0xffffffff) break;
            puVar10 = (uint *)*puVar2;
            *puVar10 = 0xffffffff;
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
            puVar10[0x12] = 0;
            *puVar2 = puVar10;
            puVar16 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
            puVar14 = (uint *)(puVar16 + 0x18);
            uVar12 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_1403baf0a;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_1403baf0a:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14a9d46f8;
        puVar16[0x15] = local_80;
        puVar16[0x16] = local_78;
        local_78 = (void *)0x0;
        *(undefined4 *)(puVar16 + 0x17) = (undefined4)uStack_70;
        *(undefined4 *)((longlong)puVar16 + 0xbc) = uStack_70._4_4_;
        uStack_70 = 0;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar12 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
            uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
          }
          else {
            uVar15 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar15 = 5;
        }
        if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
        }
        puVar16[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar16[9] = puVar16;
        puVar16[10] = puVar16;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar5 = 1;
          if ((char)uVar15 != '\x06') {
            uVar5 = uVar15;
          }
          uVar15 = uVar5;
          uVar11 = 0;
        }
        else {
          if ((char)uVar15 == '\x06') {
            uVar15 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar11 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar16[0xf] = uVar11;
        puVar16[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar16 + 0x1c) = iVar6;
        if (puVar16 == (undefined8 *)0x0) {
          local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(puVar16);
          LOCK();
          piVar1 = (int *)(puVar16 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar16)(puVar16,1);
          }
        }
      }
      else {
        local_88 = local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14a9d4680;
        local_40 = local_80;
        local_38 = local_78;
        uStack_30 = uStack_70;
        local_78 = (void *)0x0;
        uStack_70 = 0;
        local_68[0] = FUN_143574926;
        FUN_14005a792(&DAT_14ca9a440,L"MaterialInstanceResource_UpdateCachedData",&DAT_14caec34c);
        if (local_68[0] != (code *)0x0) {
          pppuVar13 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar13 = &local_48;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_1403badb6;
    }
  }
LAB_1403bac8f:
  lVar4 = local_80;
  if ((void **)(local_80 + 0x1e0) != &local_78) {
    if (*(longlong *)(local_80 + 0x1e0) != 0) {
      FUN_1400020a8();
    }
    *(void **)(lVar4 + 0x1e0) = local_78;
    local_78 = (void *)0x0;
    *(undefined4 *)(lVar4 + 0x1e8) = (undefined4)uStack_70;
    *(undefined4 *)(lVar4 + 0x1ec) = uStack_70._4_4_;
    uStack_70 = 0;
  }
LAB_1403badb6:
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403bb18e FUN_1403bb18e body=1442 status=ok
// SIG undefined FUN_1403bb18e(void)

void FUN_1403bb18e(longlong param_1,longlong *param_2,undefined1 param_3,undefined1 param_4)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined ***pppuVar15;
  uint *puVar16;
  ulonglong uVar17;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined1 local_89;
  undefined8 local_88;
  undefined ***local_78;
  undefined **local_68;
  longlong local_60;
  longlong *local_58;
  undefined1 local_50;
  undefined1 local_4f;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar3 = *(longlong **)(param_1 + 0xd8);
  if (plVar3 == param_2) goto LAB_1403bb335;
  *(longlong **)(param_1 + 0xd8) = param_2;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_1403bb1f4;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_1403bb1f9;
      goto LAB_1403bb26e;
    }
LAB_1403bb1f9:
    puVar10 = (undefined8 *)(**(code **)(*param_2 + 0x2f0))(param_2);
    puVar5 = *(undefined8 **)(param_1 + 200);
    if (puVar5 != puVar10) {
      *(undefined8 **)(param_1 + 200) = puVar10;
      if (puVar10 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar10 + 0xc) = *(int *)(puVar10 + 0xc) + 1;
        UNLOCK();
      }
      if (puVar5 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar5)(puVar5,1);
        }
      }
    }
    *(undefined1 *)(param_1 + 0xc0) = param_3;
    *(undefined1 *)(param_1 + 0xc1) = param_4;
    FUN_1447a4a8e(param_1,1);
  }
  else {
LAB_1403bb1f4:
    if (iVar7 == 0x10) goto LAB_1403bb1f9;
LAB_1403bb26e:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar4 + 0xc60), iVar7 == 2))
      goto LAB_1403bb1f9;
      if (iVar7 == 1) {
        DVar8 = FUN_140ad26c0();
        DVar9 = GetCurrentThreadId();
        if (DVar8 == DVar9) goto LAB_1403bb1f9;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar5 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar12 = (uint *)*puVar5;
      if (puVar12 != (uint *)0x0) goto LAB_1403bb404;
      while( true ) {
        uVar14 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar14 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar14 | 1;
          __tlregdtor(&LAB_143574684);
        }
        lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar11 = *(undefined4 **)(lVar4 + 0x310);
        *(undefined8 *)(lVar4 + 0x310) = 0;
        if (puVar11 == (undefined4 *)0x0) {
          puVar11 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar11 = 0xffffffff;
        *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
        puVar11[0x12] = 0;
        *puVar5 = puVar11;
        FUN_140217a48(puVar5);
        puVar12 = (uint *)*puVar5;
LAB_1403bb404:
        puVar10 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar16 = (uint *)(puVar10 + 0x18);
        uVar14 = puVar12[0x12];
        if (puVar16 <= puVar12 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
          LOCK();
          uVar2 = *puVar12;
          *puVar12 = *puVar12 + uVar14 + 1;
          UNLOCK();
          if ((uVar2 ^ uVar14) != 0xffffffff) break;
          puVar12 = (uint *)*puVar5;
          *puVar12 = 0xffffffff;
          *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
          puVar12[0x12] = 0;
          *puVar5 = puVar12;
          puVar10 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
          puVar16 = (uint *)(puVar10 + 0x18);
          uVar14 = 0;
          if (puVar16 <= puVar12 + 0x4000) {
            uVar14 = 1;
            goto LAB_1403bb488;
          }
        }
      }
      uVar14 = uVar14 + 1;
LAB_1403bb488:
      *(uint **)(puVar12 + 0x10) = puVar16;
      puVar12[0x12] = uVar14;
      iVar7 = 0;
      FUN_1447247dc(puVar10,0);
      *puVar10 = &PTR_FUN_14a9d4670;
      puVar10[0x15] = param_1;
      puVar10[0x16] = param_2;
      *(undefined1 *)(puVar10 + 0x17) = param_3;
      *(undefined1 *)((longlong)puVar10 + 0xb9) = param_4;
      *(undefined4 *)((longlong)puVar10 + 0xba) = (undefined4)local_88;
      *(undefined2 *)((longlong)puVar10 + 0xbe) = local_88._4_2_;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar14 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar14 < 2) {
          uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
          iVar7 = 0;
        }
        else {
          uVar17 = 2;
        }
      }
      else {
        iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar17 = 5;
      }
      if (*(code **)(puVar10[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar10[0xe] + 0x18))(puVar10 + 0xe,puVar10 + 9);
      }
      puVar10[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar10[9] = puVar10;
      puVar10[10] = puVar10;
      lVar4 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar4 == 0) {
        uVar6 = 1;
        if ((char)uVar17 != '\x06') {
          uVar6 = uVar17;
        }
        uVar17 = uVar6;
        uVar13 = 0;
      }
      else {
        if ((char)uVar17 == '\x06') {
          uVar17 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
        }
        uVar13 = *(undefined8 *)(lVar4 + 0x30);
      }
      puVar10[0xf] = uVar13;
      puVar10[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar10 + 0x1c) = iVar7;
      if (puVar10 == (undefined8 *)0x0) {
        local_89 = 1;
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar10 + 1) = *(int *)(puVar10 + 1) + 1;
        UNLOCK();
        local_89 = 1;
        FUN_1447439e4(puVar10);
        LOCK();
        piVar1 = (int *)(puVar10 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar10)(puVar10,1);
        }
      }
    }
    else {
      local_98 = &local_88;
      local_78 = (undefined ***)0x0;
      local_68 = &PTR_LAB_14a9d4610;
      local_88 = FUN_1435746ac;
      local_60 = param_1;
      local_58 = param_2;
      local_50 = param_3;
      local_4f = param_4;
      FUN_14005a792(&DAT_14ca9a440,L"InitMaterialInstanceResource",&DAT_14caec348);
      if (local_88 != (code *)0x0) {
        pppuVar15 = local_78;
        if (local_78 == (undefined ***)0x0) {
          pppuVar15 = &local_68;
        }
        (*(code *)(*pppuVar15)[2])();
      }
    }
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_1400fb146(plVar3 + 0x10,0);
  }
LAB_1403bb335:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403bb732 FUN_1403bb732 body=203 status=ok
// SIG undefined FUN_1403bb732(void)

undefined8 FUN_1403bb732(longlong *param_1)

{
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  lVar5 = DAT_14caec4a0;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
    uVar6 = 0;
  }
  else if (iVar1 == 1) {
    DVar2 = FUN_140ad26c0();
    DVar3 = GetCurrentThreadId();
    uVar6 = (ulonglong)(DVar2 != DVar3);
  }
  else {
    uVar6 = 1;
  }
  iVar1 = *(int *)(lVar5 + uVar6 * 4);
  if (iVar1 != 0) {
    if (iVar1 == 2) {
      uVar4 = 1;
      goto LAB_1403bb793;
    }
    local_38 = 0;
    uStack_30 = 0;
    lVar5 = (**(code **)(*param_1 + 0x2c0))(param_1);
    if (lVar5 != 0) {
      uVar6 = CONCAT71((int7)((ulonglong)lVar5 >> 8),*(undefined1 *)(lVar5 + 0x1d6)) &
              0xffffffffffffff40;
      uVar4 = CONCAT71((int7)(uVar6 >> 8),(byte)uVar6 >> 6);
      goto LAB_1403bb793;
    }
  }
  uVar4 = 0;
LAB_1403bb793:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403bb7fe FUN_1403bb7fe body=2453 status=ok
// SIG undefined FUN_1403bb7fe(void)

void FUN_1403bb7fe(longlong param_1)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  char cVar6;
  undefined1 uVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined8 uVar10;
  byte bVar11;
  uint uVar12;
  ulonglong uVar13;
  byte bVar14;
  undefined4 uVar15;
  undefined1 auStack_48 [32];
  undefined2 local_28;
  undefined6 uStack_26;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong **)(param_1 + 0x110) == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x164) = 0x4080000000000000;
    *(undefined1 *)(param_1 + 0x158) = 0;
    *(undefined2 *)(param_1 + 0x160) = 2;
    *(byte *)(param_1 + 0x150) = *(byte *)(param_1 + 0x150) & 0x8f;
    *(undefined4 *)(param_1 + 0x16c) = 0x3f000000;
    *(byte *)(param_1 + 0x151) = *(byte *)(param_1 + 0x151) & 0xe0;
    *(undefined8 *)(param_1 + 0x170) = 0x3f80000040800000;
    *(undefined4 *)(param_1 + 0x178) = 0;
  }
  else {
    bVar14 = *(byte *)(param_1 + 0x210);
    if ((bVar14 & 1) == 0) {
      uVar15 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x3f8))();
      *(undefined4 *)(param_1 + 0x228) = uVar15;
      bVar14 = *(byte *)(param_1 + 0x210);
    }
    else {
      uVar15 = *(undefined4 *)(param_1 + 0x228);
    }
    *(undefined4 *)(param_1 + 0x164) = uVar15;
    if ((bVar14 & 0x10) == 0) {
      bVar5 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x400))();
      bVar14 = *(byte *)(param_1 + 0x210);
      *(byte *)(param_1 + 0x150) = *(byte *)(param_1 + 0x150) & 0x7f | bVar5 << 7;
      bVar5 = *(byte *)(param_1 + 0x21c) & 0xf7 | (bVar5 & 1) << 3;
      *(byte *)(param_1 + 0x21c) = bVar5;
    }
    else {
      bVar5 = *(byte *)(param_1 + 0x21c);
      *(byte *)(param_1 + 0x150) = *(byte *)(param_1 + 0x150) & 0x7f | (bVar5 & 8) << 4;
    }
    if ((char)bVar14 < '\0') {
      bVar14 = *(byte *)(param_1 + 0x151) & 0xfe | bVar5 >> 4 & 1;
      *(byte *)(param_1 + 0x151) = bVar14;
    }
    else {
      bVar5 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x488))();
      bVar14 = *(byte *)(param_1 + 0x151) & 0xfe | bVar5;
      *(byte *)(param_1 + 0x151) = bVar14;
      bVar5 = *(byte *)(param_1 + 0x21c) & 0xef | bVar5 << 4;
      *(byte *)(param_1 + 0x21c) = bVar5;
    }
    bVar11 = *(byte *)(param_1 + 0x211);
    if ((bVar11 & 1) == 0) {
      cVar6 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x508))();
      bVar11 = *(byte *)(param_1 + 0x211);
      bVar14 = *(byte *)(param_1 + 0x151) & 0xfb | cVar6 * '\x04';
      *(byte *)(param_1 + 0x151) = bVar14;
      bVar5 = *(byte *)(param_1 + 0x21c) & 0xdf | cVar6 << 5;
      *(byte *)(param_1 + 0x21c) = bVar5;
    }
    else {
      bVar14 = bVar14 & 0xfb | bVar5 >> 3 & 4;
      *(byte *)(param_1 + 0x151) = bVar14;
    }
    if ((bVar11 & 2) == 0) {
      cVar6 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x550))();
      bVar14 = *(byte *)(param_1 + 0x151) & 0xf7 | cVar6 * '\b';
      *(byte *)(param_1 + 0x151) = bVar14;
      *(byte *)(param_1 + 0x21c) = *(byte *)(param_1 + 0x21c) & 0xbf | cVar6 << 6;
    }
    else {
      bVar14 = bVar14 & 0xf7 | bVar5 >> 3 & 8;
      *(byte *)(param_1 + 0x151) = bVar14;
    }
    if ((*(byte *)(param_1 + 0x210) & 4) == 0) {
      (**(code **)(**(longlong **)(param_1 + 0x110) + 0x410))
                (*(longlong **)(param_1 + 0x110),&local_28);
      *(undefined2 *)(param_1 + 0x160) = local_28;
      cVar6 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x418))();
      *(byte *)(param_1 + 0x151) = *(byte *)(param_1 + 0x151) & 0xfd | cVar6 * '\x02';
      if (cVar6 == '\0') {
        uVar1 = *(ushort *)(param_1 + 0x160);
        if (uVar1 == 0) {
          uVar7 = 0x20;
        }
        else {
          iVar3 = 0;
          if (uVar1 != 0) {
            for (; (uVar1 >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
            }
          }
          uVar7 = (undefined1)iVar3;
        }
        *(undefined1 *)(param_1 + 0x225) = uVar7;
      }
      else {
        *(undefined1 *)(param_1 + 0x225) = 0xe;
      }
    }
    else if (*(byte *)(param_1 + 0x225) == 0xe) {
      (**(code **)(**(longlong **)(param_1 + 0x110) + 0x410))
                (*(longlong **)(param_1 + 0x110),&local_28);
      *(undefined2 *)(param_1 + 0x160) = local_28;
      cVar6 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x418))();
      *(byte *)(param_1 + 0x151) = *(byte *)(param_1 + 0x151) & 0xfd | cVar6 * '\x02';
    }
    else {
      *(short *)(param_1 + 0x160) = (short)(1 << (*(byte *)(param_1 + 0x225) & 0x1f));
      *(byte *)(param_1 + 0x151) = bVar14 & 0xfd;
    }
    lVar4 = DAT_14ca97170;
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar13 = 0;
    }
    else if (iVar3 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      uVar13 = (ulonglong)(DVar8 != DVar9);
    }
    else {
      uVar13 = 1;
    }
    if (*(int *)(lVar4 + uVar13 * 4) < 1) {
      if (*(char *)(param_1 + 0x158) == '\a') {
        *(undefined1 *)(param_1 + 0x158) = 2;
      }
      if (*(char *)(param_1 + 0x224) == '\a') {
        *(undefined1 *)(param_1 + 0x224) = 2;
      }
    }
    else {
      uVar7 = FUN_147bae665(*(undefined1 *)(param_1 + 0x224),*(undefined2 *)(param_1 + 0x160));
      *(undefined1 *)(param_1 + 0x224) = uVar7;
      uVar2 = *(undefined2 *)(param_1 + 0x160);
      uVar15 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x408))();
      uVar7 = FUN_147bae665(uVar15,uVar2);
      *(undefined1 *)(param_1 + 0x158) = uVar7;
    }
    if ((*(byte *)(param_1 + 0x210) & 2) == 0) {
      uVar7 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x408))();
      *(undefined1 *)(param_1 + 0x224) = uVar7;
    }
    else {
      uVar7 = *(undefined1 *)(param_1 + 0x224);
    }
    *(undefined1 *)(param_1 + 0x158) = uVar7;
    FUN_1403bc1fe(DAT_14ca85550,param_1 + 0x160);
    bVar14 = *(byte *)(param_1 + 0x210);
    if ((bVar14 & 0x20) == 0) {
      bVar5 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x420))();
      bVar14 = *(byte *)(param_1 + 0x210);
      bVar11 = *(byte *)(param_1 + 0x150) & 0xef | bVar5 << 4;
      *(byte *)(param_1 + 0x150) = bVar11;
      bVar5 = *(byte *)(param_1 + 0x21c) & 0xfe | bVar5;
      *(byte *)(param_1 + 0x21c) = bVar5;
    }
    else {
      bVar5 = *(byte *)(param_1 + 0x21c);
      bVar11 = *(byte *)(param_1 + 0x150) & 0xef | (bVar5 & 1) << 4;
      *(byte *)(param_1 + 0x150) = bVar11;
    }
    if ((bVar14 & 0x40) == 0) {
      bVar5 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x428))();
      bVar14 = *(byte *)(param_1 + 0x210);
      bVar11 = *(byte *)(param_1 + 0x150) & 0xdf | bVar5 << 5;
      *(byte *)(param_1 + 0x150) = bVar11;
      bVar5 = *(byte *)(param_1 + 0x21c) & 0xfd | (bVar5 & 7) << 1;
      *(byte *)(param_1 + 0x21c) = bVar5;
    }
    else {
      bVar11 = bVar11 & 0xdf | (bVar5 & 2) << 4;
      *(byte *)(param_1 + 0x150) = bVar11;
    }
    if ((bVar14 & 8) == 0) {
      bVar14 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x478))();
      *(byte *)(param_1 + 0x150) = *(byte *)(param_1 + 0x150) & 0xbf | bVar14 << 6;
      *(byte *)(param_1 + 0x21c) = *(byte *)(param_1 + 0x21c) & 0xfb | (bVar14 & 3) << 2;
    }
    else {
      *(byte *)(param_1 + 0x150) = bVar11 & 0xbf | (bVar5 & 4) << 4;
    }
    bVar14 = *(byte *)(param_1 + 0x211);
    if ((bVar14 & 4) == 0) {
      (**(code **)(**(longlong **)(param_1 + 0x110) + 0x4d0))
                (*(longlong **)(param_1 + 0x110),&local_28);
      uVar10 = CONCAT62(uStack_26,local_28);
      *(undefined8 *)(param_1 + 0x22c) = uVar10;
      bVar14 = *(byte *)(param_1 + 0x211);
    }
    else {
      uVar10 = *(undefined8 *)(param_1 + 0x22c);
    }
    *(undefined8 *)(param_1 + 0x168) = uVar10;
    if ((bVar14 & 8) == 0) {
      cVar6 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x4d8))();
      bVar14 = *(byte *)(param_1 + 0x211);
      *(byte *)(param_1 + 0x151) = *(byte *)(param_1 + 0x151) & 0xef | cVar6 << 4;
      *(byte *)(param_1 + 0x21c) = *(byte *)(param_1 + 0x21c) & 0x7f | cVar6 << 7;
    }
    else {
      *(byte *)(param_1 + 0x151) =
           *(byte *)(param_1 + 0x151) & 0xef | *(byte *)(param_1 + 0x21c) >> 3 & 0x10;
    }
    if ((bVar14 & 0x10) == 0) {
      (**(code **)(**(longlong **)(param_1 + 0x110) + 0x4e0))
                (*(longlong **)(param_1 + 0x110),&local_28);
      uVar10 = CONCAT62(uStack_26,local_28);
      *(undefined8 *)(param_1 + 0x234) = uVar10;
      bVar14 = *(byte *)(param_1 + 0x211);
    }
    else {
      uVar10 = *(undefined8 *)(param_1 + 0x234);
    }
    *(undefined8 *)(param_1 + 0x170) = uVar10;
    if ((bVar14 & 0x20) == 0) {
      uVar15 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x4e8))();
      *(undefined4 *)(param_1 + 0x23c) = uVar15;
    }
    else {
      uVar15 = *(undefined4 *)(param_1 + 0x23c);
    }
    *(undefined4 *)(param_1 + 0x178) = uVar15;
    if (*(char *)(param_1 + 0x212) == '\x01') {
      uVar12 = *(uint *)(param_1 + 0x220);
      bVar14 = *(byte *)(param_1 + 0x151) & 0xbf | ((byte)uVar12 & 1) << 6;
      *(byte *)(param_1 + 0x151) = bVar14;
    }
    else {
      bVar5 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x430))();
      bVar14 = *(byte *)(param_1 + 0x151) & 0xbf | (bVar5 ^ 1) << 6;
      *(byte *)(param_1 + 0x151) = bVar14;
      uVar12 = *(uint *)(param_1 + 0x220) & 0xfffffffe | (uint)(bVar5 ^ 1);
      *(uint *)(param_1 + 0x220) = uVar12;
    }
    if (*(char *)(param_1 + 0x213) == '\x01') {
      *(byte *)(param_1 + 0x151) = bVar14 & 0x7f | ((byte)uVar12 & 2) << 6;
    }
    else {
      bVar14 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x438))();
      *(byte *)(param_1 + 0x151) = *(byte *)(param_1 + 0x151) & 0x7f | bVar14 << 7;
      uVar12 = *(uint *)(param_1 + 0x220) & 0xfffffffd | (uint)(byte)((bVar14 & 1) << 1);
      *(uint *)(param_1 + 0x220) = uVar12;
    }
    if (*(char *)(param_1 + 0x214) == '\x01') {
      bVar14 = *(byte *)(param_1 + 0x152) & 0xfe | (byte)uVar12 >> 2 & 1;
      *(byte *)(param_1 + 0x152) = bVar14;
    }
    else {
      bVar5 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x440))();
      bVar14 = *(byte *)(param_1 + 0x152) & 0xfe | bVar5;
      *(byte *)(param_1 + 0x152) = bVar14;
      uVar12 = (*(uint *)(param_1 + 0x220) & 0xfffffffb) + (uint)bVar5 * 4;
      *(uint *)(param_1 + 0x220) = uVar12;
    }
    if (*(char *)(param_1 + 0x215) == '\x01') {
      bVar14 = bVar14 & 0xfd | (byte)uVar12 >> 2 & 2;
      *(byte *)(param_1 + 0x152) = bVar14;
    }
    else {
      bVar5 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x448))();
      bVar14 = *(byte *)(param_1 + 0x152) & 0xfd | bVar5 * '\x02';
      *(byte *)(param_1 + 0x152) = bVar14;
      uVar12 = (*(uint *)(param_1 + 0x220) & 0xfffffff7) + (uint)bVar5 * 8;
      *(uint *)(param_1 + 0x220) = uVar12;
    }
    if (*(char *)(param_1 + 0x216) == '\x01') {
      bVar14 = bVar14 & 0xfb | (byte)uVar12 >> 2 & 4;
      *(byte *)(param_1 + 0x152) = bVar14;
    }
    else {
      cVar6 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x450))();
      bVar14 = *(byte *)(param_1 + 0x152) & 0xfb | cVar6 * '\x04';
      *(byte *)(param_1 + 0x152) = bVar14;
      uVar12 = *(uint *)(param_1 + 0x220) & 0xffffffef | (uint)(byte)(cVar6 << 4);
      *(uint *)(param_1 + 0x220) = uVar12;
    }
    if (*(char *)(param_1 + 0x217) == '\x01') {
      *(byte *)(param_1 + 0x152) = bVar14 & 0xf7 | (byte)uVar12 >> 2 & 8;
    }
    else {
      cVar6 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x458))();
      *(byte *)(param_1 + 0x152) = *(byte *)(param_1 + 0x152) & 0xf7 | cVar6 * '\b';
      *(uint *)(param_1 + 0x220) =
           *(uint *)(param_1 + 0x220) & 0xffffffdf | (uint)(byte)(cVar6 << 5);
    }
    if ((*(byte *)(param_1 + 0x240) & 1) == 0) {
      uVar7 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x558))();
      *(undefined1 *)(param_1 + 0x17c) = uVar7;
      *(undefined1 *)(param_1 + 0x241) = uVar7;
    }
    else {
      *(undefined1 *)(param_1 + 0x17c) = *(undefined1 *)(param_1 + 0x241);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403bc1fe FUN_1403bc1fe body=161 status=ok
// SIG undefined FUN_1403bc1fe(void)

void FUN_1403bc1fe(undefined4 param_1,ushort *param_2)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  ulonglong uVar4;
  ushort uVar5;
  
  uVar4 = (ulonglong)*param_2 - (ulonglong)(*param_2 >> 1 & 0x5555);
  uVar4 = (uVar4 >> 2 & 0x3333333333333333) + (uVar4 & 0x3333333333333333);
  if (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x39 != 0) {
    cVar1 = FUN_14570860e(param_1);
    if (cVar1 == '\0') {
      *param_2 = 2;
    }
  }
  iVar3 = FUN_1403bc29f(param_1);
  if (iVar3 != -1) {
    uVar2 = (ushort)iVar3 & *param_2;
    uVar5 = 2;
    if ((ushort)(uVar2 - 1) < 0x1fff) {
      uVar5 = uVar2;
    }
    *param_2 = uVar5;
  }
  return;
}



// FUNCTION 1403bc29f FUN_1403bc29f body=233 status=ok
// SIG undefined FUN_1403bc29f(void)

undefined4 FUN_1403bc29f(ushort param_1)

{
  longlong lVar1;
  byte bVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  
  uVar3 = 0xffffffff;
  if ((&DAT_14ca814b8)[(ulonglong)param_1 * 0xf] == 1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14ca96930) {
      FUN_144b3d300(&DAT_14ca96930);
      if (DAT_14ca96930 == -1) {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        plVar5 = (longlong *)
                 (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Mobile.ShadingModelsMask",1);
        if (plVar5 == (longlong *)0x0) {
          DAT_14ca96928 = 0;
        }
        else {
          DAT_14ca96928 = (**(code **)(*plVar5 + 0x68))(plVar5);
        }
        _Init_thread_footer(&DAT_14ca96930);
      }
    }
    lVar1 = DAT_14ca96928;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar4 = 0;
    }
    else {
      bVar2 = FUN_144a61b4f();
      uVar4 = (ulonglong)(bVar2 ^ 1);
    }
    uVar3 = *(undefined4 *)(lVar1 + uVar4 * 4);
  }
  return uVar3;
}



// FUNCTION 1403bc388 FUN_1403bc388 body=508 status=ok
// SIG undefined FUN_1403bc388(void)

longlong FUN_1403bc388(longlong *param_1,longlong *param_2,longlong *param_3,int param_4,
                      byte param_5)

{
  int iVar1;
  byte bVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  byte bVar7;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  undefined1 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_5 == 4) {
    bVar7 = 4;
  }
  else {
    local_48 = (undefined1 *)0x0;
    local_40 = 0x400000000;
    plVar5 = param_2;
    if (param_3 != (longlong *)0x0) {
      plVar5 = param_3;
    }
    FUN_1403bc586(plVar5,local_50,*(undefined2 *)(&DAT_14ca85070 + (longlong)param_4 * 2),0);
    puVar3 = local_50;
    if (local_48 != (undefined1 *)0x0) {
      puVar3 = local_48;
    }
    bVar7 = 4;
    if (puVar3[param_5] != '\0') {
      bVar7 = param_5;
    }
    if (local_48 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (0 < (longlong)(int)param_1[1]) {
    lVar6 = 0;
    do {
      lVar4 = *(longlong *)(*param_1 + lVar6 * 8);
      if ((*(int *)(lVar4 + 0x24) == param_4) && (*(byte *)(lVar4 + 0x20) == bVar7)) {
        if (lVar4 != 0) {
          if (param_2 != (longlong *)0x0 && DAT_14c950c29 == 1) {
            FUN_1456cec3c(param_2);
          }
          bVar7 = DAT_14c950c29;
          *(longlong **)(lVar4 + 0x40) = param_2;
          if ((param_3 != (longlong *)0x0) && ((bVar7 & 1) != 0)) {
            FUN_1456cec3c(param_3);
          }
          *(longlong **)(lVar4 + 0x48) = param_3;
          goto LAB_1403bc4c8;
        }
        break;
      }
      lVar6 = lVar6 + 1;
    } while ((int)param_1[1] != lVar6);
  }
  if (param_3 == (longlong *)0x0) {
    lVar4 = (**(code **)(*param_2 + 0x598))(param_2);
  }
  else {
    lVar4 = (**(code **)(*param_3 + 0x5a0))(param_3);
  }
  if (param_2 != (longlong *)0x0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  bVar2 = DAT_14c950c29;
  *(longlong **)(lVar4 + 0x40) = param_2;
  if ((param_3 != (longlong *)0x0) && ((bVar2 & 1) != 0)) {
    FUN_1456cec3c(param_3);
  }
  *(longlong **)(lVar4 + 0x48) = param_3;
  *(byte *)(lVar4 + 0x20) = bVar7;
  *(int *)(lVar4 + 0x24) = param_4;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1403bc9ae(param_1,iVar1);
  }
  *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar4;
LAB_1403bc4c8:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4;
}



// FUNCTION 1403bc586 FUN_1403bc586 body=306 status=ok
// SIG undefined FUN_1403bc586(void)

void FUN_1403bc586(longlong *param_1,undefined4 *param_2,uint param_3,char param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined1 uVar6;
  ulonglong uVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  lVar2 = (**(code **)(*param_1 + 0x2d0))();
  FUN_1403bc73c(param_2,lVar2 + 0x450);
  if (param_2[4] == 0) {
    param_2[4] = 4;
    if ((uint)param_2[5] < 4) {
      FUN_1468f9a7c(param_2,0);
    }
    puVar5 = *(undefined4 **)(param_2 + 2);
    if (*(undefined4 **)(param_2 + 2) == (undefined4 *)0x0) {
      puVar5 = param_2;
    }
    *puVar5 = 0;
  }
  if ((param_3 & 0xffff) != 0x9b) {
    uVar3 = FUN_1403bc8ae();
    uVar3 = FUN_14063cc94(uVar3,*(undefined8 *)
                                 (&DAT_14ca814bc + (ulonglong)(param_3 & 0xffff) * 0x3c));
    uVar7 = 0;
    do {
      pcVar4 = (char *)FUN_1403bc6ba(uVar3,uVar7 & 0xffffffff);
      if ((param_4 == '\0') || (*pcVar4 == '\0')) {
        if ((pcVar4[1] == '\x01') && (cVar1 = FUN_1403bc7f4(pcVar4), cVar1 != '\0')) {
          cVar1 = FUN_14712a0d8(pcVar4,param_3);
          uVar6 = 1;
          if (cVar1 != '\0') goto LAB_1403bc679;
        }
      }
      else {
        uVar6 = 0;
LAB_1403bc679:
        puVar5 = *(undefined4 **)(param_2 + 2);
        if (*(undefined4 **)(param_2 + 2) == (undefined4 *)0x0) {
          puVar5 = param_2;
        }
        *(undefined1 *)((longlong)puVar5 + uVar7) = uVar6;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != 4);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403bc6ba FUN_1403bc6ba body=129 status=ok
// SIG undefined FUN_1403bc6ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1403bc6ba(longlong param_1,byte param_2)

{
  undefined *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ac310) {
    FUN_144b3d300(&DAT_14c9ac310);
    if (DAT_14c9ac310 == -1) {
      uRam000000014c9ac30c = 0;
      _DAT_14c9ac308 = 0;
      DAT_14c9ac30f = 2;
      _Init_thread_footer(&DAT_14c9ac310);
    }
  }
  puVar1 = &DAT_14c9ac308;
  if (param_2 < 4) {
    puVar1 = (undefined *)(param_1 + 0x28 + (ulonglong)param_2 * 8);
  }
  return puVar1;
}



// FUNCTION 1403bc73c FUN_1403bc73c body=87 status=ok
// SIG undefined FUN_1403bc73c(void)

void * FUN_1403bc73c(void *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)((longlong)param_1 + 0x10) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x14) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 4;
  }
  else {
    FUN_1403bc794(param_1,iVar1);
    if (iVar1 != 0) {
      _Dst = *(void **)((longlong)param_1 + 8);
      if (*(void **)((longlong)param_1 + 8) == (void *)0x0) {
        _Dst = param_1;
      }
      memcpy(_Dst,_Src,(longlong)iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1403bc794 FUN_1403bc794 body=95 status=ok
// SIG undefined FUN_1403bc794(void)

void FUN_1403bc794(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 4;
    if (4 < param_2) {
      iVar1 = FUN_144a3809e((longlong)(int)param_2,0);
      iVar2 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar2 = iVar1;
      }
    }
  }
  if (param_3 < iVar2) {
    FUN_1468f9aea(param_1,0,iVar2,1);
    param_3 = iVar2;
  }
  *(int *)(param_1 + 0x14) = param_3;
  return;
}



// FUNCTION 1403bc7f4 FUN_1403bc7f4 body=185 status=ok
// SIG undefined FUN_1403bc7f4(void)

bool FUN_1403bc7f4(char *param_1)

{
  bool bVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ac31c) {
    FUN_144b3d300(&DAT_14c9ac31c);
    if (DAT_14c9ac31c == -1) {
      DAT_14c9ac318 = '\0';
      DAT_14c9ac319 = '\0';
      DAT_14c9ac31a = '\0';
      DAT_14c9ac314 = '\0';
      uRam000000014c9ac315 = 0;
      DAT_14c9ac316 = '\0';
      DAT_14c9ac317 = '\0';
      DAT_14c9ac31b = '\x02';
      _Init_thread_footer(&DAT_14c9ac31c);
    }
  }
  bVar1 = true;
  if ((((param_1[7] == DAT_14c9ac31b) && (param_1[4] == DAT_14c9ac318)) &&
      (param_1[2] == DAT_14c9ac316)) &&
     (((param_1[3] == DAT_14c9ac317 && (param_1[5] == DAT_14c9ac319)) &&
      (param_1[6] == DAT_14c9ac31a)))) {
    bVar1 = *param_1 != DAT_14c9ac314;
  }
  return bVar1;
}



// FUNCTION 1403bc8ae FUN_1403bc8ae body=255 status=ok
// SIG undefined FUN_1403bc8ae(void)

longlong FUN_1403bc8ae(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c9ac300 == 0) {
    uVar2 = FUN_1409ffe1d();
    uVar3 = FUN_1459d3c24();
    DAT_14c9ac300 = FUN_140277b32(uVar3,uVar2,L"MaterialShaderQualitySettingsContainer",0);
    if (DAT_14c9ac300 == 0) {
      FUN_1446f470e(&local_20,L"MaterialShaderQualitySettingsContainer",1);
      uVar2 = FUN_1459d3c24();
      uVar3 = FUN_1409ffe1d();
      local_38 = 0;
      uStack_30 = 0;
      local_40 = 0;
      local_48 = 0;
      lVar4 = 0;
      DAT_14c9ac300 = FUN_1457086f8(uVar3,uVar2,local_20,0);
      uVar1 = *(uint *)(DAT_14c9ac300 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      FUN_1447f71cc(lVar4,0x40000000);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return DAT_14c9ac300;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403bc9ae FUN_1403bc9ae body=353 status=ok
// SIG undefined FUN_1403bc9ae(void)

void FUN_1403bc9ae(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 8;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1403bca33;
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
LAB_1403bca33:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1403bcb10 FUN_1403bcb10 body=57 status=ok
// SIG undefined FUN_1403bcb10(void)

undefined8 * FUN_1403bcb10(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  FUN_1401c22be(puVar1);
  *puVar1 = &PTR_FUN_14a9c9e70;
  puVar1[8] = 0;
  puVar1[9] = 0;
  return puVar1;
}



// FUNCTION 1403bcb49 FUN_1403bcb49 body=4912 status=ok
// SIG undefined FUN_1403bcb49(void)

void FUN_1403bcb49(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  longlong lVar5;
  void *_Src;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  DWORD DVar15;
  DWORD DVar16;
  undefined4 *puVar17;
  longlong lVar18;
  uint *puVar19;
  undefined8 uVar20;
  byte bVar21;
  longlong *plVar22;
  int iVar23;
  uint *puVar24;
  longlong lVar25;
  undefined8 *puVar26;
  longlong lVar27;
  undefined8 *puVar28;
  longlong lVar29;
  ulonglong uVar30;
  undefined1 auStack_258 [32];
  undefined1 **local_238;
  longlong local_228;
  longlong local_220;
  undefined8 local_218;
  longlong lStack_210;
  undefined8 local_208;
  longlong local_200;
  undefined8 local_1f8;
  longlong local_1f0;
  undefined8 local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  longlong local_1b0;
  undefined8 local_1a8;
  void *local_1a0;
  undefined8 local_198;
  ulonglong local_190;
  longlong local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  byte local_130;
  longlong local_120;
  undefined8 local_118;
  longlong lStack_110;
  uint local_108;
  uint local_104;
  longlong local_100;
  uint local_f8;
  uint local_f4;
  longlong local_f0;
  undefined4 local_e8;
  int local_e4;
  longlong local_e0;
  undefined4 local_d8;
  int local_d4;
  longlong local_d0;
  undefined4 local_c8;
  int local_c4;
  longlong local_c0;
  uint local_b8;
  uint local_b4;
  longlong local_b0;
  uint local_a8;
  uint local_a4;
  void *local_a0;
  int local_98;
  int local_94;
  byte local_90;
  byte bStack_8f;
  undefined1 uStack_8e;
  undefined1 uStack_8d;
  undefined4 uStack_8c;
  undefined1 *local_88 [2];
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_258;
  if ((*(uint *)(param_1 + 8) & 0x10) != 0) goto LAB_1403bd83c;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20);
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar12 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') goto LAB_1403bd83c;
    bVar12 = DAT_14c8442b8 & 1;
  }
  if (bVar12 != 0) goto LAB_1403bd83c;
  lVar5 = *(longlong *)(param_1 + 0x248);
  uStack_8c = 0;
  memset(&local_120,0,0x93);
  iVar14 = *(int *)(param_1 + 0x188);
  if (iVar14 < 0) {
LAB_1403bdd98:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar14);
  }
  if (iVar14 != 0) {
    FUN_140945132(&lStack_110);
    if ((longlong)*(int *)(param_1 + 0x188) != 0) {
      puVar28 = *(undefined8 **)(param_1 + 0x180);
      puVar26 = (undefined8 *)((longlong)puVar28 + (longlong)*(int *)(param_1 + 0x188) * 0x24);
      do {
        uVar13 = local_108;
        lVar25 = (longlong)(int)local_108;
        local_108 = local_108 + 1;
        if (local_104 < local_108) {
          FUN_1417dfb26(&lStack_110,uVar13);
        }
        puVar17 = (undefined4 *)(lStack_110 + lVar25 * 0x14);
        FUN_143574b9f(puVar17);
        uVar20 = *puVar28;
        uVar4 = *(undefined2 *)((longlong)puVar28 + 0xc);
        iVar14 = *(int *)(puVar28 + 1);
        *puVar17 = (int)uVar20;
        puVar17[1] = 0;
        puVar17[2] = (int)((ulonglong)uVar20 >> 0x20);
        *(undefined2 *)(puVar17 + 3) = uVar4;
        *(ushort *)((longlong)puVar17 + 0xe) =
             *(ushort *)((longlong)puVar17 + 0xe) & 0x3fff | (ushort)(iVar14 << 0xe);
        puVar17[4] = *(undefined4 *)(puVar28 + 2);
        puVar28 = (undefined8 *)((longlong)puVar28 + 0x24);
      } while (puVar28 != puVar26);
    }
  }
  iVar14 = *(int *)(param_1 + 0x198);
  if (iVar14 < 0) goto LAB_1403bdd98;
  if ((int)local_f4 < iVar14) {
    FUN_14094505e(&local_100);
    iVar14 = *(int *)(param_1 + 0x198);
  }
  if (iVar14 != 0) {
    puVar26 = *(undefined8 **)(param_1 + 400);
    puVar28 = puVar26 + (longlong)iVar14 * 6;
    do {
      uVar13 = local_f8;
      lVar25 = (longlong)(int)local_f8;
      local_f8 = local_f8 + 1;
      if (local_f4 < local_f8) {
        FUN_1417dfc9c(&local_100,uVar13);
      }
      lVar18 = local_100;
      lVar25 = lVar25 * 0x20;
      FUN_143574ba6(local_100 + lVar25);
      uVar20 = *puVar26;
      uVar4 = *(undefined2 *)((longlong)puVar26 + 0xc);
      iVar14 = *(int *)(puVar26 + 1);
      *(int *)(lVar18 + lVar25) = (int)uVar20;
      *(undefined4 *)(lVar18 + 4 + lVar25) = 0;
      *(int *)(lVar18 + 8 + lVar25) = (int)((ulonglong)uVar20 >> 0x20);
      *(undefined2 *)(lVar18 + 0xc + lVar25) = uVar4;
      *(ushort *)(lVar18 + 0xe + lVar25) =
           *(ushort *)(lVar18 + 0xe + lVar25) & 0x3fff | (ushort)(iVar14 << 0xe);
      uVar6 = *(undefined4 *)((longlong)puVar26 + 0x14);
      uVar7 = *(undefined4 *)(puVar26 + 3);
      uVar8 = *(undefined4 *)((longlong)puVar26 + 0x1c);
      puVar17 = (undefined4 *)(lVar18 + 0x10 + lVar25);
      *puVar17 = *(undefined4 *)(puVar26 + 2);
      puVar17[1] = uVar6;
      puVar17[2] = uVar7;
      puVar17[3] = uVar8;
      puVar26 = puVar26 + 6;
    } while (puVar26 != puVar28);
  }
  iVar14 = *(int *)(param_1 + 0x1a8);
  if (iVar14 < 0) goto LAB_1403bdd98;
  if (local_e4 < iVar14) {
    FUN_147bb9c56(&local_f0);
    iVar14 = *(int *)(param_1 + 0x1a8);
  }
  if (iVar14 != 0) {
    puVar26 = *(undefined8 **)(param_1 + 0x1a0);
    puVar28 = puVar26 + (longlong)iVar14 * 8;
    do {
      puVar17 = (undefined4 *)FUN_147bb41a8(&local_f0);
      uVar20 = *puVar26;
      uVar4 = *(undefined2 *)((longlong)puVar26 + 0xc);
      iVar14 = *(int *)(puVar26 + 1);
      *puVar17 = (int)uVar20;
      puVar17[1] = 0;
      puVar17[2] = (int)((ulonglong)uVar20 >> 0x20);
      *(undefined2 *)(puVar17 + 3) = uVar4;
      *(ushort *)((longlong)puVar17 + 0xe) =
           *(ushort *)((longlong)puVar17 + 0xe) & 0x3fff | (ushort)(iVar14 << 0xe);
      uVar20 = puVar26[2];
      uVar9 = puVar26[3];
      uVar10 = puVar26[5];
      *(undefined8 *)(puVar17 + 8) = puVar26[4];
      *(undefined8 *)(puVar17 + 10) = uVar10;
      *(undefined8 *)(puVar17 + 4) = uVar20;
      *(undefined8 *)(puVar17 + 6) = uVar9;
      puVar26 = puVar26 + 8;
    } while (puVar26 != puVar28);
  }
  iVar14 = *(int *)(param_1 + 0x1b8);
  iVar23 = *(int *)(param_1 + 0x1f8) + iVar14;
  if (iVar23 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar23);
  }
  if (local_d4 < iVar23) {
    FUN_1417dfd9c(&local_e0);
    iVar14 = *(int *)(param_1 + 0x1b8);
  }
  if (iVar14 != 0) {
    puVar28 = *(undefined8 **)(param_1 + 0x1b0);
    puVar26 = puVar28 + (longlong)iVar14 * 5;
    do {
      puVar17 = (undefined4 *)FUN_1400bcb48(&local_e0);
      uVar20 = *puVar28;
      uVar4 = *(undefined2 *)((longlong)puVar28 + 0xc);
      iVar14 = *(int *)(puVar28 + 1);
      *puVar17 = (int)uVar20;
      puVar17[1] = 0;
      puVar17[2] = (int)((ulonglong)uVar20 >> 0x20);
      *(undefined2 *)(puVar17 + 3) = uVar4;
      *(ushort *)((longlong)puVar17 + 0xe) =
           *(ushort *)((longlong)puVar17 + 0xe) & 0x3fff | (ushort)(iVar14 << 0xe);
      *(undefined8 *)(puVar17 + 4) = puVar28[2];
      puVar28 = puVar28 + 5;
    } while (puVar28 != puVar26);
  }
  if ((longlong)*(int *)(param_1 + 0x1f8) != 0) {
    puVar26 = *(undefined8 **)(param_1 + 0x1f0);
    puVar28 = puVar26 + (longlong)*(int *)(param_1 + 0x1f8) * 6;
    do {
      puVar17 = (undefined4 *)FUN_1400bcb48(&local_e0);
      uVar20 = *puVar26;
      uVar4 = *(undefined2 *)((longlong)puVar26 + 0xc);
      iVar14 = *(int *)(puVar26 + 1);
      *puVar17 = (int)uVar20;
      puVar17[1] = 0;
      puVar17[2] = (int)((ulonglong)uVar20 >> 0x20);
      *(undefined2 *)(puVar17 + 3) = uVar4;
      *(ushort *)((longlong)puVar17 + 0xe) =
           *(ushort *)((longlong)puVar17 + 0xe) & 0x3fff | (ushort)(iVar14 << 0xe);
      lVar25 = puVar26[2];
      if (lVar25 == 0) {
LAB_1403bcf34:
        uVar20 = 0;
      }
      else {
        iVar14 = *(int *)(puVar26 + 3);
        if (((longlong)iVar14 < 0) || (*(int *)(lVar25 + 0x50) <= iVar14)) goto LAB_1403bcf34;
        uVar20 = *(undefined8 *)(*(longlong *)(lVar25 + 0x48) + (longlong)iVar14 * 8);
      }
      *(undefined8 *)(puVar17 + 4) = uVar20;
      puVar26 = puVar26 + 6;
    } while (puVar26 != puVar28);
  }
  iVar14 = *(int *)(param_1 + 0x1c8);
  if (iVar14 < 0) goto LAB_1403bdd98;
  if (local_c4 < iVar14) {
    FUN_147bb9d7c(&local_d0);
    iVar14 = *(int *)(param_1 + 0x1c8);
  }
  if (iVar14 != 0) {
    puVar28 = *(undefined8 **)(param_1 + 0x1c0);
    puVar26 = puVar28 + (longlong)iVar14 * 5;
    do {
      puVar17 = (undefined4 *)FUN_147bb41e8(&local_d0);
      uVar20 = *puVar28;
      uVar4 = *(undefined2 *)((longlong)puVar28 + 0xc);
      iVar14 = *(int *)(puVar28 + 1);
      *puVar17 = (int)uVar20;
      puVar17[1] = 0;
      puVar17[2] = (int)((ulonglong)uVar20 >> 0x20);
      *(undefined2 *)(puVar17 + 3) = uVar4;
      *(ushort *)((longlong)puVar17 + 0xe) =
           *(ushort *)((longlong)puVar17 + 0xe) & 0x3fff | (ushort)(iVar14 << 0xe);
      *(undefined8 *)(puVar17 + 4) = puVar28[2];
      puVar28 = puVar28 + 5;
    } while (puVar28 != puVar26);
  }
  iVar14 = *(int *)(param_1 + 0x1d8);
  if (iVar14 < 0) goto LAB_1403bdd98;
  if ((int)local_b4 < iVar14) {
    FUN_1417e0060(&local_c0);
    iVar14 = *(int *)(param_1 + 0x1d8);
  }
  if (iVar14 != 0) {
    puVar28 = *(undefined8 **)(param_1 + 0x1d0);
    puVar26 = puVar28 + (longlong)iVar14 * 5;
    do {
      uVar13 = local_b8;
      lVar25 = (longlong)(int)local_b8;
      local_b8 = local_b8 + 1;
      if (local_b4 < local_b8) {
        FUN_147bb9e88(&local_c0,uVar13);
      }
      puVar17 = (undefined4 *)(local_c0 + lVar25 * 0x18);
      FUN_143574bad(puVar17);
      uVar20 = *puVar28;
      uVar4 = *(undefined2 *)((longlong)puVar28 + 0xc);
      iVar14 = *(int *)(puVar28 + 1);
      *puVar17 = (int)uVar20;
      puVar17[1] = 0;
      puVar17[2] = (int)((ulonglong)uVar20 >> 0x20);
      *(undefined2 *)(puVar17 + 3) = uVar4;
      *(ushort *)((longlong)puVar17 + 0xe) =
           *(ushort *)((longlong)puVar17 + 0xe) & 0x3fff | (ushort)(iVar14 << 0xe);
      *(undefined8 *)(puVar17 + 4) = puVar28[2];
      puVar28 = puVar28 + 5;
    } while (puVar28 != puVar26);
  }
  iVar14 = *(int *)(param_1 + 0x1e8);
  if (iVar14 < 0) goto LAB_1403bdd98;
  if ((int)local_a4 < iVar14) {
    FUN_1463eabc6(&local_b0);
    iVar14 = *(int *)(param_1 + 0x1e8);
  }
  if (iVar14 != 0) {
    puVar28 = *(undefined8 **)(param_1 + 0x1e0);
    puVar26 = puVar28 + (longlong)iVar14 * 5;
    do {
      uVar13 = local_a8;
      lVar25 = (longlong)(int)local_a8;
      local_a8 = local_a8 + 1;
      if (local_a4 < local_a8) {
        FUN_147bb9f1c(&local_b0,uVar13);
      }
      puVar17 = (undefined4 *)(local_b0 + lVar25 * 0x18);
      FUN_143574bb4(puVar17);
      uVar20 = *puVar28;
      uVar4 = *(undefined2 *)((longlong)puVar28 + 0xc);
      iVar14 = *(int *)(puVar28 + 1);
      *puVar17 = (int)uVar20;
      puVar17[1] = 0;
      puVar17[2] = (int)((ulonglong)uVar20 >> 0x20);
      *(undefined2 *)(puVar17 + 3) = uVar4;
      *(ushort *)((longlong)puVar17 + 0xe) =
           *(ushort *)((longlong)puVar17 + 0xe) & 0x3fff | (ushort)(iVar14 << 0xe);
      *(undefined8 *)(puVar17 + 4) = puVar28[2];
      puVar28 = puVar28 + 5;
    } while (puVar28 != puVar26);
  }
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_138 = 0xffffffff;
  local_130 = local_130 & 0xfe;
  FUN_1407ce9d0(&local_188,param_1 + 0x250);
  FUN_14043ea4a(&local_178,param_1 + 0x260);
  FUN_14043ea4a(&local_168,param_1 + 0x270);
  local_130 = local_130 & 0xfe | *(byte *)(param_1 + 0x2a8) & 1;
  iVar14 = (int)uStack_180;
  if ((int)uStack_180 < 0) goto LAB_1403bdd98;
  if ((int)local_118._4_4_ < (int)uStack_180) {
    FUN_1417e01b2(&local_120);
  }
  lVar25 = local_188;
  if ((int)uStack_180 != 0) {
    lVar18 = (longlong)(int)uStack_180;
    lVar27 = 0;
    do {
      uVar30 = local_118;
      if (*(char *)(lVar25 + 0x10 + lVar27) == '\x01') {
        uVar3 = *(undefined1 *)(lVar25 + 0x24 + lVar27);
        lVar29 = (longlong)(int)local_118;
        uVar13 = (int)local_118 + 1;
        local_118 = CONCAT44(local_118._4_4_,uVar13);
        if (local_118._4_4_ < uVar13) {
          FUN_147bb9fb0(&local_120,uVar30 & 0xffffffff);
        }
        puVar17 = (undefined4 *)(local_120 + lVar29 * 0x14);
        FUN_143574bbb(puVar17);
        uVar20 = *(undefined8 *)(lVar25 + lVar27);
        uVar4 = *(undefined2 *)(lVar25 + 0xc + lVar27);
        iVar14 = *(int *)(lVar25 + 8 + lVar27);
        *puVar17 = (int)uVar20;
        puVar17[1] = 0;
        puVar17[2] = (int)((ulonglong)uVar20 >> 0x20);
        *(undefined2 *)(puVar17 + 3) = uVar4;
        *(ushort *)((longlong)puVar17 + 0xe) =
             *(ushort *)((longlong)puVar17 + 0xe) & 0x3fff | (ushort)(iVar14 << 0xe);
        *(undefined1 *)(puVar17 + 4) = uVar3;
      }
      lVar27 = lVar27 + 0x28;
    } while (lVar18 * 0x28 != lVar27);
  }
  if (&local_a0 != (void **)(param_1 + 0x200)) {
    iVar14 = *(int *)(param_1 + 0x208);
    _Src = *(void **)(param_1 + 0x200);
    if (iVar14 == 0 && local_94 == 0) {
      local_94 = 0;
      local_98 = iVar14;
    }
    else {
      local_98 = iVar14;
      FUN_147bba044(&local_a0,iVar14);
      if (iVar14 != 0) {
        memcpy(local_a0,_Src,(longlong)iVar14 << 4);
      }
    }
  }
  bVar21 = *(byte *)(param_1 + 0x150) >> 2;
  local_90 = bVar21 & 1;
  bVar12 = *(byte *)(param_1 + 0x150) >> 3;
  bStack_8f = bVar12 & 1;
  uStack_8e = *(undefined1 *)(param_1 + 0x159);
  uStack_8c = *(undefined4 *)(param_1 + 0x15c);
  local_220 = local_120;
  local_120 = 0;
  local_218 = local_118;
  lStack_210 = lStack_110;
  local_118 = 0;
  lStack_110 = 0;
  local_208 = CONCAT44(local_104,local_108);
  local_108 = 0;
  local_104 = 0;
  local_200 = local_100;
  local_100 = 0;
  local_1f8 = CONCAT44(local_f4,local_f8);
  local_f8 = 0;
  local_f4 = 0;
  local_1f0 = local_f0;
  local_f0 = 0;
  local_1e8 = CONCAT44(local_e4,local_e8);
  local_e8 = 0;
  local_e4 = 0;
  local_1e0 = local_e0;
  local_e0 = 0;
  local_1d8 = CONCAT44(local_d4,local_d8);
  local_d8 = 0;
  local_d4 = 0;
  local_1d0 = local_d0;
  local_d0 = 0;
  local_1c8 = CONCAT44(local_c4,local_c8);
  local_c8 = 0;
  local_c4 = 0;
  local_1c0 = local_c0;
  local_c0 = 0;
  local_1b8 = CONCAT44(local_b4,local_b8);
  local_b8 = 0;
  local_b4 = 0;
  local_1b0 = local_b0;
  local_b0 = 0;
  local_1a8 = CONCAT44(local_a4,local_a8);
  local_a8 = 0;
  local_a4 = 0;
  local_1a0 = local_a0;
  local_a0 = (void *)0x0;
  local_198 = CONCAT44(local_94,local_98);
  local_98 = 0;
  local_94 = 0;
  local_190 = CONCAT44(uStack_8c,CONCAT13(uStack_8d,CONCAT12(uStack_8e,CONCAT11(bVar12,bVar21)))) &
              0xffffffffffff0101;
  lVar25 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar14 = *(int *)(lVar25 + 0xc60);
  local_228 = lVar5;
  if (DAT_14c86a9fc == 0) {
    if (iVar14 != 2) {
      if (iVar14 != 1) goto LAB_1403bd540;
      DVar15 = FUN_140ad26c0();
      DVar16 = GetCurrentThreadId();
      if (DVar15 == DVar16) goto LAB_1403bd545;
      goto LAB_1403bd5ab;
    }
LAB_1403bd545:
    FUN_1447a247c(local_228,&local_220);
  }
  else {
LAB_1403bd540:
    if (iVar14 == 0x10) goto LAB_1403bd545;
LAB_1403bd5ab:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar14 = *(int *)(lVar25 + 0xc60), iVar14 == 2))
      goto LAB_1403bd545;
      if (iVar14 == 1) {
        DVar15 = FUN_140ad26c0();
        DVar16 = GetCurrentThreadId();
        if (DVar15 == DVar16) goto LAB_1403bd545;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar26 = (undefined8 *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x308);
      puVar19 = (uint *)*puVar26;
      if (puVar19 != (uint *)0x0) goto LAB_1403bd912;
      while( true ) {
        uVar13 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar13 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar13 | 1;
          __tlregdtor(&LAB_143574684);
        }
        lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar17 = *(undefined4 **)(lVar5 + 0x310);
        *(undefined8 *)(lVar5 + 0x310) = 0;
        if (puVar17 == (undefined4 *)0x0) {
          puVar17 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar17 = 0xffffffff;
        *(undefined4 **)(puVar17 + 0x10) = puVar17 + 0x16;
        puVar17[0x12] = 0;
        *puVar26 = puVar17;
        FUN_140217a48(puVar26);
        puVar19 = (uint *)*puVar26;
LAB_1403bd912:
        puVar28 = (undefined8 *)(*(longlong *)(puVar19 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar24 = (uint *)(puVar28 + 0x29);
        uVar13 = puVar19[0x12];
        if (puVar24 <= puVar19 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar19 + 0x10) = puVar19 + 0x4000;
          LOCK();
          uVar2 = *puVar19;
          *puVar19 = *puVar19 + uVar13 + 1;
          UNLOCK();
          if ((uVar2 ^ uVar13) != 0xffffffff) break;
          puVar19 = (uint *)*puVar26;
          *puVar19 = 0xffffffff;
          *(uint **)(puVar19 + 0x10) = puVar19 + 0x16;
          puVar19[0x12] = 0;
          *puVar26 = puVar19;
          puVar28 = (undefined8 *)((longlong)puVar19 + 0x5fU & 0xfffffffffffffff8);
          puVar24 = (uint *)(puVar28 + 0x29);
          uVar13 = 0;
          if (puVar24 <= puVar19 + 0x4000) {
            uVar13 = 1;
            goto LAB_1403bd992;
          }
        }
      }
      uVar13 = uVar13 + 1;
LAB_1403bd992:
      *(uint **)(puVar19 + 0x10) = puVar24;
      puVar19[0x12] = uVar13;
      iVar14 = 0;
      FUN_1447247dc(puVar28,0);
      *puVar28 = &PTR_FUN_14a9d4758;
      puVar28[0x15] = local_228;
      puVar28[0x16] = local_220;
      local_220 = 0;
      *(undefined4 *)(puVar28 + 0x17) = (undefined4)local_218;
      *(undefined4 *)((longlong)puVar28 + 0xbc) = local_218._4_4_;
      local_218 = 0;
      puVar28[0x18] = lStack_210;
      lStack_210 = 0;
      *(undefined4 *)(puVar28 + 0x19) = (undefined4)local_208;
      *(undefined4 *)((longlong)puVar28 + 0xcc) = local_208._4_4_;
      local_208 = 0;
      puVar28[0x1a] = local_200;
      local_200 = 0;
      *(undefined4 *)(puVar28 + 0x1b) = (undefined4)local_1f8;
      *(undefined4 *)((longlong)puVar28 + 0xdc) = local_1f8._4_4_;
      local_1f8 = 0;
      puVar28[0x1c] = local_1f0;
      local_1f0 = 0;
      *(undefined4 *)(puVar28 + 0x1d) = (undefined4)local_1e8;
      *(undefined4 *)((longlong)puVar28 + 0xec) = local_1e8._4_4_;
      local_1e8 = 0;
      puVar28[0x1e] = local_1e0;
      local_1e0 = 0;
      *(undefined4 *)(puVar28 + 0x1f) = (undefined4)local_1d8;
      *(undefined4 *)((longlong)puVar28 + 0xfc) = local_1d8._4_4_;
      local_1d8 = 0;
      puVar28[0x20] = local_1d0;
      local_1d0 = 0;
      *(undefined4 *)(puVar28 + 0x21) = (undefined4)local_1c8;
      *(undefined4 *)((longlong)puVar28 + 0x10c) = local_1c8._4_4_;
      local_1c8 = 0;
      puVar28[0x22] = local_1c0;
      local_1c0 = 0;
      *(undefined4 *)(puVar28 + 0x23) = (undefined4)local_1b8;
      *(undefined4 *)((longlong)puVar28 + 0x11c) = local_1b8._4_4_;
      local_1b8 = 0;
      puVar28[0x24] = local_1b0;
      local_1b0 = 0;
      *(undefined4 *)(puVar28 + 0x25) = (undefined4)local_1a8;
      *(undefined4 *)((longlong)puVar28 + 300) = local_1a8._4_4_;
      local_1a8 = 0;
      puVar28[0x26] = local_1a0;
      local_1a0 = (void *)0x0;
      *(undefined4 *)(puVar28 + 0x27) = (undefined4)local_198;
      *(undefined4 *)((longlong)puVar28 + 0x13c) = local_198._4_4_;
      local_198 = 0;
      puVar28[0x28] = local_190;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar13 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
          uVar30 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
        }
        else {
          uVar30 = 2;
        }
      }
      else {
        iVar14 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar30 = 5;
      }
      if (*(code **)(puVar28[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar28[0xe] + 0x18))(puVar28 + 0xe,puVar28 + 9);
      }
      puVar28[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar28[9] = puVar28;
      puVar28[10] = puVar28;
      lVar5 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar5 == 0) {
        uVar11 = 1;
        if ((char)uVar30 != '\x06') {
          uVar11 = uVar30;
        }
        uVar30 = uVar11;
        uVar20 = 0;
      }
      else {
        if ((char)uVar30 == '\x06') {
          uVar30 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
        }
        uVar20 = *(undefined8 *)(lVar5 + 0x30);
      }
      puVar28[0xf] = uVar20;
      puVar28[0x10] = uVar30 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar28 + 0x1c) = iVar14;
      if (puVar28 == (undefined8 *)0x0) {
        local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar28 + 1) = *(int *)(puVar28 + 1) + 1;
        UNLOCK();
        local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
        FUN_1447439e4(puVar28);
        LOCK();
        piVar1 = (int *)(puVar28 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar28)(puVar28,1);
        }
      }
    }
    else {
      local_88[0] = (undefined1 *)0x0;
      local_78 = (longlong *)FUN_14001cc68(0xa8,8);
      *local_78 = (longlong)&PTR_LAB_14a9d4710;
      local_78[1] = local_228;
      local_78[2] = local_220;
      local_220 = 0;
      *(undefined4 *)(local_78 + 3) = (undefined4)local_218;
      *(undefined4 *)((longlong)local_78 + 0x1c) = local_218._4_4_;
      local_218 = 0;
      local_78[4] = lStack_210;
      lStack_210 = 0;
      *(undefined4 *)(local_78 + 5) = (undefined4)local_208;
      *(undefined4 *)((longlong)local_78 + 0x2c) = local_208._4_4_;
      local_208 = 0;
      local_78[6] = local_200;
      local_200 = 0;
      *(undefined4 *)(local_78 + 7) = (undefined4)local_1f8;
      *(undefined4 *)((longlong)local_78 + 0x3c) = local_1f8._4_4_;
      local_1f8 = 0;
      local_78[8] = local_1f0;
      local_1f0 = 0;
      *(undefined4 *)(local_78 + 9) = (undefined4)local_1e8;
      *(undefined4 *)((longlong)local_78 + 0x4c) = local_1e8._4_4_;
      local_1e8 = 0;
      local_78[10] = local_1e0;
      local_1e0 = 0;
      *(undefined4 *)(local_78 + 0xb) = (undefined4)local_1d8;
      *(undefined4 *)((longlong)local_78 + 0x5c) = local_1d8._4_4_;
      local_1d8 = 0;
      local_78[0xc] = local_1d0;
      local_1d0 = 0;
      *(undefined4 *)(local_78 + 0xd) = (undefined4)local_1c8;
      *(undefined4 *)((longlong)local_78 + 0x6c) = local_1c8._4_4_;
      local_1c8 = 0;
      local_78[0xe] = local_1c0;
      local_1c0 = 0;
      *(undefined4 *)(local_78 + 0xf) = (undefined4)local_1b8;
      *(undefined4 *)((longlong)local_78 + 0x7c) = local_1b8._4_4_;
      local_1b8 = 0;
      local_78[0x10] = local_1b0;
      local_1b0 = 0;
      *(undefined4 *)(local_78 + 0x11) = (undefined4)local_1a8;
      *(undefined4 *)((longlong)local_78 + 0x8c) = local_1a8._4_4_;
      local_1a8 = 0;
      local_78[0x12] = (longlong)local_1a0;
      local_1a0 = (void *)0x0;
      *(undefined4 *)(local_78 + 0x13) = (undefined4)local_198;
      *(undefined4 *)((longlong)local_78 + 0x9c) = local_198._4_4_;
      local_198 = 0;
      local_78[0x14] = local_190;
      if (local_78 + 1 != (longlong *)0x0) {
        local_88[0] = &LAB_143574bc2;
      }
      local_238 = local_88;
      FUN_14005a792(&DAT_14ca9a440,L"InitMIParameters",&DAT_14caec350);
      if (local_88[0] != (undefined1 *)0x0) {
        plVar22 = local_78;
        if (local_78 == (longlong *)0x0) {
          plVar22 = local_68;
        }
        (**(code **)(*plVar22 + 0x10))();
      }
    }
  }
  FUN_14356fcf4(&local_220);
  FUN_1401fc47e(&local_178);
  if (local_188 != 0) {
    FUN_1400020a8();
  }
  FUN_14356fcf4(&local_120);
LAB_1403bd83c:
  if ((local_48 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403bde7a FUN_1403bde7a body=11486 status=ok
// SIG undefined FUN_1403bde7a(void)

void FUN_1403bde7a(longlong *param_1,code *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined **ppuVar8;
  undefined3 uVar9;
  void *pvVar10;
  ulonglong uVar11;
  char cVar12;
  undefined1 uVar13;
  int iVar14;
  uint uVar15;
  DWORD DVar16;
  DWORD DVar17;
  longlong lVar18;
  longlong *plVar19;
  code *pcVar20;
  longlong lVar21;
  undefined8 uVar22;
  code *pcVar23;
  undefined4 *puVar24;
  uint *puVar25;
  ulonglong uVar26;
  undefined **ppuVar27;
  uint *puVar28;
  code cVar29;
  undefined1 uVar30;
  int iVar31;
  undefined *puVar32;
  undefined8 *puVar33;
  code cVar34;
  undefined2 unaff_R13W;
  undefined2 uVar35;
  code *unaff_R15;
  longlong lVar36;
  undefined7 uVar38;
  void *pvVar37;
  bool bVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined1 auStack_738 [32];
  code **local_718;
  undefined4 local_70c;
  undefined4 local_708;
  undefined4 local_704;
  undefined4 local_700;
  undefined4 local_6fc;
  undefined4 local_6f8;
  undefined4 local_6f4;
  undefined4 local_6f0;
  undefined4 local_6ec;
  undefined4 local_6e8;
  undefined4 local_6e4;
  undefined4 local_6e0;
  undefined4 local_6dc;
  undefined4 local_6d8;
  undefined4 local_6d4;
  undefined4 local_6d0;
  undefined4 local_6cc;
  undefined4 local_6c8;
  undefined4 local_6c4;
  undefined4 local_6c0;
  undefined4 local_6bc;
  longlong local_6b8;
  code *local_6b0;
  undefined4 local_6a4;
  undefined4 local_6a0;
  undefined4 local_69c;
  undefined4 local_698;
  undefined4 local_694;
  undefined4 local_690;
  undefined4 local_68c;
  undefined1 *local_688;
  undefined1 *puStack_680;
  void *local_678;
  undefined8 uStack_670;
  ushort local_65a;
  undefined8 local_658;
  undefined8 uStack_650;
  undefined8 local_648;
  undefined8 local_640;
  undefined8 local_638;
  undefined8 local_630;
  undefined8 uStack_628;
  undefined8 local_620;
  undefined4 uStack_618;
  undefined4 uStack_614;
  undefined4 local_610;
  undefined4 uStack_60c;
  undefined8 uStack_608;
  undefined4 local_600;
  undefined4 local_5fc;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined8 local_5e8;
  undefined4 local_5e0;
  undefined4 local_5dc;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined4 local_5c8;
  undefined4 local_5c4;
  undefined4 local_5c0;
  undefined4 local_5bc;
  undefined4 local_5b8;
  undefined4 local_5b4;
  undefined4 local_5b0;
  undefined4 local_5ac;
  undefined4 local_5a8;
  undefined4 local_5a4;
  undefined4 local_5a0;
  undefined8 local_238;
  undefined8 uStack_230;
  code *local_198;
  undefined **ppuStack_190;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined1 local_158;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_738;
  local_6b0 = param_2;
  (**(code **)(*param_1 + 0x410))(param_1,&local_65a);
  lVar18 = DAT_14ca97170;
  if ((local_65a & 0x220) != 0) {
    unaff_R15 = *(code **)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar14 = *(int *)(unaff_R15 + 0xc60);
    if (((iVar14 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar14 == 2)) {
      uVar26 = 0;
    }
    else if (iVar14 == 1) {
      DVar16 = FUN_140ad26c0();
      DVar17 = GetCurrentThreadId();
      uVar26 = (ulonglong)(DVar16 != DVar17);
    }
    else {
      uVar26 = 1;
    }
    if (*(int *)(lVar18 + uVar26 * 4) < 1) {
      unaff_R15 = unaff_R15 + 0xc60;
      lVar18 = (**(code **)(*param_1 + 0x510))(param_1);
      local_198 = (code *)&DAT_3f8000003f800000;
      ppuStack_190 = (undefined **)&DAT_3f8000003f800000;
      if (lVar18 == 0) {
        local_6c4 = 0x3f691bc5;
        local_6c0 = 0x3ead3261;
        local_70c = 0x3e8b295f;
        local_708 = 0x3db63294;
        local_704 = 0x3d93a699;
        local_6fc = 0x402b2fed;
        local_6f8 = 0x3dcccccd;
        uVar40 = 0x3f99999a;
        uVar41 = 0x3ef5c28f;
        uVar42 = 0x3ed1eb85;
        uVar43 = 0x3e8f5c29;
        uVar44 = 0x3ebd70a4;
        uVar45 = 0x3e99999a;
        uVar46 = 0x3da3d70a;
        uVar47 = 0x3f6e147b;
        uVar48 = 0x3fc66666;
        cVar34 = (code)0x0;
        cVar29 = (code)0x0;
        uVar49 = 0x3f400000;
        uVar50 = 0x3fa66666;
        uVar51 = 0x3f59999a;
        uVar52 = 0x3f800000;
        local_6f0 = 0x3f800000;
        local_6f4 = 0x3f800000;
        local_700 = 0x3f800000;
        local_6b8 = CONCAT44(local_6b8._4_4_,0x3f800000);
        local_6c8 = 0x3f800000;
        local_6cc = 0x3f800000;
        local_6d0 = 0x3f800000;
        local_6d4 = 0x3f800000;
        local_6d8 = 0x3f800000;
        local_6dc = 0x3f800000;
        local_6e0 = 0x3f800000;
        local_6ec = 0x3f800000;
        uVar53 = 0x3f800000;
        uVar54 = 0x3f800000;
      }
      else {
        local_6c4 = *(undefined4 *)(lVar18 + 0x28);
        local_6c0 = *(undefined4 *)(lVar18 + 0x2c);
        local_70c = *(undefined4 *)(lVar18 + 0x30);
        local_6e0 = *(undefined4 *)(lVar18 + 0x34);
        local_6dc = *(undefined4 *)(lVar18 + 0x38);
        local_708 = *(undefined4 *)(lVar18 + 0x3c);
        local_704 = *(undefined4 *)(lVar18 + 0x40);
        local_6d8 = *(undefined4 *)(lVar18 + 0x44);
        local_6fc = *(undefined4 *)(lVar18 + 0x48);
        local_6f8 = *(undefined4 *)(lVar18 + 0x4c);
        cVar29 = *(code *)(lVar18 + 0x50);
        cVar34 = *(code *)(lVar18 + 0x51);
        unaff_R13W = *(undefined2 *)(lVar18 + 0x52);
        local_6d4 = *(undefined4 *)(lVar18 + 0x54);
        local_6d0 = *(undefined4 *)(lVar18 + 0x58);
        local_6cc = *(undefined4 *)(lVar18 + 0x5c);
        local_6c8 = *(undefined4 *)(lVar18 + 0x60);
        uVar40 = *(undefined4 *)(lVar18 + 100);
        uVar41 = *(undefined4 *)(lVar18 + 0x68);
        uVar42 = *(undefined4 *)(lVar18 + 0x6c);
        uVar43 = *(undefined4 *)(lVar18 + 0x70);
        local_6b8 = CONCAT44(local_6b8._4_4_,*(undefined4 *)(lVar18 + 0x74));
        local_700 = *(undefined4 *)(lVar18 + 0x78);
        uVar44 = *(undefined4 *)(lVar18 + 0x7c);
        uVar45 = *(undefined4 *)(lVar18 + 0x80);
        local_6f4 = *(undefined4 *)(lVar18 + 0x84);
        local_198 = *(code **)(lVar18 + 0x88);
        ppuStack_190 = *(undefined ***)(lVar18 + 0x90);
        local_6f0 = *(undefined4 *)(lVar18 + 0x98);
        uVar46 = *(undefined4 *)(lVar18 + 0x9c);
        uVar47 = *(undefined4 *)(lVar18 + 0xa0);
        uVar48 = *(undefined4 *)(lVar18 + 0xa4);
        uVar49 = *(undefined4 *)(lVar18 + 0xa8);
        uVar50 = *(undefined4 *)(lVar18 + 0xac);
        uVar51 = *(undefined4 *)(lVar18 + 0xb0);
        uVar52 = *(undefined4 *)(lVar18 + 0xb4);
        local_6ec = *(undefined4 *)(lVar18 + 0xb8);
        uVar53 = *(undefined4 *)(lVar18 + 0xbc);
        uVar54 = *(undefined4 *)(lVar18 + 0xc0);
      }
      local_238 = local_198;
      uStack_230 = ppuStack_190;
      iVar14 = *(int *)unaff_R15;
      if (DAT_14c86a9fc == 0) {
        if (iVar14 != 2) {
          local_6e8 = uVar45;
          local_6e4 = uVar53;
          local_6bc = uVar54;
          local_6a4 = uVar40;
          local_6a0 = uVar41;
          if (iVar14 == 1) {
            DVar16 = FUN_140ad26c0();
            DVar17 = GetCurrentThreadId();
            bVar39 = DVar16 == DVar17;
          }
          else {
            bVar39 = iVar14 == 0x10;
          }
          uVar41 = local_6a0;
          uVar40 = local_6a4;
          uVar54 = local_6bc;
          uVar53 = local_6e4;
          uVar45 = local_6e8;
          if (!bVar39) goto LAB_1403be48f;
        }
      }
      else if (iVar14 != 0x10) {
LAB_1403be48f:
        local_6e4 = uVar53;
        if (DAT_14ca9a438 == '\0') {
          if ((DAT_14c86a9f8 != '\x01') || (*(int *)unaff_R15 == 2)) goto LAB_1403be27d;
          if (*(int *)unaff_R15 == 1) {
            local_6e8 = uVar45;
            local_694 = uVar47;
            local_690 = uVar48;
            local_68c = uVar46;
            DVar16 = FUN_140ad26c0();
            DVar17 = GetCurrentThreadId();
            uVar48 = local_690;
            uVar47 = local_694;
            uVar53 = local_6e4;
            uVar45 = local_6e8;
            uVar46 = local_68c;
            if (DVar16 == DVar17) goto LAB_1403be27d;
          }
        }
        local_6bc = uVar54;
        local_69c = uVar51;
        local_698 = uVar50;
        if (DAT_14ca9a43c == 0) {
          puVar2 = (undefined8 *)
                   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x308);
          puVar25 = (uint *)*puVar2;
          local_6a4 = uVar40;
          local_6a0 = uVar41;
          local_694 = uVar47;
          if (puVar25 != (uint *)0x0) goto LAB_1403befdb;
          do {
            uVar15 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar15 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar15 | 1;
              __tlregdtor(&LAB_14357e25f);
            }
            lVar36 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            puVar24 = *(undefined4 **)(lVar36 + 0x310);
            *(undefined8 *)(lVar36 + 0x310) = 0;
            if (puVar24 == (undefined4 *)0x0) {
              puVar24 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar24 = 0xffffffff;
            *(undefined4 **)(puVar24 + 0x10) = puVar24 + 0x16;
            puVar24[0x12] = 0;
            *puVar2 = puVar24;
            FUN_140217a48(puVar2);
            puVar25 = (uint *)*puVar2;
LAB_1403befdb:
            uVar47 = local_694;
            uVar41 = local_6a0;
            uVar40 = local_6a4;
            uVar26 = *(longlong *)(puVar25 + 0x10) + 7;
            uVar15 = puVar25[0x12];
            while( true ) {
              puVar33 = (undefined8 *)(uVar26 & 0xfffffffffffffff8);
              if (puVar33 + 0x2b <= puVar25 + 0x4000) {
                *(undefined8 **)(puVar25 + 0x10) = puVar33 + 0x2b;
                puVar25[0x12] = uVar15 + 1;
                unaff_R15 = (code *)0x0;
                local_6e8 = uVar49;
                FUN_1447247dc(puVar33,0);
                *puVar33 = &PTR_FUN_14a9db638;
                *(undefined4 *)(puVar33 + 0x15) = local_6c4;
                *(undefined4 *)((longlong)puVar33 + 0xac) = local_6c0;
                *(undefined4 *)(puVar33 + 0x16) = local_70c;
                *(undefined4 *)((longlong)puVar33 + 0xb4) = local_6e0;
                *(undefined4 *)(puVar33 + 0x17) = local_6dc;
                *(undefined4 *)((longlong)puVar33 + 0xbc) = local_708;
                *(undefined4 *)(puVar33 + 0x18) = local_704;
                *(undefined4 *)((longlong)puVar33 + 0xc4) = local_6d8;
                *(undefined4 *)(puVar33 + 0x19) = local_6fc;
                *(undefined4 *)((longlong)puVar33 + 0xcc) = local_6f8;
                *(code *)(puVar33 + 0x1a) = cVar29;
                *(code *)((longlong)puVar33 + 0xd1) = cVar34;
                *(undefined2 *)((longlong)puVar33 + 0xd2) = unaff_R13W;
                *(undefined4 *)((longlong)puVar33 + 0xd4) = local_6d4;
                *(undefined4 *)(puVar33 + 0x1b) = local_6d0;
                *(undefined4 *)((longlong)puVar33 + 0xdc) = local_6cc;
                *(undefined4 *)(puVar33 + 0x1c) = local_6c8;
                *(undefined4 *)((longlong)puVar33 + 0xe4) = uVar40;
                *(undefined4 *)(puVar33 + 0x1d) = uVar41;
                *(undefined4 *)((longlong)puVar33 + 0xec) = uVar42;
                *(undefined4 *)(puVar33 + 0x1e) = uVar43;
                *(undefined4 *)((longlong)puVar33 + 0xf4) = (undefined4)local_6b8;
                *(undefined4 *)(puVar33 + 0x1f) = local_700;
                *(undefined4 *)((longlong)puVar33 + 0xfc) = uVar44;
                *(undefined4 *)(puVar33 + 0x20) = uVar45;
                *(undefined4 *)((longlong)puVar33 + 0x104) = local_6f4;
                puVar33[0x21] = local_238;
                puVar33[0x22] = uStack_230;
                *(undefined4 *)(puVar33 + 0x23) = local_6f0;
                *(undefined4 *)((longlong)puVar33 + 0x11c) = uVar46;
                *(undefined4 *)(puVar33 + 0x24) = uVar47;
                *(undefined4 *)((longlong)puVar33 + 0x124) = uVar48;
                *(undefined4 *)(puVar33 + 0x25) = local_6e8;
                *(undefined4 *)((longlong)puVar33 + 300) = local_698;
                *(undefined4 *)(puVar33 + 0x26) = local_69c;
                *(undefined4 *)((longlong)puVar33 + 0x134) = uVar52;
                *(undefined4 *)(puVar33 + 0x27) = local_6ec;
                *(undefined4 *)((longlong)puVar33 + 0x13c) = local_6e4;
                *(undefined4 *)(puVar33 + 0x28) = local_6bc;
                puVar33[0x29] = lVar18;
                puVar33[0x2a] = local_6b0;
                if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                  uVar15 = DAT_14c7585c8 >> 10 & 3;
                  if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar15 < 2) {
                    uVar26 = (ulonglong)(byte)(&DAT_149e38edc)[uVar15];
                  }
                  else {
                    uVar26 = 2;
                  }
                }
                else {
                  uVar26 = 5;
                  unaff_R15 = (code *)(ulonglong)
                                      ((DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                                      *(int *)(&DAT_149e38ed0 +
                                              ((ulonglong)DAT_14c7585c8 & 0xff) * 4));
                }
                if (*(code **)(puVar33[0xe] + 0x18) != FUN_144713626) {
                  (**(code **)(puVar33[0xe] + 0x18))(puVar33 + 0xe,puVar33 + 9);
                }
                puVar33[0xe] = LowLevelTasks::
                               TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                               TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                               ::vftable;
                puVar33[9] = puVar33;
                puVar33[10] = puVar33;
                lVar18 = *(longlong *)
                          (*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x2b8);
                if (lVar18 == 0) {
                  uVar11 = 1;
                  if ((char)uVar26 != '\x06') {
                    uVar11 = uVar26;
                  }
                  uVar26 = uVar11;
                  uVar22 = 0;
                }
                else {
                  if ((char)uVar26 == '\x06') {
                    uVar26 = *(ulonglong *)(lVar18 + 0x38) >> 0x3b;
                  }
                  uVar22 = *(undefined8 *)(lVar18 + 0x30);
                }
                puVar33[0xf] = uVar22;
                puVar33[0x10] = uVar26 << 0x3b | 0xc00000527800b400;
                *(int *)((longlong)puVar33 + 0x1c) = (int)unaff_R15;
                if (puVar33 == (undefined8 *)0x0) {
                  local_658 = (code *)CONCAT71(local_658._1_7_,1);
                  FUN_1447439e4(0);
                }
                else {
                  LOCK();
                  *(int *)(puVar33 + 1) = *(int *)(puVar33 + 1) + 1;
                  UNLOCK();
                  local_658 = (code *)CONCAT71(local_658._1_7_,1);
                  FUN_1447439e4(puVar33);
                  LOCK();
                  piVar3 = (int *)(puVar33 + 1);
                  *piVar3 = *piVar3 + -1;
                  UNLOCK();
                  if (*piVar3 == 0) {
                    (**(code **)*puVar33)(puVar33,1);
                  }
                }
                goto LAB_1403be724;
              }
              *(uint **)(puVar25 + 0x10) = puVar25 + 0x4000;
              LOCK();
              uVar4 = *puVar25;
              *puVar25 = *puVar25 + uVar15 + 1;
              UNLOCK();
              if ((uVar4 ^ uVar15) != 0xffffffff) break;
              puVar25 = (uint *)*puVar2;
              *puVar25 = 0xffffffff;
              *(uint **)(puVar25 + 0x10) = puVar25 + 0x16;
              puVar25[0x12] = 0;
              *puVar2 = puVar25;
              uVar26 = (longlong)puVar25 + 0x5f;
              uVar15 = 0;
            }
          } while( true );
        }
        local_658 = (code *)0x0;
        local_648 = (code *)0x0;
        local_6e8 = uVar52;
        local_648 = (code *)FUN_14001cc68(0xb8,8);
        *(undefined ***)local_648 = &PTR_LAB_14a9db5d0;
        *(undefined4 *)(local_648 + 8) = local_6c4;
        *(undefined4 *)(local_648 + 0xc) = local_6c0;
        *(undefined4 *)(local_648 + 0x10) = local_70c;
        *(undefined4 *)(local_648 + 0x14) = local_6e0;
        *(undefined4 *)(local_648 + 0x18) = local_6dc;
        *(undefined4 *)(local_648 + 0x1c) = local_708;
        *(undefined4 *)(local_648 + 0x20) = local_704;
        *(undefined4 *)(local_648 + 0x24) = local_6d8;
        *(undefined4 *)(local_648 + 0x28) = local_6fc;
        *(undefined4 *)(local_648 + 0x2c) = local_6f8;
        local_648[0x30] = cVar29;
        local_648[0x31] = cVar34;
        *(undefined2 *)(local_648 + 0x32) = unaff_R13W;
        *(undefined4 *)(local_648 + 0x34) = local_6d4;
        *(undefined4 *)(local_648 + 0x38) = local_6d0;
        *(undefined4 *)(local_648 + 0x3c) = local_6cc;
        *(undefined4 *)(local_648 + 0x40) = local_6c8;
        *(undefined4 *)(local_648 + 0x44) = uVar40;
        *(undefined4 *)(local_648 + 0x48) = uVar41;
        *(undefined4 *)(local_648 + 0x4c) = uVar42;
        *(undefined4 *)(local_648 + 0x50) = uVar43;
        *(undefined4 *)(local_648 + 0x54) = (undefined4)local_6b8;
        *(undefined4 *)(local_648 + 0x58) = local_700;
        *(undefined4 *)(local_648 + 0x5c) = uVar44;
        *(undefined4 *)(local_648 + 0x60) = uVar45;
        *(undefined4 *)(local_648 + 100) = local_6f4;
        *(code **)(local_648 + 0x68) = local_198;
        *(undefined ***)(local_648 + 0x70) = ppuStack_190;
        *(undefined4 *)(local_648 + 0x78) = local_6f0;
        *(undefined4 *)(local_648 + 0x7c) = uVar46;
        *(undefined4 *)(local_648 + 0x80) = uVar47;
        *(undefined4 *)(local_648 + 0x84) = uVar48;
        *(undefined4 *)(local_648 + 0x88) = uVar49;
        *(undefined4 *)(local_648 + 0x8c) = local_698;
        *(undefined4 *)(local_648 + 0x90) = local_69c;
        *(undefined4 *)(local_648 + 0x94) = local_6e8;
        *(undefined4 *)(local_648 + 0x98) = local_6ec;
        *(undefined4 *)(local_648 + 0x9c) = local_6e4;
        *(undefined4 *)(local_648 + 0xa0) = local_6bc;
        *(longlong *)(local_648 + 0xa8) = lVar18;
        *(code **)(local_648 + 0xb0) = local_6b0;
        if (local_648 + 8 != (code *)0x0) {
          local_658 = FUN_14357e9ee;
        }
        local_718 = (code **)&local_658;
        FUN_14005a792(&DAT_14ca9a440,L"UpdateMaterialRenderProxySubsurface",&DAT_14caf1214);
        if (local_658 != (code *)0x0) {
          pcVar20 = local_648;
          if (local_648 == (code *)0x0) {
            pcVar20 = (code *)&local_638;
          }
          (**(code **)(*(longlong *)pcVar20 + 0x10))();
        }
        goto LAB_1403be724;
      }
LAB_1403be27d:
      if (lVar18 != 0) {
        local_658 = (code *)CONCAT44(local_6c0,local_6c4);
        uStack_650 = (code *)CONCAT44(local_6e0,local_70c);
        local_648 = (code *)CONCAT44(local_708,local_6dc);
        local_640 = CONCAT44(local_6d8,local_704);
        local_638 = (undefined **)CONCAT44(local_6f8,local_6fc);
        local_630 = (code *)CONCAT44(local_6d4,CONCAT22(unaff_R13W,CONCAT11(cVar34,cVar29)));
        uStack_628 = (undefined **)CONCAT44(local_6cc,local_6d0);
        local_620 = (code *)CONCAT44(uVar40,local_6c8);
        uStack_60c = (undefined4)local_6b8;
        uStack_608 = CONCAT44(uVar44,local_700);
        local_5fc = local_6f4;
        local_5f8 = local_198;
        uStack_5f0 = ppuStack_190;
        local_5e8 = (longlong *)CONCAT44(uVar46,local_6f0);
        local_5d8 = (undefined1 *)CONCAT44(uVar50,uVar49);
        uStack_5d0 = (undefined1 *)CONCAT44(uVar52,uVar51);
        local_5c8 = local_6ec;
        uStack_618 = uVar41;
        uStack_614 = uVar42;
        local_610 = uVar43;
        local_600 = uVar45;
        local_5e0 = uVar47;
        local_5dc = uVar48;
        local_5c4 = uVar53;
        local_5c0 = uVar54;
        FUN_140c6b438(&local_658,lVar18);
      }
      *(longlong *)(local_6b0 + 0x68) = lVar18;
    }
  }
LAB_1403be724:
  plVar19 = (longlong *)(**(code **)(*param_1 + 0x2b8))(param_1);
  if (((plVar19 != (longlong *)0x0) &&
      (cVar12 = (**(code **)(*plVar19 + 0x4b0))(plVar19), cVar12 != '\0')) &&
     (pcVar20 = (code *)(**(code **)(*param_1 + 0x540))(param_1), pcVar20 != (code *)0x0)) {
    uVar9 = *(undefined3 *)(pcVar20 + 0x28);
    ppuVar27 = *(undefined ***)(pcVar20 + 0x30);
    if (DAT_14c950c29 == 1) {
      if (ppuVar27 == (undefined **)0x0) {
        ppuVar27 = (undefined **)0x0;
      }
      else {
        FUN_1456cec3c();
        ppuVar27 = *(undefined ***)(pcVar20 + 0x30);
      }
    }
    pcVar23 = *(code **)(pcVar20 + 0x38);
    ppuVar8 = *(undefined ***)(pcVar20 + 0x40);
    unaff_R15 = (code *)(ulonglong)*(uint *)(pcVar20 + 0x44);
    uVar40 = *(undefined4 *)(pcVar20 + 0x48);
    local_6f8 = *(undefined4 *)(pcVar20 + 0x4c);
    local_6fc = *(undefined4 *)(pcVar20 + 0x50);
    local_700 = *(undefined4 *)(pcVar20 + 0x54);
    local_704 = *(undefined4 *)(pcVar20 + 0x58);
    local_708 = CONCAT31(local_708._1_3_,pcVar20[0x5c]);
    local_238 = (code *)CONCAT62(CONCAT51(local_238._3_5_,pcVar20[0x5f]),
                                 *(undefined2 *)(pcVar20 + 0x5d));
    local_6b8 = *(longlong *)(pcVar20 + 0x60);
    local_70c = CONCAT31(local_70c._1_3_,pcVar20[0x68]);
    uVar41 = *(undefined4 *)(pcVar20 + 0x70);
    local_6ec = *(undefined4 *)(pcVar20 + 0x74);
    local_6f0 = *(undefined4 *)(pcVar20 + 0x78);
    local_6f4 = *(undefined4 *)(pcVar20 + 0x7c);
    uStack_650 = local_6b0;
    local_640 = CONCAT53(local_640._3_5_,uVar9);
    local_658 = pcVar20;
    local_648 = pcVar20;
    local_638 = ppuVar27;
    if (((DAT_14c950c29 & 1) != 0) && (ppuVar27 != (undefined **)0x0)) {
      FUN_1456cec3c();
    }
    local_620 = (code *)CONCAT44(local_6f8,uVar40);
    uStack_618 = local_6fc;
    uStack_614 = local_700;
    local_610 = local_704;
    uStack_60c = CONCAT13(local_238._2_1_,CONCAT21((undefined2)local_238,(char)local_708));
    uStack_608 = local_6b8;
    local_600 = CONCAT31(local_600._1_3_,(undefined1)local_70c);
    local_5f8 = (code *)CONCAT44(local_6ec,uVar41);
    uStack_5f0 = (undefined **)CONCAT44(local_6f4,local_6f0);
    lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar14 = *(int *)(lVar18 + 0xc60);
    local_630 = pcVar23;
    uStack_628 = ppuVar8;
    local_5e8 = plVar19;
    if (DAT_14c86a9fc == 0) {
      if (iVar14 != 2) {
        if (iVar14 != 1) goto LAB_1403be909;
        DVar16 = FUN_140ad26c0();
        DVar17 = GetCurrentThreadId();
        if (DVar16 == DVar17) goto LAB_1403c05ff;
        goto LAB_1403be912;
      }
    }
    else {
LAB_1403be909:
      if (iVar14 != 0x10) {
LAB_1403be912:
        if (DAT_14ca9a438 == '\0') {
          if ((DAT_14c86a9f8 != '\x01') || (iVar14 = *(int *)(lVar18 + 0xc60), iVar14 == 2))
          goto LAB_1403c05ff;
          if (iVar14 == 1) {
            DVar16 = FUN_140ad26c0();
            DVar17 = GetCurrentThreadId();
            if (DVar16 == DVar17) goto LAB_1403c05ff;
          }
        }
        if (DAT_14ca9a43c == 0) {
          puVar2 = (undefined8 *)
                   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x308);
          puVar25 = (uint *)*puVar2;
          if (puVar25 != (uint *)0x0) goto LAB_1403bed74;
          do {
            uVar15 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar15 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar15 | 1;
              __tlregdtor(&LAB_14357e25f);
            }
            lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            puVar24 = *(undefined4 **)(lVar18 + 0x310);
            *(undefined8 *)(lVar18 + 0x310) = 0;
            if (puVar24 == (undefined4 *)0x0) {
              puVar24 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar24 = 0xffffffff;
            *(undefined4 **)(puVar24 + 0x10) = puVar24 + 0x16;
            puVar24[0x12] = 0;
            *puVar2 = puVar24;
            FUN_140217a48(puVar2);
            puVar25 = (uint *)*puVar2;
LAB_1403bed74:
            uVar26 = *(longlong *)(puVar25 + 0x10) + 7;
            uVar15 = puVar25[0x12];
            while( true ) {
              puVar33 = (undefined8 *)(uVar26 & 0xfffffffffffffff8);
              if (puVar33 + 0x24 <= puVar25 + 0x4000) {
                *(undefined8 **)(puVar25 + 0x10) = puVar33 + 0x24;
                puVar25[0x12] = uVar15 + 1;
                FUN_1447247dc(puVar33,0);
                *puVar33 = &PTR_FUN_14a9db6c0;
                *(undefined4 *)(puVar33 + 0x15) = (undefined4)local_658;
                *(undefined4 *)((longlong)puVar33 + 0xac) = local_658._4_4_;
                *(undefined4 *)(puVar33 + 0x16) = (undefined4)uStack_650;
                *(undefined4 *)((longlong)puVar33 + 0xb4) = uStack_650._4_4_;
                puVar33[0x17] = local_648;
                *(code *)((longlong)puVar33 + 0xc2) = local_640._2_1_;
                *(undefined2 *)(puVar33 + 0x18) = (undefined2)local_640;
                puVar33[0x19] = local_638;
                if ((local_638 != (undefined **)0x0 & DAT_14c950c29) == 1) {
                  FUN_1456cec3c();
                }
                *(code *)(puVar33 + 0x20) = local_600._0_1_;
                *(undefined4 *)(puVar33 + 0x1e) = local_610;
                *(undefined4 *)((longlong)puVar33 + 0xf4) = uStack_60c;
                *(undefined4 *)(puVar33 + 0x1f) = (undefined4)uStack_608;
                *(undefined4 *)((longlong)puVar33 + 0xfc) = uStack_608._4_4_;
                *(undefined4 *)(puVar33 + 0x1c) = (undefined4)local_620;
                *(undefined4 *)((longlong)puVar33 + 0xe4) = local_620._4_4_;
                *(undefined4 *)(puVar33 + 0x1d) = uStack_618;
                *(undefined4 *)((longlong)puVar33 + 0xec) = uStack_614;
                puVar33[0x1a] = local_630;
                puVar33[0x1b] = uStack_628;
                *(undefined4 *)(puVar33 + 0x21) = (undefined4)local_5f8;
                *(undefined4 *)((longlong)puVar33 + 0x10c) = local_5f8._4_4_;
                *(undefined4 *)(puVar33 + 0x22) = (undefined4)uStack_5f0;
                *(undefined4 *)((longlong)puVar33 + 0x114) = uStack_5f0._4_4_;
                puVar33[0x23] = local_5e8;
                uVar38 = (undefined7)((ulonglong)puVar2 >> 8);
                if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                  uVar15 = DAT_14c7585c8 >> 10 & 3;
                  iVar14 = 0;
                  if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar15 < 2) {
                    unaff_R15 = (code *)CONCAT71(uVar38,(&DAT_149e38edc)[uVar15]);
                    iVar14 = 0;
                  }
                  else {
                    unaff_R15 = (code *)CONCAT71(uVar38,2);
                  }
                }
                else {
                  iVar14 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                           *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
                  unaff_R15 = (code *)CONCAT71(uVar38,5);
                }
                if (*(code **)(puVar33[0xe] + 0x18) != FUN_144713626) {
                  (**(code **)(puVar33[0xe] + 0x18))(puVar33 + 0xe,puVar33 + 9);
                }
                puVar33[0xe] = LowLevelTasks::
                               TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                               TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                               ::vftable;
                puVar33[9] = puVar33;
                puVar33[10] = puVar33;
                lVar18 = *(longlong *)
                          (*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x2b8);
                cVar12 = (char)unaff_R15;
                if (lVar18 == 0) {
                  pcVar20 = (code *)((ulonglong)unaff_R15 & 0xff);
                  unaff_R15 = (code *)&DAT_00000001;
                  if (cVar12 != '\x06') {
                    unaff_R15 = pcVar20;
                  }
                  uVar22 = 0;
                }
                else {
                  if (cVar12 == '\x06') {
                    unaff_R15 = (code *)(*(ulonglong *)(lVar18 + 0x38) >> 0x3b);
                  }
                  uVar22 = *(undefined8 *)(lVar18 + 0x30);
                }
                puVar33[0xf] = uVar22;
                puVar33[0x10] = (longlong)unaff_R15 << 0x3b | 0xc00000527800b400;
                *(int *)((longlong)puVar33 + 0x1c) = iVar14;
                if (puVar33 == (undefined8 *)0x0) {
                  local_198 = (code *)CONCAT71(local_198._1_7_,1);
                  FUN_1447439e4(0);
                }
                else {
                  LOCK();
                  *(int *)(puVar33 + 1) = *(int *)(puVar33 + 1) + 1;
                  UNLOCK();
                  local_198 = (code *)CONCAT71(local_198._1_7_,1);
                  FUN_1447439e4(puVar33);
                  LOCK();
                  piVar3 = (int *)(puVar33 + 1);
                  *piVar3 = *piVar3 + -1;
                  UNLOCK();
                  if (*piVar3 == 0) {
                    (**(code **)*puVar33)(puVar33,1);
                  }
                }
                goto LAB_1403bea64;
              }
              *(uint **)(puVar25 + 0x10) = puVar25 + 0x4000;
              LOCK();
              uVar4 = *puVar25;
              *puVar25 = *puVar25 + uVar15 + 1;
              UNLOCK();
              if ((uVar4 ^ uVar15) != 0xffffffff) break;
              puVar25 = (uint *)*puVar2;
              *puVar25 = 0xffffffff;
              *(uint **)(puVar25 + 0x10) = puVar25 + 0x16;
              puVar25[0x12] = 0;
              *puVar2 = puVar25;
              uVar26 = (longlong)puVar25 + 0x5f;
              uVar15 = 0;
            }
          } while( true );
        }
        local_198 = (code *)0x0;
        local_188 = (code *)0x0;
        pcVar20 = (code *)FUN_14001cc68(0x80,8);
        *(undefined ***)pcVar20 = &PTR_LAB_14a9db650;
        *(undefined4 *)(pcVar20 + 8) = (undefined4)local_658;
        *(undefined4 *)(pcVar20 + 0xc) = local_658._4_4_;
        *(undefined4 *)(pcVar20 + 0x10) = (undefined4)uStack_650;
        *(undefined4 *)(pcVar20 + 0x14) = uStack_650._4_4_;
        *(code **)(pcVar20 + 0x18) = local_648;
        *(undefined2 *)(pcVar20 + 0x20) = (undefined2)local_640;
        pcVar20[0x22] = local_640._2_1_;
        *(undefined ***)(pcVar20 + 0x28) = local_638;
        local_188 = pcVar20;
        if ((local_638 != (undefined **)0x0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        pcVar20[0x60] = local_600._0_1_;
        *(undefined4 *)(pcVar20 + 0x50) = local_610;
        *(undefined4 *)(pcVar20 + 0x54) = uStack_60c;
        *(undefined4 *)(pcVar20 + 0x58) = (undefined4)uStack_608;
        *(undefined4 *)(pcVar20 + 0x5c) = uStack_608._4_4_;
        *(undefined4 *)(pcVar20 + 0x40) = (undefined4)local_620;
        *(undefined4 *)(pcVar20 + 0x44) = local_620._4_4_;
        *(undefined4 *)(pcVar20 + 0x48) = uStack_618;
        *(undefined4 *)(pcVar20 + 0x4c) = uStack_614;
        *(code **)(pcVar20 + 0x30) = local_630;
        *(undefined ***)(pcVar20 + 0x38) = uStack_628;
        *(undefined4 *)(pcVar20 + 0x68) = (undefined4)local_5f8;
        *(undefined4 *)(pcVar20 + 0x6c) = local_5f8._4_4_;
        *(undefined4 *)(pcVar20 + 0x70) = (undefined4)uStack_5f0;
        *(undefined4 *)(pcVar20 + 0x74) = uStack_5f0._4_4_;
        *(longlong **)(pcVar20 + 0x78) = local_5e8;
        if (pcVar20 != (code *)&DAT_fffffffffffffff8) {
          local_198 = FUN_14357ecaa;
        }
        local_718 = &local_198;
        FUN_14005a792(&DAT_14ca9a440,L"UpdateMaterialRenderProxyNNEModelData",&DAT_14caf1218);
        if (local_198 != (code *)0x0) {
          pcVar20 = local_188;
          if (local_188 == (code *)0x0) {
            pcVar20 = (code *)&local_178;
          }
          (**(code **)(*(longlong *)pcVar20 + 0x10))();
        }
        goto LAB_1403bea64;
      }
    }
LAB_1403c05ff:
    local_198 = (code *)CONCAT62(CONCAT51(local_198._3_5_,local_640._2_1_),(undefined2)local_640);
    ppuStack_190 = local_638;
    if ((local_638 != (undefined **)0x0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    local_158 = local_600._0_1_;
    local_168 = local_610;
    uStack_164 = uStack_60c;
    uStack_160 = (undefined4)uStack_608;
    uStack_15c = uStack_608._4_4_;
    local_178 = (undefined4)local_620;
    uStack_174 = local_620._4_4_;
    uStack_170 = uStack_618;
    uStack_16c = uStack_614;
    local_188 = local_630;
    uStack_180 = (undefined4)uStack_628;
    uStack_17c = uStack_628._4_4_;
    uVar13 = FUN_147cccff2(local_648,&local_5f8);
    *(undefined1 *)((longlong)local_5e8 + 0x1ff) = uVar13;
    *(code **)(uStack_650 + 0x90) = local_658;
  }
LAB_1403bea64:
  lVar36 = DAT_14ca97170;
  lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar14 = *(int *)(lVar18 + 0xc60);
  if (((iVar14 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar14 == 2)) {
    uVar26 = 0;
  }
  else if (iVar14 == 1) {
    DVar16 = FUN_140ad26c0();
    DVar17 = GetCurrentThreadId();
    uVar26 = (ulonglong)(DVar16 != DVar17);
  }
  else {
    uVar26 = 1;
  }
  if (*(int *)(lVar36 + uVar26 * 4) < 1) goto LAB_1403c08ed;
  local_238 = (code *)0x0;
  uStack_230 = (undefined **)0x0;
  iVar14 = (**(code **)(*param_1 + 0x530))(param_1);
  if (0 < iVar14) {
    iVar31 = 0;
    do {
      ppuVar27 = uStack_230;
      lVar36 = (longlong)(int)uStack_230;
      uVar15 = (int)uStack_230 + 1;
      uStack_230 = (undefined **)CONCAT44(uStack_230._4_4_,uVar15);
      if (uStack_230._4_4_ < uVar15) {
        FUN_14357f02a(&local_238,(ulonglong)ppuVar27 & 0xffffffff);
      }
      pcVar20 = local_238;
      unaff_R15 = local_238 + lVar36 * 0x440;
      FUN_14357effb(unaff_R15);
      lVar21 = (**(code **)(*param_1 + 0x538))(param_1,iVar31);
      *(longlong *)(pcVar20 + lVar36 * 0x440) = lVar21;
      if (lVar21 != 0) {
        FUN_147bbe85c(unaff_R15 + 8,lVar21 + 0x28);
        lVar36 = *(longlong *)unaff_R15;
        iVar5 = *(int *)(lVar36 + 0x44c);
        iVar6 = *(int *)(lVar36 + 0x450);
        iVar7 = *(int *)(lVar36 + 0x454);
        *(int *)(unaff_R15 + 0x430) = *(int *)(lVar36 + 0x448);
        *(int *)(unaff_R15 + 0x434) = iVar5;
        *(int *)(unaff_R15 + 0x438) = iVar6;
        *(int *)(unaff_R15 + 0x43c) = iVar7;
        if (*(longlong *)(unaff_R15 + 0x420) != 0) {
          *(longlong *)(unaff_R15 + 0x428) = *(longlong *)(*(longlong *)(lVar36 + 0x440) + 0x128);
        }
      }
      iVar31 = iVar31 + 1;
    } while (iVar14 != iVar31);
  }
  ppuVar27 = uStack_230;
  pcVar20 = local_238;
  uVar35 = SUB82(unaff_R15,0);
  piVar3 = (int *)(lVar18 + 0xc60);
  if (0 < (int)uStack_230) {
    local_198 = local_6b0;
    ppuStack_190 = (undefined **)0x0;
    local_188 = (code *)CONCAT44(local_188._4_4_,(int)uStack_230);
    FUN_14357f132(&ppuStack_190,(ulonglong)uStack_230 & 0xffffffff);
    FUN_14357f1ff(ppuStack_190,pcVar20,(ulonglong)ppuVar27 & 0xffffffff);
    iVar14 = *piVar3;
    if (DAT_14c86a9fc == 0) {
      if (iVar14 != 2) {
        if (iVar14 != 1) goto LAB_1403bebf6;
        DVar16 = FUN_140ad26c0();
        DVar17 = GetCurrentThreadId();
        if (DVar16 == DVar17) goto LAB_1403bebff;
        goto LAB_1403bf653;
      }
LAB_1403bebff:
      if ((longlong)(int)local_188 != 0) {
        lVar18 = (longlong)(int)local_188 * 0x440;
        ppuVar27 = ppuStack_190 + 0x86;
        do {
          if (ppuVar27[-0x86] == (undefined *)0x0) {
            puVar32 = (undefined *)0x0;
          }
          else {
            puVar32 = ppuVar27[-1];
            FUN_147bc57d6(&local_658,ppuVar27 + -0x85);
            FUN_147cdb92d(ppuVar27[-0x86],ppuVar27,&local_658,puVar32);
            puVar32 = ppuVar27[-0x86];
          }
          pcVar20 = local_198 + 0x80;
          iVar14 = *(int *)(local_198 + 0x88);
          *(uint *)(local_198 + 0x88) = iVar14 + 1U;
          if (*(uint *)(local_198 + 0x8c) < iVar14 + 1U) {
            FUN_147bc588e(pcVar20,iVar14);
          }
          *(undefined **)(*(longlong *)pcVar20 + (longlong)iVar14 * 8) = puVar32;
          ppuVar27 = ppuVar27 + 0x88;
          lVar18 = lVar18 + -0x440;
        } while (lVar18 != 0);
      }
    }
    else {
LAB_1403bebf6:
      if (iVar14 == 0x10) goto LAB_1403bebff;
LAB_1403bf653:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 == '\x01') && (*piVar3 != 2)) {
          if (*piVar3 == 1) {
            DVar16 = FUN_140ad26c0();
            DVar17 = GetCurrentThreadId();
            if (DVar16 == DVar17) goto LAB_1403c0988;
          }
          goto LAB_1403bf67f;
        }
LAB_1403c0988:
        if ((longlong)(int)local_188 != 0) {
          lVar18 = (longlong)(int)local_188 * 0x440;
          ppuVar27 = ppuStack_190 + 0x86;
          do {
            if (ppuVar27[-0x86] == (undefined *)0x0) {
              puVar32 = (undefined *)0x0;
            }
            else {
              puVar32 = ppuVar27[-1];
              FUN_147bc57d6(&local_658,ppuVar27 + -0x85);
              FUN_147cdb92d(ppuVar27[-0x86],ppuVar27,&local_658,puVar32);
              puVar32 = ppuVar27[-0x86];
            }
            pcVar20 = local_198 + 0x80;
            iVar14 = *(int *)(local_198 + 0x88);
            *(uint *)(local_198 + 0x88) = iVar14 + 1U;
            if (*(uint *)(local_198 + 0x8c) < iVar14 + 1U) {
              FUN_147bc588e(pcVar20,iVar14);
            }
            *(undefined **)(*(longlong *)pcVar20 + (longlong)iVar14 * 8) = puVar32;
            ppuVar27 = ppuVar27 + 0x88;
            lVar18 = lVar18 + -0x440;
          } while (lVar18 != 0);
        }
      }
      else {
LAB_1403bf67f:
        if (DAT_14ca9a43c == 0) {
          puVar2 = (undefined8 *)
                   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x308);
          puVar25 = (uint *)*puVar2;
          if (puVar25 != (uint *)0x0) goto LAB_1403bfe90;
          do {
            uVar15 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar15 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar15 | 1;
              __tlregdtor(&LAB_14357e25f);
            }
            lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            puVar24 = *(undefined4 **)(lVar18 + 0x310);
            *(undefined8 *)(lVar18 + 0x310) = 0;
            if (puVar24 == (undefined4 *)0x0) {
              puVar24 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar24 = 0xffffffff;
            *(undefined4 **)(puVar24 + 0x10) = puVar24 + 0x16;
            puVar24[0x12] = 0;
            *puVar2 = puVar24;
            FUN_140217a48(puVar2);
            puVar25 = (uint *)*puVar2;
LAB_1403bfe90:
            uVar26 = *(longlong *)(puVar25 + 0x10) + 7;
            uVar15 = puVar25[0x12];
            while( true ) {
              puVar33 = (undefined8 *)(uVar26 & 0xfffffffffffffff8);
              if (puVar33 + 0x18 <= puVar25 + 0x4000) {
                *(undefined8 **)(puVar25 + 0x10) = puVar33 + 0x18;
                puVar25[0x12] = uVar15 + 1;
                iVar14 = 0;
                FUN_1447247dc(puVar33,0);
                *puVar33 = &PTR_FUN_14a9db738;
                puVar33[0x15] = local_198;
                puVar33[0x16] = ppuStack_190;
                ppuStack_190 = (undefined **)0x0;
                *(int *)(puVar33 + 0x17) = (int)local_188;
                *(undefined4 *)((longlong)puVar33 + 0xbc) = local_188._4_4_;
                local_188 = (code *)0x0;
                uVar38 = (undefined7)((ulonglong)pcVar20 >> 8);
                if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                  uVar15 = DAT_14c7585c8 >> 10 & 3;
                  if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar15 < 2) {
                    pcVar20 = (code *)CONCAT71(uVar38,(&DAT_149e38edc)[uVar15]);
                  }
                  else {
                    pcVar20 = (code *)CONCAT71(uVar38,2);
                  }
                }
                else {
                  iVar14 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                           *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
                  pcVar20 = (code *)CONCAT71(uVar38,5);
                }
                if (*(code **)(puVar33[0xe] + 0x18) != FUN_144713626) {
                  (**(code **)(puVar33[0xe] + 0x18))(puVar33 + 0xe,puVar33 + 9);
                }
                puVar33[0xe] = LowLevelTasks::
                               TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                               TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                               ::vftable;
                puVar33[9] = puVar33;
                puVar33[10] = puVar33;
                lVar18 = *(longlong *)
                          (*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x2b8);
                cVar12 = (char)pcVar20;
                if (lVar18 == 0) {
                  pcVar23 = (code *)((ulonglong)pcVar20 & 0xff);
                  pcVar20 = (code *)&DAT_00000001;
                  if (cVar12 != '\x06') {
                    pcVar20 = pcVar23;
                  }
                  uVar22 = 0;
                }
                else {
                  if (cVar12 == '\x06') {
                    pcVar20 = (code *)(*(ulonglong *)(lVar18 + 0x38) >> 0x3b);
                  }
                  uVar22 = *(undefined8 *)(lVar18 + 0x30);
                }
                puVar33[0xf] = uVar22;
                puVar33[0x10] = (longlong)pcVar20 << 0x3b | 0xc00000527800b400;
                *(int *)((longlong)puVar33 + 0x1c) = iVar14;
                if (puVar33 == (undefined8 *)0x0) {
                  local_658 = (code *)CONCAT71(local_658._1_7_,1);
                  FUN_1447439e4(0);
                }
                else {
                  LOCK();
                  *(int *)(puVar33 + 1) = *(int *)(puVar33 + 1) + 1;
                  UNLOCK();
                  local_658 = (code *)CONCAT71(local_658._1_7_,1);
                  FUN_1447439e4(puVar33);
                  LOCK();
                  piVar1 = (int *)(puVar33 + 1);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)*puVar33)(puVar33,1);
                  }
                }
                goto LAB_1403bf712;
              }
              *(uint **)(puVar25 + 0x10) = puVar25 + 0x4000;
              LOCK();
              uVar4 = *puVar25;
              *puVar25 = *puVar25 + uVar15 + 1;
              UNLOCK();
              if ((uVar4 ^ uVar15) != 0xffffffff) break;
              puVar25 = (uint *)*puVar2;
              *puVar25 = 0xffffffff;
              *(uint **)(puVar25 + 0x10) = puVar25 + 0x16;
              puVar25[0x12] = 0;
              *puVar2 = puVar25;
              uVar26 = (longlong)puVar25 + 0x5f;
              uVar15 = 0;
            }
          } while( true );
        }
        local_718 = (code **)&local_658;
        local_648 = (code *)0x0;
        local_638 = &PTR_LAB_14a9db6d0;
        local_630 = local_198;
        uStack_628 = ppuStack_190;
        local_620 = local_188;
        ppuStack_190 = (undefined **)0x0;
        local_188 = (code *)0x0;
        local_658 = FUN_14357f262;
        FUN_14005a792(&DAT_14ca9a440,L"UpdateMaterialRenderProxySpecular",&DAT_14caf121c);
        if (local_658 != (code *)0x0) {
          pcVar23 = local_648;
          if (local_648 == (code *)0x0) {
            pcVar23 = (code *)&local_638;
          }
          (**(code **)(*(longlong *)pcVar23 + 0x10))();
        }
      }
    }
LAB_1403bf712:
    uVar35 = SUB82(pcVar20,0);
    FUN_14357efce(ppuStack_190,(ulonglong)local_188 & 0xffffffff);
    if (ppuStack_190 != (undefined **)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_14357efce(local_238,(int)uStack_230);
  if (local_238 != (code *)0x0) {
    FUN_1400020a8();
  }
  local_678 = (void *)0x0;
  uStack_670 = 0;
  iVar14 = (**(code **)(*param_1 + 0x518))(param_1);
  if (0 < iVar14) {
    iVar31 = 0;
    do {
      uVar26 = uStack_670;
      lVar18 = (longlong)(int)uStack_670;
      uVar15 = (int)uStack_670 + 1;
      uStack_670 = CONCAT44(uStack_670._4_4_,uVar15);
      if (uStack_670._4_4_ < uVar15) {
        FUN_14357f642(&local_678,uVar26 & 0xffffffff);
      }
      pvVar10 = local_678;
      pvVar37 = (void *)((longlong)local_678 + lVar18 * 0xa8);
      FUN_14357f632(pvVar37);
      lVar36 = (**(code **)(*param_1 + 0x520))(param_1,iVar31);
      *(longlong *)((longlong)pvVar10 + lVar18 * 0xa8) = lVar36;
      if (lVar36 != 0) {
        pvVar37 = (void *)((longlong)pvVar37 + 8);
        memcpy(pvVar37,(void *)(lVar36 + 0x28),0x9c);
      }
      uVar35 = SUB82(pvVar37,0);
      iVar31 = iVar31 + 1;
    } while (iVar14 != iVar31);
  }
  lVar18 = (**(code **)(*param_1 + 0x528))(param_1);
  pvVar37 = local_678;
  local_688 = &DAT_3f8000003f800000;
  puStack_680 = &DAT_3f8000003f800000;
  if (lVar18 == 0) {
    uVar40 = 0x3f691bc5;
    uVar41 = 0x3ead3261;
    uVar42 = 0x3e8b295f;
    uVar43 = 0x3db63294;
    uVar44 = 0x3d93a699;
    uVar45 = 0x402b2fed;
    uVar46 = 0x3dcccccd;
    uVar47 = 0x3f99999a;
    uVar48 = 0x3ef5c28f;
    uVar49 = 0x3ed1eb85;
    uVar50 = 0x3e8f5c29;
    uVar51 = 0x3ebd70a4;
    uVar52 = 0x3e99999a;
    uVar53 = 0x3da3d70a;
    local_6ec = 0x3f6e147b;
    local_6f0 = 0x3fc66666;
    uVar30 = 0;
    uVar13 = 0;
    local_6f4 = 0x3f400000;
    local_6f8 = 0x3fa66666;
    local_6fc = 0x3f59999a;
    uVar54 = 0x3f800000;
    local_700 = 0x3f800000;
    local_704 = 0x3f800000;
    local_708 = 0x3f800000;
    local_6b8 = CONCAT44(local_6b8._4_4_,0x3f800000);
    local_70c = 0x3f800000;
    local_6c0 = 0x3f800000;
    local_6c4 = 0x3f800000;
    local_6c8 = 0x3f800000;
    local_6cc = 0x3f800000;
    local_6d0 = 0x3f800000;
    local_6d4 = 0x3f800000;
    local_6d8 = 0x3f800000;
    local_6dc = 0x3f800000;
    local_6e0 = 0x3f800000;
  }
  else {
    uVar40 = *(undefined4 *)(lVar18 + 0x28);
    uVar41 = *(undefined4 *)(lVar18 + 0x2c);
    uVar42 = *(undefined4 *)(lVar18 + 0x30);
    local_6e0 = *(undefined4 *)(lVar18 + 0x34);
    local_6dc = *(undefined4 *)(lVar18 + 0x38);
    uVar43 = *(undefined4 *)(lVar18 + 0x3c);
    uVar44 = *(undefined4 *)(lVar18 + 0x40);
    local_6d8 = *(undefined4 *)(lVar18 + 0x44);
    uVar45 = *(undefined4 *)(lVar18 + 0x48);
    uVar46 = *(undefined4 *)(lVar18 + 0x4c);
    uVar13 = *(undefined1 *)(lVar18 + 0x50);
    uVar30 = *(undefined1 *)(lVar18 + 0x51);
    uVar35 = *(undefined2 *)(lVar18 + 0x52);
    local_6d4 = *(undefined4 *)(lVar18 + 0x54);
    local_6d0 = *(undefined4 *)(lVar18 + 0x58);
    local_6cc = *(undefined4 *)(lVar18 + 0x5c);
    local_6c8 = *(undefined4 *)(lVar18 + 0x60);
    uVar47 = *(undefined4 *)(lVar18 + 100);
    uVar48 = *(undefined4 *)(lVar18 + 0x68);
    uVar49 = *(undefined4 *)(lVar18 + 0x6c);
    uVar50 = *(undefined4 *)(lVar18 + 0x70);
    local_6c4 = *(undefined4 *)(lVar18 + 0x74);
    local_6c0 = *(undefined4 *)(lVar18 + 0x78);
    uVar51 = *(undefined4 *)(lVar18 + 0x7c);
    uVar52 = *(undefined4 *)(lVar18 + 0x80);
    local_70c = *(undefined4 *)(lVar18 + 0x84);
    local_688 = *(undefined1 **)(lVar18 + 0x88);
    puStack_680 = *(undefined1 **)(lVar18 + 0x90);
    local_6b8 = CONCAT44(local_6b8._4_4_,*(undefined4 *)(lVar18 + 0x98));
    uVar53 = *(undefined4 *)(lVar18 + 0x9c);
    local_6ec = *(undefined4 *)(lVar18 + 0xa0);
    local_6f0 = *(undefined4 *)(lVar18 + 0xa4);
    local_6f4 = *(undefined4 *)(lVar18 + 0xa8);
    local_6f8 = *(undefined4 *)(lVar18 + 0xac);
    local_6fc = *(undefined4 *)(lVar18 + 0xb0);
    local_708 = *(undefined4 *)(lVar18 + 0xb4);
    local_704 = *(undefined4 *)(lVar18 + 0xb8);
    local_700 = *(undefined4 *)(lVar18 + 0xbc);
    uVar54 = *(undefined4 *)(lVar18 + 0xc0);
  }
  local_658 = local_6b0;
  uStack_650 = (code *)0x0;
  lVar36 = (longlong)(int)uStack_670;
  local_648 = (code *)CONCAT44(local_648._4_4_,(int)uStack_670);
  if (lVar36 == 0) {
    local_648 = (code *)(uStack_670 & 0xffffffff);
  }
  else {
    local_6b0 = (code *)CONCAT44(local_6b0._4_4_,uVar49);
    local_6e4 = uVar50;
    local_6bc = uVar51;
    local_69c = uVar53;
    local_698 = uVar52;
    FUN_14357f7ac(&uStack_650,uStack_670 & 0xffffffff);
    memcpy(uStack_650,pvVar37,lVar36 * 0xa8);
    uVar49 = local_6b0._0_4_;
    uVar50 = local_6e4;
    uVar51 = local_6bc;
    uVar52 = local_698;
    uVar53 = local_69c;
  }
  local_638 = (undefined **)CONCAT44(uVar41,uVar40);
  local_630 = (code *)CONCAT44(local_6e0,uVar42);
  uStack_628 = (undefined **)CONCAT44(uVar43,local_6dc);
  local_620 = (code *)CONCAT44(local_6d8,uVar44);
  local_610 = CONCAT22(uVar35,CONCAT11(uVar30,uVar13));
  uStack_60c = local_6d4;
  uStack_608 = CONCAT44(local_6cc,local_6d0);
  local_600 = local_6c8;
  local_5f8 = (code *)CONCAT44(uVar49,uVar48);
  uStack_5f0 = (undefined **)CONCAT44(local_6c4,uVar50);
  local_5e8 = (longlong *)CONCAT44(uVar51,local_6c0);
  local_5dc = local_70c;
  local_5d8 = local_688;
  uStack_5d0 = puStack_680;
  local_5c8 = (undefined4)local_6b8;
  local_5c0 = local_6ec;
  local_5bc = local_6f0;
  local_5b8 = local_6f4;
  local_5b4 = local_6f8;
  local_5b0 = local_6fc;
  local_5ac = local_708;
  local_5a8 = local_704;
  local_5a4 = local_700;
  iVar14 = *piVar3;
  local_640 = lVar18;
  uStack_618 = uVar45;
  uStack_614 = uVar46;
  local_5fc = uVar47;
  local_5e0 = uVar52;
  local_5c4 = uVar53;
  local_5a0 = uVar54;
  if (DAT_14c86a9fc == 0) {
    if (iVar14 != 2) {
      if (iVar14 != 1) goto LAB_1403bfd46;
      DVar16 = FUN_140ad26c0();
      DVar17 = GetCurrentThreadId();
      if (DVar16 == DVar17) goto LAB_1403bfd4f;
      goto LAB_1403c0165;
    }
LAB_1403bfd4f:
    pcVar20 = uStack_650;
    lVar18 = (longlong)(int)local_648;
    if (lVar18 != 0) {
      lVar36 = 0;
      do {
        lVar21 = *(longlong *)(pcVar20 + lVar36);
        if (lVar21 == 0) {
          uVar22 = 0;
        }
        else {
          pcVar23 = pcVar20 + lVar36;
          memcpy(&local_198,pcVar23 + 8,0x9c);
          FUN_140c6b438(&local_198,lVar21);
          uVar22 = *(undefined8 *)pcVar23;
        }
        pcVar23 = local_658 + 0x70;
        iVar14 = *(int *)(local_658 + 0x78);
        *(uint *)(local_658 + 0x78) = iVar14 + 1U;
        if (*(uint *)(local_658 + 0x7c) < iVar14 + 1U) {
          FUN_147bc5914(pcVar23,iVar14);
        }
        *(undefined8 *)(*(longlong *)pcVar23 + (longlong)iVar14 * 8) = uVar22;
        lVar36 = lVar36 + 0xa8;
      } while (lVar18 * 0xa8 - lVar36 != 0);
    }
LAB_1403c0880:
    lVar18 = local_640;
    if (local_640 == 0) {
      lVar18 = 0;
    }
    else {
      memcpy(&local_238,&local_638,0x9c);
      FUN_140c6b438(&local_238,lVar18);
      lVar18 = local_640;
    }
    *(longlong *)(local_658 + 0x68) = lVar18;
  }
  else {
LAB_1403bfd46:
    if (iVar14 == 0x10) goto LAB_1403bfd4f;
LAB_1403c0165:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 == '\x01') && (*piVar3 != 2)) {
        if (*piVar3 == 1) {
          DVar16 = FUN_140ad26c0();
          DVar17 = GetCurrentThreadId();
          if (DVar16 == DVar17) goto LAB_1403c07e2;
        }
        goto LAB_1403c0191;
      }
LAB_1403c07e2:
      pcVar20 = uStack_650;
      lVar18 = (longlong)(int)local_648;
      if (lVar18 != 0) {
        lVar36 = 0;
        do {
          lVar21 = *(longlong *)(pcVar20 + lVar36);
          if (lVar21 == 0) {
            uVar22 = 0;
          }
          else {
            pcVar23 = pcVar20 + lVar36;
            memcpy(&local_198,pcVar23 + 8,0x9c);
            FUN_140c6b438(&local_198,lVar21);
            uVar22 = *(undefined8 *)pcVar23;
          }
          pcVar23 = local_658 + 0x70;
          iVar14 = *(int *)(local_658 + 0x78);
          *(uint *)(local_658 + 0x78) = iVar14 + 1U;
          if (*(uint *)(local_658 + 0x7c) < iVar14 + 1U) {
            FUN_147bc5914(pcVar23,iVar14);
          }
          *(undefined8 *)(*(longlong *)pcVar23 + (longlong)iVar14 * 8) = uVar22;
          lVar36 = lVar36 + 0xa8;
        } while (lVar18 * 0xa8 - lVar36 != 0);
      }
      goto LAB_1403c0880;
    }
LAB_1403c0191:
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar25 = (uint *)*puVar2;
      if (puVar25 != (uint *)0x0) goto LAB_1403c0329;
      while( true ) {
        uVar15 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar15 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar15 | 1;
          __tlregdtor(&LAB_14357e25f);
        }
        lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar24 = *(undefined4 **)(lVar18 + 0x310);
        *(undefined8 *)(lVar18 + 0x310) = 0;
        if (puVar24 == (undefined4 *)0x0) {
          puVar24 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar24 = 0xffffffff;
        *(undefined4 **)(puVar24 + 0x10) = puVar24 + 0x16;
        puVar24[0x12] = 0;
        *puVar2 = puVar24;
        FUN_140217a48(puVar2);
        puVar25 = (uint *)*puVar2;
LAB_1403c0329:
        puVar33 = (undefined8 *)(*(longlong *)(puVar25 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar28 = (uint *)(puVar33 + 0x2d);
        uVar15 = puVar25[0x12];
        if (puVar28 <= puVar25 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar25 + 0x10) = puVar25 + 0x4000;
          LOCK();
          uVar4 = *puVar25;
          *puVar25 = *puVar25 + uVar15 + 1;
          UNLOCK();
          if ((uVar4 ^ uVar15) != 0xffffffff) break;
          puVar25 = (uint *)*puVar2;
          *puVar25 = 0xffffffff;
          *(uint **)(puVar25 + 0x10) = puVar25 + 0x16;
          puVar25[0x12] = 0;
          *puVar2 = puVar25;
          puVar33 = (undefined8 *)((longlong)puVar25 + 0x5fU & 0xfffffffffffffff8);
          puVar28 = (uint *)(puVar33 + 0x2d);
          uVar15 = 0;
          if (puVar28 <= puVar25 + 0x4000) {
            uVar15 = 1;
            goto LAB_1403c03a9;
          }
        }
      }
      uVar15 = uVar15 + 1;
LAB_1403c03a9:
      *(uint **)(puVar25 + 0x10) = puVar28;
      puVar25[0x12] = uVar15;
      iVar14 = 0;
      FUN_1447247dc(puVar33,0);
      *puVar33 = &PTR_FUN_14a9db7c8;
      puVar33[0x15] = local_658;
      puVar33[0x16] = uStack_650;
      uStack_650 = (code *)0x0;
      *(int *)(puVar33 + 0x17) = (int)local_648;
      *(undefined4 *)((longlong)puVar33 + 0xbc) = local_648._4_4_;
      local_648 = (code *)0x0;
      memcpy(puVar33 + 0x18,&local_640,0xa4);
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar15 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar15 < 2) {
          uVar26 = (ulonglong)(byte)(&DAT_149e38edc)[uVar15];
        }
        else {
          uVar26 = 2;
        }
      }
      else {
        iVar14 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar26 = 5;
      }
      if (*(code **)(puVar33[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar33[0xe] + 0x18))(puVar33 + 0xe,puVar33 + 9);
      }
      puVar33[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar33[9] = puVar33;
      puVar33[10] = puVar33;
      lVar18 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar18 == 0) {
        uVar11 = 1;
        if ((char)uVar26 != '\x06') {
          uVar11 = uVar26;
        }
        uVar26 = uVar11;
        uVar22 = 0;
      }
      else {
        if ((char)uVar26 == '\x06') {
          uVar26 = *(ulonglong *)(lVar18 + 0x38) >> 0x3b;
        }
        uVar22 = *(undefined8 *)(lVar18 + 0x30);
      }
      puVar33[0xf] = uVar22;
      puVar33[0x10] = uVar26 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar33 + 0x1c) = iVar14;
      if (puVar33 == (undefined8 *)0x0) {
        local_198 = (code *)CONCAT71(local_198._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar33 + 1) = *(int *)(puVar33 + 1) + 1;
        UNLOCK();
        local_198 = (code *)CONCAT71(local_198._1_7_,1);
        FUN_1447439e4(puVar33);
        LOCK();
        piVar3 = (int *)(puVar33 + 1);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)*puVar33)(puVar33,1);
        }
      }
    }
    else {
      local_198 = (code *)0x0;
      pcVar20 = (code *)FUN_14001cc68(200,8);
      *(undefined ***)pcVar20 = &PTR_LAB_14a9db750;
      *(code **)(pcVar20 + 8) = local_658;
      *(code **)(pcVar20 + 0x10) = uStack_650;
      uStack_650 = (code *)0x0;
      *(int *)(pcVar20 + 0x18) = (int)local_648;
      *(undefined4 *)(pcVar20 + 0x1c) = local_648._4_4_;
      local_648 = (code *)0x0;
      local_188 = pcVar20;
      memcpy(pcVar20 + 0x20,&local_640,0xa4);
      if (pcVar20 != (code *)&DAT_fffffffffffffff8) {
        local_198 = FUN_14357f8ea;
      }
      local_718 = &local_198;
      FUN_14005a792(&DAT_14ca9a440,L"UpdateMaterialRenderProxySubsurfaceProfiles",&DAT_14caf1220);
      if (local_198 != (code *)0x0) {
        pcVar20 = local_188;
        if (local_188 == (code *)0x0) {
          pcVar20 = (code *)&local_178;
        }
        (**(code **)(*(longlong *)pcVar20 + 0x10))();
      }
    }
  }
  if (uStack_650 != (code *)0x0) {
    FUN_1400020a8();
  }
  if (local_678 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1403c08ed:
  if ((local_f0 ^ (ulonglong)auStack_738) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403c0b5a FUN_1403c0b5a body=35 status=ok
// SIG undefined FUN_1403c0b5a(void)

longlong * FUN_1403c0b5a(longlong *param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    (**(code **)(*param_1 + 0x150))(param_1);
  }
  return param_1;
}



// FUNCTION 1403c0b7e FUN_1403c0b7e body=104 status=ok
// SIG undefined FUN_1403c0b7e(void)

longlong FUN_1403c0b7e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (*param_2 != 0) {
    plVar1 = *(longlong **)(param_1 + 0xa0);
    uVar2 = (**(code **)(*plVar1 + 0x60))(plVar1);
    (**(code **)(*plVar1 + 0x58))(plVar1,*(undefined8 *)(param_1 + 0x70));
    (**(code **)(*plVar1 + 0x88))
              (plVar1,param_2,*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x70));
    (**(code **)(*plVar1 + 0x58))(plVar1,uVar2);
  }
  return param_1;
}



// FUNCTION 1403c0bec FUN_1403c0bec body=14 status=ok
// SIG undefined FUN_1403c0bec(void)

void FUN_1403c0bec(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) != param_2) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_1403c0bfa();
    return;
  }
  return;
}



// FUNCTION 1403c0bfa FUN_1403c0bfa body=452 status=ok
// SIG undefined FUN_1403c0bfa(void)

void FUN_1403c0bfa(undefined8 *param_1,uint param_2)

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
    FUN_1456bc5fe(uVar3,0xb0);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_1403c0d17:
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
LAB_1403c0d54:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 0xb0;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_1403c0c52;
LAB_1403c0c47:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_1403c0c52:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x174) goto code_r0x0001403c0c7e;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 0x2c + 0x18;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_1403c0cd4:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_1403c0d54;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_1403c0d17;
code_r0x0001403c0c7e:
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
      goto LAB_1403c0cd4;
    }
  }
  goto LAB_1403c0c47;
}



// FUNCTION 1403c0dbe FUN_1403c0dbe body=672 status=ok
// SIG undefined FUN_1403c0dbe(void)

ulonglong FUN_1403c0dbe(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = (**(code **)(*param_1 + 0x180))();
  if (((lVar4 != 0) &&
      ((((*(longlong *)(lVar4 + 0x30) == 0 ||
         (lVar6 = *(longlong *)(*(longlong *)(lVar4 + 0x30) + 0x2b0), lVar6 == 0)) ||
        (*(longlong *)(lVar6 + 0x588) == 0)) ||
       (*(double *)(lVar4 + 0x6d0) < *(double *)(lVar4 + 0x708))))) &&
     (((*(byte *)(lVar4 + 0x154) & 0x40) == 0 || (iVar3 = FUN_14490d72a(lVar4), iVar3 != 3)))) {
    if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0) {
      lVar6 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar6);
        if (*(longlong *)(lVar1 + 0x360) == lVar4) {
          if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x278) & 1) != 0)) goto LAB_1403c0e65;
          break;
        }
        lVar6 = lVar6 + 8;
      } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar6);
    }
    cVar2 = FUN_144a80e00(lVar4);
    if ((cVar2 == '\0') || (-1 < *(char *)(lVar4 + 0x155))) {
      if ((longlong *)param_1[9] == (longlong *)0x0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        puVar5 = (undefined8 *)(**(code **)(*(longlong *)param_1[9] + 0x18))();
        plVar7 = (longlong *)*puVar5;
      }
      if (((param_1[8] != 0) && (plVar7 != (longlong *)0x0)) && (param_1[9] != 0)) {
        uVar8 = CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
        if (param_1[10] == 0) {
          if (DAT_14cba8288 == 0) {
            local_40 = &local_28;
            local_28 = FUN_141864c34;
            local_30 = FUN_14081d0ea;
            local_38 = &LAB_1464cee30;
            local_48 = &LAB_148bfac22;
            local_50 = &LAB_140f21842;
            local_58 = &DAT_149e063b2;
            local_60 = 0;
            local_68 = 0x10000004;
            local_70 = 0x10;
            local_78 = 0x9cd0;
            FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
          }
          if (((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(plVar7[2] + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(plVar7[2] + 0x30) + (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) ==
               DAT_14cba8288 + 0x30)) &&
             (lVar4 = (**(code **)(*plVar7 + 0x638))(plVar7), lVar4 != 0)) {
            lVar6 = FUN_14016cc74();
            if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
              param_1[10] = *(longlong *)(lVar4 + 0x44c0);
            }
          }
        }
        goto LAB_1403c0e67;
      }
      uVar8 = 0;
      *(undefined4 *)(param_1 + 0xd) = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
      if ((char)param_1[0x11] != '\x01') goto LAB_1403c0e67;
      *(undefined1 *)(param_1 + 0x11) = 0;
    }
  }
LAB_1403c0e65:
  uVar8 = 0;
LAB_1403c0e67:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 1403c107a FUN_1403c107a body=57 status=ok
// SIG undefined FUN_1403c107a(void)

undefined8 * FUN_1403c107a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f631f0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1403c10b4 FUN_1403c10b4 body=14 status=ok
// SIG undefined FUN_1403c10b4(void)

void FUN_1403c10b4(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) != param_2) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_1403c10c2();
    return;
  }
  return;
}



// FUNCTION 1403c10c2 FUN_1403c10c2 body=453 status=ok
// SIG undefined FUN_1403c10c2(void)

void FUN_1403c10c2(undefined8 *param_1,uint param_2)

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
    FUN_1456bc5fe(uVar3,0xa0);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_1403c11e0:
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
LAB_1403c121d:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 0xa0;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_1403c111b;
LAB_1403c1110:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_1403c111b:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x19a) goto code_r0x0001403c1147;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 0x28 + 0x18;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_1403c119d:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_1403c121d;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_1403c11e0;
code_r0x0001403c1147:
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
      goto LAB_1403c119d;
    }
  }
  goto LAB_1403c1110;
}



// FUNCTION 1403c1288 FUN_1403c1288 body=32 status=ok
// SIG undefined FUN_1403c1288(void)

undefined8 * FUN_1403c1288(undefined8 *param_1)

{
  FUN_1403c12a8();
  *param_1 = &PTR_FUN_14a655460;
  return param_1;
}



// FUNCTION 1403c12a8 FUN_1403c12a8 body=324 status=ok
// SIG undefined FUN_1403c12a8(void)

undefined8 * FUN_1403c12a8(undefined8 *param_1,longlong *param_2)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14a9b8bb0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  bVar1 = *(byte *)(param_1 + 0x1d);
  bVar2 = *(byte *)((longlong)param_1 + 0x10a);
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf4) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined1 *)((longlong)param_1 + 0x199) = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined1 **)((longlong)param_1 + 0x10c) = &DAT_3f8000003f800000;
  *(undefined1 **)((longlong)param_1 + 0x114) = &DAT_3f8000003f800000;
  puVar4 = &DAT_14c846480;
  puVar5 = param_1 + 0x10;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0x26) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(byte *)(param_1 + 0x1d) = bVar1 & 0x9f;
  *(byte *)((longlong)param_1 + 0x10a) = bVar2 & 0x9d | 0x60;
  return param_1;
}



// FUNCTION 1403c13ec FUN_1403c13ec body=21 status=ok
// SIG undefined FUN_1403c13ec(void)

undefined8 FUN_1403c13ec(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1403c1402 FUN_1403c1402 body=1160 status=ok
// SIG undefined FUN_1403c1402(void)

void FUN_1403c1402(longlong param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  undefined8 local_198;
  longlong local_188 [18];
  undefined4 local_f4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined1 local_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined5 local_98;
  undefined3 uStack_93;
  undefined4 local_90;
  undefined1 local_8c;
  longlong local_88;
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  lVar3 = DAT_14cb24ad0;
  if (DAT_14cb24ad0 == 0) {
    plVar7 = (longlong *)FUN_145a7712c();
    lVar3 = plVar7[0x22];
    if (plVar7[0x22] == 0) {
      (**(code **)(*plVar7 + 1000))(plVar7);
      lVar3 = plVar7[0x22];
    }
  }
  DAT_14cb24ad0 = lVar3;
  lVar3 = DAT_14cb24ad0;
  iVar8 = 0;
  local_1a8 = (code *)0x0;
  memset(&local_198,0,0x100);
  local_c8 = 0xffffffff;
  local_198 = (longlong *)CONCAT44(0x3f800000,(undefined4)local_198);
  local_f4 = 0xffffffff;
  local_98 = 0;
  uStack_93 = 0;
  local_90 = 0;
  local_8c = 3;
  local_88 = 0;
  local_78 = (longlong *)0x0;
  if (0 < *(int *)(param_1 + 0x70)) {
    do {
      cVar4 = FUN_1403c188c(param_1 + 0x50);
      if (cVar4 == '\0') break;
      if ((((local_1a8._4_4_ != 0) && (-1 < (int)(uint)local_1a8)) &&
          ((int)(uint)local_1a8 < DAT_14c9647dc)) &&
         (((plVar7 = (longlong *)
                     ((ulonglong)(((uint)local_1a8 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_1a8 >> 0x10) * 8)),
           plVar7 != (longlong *)0x0 && ((int)plVar7[2] == local_1a8._4_4_)) &&
          (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 && ((longlong *)*plVar7 != (longlong *)0x0))))
         )) {
        (**(code **)(*(longlong *)*plVar7 + 0xac8))();
        iVar8 = iVar8 + 1;
      }
    } while (iVar8 < *(int *)(param_1 + 0x70));
    if (local_88 != 0) {
      plVar7 = local_78;
      if (local_78 == (longlong *)0x0) {
        plVar7 = local_68;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  local_1a8 = (code *)0x0;
  memset(&local_198,0,0x100);
  local_c8 = 0xffffffff;
  local_198 = (longlong *)CONCAT44(0x3f800000,(undefined4)local_198);
  local_f4 = 0xffffffff;
  local_98 = 0;
  uStack_93 = 0;
  local_90 = 0;
  local_8c = 3;
  local_88 = 0;
  local_78 = (longlong *)0x0;
  if (0 < *(int *)(param_1 + 0x70)) {
    iVar8 = 0;
    do {
      cVar4 = FUN_1403c188c(param_1 + 0x40,&local_1a8);
      if (cVar4 == '\0') break;
      if ((((local_1a8._4_4_ != 0) && (-1 < (int)(uint)local_1a8)) &&
          (((int)(uint)local_1a8 < DAT_14c9647dc &&
           (((plVar7 = (longlong *)
                       ((ulonglong)(((uint)local_1a8 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_1a8 >> 0x10) * 8)),
             plVar7 != (longlong *)0x0 && ((int)plVar7[2] == local_1a8._4_4_)) &&
            ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)))))) &&
         (plVar7 = (longlong *)*plVar7, plVar7 != (longlong *)0x0)) {
        (**(code **)(*plVar7 + 0xac0))(plVar7,&local_198);
        iVar8 = iVar8 + 1;
        if (*(char *)(lVar3 + 0x8d) == '\x01') {
          puVar5 = (undefined8 *)FUN_14001cc68(0x170,0x10);
          *puVar5 = 0;
          puVar5[2] = local_1a8;
          memcpy(puVar5 + 4,&local_198,0xb8);
          puVar5[0x1b] = local_e0;
          puVar5[0x1c] = local_d8;
          puVar5[0x1d] = uStack_d0;
          *(undefined4 *)(puVar5 + 0x1e) = local_c8;
          *(undefined1 *)((longlong)puVar5 + 0xf4) = local_c4;
          puVar5[0x23] = local_a0;
          *(undefined4 *)(puVar5 + 0x21) = local_b0;
          *(undefined4 *)((longlong)puVar5 + 0x10c) = uStack_ac;
          *(undefined4 *)(puVar5 + 0x22) = uStack_a8;
          *(undefined4 *)((longlong)puVar5 + 0x114) = uStack_a4;
          *(undefined4 *)(puVar5 + 0x1f) = local_c0;
          *(undefined4 *)((longlong)puVar5 + 0xfc) = uStack_bc;
          *(undefined4 *)(puVar5 + 0x20) = uStack_b8;
          *(undefined4 *)((longlong)puVar5 + 0x104) = uStack_b4;
          *(ulonglong *)((longlong)puVar5 + 0x125) = CONCAT17(local_8c,CONCAT43(local_90,uStack_93))
          ;
          puVar5[0x24] = CONCAT35(uStack_93,local_98);
          puVar5[0x26] = local_88;
          puVar5[0x28] = 0;
          if (local_88 != 0) {
            plVar7 = local_78;
            if (local_78 == (longlong *)0x0) {
              plVar7 = local_68;
            }
            (**(code **)*plVar7)(local_c0,puVar5 + 0x28);
          }
          if (puVar5 != (undefined8 *)0x0) {
            puVar1 = *(undefined8 **)(param_1 + 0x50);
            *(undefined8 **)(param_1 + 0x50) = puVar5;
            *puVar1 = puVar5;
          }
        }
      }
    } while (iVar8 < *(int *)(param_1 + 0x70));
    if (local_88 != 0) {
      plVar7 = local_68;
      if (local_78 != (longlong *)0x0) {
        plVar7 = local_78;
      }
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
  local_1a8 = (code *)0x0;
  local_198 = (longlong *)0x0;
  cVar4 = FUN_1403c1b2e(param_1 + 0x60,&local_1a8);
  if (cVar4 != '\0') {
    do {
      pcVar2 = local_1a8;
      plVar7 = local_198;
      if (local_198 == (longlong *)0x0) {
        plVar7 = local_188;
      }
      uVar6 = (**(code **)(*plVar7 + 8))();
      (*pcVar2)(uVar6);
      cVar4 = FUN_1403c1b2e(param_1 + 0x60,&local_1a8);
    } while (cVar4 != '\0');
  }
  if (local_1a8 != (code *)0x0) {
    plVar7 = local_188;
    if (local_198 != (longlong *)0x0) {
      plVar7 = local_198;
    }
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403c188c FUN_1403c188c body=672 status=ok
// SIG undefined FUN_1403c188c(void)

bool FUN_1403c188c(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStack_1f8 [32];
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_124;
  undefined4 local_f8;
  undefined4 local_c4;
  undefined1 local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  lVar1 = **(longlong **)(param_1 + 8);
  if (lVar1 != 0) {
    *param_2 = *(undefined8 *)(lVar1 + 0x10);
    memcpy(param_2 + 2,(void *)(lVar1 + 0x20),0x10d);
    local_1d8 = param_2[0x24];
    uStack_1d0 = param_2[0x25];
    local_1c8 = param_2[0x26];
    uStack_1c0 = param_2[0x27];
    local_1b8 = param_2[0x28];
    uStack_1b0 = param_2[0x29];
    local_1a8 = param_2[0x2a];
    uStack_1a0 = param_2[0x2b];
    uVar3 = *(undefined8 *)(lVar1 + 0x130);
    uVar4 = *(undefined8 *)(lVar1 + 0x138);
    uVar5 = *(undefined8 *)(lVar1 + 0x140);
    uVar6 = *(undefined8 *)(lVar1 + 0x148);
    uVar7 = *(undefined8 *)(lVar1 + 0x150);
    uVar8 = *(undefined8 *)(lVar1 + 0x158);
    uVar9 = *(undefined8 *)(lVar1 + 0x168);
    param_2[0x2a] = *(undefined8 *)(lVar1 + 0x160);
    param_2[0x2b] = uVar9;
    param_2[0x28] = uVar7;
    param_2[0x29] = uVar8;
    param_2[0x26] = uVar5;
    param_2[0x27] = uVar6;
    param_2[0x24] = uVar3;
    param_2[0x25] = uVar4;
    *(undefined8 *)(lVar1 + 0x160) = local_1a8;
    *(undefined8 *)(lVar1 + 0x168) = uStack_1a0;
    *(undefined8 *)(lVar1 + 0x150) = local_1b8;
    *(undefined8 *)(lVar1 + 0x158) = uStack_1b0;
    *(undefined8 *)(lVar1 + 0x140) = local_1c8;
    *(undefined8 *)(lVar1 + 0x148) = uStack_1c0;
    *(undefined8 *)(lVar1 + 0x130) = local_1d8;
    *(undefined8 *)(lVar1 + 0x138) = uStack_1d0;
    lVar2 = *(longlong *)(param_1 + 8);
    *(longlong *)(param_1 + 8) = lVar1;
    memset(&local_1d8,0,0x160);
    local_f8 = 0xffffffff;
    local_1c8 = CONCAT44(0x3f800000,(undefined4)local_1c8);
    local_124 = 0xffffffff;
    local_c4 = 0;
    local_bc = 3;
    local_a8 = (longlong *)0x0;
    *(undefined8 *)(lVar1 + 0x10) = 0;
    memcpy((void *)(lVar1 + 0x20),&local_1c8,0x10d);
    lVar10 = *(longlong *)(lVar1 + 0x130);
    uStack_70 = *(undefined8 *)(lVar1 + 0x138);
    local_68 = *(longlong **)(lVar1 + 0x140);
    uStack_60 = *(undefined8 *)(lVar1 + 0x148);
    local_58 = *(undefined8 *)(lVar1 + 0x150);
    uStack_50 = *(undefined8 *)(lVar1 + 0x158);
    local_48 = *(undefined8 *)(lVar1 + 0x160);
    uStack_40 = *(undefined8 *)(lVar1 + 0x168);
    uVar7 = local_48;
    uVar8 = uStack_40;
    uVar5 = local_58;
    uVar6 = uStack_50;
    uVar4 = uStack_60;
    local_78 = lVar10;
    lVar10 = local_78;
    uVar3 = uStack_70;
    *(ulonglong *)(lVar1 + 0x160) = CONCAT44(uStack_84,local_88);
    *(ulonglong *)(lVar1 + 0x168) = CONCAT44(uStack_7c,uStack_80);
    *(ulonglong *)(lVar1 + 0x150) = CONCAT44(uStack_94,local_98);
    *(ulonglong *)(lVar1 + 0x158) = CONCAT44(uStack_8c,uStack_90);
    *(longlong **)(lVar1 + 0x140) = local_a8;
    *(ulonglong *)(lVar1 + 0x148) = CONCAT44(uStack_9c,uStack_a0);
    *(ulonglong *)(lVar1 + 0x130) = CONCAT44(uStack_b4,local_b8);
    *(ulonglong *)(lVar1 + 0x138) = CONCAT44(uStack_ac,uStack_b0);
    local_78._0_4_ = (undefined4)lVar10;
    local_78._4_4_ = (undefined4)((ulonglong)lVar10 >> 0x20);
    uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
    uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
    local_88 = (undefined4)local_48;
    uStack_84 = local_48._4_4_;
    uStack_80 = (undefined4)uStack_40;
    uStack_7c = uStack_40._4_4_;
    local_98 = (undefined4)local_58;
    uStack_94 = local_58._4_4_;
    uStack_90 = (undefined4)uStack_50;
    uStack_8c = uStack_50._4_4_;
    uStack_a0 = (undefined4)uStack_60;
    uStack_9c = uStack_60._4_4_;
    local_b8 = (undefined4)local_78;
    uStack_b4 = local_78._4_4_;
    uStack_b0 = (undefined4)uStack_70;
    uStack_ac = uStack_70._4_4_;
    local_a8 = local_68;
    local_78 = lVar10;
    uStack_70 = uVar3;
    uStack_60 = uVar4;
    local_58 = uVar5;
    uStack_50 = uVar6;
    local_48 = uVar7;
    uStack_40 = uVar8;
    if (lVar10 != 0) {
      plVar11 = local_68;
      if (local_68 == (longlong *)0x0) {
        plVar11 = (longlong *)&local_98;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    if (lVar2 != 0) {
      if (*(longlong *)(lVar2 + 0x130) != 0) {
        plVar11 = (longlong *)(lVar2 + 0x150);
        if (*(longlong **)(lVar2 + 0x140) != (longlong *)0x0) {
          plVar11 = *(longlong **)(lVar2 + 0x140);
        }
        (**(code **)(*plVar11 + 0x10))();
      }
      FUN_1400020a8(lVar2);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return lVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403c1b2e FUN_1403c1b2e body=430 status=ok
// SIG undefined FUN_1403c1b2e(void)

bool FUN_1403c1b2e(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  longlong *plVar18;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
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
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = **(longlong **)(param_1 + 8);
  if (lVar1 != 0) {
    uVar3 = *param_2;
    uVar4 = param_2[1];
    uVar5 = param_2[2];
    uVar6 = param_2[3];
    uVar7 = param_2[4];
    uVar8 = param_2[5];
    uVar9 = param_2[6];
    uVar10 = param_2[7];
    uVar11 = *(undefined8 *)(lVar1 + 0x10);
    uVar12 = *(undefined8 *)(lVar1 + 0x18);
    uVar13 = *(undefined8 *)(lVar1 + 0x20);
    uVar14 = *(undefined8 *)(lVar1 + 0x28);
    uVar15 = *(undefined8 *)(lVar1 + 0x30);
    uVar16 = *(undefined8 *)(lVar1 + 0x38);
    uVar17 = *(undefined8 *)(lVar1 + 0x48);
    param_2[6] = *(undefined8 *)(lVar1 + 0x40);
    param_2[7] = uVar17;
    param_2[4] = uVar15;
    param_2[5] = uVar16;
    param_2[2] = uVar13;
    param_2[3] = uVar14;
    *param_2 = uVar11;
    param_2[1] = uVar12;
    *(undefined8 *)(lVar1 + 0x40) = uVar9;
    *(undefined8 *)(lVar1 + 0x48) = uVar10;
    *(undefined8 *)(lVar1 + 0x30) = uVar7;
    *(undefined8 *)(lVar1 + 0x38) = uVar8;
    *(undefined8 *)(lVar1 + 0x20) = uVar5;
    *(undefined8 *)(lVar1 + 0x28) = uVar6;
    *(undefined8 *)(lVar1 + 0x10) = uVar3;
    *(undefined8 *)(lVar1 + 0x18) = uVar4;
    lVar2 = *(longlong *)(param_1 + 8);
    *(longlong *)(param_1 + 8) = lVar1;
    local_98 = *(longlong *)(lVar1 + 0x10);
    uStack_50 = *(undefined8 *)(lVar1 + 0x18);
    local_88 = *(longlong **)(lVar1 + 0x20);
    uStack_40 = *(undefined8 *)(lVar1 + 0x28);
    local_38 = *(undefined8 *)(lVar1 + 0x30);
    uStack_30 = *(undefined8 *)(lVar1 + 0x38);
    local_28 = *(undefined8 *)(lVar1 + 0x40);
    uStack_20 = *(undefined8 *)(lVar1 + 0x48);
    uVar7 = local_28;
    uVar8 = uStack_20;
    uVar5 = local_38;
    uVar6 = uStack_30;
    local_48 = local_88;
    uVar4 = uStack_40;
    local_58 = local_98;
    uVar3 = uStack_50;
    *(ulonglong *)(lVar1 + 0x40) = CONCAT44(uStack_64,local_68);
    *(ulonglong *)(lVar1 + 0x48) = CONCAT44(uStack_5c,uStack_60);
    *(ulonglong *)(lVar1 + 0x30) = CONCAT44(uStack_74,local_78);
    *(ulonglong *)(lVar1 + 0x38) = CONCAT44(uStack_6c,uStack_70);
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(ulonglong *)(lVar1 + 0x28) = CONCAT44(uStack_7c,uStack_80);
    *(undefined8 *)(lVar1 + 0x10) = 0;
    *(ulonglong *)(lVar1 + 0x18) = CONCAT44(uStack_8c,uStack_90);
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
    local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
    uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
    local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
    uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
    local_68 = (undefined4)local_28;
    uStack_64 = local_28._4_4_;
    uStack_60 = (undefined4)uStack_20;
    uStack_5c = uStack_20._4_4_;
    local_78 = (undefined4)local_38;
    uStack_74 = local_38._4_4_;
    uStack_70 = (undefined4)uStack_30;
    uStack_6c = uStack_30._4_4_;
    uStack_80 = (undefined4)uStack_40;
    uStack_7c = uStack_40._4_4_;
    uStack_90 = (undefined4)uStack_50;
    uStack_8c = uStack_50._4_4_;
    uStack_50 = uVar3;
    uStack_40 = uVar4;
    local_38 = uVar5;
    uStack_30 = uVar6;
    local_28 = uVar7;
    uStack_20 = uVar8;
    if (local_98 != 0) {
      plVar18 = local_88;
      if (local_88 == (longlong *)0x0) {
        plVar18 = (longlong *)&local_78;
      }
      (**(code **)(*plVar18 + 0x10))();
    }
    if (lVar2 != 0) {
      if (*(longlong *)(lVar2 + 0x10) != 0) {
        plVar18 = (longlong *)(lVar2 + 0x30);
        if (*(longlong **)(lVar2 + 0x20) != (longlong *)0x0) {
          plVar18 = *(longlong **)(lVar2 + 0x20);
        }
        (**(code **)(*plVar18 + 0x10))();
      }
      FUN_1400020a8(lVar2);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return lVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403c1cde FUN_1403c1cde body=1127 status=ok
// SIG undefined FUN_1403c1cde(void)

void FUN_1403c1cde(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  double dVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStack_1c8 [40];
  longlong local_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined1 local_138 [8];
  undefined8 *local_130;
  undefined1 local_c0 [64];
  longlong local_80;
  undefined4 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  lVar5 = DAT_14cb24ad0;
  local_1a0 = param_1;
  if (DAT_14cb24ad0 == 0) {
    plVar10 = (longlong *)FUN_145a7712c();
    lVar5 = plVar10[0x22];
    if (plVar10[0x22] == 0) {
      (**(code **)(*plVar10 + 1000))(plVar10);
      lVar5 = plVar10[0x22];
    }
  }
  DAT_14cb24ad0 = lVar5;
  lVar5 = DAT_14cb24ad0;
  local_148 = *(undefined8 *)(param_2 + 0x38);
  local_158 = *(undefined4 *)(param_2 + 0x28);
  uStack_154 = *(undefined4 *)(param_2 + 0x2c);
  uStack_150 = *(undefined4 *)(param_2 + 0x30);
  uStack_14c = *(undefined4 *)(param_2 + 0x34);
  puVar6 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  puVar6[1] = 0;
  *puVar6 = &PTR_FUN_149f62a30;
  *(undefined4 *)(puVar6 + 2) = 0x3f800000;
  puVar6[3] = 0x3ff0000000000000;
  puVar6[4] = 0x3ff0000000000000;
  puVar6[5] = 0x3ff0000000000000;
  puVar7 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar7[1] = 0;
  *puVar7 = &PTR_FUN_149f615f0;
  *(undefined4 *)(puVar7 + 2) = 0x3f800000;
  puVar8 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  puVar8[1] = 0;
  *puVar8 = &PTR_FUN_149f62ba0;
  *(undefined4 *)(puVar8 + 2) = 0x3f800000;
  puVar8[3] = 0;
  puVar8[4] = puVar7;
  puVar8[5] = puVar6;
  *(undefined4 *)(puVar8 + 6) = 0;
  puVar6 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  uVar1 = *(undefined4 *)(lVar5 + 0x90);
  puVar6[1] = 0;
  *puVar6 = &PTR_FUN_149f61410;
  *(undefined4 *)(puVar6 + 2) = uVar1;
  puVar7 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  puVar7[1] = 0;
  *puVar7 = &PTR_FUN_149f62ba0;
  *(undefined4 *)(puVar7 + 2) = 0x3f800000;
  puVar7[3] = puVar6;
  puVar7[4] = puVar8;
  puVar7[5] = 0;
  *(undefined4 *)(puVar7 + 6) = 0;
  puVar6 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  lVar11 = local_1a0;
  uVar1 = *(undefined4 *)(param_2 + 0x100);
  puVar6[1] = 0;
  *puVar6 = &PTR_FUN_149f62b40;
  *(undefined4 *)(puVar6 + 2) = 0x3f800000;
  *(undefined4 *)((longlong)puVar6 + 0x14) = 0;
  *(undefined4 *)(puVar6 + 3) = 0x3f800000;
  *(undefined4 *)((longlong)puVar6 + 0x1c) = 0;
  *(undefined4 *)(puVar6 + 4) = uVar1;
  puVar6[7] = local_148;
  *(undefined4 *)(puVar6 + 5) = local_158;
  *(undefined4 *)((longlong)puVar6 + 0x2c) = uStack_154;
  *(undefined4 *)(puVar6 + 6) = uStack_150;
  *(undefined4 *)((longlong)puVar6 + 0x34) = uStack_14c;
  *(undefined4 *)(puVar6 + 8) = 1;
  if (*(char *)(lVar5 + 0x78) == '\x01') {
    local_198 = *(undefined4 *)(local_1a0 + 0x240);
    uStack_194 = *(undefined4 *)(local_1a0 + 0x244);
    uStack_190 = *(undefined4 *)(local_1a0 + 0x248);
    uStack_18c = *(undefined4 *)(local_1a0 + 0x24c);
    local_188 = *(undefined4 *)(local_1a0 + 0x250);
    uStack_184 = *(undefined4 *)(local_1a0 + 0x254);
    uStack_180 = *(undefined4 *)(local_1a0 + 600);
    uStack_17c = *(undefined4 *)(local_1a0 + 0x25c);
    local_178 = *(undefined4 *)(local_1a0 + 0x260);
    uStack_174 = *(undefined4 *)(local_1a0 + 0x264);
    uStack_170 = *(undefined4 *)(local_1a0 + 0x268);
    uStack_16c = *(undefined4 *)(local_1a0 + 0x26c);
    local_168 = *(undefined8 *)(local_1a0 + 0x270);
    uStack_160 = *(undefined8 *)(local_1a0 + 0x278);
    dVar3 = (double)(*(float *)(lVar5 + 0x84) * *(float *)(lVar5 + 0x88));
    puVar9 = (undefined8 *)FUN_14001cc68(0x80,0x10);
    uVar2 = *(undefined8 *)(lVar5 + 0x7c);
    *puVar9 = 0;
    puVar9[1] = 0;
    FUN_1446ddc76(puVar9 + 1,&DAT_149e02088,1);
    *puVar9 = &PTR_FUN_149f61590;
    puVar9[2] = uVar2;
    *(undefined4 *)(puVar9 + 4) = local_198;
    *(undefined4 *)((longlong)puVar9 + 0x24) = uStack_194;
    *(undefined4 *)(puVar9 + 5) = uStack_190;
    *(undefined4 *)((longlong)puVar9 + 0x2c) = uStack_18c;
    *(undefined4 *)(puVar9 + 6) = local_188;
    *(undefined4 *)((longlong)puVar9 + 0x34) = uStack_184;
    *(undefined4 *)(puVar9 + 7) = uStack_180;
    *(undefined4 *)((longlong)puVar9 + 0x3c) = uStack_17c;
    *(undefined4 *)(puVar9 + 8) = local_178;
    *(undefined4 *)((longlong)puVar9 + 0x44) = uStack_174;
    *(undefined4 *)(puVar9 + 9) = uStack_170;
    *(undefined4 *)((longlong)puVar9 + 0x4c) = uStack_16c;
    *(undefined4 *)(puVar9 + 10) = (undefined4)local_168;
    *(undefined4 *)((longlong)puVar9 + 0x54) = local_168._4_4_;
    *(undefined4 *)(puVar9 + 0xb) = (undefined4)uStack_160;
    *(undefined4 *)((longlong)puVar9 + 0x5c) = uStack_160._4_4_;
    auVar4._8_4_ = SUB84(dVar3,0);
    auVar4._0_8_ = dVar3;
    auVar4._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    *(undefined1 (*) [16])(puVar9 + 0xc) = auVar4;
    puVar9[0xe] = dVar3;
    puVar9[0xf] = 0;
    puVar8 = (undefined8 *)FUN_14001cc68(0x38,0x10);
    puVar8[1] = 0;
    FUN_1446ddc76(puVar8 + 1,&DAT_149e02088,1);
    *puVar8 = &PTR_FUN_149f62ba0;
    *(undefined4 *)(puVar8 + 2) = 0x3f800000;
    puVar8[3] = puVar9;
    puVar8[4] = puVar7;
    puVar8[5] = 0;
    *(undefined4 *)(puVar8 + 6) = 0;
    puVar9 = (undefined8 *)FUN_14001cc68(0x38,0x10);
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_149f62a90;
    FUN_1446ddc76(puVar9 + 1,&DAT_149e02088,1);
  }
  else {
    puVar9 = (undefined8 *)FUN_14001cc68(0x38,0x10);
    puVar9[1] = 0;
    puVar8 = puVar7;
    lVar11 = local_1a0;
  }
  *puVar9 = &PTR_FUN_149f62ba0;
  *(undefined4 *)(puVar9 + 2) = 0x3f800000;
  puVar9[3] = puVar6;
  puVar9[4] = puVar8;
  puVar9[5] = 0;
  *(undefined4 *)(puVar9 + 6) = 0;
  puVar6 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar6 = &PTR_FUN_14a3fdee0;
  puVar6[1] = 0x200000000;
  *(undefined4 *)(puVar6 + 2) = 0;
  FUN_1403c2146(local_138,6,puVar9,puVar6);
  FUN_1403c27ec(lVar11,local_138);
  local_78 = 0;
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  FUN_1401712c0(local_c0);
  if (local_130 != (undefined8 *)0x0) {
    (**(code **)*local_130)(local_130,1);
  }
  if ((local_70 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403c2146 FUN_1403c2146 body=212 status=ok
// SIG undefined FUN_1403c2146(void)

longlong FUN_1403c2146(longlong param_1,undefined8 param_2,longlong param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  undefined4 *local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 != 0) {
    FUN_1403c23ea(param_1);
    if (param_4 != (longlong *)0x0) {
      local_3c = (**(code **)(*param_4 + 8))(param_4);
      local_38 = &local_3c;
      FUN_1403c22bc(param_1 + 0x78,&local_2c,&local_38,0);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x78) + 8 + (longlong)local_2c * 0x18);
      if ((plVar1 != param_4) &&
         (*(longlong **)(*(longlong *)(param_1 + 0x78) + (longlong)local_2c * 0x18 + 8) = param_4,
         plVar1 != (longlong *)0x0)) {
        (**(code **)*plVar1)(plVar1,1);
      }
    }
    FUN_1403c221c(param_1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  FUN_14748d762(param_1);
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1403c221c FUN_1403c221c body=160 status=ok
// SIG undefined FUN_1403c221c(void)

void FUN_1403c221c(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined8 *)(param_1 + 0x20) = 0xc7efffffe0000000;
  *(undefined8 *)(param_1 + 0x28) = 0xc7efffffe0000000;
  *(undefined8 *)(param_1 + 0x30) = 0xc7efffffe0000000;
  *(undefined8 *)(param_1 + 0x38) = 0x47efffffe0000000;
  *(undefined8 *)(param_1 + 0x40) = 0x47efffffe0000000;
  *(undefined8 *)(param_1 + 0x48) = 0x47efffffe0000000;
  *(undefined4 *)(param_1 + 0x5c) = 0x3f800000;
  uVar2 = DAT_14c8464e8._4_4_;
  uVar1 = (undefined4)DAT_14c8464e8;
  uVar3 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x60) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)(param_1 + 100) = uVar3;
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
  *(undefined8 *)(param_1 + 0x70) = DAT_14c8464f0;
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
    uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x40))();
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x0001403c22ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 8) + 0x48))
              (*(longlong **)(param_1 + 8),param_1 + 0x20,param_1 + 0x38,param_1 + 0x60);
    return;
  }
  return;
}



// FUNCTION 1403c22bc FUN_1403c22bc body=301 status=ok
// SIG undefined FUN_1403c22bc(void)

undefined4 *
FUN_1403c22bc(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1403c3250(param_1,local_50);
  uVar3 = *(uint *)*param_3;
  *local_48 = uVar3;
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[4] = 0xffffffff;
  local_54 = local_50[0];
  local_68 = param_4;
  cVar1 = FUN_1403c2f12(param_1,uVar3,local_48);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar2 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      local_48[5] = uVar3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      local_48[4] = *(uint *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1403c2fd2(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403c23ea FUN_1403c23ea body=323 status=ok
// SIG undefined FUN_1403c23ea(void)

undefined8 * FUN_1403c23ea(undefined8 *param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  plVar2 = (longlong *)FUN_1403c252d();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa8fc8) {
    FUN_144b3d300(&DAT_14caa8fc8);
    if (DAT_14caa8fc8 == -1) {
      FUN_1446ddc76(&DAT_14caa8fc0,&DAT_149e02088,1);
      _Init_thread_footer(&DAT_14caa8fc8);
    }
  }
  puVar3 = &DAT_14caa8fc0;
  if (param_2 < (int)plVar2[1]) {
    puVar3 = (undefined8 *)((longlong)param_2 * 8 + *plVar2);
  }
  *param_1 = *puVar3;
  param_1[1] = param_3;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0xc7efffffe0000000;
  param_1[5] = 0xc7efffffe0000000;
  param_1[6] = 0xc7efffffe0000000;
  param_1[7] = 0x47efffffe0000000;
  param_1[8] = 0x47efffffe0000000;
  param_1[9] = 0x47efffffe0000000;
  *(undefined1 *)(param_1 + 10) = 1;
  *(int *)(param_1 + 0xb) = param_2;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x3f800000;
  uVar1 = DAT_14c8464e8;
  param_1[0xc] = DAT_14c8464e0;
  param_1[0xd] = uVar1;
  param_1[0xe] = DAT_14c8464f0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return param_1;
}



// FUNCTION 1403c252d FUN_1403c252d body=702 status=ok
// SIG undefined FUN_1403c252d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1403c252d(void)

{
  undefined1 auStack_d8 [40];
  undefined1 local_b0 [8];
  undefined1 local_a8 [8];
  undefined1 local_a0 [8];
  undefined1 local_98 [8];
  undefined1 local_90 [8];
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa8fe0) {
    FUN_144b3d300(&DAT_14caa8fe0);
    if (DAT_14caa8fe0 == -1) {
      FUN_1446ddc76(local_b0,&DAT_14a3fdca0,1);
      FUN_1446ddc76(local_a8,"DynamicState",1);
      FUN_1446ddc76(local_a0,"LinearForce",1);
      FUN_1446ddc76(local_98,"ExternalClusterStrain",1);
      FUN_1446ddc76(local_90,&DAT_14a3fdcc7,1);
      FUN_1446ddc76(local_88,"LinearVelocity",1);
      FUN_1446ddc76(local_80,"AngularVelocity",1);
      FUN_1446ddc76(local_78,"AngularTorque",1);
      FUN_1446ddc76(local_70,"InternalClusterStrain",1);
      FUN_1446ddc76(local_68,"DisableThreshold",1);
      FUN_1446ddc76(local_60,"SleepingThreshold",1);
      FUN_1446ddc76(local_58,"PositionStatic",1);
      FUN_1446ddc76(local_50,"PositionAnimated",1);
      FUN_1446ddc76(local_48,"PositionTarget",1);
      FUN_1446ddc76(local_40,"DynamicConstraint",1);
      FUN_1446ddc76(local_38,"CollisionGroup",1);
      FUN_1446ddc76(local_30,"ActivateDisabled",1);
      FUN_1446ddc76(local_28,"InitialLinearVelocity",1);
      FUN_1446ddc76(local_20,"InitialAngularVelocity",1);
      FUN_1446ddc76(local_18,"LinearImpulse",1);
      DAT_14caa8fd0 = (void *)0x0;
      _DAT_14caa8fd8 = 0x14;
      FUN_1401b309e(&DAT_14caa8fd0,0x14,0);
      memcpy(DAT_14caa8fd0,local_b0,0xa0);
      atexit((_func_5014 *)&LAB_14327791d);
      _Init_thread_footer(&DAT_14caa8fe0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return &DAT_14caa8fd0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403c27ec FUN_1403c27ec body=348 status=ok
// SIG undefined FUN_1403c27ec(void)

void FUN_1403c27ec(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined2 *local_f0;
  int local_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  float local_d8;
  undefined1 local_78 [64];
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((*(longlong *)(param_1 + 0xa40) != 0) && (*(longlong *)(param_2 + 8) != 0)) {
    FUN_14091baa4();
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa40) + 8);
    if (*(longlong *)(param_1 + 0xa8) == 0) {
      FUN_1446f470e(&local_f8,&DAT_149dfb77a,1);
    }
    else {
      local_f8 = *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x18);
      FUN_1400021e4(&local_f8,&local_f0);
      puVar3 = local_f0;
      if (local_e8 == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      FUN_1446f470e(&local_f8,puVar3,1);
      if (local_f0 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    FUN_1403c2a98(&local_f0,param_2);
    local_d8 = (float)*(double *)(lVar1 + 0x1f8);
    local_e0 = local_f8;
    FUN_1403c294a(*(undefined8 *)(param_1 + 0xa40),&local_f0);
    local_30 = 0;
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    FUN_1401712c0(local_78);
    puVar2 = (undefined8 *)CONCAT44(uStack_e4,local_e8);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403c294a FUN_1403c294a body=332 status=ok
// SIG undefined FUN_1403c294a(void)

void FUN_1403c294a(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined1 auStack_138 [40];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 local_100 [8];
  undefined8 *local_f8;
  undefined1 local_88 [64];
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    local_110 = param_1;
    uStack_108 = lVar1;
    FUN_1403c2a98(local_100);
    puVar2 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
    puVar3 = (undefined8 *)FUN_14001cc68(0xe0,8);
    *puVar3 = &PTR_LAB_149f6d8a0;
    *(undefined4 *)(puVar3 + 1) = (undefined4)local_110;
    *(undefined4 *)((longlong)puVar3 + 0xc) = local_110._4_4_;
    *(undefined4 *)(puVar3 + 2) = (undefined4)uStack_108;
    *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_108._4_4_;
    pcVar4 = FUN_142a28caa;
    if (puVar3 + 1 == (undefined8 *)0x0) {
      pcVar4 = (code *)0x0;
    }
    FUN_1403c2a98(puVar3 + 3,local_100);
    *(undefined2 *)(puVar2 + 1) = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined2 *)(puVar2 + 8) = 1;
    *puVar2 = &PTR_FUN_149f45dc0;
    puVar2[10] = pcVar4;
    puVar2[0xc] = puVar3;
    puVar2[0x12] = 0;
    puVar2[0x14] = 0;
    *(undefined1 *)(puVar2 + 0x1a) = 0;
    FUN_1406e6496(lVar1 + 0x70,puVar2);
    local_40 = 0;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    FUN_1401712c0(local_88);
    if (local_f8 != (undefined8 *)0x0) {
      (**(code **)*local_f8)(local_f8,1);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403c2a98 FUN_1403c2a98 body=843 status=ok
// SIG undefined FUN_1403c2a98(void)

undefined8 * FUN_1403c2a98(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined8 uVar11;
  uint *puVar12;
  longlong lVar13;
  undefined8 *puVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  int iVar20;
  ulonglong uVar21;
  int iVar22;
  ulonglong uVar23;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  uint local_6c;
  longlong *local_68;
  uint *local_60;
  longlong local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2[1] == 0) {
    FUN_1446ddc76(param_1,&DAT_149e02088,1);
  }
  else {
    *param_1 = *param_2;
  }
  uVar21 = 0;
  if ((longlong *)param_2[1] == (longlong *)0x0) {
    uVar11 = 0;
  }
  else {
    uVar11 = (**(code **)(*(longlong *)param_2[1] + 0x18))();
  }
  param_1[1] = uVar11;
  param_1[2] = param_2[2];
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  uVar11 = param_2[5];
  uVar4 = param_2[6];
  uVar5 = param_2[7];
  uVar6 = param_2[8];
  uVar7 = param_2[9];
  param_1[4] = param_2[4];
  param_1[5] = uVar11;
  param_1[6] = uVar4;
  param_1[7] = uVar5;
  param_1[8] = uVar6;
  param_1[9] = uVar7;
  param_1[10] = param_2[10];
  uVar9 = 0;
  if (param_2[1] != 0) {
    uVar9 = *(undefined4 *)(param_2 + 0xb);
  }
  *(undefined4 *)(param_1 + 0xb) = uVar9;
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x5c);
  uVar11 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar11;
  param_1[0xe] = param_2[0xe];
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  uVar2 = *(uint *)(param_2 + 0x14);
  if (uVar2 == 0) {
    uVar23 = 1;
    uVar10 = 0;
    iVar22 = 0;
  }
  else {
    puVar12 = (uint *)param_2[0x13];
    if ((uint *)param_2[0x13] == (uint *)0x0) {
      puVar12 = (uint *)(param_2 + 0x11);
    }
    uVar10 = *puVar12;
    if (uVar10 == 0) {
      iVar22 = uVar2 + 0x1e;
      if (-1 < (int)(uVar2 - 1)) {
        iVar22 = uVar2 - 1;
      }
      uVar21 = 0;
      uVar23 = (ulonglong)(uint)(iVar22 >> 5);
      if (iVar22 >> 5 < 1) {
        uVar23 = uVar21;
      }
      iVar22 = 0;
      do {
        if (uVar23 == uVar21) goto LAB_1403c2d46;
        iVar22 = iVar22 + 0x20;
        uVar10 = puVar12[uVar21 + 1];
        uVar21 = uVar21 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar21 = 0;
      iVar22 = 0;
    }
    uVar23 = (ulonglong)(-uVar10 & uVar10);
    uVar1 = uVar23 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    uVar10 = (iVar22 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
    if ((int)uVar2 <= (int)uVar10) {
      uVar10 = uVar2;
    }
  }
  if (uVar10 != uVar2) {
    local_68 = param_1 + 0xf;
    uVar19 = 0xffffffff;
    local_78 = (ulonglong)uVar2;
    local_60 = (uint *)(param_2 + 0x11);
    do {
      plVar8 = local_68;
      lVar17 = param_2[0xf] + (longlong)(int)uVar10 * 0x18;
      local_6c = uVar19;
      local_58 = lVar17;
      FUN_1403c2de4(local_68,&local_4c,&local_58,0);
      lVar13 = (longlong)local_4c;
      lVar18 = *plVar8;
      puVar14 = (undefined8 *)(**(code **)(**(longlong **)(lVar17 + 8) + 0x10))();
      puVar3 = *(undefined8 **)(lVar18 + 8 + lVar13 * 0x18);
      if ((puVar3 != puVar14) &&
         (*(undefined8 **)(lVar18 + lVar13 * 0x18 + 8) = puVar14, puVar3 != (undefined8 *)0x0)) {
        (**(code **)*puVar3)(puVar3,1);
      }
      uVar19 = local_6c & ~(uint)uVar23;
      puVar12 = (uint *)param_2[0x13];
      if ((uint *)param_2[0x13] == (uint *)0x0) {
        puVar12 = local_60;
      }
      uVar2 = *(uint *)(param_2 + 0x14);
      iVar20 = (int)uVar21;
      lVar17 = (longlong)iVar20;
      uVar10 = puVar12[lVar17] & uVar19;
      if (uVar10 == 0) {
        iVar15 = uVar2 + 0x1e;
        if (-1 < (int)(uVar2 - 1)) {
          iVar15 = uVar2 - 1;
        }
        iVar15 = iVar15 >> 5;
        iVar22 = iVar22 + 0x20;
        iVar16 = iVar15;
        if (iVar15 < iVar20) {
          iVar16 = iVar20;
        }
        if (iVar20 < iVar15) {
          lVar18 = 0;
          do {
            uVar10 = puVar12[lVar17 + lVar18 + 1];
            if (uVar10 != 0) {
              uVar21 = (ulonglong)(iVar20 + (int)lVar18 + 1);
              uVar19 = 0xffffffff;
              goto LAB_1403c2d11;
            }
            iVar22 = iVar22 + 0x20;
            lVar18 = lVar18 + 1;
          } while (iVar16 - lVar17 != lVar18);
          uVar19 = 0xffffffff;
          iVar20 = iVar16;
        }
        uVar21 = (ulonglong)(iVar20 + 1);
        uVar10 = uVar2;
      }
      else {
LAB_1403c2d11:
        uVar23 = (ulonglong)(-uVar10 & uVar10);
        uVar1 = uVar23 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        uVar10 = (iVar22 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        if ((int)uVar2 <= (int)uVar10) {
          uVar10 = uVar2;
        }
      }
    } while (uVar10 != (uint)local_78);
  }
LAB_1403c2d46:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1403c2de4 FUN_1403c2de4 body=301 status=ok
// SIG undefined FUN_1403c2de4(void)

undefined4 *
FUN_1403c2de4(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1403c3250(param_1,local_50);
  uVar3 = *(uint *)*param_3;
  *local_48 = uVar3;
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[4] = 0xffffffff;
  local_54 = local_50[0];
  local_68 = param_4;
  cVar1 = FUN_1403c2f12(param_1,uVar3,local_48);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar2 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      local_48[5] = uVar3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      local_48[4] = *(uint *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1403c2fd2(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403c2f12 FUN_1403c2f12 body=191 status=ok
// SIG undefined FUN_1403c2f12(void)

void FUN_1403c2f12(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  longlong *plVar7;
  int iVar8;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar8 * 0x18);
        if (*piVar1 == *param_3) {
          puVar2 = *(undefined8 **)(piVar1 + 2);
          if (puVar2 != (undefined8 *)0x0) {
            (**(code **)*puVar2)(puVar2,1);
          }
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *piVar1 = *param_3;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_146eecdfe(param_1,*param_4,1);
          *param_4 = iVar8;
          uVar6 = 1;
          break;
        }
        iVar8 = piVar1[4];
        uVar6 = 0;
      } while (iVar8 != -1);
      goto LAB_1403c2f40;
    }
  }
  uVar6 = 0;
LAB_1403c2f40:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 1403c2fd2 FUN_1403c2fd2 body=637 status=ok
// SIG undefined FUN_1403c2fd2(void)

void FUN_1403c2fd2(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar7 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar7,4);
    if ((int)uVar7 < 1) goto LAB_1403c3035;
  }
  uVar2 = 0;
  do {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar2) * 4) =
         0xffffffff;
    uVar2 = uVar2 + 1;
  } while (uVar7 != uVar2);
LAB_1403c3035:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar13 = 0;
    iVar4 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar7 = *puVar10;
    if (uVar7 == 0) {
      iVar13 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar13 = iVar14 + -1;
      }
      uVar3 = 0;
      uVar11 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
        uVar11 = uVar3;
      }
      iVar4 = 0;
      do {
        if (uVar11 == uVar3) {
          return;
        }
        iVar4 = iVar4 + 0x20;
        uVar7 = puVar10[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar3 = 0;
      iVar4 = 0;
    }
    uVar11 = (ulonglong)(-uVar7 & uVar7);
    uVar15 = uVar11 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar13 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar13) {
      iVar13 = iVar14;
    }
  }
  if (iVar13 < iVar14) {
    uVar7 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar12 = (longlong)iVar13;
      uVar15 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar6 + lVar12 * 0x18);
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0x14 + lVar12 * 0x18) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 0x10 + lVar12 * 0x18) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar15) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar14 & (longlong)(int)param_1[9] - 1U) * 4) = iVar13;
      uVar7 = ~(uint)uVar11 & uVar7;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar14 = (int)param_1[5];
      iVar13 = (int)uVar3;
      lVar6 = (longlong)iVar13;
      uVar2 = puVar10[lVar6] & uVar7;
      if (uVar2 == 0) {
        iVar8 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar8 = iVar14 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar13) {
          iVar9 = iVar13;
        }
        if (iVar8 <= iVar13) {
          return;
        }
        lVar12 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar10[lVar6 + lVar12 + 1];
          if (uVar2 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar9 - lVar6 == lVar12) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar13 + (int)lVar12 + 1);
        uVar7 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar15 = uVar11 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar13 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar13 < iVar14);
  }
  return;
}



// FUNCTION 1403c3250 FUN_1403c3250 body=706 status=ok
// SIG undefined FUN_1403c3250(void)

int * FUN_1403c3250(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
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
      FUN_14482b872(param_1,iVar15);
    }
    iVar8 = (int)param_1[5];
    if (iVar8 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar8 + 0x1e;
      if (-1 < iVar8 + -1) {
        iVar2 = iVar8 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar12 = param_1 + 2;
    iVar9 = iVar8 + 1;
    iVar16 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar16 = iVar8;
    }
    if (iVar16 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar9;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar8) {
        iVar2 = iVar8;
        if (iVar8 + 0x20U < 0xa0) {
          iVar9 = 0x80;
        }
        else {
          uVar18 = iVar8 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar11 = 4;
            if (4 < uVar18) {
              uVar11 = uVar18;
            }
          }
          else {
            uVar11 = uVar18 + (uVar18 * 3 >> 3) + 0x10;
          }
          uVar6 = (ulonglong)(uVar11 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar3 = (uint)(uVar6 + 0xf);
              if (uVar11 < 0x1ffd) {
                uVar6 = (ulonglong)
                        (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 + 0xf >> 4]];
              }
              else {
                uVar10 = (ulonglong)(uVar3 & 0xfffffff0);
                if (uVar10 < 0x7ff1) {
                  bVar7 = (&DAT_14c841e00)[uVar3 >> 4];
                  uVar14 = 0x32;
                  if (0x32 < bVar7) {
                    uVar14 = (ulonglong)bVar7;
                  }
                  uVar17 = 0x32 - (ulonglong)bVar7;
                  do {
                    uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar17 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar17 & 0xffffffff] & 0xf) == 0) goto LAB_1403c3409;
                    lVar5 = uVar14 + 1 + uVar17;
                    uVar17 = uVar17 - 1;
                  } while (lVar5 != 0x33);
                }
                uVar6 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar6 = (ulonglong)DAT_14c841df8;
                }
                uVar6 = -uVar6 & (uVar10 + uVar6) - 1;
              }
            }
            else {
              uVar6 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar6,0);
              iVar2 = (int)param_1[5];
            }
          }
LAB_1403c3409:
          iVar4 = (int)(uVar6 >> 2);
          iVar9 = -0x20;
          if ((int)uVar18 <= iVar4) {
            iVar9 = iVar4 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar9;
        FUN_1446efbd8(plVar12,iVar2);
        iVar9 = (int)param_1[5] + 1;
      }
      iVar2 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar2 = iVar9;
      }
      *(int *)(param_1 + 5) = iVar9;
      if (iVar9 % 0x20 != 0) {
        plVar13 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar13 = plVar12;
        }
        bVar7 = -(char)(iVar9 % 0x20);
        *(uint *)((longlong)plVar13 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar13 + (longlong)(iVar2 >> 5) * 4) << (bVar7 & 0x1f)) >>
             (bVar7 & 0x1f);
      }
    }
    lVar5 = (longlong)iVar15;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[4];
    }
    bVar7 = (byte)iVar8 & 0x1f;
    puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar16 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
  }
  else {
    iVar15 = (int)param_1[6];
    lVar5 = (longlong)iVar15;
    iVar8 = *(int *)(*param_1 + 4 + lVar5 * 0x18);
    *(int *)(param_1 + 6) = iVar8;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x18) = 0xffffffff;
    }
  }
  plVar12 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar12 = (longlong *)param_1[4];
  }
  iVar8 = iVar15 + 0x1f;
  if (-1 < iVar15) {
    iVar8 = iVar15;
  }
  puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar8 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar15 & 0x1f);
  *param_2 = iVar15;
  *(longlong *)(param_2 + 2) = lVar5 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 1403c3512 FUN_1403c3512 body=40 status=ok
// SIG undefined FUN_1403c3512(void)

undefined8 FUN_1403c3512(undefined8 param_1,int param_2)

{
  FUN_1403c353a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1403c353a FUN_1403c353a body=2044 status=ok
// SIG undefined FUN_1403c353a(void)

void FUN_1403c353a(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  undefined8 *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = &PTR_FUN_14b2232d0;
  param_1[5] = &PTR_FUN_14b224060;
  param_1[6] = &PTR_LAB_14b2240a0;
  param_1[0x55] = &PTR_FUN_14b2240f0;
  param_1[0x56] = &PTR_FUN_14b224170;
  param_1[0x57] = &PTR_FUN_14b224180;
  param_1[0xca] = &PTR_FUN_14b2241b0;
  param_1[0x15a] = &PTR_FUN_14b224210;
  param_1[0x247] = &PTR_FUN_14b224250;
  param_1[0x248] = &PTR_FUN_14b224290;
  param_1[0x249] = &PTR_FUN_14b2242b0;
  param_1[0x24a] = &PTR_FUN_14b2242e0;
  param_1[0x24b] = &PTR_FUN_14b224300;
  if (param_1[0x335] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x332],*(undefined4 *)(param_1 + 0x333));
  if (param_1[0x332] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x32f],*(undefined4 *)(param_1 + 0x330));
  if (param_1[0x32f] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x32c) = 0;
  if (param_1[0x32b] != 0) {
    FUN_1400020a8();
  }
  FUN_1403c3dde(param_1 + 0x323);
  *(undefined4 *)(param_1 + 0x321) = 0;
  if (param_1[800] != 0) {
    FUN_1400020a8();
  }
  FUN_1403c4632(param_1 + 0x318);
  if (param_1[0x316] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x314] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x310) = 0;
  if (param_1[0x30f] != 0) {
    FUN_1400020a8();
  }
  FUN_1403c49e0(param_1 + 0x307,0);
  if (param_1[0x30b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x307] != 0) {
    FUN_1400020a8();
  }
  FUN_1403c3da7(param_1[0x305],*(undefined4 *)(param_1 + 0x306));
  if (param_1[0x305] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x303] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x301] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x2fd) = 0;
  if (param_1[0x2fc] != 0) {
    FUN_1400020a8();
  }
  FUN_1403c407e(param_1 + 0x2f4,0);
  if (param_1[0x2f8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2f4] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x2f2) = 0;
  if (param_1[0x2f1] != 0) {
    FUN_1400020a8();
  }
  FUN_1403c3f86(param_1 + 0x2e9,0);
  if (param_1[0x2ed] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2e9] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x2e8) = 0;
  if (param_1[0x2e7] != 0) {
    FUN_1400020a8();
  }
  FUN_1403c4f90(param_1 + 0x2df,0);
  if (param_1[0x2e3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2df] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2dd] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x2dc) = 0;
  if (param_1[0x2db] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 0x2d3;
  puVar2 = param_1 + 0x2d5;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = puVar2;
  if (*(int *)(param_1 + 0x2d8) != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = plVar1;
  if (iStack_34 < *(int *)(local_40 + 3)) {
    do {
      if (*(longlong *)(*local_70 + 8 + (longlong)iStack_54 * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < *(int *)(local_60 + 3));
  }
  *(undefined4 *)(param_1 + 0x2d4) = 0;
  if (*(int *)((longlong)param_1 + 0x16a4) != 0) {
    FUN_1446f4a44(plVar1,0);
  }
  param_1[0x2d9] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2d8) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x16c4)) {
    *(undefined4 *)((longlong)param_1 + 0x16c4) = 0x80;
    FUN_1446efbd8(puVar2,0);
  }
  if (param_1[0x2d7] != 0) {
    FUN_1400020a8();
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2d1] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2cd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2cb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2c9] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x2c3],*(undefined4 *)(param_1 + 0x2c4));
  if (param_1[0x2c3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2c1] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2be] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x2bd) = 0;
  if (param_1[700] != 0) {
    FUN_1400020a8();
  }
  FUN_1403c3d70(param_1 + 0x2b4);
  *(undefined4 *)(param_1 + 0x2b0) = 0;
  if (param_1[0x2af] != 0) {
    FUN_1400020a8();
  }
  FUN_1403c3e16(param_1 + 0x2a7);
  *(undefined4 *)(param_1 + 0x2a6) = 0;
  if (param_1[0x2a5] != 0) {
    FUN_1400020a8();
  }
  FUN_1403c3d38(param_1 + 0x29d);
  *(undefined4 *)(param_1 + 0x29b) = 0;
  if (param_1[0x29a] != 0) {
    FUN_1400020a8();
  }
  FUN_1403c3e4e(param_1 + 0x292);
  *(undefined4 *)(param_1 + 0x28f) = 0;
  if (param_1[0x28e] != 0) {
    FUN_1400020a8();
  }
  FUN_1403c4176(param_1 + 0x286,0);
  if (param_1[0x28a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x286] != 0) {
    FUN_1400020a8();
  }
  FUN_1403c44e6(param_1 + 0x251);
  FUN_144909e75(param_1[0x24f],*(undefined4 *)(param_1 + 0x250));
  if (param_1[0x24f] != 0) {
    FUN_1400020a8();
  }
  FUN_144909e75(param_1[0x24d],*(undefined4 *)(param_1 + 0x24e));
  if (param_1[0x24d] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1403c41f2(param_1);
  return;
}



// FUNCTION 1403c3d38 FUN_1403c3d38 body=55 status=ok
// SIG undefined FUN_1403c3d38(void)

void FUN_1403c3d38(longlong *param_1)

{
  FUN_1403c42da(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1403c3d70 FUN_1403c3d70 body=55 status=ok
// SIG undefined FUN_1403c3d70(void)

void FUN_1403c3d70(longlong *param_1)

{
  FUN_1403c3f0a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1403c3da7 FUN_1403c3da7 body=54 status=ok
// SIG undefined FUN_1403c3da7(void)

void FUN_1403c3da7(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1403c3e85(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 1403c3dde FUN_1403c3dde body=55 status=ok
// SIG undefined FUN_1403c3dde(void)

void FUN_1403c3dde(longlong *param_1)

{
  FUN_1403c40fa(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1403c3e16 FUN_1403c3e16 body=55 status=ok
// SIG undefined FUN_1403c3e16(void)

void FUN_1403c3e16(longlong *param_1)

{
  FUN_1403c4002(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1403c3e4e FUN_1403c3e4e body=55 status=ok
// SIG undefined FUN_1403c3e4e(void)

void FUN_1403c3e4e(longlong *param_1)

{
  FUN_1403c4d84(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1403c3e85 FUN_1403c3e85 body=133 status=ok
// SIG undefined FUN_1403c3e85(void)

void FUN_1403c3e85(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x40);
    do {
      if (*plVar4 != 0) {
        FUN_1400020a8();
      }
      if (plVar4[-2] != 0) {
        FUN_1400020a8();
      }
      plVar3 = (longlong *)plVar4[-3];
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
      if (plVar4[-6] != 0) {
        FUN_1400020a8();
      }
      if (plVar4[-8] != 0) {
        FUN_1400020a8();
      }
      plVar4 = plVar4 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1403c3f0a FUN_1403c3f0a body=123 status=ok
// SIG undefined FUN_1403c3f0a(void)

void FUN_1403c3f0a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14494313c(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1403c3f86 FUN_1403c3f86 body=123 status=ok
// SIG undefined FUN_1403c3f86(void)

void FUN_1403c3f86(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1403c4002 FUN_1403c4002 body=123 status=ok
// SIG undefined FUN_1403c4002(void)

void FUN_1403c4002(longlong param_1,int param_2)

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
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1403c407e FUN_1403c407e body=123 status=ok
// SIG undefined FUN_1403c407e(void)

void FUN_1403c407e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1403c40fa FUN_1403c40fa body=123 status=ok
// SIG undefined FUN_1403c40fa(void)

void FUN_1403c40fa(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1401ad22e(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1403c4176 FUN_1403c4176 body=123 status=ok
// SIG undefined FUN_1403c4176(void)

void FUN_1403c4176(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1403c41f2 FUN_1403c41f2 body=232 status=ok
// SIG undefined FUN_1403c41f2(void)

void FUN_1403c41f2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b1a6c90;
  param_1[5] = &PTR_FUN_14b1a7a10;
  param_1[6] = &PTR_LAB_14b1a7a50;
  param_1[0x55] = &PTR_FUN_14b1a7aa0;
  param_1[0x56] = &PTR_FUN_14b1a7b20;
  param_1[0x57] = &PTR_FUN_14b1a7b30;
  param_1[0xca] = &PTR_FUN_14b1a7b60;
  param_1[0x15a] = &PTR_FUN_14b1a7bc0;
  if (param_1[0x244] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x23f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x233] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)((longlong)param_1 + 0x1194) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1194) = 0;
  }
  if (*(char *)(param_1 + 0x231) == '\x01') {
    *(undefined1 *)(param_1 + 0x231) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x117e) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x117e) = 0;
  }
  FUN_1403c5294(param_1);
  return;
}



// FUNCTION 1403c42da FUN_1403c42da body=523 status=ok
// SIG undefined FUN_1403c42da(void)

void FUN_1403c42da(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar13 = 0;
    uVar14 = 1;
    iVar10 = 0;
    iVar6 = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar11 = *puVar7;
    if (uVar11 == 0) {
      iVar10 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar10 = iVar2 + -1;
      }
      uVar13 = 0;
      uVar8 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar8 = uVar13;
      }
      iVar10 = 0;
      do {
        if (uVar8 == uVar13) goto LAB_1403c430d;
        iVar10 = iVar10 + 0x20;
        uVar11 = puVar7[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar13 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar11 & uVar11);
    uVar8 = uVar14 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar6 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 < iVar2) {
    uVar11 = 0xffffffff;
    do {
      FUN_1403c4c0a((longlong)iVar6 * 0x1f0 + *param_1 + 8);
      uVar11 = ~(uint)uVar14 & uVar11;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puVar1;
      }
      iVar2 = (int)param_1[5];
      iVar6 = (int)uVar13;
      lVar12 = (longlong)iVar6;
      uVar3 = puVar7[lVar12] & uVar11;
      if (uVar3 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar5 = iVar4;
        if (iVar4 < iVar6) {
          iVar5 = iVar6;
        }
        if (iVar4 <= iVar6) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar3 = puVar7[lVar12 + lVar9 + 1];
          if (uVar3 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar5 - lVar12 == lVar9) goto LAB_1403c430d;
        }
        uVar13 = (ulonglong)(iVar6 + (int)lVar9 + 1);
        uVar11 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_1403c430d:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1403c4d14(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar11 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar11 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar3 = 0x80;
  if (0x80 < (int)uVar11) {
    uVar3 = uVar11;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar3;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 1403c44e6 FUN_1403c44e6 body=332 status=ok
// SIG undefined FUN_1403c44e6(void)

void FUN_1403c44e6(longlong *param_1)

{
  FUN_1403c48c4(param_1 + 0x26);
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x23) = 0;
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_1403c4632(param_1 + 0x1a);
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x12],(int)param_1[0x13]);
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_140535736(param_1 + 6);
  FUN_1403c4669(param_1[4],(int)param_1[5]);
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



// FUNCTION 1403c4632 FUN_1403c4632 body=55 status=ok
// SIG undefined FUN_1403c4632(void)

void FUN_1403c4632(longlong *param_1)

{
  FUN_1403c46b6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1403c4669 FUN_1403c4669 body=77 status=ok
// SIG undefined FUN_1403c4669(void)

void FUN_1403c4669(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1403c46b6 FUN_1403c46b6 body=524 status=ok
// SIG undefined FUN_1403c46b6(void)

void FUN_1403c46b6(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar13 = 0;
    uVar14 = 1;
    iVar10 = 0;
    iVar6 = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar12 = *puVar7;
    if (uVar12 == 0) {
      iVar10 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar10 = iVar2 + -1;
      }
      uVar13 = 0;
      uVar8 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar8 = uVar13;
      }
      iVar10 = 0;
      do {
        if (uVar8 == uVar13) goto LAB_1403c4797;
        iVar10 = iVar10 + 0x20;
        uVar12 = puVar7[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar13 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar12 & uVar12);
    uVar8 = uVar14 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 < iVar2) {
    uVar12 = 0xffffffff;
    do {
      if (*(longlong *)(*param_1 + 0x20 + (longlong)iVar6 * 0x48) != 0) {
        FUN_1400020a8();
        iVar2 = (int)param_1[5];
      }
      uVar12 = uVar12 & ~(uint)uVar14;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puVar1;
      }
      iVar6 = (int)uVar13;
      lVar11 = (longlong)iVar6;
      uVar3 = puVar7[lVar11] & uVar12;
      if (uVar3 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar5 = iVar4;
        if (iVar4 < iVar6) {
          iVar5 = iVar6;
        }
        if (iVar4 <= iVar6) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar3 = puVar7[lVar11 + lVar9 + 1];
          if (uVar3 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar5 - lVar11 == lVar9) goto LAB_1403c4797;
        }
        uVar13 = (ulonglong)(iVar6 + (int)lVar9 + 1);
        uVar12 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_1403c4797:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1403af08a(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar12 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar12 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar3 = 0x80;
  if (0x80 < (int)uVar12) {
    uVar3 = uVar12;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar3;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 1403c48c4 FUN_1403c48c4 body=283 status=ok
// SIG undefined FUN_1403c48c4(void)

void FUN_1403c48c4(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  FUN_140efa5a0();
  FUN_1448a8284(param_1);
  param_1[3] = 0;
  plVar4 = param_1 + 0xd;
  if ((int)param_1[0xe] == 0) {
LAB_1403c4915:
    if (*plVar4 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar3 = (undefined8 *)*plVar4;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,0);
      FUN_1446efa72(plVar4,0,0,0x10);
      *(undefined4 *)(param_1 + 0xe) = 0;
      goto LAB_1403c4915;
    }
  }
  plVar4 = (longlong *)param_1[0xb];
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
  plVar4 = param_1 + 8;
  if ((int)param_1[9] != 0) {
    puVar3 = (undefined8 *)*plVar4;
    if (puVar3 == (undefined8 *)0x0) goto LAB_1403c4982;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar4,0,0,0x10);
    *(undefined4 *)(param_1 + 9) = 0;
  }
  if (*plVar4 != 0) {
    FUN_1400020a8();
  }
LAB_1403c4982:
  plVar4 = (longlong *)param_1[6];
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
  FUN_144760e21(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1403c49e0 FUN_1403c49e0 body=553 status=ok
// SIG undefined FUN_1403c49e0(void)

void FUN_1403c49e0(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar4 = (int)param_1[5];
  if (iVar4 == 0) {
    uVar17 = 0;
    uVar15 = 1;
    iVar13 = 0;
    iVar9 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar16 = *puVar10;
    if (uVar16 == 0) {
      iVar13 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar13 = iVar4 + -1;
      }
      uVar17 = 0;
      uVar11 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
        uVar11 = uVar17;
      }
      iVar13 = 0;
      do {
        if (uVar11 == uVar17) goto LAB_1403c4acd;
        iVar13 = iVar13 + 0x20;
        uVar16 = puVar10[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar17 = 0;
      iVar13 = 0;
    }
    uVar15 = (ulonglong)(-uVar16 & uVar16);
    uVar11 = uVar15 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar9 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar9) {
      iVar9 = iVar4;
    }
  }
  if (iVar9 < iVar4) {
    uVar16 = 0xffffffff;
    do {
      plVar5 = *(longlong **)(*param_1 + 0x10 + (longlong)iVar9 * 0x20);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar3 = (int *)((longlong)plVar5 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      uVar16 = uVar16 & ~(uint)uVar15;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = puVar1;
      }
      iVar4 = (int)param_1[5];
      iVar9 = (int)uVar17;
      lVar14 = (longlong)iVar9;
      uVar6 = puVar10[lVar14] & uVar16;
      if (uVar6 == 0) {
        iVar7 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar7 = iVar4 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar8 = iVar7;
        if (iVar7 < iVar9) {
          iVar8 = iVar9;
        }
        if (iVar7 <= iVar9) break;
        lVar12 = 0;
        while( true ) {
          iVar13 = iVar13 + 0x20;
          uVar6 = puVar10[lVar14 + lVar12 + 1];
          if (uVar6 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar8 - lVar14 == lVar12) goto LAB_1403c4acd;
        }
        uVar17 = (ulonglong)(iVar9 + (int)lVar12 + 1);
        uVar16 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar6 & uVar6);
      uVar11 = uVar15 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar9 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    } while (iVar9 < iVar4);
  }
LAB_1403c4acd:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar16 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar16 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar6 = 0x80;
  if (0x80 < (int)uVar16) {
    uVar6 = uVar16;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar6;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 1403c4c0a FUN_1403c4c0a body=212 status=ok
// SIG undefined FUN_1403c4c0a(void)

void FUN_1403c4c0a(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x158) != 0) {
    FUN_1400020a8();
  }
  FUN_14499ee64(*(undefined8 *)(param_1 + 0x128),*(undefined4 *)(param_1 + 0x130));
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FUN_1400020a8();
  }
  FUN_1402c741b(*(undefined8 *)(param_1 + 0x118),*(undefined4 *)(param_1 + 0x120));
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_1400020a8();
  }
  FUN_1403c4cde(*(undefined8 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0x100));
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1403c4cde FUN_1403c4cde body=53 status=ok
// SIG undefined FUN_1403c4cde(void)

void FUN_1403c4cde(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x38;
    do {
      if (*(longlong *)(param_1 + 8) != 0) {
        FUN_1457087f8(param_1);
      }
      param_1 = param_1 + 0x50;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1403c4d14 FUN_1403c4d14 body=112 status=ok
// SIG undefined FUN_1403c4d14(void)

void FUN_1403c4d14(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x1f0,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 4;
    iVar3 = SUB164(auVar1 * ZEXT816(0x842108421084211),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar4,0x1f0,8);
  }
  return;
}



// FUNCTION 1403c4d84 FUN_1403c4d84 body=523 status=ok
// SIG undefined FUN_1403c4d84(void)

void FUN_1403c4d84(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar13 = 0;
    uVar14 = 1;
    iVar10 = 0;
    iVar6 = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar11 = *puVar7;
    if (uVar11 == 0) {
      iVar10 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar10 = iVar2 + -1;
      }
      uVar13 = 0;
      uVar8 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar8 = uVar13;
      }
      iVar10 = 0;
      do {
        if (uVar8 == uVar13) goto LAB_1403c4db7;
        iVar10 = iVar10 + 0x20;
        uVar11 = puVar7[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar13 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar11 & uVar11);
    uVar8 = uVar14 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar6 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 < iVar2) {
    uVar11 = 0xffffffff;
    do {
      FUN_1403c51be((longlong)iVar6 * 0x460 + *param_1 + 0x10);
      uVar11 = ~(uint)uVar14 & uVar11;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puVar1;
      }
      iVar2 = (int)param_1[5];
      iVar6 = (int)uVar13;
      lVar12 = (longlong)iVar6;
      uVar3 = puVar7[lVar12] & uVar11;
      if (uVar3 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar5 = iVar4;
        if (iVar4 < iVar6) {
          iVar5 = iVar6;
        }
        if (iVar4 <= iVar6) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar3 = puVar7[lVar12 + lVar9 + 1];
          if (uVar3 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar5 - lVar12 == lVar9) goto LAB_1403c4db7;
        }
        uVar13 = (ulonglong)(iVar6 + (int)lVar9 + 1);
        uVar11 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_1403c4db7:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1403c629a(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar11 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar11 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar3 = 0x80;
  if (0x80 < (int)uVar11) {
    uVar3 = uVar11;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar3;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 1403c4f90 FUN_1403c4f90 body=557 status=ok
// SIG undefined FUN_1403c4f90(void)

void FUN_1403c4f90(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar13 = 0;
    uVar14 = 1;
    iVar10 = 0;
    iVar6 = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar11 = *puVar7;
    if (uVar11 == 0) {
      iVar10 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar10 = iVar2 + -1;
      }
      uVar13 = 0;
      uVar8 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar8 = uVar13;
      }
      iVar10 = 0;
      do {
        if (uVar8 == uVar13) goto LAB_1403c4fc5;
        iVar10 = iVar10 + 0x20;
        uVar11 = puVar7[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar13 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar11 & uVar11);
    uVar8 = uVar14 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar6 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 < iVar2) {
    uVar11 = 0xffffffff;
    do {
      lVar12 = *param_1;
      if (*(longlong *)(lVar12 + 0x18 + (longlong)iVar6 * 0x30) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar12 + (longlong)iVar6 * 0x30 + 8) != 0) {
        FUN_1400020a8();
      }
      uVar11 = uVar11 & ~(uint)uVar14;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puVar1;
      }
      iVar2 = (int)param_1[5];
      iVar6 = (int)uVar13;
      lVar12 = (longlong)iVar6;
      uVar3 = puVar7[lVar12] & uVar11;
      if (uVar3 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar5 = iVar4;
        if (iVar4 < iVar6) {
          iVar5 = iVar6;
        }
        if (iVar4 <= iVar6) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar3 = puVar7[lVar12 + lVar9 + 1];
          if (uVar3 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar5 - lVar12 == lVar9) goto LAB_1403c4fc5;
        }
        uVar13 = (ulonglong)(iVar6 + (int)lVar9 + 1);
        uVar11 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_1403c4fc5:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_14494313c(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar11 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar11 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar3 = 0x80;
  if (0x80 < (int)uVar11) {
    uVar3 = uVar11;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar3;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 1403c51be FUN_1403c51be body=214 status=ok
// SIG undefined FUN_1403c51be(void)

void FUN_1403c51be(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x438) = 0;
  if (*(longlong *)(param_1 + 0x430) != 0) {
    FUN_1400020a8();
  }
  FUN_14090bbce(param_1 + 0x3f0);
  FUN_140c7da48(param_1 + 0x368);
  FUN_141743852(param_1 + 0x270);
  if (*(char *)(param_1 + 0x262) == '\x01') {
    *(undefined1 *)(param_1 + 0x262) = 0;
  }
  FUN_1447ad90f(*(undefined8 *)(param_1 + 0x250),*(undefined4 *)(param_1 + 600));
  if (*(longlong *)(param_1 + 0x250) != 0) {
    FUN_1400020a8();
  }
  FUN_1447ad90f(*(undefined8 *)(param_1 + 0x240),*(undefined4 *)(param_1 + 0x248));
  if (*(longlong *)(param_1 + 0x240) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x230) != 0) {
    FUN_1417433c6(param_1 + 0x228);
  }
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    FUN_1400020a8();
  }
  FUN_1403c4c0a(param_1);
  return;
}



// FUNCTION 1403c5294 FUN_1403c5294 body=1898 status=ok
// SIG undefined FUN_1403c5294(void)

void FUN_1403c5294(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_14a8748c0;
  param_1[5] = &PTR_FUN_14a8755f0;
  param_1[6] = &PTR_LAB_14a875630;
  param_1[0x55] = &PTR_FUN_14a875680;
  param_1[0x56] = &PTR_FUN_14a875700;
  param_1[0x57] = &PTR_FUN_14a875710;
  param_1[0xca] = &PTR_FUN_14a875740;
  param_1[0x15a] = &PTR_FUN_14a8757a0;
  FUN_144760e21(param_1[0x22b],*(undefined4 *)(param_1 + 0x22c));
  if (param_1[0x22b] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x228],*(undefined4 *)(param_1 + 0x229));
  if (param_1[0x228] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x225],*(undefined4 *)(param_1 + 0x226));
  if (param_1[0x225] != 0) {
    FUN_1400020a8();
  }
  lVar5 = 0x10e8;
  do {
    if (*(longlong *)((longlong)param_1 + lVar5 + 0x30) != 0) {
      FUN_1400020a8();
    }
    FUN_144723c10(*(undefined8 *)((longlong)param_1 + lVar5 + 0x20),
                  *(undefined4 *)((longlong)param_1 + lVar5 + 0x28));
    if (*(longlong *)((longlong)param_1 + lVar5 + 0x20) != 0) {
      FUN_1400020a8();
    }
    FUN_144716758(*(undefined8 *)((longlong)param_1 + lVar5 + 0x10),
                  *(undefined4 *)((longlong)param_1 + lVar5 + 0x18));
    if (*(longlong *)((longlong)param_1 + lVar5 + 0x10) != 0) {
      FUN_1400020a8();
    }
    FUN_144716727(*(undefined8 *)((longlong)param_1 + lVar5),
                  *(undefined4 *)((longlong)param_1 + lVar5 + 8));
    if (*(longlong *)((longlong)param_1 + lVar5) != 0) {
      FUN_1400020a8();
    }
    lVar5 = lVar5 + -0x40;
  } while (lVar5 != 0x1068);
  if (param_1[0x213] != 0) {
    FUN_1400020a8();
  }
  FUN_144723c10(param_1[0x211],*(undefined4 *)(param_1 + 0x212));
  if (param_1[0x211] != 0) {
    FUN_1400020a8();
  }
  FUN_144716758(param_1[0x20f],*(undefined4 *)(param_1 + 0x210));
  if (param_1[0x20f] != 0) {
    FUN_1400020a8();
  }
  FUN_144716727(param_1[0x20d],*(undefined4 *)(param_1 + 0x20e));
  if (param_1[0x20d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x20b] != 0) {
    FUN_1400020a8();
  }
  FUN_144723c10(param_1[0x209],*(undefined4 *)(param_1 + 0x20a));
  if (param_1[0x209] != 0) {
    FUN_1400020a8();
  }
  FUN_144716758(param_1[0x207],*(undefined4 *)(param_1 + 0x208));
  if (param_1[0x207] != 0) {
    FUN_1400020a8();
  }
  FUN_144716727(param_1[0x205],*(undefined4 *)(param_1 + 0x206));
  if (param_1[0x205] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x201] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1fd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1f7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1f5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[499] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1f1] != 0) {
    FUN_1400020a8();
  }
  puVar3 = (undefined8 *)param_1[0x1ed];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar3 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  puVar3 = (undefined8 *)param_1[0x1ec];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar3 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  FUN_144760f98(param_1 + 0x1e6);
  if (param_1[0x1e4] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1e3) = 0;
  if (param_1[0x1e2] != 0) {
    FUN_1400020a8();
  }
  FUN_14064e7da(param_1 + 0x1da);
  *(undefined4 *)(param_1 + 0x1d9) = 0;
  if (param_1[0x1d8] != 0) {
    FUN_1400020a8();
  }
  FUN_1403c59fe(param_1 + 0x1d0);
  puVar3 = (undefined8 *)param_1[0x1cf];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar3 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  FUN_1403c5a35(param_1[0x1cd],*(undefined4 *)(param_1 + 0x1ce));
  if (param_1[0x1cd] != 0) {
    FUN_1400020a8();
  }
  FUN_144760f98(param_1 + 0x1b2);
  if (param_1[0x1b0] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1ae] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1ac] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1aa] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x19a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x197] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x195] != 0) {
    FUN_1400020a8();
  }
  if (param_1[400] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x189] != 0) {
    FUN_1400020a8();
  }
  FUN_144723c10(param_1[0x187],*(undefined4 *)(param_1 + 0x188));
  if (param_1[0x187] != 0) {
    FUN_1400020a8();
  }
  FUN_144716758(param_1[0x185],*(undefined4 *)(param_1 + 0x186));
  if (param_1[0x185] != 0) {
    FUN_1400020a8();
  }
  FUN_144716727(param_1[0x183],*(undefined4 *)(param_1 + 0x184));
  if (param_1[0x183] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x181] != 0) {
    FUN_1400020a8();
  }
  FUN_144723c10(param_1[0x17f],*(undefined4 *)(param_1 + 0x180));
  if (param_1[0x17f] != 0) {
    FUN_1400020a8();
  }
  FUN_144716758(param_1[0x17d],*(undefined4 *)(param_1 + 0x17e));
  if (param_1[0x17d] != 0) {
    FUN_1400020a8();
  }
  FUN_144716727(param_1[0x17b],*(undefined4 *)(param_1 + 0x17c));
  if (param_1[0x17b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x177] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x175] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x173] != 0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)param_1[0x172];
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
  if (param_1[0x16f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x163] != 0) {
    FUN_1400020a8();
  }
  FUN_1403c5b3e(param_1);
  return;
}



// FUNCTION 1403c59fe FUN_1403c59fe body=55 status=ok
// SIG undefined FUN_1403c59fe(void)

void FUN_1403c59fe(longlong *param_1)

{
  FUN_14497e2dc(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1403c5a35 FUN_1403c5a35 body=40 status=ok
// SIG undefined FUN_1403c5a35(void)

void FUN_1403c5a35(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14570887c(param_1);
    param_1 = param_1 + 0x48;
  }
  return;
}



// FUNCTION 1403c5a5e FUN_1403c5a5e body=224 status=ok
// SIG undefined FUN_1403c5a5e(void)

void FUN_1403c5a5e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = (longlong)param_2 * 0x110;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,0x10);
      }
    }
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x110)) {
      uVar2 = uVar1 / 0x110 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x110,0x10);
  }
  return;
}



// FUNCTION 1403c5b3e FUN_1403c5b3e body=1293 status=ok
// SIG undefined FUN_1403c5b3e(void)

void FUN_1403c5b3e(undefined8 *param_1)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  *param_1 = &PTR_FUN_14a877640;
  param_1[5] = &PTR_FUN_14a878280;
  param_1[6] = &PTR_LAB_14a8782c0;
  param_1[0x55] = &PTR_FUN_14a878310;
  param_1[0x56] = &PTR_FUN_14a878390;
  param_1[0x57] = &PTR_FUN_14a8783a0;
  param_1[0xca] = &PTR_FUN_14a8783d0;
  plVar5 = param_1 + 0x152;
  if (*(int *)(param_1 + 0x153) == 0) {
LAB_1403c5bb3:
    if (*plVar5 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar6 = (undefined8 *)*plVar5;
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)*puVar6)(puVar6,0);
      FUN_1446efa72(plVar5,0,0,0x10);
      *(undefined4 *)(param_1 + 0x153) = 0;
      goto LAB_1403c5bb3;
    }
  }
  if (param_1[0x14e] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x14e] + 8);
    uVar4 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar4 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0x14b] != 0 && (param_1[0x14b] & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_1[0x140] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13c] != 0) {
    FUN_1400020a8();
  }
  FUN_1401be7ff(param_1[0x13a],*(undefined4 *)(param_1 + 0x13b));
  if (param_1[0x13a] != 0) {
    FUN_1400020a8();
  }
  plVar5 = param_1 + 0x136;
  if (*(int *)(param_1 + 0x137) != 0) {
    puVar6 = (undefined8 *)*plVar5;
    if (puVar6 == (undefined8 *)0x0) goto LAB_1403c5c58;
    (**(code **)*puVar6)(puVar6,0);
    FUN_1446efa72(plVar5,0,0,0x10);
    *(undefined4 *)(param_1 + 0x137) = 0;
  }
  if (*plVar5 != 0) {
    FUN_1400020a8();
  }
LAB_1403c5c58:
  FUN_144760e21(param_1[0x11b],*(undefined4 *)(param_1 + 0x11c));
  if (param_1[0x11b] != 0) {
    FUN_1400020a8();
  }
  lVar7 = 0x888;
  do {
    if (*(longlong *)((longlong)param_1 + lVar7) != 0) {
      FUN_1400020a8();
    }
    lVar7 = lVar7 + -0x10;
  } while (lVar7 != 0x868);
  FUN_1403c604b(param_1[0x10d],*(undefined4 *)(param_1 + 0x10e));
  if (param_1[0x10d] != 0) {
    FUN_1400020a8();
  }
  FUN_1403c6071(param_1[0x106],*(undefined4 *)(param_1 + 0x107));
  if (param_1[0x106] != 0) {
    FUN_1400020a8();
  }
  FUN_1403c61a8(param_1[0x104],*(undefined4 *)(param_1 + 0x105));
  if (param_1[0x104] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x102] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x101) = 0;
  if (param_1[0x100] != 0) {
    FUN_1400020a8();
  }
  FUN_1403c60e6(param_1 + 0xf8);
  plVar5 = (longlong *)param_1[0xf7];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (param_1[0xf4] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xf3) = 0;
  if (param_1[0xf2] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xeb) = 0;
  if (*(int *)((longlong)param_1 + 0x75c) != 0) {
    FUN_14074f60a(param_1 + 0xea,0);
  }
  param_1[0xf0] = 0xffffffff;
  *(undefined4 *)(param_1 + 0xef) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x77c)) {
    *(undefined4 *)((longlong)param_1 + 0x77c) = 0x80;
    FUN_1446efbd8(param_1 + 0xec,0);
  }
  if (param_1[0xee] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xea] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe0] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xde] != 0) {
    FUN_1400020a8();
  }
  lVar7 = 0x6e0;
  do {
    if (*(longlong *)((longlong)param_1 + lVar7) != 0) {
      FUN_1400020a8();
    }
    lVar7 = lVar7 + -0x10;
  } while (lVar7 != 0x6c0);
  if (param_1[0xd8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xce] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e32c(param_1);
  return;
}



// FUNCTION 1403c604b FUN_1403c604b body=38 status=ok
// SIG undefined FUN_1403c604b(void)

void FUN_1403c604b(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1403c611e(param_1);
    param_1 = param_1 + 0x28;
  }
  return;
}



// FUNCTION 1403c6071 FUN_1403c6071 body=61 status=ok
// SIG undefined FUN_1403c6071(void)

void FUN_1403c6071(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1403c60ae(param_1);
    param_1 = param_1 + 0x50;
  }
  return;
}



// FUNCTION 1403c60ae FUN_1403c60ae body=55 status=ok
// SIG undefined FUN_1403c60ae(void)

void FUN_1403c60ae(longlong *param_1)

{
  FUN_14497e686(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1403c60e6 FUN_1403c60e6 body=55 status=ok
// SIG undefined FUN_1403c60e6(void)

void FUN_1403c60e6(longlong *param_1)

{
  FUN_1403c621e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1403c611e FUN_1403c611e body=69 status=ok
// SIG undefined FUN_1403c611e(void)

void FUN_1403c611e(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    param_1[2] = 0;
  }
  FUN_1403c6164(param_1);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1403c6164 FUN_1403c6164 body=68 status=ok
// SIG undefined FUN_1403c6164(void)

void FUN_1403c6164(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 != 0) {
    FUN_14074f9cc(lVar1);
    FUN_1400020a8(lVar1);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}



// FUNCTION 1403c61a8 FUN_1403c61a8 body=61 status=ok
// SIG undefined FUN_1403c61a8(void)

void FUN_1403c61a8(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1403c61e6(param_1);
    param_1 = param_1 + 0x58;
  }
  return;
}



// FUNCTION 1403c61e6 FUN_1403c61e6 body=55 status=ok
// SIG undefined FUN_1403c61e6(void)

void FUN_1403c61e6(longlong *param_1)

{
  FUN_14497e500(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1403c621e FUN_1403c621e body=123 status=ok
// SIG undefined FUN_1403c621e(void)

void FUN_1403c621e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1403c629a FUN_1403c629a body=226 status=ok
// SIG undefined FUN_1403c629a(void)

void FUN_1403c629a(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x460;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,0x10);
      }
    }
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x460)) {
      uVar2 = uVar1 / 0x460 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x460,0x10);
  }
  return;
}



// FUNCTION 1403c637c FUN_1403c637c body=647 status=ok
// SIG undefined FUN_1403c637c(void)

undefined8 * FUN_1403c637c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  uint *puVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar3;
  undefined8 uVar4;
  byte bVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_f8 [40];
  undefined1 local_d0 [128];
  undefined1 *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *param_1 = &PTR_FUN_14a34b040;
  lVar12 = DAT_14ca77418;
  lpCriticalSection = (LPCRITICAL_SECTION)(DAT_14ca77418 + 0xa0);
  EnterCriticalSection(lpCriticalSection);
  iVar3 = *(int *)(lVar12 + 0xd0);
  *(uint *)(lVar12 + 0xd0) = iVar3 + 1U;
  if (*(uint *)(lVar12 + 0xd4) < iVar3 + 1U) {
    FUN_1449031f2((longlong *)(lVar12 + 200),iVar3);
  }
  lVar12 = *(longlong *)(lVar12 + 200);
  uVar4 = param_1[0xe];
  *(undefined4 *)(lVar12 + (longlong)iVar3 * 0x30) = 6;
  *(undefined8 *)(lVar12 + 8 + (longlong)iVar3 * 0x30) = uVar4;
  LeaveCriticalSection(lpCriticalSection);
  param_1[0xe] = 0;
  puVar10 = (undefined8 *)param_1[0xd];
  if (puVar10 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar10 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar10)(puVar10,1);
    }
  }
  uVar9 = *(uint *)(param_1 + 3);
  if (uVar9 == 0) {
    uVar7 = 0x20;
  }
  else {
    uVar7 = 0;
    if (uVar9 != 0) {
      for (; (uVar9 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
      }
    }
  }
  lVar12 = param_1[(ulonglong)uVar7 + 4];
  puVar10 = (undefined8 *)(lVar12 + 0x18);
  if (lVar12 == 0) {
    puVar10 = (undefined8 *)0x0;
  }
  if (puVar10 != param_1 + 3) goto LAB_1403c64a2;
  local_50 = (undefined1 *)0x0;
  local_48 = 0x800000000;
  bVar5 = (byte)uVar7 & 0x1f;
  uVar9 = uVar9 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  if (uVar9 == 0) {
LAB_1403c6487:
    FUN_1403c6604(local_d0);
  }
  else {
    uVar7 = 0;
    if (uVar9 != 0) {
      for (; (uVar9 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
      }
    }
    uVar11 = (ulonglong)uVar7;
    lVar12 = *(longlong *)(lVar12 + 0x20 + uVar11 * 8);
    if (lVar12 != 0) {
      do {
        uVar6 = local_48;
        lVar13 = (longlong)(int)local_48;
        uVar7 = (int)local_48 + 1;
        local_48 = CONCAT44(local_48._4_4_,uVar7);
        if (local_48._4_4_ < uVar7) {
          FUN_14737a742(local_d0,uVar6 & 0xffffffff);
        }
        puVar8 = local_50;
        if (local_50 == (undefined1 *)0x0) {
          puVar8 = local_d0;
        }
        *(ulonglong *)(puVar8 + lVar13 * 0x10) = (ulonglong)uVar9 | uVar11 << 0x20;
        *(longlong *)(puVar8 + lVar13 * 0x10 + 8) = lVar12;
        bVar5 = (byte)uVar11 & 0x1f;
        uVar9 = uVar9 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
        if (uVar9 == 0) break;
        uVar7 = 0;
        if (uVar9 != 0) {
          for (; (uVar9 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
          }
        }
        uVar11 = (ulonglong)uVar7;
        lVar12 = *(longlong *)(lVar12 + 0x20 + uVar11 * 8);
      } while (lVar12 != 0);
      lVar12 = (longlong)(int)local_48;
      puVar8 = local_d0;
      if (local_50 != (undefined1 *)0x0) {
        puVar8 = local_50;
      }
      if (lVar12 != 0) {
        lVar13 = 0;
        do {
          LOCK();
          puVar2 = (uint *)(*(longlong *)(puVar8 + lVar13 + 8) + 8);
          uVar9 = *puVar2;
          *puVar2 = *puVar2 - 1;
          UNLOCK();
          if ((uVar9 & 0x3fffffff) == 1) {
            FUN_144a54812();
          }
          lVar13 = lVar13 + 0x10;
        } while (lVar12 * 0x10 != lVar13);
      }
    }
    uVar11 = local_48 >> 0x20;
    local_48 = local_48 & 0xffffffff00000000;
    if ((int)uVar11 != 0) goto LAB_1403c6487;
  }
  if (local_50 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
LAB_1403c64a2:
  *param_1 = &PTR_FUN_14a37f858;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1403c6604 FUN_1403c6604 body=89 status=ok
// SIG undefined FUN_1403c6604(void)

void FUN_1403c6604(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x8c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
    if (*(void **)((longlong)param_1 + 0x80) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x80),
              (longlong)*(int *)((longlong)param_1 + 0x88) << 4);
      FUN_1446efa72((longlong)param_1 + 0x80,0,0,0x10);
      return;
    }
  }
  return;
}



// FUNCTION 1403c665e FUN_1403c665e body=999 status=ok
// SIG undefined FUN_1403c665e(void)

undefined8 FUN_1403c665e(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined8 uVar13;
  bool bVar14;
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  undefined8 local_110;
  code *local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong *local_f8;
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
  int local_c8 [2];
  undefined8 *local_c0;
  undefined1 local_b8;
  code *local_a8;
  undefined8 uStack_a0;
  longlong *local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_1403c6aaa(DAT_14ca712d8);
  FUN_1403c6a46(*(longlong *)(param_1 + 8) + 0x38d0);
  iVar10 = (uint)(0 < DAT_14c7609bc) + (uint)(0 < DAT_14c7609b8) * 2;
  local_c8[0] = iVar10;
  if ((0 < DAT_14c7609c0) &&
     (local_c8[0] = iVar10 + 4, (&DAT_14ca814b8)[(ulonglong)*(ushort *)(param_1 + 0x8a8) * 0xf] == 1
     )) {
    local_c8[0] = iVar10;
  }
  local_110 = 0;
  local_c0 = (undefined8 *)0x0;
  local_b8 = 0;
  local_a8 = (code *)0x0;
  local_98 = (longlong *)0x0;
  puVar11 = (undefined8 *)FUN_1448fe162(0xa8);
  *puVar11 = UE::Tasks::Private::FTaskBase::vftable;
  puVar11[1] = &DAT_100000001;
  puVar11[2] = 0;
  *(undefined4 *)(puVar11 + 3) = 0;
  *(undefined4 *)(puVar11 + 4) = 0xffffffff;
  puVar11[6] = 0;
  puVar11[7] = 0x100000000;
  *(undefined1 *)(puVar11 + 8) = 1;
  puVar11[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::TTaskDelegateDummy::vftable;
  puVar11[0xf] = 0;
  puVar11[0x10] = 0xe800000000000020;
  puVar11[0x12] = 0;
  puVar11[0x13] = 0x100000000;
  *(undefined2 *)(puVar11 + 0x14) = 0;
  LOCK();
  bVar14 = *(char *)(puVar11 + 8) == '\x01';
  if (bVar14) {
    *(char *)(puVar11 + 8) = '\0';
  }
  UNLOCK();
  if (!bVar14) {
    FUN_14008cdb0(puVar11 + 8);
  }
  *puVar11 = &PTR_FUN_149e1e2e0;
  if (*(code **)(puVar11[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar11[0xe] + 0x18))(puVar11 + 0xe,puVar11 + 9);
  }
  puVar4 = local_c0;
  puVar11[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::
                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                 ::vftable;
  puVar11[9] = puVar11;
  puVar11[10] = puVar11;
  lVar2 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
  if (lVar2 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = *(undefined8 *)(lVar2 + 0x30);
  }
  puVar11[0xf] = uVar13;
  puVar11[0x10] = 0xc80000528bbfd200;
  *(undefined4 *)((longlong)puVar11 + 0x1c) = 2;
  local_118 = puVar11;
  puVar3 = local_c0;
  if (local_c0 != puVar11) {
    if (puVar11 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
      UNLOCK();
    }
    puVar3 = puVar11;
    if (local_c0 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_c0 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        puVar3 = (undefined8 *)*local_c0;
        local_c0 = puVar11;
        (*(code *)*puVar3)(puVar4,1);
        puVar3 = local_c0;
      }
    }
  }
  local_c0 = puVar3;
  local_108 = (code *)0x0;
  plVar12 = (longlong *)FUN_14001cc68(0x28,8);
  local_f8 = local_98;
  pcVar5 = local_a8;
  *plVar12 = (longlong)&PTR_FUN_14a2f1380;
  plVar12[1] = param_1;
  plVar12[2] = param_2;
  plVar12[3] = (longlong)&local_110;
  plVar12[4] = (longlong)&local_118;
  if (plVar12 + 1 != (longlong *)0x0) {
    local_108 = FUN_142ffdb56;
  }
  local_38 = local_78;
  uVar8 = local_38;
  uStack_30 = uStack_70;
  uVar9 = uStack_30;
  local_48 = local_88;
  lVar2 = local_48;
  uStack_40 = uStack_80;
  uVar7 = uStack_40;
  local_58 = local_98;
  uStack_50 = uStack_90;
  uVar6 = uStack_50;
  local_68 = (longlong)local_a8;
  uStack_60 = uStack_a0;
  uVar13 = uStack_60;
  local_98 = plVar12;
  local_a8 = local_108;
  uStack_60._0_4_ = (undefined4)uStack_a0;
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
  uStack_50._0_4_ = (undefined4)uStack_90;
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
  local_48._0_4_ = (undefined4)local_88;
  local_48._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
  uStack_40._0_4_ = (undefined4)uStack_80;
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  local_38._0_4_ = (undefined4)local_78;
  local_38._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
  uStack_30._0_4_ = (undefined4)uStack_70;
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  local_d8 = (undefined4)local_38;
  uStack_d4 = local_38._4_4_;
  uStack_d0 = (undefined4)uStack_30;
  uStack_cc = uStack_30._4_4_;
  local_e8 = (undefined4)local_48;
  uStack_e4 = local_48._4_4_;
  uStack_e0 = (undefined4)uStack_40;
  uStack_dc = uStack_40._4_4_;
  uStack_f0 = (undefined4)uStack_50;
  uStack_ec = uStack_50._4_4_;
  local_108 = pcVar5;
  uStack_100 = (undefined4)uStack_60;
  uStack_fc = uStack_60._4_4_;
  uStack_60 = uVar13;
  uStack_50 = uVar6;
  local_48 = lVar2;
  uStack_40 = uVar7;
  local_38 = uVar8;
  uStack_30 = uVar9;
  if (pcVar5 != (code *)0x0) {
    plVar12 = local_f8;
    if (local_f8 == (longlong *)0x0) {
      plVar12 = (longlong *)&local_e8;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  FUN_140a73b26(*(undefined8 *)(param_1 + 8),param_2,local_c8);
  uVar13 = local_110;
  if (local_118 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_118 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_118)(local_118,1);
    }
  }
  if (local_a8 != (code *)0x0) {
    plVar12 = local_98;
    if (local_98 == (longlong *)0x0) {
      plVar12 = &local_88;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (local_c0 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_c0 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_c0)(local_c0,1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13;
}



// FUNCTION 1403c6a46 FUN_1403c6a46 body=99 status=ok
// SIG undefined FUN_1403c6a46(void)

void FUN_1403c6a46(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar1 = **(longlong **)(param_1 + 0x28);
  while (lVar1 != 0) {
    plVar2 = *(longlong **)(lVar1 + 8);
    lVar3 = *(longlong *)(param_1 + 0x28);
    *(longlong *)(param_1 + 0x28) = lVar1;
    *(undefined8 *)(lVar1 + 8) = 0;
    if (lVar3 != 0) {
      FUN_1400020a8();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x20))(plVar2);
      (**(code **)*plVar2)(plVar2,1);
    }
    lVar1 = **(longlong **)(param_1 + 0x28);
  }
  return;
}



// FUNCTION 1403c6aaa FUN_1403c6aaa body=135 status=ok
// SIG undefined FUN_1403c6aaa(void)

ulonglong FUN_1403c6aaa(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  DWORD DVar3;
  uint uVar4;
  ulonglong uVar5;
  bool bVar6;
  
  puVar1 = (uint *)(param_1 + 4);
  DVar3 = GetCurrentThreadId();
  uVar4 = *(uint *)(param_1 + 4);
  if ((uVar4 & 1) == 0) {
    LOCK();
    uVar2 = *puVar1;
    bVar6 = uVar4 == uVar2;
    if (bVar6) {
      *puVar1 = uVar4 | 1;
      uVar2 = uVar4;
    }
    uVar4 = uVar2;
    UNLOCK();
    if (bVar6) {
      *(DWORD *)(param_1 + 8) = DVar3;
      goto LAB_1403c6ae4;
    }
  }
  if (*(DWORD *)(param_1 + 8) == DVar3) {
    LOCK();
    *puVar1 = *puVar1 + 4;
    UNLOCK();
  }
  else {
    FUN_1402441ea(puVar1,uVar4);
  }
LAB_1403c6ae4:
  FUN_140b16bda();
  uVar4 = *(uint *)(param_1 + 4);
  uVar5 = (ulonglong)uVar4;
  if (3 < uVar4) {
    LOCK();
    *puVar1 = *puVar1 - 4;
    UNLOCK();
    return uVar5;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (uVar4 < 2) {
    LOCK();
    uVar2 = *puVar1;
    if (uVar4 == uVar2) {
      *puVar1 = 0;
    }
    else {
      uVar5 = (ulonglong)uVar2;
    }
    UNLOCK();
    if (uVar4 == uVar2) {
      return uVar5;
    }
  }
  uVar5 = FUN_140d366d2(puVar1);
  return uVar5;
}



// FUNCTION 1403c6b40 FUN_1403c6b40 body=666 status=ok
// SIG undefined FUN_1403c6b40(void)

void FUN_1403c6b40(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  wchar_t *pwVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((char)param_1[0x11] != '\0') goto switchD_1403c6bb7_default;
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    lVar1 = param_1[4];
  }
  else {
    lVar1 = 0;
  }
  switch(*(undefined1 *)(lVar1 + 0xd5c)) {
  case 1:
    local_40 = L"PausedMessage";
    local_38 = 0xd;
    FUN_1446e940c(local_44,&local_40);
    local_40 = L"GameViewportClient";
    local_38 = 0x12;
    FUN_1446e940c(local_48,&local_40);
    pwVar3 = L"PAUSED";
    break;
  case 2:
    local_40 = L"LoadingMessage";
    local_38 = 0xe;
    FUN_1446e940c(local_44,&local_40);
    local_40 = L"GameViewportClient";
    local_38 = 0x12;
    FUN_1446e940c(local_48,&local_40);
    pwVar3 = L"LOADING";
    break;
  case 3:
    local_40 = L"SavingMessage";
    local_38 = 0xd;
    FUN_1446e940c(local_44,&local_40);
    local_40 = L"GameViewportClient";
    local_38 = 0x12;
    FUN_1446e940c(local_48,&local_40);
    pwVar3 = L"SAVING";
    break;
  case 4:
    local_40 = L"ConnectingMessage";
    local_38 = 0x11;
    FUN_1446e940c(local_44,&local_40);
    local_40 = L"GameViewportClient";
    local_38 = 0x12;
    FUN_1446e940c(local_48,&local_40);
    pwVar3 = L"CONNECTING";
    break;
  case 5:
    local_40 = L"PrecachingMessage";
    local_38 = 0x11;
    FUN_1446e940c(local_44,&local_40);
    local_40 = L"GameViewportClient";
    local_38 = 0x12;
    FUN_1446e940c(local_48,&local_40);
    pwVar3 = L"PRECACHING";
    break;
  case 6:
    FUN_140056680(&local_40,L"Waiting to connect...");
    (**(code **)(*param_1 + 0x378))(param_1,param_2,&local_40);
    if (local_40 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  default:
    goto switchD_1403c6bb7_default;
  }
  FUN_140208bae(&local_40,local_48,local_44,pwVar3);
  uVar2 = FUN_1447a1f4a(&local_40);
  (**(code **)(*param_1 + 0x378))(param_1,param_2,uVar2);
  if (local_40 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_40 + 0x10))();
  }
switchD_1403c6bb7_default:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403c6ddc FUN_1403c6ddc body=1697 status=ok
// SIG undefined FUN_1403c6ddc(void)

void FUN_1403c6ddc(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_158 [32];
  ulonglong local_138;
  undefined4 local_130;
  undefined4 local_128;
  undefined8 local_120;
  wchar_t *local_118;
  code *local_110;
  undefined1 *local_108;
  uint *local_100;
  code *local_f8;
  code *local_f0;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 local_c0;
  uint local_b0 [4];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong *local_68;
  longlong local_60;
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  plVar2 = *(longlong **)(&DAT_00001ce8 + *(longlong *)(param_1 + 0xe0));
  if (plVar2 == (longlong *)0x0) goto LAB_1403c6f8e;
  if (DAT_14cb252d8 == 0) {
    local_100 = local_b0;
    local_b0[0] = 0x449e2820;
    local_b0[1] = 1;
    local_f0 = FUN_14081d0ea;
    local_f8 = FUN_1427b09ee;
    local_108 = &LAB_147f6f07f;
    local_110 = FUN_1464465e2;
    local_118 = L"Engine";
    local_120 = 0;
    local_128 = 0x10004001;
    local_130 = 8;
    local_138 = CONCAT44(local_138._4_4_,0x28);
    FUN_14081cfa3(L"/Script/GbxAudio",L"GbxAudioImplementer",&DAT_14cb252d8,&DAT_147f6f07e);
  }
  plVar4 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,DAT_14cb252d8);
  if (plVar4 == (longlong *)0x0) goto LAB_1403c6f8e;
  if (DAT_14cb252d8 == 0) {
    local_100 = local_b0;
    local_b0[0] = 0x449e2820;
    local_b0[1] = 1;
    local_f0 = FUN_14081d0ea;
    local_f8 = FUN_1427b09ee;
    local_108 = &LAB_147f6f07f;
    local_110 = FUN_1464465e2;
    local_118 = L"Engine";
    local_120 = 0;
    local_128 = 0x10004001;
    local_130 = 8;
    local_138 = CONCAT44(local_138._4_4_,0x28);
    FUN_14081cfa3(L"/Script/GbxAudio",L"GbxAudioImplementer",&DAT_14cb252d8,&DAT_147f6f07e);
  }
  plVar5 = (longlong *)FUN_144718840(plVar4,DAT_14cb252d8);
  if ((plVar4 == plVar5) || (plVar5 == (longlong *)0x0)) goto LAB_1403c6f8e;
  (**(code **)(*plVar5 + 0x10))(plVar5,&local_60);
  if (local_60 != 0) {
    FUN_1403c747e(local_60,&local_68,DAT_14cb8c998);
    if (local_68 != (longlong *)0x0) {
      lVar6 = *(longlong *)(&DAT_00001ce8 + *(longlong *)(param_1 + 0xe0));
      if (lVar6 != 0) {
        lVar6 = (**(code **)(*(longlong *)(lVar6 + 0x1168) + 0x18))(lVar6 + 0x1168);
        if (lVar6 != 0) {
          lVar6 = FUN_1403c7716(lVar6);
          fVar13 = 0.0;
          if (lVar6 != 0) {
            lVar6 = FUN_14008e0ae(lVar6);
            fVar12 = *(float *)(lVar6 + 0x30) - *(float *)(lVar6 + 0x24);
            fVar13 = 0.0;
            if ((fVar12 != 0.0) || (NAN(fVar12))) {
              fVar13 = (*(float *)(lVar6 + 200) - *(float *)(lVar6 + 0x24)) / fVar12;
            }
          }
          lVar6 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0xdc0))();
          plVar4 = local_68;
          if (lVar6 != 0) {
            lVar11 = *(longlong *)(lVar6 + 0x3f0);
            if (lVar11 == 0) {
              uVar9 = FUN_1407f787c();
              lVar11 = FUN_14477b664(uVar9);
              *(longlong *)(lVar6 + 0x3f0) = lVar11;
            }
            lVar10 = *(longlong *)(lVar6 + 0x3f8);
            if (((lVar10 == 0) && (lVar10 = 0, lVar11 != 0)) && (*(longlong *)(lVar6 + 1000) != 0))
            {
              plVar5 = *(longlong **)(lVar11 + 0xb8);
              if (plVar5 == (longlong *)0x0) {
LAB_1403c7477:
                lVar10 = 0;
              }
              else {
                cVar3 = (**(code **)(*plVar5 + 0x108))(plVar5);
                if (cVar3 == '\0') goto LAB_1403c7477;
                uVar9 = (**(code **)(*plVar5 + 0x110))(plVar5);
                lVar10 = FUN_144aff482(uVar9,(longlong *)(lVar6 + 1000));
              }
              *(longlong *)(lVar6 + 0x3f8) = lVar10;
            }
            local_138 = local_138 & 0xffffffffffffff00;
            FUN_1447997cc(plVar4,lVar10,fVar13,0);
            fVar12 = *(float *)(lVar6 + 0x400);
            if ((*(float *)(param_1 + 0xd4) < fVar12) || (fVar12 <= fVar13)) {
              if (((*(float *)(param_1 + 0xd4) < fVar12) && (fVar12 <= fVar13)) &&
                 (*(char *)(param_1 + 0xd8) == '\x01')) {
                uVar9 = *(undefined8 *)(lVar6 + 0x450);
                uVar7 = FUN_14477b664(*(undefined8 *)(lVar6 + 0x458));
                uVar8 = FUN_14477b664(uVar7);
                uVar7 = *(undefined8 *)(lVar6 + 0x460);
                local_b0[0] = local_b0[0] & 0xffffff00;
                local_b0[1] = 0;
                local_b0[2] = 0;
                local_a0 = uVar9;
                uVar9 = FUN_14477b664(uVar8);
                local_98 = FUN_14477b664(uVar9);
                local_88 = 0;
                local_138 = 0;
                local_90 = uVar7;
                FUN_140b32deb(&local_e0,plVar2,local_b0,0);
                local_e0 = 0;
                local_d8 = 0xffffffffffffffff;
                if ((local_88 != 0) && ((DAT_14cb26569 & 1) != 0)) {
                  FUN_1400848c0(*(undefined8 *)(local_88 + 0x50));
                }
                *(undefined1 *)(param_1 + 0xd8) = 0;
              }
            }
            else {
              plVar4 = *(longlong **)(*(longlong *)(param_1 + 0xe0) + 0x1d8);
              if (plVar4 != (longlong *)0x0) {
                cVar3 = (**(code **)(*plVar4 + 0x700))();
                if (cVar3 != '\0') {
                  uVar9 = *(undefined8 *)(lVar6 + 0x408);
                  uVar7 = FUN_14477b664(*(undefined8 *)(lVar6 + 0x410));
                  uVar8 = FUN_14477b664(uVar7);
                  uVar7 = *(undefined8 *)(lVar6 + 0x418);
                  local_b0[0] = local_b0[0] & 0xffffff00;
                  local_b0[1] = 0;
                  local_b0[2] = 0;
                  local_a0 = uVar9;
                  uVar9 = FUN_14477b664(uVar8);
                  local_98 = FUN_14477b664(uVar9);
                  local_88 = 0;
                  local_138 = 0;
                  local_90 = uVar7;
                  FUN_140b32deb(&local_80,plVar2,local_b0,0);
                  local_80 = 0;
                  local_78 = 0xffffffffffffffff;
                  if ((local_88 != 0) && ((DAT_14cb26569 & 1) != 0)) {
                    FUN_1400848c0(*(undefined8 *)(local_88 + 0x50));
                  }
                }
              }
              uVar9 = *(undefined8 *)(lVar6 + 0x438);
              uVar7 = FUN_14477b664(*(undefined8 *)(lVar6 + 0x440));
              uVar8 = FUN_14477b664(uVar7);
              uVar7 = *(undefined8 *)(lVar6 + 0x448);
              local_b0[0] = local_b0[0] & 0xffffff00;
              local_b0[1] = 0;
              local_b0[2] = 0;
              local_a0 = uVar9;
              uVar9 = FUN_14477b664(uVar8);
              local_98 = FUN_14477b664(uVar9);
              local_88 = 0;
              local_138 = 0;
              local_90 = uVar7;
              FUN_140b32deb(&local_c8,plVar2,local_b0,0);
              local_c8 = 0;
              local_c0 = 0xffffffffffffffff;
              if ((local_88 != 0) && ((DAT_14cb26569 & 1) != 0)) {
                FUN_1400848c0(*(undefined8 *)(local_88 + 0x50));
              }
              *(undefined1 *)(param_1 + 0xd8) = 1;
            }
          }
          *(float *)(param_1 + 0xd4) = fVar13;
        }
      }
      if ((local_68 != (longlong *)0x0) &&
         (*(int *)(local_68 + 0x21) = (int)local_68[0x21] + -1, (int)local_68[0x26] < 1)) {
        FUN_1400847bc(local_68 + 0x17,0);
        if ((int)local_68[0x21] == 0) {
          FUN_140087e46(local_68);
          if (*local_68 != -1) {
            if (DAT_14cb259f8 == 0) goto LAB_1403c6f77;
            FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),local_68);
          }
          if (DAT_14cb259f8 != 0) {
            FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),local_68);
          }
        }
      }
    }
  }
LAB_1403c6f77:
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_58 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar1 = (int *)((longlong)local_58 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_58 + 0x10))(local_58);
      }
    }
  }
LAB_1403c6f8e:
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403c747e FUN_1403c747e body=373 status=ok
// SIG undefined FUN_1403c747e(void)

longlong * FUN_1403c747e(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((param_3 == 0) || (DAT_14cb25a28 == param_3)) || (*(longlong *)(param_1 + 0x60) == param_3))
  {
    FUN_1403c7a68(param_1,param_1 + 0x60,&DAT_14cb25a30);
    lVar2 = *(longlong *)(param_1 + 0x110);
    *param_2 = lVar2;
    if (lVar2 != 0) {
      *(int *)(lVar2 + 0x108) = *(int *)(lVar2 + 0x108) + 1;
    }
  }
  else {
    *param_2 = 0;
    local_58[0] = param_1 + 0x120;
    local_58[1] = param_1 + 400;
    local_58[2] = param_1 + 0x1a0;
    lVar2 = 0;
    do {
      lVar1 = (longlong)*(int *)((undefined8 *)local_58[lVar2] + 1);
      if (lVar1 != 0) {
        plVar3 = *(longlong **)local_58[lVar2];
        lVar1 = lVar1 * 0xc0;
        do {
          if (*plVar3 == param_3) {
            FUN_1400021e4(plVar3,local_68);
            FUN_1403c7a68(param_1,plVar3,local_68);
            if (local_68[0] != 0) {
              FUN_1400020a8();
            }
            local_68[0] = plVar3[0x16];
            if (local_68[0] != 0) {
              *(int *)(local_68[0] + 0x108) = *(int *)(local_68[0] + 0x108) + 1;
            }
            goto LAB_1403c75b1;
          }
          plVar3 = plVar3 + 0x18;
          lVar1 = lVar1 + -0xc0;
        } while (lVar1 != 0);
      }
      local_68[0] = 0;
LAB_1403c75b1:
      FUN_1403c75f4(param_2,local_68);
      if (local_68[0] != 0) {
        *(int *)(local_68[0] + 0x108) = *(int *)(local_68[0] + 0x108) + -1;
        FUN_140d274d8();
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 != 3 && *param_2 == 0);
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1403c75f4 FUN_1403c75f4 body=289 status=ok
// SIG undefined FUN_1403c75f4(void)

longlong * FUN_1403c75f4(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)*param_2;
  plVar1 = (longlong *)*param_1;
  if (plVar2 == plVar1) {
    return param_1;
  }
  if (plVar1 != (longlong *)0x0) {
    *(int *)(plVar1 + 0x21) = (int)plVar1[0x21] + -1;
    if (((int)plVar1[0x26] < 1) && (FUN_1400847bc(plVar1 + 0x17,0), (int)plVar1[0x21] == 0)) {
      FUN_140087e46(plVar1);
      if (*plVar1 != -1) {
        if (DAT_14cb259f8 == 0) goto LAB_1403c7685;
        FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar1);
      }
      if (DAT_14cb259f8 != 0) {
        FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar1);
      }
    }
LAB_1403c7685:
    *param_1 = 0;
    plVar2 = (longlong *)*param_2;
  }
  if (plVar2 == (longlong *)0x0) {
    return param_1;
  }
  *param_1 = (longlong)plVar2;
  *(int *)(plVar2 + 0x21) = (int)plVar2[0x21] + 1;
  plVar2 = (longlong *)*param_2;
  if (plVar2 == (longlong *)0x0) {
    return param_1;
  }
  *(int *)(plVar2 + 0x21) = (int)plVar2[0x21] + -1;
  if (((int)plVar2[0x26] < 1) && (FUN_1400847bc(plVar2 + 0x17,0), (int)plVar2[0x21] == 0)) {
    FUN_140087e46(plVar2);
    if (*plVar2 != -1) {
      if (DAT_14cb259f8 == 0) goto LAB_1403c764d;
      FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar2);
    }
    if (DAT_14cb259f8 != 0) {
      FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar2);
    }
  }
LAB_1403c764d:
  *param_2 = 0;
  return param_1;
}



// FUNCTION 1403c7716 FUN_1403c7716 body=571 status=ok
// SIG undefined FUN_1403c7716(void)

uint * FUN_1403c7716(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  uint *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint *puVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  uint local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *(longlong *)(param_1 + 0x128);
  if ((lVar3 == 0) || (*(char *)(lVar3 + 0x178) != '\x03')) {
    puVar4 = (uint *)(param_1 + 0x50);
    plVar7 = *(longlong **)(param_1 + 0x58);
    if ((plVar7 != (longlong *)0x0) &&
       (((*(int *)(param_1 + 0x54) != 0 && (uVar1 = *puVar4, -1 < (int)uVar1)) &&
        ((int)uVar1 < DAT_14c9647dc)))) {
      lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if (((lVar9 != 0) && (*(int *)(lVar9 + 0x10) == *(int *)(param_1 + 0x54))) &&
         ((*(uint *)(lVar9 + 8) & 0x10200000) == 0)) {
        if (*(code **)(*plVar7 + 0x10) == (code *)&LAB_1447a1f2e) {
          plVar7 = plVar7 + 0xd9;
        }
        else {
          plVar7 = (longlong *)(**(code **)(*plVar7 + 0x10))();
        }
        cVar2 = FUN_14486eb0e(plVar7,puVar4);
        if (cVar2 != '\0') goto LAB_1403c774e;
        lVar3 = *(longlong *)(param_1 + 0x128);
      }
    }
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x13f8) != 0)) {
      lVar3 = FUN_14011c2be(*(longlong *)(lVar3 + 0x13f8) + 0x3b0);
      if ((lVar3 != 0) && (plVar7 = *(longlong **)(param_1 + 0x128), plVar7 != (longlong *)0x0)) {
        uVar5 = FUN_1403c7982();
        plVar7 = (longlong *)(**(code **)(*plVar7 + 0x288))(plVar7,uVar5);
        if (plVar7 != (longlong *)0x0) {
          uVar5 = FUN_1403c7982();
          plVar6 = (longlong *)FUN_144718840(plVar7,uVar5);
          if ((plVar7 != plVar6) && (plVar6 != (longlong *)0x0)) {
            uVar5 = (**(code **)(*plVar6 + 0x10))(plVar6);
            FUN_1403c7952(uVar5,&local_48,lVar3,0);
            *(undefined8 *)(param_1 + 0x60) = local_38;
            *(undefined8 *)(param_1 + 0x68) = uStack_30;
            *puVar4 = local_48;
            *(undefined4 *)(param_1 + 0x54) = uStack_44;
            *(undefined4 *)(param_1 + 0x58) = uStack_40;
            *(undefined4 *)(param_1 + 0x5c) = uStack_3c;
          }
        }
      }
    }
  }
LAB_1403c774e:
  plVar7 = *(longlong **)(param_1 + 0x58);
  if ((plVar7 != (longlong *)0x0) && (*(int *)(param_1 + 0x54) != 0)) {
    puVar8 = (uint *)(param_1 + 0x50);
    uVar1 = *puVar8;
    puVar4 = (uint *)0x0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1403c77d8;
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x54))) &&
       ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) {
      if (*(code **)(*plVar7 + 0x10) == (code *)&LAB_1447a1f2e) {
        plVar7 = plVar7 + 0xd9;
      }
      else {
        plVar7 = (longlong *)(**(code **)(*plVar7 + 0x10))();
      }
      cVar2 = FUN_14486eb0e(plVar7,puVar8);
      puVar4 = (uint *)0x0;
      if (cVar2 != '\0') {
        puVar4 = puVar8;
      }
      goto LAB_1403c77d8;
    }
  }
  puVar4 = (uint *)0x0;
LAB_1403c77d8:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403c7952 FUN_1403c7952 body=47 status=ok
// SIG undefined FUN_1403c7952(void)

undefined8 * FUN_1403c7952(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined1 *)((longlong)param_2 + 0x1c) = 0xff;
  *(undefined4 *)(param_2 + 3) = 0;
  param_2[2] = 0;
  FUN_14493679e();
  return param_2;
}



// FUNCTION 1403c7982 FUN_1403c7982 body=228 status=ok
// SIG undefined FUN_1403c7982(void)

longlong FUN_1403c7982(void)

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
  if (DAT_14cb57d58 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_148648767;
    local_40 = FUN_1464bf264;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"GameResourcePoolOwnerInterface",&DAT_14cb57d58,&DAT_148648766
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb57d58;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403c7a68 FUN_1403c7a68 body=4791 status=ok
// SIG undefined FUN_1403c7a68(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403c7a68(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  float fVar3;
  undefined1 auVar4 [16];
  char cVar5;
  undefined1 uVar6;
  char cVar7;
  undefined2 uVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  code *pcVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  undefined8 uVar20;
  int iVar21;
  uint uVar22;
  longlong *plVar23;
  longlong *plVar24;
  double *pdVar25;
  undefined8 *puVar26;
  code **ppcVar27;
  longlong lVar28;
  double *pdVar29;
  undefined8 *puVar30;
  double dVar31;
  undefined8 uVar32;
  void *pvVar33;
  bool bVar34;
  ulonglong uVar35;
  undefined1 auVar36 [16];
  double dVar37;
  double dVar38;
  undefined1 auVar39 [16];
  double dVar40;
  double dVar42;
  undefined1 auVar41 [16];
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar49;
  undefined1 auVar50 [16];
  double dVar51;
  double dVar52;
  undefined1 auVar53 [16];
  double dVar54;
  double dVar55;
  float fVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  undefined1 auStack_578 [32];
  undefined4 local_558;
  undefined4 local_550;
  undefined4 local_548;
  undefined8 local_540;
  wchar_t *local_538;
  undefined1 *local_530;
  undefined1 *local_528;
  code **local_520;
  code *local_518;
  code *local_510;
  undefined4 local_4fc;
  undefined1 local_4f8 [16];
  double local_4e8;
  double dStack_4e0;
  undefined8 local_4d0;
  undefined1 local_4c8 [16];
  double local_4b8;
  double dStack_4b0;
  double local_4a0;
  double local_498;
  double dStack_490;
  undefined1 local_488 [16];
  undefined8 *local_470;
  double local_468;
  double dStack_460;
  void *local_458;
  int local_450;
  undefined4 local_44c;
  double local_448 [12];
  longlong local_3e8;
  undefined8 uStack_3e0;
  double local_3d8;
  double dStack_3d0;
  undefined4 local_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  double dStack_3a0;
  undefined1 local_398 [16];
  undefined1 local_388 [16];
  undefined8 local_378 [12];
  undefined4 local_318;
  undefined4 local_314;
  undefined1 local_310;
  undefined1 local_30f;
  undefined8 local_30c;
  double local_2f8 [12];
  undefined8 local_298;
  undefined2 local_290;
  undefined8 local_28c;
  double local_278 [5];
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  undefined2 uStack_210;
  undefined2 uStack_20e;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  double local_1c8;
  double dStack_1c0;
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined8 local_198;
  char cStack_190;
  undefined1 uStack_18f;
  undefined2 uStack_18e;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined8 uStack_180;
  code *local_178;
  double local_170;
  double local_168;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  undefined4 local_118;
  float fStack_114;
  char cStack_110;
  undefined1 uStack_10f;
  undefined2 uStack_10e;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_578;
  if (*(char *)((longlong)param_1 + 0x3c) != '\x01') goto LAB_1403c8127;
  plVar1 = (longlong *)(param_2 + 0xb0);
  plVar24 = *(longlong **)(param_2 + 0xb0);
  if (plVar24 == (longlong *)0x0) {
    if (DAT_14cb259f8 == (longlong *)0x0) goto LAB_1403c8127;
    local_178 = (code *)FUN_1438a4ec6(DAT_14cb259f8[6]);
    if (local_178 != (code *)0x0) {
      *(int *)(local_178 + 0x108) = *(int *)(local_178 + 0x108) + 1;
    }
    FUN_1403c75f4(plVar1,&local_178);
    pcVar16 = local_178;
    if (((local_178 != (code *)0x0) &&
        (*(int *)(local_178 + 0x108) = *(int *)(local_178 + 0x108) + -1,
        *(int *)(local_178 + 0x130) < 1)) &&
       (FUN_1400847bc(local_178 + 0xb8,0), *(int *)(pcVar16 + 0x108) == 0)) {
      FUN_140087e46(pcVar16);
      if (*(longlong *)pcVar16 != -1) {
        if (DAT_14cb259f8 == (longlong *)0x0) goto LAB_1403c7ba2;
        FUN_14033a6c8(DAT_14cb259f8[8],pcVar16);
      }
      if (DAT_14cb259f8 != (longlong *)0x0) {
        FUN_14008869e(DAT_14cb259f8[6],pcVar16);
      }
    }
LAB_1403c7ba2:
    plVar24 = (longlong *)*plVar1;
    plVar23 = plVar24;
  }
  else {
    plVar23 = DAT_14cb259f8;
    if (*plVar24 != -1) goto LAB_1403c8127;
  }
  if (plVar23 == (longlong *)0x0) goto LAB_1403c8127;
  local_458 = (void *)0x0;
  local_450 = *(int *)(param_3 + 1);
  lVar28 = (longlong)local_450;
  pvVar33 = (void *)*param_3;
  if (lVar28 == 0) {
    local_44c = 0;
  }
  else {
    FUN_1446dd670(&local_458,local_450,0);
    memcpy(local_458,pvVar33,lVar28 * 2);
    plVar24 = (longlong *)*plVar1;
  }
  if (DAT_14cb259f8 != (longlong *)0x0 && param_1[5] != 0) {
    FUN_1407c3058(DAT_14cb259f8,plVar24,param_1[5],&local_458);
    plVar24 = (longlong *)*plVar1;
  }
  if ((plVar24 != (longlong *)0x0) && (*plVar24 != -1)) {
    *(int *)(plVar24 + 0x4d) = (int)param_1[7];
    plVar24 = (longlong *)param_1[4];
    if ((((*(int *)((longlong)param_1 + 0x1c) != 0 && plVar24 != (longlong *)0x0) &&
         ((uVar22 = *(uint *)(param_1 + 3), -1 < (int)uVar22 && ((int)uVar22 < DAT_14c9647dc)))) &&
        (lVar28 = (ulonglong)((uVar22 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8), lVar28 != 0)) &&
       ((*(int *)(lVar28 + 0x10) == *(int *)((longlong)param_1 + 0x1c) &&
        ((*(uint *)(lVar28 + 8) & 0x10200000) == 0)))) {
      (**(code **)(*plVar24 + 0x28))(plVar24,&local_3d8,*(undefined8 *)(param_2 + 8),0);
      bVar34 = *(char *)(param_2 + 0x90) != '\0';
      dVar52 = 0.0;
      dVar55 = 0.0;
      if (!bVar34) {
        dVar52 = local_3d8;
        dVar55 = dStack_3d0;
      }
      dVar46 = 1.0;
      dVar40 = 1.0;
      uVar63 = local_3c8;
      uVar60 = uStack_3c4;
      uVar61 = uStack_3c0;
      uVar62 = uStack_3bc;
      if (bVar34) {
        uVar63 = 0;
        uVar60 = 0;
        uVar61 = 0;
        uVar62 = 0x3ff00000;
      }
      dVar9 = local_398._0_8_;
      dVar31 = local_398._8_8_;
      plVar23 = plVar24;
      lVar18 = (**(code **)(*plVar24 + 0x30))();
      iVar21 = (int)plVar23;
      lVar28 = 0;
      dStack_490 = 0.0;
      if (lVar18 == 0) {
LAB_1403c8cf1:
        local_468 = 1.0;
      }
      else {
        if (DAT_14cac9ca8 == 0) {
          local_520 = &local_178;
          local_178 = FUN_141030f22;
          local_510 = FUN_14081d0ea;
          local_518 = FUN_14081d0ea;
          local_528 = &LAB_1478c0a72;
          local_530 = &LAB_1417b2375;
          local_538 = L"Engine";
          local_540 = 0x1000000000;
          local_548 = 0x10000004;
          local_550 = 8;
          local_558 = 0x390;
          FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
        }
        iVar21 = *(int *)(DAT_14cac9ca8 + 0x38);
        lVar28 = DAT_14cac9ca8;
        if (*(int *)(*(longlong *)(lVar18 + 0x10) + 0x38) < iVar21) goto LAB_1403c8cf1;
        lVar28 = DAT_14cac9ca8 + 0x30;
        local_468 = 1.0;
        dVar40 = 1.0;
        if (*(longlong *)(*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x30) + (longlong)iVar21 * 8)
            == lVar28) {
          lVar28 = *(longlong *)(lVar18 + 0x1c8);
          if (lVar28 == 0) {
            dVar46 = 1.0;
            local_468 = 1.0;
            dVar40 = 1.0;
            dStack_490 = local_468;
          }
          else {
            dVar46 = *(double *)(lVar28 + 0x280);
            local_468 = *(double *)(lVar28 + 0x288);
            dVar40 = *(double *)(lVar28 + 0x290);
            dStack_490 = local_468;
          }
        }
      }
      local_4e8 = local_3a8;
      dStack_4e0 = dStack_3a0;
      local_4b8 = local_3b8;
      dStack_4b0 = dStack_3b0;
      dVar38 = *(double *)(param_2 + 0x10);
      dVar43 = *(double *)(param_2 + 0x18);
      dVar44 = *(double *)(param_2 + 0x20);
      dVar51 = *(double *)(param_2 + 0x28);
      dVar42 = *(double *)(param_2 + 0x38);
      dVar37 = *(double *)(param_2 + 0x40);
      local_4c8 = *(undefined1 (*) [16])(param_2 + 0x50);
      auVar4 = *(undefined1 (*) [16])(param_2 + 0x60);
      dVar10 = auVar4._0_8_;
      local_4fc = *(undefined4 *)(param_2 + 0x70);
      local_488 = ZEXT416(*(uint *)(param_2 + 0x74));
      cVar5 = *(char *)(param_2 + 0x78);
      uVar6 = *(undefined1 *)(param_2 + 0x79);
      auVar47 = minpd(local_4c8,local_398);
      auVar53 = minpd(auVar4,local_388);
      auVar48._8_8_ = -(ulonglong)(auVar47._8_8_ < 0.0);
      auVar48._0_8_ = -(ulonglong)(auVar47._0_8_ < 0.0);
      iVar17 = movmskpd((int)lVar28,auVar48);
      auVar47._8_8_ = -(ulonglong)(auVar53._8_8_ < 0.0);
      auVar47._0_8_ = -(ulonglong)(auVar53._0_8_ < 0.0);
      uVar22 = movmskpd(iVar21,auVar47);
      local_4f8 = local_388;
      auVar47 = local_4f8;
      local_4f8._0_8_ = local_388._0_8_;
      uVar13 = local_4f8._0_8_;
      local_4f8._8_8_ = local_388._8_8_;
      uVar20 = local_4f8._8_8_;
      uVar14 = local_4c8._0_8_;
      uVar15 = local_4c8._8_8_;
      local_4f8 = auVar47;
      local_4a0 = dVar40;
      local_498 = dVar46;
      dStack_460 = dStack_490;
      if ((uVar22 & 0x3fffffff) == 0 && iVar17 == 0) {
        dVar57 = (double)CONCAT44(uVar62,uVar61);
        dVar58 = (double)CONCAT44(uVar62,uVar61);
        dVar45 = dVar43 * (double)CONCAT44(uVar60,uVar63) * -1.0 +
                 dVar44 * dVar55 + dVar52 * dVar51 * 1.0 + dVar57 * dVar38;
        dVar49 = dVar38 * (double)CONCAT44(uVar60,uVar63) * 1.0 +
                 dVar51 * dVar55 + dVar52 * dVar44 * -1.0 + dVar58 * dVar43;
        auVar50._0_8_ =
             dVar51 * (double)CONCAT44(uVar60,uVar63) * 1.0 +
             ((dVar52 * dVar43 * 1.0 + dVar57 * dVar44) - dVar55 * dVar38);
        auVar50._8_8_ =
             dVar44 * (double)CONCAT44(uVar60,uVar63) * -1.0 +
             ((dVar52 * dVar38 * -1.0 + dVar58 * dVar51) - dVar55 * dVar43);
        dVar40 = *(double *)(param_2 + 0x30) * dVar9;
        dVar42 = dVar42 * dVar31;
        dVar37 = dVar37 * (double)local_4f8._0_8_;
        dVar38 = *(double *)(param_2 + 0x48) * (double)local_4f8._8_8_;
        dVar43 = dVar42 * dVar52 - dVar55 * dVar40;
        dVar44 = dVar37 * dVar55 - (double)CONCAT44(uVar60,uVar63) * dVar42;
        dVar51 = dVar40 * (double)CONCAT44(uVar60,uVar63) - dVar52 * dVar37;
        dVar54 = dVar38 * (double)CONCAT44(uVar62,uVar61) - (double)CONCAT44(uVar62,uVar61) * dVar38
        ;
        dVar44 = dVar44 + dVar44;
        dVar51 = dVar51 + dVar51;
        dVar43 = dVar43 + dVar43;
        dVar54 = dVar54 + dVar54;
        dVar40 = local_3b8 +
                 (dVar43 * dVar55 - (double)CONCAT44(uVar60,uVar63) * dVar51) +
                 dVar57 * dVar44 + dVar40;
        dVar46 = dStack_3b0 +
                 (dVar44 * (double)CONCAT44(uVar60,uVar63) - dVar43 * dVar52) +
                 dVar58 * dVar51 + dVar42;
        dVar52 = local_3a8 + (dVar51 * dVar52 - dVar55 * dVar44) + dVar57 * dVar43 + dVar37;
        dVar55 = dStack_3a0 +
                 (dVar54 * (double)CONCAT44(uVar62,uVar61) -
                 dVar54 * (double)CONCAT44(uVar62,uVar61)) + dVar58 * dVar54 + dVar38;
        uVar32 = *(undefined8 *)(param_2 + 0x7c);
      }
      else {
        dVar46 = dVar55 + dVar55;
        dVar57 = (double)CONCAT44(uVar60,uVar63) + (double)CONCAT44(uVar60,uVar63);
        dVar45 = dVar52 * (dVar52 + dVar52);
        dVar59 = (double)CONCAT44(uVar60,uVar63) * dVar57;
        dVar58 = dVar57 * (double)CONCAT44(uVar62,uVar61);
        dVar54 = (dVar52 + dVar52) * (double)CONCAT44(uVar62,uVar61);
        dVar49 = dVar46 * (double)CONCAT44(uVar62,uVar61);
        local_1f8 = (1.0 - (dVar59 + dVar55 * dVar46)) * dVar9;
        dStack_1f0 = (dVar46 * dVar52 + dVar58) * dVar9;
        local_1c8 = (dVar57 * dVar55 + dVar54) * dVar31;
        local_1e8._8_8_ = 0;
        local_1e8._0_8_ = (dVar52 * dVar57 - dVar49) * dVar9;
        dVar40 = (double)local_4f8._0_8_ * dVar10;
        local_1d8._8_8_ = (1.0 - (dVar59 + dVar45)) * dVar31;
        local_1d8._0_8_ = (dVar46 * dVar52 - dVar58) * dVar31;
        dStack_1c0 = 0.0;
        local_1b8._8_8_ = (dVar57 * dVar55 - dVar54) * (double)local_4f8._0_8_;
        local_1b8._0_8_ = (dVar49 + dVar52 * dVar57) * (double)local_4f8._0_8_;
        local_1a8._8_8_ = 0;
        local_1a8._0_8_ = (1.0 - (dVar45 + dVar55 * dVar46)) * (double)local_4f8._0_8_;
        local_198 = local_3b8;
        cStack_190 = SUB81(dStack_3b0,0);
        uStack_18f = (undefined1)((ulonglong)dStack_3b0 >> 8);
        uStack_18e = (undefined2)((ulonglong)dStack_3b0 >> 0x10);
        uStack_18c = (undefined4)((ulonglong)dStack_3b0 >> 0x20);
        uStack_188 = SUB84(local_3a8,0);
        uStack_184 = (undefined4)((ulonglong)local_3a8 >> 0x20);
        uStack_180 = 0x3ff0000000000000;
        dVar57 = dVar43 + dVar43;
        dVar46 = dVar44 + dVar44;
        dVar49 = dVar38 * (dVar38 + dVar38);
        local_228 = (1.0 - (dVar49 + dVar43 * dVar57)) * dVar10;
        dVar45 = (dVar38 + dVar38) * dVar51;
        local_238 = (dVar57 * dVar51 + dVar38 * dVar46) * dVar10;
        local_278[4] = (dVar57 * dVar38 - dVar46 * dVar51) * (double)local_4c8._8_8_;
        dStack_230 = (dVar46 * dVar43 - dVar45) * dVar10;
        dVar52 = dVar9 * (double)local_4c8._0_8_;
        dVar55 = dVar31 * (double)local_4c8._8_8_;
        local_278[0] = (1.0 - (dVar44 * dVar46 + dVar43 * dVar57)) * (double)local_4c8._0_8_;
        dStack_250 = (1.0 - (dVar44 * dVar46 + dVar49)) * (double)local_4c8._8_8_;
        local_278[1] = (dVar57 * dVar38 + dVar46 * dVar51) * (double)local_4c8._0_8_;
        local_248 = (dVar46 * dVar43 + dVar45) * (double)local_4c8._8_8_;
        local_278[2] = (dVar38 * dVar46 - dVar57 * dVar51) * (double)local_4c8._0_8_;
        local_278[3] = 0.0;
        uStack_240 = 0;
        uStack_220 = 0;
        uStack_210 = SUB82(dVar42,0);
        uStack_20e = (undefined2)((ulonglong)dVar42 >> 0x10);
        uStack_20c = (undefined4)((ulonglong)dVar42 >> 0x20);
        uStack_208 = SUB84(dVar37,0);
        uStack_204 = (undefined4)((ulonglong)dVar37 >> 0x20);
        uStack_200 = 0x3ff0000000000000;
        local_4d0 = *(undefined8 *)(param_2 + 0x7c);
        local_218 = *(double *)(param_2 + 0x30);
        FUN_1447fea8d(&local_178);
        local_4b8 = local_168;
        dVar46 = local_168 * local_168 +
                 (double)local_178 * (double)local_178 + local_170 * local_170;
        local_4e8 = local_158;
        local_4f8._0_8_ = local_148;
        dVar38 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
        local_4c8._0_8_ = local_128;
        dVar43 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
        uVar35 = -(ulonglong)(0.0 <= dVar46 + -9.99999993922529e-09);
        dVar46 = (double)(~uVar35 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar46)) & uVar35);
        uVar35 = -(ulonglong)(0.0 <= dVar38 + -9.99999993922529e-09);
        dVar38 = (double)(~uVar35 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar38)) & uVar35);
        uVar35 = -(ulonglong)(0.0 <= dVar43 + -9.99999993922529e-09);
        dVar43 = (double)(~uVar35 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar43)) & uVar35);
        auVar53._8_8_ = -(ulonglong)(0.0 <= dVar55);
        auVar53._0_8_ = -(ulonglong)(0.0 <= dVar52);
        auVar47 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar53);
        uVar35 = -(ulonglong)(0.0 <= dVar40);
        dVar52 = (double)(~uVar35 & 0xbff0000000000000 | uVar35 & 0x3ff0000000000000);
        dVar55 = auVar47._0_8_;
        local_178 = (code *)((double)local_178 * dVar46 * dVar55);
        local_170 = local_170 * dVar46 * dVar55;
        local_168 = dVar46 * local_168 * dVar55;
        dVar55 = auVar47._8_8_;
        local_148 = dVar38 * local_148 * dVar55;
        local_150 = local_150 * dVar38 * dVar55;
        local_158 = dVar55 * local_158 * dVar38;
        local_128 = dVar43 * local_128 * dVar52;
        local_130 = local_130 * dVar43 * dVar52;
        local_138 = dVar52 * local_138 * dVar43;
        FUN_14481fd10(local_2f8,&local_178);
        dVar52 = local_2f8[2] * local_2f8[2] + local_2f8[0] * local_2f8[0];
        dVar55 = local_2f8[3] * local_2f8[3] + local_2f8[1] * local_2f8[1];
        auVar39._0_8_ = dVar52 + dVar55;
        auVar39._8_8_ = dVar52 + dVar55;
        auVar36._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar39._8_8_);
        auVar36._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar39._0_8_);
        auVar47 = sqrtpd(auVar39,auVar39);
        auVar47 = divpd(_DAT_149934d80,auVar47);
        auVar41._0_8_ = auVar47._0_8_ * local_2f8[2];
        auVar41._8_8_ = auVar47._8_8_ * local_2f8[3];
        dVar45 = (double)((ulonglong)(local_2f8[0] * auVar47._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar39._0_8_));
        dVar49 = (double)((ulonglong)(local_2f8[1] * auVar47._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar39._8_8_));
        auVar50 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar41,auVar36);
        dVar40 = (double)CONCAT44(fStack_114,local_118);
        dVar46 = (double)CONCAT44(uStack_10c,CONCAT22(uStack_10e,CONCAT11(uStack_10f,cStack_110)));
        dVar52 = (double)CONCAT44(uStack_104,uStack_108);
        dVar55 = 0.0;
        uVar32 = local_4d0;
      }
      uVar63 = local_4fc;
      dVar38 = auVar4._8_8_ * (double)uVar20;
      uVar61 = (undefined4)((ulonglong)dVar38 >> 0x20);
      uVar60 = SUB84(dVar38,0);
      uVar65 = (undefined4)((ulonglong)((double)uVar15 * dVar31) >> 0x20);
      uVar64 = SUB84((double)uVar15 * dVar31,0);
      uVar62 = (undefined4)((ulonglong)dVar46 >> 0x20);
      fVar56 = (float)(~-(uint)((float)local_488._0_4_ < 0.0) & local_488._0_4_ |
                      -(uint)((float)local_488._0_4_ < 0.0) & 0xbf800000);
      if ((*(char *)(param_2 + 0x91) == '\x01') && (0 < *(int *)(param_2 + 0xa0))) {
        local_4c8[0] = uVar6;
        local_3e8 = 0;
        uStack_3e0 = 0;
        local_4d0 = uVar32;
        FUN_140086b68();
        uVar63 = local_4fc;
        lVar28 = (longlong)*(int *)(param_2 + 0xa0);
        local_4f8._0_8_ = lVar28;
        if (lVar28 != 0) {
          local_470 = (undefined8 *)(param_2 + 0x10);
          local_498 = SQRT(local_4a0 * local_4a0 + local_498 * local_498 + local_468 * local_468);
          local_4e8 = (double)(*(longlong *)(param_2 + 0x98) + 0x6c);
          local_4f8._0_8_ = lVar28 << 7;
          dVar31 = 0.0;
          do {
            pvVar33 = (void *)((longlong)local_4e8 + (longlong)dVar31 + -0x6c);
            lVar28 = *(longlong *)((longlong)local_4e8 + (longlong)dVar31);
            local_4b8 = dVar31;
            if (lVar28 == 0) {
              local_1d8._8_4_ = SUB84(dVar46,0);
              local_1d8._0_8_ = dVar40;
              local_1d8._12_4_ = uVar62;
              local_1b8._8_4_ = uVar64;
              local_1b8._0_8_ = (double)uVar14 * dVar9;
              local_1b8._12_4_ = uVar65;
              local_1a8._8_4_ = uVar60;
              local_1a8._0_8_ = dVar10 * (double)uVar13;
              local_1a8._12_4_ = uVar61;
              local_198 = (double)CONCAT44(fVar56,uVar63);
              uStack_18f = local_4c8[0];
              uStack_18c = (undefined4)local_4d0;
              uStack_188 = (undefined4)((ulonglong)local_4d0 >> 0x20);
              uVar2 = *(undefined4 *)((longlong)local_4e8 + -0xc + (longlong)dVar31);
              fVar3 = *(float *)((longlong)local_4e8 + -8 + (longlong)dVar31);
              cVar7 = *(char *)((longlong)local_4e8 + -4 + (longlong)dVar31);
              uVar6 = *(undefined1 *)((longlong)local_4e8 + -3 + (longlong)dVar31);
              local_1f8 = dVar45;
              dStack_1f0 = dVar49;
              local_1e8 = auVar50;
              local_1c8 = dVar52;
              dStack_1c0 = dVar55;
              cStack_190 = cVar5;
              memmove(&local_178,pvVar33,0x60);
              pdVar25 = &local_1f8;
              uVar20 = 0;
              cStack_110 = cVar7;
              uStack_10f = uVar6;
              local_118 = uVar2;
              fStack_114 = fVar3;
            }
            else {
              (**(code **)(*plVar24 + 0x28))(plVar24,local_448,lVar28,0);
              pdVar25 = local_448;
              pdVar29 = local_278;
              for (lVar28 = 0xc; lVar28 != 0; lVar28 = lVar28 + -1) {
                *pdVar29 = *pdVar25;
                pdVar25 = pdVar25 + 1;
                pdVar29 = pdVar29 + 1;
              }
              local_218 = 5.26354424712089e-315;
              uStack_210 = 0;
              uStack_20c = 0;
              uStack_208 = 0;
              puVar26 = local_470;
              puVar30 = local_378;
              for (lVar28 = 0xc; lVar28 != 0; lVar28 = lVar28 + -1) {
                *puVar30 = *puVar26;
                puVar26 = puVar26 + 1;
                puVar30 = puVar30 + 1;
              }
              local_318 = *(undefined4 *)(param_2 + 0x70);
              local_314 = *(undefined4 *)(param_2 + 0x74);
              local_310 = *(undefined1 *)(param_2 + 0x78);
              local_30f = *(undefined1 *)(param_2 + 0x79);
              local_30c = *(undefined8 *)(param_2 + 0x7c);
              uVar20 = *(undefined8 *)((longlong)local_4e8 + -0xc + (longlong)dVar31);
              uVar8 = *(undefined2 *)((longlong)local_4e8 + -4 + (longlong)dVar31);
              local_488._0_8_ = *(undefined8 *)((longlong)local_4e8 + (longlong)dVar31);
              memmove(local_2f8,pvVar33,0x60);
              local_28c = local_488._0_8_;
              local_298 = uVar20;
              local_290 = uVar8;
              FUN_1400875ba(local_2f8,local_378);
              pdVar25 = local_2f8;
              ppcVar27 = &local_178;
              for (lVar28 = 0xc; lVar28 != 0; lVar28 = lVar28 + -1) {
                *ppcVar27 = (code *)*pdVar25;
                pdVar25 = pdVar25 + 1;
                ppcVar27 = ppcVar27 + 1;
              }
              pdVar25 = local_278;
              uVar20 = local_28c;
              cStack_110 = (char)local_290;
              uStack_10f = local_290._1_1_;
              local_118 = (undefined4)local_298;
              fStack_114 = local_298._4_4_;
            }
            uStack_10c = (undefined4)uVar20;
            uStack_108 = (undefined4)((ulonglong)uVar20 >> 0x20);
            FUN_1400875ba(&local_178,pdVar25);
            uVar35 = uStack_3e0;
            if (cStack_110 == '\x01') {
              fStack_114 = (float)((double)fStack_114 * local_498);
            }
            lVar28 = (longlong)(int)uStack_3e0;
            uVar22 = (int)uStack_3e0 + 1;
            uStack_3e0 = CONCAT44(uStack_3e0._4_4_,uVar22);
            if (uStack_3e0._4_4_ < uVar22) {
              FUN_144796b16(&local_3e8,uVar35 & 0xffffffff);
            }
            lVar28 = lVar28 * 0x80;
            ppcVar27 = &local_178;
            puVar26 = (undefined8 *)(local_3e8 + lVar28);
            for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
              *puVar26 = *ppcVar27;
              ppcVar27 = ppcVar27 + 1;
              puVar26 = puVar26 + 1;
            }
            *(undefined4 *)(local_3e8 + 0x60 + lVar28) = local_118;
            *(float *)(local_3e8 + 100 + lVar28) = fStack_114;
            *(char *)(local_3e8 + 0x68 + lVar28) = cStack_110;
            *(undefined1 *)(local_3e8 + 0x69 + lVar28) = uStack_10f;
            *(ulonglong *)(local_3e8 + 0x6c + lVar28) = CONCAT44(uStack_108,uStack_10c);
            dVar31 = (double)((longlong)local_4b8 + 0x80);
          } while ((double)local_4f8._0_8_ != dVar31);
        }
        FUN_144904532(*plVar1,&local_3e8);
        if (local_3e8 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (cVar5 != '\0') {
          fVar56 = (float)((double)fVar56 *
                          SQRT(local_4a0 * local_4a0 + local_498 * local_498 + local_468 * local_468
                              ));
        }
        lVar18 = *plVar1;
        lVar28 = lVar18 + 0x140;
        uVar22 = *(uint *)(lVar18 + 0x1d4);
        iVar21 = 0;
        *(undefined4 *)(lVar18 + 0x1d0) = 0;
        if ((int)uVar22 < 0) {
          FUN_147f80112(lVar28,0);
          iVar21 = *(int *)(lVar18 + 0x1d0);
          uVar22 = *(uint *)(lVar18 + 0x1d4);
        }
        *(undefined1 *)(lVar18 + 0x26c) = 0;
        *(uint *)(lVar18 + 0x1d0) = iVar21 + 1U;
        if (uVar22 < iVar21 + 1U) {
          FUN_140089f7a(lVar28,iVar21);
        }
        if (*(longlong *)(lVar18 + 0x1c0) != 0) {
          lVar28 = *(longlong *)(lVar18 + 0x1c0);
        }
        lVar19 = (longlong)iVar21 * 0x80;
        *(double *)(lVar28 + lVar19) = dVar45;
        ((double *)(lVar28 + lVar19))[1] = dVar49;
        *(undefined1 (*) [16])(lVar28 + 0x10 + lVar19) = auVar50;
        auVar11._8_4_ = SUB84(dVar46,0);
        auVar11._0_8_ = dVar40;
        auVar11._12_4_ = uVar62;
        *(undefined1 (*) [16])(lVar28 + 0x20 + lVar19) = auVar11;
        pdVar25 = (double *)(lVar28 + 0x30 + lVar19);
        *pdVar25 = dVar52;
        pdVar25[1] = dVar55;
        auVar12._8_4_ = uVar64;
        auVar12._0_8_ = (double)uVar14 * dVar9;
        auVar12._12_4_ = uVar65;
        *(undefined1 (*) [16])(lVar28 + 0x40 + lVar19) = auVar12;
        auVar4._8_4_ = uVar60;
        auVar4._0_8_ = dVar10 * (double)uVar13;
        auVar4._12_4_ = uVar61;
        *(undefined1 (*) [16])(lVar28 + 0x50 + lVar19) = auVar4;
        *(undefined4 *)(lVar28 + 0x60 + lVar19) = uVar63;
        *(float *)(lVar28 + 100 + lVar19) = fVar56;
        *(char *)(lVar28 + 0x68 + lVar19) = cVar5;
        *(undefined1 *)(lVar28 + 0x69 + lVar19) = uVar6;
        *(undefined8 *)(lVar28 + 0x6c + lVar19) = uVar32;
        if (fVar56 < 0.0) {
          *(undefined4 *)(lVar28 + lVar19 + 100) = *(undefined4 *)(lVar18 + 0x268);
          *(undefined1 *)(lVar18 + 0x26c) = 1;
        }
        FUN_1447906c0(lVar18,0);
      }
    }
    (**(code **)(*param_1 + 0x28))(param_1,plVar1);
  }
  if (local_458 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1403c8127:
  if ((local_f0 ^ (ulonglong)auStack_578) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403c8d20 FUN_1403c8d20 body=149 status=ok
// SIG undefined FUN_1403c8d20(void)

void FUN_1403c8d20(int *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *local_48;
  longlong local_38 [5];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_1[1] < 1) || (*param_1 != 0)) {
    local_58 = 0;
    local_48 = (longlong *)0x0;
    puVar2 = *(undefined8 **)(param_1 + 4);
    param_1[4] = 0;
    param_1[5] = 0;
    FUN_1403c8db6(puVar2);
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    if (local_58 != 0) {
      plVar3 = local_48;
      if (local_48 == (longlong *)0x0) {
        plVar3 = local_38;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403c8db6 FUN_1403c8db6 body=441 status=ok
// SIG undefined FUN_1403c8db6(void)

void FUN_1403c8db6(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong *plVar21;
  undefined ***pppuVar22;
  undefined1 auStack_b8 [32];
  code *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined ***local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined **local_78;
  longlong lStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  uVar4 = *(undefined8 *)(param_1 + 0x60);
  uVar5 = *(undefined8 *)(param_1 + 0x68);
  uVar6 = *(undefined8 *)(param_1 + 0x70);
  uVar7 = *(undefined8 *)(param_1 + 0x78);
  uVar8 = *(undefined8 *)(param_1 + 0x80);
  uVar9 = *(undefined8 *)(param_1 + 0x88);
  uVar10 = *param_2;
  uVar11 = param_2[1];
  uVar12 = param_2[2];
  uVar13 = param_2[3];
  uVar14 = param_2[4];
  uVar15 = param_2[5];
  uVar16 = param_2[7];
  *(undefined8 *)(param_1 + 0x80) = param_2[6];
  *(undefined8 *)(param_1 + 0x88) = uVar16;
  *(undefined8 *)(param_1 + 0x70) = uVar14;
  *(undefined8 *)(param_1 + 0x78) = uVar15;
  *(undefined8 *)(param_1 + 0x60) = uVar12;
  *(undefined8 *)(param_1 + 0x68) = uVar13;
  *(undefined8 *)(param_1 + 0x50) = uVar10;
  *(undefined8 *)(param_1 + 0x58) = uVar11;
  local_58._0_4_ = (undefined4)uVar2;
  local_58._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  uStack_50._0_4_ = (undefined4)uVar3;
  uStack_50._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  local_48._0_4_ = (undefined4)uVar4;
  local_48._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  uStack_40._0_4_ = (undefined4)uVar5;
  uStack_40._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
  local_38._0_4_ = (undefined4)uVar6;
  local_38._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
  uStack_30._0_4_ = (undefined4)uVar7;
  uStack_30._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
  local_28._0_4_ = (undefined4)uVar8;
  local_28._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
  uStack_20._0_4_ = (undefined4)uVar9;
  uStack_20._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
  *(undefined4 *)(param_2 + 6) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x34) = local_28._4_4_;
  *(undefined4 *)(param_2 + 7) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x3c) = uStack_20._4_4_;
  *(undefined4 *)(param_2 + 4) = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_38._4_4_;
  *(undefined4 *)(param_2 + 5) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_30._4_4_;
  *(undefined4 *)(param_2 + 2) = (undefined4)local_48;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_48._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_40._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_58;
  *(undefined4 *)((longlong)param_2 + 4) = local_58._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_50._4_4_;
  local_58 = uVar2;
  uStack_50 = uVar3;
  local_48 = (undefined ***)uVar4;
  uStack_40 = uVar5;
  local_38 = (undefined **)uVar6;
  uStack_30 = uVar7;
  local_28 = uVar8;
  uStack_20 = uVar9;
  if (*(int *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_b8);
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  local_88 = (undefined ***)0x0;
  local_78 = &PTR_LAB_149e69a70;
  local_98 = FUN_1448f09e2;
  lVar1 = *(longlong *)(param_1 + 0x10);
  lStack_70 = param_1;
  plVar21 = (longlong *)FUN_14017f2fc(lVar1 + 0x40);
  local_58 = *plVar21;
  lVar17 = plVar21[1];
  local_48 = (undefined ***)plVar21[2];
  lVar18 = plVar21[3];
  local_38 = (undefined **)plVar21[4];
  uStack_30 = plVar21[5];
  lVar19 = plVar21[6];
  lVar20 = plVar21[7];
  plVar21[6] = CONCAT44(uStack_64,local_68);
  plVar21[7] = CONCAT44(uStack_5c,uStack_60);
  plVar21[4] = (longlong)local_78;
  plVar21[5] = lStack_70;
  plVar21[2] = (longlong)local_88;
  plVar21[3] = CONCAT44(uStack_7c,uStack_80);
  *plVar21 = (longlong)local_98;
  plVar21[1] = CONCAT44(uStack_8c,uStack_90);
  uStack_50._0_4_ = (undefined4)lVar17;
  uStack_50._4_4_ = (undefined4)((ulonglong)lVar17 >> 0x20);
  uStack_40._0_4_ = (undefined4)lVar18;
  uStack_40._4_4_ = (undefined4)((ulonglong)lVar18 >> 0x20);
  local_28._0_4_ = (undefined4)lVar19;
  local_28._4_4_ = (undefined4)((ulonglong)lVar19 >> 0x20);
  uStack_20._0_4_ = (undefined4)lVar20;
  uStack_20._4_4_ = (undefined4)((ulonglong)lVar20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_98 = (code *)local_58;
  local_88 = local_48;
  local_78 = local_38;
  lStack_70 = uStack_30;
  uStack_50 = lVar17;
  uStack_40 = lVar18;
  local_28 = lVar19;
  uStack_20 = lVar20;
  FUN_1400d20b8(lVar1,param_1 + 0x10,plVar21);
  if (local_98 != (code *)0x0) {
    pppuVar22 = local_88;
    if (local_88 == (undefined ***)0x0) {
      pppuVar22 = &local_78;
    }
    (*(code *)(*pppuVar22)[2])();
  }
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403c8f86 FUN_1403c8f86 body=171 status=ok
// SIG undefined FUN_1403c8f86(void)

void FUN_1403c8f86(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_78 [39];
  undefined1 local_51;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 **local_40;
  code *local_38;
  undefined8 **local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)(param_1 + 0x420);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x418);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0xa8))();
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  local_48 = &local_51;
  local_40 = &local_50;
  local_50 = &LAB_14388841e;
  local_30 = &local_40;
  local_38 = FUN_1400ef576;
  FUN_14480914e(param_1);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403c9032 FUN_1403c9032 body=102 status=ok
// SIG undefined FUN_1403c9032(void)

void FUN_1403c9032(void)

{
  undefined1 auStack_58 [39];
  undefined1 local_31;
  undefined1 *local_30;
  undefined1 *local_28;
  undefined1 **local_20;
  code *local_18;
  undefined8 **local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = &local_31;
  local_20 = &local_30;
  local_30 = &LAB_14388841e;
  local_10 = &local_20;
  local_18 = FUN_1400ef576;
  FUN_14480914e();
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403c909a FUN_1403c909a body=166 status=ok
// SIG undefined FUN_1403c909a(void)

void FUN_1403c909a(longlong param_1)

{
  undefined1 auStack_68 [47];
  undefined1 local_39;
  undefined1 *local_38;
  undefined1 *local_30;
  undefined1 **local_28;
  code *local_20;
  undefined8 **local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = &local_39;
  local_28 = &local_38;
  local_38 = &LAB_14388841e;
  local_18 = &local_28;
  local_20 = FUN_1400ef576;
  FUN_14480914e(param_1);
  if (*(int *)(param_1 + 0x53c) < 0) {
    *(undefined4 *)(param_1 + 0x538) = 0;
    FUN_1447a8aa0(param_1 + 0x530,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x538) = 0;
  }
  *(undefined8 *)(param_1 + 0x540) = 0;
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403c9142 FUN_1403c9142 body=284 status=ok
// SIG undefined FUN_1403c9142(void)

undefined8 FUN_1403c9142(void)

{
  longlong lVar1;
  undefined8 uVar2;
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
  lVar1 = FUN_1403c9260();
  if (lVar1 != 0) {
    if (DAT_14cbae3d8 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_1464f5fc4;
      local_38 = &LAB_148c3dd26;
      local_40 = &LAB_1459673ba;
      local_48 = L"Engine";
      local_50 = 0;
      local_58 = 0x10000004;
      local_60 = 0x10;
      local_68 = 0x1360;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
    }
    if ((*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) == DAT_14cbae3d8 + 0x30)) {
      uVar2 = 0;
      if (((*(byte *)(lVar1 + 0x74c) & 2) != 0) || ((*(byte *)(lVar1 + 0x74c) & 1) != 0))
      goto LAB_1403c91a1;
    }
  }
  uVar2 = 1;
LAB_1403c91a1:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403c9260 FUN_1403c9260 body=122 status=ok
// SIG undefined FUN_1403c9260(void)

undefined8 FUN_1403c9260(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if ((*(longlong **)(param_1 + 0x138) != (longlong *)0x0) && (*(int *)(param_1 + 0x134) != 0)) {
    uVar1 = *(uint *)(param_1 + 0x130);
    if ((int)uVar1 < 0) {
      return 0;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return 0;
    }
    lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if ((((lVar2 != 0) && (*(int *)(lVar2 + 0x10) == *(int *)(param_1 + 0x134))) &&
        ((*(uint *)(lVar2 + 8) & 0x10200000) == 0)) &&
       (lVar2 = (**(code **)(**(longlong **)(param_1 + 0x138) + 0x10))(), lVar2 != 0)) {
      return *(undefined8 *)(lVar2 + 0x398);
    }
  }
  return 0;
}



// FUNCTION 1403c92da FUN_1403c92da body=324 status=ok
// SIG undefined FUN_1403c92da(void)

void FUN_1403c92da(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
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
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = FUN_1403c9430();
  if (DAT_14c951858 == 0) {
    local_40 = &local_20;
    local_20 = FUN_1449e2820;
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
  lVar3 = *(longlong *)(param_1 + -8);
  if (lVar3 != 0) {
    do {
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
         (lVar2 = lVar3,
         *(longlong *)
          (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
         != lVar1 + 0x30)) {
        lVar2 = 0;
      }
    } while ((lVar2 == 0) && (lVar3 = *(longlong *)(lVar3 + 0x20), lVar3 != 0));
    if (lVar2 != 0) {
      if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
}



// FUNCTION 1403c9430 FUN_1403c9430 body=228 status=ok
// SIG undefined FUN_1403c9430(void)

longlong FUN_1403c9430(void)

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
  if (DAT_14cabcb90 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_14781ec26;
    local_40 = &LAB_146367981;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x438;
    FUN_14081cfa3(L"/Script/LevelSequence",L"LevelSequenceActor",&DAT_14cabcb90,FUN_14636795a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cabcb90;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403c9516 FUN_1403c9516 body=3050 status=ok
// SIG undefined FUN_1403c9516(void)

void FUN_1403c9516(longlong *param_1,float param_2,undefined4 param_3)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  longlong *plVar16;
  undefined *puVar17;
  byte bVar18;
  float *pfVar19;
  float *pfVar20;
  bool bVar21;
  bool bVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined4 local_150;
  undefined4 local_148;
  undefined8 local_140;
  wchar_t *local_138;
  code *local_130;
  undefined1 *local_128;
  code **local_120;
  undefined1 *local_118;
  code *local_110;
  char local_f9;
  longlong *local_f8;
  code *local_f0 [2];
  longlong *local_e0;
  int local_c8;
  float local_c0;
  undefined4 uStack_bc;
  ushort local_a8;
  byte local_a0;
  float local_98;
  undefined4 uStack_94;
  ushort local_80;
  byte local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (((param_1[0x63f] != 0) && (*(char *)(param_1[0x63f] + 0x99) == '\x01')) &&
     (plVar8 = (longlong *)param_1[0x7a], plVar8 != (longlong *)0x0)) {
    if (DAT_14cb22240 == 0) {
      local_120 = local_f0;
      local_f0[0] = FUN_1449e2820;
      local_110 = FUN_14081d0ea;
      local_118 = &LAB_1464376fa;
      local_128 = &LAB_147f28935;
      local_130 = FUN_146437c39;
      local_138 = L"Engine";
      local_140 = 0;
      local_148 = 0x10004001;
      local_150 = 8;
      local_158 = 0x28;
      FUN_14081cfa3(L"/Script/GbxAI",L"GbxTargeter",&DAT_14cb22240,&DAT_147f28934);
    }
    plVar8 = (longlong *)(**(code **)(*plVar8 + 0x288))(plVar8,DAT_14cb22240);
    if (plVar8 != (longlong *)0x0) {
      if (DAT_14cb22240 == 0) {
        local_120 = local_f0;
        local_f0[0] = FUN_1449e2820;
        local_110 = FUN_14081d0ea;
        local_118 = &LAB_1464376fa;
        local_128 = &LAB_147f28935;
        local_130 = FUN_146437c39;
        local_138 = L"Engine";
        local_140 = 0;
        local_148 = 0x10004001;
        local_150 = 8;
        local_158 = 0x28;
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxTargeter",&DAT_14cb22240,&DAT_147f28934);
      }
      plVar11 = (longlong *)FUN_144718840(plVar8,DAT_14cb22240);
      if ((plVar8 != plVar11) && (plVar11 != (longlong *)0x0)) {
        pcVar2 = *(code **)(param_1[0x63f] + 0x88);
        if ((param_1[0x73] == 0) || ((*(byte *)(param_1[0x73] + 0x39a) & 8) == 0)) {
          uVar12 = (**(code **)(*plVar11 + 0x30))(plVar11);
          FUN_1403caab8(uVar12,pcVar2);
          if ((char)param_1[0x2f] != '\x03') {
            local_f0[0] = pcVar2;
            uVar12 = FUN_14477b072(param_1,DAT_14cbadc78);
            (**(code **)(*param_1 + 0x248))(param_1,uVar12,local_f0);
          }
        }
        cVar5 = (**(code **)(*param_1 + 0x6c8))(param_1);
        if (cVar5 != '\0') {
          if (pcVar2 == (code *)0x0) {
            FUN_140c125e6(param_1 + 0x1b3,&DAT_14cbd9680);
          }
          else {
            FUN_1403ca8ec();
          }
        }
        lVar9 = param_1[0x86];
        if (lVar9 != 0) {
          if (DAT_14cae9568 == 0) {
            local_120 = local_f0;
            local_f0[0] = FUN_1417de738;
            local_110 = (code *)&LAB_145893408;
            local_118 = &LAB_1458cbbd2;
            local_128 = &LAB_147ba21f1;
            local_130 = (code *)&LAB_1463e9233;
            local_138 = L"Engine";
            local_140 = 0;
            local_148 = 0x1000000c;
            local_150 = 8;
            local_158 = 0x2b8;
            FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
            lVar9 = param_1[0x86];
            if (lVar9 == 0) goto LAB_1403c956d;
          }
          if (((DAT_14cae9568 != 0) && (lVar9 = *(longlong *)(lVar9 + 0x10), lVar9 != 0)) &&
             ((*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(lVar9 + 0x38) &&
              ((*(longlong *)
                 (*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) ==
                DAT_14cae9568 + 0x30 && (lVar9 = FUN_1403ca91c(), lVar9 != 0)))))) {
            FUN_1403cb0b0(lVar9,pcVar2);
          }
        }
      }
    }
  }
LAB_1403c956d:
  plVar8 = (longlong *)param_1[0x150];
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x2b8))(plVar8,param_2,param_3);
  }
  cVar5 = (**(code **)(*param_1 + 0x758))(param_1);
  if (cVar5 != '\0') {
    param_1[0xc4] = DAT_14c846508;
    uVar4 = DAT_14c846500._4_4_;
    uVar3 = (undefined4)DAT_14c846500;
    uVar25 = DAT_14c8464f8._4_4_;
    *(undefined4 *)(param_1 + 0xc2) = (undefined4)DAT_14c8464f8;
    *(undefined4 *)((longlong)param_1 + 0x614) = uVar25;
    *(undefined4 *)(param_1 + 0xc3) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0x61c) = uVar4;
  }
  if (param_1[0x4a0] != 0) {
    FUN_1403ca534(param_1[0x4a0],param_2,param_3);
  }
  lVar7 = FUN_1447210f0(param_1);
  lVar9 = param_1[0x73];
  local_f9 = (char)param_3;
  if (lVar9 == 0) {
LAB_1403c9e4d:
    bVar21 = false;
  }
  else {
    if (DAT_14cbae3d8 == 0) {
      local_120 = local_f0;
      local_f0[0] = FUN_141030f22;
      local_110 = FUN_14081d0ea;
      local_118 = &LAB_1464f5fc4;
      local_128 = &LAB_148c3dd26;
      local_130 = (code *)&LAB_1459673ba;
      local_138 = L"Engine";
      local_140 = 0;
      local_148 = 0x10000004;
      local_150 = 0x10;
      local_158 = 0x1360;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
      lVar9 = param_1[0x73];
      if (lVar9 == 0) goto LAB_1403c9e4d;
    }
    bVar21 = false;
    if ((DAT_14cbae3d8 != 0) && (lVar9 = *(longlong *)(lVar9 + 0x10), bVar21 = false, lVar9 != 0)) {
      if (*(int *)(lVar9 + 0x38) < *(int *)(DAT_14cbae3d8 + 0x38)) goto LAB_1403c9e4d;
      bVar21 = *(longlong *)
                (*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) ==
               DAT_14cbae3d8 + 0x30;
    }
  }
  plVar8 = (longlong *)FUN_1403ca102(param_1);
  lVar9 = FUN_1403ca227();
  local_f0[0] = (code *)((ulonglong)local_f0[0] & 0xffffffffffffff00);
  local_c8 = 0;
  FUN_1456bb102(local_f0,param_1[0x1e9]);
  pfVar20 = &local_c0;
  FUN_1448729ea(lVar9 + 0x1f8,pfVar20,local_f0);
  if (local_a0 == 3) {
    local_a0 = 3;
    fVar24 = local_c0;
  }
  else {
    pfVar19 = &local_98;
    FUN_1400b56fe(pfVar19,&local_c0,3);
    fVar24 = 0.0;
    if (local_78 != 0) {
      fVar24 = local_98;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_80) {
        pfVar19 = (float *)CONCAT44(uStack_94,local_98);
      }
      (*pcVar2)(pfVar19);
    }
    if (0x18 < local_80) {
      FUN_1400020a8(CONCAT44(uStack_94,local_98));
    }
  }
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a0 * 0x120));
  if (pcVar2 != (code *)0x0) {
    if (0x18 < local_a8) {
      pfVar20 = (float *)CONCAT44(uStack_bc,local_c0);
    }
    (*pcVar2)(pfVar20);
  }
  if (0x18 < local_a8) {
    FUN_1400020a8(CONCAT44(uStack_bc,local_c0));
  }
  lVar9 = DAT_14c9a3da0;
  if ((longlong)local_c8 != 0) {
    lVar10 = (longlong)local_c8 + -1;
    lVar14 = lVar10 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar14),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar14));
    if (*(longlong *)(lVar9 + lVar14) != 0) {
      FUN_1400020a8();
    }
    lVar9 = DAT_14c9a3da0;
    iVar6 = (int)lVar10;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar6;
    }
    *(undefined4 *)(lVar9 + lVar14) = 0xffffffff;
    iVar15 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar15 = DAT_14c9a3dd0;
    }
    *(int *)(lVar9 + 4 + lVar14) = iVar15;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar17 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar17 = DAT_14c9a3dc0;
    }
    iVar15 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar15 = iVar6;
    }
    bVar18 = (byte)lVar10 & 0x1f;
    DAT_14c9a3dd0 = iVar6;
    *(uint *)(puVar17 + (longlong)(iVar15 >> 5) * 4) =
         *(uint *)(puVar17 + (longlong)(iVar15 >> 5) * 4) &
         (-2 << bVar18 | 0xfffffffeU >> 0x20 - bVar18);
    local_c8 = 0;
  }
  if (((char)local_f0[0] == '\x03') && (local_e0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_e0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_e0 + 0x10))();
    }
  }
  lVar9 = param_1[0x1e9];
  if ((lVar9 == 0) || (plVar11 = *(longlong **)(lVar9 + 0x6f10), plVar11 == (longlong *)0x0)) {
LAB_1403c976b:
    bVar18 = 0;
  }
  else {
    iVar6 = (int)plVar11[1];
    do {
      if (iVar6 == 0) goto LAB_1403c976b;
      LOCK();
      iVar15 = (int)plVar11[1];
      bVar22 = iVar6 == iVar15;
      if (bVar22) {
        *(int *)(plVar11 + 1) = iVar6 + 1;
        iVar15 = iVar6;
      }
      iVar6 = iVar15;
      UNLOCK();
    } while (!bVar22);
    if ((*(longlong *)(lVar9 + 0x6f08) == 0) || (lVar9 = FUN_1403ca30c(), lVar9 == 0)) {
LAB_1403c9764:
      bVar18 = 0;
    }
    else {
      lVar10 = FUN_1403ca43f();
      lVar14 = *(longlong *)(lVar10 + 0x28);
      if (lVar14 == 0) {
        uVar12 = FUN_14110242a();
        lVar14 = FUN_14477b664(uVar12);
        *(longlong *)(lVar10 + 0x28) = lVar14;
      }
      lVar13 = *(longlong *)(lVar10 + 0x30);
      if (lVar13 != 0) {
LAB_1403c9734:
        if ((longlong)*(int *)(lVar9 + 0x50) != 0) {
          plVar16 = *(longlong **)(lVar9 + 0x48);
          lVar9 = (longlong)*(int *)(lVar9 + 0x50) * 0x90;
          do {
            if (*plVar16 == lVar13) {
              if (plVar16 != (longlong *)0x0) {
                bVar18 = *(byte *)(plVar16 + 0x11) & 1;
                goto LAB_1403c993c;
              }
              break;
            }
            plVar16 = plVar16 + 0x12;
            lVar9 = lVar9 + -0x90;
          } while (lVar9 != 0);
        }
        goto LAB_1403c9764;
      }
      bVar18 = 0;
      if ((lVar14 != 0) && (local_f8 = (longlong *)(lVar10 + 0x20), *local_f8 != 0)) {
        plVar16 = *(longlong **)(lVar14 + 0xb8);
        if ((plVar16 == (longlong *)0x0) ||
           (cVar5 = (**(code **)(*plVar16 + 0x108))(plVar16), cVar5 == '\0')) {
          *(undefined8 *)(lVar10 + 0x30) = 0;
        }
        else {
          uVar12 = (**(code **)(*plVar16 + 0x110))(plVar16);
          lVar13 = FUN_144aff482(uVar12,local_f8);
          *(longlong *)(lVar10 + 0x30) = lVar13;
          if (lVar13 != 0) goto LAB_1403c9734;
        }
        goto LAB_1403c9764;
      }
    }
LAB_1403c993c:
    LOCK();
    plVar16 = plVar11 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  if (((!bVar21 || lVar7 == 0) || (plVar8 == (longlong *)0x0)) || (fVar24 <= 0.0))
  goto LAB_1403c98ec;
  if ((bVar18 == 0 && local_f9 == '\0') &&
     (((bVar18 = *(byte *)(lVar7 + 0x152), bVar18 == 1 ||
       ((bVar18 < 7 && ((0x68U >> (bVar18 & 0x1f) & 1) != 0)))) && ((bVar18 & 0xfe) != 4)))) {
    if (*(code **)(*plVar8 + 0x498) == (code *)&LAB_14015c36e) {
      cVar5 = (char)plVar8[0x42];
    }
    else {
      cVar5 = (**(code **)(*plVar8 + 0x498))(plVar8);
    }
    if ((cVar5 == '\b') && (cVar5 = (**(code **)(*plVar8 + 0x490))(plVar8), cVar5 == '\0')) {
      fVar23 = *(float *)((longlong)param_1 + 0x3c0c) + param_2;
      *(float *)((longlong)param_1 + 0x3c0c) = fVar23;
      if ((bool)(char)param_1[0x781] != fVar24 <= fVar23) {
        *(bool *)(param_1 + 0x781) = fVar24 <= fVar23;
      }
      lVar9 = FUN_1403ca35b();
      if ((*(float *)(lVar9 + 0x270) <= *(float *)(lVar9 + 0x274)) &&
         (0.0 < *(float *)(lVar9 + 0x274))) {
        cVar5 = FUN_1403ca7ae(param_1);
        if (cVar5 == '\0') {
          lVar7 = param_1[0x1e8];
          if (lVar7 == 0) {
            if ((((param_1[0x46e] != 0) && ((int)param_1[0x46f] - 1U < 0xfffffffe)) ||
                ((char)param_1[0x46d] != '\0')) || ((char)param_1[0x477] == '\x01'))
            goto LAB_1403c9cba;
          }
          else if ((*(char *)(lVar7 + 0x73eb) != '\0') || (*(char *)(lVar7 + 0x1990) != '\0'))
          goto LAB_1403c9cba;
          fVar24 = *(float *)(param_1 + 0x784);
          if (fVar24 <= 0.0) {
            fVar24 = (float)FUN_145708998(lVar9);
            *(float *)(param_1 + 0x784) = fVar24;
          }
          if (*(char *)((longlong)param_1 + 0x3c1c) == '\0') {
            *(undefined1 *)((longlong)param_1 + 0x3c1c) = 1;
          }
          else {
            fVar24 = *(float *)(param_1 + 0x783) - param_2;
          }
          *(float *)(param_1 + 0x783) = fVar24;
          if (fVar24 <= 0.0) {
            FUN_148c38b9e(param_1);
            uVar25 = FUN_145708998(lVar9);
            *(undefined4 *)(param_1 + 0x784) = uVar25;
            *(undefined4 *)(param_1 + 0x783) = uVar25;
            *(undefined1 *)((longlong)param_1 + 0x3c1c) = 1;
          }
        }
        else {
LAB_1403c9cba:
          if (*(char *)((longlong)param_1 + 0x3c1c) == '\x01') {
            *(undefined1 *)((longlong)param_1 + 0x3c1c) = 0;
          }
        }
      }
      cVar5 = (**(code **)(*param_1 + 0x6c8))(param_1);
      if (((cVar5 != '\0') && (0.0 < *(float *)((longlong)param_1 + 0x3c14))) &&
         (param_2 = *(float *)((longlong)param_1 + 0x3c14) - param_2,
         *(float *)((longlong)param_1 + 0x3c14) = param_2, param_2 <= 0.0)) {
        if (param_1[0x1e8] != 0) {
          FUN_145708968();
        }
        FUN_1412022f0(param_1);
      }
      goto LAB_1403c98ec;
    }
  }
  *(undefined4 *)((longlong)param_1 + 0x3c0c) = 0;
  *(int *)((longlong)param_1 + 0x3c14) = (int)param_1[0x782];
  if (*(char *)((longlong)param_1 + 0x3c1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x3c1c) = 0;
  }
LAB_1403c98ec:
  if ((local_70 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403ca102 FUN_1403ca102 body=63 status=ok
// SIG undefined FUN_1403ca102(void)

longlong FUN_1403ca102(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_14497e828();
  if (lVar1 != 0) {
    lVar2 = FUN_1403ca142();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1403ca142 FUN_1403ca142 body=228 status=ok
// SIG undefined FUN_1403ca142(void)

longlong FUN_1403ca142(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 **local_30;
  undefined1 *local_28;
  code *local_20;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbaa9d0 == 0) {
    local_30 = &local_10;
    local_10 = &LAB_1417c5d06;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459f190c;
    local_38 = &LAB_148c14a5f;
    local_40 = &LAB_145ad220f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x1000000e;
    local_60 = 8;
    local_68 = 0x6b0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakGameInstance",&DAT_14cbaa9d0,&DAT_148c14a5e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbaa9d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403ca227 FUN_1403ca227 body=227 status=ok
// SIG undefined FUN_1403ca227(void)

longlong * FUN_1403ca227(void)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cbc2088 == (longlong *)0x0) {
    memset(&DAT_14cbc2090,0,0x580);
    FUN_14619b7b2(&DAT_14cbc2090);
    DAT_14cbc2088 = (longlong *)&DAT_14cbc2090;
  }
  plVar1 = DAT_14cbc2088;
  plVar3 = DAT_14cbc2088 + 1;
  if ((char)DAT_14cbc2088[2] == '\0') {
LAB_1403ca254:
    if (*plVar3 == 0) goto LAB_1403ca2c1;
    cVar2 = FUN_1449e3c20(DAT_14cbc2088);
    if (cVar2 == '\0') goto LAB_1403ca26a;
  }
  else {
    if ((char)DAT_14cbc2088[2] == '\x02') {
      plVar3 = (longlong *)(*plVar3 + 0x30);
      goto LAB_1403ca254;
    }
LAB_1403ca2c1:
    lVar4 = FUN_140162146();
    if (lVar4 == 0) goto LAB_1403ca26a;
    FUN_144a884d2(local_40,"def_globals_character",0);
    FUN_140024ada(local_40,plVar1);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  (**(code **)(*plVar1 + 0x20))(plVar1);
LAB_1403ca26a:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return plVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403ca30c FUN_1403ca30c body=79 status=ok
// SIG undefined FUN_1403ca30c(void)

undefined8 FUN_1403ca30c(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(int *)(param_1 + 0x84) == 0) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x80);
  uVar2 = 0;
  if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
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
    uVar2 = *puVar3;
  }
  return uVar2;
}



// FUNCTION 1403ca35b FUN_1403ca35b body=227 status=ok
// SIG undefined FUN_1403ca35b(void)

longlong * FUN_1403ca35b(void)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cbcac60 == (longlong *)0x0) {
    memset(&DAT_14cbcac68,0,0x278);
    FUN_145ebb530(&DAT_14cbcac68);
    DAT_14cbcac60 = (longlong *)&DAT_14cbcac68;
  }
  plVar1 = DAT_14cbcac60;
  plVar3 = DAT_14cbcac60 + 1;
  if ((char)DAT_14cbcac60[2] == '\0') {
LAB_1403ca388:
    if (*plVar3 == 0) goto LAB_1403ca3f5;
    cVar2 = FUN_1449e3c20(DAT_14cbcac60);
    if (cVar2 == '\0') goto LAB_1403ca39e;
  }
  else {
    if ((char)DAT_14cbcac60[2] == '\x02') {
      plVar3 = (longlong *)(*plVar3 + 0x30);
      goto LAB_1403ca388;
    }
LAB_1403ca3f5:
    lVar4 = FUN_140162146();
    if (lVar4 == 0) goto LAB_1403ca39e;
    FUN_144a884d2(local_40,"def_globals_dialog_oak",0);
    FUN_140024ada(local_40,plVar1);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  (**(code **)(*plVar1 + 0x20))(plVar1);
LAB_1403ca39e:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return plVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403ca43f FUN_1403ca43f body=244 status=ok
// SIG undefined FUN_1403ca43f(void)

longlong * FUN_1403ca43f(void)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cbd2e90 == (longlong *)0x0) {
    memset(&DAT_14cbd2e98,0,0x2e8);
    FUN_145c51cf2(&DAT_14cbd2e98);
    DAT_14cbd2e90 = (longlong *)&DAT_14cbd2e98;
  }
  plVar1 = DAT_14cbd2e90;
  plVar3 = DAT_14cbd2e90 + 1;
  if ((char)DAT_14cbd2e90[2] == '\0') {
LAB_1403ca46c:
    if (*plVar3 == 0) goto LAB_1403ca4d9;
    cVar2 = FUN_1449e3c20(DAT_14cbd2e90);
    if (cVar2 == '\0') goto LAB_1403ca482;
  }
  else {
    if ((char)DAT_14cbd2e90[2] == '\x02') {
      plVar3 = (longlong *)(*plVar3 + 0x30);
      goto LAB_1403ca46c;
    }
LAB_1403ca4d9:
    lVar4 = FUN_140162146();
    if (lVar4 == 0) goto LAB_1403ca482;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    uStack_28 = 0;
    FUN_1446ddda2(&local_48,"def_globals_oak_skills",0);
    FUN_140024ada(&local_48,plVar1);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  (**(code **)(*plVar1 + 0x20))(plVar1);
LAB_1403ca482:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return plVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403ca534 FUN_1403ca534 body=466 status=ok
// SIG undefined FUN_1403ca534(void)

void FUN_1403ca534(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = param_1[0x86];
  cVar2 = (**(code **)(*param_1 + 0x880))();
  if ((cVar2 == '\0') && ((param_1[0x746] != 0 || ((int)param_1[0x747] != 0x7201)))) {
    if (lVar4 != 0) {
      cVar2 = FUN_14479439c(lVar4,0);
      if (cVar2 != '\0') {
        lVar4 = *(longlong *)(lVar4 + 0x10);
        if (lVar4 != 0) {
          lVar3 = FUN_140086810();
          if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0xd5) & 0x40) != 0)) {
            if (DAT_14c950d78 == 0) {
              local_50 = &local_38;
              local_38 = FUN_1449e2820;
              local_40 = FUN_14081d0ea;
              local_48 = FUN_14081d0ea;
              local_58 = &LAB_1468b50ee;
              local_60 = FUN_1427f23a3;
              local_68 = L"Engine";
              local_70 = 0;
              local_78 = 0x10004001;
              local_80 = 8;
              local_88 = 0x28;
              FUN_14081cfa3(L"/Script/CoreUObject",L"Interface",&DAT_14c950d78,&DAT_1468b50f4);
            }
            if (DAT_14c950d78 != lVar3) {
              do {
                if (0 < (longlong)*(int *)(lVar4 + 0x1e0)) {
                  lVar5 = 0;
                  do {
                    lVar1 = *(longlong *)(*(longlong *)(lVar4 + 0x1d8) + lVar5);
                    if (((lVar1 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
                       (*(longlong *)
                         (*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
                        lVar3 + 0x30)) goto LAB_1403ca5a0;
                    lVar5 = lVar5 + 0x10;
                  } while ((longlong)*(int *)(lVar4 + 0x1e0) * 0x10 != lVar5);
                }
                lVar4 = *(longlong *)(lVar4 + 0x40);
              } while (lVar4 != 0);
            }
          }
        }
        goto LAB_1403ca664;
      }
    }
LAB_1403ca5a0:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
  }
LAB_1403ca664:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403ca726 FUN_1403ca726 body=136 status=ok
// SIG undefined FUN_1403ca726(void)

void FUN_1403ca726(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)(param_1 + 0xe0);
  if (lVar1 != 0) {
    uVar2 = FUN_140086810();
    plVar3 = (longlong *)FUN_144718840(lVar1,uVar2);
    if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001403ca773. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x18))(plVar3,param_1,param_2);
      return;
    }
  }
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0x90);
  return;
}



// FUNCTION 1403ca7ae FUN_1403ca7ae body=316 status=ok
// SIG undefined FUN_1403ca7ae(void)

undefined8 FUN_1403ca7ae(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
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
  lVar4 = *(longlong *)(param_1 + 0x398);
  if (lVar4 != 0) {
    if (DAT_14cbae3d8 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_1464f5fc4;
      local_38 = &LAB_148c3dd26;
      local_40 = &LAB_1459673ba;
      local_48 = L"Engine";
      local_50 = 0;
      local_58 = 0x10000004;
      local_60 = 0x10;
      local_68 = 0x1360;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
      lVar4 = *(longlong *)(param_1 + 0x398);
      if (lVar4 == 0) goto LAB_1403ca8e4;
    }
    uVar3 = 0;
    if ((DAT_14cbae3d8 == 0) || (lVar2 = *(longlong *)(lVar4 + 0x10), lVar2 == 0))
    goto LAB_1403ca81a;
    iVar1 = *(int *)(DAT_14cbae3d8 + 0x38);
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) == DAT_14cbae3d8 + 0x30)) {
      uVar3 = CONCAT71((int7)(int3)((uint)iVar1 >> 8),*(undefined1 *)(lVar4 + 0x1350));
      goto LAB_1403ca81a;
    }
  }
LAB_1403ca8e4:
  uVar3 = 0;
LAB_1403ca81a:
  if ((local_10 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1403ca8ec FUN_1403ca8ec body=48 status=ok
// SIG undefined FUN_1403ca8ec(void)

void FUN_1403ca8ec(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar1 = FUN_144a8c772();
    if (lVar1 != 0) {
      FUN_14129c610(lVar1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 1403ca91c FUN_1403ca91c body=105 status=ok
// SIG undefined FUN_1403ca91c(void)

void FUN_1403ca91c(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1403ca9d2();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_1403ca986(param_1 + 0x138,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403ca986 FUN_1403ca986 body=76 status=ok
// SIG undefined FUN_1403ca986(void)

void FUN_1403ca986(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_1403ca9d2();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1403ca9c3;
    }
  }
  lVar2 = 0;
LAB_1403ca9c3:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 1403ca9d2 FUN_1403ca9d2 body=228 status=ok
// SIG undefined FUN_1403ca9d2(void)

longlong FUN_1403ca9d2(void)

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
  if (DAT_14cba52d8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_143564180;
    local_28 = &LAB_14115fc28;
    local_38 = &LAB_148bd4e3f;
    local_40 = &LAB_145af54d9;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xc0;
    FUN_14081cfa3(L"/Script/OakGame",L"LocalPlayerSubsystem_CoreDelegates",&DAT_14cba52d8,
                  &DAT_148bd4e3e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba52d8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403caab8 FUN_1403caab8 body=397 status=ok
// SIG undefined FUN_1403caab8(void)

void FUN_1403caab8(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 uStack_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(longlong *)(param_1 + 0x70) != 0) && (*(int *)(param_1 + 0x6c) != 0)) {
    uVar1 = *(uint *)(param_1 + 0x68);
    if (((-1 < (int)uVar1) &&
        ((((int)uVar1 < DAT_14c9647dc &&
          (lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar7 != 0)) &&
         (*(int *)(lVar7 + 0x10) == *(int *)(param_1 + 0x6c))))) &&
       ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)) {
      local_48 = (undefined8 *)0x0;
      uStack_40 = 0;
      if (param_2 != 0) {
        uStack_40 = 1;
        lVar7 = 0;
        FUN_1403cac46(&local_48,0);
        puVar5 = local_48;
        *local_48 = 0x7fffffff;
        *(undefined4 *)(local_48 + 1) = 0;
        uVar1 = *(uint *)(param_2 + 0xc);
        *(uint *)((longlong)local_48 + 4) = uVar1;
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        iVar6 = *(int *)(lVar7 + 0x10);
        local_38 = param_2;
        if (*(int *)(lVar7 + 0x10) == 0) {
          LOCK();
          iVar6 = DAT_14c964868 + 1;
          UNLOCK();
          iVar8 = DAT_14c964868 + 1;
          bVar9 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar6;
          if (bVar9) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar8);
          }
          LOCK();
          iVar6 = *(int *)(lVar7 + 0x10);
          bVar9 = iVar6 == 0;
          if (bVar9) {
            *(int *)(lVar7 + 0x10) = iVar8;
            iVar6 = 0;
          }
          UNLOCK();
          if (bVar9) {
            iVar6 = iVar8;
          }
        }
        *(int *)(puVar5 + 1) = iVar6;
        uVar2 = *(undefined4 *)(param_1 + 0x6c);
        uVar3 = *(undefined4 *)(param_1 + 0x70);
        uVar4 = *(undefined4 *)(param_1 + 0x74);
        *(uint *)(puVar5 + 2) = *(uint *)(param_1 + 0x68);
        *(undefined4 *)((longlong)puVar5 + 0x14) = uVar2;
        *(undefined4 *)(puVar5 + 3) = uVar3;
        *(undefined4 *)((longlong)puVar5 + 0x1c) = uVar4;
        FUN_1408fa87e(puVar5 + 4,&local_38);
      }
      FUN_1403cad5a(param_1,&local_48);
      if (local_48 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403cac46 FUN_1403cac46 body=275 status=ok
// SIG undefined FUN_1403cac46(void)

void FUN_1403cac46(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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



// FUNCTION 1403cad5a FUN_1403cad5a body=447 status=ok
// SIG undefined FUN_1403cad5a(void)

void FUN_1403cad5a(longlong param_1)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  int *piVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  
  iVar7 = *(int *)(param_1 + 0x80);
  if (iVar7 < 1 || *(int *)(param_1 + 0xc0) == 0) {
LAB_1403caf04:
    lVar8 = 0;
  }
  else {
    iVar7 = 1;
    if ((**(int **)(param_1 + 0x78) == 0x7fffffff) ||
       (uVar3 = *(ulonglong *)(*(int **)(param_1 + 0x78) + 1), uVar3 >> 0x20 == 0))
    goto LAB_1403caf04;
    lVar8 = 0;
    uVar5 = (uint)uVar3;
    if ((-1 < (int)uVar5) && ((int)uVar5 < DAT_14c9647dc)) {
      plVar9 = (longlong *)
               ((ulonglong)((uVar5 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0xd & 0x3fff8)));
      if (((plVar9 == (longlong *)0x0) || ((int)plVar9[2] != (int)(uVar3 >> 0x20))) ||
         ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)) goto LAB_1403caf04;
      lVar8 = *plVar9;
    }
  }
  FUN_1403caf9a((undefined8 *)(param_1 + 0x78));
  *(undefined1 *)(param_1 + 0xc4) = 1;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  iVar1 = *(int *)(param_1 + 0x80);
  if ((longlong)iVar1 != 0) {
    lVar10 = *(longlong *)(param_1 + 0x78);
    lVar6 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0xc0);
      *(int *)(param_1 + 0xc0) = iVar2 + 1;
      *(int *)(lVar10 + lVar6) = iVar2;
      lVar6 = lVar6 + 0x30;
    } while ((longlong)iVar1 * 0x30 != lVar6);
  }
  FUN_1403caf1a(param_1);
  if (((0 < *(int *)(param_1 + 0x80) && *(int *)(param_1 + 0xc0) != 0) &&
      (piVar4 = *(int **)(param_1 + 0x78), *piVar4 != 0x7fffffff)) &&
     (uVar3 = *(ulonglong *)(piVar4 + 1), uVar3 >> 0x20 != 0)) {
    lVar10 = 0;
    uVar5 = (uint)uVar3;
    if (((int)uVar5 < 0) || (DAT_14c9647dc <= (int)uVar5)) goto LAB_1403caedb;
    plVar9 = (longlong *)
             ((ulonglong)((uVar5 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0xd & 0x3fff8)));
    if ((plVar9 != (longlong *)0x0) &&
       (((int)plVar9[2] == (int)(uVar3 >> 0x20) && ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)))) {
      lVar10 = *plVar9;
      goto LAB_1403caedb;
    }
  }
  lVar10 = 0;
LAB_1403caedb:
  if ((lVar10 == lVar8) && ((iVar7 == 0) == (*(int *)(param_1 + 0x80) == 0))) {
    return;
  }
  FUN_1403caff4(param_1,param_1,lVar10,lVar8);
  return;
}



// FUNCTION 1403caf1a FUN_1403caf1a body=127 status=ok
// SIG undefined FUN_1403caf1a(void)

void FUN_1403caf1a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x340) != 0) {
    FUN_140457ffc(*(longlong *)(param_1 + 0x340) + 0x130,param_1);
    *(undefined1 *)(*(longlong *)(param_1 + 0x340) + 0xc71) = 1;
    *(undefined8 *)(param_1 + 0x340) = 0;
    plVar3 = *(longlong **)(param_1 + 0x348);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x348) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x0001403caf95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1403caf9a FUN_1403caf9a body=89 status=ok
// SIG undefined FUN_1403caf9a(void)

undefined8 * FUN_1403caf9a(undefined8 *param_1,undefined8 *param_2)

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
      FUN_140bf885c(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x30);
      }
    }
  }
  return param_1;
}



// FUNCTION 1403caff4 FUN_1403caff4 body=187 status=ok
// SIG undefined FUN_1403caff4(void)

void FUN_1403caff4(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar8 = uVar5 * 0x10 + -8;
    uVar7 = uVar5;
    while (((*(int *)(*param_1 + lVar8) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4), cVar4 != '\0')))
    {
      lVar8 = lVar8 + -0x10;
      bVar3 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1403cb097;
      }
    }
    uVar5 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1403cb097:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1403cb0b0 FUN_1403cb0b0 body=264 status=ok
// SIG undefined FUN_1403cb0b0(void)

void FUN_1403cb0b0(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  
  if (*(int *)(param_1 + 0xbc) != 0) {
    uVar1 = *(uint *)(param_1 + 0xb8);
    lVar4 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1403cb10b;
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar3 != (longlong *)0x0) &&
       (((int)plVar3[2] == *(int *)(param_1 + 0xbc) && ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)))
       ) {
      lVar4 = *plVar3;
      goto LAB_1403cb10b;
    }
  }
  lVar4 = 0;
LAB_1403cb10b:
  if (lVar4 != param_2) {
    FUN_1400da9ba(param_1 + 0x90,param_2);
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0xb8) = 0;
      iVar2 = 0;
    }
    else {
      uVar1 = *(uint *)(param_2 + 0xc);
      *(uint *)(param_1 + 0xb8) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      iVar2 = *(int *)(lVar4 + 0x10);
      if (*(int *)(lVar4 + 0x10) == 0) {
        LOCK();
        iVar2 = DAT_14c964868 + 1;
        UNLOCK();
        iVar5 = DAT_14c964868 + 1;
        bVar6 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar2;
        if (bVar6) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar5);
        }
        LOCK();
        iVar2 = *(int *)(lVar4 + 0x10);
        bVar6 = iVar2 == 0;
        if (bVar6) {
          *(int *)(lVar4 + 0x10) = iVar5;
          iVar2 = 0;
        }
        UNLOCK();
        if (bVar6) {
          iVar2 = iVar5;
        }
      }
    }
    *(int *)(param_1 + 0xbc) = iVar2;
  }
  return;
}



// FUNCTION 1403cb1b8 FUN_1403cb1b8 body=1439 status=ok
// SIG undefined FUN_1403cb1b8(void)

void FUN_1403cb1b8(longlong param_1)

{
  uint *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  uint uVar18;
  longlong *plVar19;
  int iVar20;
  int iVar21;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong local_a0;
  int local_94;
  longlong local_90;
  uint local_84;
  longlong local_80;
  longlong local_78;
  ulonglong local_70;
  ulonglong local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8 = (longlong *)(param_1 + 0x4c8);
  FUN_1457089e4();
  local_90 = param_1 + 0x488;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = local_90;
  if (*(int *)(param_1 + 0x4a0) == 0) {
    uVar12 = 1;
    local_58._0_4_ = 0xffffffff;
    iVar21 = 0;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar12 = local_68 >> 0x20;
    iVar21 = *(int *)(param_1 + 0x4a0);
  }
  if (local_58._4_4_ != iVar21 || local_60 != local_90) {
    local_a0 = param_1 + 0x4d8;
    local_78 = param_1 + 0x500;
    plVar19 = local_a8;
    iVar8 = (int)local_68;
    uVar18 = (uint)local_58;
    iVar17 = local_58._4_4_;
    iVar20 = local_50;
    local_94 = iVar21;
    local_80 = local_60;
    do {
      puVar11 = (undefined8 *)((longlong)iVar17 * 0x14 + *(longlong *)(param_1 + 0x478));
      if (*(int *)(param_1 + 0x4fc) == 0) {
        iVar21 = *(int *)(param_1 + 0x4d0);
        *(int *)(param_1 + 0x4d0) = iVar21 + 1;
        if (*(int *)(param_1 + 0x4d4) == iVar21) {
          FUN_140171ad2(plVar19,iVar21);
          plVar19 = local_a8;
        }
        iVar17 = *(int *)(param_1 + 0x4f0);
        if (iVar17 == 0) {
          iVar5 = -1;
        }
        else {
          iVar5 = iVar17 + 0x1e;
          if (-1 < iVar17 + -1) {
            iVar5 = iVar17 + -1;
          }
          iVar5 = iVar5 >> 5;
        }
        iVar9 = iVar17 + 1;
        iVar13 = iVar17 + 0x1f;
        if (-1 < iVar17) {
          iVar13 = iVar17;
        }
        if (iVar13 >> 5 == iVar5) {
          *(int *)(param_1 + 0x4f0) = iVar9;
        }
        else {
          if (*(int *)(param_1 + 0x4f4) <= iVar17) {
            local_84 = uVar18;
            if (iVar17 + 0x20U < 0xa0) {
              iVar9 = 0x80;
              iVar5 = iVar17;
            }
            else {
              uVar18 = iVar17 + 0x20U >> 5;
              local_70 = (ulonglong)uVar18;
              if (*(int *)(param_1 + 0x4f4) + 0x1fU < 0xa0) {
                uVar14 = 4;
                if (4 < uVar18) {
                  uVar14 = uVar18;
                }
              }
              else {
                uVar14 = (uVar18 * 3 >> 3) + uVar18 + 0x10;
              }
              uVar10 = FUN_144a3809e(uVar14 << 2,0);
              iVar5 = (int)(uVar10 >> 2);
              iVar9 = iVar5 << 5;
              if (iVar5 < (int)local_70) {
                iVar9 = -0x20;
              }
              iVar5 = *(int *)(param_1 + 0x4f0);
            }
            *(int *)(param_1 + 0x4f4) = iVar9;
            FUN_1446efbd8(local_a0,iVar5);
            iVar9 = *(int *)(param_1 + 0x4f0) + 1;
            plVar19 = local_a8;
            uVar18 = local_84;
          }
          iVar5 = iVar9 + 0x1f;
          if (-1 < iVar9) {
            iVar5 = iVar9;
          }
          *(int *)(param_1 + 0x4f0) = iVar9;
          if (iVar9 % 0x20 != 0) {
            lVar6 = *(longlong *)(param_1 + 0x4e8);
            if (*(longlong *)(param_1 + 0x4e8) == 0) {
              lVar6 = local_a0;
            }
            bVar7 = -(char)(iVar9 % 0x20);
            *(uint *)(lVar6 + (longlong)(iVar5 >> 5) * 4) =
                 (uint)(*(int *)(lVar6 + (longlong)(iVar5 >> 5) * 4) << (bVar7 & 0x1f)) >>
                 (bVar7 & 0x1f);
          }
        }
        lVar6 = (longlong)iVar21;
        lVar15 = *(longlong *)(param_1 + 0x4e8);
        if (*(longlong *)(param_1 + 0x4e8) == 0) {
          lVar15 = local_a0;
        }
        bVar7 = (byte)iVar17 & 0x1f;
        puVar1 = (uint *)(lVar15 + (longlong)(iVar13 >> 5) * 4);
        *puVar1 = *puVar1 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
      }
      else {
        iVar21 = *(int *)(param_1 + 0x4f8);
        lVar6 = (longlong)iVar21;
        iVar17 = *(int *)(*(longlong *)(param_1 + 0x4c8) + 4 + lVar6 * 0x14);
        *(int *)(param_1 + 0x4f8) = iVar17;
        iVar5 = *(int *)(param_1 + 0x4fc) + -1;
        *(int *)(param_1 + 0x4fc) = iVar5;
        plVar19 = local_a8;
        if (iVar5 != 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x4c8) + (longlong)iVar17 * 0x14) = 0xffffffff;
        }
      }
      iVar5 = local_94;
      lVar15 = *(longlong *)(param_1 + 0x4e8);
      if (*(longlong *)(param_1 + 0x4e8) == 0) {
        lVar15 = local_a0;
      }
      iVar17 = iVar21 + 0x1f;
      if (-1 < iVar21) {
        iVar17 = iVar21;
      }
      puVar1 = (uint *)(lVar15 + (longlong)(iVar17 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)iVar21 & 0x1f);
      pbVar2 = (byte *)(*(longlong *)(param_1 + 0x4c8) + lVar6 * 0x14);
      bVar7 = *(byte *)(puVar11 + 1);
      *pbVar2 = bVar7;
      *(undefined8 *)(pbVar2 + 4) = *puVar11;
      pbVar2[0xc] = 0xff;
      pbVar2[0xd] = 0xff;
      pbVar2[0xe] = 0xff;
      pbVar2[0xf] = 0xff;
      uVar14 = *(int *)(param_1 + 0x4d0) - *(int *)(param_1 + 0x4fc);
      if ((uVar14 != 0) && (uVar14 != 1)) {
        lVar6 = *(longlong *)(param_1 + 0x508);
        if (*(longlong *)(param_1 + 0x508) == 0) {
          lVar6 = local_78;
        }
        iVar17 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x510) - 1U & (uint)bVar7) * 4);
        if (iVar17 != -1) {
          do {
            pbVar3 = (byte *)(*plVar19 + (longlong)iVar17 * 0x14);
            if (*pbVar3 == bVar7) {
              uVar4 = *(undefined8 *)pbVar2;
              *(undefined4 *)(pbVar3 + 8) = *(undefined4 *)(pbVar2 + 8);
              *(undefined8 *)pbVar3 = uVar4;
              FUN_148cdab9a(plVar19,iVar21);
              plVar19 = local_a8;
              goto LAB_1403cb451;
            }
            iVar17 = *(int *)(pbVar3 + 0xc);
          } while (iVar17 != -1);
        }
      }
      if (uVar14 < 4) {
        iVar17 = 1;
      }
      else {
        uVar10 = (ulonglong)(uVar14 & 0xfffffffe) + 0xf;
        lVar6 = 0x3f;
        if (uVar10 != 0) {
          for (; uVar10 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        iVar17 = 1 << ((byte)lVar6 & 0x1f);
      }
      if (((int)uVar14 < 1) || (iVar17 <= *(int *)(param_1 + 0x510))) {
        uVar14 = *(int *)(param_1 + 0x510) - 1U & (uint)bVar7;
        *(uint *)(pbVar2 + 0x10) = uVar14;
        lVar6 = *(longlong *)(param_1 + 0x508);
        if (*(longlong *)(param_1 + 0x508) == 0) {
          lVar6 = local_78;
        }
        *(undefined4 *)(pbVar2 + 0xc) =
             *(undefined4 *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x510) - 1U & uVar14) * 4);
        lVar6 = *(longlong *)(param_1 + 0x508);
        if (*(longlong *)(param_1 + 0x508) == 0) {
          lVar6 = local_78;
        }
        *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x510) - 1U & uVar14) * 4) = iVar21;
      }
      else {
        *(int *)(param_1 + 0x510) = iVar17;
        FUN_1403cb758(plVar19);
        plVar19 = local_a8;
      }
LAB_1403cb451:
      uVar18 = uVar18 & ~(uint)uVar12;
      lVar6 = *(longlong *)(local_80 + 0x10);
      if (*(longlong *)(local_80 + 0x10) == 0) {
        lVar6 = local_80;
      }
      iVar21 = *(int *)(local_80 + 0x18);
      lVar15 = (longlong)iVar8;
      uVar14 = *(uint *)(lVar6 + lVar15 * 4) & uVar18;
      if (uVar14 == 0) {
        iVar17 = iVar21 + 0x1e;
        if (-1 < iVar21 + -1) {
          iVar17 = iVar21 + -1;
        }
        iVar17 = iVar17 >> 5;
        iVar20 = iVar20 + 0x20;
        iVar9 = iVar17;
        if (iVar17 < iVar8) {
          iVar9 = iVar8;
        }
        if (iVar8 < iVar17) {
          lVar16 = 0;
          do {
            uVar14 = *(uint *)(lVar6 + lVar15 * 4 + 4 + lVar16 * 4);
            if (uVar14 != 0) {
              iVar8 = iVar8 + (int)lVar16 + 1;
              uVar18 = 0xffffffff;
              goto LAB_1403cb4c4;
            }
            iVar20 = iVar20 + 0x20;
            lVar16 = lVar16 + 1;
          } while (iVar9 - lVar15 != lVar16);
          uVar18 = 0xffffffff;
          iVar8 = iVar9;
        }
        iVar8 = iVar8 + 1;
        plVar19 = local_a8;
        iVar17 = iVar21;
        iVar5 = local_94;
      }
      else {
LAB_1403cb4c4:
        uVar12 = (ulonglong)(-uVar14 & uVar14);
        uVar10 = uVar12 * 2 + 1;
        lVar6 = 0x3f;
        if (uVar10 != 0) {
          for (; uVar10 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        iVar17 = (iVar20 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
        if (iVar21 <= iVar17) {
          iVar17 = iVar21;
        }
      }
    } while (iVar17 != iVar5 || local_80 != local_90);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403cb758 FUN_1403cb758 body=534 status=ok
// SIG undefined FUN_1403cb758(void)

void FUN_1403cb758(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar7,4);
    if (0 < (int)uVar7) {
      uVar5 = 0;
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar5) * 4) =
             0xffffffff;
        uVar5 = uVar5 + 1;
      } while (uVar7 != uVar5);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] == 0) {
      uVar10 = 1;
      local_48._0_4_ = 0xffffffff;
      local_48._4_4_ = 0;
      local_58._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      uVar10 = local_58 >> 0x20;
    }
    iVar6 = (int)local_58;
    uVar7 = (uint)local_48;
    iVar8 = local_48._4_4_;
    iVar11 = local_40;
    if (local_48._4_4_ < (int)local_50[3]) {
      do {
        lVar13 = *param_1;
        lVar12 = (longlong)iVar8;
        uVar5 = (int)param_1[9] - 1U & (uint)*(byte *)(lVar13 + lVar12 * 0x14);
        *(uint *)(lVar13 + 0x10 + lVar12 * 0x14) = uVar5;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar13 + 0xc + lVar12 * 0x14) =
             *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & uVar5) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & uVar5) * 4) = iVar8;
        uVar7 = ~(uint)uVar10 & uVar7;
        plVar9 = (longlong *)local_50[2];
        if ((longlong *)local_50[2] == (longlong *)0x0) {
          plVar9 = local_50;
        }
        iVar3 = (int)local_50[3];
        lVar13 = (longlong)iVar6;
        uVar5 = *(uint *)((longlong)plVar9 + lVar13 * 4) & uVar7;
        if (uVar5 == 0) {
          iVar8 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar8 = iVar3 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar4 = iVar8;
          if (iVar8 < iVar6) {
            iVar4 = iVar6;
          }
          if (iVar8 <= iVar6) break;
          lVar12 = 0;
          while( true ) {
            iVar11 = iVar11 + 0x20;
            uVar5 = *(uint *)((longlong)plVar9 + lVar12 * 4 + lVar13 * 4 + 4);
            if (uVar5 != 0) break;
            lVar12 = lVar12 + 1;
            if (iVar4 - lVar13 == lVar12) goto LAB_1403cb929;
          }
          iVar6 = iVar6 + (int)lVar12 + 1;
          uVar7 = 0xffffffff;
        }
        uVar10 = (ulonglong)(-uVar5 & uVar5);
        uVar2 = uVar10 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar8 = (iVar11 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      } while (iVar8 < iVar3);
    }
  }
LAB_1403cb929:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403cb970 FUN_1403cb970 body=49 status=ok
// SIG undefined FUN_1403cb970(void)

int * FUN_1403cb970(longlong *param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 *param_5)

{
  undefined8 uVar1;
  
  (**(code **)(*param_1 + 0x48))();
  if (*param_2 == 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x42);
  }
  else {
    uVar1 = 0;
  }
  *param_5 = uVar1;
  return param_2;
}



// FUNCTION 1403cb9a2 FUN_1403cb9a2 body=201 status=ok
// SIG undefined FUN_1403cb9a2(void)

undefined4 * FUN_1403cb9a2(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0;
  local_38 = 0;
  if (*(char *)((longlong)param_3 + 0xb) == '\r') {
    uVar1 = *(undefined1 *)((longlong)param_3 + 9);
    uVar2 = *(undefined1 *)(param_3 + 1);
    cVar3 = FUN_1407f0566(*param_3,&local_38);
    if (cVar3 != '\0') {
      local_48 = 0;
      lVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))
                        (*(longlong **)(param_1 + 8),&local_38,
                         CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uVar2) & 0xffffffff,
                         CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff);
      if (0 < lVar4) {
        *param_2 = DAT_14c845dc8;
        memcpy(param_2 + 1,&DAT_14c845dcc,0x100);
        *(longlong *)(param_2 + 0x42) = lVar4;
        goto LAB_1403cb9dd;
      }
    }
  }
  *param_2 = 8;
  *(undefined2 *)(param_2 + 1) = 0;
LAB_1403cb9dd:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403cba6c FUN_1403cba6c body=286 status=ok
// SIG undefined FUN_1403cba6c(void)

void FUN_1403cba6c(longlong *param_1)

{
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
  longlong local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14cb63950 == 0) {
    local_40 = &local_18;
    local_18 = FUN_144a7958c;
    local_30 = FUN_14081d0ea;
    local_38 = &LAB_1464ec72a;
    local_48 = &LAB_1486f5f75;
    local_50 = &LAB_140945686;
    local_58 = L"Engine";
    local_60 = 0;
    local_68 = 0x10000004;
    local_70 = 0x10;
    local_78 = 0x19d0;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkeletalMeshComponent",&DAT_14cb63950,FUN_1464fe8ee);
  }
  local_20 = DAT_14cb63950;
  if ((DAT_14cb63950 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  (**(code **)(*param_1 + 0x598))(param_1,&local_20);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403cbb8c FUN_1403cbb8c body=318 status=ok
// SIG undefined FUN_1403cbb8c(void)

void FUN_1403cbb8c(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_118 [40];
  undefined1 *local_f0;
  int local_e8;
  code *local_e0;
  undefined1 **local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [128];
  undefined1 *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (param_2 != 0) {
    if (*(longlong *)(param_1 + 0x58) != 0) {
      local_40 = (undefined1 *)0x0;
      local_38 = 0x1000000000;
      local_d8 = &local_d0;
      local_e0 = FUN_143592712;
      local_d0 = local_c0;
      FUN_1403cc100(param_1 + 0x15d0,param_2);
      if (0 < (int)local_38) {
        uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x858);
        local_f0 = local_c0;
        if (local_40 != (undefined1 *)0x0) {
          local_f0 = local_40;
        }
        local_e8 = (int)local_38;
        local_c8 = 0;
        FUN_14485c47a(&local_c8,param_2);
        FUN_1403cc6be(uVar1,local_c8,&local_f0,param_1);
      }
      if (local_40 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
    FUN_1403cbccc(param_1 + 0x15d0,param_2);
  }
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    FUN_1403cbda0(param_1 + 0x15d0,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403cbccc FUN_1403cbccc body=210 status=ok
// SIG undefined FUN_1403cbccc(void)

void FUN_1403cbccc(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_2 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    iVar2 = *(int *)(lVar4 + 0x10);
    if (*(int *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar3 = DAT_14c964868 + 1;
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar3);
      }
      LOCK();
      iVar2 = *(int *)(lVar4 + 0x10);
      bVar5 = iVar2 == 0;
      if (bVar5) {
        *(int *)(lVar4 + 0x10) = iVar3;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar5) {
        iVar2 = iVar3;
      }
    }
    local_30 = CONCAT44(iVar2,uVar1);
  }
  FUN_1403cbe7c(param_1,&local_30);
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403cbda0 FUN_1403cbda0 body=218 status=ok
// SIG undefined FUN_1403cbda0(void)

void FUN_1403cbda0(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_2 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    iVar2 = *(int *)(lVar4 + 0x10);
    if (*(int *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar3 = DAT_14c964868 + 1;
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar3);
      }
      LOCK();
      iVar2 = *(int *)(lVar4 + 0x10);
      bVar5 = iVar2 == 0;
      if (bVar5) {
        *(int *)(lVar4 + 0x10) = iVar3;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar5) {
        iVar2 = iVar3;
      }
    }
    local_30 = CONCAT44(iVar2,uVar1);
  }
  FUN_1403cbf84(param_1 + 0x50,&local_30);
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403cbe7c FUN_1403cbe7c body=264 status=ok
// SIG undefined FUN_1403cbe7c(void)

undefined8 FUN_1403cbe7c(longlong *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = param_2[1];
    uVar4 = uVar1 >> 0xd ^ *param_2 - uVar1;
    uVar7 = uVar4 << 8 ^ (-0x61c88647 - uVar1) - uVar4;
    uVar8 = uVar7 >> 0xd ^ (uVar1 - uVar4) - uVar7;
    uVar6 = uVar8 >> 0xc ^ (uVar4 - uVar7) - uVar8;
    uVar4 = uVar6 << 0x10 ^ (uVar7 - uVar8) - uVar6;
    uVar7 = uVar4 >> 5 ^ (uVar8 - uVar6) - uVar4;
    uVar6 = uVar7 >> 3 ^ (uVar6 - uVar4) - uVar7;
    uVar4 = uVar6 << 10 ^ (uVar4 - uVar7) - uVar6;
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar5 +
                    ((longlong)(int)(uVar4 >> 0xf ^ uVar7 - (uVar6 + uVar4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar3 = *param_1;
      do {
        lVar9 = (longlong)iVar2 * 0x60;
        if ((*(int *)(lVar3 + lVar9) == *param_2) && (*(uint *)(lVar3 + 4 + lVar9) == uVar1)) {
          FUN_1403cc47c();
          return 1;
        }
        iVar2 = *(int *)(lVar9 + lVar3 + 0x58);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1403cbf84 FUN_1403cbf84 body=380 status=ok
// SIG undefined FUN_1403cbf84(void)

undefined8 FUN_1403cbf84(longlong *param_1,int *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = param_2[1];
    uVar7 = uVar2 >> 0xd ^ *param_2 - uVar2;
    uVar9 = uVar7 << 8 ^ (-0x61c88647 - uVar2) - uVar7;
    uVar11 = uVar9 >> 0xd ^ (uVar2 - uVar7) - uVar9;
    uVar12 = uVar11 >> 0xc ^ (uVar7 - uVar9) - uVar11;
    uVar7 = uVar12 << 0x10 ^ (uVar9 - uVar11) - uVar12;
    uVar9 = uVar7 >> 5 ^ (uVar11 - uVar12) - uVar7;
    uVar11 = uVar9 >> 3 ^ (uVar12 - uVar7) - uVar9;
    uVar7 = uVar11 << 10 ^ (uVar7 - uVar9) - uVar11;
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar8 +
                    ((longlong)(int)(uVar7 >> 0xf ^ uVar9 - (uVar11 + uVar7)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar6 != -1) {
      lVar3 = *param_1;
      do {
        lVar10 = (longlong)iVar6 * 0x60;
        lVar1 = lVar3 + lVar10;
        if ((*(int *)(lVar3 + lVar10) == *param_2) && (*(uint *)(lVar3 + 4 + lVar10) == uVar2)) {
          iVar4 = *(int *)((longlong)plVar8 + (longlong)*(int *)(lVar1 + 0x5c) * 4);
          if (iVar4 == iVar6) {
            piVar5 = (int *)((longlong)plVar8 + (longlong)*(int *)(lVar1 + 0x5c) * 4);
          }
          else {
            do {
              piVar5 = (int *)(lVar3 + (longlong)iVar4 * 0x60 + 0x58);
              iVar4 = *piVar5;
            } while (iVar4 != iVar6);
          }
          *piVar5 = *(int *)(lVar1 + 0x58);
          lVar3 = *param_1;
          *(undefined4 *)(lVar3 + 0x50 + lVar10) = 0;
          if (*(longlong *)(lVar3 + 0x48 + lVar10) != 0) {
            FUN_1400020a8();
          }
          FUN_1403cc58e(lVar3 + lVar10 + 8);
          FUN_1403cc642(param_1,iVar6);
          return 1;
        }
        iVar6 = *(int *)(lVar1 + 0x58);
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 1403cc100 FUN_1403cc100 body=890 status=ok
// SIG undefined FUN_1403cc100(void)

void FUN_1403cc100(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  bool bVar21;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == 0) {
    uVar17 = 0;
    uVar7 = 0;
  }
  else {
    uVar17 = *(uint *)(param_2 + 0xc);
    if ((int)uVar17 < DAT_14c9647dc) {
      lVar20 = (ulonglong)((uVar17 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8);
    }
    else {
      lVar20 = 0;
    }
    uVar7 = *(uint *)(lVar20 + 0x10);
    if (*(uint *)(lVar20 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      uVar6 = DAT_14c964868 + 1;
      bVar21 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar21) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar6);
      }
      LOCK();
      uVar7 = *(uint *)(lVar20 + 0x10);
      bVar21 = uVar7 == 0;
      if (bVar21) {
        *(uint *)(lVar20 + 0x10) = uVar6;
        uVar7 = 0;
      }
      UNLOCK();
      if (bVar21) {
        uVar7 = uVar6;
      }
    }
  }
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar6 = uVar7 >> 0xd ^ uVar17 - uVar7;
    uVar9 = uVar6 << 8 ^ (-0x61c88647 - uVar7) - uVar6;
    uVar16 = uVar9 >> 0xd ^ (uVar7 - uVar6) - uVar9;
    uVar18 = uVar16 >> 0xc ^ (uVar6 - uVar9) - uVar16;
    uVar6 = uVar18 << 0x10 ^ (uVar9 - uVar16) - uVar18;
    uVar9 = uVar6 >> 5 ^ (uVar16 - uVar18) - uVar6;
    uVar16 = uVar9 >> 3 ^ (uVar18 - uVar6) - uVar9;
    uVar6 = uVar16 << 10 ^ (uVar6 - uVar9) - uVar16;
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar10 = *(int *)((longlong)plVar8 +
                     (ulonglong)((int)param_1[9] - 1U & (uVar6 >> 0xf ^ uVar9 - (uVar16 + uVar6))) *
                     4);
    if (iVar10 != -1) {
      lVar20 = *param_1;
      do {
        lVar13 = (longlong)iVar10 * 0x60;
        puVar1 = (undefined8 *)(lVar20 + lVar13);
        if ((*(uint *)(lVar20 + lVar13) == uVar17) && (*(uint *)(lVar20 + 4 + lVar13) == uVar7)) {
          if (puVar1 != (undefined8 *)0x0) {
            iVar10 = *(int *)(puVar1 + 6);
            if (iVar10 == 0) {
              uVar15 = 1;
              uVar19 = 0;
              iVar4 = 0;
              iVar14 = 0;
              goto LAB_1403cc320;
            }
            puVar5 = (uint *)puVar1[5];
            if ((uint *)puVar1[5] == (uint *)0x0) {
              puVar5 = (uint *)(puVar1 + 3);
            }
            uVar7 = *puVar5;
            if (uVar7 != 0) {
              uVar19 = 0;
              iVar14 = 0;
              goto LAB_1403cc2fd;
            }
            iVar4 = iVar10 + 0x1e;
            if (-1 < iVar10 + -1) {
              iVar4 = iVar10 + -1;
            }
            uVar19 = 0;
            uVar15 = (ulonglong)(uint)(iVar4 >> 5);
            if (iVar4 >> 5 < 1) {
              uVar15 = uVar19;
            }
            iVar14 = 0;
            goto LAB_1403cc2e5;
          }
          break;
        }
        iVar10 = *(int *)(puVar1 + 0xb);
      } while (iVar10 != -1);
    }
  }
  goto LAB_1403cc21d;
  while( true ) {
    iVar14 = iVar14 + 0x20;
    uVar7 = puVar5[uVar19 + 1];
    uVar19 = uVar19 + 1;
    if (uVar7 != 0) break;
LAB_1403cc2e5:
    if (uVar15 == uVar19) goto LAB_1403cc21d;
  }
LAB_1403cc2fd:
  uVar15 = (ulonglong)(-uVar7 & uVar7);
  uVar2 = uVar15 * 2 + 1;
  lVar20 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar20 == 0; lVar20 = lVar20 + -1) {
    }
  }
  iVar4 = (iVar14 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
  if (iVar10 <= iVar4) {
    iVar4 = iVar10;
  }
LAB_1403cc320:
  if (iVar4 != iVar10) {
    uVar7 = 0xffffffff;
    do {
      local_50 = *puVar1;
      local_58 = *(undefined8 *)(puVar1[1] + (longlong)iVar4 * 0x20);
      (*(code *)*param_3)(param_3[1],&local_50,&local_58);
      uVar7 = ~(uint)uVar15 & uVar7;
      puVar5 = (uint *)puVar1[5];
      if ((uint *)puVar1[5] == (uint *)0x0) {
        puVar5 = (uint *)(puVar1 + 3);
      }
      iVar3 = *(int *)(puVar1 + 6);
      iVar4 = (int)uVar19;
      lVar20 = (longlong)iVar4;
      uVar17 = puVar5[lVar20] & uVar7;
      if (uVar17 == 0) {
        iVar11 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar11 = iVar3 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar14 = iVar14 + 0x20;
        iVar12 = iVar11;
        if (iVar11 < iVar4) {
          iVar12 = iVar4;
        }
        if (iVar4 < iVar11) {
          lVar13 = 0;
          do {
            uVar17 = puVar5[lVar20 + lVar13 + 1];
            if (uVar17 != 0) {
              uVar19 = (ulonglong)(iVar4 + (int)lVar13 + 1);
              uVar7 = 0xffffffff;
              goto LAB_1403cc3d0;
            }
            iVar14 = iVar14 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar12 - lVar20 != lVar13);
          uVar7 = 0xffffffff;
          iVar4 = iVar12;
        }
        uVar19 = (ulonglong)(iVar4 + 1);
        iVar4 = iVar3;
      }
      else {
LAB_1403cc3d0:
        uVar15 = (ulonglong)(-uVar17 & uVar17);
        uVar2 = uVar15 * 2 + 1;
        lVar20 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        iVar4 = (iVar14 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar4) {
          iVar4 = iVar3;
        }
      }
    } while (iVar4 != iVar10);
  }
LAB_1403cc21d:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403cc47c FUN_1403cc47c body=274 status=ok
// SIG undefined FUN_1403cc47c(void)

void FUN_1403cc47c(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar2 = *param_1;
  lVar9 = (longlong)param_2 * 0x60;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar8 = (longlong)*(int *)(lVar2 + 0x5c + lVar9);
  iVar6 = *(int *)((longlong)plVar4 + lVar8 * 4);
  if (iVar6 == param_2) {
    piVar7 = (int *)((longlong)plVar4 + lVar8 * 4);
  }
  else {
    do {
      piVar7 = (int *)(lVar2 + (longlong)iVar6 * 0x60 + 0x58);
      iVar6 = *piVar7;
    } while (iVar6 != param_2);
  }
  *piVar7 = *(int *)(lVar2 + lVar9 + 0x58);
  lVar2 = *param_1;
  *(undefined4 *)(lVar2 + 0x50 + lVar9) = 0;
  if (*(longlong *)(lVar2 + 0x48 + lVar9) != 0) {
    FUN_1400020a8();
  }
  FUN_140dc7a18(lVar2 + lVar9 + 8);
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x60) = param_2;
  }
  *(undefined4 *)(lVar2 + lVar9) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + lVar9 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1403cc58e FUN_1403cc58e body=55 status=ok
// SIG undefined FUN_1403cc58e(void)

void FUN_1403cc58e(longlong *param_1)

{
  FUN_1403cc5c6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1403cc5c6 FUN_1403cc5c6 body=123 status=ok
// SIG undefined FUN_1403cc5c6(void)

void FUN_1403cc5c6(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1403cc642 FUN_1403cc642 body=124 status=ok
// SIG undefined FUN_1403cc642(void)

void FUN_1403cc642(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x60) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60) = 0xffffffff;
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60 + 4) = uVar4;
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



// FUNCTION 1403cc6be FUN_1403cc6be body=189 status=ok
// SIG undefined FUN_1403cc6be(void)

void FUN_1403cc6be(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [36];
  int local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = (longlong *)(param_1 + 0x230);
  local_30 = param_2;
  FUN_1403cc940(plVar2,&local_34);
  if ((longlong)local_34 != -1) {
    lVar3 = (longlong)local_34 * 0x78 + *plVar2;
    if ((longlong)*(int *)(param_3 + 8) != 0) {
      lVar4 = (longlong)*(int *)(param_3 + 8) << 3;
      do {
        cVar1 = FUN_1403cc77c();
        if (cVar1 == '\0') {
          FUN_147bd790a();
        }
        lVar4 = lVar4 + -8;
      } while (lVar4 != 0);
    }
    if ((*(int *)(lVar3 + 0x10) == *(int *)(lVar3 + 0x3c)) && (*(int *)(lVar3 + 0x60) == 0)) {
      FUN_1403cca3c(plVar2,local_34);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403cc77c FUN_1403cc77c body=114 status=ok
// SIG undefined FUN_1403cc77c(void)

bool FUN_1403cc77c(undefined8 param_1,longlong param_2)

{
  short *psVar1;
  longlong *plVar2;
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar2 = (longlong *)(param_2 + 8);
  FUN_1403cc7f0(plVar2,&local_1c);
  if ((longlong)local_1c != -1) {
    psVar1 = (short *)(*plVar2 + 8 + (longlong)local_1c * 0x14);
    *psVar1 = *psVar1 + -1;
    if (*psVar1 == 0) {
      FUN_1403cc85a(plVar2,local_1c);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_1c != -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403cc7f0 FUN_1403cc7f0 body=106 status=ok
// SIG undefined FUN_1403cc7f0(void)

void FUN_1403cc7f0(longlong *param_1,int *param_2,uint *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    (ulonglong)((int)param_1[9] - 1U & (param_3[1] ^ *param_3)) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2;
        if ((*(uint *)(lVar1 + lVar4 * 0x14) == *param_3) &&
           (*(uint *)(lVar1 + 4 + lVar4 * 0x14) == param_3[1])) goto LAB_1403cc856;
        iVar2 = *(int *)(lVar1 + lVar4 * 0x14 + 0xc);
      } while (iVar2 != -1);
    }
  }
  iVar2 = -1;
LAB_1403cc856:
  *param_2 = iVar2;
  return;
}



// FUNCTION 1403cc85a FUN_1403cc85a body=91 status=ok
// SIG undefined FUN_1403cc85a(void)

void FUN_1403cc85a(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar1 = *param_1 + (longlong)param_2 * 0x14;
  lVar5 = (longlong)*(int *)(lVar1 + 0x10);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x14 + 0xc);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0xc);
  FUN_1403cc8b6(param_1,param_2,1);
  return;
}



// FUNCTION 1403cc8b6 FUN_1403cc8b6 body=138 status=ok
// SIG undefined FUN_1403cc8b6(void)

void FUN_1403cc8b6(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x14 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x14) = param_2;
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
      puVar7 = puVar7 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1403cc940 FUN_1403cc940 body=252 status=ok
// SIG undefined FUN_1403cc940(void)

void FUN_1403cc940(longlong *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = param_3[1];
    uVar3 = uVar1 >> 0xd ^ *param_3 - uVar1;
    uVar6 = uVar3 << 8 ^ (-0x61c88647 - uVar1) - uVar3;
    uVar8 = uVar6 >> 0xd ^ (uVar1 - uVar3) - uVar6;
    uVar3 = uVar8 >> 0xc ^ (uVar3 - uVar6) - uVar8;
    uVar6 = uVar3 << 0x10 ^ (uVar6 - uVar8) - uVar3;
    uVar8 = uVar6 >> 5 ^ (uVar8 - uVar3) - uVar6;
    uVar9 = uVar8 >> 3 ^ (uVar3 - uVar6) - uVar8;
    uVar3 = uVar9 << 10 ^ (uVar6 - uVar8) - uVar9;
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar5 +
                    (ulonglong)((int)param_1[9] - 1U & (uVar3 >> 0xf ^ uVar8 - (uVar9 + uVar3))) * 4
                    );
    if (iVar4 != -1) {
      lVar2 = *param_1;
      do {
        lVar7 = (longlong)iVar4 * 0x78;
        if ((*(int *)(lVar2 + lVar7) == *param_3) && (*(uint *)(lVar2 + 4 + lVar7) == uVar1))
        goto LAB_1403cca37;
        iVar4 = *(int *)(lVar7 + lVar2 + 0x70);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_1403cca37:
  *param_2 = iVar4;
  return;
}



// FUNCTION 1403cca3c FUN_1403cca3c body=172 status=ok
// SIG undefined FUN_1403cca3c(void)

void FUN_1403cca3c(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  int *piVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x78;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x74 + lVar2);
  iVar3 = *(int *)((longlong)plVar4 + lVar6 * 4);
  if (iVar3 == param_2) {
    piVar5 = (int *)((longlong)plVar4 + lVar6 * 4);
  }
  else {
    do {
      piVar5 = (int *)(lVar1 + (longlong)iVar3 * 0x78 + 0x70);
      iVar3 = *piVar5;
    } while (iVar3 != param_2);
  }
  *piVar5 = *(int *)(lVar1 + lVar2 + 0x70);
  lVar1 = *param_1 + lVar2;
  if (*(longlong *)(*param_1 + 0x58 + lVar2) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(lVar1 + 0x50) = 0;
  if (*(longlong *)(lVar1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_1403ccae8(lVar1 + 8);
  FUN_1403ccb9a(param_1,param_2,1);
  return;
}



// FUNCTION 1403ccae8 FUN_1403ccae8 body=55 status=ok
// SIG undefined FUN_1403ccae8(void)

void FUN_1403ccae8(longlong *param_1)

{
  FUN_1403ccb20(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1403ccb20 FUN_1403ccb20 body=121 status=ok
// SIG undefined FUN_1403ccb20(void)

void FUN_1403ccb20(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1401ad22e(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1403ccb9a FUN_1403ccb9a body=136 status=ok
// SIG undefined FUN_1403ccb9a(void)

void FUN_1403ccb9a(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x78 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x78) = param_2;
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
      puVar7 = puVar7 + 0x1e;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1403ccc22 FUN_1403ccc22 body=40 status=ok
// SIG undefined FUN_1403ccc22(void)

undefined8 FUN_1403ccc22(undefined8 param_1,int param_2)

{
  FUN_1403ccc4a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1403ccc4a FUN_1403ccc4a body=1005 status=ok
// SIG undefined FUN_1403ccc4a(void)

void FUN_1403ccc4a(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14a5d7590;
  param_1[5] = &PTR_FUN_14a5d7830;
  param_1[6] = &PTR_FUN_14a5d7870;
  if (param_1[0x2b] != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb0c040) {
      FUN_144b3d300(&DAT_14cb0c040);
      if (DAT_14cb0c040 == -1) {
        FUN_145e17f72(&DAT_14cb0bff0);
        atexit(FUN_14374ca90);
        _Init_thread_footer(&DAT_14cb0c040);
      }
    }
    (**(code **)(DAT_14cb0bff0 + 0x10))(&DAT_14cb0bff0,param_1[0x2b]);
    param_1[0x2b] = 0;
  }
  if (param_1[0x7b] != 0) {
    FUN_1400020a8();
  }
  FUN_1403cd114(param_1[0x77],*(undefined4 *)(param_1 + 0x78));
  if (param_1[0x77] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x75] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x73] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x72) = 0;
  if (param_1[0x71] != 0) {
    FUN_1400020a8();
  }
  FUN_1403cd038(param_1 + 0x69);
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (param_1[0x67] != 0) {
    FUN_1400020a8();
  }
  FUN_1403cd038(param_1 + 0x5f);
  FUN_14049b4d4(param_1 + 0x5e,param_1[0x5e]);
  if (param_1[0x5b] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x53],*(undefined4 *)(param_1 + 0x54));
  if (param_1[0x53] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x4d],*(undefined4 *)(param_1 + 0x4e));
  if (param_1[0x4d] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x4a],*(undefined4 *)(param_1 + 0x4b));
  if (param_1[0x4a] != 0) {
    FUN_1400020a8();
  }
  puVar2 = (undefined8 *)param_1[0x41];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  FUN_1403cd0ec(param_1[0x33],*(undefined4 *)(param_1 + 0x34));
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1403cd038 FUN_1403cd038 body=55 status=ok
// SIG undefined FUN_1403cd038(void)

void FUN_1403cd038(longlong *param_1)

{
  FUN_1403cd070(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1403cd070 FUN_1403cd070 body=123 status=ok
// SIG undefined FUN_1403cd070(void)

void FUN_1403cd070(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14474875a(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1403cd0ec FUN_1403cd0ec body=40 status=ok
// SIG undefined FUN_1403cd0ec(void)

void FUN_1403cd0ec(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_147b91370(param_1);
    param_1 = param_1 + 0x28;
  }
  return;
}



// FUNCTION 1403cd114 FUN_1403cd114 body=49 status=ok
// SIG undefined FUN_1403cd114(void)

void FUN_1403cd114(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1403cd145 FUN_1403cd145 body=432 status=ok
// SIG undefined FUN_1403cd145(void)

void FUN_1403cd145(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 *puVar8;
  undefined1 auStack_f8 [32];
  undefined1 *local_d8;
  uint local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78 [64];
  undefined1 *local_38;
  uint local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_38 = (undefined1 *)0x0;
  local_2c = 4;
  uVar3 = *(uint *)(param_2 + 1);
  local_30 = uVar3;
  if (4 < uVar3) {
    FUN_1472e11f4(local_78);
    uVar3 = *(uint *)(param_2 + 1);
  }
  if ((int)uVar3 < 1) {
    iVar4 = 0;
  }
  else {
    lVar5 = 8;
    lVar6 = 0x3100;
    lVar7 = 0;
    do {
      lVar2 = *param_2;
      puVar8 = local_38;
      if (local_38 == (undefined1 *)0x0) {
        puVar8 = local_78;
      }
      *(undefined8 *)(puVar8 + lVar5 + -8) = *(undefined8 *)(lVar2 + -8 + lVar6);
      *(undefined8 *)(puVar8 + lVar5) = *(undefined8 *)(lVar2 + lVar6);
      lVar7 = lVar7 + 1;
      lVar5 = lVar5 + 0x10;
      lVar6 = lVar6 + 0x13c10;
    } while (lVar7 < (int)param_2[1]);
    iVar4 = 0;
    if ((0 < (int)param_2[1]) && (iVar4 = 0, *(longlong *)(*param_2 + 8) != 0)) {
      iVar4 = *(int *)(*(longlong *)(*param_2 + 8) + 0x11c);
    }
  }
  uStack_80 = 0;
  local_88 = 0;
  uStack_90 = 0;
  local_98 = 0;
  uStack_a0 = 0;
  local_a8 = 0;
  uStack_b0 = 0;
  local_b8 = 0;
  uStack_c0 = 0;
  local_c8 = 0;
  if (iVar4 < 2) {
    iVar4 = 1;
  }
  uVar1 = (ulonglong)(iVar4 - 1) * 2 + 1;
  lVar5 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
    }
  }
  local_d8 = local_38;
  if (local_38 == (undefined1 *)0x0) {
    local_d8 = local_78;
  }
  local_d0 = local_30;
  FUN_1403cd2f6(&local_c8,param_3,&local_d8,1 << ((byte)lVar5 & 0x1f));
  FUN_1403cd402(&DAT_14ca45fc0,param_1,&local_c8);
  if (local_38 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403cd2f6 FUN_1403cd2f6 body=268 status=ok
// SIG undefined FUN_1403cd2f6(void)

void FUN_1403cd2f6(longlong *param_1,undefined8 param_2,longlong *param_3,int param_4)

{
  uint uVar1;
  int *piVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  
  iVar9 = 1;
  if (1 < param_4) {
    iVar9 = param_4;
  }
  iVar8 = (int)((ulonglong)param_2 >> 0x20);
  lVar5 = (longlong)(iVar9 + iVar8 + -1) / (longlong)iVar9;
  uVar11 = (longlong)(iVar9 + (int)param_2 + -1) / (longlong)iVar9;
  *param_1 = (lVar5 << 0x20) + (uVar11 & 0xffffffff);
  *(undefined4 *)(param_1 + 1) = 0;
  *(int *)((longlong)param_1 + 0x4c) = (int)uVar11 * (int)lVar5;
  uVar1 = *(uint *)(param_3 + 1);
  if ((0 < (int)uVar1) &&
     ((piVar2 = (int *)*param_3, piVar2[2] - *piVar2 != (int)param_2 ||
      (piVar2[3] - piVar2[1] != iVar8)))) {
    uVar10 = 4;
    if (uVar1 < 4) {
      uVar10 = uVar1;
    }
    *(uint *)(param_1 + 1) = uVar10;
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
    uVar11 = 0;
    do {
      lVar5 = *param_3;
      uVar3 = *(ulonglong *)(lVar5 + uVar11);
      lVar6 = (longlong)((ulonglong)(uint)((longlong)uVar3 >> 0x3f) << 0x20 | uVar3 >> 0x20) /
              (longlong)iVar9;
      uVar3 = (longlong)((ulonglong)(uint)((int)uVar3 >> 0x1f) << 0x20 | uVar3 & 0xffffffff) /
              (longlong)iVar9;
      *(ulonglong *)((longlong)param_1 + uVar11 + 0xc) = (lVar6 << 0x20) + (uVar3 & 0xffffffff);
      uVar4 = *(undefined8 *)(lVar5 + 8 + uVar11);
      lVar5 = (longlong)((int)((ulonglong)uVar4 >> 0x20) + iVar9 + -1) / (longlong)iVar9;
      uVar7 = (longlong)((int)uVar4 + iVar9 + -1) / (longlong)iVar9;
      *(ulonglong *)((longlong)param_1 + uVar11 + 0x14) = (lVar5 << 0x20) + (uVar7 & 0xffffffff);
      *(int *)((longlong)param_1 + 0x4c) =
           *(int *)((longlong)param_1 + 0x4c) +
           ((int)lVar5 - (int)lVar6) * ((int)uVar7 - (int)uVar3);
      uVar11 = uVar11 + 0x10;
    } while (uVar10 << 4 != uVar11);
  }
  return;
}



// FUNCTION 1403cd402 FUN_1403cd402 body=686 status=ok
// SIG undefined FUN_1403cd402(void)

void FUN_1403cd402(longlong param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_d8 [32];
  wchar_t *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  char *local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined **local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined1 local_61;
  undefined4 local_60;
  int local_5c;
  undefined4 local_58;
  undefined8 local_50;
  undefined *local_48;
  longlong lStack_40;
  undefined *local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_3 + 1);
  *(undefined8 *)(param_1 + 0x10) = *param_3;
  lVar4 = 0;
  do {
    *(undefined8 *)(param_1 + 0x1c + lVar4) = *(undefined8 *)((longlong)param_3 + lVar4 + 0xc);
    *(undefined8 *)(param_1 + 0x24 + lVar4) = *(undefined8 *)((longlong)param_3 + lVar4 + 0x14);
    lVar4 = lVar4 + 0x10;
  } while (lVar4 != 0x40);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)((longlong)param_3 + 0x4c);
  local_5c = *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0x10);
  local_50 = 0;
  local_60 = 4;
  local_58 = 0x10129;
  cVar3 = FUN_1449ed2ff(&local_60,param_1 + 0x60,L"VirtualTexture_FeedbackBuffer",1);
  if (cVar3 == '\0') {
    uVar5 = *(undefined8 *)(param_1 + 0x68);
  }
  else {
    local_48 = (undefined *)0x0;
    lStack_40 = 0;
    uVar5 = FUN_14002bcc2(*(longlong *)(param_1 + 0x60) + 0x38,*(undefined8 *)(param_2 + 0x18),
                          *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x28));
    *(undefined8 *)(param_1 + 0x68) = uVar5;
  }
  FUN_140069376(param_2);
  puVar1 = (ulonglong *)(param_2 + 0x70);
  puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar7 + 0x38;
  if (*(undefined8 **)(param_2 + 0x78) < puVar6) {
    FUN_140023dd8(puVar1,0x1c8);
    puVar7 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar7 + 0x38;
  }
  *puVar1 = (ulonglong)puVar6;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e1d98) {
    FUN_144b3d300(&DAT_14c9e1d98);
    if (DAT_14c9e1d98 == -1) {
      FUN_14596f92a(&local_48);
      local_70 = 0;
      local_80 = 0;
      local_a0 = "Unknown";
      local_b0 = 0;
      uStack_a8 = 0;
      local_b8 = L"FEmptyShaderParameters";
      local_78 = 0;
      local_90 = 0x10;
      local_98 = 0x7a6;
      local_88 = &local_48;
      FUN_140b49562(&DAT_14c9e1d18,0,1);
      if (local_48 != (undefined *)0x0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143135258);
      _Init_thread_footer(&DAT_14c9e1d98);
    }
  }
  local_48 = &DAT_14ca71730;
  lStack_40 = DAT_14c9e1d60;
  if (DAT_14c9e1d60 != 0) {
    LOCK();
    *(int *)(DAT_14c9e1d60 + 8) = *(int *)(DAT_14c9e1d60 + 8) + 1;
    UNLOCK();
  }
  local_38 = &DAT_14c9e1d18;
  local_b8 = (wchar_t *)CONCAT71(local_b8._1_7_,2);
  FUN_140068f1a(puVar7,&local_61,&local_48,0x10);
  puVar7[0x37] = uVar5;
  *puVar7 = &PTR_FUN_14a337f50;
  iVar2 = *(int *)(param_2 + 0x170);
  *(uint *)(param_2 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_2 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar2 * 8) = puVar7;
  *(int *)((longlong)puVar7 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
  FUN_143204634(param_2,puVar7);
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403cd6b2 FUN_1403cd6b2 body=11470 status=ok
// SIG undefined FUN_1403cd6b2(void)

/* WARNING: Removing unreachable block (ram,0x0001403d0163) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1403cd6b2(longlong param_1,longlong ****param_2,undefined *****param_3,
                       undefined1 param_4)

{
  longlong ***ppplVar1;
  int *piVar2;
  undefined *****pppppuVar3;
  undefined ***pppuVar4;
  longlong ****pppplVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong ***ppplVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined ***pppuVar13;
  undefined ****ppppuVar14;
  int iVar15;
  char cVar16;
  int iVar17;
  ulonglong uVar18;
  longlong *****ppppplVar19;
  longlong lVar20;
  longlong ****pppplVar21;
  undefined ****ppppuVar22;
  longlong ****pppplVar23;
  longlong ****pppplVar24;
  undefined4 uVar25;
  longlong lVar26;
  uint uVar27;
  undefined *****_Dst;
  int iVar28;
  longlong *plVar29;
  undefined ****ppppuVar30;
  undefined *****pppppuVar31;
  ulonglong uVar32;
  undefined *****pppppuVar33;
  undefined ****ppppuVar34;
  ulonglong uVar35;
  bool bVar36;
  undefined1 auStack_928 [32];
  longlong *****local_908;
  undefined4 local_900;
  longlong ****local_8f0;
  undefined *****local_8e8;
  undefined *****local_8e0;
  undefined *****local_8d8;
  longlong local_8d0;
  longlong ****local_8c8;
  longlong *local_8c0;
  undefined8 local_8b8;
  undefined *****local_8b0;
  undefined *****local_8a8;
  longlong ****pppplStack_8a0;
  longlong ****local_898;
  undefined ****ppppuStack_890;
  undefined *****local_888;
  longlong ****pppplStack_880;
  undefined8 local_878;
  undefined8 uStack_870;
  undefined **local_860;
  longlong ****local_858;
  longlong ****pppplStack_850;
  longlong ****local_848;
  undefined *****local_840;
  longlong ****pppplStack_838;
  undefined *****local_820;
  undefined *****pppppuStack_818;
  longlong ****local_810;
  uint uStack_808;
  undefined4 uStack_804;
  undefined4 uStack_800;
  undefined4 uStack_7fc;
  undefined3 uStack_7f8;
  undefined4 uStack_7f5;
  undefined4 uStack_7f1;
  undefined8 local_7e8;
  longlong *local_7e0;
  undefined8 local_7d8;
  longlong *local_7d0;
  undefined1 local_7c8 [8];
  undefined ****local_7c0;
  undefined *****local_7b8;
  longlong ****pppplStack_7b0;
  longlong ****local_7a8;
  undefined ****ppppuStack_7a0;
  undefined *****local_798;
  longlong ****pppplStack_790;
  undefined8 local_788;
  undefined8 uStack_780;
  longlong *local_778;
  longlong *local_770;
  longlong *local_768;
  longlong *local_760;
  undefined8 local_758;
  longlong *local_750;
  undefined *****local_748;
  longlong ****pppplStack_740;
  undefined8 local_738;
  undefined8 uStack_730;
  undefined ***local_728;
  undefined ***local_720;
  longlong local_718;
  longlong *local_710;
  undefined **local_708;
  longlong ****local_700;
  longlong ****pppplStack_6f8;
  undefined ****local_6f0;
  undefined *****local_6e8;
  longlong ****pppplStack_6e0;
  longlong ****local_6d8;
  undefined ****ppppuStack_6d0;
  undefined *****local_6c8;
  undefined *****local_6c0;
  longlong ****local_6b8;
  uint local_6b0;
  undefined4 uStack_6ac;
  undefined4 uStack_6a8;
  undefined4 uStack_6a4;
  undefined3 uStack_6a0;
  undefined8 uStack_69d;
  longlong local_690;
  int local_688;
  longlong ****local_680;
  longlong ****pppplStack_678;
  undefined8 local_670;
  longlong *local_668;
  undefined1 local_65c;
  ulonglong uStack_658;
  undefined3 uStack_650;
  undefined5 local_64d;
  undefined3 uStack_648;
  undefined8 uStack_645;
  longlong ****local_638;
  longlong ****pppplStack_630;
  uint uStack_628;
  undefined4 uStack_624;
  undefined4 uStack_620;
  undefined4 uStack_61c;
  undefined3 uStack_618;
  undefined8 uStack_615;
  longlong ****local_608;
  longlong ****pppplStack_600;
  ulonglong uStack_5f8;
  undefined3 uStack_5f0;
  undefined5 local_5ed;
  undefined3 uStack_5e8;
  undefined8 uStack_5e5;
  longlong ****local_5d8;
  longlong ****pppplStack_5d0;
  undefined *****local_5c8;
  undefined8 uStack_5c0;
  undefined ****ppppuStack_5b8;
  undefined ****local_5b0;
  undefined *****local_5a8;
  longlong ****pppplStack_5a0;
  undefined4 local_598;
  undefined4 uStack_594;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  undefined ****local_588;
  undefined ****local_580;
  undefined ****local_578;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  undefined4 uStack_568;
  undefined4 uStack_564;
  undefined3 uStack_560;
  undefined8 uStack_55d;
  undefined4 local_518;
  undefined1 local_514;
  uint uStack_508;
  undefined4 uStack_504;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  undefined3 uStack_4f8;
  undefined8 uStack_4f5;
  longlong ****local_4e8;
  longlong ****pppplStack_4e0;
  undefined8 uStack_4d8;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined3 uStack_4c8;
  undefined8 uStack_4c5;
  longlong ****local_4b8;
  undefined ****ppppuStack_4b0;
  longlong ***local_4a8;
  longlong ***local_4a0 [7];
  undefined ***local_468 [29];
  undefined ****local_380;
  ulonglong local_378;
  undefined1 local_370;
  undefined8 local_368;
  longlong *plStack_360;
  longlong local_358;
  ulonglong uStack_350;
  longlong ****local_348;
  longlong ***ppplStack_340;
  longlong ***local_338;
  longlong ***ppplStack_330;
  longlong ***local_328;
  longlong ***ppplStack_320;
  longlong ***local_318;
  undefined ****local_310;
  undefined *****local_308;
  undefined *****local_300;
  longlong ****pppplStack_2f8;
  char local_2f0;
  undefined4 local_298;
  undefined1 local_294;
  longlong ****local_288;
  undefined8 uStack_280;
  longlong ****pppplStack_278;
  longlong ****pppplStack_270;
  undefined *****local_268;
  longlong ****pppplStack_260;
  longlong ****local_258;
  undefined ****ppppuStack_250;
  undefined *****local_248;
  undefined *****local_240;
  longlong ****local_238;
  ulonglong local_230;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined3 uStack_220;
  undefined8 uStack_21d;
  undefined *****local_208;
  longlong ****pppplStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  longlong *local_1d0;
  longlong *local_1c8;
  undefined *****local_1c0;
  longlong ****pppplStack_1b8;
  char local_1b0;
  undefined *****local_1a8;
  longlong ****pppplStack_1a0;
  longlong ****pppplStack_198;
  longlong ****pppplStack_190;
  undefined *****local_188;
  longlong ****pppplStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined *****local_168;
  undefined *****pppppuStack_160;
  longlong ****local_158;
  uint local_150;
  undefined4 uStack_14c;
  char local_148;
  undefined2 uStack_147;
  undefined4 local_145;
  undefined1 uStack_141;
  undefined3 uStack_140;
  undefined8 uStack_13d;
  undefined8 local_130;
  longlong *local_128;
  longlong ****local_e8;
  undefined8 uStack_e0;
  longlong ****pppplStack_d8;
  longlong ****local_d0;
  undefined *****local_c8;
  longlong ****pppplStack_c0;
  longlong ****local_b8;
  undefined ****ppppuStack_b0;
  undefined *****local_a8;
  undefined *****local_a0;
  longlong ****pppplStack_98;
  ulonglong local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined3 uStack_80;
  undefined8 uStack_7d;
  ulonglong local_60;
  
  local_8c8 = (longlong ****)CONCAT71(local_8c8._1_7_,param_4);
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_928;
  *(int *)(param_1 + 0x638) = *(int *)(param_1 + 0x638) + 1;
  local_4a8 = (longlong ***)CONCAT71(local_4a8._1_7_,DAT_14c96b238);
  local_380 = (undefined ****)0x0;
  local_378 = 0x400000000;
  local_370 = 0;
  local_368 = 0;
  plStack_360 = (longlong *)0x0;
  local_358 = 0;
  uStack_350 = 0;
  local_8f0 = param_2;
  FUN_1403d040a(&local_690,&local_4a8);
  FUN_1447fa2ac(0,0);
  if (local_358 != 0) {
    FUN_1400020a8();
  }
  plVar29 = plStack_360;
  if (plStack_360 != (longlong *)0x0) {
    LOCK();
    plVar11 = plStack_360 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*plStack_360)(plStack_360);
      LOCK();
      piVar2 = (int *)((longlong)plVar29 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar29 + 0x10))(plVar29);
      }
    }
  }
  ppppuVar22 = local_380;
  if (local_380 == (undefined ****)0x0) {
    ppppuVar22 = (undefined ****)local_4a0;
  }
  FUN_1447157bd(ppppuVar22,local_378 & 0xffffffff);
  if (local_380 != (undefined ****)0x0) {
    FUN_1400020a8();
  }
  if (*(int *)(local_8f0 + 0x26) < 1) {
    local_6f0 = param_3[3];
    local_700 = (longlong ****)param_3[1];
    pppplStack_6f8 = (longlong ****)param_3[2];
    local_708 = &PTR_FUN_149eda650;
    local_6e8 = (undefined *****)param_3[4];
    pppplStack_6e0 = (longlong ****)param_3[5];
    local_6d8 = (longlong ****)param_3[6];
    ppppuStack_6d0 = param_3[7];
    local_6c8 = (undefined *****)param_3[8];
    local_6c0 = (undefined *****)param_3[9];
    local_6b8 = (longlong ****)param_3[10];
    if (local_6b8 != (longlong ****)0x0) {
      LOCK();
      *(int *)(local_6b8 + 1) = *(int *)(local_6b8 + 1) + 1;
      UNLOCK();
    }
    local_6b0 = *(uint *)(param_3 + 0xb);
    uStack_6ac = *(undefined4 *)((longlong)param_3 + 0x5c);
    uStack_6a8 = *(undefined4 *)(param_3 + 0xc);
    uStack_6a4 = *(undefined4 *)((longlong)param_3 + 100);
    uStack_69d = *(undefined8 *)((longlong)param_3 + 0x6b);
    uStack_6a0 = (undefined3)((ulonglong)*(undefined8 *)((longlong)param_3 + 99) >> 0x28);
  }
  else {
    pppplVar23 = local_8f0 + 1;
    if ((longlong ****)local_8f0[0x25] != (longlong ****)0x0) {
      pppplVar23 = (longlong ****)local_8f0[0x25];
    }
    local_4a8 = pppplVar23[7];
    ppplVar9 = pppplVar23[8];
    if (ppplVar9 == (longlong ***)0x0) {
      local_4a0[0] = (longlong ***)0x0;
      FUN_1403d09a4(param_1,&local_708,param_3);
    }
    else {
      LOCK();
      *(int *)(ppplVar9 + 1) = *(int *)(ppplVar9 + 1) + 1;
      UNLOCK();
      LOCK();
      *(int *)(ppplVar9 + 1) = *(int *)(ppplVar9 + 1) + 1;
      UNLOCK();
      local_4a0[0] = ppplVar9;
      FUN_1403d09a4(param_1,&local_708,param_3);
      if (ppplVar9 != (longlong ***)0x0) {
        LOCK();
        ppplVar1 = ppplVar9 + 1;
        *(int *)ppplVar1 = *(int *)ppplVar1 + -1;
        UNLOCK();
        if (*(int *)ppplVar1 == 0) {
          (*(code *)**ppplVar9)(ppplVar9);
          LOCK();
          piVar2 = (int *)((longlong)ppplVar9 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (*(code *)(*ppplVar9)[2])(ppplVar9);
          }
        }
      }
      LOCK();
      ppplVar1 = ppplVar9 + 1;
      *(int *)ppplVar1 = *(int *)ppplVar1 + -1;
      UNLOCK();
      if (*(int *)ppplVar1 == 0) {
        (*(code *)**ppplVar9)(ppplVar9);
        LOCK();
        piVar2 = (int *)((longlong)ppplVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*ppplVar9)[2])(ppplVar9);
        }
      }
    }
  }
  iVar28 = *(int *)((longlong)param_3 + 0xc);
  if (((longlong)iVar28 < 0) || (*(int *)(param_1 + 0x318) <= iVar28)) {
LAB_1403cf462:
    FUN_141370954(param_1,&local_718,iVar28,0);
  }
  else {
    lVar20 = (longlong)iVar28 * 0x10;
    lVar26 = *(longlong *)(*(longlong *)(param_1 + 0x310) + lVar20);
    plVar29 = *(longlong **)(*(longlong *)(param_1 + 0x310) + 8 + lVar20);
    if (plVar29 == (longlong *)0x0) {
      if (lVar26 == 0) goto LAB_1403cf462;
      local_710 = (longlong *)0x0;
      local_718 = lVar26;
    }
    else {
      LOCK();
      *(int *)(plVar29 + 1) = (int)plVar29[1] + 1;
      UNLOCK();
      if (lVar26 != 0) {
        LOCK();
        *(int *)(plVar29 + 1) = (int)plVar29[1] + 1;
        UNLOCK();
        local_718 = lVar26;
        local_710 = plVar29;
      }
      LOCK();
      plVar11 = plVar29 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*plVar29)(plVar29);
        LOCK();
        piVar2 = (int *)((longlong)plVar29 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar29 + 0x10))(plVar29);
        }
      }
      if (lVar26 == 0) goto LAB_1403cf462;
    }
  }
  FUN_1403d04d0(local_718,param_3);
  local_8e8 = param_3;
  local_8d0 = param_1;
  if (*(longlong *)(local_718 + 0x1e8) == 0 && (char)local_8c8 == '\0') {
    FUN_1403d1618(local_718,&local_4a8,param_3,*(undefined4 *)(param_1 + 0x1a8));
    lVar26 = (longlong)(int)local_378;
    if (0 < lVar26) {
      ppppuVar22 = local_380;
      if (local_380 == (undefined ****)0x0) {
        ppppuVar22 = (undefined ****)local_4a0;
      }
      local_728 = ppppuVar22[lVar26 * 9 + -2];
      pppuVar13 = ppppuVar22[lVar26 * 9 + -1];
      if (pppuVar13 == (undefined ***)0x0) {
        local_720 = (undefined ***)0x0;
      }
      else {
        LOCK();
        *(int *)(pppuVar13 + 1) = *(int *)(pppuVar13 + 1) + 1;
        UNLOCK();
        LOCK();
        *(int *)(pppuVar13 + 1) = *(int *)(pppuVar13 + 1) + 1;
        UNLOCK();
        local_720 = pppuVar13;
      }
      FUN_1403d1fa2(&local_4a8,&local_1a8,&local_728);
      FUN_140f0b848();
      pppppuVar33 = DAT_14c96b100;
      ppppuVar22 = DAT_14c96b0f8;
      local_348 = _DAT_14c96b0c0;
      ppplStack_340 = (longlong ***)uRam000000014c96b0c8;
      local_338 = (longlong ***)_DAT_14c96b0d0;
      ppplStack_330 = ppplRam000000014c96b0d8;
      local_328 = (longlong ***)_DAT_14c96b0e0;
      ppplStack_320 = ppplRam000000014c96b0e8;
      local_318 = DAT_14c96b0f0;
      local_310 = DAT_14c96b0f8;
      local_308 = DAT_14c96b100;
      if (DAT_14c96b100 == (undefined *****)0x0) {
        pppppuVar31 = (undefined *****)0x0;
      }
      else {
        LOCK();
        *(int *)(DAT_14c96b100 + 1) = *(int *)(DAT_14c96b100 + 1) + 1;
        UNLOCK();
        pppppuVar31 = pppppuVar33;
      }
      ppppplVar19 = &local_348;
      if (local_148 != '\0') {
        ppppplVar19 = (longlong *****)&local_1a8;
      }
      local_2f0 = 0;
      local_288 = *ppppplVar19;
      uStack_280 = ppppplVar19[1];
      pppplStack_278 = ppppplVar19[2];
      pppplStack_270 = ppppplVar19[3];
      local_268 = (undefined *****)ppppplVar19[4];
      pppplStack_260 = ppppplVar19[5];
      local_258 = ppppplVar19[6];
      if (local_148 != '\0') {
        pppppuVar31 = local_168;
        ppppuVar22 = (undefined ****)CONCAT44(uStack_16c,uStack_170);
      }
      if (pppppuVar31 != (undefined *****)0x0) {
        LOCK();
        *(int *)(pppppuVar31 + 1) = *(int *)(pppppuVar31 + 1) + 1;
        UNLOCK();
      }
      uVar27 = local_150;
      if (local_148 == '\0') {
        uVar27 = 0;
      }
      if ((uVar27 & 1) != 0) {
        ppppplVar19 = &local_348;
        if (local_148 != '\0') {
          ppppplVar19 = (longlong *****)&local_1a8;
        }
        local_208 = (undefined *****)ppppplVar19[9];
        pppplStack_200 = ppppplVar19[10];
      }
      local_2f0 = '\0';
      if (pppppuVar33 != (undefined *****)0x0) {
        LOCK();
        pppppuVar3 = pppppuVar33 + 1;
        *(int *)pppppuVar3 = *(int *)pppppuVar3 + -1;
        UNLOCK();
        if (*(int *)pppppuVar3 == 0) {
          (*(code *)**pppppuVar33)(pppppuVar33);
          LOCK();
          piVar2 = (int *)((longlong)pppppuVar33 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (*(code *)(*pppppuVar33)[2])(pppppuVar33);
          }
        }
      }
      pppppuVar33 = local_168;
      if (local_148 == '\x01') {
        if ((char)local_150 == '\x01') {
          local_150 = local_150 & 0xffffff00;
        }
        if (local_168 != (undefined *****)0x0) {
          LOCK();
          pppppuVar3 = local_168 + 1;
          *(int *)pppppuVar3 = *(int *)pppppuVar3 + -1;
          UNLOCK();
          if (*(int *)pppppuVar3 == 0) {
            (*(code *)**local_168)(local_168);
            LOCK();
            piVar2 = (int *)((longlong)pppppuVar33 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (*(code *)(*pppppuVar33)[2])(pppppuVar33);
            }
          }
        }
        local_148 = '\0';
      }
      local_8e0 = (undefined *****)CONCAT44(local_8e0._4_4_,uVar27);
      if (pppuVar13 != (undefined ***)0x0) {
        LOCK();
        pppuVar4 = pppuVar13 + 1;
        *(int *)pppuVar4 = *(int *)pppuVar4 + -1;
        UNLOCK();
        if (*(int *)pppuVar4 == 0) {
          (*(code *)**pppuVar13)(pppuVar13);
          LOCK();
          piVar2 = (int *)((longlong)pppuVar13 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (*(code *)(*pppuVar13)[2])(pppuVar13);
          }
        }
      }
      FUN_1403d040a(&local_1a8,&local_4a8);
      FUN_1400e7f6e(&local_690,&local_1a8);
      pppplVar23 = pppplStack_678;
      local_680 = pppplStack_198;
      pppplStack_678 = pppplStack_190;
      pppplStack_198 = (longlong ****)0x0;
      pppplStack_190 = (longlong ****)0x0;
      if (pppplVar23 != (longlong ****)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)pppplVar23 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*pppplVar23)[2])();
        }
        if (pppplStack_190 != (longlong ****)0x0) {
          LOCK();
          piVar2 = (int *)((longlong)pppplStack_190 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (*(code *)(*pppplStack_190)[2])();
          }
        }
      }
      FUN_1447de57f(local_1a8);
      pppppuVar33 = local_8e8;
      if (local_1a8 != (undefined *****)0x0) {
        FUN_1400020a8();
      }
      local_4b8 = (longlong ****)pppppuVar33[1];
      ppppuStack_4b0 = pppppuVar33[2];
      local_748 = (undefined *****)pppppuVar33[4];
      pppplStack_740 = (longlong ****)pppppuVar33[5];
      local_738 = pppppuVar33[6];
      uStack_730 = pppppuVar33[7];
      ppppuVar30 = pppppuVar33[8];
      ppppuVar34 = pppppuVar33[9];
      ppppuVar14 = pppppuVar33[10];
      if (ppppuVar14 != (undefined ****)0x0) {
        LOCK();
        *(int *)(ppppuVar14 + 1) = *(int *)(ppppuVar14 + 1) + 1;
        UNLOCK();
      }
      uStack_4d8 = pppppuVar33[0xb];
      uStack_4c5 = *(undefined8 *)((longlong)pppppuVar33 + 0x6b);
      uStack_4c8 = (undefined3)((ulonglong)*(undefined8 *)((longlong)pppppuVar33 + 99) >> 0x28);
      uStack_4d0 = SUB84(pppppuVar33[0xc],0);
      uStack_4cc = (undefined4)((ulonglong)pppppuVar33[0xc] >> 0x20);
      local_348 = (longlong ****)((ulonglong)local_348 & 0xffffffffffffff00);
      local_328 = (longlong ***)((ulonglong)local_328 & 0xffffffffffffff00);
      ppplStack_340 = (longlong ***)0x0;
      local_338 = (longlong ***)0x0;
      memset(&ppplStack_320,0,0x88);
      local_298 = 0x20702;
      local_294 = 0;
      local_b8 = local_258;
      local_c8 = local_268;
      pppplStack_c0 = pppplStack_260;
      pppplStack_d8 = pppplStack_278;
      local_d0 = pppplStack_270;
      local_e8 = local_288;
      uStack_e0 = uStack_280;
      if (pppppuVar31 != (undefined *****)0x0) {
        LOCK();
        *(int *)(pppppuVar31 + 1) = *(int *)(pppppuVar31 + 1) + 1;
        UNLOCK();
      }
      local_90 = CONCAT71(local_90._1_7_,(char)local_8e0);
      if (((ulonglong)local_8e0 & 1) == 0) {
        local_5a8 = local_748;
        pppplStack_5a0 = pppplStack_740;
        if (ppppuVar14 != (undefined ****)0x0) {
          LOCK();
          *(int *)(ppppuVar14 + 1) = *(int *)(ppppuVar14 + 1) + 1;
          UNLOCK();
        }
      }
      else {
        local_a0 = local_208;
        pppplStack_98 = pppplStack_200;
        local_5a8 = local_208;
        pppplStack_5a0 = pppplStack_200;
        if (ppppuVar14 != (undefined ****)0x0) {
          LOCK();
          *(int *)(ppppuVar14 + 1) = *(int *)(ppppuVar14 + 1) + 1;
          UNLOCK();
        }
      }
      uStack_560 = uStack_4c8;
      local_5b0 = (undefined ****)&local_4a8;
      uStack_55d = uStack_4c5;
      uStack_564 = uStack_4cc;
      uStack_568 = uStack_4d0;
      uStack_56c = uStack_4d8._4_4_;
      uStack_570 = (undefined4)uStack_4d8;
      uStack_58c = uStack_730._4_4_;
      uStack_590 = (undefined4)uStack_730;
      uStack_594 = local_738._4_4_;
      local_598 = (undefined4)local_738;
      ppppuStack_5b8 = ppppuStack_4b0;
      uStack_5c0 = local_4b8;
      local_5c8 = (undefined *****)&PTR_FUN_149eda650;
      local_588 = ppppuVar30;
      local_580 = ppppuVar34;
      local_578 = ppppuVar14;
      ppppuStack_b0 = ppppuVar22;
      local_a8 = pppppuVar31;
      (*(code *)(*ppppuVar22)[0x17])(ppppuVar22,&local_1a8,&local_e8,&local_5c8);
      FUN_1402c173a(&local_1a8,&ppppuStack_b0);
      FUN_1402c17c2(&local_348,&local_1a8);
      FUN_14493db24(&local_1a8);
      local_900 = uStack_5c0._4_4_;
      local_908 = (longlong *****)&local_5c8;
      FUN_1402c1d72(local_8d0,&local_4a8,&local_348,local_8f0);
      ppppuVar22 = local_578;
      local_5c8 = (undefined *****)&PTR_FUN_149eda650;
      if (local_578 != (undefined ****)0x0) {
        LOCK();
        ppppuVar30 = local_578 + 1;
        *(int *)ppppuVar30 = *(int *)ppppuVar30 + -1;
        UNLOCK();
        if (*(int *)ppppuVar30 == 0) {
          (*(code *)**local_578)(local_578);
          LOCK();
          piVar2 = (int *)((longlong)ppppuVar22 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (*(code *)(*ppppuVar22)[2])(ppppuVar22);
          }
        }
      }
      pppppuVar33 = local_a8;
      if ((char)local_90 == '\x01') {
        local_90 = local_90 & 0xffffffffffffff00;
      }
      if (local_a8 != (undefined *****)0x0) {
        LOCK();
        pppppuVar3 = local_a8 + 1;
        *(int *)pppppuVar3 = *(int *)pppppuVar3 + -1;
        UNLOCK();
        if (*(int *)pppppuVar3 == 0) {
          (*(code *)**local_a8)(local_a8);
          LOCK();
          piVar2 = (int *)((longlong)pppppuVar33 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (*(code *)(*pppppuVar33)[2])(pppppuVar33);
          }
        }
      }
      if (ppppuVar14 != (undefined ****)0x0) {
        LOCK();
        ppppuVar22 = ppppuVar14 + 1;
        *(int *)ppppuVar22 = *(int *)ppppuVar22 + -1;
        UNLOCK();
        if (*(int *)ppppuVar22 == 0) {
          (*(code *)**ppppuVar14)(ppppuVar14);
          LOCK();
          piVar2 = (int *)((longlong)ppppuVar14 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (*(code *)(*ppppuVar14)[2])(ppppuVar14);
          }
        }
      }
      FUN_14493db24(&local_348);
      param_3 = local_8e8;
      if (pppppuVar31 != (undefined *****)0x0) {
        LOCK();
        pppppuVar33 = pppppuVar31 + 1;
        *(int *)pppppuVar33 = *(int *)pppppuVar33 + -1;
        UNLOCK();
        if (*(int *)pppppuVar33 == 0) {
          (*(code *)**pppppuVar31)(pppppuVar31);
          LOCK();
          piVar2 = (int *)((longlong)pppppuVar31 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          param_3 = local_8e8;
          if (*piVar2 == 0) {
            (*(code *)(*pppppuVar31)[2])(pppppuVar31);
            param_3 = local_8e8;
          }
        }
      }
    }
    FUN_1447fa2ac(local_358,uStack_350 & 0xffffffff);
    if (local_358 != 0) {
      FUN_1400020a8();
    }
    plVar29 = plStack_360;
    if (plStack_360 != (longlong *)0x0) {
      LOCK();
      plVar11 = plStack_360 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*plStack_360)(plStack_360);
        LOCK();
        piVar2 = (int *)((longlong)plVar29 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar29 + 0x10))(plVar29);
        }
      }
    }
    ppppuVar22 = local_380;
    if (local_380 == (undefined ****)0x0) {
      ppppuVar22 = (undefined ****)local_4a0;
    }
    FUN_1447157bd(ppppuVar22,local_378 & 0xffffffff);
    if (local_380 != (undefined ****)0x0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(local_718 + 0x1e8) == 0) goto LAB_1403cd8c9;
  }
  else {
LAB_1403cd8c9:
    if (*(int *)(local_718 + 0x210) != *(int *)(local_718 + 0x23c)) {
      lVar26 = local_718 + 0x240;
      if (*(longlong *)(local_718 + 0x248) != 0) {
        lVar26 = *(longlong *)(local_718 + 0x248);
      }
      iVar28 = *(int *)(lVar26 + (ulonglong)
                                 (*(int *)(local_718 + 0x250) - 1U & *(uint *)(param_3 + 0xb)) * 4);
      if (iVar28 != -1) {
        do {
          lVar26 = *(longlong *)(local_718 + 0x208) + (longlong)iVar28 * 0x30;
          if (*(uint *)(*(longlong *)(local_718 + 0x208) + (longlong)iVar28 * 0x30) ==
              *(uint *)(param_3 + 0xb)) {
            if (lVar26 != 0) {
              local_1a8 = (undefined *****)0x0;
              iVar28 = *(int *)(lVar26 + 0x10);
              uVar10 = *(undefined8 *)(lVar26 + 8);
              pppplStack_1a0 = (longlong ****)CONCAT44(pppplStack_1a0._4_4_,iVar28);
              if (iVar28 == 0) {
                pppplStack_1a0 = (longlong ****)0x0;
              }
              else {
                FUN_1402d86b0(&local_1a8,iVar28,0);
                FUN_14494310f(local_1a8,uVar10,iVar28);
              }
              pppplStack_198 = *(longlong *****)(lVar26 + 0x18);
              pppplStack_190 = *(longlong *****)(lVar26 + 0x20);
              if (pppplStack_190 != (longlong ****)0x0) {
                LOCK();
                *(int *)((longlong)pppplStack_190 + 0xc) =
                     *(int *)((longlong)pppplStack_190 + 0xc) + 1;
                UNLOCK();
              }
              goto LAB_1403cd99d;
            }
            break;
          }
          iVar28 = *(int *)(lVar26 + 0x28);
        } while (iVar28 != -1);
      }
    }
    local_4a8 = (longlong ***)CONCAT71(local_4a8._1_7_,DAT_14c96b238);
    local_380 = (undefined ****)0x0;
    local_378 = 0x400000000;
    local_370 = 0;
    local_368 = 0;
    plStack_360 = (longlong *)0x0;
    local_358 = 0;
    uStack_350 = 0;
    FUN_1403d040a(&local_1a8,&local_4a8);
    FUN_1447fa21a(&local_4a8);
LAB_1403cd99d:
    FUN_1400e7f6e(&local_690,&local_1a8);
    pppplVar23 = pppplStack_678;
    local_680 = pppplStack_198;
    pppplStack_678 = pppplStack_190;
    pppplStack_198 = (longlong ****)0x0;
    pppplStack_190 = (longlong ****)0x0;
    if (pppplVar23 != (longlong ****)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)pppplVar23 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (*(code *)(*pppplVar23)[2])();
      }
      if (pppplStack_190 != (longlong ****)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)pppplStack_190 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*pppplStack_190)[2])();
        }
      }
    }
    FUN_1447de57f(local_1a8,(ulonglong)pppplStack_1a0 & 0xffffffff);
    if (local_1a8 != (undefined *****)0x0) {
      FUN_1400020a8();
    }
  }
  local_908 = (longlong *****)param_3;
  FUN_1403d06e2(local_718,&local_4a8,*(undefined4 *)(param_3 + 0xb),1);
  local_8b8 = *(undefined8 *)(local_718 + 0x1e8);
  plVar29 = *(longlong **)(local_718 + 0x1f0);
  if (plVar29 == (longlong *)0x0) {
    local_750 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar29 + 1) = (int)plVar29[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar29 + 1) = (int)plVar29[1] + 1;
    UNLOCK();
    local_750 = plVar29;
  }
  local_758 = local_8b8;
  FUN_1403d061a(&local_1a8,param_3,&local_758);
  pppplVar23 = pppplStack_678;
  if (pppplStack_678 != (longlong ****)0x0) {
    iVar28 = *(int *)(pppplStack_678 + 1);
    do {
      if (iVar28 == 0) goto LAB_1403cda97;
      LOCK();
      iVar8 = *(int *)(pppplStack_678 + 1);
      bVar36 = iVar28 == iVar8;
      if (bVar36) {
        *(int *)(pppplStack_678 + 1) = iVar28 + 1;
        iVar8 = iVar28;
      }
      iVar28 = iVar8;
      UNLOCK();
    } while (!bVar36);
    LOCK();
    pppplVar24 = pppplStack_678 + 1;
    *(int *)pppplVar24 = *(int *)pppplVar24 + -1;
    UNLOCK();
    if (*(int *)pppplVar24 == 0) {
      (*(code *)**pppplStack_678)(pppplStack_678);
      LOCK();
      piVar2 = (int *)((longlong)pppplVar23 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (*(code *)(*pppplVar23)[2])(pppplVar23);
      }
    }
  }
LAB_1403cda97:
  local_8c0 = plVar29;
  if (0 < local_688) {
    iVar28 = local_688;
    do {
      iVar8 = iVar28;
      if (local_688 <= iVar28) {
        iVar8 = local_688;
      }
      iVar28 = iVar8 + -1;
      if (0 < local_688) {
        plVar29 = *(longlong **)(local_690 + 8 + (longlong)iVar28 * 0x10);
        if (plVar29 != (longlong *)0x0) {
          iVar17 = (int)plVar29[1];
          do {
            if (iVar17 == 0) goto LAB_1403cdb8a;
            LOCK();
            iVar15 = (int)plVar29[1];
            bVar36 = iVar17 == iVar15;
            if (bVar36) {
              *(int *)(plVar29 + 1) = iVar17 + 1;
              iVar15 = iVar17;
            }
            iVar17 = iVar15;
            UNLOCK();
          } while (!bVar36);
          plVar11 = *(longlong **)(local_690 + (longlong)iVar28 * 0x10);
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar29 + 1) = (int)plVar29[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(plVar29 + 1) = (int)plVar29[1] + 1;
            UNLOCK();
            local_768 = plVar11;
            local_760 = plVar29;
            FUN_14497fa56(local_8f0,&local_348,&local_768);
            LOCK();
            plVar12 = plVar29 + 1;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)*plVar12 == 0) {
              (**(code **)*plVar29)(plVar29);
              LOCK();
              piVar2 = (int *)((longlong)plVar29 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar29 + 0x10))(plVar29);
              }
            }
            if ((char)local_300 == '\0') {
              if ((longlong)*(int *)(local_8d0 + 0x318) != 0) {
                pppppuVar33 = *(undefined ******)(local_8d0 + 0x310);
                pppppuVar31 = (undefined *****)((longlong)*(int *)(local_8d0 + 0x318) << 4);
                uVar35 = 0;
                do {
                  if ((*(longlong *)((longlong)pppppuVar33 + uVar35) != 0) &&
                     (*(int *)(*(longlong *)((longlong)pppppuVar33 + uVar35) + 0x18) !=
                      *(int *)((longlong)local_8e8 + 0xc))) {
                    LOCK();
                    *(int *)(plVar29 + 1) = (int)plVar29[1] + 1;
                    UNLOCK();
                    local_8e0 = pppppuVar31;
                    local_8d8 = pppppuVar33;
                    local_778 = plVar11;
                    local_770 = plVar29;
                    cVar16 = FUN_1469b763a();
                    pppppuVar31 = local_8e0;
                    pppppuVar33 = local_8d8;
                    if (cVar16 != '\0') goto LAB_1403cdb5e;
                  }
                  uVar35 = uVar35 + 0x10;
                } while (pppppuVar31 != (undefined *****)uVar35);
              }
              plVar12 = *(longlong **)(local_718 + 0x1e8);
              if ((plVar12 == (longlong *)0x0) ||
                 (cVar16 = (**(code **)(*plVar12 + 8))(plVar12,local_8e8), cVar16 == '\0')) {
                if (((int)local_378 < 1) || (cVar16 = FUN_1403d1f4c(&local_4a8), cVar16 != '\0')) {
                  (**(code **)(*plVar11 + 0x80))(plVar11);
                }
              }
              else {
                (**(code **)(*plVar11 + 200))(plVar11,&local_1a8);
                plVar11 = local_128;
                if (local_128 == (longlong *)0x0) {
                  local_65c = 0;
                  FUN_146947140(local_130);
                }
                else {
                  LOCK();
                  *(int *)(local_128 + 1) = (int)local_128[1] + 1;
                  UNLOCK();
                  local_65c = 0;
                  FUN_146947140(local_130);
                  LOCK();
                  plVar12 = plVar11 + 1;
                  *(int *)plVar12 = (int)*plVar12 + -1;
                  UNLOCK();
                  if ((int)*plVar12 == 0) {
                    (**(code **)*plVar11)(plVar11);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar11 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (*piVar2 == 0) {
                      (**(code **)(*plVar11 + 0x10))(plVar11);
                    }
                  }
                }
              }
            }
LAB_1403cdb5e:
            pppppuVar33 = local_308;
            if (((char)local_300 == '\x01') && (local_308 != (undefined *****)0x0)) {
              LOCK();
              pppppuVar31 = local_308 + 1;
              *(int *)pppppuVar31 = *(int *)pppppuVar31 + -1;
              UNLOCK();
              if (*(int *)pppppuVar31 == 0) {
                (*(code *)**local_308)(local_308);
                LOCK();
                piVar2 = (int *)((longlong)pppppuVar33 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (*(code *)(*pppppuVar33)[2])(pppppuVar33);
                }
              }
            }
          }
          LOCK();
          plVar11 = plVar29 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
            (**(code **)*plVar29)(plVar29);
            LOCK();
            piVar2 = (int *)((longlong)plVar29 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar29 + 0x10))(plVar29);
            }
          }
        }
      }
LAB_1403cdb8a:
    } while (1 < iVar8);
  }
  plVar29 = local_128;
  local_1a8 = (undefined *****)&PTR_FUN_149efe1e0;
  if (local_128 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_128 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*local_128)(local_128);
      LOCK();
      piVar2 = (int *)((longlong)plVar29 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar29 + 0x10))(plVar29);
      }
    }
  }
  pppplVar23 = local_158;
  local_1a8 = (undefined *****)&PTR_FUN_149eda650;
  if (local_158 != (longlong ****)0x0) {
    LOCK();
    pppplVar24 = local_158 + 1;
    *(int *)pppplVar24 = *(int *)pppplVar24 + -1;
    UNLOCK();
    if (*(int *)pppplVar24 == 0) {
      (*(code *)**local_158)(local_158);
      LOCK();
      piVar2 = (int *)((longlong)pppplVar23 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (*(code *)(*pppplVar23)[2])(pppplVar23);
      }
    }
  }
  pppplVar24 = local_6b8;
  pppplVar23 = local_8f0;
  if ((int)local_378 < 1) {
    if ((*(longlong **)(local_718 + 0x1e8) == (longlong *)0x0) ||
       (cVar16 = (**(code **)(**(longlong **)(local_718 + 0x1e8) + 8))(), cVar16 == '\0')) {
      pppplVar24 = local_6b8;
      local_608 = local_700;
      pppplStack_600 = pppplStack_6f8;
      local_888 = local_6e8;
      pppplStack_880 = pppplStack_6e0;
      local_878 = local_6d8;
      uStack_870 = ppppuStack_6d0;
      local_8e0 = local_6c8;
      local_8d8 = local_6c0;
      if (local_6b8 != (longlong ****)0x0) {
        LOCK();
        *(int *)(local_6b8 + 1) = *(int *)(local_6b8 + 1) + 1;
        UNLOCK();
      }
      uStack_618 = uStack_6a0;
      uStack_615 = uStack_69d;
      uStack_628 = local_6b0;
      uStack_624 = uStack_6ac;
      uStack_620 = uStack_6a8;
      uStack_61c = uStack_6a4;
      uVar35 = (ulonglong)*(int *)(pppplVar23 + 0x26);
      if ((longlong)uVar35 < 1) {
        ppppuVar22 = (undefined ****)0x0;
      }
      else {
        local_8c8 = pppplVar23 + 1;
        lVar26 = uVar35 * 0x48 + -8;
        lVar20 = uVar35 * 0x14 + -4;
        ppppuVar30 = (undefined ****)0x0;
        do {
          ppplVar9 = local_8f0[0x2a];
          local_2f0 = *(char *)((longlong)ppplVar9 + lVar20);
          if (local_2f0 == '\x01') {
            local_1a8 = *(undefined ******)((longlong)ppplVar9 + lVar20 + -0x10);
            pppplStack_1a0 = *(longlong *****)((longlong)ppplVar9 + lVar20 + -8);
          }
          pppplVar23 = (longlong ****)local_8f0[0x25];
          if ((longlong ****)local_8f0[0x25] == (longlong ****)0x0) {
            pppplVar23 = local_8c8;
          }
          local_318 = *(longlong ****)((longlong)pppplVar23 + lVar26 + -0x10);
          plVar29 = (longlong *)((longlong)pppplVar23 + lVar26 + -0x40);
          local_348 = (longlong ****)*plVar29;
          ppplStack_340 = (longlong ***)plVar29[1];
          plVar29 = (longlong *)((longlong)pppplVar23 + lVar26 + -0x30);
          local_338 = (longlong ***)*plVar29;
          ppplStack_330 = (longlong ***)plVar29[1];
          plVar29 = (longlong *)((longlong)pppplVar23 + lVar26 + -0x20);
          local_328 = (longlong ***)*plVar29;
          ppplStack_320 = (longlong ***)plVar29[1];
          local_310 = *(undefined *****)((longlong)pppplVar23 + lVar26 + -8);
          local_308 = *(undefined ******)((longlong)pppplVar23 + lVar26);
          if (local_308 != (undefined *****)0x0) {
            LOCK();
            *(int *)(local_308 + 1) = *(int *)(local_308 + 1) + 1;
            UNLOCK();
          }
          uStack_147 = (undefined2)((uint)uStack_620 >> 8);
          local_148 = (char)uStack_620;
          local_145._1_3_ = (undefined3)uStack_61c;
          uStack_141 = (undefined1)((uint)uStack_61c >> 0x18);
          if (local_2f0 == '\0') {
            local_188 = local_888;
            pppplStack_180 = pppplStack_880;
            if (pppplVar24 != (longlong ****)0x0) {
              LOCK();
              *(int *)(pppplVar24 + 1) = *(int *)(pppplVar24 + 1) + 1;
              UNLOCK();
            }
          }
          else {
            local_300 = local_1a8;
            pppplStack_2f8 = pppplStack_1a0;
            local_188 = local_1a8;
            pppplStack_180 = pppplStack_1a0;
            if (pppplVar24 != (longlong ****)0x0) {
              LOCK();
              *(int *)(pppplVar24 + 1) = *(int *)(pppplVar24 + 1) + 1;
              UNLOCK();
            }
          }
          local_145 = CONCAT31(local_145._1_3_,(char)((uint)uStack_620 >> 0x18));
          uStack_13d = uStack_615;
          _uStack_141 = CONCAT31(uStack_618,uStack_141);
          uStack_14c = uStack_624;
          local_150 = uStack_628;
          local_158 = pppplVar24;
          pppppuStack_160 = local_8d8;
          local_168 = local_8e0;
          uStack_16c = uStack_870._4_4_;
          uStack_170 = (undefined4)uStack_870;
          uStack_174 = local_878._4_4_;
          local_178 = (undefined4)local_878;
          pppplStack_190 = local_8f0;
          pppplStack_198 = pppplStack_600;
          pppplStack_1a0 = local_608;
          local_1a8 = (undefined *****)&PTR_FUN_149eda650;
          cVar16 = FUN_14497f9ca(&local_690,local_310);
          if (cVar16 == '\0') {
            (*(code *)(*local_310)[0xf])(local_310,&local_348,&local_1a8);
          }
          local_5c8 = (undefined *****)((ulonglong)local_5c8 & 0xffffffffffffff00);
          uStack_5c0 = (longlong ****)0x0;
          ppppuStack_5b8 = (undefined ****)0x0;
          FUN_1403d0382(&local_5c8);
          ppppuVar22 = ppppuStack_5b8;
          cVar16 = (char)local_5c8;
          if (ppppuStack_5b8 != (undefined ****)0x0) {
            LOCK();
            *(int *)(ppppuStack_5b8 + 1) = *(int *)(ppppuStack_5b8 + 1) + 1;
            UNLOCK();
          }
          if (ppppuVar30 != (undefined ****)0x0) {
            LOCK();
            ppppuVar34 = ppppuVar30 + 1;
            *(int *)ppppuVar34 = *(int *)ppppuVar34 + -1;
            UNLOCK();
            if (*(int *)ppppuVar34 == 0) {
              (*(code *)**ppppuVar30)(ppppuVar30);
              LOCK();
              piVar2 = (int *)((longlong)ppppuVar30 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (*(code *)(*ppppuVar30)[2])(ppppuVar30);
              }
            }
          }
          ppppuVar30 = ppppuStack_5b8;
          if (ppppuStack_5b8 != (undefined ****)0x0) {
            LOCK();
            ppppuVar34 = ppppuStack_5b8 + 1;
            *(int *)ppppuVar34 = *(int *)ppppuVar34 + -1;
            UNLOCK();
            if (*(int *)ppppuVar34 == 0) {
              (*(code *)**ppppuStack_5b8)(ppppuStack_5b8);
              LOCK();
              piVar2 = (int *)((longlong)ppppuVar30 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (*(code *)(*ppppuVar30)[2])(ppppuVar30);
              }
            }
          }
          pppplVar23 = local_158;
          local_1a8 = (undefined *****)&PTR_FUN_149eda650;
          if (local_158 != (longlong ****)0x0) {
            LOCK();
            pppplVar21 = local_158 + 1;
            *(int *)pppplVar21 = *(int *)pppplVar21 + -1;
            UNLOCK();
            if (*(int *)pppplVar21 == 0) {
              (*(code *)**local_158)(local_158);
              LOCK();
              piVar2 = (int *)((longlong)pppplVar23 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (*(code *)(*pppplVar23)[2])(pppplVar23);
              }
            }
          }
          pppppuVar33 = local_308;
          if (local_2f0 == '\x01') {
            local_2f0 = '\0';
          }
          if (local_308 != (undefined *****)0x0) {
            LOCK();
            pppppuVar31 = local_308 + 1;
            *(int *)pppppuVar31 = *(int *)pppppuVar31 + -1;
            UNLOCK();
            if (*(int *)pppppuVar31 == 0) {
              (*(code *)**local_308)(local_308);
              LOCK();
              piVar2 = (int *)((longlong)pppppuVar33 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (*(code *)(*pppppuVar33)[2])(pppppuVar33);
              }
            }
          }
          if (uVar35 < 2) break;
          lVar26 = lVar26 + -0x48;
          lVar20 = lVar20 + -0x14;
          uVar35 = uVar35 - 1;
          ppppuVar30 = ppppuVar22;
        } while (cVar16 == '\0');
      }
      if (pppplVar24 != (longlong ****)0x0) {
        LOCK();
        pppplVar23 = pppplVar24 + 1;
        *(int *)pppplVar23 = *(int *)pppplVar23 + -1;
        UNLOCK();
        if (*(int *)pppplVar23 == 0) {
          (*(code *)**pppplVar24)(pppplVar24);
          LOCK();
          piVar2 = (int *)((longlong)pppplVar24 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (*(code *)(*pppplVar24)[2])(pppplVar24);
          }
        }
      }
      if (ppppuVar22 != (undefined ****)0x0) {
        LOCK();
        ppppuVar30 = ppppuVar22 + 1;
        *(int *)ppppuVar30 = *(int *)ppppuVar30 + -1;
        UNLOCK();
        if (*(int *)ppppuVar30 == 0) {
          (*(code *)**ppppuVar22)(ppppuVar22);
          LOCK();
          piVar2 = (int *)((longlong)ppppuVar22 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (*(code *)(*ppppuVar22)[2])(ppppuVar22);
          }
        }
      }
      uVar25 = 0;
    }
    else {
      local_7d8 = local_8b8;
      local_7d0 = local_8c0;
      if (local_8c0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_8c0 + 1) = (int)local_8c0[1] + 1;
        UNLOCK();
      }
      FUN_1403d061a(&local_1a8,local_8e8,&local_7d8);
      local_858 = pppplStack_1a0;
      pppplStack_850 = pppplStack_198;
      local_840 = local_188;
      pppplStack_838 = pppplStack_180;
      local_820 = local_168;
      pppppuStack_818 = pppppuStack_160;
      local_810 = local_158;
      if (local_158 != (longlong ****)0x0) {
        LOCK();
        *(int *)(local_158 + 1) = *(int *)(local_158 + 1) + 1;
        UNLOCK();
      }
      uStack_800 = CONCAT13((undefined1)local_145,CONCAT21(uStack_147,local_148));
      uStack_7fc = CONCAT13(uStack_141,local_145._1_3_);
      uStack_7f8 = (undefined3)((uint)_uStack_141 >> 8);
      uStack_7f5 = (undefined4)uStack_13d;
      uStack_7f1 = uStack_13d._4_4_;
      uStack_808 = local_150;
      uStack_804 = uStack_14c;
      local_860 = &PTR_FUN_149efe1e0;
      local_7e8 = local_130;
      local_7e0 = local_128;
      if (local_128 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_128 + 1) = (int)local_128[1] + 1;
        UNLOCK();
      }
      uVar35 = (ulonglong)*(int *)(local_8f0 + 0x26);
      local_848 = local_8f0;
      if ((longlong)uVar35 < 1) {
        FUN_1469ac82c(&local_860);
      }
      else {
        pppplVar23 = local_8f0 + 1;
        lVar26 = uVar35 * 0x48 + -8;
        lVar20 = uVar35 * 0x14 + -4;
        ppppuVar22 = (undefined ****)0x0;
        do {
          ppplVar9 = local_8f0[0x2a];
          local_2f0 = *(char *)((longlong)ppplVar9 + lVar20);
          if (local_2f0 == '\x01') {
            local_5c8 = *(undefined ******)((longlong)ppplVar9 + lVar20 + -0x10);
            uStack_5c0 = *(longlong *****)((longlong)ppplVar9 + lVar20 + -8);
          }
          pppplVar24 = (longlong ****)local_8f0[0x25];
          if ((longlong ****)local_8f0[0x25] == (longlong ****)0x0) {
            pppplVar24 = pppplVar23;
          }
          local_318 = *(longlong ****)((longlong)pppplVar24 + lVar26 + -0x10);
          plVar29 = (longlong *)((longlong)pppplVar24 + lVar26 + -0x40);
          local_348 = (longlong ****)*plVar29;
          ppplStack_340 = (longlong ***)plVar29[1];
          plVar29 = (longlong *)((longlong)pppplVar24 + lVar26 + -0x30);
          local_338 = (longlong ***)*plVar29;
          ppplStack_330 = (longlong ***)plVar29[1];
          plVar29 = (longlong *)((longlong)pppplVar24 + lVar26 + -0x20);
          local_328 = (longlong ***)*plVar29;
          ppplStack_320 = (longlong ***)plVar29[1];
          local_310 = *(undefined *****)((longlong)pppplVar24 + lVar26 + -8);
          local_308 = *(undefined ******)((longlong)pppplVar24 + lVar26);
          if (local_308 != (undefined *****)0x0) {
            LOCK();
            *(int *)(local_308 + 1) = *(int *)(local_308 + 1) + 1;
            UNLOCK();
          }
          if (local_2f0 != '\0') {
            local_300 = local_5c8;
            pppplStack_2f8 = uStack_5c0;
          }
          cVar16 = FUN_14497f9ca(&local_690,local_310);
          if (cVar16 == '\0') {
            (*(code *)(*local_310)[0x18])(local_310,&local_348,&local_860);
          }
          local_5c8 = (undefined *****)((ulonglong)local_5c8 & 0xffffffffffffff00);
          uStack_5c0 = (longlong ****)0x0;
          ppppuStack_5b8 = (undefined ****)0x0;
          FUN_1403d0382(&local_5c8);
          ppppuVar30 = ppppuStack_5b8;
          cVar16 = (char)local_5c8;
          if (ppppuStack_5b8 != (undefined ****)0x0) {
            LOCK();
            *(int *)(ppppuStack_5b8 + 1) = *(int *)(ppppuStack_5b8 + 1) + 1;
            UNLOCK();
          }
          if (ppppuVar22 != (undefined ****)0x0) {
            LOCK();
            ppppuVar34 = ppppuVar22 + 1;
            *(int *)ppppuVar34 = *(int *)ppppuVar34 + -1;
            UNLOCK();
            if (*(int *)ppppuVar34 == 0) {
              (*(code *)**ppppuVar22)(ppppuVar22);
              LOCK();
              piVar2 = (int *)((longlong)ppppuVar22 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (*(code *)(*ppppuVar22)[2])(ppppuVar22);
              }
            }
          }
          ppppuVar22 = ppppuStack_5b8;
          if (ppppuStack_5b8 != (undefined ****)0x0) {
            LOCK();
            ppppuVar34 = ppppuStack_5b8 + 1;
            *(int *)ppppuVar34 = *(int *)ppppuVar34 + -1;
            UNLOCK();
            if (*(int *)ppppuVar34 == 0) {
              (*(code *)**ppppuStack_5b8)(ppppuStack_5b8);
              LOCK();
              piVar2 = (int *)((longlong)ppppuVar22 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (*(code *)(*ppppuVar22)[2])(ppppuVar22);
              }
            }
          }
          pppppuVar33 = local_308;
          if (local_2f0 == '\x01') {
            local_2f0 = '\0';
          }
          if (local_308 != (undefined *****)0x0) {
            LOCK();
            pppppuVar31 = local_308 + 1;
            *(int *)pppppuVar31 = *(int *)pppppuVar31 + -1;
            UNLOCK();
            if (*(int *)pppppuVar31 == 0) {
              (*(code *)**local_308)(local_308);
              LOCK();
              piVar2 = (int *)((longlong)pppppuVar33 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (*(code *)(*pppppuVar33)[2])(pppppuVar33);
              }
            }
          }
          if (uVar35 < 2) break;
          lVar26 = lVar26 + -0x48;
          lVar20 = lVar20 + -0x14;
          uVar35 = uVar35 - 1;
          ppppuVar22 = ppppuVar30;
        } while (cVar16 == '\0');
        FUN_1469ac82c(&local_860);
        if (ppppuVar30 != (undefined ****)0x0) {
          LOCK();
          ppppuVar22 = ppppuVar30 + 1;
          *(int *)ppppuVar22 = *(int *)ppppuVar22 + -1;
          UNLOCK();
          if (*(int *)ppppuVar22 == 0) {
            (*(code *)**ppppuVar30)(ppppuVar30);
            LOCK();
            piVar2 = (int *)((longlong)ppppuVar30 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (*(code *)(*ppppuVar30)[2])(ppppuVar30);
            }
          }
        }
      }
      FUN_1469ac82c(&local_1a8);
      uVar25 = (undefined4)CONCAT71((int7)(uVar35 >> 8),1);
    }
    pppplVar23 = local_6b8;
    pppppuVar33 = local_6c8;
    local_638 = local_700;
    pppplStack_630 = pppplStack_6f8;
    local_8a8 = local_6e8;
    pppplStack_8a0 = pppplStack_6e0;
    local_898 = local_6d8;
    ppppuStack_890 = ppppuStack_6d0;
    local_8e0 = local_6c0;
    if (local_6b8 != (longlong ****)0x0) {
      LOCK();
      *(int *)(local_6b8 + 1) = *(int *)(local_6b8 + 1) + 1;
      UNLOCK();
    }
    uStack_658 = CONCAT44(uStack_6ac,local_6b0);
    uStack_648 = uStack_6a0;
    uStack_645 = uStack_69d;
    uStack_650 = (undefined3)uStack_6a8;
    local_64d = (undefined5)(CONCAT44(uStack_6a4,uStack_6a8) >> 0x18);
    uVar35 = (ulonglong)*(int *)(local_8f0 + 0x26);
    local_5c8 = (undefined *****)((ulonglong)local_5c8 & 0xffffffffffffff00);
    local_5a8 = (undefined *****)((ulonglong)local_5a8 & 0xffffffffffffff00);
    uStack_5c0 = (longlong ****)0x0;
    ppppuStack_5b8 = (undefined ****)0x0;
    memset(&pppplStack_5a0,0,0x88);
    local_518 = 0x20702;
    local_514 = 0;
    if (0 < (longlong)uVar35) {
      local_8d8 = (undefined *****)(local_8f0 + 1);
      lVar26 = uVar35 * 0x48 + -8;
      lVar20 = uVar35 * 0x14 + -4;
      local_8c8 = (longlong ****)CONCAT44(local_8c8._4_4_,uVar25);
      local_8b0 = pppppuVar33;
      do {
        pppplVar24 = local_8f0;
        ppplVar9 = local_8f0[0x2a];
        local_1b0 = *(char *)((longlong)ppplVar9 + lVar20);
        if (local_1b0 == '\x01') {
          local_1a8 = *(undefined ******)((longlong)ppplVar9 + lVar20 + -0x10);
          pppplStack_1a0 = *(longlong *****)((longlong)ppplVar9 + lVar20 + -8);
        }
        pppppuVar31 = (undefined *****)local_8f0[0x25];
        if ((undefined *****)local_8f0[0x25] == (undefined *****)0x0) {
          pppppuVar31 = local_8d8;
        }
        local_1d8 = *(undefined8 *)((longlong)pppppuVar31 + lVar26 + -0x10);
        plVar29 = (longlong *)((longlong)pppppuVar31 + lVar26 + -0x40);
        local_208 = (undefined *****)*plVar29;
        pppplStack_200 = (longlong ****)plVar29[1];
        puVar7 = (undefined8 *)((longlong)pppppuVar31 + lVar26 + -0x30);
        local_1f8 = *puVar7;
        uStack_1f0 = puVar7[1];
        puVar7 = (undefined8 *)((longlong)pppppuVar31 + lVar26 + -0x20);
        local_1e8 = *puVar7;
        uStack_1e0 = puVar7[1];
        local_1d0 = *(longlong **)((longlong)pppppuVar31 + lVar26 + -8);
        local_1c8 = *(longlong **)((longlong)pppppuVar31 + lVar26);
        if (local_1c8 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_1c8 + 1) = (int)local_1c8[1] + 1;
          UNLOCK();
        }
        uStack_224 = (undefined4)((uint5)local_64d >> 8);
        if (local_1b0 == '\0') {
          local_268 = local_8a8;
          pppplStack_260 = pppplStack_8a0;
          if (pppplVar23 != (longlong ****)0x0) {
            LOCK();
            *(int *)(pppplVar23 + 1) = *(int *)(pppplVar23 + 1) + 1;
            UNLOCK();
          }
          uStack_228 = (undefined4)CONCAT53(local_64d,uStack_650);
        }
        else {
          local_1c0 = local_1a8;
          pppplStack_1b8 = pppplStack_1a0;
          local_268 = local_1a8;
          pppplStack_260 = pppplStack_1a0;
          if (pppplVar23 != (longlong ****)0x0) {
            LOCK();
            *(int *)(pppplVar23 + 1) = *(int *)(pppplVar23 + 1) + 1;
            UNLOCK();
          }
          uStack_228 = (undefined4)CONCAT53(local_64d,uStack_650);
        }
        uStack_21d = uStack_645;
        uStack_220 = uStack_648;
        local_230 = uStack_658;
        local_238 = pppplVar23;
        local_240 = local_8e0;
        ppppuStack_250 = ppppuStack_890;
        local_258 = local_898;
        pppplStack_278 = pppplStack_630;
        uStack_280 = local_638;
        pppplStack_270 = local_8f0;
        local_288 = (longlong ****)&PTR_FUN_149eda650;
        local_348 = (longlong ****)((ulonglong)local_348 & 0xffffffffffffff00);
        local_328 = (longlong ***)((ulonglong)local_328 & 0xffffffffffffff00);
        ppplStack_340 = (longlong ***)0x0;
        local_338 = (longlong ***)0x0;
        local_248 = pppppuVar33;
        memset(&ppplStack_320,0,0x88);
        local_298 = 0x20702;
        local_294 = 0;
        if ((char)local_8c8 == '\0') {
          if ((char)uStack_224 == '\x01') {
            if (uStack_21d._6_1_ == '\x01') {
              (**(code **)(*local_1d0 + 0x100))(local_1d0,&local_1a8,&local_208,&local_288);
            }
            else {
              if (uStack_21d._7_1_ != '\x01') {
                (**(code **)(*local_1d0 + 0xf0))(local_1d0,&local_1a8,&local_208,&local_288);
                FUN_1403d4924(&local_348,&local_1a8);
                FUN_14493db24(&local_1a8);
                pppplVar24 = local_8f0;
                if (((ulonglong)local_348 & 1) != 0) goto LAB_1403ce8ea;
                goto LAB_1403ce8b3;
              }
              (**(code **)(*local_1d0 + 0x108))(local_1d0,&local_1a8,&local_208,&local_288);
            }
            FUN_1403d4924(&local_348,&local_1a8);
            FUN_14493db24(&local_1a8);
            pppplVar24 = local_8f0;
          }
          else {
LAB_1403ce8b3:
            (**(code **)(*local_1d0 + 0x70))(local_1d0,&local_1a8,&local_208,&local_288);
            FUN_1403d4924(&local_348,&local_1a8);
            FUN_14493db24(&local_1a8);
          }
        }
        else {
          local_670 = local_8b8;
          local_668 = local_8c0;
          if (local_8c0 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_8c0 + 1) = (int)local_8c0[1] + 1;
            UNLOCK();
          }
          FUN_1403d061a(&local_e8,&local_288,&local_670);
          (**(code **)(*local_1d0 + 0xd0))(local_1d0,&local_1a8,&local_208,&local_e8);
          FUN_1403d4924(&local_348,&local_1a8);
          FUN_14493db24(&local_1a8);
          FUN_1469ac82c(&local_e8);
          pppplVar24 = local_8f0;
        }
LAB_1403ce8ea:
        FUN_1402c173a(&local_348,&local_1d0);
        FUN_1402c17c2(&local_5c8,&local_348);
        FUN_14493db24(&local_348);
        local_900 = uStack_280._4_4_;
        local_908 = &local_288;
        FUN_1402c1d72(local_8d0,pppplVar24,&local_5c8,pppplVar24);
        pppplVar24 = local_238;
        local_288 = (longlong ****)&PTR_FUN_149eda650;
        if (local_238 != (longlong ****)0x0) {
          LOCK();
          pppplVar21 = local_238 + 1;
          *(int *)pppplVar21 = *(int *)pppplVar21 + -1;
          UNLOCK();
          if (*(int *)pppplVar21 == 0) {
            (*(code *)**local_238)(local_238);
            LOCK();
            piVar2 = (int *)((longlong)pppplVar24 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (*(code *)(*pppplVar24)[2])(pppplVar24);
            }
          }
        }
        plVar29 = local_1c8;
        pppppuVar33 = local_8b0;
        if (local_1b0 == '\x01') {
          local_1b0 = '\0';
        }
        if (local_1c8 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_1c8 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
            (**(code **)*local_1c8)(local_1c8);
            LOCK();
            piVar2 = (int *)((longlong)plVar29 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar29 + 0x10))(plVar29);
            }
          }
        }
        if (uVar35 < 2) break;
        lVar26 = lVar26 + -0x48;
        lVar20 = lVar20 + -0x14;
        uVar35 = uVar35 - 1;
      } while ((char)local_5c8 == '\0');
    }
    pppplVar24 = local_8f0;
    if (pppplVar23 != (longlong ****)0x0) {
      LOCK();
      pppplVar21 = pppplVar23 + 1;
      *(int *)pppplVar21 = *(int *)pppplVar21 + -1;
      UNLOCK();
      if (*(int *)pppplVar21 == 0) {
        (*(code *)**pppplVar23)(pppplVar23);
        LOCK();
        piVar2 = (int *)((longlong)pppplVar23 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*pppplVar23)[2])(pppplVar23);
        }
      }
    }
    uVar35 = CONCAT71((int7)((ulonglong)pppplVar24 >> 8),(char)local_5c8);
    FUN_14493db24();
    plVar29 = local_8c0;
    pppppuVar33 = local_8e8;
    goto LAB_1403ce172;
  }
  local_4e8 = local_700;
  pppplStack_4e0 = pppplStack_6f8;
  local_798 = local_6e8;
  pppplStack_790 = pppplStack_6e0;
  local_788 = local_6d8;
  uStack_780 = ppppuStack_6d0;
  local_8e0 = local_6c8;
  local_8d8 = local_6c0;
  if (local_6b8 != (longlong ****)0x0) {
    LOCK();
    *(int *)(local_6b8 + 1) = *(int *)(local_6b8 + 1) + 1;
    UNLOCK();
  }
  uStack_4f8 = uStack_6a0;
  uStack_4f5 = uStack_69d;
  uStack_508 = local_6b0;
  uStack_504 = uStack_6ac;
  uStack_500 = uStack_6a8;
  uStack_4fc = uStack_6a4;
  if ((longlong)*(int *)(local_8f0 + 0x26) < 1) {
    ppppuVar22 = (undefined ****)0x0;
  }
  else {
    pppplVar23 = local_8f0 + 1;
    ppppuVar30 = (undefined ****)0x0;
    uVar35 = (longlong)*(int *)(local_8f0 + 0x26);
    do {
      uVar6 = uVar35 - 1;
      local_2f0 = *(char *)((longlong)local_8f0[0x2a] + uVar6 * 0x14 + 0x10);
      if (local_2f0 == '\x01') {
        plVar29 = (longlong *)((longlong)local_8f0[0x2a] + uVar6 * 0x14);
        local_1a8 = (undefined *****)*plVar29;
        pppplStack_1a0 = (longlong ****)plVar29[1];
      }
      pppplVar21 = (longlong ****)local_8f0[0x25];
      if ((longlong ****)local_8f0[0x25] == (longlong ****)0x0) {
        pppplVar21 = pppplVar23;
      }
      local_318 = pppplVar21[uVar6 * 9 + 6];
      local_348 = (longlong ****)pppplVar21[uVar6 * 9];
      ppplStack_340 = (pppplVar21 + uVar6 * 9)[1];
      local_338 = pppplVar21[uVar6 * 9 + 2];
      ppplStack_330 = (pppplVar21 + uVar6 * 9 + 2)[1];
      local_328 = pppplVar21[uVar6 * 9 + 4];
      ppplStack_320 = (pppplVar21 + uVar6 * 9 + 4)[1];
      local_310 = (undefined ****)pppplVar21[uVar6 * 9 + 7];
      local_308 = (undefined *****)pppplVar21[uVar6 * 9 + 8];
      if (local_308 != (undefined *****)0x0) {
        LOCK();
        *(int *)(local_308 + 1) = *(int *)(local_308 + 1) + 1;
        UNLOCK();
      }
      local_148 = (char)uStack_500;
      uStack_147 = (undefined2)((uint)uStack_500 >> 8);
      uStack_141 = (undefined1)((uint)uStack_4fc >> 0x18);
      local_145._1_3_ = (undefined3)uStack_4fc;
      if (local_2f0 == '\0') {
        local_188 = local_798;
        pppplStack_180 = pppplStack_790;
        if (pppplVar24 != (longlong ****)0x0) {
          LOCK();
          *(int *)(pppplVar24 + 1) = *(int *)(pppplVar24 + 1) + 1;
          UNLOCK();
        }
      }
      else {
        local_300 = local_1a8;
        pppplStack_2f8 = pppplStack_1a0;
        local_188 = local_1a8;
        pppplStack_180 = pppplStack_1a0;
        if (pppplVar24 != (longlong ****)0x0) {
          LOCK();
          *(int *)(pppplVar24 + 1) = *(int *)(pppplVar24 + 1) + 1;
          UNLOCK();
        }
      }
      local_145 = CONCAT31(local_145._1_3_,(char)((uint)uStack_500 >> 0x18));
      uStack_13d = uStack_4f5;
      _uStack_141 = CONCAT31(uStack_4f8,uStack_141);
      uStack_14c = uStack_504;
      local_150 = uStack_508;
      local_158 = pppplVar24;
      pppppuStack_160 = local_8d8;
      local_168 = local_8e0;
      uStack_16c = uStack_780._4_4_;
      uStack_170 = (undefined4)uStack_780;
      uStack_174 = local_788._4_4_;
      local_178 = (undefined4)local_788;
      pppplStack_190 = local_8f0;
      pppplStack_198 = pppplStack_4e0;
      pppplStack_1a0 = local_4e8;
      local_1a8 = (undefined *****)&PTR_FUN_149eda650;
      cVar16 = FUN_14497f9ca(&local_690,local_310);
      if (cVar16 == '\0') {
        uVar18 = (ulonglong)(int)local_378;
        if (0 < (longlong)uVar18) {
          ppppuVar34 = local_380 + 7;
          ppppuVar22 = local_380;
          if (local_380 == (undefined ****)0x0) {
            ppppuVar34 = local_468;
            ppppuVar22 = (undefined ****)local_4a0;
          }
          if ((undefined ****)*ppppuVar34 != local_310) {
            uVar32 = 0;
            ppppuVar22 = ppppuVar22 + 0x10;
            do {
              if (uVar18 - 1 == uVar32) goto LAB_1403cddb4;
              uVar32 = uVar32 + 1;
              ppppuVar34 = (undefined ****)*ppppuVar22;
              ppppuVar22 = ppppuVar22 + 9;
            } while (ppppuVar34 != local_310);
            if (uVar18 <= uVar32) goto LAB_1403cddb4;
          }
          (*(code *)(*local_310)[0xf])(local_310,&local_348,&local_1a8);
        }
      }
LAB_1403cddb4:
      local_5c8 = (undefined *****)((ulonglong)local_5c8 & 0xffffffffffffff00);
      uStack_5c0 = (longlong ****)0x0;
      ppppuStack_5b8 = (undefined ****)0x0;
      FUN_1403d0382(&local_5c8);
      ppppuVar22 = ppppuStack_5b8;
      cVar16 = (char)local_5c8;
      if (ppppuStack_5b8 != (undefined ****)0x0) {
        LOCK();
        *(int *)(ppppuStack_5b8 + 1) = *(int *)(ppppuStack_5b8 + 1) + 1;
        UNLOCK();
      }
      if (ppppuVar30 != (undefined ****)0x0) {
        LOCK();
        ppppuVar34 = ppppuVar30 + 1;
        *(int *)ppppuVar34 = *(int *)ppppuVar34 + -1;
        UNLOCK();
        if (*(int *)ppppuVar34 == 0) {
          (*(code *)**ppppuVar30)(ppppuVar30);
          LOCK();
          piVar2 = (int *)((longlong)ppppuVar30 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (*(code *)(*ppppuVar30)[2])(ppppuVar30);
          }
        }
      }
      ppppuVar30 = ppppuStack_5b8;
      if (ppppuStack_5b8 != (undefined ****)0x0) {
        LOCK();
        ppppuVar34 = ppppuStack_5b8 + 1;
        *(int *)ppppuVar34 = *(int *)ppppuVar34 + -1;
        UNLOCK();
        if (*(int *)ppppuVar34 == 0) {
          (*(code *)**ppppuStack_5b8)(ppppuStack_5b8);
          LOCK();
          piVar2 = (int *)((longlong)ppppuVar30 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (*(code *)(*ppppuVar30)[2])(ppppuVar30);
          }
        }
      }
      pppplVar21 = local_158;
      local_1a8 = (undefined *****)&PTR_FUN_149eda650;
      if (local_158 != (longlong ****)0x0) {
        LOCK();
        pppplVar5 = local_158 + 1;
        *(int *)pppplVar5 = *(int *)pppplVar5 + -1;
        UNLOCK();
        if (*(int *)pppplVar5 == 0) {
          (*(code *)**local_158)(local_158);
          LOCK();
          piVar2 = (int *)((longlong)pppplVar21 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (*(code *)(*pppplVar21)[2])(pppplVar21);
          }
        }
      }
      pppppuVar33 = local_308;
      if (local_2f0 == '\x01') {
        local_2f0 = '\0';
      }
      if (local_308 != (undefined *****)0x0) {
        LOCK();
        pppppuVar31 = local_308 + 1;
        *(int *)pppppuVar31 = *(int *)pppppuVar31 + -1;
        UNLOCK();
        if (*(int *)pppppuVar31 == 0) {
          (*(code *)**local_308)(local_308);
          LOCK();
          piVar2 = (int *)((longlong)pppppuVar33 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (*(code *)(*pppppuVar33)[2])(pppppuVar33);
          }
        }
      }
    } while ((1 < uVar35) && (ppppuVar30 = ppppuVar22, uVar35 = uVar6, cVar16 == '\0'));
  }
  if (pppplVar24 != (longlong ****)0x0) {
    LOCK();
    pppplVar23 = pppplVar24 + 1;
    *(int *)pppplVar23 = *(int *)pppplVar23 + -1;
    UNLOCK();
    if (*(int *)pppplVar23 == 0) {
      (*(code *)**pppplVar24)(pppplVar24);
      LOCK();
      piVar2 = (int *)((longlong)pppplVar24 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (*(code *)(*pppplVar24)[2])(pppplVar24);
      }
    }
  }
  pppppuVar33 = local_8e8;
  if (ppppuVar22 != (undefined ****)0x0) {
    LOCK();
    ppppuVar30 = ppppuVar22 + 1;
    *(int *)ppppuVar30 = *(int *)ppppuVar30 + -1;
    UNLOCK();
    if (*(int *)ppppuVar30 == 0) {
      (*(code *)**ppppuVar22)(ppppuVar22);
      LOCK();
      piVar2 = (int *)((longlong)ppppuVar22 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (*(code *)(*ppppuVar22)[2])(ppppuVar22);
      }
    }
  }
  pppplVar23 = local_6b8;
  pppppuVar3 = local_6c0;
  pppppuVar31 = local_6c8;
  local_5d8 = local_700;
  pppplStack_5d0 = pppplStack_6f8;
  local_7b8 = local_6e8;
  pppplStack_7b0 = pppplStack_6e0;
  local_7a8 = local_6d8;
  ppppuStack_7a0 = ppppuStack_6d0;
  if (local_6b8 != (longlong ****)0x0) {
    LOCK();
    *(int *)(local_6b8 + 1) = *(int *)(local_6b8 + 1) + 1;
    UNLOCK();
  }
  uStack_5f8 = CONCAT44(uStack_6ac,local_6b0);
  uStack_5e8 = uStack_6a0;
  uStack_5e5 = uStack_69d;
  uStack_5f0 = (undefined3)uStack_6a8;
  local_5ed = (undefined5)(CONCAT44(uStack_6a4,uStack_6a8) >> 0x18);
  local_7c8[0] = 0;
  local_7c0 = (undefined ****)&local_4a8;
  _Dst = (undefined *****)&pppplStack_5a0;
  local_5c8 = (undefined *****)((ulonglong)local_5c8 & 0xffffffffffffff00);
  local_5a8 = (undefined *****)((ulonglong)local_5a8 & 0xffffffffffffff00);
  uStack_5c0 = (longlong ****)0x0;
  ppppuStack_5b8 = (undefined ****)0x0;
  memset(_Dst,0,0x88);
  local_518 = 0x20702;
  local_514 = 0;
  if (0 < (int)local_378) {
    FUN_1403d08d6(local_7c8);
    uStack_84 = (undefined4)((uint5)local_5ed >> 8);
    if ((char)local_230 == '\x01') {
      local_c8 = local_240;
      pppplStack_c0 = local_238;
      if (pppplVar23 != (longlong ****)0x0) {
        LOCK();
        *(int *)(pppplVar23 + 1) = *(int *)(pppplVar23 + 1) + 1;
        UNLOCK();
      }
      uStack_88 = (undefined4)CONCAT53(local_5ed,uStack_5f0);
    }
    else {
      local_c8 = local_7b8;
      pppplStack_c0 = pppplStack_7b0;
      if (pppplVar23 != (longlong ****)0x0) {
        LOCK();
        *(int *)(pppplVar23 + 1) = *(int *)(pppplVar23 + 1) + 1;
        UNLOCK();
      }
      uStack_88 = (undefined4)CONCAT53(local_5ed,uStack_5f0);
    }
    local_d0 = &local_4a8;
    uStack_7d = uStack_5e5;
    uStack_80 = uStack_5e8;
    local_90 = uStack_5f8;
    pppplStack_98 = pppplVar23;
    local_a0 = pppppuVar3;
    local_a8 = pppppuVar31;
    ppppuStack_b0 = ppppuStack_7a0;
    local_b8 = local_7a8;
    pppplStack_d8 = pppplStack_5d0;
    uStack_e0 = local_5d8;
    local_e8 = (longlong ****)&PTR_FUN_149eda650;
    local_348 = (longlong ****)((ulonglong)local_348 & 0xffffffffffffff00);
    local_328 = (longlong ***)((ulonglong)local_328 & 0xffffffffffffff00);
    ppplStack_340 = (longlong ***)0x0;
    local_338 = (longlong ***)0x0;
    memset(&ppplStack_320,0,0x88);
    local_298 = 0x20702;
    local_294 = 0;
    if ((byte)uStack_84 == 1) {
      if (uStack_7d._6_1_ == '\x01') {
        (*(code *)(*ppppuStack_250)[0x20])(ppppuStack_250,&local_1a8,&local_288,&local_e8);
      }
      else {
        if (uStack_7d._7_1_ != '\x01') {
          (*(code *)(*ppppuStack_250)[0x1e])(ppppuStack_250,&local_1a8,&local_288,&local_e8);
          FUN_1403d4924(&local_348,&local_1a8);
          FUN_14493db24(&local_1a8);
          goto LAB_1403ce065;
        }
        (*(code *)(*ppppuStack_250)[0x21])(ppppuStack_250,&local_1a8,&local_288,&local_e8);
      }
      FUN_1403d4924(&local_348,&local_1a8);
      FUN_14493db24(&local_1a8);
LAB_1403cf7ba:
      pppppuVar33 = local_8e8;
      if (((char)local_348 == '\0') &&
         (*(char *)(local_8d0 + 0x4e8) == '\x01' && (char)local_8c8 == '\0')) {
LAB_1403ce074:
        pppppuVar33 = local_8e8;
        (*(code *)(*ppppuStack_250)[0xe])(ppppuStack_250,&local_1a8,&local_288,&local_e8);
        FUN_1403d4924(&local_348,&local_1a8);
        FUN_14493db24(&local_1a8);
      }
    }
    else {
LAB_1403ce065:
      if (((byte)uStack_84 & 1) != 0) goto LAB_1403cf7ba;
      pppppuVar33 = local_8e8;
      if ((char)local_8c8 == '\0') goto LAB_1403ce074;
    }
    FUN_1402c173a(&local_348,&ppppuStack_250);
    FUN_1402c17c2(&local_5c8,&local_348);
    FUN_14493db24(&local_348);
    local_908 = &local_e8;
    local_900 = uStack_e0._4_4_;
    FUN_1402c1d72(local_8d0,&local_4a8,&local_5c8,&local_4a8);
    pppplVar24 = pppplStack_98;
    local_e8 = (longlong ****)&PTR_FUN_149eda650;
    if (pppplStack_98 != (longlong ****)0x0) {
      LOCK();
      pppplVar21 = pppplStack_98 + 1;
      *(int *)pppplVar21 = *(int *)pppplVar21 + -1;
      UNLOCK();
      if (*(int *)pppplVar21 == 0) {
        (*(code *)**pppplStack_98)(pppplStack_98);
        LOCK();
        piVar2 = (int *)((longlong)pppplVar24 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*pppplVar24)[2])(pppplVar24);
        }
      }
    }
    _Dst = local_248;
    if ((char)local_230 == '\x01') {
      local_230 = local_230 & 0xffffffffffffff00;
    }
    if (local_248 != (undefined *****)0x0) {
      LOCK();
      pppppuVar31 = local_248 + 1;
      *(int *)pppppuVar31 = *(int *)pppppuVar31 + -1;
      UNLOCK();
      if (*(int *)pppppuVar31 == 0) {
        (*(code *)**local_248)(local_248);
        LOCK();
        piVar2 = (int *)((longlong)_Dst + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*_Dst)[2])(_Dst);
        }
      }
    }
    local_7c8[0] = 1;
  }
  plVar29 = local_8c0;
  if (pppplVar23 != (longlong ****)0x0) {
    LOCK();
    pppplVar24 = pppplVar23 + 1;
    *(int *)pppplVar24 = *(int *)pppplVar24 + -1;
    UNLOCK();
    if (*(int *)pppplVar24 == 0) {
      (*(code *)**pppplVar23)(pppplVar23);
      LOCK();
      piVar2 = (int *)((longlong)pppplVar23 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (*(code *)(*pppplVar23)[2])(pppplVar23);
      }
    }
  }
  uVar35 = CONCAT71((int7)((ulonglong)_Dst >> 8),(char)local_5c8);
  FUN_14493db24();
LAB_1403ce172:
  lVar26 = local_8d0;
  FUN_1403d0cca(local_718,pppppuVar33,local_8f0);
  if (plVar29 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar29 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*plVar29)(plVar29);
      LOCK();
      piVar2 = (int *)((longlong)plVar29 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar29 + 0x10))(plVar29);
      }
    }
  }
  FUN_1447fa2ac(local_358,uStack_350 & 0xffffffff);
  if (local_358 != 0) {
    FUN_1400020a8();
  }
  plVar29 = plStack_360;
  if (plStack_360 != (longlong *)0x0) {
    LOCK();
    plVar11 = plStack_360 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*plStack_360)(plStack_360);
      LOCK();
      piVar2 = (int *)((longlong)plVar29 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar29 + 0x10))(plVar29);
      }
    }
  }
  ppppuVar22 = (undefined ****)local_4a0;
  if (local_380 != (undefined ****)0x0) {
    ppppuVar22 = local_380;
  }
  FUN_1447157bd(ppppuVar22,local_378 & 0xffffffff);
  if (local_380 != (undefined ****)0x0) {
    FUN_1400020a8();
  }
  plVar29 = local_710;
  if (local_710 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_710 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*local_710)(local_710);
      LOCK();
      piVar2 = (int *)((longlong)plVar29 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar29 + 0x10))(plVar29);
      }
    }
  }
  pppplVar23 = local_6b8;
  local_708 = &PTR_FUN_149eda650;
  if (local_6b8 != (longlong ****)0x0) {
    LOCK();
    pppplVar24 = local_6b8 + 1;
    *(int *)pppplVar24 = *(int *)pppplVar24 + -1;
    UNLOCK();
    if (*(int *)pppplVar24 == 0) {
      (*(code *)**local_6b8)(local_6b8);
      LOCK();
      piVar2 = (int *)((longlong)pppplVar23 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (*(code *)(*pppplVar23)[2])(pppplVar23);
      }
    }
  }
  if (pppplStack_678 != (longlong ****)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)pppplStack_678 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (*(code *)(*pppplStack_678)[2])();
    }
  }
  FUN_1447de57f(local_690,local_688);
  if (local_690 != 0) {
    FUN_1400020a8();
  }
  *(int *)(lVar26 + 0x638) = *(int *)(lVar26 + 0x638) + -1;
  if ((local_60 ^ (ulonglong)auStack_928) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar35 & 0xffffffff;
}



// FUNCTION 1403d0382 FUN_1403d0382 body=136 status=ok
// SIG undefined FUN_1403d0382(void)

longlong FUN_1403d0382(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 8) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x10);
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 8) = uVar3;
    plVar5 = *(longlong **)(param_1 + 0x10);
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 != 0) {
        return param_1;
      }
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      iVar2 = *piVar1;
      UNLOCK();
      goto joined_r0x0001403d03e4;
    }
    *(longlong **)(param_1 + 0x10) = plVar4;
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
  }
  LOCK();
  plVar4 = plVar5 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 != 0) {
    return param_1;
  }
  (**(code **)*plVar5)(plVar5);
  LOCK();
  piVar1 = (int *)((longlong)plVar5 + 0xc);
  *piVar1 = *piVar1 + -1;
  iVar2 = *piVar1;
  UNLOCK();
  plVar4 = plVar5;
joined_r0x0001403d03e4:
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return param_1;
}



// FUNCTION 1403d040a FUN_1403d040a body=197 status=ok
// SIG undefined FUN_1403d040a(void)

longlong * FUN_1403d040a(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = *(longlong *)(param_2 + 0x140);
  lVar5 = *(longlong *)(param_2 + 0x148);
  param_1[3] = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 0xc) = *(int *)(lVar5 + 0xc) + 1;
    UNLOCK();
  }
  if (0 < *(int *)(param_2 + 0x130)) {
    lVar6 = 0x40;
    lVar5 = 0;
    do {
      lVar4 = *(longlong *)(param_2 + 0x128);
      if (*(longlong *)(param_2 + 0x128) == 0) {
        lVar4 = param_2 + 8;
      }
      uVar2 = *(undefined8 *)(lVar4 + -8 + lVar6);
      lVar4 = *(longlong *)(lVar4 + lVar6);
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
        UNLOCK();
      }
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1403d07c8(param_1,iVar1);
      }
      lVar3 = *param_1;
      *(undefined8 *)(lVar3 + (longlong)iVar1 * 0x10) = uVar2;
      *(longlong *)(lVar3 + 8 + (longlong)iVar1 * 0x10) = lVar4;
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 0x48;
    } while (lVar5 < *(int *)(param_2 + 0x130));
  }
  return param_1;
}



// FUNCTION 1403d04d0 FUN_1403d04d0 body=138 status=ok
// SIG undefined FUN_1403d04d0(void)

void FUN_1403d04d0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [32];
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_2 + 100) == '\x01') {
    local_20 = (double)*(float *)(param_2 + 0x24);
    local_28 = (double)*(float *)(param_2 + 0x20);
    FUN_1469a4ea0(param_1 + 0x2e8,*(undefined4 *)(param_2 + 0x58));
  }
  local_28 = (double)CONCAT44(local_28._4_4_,*(undefined4 *)(param_2 + 0x58));
  puVar1 = (undefined8 *)FUN_1403d055c(param_1 + 0xa8);
  *puVar1 = *(undefined8 *)(param_2 + 0x20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403d055c FUN_1403d055c body=188 status=ok
// SIG undefined FUN_1403d055c(void)

int * FUN_1403d055c(longlong *param_1,uint param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  int *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar2 * 0x14);
        if (*piVar1 == *param_3) {
          if (piVar1 != (int *)0x0) goto LAB_1403d05bb;
          break;
        }
        iVar2 = piVar1[3];
      } while (iVar2 != -1);
    }
  }
  local_38 = 0;
  local_28 = param_3;
  FUN_1469e644c(param_1,&local_1c,param_2);
  piVar1 = (int *)(*param_1 + (longlong)local_1c * 0x14);
LAB_1403d05bb:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return piVar1 + 1;
}



// FUNCTION 1403d061a FUN_1403d061a body=199 status=ok
// SIG undefined FUN_1403d061a(void)

undefined8 * FUN_1403d061a(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  *param_1 = &PTR_FUN_149eda670;
  uVar12 = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = *(undefined8 *)(param_2 + 8);
  param_1[2] = uVar12;
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  *param_1 = &PTR_FUN_149eda650;
  uVar12 = *(undefined8 *)(param_2 + 0x28);
  uVar13 = *(undefined8 *)(param_2 + 0x30);
  uVar14 = *(undefined8 *)(param_2 + 0x38);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[5] = uVar12;
  param_1[6] = uVar13;
  param_1[7] = uVar14;
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  param_1[9] = *(undefined8 *)(param_2 + 0x48);
  lVar3 = *(longlong *)(param_2 + 0x50);
  param_1[10] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar5 = *(undefined4 *)(param_2 + 0x58);
  uVar6 = *(undefined4 *)(param_2 + 0x5c);
  uVar7 = *(undefined4 *)(param_2 + 0x60);
  uVar8 = *(undefined4 *)(param_2 + 100);
  uVar9 = *(undefined4 *)(param_2 + 0x67);
  uVar10 = *(undefined4 *)(param_2 + 0x6b);
  uVar11 = *(undefined4 *)(param_2 + 0x6f);
  *(undefined4 *)((longlong)param_1 + 99) = *(undefined4 *)(param_2 + 99);
  *(undefined4 *)((longlong)param_1 + 0x67) = uVar9;
  *(undefined4 *)((longlong)param_1 + 0x6b) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0x6f) = uVar11;
  *(undefined4 *)(param_1 + 0xb) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar6;
  *(undefined4 *)(param_1 + 0xc) = uVar7;
  *(undefined4 *)((longlong)param_1 + 100) = uVar8;
  *param_1 = &PTR_FUN_149efe1e0;
  param_1[0xf] = *param_3;
  lVar3 = param_3[1];
  param_1[0x10] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
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
        }
      }
    }
  }
  return param_1;
}



// FUNCTION 1403d06e2 FUN_1403d06e2 body=230 status=ok
// SIG undefined FUN_1403d06e2(void)

undefined1 *
FUN_1403d06e2(longlong param_1,undefined1 *param_2,uint param_3,undefined4 param_4,
             undefined8 param_5)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = DAT_14c96b238;
  *param_2 = DAT_14c96b238;
  *(undefined8 *)(param_2 + 0x128) = 0;
  *(undefined8 *)(param_2 + 0x130) = 0x400000000;
  param_2[0x138] = 0;
  *(undefined8 *)(param_2 + 0x140) = 0;
  *(undefined8 *)(param_2 + 0x148) = 0;
  *(undefined8 *)(param_2 + 0x150) = 0;
  *(undefined8 *)(param_2 + 0x158) = 0;
  if (*(int *)(param_1 + 0x150) != *(int *)(param_1 + 0x17c)) {
    lVar3 = param_1 + 0x180;
    if (*(longlong *)(param_1 + 0x188) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x188);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 400) - 1U & param_3) * 4);
    if (iVar2 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x148) + (longlong)iVar2 * 0x30;
        if (*(uint *)(*(longlong *)(param_1 + 0x148) + (longlong)iVar2 * 0x30) == param_3) {
          if (lVar3 == 0) {
            return param_2;
          }
          if (lVar3 + 8 == 0) {
            return param_2;
          }
          iVar2 = FUN_1404dd558(lVar3 + 8,param_2,param_4,param_5,uVar1);
          if (iVar2 != 1) {
            return param_2;
          }
          FUN_140d95e8c(param_1,param_3);
          return param_2;
        }
        iVar2 = *(int *)(lVar3 + 0x28);
      } while (iVar2 != -1);
    }
  }
  return param_2;
}



// FUNCTION 1403d07c8 FUN_1403d07c8 body=269 status=ok
// SIG undefined FUN_1403d07c8(void)

void FUN_1403d07c8(longlong param_1,int param_2)

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



// FUNCTION 1403d08d6 FUN_1403d08d6 body=205 status=ok
// SIG undefined FUN_1403d08d6(void)

undefined4 * FUN_1403d08d6(longlong param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong lVar4;
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
  longlong lVar16;
  longlong lVar17;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar4 = *(longlong *)(param_1 + 8);
  lVar17 = (longlong)*(int *)(lVar4 + 0x130) + -1;
  cVar3 = *(char *)(*(longlong *)(lVar4 + 0x150) + 0x10 + lVar17 * 0x14);
  if (cVar3 == '\x01') {
    puVar2 = (undefined8 *)(*(longlong *)(lVar4 + 0x150) + lVar17 * 0x14);
    local_18 = *puVar2;
    uStack_10 = puVar2[1];
  }
  lVar16 = lVar4 + 8;
  if (*(longlong *)(lVar4 + 0x128) != 0) {
    lVar16 = *(longlong *)(lVar4 + 0x128);
  }
  *(undefined8 *)(param_2 + 0xc) = *(undefined8 *)(lVar16 + 0x30 + lVar17 * 0x48);
  puVar1 = (undefined4 *)(lVar16 + lVar17 * 0x48);
  uVar5 = *puVar1;
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  puVar1 = (undefined4 *)(lVar16 + 0x10 + lVar17 * 0x48);
  uVar9 = *puVar1;
  uVar10 = puVar1[1];
  uVar11 = puVar1[2];
  uVar12 = puVar1[3];
  puVar1 = (undefined4 *)(lVar16 + 0x20 + lVar17 * 0x48);
  uVar13 = puVar1[1];
  uVar14 = puVar1[2];
  uVar15 = puVar1[3];
  param_2[8] = *puVar1;
  param_2[9] = uVar13;
  param_2[10] = uVar14;
  param_2[0xb] = uVar15;
  param_2[4] = uVar9;
  param_2[5] = uVar10;
  param_2[6] = uVar11;
  param_2[7] = uVar12;
  *param_2 = uVar5;
  param_2[1] = uVar6;
  param_2[2] = uVar7;
  param_2[3] = uVar8;
  *(undefined8 *)(param_2 + 0xe) = *(undefined8 *)(lVar16 + 0x38 + lVar17 * 0x48);
  lVar4 = *(longlong *)(lVar16 + 0x40 + lVar17 * 0x48);
  *(longlong *)(param_2 + 0x10) = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *(char *)(param_2 + 0x16) = cVar3;
  if (cVar3 != '\0') {
    param_2[0x12] = (undefined4)local_18;
    param_2[0x13] = local_18._4_4_;
    param_2[0x14] = (undefined4)uStack_10;
    param_2[0x15] = uStack_10._4_4_;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403d09a4 FUN_1403d09a4 body=805 status=ok
// SIG undefined FUN_1403d09a4(void)

/* WARNING: Removing unreachable block (ram,0x0001403d0bcf) */
/* WARNING: Removing unreachable block (ram,0x0001403d0bd5) */
/* WARNING: Removing unreachable block (ram,0x0001403d0be3) */

undefined8 * FUN_1403d09a4(longlong param_1,undefined8 *param_2,longlong param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong *plVar14;
  int iVar15;
  undefined1 auStack_148 [32];
  undefined8 *local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  float *local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  longlong *plStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined3 uStack_a0;
  undefined8 uStack_9d;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_148;
  param_2[3] = *(undefined8 *)(param_3 + 0x18);
  uVar11 = *(undefined8 *)(param_3 + 0x10);
  param_2[1] = *(undefined8 *)(param_3 + 8);
  param_2[2] = uVar11;
  *param_2 = &PTR_FUN_149eda650;
  uVar11 = *(undefined8 *)(param_3 + 0x28);
  uVar12 = *(undefined8 *)(param_3 + 0x30);
  uVar13 = *(undefined8 *)(param_3 + 0x38);
  param_2[4] = *(undefined8 *)(param_3 + 0x20);
  param_2[5] = uVar11;
  param_2[6] = uVar12;
  param_2[7] = uVar13;
  param_2[8] = *(undefined8 *)(param_3 + 0x40);
  param_2[9] = *(undefined8 *)(param_3 + 0x48);
  lVar3 = *(longlong *)(param_3 + 0x50);
  param_2[10] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  uVar4 = *(undefined4 *)(param_3 + 0x58);
  uVar5 = *(undefined4 *)(param_3 + 0x5c);
  uVar6 = *(undefined4 *)(param_3 + 0x60);
  uVar7 = *(undefined4 *)(param_3 + 100);
  uVar8 = *(undefined4 *)(param_3 + 0x67);
  uVar9 = *(undefined4 *)(param_3 + 0x6b);
  uVar10 = *(undefined4 *)(param_3 + 0x6f);
  *(undefined4 *)((longlong)param_2 + 99) = *(undefined4 *)(param_3 + 99);
  *(undefined4 *)((longlong)param_2 + 0x67) = uVar8;
  *(undefined4 *)((longlong)param_2 + 0x6b) = uVar9;
  *(undefined4 *)((longlong)param_2 + 0x6f) = uVar10;
  *(undefined4 *)(param_2 + 0xb) = uVar4;
  *(undefined4 *)((longlong)param_2 + 0x5c) = uVar5;
  *(undefined4 *)(param_2 + 0xc) = uVar6;
  *(undefined4 *)((longlong)param_2 + 100) = uVar7;
  if (((*param_4 != 0) && (DAT_14c75ef44 == '\x01')) &&
     (iVar15 = (**(code **)(**(longlong **)(*param_4 + 0x510) + 0x68))(), iVar15 == 0)) {
    local_120 = param_2 + 1;
    local_110 = (float *)(param_2 + 4);
    local_118 = param_2 + 8;
    local_128 = (undefined8 *)(param_3 + 0x58);
    FUN_14287c17c(*param_4,&local_108);
    fStack_dc = (*(float *)(param_3 + 0x2c) * local_108._4_4_) / (float)*(int *)(param_1 + 0x44);
    fStack_e0 = (*(float *)(param_3 + 0x28) * (float)local_108) / (float)*(int *)(param_1 + 0x40);
    fStack_e4 = (local_108._4_4_ * *(float *)(param_3 + 0x24)) / (float)*(int *)(param_1 + 0x44);
    local_e8 = ((float)local_108 * *(float *)(param_3 + 0x20)) / (float)*(int *)(param_1 + 0x40);
    local_108 = &PTR_FUN_149eda650;
    local_f0 = *(undefined8 *)(param_3 + 0x18);
    local_100 = *(undefined8 *)(param_3 + 8);
    uStack_f8 = *(undefined8 *)(param_3 + 0x10);
    local_d8 = *(float *)(param_3 + 0x30);
    fStack_d4 = *(float *)(param_3 + 0x34);
    fStack_d0 = *(float *)(param_3 + 0x38);
    fStack_cc = *(float *)(param_3 + 0x3c);
    local_c8 = *(undefined8 *)(param_3 + 0x40);
    local_c0 = *(undefined8 *)(param_3 + 0x48);
    plStack_b8 = *(longlong **)(param_3 + 0x50);
    if (plStack_b8 == (longlong *)0x0) {
      plStack_b8 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plStack_b8 + 1) = (int)plStack_b8[1] + 1;
      UNLOCK();
    }
    uStack_b0 = *local_128;
    uStack_9d = *(undefined8 *)((longlong)local_128 + 0x13);
    uStack_a0 = (undefined3)((ulonglong)*(undefined8 *)((longlong)local_128 + 0xb) >> 0x28);
    uStack_a8 = (undefined4)local_128[1];
    uStack_a4 = (undefined4)((ulonglong)local_128[1] >> 0x20);
    local_120[2] = local_f0;
    *local_120 = local_100;
    local_120[1] = uStack_f8;
    local_110[4] = local_d8;
    local_110[5] = fStack_d4;
    local_110[6] = fStack_d0;
    local_110[7] = fStack_cc;
    *local_110 = local_e8;
    local_110[1] = fStack_e4;
    local_110[2] = fStack_e0;
    local_110[3] = fStack_dc;
    FUN_1413a4742(local_118,&local_c8);
    plVar14 = plStack_b8;
    *(undefined4 *)(param_2 + 0xb) = (undefined4)uStack_b0;
    *(undefined4 *)((longlong)param_2 + 0x5c) = uStack_b0._4_4_;
    *(undefined4 *)(param_2 + 0xc) = uStack_a8;
    *(undefined4 *)((longlong)param_2 + 100) = uStack_a4;
    *(uint *)((longlong)param_2 + 99) = CONCAT31((undefined3)uStack_a4,uStack_a8._3_1_);
    *(uint *)((longlong)param_2 + 0x67) = CONCAT31(uStack_a0,uStack_a4._3_1_);
    *(undefined4 *)((longlong)param_2 + 0x6b) = (undefined4)uStack_9d;
    *(undefined4 *)((longlong)param_2 + 0x6f) = uStack_9d._4_4_;
    local_108 = &PTR_FUN_149eda650;
    if (plStack_b8 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_b8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_b8)(plStack_b8);
        LOCK();
        piVar2 = (int *)((longlong)plVar14 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
    }
  }
  if ((local_90 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1403d0cca FUN_1403d0cca body=1281 status=ok
// SIG undefined FUN_1403d0cca(void)

void FUN_1403d0cca(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint *puVar4;
  char cVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  int iVar11;
  longlong *plVar12;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined4 local_158 [2];
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined4 local_118 [2];
  uint *local_110;
  undefined8 local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  longlong *plStack_b0;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_188;
  plVar12 = *(longlong **)(param_1 + 0x1e8);
  if (plVar12 != (longlong *)0x0) {
    cVar5 = (**(code **)(*plVar12 + 8))(plVar12,param_2);
    if (cVar5 != '\0') {
      local_d8 = *(undefined8 *)(param_1 + 0x1e8);
      local_d0 = *(longlong *)(param_1 + 0x1f0);
      if (local_d0 != 0) {
        LOCK();
        *(int *)(local_d0 + 8) = *(int *)(local_d0 + 8) + 1;
        UNLOCK();
      }
      FUN_1403d061a(&local_c8,param_2,&local_d8);
      (**(code **)(**(longlong **)(param_1 + 0x1e8) + 0x18))
                (*(longlong **)(param_1 + 0x1e8),&local_c8);
      if (*(int *)(param_3 + 0x130) < 1) {
        plVar12 = *(longlong **)(param_1 + 0x200);
        *(undefined8 *)(param_1 + 0x1f8) = 0;
        *(undefined8 *)(param_1 + 0x200) = 0;
        if (plVar12 == (longlong *)0x0) goto LAB_1403d10a4;
LAB_1403d1094:
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
      else {
        lVar8 = param_3 + 8;
        if (*(longlong *)(param_3 + 0x128) != 0) {
          lVar8 = *(longlong *)(param_3 + 0x128);
        }
        uVar2 = *(undefined8 *)(lVar8 + 0x38);
        plVar12 = *(longlong **)(lVar8 + 0x40);
        if (plVar12 == (longlong *)0x0) {
          *(undefined8 *)(param_1 + 0x1f8) = uVar2;
          plVar9 = *(longlong **)(param_1 + 0x200);
          if (plVar9 != (longlong *)0x0) {
LAB_1403d0f83:
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar9 + 0x10))();
            }
            *(longlong **)(param_1 + 0x200) = plVar12;
            if (plVar12 != (longlong *)0x0) goto LAB_1403d1085;
          }
        }
        else {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
          *(undefined8 *)(param_1 + 0x1f8) = uVar2;
          if (*(longlong **)(param_1 + 0x200) != plVar12) {
            LOCK();
            *(int *)((longlong)plVar12 + 0xc) = *(int *)((longlong)plVar12 + 0xc) + 1;
            UNLOCK();
            plVar9 = *(longlong **)(param_1 + 0x200);
            if (plVar9 != (longlong *)0x0) goto LAB_1403d0f83;
            *(longlong **)(param_1 + 0x200) = plVar12;
          }
LAB_1403d1085:
          LOCK();
          plVar9 = plVar12 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*plVar12)(plVar12);
            goto LAB_1403d1094;
          }
        }
      }
LAB_1403d10a4:
      if (*(longlong *)(param_1 + 0x20) != 0) {
        (**(code **)(**(longlong **)(param_1 + 0x1e8) + 0x20))
                  (*(longlong **)(param_1 + 0x1e8),local_118);
        if ((char)local_118[0] == '\0') {
          local_158[0] = CONCAT31(local_158[0]._1_3_,1);
          local_150 = 0;
          uStack_148 = 0;
          local_140 = 0;
          uStack_138 = 0;
          local_130 = 0;
          uStack_128 = 0;
          local_120 = 1;
          FUN_1428f71fa(local_118,local_158);
          FUN_1428f6884(local_158);
        }
        FUN_1428f6564(param_1,local_118);
        FUN_1428f6884(local_118);
      }
      FUN_1469ac82c(&local_c8);
      goto LAB_1403d0d20;
    }
    if (*(longlong *)(param_1 + 0x1e8) != 0) goto LAB_1403d0d20;
  }
  plVar12 = *(longlong **)(param_1 + 0x200);
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar12 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
  }
LAB_1403d0d20:
  lVar8 = param_1 + 0xf8;
  uVar7 = *(uint *)(param_2 + 0x58);
  FUN_1403d1430(lVar8,&local_c8);
  puVar4 = local_c0;
  *local_c0 = uVar7;
  *(undefined8 *)(local_c0 + 1) = *(undefined8 *)(param_2 + 0x20);
  local_c0[3] = 0xffffffff;
  local_118[0] = (undefined4)local_c8;
  local_168 = 0;
  cVar5 = FUN_1403d11cc(lVar8,uVar7,local_c0);
  if (cVar5 == '\0') {
    uVar10 = *(int *)(param_1 + 0x100) - *(int *)(param_1 + 300);
    iVar11 = 1;
    if (3 < uVar10) {
      uVar6 = (ulonglong)(uVar10 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar10 < 1) || (iVar11 <= *(int *)(param_1 + 0x140))) {
      uVar7 = *(int *)(param_1 + 0x140) - 1U & uVar7;
      puVar4[4] = uVar7;
      lVar8 = *(longlong *)(param_1 + 0x138);
      if (*(longlong *)(param_1 + 0x138) == 0) {
        lVar8 = param_1 + 0x130;
      }
      puVar4[3] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x140) - 1U & (longlong)(int)uVar7
                                    ) * 4);
      lVar8 = *(longlong *)(param_1 + 0x138);
      if (*(longlong *)(param_1 + 0x138) == 0) {
        lVar8 = param_1 + 0x130;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x140) - 1U & (longlong)(int)uVar7) * 4)
           = local_118[0];
    }
    else {
      *(int *)(param_1 + 0x140) = iVar11;
      FUN_14612edb6(lVar8);
    }
  }
  lVar8 = param_1 + 0x208;
  FUN_1403d040a(&local_c8,param_3);
  uVar7 = *(uint *)(param_2 + 0x58);
  FUN_1403d1520(lVar8,local_118);
  *local_110 = uVar7;
  *(longlong *)(local_110 + 2) = local_c8;
  local_c8 = 0;
  local_110[4] = (uint)local_c0;
  local_110[5] = local_c0._4_4_;
  local_c0 = (uint *)0x0;
  *(undefined8 *)(local_110 + 6) = local_b8;
  *(longlong **)(local_110 + 8) = plStack_b0;
  local_b8 = 0;
  plStack_b0 = (longlong *)0x0;
  local_110[10] = 0xffffffff;
  local_158[0] = local_118[0];
  uVar7 = *local_110;
  cVar5 = FUN_1403d12d8(lVar8,uVar7,local_110);
  if (cVar5 == '\0') {
    uVar10 = *(int *)(param_1 + 0x210) - *(int *)(param_1 + 0x23c);
    iVar11 = 1;
    if (3 < uVar10) {
      uVar6 = (ulonglong)(uVar10 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar10 < 1) || (iVar11 <= *(int *)(param_1 + 0x250))) {
      uVar7 = *(int *)(param_1 + 0x250) - 1U & uVar7;
      local_110[0xb] = uVar7;
      lVar8 = *(longlong *)(param_1 + 0x248);
      if (*(longlong *)(param_1 + 0x248) == 0) {
        lVar8 = param_1 + 0x240;
      }
      local_110[10] =
           *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x250) - 1U & (longlong)(int)uVar7) * 4);
      lVar8 = *(longlong *)(param_1 + 0x248);
      if (*(longlong *)(param_1 + 0x248) == 0) {
        lVar8 = param_1 + 0x240;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x250) - 1U & (longlong)(int)uVar7) * 4)
           = local_158[0];
    }
    else {
      *(int *)(param_1 + 0x250) = iVar11;
      FUN_1457a716a(lVar8);
    }
  }
  if (plStack_b0 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_b0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plStack_b0 + 0x10))();
    }
  }
  FUN_1447de57f(local_c8,(ulonglong)local_c0 & 0xffffffff);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403d11cc FUN_1403d11cc body=152 status=ok
// SIG undefined FUN_1403d11cc(void)

void FUN_1403d11cc(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  longlong *plVar4;
  int iVar5;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar5 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar5 * 0x14);
        if (*piVar1 == *param_3) {
          uVar2 = *(undefined8 *)param_3;
          piVar1[2] = param_3[2];
          *(undefined8 *)piVar1 = uVar2;
          FUN_1403d1264(param_1,*param_4);
          *param_4 = iVar5;
          uVar3 = 1;
          break;
        }
        iVar5 = piVar1[3];
        uVar3 = 0;
      } while (iVar5 != -1);
      goto LAB_1403d1243;
    }
  }
  uVar3 = 0;
LAB_1403d1243:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar3;
  }
  return;
}



// FUNCTION 1403d1264 FUN_1403d1264 body=116 status=ok
// SIG undefined FUN_1403d1264(void)

void FUN_1403d1264(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x14) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x14);
  *puVar1 = 0xffffffff;
  uVar6 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 1403d12d8 FUN_1403d12d8 body=220 status=ok
// SIG undefined FUN_1403d12d8(void)

undefined8 FUN_1403d12d8(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  int iVar12;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar11 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar11 = (longlong *)param_1[8];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar12 != -1) {
      do {
        piVar2 = (int *)(*param_1 + (longlong)iVar12 * 0x30);
        if (*(int *)(*param_1 + (longlong)iVar12 * 0x30) == *param_3) {
          plVar11 = *(longlong **)(piVar2 + 8);
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar11 + 0x10))();
            }
          }
          FUN_1447de57f(*(undefined8 *)(piVar2 + 2),piVar2[4]);
          if (*(longlong *)(piVar2 + 2) != 0) {
            FUN_1400020a8();
          }
          iVar3 = *param_3;
          iVar4 = param_3[1];
          iVar5 = param_3[2];
          iVar6 = param_3[3];
          iVar7 = param_3[4];
          iVar8 = param_3[5];
          iVar9 = param_3[6];
          iVar10 = param_3[7];
          *(undefined8 *)(piVar2 + 8) = *(undefined8 *)(param_3 + 8);
          piVar2[4] = iVar7;
          piVar2[5] = iVar8;
          piVar2[6] = iVar9;
          piVar2[7] = iVar10;
          *piVar2 = iVar3;
          piVar2[1] = iVar4;
          piVar2[2] = iVar5;
          piVar2[3] = iVar6;
          FUN_1403d13b4(param_1,*param_4);
          *param_4 = iVar12;
          return 1;
        }
        iVar12 = piVar2[10];
      } while (iVar12 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1403d13b4 FUN_1403d13b4 body=124 status=ok
// SIG undefined FUN_1403d13b4(void)

void FUN_1403d13b4(longlong *param_1,int param_2)

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
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 1403d1430 FUN_1403d1430 body=239 status=ok
// SIG undefined FUN_1403d1430(void)

int * FUN_1403d1430(longlong *param_1,int *param_2)

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
      FUN_140171ad2(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x14);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x14) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x14 + *param_1;
  return param_2;
}



// FUNCTION 1403d1520 FUN_1403d1520 body=247 status=ok
// SIG undefined FUN_1403d1520(void)

int * FUN_1403d1520(longlong *param_1,int *param_2)

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


