// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1425cfcc0 FUN_1425cfcc0 body=133 status=ok
// SIG undefined FUN_1425cfcc0(void)

bool FUN_1425cfcc0(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = *(longlong *)(param_1 + 8);
  uVar5 = (uint)param_2;
  uVar4 = 1;
  if ((uVar5 & 0xfffffc00) != 0xd800) {
    plVar2 = *(longlong **)(lVar1 + 0x20);
    lVar3 = plVar2[1];
    if (uVar5 < 0x10000) {
      iVar6 = (uVar5 & 0x3f) + (uint)*(ushort *)(*plVar2 + (param_2 >> 6 & 0x3ffffff) * 2);
    }
    else if (uVar5 < 0x110000) {
      if ((int)uVar5 < (int)plVar2[3]) {
        iVar6 = FUN_1425cceb0();
      }
      else {
        iVar6 = *(int *)((longlong)plVar2 + 0x14) + -2;
      }
    }
    else {
      iVar6 = *(int *)((longlong)plVar2 + 0x14) + -1;
    }
    uVar4 = *(ushort *)(lVar3 + (longlong)iVar6 * 2);
  }
  return *(ushort *)(lVar1 + 0x1e) <= uVar4 || uVar4 < *(ushort *)(lVar1 + 0xe);
}



// FUNCTION 1425cfd50 FUN_1425cfd50 body=38 status=ok
// SIG undefined FUN_1425cfd50(void)

undefined8 FUN_1425cfd50(undefined8 param_1,int param_2)

{
  FUN_1424b70d0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1425cfd80 FUN_1425cfd80 body=9 status=ok
// SIG undefined FUN_1425cfd80(void)

void FUN_1425cfd80(longlong param_1)

{
  FUN_1425d2680(*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 1425cfd90 FUN_1425cfd90 body=9 status=ok
// SIG undefined FUN_1425cfd90(void)

void FUN_1425cfd90(longlong param_1)

{
  FUN_1425d2780(*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 1425cfda0 FUN_1425cfda0 body=90 status=ok
// SIG undefined FUN_1425cfda0(void)

bool FUN_1425cfda0(longlong param_1,int param_2)

{
  byte bVar1;
  longlong lVar2;
  ushort uVar3;
  bool bVar4;
  
  lVar2 = *(longlong *)(param_1 + 8);
  bVar4 = true;
  if ((int)(uint)*(ushort *)(lVar2 + 8) <= param_2) {
    if (param_2 < 0x10000) {
      bVar1 = *(byte *)(*(longlong *)(lVar2 + 0x38) + (longlong)(param_2 >> 8));
      if (bVar1 == 0) {
        return true;
      }
      if ((1 << ((byte)param_2 >> 5) & (uint)bVar1) == 0) {
        return true;
      }
    }
    uVar3 = FUN_1425d5c90(lVar2);
    bVar4 = uVar3 < 2;
  }
  return bVar4;
}



// FUNCTION 1425cfe00 FUN_1425cfe00 body=9 status=ok
// SIG undefined FUN_1425cfe00(void)

void FUN_1425cfe00(longlong param_1)

{
  FUN_1425d5de0(*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 1425cfe10 FUN_1425cfe10 body=9 status=ok
// SIG undefined FUN_1425cfe10(void)

void FUN_1425cfe10(longlong param_1)

{
  FUN_1425d63d0(*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 1425cfe20 FUN_1425cfe20 body=27 status=ok
// SIG undefined FUN_1425cfe20(void)

void FUN_1425cfe20(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1425d5de0(*(undefined8 *)(param_1 + 8),param_2,param_3,0,param_4);
  return;
}



// FUNCTION 1425cfe40 FUN_1425cfe40 body=175 status=ok
// SIG undefined FUN_1425cfe40(void)

undefined8 FUN_1425cfe40(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  short sVar2;
  byte bVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  
  sVar2 = *(short *)(*(longlong *)(param_1 + 8) + 8);
  iVar7 = *(int *)(*(longlong *)(param_1 + 8) + 0xc);
  lVar4 = FUN_140855070();
  *(longlong *)(param_1 + 0x10) = lVar4;
  if (lVar4 == 0) {
    *param_3 = 7;
    uVar5 = 0;
  }
  else {
    iVar6 = (int)sVar2 >> 5;
    if (sVar2 < 0) {
      iVar6 = iVar7;
    }
    lVar1 = lVar4 + (longlong)iVar6 * 2;
    *(longlong *)(param_1 + 0x20) = lVar1;
    iVar7 = 0x1b;
    if ((*(ushort *)(*(longlong *)(param_1 + 8) + 8) & 2) == 0) {
      iVar7 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
    }
    *(int *)(param_1 + 0x28) = iVar7 - iVar6;
    *(longlong *)(param_1 + 0x18) = lVar4;
    if (iVar6 == 0) {
      *(undefined1 *)(param_1 + 0x2c) = 0;
    }
    else {
      *(longlong *)(param_1 + 0x30) = lVar1;
      bVar3 = FUN_1425cfef0(param_1);
      *(byte *)(param_1 + 0x2c) = bVar3;
      while (1 < bVar3) {
        bVar3 = FUN_1425cfef0(param_1);
      }
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x38);
    }
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 1425cfef0 FUN_1425cfef0 body=241 status=ok
// SIG undefined FUN_1425cfef0(void)

ushort FUN_1425cfef0(longlong *param_1)

{
  ushort uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  ushort uVar7;
  
  uVar2 = param_1[6];
  param_1[7] = uVar2;
  if ((ulonglong)param_1[3] < uVar2) {
    param_1[6] = uVar2 - 2;
    uVar7 = *(ushort *)(uVar2 - 2);
    uVar5 = (uint)uVar7;
    if (((uVar7 & 0xfc00) == 0xdc00) && ((ulonglong)param_1[2] < uVar2 - 2)) {
      uVar1 = *(ushort *)(uVar2 - 4);
      if ((uVar1 & 0xfc00) == 0xd800) {
        param_1[6] = uVar2 - 4;
        uVar5 = (uint)uVar7 + (uint)uVar1 * 0x400 + 0xfca02400;
      }
    }
    uVar7 = 0;
    if ((uVar5 & 0xfffffc00) != 0xd800) {
      if (*(ushort *)(*param_1 + 10) <= uVar5) {
        plVar3 = *(longlong **)(*param_1 + 0x20);
        lVar4 = plVar3[1];
        if (uVar5 < 0x10000) {
          iVar6 = (uVar5 & 0x3f) + (uint)*(ushort *)(*plVar3 + (ulonglong)(uVar5 >> 6) * 2);
        }
        else if (uVar5 < 0x110000) {
          if ((int)uVar5 < (int)plVar3[3]) {
            iVar6 = FUN_1425cceb0(plVar3,uVar5);
          }
          else {
            iVar6 = *(int *)((longlong)plVar3 + 0x14) + -2;
          }
        }
        else {
          iVar6 = *(int *)((longlong)plVar3 + 0x14) + -1;
        }
        uVar1 = *(ushort *)(lVar4 + (longlong)iVar6 * 2);
        uVar7 = 0;
        if (0xfbff < uVar1) {
          uVar7 = uVar1 >> 1;
        }
      }
    }
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}



// FUNCTION 1425cfff0 FUN_1425cfff0 body=314 status=ok
// SIG undefined FUN_1425cfff0(void)

undefined8 FUN_1425cfff0(longlong param_1,longlong param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  param_3 = param_3 - (int)param_2;
  iVar6 = (int)((ulonglong)(*(longlong *)(param_1 + 0x20) - lVar3) >> 1);
  if ((iVar6 <= param_3) && (param_3 / 3 <= iVar6)) {
    uVar5 = 0;
    uVar9 = 0;
    do {
      iVar4 = (int)uVar5;
      iVar11 = (int)uVar9;
      if (iVar6 <= iVar4) {
        return CONCAT71((int7)(uVar5 >> 8),param_3 <= iVar11);
      }
      if (param_3 <= iVar11) {
        return 0;
      }
      uVar8 = iVar4 + 1;
      uVar2 = *(ushort *)(lVar3 + (longlong)iVar4 * 2);
      uVar10 = (uint)uVar2;
      if ((uVar2 & 0xfc00) == 0xd800) {
        uVar10 = (uint)uVar2 * 0x400 + (uint)*(ushort *)(lVar3 + (longlong)(int)uVar8 * 2) +
                 0xfca02400;
        uVar8 = iVar4 + 2;
      }
      uVar5 = (ulonglong)uVar8;
      lVar7 = (longlong)iVar11;
      uVar9 = lVar7 + 1;
      bVar1 = *(byte *)(param_2 + lVar7);
      uVar8 = (uint)bVar1;
      if ((char)bVar1 < '\0') {
        if (bVar1 < 0xe0) {
          uVar12 = iVar11 + 2;
          uVar8 = (uVar8 & 0x1f) << 6 | *(byte *)(param_2 + uVar9) & 0x3f;
        }
        else if (bVar1 < 0xf0) {
          uVar8 = (uVar8 & 0xf) << 0xc | (*(byte *)(param_2 + uVar9) & 0x3f) << 6 |
                  *(byte *)(lVar7 + 2 + param_2) & 0x3f;
          uVar12 = iVar11 + 3;
        }
        else {
          uVar8 = *(byte *)(lVar7 + 3 + param_2) & 0x3f |
                  (*(byte *)(lVar7 + 2 + param_2) & 0x3f) << 6 |
                  (*(byte *)(param_2 + uVar9) & 0x3f) << 0xc | (uVar8 & 7) << 0x12;
          uVar12 = iVar11 + 4;
        }
        uVar9 = (ulonglong)uVar12;
      }
      uVar9 = uVar9 & 0xffffffff;
    } while (uVar10 == uVar8);
  }
  return 0;
}



// FUNCTION 1425d0140 FUN_1425d0140 body=500 status=ok
// SIG undefined FUN_1425d0140(void)

undefined8 FUN_1425d0140(longlong param_1,uint param_2,byte param_3,undefined4 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  ushort uVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  ushort *puVar7;
  ushort *puVar8;
  ushort *puVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  
  if (*(int *)(param_1 + 0x28) < 2) {
    lVar1 = *(longlong *)(param_1 + 0x18);
    lVar2 = *(longlong *)(param_1 + 0x10);
    uVar12 = (ulonglong)(*(longlong *)(param_1 + 0x20) - lVar2) >> 1;
    iVar11 = (int)uVar12;
    FUN_1408550d0(*(undefined8 *)(param_1 + 8),uVar12 & 0xffffffff);
    lVar6 = *(longlong *)(param_1 + 8);
    iVar5 = 0x36;
    if ((*(ushort *)(lVar6 + 8) & 2) == 0) {
      iVar5 = *(int *)(lVar6 + 0x10) * 2;
    }
    if (iVar5 < iVar11 + 2) {
      iVar5 = iVar11 + 2;
    }
    iVar10 = 0x100;
    if (0x100 < iVar5) {
      iVar10 = iVar5;
    }
    lVar6 = FUN_140855070(lVar6,iVar10);
    *(longlong *)(param_1 + 0x10) = lVar6;
    if (lVar6 == 0) {
      *param_4 = 7;
      return 0;
    }
    *(longlong *)(param_1 + 0x18) = lVar6 + (longlong)(int)((ulonglong)(lVar1 - lVar2) >> 1) * 2;
    *(longlong *)(param_1 + 0x20) = lVar6 + (longlong)iVar11 * 2;
    iVar5 = 0x1b;
    if ((*(ushort *)(*(longlong *)(param_1 + 8) + 8) & 2) == 0) {
      iVar5 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
    }
    *(int *)(param_1 + 0x28) = iVar5 - iVar11;
  }
  uVar3 = (ushort)param_2;
  if ((param_3 == 0) || (*(byte *)(param_1 + 0x2c) <= param_3)) {
    **(short **)(param_1 + 0x20) = (short)(param_2 >> 10) + -0x2840;
    *(ushort *)(*(longlong *)(param_1 + 0x20) + 2) = uVar3 & 0x3ff | 0xdc00;
    puVar7 = (ushort *)(*(longlong *)(param_1 + 0x20) + 4);
    *(ushort **)(param_1 + 0x20) = puVar7;
    *(byte *)(param_1 + 0x2c) = param_3;
    if (1 < param_3) goto LAB_1425d0313;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x20);
    *(longlong *)(param_1 + 0x38) = lVar1;
    *(ulonglong *)(param_1 + 0x30) = lVar1 - 2U;
    if ((((*(ushort *)(lVar1 + -2) & 0xfc00) == 0xdc00) &&
        (*(ulonglong *)(param_1 + 0x10) < lVar1 - 2U)) &&
       ((*(ushort *)(lVar1 + -4) & 0xfc00) == 0xd800)) {
      *(longlong *)(param_1 + 0x30) = lVar1 + -4;
    }
    do {
      bVar4 = FUN_1425cfef0(param_1);
    } while (param_3 < bVar4);
    puVar9 = *(ushort **)(param_1 + 0x20);
    puVar7 = (ushort *)(-(ulonglong)(param_2 < 0x10000) + 2);
    *(ushort **)(param_1 + 0x20) = puVar9 + (longlong)puVar7;
    do {
      puVar8 = puVar9;
      puVar8[-(ulonglong)(param_2 < 0x10000) + 1] = puVar8[-1];
      puVar9 = puVar8 + -1;
    } while (puVar9 != *(ushort **)(param_1 + 0x38));
    if (0xffff < (int)param_2) {
      param_2 = (param_2 >> 10) - 0x2840;
      *puVar8 = uVar3 & 0x3ff | 0xdc00;
    }
    *puVar9 = (ushort)param_2;
    if (1 < param_3) goto LAB_1425d0313;
    puVar7 = puVar9 + (longlong)puVar7;
  }
  *(ushort **)(param_1 + 0x18) = puVar7;
LAB_1425d0313:
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -2;
  return CONCAT71((int7)((ulonglong)puVar7 >> 8),1);
}



// FUNCTION 1425d0340 FUN_1425d0340 body=1117 status=ok
// SIG undefined FUN_1425d0340(void)

ulonglong FUN_1425d0340(longlong *param_1,ushort *param_2,int param_3,char param_4,byte param_5,
                       byte param_6,undefined4 *param_7)

{
  undefined2 uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  byte bVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  ushort *puVar11;
  ushort *puVar12;
  int iVar13;
  uint uVar14;
  ushort uVar15;
  ulonglong uVar16;
  undefined8 unaff_R13;
  ulonglong uVar17;
  undefined7 uVar18;
  uint uVar19;
  
  uVar17 = CONCAT71((int7)((ulonglong)unaff_R13 >> 8),1);
  if (param_3 == 0) goto LAB_1425d079b;
  iVar7 = (int)param_1[5];
  if (iVar7 < param_3) {
    lVar10 = param_1[3];
    lVar2 = param_1[2];
    uVar16 = (ulonglong)(param_1[4] - lVar2) >> 1;
    iVar8 = (int)uVar16;
    FUN_1408550d0(param_1[1],uVar16 & 0xffffffff);
    lVar9 = param_1[1];
    iVar7 = 0x36;
    if ((*(ushort *)(lVar9 + 8) & 2) == 0) {
      iVar7 = *(int *)(lVar9 + 0x10) * 2;
    }
    if (iVar7 < iVar8 + param_3) {
      iVar7 = iVar8 + param_3;
    }
    iVar13 = 0x100;
    if (0x100 < iVar7) {
      iVar13 = iVar7;
    }
    lVar9 = FUN_140855070(lVar9,iVar13);
    param_1[2] = lVar9;
    if (lVar9 == 0) {
      *param_7 = 7;
      uVar17 = 0;
      goto LAB_1425d079b;
    }
    param_1[3] = lVar9 + (longlong)(int)((ulonglong)(lVar10 - lVar2) >> 1) * 2;
    param_1[4] = lVar9 + (longlong)iVar8 * 2;
    iVar7 = 0x1b;
    if ((*(byte *)(param_1[1] + 8) & 2) == 0) {
      iVar7 = *(int *)(param_1[1] + 0x10);
    }
    iVar7 = iVar7 - iVar8;
  }
  *(int *)(param_1 + 5) = iVar7 - param_3;
  if ((param_5 != 0) && (param_5 < *(byte *)((longlong)param_1 + 0x2c))) {
    uVar19 = (uint)*param_2;
    iVar7 = 1;
    if ((param_3 != 1) && (((uVar19 & 0xfc00) == 0xd800 && ((param_2[1] & 0xfc00) == 0xdc00)))) {
      uVar19 = (uint)*param_2 * 0x400 + (uint)param_2[1] + 0xfca02400;
      iVar7 = 2;
    }
    lVar10 = param_1[4];
    param_1[7] = lVar10;
    param_1[6] = lVar10 - 2U;
    if ((((*(ushort *)(lVar10 + -2) & 0xfc00) == 0xdc00) && ((ulonglong)param_1[2] < lVar10 - 2U))
       && ((*(ushort *)(lVar10 + -4) & 0xfc00) == 0xd800)) {
      param_1[6] = lVar10 + -4;
    }
    do {
      bVar5 = FUN_1425cfef0(param_1);
    } while (param_5 < bVar5);
    puVar12 = (ushort *)param_1[4];
    lVar10 = -(ulonglong)(uVar19 < 0x10000) + 2;
    param_1[4] = (longlong)(puVar12 + lVar10);
    do {
      puVar11 = puVar12;
      puVar11[-(ulonglong)(uVar19 < 0x10000) + 1] = puVar11[-1];
      puVar12 = puVar11 + -1;
    } while (puVar12 != (ushort *)param_1[7]);
    uVar14 = uVar19;
    if (0xffff < (int)uVar19) {
      uVar14 = (uVar19 >> 10) - 0x2840;
      *puVar11 = (ushort)uVar19 & 0x3ff | 0xdc00;
    }
    *puVar12 = (ushort)uVar14;
    if (1 < param_5) goto LAB_1425d0560;
    param_1[3] = (longlong)(puVar12 + lVar10);
joined_r0x0001425d0543:
    if (iVar7 < param_3) {
      do {
        iVar8 = iVar7 + 1;
        uVar15 = param_2[iVar7];
        uVar16 = (ulonglong)uVar15;
        if ((((uVar15 & 0xfc00) == 0xd800) && (iVar8 != param_3)) &&
           ((param_2[iVar8] & 0xfc00) == 0xdc00)) {
          uVar16 = (ulonglong)((uint)uVar15 * 0x400 + (uint)param_2[iVar8] + 0xfca02400);
          iVar8 = iVar7 + 2;
        }
        iVar7 = iVar8;
        uVar15 = (ushort)param_6;
        uVar19 = (uint)uVar16;
        if (iVar7 < param_3) {
          lVar10 = *param_1;
          if (param_4 == '\0') {
            uVar6 = 1;
            if ((uVar19 & 0xfffffc00) != 0xd800) {
              plVar3 = *(longlong **)(lVar10 + 0x20);
              lVar2 = plVar3[1];
              if (uVar19 < 0x10000) {
                iVar8 = (uVar19 & 0x3f) + (uint)*(ushort *)(*plVar3 + (uVar16 >> 6) * 2);
              }
              else if (uVar19 < 0x110000) {
                if ((int)uVar19 < (int)plVar3[3]) {
                  iVar8 = FUN_1425cceb0(plVar3,uVar16,uVar15);
                }
                else {
                  iVar8 = *(int *)((longlong)plVar3 + 0x14) + -2;
                }
              }
              else {
                iVar8 = *(int *)((longlong)plVar3 + 0x14) + -1;
              }
              uVar6 = *(ushort *)(lVar2 + (longlong)iVar8 * 2);
              uVar18 = (undefined7)((ulonglong)lVar2 >> 8);
              if (0xfbff < uVar6) {
                uVar15 = uVar6 >> 1;
                uVar17 = CONCAT71(uVar18,1);
                goto LAB_1425d06ab;
              }
              uVar17 = CONCAT71(uVar18,1);
            }
            uVar15 = 0;
            if ((*(ushort *)(lVar10 + 0x12) <= uVar6) && (uVar6 < *(ushort *)(lVar10 + 0x1a))) {
              if ((*(byte *)(*(longlong *)(lVar10 + 0x30) + (ulonglong)(uVar6 >> 1) * 2) & 0x80) ==
                  0) {
                uVar15 = 0;
              }
              else {
                uVar15 = (ushort)*(byte *)(*(longlong *)(lVar10 + 0x30) + -2 +
                                          (ulonglong)(uVar6 >> 1) * 2);
              }
            }
          }
          else {
            plVar3 = *(longlong **)(lVar10 + 0x20);
            lVar10 = plVar3[1];
            if (uVar19 < 0x10000) {
              iVar8 = (uVar19 & 0x3f) + (uint)*(ushort *)(*plVar3 + (uVar16 >> 6) * 2);
            }
            else if (uVar19 < 0x110000) {
              if ((int)uVar19 < (int)plVar3[3]) {
                iVar8 = FUN_1425cceb0(plVar3,uVar16,uVar15);
              }
              else {
                iVar8 = *(int *)((longlong)plVar3 + 0x14) + -2;
              }
            }
            else {
              iVar8 = *(int *)((longlong)plVar3 + 0x14) + -1;
            }
            uVar6 = *(ushort *)(lVar10 + (longlong)iVar8 * 2);
            uVar15 = uVar6 >> 1;
            if (uVar6 < 0xfc00) {
              uVar15 = 0;
            }
          }
        }
LAB_1425d06ab:
        if (uVar19 < 0x10000) goto code_r0x0001425d06bb;
        FUN_1425d0140(param_1,uVar16,uVar15,param_7);
LAB_1425d0560:
        if (param_3 <= iVar7) break;
      } while( true );
    }
    goto LAB_1425d079b;
  }
  if (param_6 < 2) {
    lVar10 = (longlong)param_3 * 2 + param_1[4];
LAB_1425d0757:
    param_1[3] = lVar10;
  }
  else if (param_5 < 2) {
    lVar10 = param_1[4] + 2;
    goto LAB_1425d0757;
  }
  lVar10 = 0;
  do {
    uVar1 = *(undefined2 *)((longlong)param_2 + lVar10);
    puVar4 = (undefined2 *)param_1[4];
    param_1[4] = (longlong)(puVar4 + 1);
    *puVar4 = uVar1;
    lVar10 = lVar10 + 2;
  } while ((longlong)param_3 * 2 != lVar10);
  *(byte *)((longlong)param_1 + 0x2c) = param_6;
LAB_1425d079b:
  return uVar17 & 0xffffffff;
code_r0x0001425d06bb:
  FUN_1425d3f80(param_1,uVar16,uVar15,param_7);
  goto joined_r0x0001425d0543;
}



// FUNCTION 1425d07b0 FUN_1425d07b0 body=312 status=ok
// SIG undefined FUN_1425d07b0(void)

undefined8 FUN_1425d07b0(longlong param_1,uint param_2,undefined4 *param_3)

{
  longlong lVar1;
  ushort *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  
  iVar9 = 2 - (uint)(param_2 < 0x10000);
  iVar3 = *(int *)(param_1 + 0x28);
  if (iVar3 < iVar9) {
    lVar5 = *(longlong *)(param_1 + 0x18);
    lVar1 = *(longlong *)(param_1 + 0x10);
    uVar8 = (ulonglong)(*(longlong *)(param_1 + 0x20) - lVar1) >> 1;
    iVar7 = (int)uVar8;
    FUN_1408550d0(*(undefined8 *)(param_1 + 8),uVar8 & 0xffffffff);
    lVar4 = *(longlong *)(param_1 + 8);
    iVar3 = 0x36;
    if ((*(ushort *)(lVar4 + 8) & 2) == 0) {
      iVar3 = *(int *)(lVar4 + 0x10) * 2;
    }
    if (iVar3 < iVar9 + iVar7) {
      iVar3 = iVar9 + iVar7;
    }
    iVar6 = 0x100;
    if (0x100 < iVar3) {
      iVar6 = iVar3;
    }
    lVar4 = FUN_140855070(lVar4,iVar6);
    *(longlong *)(param_1 + 0x10) = lVar4;
    if (lVar4 == 0) {
      *param_3 = 7;
      return 0;
    }
    *(longlong *)(param_1 + 0x18) = lVar4 + (longlong)(int)((ulonglong)(lVar5 - lVar1) >> 1) * 2;
    *(longlong *)(param_1 + 0x20) = lVar4 + (longlong)iVar7 * 2;
    iVar3 = 0x1b;
    if ((*(byte *)(*(longlong *)(param_1 + 8) + 8) & 2) == 0) {
      iVar3 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
    }
    iVar3 = iVar3 - iVar7;
  }
  *(int *)(param_1 + 0x28) = iVar3 - iVar9;
  if (param_2 < 0x10000) {
    puVar2 = *(ushort **)(param_1 + 0x20);
    *(ushort **)(param_1 + 0x20) = puVar2 + 1;
    *puVar2 = (ushort)param_2;
    lVar5 = *(longlong *)(param_1 + 0x20);
  }
  else {
    **(short **)(param_1 + 0x20) = (short)(param_2 >> 10) + -0x2840;
    *(ushort *)(*(longlong *)(param_1 + 0x20) + 2) = (ushort)param_2 & 0x3ff | 0xdc00;
    lVar5 = *(longlong *)(param_1 + 0x20) + 4;
    *(longlong *)(param_1 + 0x20) = lVar5;
  }
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(longlong *)(param_1 + 0x18) = lVar5;
  return CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
}



// FUNCTION 1425d08f0 FUN_1425d08f0 body=274 status=ok
// SIG undefined FUN_1425d08f0(void)

ulonglong FUN_1425d08f0(longlong param_1,longlong param_2,longlong param_3,undefined4 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 unaff_RSI;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  
  uVar8 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (param_2 != param_3) {
    uVar7 = (ulonglong)(param_3 - param_2) >> 1;
    iVar6 = (int)uVar7;
    if (*(int *)(param_1 + 0x28) < iVar6) {
      lVar1 = *(longlong *)(param_1 + 0x18);
      lVar2 = *(longlong *)(param_1 + 0x10);
      uVar10 = (ulonglong)(*(longlong *)(param_1 + 0x20) - lVar2) >> 1;
      iVar9 = (int)uVar10;
      FUN_1408550d0(*(undefined8 *)(param_1 + 8),uVar10 & 0xffffffff);
      lVar4 = *(longlong *)(param_1 + 8);
      iVar3 = 0x36;
      if ((*(ushort *)(lVar4 + 8) & 2) == 0) {
        iVar3 = *(int *)(lVar4 + 0x10) * 2;
      }
      if (iVar3 < iVar9 + iVar6) {
        iVar3 = iVar9 + iVar6;
      }
      iVar5 = 0x100;
      if (0x100 < iVar3) {
        iVar5 = iVar3;
      }
      lVar4 = FUN_140855070(lVar4,iVar5);
      *(longlong *)(param_1 + 0x10) = lVar4;
      if (lVar4 == 0) {
        *param_4 = 7;
        uVar8 = 0;
        goto LAB_1425d09e3;
      }
      *(longlong *)(param_1 + 0x18) = lVar4 + (longlong)(int)((ulonglong)(lVar1 - lVar2) >> 1) * 2;
      lVar4 = lVar4 + (longlong)iVar9 * 2;
      *(longlong *)(param_1 + 0x20) = lVar4;
      iVar3 = 0x1b;
      if ((*(ushort *)(*(longlong *)(param_1 + 8) + 8) & 2) == 0) {
        iVar3 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
      }
      *(int *)(param_1 + 0x28) = iVar3 - iVar9;
    }
    else {
      lVar4 = *(longlong *)(param_1 + 0x20);
    }
    FUN_142504850(lVar4,param_2,uVar7 & 0xffffffff);
    lVar4 = (longlong)iVar6 * 2 + *(longlong *)(param_1 + 0x20);
    *(longlong *)(param_1 + 0x20) = lVar4;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) - iVar6;
    *(undefined1 *)(param_1 + 0x2c) = 0;
    *(longlong *)(param_1 + 0x18) = lVar4;
  }
LAB_1425d09e3:
  return uVar8 & 0xffffffff;
}



// FUNCTION 1425d0a10 FUN_1425d0a10 body=76 status=ok
// SIG undefined FUN_1425d0a10(void)

void FUN_1425d0a10(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_64::Normalizer2Impl::vftable;
  puVar1 = (undefined8 *)param_1[9];
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1426a6d90(*puVar1);
    FUN_1425ccea0(puVar1[1]);
    FUN_142515ff0(puVar1 + 2);
    FUN_1401773f0(puVar1);
  }
  FUN_1424b70d0(param_1);
  return;
}



// FUNCTION 1425d0a60 FUN_1425d0a60 body=161 status=ok
// SIG undefined FUN_1425d0a60(void)

void FUN_1425d0a60(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5)

{
  uint uVar1;
  
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_2 + 0x20);
  *(undefined2 *)(param_1 + 10) = *(undefined2 *)(param_2 + 0x24);
  *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_2 + 0x48);
  *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(param_2 + 0x28);
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x38);
  *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(param_2 + 0x2c);
  *(undefined2 *)(param_1 + 0x14) = *(undefined2 *)(param_2 + 0x3c);
  *(undefined2 *)(param_1 + 0x16) = *(undefined2 *)(param_2 + 0x40);
  *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(param_2 + 0x44);
  *(undefined2 *)(param_1 + 0x1a) = *(undefined2 *)(param_2 + 0x30);
  uVar1 = *(uint *)(param_2 + 0x34) & 0xffff;
  *(short *)(param_1 + 0x1e) = (short)*(uint *)(param_2 + 0x34);
  *(short *)(param_1 + 0x1c) = (short)(uVar1 >> 3) + -0x41;
  *(undefined8 *)(param_1 + 0x20) = param_3;
  *(longlong *)(param_1 + 0x28) = param_4;
  *(longlong *)(param_1 + 0x30) = param_4 + (longlong)((int)(0xfc00 - uVar1) >> 1) * 2;
  *(undefined8 *)(param_1 + 0x38) = param_5;
  return;
}



// FUNCTION 1425d0b10 FUN_1425d0b10 body=452 status=ok
// SIG undefined FUN_1425d0b10(void)

void FUN_1425d0b10(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  byte bVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  uint *local_68;
  uint local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = 0;
  uStack_70 = 0;
  iVar7 = 0;
  local_68 = &local_54;
  iVar5 = FUN_1425cd270(*(undefined8 *)(param_1 + 0x20),0,1,1);
  do {
    if (iVar5 < 0) {
      uVar6 = 0xac00;
      do {
        (*(code *)param_2[1])(*param_2,uVar6);
        (*(code *)param_2[1])(*param_2,uVar6 + 1);
        bVar8 = uVar6 < 0xd788;
        uVar6 = uVar6 + 0x1c;
      } while (bVar8);
      (*(code *)param_2[1])(*param_2,0xd7a4);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_98);
    }
    (*(code *)param_2[1])(*param_2,iVar7);
    if ((((iVar7 != iVar5) && (2 < (local_54 & 6))) &&
        (*(ushort *)(param_1 + 0x1a) <= (ushort)local_54)) &&
       ((ushort)local_54 < *(ushort *)(param_1 + 0x1e))) {
      if (iVar7 < (int)(uint)*(ushort *)(param_1 + 8)) {
        sVar3 = 0;
      }
      else {
        if (iVar7 < 0x10000) {
          bVar2 = *(byte *)(*(longlong *)(param_1 + 0x38) + (longlong)(iVar7 >> 8));
          sVar3 = 0;
          if ((bVar2 == 0) || ((1 << ((byte)iVar7 >> 5) & (uint)bVar2) == 0)) goto LAB_1425d0c16;
        }
        sVar3 = FUN_1425d5c90(param_1,iVar7);
      }
LAB_1425d0c16:
      if (iVar7 < iVar5) {
        do {
          iVar1 = iVar7 + 1;
          if (iVar1 < (int)(uint)*(ushort *)(param_1 + 8)) {
            sVar4 = 0;
          }
          else {
            if (iVar7 < 0xffff) {
              bVar2 = *(byte *)(*(longlong *)(param_1 + 0x38) + (longlong)(iVar1 >> 8));
              sVar4 = 0;
              if ((bVar2 == 0) || (sVar4 = 0, (1 << ((byte)iVar1 >> 5) & (uint)bVar2) == 0))
              goto LAB_1425d0c81;
            }
            sVar4 = FUN_1425d5c90(param_1,iVar1);
          }
LAB_1425d0c81:
          if (sVar4 != sVar3) {
            (*(code *)param_2[1])(*param_2,iVar1);
            sVar3 = sVar4;
          }
          iVar7 = iVar1;
        } while (iVar5 != iVar1);
      }
    }
    iVar7 = iVar5 + 1;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = &local_54;
    iVar5 = FUN_1425cd270(*(undefined8 *)(param_1 + 0x20),iVar7,1,1);
  } while( true );
}



// FUNCTION 1425d0cf0 FUN_1425d0cf0 body=247 status=ok
// SIG undefined FUN_1425d0cf0(void)

void FUN_1425d0cf0(longlong param_1,undefined8 *param_2,int *param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined8 local_50;
  undefined1 *local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_3 < 1) {
    piVar1 = (int *)(param_1 + 0x40);
    if ((*piVar1 == 2) || (cVar2 = FUN_142501800(piVar1), cVar2 == '\0')) {
      if (0 < *(int *)(param_1 + 0x44)) {
        *param_3 = *(int *)(param_1 + 0x44);
        goto LAB_1425d0dda;
      }
    }
    else {
      FUN_1425d6970(param_1,param_3);
      *(int *)(param_1 + 0x44) = *param_3;
      FUN_1425019c0(piVar1);
    }
    if (*param_3 < 1) {
      local_58 = &LAB_1425d0e60;
      local_50 = 0;
      iVar4 = 0;
      local_48 = local_3c;
      iVar3 = FUN_1425cd270(*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 8),0,0,0);
      while (-1 < iVar3) {
        (*(code *)param_2[1])(*param_2,iVar4);
        iVar4 = iVar3 + 1;
        local_58 = &LAB_1425d0e60;
        local_50 = 0;
        local_48 = local_3c;
        iVar3 = FUN_1425cd270(*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 8),iVar4,0,0);
      }
    }
  }
LAB_1425d0dda:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
}



// FUNCTION 1425d0e00 FUN_1425d0e00 body=90 status=ok
// SIG undefined FUN_1425d0e00(void)

bool FUN_1425d0e00(longlong param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  
  if (*param_2 < 1) {
    piVar1 = (int *)(param_1 + 0x40);
    if (*piVar1 != 2) {
      cVar2 = FUN_142501800(piVar1);
      if (cVar2 != '\0') {
        FUN_1425d6970(param_1,param_2);
        *(int *)(param_1 + 0x44) = *param_2;
        FUN_1425019c0(piVar1);
        goto LAB_1425d0e4c;
      }
    }
    if (0 < *(int *)(param_1 + 0x44)) {
      *param_2 = *(int *)(param_1 + 0x44);
    }
  }
LAB_1425d0e4c:
  return *param_2 < 1;
}



// FUNCTION 1425d0e70 FUN_1425d0e70 body=121 status=ok
// SIG undefined FUN_1425d0e70(void)

longlong FUN_1425d0e70(undefined8 param_1,longlong param_2,longlong param_3,int *param_4)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  
  if (*param_4 < 1) {
    uVar1 = *(ushort *)(param_2 + 8);
    if ((uVar1 & 0x11) == 0) {
      if ((uVar1 & 2) == 0) {
        lVar3 = *(longlong *)(param_2 + 0x18);
      }
      else {
        lVar3 = param_2 + 10;
      }
      if ((param_3 != param_2) && (lVar3 != 0)) {
        if ((short)uVar1 < 0) {
          iVar2 = *(int *)(param_2 + 0xc);
        }
        else {
          iVar2 = (int)(short)uVar1 >> 5;
        }
        FUN_1425d0ef0(param_1,lVar3,lVar3 + (longlong)iVar2 * 2,param_3,iVar2,param_4);
        return param_3;
      }
    }
    *param_4 = 1;
  }
  FUN_1424a7130(param_3);
  return param_3;
}



// FUNCTION 1425d0ef0 FUN_1425d0ef0 body=182 status=ok
// SIG undefined FUN_1425d0ef0(void)

void FUN_1425d0ef0(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,
                  uint param_5,undefined8 param_6)

{
  char cVar1;
  ushort uVar2;
  ulonglong uVar3;
  undefined8 local_70;
  longlong local_68;
  longlong local_60;
  undefined5 uStack_58;
  undefined3 uStack_53;
  undefined5 local_50;
  undefined3 uStack_4b;
  undefined5 uStack_48;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  uVar3 = (ulonglong)(param_3 - param_2) >> 1 & 0xffffffff;
  if (-1 < (int)param_5) {
    uVar3 = (ulonglong)param_5;
  }
  if (param_3 == 0) {
    uVar3 = (ulonglong)param_5;
  }
  uVar2 = 2;
  if ((*(ushort *)(param_4 + 8) & 1) == 0) {
    uVar2 = *(ushort *)(param_4 + 8) & 0x1f;
  }
  *(ushort *)(param_4 + 8) = uVar2;
  local_60 = 0;
  uStack_58 = 0;
  uStack_53 = 0;
  local_50 = 0;
  uStack_4b = 0;
  uStack_48 = 0;
  local_70 = param_1;
  local_68 = param_4;
  cVar1 = FUN_1425cfe40(&local_70,uVar3,param_6);
  if (cVar1 != '\0') {
    FUN_1425d1000(param_1,param_2,param_3,&local_70,param_6);
  }
  if (local_60 != 0) {
    FUN_1408550d0(local_68,(ulonglong)(CONCAT35(uStack_4b,local_50) - local_60) >> 1);
  }
  return;
}



// FUNCTION 1425d0fb0 Unwind@1425d0fb0 body=40 status=ok
// SIG undefined Unwind@1425d0fb0(void)

void Unwind_1425d0fb0(undefined8 param_1,longlong param_2)

{
  FUN_142517840(param_2 + 0x28);
  return;
}



// FUNCTION 1425d0fe0 Unwind@1425d0fe0 body=24 status=ok
// SIG undefined Unwind@1425d0fe0(void)

void Unwind_1425d0fe0(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1425d1000 FUN_1425d1000 body=750 status=ok
// SIG undefined FUN_1425d1000(void)

ushort * FUN_1425d1000(longlong param_1,ushort *param_2,ushort *param_3,longlong param_4,
                      int *param_5)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  longlong *plVar4;
  longlong lVar5;
  ushort *puVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  ushort *puVar10;
  longlong lVar11;
  ushort uVar12;
  uint uVar13;
  byte bVar14;
  uint uVar15;
  ushort *puVar16;
  uint local_54;
  ushort *local_48;
  
  uVar1 = *(ushort *)(param_1 + 8);
  if (param_3 == (ushort *)0x0) {
    lVar5 = 0;
    do {
      lVar11 = lVar5;
      if (*(ushort *)((longlong)param_2 + lVar11) == 0) break;
      lVar5 = lVar11 + 2;
    } while (*(ushort *)((longlong)param_2 + lVar11) < uVar1);
    puVar16 = (ushort *)((longlong)param_2 + lVar11);
    if ((param_4 != 0) && (lVar11 + 2 != 2)) {
      FUN_1425d08f0(param_4,param_2,puVar16,param_5);
    }
    if (0 < *param_5) {
      return puVar16;
    }
    param_3 = (ushort *)FUN_142503f80(puVar16,0);
    param_2 = puVar16;
  }
  uVar13 = 0;
  local_54 = 0;
  local_48 = param_2;
LAB_1425d1045:
  do {
    puVar16 = param_2;
    if (param_2 == param_3) {
      return param_3;
    }
    do {
      uVar2 = *puVar16;
      uVar15 = (uint)uVar2;
      if (uVar2 < uVar1) {
LAB_1425d1090:
        puVar10 = puVar16 + 1;
      }
      else {
        plVar4 = *(longlong **)(param_1 + 0x20);
        lVar5 = plVar4[1];
        uVar3 = *(ushort *)
                 (lVar5 + ((ulonglong)(uVar2 & 0x3f) +
                          (ulonglong)*(ushort *)(*plVar4 + (ulonglong)(uVar2 >> 6) * 2)) * 2);
        uVar13 = (uint)uVar3;
        if (((uVar13 & 0xfdff) == 0xfc00) || (uVar12 = *(ushort *)(param_1 + 0xe), uVar3 < uVar12))
        goto LAB_1425d1090;
        puVar6 = puVar16;
        if (((uVar2 & 0xfc00) != 0xd800) ||
           (puVar10 = puVar16 + 1, puVar6 = param_3, puVar10 == param_3)) break;
        if ((*puVar10 & 0xfc00) == 0xdc00) {
          uVar15 = (uint)uVar2 * 0x400 + (uint)*puVar10 + 0xfca02400;
          if ((int)uVar15 < (int)plVar4[3]) {
            iVar9 = FUN_1425cceb0(plVar4,uVar15);
            uVar12 = *(ushort *)(param_1 + 0xe);
          }
          else {
            iVar9 = *(int *)((longlong)plVar4 + 0x14) + -2;
          }
          uVar2 = *(ushort *)(lVar5 + (longlong)iVar9 * 2);
          uVar13 = (uint)uVar2;
          puVar10 = puVar16 + 2;
          if (((uVar13 & 0xfdff) != 0xfc00) && (puVar6 = puVar16, uVar12 <= uVar2)) break;
        }
      }
      puVar16 = puVar10;
      puVar6 = param_3;
    } while (puVar10 != param_3);
    if (puVar6 == param_2) {
      if (param_2 == param_3) {
        return param_3;
      }
      param_2 = puVar6 + (ulonglong)(0xffff < uVar15) + 1;
      if (param_4 == 0) break;
    }
    else {
      if (param_4 == 0) {
        if (puVar6 == param_3) {
          return param_3;
        }
        param_2 = puVar6 + (ulonglong)(0xffff < uVar15) + 1;
        uVar2 = *(ushort *)(param_1 + 0xe);
        bVar7 = 0;
        goto joined_r0x0001425d1243;
      }
      cVar8 = FUN_1425d08f0(param_4,param_2,puVar6,param_5);
      if (puVar6 == param_3) {
        return puVar6;
      }
      if (cVar8 == '\0') {
        return puVar6;
      }
      param_2 = puVar6 + (ulonglong)(0xffff < uVar15) + 1;
    }
    cVar8 = FUN_1425d1310(param_1,uVar15,uVar13,param_4,param_5);
    if (cVar8 == '\0') {
      return param_2;
    }
  } while( true );
  uVar2 = *(ushort *)(param_1 + 0xe);
  puVar6 = local_48;
  bVar7 = (byte)local_54;
joined_r0x0001425d1243:
  if ((uVar2 <= (ushort)uVar13) && ((ushort)uVar13 < *(ushort *)(param_1 + 0x1e))) {
    return puVar6;
  }
  local_54 = uVar13 >> 1;
  if (uVar13 < 0xfc00) {
    local_54 = 0;
  }
  bVar14 = (byte)local_54;
  local_48 = puVar6;
  if (bVar14 < 2) {
    local_48 = param_2;
  }
  if ((bVar14 != 0) && (bVar14 < bVar7)) {
    return puVar6;
  }
  goto LAB_1425d1045;
}



// FUNCTION 1425d1310 FUN_1425d1310 body=551 status=ok
// SIG undefined FUN_1425d1310(void)

void FUN_1425d1310(longlong param_1,uint param_2,ulonglong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_50;
  undefined8 local_48;
  short local_3e [3];
  ulonglong local_38;
  
  uVar5 = (uint)param_3;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(ushort *)(param_1 + 0x1a) <= (ushort)param_3) {
    if (*(ushort *)(param_1 + 0x1e) <= (ushort)param_3) {
      if ((int)param_2 < 0x10000) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
    }
    param_2 = ((int)((param_3 & 0xffff) >> 3) + param_2) - (uint)*(ushort *)(param_1 + 0x1c);
    plVar1 = *(longlong **)(param_1 + 0x20);
    lVar3 = plVar1[1];
    if (param_2 < 0x10000) {
      iVar2 = (param_2 & 0x3f) + (uint)*(ushort *)(*plVar1 + (ulonglong)(param_2 >> 6) * 2);
    }
    else if (param_2 < 0x110000) {
      if ((int)param_2 < (int)plVar1[3]) {
        iVar2 = FUN_1425cceb0(plVar1,param_2);
      }
      else {
        iVar2 = *(int *)((longlong)plVar1 + 0x14) + -2;
      }
    }
    else {
      iVar2 = *(int *)((longlong)plVar1 + 0x14) + -1;
    }
    uVar5 = (uint)*(ushort *)(lVar3 + (longlong)iVar2 * 2);
  }
  uVar4 = (ushort)uVar5;
  if (uVar4 < *(ushort *)(param_1 + 0xe)) {
    if ((int)param_2 < 0x10000) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
  }
  if ((uVar4 == *(ushort *)(param_1 + 0xe)) ||
     ((ushort)((ushort)*(undefined4 *)(param_1 + 0x10) | 1) == uVar4)) {
    iVar2 = param_2 - 0xac00;
    iVar6 = (int)((ulonglong)((longlong)iVar2 * -0x6db6db6d) >> 0x20) + param_2 + -0xac00;
    iVar6 = (iVar6 >> 4) - (iVar6 >> 0x1f);
    local_3e[1] = (short)iVar6 + (short)(iVar6 / 0x15) * -0x15 + 0x1161;
    local_3e[0] = ((short)((ulonglong)((longlong)iVar2 * 0x6f74ae27) >> 0x28) -
                  (short)(iVar2 >> 0x1f)) + 0x1100;
    iVar2 = iVar2 + iVar6 * -0x1c;
    if (iVar2 == 0) {
      lVar3 = 2;
    }
    else {
      local_3e[2] = (short)iVar2 + 0x11a7;
      lVar3 = 3;
    }
    FUN_1425d08f0(param_4,local_3e,local_3e + lVar3,param_5);
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x30) + (ulonglong)(uVar5 & 0xfffe);
    uVar4 = *(ushort *)(*(longlong *)(param_1 + 0x30) + (ulonglong)(uVar5 & 0xfffe));
    if ((char)uVar4 < '\0') {
      local_58 = *(undefined1 *)(lVar3 + -1);
    }
    else {
      local_58 = 0;
    }
    local_48 = param_5;
    local_50 = (undefined1)(uVar4 >> 8);
    FUN_1425d0340(param_4,lVar3 + 2,uVar4 & 0x1f,1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
}



// FUNCTION 1425d15a0 FUN_1425d15a0 body=486 status=ok
// SIG undefined FUN_1425d15a0(void)

ushort * FUN_1425d15a0(longlong param_1,ushort *param_2,ushort *param_3,char param_4,char param_5,
                      undefined8 param_6,int *param_7)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  ushort *puVar6;
  bool bVar7;
  
  if (*param_7 < 1) {
    if ((param_2 < param_3) &&
       ((uVar2 = *param_2, param_4 == '\0' || (*(ushort *)(param_1 + 10) <= uVar2)))) {
      do {
        puVar6 = param_2 + 1;
        uVar5 = (uint)uVar2;
        if ((uVar5 & 0xf800) == 0xd800) {
          if ((((uVar2 & 0x400) == 0) && (puVar6 != param_3)) &&
             (uVar2 = *puVar6, (uVar2 & 0xfc00) == 0xdc00)) {
            puVar6 = param_2 + 2;
            uVar5 = uVar5 * 0x400 + (uint)uVar2 + 0xfca02400;
            plVar4 = *(longlong **)(param_1 + 0x20);
            if ((int)uVar5 < (int)plVar4[3]) {
              iVar3 = FUN_1425cceb0(plVar4,uVar5);
              plVar4 = *(longlong **)(param_1 + 0x20);
            }
            else {
              iVar3 = *(int *)((longlong)plVar4 + 0x14) + -2;
            }
          }
          else {
            plVar4 = *(longlong **)(param_1 + 0x20);
            iVar3 = *(int *)((longlong)plVar4 + 0x14) + -1;
          }
        }
        else {
          plVar4 = *(longlong **)(param_1 + 0x20);
          iVar3 = (uVar5 & 0x3f) + (uint)*(ushort *)(*plVar4 + (ulonglong)(uVar2 >> 6) * 2);
        }
        uVar2 = *(ushort *)(plVar4[1] + (longlong)iVar3 * 2);
        if (param_4 == '\0') {
          cVar1 = FUN_1425d1310(param_1,uVar5,uVar2,param_6,param_7);
          if (cVar1 == '\0') goto LAB_1425d15be;
        }
        else {
          if (uVar2 < *(ushort *)(param_1 + 0x16)) {
            return param_2;
          }
          if ((*(ushort *)(param_1 + 0x1a) <= uVar2) && (uVar2 < *(ushort *)(param_1 + 0x1e))) {
            return param_2;
          }
          cVar1 = FUN_1425d1310(param_1,uVar5,uVar2,param_6,param_7);
          if (cVar1 == '\0') goto LAB_1425d15be;
          if ((uVar2 & 1) != 0) {
            if (param_5 == '\0') {
              return puVar6;
            }
            if (uVar2 == 1) {
              return puVar6;
            }
            if (uVar2 < *(ushort *)(param_1 + 0x1a)) {
              bVar7 = *(ushort *)(*(longlong *)(param_1 + 0x30) + (ulonglong)(uVar2 & 0xfffffffe)) <
                      0x200;
            }
            else {
              bVar7 = (uVar2 & 6) < 3;
            }
            if (bVar7) {
              return puVar6;
            }
          }
        }
        if (param_3 <= puVar6) {
          return puVar6;
        }
        uVar2 = *puVar6;
        param_2 = puVar6;
        if ((param_4 != '\0') && (uVar2 < *(ushort *)(param_1 + 10))) {
          return puVar6;
        }
      } while( true );
    }
  }
  else {
LAB_1425d15be:
    param_2 = (ushort *)0x0;
  }
  return param_2;
}



// FUNCTION 1425d17a0 FUN_1425d17a0 body=1943 status=ok
// SIG undefined FUN_1425d17a0(void)

void FUN_1425d17a0(longlong param_1,byte *param_2,byte *param_3,char param_4,char param_5,
                  undefined8 param_6,int *param_7)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  longlong *plVar4;
  char cVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  ushort uVar13;
  byte *pbVar14;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined1 local_70;
  int *local_68;
  char local_59;
  byte *local_58;
  short local_4e [3];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*param_7 < 1) && (cVar5 = param_4, pbVar1 = param_3, param_2 < param_3)) {
    do {
      local_58 = pbVar1;
      local_59 = cVar5;
      pbVar1 = param_2 + 1;
      bVar3 = *param_2;
      uVar7 = (uint)bVar3;
      pbVar14 = pbVar1;
      if ((char)bVar3 < '\0') {
        pbVar14 = local_58;
        if (pbVar1 != local_58) {
          uVar7 = (uint)bVar3;
          if (bVar3 < 0xe0) {
            pbVar14 = pbVar1;
            if ((0xc1 < bVar3) && ((byte)(*pbVar1 ^ 0x80) < 0x40)) {
              uVar7 = (uint)*(ushort *)
                             (**(longlong **)(param_1 + 0x20) + (ulonglong)(uVar7 & 0x1f) * 2) +
                      (*pbVar1 ^ 0x80);
              pbVar14 = param_2 + 2;
              goto LAB_1425d1999;
            }
          }
          else if (bVar3 < 0xf0) {
            pbVar14 = pbVar1;
            if (((((byte)(&DAT_14bd49f86)[uVar7 & 0xf] >> (*pbVar1 >> 5) & 1) != 0) &&
                (pbVar2 = param_2 + 2, pbVar14 = local_58, pbVar2 != local_58)) &&
               (pbVar14 = pbVar2, (byte)(*pbVar2 ^ 0x80) < 0x40)) {
              uVar7 = (uint)*(ushort *)
                             (**(longlong **)(param_1 + 0x20) +
                             (ulonglong)(uVar7 & 0xf) * 0x80 + (ulonglong)(*pbVar1 & 0x3f) * 2) +
                      (*pbVar2 ^ 0x80);
              pbVar14 = param_2 + 3;
              goto LAB_1425d1999;
            }
          }
          else {
            pbVar14 = pbVar1;
            if (bVar3 < 0xf5) {
              if ((((((uint)(int)(char)(&DAT_14bd49f97)[*pbVar1 >> 4] >> (uVar7 - 0xf0 & 0x1f) & 1)
                     != 0) && (pbVar2 = param_2 + 2, pbVar14 = local_58, pbVar2 != local_58)) &&
                  (pbVar14 = pbVar2, (byte)(*pbVar2 + 0x80) < 0x40)) &&
                 ((pbVar2 = param_2 + 3, pbVar14 = local_58, pbVar2 != local_58 &&
                  (pbVar14 = pbVar2, (byte)(*pbVar2 + 0x80) < 0x40)))) {
                if ((*pbVar1 & 0x3f | (uVar7 - 0xf0) * 0x40) <
                    (uint)*(ushort *)(*(longlong *)(param_1 + 0x20) + 0x1c)) {
                  uVar7 = FUN_1425ccf50();
                }
                else {
                  uVar7 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x14) - 2;
                }
                pbVar14 = param_2 + 4;
                goto LAB_1425d1999;
              }
            }
          }
        }
        uVar7 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x14) - 1;
      }
LAB_1425d1999:
      plVar4 = *(longlong **)(param_1 + 0x20);
      lVar9 = plVar4[1];
      uVar13 = *(ushort *)(lVar9 + (longlong)(int)uVar7 * 2);
      uVar7 = (uint)uVar13;
      if (uVar13 < *(ushort *)(param_1 + 0x1a)) {
        if ((param_4 == '\0') || (*(ushort *)(param_1 + 0x16) <= uVar13)) {
          uVar6 = *(ushort *)(param_1 + 0xe);
          uVar11 = 0xffffffff;
          if (uVar6 <= uVar13) goto LAB_1425d1cbb;
          lVar12 = (longlong)pbVar14 - (longlong)param_2;
          goto LAB_1425d19d9;
        }
        break;
      }
      if (*(ushort *)(param_1 + 0x1e) <= uVar13) {
        if (&DAT_00000003 < pbVar14 + ~(ulonglong)param_2) goto LAB_1425d1f5d;
        bVar3 = *param_2;
        uVar7 = (uint)bVar3;
        switch(pbVar14 + ~(ulonglong)param_2) {
        case (byte *)0x1:
          uVar7 = (bVar3 & 0x1f) << 6 | *pbVar1 & 0x3f;
          break;
        case (byte *)0x2:
          uVar7 = (bVar3 & 0xf) << 0xc | (param_2[1] & 0x3f) << 6 | param_2[2] & 0x3f;
          break;
        case (byte *)0x3:
          uVar7 = param_2[3] & 0x3f |
                  (param_2[2] & 0x3f) << 6 | (param_2[1] & 0x3f) << 0xc | (bVar3 & 7) << 0x12;
          uVar6 = uVar13 >> 1;
          if (uVar13 < 0xfc00) {
            uVar6 = 0;
          }
          if (uVar7 < 0x10000) goto LAB_1425d1b2e;
          cVar5 = FUN_1425d0140(param_6,uVar7,uVar6,param_7);
          goto joined_r0x0001425d1bac;
        }
        uVar6 = uVar13 >> 1;
        if (uVar13 < 0xfc00) {
          uVar6 = 0;
        }
LAB_1425d1b2e:
        cVar5 = FUN_1425d3f80(param_6,uVar7,uVar6,param_7);
joined_r0x0001425d1bac:
        if (cVar5 != '\0') goto LAB_1425d1810;
        break;
      }
      if (param_4 != '\0') break;
      lVar12 = (longlong)pbVar14 - (longlong)param_2;
      if (3 < lVar12 - 1U) goto LAB_1425d1f5d;
      uVar7 = (uint)*param_2;
      switch(lVar12) {
      case 2:
        uVar7 = (*param_2 & 0x1f) << 6 | *pbVar1 & 0x3f;
        break;
      case 3:
        uVar11 = param_2[2] & 0x3f;
        uVar7 = (uVar7 & 0xf) << 0xc | (param_2[1] & 0x3f) << 6;
        goto LAB_1425d1bfd;
      case 4:
        uVar11 = (param_2[2] & 0x3f) << 6 | (param_2[1] & 0x3f) << 0xc | (uVar7 & 7) << 0x12;
        uVar7 = param_2[3] & 0x3f;
LAB_1425d1bfd:
        uVar7 = uVar7 | uVar11;
      }
      uVar11 = ((uVar13 >> 3) + uVar7) - (uint)*(ushort *)(param_1 + 0x1c);
      if (uVar11 < 0x10000) {
        iVar8 = (uVar11 & 0x3f) + (uint)*(ushort *)(*plVar4 + (ulonglong)(uVar11 >> 6) * 2);
      }
      else if (uVar11 < 0x110000) {
        if ((int)uVar11 < (int)plVar4[3]) {
          iVar8 = FUN_1425cceb0(plVar4,uVar11);
        }
        else {
          iVar8 = *(int *)((longlong)plVar4 + 0x14) + -2;
        }
      }
      else {
        iVar8 = *(int *)((longlong)plVar4 + 0x14) + -1;
      }
      uVar13 = *(ushort *)(lVar9 + (longlong)iVar8 * 2);
      uVar7 = (uint)uVar13;
      uVar6 = *(ushort *)(param_1 + 0xe);
      param_4 = local_59;
      if (uVar13 < uVar6) {
        if ((int)uVar11 < 0) {
LAB_1425d19d9:
          if (3 < lVar12 - 1U) {
LAB_1425d1f5d:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          bVar3 = *param_2;
          uVar11 = (uint)bVar3;
          switch(lVar12) {
          case 2:
            uVar11 = *pbVar1 & 0x3f | (bVar3 & 0x1f) << 6;
            break;
          case 3:
            uVar11 = (bVar3 & 0xf) << 0xc | (param_2[1] & 0x3f) << 6 | param_2[2] & 0x3f;
            break;
          case 4:
            uVar11 = param_2[3] & 0x3f |
                     (param_2[2] & 0x3f) << 6 | (param_2[1] & 0x3f) << 0xc | (bVar3 & 7) << 0x12;
            goto LAB_1425d1c7a;
          }
        }
        else {
LAB_1425d1c7a:
          if (0xffff < uVar11) {
            cVar5 = FUN_1425d0140(param_6,uVar11,0,param_7);
            param_4 = local_59;
            goto joined_r0x0001425d1e2b;
          }
        }
        param_4 = local_59;
        cVar5 = FUN_1425d3f80(param_6,uVar11,0,param_7);
      }
      else {
LAB_1425d1cbb:
        if ((uVar6 == (ushort)uVar7) ||
           ((ushort)((ushort)*(undefined4 *)(param_1 + 0x10) | 1) == (ushort)uVar7)) {
          if ((int)uVar11 < 0) {
            if (&DAT_00000003 < pbVar14 + ~(ulonglong)param_2) goto LAB_1425d1f5d;
            bVar3 = *param_2;
            uVar11 = (uint)bVar3;
            switch(pbVar14 + ~(ulonglong)param_2) {
            case (byte *)0x1:
              uVar11 = *pbVar1 & 0x3f | (bVar3 & 0x1f) << 6;
              break;
            case (byte *)0x2:
              uVar11 = (bVar3 & 0xf) << 0xc | (param_2[1] & 0x3f) << 6 | param_2[2] & 0x3f;
              break;
            case (byte *)0x3:
              uVar11 = param_2[3] & 0x3f |
                       (param_2[2] & 0x3f) << 6 | (param_2[1] & 0x3f) << 0xc | (bVar3 & 7) << 0x12;
            }
          }
          iVar8 = uVar11 - 0xac00;
          iVar10 = (int)((ulonglong)((longlong)iVar8 * -0x6db6db6d) >> 0x20) + uVar11 + -0xac00;
          iVar10 = (iVar10 >> 4) - (iVar10 >> 0x1f);
          local_4e[1] = (short)iVar10 + (short)(iVar10 / 0x15) * -0x15 + 0x1161;
          local_4e[0] = ((short)((ulonglong)((longlong)iVar8 * 0x6f74ae27) >> 0x28) -
                        (short)(iVar8 >> 0x1f)) + 0x1100;
          iVar8 = iVar8 + iVar10 * -0x1c;
          if (iVar8 == 0) {
            lVar9 = 2;
          }
          else {
            local_4e[2] = (short)iVar8 + 0x11a7;
            lVar9 = 3;
          }
          cVar5 = FUN_1425d08f0(param_6,local_4e,local_4e + lVar9,param_7);
        }
        else {
          lVar9 = *(longlong *)(param_1 + 0x30) + (ulonglong)(uVar7 & 0xfffe);
          uVar13 = *(ushort *)(*(longlong *)(param_1 + 0x30) + (ulonglong)(uVar7 & 0xfffe));
          if ((char)uVar13 < '\0') {
            local_78 = *(undefined1 *)(lVar9 + -1);
          }
          else {
            local_78 = 0;
          }
          local_68 = param_7;
          local_70 = (undefined1)(uVar13 >> 8);
          cVar5 = FUN_1425d0340(param_6,lVar9 + 2,uVar13 & 0x1f,1);
        }
      }
joined_r0x0001425d1e2b:
      if (cVar5 == '\0') break;
      if ((param_4 != '\0') && ((uVar7 & 1) != 0)) {
        if ((param_5 == '\0') || (uVar13 = (ushort)uVar7, uVar13 == 1)) break;
        if (uVar13 < *(ushort *)(param_1 + 0x1a)) {
          if (*(ushort *)(*(longlong *)(param_1 + 0x30) + (ulonglong)(uVar7 & 0xfffe)) < 0x200)
          break;
        }
        else if ((uVar13 & 6) < 3) break;
      }
LAB_1425d1810:
      param_2 = pbVar14;
      cVar5 = local_59;
      pbVar1 = local_58;
      if (local_58 <= pbVar14) break;
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
}



// FUNCTION 1425d1f70 FUN_1425d1f70 body=554 status=ok
// SIG undefined FUN_1425d1f70(void)

ushort * FUN_1425d1f70(longlong param_1,uint param_2,ushort *param_3,uint *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  ushort *puVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  
  if ((int)(uint)*(ushort *)(param_1 + 8) <= (int)param_2) {
    uVar6 = 1;
    if ((param_2 & 0xfffffc00) != 0xd800) {
      plVar1 = *(longlong **)(param_1 + 0x20);
      lVar8 = plVar1[1];
      if (param_2 < 0x10000) {
        iVar3 = (param_2 & 0x3f) + (uint)*(ushort *)(*plVar1 + (ulonglong)(param_2 >> 6) * 2);
      }
      else if (param_2 < 0x110000) {
        if ((int)param_2 < (int)plVar1[3]) {
          iVar3 = FUN_1425cceb0(plVar1,param_2);
        }
        else {
          iVar3 = *(int *)((longlong)plVar1 + 0x14) + -2;
        }
      }
      else {
        iVar3 = *(int *)((longlong)plVar1 + 0x14) + -1;
      }
      uVar6 = (uint)*(ushort *)(lVar8 + (longlong)iVar3 * 2);
    }
    if ((ushort)uVar6 < *(ushort *)(param_1 + 0x1e)) {
      if ((ushort)uVar6 < *(ushort *)(param_1 + 0x1a)) {
        puVar4 = (ushort *)0x0;
      }
      else {
        param_2 = ((uVar6 >> 3) + param_2) - (uint)*(ushort *)(param_1 + 0x1c);
        if (param_2 < 0x10000) {
          *param_4 = 1;
          *param_3 = (ushort)param_2;
          lVar8 = (*(longlong **)(param_1 + 0x20))[1];
          iVar3 = (param_2 & 0x3f) +
                  (uint)*(ushort *)(**(longlong **)(param_1 + 0x20) + (ulonglong)(param_2 >> 6) * 2)
          ;
        }
        else {
          *param_4 = 1;
          *param_3 = (short)(param_2 >> 10) + 0xd7c0;
          uVar6 = *param_4;
          *param_4 = uVar6 + 1;
          param_3[(int)uVar6] = (ushort)param_2 & 0x3ff | 0xdc00;
          lVar2 = *(longlong *)(param_1 + 0x20);
          lVar8 = *(longlong *)(lVar2 + 8);
          if (param_2 < 0x110000) {
            if ((int)param_2 < *(int *)(lVar2 + 0x18)) {
              iVar3 = FUN_1425cceb0(lVar2,param_2);
            }
            else {
              iVar3 = *(int *)(lVar2 + 0x14) + -2;
            }
          }
          else {
            iVar3 = *(int *)(lVar2 + 0x14) + -1;
          }
        }
        uVar6 = (uint)*(ushort *)(lVar8 + (longlong)iVar3 * 2);
        puVar4 = param_3;
      }
      uVar5 = (ushort)uVar6;
      if (uVar5 < *(ushort *)(param_1 + 0xe)) {
        return puVar4;
      }
      if ((uVar5 != *(ushort *)(param_1 + 0xe)) &&
         ((ushort)((ushort)*(undefined4 *)(param_1 + 0x10) | 1) != uVar5)) {
        lVar8 = *(longlong *)(param_1 + 0x30);
        *param_4 = *(ushort *)(lVar8 + (ulonglong)(uVar6 & 0xfffe)) & 0x1f;
        return (ushort *)(lVar8 + (ulonglong)(uVar6 & 0xfffe) + 2);
      }
      iVar3 = param_2 - 0xac00;
      iVar7 = (int)((ulonglong)((longlong)iVar3 * -0x6db6db6d) >> 0x20) + param_2 + -0xac00;
      iVar7 = (iVar7 >> 4) - (iVar7 >> 0x1f);
      *param_3 = ((short)((ulonglong)((longlong)iVar3 * 0x6f74ae27) >> 0x28) -
                 (short)(iVar3 >> 0x1f)) + 0x1100;
      param_3[1] = (short)iVar7 + (short)(iVar7 / 0x15) * -0x15 + 0x1161;
      iVar3 = iVar3 + iVar7 * -0x1c;
      if (iVar3 == 0) {
        uVar6 = 2;
      }
      else {
        param_3[2] = (short)iVar3 + 0x11a7;
        uVar6 = 3;
      }
      *param_4 = uVar6;
      return param_3;
    }
  }
  return (ushort *)0x0;
}



// FUNCTION 1425d21a0 FUN_1425d21a0 body=537 status=ok
// SIG undefined FUN_1425d21a0(void)

ushort * FUN_1425d21a0(longlong param_1,uint param_2,ushort *param_3,uint *param_4)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  longlong lVar7;
  short sVar8;
  int iVar9;
  ushort uVar10;
  uint uVar11;
  
  if ((int)param_2 < (int)(uint)*(ushort *)(param_1 + 8)) {
    puVar6 = (ushort *)0x0;
  }
  else {
    uVar11 = 1;
    if ((param_2 & 0xfffffc00) != 0xd800) {
      plVar2 = *(longlong **)(param_1 + 0x20);
      lVar3 = plVar2[1];
      if (param_2 < 0x10000) {
        iVar4 = (param_2 & 0x3f) + (uint)*(ushort *)(*plVar2 + (ulonglong)(param_2 >> 6) * 2);
      }
      else if (param_2 < 0x110000) {
        if ((int)param_2 < (int)plVar2[3]) {
          iVar4 = FUN_1425cceb0(plVar2,param_2);
        }
        else {
          iVar4 = *(int *)((longlong)plVar2 + 0x14) + -2;
        }
      }
      else {
        iVar4 = *(int *)((longlong)plVar2 + 0x14) + -1;
      }
      uVar11 = (uint)*(ushort *)(lVar3 + (longlong)iVar4 * 2);
    }
    uVar10 = (ushort)uVar11;
    puVar6 = (ushort *)0x0;
    if ((*(ushort *)(param_1 + 0xe) <= uVar10) && (uVar10 < *(ushort *)(param_1 + 0x1e))) {
      puVar6 = param_3;
      if ((*(ushort *)(param_1 + 0xe) == uVar10) ||
         ((ushort)((ushort)*(undefined4 *)(param_1 + 0x10) | 1) == uVar10)) {
        iVar4 = param_2 - 0xac00;
        iVar5 = (int)((ulonglong)((longlong)iVar4 * -0x6db6db6d) >> 0x20) + param_2 + -0xac00;
        iVar5 = (iVar5 >> 4) - (iVar5 >> 0x1f);
        iVar9 = iVar4 + iVar5 * -0x1c;
        if (iVar9 == 0) {
          uVar10 = ((short)((ulonglong)((longlong)iVar4 * 0x6f74ae27) >> 0x28) -
                   (short)(iVar4 >> 0x1f)) + 0x1100;
          iVar9 = iVar5 % 0x15;
          sVar8 = 0x1161;
        }
        else {
          uVar10 = (short)param_2 - (short)iVar9;
          sVar8 = 0x11a7;
        }
        *param_3 = uVar10;
        param_3[1] = sVar8 + (short)iVar9;
        *param_4 = 2;
      }
      else if (uVar10 < *(ushort *)(param_1 + 0x1a)) {
        lVar3 = *(longlong *)(param_1 + 0x30) + (ulonglong)(uVar11 & 0xfffe);
        uVar10 = *(ushort *)(*(longlong *)(param_1 + 0x30) + (ulonglong)(uVar11 & 0xfffe));
        uVar11 = uVar10 & 0x1f;
        if ((uVar10 & 0x40) == 0) {
          *param_4 = uVar11;
          puVar6 = (ushort *)(lVar3 + 2);
        }
        else {
          lVar7 = lVar3 + (ulonglong)(uVar10 >> 7 & 1) * -2;
          uVar10 = *(ushort *)(lVar7 + -2);
          if (uVar10 < 0x20) {
            *param_4 = (uint)uVar10;
            puVar6 = (ushort *)(lVar7 + -2 + (ulonglong)uVar10 * -2);
          }
          else {
            *param_3 = uVar10;
            FUN_142504850(param_3 + 1,lVar3 + 6,uVar11 - 2);
            *param_4 = uVar11 - 1;
          }
        }
      }
      else {
        uVar11 = ((uVar11 >> 3) + param_2) - (uint)*(ushort *)(param_1 + 0x1c);
        if (uVar11 < 0x10000) {
          *param_4 = 1;
          *param_3 = (ushort)uVar11;
        }
        else {
          *param_4 = 1;
          *param_3 = (short)(uVar11 >> 10) + 0xd7c0;
          uVar1 = *param_4;
          *param_4 = uVar1 + 1;
          param_3[(int)uVar1] = (ushort)uVar11 & 0x3ff | 0xdc00;
        }
      }
    }
  }
  return puVar6;
}



// FUNCTION 1425d23c0 FUN_1425d23c0 body=607 status=ok
// SIG undefined FUN_1425d23c0(void)

void FUN_1425d23c0(longlong param_1,ushort *param_2,ushort *param_3,char param_4,longlong param_5,
                  longlong param_6,undefined8 param_7)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  ushort *puVar7;
  undefined1 uVar8;
  ushort uVar9;
  ushort *puVar10;
  undefined1 uVar11;
  ushort uVar12;
  bool bVar13;
  undefined8 in_stack_ffffffffffffff78;
  uint uVar14;
  
  uVar14 = (uint)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  lVar2 = *(longlong *)(param_6 + 0x18);
  lVar3 = *(longlong *)(param_6 + 0x20);
  FUN_1424a8e40(param_5);
  if (*(short *)(param_5 + 8) < 0) {
    iVar5 = *(int *)(param_5 + 0xc);
  }
  else {
    iVar5 = (int)*(short *)(param_5 + 8) >> 5;
  }
  FUN_1424a9130(param_5,0,iVar5,lVar2,(ulonglong)uVar14 << 0x20,
                (int)((ulonglong)(lVar3 - lVar2) >> 1));
  if (param_4 == '\0') {
    puVar10 = param_2;
    if (param_2 == param_3) {
      uVar8 = 0;
      uVar11 = 0;
    }
    else {
      bVar13 = true;
      uVar12 = 0;
      uVar9 = 0;
      do {
        uVar11 = (undefined1)uVar12;
        uVar8 = (undefined1)uVar9;
        puVar7 = puVar10 + 1;
        uVar9 = *puVar10;
        if ((uVar9 & 0xf800) == 0xd800) {
          if (((uVar9 & 0x400) == 0) && (puVar7 != param_3)) {
            uVar1 = *puVar7;
            plVar6 = *(longlong **)(param_1 + 0x20);
            if ((uVar1 & 0xfc00) == 0xdc00) {
              puVar7 = puVar10 + 2;
              if ((int)((uint)uVar1 + (uint)uVar9 * 0x400 + -0x35fdc00) < (int)plVar6[3]) {
                iVar5 = FUN_1425cceb0();
                plVar6 = *(longlong **)(param_1 + 0x20);
              }
              else {
                iVar5 = *(int *)((longlong)plVar6 + 0x14) + -2;
              }
              goto LAB_1425d2539;
            }
          }
          else {
            plVar6 = *(longlong **)(param_1 + 0x20);
          }
          iVar5 = *(int *)((longlong)plVar6 + 0x14) + -1;
        }
        else {
          plVar6 = *(longlong **)(param_1 + 0x20);
          iVar5 = (uVar9 & 0x3f) + (uint)*(ushort *)(*plVar6 + (ulonglong)(uVar9 >> 6) * 2);
        }
LAB_1425d2539:
        uVar9 = *(ushort *)(plVar6[1] + (longlong)iVar5 * 2);
        if (uVar9 < 0xfc00) {
          if ((uVar9 < *(ushort *)(param_1 + 0x12)) || (*(ushort *)(param_1 + 0x1a) <= uVar9))
          goto joined_r0x0001425d25be;
          if ((*(byte *)(*(longlong *)(param_1 + 0x30) + (ulonglong)(uVar9 >> 1) * 2) & 0x80) == 0)
          goto joined_r0x0001425d25be;
          uVar9 = *(ushort *)(*(longlong *)(param_1 + 0x30) + -2 + (ulonglong)(uVar9 >> 1) * 2);
          cVar4 = (char)uVar9;
        }
        else {
          uVar9 = uVar9 >> 1;
          cVar4 = (char)uVar9;
        }
        if (cVar4 == '\0') goto joined_r0x0001425d25be;
        uVar1 = uVar9;
        if (!bVar13) {
          uVar1 = uVar12;
        }
        uVar12 = uVar1 & 0xff;
        uVar11 = (undefined1)uVar1;
        if (bVar13) {
          bVar13 = false;
        }
        puVar10 = puVar7;
      } while (puVar7 != param_3);
      uVar8 = (undefined1)uVar9;
      puVar10 = param_3;
    }
joined_r0x0001425d25be:
    if (param_3 == (ushort *)0x0) {
      param_3 = (ushort *)FUN_142503f80(puVar10,0);
    }
    cVar4 = FUN_1425d0340(param_6,param_2,(ulonglong)((longlong)puVar10 - (longlong)param_2) >> 1,0,
                          uVar11,uVar8,param_7);
    if (cVar4 != '\0') {
      FUN_1425d08f0(param_6,puVar10,param_3,param_7);
      return;
    }
  }
  else {
    FUN_1425d1000(param_1,param_2,param_3,param_6,param_7);
  }
  return;
}



// FUNCTION 1425d2640 Unwind@1425d2640 body=50 status=ok
// SIG undefined Unwind@1425d2640(void)

void Unwind_1425d2640(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_2 + 0x50);
  return;
}



// FUNCTION 1425d2680 FUN_1425d2680 body=249 status=ok
// SIG undefined FUN_1425d2680(void)

bool FUN_1425d2680(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  
  bVar7 = true;
  uVar5 = (uint)param_2;
  if ((int)(uint)*(ushort *)(param_1 + 0xc) <= (int)uVar5) {
    if ((int)uVar5 < 0x10000) {
      bVar1 = *(byte *)(*(longlong *)(param_1 + 0x38) + (longlong)((int)uVar5 >> 8));
      if (bVar1 == 0) {
        return true;
      }
      if ((1 << ((byte)((param_2 & 0xffffffff) >> 5) & 7) & (uint)bVar1) == 0) {
        return true;
      }
    }
    uVar4 = 1;
    if ((uVar5 & 0xfffffc00) != 0xd800) {
      plVar2 = *(longlong **)(param_1 + 0x20);
      lVar3 = plVar2[1];
      if (uVar5 < 0x10000) {
        iVar6 = (uVar5 & 0x3f) + (uint)*(ushort *)(*plVar2 + (param_2 >> 6 & 0x3ffffff) * 2);
      }
      else if (uVar5 < 0x110000) {
        if ((int)uVar5 < (int)plVar2[3]) {
          iVar6 = FUN_1425cceb0();
        }
        else {
          iVar6 = *(int *)((longlong)plVar2 + 0x14) + -2;
        }
      }
      else {
        iVar6 = *(int *)((longlong)plVar2 + 0x14) + -1;
      }
      uVar4 = *(ushort *)(lVar3 + (longlong)iVar6 * 2);
    }
    bVar7 = true;
    if (*(ushort *)(param_1 + 0x16) <= uVar4) {
      if (uVar4 < *(ushort *)(param_1 + 0x1a)) {
        if ((*(byte *)(*(longlong *)(param_1 + 0x30) + (ulonglong)(uVar4 >> 1) * 2) & 0x80) != 0) {
          bVar7 = *(ushort *)(*(longlong *)(param_1 + 0x30) + -2 + (ulonglong)(uVar4 >> 1) * 2) <
                  0x100;
        }
      }
      else {
        bVar7 = uVar4 == 0xfe00 || uVar4 < 0xfc01;
      }
    }
  }
  return bVar7;
}



// FUNCTION 1425d2780 FUN_1425d2780 body=309 status=ok
// SIG undefined FUN_1425d2780(void)

bool FUN_1425d2780(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  ushort uVar2;
  longlong *plVar3;
  longlong lVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  
  bVar8 = true;
  uVar6 = (uint)param_2;
  if ((int)(uint)*(ushort *)(param_1 + 8) <= (int)uVar6) {
    if ((int)uVar6 < 0x10000) {
      bVar1 = *(byte *)(*(longlong *)(param_1 + 0x38) + (longlong)((int)uVar6 >> 8));
      if (bVar1 == 0) {
        return true;
      }
      if ((1 << ((byte)((param_2 & 0xffffffff) >> 5) & 7) & (uint)bVar1) == 0) {
        return true;
      }
    }
    uVar5 = 1;
    if ((uVar6 & 0xfffffc00) != 0xd800) {
      plVar3 = *(longlong **)(param_1 + 0x20);
      lVar4 = plVar3[1];
      if (uVar6 < 0x10000) {
        iVar7 = (uVar6 & 0x3f) + (uint)*(ushort *)(*plVar3 + (param_2 >> 6 & 0x3ffffff) * 2);
      }
      else if (uVar6 < 0x110000) {
        if ((int)uVar6 < (int)plVar3[3]) {
          iVar7 = FUN_1425cceb0();
        }
        else {
          iVar7 = *(int *)((longlong)plVar3 + 0x14) + -2;
        }
      }
      else {
        iVar7 = *(int *)((longlong)plVar3 + 0x14) + -1;
      }
      uVar5 = *(ushort *)(lVar4 + (longlong)iVar7 * 2);
    }
    bVar8 = true;
    if ((*(ushort *)(param_1 + 0xe) < uVar5) &&
       ((ushort)((ushort)*(undefined4 *)(param_1 + 0x10) | 1) != uVar5)) {
      if (uVar5 < *(ushort *)(param_1 + 0x1a)) {
        uVar2 = *(ushort *)(*(longlong *)(param_1 + 0x30) + (ulonglong)(uVar5 >> 1) * 2);
        if (uVar2 < 0x200) {
          if ((0xff < uVar2) && ((uVar2 & 0x80) != 0)) {
            bVar8 = *(ushort *)(*(longlong *)(param_1 + 0x30) + -2 + (ulonglong)(uVar5 >> 1) * 2) <
                    0x100;
          }
        }
        else {
          bVar8 = false;
        }
      }
      else if (uVar5 < *(ushort *)(param_1 + 0x1e)) {
        bVar8 = (uVar5 & 6) < 3;
      }
      else {
        bVar8 = uVar5 == 0xfe00 || uVar5 < 0xfc01;
      }
    }
  }
  return bVar8;
}



// FUNCTION 1425d28c0 FUN_1425d28c0 body=233 status=ok
// SIG undefined FUN_1425d28c0(void)

void FUN_1425d28c0(longlong param_1,ushort *param_2,undefined8 param_3)

{
  ushort uVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  
  do {
    uVar1 = *param_2;
    uVar4 = (uint)param_2[1];
    if ((uVar1 & 1) == 0) {
      lVar8 = 2;
    }
    else {
      uVar4 = (param_2[1] & 0x3f) << 0x10 | (uint)param_2[2];
      lVar8 = 3;
    }
    uVar7 = uVar4 >> 1;
    if ((uVar4 & 1) != 0) {
      plVar2 = *(longlong **)(param_1 + 0x20);
      lVar3 = plVar2[1];
      if (uVar4 < 0x20000) {
        iVar5 = (uVar7 & 0x3f) + (uint)*(ushort *)(*plVar2 + (ulonglong)(uVar4 >> 7) * 2);
      }
      else if (uVar4 < 0x220000) {
        if ((int)uVar7 < (int)plVar2[3]) {
          iVar5 = FUN_1425cceb0(plVar2,uVar7);
        }
        else {
          iVar5 = *(int *)((longlong)plVar2 + 0x14) + -2;
        }
      }
      else {
        iVar5 = *(int *)((longlong)plVar2 + 0x14) + -1;
      }
      uVar6 = (ulonglong)(*(ushort *)(lVar3 + (longlong)iVar5 * 2) & 0xfffffffe);
      FUN_1425d28c0(param_1,*(longlong *)(param_1 + 0x30) + uVar6 +
                            (ulonglong)(*(ushort *)(*(longlong *)(param_1 + 0x30) + uVar6) & 0x1f) *
                            2 + 2,param_3);
    }
    param_2 = param_2 + lVar8;
    FUN_142513960(param_3,uVar7);
  } while (-1 < (short)uVar1);
  return;
}



// FUNCTION 1425d29c0 FUN_1425d29c0 body=1756 status=ok
// SIG undefined FUN_1425d29c0(void)

void FUN_1425d29c0(longlong param_1,longlong param_2,int param_3,char param_4)

{
  ushort uVar1;
  longlong lVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  ushort *puVar8;
  ushort uVar9;
  longlong *plVar10;
  ushort *puVar11;
  ushort *puVar12;
  uint uVar13;
  ushort *puVar14;
  ushort *puVar15;
  uint uVar16;
  ushort uVar17;
  ushort uVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  ushort *puVar24;
  ushort *puVar25;
  ushort uVar26;
  bool bVar27;
  
  puVar25 = (ushort *)((longlong)param_3 * 2 + *(longlong *)(param_2 + 0x10));
  puVar14 = *(ushort **)(param_2 + 0x20);
  if (puVar25 == puVar14) {
    return;
  }
  puVar8 = (ushort *)0x0;
  uVar18 = 0;
  bVar3 = false;
  puVar12 = (ushort *)0x0;
  do {
    puVar24 = puVar8;
    uVar26 = uVar18;
LAB_1425d2a48:
    puVar8 = puVar25 + 1;
    uVar18 = *puVar25;
    uVar23 = (uint)uVar18;
    if ((uVar23 & 0xf800) == 0xd800) {
      if (((uVar18 & 0x400) == 0) && (puVar8 != puVar14)) {
        plVar10 = *(longlong **)(param_1 + 0x20);
        if ((*puVar8 & 0xfc00) == 0xdc00) {
          puVar25 = puVar25 + 2;
          uVar23 = uVar23 * 0x400 + (uint)*puVar8 + 0xfca02400;
          if ((int)uVar23 < (int)plVar10[3]) {
            iVar7 = FUN_1425cceb0(plVar10,uVar23);
            plVar10 = *(longlong **)(param_1 + 0x20);
          }
          else {
            iVar7 = *(int *)((longlong)plVar10 + 0x14) + -2;
          }
          goto LAB_1425d2af0;
        }
      }
      else {
        plVar10 = *(longlong **)(param_1 + 0x20);
      }
      iVar7 = *(int *)((longlong)plVar10 + 0x14) + -1;
      puVar25 = puVar8;
    }
    else {
      plVar10 = *(longlong **)(param_1 + 0x20);
      iVar7 = (uVar23 & 0x3f) + (uint)*(ushort *)(*plVar10 + (ulonglong)(uVar18 >> 6) * 2);
      puVar25 = puVar8;
    }
LAB_1425d2af0:
    uVar9 = *(ushort *)(plVar10[1] + (longlong)iVar7 * 2);
    uVar18 = 0;
    if (0xfbff < uVar9) {
      uVar18 = uVar9 >> 1;
    }
    uVar17 = *(ushort *)(param_1 + 0x1e);
    if ((((uVar9 < 0xfe01) && (uVar17 <= uVar9)) && (puVar24 != (ushort *)0x0)) &&
       ((byte)uVar26 == 0 || (byte)uVar26 < (byte)uVar18)) {
      if (uVar9 == 0xfe00) {
        puVar8 = puVar14;
        if ((uVar23 < 0x11a7) && ((ushort)(*puVar12 + 0xef00) < 0x13)) {
          puVar15 = puVar25 + -1;
          uVar18 = ((short)uVar23 + (*puVar12 + 0xef00) * 0x15) * 0x1c + 0xc564;
          if (puVar25 == puVar14) {
            *puVar12 = uVar18;
            goto LAB_1425d308b;
          }
          uVar17 = *puVar25 + 0xee59;
          bVar27 = uVar17 < 0x1c;
          uVar9 = uVar17;
          if (!bVar27) {
            uVar9 = 0;
          }
          puVar24 = puVar25 + bVar27;
          *puVar12 = uVar18 + uVar9;
          if (puVar14 <= puVar24) goto LAB_1425d308b;
          puVar8 = puVar25 + (ulonglong)(uVar17 < 0x1c) + 1;
          if (puVar25 + (ulonglong)(uVar17 < 0x1c) + 1 < puVar14) {
            puVar8 = puVar14;
          }
          uVar19 = (longlong)puVar8 + (ulonglong)(uVar17 < 0x1c) * -2 + ~(ulonglong)puVar25;
          puVar8 = puVar15;
          if ((0x2d < uVar19) && (0x1f < (ulonglong)(uVar17 < 0x1c) * -2 - 2)) {
            uVar19 = (uVar19 >> 1) + 1;
            uVar21 = uVar19 & 0xfffffffffffffff0;
            puVar8 = puVar15 + uVar21;
            puVar24 = puVar24 + uVar21;
            uVar22 = 0;
            do {
              uVar4 = *(undefined8 *)(puVar25 + bVar27 + uVar22 + 4);
              uVar5 = *(undefined8 *)(puVar25 + (ulonglong)bVar27 + uVar22 + 8);
              uVar6 = *(undefined8 *)(puVar25 + (ulonglong)bVar27 + uVar22 + 8 + 4);
              *(undefined8 *)(puVar25 + (uVar22 - 1)) = *(undefined8 *)(puVar25 + bVar27 + uVar22);
              *(undefined8 *)(puVar25 + (uVar22 - 1) + 4) = uVar4;
              *(undefined8 *)(puVar25 + uVar22 + 7) = uVar5;
              *(undefined8 *)(puVar25 + uVar22 + 7 + 4) = uVar6;
              uVar22 = uVar22 + 0x10;
            } while (uVar21 != uVar22);
            puVar25 = puVar15;
            if (uVar19 == uVar21) goto LAB_1425d2a36;
          }
          do {
            uVar18 = *puVar24;
            puVar24 = puVar24 + 1;
            *puVar8 = uVar18;
            puVar8 = puVar8 + 1;
            puVar25 = puVar15;
          } while (puVar24 < puVar14);
        }
LAB_1425d2a36:
        puVar15 = puVar8;
        puVar14 = puVar8;
        puVar24 = (ushort *)0x0;
        if (puVar25 == puVar8) goto LAB_1425d308b;
        goto LAB_1425d2a48;
      }
      puVar8 = puVar24;
      if (uVar23 < 0x3400) {
        uVar1 = *puVar24;
        while ((uint)uVar1 < (uVar23 * 2 & 0xffff)) {
          uVar20 = uVar1 & 1 | 2;
          uVar1 = puVar8[uVar20];
          puVar8 = puVar8 + uVar20;
        }
        if ((uVar23 * 2 & 0xffff) == (uVar1 & 0x7ffe)) {
          uVar20 = (uint)puVar8[1];
          if ((uVar1 & 1) != 0) {
            uVar20 = (uint)puVar8[1];
LAB_1425d2d9f:
            uVar20 = (uint)puVar8[2] | uVar20 << 0x10;
            if ((int)uVar20 < 0) goto LAB_1425d2e10;
          }
          uVar13 = uVar20 >> 1;
          uVar19 = (ulonglong)(uVar23 < 0x10000) | 0xfffffffffffffffe;
          puVar15 = puVar25 + uVar19;
          uVar18 = (ushort)uVar13;
          if (bVar3) {
            if (uVar13 - 0x10000 < 0x100000) {
              *puVar12 = (short)(uVar20 >> 0xb) + 0xd7c0;
              puVar12[1] = uVar18 & 0x3ff | 0xdc00;
              bVar3 = true;
            }
            else {
              *puVar12 = uVar18;
              if (puVar12 + 2 < puVar15) {
                puVar8 = puVar25 + uVar19;
                if (puVar25 + uVar19 <= puVar12 + 3) {
                  puVar8 = puVar12 + 3;
                }
                memmove(puVar12 + 1,puVar12 + 2,
                        ((longlong)puVar8 + (-5 - (longlong)puVar12) & 0xfffffffffffffffeU) + 2);
              }
              puVar15 = puVar15 + -1;
LAB_1425d2f15:
              bVar3 = false;
            }
          }
          else {
            puVar8 = puVar15;
            if (0xfffff < uVar13 - 0x10000) {
              *puVar12 = uVar18;
              goto LAB_1425d2f15;
            }
            for (; puVar12 + 1 < puVar8; puVar8 = puVar8 + -1) {
              *puVar8 = puVar8[-1];
            }
            puVar15 = puVar15 + 1;
            puVar12[1] = uVar18 & 0x3ff | 0xdc00;
            *puVar12 = (short)(uVar20 >> 0xb) + 0xd7c0;
            bVar3 = true;
          }
          puVar8 = puVar14;
          puVar24 = puVar25;
          if (puVar15 < puVar25) {
            if (puVar14 <= puVar25) goto LAB_1425d308b;
            puVar11 = puVar25 + 1;
            if (puVar25 + 1 < puVar14) {
              puVar11 = puVar14;
            }
            puVar8 = puVar15;
            puVar24 = puVar15;
            if ((0x1d < ~(ulonglong)puVar25 + (longlong)puVar11) &&
               (0x1f < (ulonglong)((longlong)puVar15 - (longlong)puVar25))) {
              uVar19 = (~(ulonglong)puVar25 + (longlong)puVar11 >> 1) + 1;
              uVar21 = uVar19 & 0xfffffffffffffff0;
              puVar8 = puVar15 + uVar21;
              uVar22 = 0;
              do {
                uVar4 = *(undefined8 *)(puVar25 + uVar22 + 4);
                uVar5 = *(undefined8 *)(puVar25 + uVar22 + 8);
                uVar6 = *(undefined8 *)(puVar25 + uVar22 + 8 + 4);
                *(undefined8 *)(puVar15 + uVar22) = *(undefined8 *)(puVar25 + uVar22);
                *(undefined8 *)(puVar15 + uVar22 + 4) = uVar4;
                *(undefined8 *)(puVar15 + uVar22 + 8) = uVar5;
                *(undefined8 *)(puVar15 + uVar22 + 8 + 4) = uVar6;
                uVar22 = uVar22 + 0x10;
              } while (uVar21 != uVar22);
              puVar25 = puVar25 + uVar21;
              if (uVar19 == uVar21) goto LAB_1425d2fb9;
            }
            do {
              uVar18 = *puVar25;
              puVar25 = puVar25 + 1;
              *puVar8 = uVar18;
              puVar8 = puVar8 + 1;
            } while (puVar25 < puVar14);
          }
LAB_1425d2fb9:
          puVar25 = puVar24;
          puVar15 = puVar8;
          if (puVar25 == puVar8) goto LAB_1425d308b;
          puVar14 = puVar8;
          puVar24 = (ushort *)0x0;
          if ((uVar20 & 1) != 0) {
            plVar10 = *(longlong **)(param_1 + 0x20);
            lVar2 = plVar10[1];
            if (uVar20 < 0x20000) {
              iVar7 = (uVar13 & 0x3f) + (uint)*(ushort *)(*plVar10 + (ulonglong)(uVar20 >> 7) * 2);
            }
            else if (uVar20 < 0x220000) {
              if ((int)uVar13 < (int)plVar10[3]) {
                iVar7 = FUN_1425cceb0(plVar10,uVar13);
              }
              else {
                iVar7 = *(int *)((longlong)plVar10 + 0x14) + -2;
              }
            }
            else {
              iVar7 = *(int *)((longlong)plVar10 + 0x14) + -1;
            }
            uVar19 = (ulonglong)(*(ushort *)(lVar2 + (longlong)iVar7 * 2) & 0xfffffffe);
            puVar24 = (ushort *)
                      (*(longlong *)(param_1 + 0x30) + uVar19 +
                       (ulonglong)(*(ushort *)(*(longlong *)(param_1 + 0x30) + uVar19) & 0x1f) * 2 +
                      2);
          }
          goto LAB_1425d2a48;
        }
      }
      else {
        uVar20 = (uVar23 >> 9) + 0x3400 & 0xfffe;
        uVar13 = (uVar23 & 0x3ff) << 6;
        while( true ) {
          while( true ) {
            uVar16 = (uint)*puVar8;
            if (uVar20 <= uVar16) break;
            puVar8 = puVar8 + ((ulonglong)(uVar16 & 1) | 2);
          }
          if (uVar20 != (uVar16 & 0x7ffe)) goto LAB_1425d2e10;
          uVar1 = puVar8[1];
          if (uVar13 <= uVar1) break;
          if ((short)*puVar8 < 0) goto LAB_1425d2e10;
          puVar8 = puVar8 + 3;
        }
        if (uVar13 == (uVar1 & 0xffffffc0)) {
          uVar20 = uVar1 & 0x3f;
          goto LAB_1425d2d9f;
        }
      }
    }
LAB_1425d2e10:
    puVar15 = puVar14;
    if (puVar25 == puVar14) {
LAB_1425d308b:
      *(int *)(param_2 + 0x28) =
           *(int *)(param_2 + 0x28) +
           (int)((ulonglong)(*(longlong *)(param_2 + 0x20) - (longlong)puVar15) >> 1);
      *(ushort **)(param_2 + 0x20) = puVar15;
      *(ushort **)(param_2 + 0x18) = puVar15;
      *(undefined1 *)(param_2 + 0x2c) = 0;
      return;
    }
    uVar26 = uVar18;
    if ((byte)uVar18 != 0) {
      if (param_4 != '\0') {
        puVar24 = (ushort *)0x0;
      }
      goto LAB_1425d2a48;
    }
    puVar24 = (ushort *)0x0;
    if ((ushort)(uVar9 + 0x400) < 0x402) goto LAB_1425d2a48;
    puVar8 = (ushort *)
             ((ulonglong)uVar9 * 2 + *(longlong *)(param_1 + 0x28) + (ulonglong)uVar17 * -2);
    if (uVar9 < uVar17) {
      puVar8 = (ushort *)((ulonglong)(uVar9 >> 1) * 2 + *(longlong *)(param_1 + 0x30));
    }
    puVar24 = (ushort *)0x0;
    if (puVar8 == (ushort *)0x0) goto LAB_1425d2a48;
    bVar3 = uVar23 >= 0x10000;
    puVar12 = (ushort *)
              (((ulonglong)((uint)(uVar23 < 0x10000) * 2) | 0xfffffffffffffffc) + (longlong)puVar25)
    ;
  } while( true );
}



// FUNCTION 1425d30c0 FUN_1425d30c0 body=529 status=ok
// SIG undefined FUN_1425d30c0(void)

int FUN_1425d30c0(longlong param_1,uint param_2,ulonglong param_3)

{
  ushort uVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  ushort *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  iVar8 = -1;
  if ((param_2 & 0xfffffc00) != 0xd800) {
    plVar2 = *(longlong **)(param_1 + 0x20);
    lVar3 = plVar2[1];
    if (param_2 < 0x10000) {
      iVar4 = (param_2 & 0x3f) + (uint)*(ushort *)(*plVar2 + (ulonglong)(param_2 >> 6) * 2);
    }
    else if (param_2 < 0x110000) {
      if ((int)param_2 < (int)plVar2[3]) {
        iVar4 = FUN_1425cceb0(plVar2,param_2);
      }
      else {
        iVar4 = *(int *)((longlong)plVar2 + 0x14) + -2;
      }
    }
    else {
      iVar4 = *(int *)((longlong)plVar2 + 0x14) + -1;
    }
    uVar1 = *(ushort *)(lVar3 + (longlong)iVar4 * 2);
    if (uVar1 != 1) {
      uVar9 = (uint)uVar1;
      uVar6 = (uint)param_3;
      if (uVar1 < *(ushort *)(param_1 + 0x10)) {
        if (uVar9 == 2) {
          if (0x14 < uVar6 - 0x1161) {
            return -1;
          }
          return (param_2 * 0x15 + uVar6) * 0x1c + -0x28469c;
        }
        if (*(ushort *)(param_1 + 0xe) == uVar1) {
          if (0x1a < uVar6 - 0x11a8) {
            return -1;
          }
          return param_2 + uVar6 + -0x11a7;
        }
        puVar5 = (ushort *)((ulonglong)(uVar1 & 0xfffffffe) + *(longlong *)(param_1 + 0x30));
        if (*(ushort *)(param_1 + 0xe) < uVar1) {
          puVar5 = puVar5 + (ulonglong)(*puVar5 & 0x1f) + 1;
        }
      }
      else {
        if (0xfbff < uVar9) {
          return -1;
        }
        if (uVar1 < *(ushort *)(param_1 + 0x1e)) {
          return -1;
        }
        puVar5 = (ushort *)
                 ((longlong)((int)(uVar9 - *(ushort *)(param_1 + 0x1e)) >> 1) * 2 +
                 *(longlong *)(param_1 + 0x28));
      }
      if (uVar6 < 0x110000) {
        if (uVar6 < 0x3400) {
          uVar9 = uVar6 * 2 & 0xffff;
          uVar1 = *puVar5;
          while (uVar6 = (uint)uVar1, uVar6 < uVar9) {
            uVar6 = uVar6 & 1 | 2;
            uVar1 = puVar5[uVar6];
            puVar5 = puVar5 + uVar6;
          }
          uVar7 = 0xffffffff;
          if (uVar9 == (uVar6 & 0x7ffe)) {
            uVar7 = (uint)puVar5[1];
            if ((uVar1 & 1) != 0) {
              uVar9 = (uint)puVar5[1];
LAB_1425d32cd:
              uVar7 = (uint)puVar5[2] | uVar9 << 0x10;
            }
          }
        }
        else {
          uVar9 = ((uint)(param_3 >> 9) & 0x7fffff) + 0x3400 & 0xfffe;
          uVar6 = (uVar6 & 0x3ff) << 6;
          uVar7 = 0xffffffff;
          while( true ) {
            while( true ) {
              uVar10 = (uint)*puVar5;
              if (uVar9 <= uVar10) break;
              puVar5 = puVar5 + ((ulonglong)(uVar10 & 1) | 2);
            }
            if (uVar9 != (uVar10 & 0x7ffe)) goto LAB_1425d32d4;
            uVar1 = puVar5[1];
            if (uVar6 <= uVar1) break;
            if ((short)*puVar5 < 0) goto LAB_1425d32d4;
            puVar5 = puVar5 + 3;
          }
          if (uVar6 == (uVar1 & 0xffffffc0)) {
            uVar9 = uVar1 & 0x3f;
            goto LAB_1425d32cd;
          }
        }
LAB_1425d32d4:
        iVar8 = (int)uVar7 >> 1;
      }
    }
  }
  return iVar8;
}



// FUNCTION 1425d32e0 FUN_1425d32e0 body=2776 status=ok
// SIG undefined FUN_1425d32e0(void)

ulonglong FUN_1425d32e0(longlong param_1,ushort *param_2,ushort *param_3,char param_4,char param_5,
                       ushort *param_6,int *param_7)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  longlong *plVar9;
  ushort uVar10;
  ulonglong uVar11;
  ushort *puVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  ushort *unaff_RSI;
  ushort *puVar16;
  ushort *puVar17;
  ushort *puVar18;
  
  uVar1 = *(ushort *)(param_1 + 10);
  puVar12 = param_2;
  if (param_3 == (ushort *)0x0) {
    lVar13 = 2;
    puVar16 = param_2 + -2;
    do {
      puVar17 = puVar16;
      puVar16 = puVar17 + 1;
      lVar13 = lVar13 + -2;
      if (puVar17[2] == 0) break;
    } while (puVar17[2] < uVar1);
    unaff_RSI = puVar17 + 2;
    if ((param_5 != '\0') && (lVar13 != 0)) {
      FUN_1425d08f0(param_6,param_2,unaff_RSI,param_7);
    }
    if (0 < *param_7) {
LAB_1425d3c48:
      uVar11 = 0;
      goto LAB_1425d3c77;
    }
    param_3 = (ushort *)FUN_142503f80(unaff_RSI,0);
    if ((lVar13 != 0) &&
       (uVar2 = *puVar16, param_2 = unaff_RSI, puVar12 = unaff_RSI, (uVar2 & 0xfc00) != 0xd800)) {
      uVar2 = *(ushort *)
               ((*(longlong **)(param_1 + 0x20))[1] +
               ((ulonglong)(uVar2 & 0x3f) +
               (ulonglong)*(ushort *)(**(longlong **)(param_1 + 0x20) + (ulonglong)(uVar2 >> 6) * 2)
               ) * 2);
      if ((uVar2 & 1) == 0) goto LAB_1425d3cea;
      if ((param_4 != '\0') && (uVar2 != 1)) {
        if (uVar2 < *(ushort *)(param_1 + 0x1a)) {
          if (0x1ff < *(ushort *)(*(longlong *)(param_1 + 0x30) + (ulonglong)(uVar2 & 0xfffffffe)))
          {
LAB_1425d3cea:
            lVar13 = *(longlong *)(param_6 + 8);
            if (*(longlong *)(param_6 + 0x10) - lVar13 < 3) {
              *(longlong *)(param_6 + 0x10) = lVar13;
              uVar8 = 0x1b;
              if ((*(ushort *)(*(longlong *)(param_6 + 4) + 8) & 2) == 0) {
                uVar8 = *(undefined4 *)(*(longlong *)(param_6 + 4) + 0x10);
              }
              *(undefined4 *)(param_6 + 0x14) = uVar8;
            }
            else {
              lVar13 = *(longlong *)(param_6 + 0x10) + -2;
              *(longlong *)(param_6 + 0x10) = lVar13;
              *(int *)(param_6 + 0x14) = *(int *)(param_6 + 0x14) + 1;
            }
            *(undefined1 *)(param_6 + 0x16) = 0;
            *(longlong *)(param_6 + 0xc) = lVar13;
            param_2 = puVar16;
            puVar12 = puVar16;
          }
        }
        else if (2 < (uVar2 & 6)) goto LAB_1425d3cea;
      }
    }
  }
joined_r0x0001425d3319:
  puVar16 = param_2;
  if (param_2 != param_3) {
LAB_1425d3343:
    uVar2 = *puVar16;
    unaff_RSI = (ushort *)(ulonglong)uVar2;
    if (uVar2 < uVar1) goto LAB_1425d3330;
    plVar9 = *(longlong **)(param_1 + 0x20);
    lVar13 = plVar9[1];
    uVar3 = *(ushort *)
             (lVar13 + ((ulonglong)(uVar2 & 0x3f) +
                       (ulonglong)*(ushort *)(*plVar9 + (ulonglong)(uVar2 >> 6) * 2)) * 2);
    uVar10 = *(ushort *)(param_1 + 0x12);
    if (uVar3 < uVar10) goto LAB_1425d3330;
    param_2 = puVar16 + 1;
    if ((uVar2 & 0xfc00) == 0xd800) {
      if (param_2 == param_3) goto LAB_1425d3c4f;
      if ((*param_2 & 0xfc00) != 0xdc00) goto joined_r0x0001425d3319;
      uVar14 = (uint)uVar2 * 0x400 + (uint)*param_2 + 0xfca02400;
      unaff_RSI = (ushort *)(ulonglong)uVar14;
      if ((int)uVar14 < (int)plVar9[3]) {
        iVar6 = FUN_1425cceb0(plVar9,unaff_RSI);
        uVar10 = *(ushort *)(param_1 + 0x12);
      }
      else {
        iVar6 = *(int *)((longlong)plVar9 + 0x14) + -2;
      }
      param_2 = puVar16 + 2;
      uVar3 = *(ushort *)(lVar13 + (longlong)iVar6 * 2);
      if (uVar3 < uVar10) goto joined_r0x0001425d3319;
    }
    uVar14 = (uint)uVar3;
    uVar15 = (uint)unaff_RSI;
    if (uVar3 < *(ushort *)(param_1 + 0x1e)) {
      if (param_5 == '\0') goto LAB_1425d3c48;
      if (*(ushort *)(param_1 + 0x1a) <= uVar3) {
        if ((((uVar3 & 1) == 0) || (((uVar3 != 1 && (2 < (uVar3 & 6))) && (param_4 != '\0')))) &&
           (cVar4 = FUN_1425d3dc0(param_1,param_2,param_3), cVar4 == '\0')) goto LAB_1425d395a;
        if ((puVar12 == puVar16) ||
           (cVar4 = FUN_1425d08f0(param_6,puVar12,puVar16,param_7), cVar4 != '\0')) {
          uVar14 = (uVar15 + (uVar3 >> 3)) - (uint)*(ushort *)(param_1 + 0x1c);
          unaff_RSI = (ushort *)(ulonglong)uVar14;
          if ((int)uVar14 < 0x10000) {
            cVar4 = FUN_1425d3f80(param_6,unaff_RSI);
          }
          else {
            cVar4 = FUN_1425d0140(param_6,uVar14,0);
          }
          goto joined_r0x0001425d38ae;
        }
        goto LAB_1425d3da4;
      }
      if (uVar3 < *(ushort *)(param_1 + 0x14)) {
        if ((((uVar3 & 1) != 0) &&
            (((param_4 == '\0' || (uVar3 == 1)) ||
             (*(ushort *)(*(longlong *)(param_1 + 0x30) + (ulonglong)(uVar14 & 0xfffe)) < 0x200))))
           || (cVar4 = FUN_1425d3dc0(param_1,param_2,param_3), cVar4 != '\0')) {
          if ((puVar12 != puVar16) &&
             (cVar4 = FUN_1425d08f0(param_6,puVar12,puVar16,param_7), unaff_RSI = param_6,
             cVar4 == '\0')) goto LAB_1425d3da4;
          puVar12 = (ushort *)(*(longlong *)(param_1 + 0x30) + (ulonglong)(uVar14 & 0xfffe) + 2);
          unaff_RSI = param_6;
LAB_1425d38a1:
          cVar4 = FUN_1425d08f0(param_6,puVar12);
joined_r0x0001425d38ae:
          puVar18 = param_2;
          if (cVar4 != '\0') goto LAB_1425d3b7f;
          goto LAB_1425d3da4;
        }
      }
      else if ((*(ushort *)(param_1 + 0x18) <= uVar3) &&
              ((cVar4 = FUN_1425d3dc0(param_1,param_2), cVar4 != '\0' ||
               (cVar4 = FUN_1425d3e90(param_1,puVar12), cVar4 != '\0')))) {
        puVar18 = param_2;
        if (puVar12 != puVar16) goto LAB_1425d38a1;
        goto LAB_1425d3b7f;
      }
    }
    else {
      if ((uVar14 != 0xfe00) || (puVar12 == puVar16)) {
        if (uVar14 < 0xfe01) goto LAB_1425d395a;
        unaff_RSI = (ushort *)(ulonglong)(uVar3 >> 1);
        puVar17 = param_2;
        if ((param_4 != '\0') && (puVar12 != puVar16)) {
          uVar2 = puVar12[((longlong)puVar16 - (longlong)puVar12) * 0x80000000 + -0x100000000 >>
                          0x20];
          uVar11 = (ulonglong)uVar2;
          if (((uVar2 & 0xfc00) == 0xdc00) &&
             ((iVar6 = (int)((ulonglong)((longlong)puVar16 - (longlong)puVar12) >> 1), 1 < iVar6 &&
              ((puVar12[iVar6 - 2] & 0xfc00) == 0xd800)))) {
            uVar11 = (ulonglong)((uint)uVar2 + (uint)puVar12[iVar6 - 2] * 0x400 + 0xfca02400);
          }
          if ((uint)*(ushort *)(param_1 + 8) <= (uint)uVar11) {
            if ((uint)uVar11 < 0x10000) {
              bVar5 = *(byte *)(*(longlong *)(param_1 + 0x38) + (uVar11 >> 8));
              if ((bVar5 == 0) || ((1 << ((byte)(uVar11 >> 5) & 7) & (uint)bVar5) == 0))
              goto LAB_1425d373a;
            }
            bVar5 = FUN_1425d5c90(param_1);
            if ((byte)(uVar3 >> 1) < bVar5) {
              if (param_5 != '\0') goto LAB_1425d395a;
              goto LAB_1425d3c48;
            }
          }
        }
LAB_1425d373a:
        do {
          param_2 = puVar17;
          if (param_2 == param_3) {
            uVar11 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
            if (param_5 == '\0') goto LAB_1425d3c77;
            goto LAB_1425d3c72;
          }
          puVar17 = param_2 + 1;
          uVar2 = *param_2;
          if ((uVar2 & 0xf800) == 0xd800) {
            if (((uVar2 & 0x400) == 0) && (puVar17 != param_3)) {
              uVar10 = *puVar17;
              plVar9 = *(longlong **)(param_1 + 0x20);
              if ((uVar10 & 0xfc00) == 0xdc00) {
                puVar17 = param_2 + 2;
                if ((int)((uint)uVar10 + (uint)uVar2 * 0x400 + -0x35fdc00) < (int)plVar9[3]) {
                  iVar6 = FUN_1425cceb0();
                  plVar9 = *(longlong **)(param_1 + 0x20);
                }
                else {
                  iVar6 = *(int *)((longlong)plVar9 + 0x14) + -2;
                }
                goto LAB_1425d37c8;
              }
            }
            else {
              plVar9 = *(longlong **)(param_1 + 0x20);
            }
            iVar6 = *(int *)((longlong)plVar9 + 0x14) + -1;
          }
          else {
            plVar9 = *(longlong **)(param_1 + 0x20);
            iVar6 = (uVar2 & 0x3f) + (uint)*(ushort *)(*plVar9 + (ulonglong)(uVar2 >> 6) * 2);
          }
LAB_1425d37c8:
          uVar2 = *(ushort *)(plVar9[1] + (longlong)iVar6 * 2);
          if (uVar2 < 0xfe02) goto LAB_1425d37f6;
          bVar5 = (byte)unaff_RSI;
          unaff_RSI = (ushort *)(ulonglong)(uVar2 >> 1);
        } while (bVar5 <= (byte)(uVar2 >> 1));
        if (param_5 == '\0') goto LAB_1425d3c48;
LAB_1425d37f6:
        if ((*(ushort *)(param_1 + 0x16) <= uVar2) &&
           ((uVar2 < *(ushort *)(param_1 + 0x1a) || (*(ushort *)(param_1 + 0x1e) <= uVar2))))
        goto LAB_1425d395a;
        puVar18 = puVar12;
        if (uVar2 < *(ushort *)(param_1 + 0x12)) {
          param_2 = puVar17;
        }
        goto LAB_1425d3b7f;
      }
      puVar17 = puVar16 + -1;
      uVar2 = puVar16[-1];
      if (0x11a6 < uVar15) {
        uVar14 = uVar2 - 0xac00;
        if ((0x2ba3 < uVar14) ||
           (uVar7 = (uVar14 & 0xffff) >> 2,
           (short)uVar14 != (short)((short)(uVar7 / 7) * 0x1b + (short)(uVar7 / 7))))
        goto LAB_1425d395a;
        if (param_5 != '\0') {
          if ((puVar12 != puVar17) &&
             (cVar4 = FUN_1425d08f0(param_6,puVar12,puVar17,param_7), cVar4 == '\0'))
          goto LAB_1425d3da4;
          iVar6 = uVar15 + uVar2 + -0x11a7;
LAB_1425d392c:
          cVar4 = FUN_1425d3f80(param_6,iVar6,0);
          goto joined_r0x0001425d38ae;
        }
        goto LAB_1425d3c48;
      }
      if ((ushort)(uVar2 + 0xef00) < 0x13) {
        if (param_5 != '\0') {
          if ((param_2 == param_3) || (0x1a < (ushort)(*param_2 + 0xee58))) {
            cVar4 = FUN_1425d3dc0(param_1,param_2,param_3);
            iVar6 = 0;
            if (cVar4 == '\0') goto LAB_1425d395a;
          }
          else {
            iVar6 = *param_2 - 0x11a7;
            param_2 = param_2 + 1;
          }
          if ((puVar12 != puVar17) &&
             (cVar4 = FUN_1425d08f0(param_6,puVar12,puVar17,param_7), cVar4 == '\0'))
          goto LAB_1425d3da4;
          uVar15 = uVar15 + (uint)(ushort)(uVar2 + 0xef00) * 0x15;
          unaff_RSI = (ushort *)(ulonglong)uVar15;
          iVar6 = iVar6 + uVar15 * 0x1c + 0x1ac564;
          goto LAB_1425d392c;
        }
        goto LAB_1425d3c48;
      }
    }
LAB_1425d395a:
    if (((puVar12 != puVar16) && (*(ushort *)(param_1 + 0x16) <= uVar3)) &&
       ((uVar3 < *(ushort *)(param_1 + 0x1a) || (*(ushort *)(param_1 + 0x1e) <= uVar3)))) {
      unaff_RSI = puVar16 + -1;
      uVar2 = puVar16[-1];
      if ((uVar2 & 0xf800) == 0xd800) {
        if ((unaff_RSI == puVar12) || ((uVar2 & 0x400) == 0)) {
          plVar9 = *(longlong **)(param_1 + 0x20);
        }
        else {
          plVar9 = *(longlong **)(param_1 + 0x20);
          if ((puVar16[-2] & 0xfc00) == 0xd800) {
            unaff_RSI = puVar16 + -2;
            if ((int)((uint)puVar16[-2] * 0x400 + (uint)uVar2 + -0x35fdc00) < (int)plVar9[3]) {
              iVar6 = FUN_1425cceb0();
              plVar9 = *(longlong **)(param_1 + 0x20);
            }
            else {
              iVar6 = *(int *)((longlong)plVar9 + 0x14) + -2;
            }
            goto LAB_1425d3a22;
          }
        }
        iVar6 = *(int *)((longlong)plVar9 + 0x14) + -1;
      }
      else {
        plVar9 = *(longlong **)(param_1 + 0x20);
        iVar6 = (uVar2 & 0x3f) + (uint)*(ushort *)(*plVar9 + (ulonglong)(uVar2 >> 6) * 2);
      }
LAB_1425d3a22:
      uVar2 = *(ushort *)(plVar9[1] + (longlong)iVar6 * 2);
      if ((uVar2 & 1) == 0) goto LAB_1425d3a34;
      if ((param_4 != '\0') && (uVar2 != 1)) {
        if (uVar2 < *(ushort *)(param_1 + 0x1a)) {
          if (0x1ff < *(ushort *)(*(longlong *)(param_1 + 0x30) + (ulonglong)(uVar2 & 0xfffe))) {
LAB_1425d3a34:
            puVar16 = unaff_RSI;
          }
        }
        else if (2 < (uVar2 & 6)) goto LAB_1425d3a34;
      }
    }
    if (((param_5 == '\0') || (puVar12 == puVar16)) ||
       (cVar4 = FUN_1425d08f0(param_6,puVar12,puVar16,param_7), cVar4 != '\0')) {
      FUN_1425d15a0(param_1,puVar16,param_2,0,param_4,param_6,param_7);
      uVar11 = 1;
      param_2 = (ushort *)FUN_1425d15a0(param_1,param_2,param_3,1,param_4,param_6,param_7);
      if (0 < *param_7) goto LAB_1425d3c77;
      if (0xfffffffe < (longlong)param_2 - (longlong)puVar16) {
        *param_7 = 8;
        goto LAB_1425d3c77;
      }
      FUN_1425d29c0(param_1,param_6);
      unaff_RSI = param_6;
      puVar18 = param_2;
      if (param_5 != '\0') goto LAB_1425d3b7f;
      if (((int)((ulonglong)(*(longlong *)(param_6 + 0x10) - *(longlong *)(param_6 + 8)) >> 1) !=
           (int)((ulonglong)((longlong)param_2 - (longlong)puVar16) >> 1)) ||
         (iVar6 = FUN_1425048b0(*(longlong *)(param_6 + 8),puVar16), iVar6 != 0))
      goto LAB_1425d3c48;
      *(undefined8 *)(param_6 + 0x10) = *(undefined8 *)(param_6 + 8);
      *(undefined8 *)(param_6 + 0xc) = *(undefined8 *)(param_6 + 8);
      uVar8 = 0x1b;
      if ((*(ushort *)(*(longlong *)(param_6 + 4) + 8) & 2) == 0) {
        uVar8 = *(undefined4 *)(*(longlong *)(param_6 + 4) + 0x10);
      }
      *(undefined4 *)(param_6 + 0x14) = uVar8;
      *(undefined1 *)(param_6 + 0x16) = 0;
LAB_1425d3b7f:
      puVar16 = param_2;
      puVar12 = puVar18;
      if (param_2 == param_3) goto LAB_1425d3c4f;
      goto LAB_1425d3343;
    }
LAB_1425d3da4:
    uVar11 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    goto LAB_1425d3c77;
  }
LAB_1425d3c4f:
  uVar11 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((param_5 != '\0') && (puVar12 != param_3)) {
LAB_1425d3c72:
    FUN_1425d08f0(param_6,puVar12,param_3,param_7);
  }
LAB_1425d3c77:
  return uVar11 & 0xffffffff;
LAB_1425d3330:
  param_2 = puVar16 + 1;
  goto joined_r0x0001425d3319;
}



// FUNCTION 1425d3dc0 FUN_1425d3dc0 body=200 status=ok
// SIG undefined FUN_1425d3dc0(void)

ulonglong FUN_1425d3dc0(longlong param_1,ushort *param_2,ushort *param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
  undefined7 uVar6;
  
  uVar6 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar5 = CONCAT71(uVar6,1);
  if ((param_2 != param_3) && (uVar1 = *param_2, *(ushort *)(param_1 + 10) <= uVar1)) {
    if ((uVar1 & 0xf800) == 0xd800) {
      if ((((uVar1 & 0x400) == 0) && (param_2 + 1 != param_3)) &&
         (uVar2 = param_2[1], (uVar2 & 0xfc00) == 0xdc00)) {
        plVar4 = *(longlong **)(param_1 + 0x20);
        if ((int)((uint)uVar1 * 0x400 + (uint)uVar2 + -0x35fdc00) < (int)plVar4[3]) {
          iVar3 = FUN_1425cceb0();
          plVar4 = *(longlong **)(param_1 + 0x20);
        }
        else {
          iVar3 = *(int *)((longlong)plVar4 + 0x14) + -2;
        }
      }
      else {
        plVar4 = *(longlong **)(param_1 + 0x20);
        iVar3 = *(int *)((longlong)plVar4 + 0x14) + -1;
      }
    }
    else {
      plVar4 = *(longlong **)(param_1 + 0x20);
      iVar3 = (uVar1 & 0x3f) + (uint)*(ushort *)(*plVar4 + (ulonglong)(uVar1 >> 6) * 2);
    }
    uVar1 = *(ushort *)(plVar4[1] + (longlong)iVar3 * 2);
    if (*(ushort *)(param_1 + 0x16) <= uVar1) {
      uVar5 = CONCAT71(uVar6,uVar1 < *(ushort *)(param_1 + 0x1e) &&
                             *(ushort *)(param_1 + 0x1a) <= uVar1);
    }
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 1425d3e90 FUN_1425d3e90 body=236 status=ok
// SIG undefined FUN_1425d3e90(void)

ulonglong FUN_1425d3e90(longlong param_1,longlong param_2,longlong param_3,char param_4)

{
  ushort uVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  bool bVar6;
  undefined7 uVar5;
  
  uVar5 = (undefined7)((ulonglong)unaff_RSI >> 8);
  uVar4 = CONCAT71(uVar5,1);
  if (param_2 != param_3) {
    uVar1 = *(ushort *)(param_3 + -2);
    if ((uVar1 & 0xf800) == 0xd800) {
      if (((param_3 + -2 == param_2) || ((uVar1 & 0x400) == 0)) ||
         ((*(ushort *)(param_3 + -4) & 0xfc00) != 0xd800)) {
        plVar3 = *(longlong **)(param_1 + 0x20);
        iVar2 = *(int *)((longlong)plVar3 + 0x14) + -1;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x20);
        if ((int)((uint)uVar1 + (uint)*(ushort *)(param_3 + -4) * 0x400 + -0x35fdc00) <
            (int)plVar3[3]) {
          iVar2 = FUN_1425cceb0();
          plVar3 = *(longlong **)(param_1 + 0x20);
        }
        else {
          iVar2 = *(int *)((longlong)plVar3 + 0x14) + -2;
        }
      }
    }
    else {
      plVar3 = *(longlong **)(param_1 + 0x20);
      iVar2 = (uVar1 & 0x3f) + (uint)*(ushort *)(*plVar3 + (ulonglong)(uVar1 >> 6) * 2);
    }
    uVar1 = *(ushort *)(plVar3[1] + (longlong)iVar2 * 2);
    if ((uVar1 & 1) == 0) {
      uVar4 = 0;
    }
    else if (param_4 != '\0') {
      uVar4 = CONCAT71(uVar5,1);
      if (uVar1 != 1) {
        if (uVar1 < *(ushort *)(param_1 + 0x1a)) {
          bVar6 = *(ushort *)(*(longlong *)(param_1 + 0x30) + (ulonglong)(uVar1 & 0xfffffffe)) <
                  0x200;
        }
        else {
          bVar6 = (uVar1 & 6) < 3;
        }
        uVar4 = CONCAT71(uVar5,bVar6);
      }
    }
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 1425d3f80 FUN_1425d3f80 body=394 status=ok
// SIG undefined FUN_1425d3f80(void)

undefined8 FUN_1425d3f80(longlong param_1,undefined2 param_2,byte param_3,undefined4 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x18);
    lVar2 = *(longlong *)(param_1 + 0x10);
    uVar10 = (ulonglong)(*(longlong *)(param_1 + 0x20) - lVar2) >> 1;
    iVar9 = (int)uVar10;
    FUN_1408550d0(*(undefined8 *)(param_1 + 8),uVar10 & 0xffffffff);
    lVar5 = *(longlong *)(param_1 + 8);
    iVar4 = 0x36;
    if ((*(ushort *)(lVar5 + 8) & 2) == 0) {
      iVar4 = *(int *)(lVar5 + 0x10) * 2;
    }
    if (iVar4 < iVar9 + 1) {
      iVar4 = iVar9 + 1;
    }
    iVar8 = 0x100;
    if (0x100 < iVar4) {
      iVar8 = iVar4;
    }
    lVar5 = FUN_140855070(lVar5,iVar8);
    *(longlong *)(param_1 + 0x10) = lVar5;
    if (lVar5 == 0) {
      *param_4 = 7;
      return 0;
    }
    *(longlong *)(param_1 + 0x18) = lVar5 + (longlong)(int)((ulonglong)(lVar1 - lVar2) >> 1) * 2;
    *(longlong *)(param_1 + 0x20) = lVar5 + (longlong)iVar9 * 2;
    iVar4 = 0x1b;
    if ((*(ushort *)(*(longlong *)(param_1 + 8) + 8) & 2) == 0) {
      iVar4 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
    }
    *(int *)(param_1 + 0x28) = iVar4 - iVar9;
  }
  puVar7 = *(undefined2 **)(param_1 + 0x20);
  if ((param_3 == 0) || (*(byte *)(param_1 + 0x2c) <= param_3)) {
    *(undefined2 **)(param_1 + 0x20) = puVar7 + 1;
    *puVar7 = param_2;
    *(byte *)(param_1 + 0x2c) = param_3;
    if (1 < param_3) goto LAB_1425d40ea;
    puVar6 = *(undefined2 **)(param_1 + 0x20);
  }
  else {
    *(undefined2 **)(param_1 + 0x38) = puVar7;
    *(undefined2 **)(param_1 + 0x30) = puVar7 + -1;
    if ((((puVar7[-1] & 0xfc00) == 0xdc00) && (*(undefined2 **)(param_1 + 0x10) < puVar7 + -1)) &&
       ((puVar7[-2] & 0xfc00) == 0xd800)) {
      *(undefined2 **)(param_1 + 0x30) = puVar7 + -2;
    }
    do {
      bVar3 = FUN_1425cfef0(param_1);
    } while (param_3 < bVar3);
    puVar7 = *(undefined2 **)(param_1 + 0x20);
    *(undefined2 **)(param_1 + 0x20) = puVar7 + 1;
    do {
      puVar6 = puVar7;
      *puVar6 = puVar6[-1];
      puVar7 = puVar6 + -1;
    } while (puVar7 != *(undefined2 **)(param_1 + 0x38));
    *puVar7 = param_2;
    if (1 < param_3) goto LAB_1425d40ea;
  }
  *(undefined2 **)(param_1 + 0x18) = puVar6;
  puVar7 = puVar6;
LAB_1425d40ea:
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
  return CONCAT71((int7)((ulonglong)puVar7 >> 8),1);
}



// FUNCTION 1425d4110 FUN_1425d4110 body=1156 status=ok
// SIG undefined FUN_1425d4110(void)

ushort * FUN_1425d4110(longlong param_1,ushort *param_2,ushort *param_3,char param_4,
                      undefined4 *param_5)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  ushort uVar6;
  ushort uVar7;
  byte bVar8;
  ushort uVar9;
  ushort *puVar10;
  ushort *puVar11;
  longlong lVar12;
  ushort *puVar13;
  bool bVar14;
  
  uVar1 = *(ushort *)(param_1 + 10);
  puVar10 = param_2;
  if (param_3 == (ushort *)0x0) {
    lVar12 = 2;
    puVar13 = param_2 + -2;
    do {
      puVar11 = puVar13;
      puVar13 = puVar11 + 1;
      lVar12 = lVar12 + -2;
      if (puVar11[2] == 0) break;
    } while (puVar11[2] < uVar1);
    puVar11 = puVar11 + 2;
    param_3 = (ushort *)FUN_142503f80(puVar11,0);
    if (lVar12 != 0) {
      uVar9 = *puVar13;
      if ((uVar9 & 0xfc00) != 0xd800) {
        uVar9 = *(ushort *)
                 ((*(longlong **)(param_1 + 0x20))[1] +
                 ((ulonglong)(uVar9 & 0x3f) +
                 (ulonglong)
                 *(ushort *)(**(longlong **)(param_1 + 0x20) + (ulonglong)(uVar9 >> 6) * 2)) * 2);
        param_2 = puVar13;
        puVar10 = puVar13;
        if ((uVar9 & 1) == 0) goto LAB_1425d41d5;
        if ((param_4 != '\0') && (uVar9 != 1)) {
          if (uVar9 < *(ushort *)(param_1 + 0x1a)) {
            if (0x1ff < *(ushort *)(*(longlong *)(param_1 + 0x30) + (ulonglong)(uVar9 & 0xfffe)))
            goto LAB_1425d41d5;
          }
          else if (2 < (uVar9 & 6)) goto LAB_1425d41d5;
        }
      }
      param_2 = puVar11;
      puVar10 = puVar11;
    }
  }
LAB_1425d41d5:
  if (puVar10 == param_3) {
    return param_3;
  }
  do {
    uVar9 = *puVar10;
    if (uVar9 < uVar1) {
LAB_1425d41f0:
      puVar13 = puVar10 + 1;
    }
    else {
      plVar5 = *(longlong **)(param_1 + 0x20);
      lVar12 = plVar5[1];
      uVar6 = *(ushort *)
               (lVar12 + ((ulonglong)(uVar9 & 0x3f) +
                         (ulonglong)*(ushort *)(*plVar5 + (ulonglong)(uVar9 >> 6) * 2)) * 2);
      uVar7 = *(ushort *)(param_1 + 0x12);
      if (uVar6 < uVar7) goto LAB_1425d41f0;
      puVar13 = puVar10 + 1;
      if ((uVar9 & 0xfc00) != 0xd800) break;
      if (puVar13 == param_3) {
        return param_3;
      }
      if ((*puVar13 & 0xfc00) == 0xdc00) {
        if ((int)((uint)*puVar13 + (uint)uVar9 * 0x400 + -0x35fdc00) < (int)plVar5[3]) {
          iVar2 = FUN_1425cceb0();
          uVar7 = *(ushort *)(param_1 + 0x12);
        }
        else {
          iVar2 = *(int *)((longlong)plVar5 + 0x14) + -2;
        }
        puVar13 = puVar10 + 2;
        uVar6 = *(ushort *)(lVar12 + (longlong)iVar2 * 2);
        if (uVar7 <= uVar6) break;
      }
    }
    puVar10 = puVar13;
    if (puVar10 == param_3) {
      return param_3;
    }
  } while( true );
  uVar3 = 1;
  puVar11 = param_2;
  if (param_2 == puVar10) goto LAB_1425d43d6;
  uVar3 = 1;
  if ((*(ushort *)(param_1 + 0x16) <= uVar6) &&
     ((uVar6 < *(ushort *)(param_1 + 0x1a) || (*(ushort *)(param_1 + 0x1e) <= uVar6)))) {
    puVar11 = puVar10 + -1;
    uVar9 = puVar10[-1];
    if ((uVar9 & 0xf800) == 0xd800) {
      if (((uVar9 & 0x400) == 0) || (puVar11 == param_2)) {
        plVar5 = *(longlong **)(param_1 + 0x20);
      }
      else {
        plVar5 = *(longlong **)(param_1 + 0x20);
        if ((puVar10[-2] & 0xfc00) == 0xd800) {
          puVar11 = puVar10 + -2;
          if ((int)((uint)puVar10[-2] * 0x400 + (uint)uVar9 + -0x35fdc00) < (int)plVar5[3]) {
            iVar2 = FUN_1425cceb0();
            plVar5 = *(longlong **)(param_1 + 0x20);
          }
          else {
            iVar2 = *(int *)((longlong)plVar5 + 0x14) + -2;
          }
          goto LAB_1425d4375;
        }
      }
      iVar2 = *(int *)((longlong)plVar5 + 0x14) + -1;
    }
    else {
      plVar5 = *(longlong **)(param_1 + 0x20);
      iVar2 = (uVar9 & 0x3f) + (uint)*(ushort *)(*plVar5 + (ulonglong)(uVar9 >> 6) * 2);
    }
LAB_1425d4375:
    uVar9 = *(ushort *)(plVar5[1] + (longlong)iVar2 * 2);
    uVar4 = (uint)uVar9;
    if (((uVar9 & 1) == 0) || (param_4 == '\0')) {
      bVar14 = (bool)((byte)uVar9 & 1);
      uVar3 = uVar4;
      if ((uVar9 & 1) != 0) {
LAB_1425d43cb:
        uVar3 = 1;
      }
    }
    else {
      uVar3 = 1;
      if (uVar9 == 1) goto LAB_1425d43d3;
      if (uVar9 < *(ushort *)(param_1 + 0x1a)) {
        bVar14 = *(ushort *)(*(longlong *)(param_1 + 0x30) + (ulonglong)(uVar4 & 0xfffe)) < 0x200;
      }
      else {
        bVar14 = (uVar9 & 6) < 3;
      }
      uVar3 = uVar4;
      if (bVar14) goto LAB_1425d43cb;
    }
    if (bVar14 == false) goto LAB_1425d43d6;
  }
LAB_1425d43d3:
  puVar11 = puVar10;
LAB_1425d43d6:
  if (uVar6 < *(ushort *)(param_1 + 0x1e)) goto LAB_1425d4591;
  uVar9 = uVar6 >> 1;
  if (uVar6 < 0xfc00) {
    uVar9 = 0;
  }
  if ((((param_4 != '\0') && ((byte)uVar9 != 0)) && (*(ushort *)(param_1 + 0xe) < (ushort)uVar3)) &&
     ((byte)uVar9 < *(byte *)(*(longlong *)(param_1 + 0x30) + 1 + (ulonglong)(uVar3 & 0xfffe))))
  goto LAB_1425d4591;
  do {
    param_2 = puVar13;
    if (uVar6 < 0xfe02) {
      if (param_5 == (undefined4 *)0x0) {
        return puVar11;
      }
      *param_5 = 2;
    }
    if (param_2 == param_3) {
      return param_3;
    }
    puVar13 = param_2 + 1;
    uVar6 = *param_2;
    if ((uVar6 & 0xf800) == 0xd800) {
      if (((uVar6 & 0x400) == 0) && (puVar13 != param_3)) {
        uVar7 = *puVar13;
        plVar5 = *(longlong **)(param_1 + 0x20);
        if ((uVar7 & 0xfc00) == 0xdc00) {
          puVar13 = param_2 + 2;
          if ((int)((uint)uVar7 + (uint)uVar6 * 0x400 + -0x35fdc00) < (int)plVar5[3]) {
            iVar2 = FUN_1425cceb0();
            plVar5 = *(longlong **)(param_1 + 0x20);
          }
          else {
            iVar2 = *(int *)((longlong)plVar5 + 0x14) + -2;
          }
          goto LAB_1425d44e9;
        }
      }
      else {
        plVar5 = *(longlong **)(param_1 + 0x20);
      }
      iVar2 = *(int *)((longlong)plVar5 + 0x14) + -1;
    }
    else {
      plVar5 = *(longlong **)(param_1 + 0x20);
      iVar2 = (uVar6 & 0x3f) + (uint)*(ushort *)(*plVar5 + (ulonglong)(uVar6 >> 6) * 2);
    }
LAB_1425d44e9:
    uVar6 = *(ushort *)(plVar5[1] + (longlong)iVar2 * 2);
    if (uVar6 < *(ushort *)(param_1 + 0x1e)) break;
    uVar7 = uVar6 >> 1;
    if (uVar6 < 0xfc00) {
      uVar7 = 0;
    }
    bVar8 = (byte)uVar9;
    uVar9 = uVar7;
  } while ((bVar8 <= (byte)uVar7) || ((byte)uVar7 == 0));
  puVar10 = puVar13;
  if (*(ushort *)(param_1 + 0x12) <= uVar6) {
LAB_1425d4591:
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = 0;
    }
    return puVar11;
  }
  goto LAB_1425d41d5;
}



// FUNCTION 1425d45c0 FUN_1425d45c0 body=532 status=ok
// SIG undefined FUN_1425d45c0(void)

void FUN_1425d45c0(undefined8 param_1,longlong param_2,longlong param_3,char param_4,
                  undefined1 param_5,undefined8 param_6,longlong param_7,int *param_8)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined1 local_b8 [8];
  ushort local_b0;
  undefined1 local_ae [2];
  int local_ac;
  undefined1 *local_a0;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  char local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (*(longlong *)(param_7 + 0x10) != *(longlong *)(param_7 + 0x20)) {
    local_60 = param_3;
    local_49 = param_4;
    lVar1 = FUN_1425d4860(param_1,param_2);
    param_3 = local_60;
    param_4 = local_49;
    if (lVar1 - param_2 != 0) {
      local_68 = lVar1;
      lVar2 = FUN_1425d49d0(param_1,*(undefined8 *)(param_7 + 0x10),*(undefined8 *)(param_7 + 0x20),
                            param_5);
      uVar5 = (ulonglong)(*(longlong *)(param_7 + 0x20) - lVar2) >> 1;
      iVar4 = (int)uVar5;
      FUN_1424a7000(local_b8,lVar2,uVar5 & 0xffffffff);
      lVar2 = *(longlong *)(param_7 + 0x10);
      if ((longlong)iVar4 < *(longlong *)(param_7 + 0x20) - lVar2 >> 1) {
        lVar2 = *(longlong *)(param_7 + 0x20) + (longlong)iVar4 * -2;
        *(longlong *)(param_7 + 0x20) = lVar2;
        *(int *)(param_7 + 0x28) = *(int *)(param_7 + 0x28) + iVar4;
      }
      else {
        *(longlong *)(param_7 + 0x20) = lVar2;
        uVar3 = 0x1b;
        if ((*(ushort *)(*(longlong *)(param_7 + 8) + 8) & 2) == 0) {
          uVar3 = *(undefined4 *)(*(longlong *)(param_7 + 8) + 0x10);
        }
        *(undefined4 *)(param_7 + 0x28) = uVar3;
      }
      *(undefined1 *)(param_7 + 0x2c) = 0;
      *(longlong *)(param_7 + 0x18) = lVar2;
      FUN_1424a7c80(param_6,local_b8);
      local_58 = param_2;
      FUN_1424a6cf0(local_b8,param_2,0,(ulonglong)(lVar1 - param_2) >> 1 & 0xffffffff);
      local_70 = local_58;
      if ((local_b0 & 0x11) == 0) {
        if ((local_b0 & 2) != 0) {
          local_a0 = local_ae;
        }
      }
      else {
        local_a0 = (undefined1 *)0x0;
      }
      if (-1 < (short)local_b0) {
        local_ac = (int)(short)local_b0 >> 5;
      }
      FUN_1425d32e0(param_1,local_a0,local_a0 + (longlong)local_ac * 2,param_5,1,param_7,param_8);
      iVar4 = *param_8;
      FUN_140859a90(local_b8);
      param_3 = local_60;
      param_2 = local_68;
      param_4 = local_49;
      if (0 < iVar4) {
        return;
      }
    }
  }
  if (param_4 == '\0') {
    if (param_3 == 0) {
      param_3 = FUN_142503f80(param_2,0,0,param_5);
    }
    FUN_1425d08f0(param_7,param_2,param_3,param_8);
  }
  else {
    FUN_1425d32e0(param_1,param_2,param_3,param_5,1,param_7,param_8);
  }
  return;
}



// FUNCTION 1425d47e0 Unwind@1425d47e0 body=55 status=ok
// SIG undefined Unwind@1425d47e0(void)

void Unwind_1425d47e0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x40);
  return;
}



// FUNCTION 1425d4820 Unwind@1425d4820 body=53 status=ok
// SIG undefined Unwind@1425d4820(void)

void Unwind_1425d4820(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(param_2 + 0xa0);
  return;
}



// FUNCTION 1425d4860 FUN_1425d4860 body=333 status=ok
// SIG undefined FUN_1425d4860(void)

ushort * FUN_1425d4860(longlong param_1,ushort *param_2,ushort *param_3,char param_4)

{
  ushort uVar1;
  int iVar2;
  longlong *plVar3;
  ushort *puVar4;
  uint uVar5;
  bool bVar6;
  
joined_r0x0001425d4873:
  puVar4 = param_2;
  if (param_2 == param_3) {
    return param_2;
  }
  do {
    param_2 = puVar4 + 1;
    uVar1 = *puVar4;
    uVar5 = (uint)uVar1;
    if ((uVar5 & 0xf800) == 0xd800) {
      if (((uVar1 & 0x400) == 0) && (param_2 != param_3)) {
        uVar1 = *param_2;
        plVar3 = *(longlong **)(param_1 + 0x20);
        if ((uVar1 & 0xfc00) == 0xdc00) {
          param_2 = puVar4 + 2;
          uVar5 = uVar5 * 0x400 + (uint)uVar1 + 0xfca02400;
          if ((int)uVar5 < (int)plVar3[3]) {
            iVar2 = FUN_1425cceb0(plVar3,uVar5);
            plVar3 = *(longlong **)(param_1 + 0x20);
          }
          else {
            iVar2 = *(int *)((longlong)plVar3 + 0x14) + -2;
          }
          goto LAB_1425d4939;
        }
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x20);
      }
      iVar2 = *(int *)((longlong)plVar3 + 0x14) + -1;
    }
    else {
      plVar3 = *(longlong **)(param_1 + 0x20);
      iVar2 = (uVar5 & 0x3f) + (uint)*(ushort *)(*plVar3 + (ulonglong)(uVar1 >> 6) * 2);
    }
LAB_1425d4939:
    if (uVar5 < *(ushort *)(param_1 + 10)) {
      return puVar4;
    }
    uVar1 = *(ushort *)(plVar3[1] + (longlong)iVar2 * 2);
    if (uVar1 < *(ushort *)(param_1 + 0x16)) {
      return puVar4;
    }
    if ((*(ushort *)(param_1 + 0x1a) <= uVar1) && (uVar1 < *(ushort *)(param_1 + 0x1e))) {
      return puVar4;
    }
    if ((uVar1 & 1) != 0) break;
    puVar4 = param_2;
    if (param_2 == param_3) {
      return param_3;
    }
  } while( true );
  if (param_4 == '\0') {
    return param_2;
  }
  if (uVar1 == 1) {
    return param_2;
  }
  if (uVar1 < *(ushort *)(param_1 + 0x1a)) {
    bVar6 = *(ushort *)(*(longlong *)(param_1 + 0x30) + (ulonglong)(uVar1 & 0xfffffffe)) < 0x200;
  }
  else {
    bVar6 = (uVar1 & 6) < 3;
  }
  if (bVar6) {
    return param_2;
  }
  goto joined_r0x0001425d4873;
}



// FUNCTION 1425d49d0 FUN_1425d49d0 body=326 status=ok
// SIG undefined FUN_1425d49d0(void)

longlong FUN_1425d49d0(longlong param_1,longlong param_2,longlong param_3,char param_4)

{
  ushort uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  
  do {
    if (param_3 == param_2) {
      return param_2;
    }
    lVar4 = param_3 + -2;
    uVar1 = *(ushort *)(param_3 + -2);
    uVar5 = (uint)uVar1;
    if ((uVar5 & 0xf800) == 0xd800) {
      if ((lVar4 == param_2) || ((uVar1 & 0x400) == 0)) {
        plVar3 = *(longlong **)(param_1 + 0x20);
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x20);
        if ((*(ushort *)(param_3 + -4) & 0xfc00) == 0xd800) {
          lVar4 = param_3 + -4;
          uVar5 = uVar5 + (uint)*(ushort *)(param_3 + -4) * 0x400 + 0xfca02400;
          if ((int)uVar5 < (int)plVar3[3]) {
            iVar2 = FUN_1425cceb0(plVar3,uVar5);
            plVar3 = *(longlong **)(param_1 + 0x20);
          }
          else {
            iVar2 = *(int *)((longlong)plVar3 + 0x14) + -2;
          }
          goto LAB_1425d4a99;
        }
      }
      iVar2 = *(int *)((longlong)plVar3 + 0x14) + -1;
    }
    else {
      plVar3 = *(longlong **)(param_1 + 0x20);
      iVar2 = (uVar5 & 0x3f) + (uint)*(ushort *)(*plVar3 + (ulonglong)(uVar1 >> 6) * 2);
    }
LAB_1425d4a99:
    uVar1 = *(ushort *)(plVar3[1] + (longlong)iVar2 * 2);
    if ((uVar1 & 1) != 0) {
      if (param_4 == '\0') {
        return param_3;
      }
      if (uVar1 == 1) {
        return param_3;
      }
      if (uVar1 < *(ushort *)(param_1 + 0x1a)) {
        if (*(ushort *)(*(longlong *)(param_1 + 0x30) + (ulonglong)(uVar1 & 0xfffffffe)) < 0x200) {
          return param_3;
        }
      }
      else if ((uVar1 & 6) < 3) {
        return param_3;
      }
    }
    if (uVar5 < *(ushort *)(param_1 + 10)) {
      return lVar4;
    }
    if (uVar1 < *(ushort *)(param_1 + 0x16)) {
      return lVar4;
    }
    param_3 = lVar4;
    if ((*(ushort *)(param_1 + 0x1a) <= uVar1) && (uVar1 < *(ushort *)(param_1 + 0x1e))) {
      return lVar4;
    }
  } while( true );
}



// FUNCTION 1425d4b30 FUN_1425d4b30 body=3875 status=ok
// SIG undefined FUN_1425d4b30(void)

undefined4
FUN_1425d4b30(ulonglong param_1,undefined4 param_2,char param_3,byte *param_4,byte *param_5,
             longlong *param_6,longlong param_7,int *param_8)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  byte *pbVar11;
  byte bVar12;
  uint uVar13;
  byte bVar14;
  byte *pbVar15;
  byte *pbVar16;
  int iVar17;
  longlong lVar18;
  undefined **local_e8;
  undefined2 local_e0;
  undefined8 local_a8;
  undefined ***local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  undefined4 local_80;
  undefined1 local_7c;
  ulonglong local_68;
  undefined4 local_60;
  undefined4 local_5c;
  byte *local_58;
  char local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_e8 = &PTR_FUN_149e18960;
  local_e0 = 2;
  uVar1 = *(ushort *)(param_1 + 10);
  uVar10 = (ulonglong)uVar1;
  if (0x7f < uVar1) {
    bVar14 = 0xe0;
    if (0x7ff < uVar1) goto LAB_1425d4b91;
    uVar10 = (ulonglong)CONCAT11((byte)(uVar1 >> 0xe),(char)(uVar1 >> 6) + -0x40);
  }
  bVar14 = (byte)uVar10;
LAB_1425d4b91:
  local_5c = (undefined4)uVar10;
  local_60 = param_2;
  local_58 = param_4;
  local_49 = param_3;
LAB_1425d4b9f:
  uVar9 = uVar10;
  if (param_4 != param_5) {
    do {
      bVar12 = *param_4;
      pbVar15 = param_4 + 1;
      pbVar11 = pbVar15;
      if (bVar14 <= bVar12) {
        uVar8 = (uint)bVar12;
        if ((char)bVar12 < '\0') {
          pbVar11 = param_5;
          if (pbVar15 != param_5) {
            if (bVar12 < 0xe0) {
              pbVar11 = pbVar15;
              if ((0xc1 < bVar12) && ((byte)(*pbVar15 ^ 0x80) < 0x40)) {
                uVar8 = (uint)*(ushort *)
                               (**(longlong **)(param_1 + 0x20) + (ulonglong)(bVar12 & 0x1f) * 2) +
                        (*pbVar15 ^ 0x80);
                pbVar11 = param_4 + 2;
                goto LAB_1425d4d2c;
              }
            }
            else if (bVar12 < 0xf0) {
              pbVar11 = pbVar15;
              if (((((byte)(&DAT_14bd49f86)[bVar12 & 0xf] >> (*pbVar15 >> 5) & 1) != 0) &&
                  (pbVar16 = param_4 + 2, pbVar11 = param_5, pbVar16 != param_5)) &&
                 (pbVar11 = pbVar16, (byte)(*pbVar16 ^ 0x80) < 0x40)) {
                uVar8 = (uint)*(ushort *)
                               (**(longlong **)(param_1 + 0x20) +
                               (ulonglong)(bVar12 & 0xf) * 0x80 + (ulonglong)(*pbVar15 & 0x3f) * 2)
                        + (*pbVar16 ^ 0x80);
                pbVar11 = param_4 + 3;
                goto LAB_1425d4d2c;
              }
            }
            else {
              pbVar11 = pbVar15;
              if (bVar12 < 0xf5) {
                uVar8 = bVar12 - 0xf0;
                if ((((((uint)(int)(char)(&DAT_14bd49f97)[*pbVar15 >> 4] >> (uVar8 & 0x1f) & 1) != 0
                      ) && (pbVar16 = param_4 + 2, pbVar11 = param_5, pbVar16 != param_5)) &&
                    (pbVar11 = pbVar16, (byte)(*pbVar16 + 0x80) < 0x40)) &&
                   ((pbVar16 = param_4 + 3, pbVar11 = param_5, pbVar16 != param_5 &&
                    (pbVar11 = pbVar16, (byte)(*pbVar16 + 0x80) < 0x40)))) {
                  if ((*pbVar15 & 0x3f | uVar8 * 0x40) <
                      (uint)*(ushort *)(*(longlong *)(param_1 + 0x20) + 0x1c)) {
                    uVar8 = FUN_1425ccf50();
                  }
                  else {
                    uVar8 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x14) - 2;
                  }
                  pbVar11 = param_4 + 4;
                  goto LAB_1425d4d2c;
                }
              }
            }
          }
          uVar8 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x14) - 1;
        }
LAB_1425d4d2c:
        uVar9 = (ulonglong)(int)uVar8;
        uVar1 = *(ushort *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 8) + uVar9 * 2);
        uVar10 = (ulonglong)uVar1;
        if (*(ushort *)(param_1 + 0x12) <= uVar1) goto LAB_1425d4d60;
      }
      uVar10 = uVar9;
      param_4 = pbVar11;
      if (pbVar11 == param_5) break;
    } while( true );
  }
  if (param_6 != (longlong *)0x0) {
    local_5c = (undefined4)CONCAT71((int7)(uVar10 >> 8),1);
    if (local_58 != param_5) {
      FUN_142505210(local_58,param_5,param_6,local_60,param_7,param_8);
    }
    goto LAB_1425d5a2d;
  }
  goto LAB_1425d5a28;
LAB_1425d4d60:
  uVar8 = (uint)param_4;
  if (*(ushort *)(param_1 + 0x1e) <= uVar1) {
    if (uVar1 == 0xfe00) {
      local_68 = 0xffffffff;
      if ((2 < (longlong)param_4 - (longlong)local_58) &&
         (bVar12 = param_4[-3], (byte)(bVar12 + 0x1f) < 0xd)) {
        bVar4 = (byte)(param_4[-2] ^ 0x80);
        if (((bVar4 < 0x40) && ((byte)(param_4[-1] ^ 0x80) < 0x40)) &&
           ((bVar12 < 0xed || (bVar4 < 0x20)))) {
          local_68 = (ulonglong)
                     ((param_4[-2] ^ 0x80) << 6 | param_4[-1] ^ 0x80 | (bVar12 & 0xf) << 0xc);
        }
      }
      bVar12 = *pbVar15;
      if (bVar12 == 0x85) {
        uVar8 = (int)local_68 - 0x1100;
        if (uVar8 < 0x13) {
          if (param_6 == (longlong *)0x0) goto LAB_1425d5a4d;
          local_68 = (ulonglong)uVar8;
          if ((2 < (longlong)param_5 - (longlong)pbVar11) && (*pbVar11 == 0xe1)) {
            if (pbVar11[1] == 0x87) {
              if ((char)pbVar11[2] < -0x7d) {
                iVar5 = pbVar11[2] - 0x67;
                goto LAB_1425d539c;
              }
            }
            else if ((pbVar11[1] == 0x86) && (0xe7 < (byte)(pbVar11[2] + 0x40))) {
              iVar5 = pbVar11[2] - 0xa7;
LAB_1425d539c:
              if (-1 < iVar5) {
                pbVar11 = pbVar11 + 3;
                goto LAB_1425d53c0;
              }
            }
          }
          cVar3 = FUN_1425d5b10(param_1,pbVar11,param_5);
          iVar5 = 0;
          if (cVar3 != '\0') {
LAB_1425d53c0:
            bVar12 = param_4[2];
            param_4 = param_4 + -3;
            if ((local_58 != param_4) &&
               (uVar10 = FUN_142505210(local_58,param_4,param_6,local_60,param_7,param_8),
               (char)uVar10 == '\0')) goto LAB_1425d5a28;
            uVar10 = FUN_142505120((int)pbVar11 - (int)param_4,
                                   iVar5 + (int)local_68 * 0x24c + (uint)bVar12 * 0x1c + 0x9a64,
                                   param_6,param_7);
            param_4 = pbVar11;
            local_58 = pbVar11;
            goto LAB_1425d4b9f;
          }
        }
      }
      else {
        uVar8 = (int)local_68 - 0xac00;
        if ((uVar8 < 0x2ba4) &&
           (uVar6 = (uVar8 & 0xffff) >> 2,
           (short)uVar8 == (short)((short)(uVar6 / 7) * 0x1b + (short)(uVar6 / 7)))) {
          if (param_6 == (longlong *)0x0) goto LAB_1425d5a4d;
          if ((2 < (longlong)pbVar11 - (longlong)param_4) && (*param_4 == 0xe1)) {
            if (bVar12 == 0x87) {
              if ((char)param_4[2] < -0x7d) {
                iVar5 = param_4[2] - 0x67;
                goto LAB_1425d545a;
              }
            }
            else if ((bVar12 == 0x86) && (0xe7 < (byte)(param_4[2] + 0x40))) {
              iVar5 = param_4[2] - 0xa7;
              goto LAB_1425d545a;
            }
          }
          iVar5 = -1;
LAB_1425d545a:
          param_4 = param_4 + -3;
          if ((local_58 != param_4) &&
             (uVar10 = FUN_142505210(local_58,param_4,param_6,local_60,param_7,param_8),
             (char)uVar10 == '\0')) goto LAB_1425d5a28;
          uVar10 = FUN_142505120((int)pbVar11 - (int)param_4,iVar5 + (uint)local_68,param_6,param_7)
          ;
          param_4 = pbVar11;
          local_58 = pbVar11;
          goto LAB_1425d4b9f;
        }
      }
    }
    else if (0xfe00 < uVar1) {
      uVar6 = (uint)(uVar1 >> 1);
      pbVar15 = pbVar11;
      if ((local_49 != '\0') && (local_58 != param_4)) {
        iVar5 = uVar8 - (int)local_58;
        local_a8 = CONCAT44(local_a8._4_4_,iVar5 + -1);
        bVar12 = local_58[(longlong)iVar5 + -1];
        uVar10 = (ulonglong)bVar12;
        if ((char)bVar12 < '\0') {
          uVar10 = FUN_142580f00(local_58,0,&local_a8,bVar12,0xff);
        }
        iVar5 = (int)uVar10;
        if ((int)(uint)*(ushort *)(param_1 + 8) <= iVar5) {
          if (iVar5 < 0x10000) {
            bVar12 = *(byte *)(*(longlong *)(param_1 + 0x38) + (longlong)(iVar5 >> 8));
            if ((bVar12 == 0) ||
               ((1 << ((byte)((uVar10 & 0xffffffff) >> 5) & 7) & (uint)bVar12) == 0))
            goto LAB_1425d5550;
          }
          uVar10 = FUN_1425d5c90(param_1,uVar10 & 0xffffffff);
          if ((byte)(uVar1 >> 1) < (byte)uVar10) {
            if (param_6 == (longlong *)0x0) goto LAB_1425d5a4d;
            goto LAB_1425d5717;
          }
        }
      }
LAB_1425d5550:
      do {
        pbVar11 = pbVar15;
        if (pbVar11 == param_5) {
          local_5c = (undefined4)CONCAT71((int7)(uVar10 >> 8),1);
          if (param_6 != (longlong *)0x0) {
            FUN_142505210(local_58,param_5,param_6,local_60,param_7,param_8);
          }
          goto LAB_1425d5a2d;
        }
        pbVar16 = pbVar11 + 1;
        bVar12 = *pbVar11;
        uVar13 = (uint)bVar12;
        pbVar15 = pbVar16;
        uVar8 = uVar6;
        if ((char)bVar12 < '\0') {
          pbVar15 = param_5;
          if (pbVar16 != param_5) {
            uVar7 = (uint)bVar12;
            if (bVar12 < 0xe0) {
              pbVar15 = pbVar16;
              if ((0xc1 < bVar12) && (uVar13 = *pbVar16 ^ 0x80, (byte)uVar13 < 0x40)) {
                uVar2 = *(ushort *)(**(longlong **)(param_1 + 0x20) + (ulonglong)(uVar7 & 0x1f) * 2)
                ;
LAB_1425d5617:
                uVar13 = uVar2 + uVar13;
LAB_1425d5619:
                pbVar15 = pbVar16 + 1;
                uVar8 = uVar6;
                goto LAB_1425d56be;
              }
            }
            else if (bVar12 < 0xf0) {
              bVar12 = *pbVar16;
              pbVar15 = pbVar16;
              if (((((byte)(&DAT_14bd49f86)[uVar7 & 0xf] >> (bVar12 >> 5) & 1) != 0) &&
                  (pbVar16 = pbVar11 + 2, pbVar15 = param_5, pbVar16 != param_5)) &&
                 (uVar13 = *pbVar16 ^ 0x80, pbVar15 = pbVar16, (byte)uVar13 < 0x40)) {
                uVar2 = *(ushort *)
                         (**(longlong **)(param_1 + 0x20) +
                         (ulonglong)(uVar7 & 0xf) * 0x80 + (ulonglong)(bVar12 & 0x3f) * 2);
                goto LAB_1425d5617;
              }
            }
            else {
              pbVar15 = pbVar16;
              if (bVar12 < 0xf5) {
                bVar12 = *pbVar16;
                if ((((((uint)(int)(char)(&DAT_14bd49f97)[bVar12 >> 4] >> (uVar7 - 0xf0 & 0x1f) & 1)
                       != 0) && (pbVar16 = pbVar11 + 2, pbVar15 = param_5, pbVar16 != param_5)) &&
                    (pbVar15 = pbVar16, (byte)(*pbVar16 + 0x80) < 0x40)) &&
                   ((pbVar16 = pbVar11 + 3, pbVar15 = param_5, pbVar16 != param_5 &&
                    (pbVar15 = pbVar16, (byte)(*pbVar16 + 0x80) < 0x40)))) {
                  if ((bVar12 & 0x3f | (uVar7 - 0xf0) * 0x40) <
                      (uint)*(ushort *)(*(longlong *)(param_1 + 0x20) + 0x1c)) {
                    local_68 = CONCAT44(local_68._4_4_,uVar6);
                    uVar13 = FUN_1425ccf50();
                    uVar6 = (uint)local_68;
                  }
                  else {
                    uVar13 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x14) - 2;
                  }
                  goto LAB_1425d5619;
                }
              }
            }
          }
          uVar13 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x14) - 1;
        }
LAB_1425d56be:
        uVar2 = *(ushort *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x20) + 8) + (longlong)(int)uVar13 * 2);
        uVar10 = (ulonglong)uVar2;
        if (uVar2 < 0xfe02) goto LAB_1425d56f1;
        uVar6 = (uint)(uVar2 >> 1);
      } while ((byte)uVar8 <= (byte)(uVar2 >> 1));
      if (param_6 == (longlong *)0x0) {
LAB_1425d5a4d:
        local_5c = 0;
        goto LAB_1425d5a2d;
      }
LAB_1425d56f1:
      if ((uVar2 < *(ushort *)(param_1 + 0x16)) ||
         ((*(ushort *)(param_1 + 0x1a) <= uVar2 && (uVar2 < *(ushort *)(param_1 + 0x1e))))) {
        param_4 = pbVar15;
        if (*(ushort *)(param_1 + 0x12) <= uVar2) {
          param_4 = pbVar11;
        }
        goto LAB_1425d4b9f;
      }
    }
    goto LAB_1425d5717;
  }
  local_68 = uVar10;
  if (param_6 == (longlong *)0x0) goto LAB_1425d5a4d;
  if (uVar1 < *(ushort *)(param_1 + 0x1a)) {
    if (uVar1 < *(ushort *)(param_1 + 0x14)) {
      if ((((uVar1 & 1) != 0) &&
          (((local_49 == '\0' || (uVar1 == 1)) ||
           (*(ushort *)(*(longlong *)(param_1 + 0x30) + (ulonglong)(uVar1 & 0xfffffffe)) < 0x200))))
         || (cVar3 = FUN_1425d5b10(param_1,pbVar11,param_5), cVar3 != '\0')) {
        if (((local_58 != param_4) &&
            (uVar10 = FUN_142505210(local_58,param_4,param_6,local_60,param_7,param_8),
            (char)uVar10 == '\0')) ||
           (uVar10 = (ulonglong)((uint)local_68 & 0xfffffffe),
           uVar10 = FUN_1425050c0(param_4,pbVar11,*(longlong *)(param_1 + 0x30) + uVar10 + 2,
                                  *(ushort *)(*(longlong *)(param_1 + 0x30) + uVar10) & 0x1f,param_6
                                  ,param_7,param_8), param_4 = pbVar11, local_58 = pbVar11,
           (char)uVar10 == '\0')) goto LAB_1425d5a28;
        goto LAB_1425d4b9f;
      }
    }
    else if (*(ushort *)(param_1 + 0x18) <= uVar1) {
      uVar10 = FUN_1425d5b10(param_1,pbVar11,param_5);
      if (((char)uVar10 != '\0') || (local_58 == param_4)) {
LAB_1425d54cf:
        if ((local_58 != param_4) &&
           (uVar10 = FUN_142505210(local_58,param_4,param_6,local_60,param_7,param_8),
           (char)uVar10 == '\0')) goto LAB_1425d5a28;
        param_4 = pbVar11;
        local_58 = pbVar11;
        if (param_7 != 0) {
          uVar10 = FUN_1425b02e0(param_7,(int)pbVar11 - uVar8,0);
          local_58 = pbVar11;
        }
        goto LAB_1425d4b9f;
      }
      bVar12 = param_4[-1];
      uVar6 = (uint)bVar12;
      if ((char)bVar12 < '\0') {
        iVar5 = FUN_1425cd010(*(undefined8 *)(param_1 + 0x20),bVar12,local_58,param_4 + -1);
        uVar6 = iVar5 >> 3;
      }
      uVar2 = *(ushort *)
               (*(longlong *)(*(longlong *)(param_1 + 0x20) + 8) + (longlong)(int)uVar6 * 2);
      uVar10 = (ulonglong)uVar2;
      if ((uVar2 & 1) != 0) {
        if ((local_49 == '\0') || (uVar2 == 1)) goto LAB_1425d54cf;
        if (uVar2 < *(ushort *)(param_1 + 0x1a)) {
          uVar2 = *(ushort *)(*(longlong *)(param_1 + 0x30) + (ulonglong)(uVar2 & 0xfffffffe));
          uVar10 = (ulonglong)uVar2;
          if (uVar2 < 0x200) goto LAB_1425d54cf;
        }
        else {
          uVar10 = 0;
          if ((uVar2 & 6) < 3) goto LAB_1425d54cf;
        }
      }
    }
LAB_1425d5717:
    if (((local_58 != param_4) && (*(ushort *)(param_1 + 0x16) <= uVar1)) &&
       ((uVar1 < *(ushort *)(param_1 + 0x1a) || (*(ushort *)(param_1 + 0x1e) <= uVar1)))) {
      pbVar15 = param_4 + -1;
      bVar12 = param_4[-1];
      uVar8 = (uint)bVar12;
      lVar18 = *(longlong *)(param_1 + 0x20);
      if ((char)bVar12 < '\0') {
        uVar8 = FUN_1425cd010(lVar18,bVar12,local_58,pbVar15);
        pbVar15 = pbVar15 + -(ulonglong)(uVar8 & 7);
        uVar8 = (int)uVar8 >> 3;
        lVar18 = *(longlong *)(param_1 + 0x20);
      }
      uVar1 = *(ushort *)(*(longlong *)(lVar18 + 8) + (longlong)(int)uVar8 * 2);
      if ((uVar1 & 1) == 0) goto LAB_1425d5772;
      if ((local_49 != '\0') && (uVar1 != 1)) {
        if (uVar1 < *(ushort *)(param_1 + 0x1a)) {
          if (0x1ff < *(ushort *)(*(longlong *)(param_1 + 0x30) + (ulonglong)(uVar1 & 0xfffe))) {
LAB_1425d5772:
            param_4 = pbVar15;
          }
        }
        else if (2 < (uVar1 & 6)) goto LAB_1425d5772;
      }
    }
    local_a0 = &local_e8;
    local_a8 = param_1;
    local_98 = FUN_140855070(local_a0,8);
    cVar3 = local_49;
    local_80 = 0x1b;
    if (((ulonglong)local_a0[1] & 2) == 0) {
      local_80 = *(undefined4 *)(local_a0 + 2);
    }
    local_7c = 0;
    local_90 = local_98;
    local_88 = local_98;
    if ((local_98 == 0) && (*param_8 < 1)) {
      *param_8 = 7;
      iVar5 = 2;
      goto LAB_1425d582f;
    }
    if (*param_8 < 1) {
      FUN_1425d17a0(param_1,param_4,pbVar11,0,local_49,&local_a8,param_8);
      pbVar11 = (byte *)FUN_1425d17a0(param_1,pbVar11,param_5,1,cVar3,&local_a8,param_8);
      if (*param_8 < 1) {
        if (0x7fffffff < (longlong)pbVar11 - (longlong)param_4) {
          *param_8 = 8;
          local_5c = (undefined4)
                     CONCAT71((int7)((ulonglong)((longlong)pbVar11 - (longlong)param_4) >> 8),1);
          iVar5 = 1;
          goto LAB_1425d582f;
        }
        FUN_1425d29c0(param_1,&local_a8,0);
        cVar3 = FUN_1425cfff0(&local_a8,param_4,pbVar11);
        pbVar15 = local_58;
        if (cVar3 == '\0') {
          if (param_6 == (longlong *)0x0) {
            iVar5 = 1;
            local_5c = 0;
            goto LAB_1425d582f;
          }
          if (local_58 != param_4) {
            cVar3 = FUN_142505210(local_58,param_4,param_6,local_60,param_7,param_8);
            iVar5 = 2;
            if (cVar3 == '\0') goto LAB_1425d582f;
          }
          cVar3 = FUN_1425050c0(param_4,pbVar11,local_98,(ulonglong)(local_88 - local_98) >> 1,
                                param_6,param_7,param_8);
          iVar5 = 2;
          pbVar15 = pbVar11;
          if (cVar3 == '\0') goto LAB_1425d582f;
        }
        iVar5 = 0;
        local_58 = pbVar15;
        goto LAB_1425d582f;
      }
    }
    iVar5 = 2;
LAB_1425d582f:
    uVar10 = 0;
    if (local_98 != 0) {
      uVar10 = FUN_1408550d0(local_a0,(ulonglong)(local_88 - local_98) >> 1);
    }
    param_4 = pbVar11;
    if (iVar5 != 0) {
      if (iVar5 != 2) goto LAB_1425d5a2d;
LAB_1425d5a28:
      local_5c = (undefined4)CONCAT71((int7)(uVar10 >> 8),1);
LAB_1425d5a2d:
      FUN_140859a90(&local_e8);
      return local_5c;
    }
    goto LAB_1425d4b9f;
  }
  if ((((uVar1 & 1) == 0) || (((uVar1 != 1 && (2 < (uVar1 & 6))) && (local_49 != '\0')))) &&
     (cVar3 = FUN_1425d5b10(param_1,pbVar11,param_5), cVar3 == '\0')) goto LAB_1425d5717;
  if ((local_58 != param_4) &&
     (uVar10 = FUN_142505210(local_58,param_4,param_6,local_60,param_7,param_8),
     (char)uVar10 == '\0')) goto LAB_1425d5a28;
  iVar5 = ((uint)(local_68 >> 3) & 0x1fffffff) - (uint)*(ushort *)(param_1 + 0x1c);
  pbVar16 = pbVar11 + -(longlong)param_4;
  if ((int)pbVar16 == 1) {
    local_a8 = CONCAT71(local_a8._1_7_,(char)iVar5 + *param_4);
    iVar17 = 1;
    goto LAB_1425d5355;
  }
  bVar12 = pbVar11[-1];
  if (((uint)bVar12 + iVar5 & 0xffffffc0) == 0x80) {
    pbVar15 = param_4 + 1;
    if (param_4 + 1 < pbVar11 + -1) {
      pbVar15 = pbVar11 + -1;
    }
    local_68 = (longlong)pbVar15 - (longlong)param_4;
    local_58 = pbVar16;
    memcpy(&local_a8,param_4,local_68);
    pbVar16 = local_58;
    iVar17 = ~uVar8 + (int)pbVar15 + 2;
    *(char *)((longlong)&local_a8 + (local_68 & 0xffffffff)) = (char)((uint)bVar12 + iVar5);
    goto LAB_1425d5355;
  }
  if (&DAT_00000003 < pbVar16 + -1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  bVar12 = *param_4;
  uVar8 = (uint)bVar12;
  switch(pbVar16) {
  case (byte *)0x2:
    uVar8 = *pbVar15 & 0x3f | (uint)(bVar12 & 0x1f) << 6;
    break;
  case (byte *)0x3:
    uVar6 = param_4[2] & 0x3f;
    uVar8 = (uVar8 & 0xf) << 0xc | (param_4[1] & 0x3f) << 6;
    goto LAB_1425d52d1;
  case (byte *)0x4:
    uVar6 = (param_4[2] & 0x3f) << 6 | (param_4[1] & 0x3f) << 0xc | (uint)(bVar12 & 7) << 0x12;
    uVar8 = param_4[3] & 0x3f;
LAB_1425d52d1:
    uVar8 = uVar8 | uVar6;
  }
  uVar8 = uVar8 + iVar5;
  if (uVar8 < 0x80) {
    local_a8 = CONCAT71(local_a8._1_7_,(byte)uVar8);
    iVar17 = 1;
  }
  else {
    if (uVar8 < 0x800) {
      local_a8 = CONCAT71(local_a8._1_7_,(char)(uVar8 >> 6)) | 0xc0;
      uVar6 = 1;
    }
    else {
      if (uVar8 < 0x10000) {
        bVar12 = (byte)(uVar8 >> 0xc) | 0xe0;
        lVar18 = 1;
      }
      else {
        bVar12 = (byte)(uVar8 >> 0x12) | 0xf0;
        local_a8 = (ulonglong)
                   (CONCAT61(local_a8._2_6_,(char)(uVar8 >> 0xc)) & 0xffffffffffff3f | 0x80) << 8;
        lVar18 = 2;
      }
      local_a8 = CONCAT71(local_a8._1_7_,bVar12);
      uVar6 = (int)lVar18 + 1;
      *(byte *)((longlong)&local_a8 + lVar18) = (byte)(uVar8 >> 6) & 0x3f | 0x80;
    }
    iVar17 = uVar6 + 1;
    *(byte *)((longlong)&local_a8 + (ulonglong)uVar6) = (byte)uVar8 & 0x3f | 0x80;
  }
LAB_1425d5355:
  if (param_7 != 0) {
    FUN_1425b02e0(param_7,(ulonglong)pbVar16 & 0xffffffff,iVar17);
  }
  uVar10 = (**(code **)(*param_6 + 8))(param_6,&local_a8,iVar17);
  param_4 = pbVar11;
  local_58 = pbVar11;
  goto LAB_1425d4b9f;
}



// FUNCTION 1425d5a60 Unwind@1425d5a60 body=54 status=ok
// SIG undefined Unwind@1425d5a60(void)

void Unwind_1425d5a60(undefined8 param_1,longlong param_2)

{
  FUN_142517840(param_2 + 0x80);
  return;
}



// FUNCTION 1425d5aa0 Unwind@1425d5aa0 body=33 status=ok
// SIG undefined Unwind@1425d5aa0(void)

void Unwind_1425d5aa0(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1425d5ad0 Unwind@1425d5ad0 body=55 status=ok
// SIG undefined Unwind@1425d5ad0(void)

void Unwind_1425d5ad0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x40);
  return;
}



// FUNCTION 1425d5b10 FUN_1425d5b10 body=379 status=ok
// SIG undefined FUN_1425d5b10(void)

ulonglong FUN_1425d5b10(longlong param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  byte bVar2;
  ushort uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  undefined8 unaff_RBX;
  ulonglong uVar7;
  byte bVar9;
  undefined7 uVar8;
  
  uVar8 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar7 = CONCAT71(uVar8,1);
  if (param_2 == param_3) goto LAB_1425d5c7a;
  bVar2 = *param_2;
  uVar6 = (uint)bVar2;
  if ((char)bVar2 < '\0') {
    pbVar1 = param_2 + 1;
    if (pbVar1 != param_3) {
      if (bVar2 < 0xe0) {
        if ((0xc1 < bVar2) && ((byte)(*pbVar1 ^ 0x80) < 0x40)) {
          uVar6 = (uint)*(ushort *)(**(longlong **)(param_1 + 0x20) + (ulonglong)(bVar2 & 0x1f) * 2)
                  + (*pbVar1 ^ 0x80);
          goto LAB_1425d5c56;
        }
      }
      else if (bVar2 < 0xf0) {
        uVar5 = bVar2 & 0xf;
        if (((((byte)(&DAT_14bd49f86)[uVar5] >> (*pbVar1 >> 5) & 1) != 0) &&
            (param_2 + 2 != param_3)) && (uVar6 = param_2[2] ^ 0x80, (byte)uVar6 < 0x40)) {
          uVar6 = *(ushort *)
                   (**(longlong **)(param_1 + 0x20) +
                   (ulonglong)uVar5 * 0x80 + (ulonglong)(*pbVar1 & 0x3f) * 2) + uVar6;
          goto LAB_1425d5c56;
        }
      }
      else if (bVar2 < 0xf5) {
        if ((((((uint)(int)(char)(&DAT_14bd49f97)[*pbVar1 >> 4] >> (bVar2 - 0xf0 & 0x1f) & 1) != 0)
             && (param_2 + 2 != param_3)) && (bVar9 = param_2[2] + 0x80, bVar9 < 0x40)) &&
           ((param_2 + 3 != param_3 && ((byte)(param_2[3] + 0x80) < 0x40)))) {
          uVar6 = *pbVar1 & 0x3f | (bVar2 - 0xf0) * 0x40;
          lVar4 = *(longlong *)(param_1 + 0x20);
          if (uVar6 < *(ushort *)(lVar4 + 0x1c)) {
            uVar6 = FUN_1425ccf50(lVar4,uVar6,bVar9);
          }
          else {
            uVar6 = *(int *)(lVar4 + 0x14) - 2;
          }
          goto LAB_1425d5c56;
        }
      }
    }
    uVar6 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x14) - 1;
  }
LAB_1425d5c56:
  uVar3 = *(ushort *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 8) + (longlong)(int)uVar6 * 2);
  if (*(ushort *)(param_1 + 0x16) <= uVar3) {
    uVar7 = CONCAT71(uVar8,uVar3 < *(ushort *)(param_1 + 0x1e) &&
                           *(ushort *)(param_1 + 0x1a) <= uVar3);
  }
LAB_1425d5c7a:
  return uVar7 & 0xffffffff;
}



// FUNCTION 1425d5c90 FUN_1425d5c90 body=333 status=ok
// SIG undefined FUN_1425d5c90(void)

uint FUN_1425d5c90(longlong param_1,uint param_2)

{
  ushort uVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  ushort uVar6;
  uint uVar7;
  
  if ((param_2 & 0xfffffc00) == 0xd800) {
    uVar6 = 1;
    if (*(ushort *)(param_1 + 0x1a) < 2) {
LAB_1425d5d2a:
      if (uVar6 < *(ushort *)(param_1 + 0x1e)) {
        if ((uVar6 & 6) < 3) {
          return (uint)((uVar6 & 6) >> 1);
        }
        uVar4 = ((uVar6 >> 3) + param_2) - (uint)*(ushort *)(param_1 + 0x1c);
        plVar2 = *(longlong **)(param_1 + 0x20);
        lVar3 = plVar2[1];
        if (uVar4 < 0x10000) {
          iVar5 = (uVar4 & 0x3f) + (uint)*(ushort *)(*plVar2 + (ulonglong)(uVar4 >> 6) * 2);
        }
        else if (uVar4 < 0x110000) {
          if ((int)uVar4 < (int)plVar2[3]) {
            iVar5 = FUN_1425cceb0(plVar2,uVar4);
          }
          else {
            iVar5 = *(int *)((longlong)plVar2 + 0x14) + -2;
          }
        }
        else {
          iVar5 = *(int *)((longlong)plVar2 + 0x14) + -1;
        }
        uVar6 = *(ushort *)(lVar3 + (longlong)iVar5 * 2);
        goto LAB_1425d5d9a;
      }
    }
    else {
LAB_1425d5d9a:
      if ((*(ushort *)(param_1 + 0xe) < uVar6) &&
         ((ushort)((ushort)*(undefined4 *)(param_1 + 0x10) | 1) != uVar6)) {
        uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x30) + (ulonglong)(uVar6 >> 1) * 2);
        if (-1 < (char)uVar1) {
          return (uint)(uVar1 >> 8);
        }
        uVar7 = (uint)*(byte *)(*(longlong *)(param_1 + 0x30) + -1 + (ulonglong)(uVar6 >> 1) * 2) <<
                8;
        uVar4 = (uint)(uVar1 >> 8);
        goto LAB_1425d5dd3;
      }
    }
    uVar4 = 0;
  }
  else {
    plVar2 = *(longlong **)(param_1 + 0x20);
    lVar3 = plVar2[1];
    if (param_2 < 0x10000) {
      iVar5 = (param_2 & 0x3f) + (uint)*(ushort *)(*plVar2 + (ulonglong)(param_2 >> 6) * 2);
    }
    else if (param_2 < 0x110000) {
      if ((int)param_2 < (int)plVar2[3]) {
        iVar5 = FUN_1425cceb0(plVar2,param_2);
      }
      else {
        iVar5 = *(int *)((longlong)plVar2 + 0x14) + -2;
      }
    }
    else {
      iVar5 = *(int *)((longlong)plVar2 + 0x14) + -1;
    }
    uVar6 = *(ushort *)(lVar3 + (longlong)iVar5 * 2);
    if (uVar6 < *(ushort *)(param_1 + 0x1a)) goto LAB_1425d5d9a;
    if (uVar6 < 0xfc00) goto LAB_1425d5d2a;
    uVar7 = (uint)(byte)(uVar6 >> 1);
    uVar4 = (uint)(uVar6 >> 1) << 8;
LAB_1425d5dd3:
    uVar4 = uVar4 | uVar7;
  }
  return uVar4;
}



// FUNCTION 1425d5de0 FUN_1425d5de0 body=1026 status=ok
// SIG undefined FUN_1425d5de0(void)

ushort * FUN_1425d5de0(longlong param_1,ushort *param_2,ushort *param_3,longlong param_4,
                      int *param_5)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  ushort *puVar9;
  ushort *puVar10;
  int iVar11;
  bool bVar12;
  ushort *local_50;
  
  uVar5 = 0;
  local_50 = param_2;
  if (param_3 == (ushort *)0x0) {
    lVar6 = 2;
    puVar10 = param_2 + -2;
    do {
      puVar9 = puVar10;
      puVar10 = puVar9 + 1;
      lVar6 = lVar6 + -2;
      if (puVar9[2] == 0) break;
    } while (puVar9[2] < *(ushort *)(param_1 + 0xc));
    puVar9 = puVar9 + 2;
    if ((param_4 != 0) && (lVar6 != 0)) {
      FUN_1425d08f0(param_4,param_2,puVar9,param_5);
    }
    if (0 < *param_5) {
      return puVar9;
    }
    uVar5 = 0;
    if ((param_2 < puVar9) &&
       (uVar3 = *puVar10, local_50 = puVar9, *(ushort *)(param_1 + 8) <= uVar3)) {
      bVar1 = *(byte *)(*(longlong *)(param_1 + 0x38) + (ulonglong)(uVar3 >> 8));
      uVar5 = 0;
      if ((bVar1 != 0) && ((1 << ((byte)uVar3 >> 5) & (uint)bVar1) != 0)) {
        uVar3 = FUN_1425d5c90(param_1);
        if (uVar3 < 2) {
          puVar10 = puVar9;
        }
        uVar5 = (uint)uVar3;
        local_50 = puVar10;
      }
    }
    param_3 = (ushort *)FUN_142503f80(puVar9,0);
    param_2 = puVar9;
  }
  bVar12 = param_2 == param_3;
  puVar10 = param_2;
  if (!bVar12) {
    do {
      while( true ) {
        uVar3 = *param_2;
        uVar7 = (uint)uVar3;
        if (*(ushort *)(param_1 + 0xc) <= uVar3) break;
        uVar8 = ~(uint)uVar3;
        lVar6 = 1;
LAB_1425d5e39:
        param_2 = param_2 + lVar6;
        uVar5 = uVar8;
        if (param_2 == param_3) {
          if ((bool)(param_4 == 0 | bVar12)) {
            return param_3;
          }
          FUN_1425d08f0(param_4,puVar10,param_3,param_5);
          return param_3;
        }
      }
      bVar1 = *(byte *)(*(longlong *)(param_1 + 0x38) + (ulonglong)(uVar3 >> 8));
      lVar6 = 1;
      uVar8 = 0;
      if ((bVar1 == 0) ||
         (uVar8 = 0, (ushort)((ushort)(1 << ((byte)uVar3 >> 5)) & (ushort)bVar1) == 0))
      goto LAB_1425d5e39;
      if (((uVar3 & 0xfc00) == 0xd800) &&
         ((param_2 + 1 != param_3 && (uVar8 = (uint)param_2[1], (uVar8 & 0xfc00) == 0xdc00)))) {
        uVar7 = (uint)uVar3 * 0x400 + uVar8 + 0xfca02400;
      }
      uVar3 = FUN_1425d5c90(param_1,uVar7);
      uVar8 = (uint)uVar3;
      if (uVar8 < 0x100) {
        uVar8 = (uint)uVar3;
        lVar6 = 2 - (ulonglong)(uVar7 < 0x10000);
        goto LAB_1425d5e39;
      }
      if (param_2 != puVar10) {
        if ((param_4 != 0) &&
           (cVar2 = FUN_1425d08f0(param_4,puVar10,param_2,param_5), cVar2 == '\0')) {
          return param_2;
        }
        if ((int)uVar5 < 0) {
          if (~uVar5 < (uint)*(ushort *)(param_1 + 8)) {
            uVar5 = 0;
            local_50 = param_2;
          }
          else {
            uVar5 = FUN_1425d5c90(param_1,~uVar5);
            local_50 = param_2 + ((ulonglong)((ushort)uVar5 < 2) - 1);
          }
          uVar5 = uVar5 & 0xffff;
          puVar10 = param_2;
        }
        else {
          local_50 = param_2 + -1;
          if ((((param_2[-1] & 0xfc00) == 0xdc00) && (puVar10 < local_50)) &&
             ((param_2[-2] & 0xfc00) == 0xd800)) {
            local_50 = param_2 + -2;
            uVar4 = FUN_1425d5c90(param_1,(uint)param_2[-1] + (uint)param_2[-2] * 0x400 + -0x35fdc00
                                 );
            uVar5 = (uint)uVar4;
          }
          puVar10 = param_2;
          if (uVar5 < 2) {
            local_50 = param_2;
          }
        }
      }
      param_2 = puVar10 + (ulonglong)(0xffff < uVar7) + 1;
      if ((uint)(uVar3 >> 8) < (uVar5 & 0xff)) {
        if (param_4 == 0) {
          return local_50;
        }
        iVar11 = (int)((ulonglong)((longlong)puVar10 - (longlong)local_50) >> 1);
        lVar6 = *(longlong *)(param_4 + 0x10);
        if ((longlong)iVar11 < *(longlong *)(param_4 + 0x20) - lVar6 >> 1) {
          lVar6 = *(longlong *)(param_4 + 0x20) + (longlong)iVar11 * -2;
          *(longlong *)(param_4 + 0x20) = lVar6;
          iVar11 = iVar11 + *(int *)(param_4 + 0x28);
        }
        else {
          *(longlong *)(param_4 + 0x20) = lVar6;
          iVar11 = 0x1b;
          if ((*(byte *)(*(longlong *)(param_4 + 8) + 8) & 2) == 0) {
            iVar11 = *(int *)(*(longlong *)(param_4 + 8) + 0x10);
          }
        }
        *(int *)(param_4 + 0x28) = iVar11;
        *(undefined1 *)(param_4 + 0x2c) = 0;
        *(longlong *)(param_4 + 0x18) = lVar6;
        param_2 = (ushort *)FUN_1425d61f0(param_1,param_2,param_3);
        uVar8 = 0;
        FUN_1425d15a0(param_1,local_50,param_2,0,0,param_4,param_5);
        local_50 = param_2;
        if (0 < *param_5) {
          return param_2;
        }
      }
      else {
        if ((uVar3 & 0xfe) == 0) {
          local_50 = param_2;
        }
        if ((param_4 != 0) && (cVar2 = FUN_1425d07b0(param_4,uVar7,param_5), cVar2 == '\0')) {
          return param_2;
        }
      }
      bVar12 = false;
      uVar5 = uVar8;
      puVar10 = param_2;
    } while (param_2 != param_3);
  }
  return param_3;
}



// FUNCTION 1425d61f0 FUN_1425d61f0 body=455 status=ok
// SIG undefined FUN_1425d61f0(void)

ushort * FUN_1425d61f0(longlong param_1,ushort *param_2,ushort *param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  ushort *puVar6;
  bool bVar7;
  
joined_r0x0001425d6201:
  do {
    if (param_3 <= param_2) {
      return param_2;
    }
    puVar6 = param_2 + 1;
    uVar1 = *param_2;
    uVar5 = (uint)uVar1;
    if ((uVar5 & 0xf800) == 0xd800) {
      if (((uVar1 & 0x400) == 0) && (puVar6 != param_3)) {
        uVar1 = *puVar6;
        plVar4 = *(longlong **)(param_1 + 0x20);
        if ((uVar1 & 0xfc00) == 0xdc00) {
          puVar6 = param_2 + 2;
          uVar5 = uVar5 * 0x400 + (uint)uVar1 + 0xfca02400;
          if ((int)uVar5 < (int)plVar4[3]) {
            iVar3 = FUN_1425cceb0(plVar4,uVar5);
            plVar4 = *(longlong **)(param_1 + 0x20);
          }
          else {
            iVar3 = *(int *)((longlong)plVar4 + 0x14) + -2;
          }
          goto LAB_1425d62c9;
        }
      }
      else {
        plVar4 = *(longlong **)(param_1 + 0x20);
      }
      iVar3 = *(int *)((longlong)plVar4 + 0x14) + -1;
    }
    else {
      plVar4 = *(longlong **)(param_1 + 0x20);
      iVar3 = (uVar5 & 0x3f) + (uint)*(ushort *)(*plVar4 + (ulonglong)(uVar1 >> 6) * 2);
    }
LAB_1425d62c9:
    if (uVar5 < *(ushort *)(param_1 + 0xc)) {
      return param_2;
    }
    uVar1 = *(ushort *)(plVar4[1] + (longlong)iVar3 * 2);
    if (uVar1 < *(ushort *)(param_1 + 0x16)) {
      return param_2;
    }
    if (uVar1 < *(ushort *)(param_1 + 0x1a)) {
      if ((*(byte *)(*(longlong *)(param_1 + 0x30) + (ulonglong)(uVar1 >> 1) * 2) & 0x80) == 0) {
        return param_2;
      }
      if (*(ushort *)(*(longlong *)(param_1 + 0x30) + -2 + (ulonglong)(uVar1 >> 1) * 2) < 0x100) {
        return param_2;
      }
    }
    else {
      if (uVar1 < 0xfc01) {
        return param_2;
      }
      if (uVar1 == 0xfe00) {
        return param_2;
      }
    }
    if (uVar1 <= *(ushort *)(param_1 + 0xe)) {
      return puVar6;
    }
    if ((ushort)((ushort)*(undefined4 *)(param_1 + 0x10) | 1) == uVar1) {
      return puVar6;
    }
    param_2 = puVar6;
    if (uVar1 < *(ushort *)(param_1 + 0x1a)) {
      uVar2 = *(ushort *)(*(longlong *)(param_1 + 0x30) + (ulonglong)(uVar1 >> 1) * 2);
      if (0x1ff < uVar2) goto joined_r0x0001425d6201;
      if (uVar2 < 0x100) {
        return puVar6;
      }
      if ((uVar2 & 0x80) == 0) {
        return puVar6;
      }
      bVar7 = *(ushort *)(*(longlong *)(param_1 + 0x30) + -2 + (ulonglong)(uVar1 >> 1) * 2) < 0x100;
    }
    else {
      if (*(ushort *)(param_1 + 0x1e) <= uVar1) {
        if (uVar1 == 0xfe00 || uVar1 < 0xfc01) {
          return puVar6;
        }
        goto joined_r0x0001425d6201;
      }
      bVar7 = (uVar1 & 6) < 3;
    }
    if (bVar7) {
      return puVar6;
    }
  } while( true );
}



// FUNCTION 1425d63d0 FUN_1425d63d0 body=471 status=ok
// SIG undefined FUN_1425d63d0(void)

void FUN_1425d63d0(undefined8 param_1,longlong param_2,longlong param_3,char param_4,
                  undefined8 param_5,longlong param_6,int *param_7)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined1 local_a8 [8];
  ushort local_a0;
  undefined1 local_9e [2];
  int local_9c;
  undefined1 *local_90;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (*(longlong *)(param_6 + 0x10) != *(longlong *)(param_6 + 0x20)) {
    lVar1 = FUN_1425d61f0(param_1,param_2,param_3);
    if (lVar1 - param_2 != 0) {
      local_58 = lVar1;
      lVar2 = FUN_1425d6630(param_1,*(undefined8 *)(param_6 + 0x10),*(undefined8 *)(param_6 + 0x20))
      ;
      uVar5 = (ulonglong)(*(longlong *)(param_6 + 0x20) - lVar2) >> 1;
      iVar4 = (int)uVar5;
      FUN_1424a7000(local_a8,lVar2,uVar5 & 0xffffffff);
      lVar2 = *(longlong *)(param_6 + 0x10);
      if ((longlong)iVar4 < *(longlong *)(param_6 + 0x20) - lVar2 >> 1) {
        lVar2 = *(longlong *)(param_6 + 0x20) + (longlong)iVar4 * -2;
        *(longlong *)(param_6 + 0x20) = lVar2;
        *(int *)(param_6 + 0x28) = *(int *)(param_6 + 0x28) + iVar4;
      }
      else {
        *(longlong *)(param_6 + 0x20) = lVar2;
        uVar3 = 0x1b;
        if ((*(ushort *)(*(longlong *)(param_6 + 8) + 8) & 2) == 0) {
          uVar3 = *(undefined4 *)(*(longlong *)(param_6 + 8) + 0x10);
        }
        *(undefined4 *)(param_6 + 0x28) = uVar3;
      }
      *(undefined1 *)(param_6 + 0x2c) = 0;
      *(longlong *)(param_6 + 0x18) = lVar2;
      FUN_1424a7c80(param_5,local_a8);
      local_50 = param_2;
      FUN_1424a6cf0(local_a8,param_2,0,(ulonglong)(lVar1 - param_2) >> 1 & 0xffffffff);
      local_60 = local_50;
      if ((local_a0 & 0x11) == 0) {
        if ((local_a0 & 2) != 0) {
          local_90 = local_9e;
        }
      }
      else {
        local_90 = (undefined1 *)0x0;
      }
      if (-1 < (short)local_a0) {
        local_9c = (int)(short)local_a0 >> 5;
      }
      FUN_1425d5de0(param_1,local_90,local_90 + (longlong)local_9c * 2,param_6,param_7);
      iVar4 = *param_7;
      FUN_140859a90(local_a8);
      param_2 = local_58;
      if (0 < iVar4) {
        return;
      }
    }
  }
  if (param_4 == '\0') {
    if (param_3 == 0) {
      param_3 = FUN_142503f80(param_2,0);
    }
    FUN_1425d08f0(param_6,param_2,param_3,param_7);
  }
  else {
    FUN_1425d5de0(param_1,param_2,param_3,param_6,param_7);
  }
  return;
}



// FUNCTION 1425d65b0 Unwind@1425d65b0 body=53 status=ok
// SIG undefined Unwind@1425d65b0(void)

void Unwind_1425d65b0(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(param_2 + 0x88);
  return;
}



// FUNCTION 1425d65f0 Unwind@1425d65f0 body=55 status=ok
// SIG undefined Unwind@1425d65f0(void)

void Unwind_1425d65f0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x30);
  return;
}



// FUNCTION 1425d6630 FUN_1425d6630 body=446 status=ok
// SIG undefined FUN_1425d6630(void)

ulonglong FUN_1425d6630(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  ulonglong uVar6;
  
  do {
    if (param_3 <= param_2) {
      return param_3;
    }
    uVar6 = param_3 - 2;
    uVar1 = *(ushort *)(param_3 - 2);
    uVar5 = (uint)uVar1;
    if ((uVar5 & 0xf800) == 0xd800) {
      if ((uVar6 == param_2) || ((uVar1 & 0x400) == 0)) {
        plVar4 = *(longlong **)(param_1 + 0x20);
      }
      else {
        plVar4 = *(longlong **)(param_1 + 0x20);
        if ((*(ushort *)(param_3 - 4) & 0xfc00) == 0xd800) {
          uVar6 = param_3 - 4;
          uVar5 = uVar5 + (uint)*(ushort *)(param_3 - 4) * 0x400 + 0xfca02400;
          if ((int)uVar5 < (int)plVar4[3]) {
            iVar3 = FUN_1425cceb0(plVar4,uVar5);
            plVar4 = *(longlong **)(param_1 + 0x20);
          }
          else {
            iVar3 = *(int *)((longlong)plVar4 + 0x14) + -2;
          }
          goto LAB_1425d66f9;
        }
      }
      iVar3 = *(int *)((longlong)plVar4 + 0x14) + -1;
    }
    else {
      plVar4 = *(longlong **)(param_1 + 0x20);
      iVar3 = (uVar5 & 0x3f) + (uint)*(ushort *)(*plVar4 + (ulonglong)(uVar1 >> 6) * 2);
    }
LAB_1425d66f9:
    if (uVar5 < *(ushort *)(param_1 + 8)) {
      return param_3;
    }
    uVar1 = *(ushort *)(plVar4[1] + (longlong)iVar3 * 2);
    if (uVar1 <= *(ushort *)(param_1 + 0xe)) {
      return param_3;
    }
    if ((ushort)((ushort)*(undefined4 *)(param_1 + 0x10) | 1) == uVar1) {
      return param_3;
    }
    if (uVar1 < *(ushort *)(param_1 + 0x1a)) {
      uVar2 = *(ushort *)(*(longlong *)(param_1 + 0x30) + (ulonglong)(uVar1 >> 1) * 2);
      if (uVar2 < 0x200) {
        if (uVar2 < 0x100) {
          return param_3;
        }
        if ((uVar2 & 0x80) == 0) {
          return param_3;
        }
        if (*(ushort *)(*(longlong *)(param_1 + 0x30) + -2 + (ulonglong)(uVar1 >> 1) * 2) < 0x100) {
          return param_3;
        }
      }
    }
    else if (uVar1 < *(ushort *)(param_1 + 0x1e)) {
      if ((uVar1 & 6) < 3) {
        return param_3;
      }
    }
    else {
      if (uVar1 < 0xfc01) {
        return param_3;
      }
      if (uVar1 == 0xfe00) {
        return param_3;
      }
    }
    if (uVar1 < *(ushort *)(param_1 + 0x16)) {
      return uVar6;
    }
    param_3 = uVar6;
    if (uVar1 < *(ushort *)(param_1 + 0x1a)) {
      if ((*(byte *)(*(longlong *)(param_1 + 0x30) + (ulonglong)(uVar1 >> 1) * 2) & 0x80) == 0) {
        return uVar6;
      }
      if (*(ushort *)(*(longlong *)(param_1 + 0x30) + -2 + (ulonglong)(uVar1 >> 1) * 2) < 0x100) {
        return uVar6;
      }
    }
    else {
      if (uVar1 < 0xfc01) {
        return uVar6;
      }
      if (uVar1 == 0xfe00) {
        return uVar6;
      }
    }
  } while( true );
}



// FUNCTION 1425d6820 FUN_1425d6820 body=281 status=ok
// SIG undefined FUN_1425d6820(void)

void FUN_1425d6820(undefined8 *param_1,uint param_2,undefined4 param_3,undefined4 *param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  uVar1 = FUN_1426a6dd0(*param_1,param_3);
  if ((param_2 != 0) && ((uVar1 & 0x3fffff) == 0)) {
    FUN_1426a6e20(*param_1,param_3,uVar1 | param_2,param_4);
    return;
  }
  if ((uVar1 & 0x200000) == 0) {
    lVar2 = thunk_FUN_1424da030(200);
    if (lVar2 == 0) {
      *param_4 = 7;
      return;
    }
    FUN_142511900(lVar2);
    FUN_1426a6e20(*param_1,param_3,uVar1 & 0xffc00000 | *(uint *)(param_1 + 3) | 0x200000,param_4,
                  lVar2,uVar3);
    FUN_1425163e0(param_1 + 2,lVar2,param_4);
    if ((uVar1 & 0x1fffff) != 0) {
      FUN_142513960(lVar2,uVar1 & 0x1fffff);
    }
  }
  else {
    lVar2 = FUN_142516630(param_1 + 2,uVar1 & 0x1fffff);
  }
  FUN_142513960(lVar2,param_2);
  return;
}



// FUNCTION 1425d6940 Unwind@1425d6940 body=48 status=ok
// SIG undefined Unwind@1425d6940(void)

void Unwind_1425d6940(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 1425d6970 FUN_1425d6970 body=416 status=ok
// SIG undefined FUN_1425d6970(void)

void FUN_1425d6970(longlong param_1,int *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  int local_54;
  undefined8 local_50;
  
  local_50 = 0xfffffffffffffffe;
  puVar3 = (undefined8 *)thunk_FUN_1424da030(0x38);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x48) = 0;
    *param_2 = 7;
LAB_1425d6ad5:
    puVar3 = *(undefined8 **)(param_1 + 0x48);
    if (puVar3 == (undefined8 *)0x0) goto LAB_1425d6aff;
  }
  else {
    uVar4 = FUN_1426a6ca0(0,0,param_2);
    *puVar3 = uVar4;
    puVar3[1] = 0;
    FUN_142515f20(puVar3 + 2,&LAB_1424b70f0,0,param_2);
    plVar1 = (longlong *)(param_1 + 0x48);
    *(undefined8 **)(param_1 + 0x48) = puVar3;
    if (*param_2 < 1) {
      iVar5 = 0;
      iVar2 = FUN_1425cd270(*(undefined8 *)(param_1 + 0x20),0,1,1,0,0,&local_54);
      while (-1 < iVar2) {
        if (local_54 != 1) {
          FUN_1425d6b60(param_1,iVar5,iVar2,local_54,*(undefined8 *)(param_1 + 0x48),param_2);
        }
        iVar5 = iVar2 + 1;
        iVar2 = FUN_1425cd270(*(undefined8 *)(param_1 + 0x20),iVar5,1,1,0,0,&local_54);
      }
      uVar4 = FUN_1426a6f40(*(undefined8 *)*plVar1,1,1,param_2);
      *(undefined8 *)(*plVar1 + 8) = uVar4;
      FUN_1426a6d90(*(undefined8 *)*plVar1);
      *(undefined8 *)*plVar1 = 0;
      if (*param_2 < 1) {
        return;
      }
      goto LAB_1425d6ad5;
    }
  }
  FUN_1426a6d90(*puVar3);
  FUN_1425ccea0(puVar3[1]);
  FUN_142515ff0(puVar3 + 2);
  FUN_1401773f0(puVar3);
LAB_1425d6aff:
  *(undefined8 *)(param_1 + 0x48) = 0;
  return;
}



// FUNCTION 1425d6b20 Unwind@1425d6b20 body=57 status=ok
// SIG undefined Unwind@1425d6b20(void)

void Unwind_1425d6b20(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x38));
  return;
}



// FUNCTION 1425d6b60 FUN_1425d6b60 body=813 status=ok
// SIG undefined FUN_1425d6b60(void)

void FUN_1425d6b60(longlong param_1,uint param_2,uint param_3,uint param_4,undefined8 *param_5,
                  undefined8 param_6)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  uVar6 = (ushort)param_4;
  if (((uVar6 != 1) && (uVar6 < *(ushort *)(param_1 + 0xe) || *(ushort *)(param_1 + 0x12) <= uVar6))
     && ((int)param_2 <= (int)param_3)) {
    uVar7 = param_4;
    do {
      uVar3 = FUN_1426a6dd0(*param_5,param_2);
      uVar6 = (ushort)uVar7;
      if (uVar6 < *(ushort *)(param_1 + 0x1e)) {
        uVar5 = *(ushort *)(param_1 + 0xe);
        if (uVar6 < uVar5) {
          uVar9 = uVar3 | 0x40000000;
          goto LAB_1425d6c56;
        }
        if (uVar6 < *(ushort *)(param_1 + 0x1a)) {
          uVar8 = param_2;
          uVar10 = uVar7;
          if (uVar5 < uVar6) {
LAB_1425d6d13:
            lVar1 = *(longlong *)(param_1 + 0x30) + (ulonglong)(uVar10 & 0xfffe);
            uVar6 = *(ushort *)(*(longlong *)(param_1 + 0x30) + (ulonglong)(uVar10 & 0xfffe));
            uVar9 = uVar3;
            if (((param_2 == uVar8) && ((uVar6 & 0x80) != 0)) &&
               (uVar9 = uVar3 | 0x80000000, *(char *)(lVar1 + -2) == '\0')) {
              uVar9 = uVar3;
            }
            if ((uVar6 & 0x1f) != 0) {
              uVar5 = *(ushort *)(lVar1 + 2);
              uVar8 = (uint)uVar5;
              uVar7 = 1;
              if ((uVar5 & 0xfc00) == 0xd800) {
                uVar8 = (uint)uVar5 * 0x400 + (uint)*(ushort *)(lVar1 + 4) + 0xfca02400;
                uVar7 = 2;
              }
              FUN_1425d6820(param_5,param_2,uVar8,param_6);
              if (((ushort)uVar10 < *(ushort *)(param_1 + 0x12)) || ((uVar6 & 0x1f) <= uVar7)) {
                uVar7 = param_4 & 0xffff;
                goto LAB_1425d6c56;
              }
              do {
                uVar5 = *(ushort *)(lVar1 + 2 + (longlong)(int)uVar7 * 2);
                uVar10 = (uint)uVar5;
                uVar8 = uVar7 + 1;
                if ((uVar10 & 0xfc00) == 0xd800) {
                  uVar10 = (uint)uVar5 * 0x400 +
                           (uint)*(ushort *)(lVar1 + 2 + (longlong)(int)(uVar7 + 1) * 2) +
                           0xfca02400;
                  uVar8 = uVar7 + 2;
                }
                uVar7 = uVar8;
                uVar8 = FUN_1426a6dd0(*param_5,uVar10);
                if (-1 < (int)uVar8) {
                  FUN_1426a6e20(*param_5,uVar10,uVar8 | 0x80000000,param_6);
                }
              } while ((int)uVar7 < (int)(uVar6 & 0x1f));
            }
            uVar7 = param_4 & 0xffff;
            goto LAB_1425d6c56;
          }
        }
        else {
          uVar8 = (param_2 + ((param_4 & 0xffff) >> 3)) - (uint)*(ushort *)(param_1 + 0x1c);
          plVar2 = *(longlong **)(param_1 + 0x20);
          lVar1 = plVar2[1];
          if (uVar8 < 0x10000) {
            iVar4 = (uVar8 & 0x3f) + (uint)*(ushort *)(*plVar2 + (ulonglong)(uVar8 >> 6) * 2);
          }
          else if (uVar8 < 0x110000) {
            if ((int)uVar8 < (int)plVar2[3]) {
              iVar4 = FUN_1425cceb0(plVar2,uVar8);
              uVar5 = *(ushort *)(param_1 + 0xe);
            }
            else {
              iVar4 = *(int *)((longlong)plVar2 + 0x14) + -2;
            }
          }
          else {
            iVar4 = *(int *)((longlong)plVar2 + 0x14) + -1;
          }
          uVar6 = *(ushort *)(lVar1 + (longlong)iVar4 * 2);
          uVar10 = (uint)uVar6;
          if (uVar5 < uVar6) goto LAB_1425d6d13;
        }
        FUN_1425d6820(param_5,param_2,uVar8,param_6);
      }
      else {
        uVar9 = uVar3 | ((param_4 & 0xffff) < 0xfc00 | 0xfffffffe) << 0x1e;
LAB_1425d6c56:
        if (uVar9 != uVar3) {
          FUN_1426a6e20(*param_5,param_2,uVar9,param_6);
        }
      }
      bVar11 = param_2 != param_3;
      param_2 = param_2 + 1;
    } while (bVar11);
  }
  return;
}



// FUNCTION 1425d6eb0 FUN_1425d6eb0 body=27 status=ok
// SIG undefined FUN_1425d6eb0(void)

bool FUN_1425d6eb0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1425cd140(*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 8));
  return -1 < iVar1;
}



// FUNCTION 1425d6ed0 FUN_1425d6ed0 body=361 status=ok
// SIG undefined FUN_1425d6ed0(void)

ulonglong FUN_1425d6ed0(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  ushort uVar1;
  ushort uVar2;
  longlong *plVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 unaff_RBX;
  ulonglong uVar8;
  uint uVar9;
  
  uVar5 = FUN_1425cd140(*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 8));
  if ((uVar5 & 0x7fffffff) == 0) {
    uVar8 = 0;
  }
  else {
    FUN_142513500(param_3);
    if ((uVar5 & 0x200000) == 0) {
      if ((uVar5 & 0x1fffff) != 0) {
        FUN_142513960(param_3);
      }
    }
    else {
      uVar6 = FUN_142516630(*(longlong *)(param_1 + 0x48) + 0x10);
      FUN_142513300(param_3,uVar6);
    }
    uVar8 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    if ((uVar5 & 0x40000000) != 0) {
      plVar3 = *(longlong **)(param_1 + 0x20);
      lVar7 = plVar3[1];
      uVar9 = (uint)param_2;
      if (uVar9 < 0x10000) {
        iVar4 = (uVar9 & 0x3f) + (uint)*(ushort *)(*plVar3 + (param_2 >> 6 & 0x3ffffff) * 2);
      }
      else if (uVar9 < 0x110000) {
        if ((int)uVar9 < (int)plVar3[3]) {
          iVar4 = FUN_1425cceb0(plVar3,param_2 & 0xffffffff);
        }
        else {
          iVar4 = *(int *)((longlong)plVar3 + 0x14) + -2;
        }
      }
      else {
        iVar4 = *(int *)((longlong)plVar3 + 0x14) + -1;
      }
      uVar1 = *(ushort *)(lVar7 + (longlong)iVar4 * 2);
      if ((ulonglong)uVar1 == 2) {
        FUN_142511a00(param_3,uVar9 * 0x24c + -0x266000,uVar9 * 0x24c + -0x265db5);
      }
      else {
        uVar2 = *(ushort *)(param_1 + 0x1e);
        if ((uVar1 < *(ushort *)(param_1 + 0xe)) || (uVar2 <= uVar1)) {
          if ((ushort)(uVar1 + 0x400) < 0x402) {
            lVar7 = 0;
          }
          else if (uVar1 < uVar2) {
            lVar7 = (ulonglong)(uVar1 & 0xfffffffe) + *(longlong *)(param_1 + 0x30);
          }
          else {
            lVar7 = (ulonglong)uVar1 * 2 + *(longlong *)(param_1 + 0x28) + (ulonglong)uVar2 * -2;
          }
        }
        else {
          uVar5 = (ulonglong)(uVar1 & 0xfffffffe);
          lVar7 = *(longlong *)(param_1 + 0x30) + uVar5 +
                  (ulonglong)(*(ushort *)(*(longlong *)(param_1 + 0x30) + uVar5) & 0x1f) * 2 + 2;
        }
        FUN_1425d28c0(param_1,lVar7,param_3);
      }
    }
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 1425d7040 FUN_1425d7040 body=8 status=ok
// SIG undefined FUN_1425d7040(void)

undefined * FUN_1425d7040(void)

{
  return &DAT_14c7fbea8;
}



// FUNCTION 1425d7050 FUN_1425d7050 body=32 status=ok
// SIG undefined FUN_1425d7050(void)

undefined8 * FUN_1425d7050(undefined8 *param_1)

{
  FUN_142515e50();
  *param_1 = icu_64::UStack::vftable;
  return param_1;
}



// FUNCTION 1425d7070 FUN_1425d7070 body=32 status=ok
// SIG undefined FUN_1425d7070(void)

undefined8 * FUN_1425d7070(undefined8 *param_1)

{
  FUN_142515f20();
  *param_1 = icu_64::UStack::vftable;
  return param_1;
}



// FUNCTION 1425d7090 thunk_FUN_142515ff0 body=5 status=ok
// SIG undefined thunk_FUN_142515ff0(void)

void thunk_FUN_142515ff0(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  
  *param_1 = icu_64::UVector::vftable;
  if (param_1[3] != 0) {
    iVar1 = *(int *)(param_1 + 1);
    if (0 < iVar1) {
      lVar2 = 0;
      do {
        if (*(longlong *)(param_1[2] + lVar2 * 8) != 0) {
          (*(code *)param_1[3])();
          iVar1 = *(int *)(param_1 + 1);
        }
        lVar2 = lVar2 + 1;
      } while (lVar2 < iVar1);
    }
  }
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1424da110(param_1[2]);
  param_1[2] = 0;
  FUN_1424b70d0(param_1);
  return;
}



// FUNCTION 1425d70a0 FUN_1425d70a0 body=54 status=ok
// SIG undefined FUN_1425d70a0(void)

undefined8 FUN_1425d70a0(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 8) < 1) {
    uVar1 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 8) + -1;
    uVar1 = FUN_142516630(param_1,iVar2);
    FUN_142516850(param_1,iVar2);
  }
  return uVar1;
}



// FUNCTION 1425d70e0 FUN_1425d70e0 body=52 status=ok
// SIG undefined FUN_1425d70e0(void)

undefined4 FUN_1425d70e0(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 8) < 1) {
    uVar1 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 8) + -1;
    uVar1 = FUN_142516650(param_1,iVar2);
    FUN_142516850(param_1,iVar2);
  }
  return uVar1;
}



// FUNCTION 1425d7120 FUN_1425d7120 body=38 status=ok
// SIG undefined FUN_1425d7120(void)

undefined8 FUN_1425d7120(undefined8 param_1,int param_2)

{
  FUN_142515ff0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1425d7150 FUN_1425d7150 body=126 status=ok
// SIG undefined FUN_1425d7150(void)

undefined8 * FUN_1425d7150(undefined8 *param_1)

{
  *param_1 = icu_64::UnicodeSet::vftable;
  param_1[1] = icu_64::UnicodeSet::vftable;
  param_1[2] = param_1 + 0xc;
  param_1[3] = 0x100000019;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  FUN_1425d71f0();
  return param_1;
}



// FUNCTION 1425d71d0 Unwind@1425d71d0 body=30 status=ok
// SIG undefined Unwind@1425d71d0(void)

void Unwind_1425d71d0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 1425d71f0 FUN_1425d71f0 body=173 status=ok
// SIG undefined FUN_1425d71f0(void)

undefined8
FUN_1425d71f0(undefined8 param_1,longlong param_2,uint param_3,undefined8 param_4,int *param_5)

{
  int iVar1;
  undefined **local_48;
  undefined8 local_40;
  int local_34 [3];
  
  local_34[1] = -2;
  local_34[2] = -1;
  local_48 = icu_64::ParsePosition::vftable;
  local_40 = 0xffffffff00000000;
  FUN_1425d72d0(param_1,param_2,&local_48,param_3,param_4,param_5);
  if (*param_5 < 1) {
    local_34[0] = (int)local_40;
    if ((param_3 & 1) != 0) {
      FUN_1425cc780(param_2,local_34,1);
    }
    if (*(short *)(param_2 + 8) < 0) {
      iVar1 = *(int *)(param_2 + 0xc);
    }
    else {
      iVar1 = (int)*(short *)(param_2 + 8) >> 5;
    }
    if (local_34[0] != iVar1) {
      *param_5 = 1;
    }
  }
  thunk_FUN_1424b70d0(&local_48);
  return param_1;
}



// FUNCTION 1425d72a0 Unwind@1425d72a0 body=40 status=ok
// SIG undefined Unwind@1425d72a0(void)

void Unwind_1425d72a0(undefined8 param_1,longlong param_2)

{
  thunk_FUN_1424b70d0(param_2 + 0x30);
  return;
}



// FUNCTION 1425d72d0 FUN_1425d72d0 body=233 status=ok
// SIG undefined FUN_1425d72d0(void)

longlong FUN_1425d72d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                      undefined8 param_5,int *param_6)

{
  undefined1 local_a8 [24];
  longlong local_90;
  undefined **local_80;
  undefined2 local_78;
  code *local_40;
  undefined4 local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (*param_6 < 1) {
    if (*(longlong *)(param_1 + 0x28) == 0 && *(longlong *)(param_1 + 0x58) == 0) {
      local_80 = &PTR_FUN_149e18960;
      local_78 = 2;
      FUN_1426a5c90(local_a8,param_2,param_5,param_3);
      local_40 = FUN_1425d73f0;
      local_38 = 0;
      FUN_1425c5e10(param_1,local_a8,param_5,&local_80,param_4,&local_40,0,param_6);
      if (*param_6 < 1) {
        if (local_90 == 0) {
          FUN_1425c6a20(param_1,&local_80);
        }
        else {
          *param_6 = 0x10002;
        }
      }
      FUN_140859a90(&local_80);
    }
    else {
      *param_6 = 0x1e;
    }
  }
  return param_1;
}



// FUNCTION 1425d73c0 Unwind@1425d73c0 body=43 status=ok
// SIG undefined Unwind@1425d73c0(void)

void Unwind_1425d73c0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x68);
  return;
}



// FUNCTION 1425d73f0 FUN_1425d73f0 body=1234 status=ok
// SIG undefined FUN_1425d73f0(void)

longlong FUN_1425d73f0(longlong param_1,uint param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  int iVar10;
  longlong lVar11;
  undefined8 in_stack_fffffffffffffd78;
  undefined4 uVar12;
  undefined1 local_280 [224];
  undefined1 local_1a0 [80];
  undefined8 local_150;
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  code *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined **local_a8;
  short local_a0;
  undefined1 local_9e [2];
  int local_9c;
  undefined1 *local_90;
  int local_64;
  undefined8 local_60;
  int local_58;
  uint local_54;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (((*(longlong *)(param_1 + 0x28) == 0 && *(longlong *)(param_1 + 0x58) == 0) &&
      ((param_2 & 6) != 0)) && ((*(byte *)(param_1 + 0x20) & 1) == 0)) {
    local_50 = param_1;
    FUN_142511b90(local_1a0);
    local_a8 = &PTR_FUN_149e18960;
    local_a0 = 2;
    local_d0 = &LAB_1425d79a0;
    local_c8 = &LAB_1425d79b0;
    local_c0 = FUN_1425d79c0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_d8 = local_1a0;
    local_54 = param_2;
    if (((param_2 & 2) != 0) && (cVar2 = FUN_1425118d0(local_1a0), cVar2 != '\0')) {
      FUN_1425160a0(local_150);
    }
    local_64 = FUN_142512820(local_50);
    for (iVar10 = 0; iVar10 < local_64; iVar10 = iVar10 + 1) {
      iVar3 = FUN_142512850(local_50,iVar10);
      iVar4 = FUN_142512830(local_50,iVar10);
      if ((local_54 & 2) == 0) {
        for (; iVar3 <= iVar4; iVar3 = iVar3 + 1) {
          uVar7 = CONCAT44((int)((ulonglong)in_stack_fffffffffffffd78 >> 0x20),1);
          uVar5 = FUN_1424d6f50(iVar3,0,0,&local_60,uVar7);
          uVar12 = (undefined4)((ulonglong)uVar7 >> 0x20);
          if (-1 < (int)uVar5) {
            if (uVar5 < 0x20) {
              FUN_1424a8f10(&local_a8,0,local_60,uVar5);
              FUN_142513b40(local_1a0,&local_a8);
            }
            else {
              FUN_142513960(local_1a0,uVar5);
            }
          }
          uVar7 = CONCAT44(uVar12,1);
          uVar5 = FUN_1424d7d00(iVar3,0,0,&local_60,uVar7);
          uVar12 = (undefined4)((ulonglong)uVar7 >> 0x20);
          if (-1 < (int)uVar5) {
            if (uVar5 < 0x20) {
              FUN_1424a8f10(&local_a8,0,local_60,uVar5);
              FUN_142513b40(local_1a0,&local_a8);
            }
            else {
              FUN_142513960(local_1a0,uVar5);
            }
          }
          in_stack_fffffffffffffd78 = CONCAT44(uVar12,1);
          uVar5 = FUN_1424d78e0(iVar3,0,0,&local_60,in_stack_fffffffffffffd78);
          if (-1 < (int)uVar5) {
            if (uVar5 < 0x20) {
              FUN_1424a8f10(&local_a8,0);
              FUN_142513b40(local_1a0,&local_a8);
            }
            else {
              FUN_142513960(local_1a0,uVar5);
            }
          }
          uVar5 = FUN_1424d7ef0(iVar3);
          if (-1 < (int)uVar5) {
            if (uVar5 < 0x20) {
              FUN_1424a8f10(&local_a8,0);
              FUN_142513b40(local_1a0);
            }
            else {
              FUN_142513960(local_1a0);
            }
          }
        }
      }
      else if (iVar3 <= iVar4) {
        do {
          FUN_1424d67d0(iVar3,&local_d8);
          iVar3 = iVar3 + 1;
        } while (iVar4 + 1 != iVar3);
      }
    }
    cVar2 = FUN_1425118d0(local_50);
    lVar11 = local_50;
    if (cVar2 != '\0') {
      if ((local_54 & 2) == 0) {
        FUN_1412ae150(local_280,&DAT_149e02088,0,0,0);
        local_58 = 0;
        puVar6 = (undefined8 *)FUN_140661620(local_280,&local_58);
        lVar11 = local_50;
        if (local_58 < 1) {
          for (iVar10 = 0; lVar1 = *(longlong *)(lVar11 + 0x50), iVar10 < *(int *)(lVar1 + 8);
              iVar10 = iVar10 + 1) {
            uVar7 = FUN_142516630(lVar1,iVar10);
            uVar8 = FUN_1424a7c80(&local_a8,uVar7);
            FUN_1424d6530(uVar8,local_280);
            FUN_142513b40(local_1a0,&local_a8);
            uVar8 = FUN_1424a7c80(&local_a8,uVar7);
            FUN_1425f57e0(uVar8,puVar6,local_280);
            FUN_142513b40(local_1a0,&local_a8);
            uVar8 = FUN_1424a7c80(&local_a8,uVar7);
            FUN_1424d65b0(uVar8,local_280);
            FUN_142513b40(local_1a0,&local_a8);
            uVar7 = FUN_1424a7c80(&local_a8,uVar7);
            FUN_14257efe0(uVar7,0);
            FUN_142513b40(local_1a0,&local_a8);
          }
        }
        if (puVar6 != (undefined8 *)0x0) {
          (**(code **)*puVar6)(puVar6,1);
        }
        FUN_1414b3f60(local_280);
      }
      else {
        for (iVar10 = 0; lVar11 = local_50, iVar10 < *(int *)(*(longlong *)(local_50 + 0x50) + 8);
            iVar10 = iVar10 + 1) {
          uVar7 = FUN_142516630(*(longlong *)(local_50 + 0x50),iVar10);
          FUN_1424a7c80(&local_a8,uVar7);
          FUN_14257efe0(&local_a8,0);
          uVar5 = (uint)local_a0;
          iVar3 = local_9c;
          if (-1 < local_a0) {
            iVar3 = (int)uVar5 >> 5;
          }
          puVar9 = local_9e;
          if ((uVar5 & 2) == 0) {
            puVar9 = local_90;
          }
          if ((uVar5 & 0x11) != 0) {
            puVar9 = (undefined1 *)0x0;
          }
          cVar2 = FUN_1424d6bc0(puVar9,iVar3,&local_d8);
          if (cVar2 == '\0') {
            FUN_142513b40(local_1a0,&local_a8);
          }
        }
      }
    }
    FUN_142511c30(lVar11,local_1a0);
    FUN_140859a90(&local_a8);
    FUN_1425121d0(local_1a0);
    param_1 = local_50;
  }
  return param_1;
}



// FUNCTION 1425d7910 Unwind@1425d7910 body=55 status=ok
// SIG undefined Unwind@1425d7910(void)

void Unwind_1425d7910(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(param_2 + 0x28);
  return;
}



// FUNCTION 1425d7950 Unwind@1425d7950 body=70 status=ok
// SIG undefined Unwind@1425d7950(void)

void Unwind_1425d7950(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x200);
  FUN_1425121d0(param_2 + 0x108);
  return;
}



// FUNCTION 1425d79c0 FUN_1425d79c0 body=76 status=ok
// SIG undefined FUN_1425d79c0(void)

void FUN_1425d79c0(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined1 local_60 [64];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_1424a7060(local_60,param_3 >> 0x1f,param_2);
  FUN_142513b40(param_1,local_60);
  FUN_140859a90(local_60);
  return;
}



// FUNCTION 1425d7a10 Unwind@1425d7a10 body=34 status=ok
// SIG undefined Unwind@1425d7a10(void)

void Unwind_1425d7a10(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 1425d7a40 FUN_1425d7a40 body=189 status=ok
// SIG undefined FUN_1425d7a40(void)

bool FUN_1425d7a40(int *param_1)

{
  char cVar1;
  
  if (*param_1 < 1) {
    if (DAT_14c7fbee8 != 2) {
      cVar1 = FUN_142501800(&DAT_14c7fbee8);
      if (cVar1 != '\0') {
        DAT_14c7fbee0 = FUN_1424e51c0(0,&DAT_149c4b09f,"unames",&LAB_1425d89b0,0,param_1);
        if (*param_1 < 1) {
          DAT_14c7fbeb0 = FUN_142532380(DAT_14c7fbee0);
        }
        else {
          DAT_14c7fbee0 = 0;
        }
        FUN_1424d6720(0xe,FUN_1425d89f0);
        DAT_14c7fbeec = *param_1;
        FUN_1425019c0(&DAT_14c7fbee8);
        goto LAB_1425d7af1;
      }
    }
    if (0 < DAT_14c7fbeec) {
      *param_1 = DAT_14c7fbeec;
    }
  }
LAB_1425d7af1:
  return *param_1 < 1;
}



// FUNCTION 1425d7b00 FUN_1425d7b00 body=404 status=ok
// SIG undefined FUN_1425d7b00(void)

int FUN_1425d7b00(uint param_1,char *param_2,short param_3)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  longlong lVar7;
  short sVar8;
  char cVar9;
  bool bVar10;
  
  if (((int)param_1 < 0xfdd0) ||
     ((uVar3 = 0x1e, 0xfdef < param_1 && ((0x10ffff < param_1 || ((param_1 & 0xfffe) != 0xfffe))))))
  {
    uVar3 = FUN_1424d86a0(param_1);
    if ((byte)uVar3 == 0x12) {
      uVar3 = (ulonglong)(byte)(0x20 - ((param_1 & 0xfffffc00) == 0xd800));
      goto LAB_1425d7b6f;
    }
    if ((byte)uVar3 < 0x21) goto LAB_1425d7b6f;
    pcVar5 = "unknown";
    if (param_3 != 0) goto LAB_1425d7b82;
LAB_1425d7b6b:
    param_3 = 0;
  }
  else {
LAB_1425d7b6f:
    uVar3 = uVar3 & 0xff;
    pcVar5 = (&PTR_s_unassigned_149c4af90)[uVar3];
    if (param_3 == 0) goto LAB_1425d7b6b;
LAB_1425d7b82:
    *param_2 = '<';
    param_2 = param_2 + 1;
    param_3 = param_3 + -1;
  }
  uVar3 = CONCAT62((int6)(uVar3 >> 0x10),3);
  cVar1 = *pcVar5;
  while (iVar2 = (int)uVar3, cVar1 != '\0') {
    if (param_3 == 0) {
      param_3 = 0;
    }
    else {
      *param_2 = cVar1;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    }
    uVar3 = (ulonglong)(iVar2 + 1);
    cVar1 = pcVar5[(ulonglong)(iVar2 - 1U & 0xffff) - 1];
  }
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    *param_2 = '-';
    param_2 = param_2 + 1;
    param_3 = param_3 + -1;
  }
  uVar6 = 0;
  if (param_1 != 0) {
    uVar6 = 0;
    uVar4 = param_1;
    do {
      uVar6 = uVar6 + 1;
      bVar10 = 0xf < uVar4;
      uVar4 = (int)uVar4 >> 4;
    } while (bVar10);
  }
  uVar4 = 4;
  if (4 < uVar6) {
    uVar4 = uVar6;
  }
  if (0 < (int)uVar4 || param_1 != 0) {
    if (param_3 == 0) goto LAB_1425d7c8c;
    lVar7 = (longlong)(int)uVar4;
    sVar8 = param_3;
    do {
      cVar1 = (char)(param_1 & 0xf);
      cVar9 = cVar1 + '7';
      if ((param_1 & 0xf) < 10) {
        cVar9 = cVar1 + '0';
      }
      param_2[lVar7 + -1] = cVar9;
      param_3 = sVar8 + -1;
      if (param_1 < 0x10 && lVar7 < 2) break;
      lVar7 = lVar7 + -1;
      param_1 = (int)param_1 >> 4;
      bVar10 = sVar8 != 1;
      sVar8 = param_3;
    } while (bVar10);
  }
  if (param_3 != 0) {
    param_2[uVar4] = '>';
  }
LAB_1425d7c8c:
  return iVar2 + uVar4;
}



// FUNCTION 1425d7cb0 FUN_1425d7cb0 body=1832 status=ok
// SIG undefined FUN_1425d7cb0(void)

void FUN_1425d7cb0(uint param_1,char *param_2,int *param_3)

{
  char *pcVar1;
  byte bVar2;
  short sVar3;
  char cVar4;
  char cVar5;
  short sVar6;
  uint uVar7;
  char *pcVar8;
  ushort uVar9;
  uint uVar10;
  ulonglong uVar11;
  char **ppcVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  ushort uVar16;
  ulonglong uVar17;
  int iVar18;
  longlong lVar19;
  int iVar20;
  uint uVar21;
  longlong *plVar22;
  char *pcVar23;
  ushort uVar24;
  longlong *plVar25;
  uint *puVar26;
  bool bVar27;
  undefined1 auStack_288 [32];
  char **local_268;
  uint local_260;
  uint local_254;
  ushort local_24e;
  int local_24c;
  int *local_248;
  int local_23c;
  ulonglong local_238;
  char *local_230;
  ulonglong local_228;
  undefined8 local_220;
  char local_218 [128];
  char local_198 [128];
  longlong local_118 [8];
  longlong local_d8 [8];
  ushort local_98 [8];
  char *local_88;
  int local_80;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_288;
  if ((param_3 == (int *)0x0) || (0 < *param_3)) goto LAB_1425d831b;
  iVar18 = 1;
  if (((int)param_1 < 4) && ((param_2 != (char *)0x0 && (*param_2 != '\0')))) {
    cVar4 = FUN_1425d7a40(param_3);
    if (cVar4 == '\0') goto LAB_1425d831b;
    lVar19 = 0;
    local_254 = param_1;
    do {
      cVar4 = param_2[lVar19];
      if (cVar4 == '\0') {
        local_218[lVar19] = '\0';
        local_198[lVar19] = '\0';
        if (local_218[0] != '<') {
          iVar18 = *(int *)(DAT_14c7fbeb0 + (ulonglong)*(uint *)(DAT_14c7fbeb0 + 0xc));
          uVar7 = local_254;
          if (iVar18 == 0) goto LAB_1425d82bf;
          puVar26 = (uint *)(DAT_14c7fbeb0 + (ulonglong)*(uint *)(DAT_14c7fbeb0 + 0xc) + 4);
          local_248 = param_3;
          goto LAB_1425d7e20;
        }
        iVar18 = 0xc;
        if (local_254 != 2) goto LAB_1425d8312;
        uVar14 = lVar19 - 1;
        uVar7 = (uint)uVar14;
        if (local_218[uVar14 & 0xffffffff] != '>') goto LAB_1425d8312;
        if (uVar7 < 3) {
          uVar10 = 2;
          if ((int)lVar19 != 3) goto LAB_1425d8312;
          goto LAB_1425d834b;
        }
        uVar11 = uVar14 & 0xffffffff;
        uVar17 = uVar14 & 0xffffffff;
        goto LAB_1425d7daa;
      }
      cVar5 = FUN_1425038f0(cVar4);
      local_198[lVar19] = cVar5;
      cVar4 = FUN_142503910(cVar4);
      local_218[lVar19] = cVar4;
      lVar19 = lVar19 + 1;
    } while (lVar19 != 0x78);
    iVar18 = 0xc;
  }
  goto LAB_1425d8312;
LAB_1425d7e20:
  if ((uVar7 & 0xfffffffd) == 0) {
    if ((char)puVar26[2] == '\x01') {
      bVar2 = *(byte *)((longlong)puVar26 + 9);
      pcVar8 = (char *)((longlong)puVar26 + (ulonglong)bVar2 * 2 + 0xd);
      pcVar23 = local_198;
LAB_1425d7e80:
      pcVar1 = pcVar8 + -1;
      local_24c = iVar18;
      if (*pcVar1 != '\0') goto code_r0x0001425d7e8c;
      uVar10 = *puVar26;
      local_238 = (ulonglong)puVar26[1];
      local_24e = bVar2 - 1;
      local_230 = pcVar23;
      if (local_24e == 0) {
        local_228 = 0;
      }
      else {
        local_228 = (ulonglong)local_24e;
        memset(local_98 + (local_228 - (ushort)(bVar2 - 2)),0,local_228 * 2);
      }
      local_23c = (int)local_238 + 1;
      local_98[0] = 0;
      sVar6 = 0x40;
      uVar14 = 0;
      plVar25 = local_d8;
      plVar22 = local_118;
      ppcVar12 = &local_88;
      while( true ) {
        if (plVar25 == (longlong *)0x0) {
          plVar25 = (longlong *)0x0;
        }
        else {
          *plVar25 = (longlong)pcVar8;
          plVar25 = plVar25 + 1;
        }
        uVar9 = local_98[uVar14];
        if (uVar9 != 0) {
          uVar24 = uVar9;
          if ((uVar9 & 3) != 0) {
            uVar16 = 0;
            do {
              do {
                cVar4 = *pcVar8;
                pcVar8 = pcVar8 + 1;
              } while (cVar4 != '\0');
              uVar24 = uVar24 - 1;
              uVar16 = uVar16 + 1;
            } while (uVar16 != (uVar9 & 3));
          }
          if (3 < uVar9) {
            do {
              do {
                cVar4 = *pcVar8;
                pcVar8 = pcVar8 + 1;
              } while (cVar4 != '\0');
              do {
                cVar4 = *pcVar8;
                pcVar8 = pcVar8 + 1;
              } while (cVar4 != '\0');
              do {
                cVar4 = *pcVar8;
                pcVar8 = pcVar8 + 1;
              } while (cVar4 != '\0');
              do {
                cVar4 = *pcVar8;
                pcVar8 = pcVar8 + 1;
              } while (cVar4 != '\0');
              uVar24 = uVar24 - 4;
            } while (uVar24 != 0);
          }
        }
        if (plVar22 == (longlong *)0x0) {
          plVar22 = (longlong *)0x0;
        }
        else {
          *plVar22 = (longlong)pcVar8;
          plVar22 = plVar22 + 1;
        }
        while( true ) {
          cVar4 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          if (cVar4 == '\0') break;
          if (sVar6 == 0) {
            sVar6 = 0;
          }
          else {
            *(char *)ppcVar12 = cVar4;
            ppcVar12 = (char **)((longlong)ppcVar12 + 1);
            sVar6 = sVar6 + -1;
          }
        }
        if (uVar14 == local_228) break;
        sVar3 = *(short *)((longlong)puVar26 + uVar14 * 2 + 0xc);
        uVar9 = ~local_98[uVar14] + sVar3;
        if (uVar9 != 0) {
          uVar24 = uVar9 & 3;
          if (uVar24 != 0) {
            uVar16 = 0;
            do {
              do {
                cVar4 = *pcVar8;
                pcVar8 = pcVar8 + 1;
              } while (cVar4 != '\0');
              uVar9 = uVar9 - 1;
              uVar16 = uVar16 + 1;
            } while (uVar16 != uVar24);
          }
          if (2 < (ushort)((sVar3 - local_98[uVar14]) - 2)) {
            do {
              do {
                cVar4 = *pcVar8;
                pcVar8 = pcVar8 + 1;
              } while (cVar4 != '\0');
              do {
                cVar4 = *pcVar8;
                pcVar8 = pcVar8 + 1;
              } while (cVar4 != '\0');
              do {
                cVar4 = *pcVar8;
                pcVar8 = pcVar8 + 1;
              } while (cVar4 != '\0');
              do {
                cVar4 = *pcVar8;
                pcVar8 = pcVar8 + 1;
              } while (cVar4 != '\0');
              uVar9 = uVar9 - 4;
            } while (uVar9 != 0);
          }
        }
        uVar14 = uVar14 + 1;
      }
      if (sVar6 != 0) {
        *(char *)ppcVar12 = '\0';
      }
      local_220 = (ulonglong)bVar2;
      iVar15 = strcmp(local_230,(char *)&local_88);
      param_3 = local_248;
      iVar18 = local_24c;
      uVar7 = local_254;
      if (iVar15 == 0) goto LAB_1425d82a4;
      if ((int)(uVar10 + 1) < local_23c) {
        uVar14 = (ulonglong)local_24e;
        uVar10 = uVar10 + 1;
        do {
          uVar9 = local_98[uVar14] + 1;
          uVar17 = uVar14;
          uVar21 = bVar2 - 2;
          if (*(ushort *)((longlong)puVar26 + uVar14 * 2 + 0xc) <= uVar9) {
            do {
              local_98[uVar17] = 0;
              local_118[uVar17] = local_d8[uVar17];
              uVar17 = (ulonglong)(uVar21 & 0xffff);
              uVar9 = local_98[uVar17] + 1;
              uVar21 = uVar21 - 1;
            } while (*(ushort *)((longlong)puVar26 + uVar17 * 2 + 0xc) <= uVar9);
          }
          local_98[uVar17] = uVar9;
          pcVar8 = (char *)local_118[uVar17];
          do {
            cVar4 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar4 != '\0');
          local_118[uVar17] = (longlong)pcVar8;
          pcVar8 = local_230;
          if (bVar2 == 0) {
LAB_1425d8198:
            if (*pcVar8 == '\0') goto LAB_1425d82a4;
          }
          else {
            uVar9 = 0;
            do {
              pcVar23 = (char *)local_118[uVar9];
              cVar4 = *pcVar23;
              while (cVar4 != '\0') {
                pcVar23 = pcVar23 + 1;
                if (cVar4 != *pcVar8) {
                  pcVar23 = "";
                  uVar9 = 99;
                }
                pcVar8 = pcVar8 + 1;
                cVar4 = *pcVar23;
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 < bVar2);
            if (uVar9 < 99) goto LAB_1425d8198;
          }
          bVar27 = uVar10 != (uint)local_238;
          uVar10 = uVar10 + 1;
        } while (bVar27);
      }
      goto LAB_1425d7e10;
    }
    if ((char)puVar26[2] == '\0') {
      lVar19 = 0;
      do {
        cVar4 = *(char *)((longlong)puVar26 + lVar19 + 0xc);
        if (cVar4 == '\0') {
          uVar9 = (ushort)*(byte *)((longlong)puVar26 + 9);
          pcVar8 = local_198 + lVar19;
          uVar10 = 0;
          if (*(byte *)((longlong)puVar26 + 9) != 0) goto LAB_1425d7efb;
          goto LAB_1425d7ec9;
        }
        pcVar8 = local_198 + lVar19;
        lVar19 = lVar19 + 1;
      } while (cVar4 == *pcVar8);
    }
  }
  goto LAB_1425d7e10;
code_r0x0001425d7e8c:
  pcVar8 = pcVar8 + 1;
  cVar4 = *pcVar23;
  pcVar23 = pcVar23 + 1;
  if (*pcVar1 != cVar4) goto code_r0x0001425d7e9d;
  goto LAB_1425d7e80;
code_r0x0001425d7e9d:
  uVar10 = 0xffff;
  param_3 = local_248;
  uVar7 = local_254;
  goto LAB_1425d82a4;
  while( true ) {
    pcVar8 = pcVar8 + 1;
    uVar10 = uVar10 << 4 | iVar15 + cVar4;
    uVar9 = uVar9 - 1;
    if (uVar9 == 0) break;
LAB_1425d7efb:
    cVar4 = *pcVar8;
    iVar15 = -0x30;
    if ((9 < (byte)(cVar4 - 0x30U)) && (iVar15 = -0x37, 5 < (byte)(cVar4 + 0xbfU)))
    goto LAB_1425d7e10;
  }
LAB_1425d7ec9:
  if (((*pcVar8 != '\0') || (uVar10 < *puVar26)) || (puVar26[1] < uVar10)) goto LAB_1425d7e10;
LAB_1425d82a4:
  if (uVar10 != 0xffff) goto LAB_1425d831b;
LAB_1425d7e10:
  puVar26 = (uint *)((longlong)puVar26 + (ulonglong)*(ushort *)((longlong)puVar26 + 10));
  iVar18 = iVar18 + -1;
  if (iVar18 == 0) goto LAB_1425d82bf;
  goto LAB_1425d7e20;
LAB_1425d82bf:
  local_88 = local_198;
  local_80 = 0xffff;
  local_268 = &local_88;
  local_260 = uVar7;
  FUN_1425d8470(DAT_14c7fbeb0,0,0x110000,0);
  iVar18 = 0xc;
  if (local_80 != 0xffff) goto LAB_1425d831b;
  goto LAB_1425d8312;
  while (uVar17 = uVar13, 2 < uVar13) {
LAB_1425d7daa:
    uVar13 = uVar17 - 1;
    uVar10 = (int)uVar11 - 1;
    uVar11 = (ulonglong)uVar10;
    if (local_218[uVar17 - 1] == '-') break;
  }
LAB_1425d834b:
  if ((local_218[uVar10] == '-') && (((int)lVar19 - uVar10) - 3 < 8)) {
    local_218[uVar10] = '\0';
    uVar10 = uVar10 + 1;
    uVar17 = (ulonglong)uVar10;
    if (uVar10 < uVar7) {
      uVar17 = uVar14 & 0xffffffff;
    }
    iVar15 = 0;
    do {
      if (uVar7 <= uVar10) {
        uVar7 = FUN_1425d8410(iVar15);
        local_218[uVar17] = '\0';
        lVar19 = 0;
        goto LAB_1425d83d1;
      }
      cVar4 = local_218[uVar10];
      iVar20 = -0x30;
      if ((9 < (byte)(cVar4 - 0x30U)) && (iVar20 = -0x57, 5 < (byte)(cVar4 + 0x9fU))) break;
      iVar15 = iVar15 * 0x10 + iVar20 + (int)cVar4;
      uVar10 = uVar10 + 1;
    } while (iVar15 < 0x110000);
  }
  goto LAB_1425d8312;
  while (lVar19 = lVar19 + 8, lVar19 != 0x108) {
LAB_1425d83d1:
    iVar15 = strcmp(local_218 + 1,*(char **)((longlong)&PTR_s_unassigned_149c4af90 + lVar19));
    if (iVar15 == 0) {
      if ((uVar7 & 0xff) << 3 == (int)lVar19) goto LAB_1425d831b;
      break;
    }
  }
LAB_1425d8312:
  *param_3 = iVar18;
LAB_1425d831b:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_288);
}



// FUNCTION 1425d8410 FUN_1425d8410 body=92 status=ok
// SIG undefined FUN_1425d8410(void)

char FUN_1425d8410(uint param_1)

{
  char cVar1;
  
  if (((int)param_1 < 0xfdd0) ||
     ((cVar1 = '\x1e', 0xfdef < param_1 && ((0x10ffff < param_1 || ((param_1 & 0xfffe) != 0xfffe))))
     )) {
    cVar1 = FUN_1424d86a0(param_1);
    if (cVar1 == '\x12') {
      cVar1 = ' ' - ((param_1 & 0xfffffc00) == 0xd800);
    }
  }
  return cVar1;
}



// FUNCTION 1425d8470 FUN_1425d8470 body=1305 status=ok
// SIG undefined FUN_1425d8470(void)

void FUN_1425d8470(longlong param_1,uint param_2,ulonglong param_3,code *param_4,undefined8 param_5,
                  int param_6)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  ushort *puVar4;
  ushort *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  ushort *puVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auStack_178 [32];
  code *local_158;
  undefined8 local_150;
  int local_148;
  code *local_138;
  uint local_12c;
  undefined8 local_128;
  uint local_11c;
  undefined1 local_118 [208];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  uVar12 = param_2 >> 5;
  lVar7 = param_1 + (ulonglong)*(uint *)(param_1 + 4) + 2;
  uVar13 = uVar12 & 0xffff;
  uVar15 = (uint)*(ushort *)(param_1 + (ulonglong)*(uint *)(param_1 + 4));
  local_138 = param_4;
  if (uVar15 < 2) {
    uVar9 = 0;
    if (param_6 == 2) goto LAB_1425d850e;
LAB_1425d8587:
    uVar6 = (ulonglong)param_2;
  }
  else {
    uVar11 = 0;
    do {
      uVar3 = uVar15 + uVar11 >> 1;
      if (uVar13 < *(ushort *)(lVar7 + (ulonglong)(uVar3 * 3) * 2)) {
        uVar15 = uVar3;
        uVar3 = uVar11;
      }
      uVar11 = uVar3;
    } while ((int)uVar11 < (int)(uVar15 - 1));
    uVar9 = (ulonglong)(uVar11 * 3);
    if (param_6 != 2) goto LAB_1425d8587;
LAB_1425d850e:
    uVar2 = *(ushort *)(lVar7 + uVar9 * 2);
    if (uVar2 <= uVar13) goto LAB_1425d8587;
    uVar6 = (ulonglong)uVar2 << 5;
    if ((int)param_3 <= (int)uVar6) {
      uVar6 = param_3 & 0xffffffff;
    }
    if ((param_4 != (code *)0x0) && (local_128 = param_3, (int)param_2 < (int)(uint)uVar6)) {
      do {
        uVar2 = FUN_1425d7b00(param_2,local_118,200);
        local_118[uVar2] = 0;
        if (uVar2 != 0) {
          local_158 = (code *)CONCAT44(local_158._4_4_,(uint)uVar2);
          cVar1 = (*local_138)(param_5,param_2,2,local_118);
          if (cVar1 == '\0') goto LAB_1425d8947;
        }
        param_2 = param_2 + 1;
        param_3 = local_128;
      } while ((uint)uVar6 != param_2);
    }
  }
  uVar15 = (uint)param_3;
  uVar10 = uVar15 - 1;
  uVar11 = uVar10 >> 5;
  puVar4 = (ushort *)(lVar7 + uVar9 * 2);
  uVar3 = uVar11 & 0xffff;
  uVar14 = (uint)uVar6;
  if (uVar13 == uVar3) {
    if (*puVar4 == (ushort)uVar12) {
      local_148 = param_6;
LAB_1425d889e:
      local_150 = param_5;
      local_158 = local_138;
      FUN_1425d8cc0(param_1,puVar4,uVar6);
      goto LAB_1425d8947;
    }
    if (param_6 != 2) goto LAB_1425d8947;
  }
  else {
    lVar7 = param_1 + (ulonglong)*(uint *)(param_1 + 4) +
            (ulonglong)*(ushort *)(param_1 + (ulonglong)*(uint *)(param_1 + 4)) * 6;
    puVar8 = (ushort *)(lVar7 + 2);
    local_11c = uVar11;
    if (uVar13 == *puVar4) {
      if ((uVar6 & 0x1f) != 0) {
        local_148 = param_6;
        local_150 = param_5;
        local_158 = local_138;
        cVar1 = FUN_1425d8cc0(param_1,puVar4,uVar6,uVar13 << 5 | 0x1f);
        if (cVar1 == '\0') goto LAB_1425d8947;
        puVar4 = puVar4 + 3;
      }
    }
    else if ((((*puVar4 < uVar13) && (puVar4 = puVar4 + 3, puVar4 < puVar8)) && (param_6 == 2)) &&
            (uVar13 < *puVar4)) {
      uVar12 = (uint)*puVar4 << 5;
      if ((int)uVar15 <= (int)uVar12) {
        uVar12 = uVar15;
      }
      if (local_138 != (code *)0x0) {
        local_128 = CONCAT44(local_128._4_4_,uVar11) & 0xffffffff0000ffff;
        local_12c = uVar10;
        if ((int)uVar14 < (int)uVar12) {
          do {
            uVar2 = FUN_1425d7b00(uVar6,local_118,200);
            local_118[uVar2] = 0;
            if (uVar2 != 0) {
              local_158 = (code *)CONCAT44(local_158._4_4_,(uint)uVar2);
              cVar1 = (*local_138)(param_5,uVar6,2,local_118);
              if (cVar1 == '\0') goto LAB_1425d8947;
            }
            uVar13 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar13;
          } while (uVar12 != uVar13);
        }
        uVar3 = (uint)local_128;
        uVar10 = local_12c;
      }
    }
    if (puVar4 < puVar8) {
      uVar2 = *puVar4;
      uVar12 = (uint)uVar2;
      local_12c = uVar10;
      if (uVar2 < uVar3) {
        local_128._4_4_ = (undefined4)(local_128 >> 0x20);
        local_128 = CONCAT44(local_128._4_4_,uVar3);
        puVar5 = puVar4;
        do {
          uVar14 = uVar12 * 0x20;
          local_150 = param_5;
          local_158 = local_138;
          local_148 = param_6;
          cVar1 = FUN_1425d8cc0(param_1,puVar5,uVar14,uVar14 + 0x1f);
          if (cVar1 == '\0') goto LAB_1425d8947;
          puVar4 = puVar5 + 3;
          if (puVar8 <= puVar4) goto LAB_1425d88ad;
          if (param_6 == 2) {
            if (*puVar5 + 1 < (uint)puVar5[3]) {
              uVar12 = (uint)puVar5[3] << 5;
              if ((int)uVar15 <= (int)uVar12) {
                uVar12 = uVar15;
              }
              if (local_138 != (code *)0x0) {
                uVar13 = (uint)*puVar5 * 0x20 + 0x20;
                if ((int)uVar13 < (int)uVar12) {
                  do {
                    uVar2 = FUN_1425d7b00(uVar13,local_118,200);
                    local_118[uVar2] = 0;
                    if (uVar2 != 0) {
                      local_158 = (code *)CONCAT44(local_158._4_4_,(uint)uVar2);
                      cVar1 = (*local_138)(param_5,uVar13,2,local_118);
                      if (cVar1 == '\0') goto LAB_1425d8947;
                    }
                    uVar13 = uVar13 + 1;
                  } while (uVar12 != uVar13);
                }
              }
            }
          }
          if (puVar8 <= puVar4) goto LAB_1425d88ad;
          uVar2 = *puVar4;
          uVar12 = (uint)uVar2;
          puVar5 = puVar4;
        } while (uVar12 < (uint)local_128);
      }
      if (uVar2 == (ushort)local_11c) {
        uVar6 = (ulonglong)(local_12c & 0xffffffe0);
        local_148 = param_6;
        goto LAB_1425d889e;
      }
    }
LAB_1425d88ad:
    if ((param_6 != 2) || (puVar4 != puVar8)) goto LAB_1425d8947;
    uVar12 = (uint)*(ushort *)(lVar7 + -4) * 0x20 + 0x20;
    if ((int)uVar12 <= (int)uVar14) {
      uVar12 = uVar14;
    }
    uVar6 = (ulonglong)uVar12;
  }
  uVar12 = 0x110000;
  if ((int)uVar15 < 0x110000) {
    uVar12 = uVar15;
  }
  if ((local_138 != (code *)0x0) && ((int)uVar6 < (int)uVar12)) {
    do {
      uVar2 = FUN_1425d7b00(uVar6,local_118,200);
      local_118[uVar2] = 0;
      if (uVar2 != 0) {
        local_158 = (code *)CONCAT44(local_158._4_4_,(uint)uVar2);
        cVar1 = (*local_138)(param_5,uVar6,2,local_118);
        if (cVar1 == '\0') break;
      }
      uVar15 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar15;
    } while (uVar12 != uVar15);
  }
LAB_1425d8947:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_178);
}



// FUNCTION 1425d89f0 FUN_1425d89f0 body=78 status=ok
// SIG undefined FUN_1425d89f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1425d89f0(void)

{
  undefined4 uVar1;
  
  if (DAT_14c7fbee0 != 0) {
    FUN_142532330();
    DAT_14c7fbee0 = 0;
  }
  uVar1 = DAT_14c7fbee8;
  if (DAT_14c7fbeb0 != 0) {
    DAT_14c7fbeb0 = 0;
  }
  LOCK();
  DAT_14c7fbee8 = 0;
  UNLOCK();
  _DAT_14c7fbeb8 = 0;
  return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
}



// FUNCTION 1425d8a40 FUN_1425d8a40 body=596 status=ok
// SIG undefined FUN_1425d8a40(void)

int FUN_1425d8a40(uint *param_1,byte *param_2,short param_3,uint param_4,byte *param_5,short param_6
                 )

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  short sVar6;
  byte bVar7;
  ushort uVar8;
  byte *pbVar9;
  bool bVar10;
  
  uVar1 = (ushort)param_1[4];
  if ((param_4 & 0xfffffffd) != 0) {
    uVar4 = param_4;
    if ((uVar1 < 0x3c) || ((short)param_1[0x22] == -1)) {
      do {
        if (param_3 == 0) {
          sVar6 = 0;
        }
        else {
          do {
            sVar6 = param_3 + -1;
            bVar7 = *param_2;
            param_2 = param_2 + 1;
            if (bVar7 == 0x3b) break;
            bVar10 = param_3 != 1;
            param_3 = sVar6;
          } while (bVar10);
        }
        param_3 = sVar6;
        bVar10 = 1 < (int)uVar4;
        uVar4 = uVar4 - 1;
      } while (bVar10);
    }
    else {
      param_3 = 0;
    }
  }
  if (param_3 == 0) {
LAB_1425d8c96:
    iVar5 = 0;
  }
  else {
    uVar4 = *param_1;
    iVar5 = 0;
    do {
      sVar6 = param_3 + -1;
      pbVar9 = param_2 + 1;
      bVar7 = *param_2;
      if (bVar7 < uVar1) {
        uVar8 = *(ushort *)((longlong)param_1 + (ulonglong)bVar7 * 2 + 0x12);
        if (uVar8 == 0xfffe) {
          uVar8 = *(ushort *)
                   ((longlong)param_1 + (ulonglong)param_2[1] * 2 + (ulonglong)bVar7 * 0x200 + 0x12)
          ;
          sVar6 = param_3 + -2;
          pbVar9 = param_2 + 2;
        }
        param_2 = pbVar9;
        if (uVar8 == 0xffff) {
          if (bVar7 != 0x3b) goto joined_r0x0001425d8aeb;
          if ((param_4 == 2) && ((short)iVar5 == 0)) {
            pbVar9 = param_2;
            if ((short)param_1[0x22] == -1) {
              do {
                if (sVar6 == 0) {
                  iVar5 = 0;
                  goto joined_r0x0001425d8c9c;
                }
                param_2 = pbVar9 + 1;
                bVar7 = *pbVar9;
                if (uVar1 <= bVar7) {
                  iVar5 = 0;
                  pbVar9 = param_2;
                  sVar6 = sVar6 + -1;
                  goto joined_r0x0001425d8bca;
                }
                uVar8 = *(ushort *)((longlong)param_1 + (ulonglong)bVar7 * 2 + 0x12);
                sVar2 = sVar6 + -1;
                if (uVar8 == 0xfffe) {
                  param_2 = pbVar9 + 2;
                  uVar8 = *(ushort *)
                           ((longlong)param_1 +
                           (ulonglong)bVar7 * 0x200 + (ulonglong)pbVar9[1] * 2 + 0x12);
                  sVar2 = sVar6 + -2;
                }
                sVar6 = sVar2;
                if (uVar8 != 0xffff) {
                  iVar5 = 0;
                  goto LAB_1425d8b6e;
                }
                pbVar9 = param_2;
              } while (bVar7 == 0x3b);
              iVar5 = 0;
              iVar3 = 0;
              if (param_6 == 0) goto LAB_1425d8bda;
              goto LAB_1425d8b00;
            }
            goto LAB_1425d8c96;
          }
          break;
        }
LAB_1425d8b6e:
        bVar7 = *(byte *)((longlong)param_1 + (ulonglong)uVar8 + (ulonglong)uVar4);
        param_3 = sVar6;
        if (bVar7 != 0) {
          pbVar9 = (byte *)((longlong)param_1 + (ulonglong)uVar8 + (ulonglong)uVar4 + 1);
          do {
            if (param_6 == 0) {
              param_6 = 0;
            }
            else {
              *param_5 = bVar7;
              param_5 = param_5 + 1;
              param_6 = param_6 + -1;
            }
            iVar5 = iVar5 + 1;
            bVar7 = *pbVar9;
            pbVar9 = pbVar9 + 1;
          } while (bVar7 != 0);
        }
      }
      else {
joined_r0x0001425d8bca:
        param_2 = pbVar9;
        if (bVar7 == 0x3b) break;
joined_r0x0001425d8aeb:
        iVar3 = iVar5;
        if (param_6 == 0) {
LAB_1425d8bda:
          iVar5 = iVar3;
          param_6 = 0;
        }
        else {
LAB_1425d8b00:
          *param_5 = bVar7;
          param_5 = param_5 + 1;
          param_6 = param_6 + -1;
        }
        iVar5 = iVar5 + 1;
        param_3 = sVar6;
      }
    } while (param_3 != 0);
  }
joined_r0x0001425d8c9c:
  if (param_6 != 0) {
    *param_5 = 0;
  }
  return iVar5;
}



// FUNCTION 1425d8cc0 FUN_1425d8cc0 body=903 status=ok
// SIG undefined FUN_1425d8cc0(void)

void FUN_1425d8cc0(uint *param_1,longlong param_2,uint param_3,uint param_4,code *param_5,
                  undefined8 *param_6,uint param_7)

{
  byte bVar1;
  byte *pbVar2;
  char cVar3;
  ushort uVar4;
  ushort *puVar5;
  ushort *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  ushort uVar9;
  byte bVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  ushort uVar15;
  bool bVar16;
  undefined1 auStack_1f8 [32];
  undefined1 *local_1d8;
  undefined2 local_1d0;
  longlong local_1c0;
  undefined1 local_1b8 [208];
  ushort local_e8 [40];
  ushort local_98 [40];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  pbVar14 = (byte *)((longlong)param_1 +
                    ((longlong)(int)((uint)*(ushort *)(param_2 + 2) << 0x10) |
                    (ulonglong)*(ushort *)(param_2 + 4)) + (ulonglong)param_1[2]);
  puVar5 = local_e8;
  puVar6 = local_98;
  uVar9 = 0;
  uVar15 = 0;
  uVar4 = 0;
  do {
    bVar10 = *pbVar14;
    if (uVar9 < 0xc) {
      if (bVar10 < 0xc0) {
        uVar9 = (ushort)(bVar10 >> 4);
        goto LAB_1425d8dd7;
      }
      bVar10 = (bVar10 & 0x3f) + 0xc;
      *puVar6 = uVar15;
      puVar6 = puVar6 + 1;
      *puVar5 = (ushort)bVar10;
      puVar5 = puVar5 + 1;
      uVar15 = uVar15 + bVar10;
      uVar4 = uVar4 + 1;
      uVar9 = 0;
    }
    else {
      uVar9 = (uVar9 & 3) * 0x10 + (ushort)(bVar10 >> 4) + 0xc;
LAB_1425d8dd7:
      *puVar6 = uVar15;
      *puVar5 = uVar9;
      uVar15 = uVar9 + uVar15;
      uVar9 = bVar10 & 0xf;
      if ((bVar10 & 0xf) < 0xc) {
        puVar6[1] = uVar15;
        puVar6 = puVar6 + 2;
        puVar5[1] = uVar9;
        puVar5 = puVar5 + 2;
        uVar15 = uVar9 + uVar15;
        uVar4 = uVar4 + 2;
      }
      else {
        puVar6 = puVar6 + 1;
        puVar5 = puVar5 + 1;
        uVar4 = uVar4 + 1;
      }
    }
    pbVar14 = pbVar14 + 1;
  } while (uVar4 < 0x20);
  if (param_5 == (code *)0x0) {
    if ((int)param_3 <= (int)param_4) {
      pbVar2 = (byte *)*param_6;
      local_1c0 = (ulonglong)*param_1 + (longlong)param_1;
      do {
        pbVar8 = pbVar14 + local_98[param_3 & 0x1f];
        uVar4 = local_e8[param_3 & 0x1f];
        pbVar13 = pbVar2;
        if ((param_7 & 0xfffffffd) != 0) {
          uVar11 = param_7;
          if (((ushort)param_1[4] < 0x3c) || ((short)param_1[0x22] == -1)) {
            do {
              uVar15 = uVar4;
              if (uVar4 == 0) {
                uVar4 = 0;
              }
              else {
                do {
                  uVar4 = uVar15 - 1;
                  bVar10 = *pbVar8;
                  pbVar8 = pbVar8 + 1;
                  if (bVar10 == 0x3b) break;
                  bVar16 = uVar15 != 1;
                  uVar15 = uVar4;
                } while (bVar16);
              }
              bVar16 = 1 < (int)uVar11;
              uVar11 = uVar11 - 1;
            } while (bVar16);
          }
          else {
            uVar4 = 0;
          }
        }
LAB_1425d8fa6:
        do {
          pbVar7 = pbVar8;
LAB_1425d8fc0:
          pbVar12 = pbVar13;
          if (uVar4 == 0) goto LAB_1425d8f03;
          pbVar8 = pbVar7 + 1;
          bVar10 = *pbVar7;
          if ((ushort)bVar10 < (ushort)param_1[4]) {
            uVar15 = *(ushort *)((longlong)param_1 + (ulonglong)bVar10 * 2 + 0x12);
            uVar9 = uVar4 - 1;
            if (uVar15 == 0xfffe) {
              pbVar8 = pbVar7 + 2;
              uVar15 = *(ushort *)
                        ((longlong)param_1 +
                        (ulonglong)bVar10 * 0x200 + (ulonglong)pbVar7[1] * 2 + 0x12);
              uVar9 = uVar4 - 2;
            }
            uVar4 = uVar9;
            if (uVar15 != 0xffff) {
              pbVar7 = (byte *)((ulonglong)uVar15 + local_1c0);
              goto LAB_1425d9070;
            }
            if (bVar10 == 0x3b) goto code_r0x0001425d901c;
          }
          else {
            uVar4 = uVar4 - 1;
            if (bVar10 == 0x3b) goto LAB_1425d8f03;
          }
          bVar1 = *pbVar13;
          pbVar13 = pbVar13 + 1;
        } while (bVar10 == bVar1);
LAB_1425d8f0d:
        bVar16 = param_3 != param_4;
        param_3 = param_3 + 1;
      } while (bVar16);
    }
    goto LAB_1425d8eb5;
  }
  if ((int)param_3 <= (int)param_4) {
    do {
      local_1d0 = 200;
      local_1d8 = local_1b8;
      uVar4 = FUN_1425d8a40(param_1,pbVar14 + local_98[param_3 & 0x1f],local_e8[param_3 & 0x1f],
                            param_7);
      if ((param_7 == 2) && (uVar4 == 0)) {
        uVar4 = FUN_1425d7b00(param_3,local_1b8,200);
        local_1b8[uVar4] = 0;
      }
      if (uVar4 != 0) {
        local_1d8 = (undefined1 *)CONCAT44(local_1d8._4_4_,(uint)uVar4);
        cVar3 = (*param_5)(param_6,param_3,param_7,local_1b8);
        if (cVar3 == '\0') break;
      }
      param_3 = param_3 + 1;
    } while (param_4 + 1 != param_3);
  }
LAB_1425d8eb5:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_1f8);
LAB_1425d9070:
  bVar10 = *pbVar7;
  if (bVar10 == 0) goto LAB_1425d8fa6;
  pbVar7 = pbVar7 + 1;
  bVar1 = *pbVar13;
  pbVar13 = pbVar13 + 1;
  if (bVar10 != bVar1) goto LAB_1425d8f0d;
  goto LAB_1425d9070;
code_r0x0001425d901c:
  if ((pbVar13 != pbVar2 || param_7 != 2) ||
     (pbVar12 = pbVar2, pbVar7 = pbVar8, (short)param_1[0x22] != -1)) {
LAB_1425d8f03:
    if (*pbVar12 != 0) goto LAB_1425d8f0d;
    *(uint *)(param_6 + 1) = param_3;
    goto LAB_1425d8eb5;
  }
  goto LAB_1425d8fc0;
}



// FUNCTION 1425d90b0 FUN_1425d90b0 body=32 status=ok
// SIG undefined FUN_1425d90b0(void)

undefined8 * FUN_1425d90b0(undefined8 *param_1)

{
  FUN_1424b7280();
  *param_1 = icu_64::BasicTimeZone::vftable;
  return param_1;
}



// FUNCTION 1425d90d0 FUN_1425d90d0 body=32 status=ok
// SIG undefined FUN_1425d90d0(void)

undefined8 * FUN_1425d90d0(undefined8 *param_1)

{
  FUN_1424b7310();
  *param_1 = icu_64::BasicTimeZone::vftable;
  return param_1;
}



// FUNCTION 1425d90f0 thunk_FUN_1424b72e0 body=5 status=ok
// SIG undefined thunk_FUN_1424b72e0(void)

void thunk_FUN_1424b72e0(undefined8 *param_1)

{
  *param_1 = icu_64::TimeZone::vftable;
  FUN_140859a90(param_1 + 1);
  FUN_1424b70d0(param_1);
  return;
}



// FUNCTION 1425d9100 FUN_1425d9100 body=1171 status=ok
// SIG undefined FUN_1425d9100(void)

ulonglong FUN_1425d9100(longlong *param_1,longlong *param_2,undefined8 param_3,double param_4,
                       char param_5,int *param_6)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 unaff_RBX;
  ulonglong uVar8;
  bool bVar9;
  double dVar10;
  double dVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 local_c8 [32];
  undefined1 local_a8 [36];
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  char local_72;
  char local_71;
  undefined8 local_70;
  
  local_70 = 0xfffffffffffffffe;
  if (*param_6 < 1) {
    uVar12 = (undefined4)param_3;
    uVar13 = (undefined4)((ulonglong)param_3 >> 0x20);
    cVar1 = (**(code **)(*param_1 + 0x50))();
    uVar8 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    if (cVar1 != '\0') goto LAB_1425d91ab;
    uVar8 = 0;
    (**(code **)(*param_1 + 0x18))(param_1,param_3,0,&local_84,&local_7c,param_6);
    if (0 < *param_6) goto LAB_1425d91ab;
    uVar8 = 0;
    (**(code **)(*param_2 + 0x18))(param_2,param_3,0,&local_80,&local_78,param_6);
    if (0 < *param_6) goto LAB_1425d91ab;
    if (param_5 == '\0') {
      if ((local_84 == local_80) && (local_7c == local_78)) goto LAB_1425d921c;
    }
    else if (((local_84 + local_7c == local_80 + local_78) && ((local_7c == 0 || (local_78 != 0))))
            && ((local_7c != 0 || (local_78 == 0)))) {
LAB_1425d921c:
      FUN_14257c0f0(local_c8);
      FUN_14257c0f0(local_a8);
      do {
        local_72 = (**(code **)(*param_1 + 0x68))(param_1,CONCAT44(uVar13,uVar12),0,local_c8);
        local_71 = (**(code **)(*param_2 + 0x68))(param_2,CONCAT44(uVar13,uVar12),0,local_a8);
        if (param_5 != '\0') {
          while ((local_72 != '\0' && (dVar10 = (double)FUN_14257c2c0(local_c8), dVar10 <= param_4))
                ) {
            uVar7 = FUN_14257c2e0(local_c8);
            iVar3 = FUN_1425da430(uVar7);
            uVar7 = FUN_14257c2e0(local_c8);
            iVar4 = FUN_1425da440(uVar7);
            uVar7 = FUN_14257c2d0(local_c8);
            iVar5 = FUN_1425da430(uVar7);
            uVar7 = FUN_14257c2d0(local_c8);
            iVar6 = FUN_1425da440(uVar7);
            if (iVar4 + iVar3 != iVar6 + iVar5) break;
            uVar7 = FUN_14257c2e0(local_c8);
            iVar3 = FUN_1425da440(uVar7);
            if (iVar3 == 0) break;
            uVar7 = FUN_14257c2d0(local_c8);
            iVar3 = FUN_1425da440(uVar7);
            if (iVar3 == 0) break;
            uVar7 = FUN_14257c2c0(local_c8);
            (**(code **)(*param_1 + 0x68))(param_1,uVar7,0,local_c8);
          }
          do {
            if ((local_71 == '\0') || (dVar10 = (double)FUN_14257c2c0(local_a8), param_4 < dVar10))
            break;
            uVar7 = FUN_14257c2e0(local_a8);
            iVar3 = FUN_1425da430(uVar7);
            uVar7 = FUN_14257c2e0(local_a8);
            iVar4 = FUN_1425da440(uVar7);
            uVar7 = FUN_14257c2d0(local_a8);
            iVar5 = FUN_1425da430(uVar7);
            uVar7 = FUN_14257c2d0(local_a8);
            iVar6 = FUN_1425da440(uVar7);
            if (iVar4 + iVar3 != iVar6 + iVar5) break;
            uVar7 = FUN_14257c2e0(local_a8);
            iVar3 = FUN_1425da440(uVar7);
            if (iVar3 == 0) break;
            uVar7 = FUN_14257c2d0(local_a8);
            iVar3 = FUN_1425da440(uVar7);
            if (iVar3 == 0) break;
            uVar7 = FUN_14257c2c0(local_a8);
            (**(code **)(*param_2 + 0x68))(param_2,uVar7,0,local_a8);
          } while( true );
        }
        if (local_72 == '\0') {
          bVar9 = false;
        }
        else {
          dVar10 = (double)FUN_14257c2c0(local_c8);
          bVar9 = dVar10 <= param_4;
        }
        if (local_71 == '\0') {
          bVar2 = false;
        }
        else {
          dVar10 = (double)FUN_14257c2c0(local_a8);
          bVar2 = dVar10 <= param_4;
        }
        if (!(bool)(bVar9 | bVar2)) {
          uVar8 = CONCAT71((int7)((ulonglong)local_c8 >> 8),1);
          goto LAB_1425d957c;
        }
        if (!(bool)(bVar9 & bVar2)) goto LAB_1425d9576;
        dVar10 = (double)FUN_14257c2c0(local_c8);
        dVar11 = (double)FUN_14257c2c0(local_a8);
        if ((dVar10 != dVar11) || (NAN(dVar10) || NAN(dVar11))) goto LAB_1425d9576;
        if (param_5 == '\0') {
          uVar7 = FUN_14257c2d0(local_c8);
          iVar3 = FUN_1425da430(uVar7);
          uVar7 = FUN_14257c2d0(local_a8);
          iVar4 = FUN_1425da430(uVar7);
          if (iVar3 != iVar4) goto LAB_1425d9576;
          uVar7 = FUN_14257c2d0(local_c8);
          iVar3 = FUN_1425da440(uVar7);
          uVar7 = FUN_14257c2d0(local_a8);
          iVar4 = FUN_1425da440(uVar7);
          if (iVar3 != iVar4) goto LAB_1425d9576;
        }
        else {
          uVar7 = FUN_14257c2d0(local_c8);
          iVar3 = FUN_1425da430(uVar7);
          uVar7 = FUN_14257c2d0(local_c8);
          iVar4 = FUN_1425da440(uVar7);
          uVar7 = FUN_14257c2d0(local_a8);
          iVar5 = FUN_1425da430(uVar7);
          uVar7 = FUN_14257c2d0(local_a8);
          iVar6 = FUN_1425da440(uVar7);
          if (iVar4 + iVar3 != iVar6 + iVar5) goto LAB_1425d9576;
          uVar7 = FUN_14257c2d0(local_c8);
          iVar3 = FUN_1425da440(uVar7);
          if (iVar3 != 0) {
            uVar7 = FUN_14257c2d0(local_a8);
            iVar3 = FUN_1425da440(uVar7);
            if (iVar3 == 0) goto LAB_1425d9576;
          }
          uVar7 = FUN_14257c2d0(local_c8);
          iVar3 = FUN_1425da440(uVar7);
          if (iVar3 == 0) {
            uVar7 = FUN_14257c2d0(local_a8);
            iVar3 = FUN_1425da440(uVar7);
            if (iVar3 != 0) goto LAB_1425d9576;
          }
        }
        uVar7 = FUN_14257c2c0(local_c8);
        uVar12 = (undefined4)uVar7;
        uVar13 = (undefined4)((ulonglong)uVar7 >> 0x20);
      } while( true );
    }
  }
  uVar8 = 0;
LAB_1425d91ab:
  return uVar8 & 0xffffffff;
LAB_1425d9576:
  uVar8 = 0;
LAB_1425d957c:
  FUN_14257c110(local_a8);
  FUN_14257c110(local_c8);
  goto LAB_1425d91ab;
}



// FUNCTION 1425d95a0 Unwind@1425d95a0 body=78 status=ok
// SIG undefined Unwind@1425d95a0(void)

void Unwind_1425d95a0(undefined8 param_1,longlong param_2)

{
  FUN_14257c110(param_2 + 0x50);
  return;
}



// FUNCTION 1425d95f0 Unwind@1425d95f0 body=76 status=ok
// SIG undefined Unwind@1425d95f0(void)

void Unwind_1425d95f0(undefined8 param_1,longlong param_2)

{
  FUN_14257c110(param_2 + 0x30);
  return;
}



// FUNCTION 1425d9640 FUN_1425d9640 body=2369 status=ok
// SIG undefined FUN_1425d9640(void)

void FUN_1425d9640(longlong *param_1,double param_2,ulonglong *param_3,undefined8 *param_4,
                  undefined8 *param_5,int *param_6)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  double dVar12;
  double dVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined1 *puVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  undefined **local_170;
  undefined2 local_168;
  undefined **local_130;
  undefined2 local_128;
  double local_f0;
  undefined1 local_e4 [4];
  undefined4 *local_e0;
  ulonglong local_d8;
  uint local_d0;
  undefined4 local_cc;
  undefined1 local_c8 [36];
  uint local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong *local_98;
  int local_90;
  undefined4 local_8c;
  undefined8 *local_88;
  undefined8 local_80;
  
  local_80 = 0xfffffffffffffffe;
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = 0;
  if (0 < *param_6) {
    return;
  }
  local_170 = &PTR_FUN_149e18960;
  local_168 = 2;
  local_130 = &PTR_FUN_149e18960;
  local_128 = 2;
  FUN_14257c0f0(local_c8);
  cVar1 = (**(code **)(*param_1 + 0x68))(param_1,param_2,0,local_c8);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*param_1 + 0x70))(param_1,param_2,1,local_c8);
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 0x18))(param_1,param_2,0,&local_d0,&local_cc,param_6);
      if (0 < *param_6) goto LAB_1425d9f3c;
    }
    else {
      uVar9 = FUN_14257c2d0(local_c8);
      FUN_1425da410(uVar9,&local_170);
      uVar9 = FUN_14257c2d0(local_c8);
      local_d0 = FUN_1425da430(uVar9);
      uVar9 = FUN_14257c2d0(local_c8);
      local_cc = FUN_1425da440(uVar9);
    }
    goto LAB_1425d9ed4;
  }
  uVar9 = FUN_14257c2e0(local_c8);
  FUN_1425da410(uVar9,&local_170);
  uVar9 = FUN_14257c2e0(local_c8);
  uVar2 = FUN_1425da430(uVar9);
  local_d0 = uVar2;
  uVar9 = FUN_14257c2e0(local_c8);
  local_cc = FUN_1425da440(uVar9);
  local_d8 = CONCAT44(local_d8._4_4_,local_cc);
  dVar12 = (double)FUN_14257c2c0(local_c8);
  uVar9 = FUN_14257c2e0(local_c8);
  iVar3 = FUN_1425da440(uVar9);
  if (iVar3 == 0) {
    uVar9 = FUN_14257c2d0(local_c8);
    iVar3 = FUN_1425da440(uVar9);
    if (iVar3 == 0) goto LAB_1425d9764;
    if (param_2 + 31536000000.0 <= dVar12) goto LAB_1425d9ed4;
LAB_1425d984d:
    puVar15 = &local_9c;
    puVar16 = local_e4;
    puVar14 = &local_a0;
    FUN_142501130((double)(int)local_d8 + (double)(int)uVar2 + dVar12,&local_90,&local_8c,&local_a4,
                  puVar14,puVar16,puVar15);
    uVar7 = (undefined4)((ulonglong)puVar15 >> 0x20);
    uVar8 = (undefined4)((ulonglong)puVar14 >> 0x20);
    uVar4 = FUN_142501250(local_90,local_8c,local_a4);
    local_98 = (longlong *)thunk_FUN_1424da030(0x28);
    uVar18 = (undefined4)((ulonglong)puVar16 >> 0x20);
    if (local_98 != (longlong *)0x0) {
      uVar17 = (ulonglong)puVar16 & 0xffffffff00000000;
      FUN_1425db700(local_98,local_8c,uVar4,local_a0,CONCAT44(uVar8,local_9c),uVar17);
      uVar18 = (undefined4)(uVar17 >> 0x20);
    }
    plVar11 = local_98;
    uVar9 = FUN_14257c2d0(local_c8);
    FUN_1425da410(uVar9,&local_130);
    local_88 = (undefined8 *)thunk_FUN_1424da030(0x60);
    iVar3 = local_90;
    if (local_88 != (undefined8 *)0x0) {
      uVar9 = FUN_14257c2d0(local_c8);
      uVar4 = FUN_1425da440(uVar9);
      FUN_1425da730(local_88,&local_130,uVar2,uVar4,plVar11,CONCAT44(uVar18,iVar3),
                    CONCAT44(uVar7,0x7fffffff));
    }
    uVar9 = FUN_14257c2d0(local_c8);
    uVar5 = FUN_1425da430(uVar9);
    if ((uVar5 != uVar2) ||
       (cVar1 = (**(code **)(*param_1 + 0x68))(param_1,dVar12,0,local_c8), cVar1 == '\0')) {
LAB_1425d9c5b:
      cVar1 = (**(code **)(*param_1 + 0x70))(param_1,param_2,1,local_c8);
      if (cVar1 != '\0') {
        uVar9 = FUN_14257c2e0(local_c8);
        iVar3 = FUN_1425da440(uVar9);
        if (iVar3 == 0) {
          uVar9 = FUN_14257c2d0(local_c8);
          iVar3 = FUN_1425da440(uVar9);
          if (iVar3 == 0) goto LAB_1425d9c8c;
LAB_1425d9cd5:
          dVar13 = (double)FUN_14257c2c0(local_c8);
          uVar9 = FUN_14257c2e0(local_c8);
          iVar3 = FUN_1425da430(uVar9);
          uVar9 = FUN_14257c2e0(local_c8);
          iVar6 = FUN_1425da440(uVar9);
          puVar15 = &local_9c;
          puVar16 = local_e4;
          puVar14 = &local_a0;
          FUN_142501130((double)iVar6 + dVar13 + (double)iVar3,&local_90,&local_8c,&local_a4,puVar14
                        ,puVar16,puVar15);
          uVar18 = (undefined4)((ulonglong)puVar15 >> 0x20);
          uVar4 = FUN_142501250(local_90,local_8c,local_a4);
          local_e0 = (undefined4 *)thunk_FUN_1424da030(0x28);
          uVar8 = (undefined4)((ulonglong)puVar16 >> 0x20);
          if (local_e0 != (undefined4 *)0x0) {
            puVar14 = (undefined4 *)CONCAT44((int)((ulonglong)puVar14 >> 0x20),local_9c);
            uVar17 = (ulonglong)puVar16 & 0xffffffff00000000;
            FUN_1425db700(local_e0,local_8c,uVar4,local_a0,puVar14,uVar17);
            uVar8 = (undefined4)(uVar17 >> 0x20);
          }
          puVar15 = local_e0;
          uVar9 = FUN_14257c2d0(local_c8);
          FUN_1425da410(uVar9,&local_130);
          local_98 = (longlong *)thunk_FUN_1424da030(0x60);
          if (local_98 != (longlong *)0x0) {
            iVar3 = FUN_1425da9c0(local_88);
            FUN_1425da730(local_98,&local_130,uVar2,local_d8 & 0xffffffff,puVar15,
                          CONCAT44(uVar8,iVar3 + -1),CONCAT44(uVar18,0x7fffffff));
            puVar14 = puVar15;
          }
          uVar9 = FUN_14257c2e0(local_c8);
          uVar4 = FUN_1425da440(uVar9);
          uVar9 = FUN_14257c2e0(local_c8);
          uVar8 = FUN_1425da430(uVar9);
          cVar1 = (**(code **)(*local_98 + 0x40))
                            (local_98,param_2,uVar8,uVar4,(ulonglong)puVar14 & 0xffffffffffffff00,
                             &local_f0);
          if ((cVar1 != '\0') && (dVar12 < local_f0)) goto LAB_1425d9e73;
          (**(code **)*local_98)(local_98,1);
        }
        else {
LAB_1425d9c8c:
          uVar9 = FUN_14257c2e0(local_c8);
          iVar3 = FUN_1425da440(uVar9);
          if (iVar3 != 0) {
            uVar9 = FUN_14257c2d0(local_c8);
            iVar3 = FUN_1425da440(uVar9);
            if (iVar3 == 0) goto LAB_1425d9cd5;
          }
        }
      }
      if (local_88 != (undefined8 *)0x0) {
        (**(code **)*local_88)(local_88,1);
      }
      goto LAB_1425d9ed4;
    }
    uVar9 = FUN_14257c2e0(local_c8);
    iVar3 = FUN_1425da440(uVar9);
    if (iVar3 != 0) {
LAB_1425d99bc:
      uVar9 = FUN_14257c2e0(local_c8);
      iVar3 = FUN_1425da440(uVar9);
      if (iVar3 != 0) {
        uVar9 = FUN_14257c2d0(local_c8);
        iVar3 = FUN_1425da440(uVar9);
        if (iVar3 == 0) goto LAB_1425d9a38;
      }
      goto LAB_1425d9c5b;
    }
    uVar9 = FUN_14257c2d0(local_c8);
    iVar3 = FUN_1425da440(uVar9);
    if (iVar3 == 0) goto LAB_1425d99bc;
LAB_1425d9a38:
    dVar13 = (double)FUN_14257c2c0(local_c8);
    if (dVar12 + 31536000000.0 <= dVar13) goto LAB_1425d9c5b;
    dVar13 = (double)FUN_14257c2c0(local_c8);
    uVar9 = FUN_14257c2e0(local_c8);
    iVar3 = FUN_1425da430(uVar9);
    uVar9 = FUN_14257c2e0(local_c8);
    iVar6 = FUN_1425da440(uVar9);
    puVar15 = &local_9c;
    puVar16 = local_e4;
    FUN_142501130((double)iVar6 + dVar13 + (double)iVar3,&local_90,&local_8c,&local_a4,&local_a0,
                  puVar16,puVar15);
    uVar18 = (undefined4)((ulonglong)puVar15 >> 0x20);
    uVar4 = FUN_142501250(local_90,local_8c,local_a4);
    local_e0 = (undefined4 *)thunk_FUN_1424da030(0x28);
    uVar8 = (undefined4)((ulonglong)puVar16 >> 0x20);
    if (local_e0 != (undefined4 *)0x0) {
      uVar17 = (ulonglong)puVar16 & 0xffffffff00000000;
      FUN_1425db700(local_e0,local_8c,uVar4,local_a0,local_9c,uVar17);
      uVar8 = (undefined4)(uVar17 >> 0x20);
    }
    uVar9 = FUN_14257c2d0(local_c8);
    FUN_1425da410(uVar9,&local_130);
    local_98 = (longlong *)thunk_FUN_1424da030(0x60);
    iVar3 = local_90;
    if (local_98 != (longlong *)0x0) {
      uVar9 = FUN_14257c2d0(local_c8);
      uVar4 = FUN_1425da440(uVar9);
      uVar9 = FUN_14257c2d0(local_c8);
      uVar7 = FUN_1425da430(uVar9);
      FUN_1425da730(local_98,&local_130,uVar7,uVar4,local_e0,CONCAT44(uVar8,iVar3 + -1),
                    CONCAT44(uVar18,0x7fffffff));
    }
    uVar9 = FUN_14257c2e0(local_c8);
    uVar4 = FUN_1425da440(uVar9);
    uVar9 = FUN_14257c2e0(local_c8);
    uVar8 = FUN_1425da430(uVar9);
    cVar1 = (**(code **)(*local_98 + 0x48))(local_98,param_2,uVar8,uVar4,1,&local_f0);
    if ((cVar1 == '\0') || (param_2 < local_f0)) {
LAB_1425d9c4a:
      (**(code **)*local_98)(local_98,1);
      goto LAB_1425d9c5b;
    }
    uVar9 = FUN_14257c2d0(local_c8);
    uVar5 = FUN_1425da430(uVar9);
    if (uVar2 != uVar5) goto LAB_1425d9c4a;
    uVar9 = FUN_14257c2d0(local_c8);
    iVar3 = FUN_1425da440(uVar9);
    if ((int)local_d8 != iVar3) goto LAB_1425d9c4a;
LAB_1425d9e73:
    FUN_1425da410(local_88,&local_170);
    local_d0 = FUN_1425da430(local_88);
    local_cc = FUN_1425da440(local_88);
    plVar11 = local_98;
  }
  else {
LAB_1425d9764:
    uVar9 = FUN_14257c2e0(local_c8);
    iVar3 = FUN_1425da440(uVar9);
    if (iVar3 != 0) {
      uVar9 = FUN_14257c2d0(local_c8);
      iVar3 = FUN_1425da440(uVar9);
      plVar11 = (longlong *)0x0;
      if (dVar12 < param_2 + 31536000000.0) {
        local_88 = (undefined8 *)0x0;
        if (iVar3 == 0) goto LAB_1425d984d;
        goto LAB_1425d9edd;
      }
    }
LAB_1425d9ed4:
    plVar11 = (longlong *)0x0;
    local_88 = (undefined8 *)0x0;
  }
LAB_1425d9edd:
  local_d8 = thunk_FUN_1424da030(0x50);
  if (local_d8 != 0) {
    FUN_1425da4c0(local_d8,&local_170,local_d0,local_cc);
  }
  *param_3 = local_d8;
  if ((plVar11 != (longlong *)0x0) && (local_88 != (undefined8 *)0x0)) {
    iVar3 = FUN_1425da440();
    puVar10 = param_4;
    if (iVar3 == 0) {
      puVar10 = param_5;
      param_5 = param_4;
    }
    *param_5 = local_88;
    *puVar10 = plVar11;
  }
LAB_1425d9f3c:
  FUN_14257c110(local_c8);
  FUN_140859a90(&local_130);
  FUN_140859a90(&local_170);
  return;
}



// FUNCTION 1425d9f90 Unwind@1425d9f90 body=95 status=ok
// SIG undefined Unwind@1425d9f90(void)

void Unwind_1425d9f90(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x110));
  return;
}



// FUNCTION 1425d9ff0 Unwind@1425d9ff0 body=95 status=ok
// SIG undefined Unwind@1425d9ff0(void)

void Unwind_1425d9ff0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x120));
  return;
}



// FUNCTION 1425da050 Unwind@1425da050 body=92 status=ok
// SIG undefined Unwind@1425da050(void)

void Unwind_1425da050(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 200));
  return;
}



// FUNCTION 1425da0b0 Unwind@1425da0b0 body=95 status=ok
// SIG undefined Unwind@1425da0b0(void)

void Unwind_1425da0b0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x110));
  return;
}



// FUNCTION 1425da110 Unwind@1425da110 body=92 status=ok
// SIG undefined Unwind@1425da110(void)

void Unwind_1425da110(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 200));
  return;
}



// FUNCTION 1425da170 Unwind@1425da170 body=95 status=ok
// SIG undefined Unwind@1425da170(void)

void Unwind_1425da170(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x110));
  return;
}



// FUNCTION 1425da1d0 Unwind@1425da1d0 body=92 status=ok
// SIG undefined Unwind@1425da1d0(void)

void Unwind_1425da1d0(undefined8 param_1,longlong param_2)

{
  FUN_14257c110(param_2 + 0xe0);
  return;
}



// FUNCTION 1425da230 Unwind@1425da230 body=98 status=ok
// SIG undefined Unwind@1425da230(void)

void Unwind_1425da230(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x78);
  FUN_140859a90(param_2 + 0x38);
  return;
}



// FUNCTION 1425da2a0 Unwind@1425da2a0 body=92 status=ok
// SIG undefined Unwind@1425da2a0(void)

void Unwind_1425da2a0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0xd0));
  return;
}



// FUNCTION 1425da300 FUN_1425da300 body=18 status=ok
// SIG undefined FUN_1425da300(void)

void FUN_1425da300(void)

{
  int *in_stack_00000038;
  
  if (0 < *in_stack_00000038) {
    return;
  }
  *in_stack_00000038 = 0x10;
  return;
}



// FUNCTION 1425da320 FUN_1425da320 body=2 status=ok
// SIG undefined FUN_1425da320(void)

void FUN_1425da320(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 1425da330 FUN_1425da330 body=179 status=ok
// SIG undefined FUN_1425da330(void)

bool FUN_1425da330(longlong param_1,longlong param_2)

{
  ushort uVar1;
  short sVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  
  if (param_1 == param_2) {
    bVar3 = true;
  }
  else {
    lVar6 = __RTtypeid();
    lVar7 = __RTtypeid(param_2);
    iVar5 = __std_type_info_compare(lVar6 + 8,lVar7 + 8);
    if (iVar5 == 0) {
      uVar1 = *(ushort *)(param_1 + 0x10);
      if ((uVar1 & 1) == 0) {
        if ((short)uVar1 < 0) {
          iVar5 = *(int *)(param_1 + 0x14);
        }
        else {
          iVar5 = (int)(short)uVar1 >> 5;
        }
        sVar2 = *(short *)(param_2 + 0x10);
        if (sVar2 < 0) {
          iVar8 = *(int *)(param_2 + 0x14);
        }
        else {
          iVar8 = (int)sVar2 >> 5;
        }
        if (((int)sVar2 & 1U) != 0) {
          return false;
        }
        if (iVar5 != iVar8) {
          return false;
        }
        bVar4 = FUN_1412ae090(param_1 + 8,param_2 + 8);
      }
      else {
        bVar4 = *(byte *)(param_2 + 0x10) & 1;
      }
      if ((bVar4 != 0) && (*(int *)(param_1 + 0x48) == *(int *)(param_2 + 0x48))) {
        return *(int *)(param_1 + 0x4c) == *(int *)(param_2 + 0x4c);
      }
    }
    bVar3 = false;
  }
  return bVar3;
}



// FUNCTION 1425da3f0 FUN_1425da3f0 body=20 status=ok
// SIG undefined FUN_1425da3f0(void)

bool FUN_1425da3f0(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x18))();
  return cVar1 == '\0';
}



// FUNCTION 1425da410 FUN_1425da410 body=29 status=ok
// SIG undefined FUN_1425da410(void)

undefined8 FUN_1425da410(longlong param_1,undefined8 param_2)

{
  FUN_1424a7c80(param_2,param_1 + 8);
  return param_2;
}



// FUNCTION 1425da430 FUN_1425da430 body=4 status=ok
// SIG undefined FUN_1425da430(void)

undefined4 FUN_1425da430(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}



// FUNCTION 1425da440 FUN_1425da440 body=4 status=ok
// SIG undefined FUN_1425da440(void)

undefined4 FUN_1425da440(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x4c);
}



// FUNCTION 1425da450 FUN_1425da450 body=87 status=ok
// SIG undefined FUN_1425da450(void)

bool FUN_1425da450(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  if (param_1 == param_2) {
    bVar4 = true;
  }
  else {
    lVar2 = __RTtypeid();
    lVar3 = __RTtypeid(param_2);
    iVar1 = __std_type_info_compare(lVar2 + 8,lVar3 + 8);
    if ((iVar1 == 0) && (*(int *)(param_1 + 0x48) == *(int *)(param_2 + 0x48))) {
      bVar4 = *(int *)(param_1 + 0x4c) == *(int *)(param_2 + 0x4c);
    }
    else {
      bVar4 = false;
    }
  }
  return bVar4;
}



// FUNCTION 1425da4b0 FUN_1425da4b0 body=8 status=ok
// SIG undefined FUN_1425da4b0(void)

undefined * FUN_1425da4b0(void)

{
  return &DAT_14c7fbef0;
}



// FUNCTION 1425da4c0 FUN_1425da4c0 body=77 status=ok
// SIG undefined FUN_1425da4c0(void)

void FUN_1425da4c0(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = icu_64::TimeZoneRule::vftable;
  FUN_1424a6be0(param_1 + 1);
  *(undefined4 *)(param_1 + 9) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x4c) = param_4;
  *param_1 = icu_64::InitialTimeZoneRule::vftable;
  return;
}



// FUNCTION 1425da510 Unwind@1425da510 body=34 status=ok
// SIG undefined Unwind@1425da510(void)

void Unwind_1425da510(undefined8 param_1,longlong param_2)

{
  FUN_1424b70d0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 1425da540 FUN_1425da540 body=100 status=ok
// SIG undefined FUN_1425da540(void)

void FUN_1425da540(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)thunk_FUN_1424da030(0x50);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = icu_64::TimeZoneRule::vftable;
    FUN_1424a6be0(puVar1 + 1,param_1 + 8);
    *(undefined4 *)(puVar1 + 9) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)((longlong)puVar1 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    *puVar1 = icu_64::InitialTimeZoneRule::vftable;
  }
  return;
}



// FUNCTION 1425da5b0 Unwind@1425da5b0 body=43 status=ok
// SIG undefined Unwind@1425da5b0(void)

void Unwind_1425da5b0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  FUN_1424b70d0(uVar1);
  FUN_1401773f0(uVar1);
  return;
}



// FUNCTION 1425da5e0 FUN_1425da5e0 body=86 status=ok
// SIG undefined FUN_1425da5e0(void)

undefined8 FUN_1425da5e0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (param_1 == param_2) {
    uVar4 = 1;
  }
  else {
    lVar2 = __RTtypeid();
    lVar3 = __RTtypeid(param_2);
    iVar1 = __std_type_info_compare(lVar2 + 8,lVar3 + 8);
    if (iVar1 == 0) {
      uVar4 = FUN_1425da330(param_1,param_2);
      return uVar4;
    }
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 1425da640 FUN_1425da640 body=20 status=ok
// SIG undefined FUN_1425da640(void)

bool FUN_1425da640(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x18))();
  return cVar1 == '\0';
}



// FUNCTION 1425da660 FUN_1425da660 body=128 status=ok
// SIG undefined FUN_1425da660(void)

ulonglong FUN_1425da660(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (param_1 != param_2) {
    lVar2 = __RTtypeid();
    lVar3 = __RTtypeid(param_2);
    iVar1 = __std_type_info_compare(lVar2 + 8,lVar3 + 8);
    if (iVar1 == 0) {
      lVar2 = __RTtypeid(param_1);
      lVar3 = __RTtypeid(param_2);
      iVar1 = __std_type_info_compare(lVar2 + 8,lVar3 + 8);
      if (((iVar1 == 0) && (*(int *)(param_1 + 0x48) == *(int *)(param_2 + 0x48))) &&
         (*(int *)(param_1 + 0x4c) == *(int *)(param_2 + 0x4c))) goto LAB_1425da6d4;
    }
    uVar4 = 0;
  }
LAB_1425da6d4:
  return uVar4 & 0xffffffff;
}



// FUNCTION 1425da6e0 FUN_1425da6e0 body=3 status=ok
// SIG undefined FUN_1425da6e0(void)

undefined8 FUN_1425da6e0(void)

{
  return 0;
}



// FUNCTION 1425da6f0 FUN_1425da6f0 body=3 status=ok
// SIG undefined FUN_1425da6f0(void)

undefined8 FUN_1425da6f0(void)

{
  return 0;
}



// FUNCTION 1425da700 FUN_1425da700 body=3 status=ok
// SIG undefined FUN_1425da700(void)

undefined8 FUN_1425da700(void)

{
  return 0;
}



// FUNCTION 1425da710 FUN_1425da710 body=3 status=ok
// SIG undefined FUN_1425da710(void)

undefined8 FUN_1425da710(void)

{
  return 0;
}



// FUNCTION 1425da720 FUN_1425da720 body=8 status=ok
// SIG undefined FUN_1425da720(void)

undefined * FUN_1425da720(void)

{
  return &DAT_14c7fbef1;
}



// FUNCTION 1425da730 FUN_1425da730 body=99 status=ok
// SIG undefined FUN_1425da730(void)

void FUN_1425da730(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  *param_1 = icu_64::TimeZoneRule::vftable;
  FUN_1424a6be0(param_1 + 1);
  *(undefined4 *)(param_1 + 9) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x4c) = param_4;
  *param_1 = icu_64::AnnualTimeZoneRule::vftable;
  param_1[10] = param_5;
  *(undefined4 *)(param_1 + 0xb) = param_6;
  *(undefined4 *)((longlong)param_1 + 0x5c) = param_7;
  return;
}



// FUNCTION 1425da7a0 Unwind@1425da7a0 body=34 status=ok
// SIG undefined Unwind@1425da7a0(void)

void Unwind_1425da7a0(undefined8 param_1,longlong param_2)

{
  FUN_1424b70d0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 1425da7d0 FUN_1425da7d0 body=142 status=ok
// SIG undefined FUN_1425da7d0(void)

void FUN_1425da7d0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  *param_1 = icu_64::TimeZoneRule::vftable;
  FUN_1424a6be0(param_1 + 1,param_2 + 8);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  *param_1 = icu_64::AnnualTimeZoneRule::vftable;
  lVar1 = thunk_FUN_1424da030(0x28);
  if (lVar1 != 0) {
    FUN_1425db790(lVar1,*(undefined8 *)(param_2 + 0x50));
  }
  param_1[10] = lVar1;
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
  return;
}



// FUNCTION 1425da860 Unwind@1425da860 body=63 status=ok
// SIG undefined Unwind@1425da860(void)

void Unwind_1425da860(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x30));
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  *puVar1 = icu_64::TimeZoneRule::vftable;
  FUN_140859a90(*(undefined8 *)(param_2 + 0x28));
  FUN_1424b70d0(puVar1);
  return;
}



// FUNCTION 1425da8a0 Unwind@1425da8a0 body=32 status=ok
// SIG undefined Unwind@1425da8a0(void)

void Unwind_1425da8a0(undefined8 param_1,longlong param_2)

{
  FUN_1424b70d0(*(undefined8 *)(param_2 + 0x38));
  return;
}



// FUNCTION 1425da8c0 FUN_1425da8c0 body=64 status=ok
// SIG undefined FUN_1425da8c0(void)

longlong FUN_1425da8c0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = thunk_FUN_1424da030(0x60);
  if (lVar1 != 0) {
    FUN_1425da7d0(lVar1,param_1);
  }
  return lVar1;
}



// FUNCTION 1425da900 Unwind@1425da900 body=32 status=ok
// SIG undefined Unwind@1425da900(void)

void Unwind_1425da900(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1425da920 FUN_1425da920 body=104 status=ok
// SIG undefined FUN_1425da920(void)

bool FUN_1425da920(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_1 == param_2) {
    bVar1 = true;
  }
  else {
    lVar4 = __RTtypeid();
    lVar5 = __RTtypeid(param_2);
    iVar3 = __std_type_info_compare(lVar4 + 8,lVar5 + 8);
    if (((iVar3 == 0) &&
        (cVar2 = FUN_1425db7d0(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_2 + 0x50)),
        cVar2 != '\0')) && (*(int *)(param_1 + 0x58) == *(int *)(param_2 + 0x58))) {
      return *(int *)(param_1 + 0x5c) == *(int *)(param_2 + 0x5c);
    }
    bVar1 = false;
  }
  return bVar1;
}



// FUNCTION 1425da990 FUN_1425da990 body=20 status=ok
// SIG undefined FUN_1425da990(void)

bool FUN_1425da990(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x18))();
  return cVar1 == '\0';
}



// FUNCTION 1425da9b0 FUN_1425da9b0 body=5 status=ok
// SIG undefined FUN_1425da9b0(void)

undefined8 FUN_1425da9b0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



// FUNCTION 1425da9c0 FUN_1425da9c0 body=4 status=ok
// SIG undefined FUN_1425da9c0(void)

undefined4 FUN_1425da9c0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x58);
}



// FUNCTION 1425da9d0 FUN_1425da9d0 body=4 status=ok
// SIG undefined FUN_1425da9d0(void)

undefined4 FUN_1425da9d0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x5c);
}



// FUNCTION 1425da9e0 FUN_1425da9e0 body=708 status=ok
// SIG undefined FUN_1425da9e0(void)

undefined8 FUN_1425da9e0(longlong param_1,uint param_2,int param_3,int param_4,double *param_5)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  double dVar10;
  
  if ((int)param_2 < *(int *)(param_1 + 0x58)) {
    return 0;
  }
  if (*(int *)(param_1 + 0x5c) < (int)param_2) {
    return 0;
  }
  iVar4 = FUN_1425db850(*(undefined8 *)(param_1 + 0x50));
  if (iVar4 == 1) {
    iVar4 = FUN_1425db8a0(*(undefined8 *)(param_1 + 0x50));
    iVar7 = FUN_1425db870();
    if (iVar4 < 1) {
      if (((param_2 & 3) != 0) ||
         ((uVar9 = 0xc, (param_2 * -0x3d70a3d7 + 0x51eb850 >> 2 | param_2 * 0x40000000) < 0x28f5c29
          && (param_2 != ((int)param_2 / 400) * 400)))) {
        uVar9 = 0;
      }
      cVar1 = (&DAT_1499d7ed0)[(longlong)iVar7 + (ulonglong)uVar9];
      uVar5 = FUN_1425db870(*(undefined8 *)(param_1 + 0x50));
      dVar10 = (double)FUN_142500e20(param_2,uVar5,(int)cVar1);
      dVar10 = (double)(iVar4 * 7 + 7) + dVar10;
      bVar3 = false;
    }
    else {
      dVar10 = (double)FUN_142500e20(param_2,iVar7,1);
      dVar10 = (double)(iVar4 * 7 + -7) + dVar10;
      bVar3 = true;
    }
  }
  else {
    if (iVar4 == 0) {
      uVar5 = FUN_1425db880(*(undefined8 *)(param_1 + 0x50));
      uVar6 = FUN_1425db870(*(undefined8 *)(param_1 + 0x50));
      dVar10 = (double)FUN_142500e20(param_2,uVar6,uVar5);
      goto LAB_1425dac1a;
    }
    iVar7 = FUN_1425db870(*(undefined8 *)(param_1 + 0x50));
    iVar8 = FUN_1425db880(*(undefined8 *)(param_1 + 0x50));
    bVar3 = true;
    if (((iVar4 == 3) && (bVar3 = false, iVar7 == 1)) && (iVar8 == 0x1d)) {
      if ((param_2 & 3) == 0) {
        iVar8 = 0x1d;
        bVar3 = false;
        if ((0x28f5c28 < (param_2 * -0x3d70a3d7 + 0x51eb850 >> 2 | param_2 * 0x40000000)) ||
           (bVar3 = false, param_2 == ((int)param_2 / 400) * 400)) goto LAB_1425dab2c;
      }
      iVar8 = 0x1c;
      bVar3 = false;
    }
LAB_1425dab2c:
    dVar10 = (double)FUN_142500e20(param_2,iVar7,iVar8);
  }
  iVar4 = FUN_1425011f0(dVar10);
  iVar7 = FUN_1425db890(*(undefined8 *)(param_1 + 0x50));
  iVar7 = iVar7 - iVar4;
  bVar2 = iVar7 < 0;
  iVar4 = 7;
  if (!bVar3) {
    bVar2 = 0 < iVar7;
    iVar4 = -7;
  }
  iVar8 = 0;
  if (bVar2) {
    iVar8 = iVar4;
  }
  dVar10 = (double)(iVar8 + iVar7) + dVar10;
LAB_1425dac1a:
  iVar4 = FUN_1425db8b0(*(undefined8 *)(param_1 + 0x50));
  *param_5 = dVar10 * 86400000.0 + (double)iVar4;
  iVar4 = FUN_1425db860(*(undefined8 *)(param_1 + 0x50));
  if (iVar4 != 2) {
    *param_5 = *param_5 - (double)param_3;
  }
  iVar4 = FUN_1425db860(*(undefined8 *)(param_1 + 0x50));
  if (iVar4 == 0) {
    *param_5 = *param_5 - (double)param_4;
  }
  return 1;
}



// FUNCTION 1425dacb0 FUN_1425dacb0 body=163 status=ok
// SIG undefined FUN_1425dacb0(void)

bool FUN_1425dacb0(longlong param_1,longlong param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_1 == param_2) {
    bVar2 = true;
  }
  else {
    lVar4 = __RTtypeid();
    lVar5 = __RTtypeid(param_2);
    iVar3 = __std_type_info_compare(lVar4 + 8,lVar5 + 8);
    if (iVar3 == 0) {
      lVar4 = __RTtypeid(param_1);
      lVar5 = __RTtypeid(param_2);
      iVar3 = __std_type_info_compare(lVar4 + 8,lVar5 + 8);
      if ((((iVar3 == 0) && (*(int *)(param_1 + 0x48) == *(int *)(param_2 + 0x48))) &&
          (*(int *)(param_1 + 0x4c) == *(int *)(param_2 + 0x4c))) &&
         ((cVar1 = FUN_1425db7d0(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_2 + 0x50)),
          cVar1 != '\0' && (*(int *)(param_1 + 0x58) == *(int *)(param_2 + 0x58))))) {
        return *(int *)(param_1 + 0x5c) == *(int *)(param_2 + 0x5c);
      }
    }
    bVar2 = false;
  }
  return bVar2;
}



// FUNCTION 1425dad60 FUN_1425dad60 body=32 status=ok
// SIG undefined FUN_1425dad60(void)

void FUN_1425dad60(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  FUN_1425da9e0(param_1,*(undefined4 *)(param_1 + 0x58),param_2,param_3,param_4);
  return;
}



// FUNCTION 1425dad80 FUN_1425dad80 body=44 status=ok
// SIG undefined FUN_1425dad80(void)

undefined8 FUN_1425dad80(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x5c) == 0x7fffffff) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1425da9e0(param_1,*(int *)(param_1 + 0x5c),param_2,param_3,param_4);
  }
  return uVar1;
}



// FUNCTION 1425dadb0 FUN_1425dadb0 body=246 status=ok
// SIG undefined FUN_1425dadb0(void)

void FUN_1425dadb0(longlong *param_1,double param_2,undefined4 param_3,undefined4 param_4,
                  char param_5,double *param_6)

{
  char cVar1;
  undefined1 auStack_98 [32];
  double *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  double local_60;
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  undefined8 local_50;
  undefined1 local_48 [4];
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = local_58;
  local_70 = local_54;
  local_78 = (double *)&local_50;
  FUN_142501130(param_2,&local_44,local_48,(longlong)&local_50 + 4);
  if (local_44 < (int)param_1[0xb]) {
    (**(code **)(*param_1 + 0x30))(param_1,param_3,param_4,param_6);
    goto LAB_1425dae99;
  }
  local_78 = &local_60;
  cVar1 = FUN_1425da9e0(param_1,local_44,param_3,param_4);
  if (cVar1 == '\0') goto LAB_1425dae99;
  if (local_60 < param_2) {
LAB_1425dae71:
    local_78 = param_6;
    FUN_1425da9e0(param_1,local_44 + 1,param_3,param_4);
  }
  else {
    if (param_5 == '\0') {
      if ((local_60 == param_2) && (!NAN(local_60) && !NAN(param_2))) goto LAB_1425dae71;
    }
    *param_6 = local_60;
  }
LAB_1425dae99:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_98);
}



// FUNCTION 1425daec0 FUN_1425daec0 body=246 status=ok
// SIG undefined FUN_1425daec0(void)

void FUN_1425daec0(longlong *param_1,double param_2,undefined4 param_3,undefined4 param_4,
                  char param_5,double *param_6)

{
  char cVar1;
  undefined1 auStack_98 [32];
  double *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  double local_60;
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  undefined8 local_50;
  undefined1 local_48 [4];
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = local_58;
  local_70 = local_54;
  local_78 = (double *)&local_50;
  FUN_142501130(param_2,&local_44,local_48,(longlong)&local_50 + 4);
  if (*(int *)((longlong)param_1 + 0x5c) < local_44) {
    (**(code **)(*param_1 + 0x38))(param_1,param_3,param_4,param_6);
    goto LAB_1425dafa9;
  }
  local_78 = &local_60;
  cVar1 = FUN_1425da9e0(param_1,local_44,param_3,param_4);
  if (cVar1 == '\0') goto LAB_1425dafa9;
  if (param_2 < local_60) {
LAB_1425daf81:
    local_78 = param_6;
    FUN_1425da9e0(param_1,local_44 + -1,param_3,param_4);
  }
  else {
    if (param_5 == '\0') {
      if ((local_60 == param_2) && (!NAN(local_60) && !NAN(param_2))) goto LAB_1425daf81;
    }
    *param_6 = local_60;
  }
LAB_1425dafa9:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_98);
}



// FUNCTION 1425dafd0 FUN_1425dafd0 body=8 status=ok
// SIG undefined FUN_1425dafd0(void)

undefined * FUN_1425dafd0(void)

{
  return &DAT_14c7fbef2;
}



// FUNCTION 1425dafe0 FUN_1425dafe0 body=123 status=ok
// SIG undefined FUN_1425dafe0(void)

undefined8 *
FUN_1425dafe0(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 local_2c;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  *param_1 = icu_64::TimeZoneRule::vftable;
  FUN_1424a6be0(param_1 + 1);
  *(undefined4 *)(param_1 + 9) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x4c) = param_4;
  *param_1 = icu_64::TimeArrayTimeZoneRule::vftable;
  *(undefined4 *)(param_1 + 10) = param_7;
  param_1[0xb] = 0;
  local_2c = 0;
  FUN_1425db090(param_1,param_5,param_6,&local_2c);
  return param_1;
}



// FUNCTION 1425db060 Unwind@1425db060 body=36 status=ok
// SIG undefined Unwind@1425db060(void)

void Unwind_1425db060(undefined8 param_1,longlong param_2)

{
  FUN_1424b70d0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 1425db090 FUN_1425db090 body=206 status=ok
// SIG undefined FUN_1425db090(void)

undefined8 FUN_1425db090(longlong param_1,void *param_2,uint param_3,int *param_4)

{
  void *pvVar1;
  void *_Dst;
  
  pvVar1 = (void *)(param_1 + 0x60);
  if ((*(void **)(param_1 + 0x58) != (void *)0x0) && (*(void **)(param_1 + 0x58) != pvVar1)) {
    FUN_1424da110();
  }
  if ((int)param_3 < 0x21) {
    *(void **)(param_1 + 0x58) = pvVar1;
    _Dst = pvVar1;
  }
  else {
    _Dst = (void *)FUN_1424da030((ulonglong)param_3 << 3);
    *(void **)(param_1 + 0x58) = _Dst;
    if (_Dst == (void *)0x0) {
      *param_4 = 7;
      goto LAB_1425db146;
    }
  }
  memcpy(_Dst,param_2,(longlong)(int)param_3 << 3);
  *(uint *)(param_1 + 0x54) = param_3;
  FUN_14258cce0(*(undefined8 *)(param_1 + 0x58),param_3,8,&LAB_1425db580,0,1,param_4);
  if (*param_4 < 1) {
    return 1;
  }
  if ((*(void **)(param_1 + 0x58) != (void *)0x0) && (*(void **)(param_1 + 0x58) != pvVar1)) {
    FUN_1424da110();
  }
LAB_1425db146:
  *(undefined4 *)(param_1 + 0x54) = 0;
  return 0;
}



// FUNCTION 1425db160 FUN_1425db160 body=149 status=ok
// SIG undefined FUN_1425db160(void)

undefined8 * FUN_1425db160(longlong param_1)

{
  undefined8 *puVar1;
  undefined4 local_24;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  puVar1 = (undefined8 *)thunk_FUN_1424da030(0x160);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = icu_64::TimeZoneRule::vftable;
    FUN_1424a6be0(puVar1 + 1,param_1 + 8);
    *(undefined4 *)(puVar1 + 9) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)((longlong)puVar1 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    *puVar1 = icu_64::TimeArrayTimeZoneRule::vftable;
    *(undefined4 *)(puVar1 + 10) = *(undefined4 *)(param_1 + 0x50);
    puVar1[0xb] = 0;
    local_24 = 0;
    FUN_1425db090(puVar1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x54),&local_24);
  }
  return puVar1;
}



// FUNCTION 1425db200 Unwind@1425db200 body=45 status=ok
// SIG undefined Unwind@1425db200(void)

void Unwind_1425db200(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  FUN_1424b70d0(uVar1);
  FUN_1401773f0(uVar1);
  return;
}



// FUNCTION 1425db230 FUN_1425db230 body=154 status=ok
// SIG undefined FUN_1425db230(void)

ulonglong FUN_1425db230(longlong param_1,longlong param_2)

{
  double *pdVar1;
  double dVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 unaff_RSI;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar8 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (param_1 != param_2) {
    lVar6 = __RTtypeid();
    lVar7 = __RTtypeid(param_2);
    iVar5 = __std_type_info_compare(lVar6 + 8,lVar7 + 8);
    if (((iVar5 == 0) && (cVar4 = FUN_1425da330(param_1,param_2), cVar4 != '\0')) &&
       (*(int *)(param_1 + 0x50) == *(int *)(param_2 + 0x50))) {
      uVar3 = *(uint *)(param_1 + 0x54);
      if (uVar3 == *(uint *)(param_2 + 0x54)) {
        if (0 < (int)uVar3) {
          uVar9 = 0;
          do {
            dVar2 = *(double *)(*(longlong *)(param_1 + 0x58) + uVar9 * 8);
            pdVar1 = (double *)(*(longlong *)(param_2 + 0x58) + uVar9 * 8);
            if ((dVar2 != *pdVar1) || (NAN(dVar2) || NAN(*pdVar1))) goto LAB_1425db26b;
            uVar9 = uVar9 + 1;
          } while (uVar3 != uVar9);
        }
        goto LAB_1425db26d;
      }
    }
LAB_1425db26b:
    uVar8 = 0;
  }
LAB_1425db26d:
  return uVar8 & 0xffffffff;
}



// FUNCTION 1425db2d0 FUN_1425db2d0 body=20 status=ok
// SIG undefined FUN_1425db2d0(void)

bool FUN_1425db2d0(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x18))();
  return cVar1 == '\0';
}



// FUNCTION 1425db2f0 FUN_1425db2f0 body=189 status=ok
// SIG undefined FUN_1425db2f0(void)

ulonglong FUN_1425db2f0(longlong param_1,longlong param_2)

{
  double *pdVar1;
  double dVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (param_1 != param_2) {
    lVar5 = __RTtypeid();
    lVar6 = __RTtypeid(param_2);
    iVar4 = __std_type_info_compare(lVar5 + 8,lVar6 + 8);
    if (iVar4 == 0) {
      lVar5 = __RTtypeid(param_1);
      lVar6 = __RTtypeid(param_2);
      iVar4 = __std_type_info_compare(lVar5 + 8,lVar6 + 8);
      if ((((iVar4 == 0) && (*(int *)(param_1 + 0x48) == *(int *)(param_2 + 0x48))) &&
          (*(int *)(param_1 + 0x4c) == *(int *)(param_2 + 0x4c))) &&
         (*(int *)(param_1 + 0x50) == *(int *)(param_2 + 0x50))) {
        uVar3 = *(uint *)(param_1 + 0x54);
        if (uVar3 == *(uint *)(param_2 + 0x54)) {
          if (0 < (int)uVar3) {
            uVar8 = 0;
            do {
              dVar2 = *(double *)(*(longlong *)(param_1 + 0x58) + uVar8 * 8);
              pdVar1 = (double *)(*(longlong *)(param_2 + 0x58) + uVar8 * 8);
              if ((dVar2 != *pdVar1) || (NAN(dVar2) || NAN(*pdVar1))) goto LAB_1425db39f;
              uVar8 = uVar8 + 1;
            } while (uVar3 != uVar8);
          }
          goto LAB_1425db3a1;
        }
      }
    }
LAB_1425db39f:
    uVar7 = 0;
  }
LAB_1425db3a1:
  return uVar7 & 0xffffffff;
}



// FUNCTION 1425db3b0 FUN_1425db3b0 body=73 status=ok
// SIG undefined FUN_1425db3b0(void)

undefined8 FUN_1425db3b0(longlong param_1,int param_2,int param_3,double *param_4)

{
  int iVar1;
  double dVar2;
  double dVar3;
  
  if ((0 < *(int *)(param_1 + 0x54)) && (*(double **)(param_1 + 0x58) != (double *)0x0)) {
    iVar1 = *(int *)(param_1 + 0x50);
    dVar2 = 0.0;
    dVar3 = 0.0;
    if (iVar1 != 2) {
      dVar3 = (double)param_2;
    }
    if (iVar1 == 0) {
      dVar2 = (double)param_3;
    }
    *param_4 = (**(double **)(param_1 + 0x58) - dVar3) - dVar2;
    return CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
  }
  return 0;
}



// FUNCTION 1425db400 FUN_1425db400 body=78 status=ok
// SIG undefined FUN_1425db400(void)

undefined8 FUN_1425db400(longlong param_1,int param_2,int param_3,double *param_4)

{
  int iVar1;
  double dVar2;
  double dVar3;
  
  if ((0 < *(int *)(param_1 + 0x54)) && (*(longlong *)(param_1 + 0x58) != 0)) {
    iVar1 = *(int *)(param_1 + 0x50);
    dVar2 = 0.0;
    dVar3 = 0.0;
    if (iVar1 != 2) {
      dVar3 = (double)param_2;
    }
    if (iVar1 == 0) {
      dVar2 = (double)param_3;
    }
    *param_4 = (*(double *)
                 (*(longlong *)(param_1 + 0x58) + (ulonglong)(*(int *)(param_1 + 0x54) - 1) * 8) -
               dVar3) - dVar2;
    return CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
  }
  return 0;
}



// FUNCTION 1425db450 FUN_1425db450 body=173 status=ok
// SIG undefined FUN_1425db450(void)

undefined8
FUN_1425db450(longlong param_1,double param_2,int param_3,int param_4,char param_5,double *param_6)

{
  bool bVar1;
  ulonglong uVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  
  uVar3 = *(uint *)(param_1 + 0x54);
  uVar2 = (ulonglong)uVar3;
  if (0 < (int)uVar3) {
    do {
      dVar4 = 0.0;
      if (*(int *)(param_1 + 0x50) != 2) {
        dVar4 = (double)param_3;
      }
      dVar5 = (double)param_4;
      if (*(int *)(param_1 + 0x50) != 0) {
        dVar5 = 0.0;
      }
      dVar5 = (*(double *)(*(longlong *)(param_1 + 0x58) + (uVar2 - 1 & 0xffffffff) * 8) - dVar4) -
              dVar5;
      if ((dVar5 < param_2) || (param_5 == '\0' && dVar5 == param_2)) goto LAB_1425db4eb;
      *param_6 = dVar5;
      bVar1 = 1 < uVar2;
      uVar2 = uVar2 - 1;
    } while (bVar1);
    uVar2 = 0;
LAB_1425db4eb:
    uVar3 = *(uint *)(param_1 + 0x54);
  }
  return CONCAT71((int7)(uVar2 >> 8),(uint)uVar2 != uVar3);
}



// FUNCTION 1425db500 FUN_1425db500 body=128 status=ok
// SIG undefined FUN_1425db500(void)

undefined8
FUN_1425db500(longlong param_1,double param_2,int param_3,int param_4,char param_5,double *param_6)

{
  ulonglong uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar2 = 0.0;
  dVar3 = 0.0;
  if (*(int *)(param_1 + 0x50) != 2) {
    dVar3 = (double)param_3;
  }
  uVar1 = (ulonglong)*(uint *)(param_1 + 0x54);
  if (*(int *)(param_1 + 0x50) == 0) {
    dVar2 = (double)param_4;
  }
  do {
    if ((int)uVar1 < 1) {
      return 0;
    }
    dVar4 = (*(double *)(*(longlong *)(param_1 + 0x58) + -8 + uVar1 * 8) - dVar3) - dVar2;
  } while ((param_2 <= dVar4) && (uVar1 = uVar1 - 1, param_5 == '\0' || dVar4 != param_2));
  *param_6 = dVar4;
  return CONCAT71((int7)(uVar1 >> 8),1);
}



// FUNCTION 1425db5b0 FUN_1425db5b0 body=2 status=ok
// SIG undefined FUN_1425db5b0(void)

void FUN_1425db5b0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



// FUNCTION 1425db5c0 FUN_1425db5c0 body=60 status=ok
// SIG undefined FUN_1425db5c0(void)

undefined8 * FUN_1425db5c0(undefined8 *param_1,int param_2)

{
  *param_1 = icu_64::TimeZoneRule::vftable;
  FUN_140859a90(param_1 + 1);
  FUN_1424b70d0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1425db600 FUN_1425db600 body=89 status=ok
// SIG undefined FUN_1425db600(void)

undefined8 * FUN_1425db600(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = icu_64::AnnualTimeZoneRule::vftable;
  puVar1 = (undefined8 *)param_1[10];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *param_1 = icu_64::TimeZoneRule::vftable;
  FUN_140859a90(param_1 + 1);
  FUN_1424b70d0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1425db660 FUN_1425db660 body=93 status=ok
// SIG undefined FUN_1425db660(void)

undefined8 * FUN_1425db660(undefined8 *param_1,int param_2)

{
  *param_1 = icu_64::TimeArrayTimeZoneRule::vftable;
  if (((undefined8 *)param_1[0xb] != (undefined8 *)0x0) &&
     ((undefined8 *)param_1[0xb] != param_1 + 0xc)) {
    FUN_1424da110();
  }
  *param_1 = icu_64::TimeZoneRule::vftable;
  FUN_140859a90(param_1 + 1);
  FUN_1424b70d0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1425db6c0 FUN_1425db6c0 body=8 status=ok
// SIG undefined FUN_1425db6c0(void)

undefined * FUN_1425db6c0(void)

{
  return &DAT_14c7fbef4;
}



// FUNCTION 1425db6d0 FUN_1425db6d0 body=47 status=ok
// SIG undefined FUN_1425db6d0(void)

void FUN_1425db6d0(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  *param_1 = icu_64::DateTimeRule::vftable;
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined4 *)((longlong)param_1 + 0xc) = param_3;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = param_4;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 4) = param_5;
  return;
}



// FUNCTION 1425db700 FUN_1425db700 body=55 status=ok
// SIG undefined FUN_1425db700(void)

void FUN_1425db700(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  *param_1 = icu_64::DateTimeRule::vftable;
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 2) = param_4;
  *(undefined4 *)((longlong)param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 3) = param_5;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 1;
  *(undefined4 *)(param_1 + 4) = param_6;
  return;
}



// FUNCTION 1425db740 FUN_1425db740 body=68 status=ok
// SIG undefined FUN_1425db740(void)

void FUN_1425db740(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  char param_5,undefined4 param_6,undefined4 param_7)

{
  *param_1 = icu_64::DateTimeRule::vftable;
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined4 *)((longlong)param_1 + 0xc) = param_3;
  *(undefined4 *)(param_1 + 2) = param_4;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 3) = param_6;
  *(undefined4 *)(param_1 + 4) = param_7;
  *(uint *)((longlong)param_1 + 0x1c) = (param_5 == '\0') + 2;
  return;
}



// FUNCTION 1425db790 FUN_1425db790 body=56 status=ok
// SIG undefined FUN_1425db790(void)

void FUN_1425db790(undefined8 *param_1,longlong param_2)

{
  *param_1 = icu_64::DateTimeRule::vftable;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  return;
}



// FUNCTION 1425db7d0 FUN_1425db7d0 body=127 status=ok
// SIG undefined FUN_1425db7d0(void)

bool FUN_1425db7d0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  if (param_1 == param_2) {
    bVar4 = true;
  }
  else {
    lVar2 = __RTtypeid();
    lVar3 = __RTtypeid(param_2);
    iVar1 = __std_type_info_compare(lVar2 + 8,lVar3 + 8);
    if ((((iVar1 == 0) && (*(int *)(param_1 + 8) == *(int *)(param_2 + 8))) &&
        (*(int *)(param_1 + 0xc) == *(int *)(param_2 + 0xc))) &&
       (((*(int *)(param_1 + 0x10) == *(int *)(param_2 + 0x10) &&
         (*(int *)(param_1 + 0x14) == *(int *)(param_2 + 0x14))) &&
        ((*(int *)(param_1 + 0x18) == *(int *)(param_2 + 0x18) &&
         (*(int *)(param_1 + 0x1c) == *(int *)(param_2 + 0x1c))))))) {
      bVar4 = *(int *)(param_1 + 0x20) == *(int *)(param_2 + 0x20);
    }
    else {
      bVar4 = false;
    }
  }
  return bVar4;
}



// FUNCTION 1425db850 FUN_1425db850 body=4 status=ok
// SIG undefined FUN_1425db850(void)

undefined4 FUN_1425db850(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



// FUNCTION 1425db860 FUN_1425db860 body=4 status=ok
// SIG undefined FUN_1425db860(void)

undefined4 FUN_1425db860(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



// FUNCTION 1425db870 FUN_1425db870 body=4 status=ok
// SIG undefined FUN_1425db870(void)

undefined4 FUN_1425db870(longlong param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



// FUNCTION 1425db880 FUN_1425db880 body=4 status=ok
// SIG undefined FUN_1425db880(void)

undefined4 FUN_1425db880(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// FUNCTION 1425db890 FUN_1425db890 body=4 status=ok
// SIG undefined FUN_1425db890(void)

undefined4 FUN_1425db890(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



// FUNCTION 1425db8a0 FUN_1425db8a0 body=4 status=ok
// SIG undefined FUN_1425db8a0(void)

undefined4 FUN_1425db8a0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



// FUNCTION 1425db8b0 FUN_1425db8b0 body=4 status=ok
// SIG undefined FUN_1425db8b0(void)

undefined4 FUN_1425db8b0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



// FUNCTION 1425db8c0 FUN_1425db8c0 body=38 status=ok
// SIG undefined FUN_1425db8c0(void)

undefined8 FUN_1425db8c0(undefined8 param_1,int param_2)

{
  FUN_1424b70d0();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1425db8f0 FUN_1425db8f0 body=50 status=ok
// SIG undefined FUN_1425db8f0(void)

void FUN_1425db8f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_64::GNameSearchHandler::vftable;
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1425deec0(param_1);
  return;
}



// FUNCTION 1425db930 FUN_1425db930 body=351 status=ok
// SIG undefined FUN_1425db930(void)

undefined8 FUN_1425db930(longlong param_1,int param_2,longlong *param_3,int *param_4)

{
  int iVar1;
  undefined8 uVar2;
  uint *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  
  if (*param_4 < 1) {
    uVar2 = 1;
    if (*param_3 != 0) {
      if (*(char *)((longlong)param_3 + 0xe) == '\0') {
        iVar6 = 1;
      }
      else {
        iVar6 = *(int *)(*param_3 + 8);
        if (iVar6 < 1) {
          return 1;
        }
      }
      iVar7 = 0;
      do {
        puVar3 = (uint *)*param_3;
        if (*(char *)((longlong)param_3 + 0xe) != '\0') {
          puVar3 = (uint *)FUN_142516630(puVar3,iVar7);
        }
        if (puVar3 == (uint *)0x0) break;
        if ((*puVar3 & *(uint *)(param_1 + 8)) != 0) {
          if (*(longlong *)(param_1 + 0x10) == 0) {
            lVar4 = thunk_FUN_1424da030(0x28);
            if (lVar4 != 0) {
              FUN_142515f20(lVar4,FUN_1424da110,0,param_4);
              *(longlong *)(param_1 + 0x10) = lVar4;
              iVar1 = *param_4;
              goto joined_r0x0001425dba23;
            }
            *(undefined8 *)(param_1 + 0x10) = 0;
LAB_1425db998:
            *param_4 = 7;
          }
          else {
            iVar1 = *param_4;
joined_r0x0001425dba23:
            if (iVar1 < 1) {
              puVar5 = (undefined8 *)FUN_1424da030(0x10);
              if (puVar5 == (undefined8 *)0x0) goto LAB_1425db998;
              *puVar5 = puVar3;
              *(int *)(puVar5 + 1) = param_2;
              *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
              FUN_1425163e0(*(undefined8 *)(param_1 + 0x10),puVar5);
              if (*param_4 < 1) {
                if (*(int *)(param_1 + 0x18) < param_2) {
                  *(int *)(param_1 + 0x18) = param_2;
                }
              }
              else {
                FUN_1424da110(puVar5);
              }
            }
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar6 != iVar7);
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1425dbaa0 Unwind@1425dbaa0 body=52 status=ok
// SIG undefined Unwind@1425dbaa0(void)

void Unwind_1425dbaa0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 1425dbae0 FUN_1425dbae0 body=198 status=ok
// SIG undefined FUN_1425dbae0(void)

undefined8 * FUN_1425dbae0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = icu_64::TZGNCore::vftable;
  FUN_1424a3ce0();
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  FUN_1424a6c10(param_1 + 0x20,0);
  FUN_1424a6c10(param_1 + 0x28,0);
  param_1[0x30] = 0;
  FUN_1425df890(param_1 + 0x31,param_3);
  FUN_1425deed0(param_1 + 0x33,1,&LAB_1425dbca0);
  *(undefined1 *)(param_1 + 0x3a) = 0;
  FUN_1425dbcb0(param_1,param_2,param_3);
  return param_1;
}



// FUNCTION 1425dbbb0 Unwind@1425dbbb0 body=36 status=ok
// SIG undefined Unwind@1425dbbb0(void)

void Unwind_1425dbbb0(undefined8 param_1,longlong param_2)

{
  FUN_1425def00(*(undefined8 *)(param_2 + 0x48));
  return;
}



// FUNCTION 1425dbbe0 Unwind@1425dbbe0 body=36 status=ok
// SIG undefined Unwind@1425dbbe0(void)

void Unwind_1425dbbe0(undefined8 param_1,longlong param_2)

{
  FUN_1425df900(*(undefined8 *)(param_2 + 0x40));
  return;
}



// FUNCTION 1425dbc10 Unwind@1425dbc10 body=36 status=ok
// SIG undefined Unwind@1425dbc10(void)

void Unwind_1425dbc10(undefined8 param_1,longlong param_2)

{
  thunk_FUN_140859a90(*(undefined8 *)(param_2 + 0x38));
  return;
}



// FUNCTION 1425dbc40 Unwind@1425dbc40 body=36 status=ok
// SIG undefined Unwind@1425dbc40(void)

void Unwind_1425dbc40(undefined8 param_1,longlong param_2)

{
  thunk_FUN_140859a90(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 1425dbc70 Unwind@1425dbc70 body=36 status=ok
// SIG undefined Unwind@1425dbc70(void)

void Unwind_1425dbc70(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(*(undefined8 *)(param_2 + 0x28));
  return;
}



// FUNCTION 1425dbcb0 FUN_1425dbcb0 body=935 status=ok
// SIG undefined FUN_1425dbcb0(void)

void FUN_1425dbcb0(longlong param_1,longlong param_2,int *param_3)

{
  int iVar1;
  undefined8 uVar2;
  wchar_t *pwVar3;
  size_t sVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong in_stack_fffffffffffffe88;
  undefined1 local_168 [168];
  undefined1 local_c0 [8];
  short local_b8;
  int local_b4;
  undefined1 local_80 [8];
  short local_78;
  int local_74;
  int local_3c [3];
  
  local_3c[1] = -2;
  local_3c[2] = -1;
  if (0 < *param_3) {
    return;
  }
  uVar2 = FUN_142529aa0(param_2,param_3);
  *(undefined8 *)(param_1 + 0xe8) = uVar2;
  if (0 < *param_3) {
    return;
  }
  FUN_1424a7060(local_c0,1,&DAT_149c4b750,0xffffffff);
  FUN_1424a7060(local_80,1,L"{1} ({0})",0xffffffff);
  local_3c[0] = 0;
  uVar2 = FUN_1424ebfe0("icudt64l-zone",*(undefined8 *)(param_2 + 0x28),local_3c);
  uVar2 = FUN_1424ec1c0(uVar2,"zoneStrings",uVar2,local_3c);
  if (local_3c[0] < 1) {
    pwVar3 = (wchar_t *)FUN_1424ec010(uVar2,"regionFormat",0,local_3c);
    if ((local_3c[0] < 1) && (sVar4 = wcslen(pwVar3), 0 < (int)sVar4)) {
      FUN_1424a8e40(local_c0);
      if (-1 < local_b8) {
        local_b4 = (int)local_b8 >> 5;
      }
      in_stack_fffffffffffffe88 = in_stack_fffffffffffffe88 & 0xffffffff00000000;
      FUN_1424a9130(local_c0,0,local_b4,pwVar3,in_stack_fffffffffffffe88,0xffffffff);
    }
    local_3c[0] = 0;
    pwVar3 = (wchar_t *)FUN_1424ec010(uVar2,"fallbackFormat",0,local_3c);
    if ((local_3c[0] < 1) && (sVar4 = wcslen(pwVar3), 0 < (int)sVar4)) {
      FUN_1424a8e40(local_80);
      if (-1 < local_78) {
        local_74 = (int)local_78 >> 5;
      }
      FUN_1424a9130(local_80,0,local_74,pwVar3,in_stack_fffffffffffffe88 & 0xffffffff00000000,
                    0xffffffff);
    }
  }
  FUN_1424ea9f0(uVar2);
  FUN_1425fb600(param_1 + 0x100,local_c0,1,1,param_3);
  FUN_1425fb600(param_1 + 0x140,local_80,2,2,param_3);
  if (*param_3 < 1) {
    uVar2 = FUN_1426aca50(param_2,0);
    *(undefined8 *)(param_1 + 0x180) = uVar2;
    uVar2 = FUN_142501e10(FUN_142503190,&LAB_142503220,0,param_3);
    *(undefined8 *)(param_1 + 0xf0) = uVar2;
    if (*param_3 < 1) {
      uVar2 = FUN_142501e10(FUN_1425dc240,&LAB_1425dc200,0,param_3);
      *(undefined8 *)(param_1 + 0xf8) = uVar2;
      if (*param_3 < 1) {
        FUN_142502340(uVar2,FUN_1424da110);
        sVar4 = strlen((char *)(param_1 + 0x22));
        if ((int)sVar4 == 0) {
          FUN_1424d43b0(*(undefined8 *)(param_1 + 0x30),local_168,0x9d,param_3);
          iVar1 = FUN_1424e8d90(local_168,param_1 + 0x1d1,4,param_3);
          if (0 < *param_3) goto LAB_1425dbf83;
          *(undefined1 *)(param_1 + 0x1d1 + (longlong)iVar1) = 0;
        }
        else if ((int)sVar4 < 4) {
          strcpy((char *)(param_1 + 0x1d1),(char *)(param_1 + 0x22));
        }
        else {
          *(char *)(param_1 + 0x1d1) = '\0';
        }
        puVar5 = (undefined8 *)FUN_1424b77f0();
        lVar6 = FUN_14252a7c0(puVar5);
        if (lVar6 != 0) {
          FUN_1424a7060(local_168,1,lVar6,0xffffffff);
          FUN_1425dc370(param_1,local_168);
          FUN_140859a90(local_168);
        }
        (**(code **)*puVar5)(puVar5,1);
      }
      else {
LAB_1425dbf83:
        FUN_1425dc1a0(param_1);
      }
      goto LAB_1425dbf38;
    }
  }
  puVar5 = *(undefined8 **)(param_1 + 0x180);
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5,1);
  }
  puVar5 = *(undefined8 **)(param_1 + 0xe8);
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5,1);
  }
  FUN_142502220(*(undefined8 *)(param_1 + 0xf0));
  FUN_142502220(*(undefined8 *)(param_1 + 0xf8));
LAB_1425dbf38:
  FUN_140859a90(local_80);
  FUN_140859a90(local_c0);
  return;
}



// FUNCTION 1425dc060 Unwind@1425dc060 body=50 status=ok
// SIG undefined Unwind@1425dc060(void)

void Unwind_1425dc060(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x118);
  return;
}



// FUNCTION 1425dc0a0 Unwind@1425dc0a0 body=47 status=ok
// SIG undefined Unwind@1425dc0a0(void)

void Unwind_1425dc0a0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xd8);
  return;
}



// FUNCTION 1425dc0d0 Unwind@1425dc0d0 body=47 status=ok
// SIG undefined Unwind@1425dc0d0(void)

void Unwind_1425dc0d0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x30);
  return;
}



// FUNCTION 1425dc100 FUN_1425dc100 body=151 status=ok
// SIG undefined FUN_1425dc100(void)

void FUN_1425dc100(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_64::TZGNCore::vftable;
  puVar1 = (undefined8 *)param_1[0x30];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[0x1d];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_142502220(param_1[0x1e]);
  FUN_142502220(param_1[0x1f]);
  FUN_1425def00(param_1 + 0x33);
  FUN_1425df900(param_1 + 0x31);
  thunk_FUN_140859a90(param_1 + 0x28);
  thunk_FUN_140859a90(param_1 + 0x20);
  FUN_1414b3f60(param_1 + 1);
  return;
}



// FUNCTION 1425dc1a0 FUN_1425dc1a0 body=81 status=ok
// SIG undefined FUN_1425dc1a0(void)

void FUN_1425dc1a0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x180);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = *(undefined8 **)(param_1 + 0xe8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_142502220(*(undefined8 *)(param_1 + 0xf0));
  FUN_142502220(*(undefined8 *)(param_1 + 0xf8));
  return;
}



// FUNCTION 1425dc240 FUN_1425dc240 body=206 status=ok
// SIG undefined FUN_1425dc240(void)

undefined4 FUN_1425dc240(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 local_80 [72];
  undefined8 local_38;
  undefined8 local_30;
  undefined2 local_22;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_1424a6c90(local_80,*param_1);
  local_22 = 0x26;
  uVar2 = FUN_1424a6cf0(local_80,&local_22,0,1);
  local_30 = param_1[1];
  uVar2 = FUN_1424a6cf0(uVar2,local_30,0,0xffffffff);
  local_38 = local_30;
  local_22 = 0x23;
  uVar2 = FUN_1424a6cf0(uVar2,&local_22,0,1);
  local_22 = 0x4c;
  if (*(char *)(param_1 + 2) == '\0') {
    local_22 = 0x53;
  }
  FUN_1424a6cf0(uVar2,&local_22,0,1);
  uVar1 = FUN_1424a9a40(local_80);
  FUN_140859a90(local_80);
  return uVar1;
}



// FUNCTION 1425dc310 Unwind@1425dc310 body=37 status=ok
// SIG undefined Unwind@1425dc310(void)

void Unwind_1425dc310(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 1425dc340 Unwind@1425dc340 body=35 status=ok
// SIG undefined Unwind@1425dc340(void)

void Unwind_1425dc340(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(param_2 + 0x78);
  return;
}



// FUNCTION 1425dc370 FUN_1425dc370 body=423 status=ok
// SIG undefined FUN_1425dc370(void)

void FUN_1425dc370(longlong param_1,longlong param_2)

{
  ushort uVar1;
  int iVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  undefined **local_d8;
  ushort local_d0;
  undefined **local_98;
  ushort local_90;
  int local_8c;
  longlong local_58;
  int local_4c [3];
  
  local_4c[1] = -2;
  local_4c[2] = -1;
  FUN_1425dd160();
  local_4c[0] = 0;
  local_98 = &PTR_FUN_149e18960;
  local_90 = 2;
  local_d8 = &PTR_FUN_149e18960;
  local_d0 = 2;
  plVar4 = (longlong *)
           (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x20))
                     (*(longlong **)(param_1 + 0xe8),param_2,local_4c);
  local_58 = param_1 + 0x1d1;
LAB_1425dc3f0:
  do {
    lVar5 = (**(code **)(*plVar4 + 0x30))(plVar4,local_4c);
    if ((lVar5 == 0) || (0 < local_4c[0])) {
      (**(code **)*plVar4)(plVar4,1);
      FUN_140859a90(&local_d8);
      FUN_140859a90(&local_98);
      return;
    }
    (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x38))
              (*(longlong **)(param_1 + 0xe8),lVar5,local_58,&local_98);
    uVar1 = *(ushort *)(param_2 + 8);
    if ((uVar1 & 1) != 0) goto LAB_1425dc440;
    if ((short)uVar1 < 0) {
      iVar6 = *(int *)(param_2 + 0xc);
    }
    else {
      iVar6 = (int)(short)uVar1 >> 5;
    }
    iVar2 = local_8c;
    if (-1 < (short)local_90) {
      iVar2 = (int)(short)local_90 >> 5;
    }
  } while ((((local_90 & 1) == 0) && (iVar6 == iVar2)) &&
          (cVar3 = FUN_1412ae090(param_2,&local_98), cVar3 != '\0'));
  goto LAB_1425dc4a0;
LAB_1425dc440:
  if ((local_90 & 1) == 0) {
LAB_1425dc4a0:
    uVar7 = 0;
    while (iVar6 = (int)uVar7, iVar6 != 2) {
      (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x40))
                (*(longlong **)(param_1 + 0xe8),lVar5,(&DAT_149c4b7a0)[uVar7],&local_d8);
      if (0x1f < local_d0) {
        FUN_1425dd7c0(param_1,param_2,lVar5,iVar6 == 0,&local_d8);
      }
      uVar7 = (ulonglong)(iVar6 + 1);
    }
  }
  goto LAB_1425dc3f0;
}



// FUNCTION 1425dc530 Unwind@1425dc530 body=64 status=ok
// SIG undefined Unwind@1425dc530(void)

void Unwind_1425dc530(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x30);
  FUN_140859a90(param_2 + 0x70);
  return;
}



// FUNCTION 1425dc570 FUN_1425dc570 body=240 status=ok
// SIG undefined FUN_1425dc570(void)

longlong FUN_1425dc570(undefined8 param_1,undefined8 param_2,int param_3,undefined4 param_4,
                      longlong param_5)

{
  longlong lVar1;
  undefined1 local_80 [64];
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  FUN_1424a7130(param_5);
  if ((param_3 == 4) || (param_3 == 2)) {
    FUN_1425dc8a0(param_1,param_2,param_3,param_4,param_5);
    if (0x1f < *(ushort *)(param_5 + 8)) {
      return param_5;
    }
    lVar1 = FUN_14252a7c0(param_2);
    if (lVar1 == 0) {
      return param_5;
    }
    FUN_1424a7060(local_80,1,lVar1,0xffffffff);
    FUN_1425dc6e0(param_1,local_80,param_5);
  }
  else {
    if (param_3 != 1) {
      return param_5;
    }
    lVar1 = FUN_14252a7c0(param_2);
    if (lVar1 == 0) {
      return param_5;
    }
    FUN_1424a7060(local_80,1,lVar1,0xffffffff);
    FUN_1425dc6e0(param_1,local_80,param_5);
  }
  FUN_140859a90(local_80);
  return param_5;
}



// FUNCTION 1425dc660 Unwind@1425dc660 body=52 status=ok
// SIG undefined Unwind@1425dc660(void)

void Unwind_1425dc660(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 1425dc6a0 Unwind@1425dc6a0 body=52 status=ok
// SIG undefined Unwind@1425dc6a0(void)

void Unwind_1425dc6a0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x28);
  return;
}



// FUNCTION 1425dc6e0 FUN_1425dc6e0 body=447 status=ok
// SIG undefined FUN_1425dc6e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1425dc6e0(undefined8 param_1,longlong param_2,longlong param_3)

{
  wchar_t *_Str;
  size_t sVar1;
  int iVar2;
  
  if (0x1f < *(ushort *)(param_2 + 8)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c7fbf60) && (FUN_144b3d300(&DAT_14c7fbf60), DAT_14c7fbf60 == -1)) {
      _DAT_14c7fbf50 = 0;
      uRam000000014c7fbf58 = 0;
      _DAT_14c7fbf40 = 0;
      uRam000000014c7fbf48 = 0;
      _DAT_14c7fbf30 = 0;
      uRam000000014c7fbf38 = 0;
      _DAT_14c7fbf20 = 0;
      uRam000000014c7fbf28 = 0;
      _DAT_14c7fbf10 = 0;
      uRam000000014c7fbf18 = 0;
      _Mtx_init_in_situ(&DAT_14c7fbf10,2);
      atexit((_func_5014 *)&LAB_1425ded90);
      _Init_thread_footer(&DAT_14c7fbf60);
    }
    FUN_142501320(&DAT_14c7fbf10);
    _Str = (wchar_t *)FUN_1425dd160(param_1,param_2);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c7fbf60) && (FUN_144b3d300(&DAT_14c7fbf60), DAT_14c7fbf60 == -1)) {
      _DAT_14c7fbf50 = 0;
      uRam000000014c7fbf58 = 0;
      _DAT_14c7fbf40 = 0;
      uRam000000014c7fbf48 = 0;
      _DAT_14c7fbf30 = 0;
      uRam000000014c7fbf38 = 0;
      _DAT_14c7fbf20 = 0;
      uRam000000014c7fbf28 = 0;
      _DAT_14c7fbf10 = 0;
      uRam000000014c7fbf18 = 0;
      _Mtx_init_in_situ(&DAT_14c7fbf10,2);
      atexit((_func_5014 *)&LAB_1425ded90);
      _Init_thread_footer(&DAT_14c7fbf60);
    }
    FUN_142501400(&DAT_14c7fbf10);
    if (_Str != (wchar_t *)0x0) {
      sVar1 = wcslen(_Str);
      FUN_1424a8e40(param_3);
      if (*(short *)(param_3 + 8) < 0) {
        iVar2 = *(int *)(param_3 + 0xc);
      }
      else {
        iVar2 = (int)*(short *)(param_3 + 8) >> 5;
      }
      FUN_1424a9130(param_3,0,iVar2,_Str,0,(int)sVar1);
      return param_3;
    }
  }
  FUN_1424a7130(param_3);
  return param_3;
}



// FUNCTION 1425dc8a0 FUN_1425dc8a0 body=1596 status=ok
// SIG undefined FUN_1425dc8a0(void)

longlong FUN_1425dc8a0(longlong param_1,longlong *param_2,int param_3,double param_4,
                      longlong param_5)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  double dVar9;
  int *piVar10;
  ulonglong uVar11;
  undefined1 local_3b8 [256];
  undefined1 local_2b8 [64];
  undefined1 local_278 [8];
  ushort local_270;
  undefined1 local_178 [64];
  undefined1 local_138 [8];
  ushort local_130;
  undefined1 local_f8 [8];
  ushort local_f0;
  undefined1 local_b8 [8];
  ushort local_b0;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64 [9];
  
  local_64[1] = -2;
  local_64[2] = -1;
  FUN_1424a7130(param_5);
  lVar3 = FUN_14252a7c0(param_2);
  if (lVar3 == 0) {
    return param_5;
  }
  FUN_1424a7060(local_178,1,lVar3,0xffffffff);
  uVar7 = 8;
  if (param_3 == 2) {
    uVar7 = 1;
  }
  (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x48))
            (*(longlong **)(param_1 + 0xe8),local_178,uVar7,param_5);
  if (0x1f < *(ushort *)(param_5 + 8)) goto LAB_1425dcdcb;
  FUN_1424a7170(local_138,local_2b8,0,0x20);
  (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x30))
            (*(longlong **)(param_1 + 0xe8),local_178,param_4,local_138);
  if (0x1f < local_130) {
    local_6c = 0;
    piVar10 = local_64;
    (**(code **)(*param_2 + 0x18))(param_2,param_4,0,&local_68,local_64,&local_6c);
    if (local_6c < 1) {
      if (local_64[0] == 0) {
        plVar4 = (longlong *)(**(code **)(*param_2 + 0x58))(param_2);
        uVar11 = (ulonglong)piVar10 & 0xffffffff00000000;
        lVar3 = __RTDynamicCast(plVar4,0,&icu_64::TimeZone::RTTI_Type_Descriptor,
                                &icu_64::OlsonTimeZone::RTTI_Type_Descriptor,uVar11);
        if (lVar3 == 0) {
          uVar11 = uVar11 & 0xffffffff00000000;
          lVar3 = __RTDynamicCast(plVar4,0,&icu_64::TimeZone::RTTI_Type_Descriptor,
                                  &icu_64::SimpleTimeZone::RTTI_Type_Descriptor,uVar11);
          if (lVar3 != 0) goto LAB_1425dca65;
          uVar11 = uVar11 & 0xffffffff00000000;
          lVar3 = __RTDynamicCast(plVar4,0,&icu_64::TimeZone::RTTI_Type_Descriptor,
                                  &icu_64::RuleBasedTimeZone::RTTI_Type_Descriptor,uVar11);
          if (lVar3 != 0) goto LAB_1425dca65;
          lVar3 = __RTDynamicCast(plVar4,0,&icu_64::TimeZone::RTTI_Type_Descriptor,
                                  &icu_64::VTimeZone::RTTI_Type_Descriptor,
                                  uVar11 & 0xffffffff00000000);
          if ((plVar4 == (longlong *)0x0) || (lVar3 == 0)) goto LAB_1425dce4c;
LAB_1425dca6e:
          FUN_14257c0f0(local_278);
          cVar1 = (**(code **)(*plVar4 + 0x70))(plVar4,param_4,1,local_278);
          if ((cVar1 == '\0') ||
             (dVar9 = (double)FUN_14257c2c0(local_278), 15897600000.0 <= param_4 - dVar9)) {
LAB_1425dcad4:
            FUN_14257c0f0(local_b8);
            cVar1 = (**(code **)(*plVar4 + 0x68))(plVar4,param_4,0,local_b8);
            bVar8 = true;
            if ((cVar1 != '\0') &&
               (dVar9 = (double)FUN_14257c2c0(local_b8), dVar9 - param_4 < 15897600000.0)) {
              uVar5 = FUN_14257c2d0(local_b8);
              iVar2 = FUN_1425da440(uVar5);
              bVar8 = iVar2 == 0;
            }
            FUN_14257c110(local_b8);
          }
          else {
            uVar5 = FUN_14257c2e0(local_278);
            iVar2 = FUN_1425da440(uVar5);
            if (iVar2 == 0) goto LAB_1425dcad4;
            bVar8 = false;
          }
          FUN_14257c110(local_278);
        }
        else {
LAB_1425dca65:
          if (plVar4 != (longlong *)0x0) goto LAB_1425dca6e;
LAB_1425dce4c:
          (**(code **)(*plVar4 + 0x18))
                    (plVar4,param_4 + -15897600000.0,0,&local_68,local_64,&local_6c);
          if (local_64[0] == 0) {
            (**(code **)(*plVar4 + 0x18))
                      (plVar4,param_4 + 15897600000.0,0,&local_68,local_64,&local_6c);
            bVar8 = local_64[0] == 0;
          }
          else {
            bVar8 = false;
          }
          if (0 < local_6c) {
            (**(code **)*plVar4)(plVar4,1);
            goto LAB_1425dcdbf;
          }
        }
        (**(code **)*plVar4)(plVar4,1);
        if (bVar8) {
          FUN_1424a7170(local_b8,local_3b8,0,0x80);
          uVar6 = 0x10;
          if (param_3 == 2) {
            uVar6 = 2;
          }
          (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x58))
                    (*(longlong **)(param_1 + 0xe8),local_178,uVar6,param_4,local_b8);
          if (0x1f < local_b0) {
            FUN_1424a7600(param_5,local_b8,0);
            FUN_1424a7170(local_f8,local_278,0,0x80);
            (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x40))
                      (*(longlong **)(param_1 + 0xe8),local_138,uVar7,local_f8);
            cVar1 = FUN_1425dd4f0(local_b8,local_f8,0);
            if (cVar1 == '\0') {
              FUN_1424a7130(param_5);
            }
            FUN_140859a90(local_f8);
          }
          FUN_140859a90(local_b8);
        }
      }
      if (*(ushort *)(param_5 + 8) < 0x20) {
        FUN_1424a7170(local_278,local_3b8,0,0x80);
        (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x40))
                  (*(longlong **)(param_1 + 0xe8),local_138,uVar7,local_278);
        if (0x1f < local_270) {
          FUN_1424a7170(local_f8,local_b8,0,0x20);
          (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x38))
                    (*(longlong **)(param_1 + 0xe8),local_138,param_1 + 0x1d1,local_f8);
          if ((local_f0 < 0x20) || (cVar1 = FUN_1425dd580(local_f8,local_178), cVar1 == '\0')) {
            FUN_1424a7600(param_5,local_278,0);
          }
          else {
            plVar4 = (longlong *)FUN_1424b7440(local_f8);
            (**(code **)(*plVar4 + 0x18))
                      (plVar4,(double)local_64[0] + (double)local_68 + param_4,1,&local_74,&local_70
                       ,&local_6c);
            (**(code **)*plVar4)(plVar4,1);
            if (local_6c < 1) {
              if ((local_68 == local_74) && (local_64[0] == local_70)) {
                FUN_1424a7600(param_5,local_278,0);
              }
              else {
                FUN_1425dd5e0(param_1,local_178,local_138,param_3 == 2,local_278,param_5);
              }
            }
          }
          FUN_140859a90(local_f8);
        }
        FUN_140859a90(local_278);
      }
    }
  }
LAB_1425dcdbf:
  FUN_140859a90(local_138);
LAB_1425dcdcb:
  FUN_140859a90(local_178);
  return param_5;
}



// FUNCTION 1425dcee0 Unwind@1425dcee0 body=69 status=ok
// SIG undefined Unwind@1425dcee0(void)

void Unwind_1425dcee0(undefined8 param_1,longlong param_2)

{
  FUN_14257c110(param_2 + 0x170);
  return;
}



// FUNCTION 1425dcf30 Unwind@1425dcf30 body=69 status=ok
// SIG undefined Unwind@1425dcf30(void)

void Unwind_1425dcf30(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x2f0);
  return;
}



// FUNCTION 1425dcf80 Unwind@1425dcf80 body=69 status=ok
// SIG undefined Unwind@1425dcf80(void)

void Unwind_1425dcf80(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x330);
  return;
}



// FUNCTION 1425dcfd0 Unwind@1425dcfd0 body=69 status=ok
// SIG undefined Unwind@1425dcfd0(void)

void Unwind_1425dcfd0(undefined8 param_1,longlong param_2)

{
  FUN_14257c110(param_2 + 0x330);
  return;
}



// FUNCTION 1425dd020 Unwind@1425dd020 body=69 status=ok
// SIG undefined Unwind@1425dd020(void)

void Unwind_1425dd020(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x2f0);
  return;
}



// FUNCTION 1425dd070 Unwind@1425dd070 body=69 status=ok
// SIG undefined Unwind@1425dd070(void)

void Unwind_1425dd070(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x170);
  return;
}



// FUNCTION 1425dd0c0 Unwind@1425dd0c0 body=69 status=ok
// SIG undefined Unwind@1425dd0c0(void)

void Unwind_1425dd0c0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x2b0);
  return;
}



// FUNCTION 1425dd110 Unwind@1425dd110 body=68 status=ok
// SIG undefined Unwind@1425dd110(void)

void Unwind_1425dd110(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x270);
  return;
}



// FUNCTION 1425dd160 FUN_1425dd160 body=741 status=ok
// SIG undefined FUN_1425dd160(void)

undefined * FUN_1425dd160(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined2 local_208 [136];
  undefined **local_f8;
  ushort local_f0;
  undefined **local_b8;
  ushort local_b0;
  int local_ac;
  undefined **local_78;
  undefined2 local_70;
  undefined1 local_34 [4];
  int local_30;
  char local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (*(short *)(param_2 + 8) < 0) {
    if (0x80 < *(int *)(param_2 + 0xc)) {
      return (undefined *)0x0;
    }
  }
  else if (0x80 < *(short *)(param_2 + 8) >> 5) {
    return (undefined *)0x0;
  }
  local_30 = 0;
  iVar1 = FUN_1424a8350(param_2,local_208,0x81,&local_30);
  local_208[iVar1] = 0;
  puVar2 = (undefined *)FUN_142502620(*(undefined8 *)(param_1 + 0xf0),local_208);
  if (puVar2 != (undefined *)0x0) {
    if (puVar2 == &DAT_149c4b79c) {
      return (undefined *)0x0;
    }
    return puVar2;
  }
  local_f8 = &PTR_FUN_149e18960;
  local_f0 = 2;
  local_b8 = &PTR_FUN_149e18960;
  local_b0 = 2;
  local_29 = '\0';
  FUN_14252a870(param_2,&local_b8,&local_29);
  if (local_b0 < 0x20) {
    puVar2 = (undefined *)0x0;
joined_r0x0001425dd271:
    if (0 < local_30) goto LAB_1425dd41e;
LAB_1425dd399:
    uVar3 = thunk_FUN_1424b8590(param_2);
    if (puVar2 == (undefined *)0x0) {
      FUN_142502aa0(*(undefined8 *)(param_1 + 0xf0),uVar3,&DAT_149c4b79c,&local_30);
      puVar2 = (undefined *)0x0;
      goto LAB_1425dd41e;
    }
    FUN_142502aa0(*(undefined8 *)(param_1 + 0xf0),uVar3,puVar2,&local_30);
    if (local_30 < 1) {
      puVar4 = (undefined4 *)FUN_1424da030(0x10);
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 1;
        *(undefined8 *)(puVar4 + 2) = uVar3;
        FUN_1425df020(param_1 + 0x198,puVar2,puVar4,&local_30);
      }
      goto LAB_1425dd41e;
    }
  }
  else {
    if (local_29 == '\0') {
      local_78 = &PTR_FUN_149e18960;
      local_70 = 2;
      (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x50))
                (*(longlong **)(param_1 + 0xe8),param_2,&local_78);
      FUN_1425fb990(param_1 + 0x100,&local_78,&local_f8,&local_30);
    }
    else {
      if (-1 < (short)local_b0) {
        local_ac = (int)(short)local_b0 >> 5;
      }
      iVar1 = FUN_1424a83f0(&local_b8,0,local_ac,local_34,4,0);
      local_34[iVar1] = 0;
      local_78 = &PTR_FUN_149e18960;
      local_70 = 2;
      (**(code **)(**(longlong **)(param_1 + 0x180) + 0x50))
                (*(longlong **)(param_1 + 0x180),local_34,&local_78);
      FUN_1425fb990(param_1 + 0x100,&local_78,&local_f8,&local_30);
    }
    FUN_140859a90(&local_78);
    if (local_30 < 1) {
      if (0x1f < local_f0) {
        puVar2 = (undefined *)FUN_1425deff0(param_1 + 0x188,&local_f8,&local_30);
        goto joined_r0x0001425dd271;
      }
      puVar2 = (undefined *)0x0;
      goto LAB_1425dd399;
    }
  }
  puVar2 = (undefined *)0x0;
LAB_1425dd41e:
  FUN_140859a90(&local_b8);
  FUN_140859a90(&local_f8);
  return puVar2;
}



// FUNCTION 1425dd450 Unwind@1425dd450 body=42 status=ok
// SIG undefined Unwind@1425dd450(void)

void Unwind_1425dd450(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x1c0);
  return;
}



// FUNCTION 1425dd480 Unwind@1425dd480 body=42 status=ok
// SIG undefined Unwind@1425dd480(void)

void Unwind_1425dd480(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x1c0);
  return;
}



// FUNCTION 1425dd4b0 Unwind@1425dd4b0 body=54 status=ok
// SIG undefined Unwind@1425dd4b0(void)

void Unwind_1425dd4b0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x180);
  FUN_140859a90(param_2 + 0x140);
  return;
}



// FUNCTION 1425dd4f0 FUN_1425dd4f0 body=130 status=ok
// SIG undefined FUN_1425dd4f0(void)

ulonglong FUN_1425dd4f0(longlong param_1,longlong param_2,undefined4 param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = *(ushort *)(param_2 + 8);
  uVar2 = *(ushort *)(param_1 + 8);
  if ((uVar1 & 1) == 0) {
    if ((short)uVar2 < 0) {
      iVar3 = *(int *)(param_1 + 0xc);
    }
    else {
      iVar3 = (int)(short)uVar2 >> 5;
    }
    if ((short)uVar1 < 0) {
      uVar5 = *(uint *)(param_2 + 0xc);
    }
    else {
      uVar5 = (int)(short)uVar1 >> 5;
    }
    uVar6 = (int)uVar5 >> 0x1f & uVar5;
    if ((int)uVar5 < 1) {
      uVar5 = 0;
    }
    if ((uVar1 & 2) == 0) {
      param_2 = *(longlong *)(param_2 + 0x18);
    }
    else {
      param_2 = param_2 + 10;
    }
    uVar4 = FUN_14257e950(param_1,0,iVar3,param_2,uVar6,uVar5,param_3);
    return uVar4;
  }
  return (ulonglong)CONCAT11((char)(uVar2 >> 8),(uVar2 & 1) == 0);
}



// FUNCTION 1425dd580 FUN_1425dd580 body=93 status=ok
// SIG undefined FUN_1425dd580(void)

ulonglong FUN_1425dd580(longlong param_1,longlong param_2)

{
  ushort uVar1;
  short sVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *(ushort *)(param_1 + 8);
  if ((uVar1 & 1) == 0) {
    if ((short)uVar1 < 0) {
      iVar5 = *(int *)(param_1 + 0xc);
    }
    else {
      iVar5 = (int)(short)uVar1 >> 5;
    }
    sVar2 = *(short *)(param_2 + 8);
    if (sVar2 < 0) {
      iVar6 = *(int *)(param_2 + 0xc);
    }
    else {
      iVar6 = (int)sVar2 >> 5;
    }
    uVar3 = 0;
    if ((((int)sVar2 & 1U) == 0) && (iVar5 == iVar6)) {
      uVar4 = FUN_1412ae090();
      uVar3 = CONCAT71((int7)((ulonglong)uVar4 >> 8),(char)uVar4 != '\0');
    }
  }
  else {
    uVar3 = (ulonglong)(*(byte *)(param_2 + 8) & 1);
  }
  return uVar3 ^ 1;
}



// FUNCTION 1425dd5e0 FUN_1425dd5e0 body=474 status=ok
// SIG undefined FUN_1425dd5e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1425dd5e0(undefined8 param_1,longlong param_2,longlong param_3,undefined4 param_4,
             longlong param_5,undefined8 param_6)

{
  longlong lVar1;
  
  FUN_1424a7130(param_6);
  if (((0x1f < *(ushort *)(param_2 + 8)) && (0x1f < *(ushort *)(param_3 + 8))) &&
     (0x1f < *(ushort *)(param_5 + 8))) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c7fbf60) {
      FUN_144b3d300(&DAT_14c7fbf60);
      if (DAT_14c7fbf60 == -1) {
        _DAT_14c7fbf50 = 0;
        uRam000000014c7fbf58 = 0;
        _DAT_14c7fbf40 = 0;
        uRam000000014c7fbf48 = 0;
        _DAT_14c7fbf30 = 0;
        uRam000000014c7fbf38 = 0;
        _DAT_14c7fbf20 = 0;
        uRam000000014c7fbf28 = 0;
        _DAT_14c7fbf10 = 0;
        uRam000000014c7fbf18 = 0;
        _Mtx_init_in_situ(&DAT_14c7fbf10,2);
        atexit((_func_5014 *)&LAB_1425ded90);
        _Init_thread_footer(&DAT_14c7fbf60);
      }
    }
    FUN_142501320(&DAT_14c7fbf10);
    lVar1 = FUN_1425dd7c0(param_1,param_2,param_3,param_4,param_5);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c7fbf60) {
      FUN_144b3d300(&DAT_14c7fbf60);
      if (DAT_14c7fbf60 == -1) {
        _DAT_14c7fbf50 = 0;
        uRam000000014c7fbf58 = 0;
        _DAT_14c7fbf40 = 0;
        uRam000000014c7fbf48 = 0;
        _DAT_14c7fbf30 = 0;
        uRam000000014c7fbf38 = 0;
        _DAT_14c7fbf20 = 0;
        uRam000000014c7fbf28 = 0;
        _DAT_14c7fbf10 = 0;
        uRam000000014c7fbf18 = 0;
        _Mtx_init_in_situ(&DAT_14c7fbf10,2);
        atexit((_func_5014 *)&LAB_1425ded90);
        _Init_thread_footer(&DAT_14c7fbf60);
      }
    }
    FUN_142501400(&DAT_14c7fbf10);
    if (lVar1 == 0) {
      FUN_1424a7130(param_6);
    }
    else {
      FUN_1424a8f10(param_6,1,lVar1,0xffffffff);
    }
  }
  return param_6;
}



// FUNCTION 1425dd7c0 FUN_1425dd7c0 body=774 status=ok
// SIG undefined FUN_1425dd7c0(void)

longlong FUN_1425dd7c0(longlong param_1,longlong param_2,undefined8 param_3,char param_4,
                      undefined8 param_5)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined8 in_stack_fffffffffffffed8;
  undefined4 uVar7;
  undefined **local_118;
  ushort local_110;
  int local_10c;
  undefined **local_d8;
  ushort local_d0;
  undefined **local_98;
  ushort local_90;
  int local_8c;
  undefined8 local_58;
  undefined8 local_50;
  char local_48;
  int local_3c [3];
  
  uVar7 = (undefined4)((ulonglong)in_stack_fffffffffffffed8 >> 0x20);
  local_3c[1] = -2;
  local_3c[2] = -1;
  local_58 = thunk_FUN_1424b8590(param_2);
  local_50 = FUN_14252c150(param_3);
  local_48 = param_4;
  lVar4 = FUN_142502620(*(undefined8 *)(param_1 + 0xf8),&local_58);
  if (lVar4 != 0) {
    return lVar4;
  }
  local_d8 = &PTR_FUN_149e18960;
  local_d0 = 2;
  local_118 = &PTR_FUN_149e18960;
  local_110 = 2;
  FUN_14252a870(param_2,&local_118,0);
  if (local_110 < 0x20) {
    (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x50))
              (*(longlong **)(param_1 + 0xe8),param_2,&local_d8);
    if (local_d0 < 0x20) {
      FUN_1424a7600(&local_d8,param_2,0);
    }
    goto LAB_1425dd986;
  }
  if (-1 < (short)local_110) {
    local_10c = (int)(short)local_110 >> 5;
  }
  iVar3 = FUN_1424a83f0(&local_118,0,local_10c,local_3c,CONCAT44(uVar7,4),0);
  *(undefined1 *)((longlong)local_3c + (longlong)iVar3) = 0;
  local_98 = &PTR_FUN_149e18960;
  local_90 = 2;
  (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x38))
            (*(longlong **)(param_1 + 0xe8),param_3,local_3c,&local_98);
  uVar1 = *(ushort *)(param_2 + 8);
  if ((uVar1 & 1) == 0) {
    if ((short)uVar1 < 0) {
      iVar3 = *(int *)(param_2 + 0xc);
    }
    else {
      iVar3 = (int)(short)uVar1 >> 5;
    }
    if (-1 < (short)local_90) {
      local_8c = (int)(short)local_90 >> 5;
    }
    if ((((local_90 & 1) != 0) || (iVar3 != local_8c)) ||
       (cVar2 = FUN_1412ae090(param_2,&local_98), cVar2 == '\0')) goto LAB_1425dd969;
LAB_1425dd94f:
    (**(code **)(**(longlong **)(param_1 + 0x180) + 0x50))
              (*(longlong **)(param_1 + 0x180),local_3c,&local_d8);
  }
  else {
    if ((local_90 & 1) != 0) goto LAB_1425dd94f;
LAB_1425dd969:
    (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x50))
              (*(longlong **)(param_1 + 0xe8),param_2,&local_d8);
  }
  FUN_140859a90(&local_98);
LAB_1425dd986:
  local_3c[0] = 0;
  local_98 = &PTR_FUN_149e18960;
  local_90 = 2;
  FUN_1425fba70(param_1 + 0x140,&local_d8,param_5,&local_98,local_3c);
  if (local_3c[0] < 1) {
    lVar4 = FUN_1425deff0(param_1 + 0x188,&local_98,local_3c);
    if ((local_3c[0] < 1) &&
       (puVar5 = (undefined8 *)FUN_1424da030(0x18), puVar5 != (undefined8 *)0x0)) {
      *puVar5 = local_58;
      puVar5[1] = local_50;
      *(char *)(puVar5 + 2) = local_48;
      FUN_142502aa0(*(undefined8 *)(param_1 + 0xf8),puVar5,lVar4,local_3c);
      if (local_3c[0] < 1) {
        piVar6 = (int *)FUN_1424da030(0x10);
        if (piVar6 != (int *)0x0) {
          *piVar6 = (uint)(param_4 == '\0') * 2 + 2;
          *(undefined8 *)(piVar6 + 2) = local_58;
          FUN_1425df020(param_1 + 0x198,lVar4,piVar6,local_3c);
        }
      }
      else {
        FUN_1424da110(puVar5);
      }
    }
  }
  else {
    lVar4 = 0;
  }
  FUN_140859a90(&local_98);
  FUN_140859a90(&local_118);
  FUN_140859a90(&local_d8);
  return lVar4;
}



// FUNCTION 1425ddad0 Unwind@1425ddad0 body=47 status=ok
// SIG undefined Unwind@1425ddad0(void)

void Unwind_1425ddad0(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xb0);
  return;
}



// FUNCTION 1425ddb00 Unwind@1425ddb00 body=47 status=ok
// SIG undefined Unwind@1425ddb00(void)

void Unwind_1425ddb00(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0xb0);
  return;
}



// FUNCTION 1425ddb30 Unwind@1425ddb30 body=56 status=ok
// SIG undefined Unwind@1425ddb30(void)

void Unwind_1425ddb30(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x30);
  FUN_140859a90(param_2 + 0x70);
  return;
}



// FUNCTION 1425ddb70 FUN_1425ddb70 body=903 status=ok
// SIG undefined FUN_1425ddb70(void)

int FUN_1425ddb70(longlong param_1,longlong param_2,int param_3,uint param_4,undefined8 param_5,
                 undefined4 *param_6,int *param_7)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  undefined **local_e8;
  undefined2 local_e0;
  undefined **local_a8;
  undefined2 local_a0;
  longlong local_68;
  longlong local_60;
  undefined4 local_54;
  int local_50;
  undefined4 local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  *param_6 = 0;
  FUN_1424a7130(param_5);
  if (0 < *param_7) {
    return 0;
  }
  local_60 = param_2;
  local_50 = param_3;
  if (param_4 == 0) {
    local_a8 = &PTR_FUN_149e18960;
    local_a0 = 2;
    local_4c = 0;
    iVar5 = 0;
  }
  else {
    uVar3 = (int)(param_4 << 0x1e) >> 0x1f & 3;
    uVar1 = uVar3 + 0x18;
    if ((param_4 & 4) == 0) {
      uVar1 = uVar3;
    }
    puVar6 = (undefined8 *)
             (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x70))
                       (*(longlong **)(param_1 + 0xe8),param_2,param_3,uVar1,param_7);
    if (0 < *param_7) {
      return 0;
    }
    local_a8 = &PTR_FUN_149e18960;
    local_a0 = 2;
    if (puVar6 != (undefined8 *)0x0) {
      local_e8 = &PTR_FUN_149e18960;
      local_e0 = 2;
      local_68 = param_1 + 0x1d1;
      local_54 = 0;
      local_4c = 0;
      iVar11 = 0;
      for (iVar10 = 0; iVar4 = FUN_14252a0c0(puVar6), iVar5 = iVar11, iVar10 < iVar4;
          iVar10 = iVar10 + 1) {
        iVar5 = FUN_14252a0f0(puVar6,iVar10);
        if (iVar5 <= iVar11) goto LAB_1425ddc63;
        cVar2 = FUN_14252a110(puVar6,iVar10,&local_a8);
        if ((cVar2 == '\0') && (cVar2 = FUN_14252a170(puVar6,iVar10,&local_e8), cVar2 != '\0')) {
          (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x38))
                    (*(longlong **)(param_1 + 0xe8),&local_e8,local_68,&local_a8);
        }
        iVar4 = FUN_14252a0d0(puVar6,iVar10);
        if (0 < *param_7) break;
        iVar11 = iVar5;
        if (iVar4 - 2U < 0x1f) {
          switch(iVar4) {
          case 2:
          case 0x10:
            local_4c = 1;
            local_54 = (undefined4)
                       CONCAT71((int7)((ulonglong)
                                       ((longlong)&switchD_1425ddcf0::switchdataD_149c4b93c +
                                       (longlong)
                                       (int)(&switchD_1425ddcf0::switchdataD_149c4b93c)[iVar4 - 2U])
                                      >> 8),1);
            break;
          default:
            goto switchD_1425ddcf0_caseD_3;
          case 4:
          case 0x20:
            local_4c = 2;
          }
        }
        else {
switchD_1425ddcf0_caseD_3:
          local_4c = 0;
        }
LAB_1425ddc63:
      }
      (**(code **)*puVar6)(puVar6,1);
      iVar11 = 0;
      if (*param_7 < 1) {
        if (*(short *)(local_60 + 8) < 0) {
          iVar11 = *(int *)(local_60 + 0xc);
        }
        else {
          iVar11 = (int)*(short *)(local_60 + 8) >> 5;
        }
        if ((iVar5 != iVar11 - local_50) || ((char)local_54 != '\0')) {
          FUN_140859a90(&local_e8);
          goto LAB_1425ddd3c;
        }
        FUN_1424a7600(param_5,&local_a8,0);
        *param_6 = local_4c;
        iVar11 = iVar5;
      }
      FUN_140859a90(&local_e8);
      goto LAB_1425dded8;
    }
    local_4c = 0;
    iVar5 = 0;
  }
LAB_1425ddd3c:
  plVar7 = (longlong *)FUN_1425ddf90(param_1,local_60,local_50,param_4,param_7);
  iVar11 = 0;
  if (*param_7 < 1) {
    if (plVar7 != (longlong *)0x0) {
      iVar11 = 0;
      while (puVar6 = (undefined8 *)*plVar7, puVar6 != (undefined8 *)0x0) {
        if (*(int *)(puVar6 + 1) <= iVar11) {
          (**(code **)*puVar6)(puVar6,1);
          break;
        }
        lVar8 = FUN_142516630(puVar6,iVar11);
        if (lVar8 == 0) {
          if (iVar5 < 0) goto LAB_1425dddca;
        }
        else if (iVar5 <= *(int *)(lVar8 + 8)) {
LAB_1425dddca:
          lVar8 = FUN_142516630(*plVar7,iVar11);
          if (lVar8 == 0) {
            iVar5 = -1;
          }
          else {
            iVar5 = *(int *)(lVar8 + 8);
          }
          plVar9 = (longlong *)FUN_142516630(*plVar7,iVar11);
          if ((plVar9 == (longlong *)0x0) || (*(longlong *)(*plVar9 + 8) == 0)) {
            local_4c = 0;
            FUN_1424a7130(&local_a8);
          }
          else {
            local_4c = 0;
            FUN_1424a8f10(&local_a8,1,*(longlong *)(*plVar9 + 8),0xffffffff);
          }
        }
        iVar11 = iVar11 + 1;
      }
      FUN_1401773f0(plVar7);
    }
    iVar11 = iVar5;
    if (0 < iVar5) {
      *param_6 = local_4c;
      FUN_1424a7600(param_5,&local_a8,0);
    }
  }
LAB_1425dded8:
  FUN_140859a90(&local_a8);
  return iVar11;
}



// FUNCTION 1425ddf10 Unwind@1425ddf10 body=55 status=ok
// SIG undefined Unwind@1425ddf10(void)

void Unwind_1425ddf10(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x30);
  return;
}



// FUNCTION 1425ddf50 Unwind@1425ddf50 body=55 status=ok
// SIG undefined Unwind@1425ddf50(void)

void Unwind_1425ddf50(undefined8 param_1,longlong param_2)

{
  FUN_140859a90(param_2 + 0x70);
  return;
}



// FUNCTION 1425ddf90 FUN_1425ddf90 body=1450 status=ok
// SIG undefined FUN_1425ddf90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1425ddf90(longlong param_1,longlong param_2,int param_3,undefined4 param_4,int *param_5)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined **local_68;
  undefined4 local_60;
  undefined8 *local_58;
  int local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_68 = icu_64::GNameSearchHandler::vftable;
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  local_60 = param_4;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c7fbf60) && (FUN_144b3d300(&DAT_14c7fbf60), DAT_14c7fbf60 == -1)) {
    _DAT_14c7fbf50 = 0;
    uRam000000014c7fbf58 = 0;
    _DAT_14c7fbf40 = 0;
    uRam000000014c7fbf48 = 0;
    _DAT_14c7fbf30 = 0;
    uRam000000014c7fbf38 = 0;
    _DAT_14c7fbf20 = 0;
    uRam000000014c7fbf28 = 0;
    _DAT_14c7fbf10 = 0;
    uRam000000014c7fbf18 = 0;
    _Mtx_init_in_situ(&DAT_14c7fbf10,2);
    atexit((_func_5014 *)&LAB_1425ded90);
    _Init_thread_footer(&DAT_14c7fbf60);
  }
  FUN_142501320(&DAT_14c7fbf10);
  FUN_1425df4e0(param_1 + 0x198,param_2,param_3,&local_68,param_5);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c7fbf60) && (FUN_144b3d300(&DAT_14c7fbf60), DAT_14c7fbf60 == -1)) {
    _DAT_14c7fbf50 = 0;
    uRam000000014c7fbf58 = 0;
    _DAT_14c7fbf40 = 0;
    uRam000000014c7fbf48 = 0;
    _DAT_14c7fbf30 = 0;
    uRam000000014c7fbf38 = 0;
    _DAT_14c7fbf20 = 0;
    uRam000000014c7fbf28 = 0;
    _DAT_14c7fbf10 = 0;
    uRam000000014c7fbf18 = 0;
    _Mtx_init_in_situ(&DAT_14c7fbf10,2);
    atexit((_func_5014 *)&LAB_1425ded90);
    _Init_thread_footer(&DAT_14c7fbf60);
  }
  FUN_142501400(&DAT_14c7fbf10);
  iVar1 = local_50;
  puVar6 = local_58;
  if (*param_5 < 1) {
    local_58 = (undefined8 *)0x0;
    local_50 = 0;
    if (puVar6 == (undefined8 *)0x0) {
LAB_1425de0b3:
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c7fbf60) && (FUN_144b3d300(&DAT_14c7fbf60), DAT_14c7fbf60 == -1))
      {
        _DAT_14c7fbf50 = 0;
        uRam000000014c7fbf58 = 0;
        _DAT_14c7fbf40 = 0;
        uRam000000014c7fbf48 = 0;
        _DAT_14c7fbf30 = 0;
        uRam000000014c7fbf38 = 0;
        _DAT_14c7fbf20 = 0;
        uRam000000014c7fbf28 = 0;
        _DAT_14c7fbf10 = 0;
        uRam000000014c7fbf18 = 0;
        _Mtx_init_in_situ(&DAT_14c7fbf10,2);
        atexit((_func_5014 *)&LAB_1425ded90);
        _Init_thread_footer(&DAT_14c7fbf60);
      }
      FUN_142501320(&DAT_14c7fbf10);
      if (*(char *)(param_1 + 0x1d0) == '\0') {
        plVar2 = (longlong *)thunk_FUN_1424b7c40(1,0,0,param_5);
        if (*param_5 < 1) {
          while ((lVar3 = (**(code **)(*plVar2 + 0x30))(plVar2,param_5), lVar3 != 0 &&
                 (*param_5 < 1))) {
            FUN_1425dc370(param_1,lVar3);
          }
        }
        else if (plVar2 == (longlong *)0x0) goto LAB_1425de14d;
        (**(code **)*plVar2)(plVar2,1);
        if (*param_5 < 1) {
          *(undefined1 *)(param_1 + 0x1d0) = 1;
        }
      }
LAB_1425de14d:
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c7fbf60) && (FUN_144b3d300(&DAT_14c7fbf60), DAT_14c7fbf60 == -1))
      {
        _DAT_14c7fbf50 = 0;
        uRam000000014c7fbf58 = 0;
        _DAT_14c7fbf40 = 0;
        uRam000000014c7fbf48 = 0;
        _DAT_14c7fbf30 = 0;
        uRam000000014c7fbf38 = 0;
        _DAT_14c7fbf20 = 0;
        uRam000000014c7fbf28 = 0;
        _DAT_14c7fbf10 = 0;
        uRam000000014c7fbf18 = 0;
        _Mtx_init_in_situ(&DAT_14c7fbf10,2);
        atexit((_func_5014 *)&LAB_1425ded90);
        _Init_thread_footer(&DAT_14c7fbf60);
      }
      FUN_142501400(&DAT_14c7fbf10);
      if (0 < *param_5) goto LAB_1425de277;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c7fbf60) && (FUN_144b3d300(&DAT_14c7fbf60), DAT_14c7fbf60 == -1))
      {
        _DAT_14c7fbf50 = 0;
        uRam000000014c7fbf58 = 0;
        _DAT_14c7fbf40 = 0;
        uRam000000014c7fbf48 = 0;
        _DAT_14c7fbf30 = 0;
        uRam000000014c7fbf38 = 0;
        _DAT_14c7fbf20 = 0;
        uRam000000014c7fbf28 = 0;
        _DAT_14c7fbf10 = 0;
        uRam000000014c7fbf18 = 0;
        _Mtx_init_in_situ(&DAT_14c7fbf10,2);
        atexit((_func_5014 *)&LAB_1425ded90);
        _Init_thread_footer(&DAT_14c7fbf60);
      }
      FUN_142501320(&DAT_14c7fbf10);
      FUN_1425df4e0(param_1 + 0x198,param_2,param_3,&local_68,param_5);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c7fbf60) && (FUN_144b3d300(&DAT_14c7fbf60), DAT_14c7fbf60 == -1))
      {
        _DAT_14c7fbf50 = 0;
        uRam000000014c7fbf58 = 0;
        _DAT_14c7fbf40 = 0;
        uRam000000014c7fbf48 = 0;
        _DAT_14c7fbf30 = 0;
        uRam000000014c7fbf38 = 0;
        _DAT_14c7fbf20 = 0;
        uRam000000014c7fbf28 = 0;
        _DAT_14c7fbf10 = 0;
        uRam000000014c7fbf18 = 0;
        _Mtx_init_in_situ(&DAT_14c7fbf10,2);
        atexit((_func_5014 *)&LAB_1425ded90);
        _Init_thread_footer(&DAT_14c7fbf60);
      }
      FUN_142501400(&DAT_14c7fbf10);
      iVar1 = local_50;
      puVar6 = local_58;
      local_58 = (undefined8 *)0x0;
      local_50 = 0;
      if ((puVar6 == (undefined8 *)0x0) || (iVar1 < 1)) {
        local_68 = icu_64::GNameSearchHandler::vftable;
        puVar4 = (undefined8 *)0x0;
        goto LAB_1425de290;
      }
      puVar4 = (undefined8 *)thunk_FUN_1424da030(8);
      if (puVar4 == (undefined8 *)0x0) {
        *param_5 = 7;
        puVar4 = (undefined8 *)*puVar6;
        goto LAB_1425de270;
      }
      *puVar4 = puVar6;
    }
    else {
      if (*(short *)(param_2 + 8) < 0) {
        iVar5 = *(int *)(param_2 + 0xc);
      }
      else {
        iVar5 = (int)*(short *)(param_2 + 8) >> 5;
      }
      if ((iVar1 != iVar5 - param_3) && (*(char *)(param_1 + 0x1d0) == '\0')) {
        (**(code **)*puVar6)(puVar6,1);
        goto LAB_1425de0b3;
      }
      puVar4 = (undefined8 *)thunk_FUN_1424da030(8);
      if (puVar4 == (undefined8 *)0x0) {
        *param_5 = 7;
        puVar4 = (undefined8 *)*puVar6;
LAB_1425de270:
        (*(code *)*puVar4)(puVar6,1);
        goto LAB_1425de277;
      }
      *puVar4 = puVar6;
    }
  }
  else {
LAB_1425de277:
    puVar4 = (undefined8 *)0x0;
  }
  local_68 = icu_64::GNameSearchHandler::vftable;
  if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,1);
  }
LAB_1425de290:
  FUN_1425deec0(&local_68);
  return puVar4;
}



// FUNCTION 1425de540 Unwind@1425de540 body=52 status=ok
// SIG undefined Unwind@1425de540(void)

void Unwind_1425de540(undefined8 param_1,longlong param_2)

{
  FUN_1425db8f0(param_2 + 0x30);
  return;
}



// FUNCTION 1425de580 FUN_1425de580 body=334 status=ok
// SIG undefined FUN_1425de580(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1425de580(undefined8 *param_1)

{
  *param_1 = icu_64::TimeZoneGenericNames::vftable;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c7fbfb8) {
    FUN_144b3d300(&DAT_14c7fbfb8);
    if (DAT_14c7fbfb8 == -1) {
      _DAT_14c7fbfa8 = 0;
      uRam000000014c7fbfb0 = 0;
      _DAT_14c7fbf98 = 0;
      uRam000000014c7fbfa0 = 0;
      _DAT_14c7fbf88 = 0;
      uRam000000014c7fbf90 = 0;
      _DAT_14c7fbf78 = 0;
      uRam000000014c7fbf80 = 0;
      _DAT_14c7fbf68 = 0;
      uRam000000014c7fbf70 = 0;
      _Mtx_init_in_situ(&DAT_14c7fbf68,2);
      atexit((_func_5014 *)&LAB_1425deda0);
      _Init_thread_footer(&DAT_14c7fbfb8);
    }
  }
  FUN_142501320(&DAT_14c7fbf68);
  *(int *)(param_1[1] + 8) = *(int *)(param_1[1] + 8) + -1;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c7fbfb8) {
    FUN_144b3d300(&DAT_14c7fbfb8);
    if (DAT_14c7fbfb8 == -1) {
      _DAT_14c7fbfa8 = 0;
      uRam000000014c7fbfb0 = 0;
      _DAT_14c7fbf98 = 0;
      uRam000000014c7fbfa0 = 0;
      _DAT_14c7fbf88 = 0;
      uRam000000014c7fbf90 = 0;
      _DAT_14c7fbf78 = 0;
      uRam000000014c7fbf80 = 0;
      _DAT_14c7fbf68 = 0;
      uRam000000014c7fbf70 = 0;
      _Mtx_init_in_situ(&DAT_14c7fbf68,2);
      atexit((_func_5014 *)&LAB_1425deda0);
      _Init_thread_footer(&DAT_14c7fbfb8);
    }
  }
  FUN_142501400(&DAT_14c7fbf68);
  return;
}



// FUNCTION 1425de6d0 FUN_1425de6d0 body=877 status=ok
// SIG undefined FUN_1425de6d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1425de6d0(longlong param_1,int *param_2)

{
  int iVar1;
  char *_Str;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  size_t sVar6;
  char *_Dest;
  longlong lVar7;
  undefined8 uVar8;
  double dVar9;
  undefined4 local_64;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  if (0 < *param_2) {
    return (undefined8 *)0x0;
  }
  puVar3 = (undefined8 *)thunk_FUN_1424da030(0x10);
  if (puVar3 == (undefined8 *)0x0) {
    *param_2 = 7;
    return (undefined8 *)0x0;
  }
  *puVar3 = icu_64::TimeZoneGenericNames::vftable;
  puVar3[1] = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c7fbfb8) && (FUN_144b3d300(&DAT_14c7fbfb8), DAT_14c7fbfb8 == -1)) {
    _DAT_14c7fbfa8 = 0;
    uRam000000014c7fbfb0 = 0;
    _DAT_14c7fbf98 = 0;
    uRam000000014c7fbfa0 = 0;
    _DAT_14c7fbf88 = 0;
    uRam000000014c7fbf90 = 0;
    _DAT_14c7fbf78 = 0;
    uRam000000014c7fbf80 = 0;
    _DAT_14c7fbf68 = 0;
    uRam000000014c7fbf70 = 0;
    _Mtx_init_in_situ(&DAT_14c7fbf68,2);
    atexit((_func_5014 *)&LAB_1425deda0);
    _Init_thread_footer(&DAT_14c7fbfb8);
  }
  FUN_142501320(&DAT_14c7fbf68);
  if (DAT_14c7fbef8 == '\0') {
    DAT_14c7fbf00 = FUN_142501e10(FUN_1425031c0,FUN_142503270,0,param_2);
    if (0 < *param_2) goto LAB_1425de7c8;
    FUN_142502340(DAT_14c7fbf00,FUN_1424da110);
    FUN_142502350(DAT_14c7fbf00,FUN_1425deaa0);
    DAT_14c7fbef8 = '\x01';
    FUN_14251f960(0xf,FUN_1425dead0);
  }
  if (0 < *param_2) {
LAB_1425de7c8:
    FUN_142501400(&DAT_14c7fbf68);
    return (undefined8 *)0x0;
  }
  _Str = *(char **)(param_1 + 0x28);
  puVar4 = (undefined8 *)FUN_142502620(DAT_14c7fbf00,_Str);
  if (puVar4 != (undefined8 *)0x0) {
    *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
    uVar8 = FUN_1424d9690();
    puVar4[2] = uVar8;
    goto LAB_1425de90b;
  }
  puVar5 = (undefined8 *)thunk_FUN_1424da030(0x1d8);
  if (puVar5 == (undefined8 *)0x0) {
    *param_2 = 7;
    puVar4 = (undefined8 *)0x0;
    goto LAB_1425de90b;
  }
  FUN_1425dbae0(puVar5,param_1,param_2);
  if (*param_2 < 1) {
    sVar6 = strlen(_Str);
    _Dest = (char *)FUN_1424da030(sVar6 + 1);
    if (_Dest == (char *)0x0) {
      _Dest = (char *)0x0;
LAB_1425de8da:
      *param_2 = 7;
    }
    else {
      strcpy(_Dest,_Str);
      if (*param_2 < 1) {
        puVar4 = (undefined8 *)FUN_1424da030(0x18);
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = puVar5;
          *(undefined4 *)(puVar4 + 1) = 1;
          uVar8 = FUN_1424d9690();
          puVar4[2] = uVar8;
          FUN_142502aa0(DAT_14c7fbf00,_Dest,puVar4,param_2);
          if (*param_2 < 1) goto LAB_1425de90b;
          goto LAB_1425de8e2;
        }
        goto LAB_1425de8da;
      }
    }
    puVar4 = (undefined8 *)0x0;
  }
  else {
    _Dest = (char *)0x0;
    puVar4 = (undefined8 *)0x0;
  }
LAB_1425de8e2:
  (**(code **)*puVar5)(puVar5,1);
  if (_Dest != (char *)0x0) {
    FUN_1424da110(_Dest);
  }
  if (puVar4 != (undefined8 *)0x0) {
    FUN_1424da110(puVar4);
  }
  puVar4 = (undefined8 *)0x0;
LAB_1425de90b:
  iVar1 = DAT_14c7fbf08 + 1;
  bVar2 = 0x62 < DAT_14c7fbf08;
  DAT_14c7fbf08 = iVar1;
  if (bVar2) {
    local_64 = 0xffffffff;
    dVar9 = (double)FUN_1424d9690();
    lVar7 = FUN_1425022e0(DAT_14c7fbf00,&local_64);
    if (lVar7 != 0) {
      do {
        if ((*(int *)(*(longlong *)(lVar7 + 8) + 8) < 1) &&
           (180000.0 < dVar9 - *(double *)(*(longlong *)(lVar7 + 8) + 0x10))) {
          FUN_142503000(DAT_14c7fbf00,lVar7);
        }
        lVar7 = FUN_1425022e0(DAT_14c7fbf00,&local_64);
      } while (lVar7 != 0);
    }
    DAT_14c7fbf08 = 0;
  }
  FUN_142501400(&DAT_14c7fbf68);
  if (puVar4 == (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
    return (undefined8 *)0x0;
  }
  puVar3[1] = puVar4;
  return puVar3;
}



// FUNCTION 1425dea50 Unwind@1425dea50 body=77 status=ok
// SIG undefined Unwind@1425dea50(void)

void Unwind_1425dea50(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x28));
  FUN_142501400(&DAT_14c7fbf68);
  return;
}



// FUNCTION 1425deaa0 FUN_1425deaa0 body=39 status=ok
// SIG undefined FUN_1425deaa0(void)

void FUN_1425deaa0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1424da110(param_1);
  return;
}



// FUNCTION 1425dead0 FUN_1425dead0 body=46 status=ok
// SIG undefined FUN_1425dead0(void)

undefined1 FUN_1425dead0(void)

{
  if (DAT_14c7fbf00 != 0) {
    FUN_142502220();
    DAT_14c7fbf00 = 0;
  }
  DAT_14c7fbef8 = 0;
  return 1;
}



// FUNCTION 1425deb00 FUN_1425deb00 body=12 status=ok
// SIG undefined FUN_1425deb00(void)

undefined8 FUN_1425deb00(longlong param_1,longlong param_2)

{
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 8) >> 8),
                  *(longlong *)(param_1 + 8) == *(longlong *)(param_2 + 8));
}



// FUNCTION 1425deb10 FUN_1425deb10 body=374 status=ok
// SIG undefined FUN_1425deb10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1425deb10(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)thunk_FUN_1424da030(0x10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = icu_64::TimeZoneGenericNames::vftable;
    puVar2[1] = 0;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c7fbfb8) {
      FUN_144b3d300(&DAT_14c7fbfb8);
      if (DAT_14c7fbfb8 == -1) {
        _DAT_14c7fbfa8 = 0;
        uRam000000014c7fbfb0 = 0;
        _DAT_14c7fbf98 = 0;
        uRam000000014c7fbfa0 = 0;
        _DAT_14c7fbf88 = 0;
        uRam000000014c7fbf90 = 0;
        _DAT_14c7fbf78 = 0;
        uRam000000014c7fbf80 = 0;
        _DAT_14c7fbf68 = 0;
        uRam000000014c7fbf70 = 0;
        _Mtx_init_in_situ(&DAT_14c7fbf68,2);
        atexit((_func_5014 *)&LAB_1425deda0);
        _Init_thread_footer(&DAT_14c7fbfb8);
      }
    }
    FUN_142501320(&DAT_14c7fbf68);
    piVar1 = (int *)(*(longlong *)(param_1 + 8) + 8);
    *piVar1 = *piVar1 + 1;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c7fbfb8) {
      FUN_144b3d300(&DAT_14c7fbfb8);
      if (DAT_14c7fbfb8 == -1) {
        _DAT_14c7fbfa8 = 0;
        uRam000000014c7fbfb0 = 0;
        _DAT_14c7fbf98 = 0;
        uRam000000014c7fbfa0 = 0;
        _DAT_14c7fbf88 = 0;
        uRam000000014c7fbf90 = 0;
        _DAT_14c7fbf78 = 0;
        uRam000000014c7fbf80 = 0;
        _DAT_14c7fbf68 = 0;
        uRam000000014c7fbf70 = 0;
        _Mtx_init_in_situ(&DAT_14c7fbf68,2);
        atexit((_func_5014 *)&LAB_1425deda0);
        _Init_thread_footer(&DAT_14c7fbfb8);
      }
    }
    FUN_142501400(&DAT_14c7fbf68);
  }
  return puVar2;
}



// FUNCTION 1425dec90 FUN_1425dec90 body=12 status=ok
// SIG undefined FUN_1425dec90(void)

void FUN_1425dec90(longlong param_1)

{
  FUN_1425dc570(**(undefined8 **)(param_1 + 8));
  return;
}



// FUNCTION 1425deca0 FUN_1425deca0 body=12 status=ok
// SIG undefined FUN_1425deca0(void)

void FUN_1425deca0(longlong param_1)

{
  FUN_1425dc6e0(**(undefined8 **)(param_1 + 8));
  return;
}



// FUNCTION 1425decb0 FUN_1425decb0 body=12 status=ok
// SIG undefined FUN_1425decb0(void)

void FUN_1425decb0(longlong param_1)

{
  FUN_1425ddb70(**(undefined8 **)(param_1 + 8));
  return;
}



// FUNCTION 1425decc0 FUN_1425decc0 body=70 status=ok
// SIG undefined FUN_1425decc0(void)

undefined8 * FUN_1425decc0(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = icu_64::GNameSearchHandler::vftable;
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1425deec0(param_1);
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1425ded10 FUN_1425ded10 body=38 status=ok
// SIG undefined FUN_1425ded10(void)

undefined8 FUN_1425ded10(undefined8 param_1,int param_2)

{
  FUN_1425dc100();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1425ded40 FUN_1425ded40 body=38 status=ok
// SIG undefined FUN_1425ded40(void)

undefined8 FUN_1425ded40(undefined8 param_1,int param_2)

{
  FUN_1425de580();
  if (param_2 != 0) {
    FUN_1401773f0(param_1);
  }
  return param_1;
}



// FUNCTION 1425ded70 FUN_1425ded70 body=20 status=ok
// SIG undefined FUN_1425ded70(void)

bool FUN_1425ded70(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 8))();
  return cVar1 == '\0';
}



// FUNCTION 1425dedb0 FUN_1425dedb0 body=218 status=ok
// SIG undefined FUN_1425dedb0(void)

void FUN_1425dedb0(longlong *param_1,longlong param_2,code *UNRECOVERED_JUMPTABLE_00,int *param_4)

{
  longlong lVar1;
  
  if (*param_4 < 1) {
    lVar1 = *param_1;
    if (lVar1 != 0) {
      if (*(char *)((longlong)param_1 + 0xe) == '\0') {
        lVar1 = thunk_FUN_1424da030(0x28);
        if (lVar1 != 0) {
          FUN_142515f80(lVar1,UNRECOVERED_JUMPTABLE_00,0,1,param_4);
        }
        if (0 < *param_4) {
          if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x0001425dee6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE_00)(param_2);
          return;
        }
        FUN_1425163e0(lVar1,*param_1,param_4);
        *param_1 = lVar1;
        *(undefined1 *)((longlong)param_1 + 0xe) = 1;
      }
      FUN_1425163e0(lVar1,param_2,param_4);
      return;
    }
    *param_1 = param_2;
  }
  else if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001425dede2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(param_2);
    return;
  }
  return;
}



// FUNCTION 1425dee90 Unwind@1425dee90 body=40 status=ok
// SIG undefined Unwind@1425dee90(void)

void Unwind_1425dee90(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x30));
  return;
}



// FUNCTION 1425deec0 FUN_1425deec0 body=1 status=ok
// SIG undefined FUN_1425deec0(void)

void FUN_1425deec0(void)

{
  return;
}



// FUNCTION 1425deed0 FUN_1425deed0 body=40 status=ok
// SIG undefined FUN_1425deed0(void)

void FUN_1425deed0(undefined8 *param_1,undefined1 param_2,undefined8 param_3)

{
  *param_1 = icu_64::TextTrieMap::vftable;
  *(undefined1 *)(param_1 + 1) = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[6] = param_3;
  return;
}



// FUNCTION 1425def00 FUN_1425def00 body=185 status=ok
// SIG undefined FUN_1425def00(void)

void FUN_1425def00(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  *param_1 = icu_64::TextTrieMap::vftable;
  for (uVar4 = 0; lVar1 = param_1[2], (int)uVar4 < *(int *)((longlong)param_1 + 0x1c);
      uVar4 = uVar4 + 1) {
    puVar3 = *(undefined8 **)(lVar1 + (ulonglong)uVar4 * 0x10);
    if (puVar3 != (undefined8 *)0x0) {
      if (*(char *)(lVar1 + 0xe + (ulonglong)uVar4 * 0x10) == '\0') {
        if ((code *)param_1[6] != (code *)0x0) {
          (*(code *)param_1[6])();
        }
      }
      else {
        (**(code **)*puVar3)(puVar3,1,param_3,param_4,uVar5);
      }
    }
  }
  FUN_1424da110(lVar1);
  puVar3 = (undefined8 *)param_1[4];
  if (puVar3 != (undefined8 *)0x0) {
    for (uVar4 = 0; (int)uVar4 < *(int *)(puVar3 + 1); uVar4 = uVar4 + 2) {
      pcVar2 = (code *)param_1[6];
      if (pcVar2 != (code *)0x0) {
        uVar5 = FUN_142516630(puVar3,uVar4 | 1);
        (*pcVar2)(uVar5);
        puVar3 = (undefined8 *)param_1[4];
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0001425defb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar3)(puVar3,1);
    return;
  }
  return;
}



// FUNCTION 1425defd0 Unwind@1425defd0 body=22 status=ok
// SIG undefined Unwind@1425defd0(void)

void Unwind_1425defd0(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1425deff0 FUN_1425deff0 body=40 status=ok
// SIG undefined FUN_1425deff0(void)

void FUN_1425deff0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1424a8e50(param_2);
  FUN_1425df950(param_1,uVar1,param_3);
  return;
}



// FUNCTION 1425df020 FUN_1425df020 body=192 status=ok
// SIG undefined FUN_1425df020(void)

void FUN_1425df020(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  longlong lVar2;
  
  *(undefined1 *)(param_1 + 0x28) = 0;
  if (*(longlong *)(param_1 + 0x20) == 0) {
    lVar2 = thunk_FUN_1424da030(0x28);
    if (lVar2 == 0) {
      *(undefined8 *)(param_1 + 0x20) = 0;
      *param_4 = 7;
      goto LAB_1425df0bb;
    }
    FUN_142515e50(lVar2,param_4);
    *(longlong *)(param_1 + 0x20) = lVar2;
    iVar1 = *param_4;
  }
  else {
    iVar1 = *param_4;
  }
  if ((iVar1 < 1) && (FUN_1425163e0(*(undefined8 *)(param_1 + 0x20),param_2,param_4), *param_4 < 1))
  {
    FUN_1425163e0(*(undefined8 *)(param_1 + 0x20),param_3,param_4);
    return;
  }
LAB_1425df0bb:
  if (*(code **)(param_1 + 0x30) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001425df0d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x30))(param_2);
    return;
  }
  return;
}



// FUNCTION 1425df0e0 Unwind@1425df0e0 body=40 status=ok
// SIG undefined Unwind@1425df0e0(void)

void Unwind_1425df0e0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x20));
  return;
}


