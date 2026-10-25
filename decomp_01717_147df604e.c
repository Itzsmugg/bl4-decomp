// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147df604e FUN_147df604e body=202 status=ok
// SIG undefined FUN_147df604e(void)

undefined4 * FUN_147df604e(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  
  *param_1 = *param_2;
  uVar6 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = uVar6;
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  uVar3 = param_2[9];
  uVar4 = param_2[10];
  uVar5 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = uVar3;
  param_1[10] = uVar4;
  param_1[0xb] = uVar5;
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  if (param_1 != param_2) {
    if (*(longlong *)(param_1 + 0xe) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
    *(undefined8 *)(param_2 + 0xe) = 0;
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    *(undefined8 *)(param_2 + 0x10) = 0;
  }
  uVar6 = *(undefined8 *)(param_2 + 0x12);
  uVar7 = *(undefined8 *)(param_2 + 0x14);
  uVar8 = *(undefined8 *)(param_2 + 0x16);
  uVar9 = *(undefined8 *)(param_2 + 0x18);
  uVar10 = *(undefined8 *)(param_2 + 0x1a);
  uVar11 = *(undefined8 *)(param_2 + 0x1c);
  uVar12 = *(undefined8 *)(param_2 + 0x1f);
  *(undefined8 *)(param_1 + 0x1d) = *(undefined8 *)(param_2 + 0x1d);
  *(undefined8 *)(param_1 + 0x1f) = uVar12;
  *(undefined8 *)(param_1 + 0x1a) = uVar10;
  *(undefined8 *)(param_1 + 0x1c) = uVar11;
  *(undefined8 *)(param_1 + 0x16) = uVar8;
  *(undefined8 *)(param_1 + 0x18) = uVar9;
  *(undefined8 *)(param_1 + 0x12) = uVar6;
  *(undefined8 *)(param_1 + 0x14) = uVar7;
  lVar13 = 0x88;
  do {
    *(undefined8 *)((longlong)param_1 + lVar13 + 0x10) =
         *(undefined8 *)((longlong)param_2 + lVar13 + 0x10);
    uVar6 = ((undefined8 *)((longlong)param_2 + lVar13))[1];
    *(undefined8 *)((longlong)param_1 + lVar13) = *(undefined8 *)((longlong)param_2 + lVar13);
    ((undefined8 *)((longlong)param_1 + lVar13))[1] = uVar6;
    puVar1 = (undefined8 *)((longlong)param_2 + lVar13 + 0x18);
    uVar6 = puVar1[1];
    puVar2 = (undefined8 *)((longlong)param_1 + lVar13 + 0x18);
    *puVar2 = *puVar1;
    puVar2[1] = uVar6;
    *(undefined8 *)((longlong)param_1 + lVar13 + 0x28) =
         *(undefined8 *)((longlong)param_2 + lVar13 + 0x28);
    *(undefined4 *)((longlong)param_1 + lVar13 + 0x30) =
         *(undefined4 *)((longlong)param_2 + lVar13 + 0x30);
    lVar13 = lVar13 + 0x38;
  } while (lVar13 != 0xf8);
  return param_1;
}



// FUNCTION 147df6118 FUN_147df6118 body=68 status=ok
// SIG undefined FUN_147df6118(void)

int FUN_147df6118(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_147df61d6(param_1,iVar1);
  }
  FUN_147df615c((longlong)iVar1 * 0xf8 + *param_1,param_2);
  return iVar1;
}



// FUNCTION 147df615c FUN_147df615c body=121 status=ok
// SIG undefined FUN_147df615c(void)

void FUN_147df615c(undefined4 *param_1,int param_2)

{
  longlong lVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 2) = 0x7fefffffffffffff;
    *(undefined8 *)(param_1 + 4) = 0x7fefffffffffffff;
    *(undefined8 *)(param_1 + 6) = 0x7fefffffffffffff;
    *(undefined8 *)(param_1 + 8) = 0xffefffffffffffff;
    *(undefined8 *)(param_1 + 10) = 0xffefffffffffffff;
    *(undefined8 *)(param_1 + 0xc) = 0xffefffffffffffff;
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    lVar1 = 0xb0;
    do {
      *(undefined8 *)((longlong)param_1 + lVar1 + -0x28) = 0x7fefffffffffffff;
      *(undefined8 *)((longlong)param_1 + lVar1 + -0x20) = 0x7fefffffffffffff;
      *(undefined8 *)((longlong)param_1 + lVar1 + -0x18) = 0x7fefffffffffffff;
      *(undefined8 *)((longlong)param_1 + lVar1 + -0x10) = 0xffefffffffffffff;
      *(undefined8 *)((longlong)param_1 + lVar1 + -8) = 0xffefffffffffffff;
      *(undefined8 *)((longlong)param_1 + lVar1) = 0xffefffffffffffff;
      lVar1 = lVar1 + 0x38;
    } while (lVar1 != 0x120);
    param_1 = param_1 + 0x3e;
  }
  return;
}



// FUNCTION 147df61d6 FUN_147df61d6 body=150 status=ok
// SIG undefined FUN_147df61d6(void)

void FUN_147df61d6(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xf8,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xf8)) {
      uVar5 = uVar4 / 0xf8 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xf8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147df626e FUN_147df626e body=226 status=ok
// SIG undefined FUN_147df626e(void)

ulonglong FUN_147df626e(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  undefined7 uVar4;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar4 = (undefined7)((ulonglong)unaff_RSI >> 8);
  uVar3 = CONCAT71(uVar4,1);
  if (param_2 != -1) {
    if (DAT_14c75efd0 == '\x01') {
      lVar2 = *param_1;
      iVar1 = *(int *)(lVar2 + 0x14c);
      *(int *)(lVar2 + 0x14c) = iVar1 + 1;
      if (iVar1 < DAT_14c75efdc) {
        QueryPerformanceCounter(&local_20);
        if (1e-08 < ABS(*(double *)(lVar2 + 0x140))) {
          if ((double)DAT_14c75efd8 <
              ((double)local_20.QuadPart * DAT_14c83f420 + 16777216.0) - *(double *)(lVar2 + 0x140))
          {
            uVar3 = 0;
          }
        }
      }
      else {
        *(undefined4 *)(lVar2 + 0x14c) = 0;
      }
    }
    else {
      uVar3 = CONCAT71(uVar4,param_3 < param_2 || param_2 < 0);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147df6352 FUN_147df6352 body=118 status=ok
// SIG undefined FUN_147df6352(void)

undefined4 FUN_147df6352(longlong param_1,longlong param_2,int *param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_2 + 8);
  iVar3 = 0;
  if (iVar4 < *(int *)(param_1 + 8)) {
    iVar3 = 0;
    do {
      cVar1 = FUN_147df626e(param_4,*param_3,iVar3);
      if (cVar1 == '\0') break;
      FUN_147df671a(param_1,param_2,iVar4);
      iVar3 = iVar3 + 0x70;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 8));
  }
  iVar4 = *param_3;
  if (0 < iVar4) {
    iVar2 = iVar4 - iVar3;
    if (iVar4 < iVar3) {
      iVar2 = 0;
    }
    *param_3 = iVar2;
  }
  return CONCAT31((int3)((uint)*(int *)(param_2 + 8) >> 8),
                  *(int *)(param_2 + 8) == *(int *)(param_1 + 8));
}



// FUNCTION 147df63c8 FUN_147df63c8 body=118 status=ok
// SIG undefined FUN_147df63c8(void)

undefined4 FUN_147df63c8(longlong param_1,longlong param_2,int *param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_2 + 8);
  iVar3 = 0;
  if (iVar4 < *(int *)(param_1 + 8)) {
    iVar3 = 0;
    do {
      cVar1 = FUN_147df626e(param_4,*param_3,iVar3);
      if (cVar1 == '\0') break;
      FUN_147df679c(param_1,param_2,iVar4);
      iVar3 = iVar3 + 0x18;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 8));
  }
  iVar4 = *param_3;
  if (0 < iVar4) {
    iVar2 = iVar4 - iVar3;
    if (iVar4 < iVar3) {
      iVar2 = 0;
    }
    *param_3 = iVar2;
  }
  return CONCAT31((int3)((uint)*(int *)(param_2 + 8) >> 8),
                  *(int *)(param_2 + 8) == *(int *)(param_1 + 8));
}



// FUNCTION 147df643e FUN_147df643e body=224 status=ok
// SIG undefined FUN_147df643e(void)

undefined4 FUN_147df643e(longlong *param_1,longlong *param_2,int *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  char cVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  
  lVar16 = (longlong)(int)param_2[1];
  uVar17 = 0;
  if ((int)param_2[1] < (int)param_1[1]) {
    lVar13 = lVar16 * 0x38;
    uVar17 = 0;
    do {
      cVar11 = FUN_147df626e(param_4,*param_3,uVar17 & 0xffffffff);
      if (cVar11 == '\0') break;
      lVar15 = *param_1;
      iVar5 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
        FUN_140c11858(param_2,iVar5);
      }
      lVar15 = lVar15 + lVar13;
      lVar6 = *param_2;
      lVar14 = (longlong)iVar5 * 0x38;
      *(undefined4 *)(lVar6 + lVar14) = *(undefined4 *)(uVar17 + lVar15);
      *(undefined8 *)(lVar6 + 0x18 + lVar14) = *(undefined8 *)(uVar17 + 0x18 + lVar15);
      puVar1 = (undefined8 *)(uVar17 + 8 + lVar15);
      uVar10 = puVar1[1];
      puVar2 = (undefined8 *)(lVar6 + 8 + lVar14);
      *puVar2 = *puVar1;
      puVar2[1] = uVar10;
      *(undefined8 *)(lVar6 + 0x30 + lVar14) = *(undefined8 *)(uVar17 + 0x30 + lVar15);
      puVar3 = (undefined4 *)(uVar17 + 0x20 + lVar15);
      uVar7 = puVar3[1];
      uVar8 = puVar3[2];
      uVar9 = puVar3[3];
      puVar4 = (undefined4 *)(lVar6 + 0x20 + lVar14);
      *puVar4 = *puVar3;
      puVar4[1] = uVar7;
      puVar4[2] = uVar8;
      puVar4[3] = uVar9;
      lVar16 = lVar16 + 1;
      uVar17 = uVar17 + 0x38;
    } while (lVar16 < (int)param_1[1]);
  }
  iVar5 = *param_3;
  if (0 < iVar5) {
    iVar12 = iVar5 - (int)uVar17;
    if (iVar5 < (int)uVar17) {
      iVar12 = 0;
    }
    *param_3 = iVar12;
  }
  return CONCAT31((int3)((uint)(int)param_2[1] >> 8),(int)param_2[1] == (int)param_1[1]);
}



// FUNCTION 147df651e FUN_147df651e body=157 status=ok
// SIG undefined FUN_147df651e(void)

undefined4 FUN_147df651e(longlong *param_1,longlong *param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  lVar6 = (longlong)(int)param_2[1];
  iVar5 = 0;
  if ((int)param_2[1] < (int)param_1[1]) {
    iVar5 = 0;
    do {
      cVar3 = FUN_147df626e(param_4,*param_3,iVar5);
      if (cVar3 == '\0') break;
      lVar2 = *param_1;
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_1446f48e2(param_2,iVar1);
      }
      *(undefined4 *)(*param_2 + (longlong)iVar1 * 4) = *(undefined4 *)(lVar2 + lVar6 * 4);
      iVar5 = iVar5 + 4;
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_1[1]);
  }
  iVar1 = *param_3;
  if (0 < iVar1) {
    iVar4 = iVar1 - iVar5;
    if (iVar1 < iVar5) {
      iVar4 = 0;
    }
    *param_3 = iVar4;
  }
  return CONCAT31((int3)((uint)(int)param_2[1] >> 8),(int)param_2[1] == (int)param_1[1]);
}



// FUNCTION 147df65bc FUN_147df65bc body=191 status=ok
// SIG undefined FUN_147df65bc(void)

undefined4 FUN_147df65bc(longlong *param_1,longlong *param_2,int *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  
  lVar12 = (longlong)(int)param_2[1];
  iVar11 = 0;
  if ((int)param_2[1] < (int)param_1[1]) {
    lVar13 = lVar12 * 0x18;
    iVar11 = 0;
    do {
      cVar9 = FUN_147df626e(param_4,*param_3,iVar11);
      if (cVar9 == '\0') break;
      lVar4 = *param_1;
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_140c110b2(param_2,iVar3);
      }
      lVar5 = *param_2;
      *(undefined8 *)(lVar5 + 0x10 + (longlong)iVar3 * 0x18) =
           *(undefined8 *)(lVar4 + 0x10 + lVar13);
      puVar1 = (undefined4 *)(lVar4 + lVar13);
      uVar6 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      puVar2 = (undefined4 *)(lVar5 + (longlong)iVar3 * 0x18);
      *puVar2 = *puVar1;
      puVar2[1] = uVar6;
      puVar2[2] = uVar7;
      puVar2[3] = uVar8;
      iVar11 = iVar11 + 0x14;
      lVar12 = lVar12 + 1;
      lVar13 = lVar13 + 0x18;
    } while (lVar12 < (int)param_1[1]);
  }
  iVar3 = *param_3;
  if (0 < iVar3) {
    iVar10 = iVar3 - iVar11;
    if (iVar3 < iVar11) {
      iVar10 = 0;
    }
    *param_3 = iVar10;
  }
  return CONCAT31((int3)((uint)(int)param_2[1] >> 8),(int)param_2[1] == (int)param_1[1]);
}



// FUNCTION 147df667c FUN_147df667c body=157 status=ok
// SIG undefined FUN_147df667c(void)

undefined4 FUN_147df667c(longlong *param_1,longlong *param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  lVar6 = (longlong)(int)param_2[1];
  iVar5 = 0;
  if ((int)param_2[1] < (int)param_1[1]) {
    iVar5 = 0;
    do {
      cVar3 = FUN_147df626e(param_4,*param_3,iVar5);
      if (cVar3 == '\0') break;
      lVar2 = *param_1;
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_1400232c6(param_2,iVar1);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = *(undefined8 *)(lVar2 + lVar6 * 8);
      iVar5 = iVar5 + 8;
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_1[1]);
  }
  iVar1 = *param_3;
  if (0 < iVar1) {
    iVar4 = iVar1 - iVar5;
    if (iVar1 < iVar5) {
      iVar4 = 0;
    }
    *param_3 = iVar4;
  }
  return CONCAT31((int3)((uint)(int)param_2[1] >> 8),(int)param_2[1] == (int)param_1[1]);
}



// FUNCTION 147df671a FUN_147df671a body=129 status=ok
// SIG undefined FUN_147df671a(void)

void FUN_147df671a(longlong *param_1,longlong *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar7 = (longlong)param_3 * 0x70 + *param_1;
  iVar3 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
    FUN_14008b9bc(param_2,iVar3);
  }
  lVar5 = (longlong)iVar3 * 0x70 + *param_2;
  lVar6 = 0x18;
  do {
    *(undefined8 *)(lVar5 + -8 + lVar6) = *(undefined8 *)(lVar7 + -8 + lVar6);
    puVar1 = (undefined8 *)(lVar7 + -0x18 + lVar6);
    uVar4 = puVar1[1];
    puVar2 = (undefined8 *)(lVar5 + -0x18 + lVar6);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    uVar4 = ((undefined8 *)(lVar7 + lVar6))[1];
    *(undefined8 *)(lVar5 + lVar6) = *(undefined8 *)(lVar7 + lVar6);
    ((undefined8 *)(lVar5 + lVar6))[1] = uVar4;
    *(undefined8 *)(lVar5 + 0x10 + lVar6) = *(undefined8 *)(lVar7 + 0x10 + lVar6);
    lVar6 = lVar6 + 0x30;
  } while (lVar6 != 0x78);
  uVar4 = *(undefined8 *)(lVar7 + 0x60);
  *(undefined8 *)(lVar5 + 0x65) = *(undefined8 *)(lVar7 + 0x65);
  *(undefined8 *)(lVar5 + 0x60) = uVar4;
  return;
}



// FUNCTION 147df679c FUN_147df679c body=79 status=ok
// SIG undefined FUN_147df679c(void)

void FUN_147df679c(longlong *param_1,longlong *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_146e37ca6(param_2,iVar1);
  }
  FUN_146e37d3a((longlong)iVar1 * 0x18 + *param_2,lVar2 + (longlong)param_3 * 0x18);
  return;
}



// FUNCTION 147df67ec FUN_147df67ec body=593 status=ok
// SIG undefined FUN_147df67ec(void)

void FUN_147df67ec(longlong param_1,char param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 *unaff_RBP;
  longlong lVar12;
  
  if ((*(char *)(param_1 + 0x40) == '\x01') && (*(int *)(param_1 + 0x44) != -1)) {
    plVar1 = (longlong *)(param_1 + 0x198);
    FUN_144a1a59e(plVar1,*(int *)(param_1 + 0x28) + 1,0);
    plVar2 = (longlong *)(param_1 + 0x1b8);
    FUN_144a1a59e(plVar2,*(undefined4 *)(param_1 + 0x28),0);
    plVar3 = (longlong *)(param_1 + 0x1a8);
    *(undefined4 *)(param_1 + 0x1b0) = 0;
    if (*(int *)(param_1 + 0x1b4) < 0) {
      FUN_146dedcd2(plVar3,0);
    }
    if (param_2 == '\0') {
      iVar5 = *(int *)(param_1 + 0x28);
      if (0 < (longlong)iVar5) {
        unaff_RBP = (undefined1 *)0x0;
        lVar10 = 0;
        do {
          iVar6 = *(int *)(param_1 + 0x1b0);
          *(uint *)(param_1 + 0x1b0) = iVar6 + 1U;
          if (*(uint *)(param_1 + 0x1b4) < iVar6 + 1U) {
            FUN_1400232c6(plVar3,iVar6);
          }
          *(undefined1 **)(*plVar3 + (longlong)iVar6 * 8) = unaff_RBP;
          *(undefined4 *)(*plVar2 + lVar10 * 4) = 1;
          lVar10 = lVar10 + 1;
          unaff_RBP = &DAT_100000001 + (longlong)unaff_RBP;
        } while (iVar5 != lVar10);
      }
    }
    else {
      FUN_147df6a3e(param_1);
      FUN_147df6b80(param_1);
    }
    FUN_147df6c16(param_1,(longlong)*(int *)(param_1 + 0x44) * 0x70 + *(longlong *)(param_1 + 0x10),
                  CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_2) & 0xffffffff);
    **(undefined4 **)(param_1 + 0x198) = 0;
    iVar5 = *(int *)(param_1 + 0x28);
    if (0 < (longlong)iVar5) {
      lVar10 = 0;
      do {
        *(int *)(*plVar1 + 4 + lVar10 * 4) =
             *(int *)(*plVar2 + lVar10 * 4) + *(int *)(*plVar1 + lVar10 * 4);
        *(undefined4 *)(*plVar2 + lVar10 * 4) = *(undefined4 *)(*plVar1 + lVar10 * 4);
        lVar10 = lVar10 + 1;
      } while (iVar5 != lVar10);
    }
    plVar1 = (longlong *)(param_1 + 0x188);
    FUN_144a1a59e(plVar1,*(undefined4 *)
                          (*(longlong *)(param_1 + 0x198) +
                          (longlong)(*(int *)(param_1 + 0x1a0) + -1) * 4),0);
    iVar5 = *(int *)(param_1 + 0x1b0);
    if ((longlong)iVar5 != 0) {
      lVar10 = *(longlong *)(param_1 + 0x1a8);
      lVar11 = 0;
      do {
        iVar6 = *(int *)(lVar10 + lVar11);
        iVar7 = *(int *)(lVar10 + 4 + lVar11);
        iVar8 = *(int *)(*plVar2 + (longlong)iVar6 * 4);
        *(int *)(*plVar2 + (longlong)iVar6 * 4) = iVar8 + 1;
        if (iVar6 == iVar7) {
          *(int *)(*plVar1 + (longlong)iVar8 * 4) = iVar6;
        }
        else {
          *(int *)(*plVar1 + (longlong)iVar8 * 4) = iVar7;
          uVar9 = *(undefined4 *)(lVar10 + lVar11);
          lVar12 = (longlong)*(int *)(lVar10 + 4 + lVar11);
          iVar6 = *(int *)(*plVar2 + lVar12 * 4);
          *(int *)(*plVar2 + lVar12 * 4) = iVar6 + 1;
          *(undefined4 *)(*plVar1 + (longlong)iVar6 * 4) = uVar9;
        }
        lVar11 = lVar11 + 8;
      } while ((longlong)iVar5 * 8 != lVar11);
    }
    if (param_2 != '\0') {
      iVar5 = *(int *)(param_1 + 0x28);
      if (0 < (longlong)iVar5) {
        lVar10 = 0;
        do {
          *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x10 + lVar10) = 0;
          lVar10 = lVar10 + 0x18;
        } while ((longlong)iVar5 * 0x18 != lVar10);
      }
      iVar5 = *(int *)(param_1 + 0x18);
      if (0 < (longlong)iVar5) {
        lVar10 = 0;
        do {
          pbVar4 = (byte *)(*(longlong *)(param_1 + 0x10) + 0x6c + lVar10);
          *pbVar4 = *pbVar4 & 0xfd;
          lVar10 = lVar10 + 0x70;
        } while ((longlong)iVar5 * 0x70 - lVar10 != 0);
      }
    }
  }
  return;
}



// FUNCTION 147df6a3e FUN_147df6a3e body=322 status=ok
// SIG undefined FUN_147df6a3e(void)

void FUN_147df6a3e(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (0 < (longlong)iVar1) {
    uVar8 = 0;
    do {
      iVar5 = 0;
      if (*(char *)(*(longlong *)(param_1 + 0x20) + 0x10 + uVar8 * 0x18) == '\0') {
        lVar3 = *(longlong *)(param_1 + 0x198);
        iVar2 = *(int *)(lVar3 + uVar8 * 4);
        lVar6 = (longlong)iVar2;
        if (iVar2 < *(int *)(lVar3 + 4 + uVar8 * 4)) {
          lVar4 = *(longlong *)(param_1 + 0x188);
          iVar5 = 0;
          do {
            lVar7 = (longlong)*(int *)(lVar4 + lVar6 * 4);
            if (*(char *)(*(longlong *)(param_1 + 0x20) + 0x10 + lVar7 * 0x18) == '\0') {
              if ((longlong)uVar8 < lVar7) {
                iVar2 = *(int *)(param_1 + 0x1b0);
                *(uint *)(param_1 + 0x1b0) = iVar2 + 1U;
                if (*(uint *)(param_1 + 0x1b4) < iVar2 + 1U) {
                  FUN_1400232c6(param_1 + 0x1a8,iVar2);
                }
                *(ulonglong *)(*(longlong *)(param_1 + 0x1a8) + (longlong)iVar2 * 8) =
                     (lVar7 << 0x20) + uVar8;
                lVar4 = *(longlong *)(param_1 + 0x188);
                lVar3 = *(longlong *)(param_1 + 0x198);
              }
              iVar5 = iVar5 + (uint)(uVar8 != *(uint *)(lVar4 + lVar6 * 4));
            }
            lVar6 = lVar6 + 1;
          } while (lVar6 < *(int *)(lVar3 + 4 + uVar8 * 4));
        }
      }
      iVar2 = *(int *)(param_1 + 0x1b0);
      *(uint *)(param_1 + 0x1b0) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x1b4) < iVar2 + 1U) {
        FUN_1400232c6(param_1 + 0x1a8,iVar2);
      }
      *(ulonglong *)(*(longlong *)(param_1 + 0x1a8) + (longlong)iVar2 * 8) = (uVar8 << 0x20) + uVar8
      ;
      *(int *)(*(longlong *)(param_1 + 0x1b8) + uVar8 * 4) = iVar5 + 1;
      uVar8 = uVar8 + 1;
    } while (uVar8 != (longlong)iVar1);
  }
  return;
}



// FUNCTION 147df6b80 FUN_147df6b80 body=149 status=ok
// SIG undefined FUN_147df6b80(void)

void FUN_147df6b80(longlong param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if (0 < (longlong)iVar2) {
    lVar4 = *(longlong *)(param_1 + 0x10);
    lVar3 = 0;
    do {
      lVar6 = lVar3 * 0x70;
      bVar1 = *(byte *)(lVar4 + 0x6c + lVar6);
      if ((bVar1 & 1) != 0) {
        *(byte *)(lVar4 + lVar6 + 0x6c) =
             bVar1 & 0xfd |
             *(char *)(*(longlong *)(param_1 + 0x20) + 0x10 +
                      (longlong)*(int *)(lVar4 + lVar6 + 0x60) * 0x18) * '\x02';
        lVar4 = *(longlong *)(param_1 + 0x10);
        if ((*(byte *)(lVar4 + 0x6c + lVar6) & 2) != 0) {
          iVar5 = *(int *)(lVar6 + lVar4 + 0x68);
          while (iVar5 != -1) {
            lVar6 = (longlong)iVar5 * 0x70;
            bVar1 = *(byte *)(lVar4 + 0x6c + lVar6);
            if ((bVar1 & 2) != 0) break;
            *(byte *)(lVar4 + lVar6 + 0x6c) = bVar1 | 2;
            lVar4 = *(longlong *)(param_1 + 0x10);
            iVar5 = *(int *)(lVar4 + 0x68 + lVar6);
          }
        }
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != iVar2);
  }
  return;
}



// FUNCTION 147df6c16 FUN_147df6c16 body=122 status=ok
// SIG undefined FUN_147df6c16(void)

void FUN_147df6c16(longlong param_1,longlong param_2,undefined4 param_3)

{
  if ((*(byte *)(param_2 + 0x6c) & 1) == 0) {
    FUN_147df6c16(param_1,(longlong)*(int *)(param_2 + 0x60) * 0x70 + *(longlong *)(param_1 + 0x10))
    ;
    FUN_147df6c16(param_1,(longlong)*(int *)(param_2 + 100) * 0x70 + *(longlong *)(param_1 + 0x10),
                  param_3);
    FUN_147df6c90(param_1,(longlong)*(int *)(param_2 + 0x60) * 0x70 + *(longlong *)(param_1 + 0x10),
                  param_2,(longlong)*(int *)(param_2 + 100) * 0x70 + *(longlong *)(param_1 + 0x10),
                  param_2 + 0x30,(char)param_3);
  }
  return;
}



// FUNCTION 147df6c90 FUN_147df6c90 body=559 status=ok
// SIG undefined FUN_147df6c90(void)

void FUN_147df6c90(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,char param_6)

{
  int *piVar1;
  double *pdVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  char local_a0;
  double local_98 [12];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  while( true ) {
    while( true ) {
      if (((param_6 != '\0') && ((*(byte *)(param_2 + 0x6c) & 2) == 0)) &&
         ((*(byte *)(param_4 + 0x6c) & 2) == 0)) goto LAB_147df6e5a;
      lVar7 = 0;
      do {
        dVar3 = *(double *)(param_3 + lVar7 * 8);
        pdVar2 = (double *)(param_5 + 0x18 + lVar7 * 8);
        if ((*pdVar2 <= dVar3 && dVar3 != *pdVar2) ||
           (dVar3 = *(double *)(param_5 + lVar7 * 8),
           pdVar2 = (double *)(param_3 + 0x18 + lVar7 * 8), *pdVar2 <= dVar3 && dVar3 != *pdVar2))
        goto LAB_147df6e5a;
        lVar7 = lVar7 + 1;
      } while (lVar7 != 3);
      if ((*(byte *)(param_2 + 0x6c) & 1) != 0) break;
      local_a0 = param_6;
      local_a8 = param_5;
      FUN_147df6c90(param_1,(longlong)*(int *)(param_2 + 0x60) * 0x70 +
                            *(longlong *)(param_1 + 0x10),param_2,param_4);
      param_3 = param_2 + 0x30;
      param_2 = (longlong)*(int *)(param_2 + 100) * 0x70 + *(longlong *)(param_1 + 0x10);
    }
    if ((*(byte *)(param_4 + 0x6c) & 1) != 0) break;
    local_a0 = param_6;
    local_a8 = param_4;
    FUN_147df6c90(param_1,param_2,param_3,
                  (longlong)*(int *)(param_4 + 0x60) * 0x70 + *(longlong *)(param_1 + 0x10));
    param_5 = param_4 + 0x30;
    param_4 = (longlong)*(int *)(param_4 + 100) * 0x70 + *(longlong *)(param_1 + 0x10);
  }
  iVar4 = *(int *)(param_2 + 0x60);
  iVar5 = *(int *)(param_4 + 0x60);
  if (((param_6 == '\0') ||
      (*(char *)(*(longlong *)(param_1 + 0x20) + 0x10 + (longlong)iVar4 * 0x18) != '\0')) ||
     (*(char *)(*(longlong *)(param_1 + 0x20) + 0x10 + (longlong)iVar5 * 0x18) == '\x01')) {
    local_98[6] = 1.79769313486232e+308;
    local_98[7] = 1.79769313486232e+308;
    local_98[8] = 1.79769313486232e+308;
    local_98[9] = -1.79769313486232e+308;
    local_98[10] = -1.79769313486232e+308;
    local_98[0xb] = -1.79769313486232e+308;
    local_98[0] = 1.79769313486232e+308;
    local_98[1] = 1.79769313486232e+308;
    local_98[2] = 1.79769313486232e+308;
    local_98[3] = -1.79769313486232e+308;
    local_98[4] = -1.79769313486232e+308;
    local_98[5] = -1.79769313486232e+308;
    lVar7 = 0;
    do {
      if ((local_98[lVar7 + 3] <= local_98[lVar7 + 6] && local_98[lVar7 + 6] != local_98[lVar7 + 3])
         || (local_98[lVar7 + 9] <= local_98[lVar7] && local_98[lVar7] != local_98[lVar7 + 9]))
      goto LAB_147df6e5a;
      lVar7 = lVar7 + 1;
    } while (lVar7 != 3);
    iVar6 = *(int *)(param_1 + 0x1b0);
    *(uint *)(param_1 + 0x1b0) = iVar6 + 1U;
    if (*(uint *)(param_1 + 0x1b4) < iVar6 + 1U) {
      FUN_1400232c6(param_1 + 0x1a8,iVar6);
    }
    *(ulonglong *)(*(longlong *)(param_1 + 0x1a8) + (longlong)iVar6 * 8) = CONCAT44(iVar5,iVar4);
    piVar1 = (int *)(*(longlong *)(param_1 + 0x1b8) + (longlong)iVar4 * 4);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(*(longlong *)(param_1 + 0x1b8) + (longlong)iVar5 * 4);
    *piVar1 = *piVar1 + 1;
  }
LAB_147df6e5a:
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147df6ec0 FUN_147df6ec0 body=231 status=ok
// SIG undefined FUN_147df6ec0(void)

void FUN_147df6ec0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [40];
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b01d78(&local_60,param_3,param_4);
  local_b8 = local_30;
  local_c0 = local_58;
  local_d8 = &local_90;
  local_90 = 0x7fefffffffffffff;
  local_88 = 0x7fefffffffffffff;
  local_80 = 0x7fefffffffffffff;
  local_78 = 0xffefffffffffffff;
  local_70 = 0xffefffffffffffff;
  local_68 = 0xffefffffffffffff;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_c8 = local_60;
  local_d0 = param_5;
  FUN_147df6fa8(param_1,param_2,&local_60);
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147df6fa8 FUN_147df6fa8 body=3386 status=ok
// SIG undefined FUN_147df6fa8(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_147df6fa8(longlong param_1,double *param_2,longlong param_3,double param_4,
                       undefined8 param_5,longlong *param_6,undefined1 (*param_7) [16],
                       double *param_8,undefined8 *param_9)

{
  double *pdVar1;
  bool bVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar11;
  longlong lVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  double *pdVar17;
  longlong lVar18;
  int iVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  longlong lVar22;
  int iVar23;
  bool bVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  ulonglong uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  double dVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  double dVar72;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  double dVar83;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  double dVar84;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  double dVar92;
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  double dVar106;
  undefined8 uVar107;
  double dVar108;
  undefined1 auStack_11d8 [32];
  undefined8 local_11b8;
  longlong *local_11b0;
  undefined1 (*local_11a8) [16];
  double *local_11a0;
  undefined8 *local_1198;
  undefined1 local_1188 [16];
  double local_1178;
  double dStack_1170;
  undefined8 local_1168;
  undefined8 uStack_1160;
  undefined1 local_1158 [16];
  ulonglong local_1148;
  undefined8 uStack_1140;
  uint local_1138;
  uint uStack_1134;
  uint uStack_1130;
  uint uStack_112c;
  double local_1128 [4];
  double local_1108 [3];
  undefined8 local_10f0;
  double local_10e8;
  double local_10e0;
  undefined8 *local_100;
  undefined8 local_f8;
  ulonglong local_f0;
  longlong *plVar10;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_11d8;
  local_1178 = param_4;
  if ((longlong)*(int *)(param_1 + 0x110) != 0) {
    puVar20 = *(undefined4 **)(param_1 + 0x108);
    puVar21 = puVar20 + (longlong)*(int *)(param_1 + 0x110) * 0xe;
    do {
      local_1128[2] = param_8[2];
      local_1128[0] = *param_8;
      local_1128[1] = param_8[1];
      local_10f0 = *(double *)(puVar20 + 2) - *param_2;
      local_10e8 = *(double *)(puVar20 + 4) - param_2[1];
      local_10e0 = *(double *)(puVar20 + 6) - param_2[2];
      local_1108[0] = *(double *)(puVar20 + 8) - *param_2;
      local_1108[1] = *(double *)(puVar20 + 10) - param_2[1];
      local_1108[2] = *(double *)(puVar20 + 0xc) - param_2[2];
      lVar12 = 0;
      dVar35 = 1.79769313486232e+308;
      dVar43 = 0.0;
      do {
        if (*(char *)((longlong)param_9 + lVar12) == '\x01') {
          if (0.0 < (double)(&local_10f0)[lVar12]) goto LAB_147df71d6;
          dVar48 = 0.0;
          dVar25 = 1.79769313486232e+308;
          if (local_1108[lVar12] <= 0.0 && local_1108[lVar12] != 0.0) goto LAB_147df71d6;
        }
        else {
          dVar48 = (double)(&local_10f0)[lVar12] * local_1128[lVar12];
          dVar25 = local_1128[lVar12] * local_1108[lVar12];
        }
        dVar27 = dVar25;
        if (dVar48 <= dVar25) {
          dVar27 = dVar48;
        }
        if (dVar43 <= dVar27) {
          dVar43 = dVar27;
        }
        if (dVar48 <= dVar25) {
          dVar48 = dVar25;
        }
        if (dVar48 <= dVar35) {
          dVar35 = dVar48;
        }
        if (dVar35 < dVar43) goto LAB_147df71d6;
        lVar12 = lVar12 + 1;
      } while (lVar12 != 3);
      if ((dVar43 <= *(double *)(param_3 + 0x20)) && (0.0 <= dVar35)) {
        local_10f0._4_4_ = (undefined4)((ulonglong)local_10f0 >> 0x20);
        local_10f0 = (double)CONCAT44(local_10f0._4_4_,*puVar20);
        cVar6 = (**(code **)(*(longlong *)*param_6 + 0x10))
                          ((longlong *)*param_6,&local_10f0,param_3);
        if (cVar6 == '\0') goto LAB_147df7af9;
      }
LAB_147df71d6:
      puVar20 = puVar20 + 0xe;
    } while (puVar20 != puVar21);
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    local_1198 = param_9;
    local_11a0 = param_8;
    local_11a8 = param_7;
    local_11b0 = param_6;
    local_11b8 = param_5;
    cVar6 = FUN_147df6fa8(*(longlong *)(param_1 + 0xc0),param_2,param_3,local_1178);
    if (cVar6 == '\0') {
LAB_147df7af9:
      param_9 = (undefined8 *)0x0;
      goto LAB_147df7bd1;
    }
  }
  local_100 = (undefined8 *)0x0;
  local_f8 = 0xff00000000;
  if (*(char *)(param_1 + 0x40) == '\x01') {
    uVar7 = *(uint *)(param_1 + 0x44);
    if (uVar7 == 0xffffffff) {
      uVar7 = 0;
      goto LAB_147df7256;
    }
  }
  else {
    uVar7 = 0;
    if (*(int *)(param_1 + 0x18) == 0) goto LAB_147df7256;
  }
  local_f8 = 0xff00000001;
  local_10f0 = (double)CONCAT44(local_10f0._4_4_,uVar7);
  local_10e8 = 0.0;
  uVar7 = 1;
LAB_147df7256:
  dVar43 = *param_2;
  dVar48 = param_2[1];
  dVar35 = param_2[2];
  auVar39 = *param_7;
  uVar28 = *(ulonglong *)param_7[1];
  uVar107 = 0;
  auVar30 = *(undefined1 (*) [16])(param_3 + 0x20);
  auVar29 = divpd(_DAT_149934d80,auVar39);
  bVar2 = (double)(auVar39._0_8_ & DAT_149931180) < 1e-08;
  dVar25 = (double)-(ulonglong)bVar2;
  bVar3 = (double)(auVar39._8_8_ & DAT_149931180._8_8_) < 1e-08;
  dVar27 = (double)-(ulonglong)bVar3;
  local_1168 = CONCAT44((float)dVar27,(float)dVar25);
  uStack_1160 = 0;
  uVar36 = ~local_1168 & CONCAT44((float)auVar29._8_8_,(float)auVar29._0_8_);
  local_1178 = (double)(float)uVar36;
  dStack_1170 = (double)(float)(uVar36 >> 0x20);
  auVar39 = _DAT_149931180;
  local_1158 = auVar30;
  do {
    puVar11 = local_100;
    if (local_100 == (undefined8 *)0x0) {
      puVar11 = &local_10f0;
    }
    lVar16 = (longlong)(int)uVar7;
    pdVar17 = (double *)(puVar11 + lVar16 * 2 + -1);
    lVar22 = lVar16 << 0x20;
    iVar8 = -1;
    lVar12 = 0;
    do {
      param_9 = (undefined8 *)CONCAT71((int7)((ulonglong)param_9 >> 8),lVar16 == lVar12);
      if (lVar16 == lVar12) goto LAB_147df7bc7;
      pdVar1 = pdVar17 + -1;
      dVar26 = *pdVar17;
      local_f8 = CONCAT44(local_f8._4_4_,uVar7 + iVar8);
      lVar12 = lVar12 + 1;
      pdVar17 = pdVar17 + -2;
      lVar22 = lVar22 + -0x100000000;
      iVar8 = iVar8 + -1;
    } while (auVar30._0_8_ < dVar26);
    lVar16 = *(longlong *)(param_1 + 0x10);
    lVar18 = (longlong)*(int *)pdVar1 * 0x70;
    pdVar17 = (double *)(lVar16 + lVar18);
    if ((*(byte *)(lVar16 + 0x6c + lVar18) & 1) == 0) {
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar28;
      dVar26 = (double)-(ulonglong)(SUB168(auVar29 & auVar39,0) < 1e-08);
      dVar106 = (double)-(ulonglong)(SUB168(auVar29 & auVar39,8) < 1e-08);
      auVar39._8_8_ = dVar106;
      auVar39._0_8_ = dVar26;
      auVar50._8_8_ = 0;
      auVar50._0_8_ = -(ulonglong)(dVar35 < pdVar17[2] || pdVar17[5] < dVar35);
      auVar66._0_8_ = -(ulonglong)((pdVar17[3] < dVar43 || dVar43 < *pdVar17) && bVar2);
      auVar66._8_8_ = -(ulonglong)((pdVar17[4] < dVar48 || dVar48 < pdVar17[1]) && bVar3);
      iVar14 = movmskpd((int)lVar16,auVar66);
      uVar9 = movmskpd((int)lVar18,auVar50 & auVar39);
      if ((uVar9 & 0x3fffffff) == 0 && iVar14 == 0) {
        auVar30 = divpd(_DAT_149934d80,auVar29);
        uVar36 = ~CONCAT44((float)dVar106,(float)dVar26) &
                 CONCAT44((float)auVar30._8_8_,(float)auVar30._0_8_);
        dVar108 = (double)(float)uVar36;
        dVar83 = (double)(float)(uVar36 >> 0x20);
        auVar52._8_8_ = local_1158._0_8_;
        auVar52._0_8_ = local_1158._0_8_;
        uVar36 = ~local_1168 &
                 CONCAT44((float)((pdVar17[1] - dVar48) * dStack_1170),
                          (float)((*pdVar17 - dVar43) * local_1178));
        auVar68._0_8_ = (double)(float)uVar36;
        auVar68._8_8_ = (double)(float)(uVar36 >> 0x20);
        uVar36 = ~CONCAT44((float)dVar106,(float)dVar26) &
                 CONCAT44((float)(dVar83 * 0.0),(float)((pdVar17[2] - dVar35) * dVar108));
        auVar75._0_8_ = (double)(float)uVar36;
        auVar75._8_8_ = (double)(float)(uVar36 >> 0x20);
        auVar59._0_8_ = (pdVar17[3] - dVar43) * local_1178;
        auVar59._8_8_ = (pdVar17[4] - dVar48) * dStack_1170;
        auVar94._8_8_ = dVar27;
        auVar94._0_8_ = dVar25;
        auVar30 = blendvpd(auVar59,auVar52,auVar94);
        auVar97._0_8_ = (pdVar17[5] - dVar35) * dVar108;
        auVar97._8_8_ = dVar83 * 0.0;
        auVar87._8_8_ = dVar106;
        auVar87._0_8_ = dVar26;
        auVar66 = blendvpd(auVar97,auVar52,auVar87);
        auVar79._8_8_ = auVar68._8_8_;
        auVar79._0_8_ = auVar68._0_8_;
        auVar94 = minpd(auVar79,auVar30);
        auVar86._8_8_ = auVar75._8_8_;
        auVar86._0_8_ = auVar75._0_8_;
        auVar87 = minpd(auVar86,auVar66);
        auVar50 = maxpd(auVar68,auVar30);
        auVar66 = maxpd(auVar75,auVar66);
        auVar88._0_8_ = auVar87._0_8_;
        auVar60._8_8_ = auVar87._8_8_;
        auVar60._0_8_ = auVar94._0_8_;
        auVar98._8_8_ = auVar88._0_8_;
        auVar98._0_8_ = auVar94._8_8_;
        auVar102._8_8_ = auVar87._8_8_;
        auVar102._0_8_ = auVar94._8_8_;
        auVar88._8_8_ = auVar94._0_8_;
        auVar94 = maxpd(auVar94,auVar98);
        auVar30 = maxpd(auVar87,auVar60);
        auVar30 = maxpd(auVar30,auVar102);
        auVar94 = maxpd(auVar94,auVar88);
        auVar76._0_8_ = auVar66._0_8_;
        auVar61._8_8_ = auVar66._8_8_;
        auVar61._0_8_ = auVar50._0_8_;
        auVar80._8_8_ = auVar76._0_8_;
        auVar80._0_8_ = auVar50._8_8_;
        auVar99._8_8_ = auVar66._8_8_;
        auVar99._0_8_ = auVar50._8_8_;
        auVar76._8_8_ = auVar50._0_8_;
        auVar50 = minpd(auVar50,auVar80);
        auVar66 = minpd(auVar66,auVar61);
        auVar66 = minpd(auVar66,auVar99);
        auVar50 = minpd(auVar50,auVar76);
        auVar50 = minpd(auVar50,auVar52);
        auVar66 = minpd(auVar66,auVar52);
        auVar30 = maxpd(auVar30,ZEXT816(0));
        auVar89._8_8_ = -(ulonglong)(auVar66._8_8_ < auVar30._8_8_);
        auVar89._0_8_ = -(ulonglong)(auVar66._0_8_ < auVar30._0_8_);
        local_1188 = maxpd(auVar94,ZEXT816(0));
        auVar69._8_8_ = -(ulonglong)(auVar50._8_8_ < local_1188._8_8_);
        auVar69._0_8_ = -(ulonglong)(auVar50._0_8_ < local_1188._0_8_);
        iVar14 = movmskpd(iVar14,auVar69);
        uVar9 = movmskpd(0,auVar89);
        bVar24 = (uVar9 & 0x3fffffff) == 0 && iVar14 == 0;
      }
      else {
        bVar24 = false;
      }
      dVar72 = local_1188._0_8_;
      iVar14 = (int)lVar12;
      iVar15 = (uVar7 + 1) - iVar14;
      uVar9 = (uVar7 + 1) - iVar14;
      uVar36 = (ulonglong)uVar7 - lVar12;
      iVar23 = (int)uVar36;
      dVar108 = SUB168(*(undefined1 (*) [16])(pdVar17 + 9),0);
      dVar83 = SUB168(*(undefined1 (*) [16])(pdVar17 + 9),8);
      auVar78._8_8_ = 0;
      auVar78._0_8_ = -(ulonglong)(dVar35 < pdVar17[8] || pdVar17[0xb] < dVar35);
      auVar85._0_8_ = -(ulonglong)((dVar108 < dVar43 || dVar43 < pdVar17[6]) && bVar2);
      auVar85._8_8_ = -(ulonglong)((dVar83 < dVar48 || dVar48 < pdVar17[7]) && bVar3);
      iVar14 = movmskpd(iVar14,auVar85);
      uVar7 = movmskpd(iVar8,auVar78 & auVar39);
      auVar39 = _DAT_149931180;
      if ((uVar7 & 0x3fffffff) == 0 && iVar14 == 0) {
        auVar30 = divpd(_DAT_149934d80,auVar29);
        uVar37 = ~CONCAT44((float)dVar106,(float)dVar26) &
                 CONCAT44((float)auVar30._8_8_,(float)auVar30._0_8_);
        dVar84 = (double)(float)uVar37;
        dVar92 = (double)(float)(uVar37 >> 0x20);
        auVar47._8_8_ = local_1158._0_8_;
        auVar47._0_8_ = local_1158._0_8_;
        auVar53._0_8_ = (dVar108 - dVar43) * local_1178;
        auVar53._8_8_ = (dVar83 - dVar48) * dStack_1170;
        uVar37 = ~local_1168 &
                 CONCAT44((float)((pdVar17[7] - dVar48) * dStack_1170),
                          (float)((pdVar17[6] - dVar43) * local_1178));
        auVar70._0_8_ = (double)(float)uVar37;
        auVar70._8_8_ = (double)(float)(uVar37 >> 0x20);
        auVar103._0_8_ = (pdVar17[0xb] - dVar35) * dVar84;
        auVar103._8_8_ = dVar92 * 0.0;
        uVar37 = ~CONCAT44((float)dVar106,(float)dVar26) &
                 CONCAT44((float)(dVar92 * 0.0),(float)((pdVar17[8] - dVar35) * dVar84));
        auVar62._0_8_ = (double)(float)uVar37;
        auVar62._8_8_ = (double)(float)(uVar37 >> 0x20);
        auVar33._8_8_ = dVar27;
        auVar33._0_8_ = dVar25;
        auVar29 = blendvpd(auVar53,auVar47,auVar33);
        auVar34._8_8_ = dVar106;
        auVar34._0_8_ = dVar26;
        auVar50 = blendvpd(auVar103,auVar47,auVar34);
        auVar105._8_8_ = auVar70._8_8_;
        auVar105._0_8_ = auVar70._0_8_;
        auVar94 = minpd(auVar105,auVar29);
        auVar40._8_8_ = auVar62._8_8_;
        auVar40._0_8_ = auVar62._0_8_;
        auVar30 = minpd(auVar40,auVar50);
        auVar66 = maxpd(auVar70,auVar29);
        auVar50 = maxpd(auVar62,auVar50);
        auVar41._0_8_ = auVar30._0_8_;
        auVar54._8_8_ = auVar30._8_8_;
        auVar54._0_8_ = auVar94._0_8_;
        auVar81._8_8_ = auVar41._0_8_;
        auVar81._0_8_ = auVar94._8_8_;
        auVar90._8_8_ = auVar30._8_8_;
        auVar90._0_8_ = auVar94._8_8_;
        auVar41._8_8_ = auVar94._0_8_;
        auVar94 = maxpd(auVar94,auVar81);
        auVar30 = maxpd(auVar30,auVar54);
        auVar29 = maxpd(auVar30,auVar90);
        auVar30 = maxpd(auVar94,auVar41);
        auVar63._0_8_ = auVar50._0_8_;
        auVar42._8_8_ = auVar50._8_8_;
        auVar42._0_8_ = auVar66._0_8_;
        auVar55._8_8_ = auVar63._0_8_;
        auVar55._0_8_ = auVar66._8_8_;
        auVar91._8_8_ = auVar50._8_8_;
        auVar91._0_8_ = auVar66._8_8_;
        auVar63._8_8_ = auVar66._0_8_;
        auVar66 = minpd(auVar66,auVar55);
        auVar30 = maxpd(auVar30,ZEXT816(0));
        auVar29 = maxpd(auVar29,ZEXT816(0));
        auVar50 = minpd(auVar50,auVar42);
        auVar94 = minpd(auVar50,auVar91);
        auVar50 = minpd(auVar66,auVar63);
        auVar50 = minpd(auVar50,auVar47);
        auVar66 = minpd(auVar94,auVar47);
        auVar82._8_8_ = -(ulonglong)(auVar66._8_8_ < auVar29._8_8_);
        auVar82._0_8_ = -(ulonglong)(auVar66._0_8_ < auVar29._0_8_);
        dVar26 = auVar30._0_8_;
        auVar71._8_8_ = -(ulonglong)(auVar50._8_8_ < auVar30._8_8_);
        auVar71._0_8_ = -(ulonglong)(auVar50._0_8_ < dVar26);
        iVar19 = movmskpd(0,auVar71);
        iVar8 = movmskpd(iVar14,auVar82);
        if (bVar24 && (iVar8 << 2 == 0 && iVar19 == 0)) {
          lVar22 = lVar22 >> 0x1c;
          if (dVar26 <= dVar72) {
            uVar7 = *(uint *)(pdVar17 + 0xc);
            param_9 = (undefined8 *)(ulonglong)uVar7;
            local_f8 = CONCAT44(local_f8._4_4_,iVar15);
            if (local_f8._4_4_ < uVar9) {
              FUN_147df7ce4(&local_10f0,uVar36 & 0xffffffff);
            }
            puVar11 = local_100;
            if (local_100 == (undefined8 *)0x0) {
              puVar11 = &local_10f0;
            }
            *(uint *)((longlong)puVar11 + lVar22) = uVar7;
            *(double *)((longlong)puVar11 + lVar22 + 8) = dVar72;
            uVar13 = *(undefined4 *)((longlong)pdVar17 + 100);
            iVar23 = (uint)local_f8;
            uVar36 = local_f8 & 0xffffffff;
            uVar7 = (uint)local_f8 + 1;
            local_f8 = CONCAT44(local_f8._4_4_,uVar7);
            dVar72 = dVar26;
            if (local_f8._4_4_ < uVar7) {
              FUN_147df7ce4(&local_10f0,uVar36);
            }
          }
          else {
            uVar7 = *(uint *)((longlong)pdVar17 + 100);
            param_9 = (undefined8 *)(ulonglong)uVar7;
            local_f8._0_4_ = iVar15;
            if (local_f8._4_4_ < uVar9) {
              FUN_147df7ce4(&local_10f0,uVar36 & 0xffffffff);
            }
            puVar11 = local_100;
            if (local_100 == (undefined8 *)0x0) {
              puVar11 = &local_10f0;
            }
            *(uint *)((longlong)puVar11 + lVar22) = uVar7;
            *(double *)((longlong)puVar11 + lVar22 + 8) = dVar26;
            iVar23 = (uint)local_f8;
            uVar13 = *(undefined4 *)(pdVar17 + 0xc);
            local_f8._0_4_ = (uint)local_f8 + 1;
            if (local_f8._4_4_ < (uint)local_f8) {
              FUN_147df7ce4(&local_10f0,iVar23);
            }
          }
        }
        else {
          if (bVar24) goto LAB_147df76cd;
          if (iVar8 << 2 != 0 || iVar19 != 0) goto LAB_147df770a;
          uVar13 = *(undefined4 *)((longlong)pdVar17 + 100);
          local_f8 = CONCAT44(local_f8._4_4_,iVar15);
          dVar72 = dVar26;
          if (local_f8._4_4_ < uVar9) {
            param_9 = &local_10f0;
            FUN_147df7ce4(param_9,uVar36 & 0xffffffff);
          }
        }
      }
      else {
        auVar30 = local_1188;
        if (!bVar24) goto LAB_147df770a;
LAB_147df76cd:
        local_1188 = auVar30;
        uVar13 = *(undefined4 *)(pdVar17 + 0xc);
        local_f8 = CONCAT44(local_f8._4_4_,iVar15);
        auVar30 = local_1188;
        if (local_f8._4_4_ < uVar9) {
          FUN_147df7ce4(&local_10f0,uVar36 & 0xffffffff);
          auVar30 = local_1188;
        }
      }
      puVar11 = local_100;
      if (local_100 == (undefined8 *)0x0) {
        puVar11 = &local_10f0;
      }
      *(undefined4 *)(puVar11 + (longlong)iVar23 * 2) = uVar13;
      puVar11[(longlong)iVar23 * 2 + 1] = dVar72;
    }
    else {
      plVar10 = *(longlong **)(param_1 + 0x20);
      uVar36 = (ulonglong)(int)plVar10[(longlong)*(int *)(pdVar17 + 0xc) * 3 + 1];
      auVar30 = local_1188;
      if (uVar36 != 0) {
        lVar12 = plVar10[(longlong)*(int *)(pdVar17 + 0xc) * 3];
        auVar73._8_8_ = 0;
        auVar73._0_8_ = uVar28;
        auVar30 = divpd(_DAT_149934d80,auVar73);
        dVar26 = (double)-(ulonglong)((double)(uVar28 & auVar39._0_8_) < 1e-08);
        auVar74._8_8_ = 0xffffffffffffffff;
        auVar74._0_8_ = dVar26;
        local_1138 = (uint)local_1168 ^ 0xffffffff;
        uStack_1134 = local_1168._4_4_ ^ 0xffffffff;
        uStack_1130 = (uint)uStack_1160 ^ 0xffffffff;
        uStack_112c = uStack_1160._4_4_ ^ 0xffffffff;
        uVar37 = ~CONCAT44(0xffc00000,(float)dVar26) &
                 CONCAT44((float)auVar30._8_8_,(float)auVar30._0_8_);
        dVar106 = (double)(float)uVar37;
        dVar108 = (double)(float)(uVar37 >> 0x20);
        auVar77._8_8_ = local_1158._0_8_;
        auVar77._0_8_ = local_1158._0_8_;
        lVar16 = uVar36 * 0x38;
        lVar22 = 0;
        local_1148 = uVar28;
        uStack_1140 = uVar107;
        do {
          dVar83 = *(double *)(lVar12 + 0x18 + lVar22);
          pdVar17 = (double *)(lVar12 + 8 + lVar22);
          dVar84 = *pdVar17;
          dVar92 = pdVar17[1];
          dVar72 = *(double *)(lVar12 + 0x30 + lVar22);
          pdVar17 = (double *)(lVar12 + 0x20 + lVar22);
          dVar4 = *pdVar17;
          dVar5 = pdVar17[1];
          auVar44._8_8_ = 0;
          auVar44._0_8_ = -(ulonglong)(dVar72 < dVar35 || dVar35 < dVar83);
          auVar64._0_8_ = -(ulonglong)((dVar4 < dVar43 || dVar43 < dVar84) && bVar2);
          auVar64._8_8_ = -(ulonglong)((dVar5 < dVar48 || dVar48 < dVar92) && bVar3);
          uVar7 = movmskpd((int)uVar36,auVar64);
          uVar36 = (ulonglong)uVar7;
          iVar8 = movmskpd((int)plVar10,auVar44 & auVar74);
          uVar9 = iVar8 << 2 | uVar7;
          plVar10 = (longlong *)(ulonglong)uVar9;
          if (uVar9 == 0) {
            auVar38._0_8_ = (dVar4 - dVar43) * local_1178;
            auVar38._8_8_ = (dVar5 - dVar48) * dStack_1170;
            uVar28 = CONCAT44((float)((dVar92 - dVar48) * dStack_1170),
                              (float)((dVar84 - dVar43) * local_1178)) &
                     CONCAT44(uStack_1134,local_1138);
            auVar45._0_8_ = (double)(float)uVar28;
            auVar45._8_8_ = (double)(float)(uVar28 >> 0x20);
            auVar56._0_8_ = (dVar72 - dVar35) * dVar106;
            auVar56._8_8_ = dVar108 * 0.0;
            uVar28 = CONCAT44((float)(dVar108 * 0.0),(float)((dVar83 - dVar35) * dVar106)) &
                     (CONCAT44(0xffc00000,(float)dVar26) ^ 0xffffffffffffffff);
            auVar49._0_8_ = (double)(float)uVar28;
            auVar49._8_8_ = (double)(float)(uVar28 >> 0x20);
            auVar31._8_8_ = dVar27;
            auVar31._0_8_ = dVar25;
            auVar39 = blendvpd(auVar38,auVar77,auVar31);
            auVar32._8_8_ = 0xffffffffffffffff;
            auVar32._0_8_ = dVar26;
            auVar30 = blendvpd(auVar56,auVar77,auVar32);
            auVar65._8_8_ = auVar45._8_8_;
            auVar65._0_8_ = auVar45._0_8_;
            auVar66 = minpd(auVar65,auVar39);
            auVar93._8_8_ = auVar49._8_8_;
            auVar93._0_8_ = auVar49._0_8_;
            auVar94 = minpd(auVar93,auVar30);
            auVar29 = maxpd(auVar45,auVar39);
            auVar50 = maxpd(auVar49,auVar30);
            auVar95._0_8_ = auVar94._0_8_;
            auVar57._8_8_ = auVar94._8_8_;
            auVar57._0_8_ = auVar66._0_8_;
            auVar100._8_8_ = auVar95._0_8_;
            auVar100._0_8_ = auVar66._8_8_;
            auVar104._8_8_ = auVar94._8_8_;
            auVar104._0_8_ = auVar66._8_8_;
            auVar95._8_8_ = auVar66._0_8_;
            auVar30 = maxpd(auVar66,auVar100);
            auVar39 = maxpd(auVar94,auVar57);
            auVar39 = maxpd(auVar39,auVar104);
            auVar30 = maxpd(auVar30,auVar95);
            auVar51._0_8_ = auVar50._0_8_;
            auVar58._8_8_ = auVar50._8_8_;
            auVar58._0_8_ = auVar29._0_8_;
            auVar67._8_8_ = auVar51._0_8_;
            auVar67._0_8_ = auVar29._8_8_;
            auVar101._8_8_ = auVar50._8_8_;
            auVar101._0_8_ = auVar29._8_8_;
            auVar51._8_8_ = auVar29._0_8_;
            auVar29 = minpd(auVar29,auVar67);
            auVar50 = minpd(auVar50,auVar58);
            auVar50 = minpd(auVar50,auVar101);
            auVar29 = minpd(auVar29,auVar51);
            auVar30 = maxpd(auVar30,ZEXT816(0));
            auVar29 = minpd(auVar29,auVar77);
            auVar46._8_8_ = -(ulonglong)(auVar29._8_8_ < auVar30._8_8_);
            auVar46._0_8_ = -(ulonglong)(auVar29._0_8_ < auVar30._0_8_);
            auVar39 = maxpd(auVar39,ZEXT816(0));
            auVar30 = minpd(auVar50,auVar77);
            auVar96._8_8_ = -(ulonglong)(auVar30._8_8_ < auVar39._8_8_);
            auVar96._0_8_ = -(ulonglong)(auVar30._0_8_ < auVar39._0_8_);
            uVar7 = movmskpd(uVar7,auVar46);
            uVar36 = (ulonglong)uVar7;
            iVar8 = movmskpd(0,auVar96);
            uVar7 = iVar8 << 2 | uVar7;
            plVar10 = (longlong *)(ulonglong)uVar7;
            if (uVar7 == 0) {
              local_1108[0] = (double)CONCAT44(local_1108[0]._4_4_,*(undefined4 *)(lVar12 + lVar22))
              ;
              plVar10 = (longlong *)*param_6;
              uVar36 = (**(code **)(*plVar10 + 0x10))(plVar10,local_1108,param_3);
              if ((char)uVar36 == '\0') goto LAB_147df7bc7;
            }
          }
          lVar22 = lVar22 + 0x38;
          auVar39 = _DAT_149931180;
          uVar28 = local_1148;
          uVar107 = uStack_1140;
          auVar30 = local_1188;
        } while (lVar16 - lVar22 != 0);
      }
    }
LAB_147df770a:
    local_1188 = auVar30;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = *(ulonglong *)(param_3 + 0x20);
    uVar7 = (uint)local_f8;
  } while( true );
LAB_147df7bc7:
  if (local_100 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_147df7bd1:
  if ((local_f0 ^ (ulonglong)auStack_11d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)param_9 & 0xffffffff;
}



// FUNCTION 147df7ce4 FUN_147df7ce4 body=131 status=ok
// SIG undefined FUN_147df7ce4(void)

void FUN_147df7ce4(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0xff8);
  if (param_2 <= (int)uVar1) {
    uVar4 = 0xff;
    if (0xff < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0xff < *(uint *)(param_1 + 0xffc)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 4,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 4)) {
        uVar4 = uVar2 >> 4 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0xffc) = (int)uVar4;
    FUN_147df7d68(param_1,param_2,uVar4,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147df7d68 FUN_147df7d68 body=145 status=ok
// SIG undefined FUN_147df7d68(void)

void FUN_147df7d68(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xff0);
  if ((uint)param_3 < 0x100) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xff0,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0xff0),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xff0,param_2,param_3,param_4);
  return;
}



// FUNCTION 147df7dfa FUN_147df7dfa body=2805 status=ok
// SIG undefined FUN_147df7dfa(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_147df7dfa(undefined8 *param_1,double *param_2,longlong param_3,double *param_4,
                       undefined8 param_5,undefined8 *param_6,undefined8 param_7,double *param_8,
                       longlong param_9)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  ulonglong uVar11;
  char cVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined8 *unaff_RBP;
  int iVar17;
  undefined4 *puVar18;
  ulonglong uVar19;
  undefined4 *puVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined4 unaff_XMM8_Da;
  undefined4 unaff_XMM8_Db;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined1 auStack_1208 [32];
  undefined8 local_11e8;
  undefined8 *local_11e0;
  undefined8 local_11d8;
  double *local_11d0;
  longlong local_11c8;
  undefined8 *local_11c0;
  double local_11b8 [4];
  double local_1198 [4];
  double local_1178 [4];
  undefined4 local_1158;
  undefined4 uStack_1154;
  undefined4 uStack_1150;
  undefined4 uStack_114c;
  double local_1148;
  double local_1138 [6];
  undefined8 local_1108;
  double local_1100;
  double local_10f8;
  undefined8 local_10f0;
  double local_10e8;
  double local_10e0;
  undefined8 *local_100;
  undefined8 local_f8;
  ulonglong local_f0;
  undefined8 uStack_48;
  
  uStack_48 = 0x147df7e10;
  dVar5 = (double)CONCAT44(unaff_XMM8_Db,unaff_XMM8_Da);
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1208;
  if ((longlong)*(int *)(param_1 + 0x22) != 0) {
    puVar16 = (undefined8 *)param_1[0x21];
    unaff_RBP = puVar16 + (longlong)*(int *)(param_1 + 0x22) * 7;
    do {
      local_1178[2] = param_8[2];
      local_1178[0] = *param_8;
      local_1178[1] = param_8[1];
      dVar5 = ((double)puVar16[1] - *param_4) - *param_2;
      local_10f0 = dVar5;
      local_10e8 = ((double)puVar16[2] - param_4[1]) - param_2[1];
      local_10e0 = ((double)puVar16[3] - param_4[2]) - param_2[2];
      local_1108 = ((double)puVar16[4] + *param_4) - *param_2;
      local_1100 = ((double)puVar16[5] + param_4[1]) - param_2[1];
      local_10f8 = ((double)puVar16[6] + param_4[2]) - param_2[2];
      lVar15 = 0;
      dVar23 = 0.0;
      uVar21 = 0xffffffff;
      uVar22 = 0x7fefffff;
      do {
        if (*(char *)(param_9 + lVar15) == '\x01') {
          if (0.0 < (double)(&local_10f0)[lVar15]) goto LAB_147df8057;
          dVar25 = 0.0;
          dVar24 = 1.79769313486232e+308;
          if ((double)(&local_1108)[lVar15] <= 0.0 && (double)(&local_1108)[lVar15] != 0.0)
          goto LAB_147df8057;
        }
        else {
          dVar25 = (double)(&local_10f0)[lVar15] * local_1178[lVar15];
          dVar24 = local_1178[lVar15] * (double)(&local_1108)[lVar15];
        }
        dVar26 = dVar24;
        if (dVar25 <= dVar24) {
          dVar26 = dVar25;
        }
        if (dVar23 <= dVar26) {
          dVar23 = dVar26;
        }
        if (dVar25 <= dVar24) {
          dVar25 = dVar24;
        }
        if (dVar25 <= (double)CONCAT44(uVar22,uVar21)) {
          uVar21 = SUB84(dVar25,0);
          uVar22 = (undefined4)((ulonglong)dVar25 >> 0x20);
        }
        if ((double)CONCAT44(uVar22,uVar21) <= dVar23 && dVar23 != (double)CONCAT44(uVar22,uVar21))
        goto LAB_147df8057;
        lVar15 = lVar15 + 1;
      } while (lVar15 != 3);
      if ((dVar23 <= *(double *)(param_3 + 0x20)) &&
         (0.0 < (double)CONCAT44(uVar22,uVar21) || (double)CONCAT44(uVar22,uVar21) == 0.0)) {
        local_10f0._4_4_ = (undefined4)((ulonglong)dVar5 >> 0x20);
        local_10f0 = (double)CONCAT44(local_10f0._4_4_,*(undefined4 *)puVar16);
        cVar12 = (**(code **)(*(longlong *)*param_6 + 0x18))
                           ((longlong *)*param_6,&local_10f0,param_3);
        if (cVar12 == '\0') goto LAB_147df8776;
      }
LAB_147df8057:
      puVar16 = puVar16 + 7;
    } while (puVar16 != unaff_RBP);
  }
  if (param_1[0x18] != 0) {
    local_11c8 = param_9;
    local_11d0 = param_8;
    local_11d8 = param_7;
    local_11e0 = param_6;
    local_11e8 = param_5;
    cVar12 = FUN_147df7dfa(param_1[0x18],param_2,param_3,param_4);
    if (cVar12 == '\0') {
LAB_147df8776:
      unaff_RBP = (undefined8 *)0x0;
      goto LAB_147df8629;
    }
  }
  local_100 = (undefined8 *)0x0;
  local_f8 = 0xff00000000;
  if (*(char *)(param_1 + 8) == '\x01') {
    iVar13 = *(int *)((longlong)param_1 + 0x44);
    if (iVar13 != -1) {
LAB_147df80ad:
      local_f8 = 0xff00000001;
      local_10f0 = (double)CONCAT44(local_10f0._4_4_,iVar13);
      local_10e8 = 0.0;
    }
  }
  else {
    iVar13 = 0;
    if (*(int *)(param_1 + 3) != 0) goto LAB_147df80ad;
  }
  local_11c0 = param_1;
LAB_147df80dc:
  uVar11 = local_f8;
  uVar14 = (uint)local_f8;
  lVar15 = (longlong)(int)(uint)local_f8;
  unaff_RBP = (undefined8 *)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),lVar15 == 0);
  if (lVar15 == 0) goto LAB_147df861f;
  puVar16 = local_100;
  if (local_100 == (undefined8 *)0x0) {
    puVar16 = &local_10f0;
  }
  uVar19 = lVar15 - 1;
  iVar17 = (int)uVar19;
  local_f8 = CONCAT44(local_f8._4_4_,iVar17);
  dVar23 = *(double *)(param_3 + 0x20);
  iVar13 = 4;
  if ((double)puVar16[lVar15 * 2 + -1] <= dVar23) {
    pdVar1 = (double *)(param_1[2] + (longlong)*(int *)(puVar16 + lVar15 * 2 + -2) * 0x70);
    if ((*(byte *)(param_1[2] + 0x6c + (longlong)*(int *)(puVar16 + lVar15 * 2 + -2) * 0x70) & 1) ==
        0) {
      local_1198[2] = param_8[2];
      local_1198[0] = *param_8;
      local_1198[1] = param_8[1];
      dVar24 = param_4[2];
      dVar25 = *param_4;
      dVar26 = param_4[1];
      dVar27 = param_2[2];
      dVar2 = *param_2;
      dVar3 = param_2[1];
      local_1108 = (*pdVar1 - dVar25) - dVar2;
      local_1100 = (pdVar1[1] - dVar26) - dVar3;
      local_10f8 = (pdVar1[2] - dVar24) - dVar27;
      local_1138[3] = (pdVar1[3] + dVar25) - dVar2;
      local_1138[4] = (pdVar1[4] + dVar26) - dVar3;
      local_1138[5] = (pdVar1[5] + dVar24) - dVar27;
      dVar9 = 0.0;
      lVar15 = 0;
      dVar10 = 1.79769313486232e+308;
      do {
        if (*(char *)(param_9 + lVar15) == '\x01') {
          bVar4 = true;
          if ((0.0 < (double)(&local_1108)[lVar15]) ||
             (dVar6 = 0.0, dVar7 = 1.79769313486232e+308,
             local_1138[lVar15 + 3] <= 0.0 && local_1138[lVar15 + 3] != 0.0)) goto LAB_147df84ae;
        }
        else {
          dVar6 = (double)(&local_1108)[lVar15] * local_1198[lVar15];
          dVar7 = local_1198[lVar15] * local_1138[lVar15 + 3];
        }
        dVar8 = dVar7;
        if (dVar6 <= dVar7) {
          dVar8 = dVar6;
        }
        if (dVar9 <= dVar8) {
          dVar9 = dVar8;
        }
        if (dVar6 <= dVar7) {
          dVar6 = dVar7;
        }
        if (dVar6 <= dVar10) {
          dVar10 = dVar6;
        }
        bVar4 = true;
        if (dVar10 < dVar9) goto LAB_147df84ae;
        lVar15 = lVar15 + 1;
      } while (lVar15 != 3);
      if ((dVar9 <= dVar23) && (0.0 <= dVar10)) {
        bVar4 = false;
        dVar5 = dVar9;
      }
LAB_147df84ae:
      local_11b8[2] = param_8[2];
      local_11b8[0] = *param_8;
      local_11b8[1] = param_8[1];
      local_1108 = (pdVar1[6] - dVar25) - dVar2;
      local_1100 = (pdVar1[7] - dVar26) - dVar3;
      local_10f8 = (pdVar1[8] - dVar24) - dVar27;
      local_1138[3] = (dVar25 + pdVar1[9]) - dVar2;
      local_1138[4] = (dVar26 + pdVar1[10]) - dVar3;
      local_1138[5] = (dVar24 + pdVar1[0xb]) - dVar27;
      uVar28 = 0;
      uVar29 = 0;
      lVar15 = 0;
      uVar21 = 0xffffffff;
      uVar22 = 0x7fefffff;
      do {
        dVar24 = dVar5;
        if (*(char *)(param_9 + lVar15) == '\x01') {
          if (0.0 < (double)(&local_1108)[lVar15]) goto LAB_147df85cc;
          dVar26 = 0.0;
          dVar25 = 1.79769313486232e+308;
          if (local_1138[lVar15 + 3] <= 0.0 && local_1138[lVar15 + 3] != 0.0) goto LAB_147df85cc;
        }
        else {
          dVar26 = (double)(&local_1108)[lVar15] * local_11b8[lVar15];
          dVar25 = local_11b8[lVar15] * local_1138[lVar15 + 3];
        }
        dVar27 = dVar25;
        if (dVar26 <= dVar25) {
          dVar27 = dVar26;
        }
        if ((double)CONCAT44(uVar29,uVar28) <= dVar27) {
          uVar28 = SUB84(dVar27,0);
          uVar29 = (undefined4)((ulonglong)dVar27 >> 0x20);
        }
        dVar27 = (double)CONCAT44(uVar29,uVar28);
        if (dVar26 <= dVar25) {
          dVar26 = dVar25;
        }
        if (dVar26 <= (double)CONCAT44(uVar22,uVar21)) {
          uVar21 = SUB84(dVar26,0);
          uVar22 = (undefined4)((ulonglong)dVar26 >> 0x20);
        }
        if ((double)CONCAT44(uVar22,uVar21) <= (double)CONCAT44(uVar29,uVar28) &&
            (double)CONCAT44(uVar29,uVar28) != (double)CONCAT44(uVar22,uVar21)) goto LAB_147df85cc;
        lVar15 = lVar15 + 1;
      } while (lVar15 != 3);
      if ((dVar23 <= (double)CONCAT44(uVar29,uVar28) && (double)CONCAT44(uVar29,uVar28) != dVar23)
         || ((double)CONCAT44(uVar22,uVar21) <= 0.0 && (double)CONCAT44(uVar22,uVar21) != 0.0)) {
LAB_147df85cc:
        if (bVar4) goto LAB_147df80dc;
        uVar21 = *(undefined4 *)(pdVar1 + 0xc);
        bVar4 = local_f8._4_4_ < uVar14;
        local_f8 = uVar11;
        if (bVar4) {
          FUN_147df88f0(&local_10f0,uVar19 & 0xffffffff);
          unaff_RBP = &local_10f0;
        }
      }
      else if (bVar4) {
        uVar21 = *(undefined4 *)((longlong)pdVar1 + 100);
        bVar4 = local_f8._4_4_ < uVar14;
        dVar24 = (double)CONCAT44(uVar29,uVar28);
        local_f8 = uVar11;
        if (bVar4) {
          FUN_147df88f0(&local_10f0,uVar19 & 0xffffffff);
          unaff_RBP = &local_10f0;
          dVar24 = dVar27;
        }
      }
      else {
        unaff_RBP = param_1;
        if ((double)CONCAT44(uVar29,uVar28) < dVar5 || (double)CONCAT44(uVar29,uVar28) == dVar5) {
          uVar21 = *(undefined4 *)(pdVar1 + 0xc);
          bVar4 = local_f8._4_4_ < uVar14;
          local_f8 = uVar11;
          if (bVar4) {
            FUN_147df88f0(&local_10f0,uVar19 & 0xffffffff);
          }
          puVar16 = local_100;
          if (local_100 == (undefined8 *)0x0) {
            puVar16 = &local_10f0;
          }
          *(undefined4 *)(puVar16 + (longlong)iVar17 * 2) = uVar21;
          puVar16[(longlong)iVar17 * 2 + 1] = dVar5;
          uVar21 = *(undefined4 *)((longlong)pdVar1 + 100);
          uVar19 = local_f8 & 0xffffffff;
          uVar14 = (uint)local_f8 + 1;
          local_f8 = CONCAT44(local_f8._4_4_,uVar14);
          dVar24 = dVar27;
          if (local_f8._4_4_ < uVar14) {
            FUN_147df88f0(&local_10f0,uVar19);
          }
        }
        else {
          uVar21 = *(undefined4 *)((longlong)pdVar1 + 100);
          bVar4 = local_f8._4_4_ < uVar14;
          local_f8 = uVar11;
          if (bVar4) {
            FUN_147df88f0(&local_10f0,uVar19 & 0xffffffff);
          }
          puVar16 = local_100;
          if (local_100 == (undefined8 *)0x0) {
            puVar16 = &local_10f0;
          }
          *(undefined4 *)(puVar16 + uVar19 * 2) = uVar21;
          puVar16[uVar19 * 2 + 1] = CONCAT44(uVar29,uVar28);
          uVar21 = *(undefined4 *)(pdVar1 + 0xc);
          uVar19 = local_f8 & 0xffffffff;
          uVar14 = (uint)local_f8 + 1;
          local_f8 = CONCAT44(local_f8._4_4_,uVar14);
          if (local_f8._4_4_ < uVar14) {
            FUN_147df88f0(&local_10f0,uVar19);
          }
        }
      }
      puVar16 = local_100;
      if (local_100 == (undefined8 *)0x0) {
        puVar16 = &local_10f0;
      }
      *(undefined4 *)(puVar16 + (longlong)(int)uVar19 * 2) = uVar21;
      puVar16[(longlong)(int)uVar19 * 2 + 1] = dVar24;
      goto LAB_147df80dc;
    }
    local_1148 = param_8[2];
    local_1158 = *(undefined4 *)param_8;
    uStack_1154 = *(undefined4 *)((longlong)param_8 + 4);
    uStack_1150 = *(undefined4 *)(param_8 + 1);
    uStack_114c = *(undefined4 *)((longlong)param_8 + 0xc);
    lVar15 = (longlong)*(int *)(param_1[4] + 8 + (longlong)*(int *)(pdVar1 + 0xc) * 0x18);
    iVar13 = 0;
    if (lVar15 != 0) {
      puVar18 = *(undefined4 **)(param_1[4] + (longlong)*(int *)(pdVar1 + 0xc) * 0x18);
      puVar20 = puVar18 + lVar15 * 0xe;
      do {
        local_1138[2] = local_1148;
        local_1138[0] = (double)CONCAT44(uStack_1154,local_1158);
        local_1138[1] = (double)CONCAT44(uStack_114c,uStack_1150);
        dVar23 = (*(double *)(puVar18 + 2) - *param_4) - *param_2;
        local_1108 = dVar23;
        local_1100 = (*(double *)(puVar18 + 4) - param_4[1]) - param_2[1];
        local_10f8 = (*(double *)(puVar18 + 6) - param_4[2]) - param_2[2];
        local_1138[3] = (*(double *)(puVar18 + 8) + *param_4) - *param_2;
        local_1138[4] = (*(double *)(puVar18 + 10) + param_4[1]) - param_2[1];
        local_1138[5] = (*(double *)(puVar18 + 0xc) + param_4[2]) - param_2[2];
        dVar24 = 0.0;
        lVar15 = 0;
        uVar21 = 0xffffffff;
        uVar22 = 0x7fefffff;
        do {
          if (*(char *)(param_9 + lVar15) == '\x01') {
            if (0.0 < (double)(&local_1108)[lVar15]) goto LAB_147df8334;
            dVar26 = 0.0;
            dVar25 = 1.79769313486232e+308;
            if (local_1138[lVar15 + 3] <= 0.0 && local_1138[lVar15 + 3] != 0.0) goto LAB_147df8334;
          }
          else {
            dVar26 = (double)(&local_1108)[lVar15] * local_1138[lVar15];
            dVar25 = local_1138[lVar15] * local_1138[lVar15 + 3];
          }
          dVar27 = dVar25;
          if (dVar26 <= dVar25) {
            dVar27 = dVar26;
          }
          if (dVar24 <= dVar27) {
            dVar24 = dVar27;
          }
          if (dVar26 <= dVar25) {
            dVar26 = dVar25;
          }
          if (dVar26 <= (double)CONCAT44(uVar22,uVar21)) {
            uVar21 = SUB84(dVar26,0);
            uVar22 = (undefined4)((ulonglong)dVar26 >> 0x20);
          }
          if ((double)CONCAT44(uVar22,uVar21) <= dVar24 && dVar24 != (double)CONCAT44(uVar22,uVar21)
             ) goto LAB_147df8334;
          lVar15 = lVar15 + 1;
        } while (lVar15 != 3);
        if ((dVar24 <= *(double *)(param_3 + 0x20)) &&
           (0.0 < (double)CONCAT44(uVar22,uVar21) || (double)CONCAT44(uVar22,uVar21) == 0.0)) {
          local_1108 = (double)CONCAT44((int)((ulonglong)dVar23 >> 0x20),*puVar18);
          cVar12 = (**(code **)(*(longlong *)*param_6 + 0x18))
                             ((longlong *)*param_6,&local_1108,param_3);
          if (cVar12 == '\0') {
            iVar13 = 1;
            param_1 = local_11c0;
            break;
          }
        }
LAB_147df8334:
        puVar18 = puVar18 + 0xe;
        param_1 = local_11c0;
        iVar13 = 0;
      } while (puVar18 != puVar20);
    }
  }
  if ((iVar13 == 4) || (iVar13 == 0)) goto LAB_147df80dc;
LAB_147df861f:
  if (local_100 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_147df8629:
  if ((local_f0 ^ (ulonglong)auStack_1208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)unaff_RBP & 0xffffffff;
}



// FUNCTION 147df88f0 FUN_147df88f0 body=131 status=ok
// SIG undefined FUN_147df88f0(void)

void FUN_147df88f0(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0xff8);
  if (param_2 <= (int)uVar1) {
    uVar4 = 0xff;
    if (0xff < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0xff < *(uint *)(param_1 + 0xffc)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 4,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 4)) {
        uVar4 = uVar2 >> 4 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0xffc) = (int)uVar4;
    FUN_147df8974(param_1,param_2,uVar4,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147df8974 FUN_147df8974 body=145 status=ok
// SIG undefined FUN_147df8974(void)

void FUN_147df8974(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xff0);
  if ((uint)param_3 < 0x100) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xff0,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0xff0),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xff0,param_2,param_3,param_4);
  return;
}



// FUNCTION 147df8a06 FUN_147df8a06 body=178 status=ok
// SIG undefined FUN_147df8a06(void)

void FUN_147df8a06(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 *local_c8;
  undefined8 *local_c0;
  undefined2 *local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined2 local_38;
  undefined1 local_36;
  undefined1 local_30 [24];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_c8 = local_30;
  local_c0 = &local_60;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_b8 = &local_38;
  local_38 = 0;
  local_36 = 0;
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_d8 = param_2;
  local_d0 = param_3;
  local_68 = local_c8;
  FUN_147df8aba(0,&local_a8,&local_68);
  if ((local_18 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147df8aba FUN_147df8aba body=917 status=ok
// SIG undefined FUN_147df8aba(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_147df8aba(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
                       longlong param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8,
                       undefined8 param_9)

{
  undefined8 *puVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  double *pdVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  longlong lVar15;
  undefined1 auStack_10c8 [32];
  longlong local_10a8;
  undefined8 *local_10a0;
  undefined8 local_1098;
  undefined8 local_1090;
  undefined8 local_1088;
  ulonglong local_1080;
  double local_1078 [6];
  double local_1048 [510];
  double *local_58;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_10c8;
  local_1080 = param_1;
  if ((longlong)*(int *)(param_1 + 0x110) != 0) {
    puVar14 = *(undefined4 **)(param_1 + 0x108);
    puVar12 = puVar14 + (longlong)*(int *)(param_1 + 0x110) * 0xe;
    do {
      local_1048[2] = (double)*(undefined8 *)(puVar14 + 6);
      local_1048[0] = *(double *)(puVar14 + 2);
      local_1048[1] = (double)*(undefined8 *)(puVar14 + 4);
      local_1048[5] = (double)*(undefined8 *)(puVar14 + 0xc);
      local_1048[3] = (double)*(undefined8 *)(puVar14 + 8);
      local_1048[4] = (double)*(undefined8 *)(puVar14 + 10);
      lVar8 = 0;
      do {
        dVar2 = *(double *)(param_5 + lVar8 * 8);
        if ((local_1048[lVar8 + 3] <= dVar2 && dVar2 != local_1048[lVar8 + 3]) ||
           (pdVar11 = (double *)(param_5 + 0x18 + lVar8 * 8),
           *pdVar11 <= local_1048[lVar8] && local_1048[lVar8] != *pdVar11)) goto LAB_147df8ba4;
        lVar8 = lVar8 + 1;
      } while (lVar8 != 3);
      local_1078[0] = (double)CONCAT44(local_1078[0]._4_4_,*puVar14);
      cVar5 = (**(code **)(*(longlong *)*param_6 + 8))((longlong *)*param_6,local_1078);
      param_1 = local_1080;
      if (cVar5 == '\0') goto LAB_147df8e04;
LAB_147df8ba4:
      puVar14 = puVar14 + 0xe;
    } while (puVar14 != puVar12);
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    local_1088 = param_9;
    local_1090 = param_8;
    local_1098 = param_7;
    local_10a0 = param_6;
    local_10a8 = param_5;
    cVar5 = FUN_147df8aba(*(longlong *)(param_1 + 0xc0),param_2,param_3,param_4);
    param_1 = local_1080;
    if (cVar5 == '\0') {
LAB_147df8e04:
      uVar13 = 0;
      goto LAB_147df8d7c;
    }
  }
  bVar6 = *(byte *)(param_1 + 0x40);
  if ((bVar6 == 1) && (*(int *)(param_1 + 400) != 0)) {
    local_1048[0] = (double)CONCAT71(local_1048[0]._1_7_,1);
    cVar5 = FUN_147df8e50(param_1,param_5,param_6);
    if (cVar5 != '\0') {
      uVar13 = CONCAT71((int7)(param_1 >> 8),local_1048[0]._0_1_);
      goto LAB_147df8d7c;
    }
    bVar6 = *(byte *)(param_1 + 0x40);
    param_4 = param_1;
  }
  local_58 = (double *)0x0;
  local_4c = 0xff;
  if ((bVar6 & 1) == 0) {
    iVar7 = 0;
    if (*(int *)(param_1 + 0x18) != 0) goto LAB_147df8c0c;
  }
  else {
    iVar7 = *(int *)(param_1 + 0x44);
    if (iVar7 != -1) {
LAB_147df8c0c:
      local_1048[0] = (double)CONCAT44(local_1048[0]._4_4_,iVar7);
      local_1048[1] = 0.0;
      local_50 = 1;
      do {
        pdVar11 = local_58;
        if (local_58 == (double *)0x0) {
          pdVar11 = local_1048;
        }
        lVar9 = (longlong)(int)local_50;
        local_50 = local_50 - 1;
        lVar8 = *(longlong *)(param_1 + 0x10) + (longlong)*(int *)(pdVar11 + lVar9 * 2 + -2) * 0x70;
        if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x6c +
                      (longlong)*(int *)(pdVar11 + lVar9 * 2 + -2) * 0x70) & 1) == 0) {
          lVar9 = 0;
          lVar15 = 0;
          do {
            uVar4 = local_50;
            local_1078[2] = (double)*(undefined8 *)(lVar8 + 0x10 + lVar15);
            local_1078[0] = *(double *)(lVar8 + lVar15);
            local_1078[1] = ((double *)(lVar8 + lVar15))[1];
            local_1078[5] = (double)*(undefined8 *)(lVar8 + 0x28 + lVar15);
            puVar1 = (undefined8 *)(lVar8 + 0x18 + lVar15);
            local_1078[3] = (double)*puVar1;
            local_1078[4] = (double)puVar1[1];
            lVar10 = 0;
            do {
              dVar2 = *(double *)(param_5 + lVar10 * 8);
              if ((local_1078[lVar10 + 3] <= dVar2 && dVar2 != local_1078[lVar10 + 3]) ||
                 (pdVar11 = (double *)(param_5 + 0x18 + lVar10 * 8),
                 *pdVar11 <= local_1078[lVar10] && local_1078[lVar10] != *pdVar11))
              goto LAB_147df8d06;
              lVar10 = lVar10 + 1;
            } while (lVar10 != 3);
            uVar3 = *(uint *)(lVar8 + 0x60 + lVar9 * 4);
            param_4 = (ulonglong)uVar3;
            lVar10 = (longlong)(int)local_50;
            local_50 = local_50 + 1;
            if (local_4c < local_50) {
              FUN_147df8f38(local_1048,uVar4);
              param_1 = local_1080;
            }
            pdVar11 = local_58;
            if (local_58 == (double *)0x0) {
              pdVar11 = local_1048;
            }
            *(uint *)(pdVar11 + lVar10 * 2) = uVar3;
            pdVar11[lVar10 * 2 + 1] = 0.0;
LAB_147df8d06:
            lVar9 = lVar9 + 1;
            lVar15 = lVar15 + 0x30;
          } while (lVar15 != 0x60);
        }
        else {
          cVar5 = FUN_146e37d94((longlong)*(int *)(lVar8 + 0x60) * 0x18 +
                                *(longlong *)(param_1 + 0x20),param_5,param_6);
          param_1 = local_1080;
          if (cVar5 == '\0') {
            uVar13 = 0;
            goto LAB_147df8d6a;
          }
        }
      } while (local_50 != 0);
      uVar13 = CONCAT71((int7)(param_4 >> 8),1);
LAB_147df8d6a:
      if (local_58 != (double *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_147df8d7c;
    }
  }
  uVar13 = CONCAT71((int7)(param_4 >> 8),1);
LAB_147df8d7c:
  if ((local_48 ^ (ulonglong)auStack_10c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13 & 0xffffff01;
}



// FUNCTION 147df8e50 FUN_147df8e50 body=231 status=ok
// SIG undefined FUN_147df8e50(void)

undefined8
FUN_147df8e50(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  int *piVar4;
  longlong lVar5;
  
  *param_4 = 1;
  lVar3 = (**(code **)(*(longlong *)*param_3 + 0x38))();
  if (lVar3 != 0) {
    piVar4 = (int *)(**(code **)(*(longlong *)*param_3 + 0x38))();
    iVar1 = *piVar4;
    if (iVar1 < *(int *)(param_1 + 0x120)) {
      lVar3 = *(longlong *)(param_1 + 0x118) + (longlong)iVar1 * 0x18;
      if (lVar3 == 0) {
        return 0;
      }
      if (*(char *)(*(longlong *)(param_1 + 0x118) + 0x14 + (longlong)iVar1 * 0x18) == '\0') {
        return 0;
      }
      iVar1 = *(int *)(lVar3 + 8);
      lVar3 = (longlong)iVar1;
      if ((lVar3 != -1) && (iVar1 < *(int *)(param_1 + 0x1a0) + -1)) {
        iVar1 = *(int *)(*(longlong *)(param_1 + 0x198) + lVar3 * 4);
        lVar5 = (longlong)iVar1;
        if (*(int *)(*(longlong *)(param_1 + 0x198) + 4 + lVar3 * 4) <= iVar1) {
          return 1;
        }
        do {
          cVar2 = FUN_146e37d94((longlong)*(int *)(*(longlong *)(param_1 + 0x188) + lVar5 * 4) *
                                0x18 + *(longlong *)(param_1 + 0x20),param_2,param_3);
          if (cVar2 == '\0') {
            *param_4 = 0;
            return 1;
          }
          lVar5 = lVar5 + 1;
        } while (lVar5 < *(int *)(*(longlong *)(param_1 + 0x198) + 4 + lVar3 * 4));
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 147df8f38 FUN_147df8f38 body=131 status=ok
// SIG undefined FUN_147df8f38(void)

void FUN_147df8f38(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0xff8);
  if (param_2 <= (int)uVar1) {
    uVar4 = 0xff;
    if (0xff < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0xff < *(uint *)(param_1 + 0xffc)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 4,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 4)) {
        uVar4 = uVar2 >> 4 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0xffc) = (int)uVar4;
    FUN_147df8fbc(param_1,param_2,uVar4,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147df8fbc FUN_147df8fbc body=145 status=ok
// SIG undefined FUN_147df8fbc(void)

void FUN_147df8fbc(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xff0);
  if ((uint)param_3 < 0x100) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xff0,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0xff0),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xff0,param_2,param_3,param_4);
  return;
}



// FUNCTION 147df904e FUN_147df904e body=116 status=ok
// SIG undefined FUN_147df904e(void)

void FUN_147df904e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xf8,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0xf8)) {
      uVar2 = uVar1 / 0xf8 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xf8,8);
  }
  return;
}



// FUNCTION 147df90c2 FUN_147df90c2 body=417 status=ok
// SIG undefined FUN_147df90c2(void)

undefined8 *
FUN_147df90c2(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5,undefined4 param_6,undefined1 param_7,char param_8,
             undefined1 param_9)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x401;
  *param_1 = &PTR_FUN_14ab38d10;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = param_7;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0xffffffff;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0x25) = param_3;
  *(undefined4 *)((longlong)param_1 + 300) = param_4;
  param_1[0x26] = param_5;
  *(undefined4 *)(param_1 + 0x27) = param_6;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined2 *)(param_1 + 0x30) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x182) = param_9;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  if (param_8 != '\0') {
    lVar2 = FUN_14001cc68(0x1d8,0x10);
    FUN_147df40b0(lVar2);
    lVar1 = param_1[0x18];
    param_1[0x18] = lVar2;
    if (lVar1 != 0) {
      FUN_147df5014(lVar1);
      FUN_1400020a8(lVar1);
      lVar2 = param_1[0x18];
    }
    *(undefined1 *)(lVar2 + 0x40) = 1;
  }
  FUN_1437d0062(param_1,param_2);
  return param_1;
}



// FUNCTION 147df9264 FUN_147df9264 body=716 status=ok
// SIG undefined FUN_147df9264(void)

longlong FUN_147df9264(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = param_1;
  while( true ) {
    *(undefined1 *)(lVar4 + 0xd) = *(undefined1 *)(param_2 + 0xd);
    *(undefined4 *)(lVar4 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined1 *)(lVar4 + 0xc) = *(undefined1 *)(param_2 + 0xc);
    *(undefined4 *)(lVar4 + 0x158) = 0;
    if (*(int *)(lVar4 + 0x15c) != 0) {
      FUN_14481578e(lVar4 + 0x150,0);
    }
    FUN_147df5182(*(undefined8 *)(lVar4 + 0x170),*(undefined4 *)(lVar4 + 0x178));
    *(undefined4 *)(lVar4 + 0x178) = 0;
    if (*(int *)(lVar4 + 0x17c) != 0) {
      FUN_147df904e(lVar4 + 0x170,0);
    }
    *(undefined4 *)(lVar4 + 0x168) = 0;
    if (*(int *)(lVar4 + 0x16c) != 0) {
      FUN_14481578e(lVar4 + 0x160,0);
    }
    if (lVar4 == param_2) break;
    FUN_140484938(lVar4 + 0x10,param_2 + 0x10);
    FUN_146e3842a(lVar4 + 0x20,param_2 + 0x20);
    FUN_146c9b3f2(lVar4 + 0x30,param_2 + 0x30);
    *(undefined1 *)(lVar4 + 0x40) = *(undefined1 *)(param_2 + 0x40);
    *(undefined4 *)(lVar4 + 0x44) = *(undefined4 *)(param_2 + 0x44);
    *(undefined4 *)(lVar4 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(lVar4 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
    FUN_140484a40(lVar4 + 0x50,param_2 + 0x50);
    FUN_14054c6c4(lVar4 + 0xa0,param_2 + 0xa0);
    FUN_14054c6c4(lVar4 + 0xb0,param_2 + 0xb0);
    uVar2 = *(undefined8 *)(param_2 + 0xec);
    *(undefined8 *)(lVar4 + 0xe4) = *(undefined8 *)(param_2 + 0xe4);
    *(undefined8 *)(lVar4 + 0xec) = uVar2;
    *(undefined4 *)(lVar4 + 0x104) = *(undefined4 *)(param_2 + 0x104);
    uVar2 = *(undefined8 *)(param_2 + 0xfc);
    *(undefined8 *)(lVar4 + 0xf4) = *(undefined8 *)(param_2 + 0xf4);
    *(undefined8 *)(lVar4 + 0xfc) = uVar2;
    *(undefined8 *)(lVar4 + 200) = *(undefined8 *)(param_2 + 200);
    *(undefined8 *)(lVar4 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
    *(undefined4 *)(lVar4 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
    *(undefined4 *)(lVar4 + 0xdc) = *(undefined4 *)(param_2 + 0xdc);
    *(undefined4 *)(lVar4 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
    FUN_146c9b3f2(lVar4 + 0x108,param_2 + 0x108);
    FUN_146deea5e(lVar4 + 0x118);
    *(undefined4 *)(lVar4 + 0x128) = *(undefined4 *)(param_2 + 0x128);
    *(undefined4 *)(lVar4 + 300) = *(undefined4 *)(param_2 + 300);
    *(undefined8 *)(lVar4 + 0x130) = *(undefined8 *)(param_2 + 0x130);
    *(undefined4 *)(lVar4 + 0x138) = *(undefined4 *)(param_2 + 0x138);
    *(undefined4 *)(lVar4 + 0x13c) = *(undefined4 *)(param_2 + 0x13c);
    *(undefined8 *)(lVar4 + 0x140) = *(undefined8 *)(param_2 + 0x140);
    *(undefined1 *)(lVar4 + 0x180) = *(undefined1 *)(param_2 + 0x180);
    *(undefined1 *)(lVar4 + 0x181) = *(undefined1 *)(param_2 + 0x181);
    *(undefined1 *)(lVar4 + 0x182) = *(undefined1 *)(param_2 + 0x182);
    lVar3 = *(longlong *)(lVar4 + 0xc0);
    if (*(longlong *)(param_2 + 0xc0) == 0) {
      *(undefined8 *)(lVar4 + 0xc0) = 0;
      if (lVar3 != 0) {
        FUN_147df5014(lVar3);
        FUN_1400020a8(lVar3);
      }
      return param_1;
    }
    if (lVar3 == 0) {
      lVar3 = FUN_14001cc68(0x1d8);
      FUN_147df40b0(lVar3);
      lVar1 = *(longlong *)(lVar4 + 0xc0);
      *(longlong *)(lVar4 + 0xc0) = lVar3;
      if (lVar1 != 0) {
        FUN_147df5014(lVar1);
        FUN_1400020a8(lVar1);
        lVar3 = *(longlong *)(lVar4 + 0xc0);
      }
    }
    param_2 = *(longlong *)(param_2 + 0xc0);
    lVar4 = lVar3;
  }
  return param_1;
}



// FUNCTION 147df9530 FUN_147df9530 body=1396 status=ok
// SIG undefined FUN_147df9530(void)

undefined8 * FUN_147df9530(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x401;
  *param_1 = &PTR_FUN_14ab38d10;
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 0x18);
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_140484ca8(param_1 + 2,iVar1,0);
    FUN_1449bab58(param_1[2],uVar7,iVar1);
  }
  FUN_146e38072(param_1 + 4,param_2 + 0x20);
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 0x38);
  uVar7 = *(undefined8 *)(param_2 + 0x30);
  *(int *)(param_1 + 7) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_140c10f68(param_1 + 6,iVar1,0);
    FUN_140c10e76(param_1[6],uVar7,iVar1);
  }
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 0x40);
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  FUN_140484a40(param_1 + 10,param_2 + 0x50);
  param_1[0x14] = 0;
  iVar1 = *(int *)(param_2 + 0xa8);
  pvVar2 = *(void **)(param_2 + 0xa0);
  *(int *)(param_1 + 0x15) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 0x14,iVar1,0);
    memcpy((void *)param_1[0x14],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[0x16] = 0;
  iVar1 = *(int *)(param_2 + 0xb8);
  pvVar2 = *(void **)(param_2 + 0xb0);
  *(int *)(param_1 + 0x17) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 0x16,iVar1,0);
    memcpy((void *)param_1[0x16],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[0x18] = 0;
  param_1[0x19] = *(undefined8 *)(param_2 + 200);
  param_1[0x1a] = *(undefined8 *)(param_2 + 0xd0);
  *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 0xd8);
  *(undefined4 *)((longlong)param_1 + 0xdc) = *(undefined4 *)(param_2 + 0xdc);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0xe0);
  uVar7 = *(undefined8 *)(param_2 + 0xec);
  *(undefined8 *)((longlong)param_1 + 0xe4) = *(undefined8 *)(param_2 + 0xe4);
  *(undefined8 *)((longlong)param_1 + 0xec) = uVar7;
  uVar4 = *(undefined4 *)(param_2 + 0xf8);
  uVar5 = *(undefined4 *)(param_2 + 0xfc);
  uVar6 = *(undefined4 *)(param_2 + 0x100);
  *(undefined4 *)((longlong)param_1 + 0xf4) = *(undefined4 *)(param_2 + 0xf4);
  *(undefined4 *)(param_1 + 0x1f) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0xfc) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x104) = *(undefined4 *)(param_2 + 0x104);
  param_1[0x21] = 0;
  iVar1 = *(int *)(param_2 + 0x110);
  uVar7 = *(undefined8 *)(param_2 + 0x108);
  *(int *)(param_1 + 0x22) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  }
  else {
    FUN_140c10f68(param_1 + 0x21,iVar1,0);
    FUN_140c10e76(param_1[0x21],uVar7,iVar1);
  }
  param_1[0x23] = 0;
  iVar1 = *(int *)(param_2 + 0x120);
  pvVar2 = *(void **)(param_2 + 0x118);
  *(int *)(param_1 + 0x24) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  }
  else {
    FUN_146deeab8(param_1 + 0x23,iVar1,0);
    memcpy((void *)param_1[0x23],pvVar2,(longlong)iVar1 * 0x18);
  }
  *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(param_2 + 0x128);
  *(undefined4 *)((longlong)param_1 + 300) = *(undefined4 *)(param_2 + 300);
  param_1[0x26] = *(undefined8 *)(param_2 + 0x130);
  *(undefined4 *)(param_1 + 0x27) = *(undefined4 *)(param_2 + 0x138);
  *(undefined4 *)((longlong)param_1 + 0x13c) = *(undefined4 *)(param_2 + 0x13c);
  param_1[0x28] = *(undefined8 *)(param_2 + 0x140);
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x180);
  *(undefined1 *)((longlong)param_1 + 0x181) = *(undefined1 *)(param_2 + 0x181);
  *(undefined1 *)((longlong)param_1 + 0x182) = *(undefined1 *)(param_2 + 0x182);
  param_1[0x31] = 0;
  iVar1 = *(int *)(param_2 + 400);
  pvVar2 = *(void **)(param_2 + 0x188);
  *(int *)(param_1 + 0x32) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x194) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 0x31,iVar1,0);
    memcpy((void *)param_1[0x31],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[0x33] = 0;
  iVar1 = *(int *)(param_2 + 0x1a0);
  pvVar2 = *(void **)(param_2 + 0x198);
  *(int *)(param_1 + 0x34) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 0x33,iVar1,0);
    memcpy((void *)param_1[0x33],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[0x35] = 0;
  iVar1 = *(int *)(param_2 + 0x1b0);
  pvVar2 = *(void **)(param_2 + 0x1a8);
  *(int *)(param_1 + 0x36) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1b4) = 0;
  }
  else {
    FUN_146deeb7a(param_1 + 0x35,iVar1,0);
    memcpy((void *)param_1[0x35],pvVar2,(longlong)iVar1 << 3);
  }
  param_1[0x37] = 0;
  iVar1 = *(int *)(param_2 + 0x1c0);
  pvVar2 = *(void **)(param_2 + 0x1b8);
  *(int *)(param_1 + 0x38) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c4) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 0x37,iVar1,0);
    memcpy((void *)param_1[0x37],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  FUN_14098bf12(param_1 + 0x39,0x20);
  lVar3 = *(longlong *)(param_2 + 0xc0);
  if (lVar3 != 0) {
    uVar7 = FUN_14001cc68(0x1d8,0x10);
    FUN_147df9530(uVar7,lVar3);
    lVar3 = param_1[0x18];
    param_1[0x18] = uVar7;
    if (lVar3 != 0) {
      FUN_147df5014(lVar3);
      FUN_1400020a8(lVar3);
    }
  }
  return param_1;
}



// FUNCTION 147df9aa4 FUN_147df9aa4 body=358 status=ok
// SIG undefined FUN_147df9aa4(void)

undefined4 * FUN_147df9aa4(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147df9c0c(param_1,local_48);
  plVar1 = (longlong *)param_3[1];
  uVar9 = *(undefined8 *)*param_3;
  *local_40 = uVar9;
  lVar7 = *plVar1;
  local_40[1] = lVar7;
  if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e();
    uVar9 = *local_40;
  }
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar9 >> 0x10);
  uVar4 = (uint)uVar9 & 0xffff;
  uVar8 = ((uint)uVar9 << 0x10 | uVar4) + (int)((ulonglong)uVar9 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar4 >> 4);
  cVar3 = FUN_147df9cf2(param_1,uVar8,local_40,&local_4c);
  uVar2 = local_4c;
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
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0x14) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_147df9de4(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147df9c0c FUN_147df9c0c body=230 status=ok
// SIG undefined FUN_147df9c0c(void)

int * FUN_147df9c0c(longlong *param_1,int *param_2)

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
      FUN_14482b872(param_1,iVar6);
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



// FUNCTION 147df9cf2 FUN_147df9cf2 body=128 status=ok
// SIG undefined FUN_147df9cf2(void)

undefined8 FUN_147df9cf2(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_147df9d72((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 147df9d72 FUN_147df9d72 body=114 status=ok
// SIG undefined FUN_147df9d72(void)

void FUN_147df9d72(longlong *param_1,int param_2)

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



// FUNCTION 147df9de4 FUN_147df9de4 body=473 status=ok
// SIG undefined FUN_147df9de4(void)

void FUN_147df9de4(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
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
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar6 = (longlong)iVar5;
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x18);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 147df9fbe FUN_147df9fbe body=411 status=ok
// SIG undefined FUN_147df9fbe(void)

void FUN_147df9fbe(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar7 = param_2 - iVar1;
  if (uVar7 != 0 && iVar1 <= (int)param_2) {
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_144727cd0(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_14482b872(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(lVar2 + uVar9 * 0x18 + -0x14);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = iVar8 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar9 = uVar9 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar8 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -6;
      } while ((longlong)iVar11 < (longlong)uVar9);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar7;
      if (param_2 != 0) {
        plVar6 = param_1 + 2;
        uVar12 = uVar7 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar6,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar7 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar6;
        }
        if (uVar7 < 0x101) {
          uVar12 = uVar12 + (uVar12 == 0);
        }
        memset(_Dst,0,(ulonglong)(uVar12 << 2));
        iVar1 = (int)param_1[5];
        iVar10 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar10 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar6 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar7) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar7);
      FUN_1447c6044(param_1 + 2,uVar3,uVar7,0);
      return;
    }
  }
  return;
}



// FUNCTION 147dfa15a FUN_147dfa15a body=360 status=ok
// SIG undefined FUN_147dfa15a(void)

undefined4 * FUN_147dfa15a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147df9c0c(param_1,local_48);
  plVar1 = (longlong *)param_3[1];
  uVar9 = *(undefined8 *)*param_3;
  *local_40 = uVar9;
  lVar7 = *plVar1;
  local_40[1] = lVar7;
  if ((lVar7 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
    uVar9 = *local_40;
  }
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar9 >> 0x10);
  uVar4 = (uint)uVar9 & 0xffff;
  uVar8 = ((uint)uVar9 << 0x10 | uVar4) + (int)((ulonglong)uVar9 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar4 >> 4);
  cVar3 = FUN_147df9cf2(param_1,uVar8,local_40,&local_4c);
  uVar2 = local_4c;
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
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0x14) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_147df9de4(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dfa2c4 FUN_147dfa2c4 body=34 status=ok
// SIG undefined FUN_147dfa2c4(void)

void FUN_147dfa2c4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14ab36e90;
  return;
}



// FUNCTION 147dfa2e6 FUN_147dfa2e6 body=31 status=ok
// SIG undefined FUN_147dfa2e6(void)

undefined8 FUN_147dfa2e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147dfa322 FUN_147dfa322 body=93 status=ok
// SIG undefined FUN_147dfa322(void)

void FUN_147dfa322(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab38dc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147dfa380 FUN_147dfa380 body=123 status=ok
// SIG undefined FUN_147dfa380(void)

void FUN_147dfa380(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ab38dc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147dfa408 FUN_147dfa408 body=21 status=ok
// SIG undefined FUN_147dfa408(void)

undefined8 FUN_147dfa408(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147dfa41e FUN_147dfa41e body=181 status=ok
// SIG undefined FUN_147dfa41e(void)

longlong FUN_147dfa41e(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  int *local_28;
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
        lVar3 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar3 != 0) goto LAB_147dfa4b6;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_147dfa4d4(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_147dfa4b6:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 147dfa4d4 FUN_147dfa4d4 body=268 status=ok
// SIG undefined FUN_147dfa4d4(void)

undefined4 * FUN_147dfa4d4(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140ddf814(param_1,local_48);
  *local_40 = *(undefined4 *)*param_4;
  *(undefined8 *)(local_40 + 2) = 0;
  *(undefined8 *)(local_40 + 4) = 0;
  local_40[6] = 0xffffffff;
  cVar1 = FUN_140ddf770(param_1,param_3,local_40,local_48);
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
      local_40[7] = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      local_40[6] = *(undefined4 *)
                     (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4
                     );
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
      FUN_140ddfbf6(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dfa5e2 FUN_147dfa5e2 body=114 status=ok
// SIG undefined FUN_147dfa5e2(void)

void FUN_147dfa5e2(longlong *param_1,int param_2)

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



// FUNCTION 147dfa65c FUN_147dfa65c body=147 status=ok
// SIG undefined FUN_147dfa65c(void)

void FUN_147dfa65c(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc)) {
      uVar5 = uVar4 / 0xc & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147dfa6f0 FUN_147dfa6f0 body=132 status=ok
// SIG undefined FUN_147dfa6f0(void)

void FUN_147dfa6f0(longlong param_1,int param_2)

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



// FUNCTION 147dfa776 FUN_147dfa776 body=150 status=ok
// SIG undefined FUN_147dfa776(void)

void FUN_147dfa776(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x60 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x60) = param_2;
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
      puVar7 = puVar7 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147dfa80c FUN_147dfa80c body=74 status=ok
// SIG undefined FUN_147dfa80c(void)

void FUN_147dfa80c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147dfa856(param_1,*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c));
  if (iVar1 == *(int *)(param_1 + 0x8c)) {
    return;
  }
  *(int *)(param_1 + 0x8c) = iVar1;
  FUN_1400cc6c4(param_1,*(undefined4 *)(param_1 + 0x88),iVar1,4);
  return;
}



// FUNCTION 147dfa856 FUN_147dfa856 body=105 status=ok
// SIG undefined FUN_147dfa856(void)

ulonglong FUN_147dfa856(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 0x20;
  if (0x20 < param_2) {
    iVar2 = param_3 - param_2;
    if (((longlong)iVar2 & 0x3ffffffffffff000U) == 0) {
      if (iVar2 < 0x41 || (int)(param_3 * 2) <= (int)(param_2 * 3)) {
        return (ulonglong)param_3;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_3;
    }
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 2,0);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 147dfa8c0 FUN_147dfa8c0 body=95 status=ok
// SIG undefined FUN_147dfa8c0(void)

void FUN_147dfa8c0(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 147dfa920 FUN_147dfa920 body=132 status=ok
// SIG undefined FUN_147dfa920(void)

void FUN_147dfa920(longlong param_1,int param_2)

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



// FUNCTION 147dfa9a6 FUN_147dfa9a6 body=402 status=ok
// SIG undefined FUN_147dfa9a6(void)

void FUN_147dfa9a6(longlong *param_1,double *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  
  lVar12 = (longlong)(int)param_1[1];
  lVar7 = *(longlong *)*param_1;
  lVar11 = ((longlong *)*param_1)[6];
  lVar13 = (longlong)*(int *)(lVar11 + lVar12 * 0xc);
  lVar14 = (longlong)*(int *)(lVar11 + 4 + lVar12 * 0xc);
  fVar1 = *(float *)(lVar7 + 8 + lVar13 * 0xc);
  fVar2 = *(float *)(lVar7 + 4 + lVar13 * 0xc);
  fVar3 = *(float *)(lVar7 + 8 + lVar14 * 0xc);
  fVar4 = *(float *)(lVar7 + 4 + lVar14 * 0xc);
  dVar16 = (double)fVar1;
  if (fVar3 <= fVar1) {
    dVar16 = (double)fVar3;
  }
  fVar5 = *(float *)(lVar7 + lVar13 * 0xc);
  fVar6 = *(float *)(lVar7 + lVar14 * 0xc);
  dVar19 = (double)fVar2;
  if (fVar4 <= fVar2) {
    dVar19 = (double)fVar4;
  }
  dVar10 = (double)fVar5;
  if (fVar6 <= fVar5) {
    dVar10 = (double)fVar6;
  }
  dVar15 = (double)fVar1;
  if (fVar1 <= fVar3) {
    dVar15 = (double)fVar3;
  }
  lVar11 = (longlong)*(int *)(lVar11 + 8 + lVar12 * 0xc);
  dVar17 = (double)fVar2;
  if (fVar2 <= fVar4) {
    dVar17 = (double)fVar4;
  }
  dVar18 = (double)fVar5;
  if (fVar5 <= fVar6) {
    dVar18 = (double)fVar6;
  }
  dVar20 = (double)*(float *)(lVar7 + 8 + lVar11 * 0xc);
  dVar8 = (double)*(float *)(lVar7 + 4 + lVar11 * 0xc);
  dVar9 = (double)*(float *)(lVar7 + lVar11 * 0xc);
  if (dVar20 <= dVar16) {
    dVar16 = dVar20;
  }
  if (dVar8 <= dVar19) {
    dVar19 = dVar8;
  }
  if (dVar9 <= dVar10) {
    dVar10 = dVar9;
  }
  *param_2 = dVar10;
  param_2[1] = dVar19;
  param_2[2] = dVar16;
  if (dVar15 <= dVar20) {
    dVar15 = dVar20;
  }
  if (dVar17 <= dVar8) {
    dVar17 = dVar8;
  }
  if (dVar18 <= dVar9) {
    dVar18 = dVar9;
  }
  param_2[3] = dVar18;
  param_2[4] = dVar17;
  param_2[5] = dVar15;
  return;
}



// FUNCTION 147dfab38 FUN_147dfab38 body=178 status=ok
// SIG undefined FUN_147dfab38(void)

void FUN_147dfab38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 *local_c8;
  undefined8 *local_c0;
  undefined2 *local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined2 local_38;
  undefined1 local_36;
  undefined1 local_30 [24];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_c8 = local_30;
  local_c0 = &local_60;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_b8 = &local_38;
  local_38 = 0;
  local_36 = 0;
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_d8 = param_2;
  local_d0 = param_3;
  local_68 = local_c8;
  FUN_147dfabec(0,&local_a8,&local_68);
  if ((local_18 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dfabec FUN_147dfabec body=848 status=ok
// SIG undefined FUN_147dfabec(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_147dfabec(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       longlong param_5,longlong *param_6,undefined8 param_7,undefined8 param_8,
                       undefined8 param_9)

{
  undefined8 *puVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  double *pdVar11;
  ulonglong unaff_RSI;
  ulonglong uVar12;
  uint *puVar13;
  longlong lVar14;
  uint *puVar15;
  undefined1 auStack_10d8 [32];
  longlong local_10b8;
  longlong *local_10b0;
  undefined8 local_10a8;
  undefined8 local_10a0;
  undefined8 local_1098;
  longlong local_1090;
  undefined8 local_1088;
  undefined8 local_1080;
  double local_1078 [6];
  double local_1048 [510];
  double *local_58;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_10d8;
  local_1090 = param_1;
  local_1088 = param_3;
  local_1080 = param_4;
  if ((longlong)*(int *)(param_1 + 0x110) != 0) {
    puVar13 = *(uint **)(param_1 + 0x108);
    puVar15 = puVar13 + (longlong)*(int *)(param_1 + 0x110) * 0xe;
    do {
      local_1048[2] = (double)*(undefined8 *)(puVar13 + 6);
      local_1048[0] = *(double *)(puVar13 + 2);
      local_1048[1] = (double)*(undefined8 *)(puVar13 + 4);
      local_1048[5] = (double)*(undefined8 *)(puVar13 + 0xc);
      local_1048[3] = (double)*(undefined8 *)(puVar13 + 8);
      local_1048[4] = (double)*(undefined8 *)(puVar13 + 10);
      lVar8 = 0;
      do {
        dVar2 = *(double *)(param_5 + lVar8 * 8);
        if ((local_1048[lVar8 + 3] <= dVar2 && dVar2 != local_1048[lVar8 + 3]) ||
           (pdVar11 = (double *)(param_5 + 0x18 + lVar8 * 8),
           *pdVar11 <= local_1048[lVar8] && local_1048[lVar8] != *pdVar11)) goto LAB_147dface2;
        lVar8 = lVar8 + 1;
      } while (lVar8 != 3);
      uVar3 = *puVar13;
      unaff_RSI = (ulonglong)uVar3;
      plVar5 = (longlong *)*param_6;
      iVar7 = (int)plVar5[1];
      *(uint *)(plVar5 + 1) = iVar7 + 1U;
      if (*(uint *)((longlong)plVar5 + 0xc) < iVar7 + 1U) {
        FUN_1446f48e2(plVar5,iVar7);
        param_1 = local_1090;
      }
      *(uint *)(*plVar5 + (longlong)iVar7 * 4) = uVar3;
LAB_147dface2:
      puVar13 = puVar13 + 0xe;
    } while (puVar13 != puVar15);
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    local_1098 = param_9;
    local_10a0 = param_8;
    local_10a8 = param_7;
    local_10b0 = param_6;
    local_10b8 = param_5;
    cVar6 = FUN_147dfabec(*(longlong *)(param_1 + 0xc0),param_2,local_1088,local_1080);
    param_1 = local_1090;
    if (cVar6 == '\0') {
      uVar12 = 0;
      goto LAB_147dfaea7;
    }
  }
  local_58 = (double *)0x0;
  local_4c = 0xff;
  if (*(char *)(param_1 + 0x40) == '\x01') {
    iVar7 = *(int *)(param_1 + 0x44);
    if (iVar7 != -1) {
LAB_147dfad37:
      local_1048[0] = (double)CONCAT44(local_1048[0]._4_4_,iVar7);
      local_1048[1] = 0.0;
      local_50 = 1;
      do {
        pdVar11 = local_58;
        if (local_58 == (double *)0x0) {
          pdVar11 = local_1048;
        }
        lVar9 = (longlong)(int)local_50;
        local_50 = local_50 - 1;
        lVar8 = *(longlong *)(param_1 + 0x10) + (longlong)*(int *)(pdVar11 + lVar9 * 2 + -2) * 0x70;
        if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x6c +
                      (longlong)*(int *)(pdVar11 + lVar9 * 2 + -2) * 0x70) & 1) == 0) {
          lVar9 = 0;
          lVar14 = 0;
          do {
            uVar3 = local_50;
            local_1078[2] = (double)*(undefined8 *)(lVar8 + 0x10 + lVar14);
            local_1078[0] = *(double *)(lVar8 + lVar14);
            local_1078[1] = ((double *)(lVar8 + lVar14))[1];
            local_1078[5] = (double)*(undefined8 *)(lVar8 + 0x28 + lVar14);
            puVar1 = (undefined8 *)(lVar8 + 0x18 + lVar14);
            local_1078[3] = (double)*puVar1;
            local_1078[4] = (double)puVar1[1];
            lVar10 = 0;
            do {
              dVar2 = *(double *)(param_5 + lVar10 * 8);
              if ((local_1078[lVar10 + 3] <= dVar2 && dVar2 != local_1078[lVar10 + 3]) ||
                 (pdVar11 = (double *)(param_5 + 0x18 + lVar10 * 8),
                 *pdVar11 <= local_1078[lVar10] && local_1078[lVar10] != *pdVar11))
              goto LAB_147dfae31;
              lVar10 = lVar10 + 1;
            } while (lVar10 != 3);
            uVar4 = *(uint *)(lVar8 + 0x60 + lVar9 * 4);
            unaff_RSI = (ulonglong)uVar4;
            lVar10 = (longlong)(int)local_50;
            local_50 = local_50 + 1;
            if (local_4c < local_50) {
              FUN_147dfb236(local_1048,uVar3);
              param_1 = local_1090;
            }
            pdVar11 = local_58;
            if (local_58 == (double *)0x0) {
              pdVar11 = local_1048;
            }
            *(uint *)(pdVar11 + lVar10 * 2) = uVar4;
            pdVar11[lVar10 * 2 + 1] = 0.0;
LAB_147dfae31:
            lVar9 = lVar9 + 1;
            lVar14 = lVar14 + 0x30;
          } while (lVar14 != 0x60);
        }
        else {
          cVar6 = FUN_147dfaf3e((longlong)*(int *)(lVar8 + 0x60) * 0x18 +
                                *(longlong *)(param_1 + 0x20),param_5,param_6);
          param_1 = local_1090;
          if (cVar6 == '\0') {
            uVar12 = 0;
            goto LAB_147dfae95;
          }
        }
      } while (local_50 != 0);
      uVar12 = CONCAT71((int7)(unaff_RSI >> 8),1);
LAB_147dfae95:
      if (local_58 != (double *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_147dfaea7;
    }
  }
  else {
    iVar7 = 0;
    if (*(int *)(param_1 + 0x18) != 0) goto LAB_147dfad37;
  }
  uVar12 = CONCAT71((int7)(unaff_RSI >> 8),1);
LAB_147dfaea7:
  if ((local_48 ^ (ulonglong)auStack_10d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffff;
}



// FUNCTION 147dfaf3e FUN_147dfaf3e body=759 status=ok
// SIG undefined FUN_147dfaf3e(void)

undefined8 FUN_147dfaf3e(longlong *param_1,double *param_2,longlong *param_3)

{
  double *pdVar1;
  double dVar2;
  double dVar4;
  double dVar5;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  int iVar17;
  uint uVar18;
  undefined4 *puVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  ulonglong uVar28;
  longlong lVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar3;
  double dVar6;
  
  iVar7 = (int)param_1[1];
  iVar20 = iVar7 + 3;
  if (-1 < iVar7) {
    iVar20 = iVar7;
  }
  if (3 < iVar7) {
    lVar24 = 0;
    uVar28 = 0;
    do {
      lVar23 = *param_1;
      lVar27 = (uVar28 * 4 + 3) * 0x38;
      lVar22 = (uVar28 * 4 + 2) * 0x38;
      lVar26 = (uVar28 * 4 + 1) * 0x38;
      lVar25 = uVar28 * 0xe0;
      dVar2 = param_2[3];
      dVar3 = param_2[3];
      lVar29 = -(ulonglong)(dVar3 < *(double *)(lVar23 + 8 + lVar26));
      auVar34._8_8_ = -(ulonglong)(dVar3 < *(double *)(lVar23 + 8 + lVar27));
      auVar34._0_8_ = -(ulonglong)(dVar2 < *(double *)(lVar23 + 8 + lVar22));
      dVar3 = param_2[1];
      dVar4 = param_2[1];
      auVar31._8_8_ = -(ulonglong)(*(double *)(lVar23 + 0x28 + lVar26) < dVar4);
      auVar31._0_8_ = -(ulonglong)(*(double *)(lVar23 + 0x28 + lVar25) < dVar3);
      auVar14._8_8_ = -(ulonglong)(*(double *)(lVar23 + 0x20 + lVar26) < *param_2);
      auVar14._0_8_ = -(ulonglong)(*(double *)(lVar23 + 0x20 + lVar25) < *param_2);
      auVar36._8_8_ = -(ulonglong)(*(double *)(lVar23 + 0x28 + lVar27) < dVar4);
      auVar36._0_8_ = -(ulonglong)(*(double *)(lVar23 + 0x28 + lVar22) < dVar3);
      dVar3 = param_2[4];
      dVar4 = param_2[4];
      auVar12._8_8_ = -(ulonglong)(*(double *)(lVar23 + 0x20 + lVar27) < *param_2);
      auVar12._0_8_ = -(ulonglong)(*(double *)(lVar23 + 0x20 + lVar22) < *param_2);
      dVar5 = param_2[2];
      dVar6 = param_2[2];
      auVar30._8_8_ = -(ulonglong)(*(double *)(lVar23 + 0x30 + lVar26) < dVar6);
      auVar30._0_8_ = -(ulonglong)(*(double *)(lVar23 + 0x30 + lVar25) < dVar5);
      auVar16._8_4_ = (int)lVar29;
      auVar16._0_8_ = -(ulonglong)(dVar2 < *(double *)(lVar23 + 8 + lVar25));
      auVar16._12_4_ = (int)((ulonglong)lVar29 >> 0x20);
      auVar32._8_8_ = -(ulonglong)(*(double *)(lVar23 + 0x30 + lVar27) < dVar6);
      auVar32._0_8_ = -(ulonglong)(*(double *)(lVar23 + 0x30 + lVar22) < dVar5);
      dVar2 = param_2[5];
      dVar5 = param_2[5];
      auVar35._8_8_ = -(ulonglong)(dVar5 < *(double *)(lVar23 + 0x18 + lVar26));
      auVar35._0_8_ = -(ulonglong)(dVar2 < *(double *)(lVar23 + 0x18 + lVar25));
      auVar13._8_8_ = -(ulonglong)(dVar4 < *(double *)(lVar23 + 0x10 + lVar26));
      auVar13._0_8_ = -(ulonglong)(dVar3 < *(double *)(lVar23 + 0x10 + lVar25));
      auVar33._8_8_ = -(ulonglong)(dVar5 < *(double *)(lVar23 + 0x18 + lVar27));
      auVar33._0_8_ = -(ulonglong)(dVar2 < *(double *)(lVar23 + 0x18 + lVar22));
      auVar15._8_8_ = -(ulonglong)(dVar4 < *(double *)(lVar23 + 0x10 + lVar27));
      auVar15._0_8_ = -(ulonglong)(dVar3 < *(double *)(lVar23 + 0x10 + lVar22));
      iVar17 = movmskpd((int)lVar23,auVar35 | auVar13 | auVar30 | auVar16 | auVar31 | auVar14);
      iVar21 = movmskpd((int)lVar22,auVar33 | auVar15 | auVar32 | auVar34 | auVar36 | auVar12);
      lVar22 = 0;
      lVar23 = lVar24;
      do {
        if (((uint)(iVar17 + iVar21 * 4) >> ((uint)lVar22 & 0x1f) & 1) == 0) {
          uVar9 = *(undefined4 *)(*param_1 + lVar23);
          plVar10 = (longlong *)*param_3;
          iVar8 = (int)plVar10[1];
          *(uint *)(plVar10 + 1) = iVar8 + 1U;
          if (*(uint *)((longlong)plVar10 + 0xc) < iVar8 + 1U) {
            FUN_1446f48e2(plVar10,iVar8);
          }
          *(undefined4 *)(*plVar10 + (longlong)iVar8 * 4) = uVar9;
        }
        lVar22 = lVar22 + 1;
        lVar23 = lVar23 + 0x38;
      } while (lVar22 != 4);
      uVar28 = uVar28 + 1;
      lVar24 = lVar24 + 0xe0;
    } while (uVar28 != (uint)(iVar20 >> 2));
  }
  uVar18 = (iVar20 >> 2) << 2;
  puVar19 = (undefined4 *)(ulonglong)uVar18;
  if ((int)uVar18 < iVar7) {
    lVar24 = (longlong)(int)uVar18;
    lVar23 = lVar24 * 0x38 + 0x20;
    do {
      puVar19 = (undefined4 *)(lVar24 * 0x38 + *param_1);
      lVar25 = *param_1 + lVar23;
      lVar22 = -3;
      do {
        dVar2 = *(double *)(lVar25 + lVar22 * 8);
        if ((param_2[lVar22 + 6] <= dVar2 && dVar2 != param_2[lVar22 + 6]) ||
           (pdVar1 = (double *)(lVar25 + 0x18 + lVar22 * 8),
           *pdVar1 <= param_2[lVar22 + 3] && param_2[lVar22 + 3] != *pdVar1)) goto LAB_147dfb203;
        lVar22 = lVar22 + 1;
      } while (lVar22 != 0);
      uVar9 = *puVar19;
      puVar11 = (undefined8 *)*param_3;
      iVar20 = *(int *)(puVar11 + 1);
      *(uint *)(puVar11 + 1) = iVar20 + 1U;
      if (*(uint *)((longlong)puVar11 + 0xc) < iVar20 + 1U) {
        FUN_1446f48e2(puVar11,iVar20);
      }
      puVar19 = (undefined4 *)*puVar11;
      puVar19[iVar20] = uVar9;
LAB_147dfb203:
      lVar24 = lVar24 + 1;
      lVar23 = lVar23 + 0x38;
    } while (iVar7 != (int)lVar24);
  }
  return CONCAT71((int7)((ulonglong)puVar19 >> 8),1);
}



// FUNCTION 147dfb236 FUN_147dfb236 body=131 status=ok
// SIG undefined FUN_147dfb236(void)

void FUN_147dfb236(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0xff8);
  if (param_2 <= (int)uVar1) {
    uVar4 = 0xff;
    if (0xff < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0xff < *(uint *)(param_1 + 0xffc)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 4,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 4)) {
        uVar4 = uVar2 >> 4 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0xffc) = (int)uVar4;
    FUN_147dfb2ba(param_1,param_2,uVar4,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147dfb2ba FUN_147dfb2ba body=145 status=ok
// SIG undefined FUN_147dfb2ba(void)

void FUN_147dfb2ba(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xff0);
  if ((uint)param_3 < 0x100) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xff0,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0xff0),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xff0,param_2,param_3,param_4);
  return;
}



// FUNCTION 147dfb358 FUN_147dfb358 body=99 status=ok
// SIG undefined FUN_147dfb358(void)

void FUN_147dfb358(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  plVar1 = (longlong *)FUN_144aff0e0();
  switchD_143c3d4dc::caseD_21(param_1,plVar1);
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_14ab39e68);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dfb3bc FUN_147dfb3bc body=41 status=ok
// SIG undefined FUN_147dfb3bc(void)

void FUN_147dfb3bc(undefined8 param_1,longlong *param_2)

{
  switchD_143c3d4dc::caseD_21();
                    /* WARNING: Could not recover jumptable at 0x000147dfb3e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14ab39e68);
  return;
}



// FUNCTION 147dfb3e6 FUN_147dfb3e6 body=136 status=ok
// SIG undefined FUN_147dfb3e6(void)

void FUN_147dfb3e6(longlong param_1)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446e0b6e();
  local_28 = 0x9950b70e;
  uStack_24 = 0xb41a4e17;
  uStack_20 = 0xbbccfa0d;
  uStack_1c = 0x57817fd6;
  iVar1 = FUN_1448a256a(param_1);
  if (iVar1 < 1) {
    *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_1 + 0x158);
    *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_1 + 0x15c);
    *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_1 + 0x164);
    *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_1 + 0x16c);
    *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_1 + 0x174);
    *(undefined8 *)(param_1 + 0x4c) = *(undefined8 *)(param_1 + 0x17c);
    *(undefined8 *)(param_1 + 0x54) = *(undefined8 *)(param_1 + 0x184);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x18c);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 400);
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x194);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x198);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dfb8fe FUN_147dfb8fe body=137 status=ok
// SIG undefined FUN_147dfb8fe(void)

void FUN_147dfb8fe(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_14);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_14);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dfb9c0 FUN_147dfb9c0 body=40 status=ok
// SIG undefined FUN_147dfb9c0(void)

float FUN_147dfb9c0(longlong *param_1)

{
  char cVar1;
  float fVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x2a0))();
  fVar2 = 0.0;
  if (cVar1 != '\0') {
    fVar2 = *(float *)((longlong)param_1 + 0x6c) * *(float *)((longlong)param_1 + 0x74);
  }
  return fVar2;
}



// FUNCTION 147dfba66 FUN_147dfba66 body=59 status=ok
// SIG undefined FUN_147dfba66(void)

undefined8 FUN_147dfba66(longlong *param_1)

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



// FUNCTION 147dfbb08 FUN_147dfbb08 body=36 status=ok
// SIG undefined FUN_147dfbb08(void)

undefined8 FUN_147dfbb08(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 147dfbb48 FUN_147dfbb48 body=93 status=ok
// SIG undefined FUN_147dfbb48(void)

void FUN_147dfbb48(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab3aef0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147dfbba6 FUN_147dfbba6 body=123 status=ok
// SIG undefined FUN_147dfbba6(void)

void FUN_147dfbba6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ab3aef0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147dfbc22 FUN_147dfbc22 body=21 status=ok
// SIG undefined FUN_147dfbc22(void)

undefined8 FUN_147dfbc22(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147dfbc78 FUN_147dfbc78 body=54 status=ok
// SIG undefined FUN_147dfbc78(void)

undefined1 FUN_147dfbc78(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 147dfbcd6 FUN_147dfbcd6 body=59 status=ok
// SIG undefined FUN_147dfbcd6(void)

undefined8 FUN_147dfbcd6(longlong *param_1)

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



// FUNCTION 147dfbd1c FUN_147dfbd1c body=37 status=ok
// SIG undefined FUN_147dfbd1c(void)

void FUN_147dfbd1c(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 147dfbd92 FUN_147dfbd92 body=75 status=ok
// SIG undefined FUN_147dfbd92(void)

void FUN_147dfbd92(undefined8 param_1,undefined1 *param_2)

{
  memset(param_2,0,0x90);
  *param_2 = 1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  param_2[0x88] = 1;
  return;
}



// FUNCTION 147dfbe2a FUN_147dfbe2a body=63 status=ok
// SIG undefined FUN_147dfbe2a(void)

undefined1 FUN_147dfbe2a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147dfbfbc(param_2,param_3);
    param_3 = param_3 + 0x90;
    param_2 = param_2 + 0x90;
  }
  return 1;
}



// FUNCTION 147dfbe92 FUN_147dfbe92 body=59 status=ok
// SIG undefined FUN_147dfbe92(void)

undefined8 FUN_147dfbe92(longlong *param_1)

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



// FUNCTION 147dfbede FUN_147dfbede body=40 status=ok
// SIG undefined FUN_147dfbede(void)

void FUN_147dfbede(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x90) == '\x01') {
    FUN_147dfbf54(param_2);
    *(undefined1 *)(param_2 + 0x90) = 0;
  }
  return;
}



// FUNCTION 147dfbf54 FUN_147dfbf54 body=104 status=ok
// SIG undefined FUN_147dfbf54(void)

void FUN_147dfbf54(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147dfbfbc FUN_147dfbfbc body=132 status=ok
// SIG undefined FUN_147dfbfbc(void)

undefined1 * FUN_147dfbfbc(undefined1 *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = *param_2;
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  FUN_144a787a6(param_1 + 0x18,param_2 + 0x18);
  uVar1 = *(undefined4 *)(param_2 + 0x2c);
  uVar2 = *(undefined4 *)(param_2 + 0x30);
  uVar3 = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  *(undefined4 *)(param_1 + 0x34) = uVar3;
  FUN_144a787a6(param_1 + 0x38,param_2 + 0x38);
  FUN_144a787a6(param_1 + 0x48,param_2 + 0x48);
  uVar1 = *(undefined4 *)(param_2 + 0x5c);
  uVar2 = *(undefined4 *)(param_2 + 0x60);
  uVar3 = *(undefined4 *)(param_2 + 100);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  *(undefined4 *)(param_1 + 0x60) = uVar2;
  *(undefined4 *)(param_1 + 100) = uVar3;
  FUN_144a787a6(param_1 + 0x68,param_2 + 0x68);
  FUN_144a787a6(param_1 + 0x78,param_2 + 0x78);
  param_1[0x88] = param_2[0x88];
  return param_1;
}



// FUNCTION 147dfc08e FUN_147dfc08e body=106 status=ok
// SIG undefined FUN_147dfc08e(void)

undefined8 FUN_147dfc08e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  
  if (param_4 != 0) {
    lVar10 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar10);
      lVar2 = param_2 + 8 + lVar10;
      *(undefined8 *)(lVar2 + -8) = *puVar1;
      FUN_144a787a6(lVar2,puVar1 + 1);
      uVar3 = *(undefined4 *)((longlong)puVar1 + 0x1c);
      uVar4 = *(undefined4 *)(puVar1 + 4);
      uVar5 = *(undefined4 *)((longlong)puVar1 + 0x24);
      uVar6 = *(undefined4 *)((longlong)puVar1 + 0x21);
      uVar7 = *(undefined4 *)((longlong)puVar1 + 0x25);
      uVar8 = *(undefined4 *)((longlong)puVar1 + 0x29);
      uVar9 = *(undefined4 *)((longlong)puVar1 + 0x2d);
      *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(puVar1 + 3);
      *(undefined4 *)(lVar2 + 0x14) = uVar3;
      *(undefined4 *)(lVar2 + 0x18) = uVar4;
      *(undefined4 *)(lVar2 + 0x1c) = uVar5;
      *(undefined4 *)(lVar2 + 0x19) = uVar6;
      *(undefined4 *)(lVar2 + 0x1d) = uVar7;
      *(undefined4 *)(lVar2 + 0x21) = uVar8;
      *(undefined4 *)(lVar2 + 0x25) = uVar9;
      lVar10 = lVar10 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147dfc120 FUN_147dfc120 body=59 status=ok
// SIG undefined FUN_147dfc120(void)

undefined8 FUN_147dfc120(longlong *param_1)

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



// FUNCTION 147dfc166 FUN_147dfc166 body=38 status=ok
// SIG undefined FUN_147dfc166(void)

void FUN_147dfc166(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 147dfc224 FUN_147dfc224 body=59 status=ok
// SIG undefined FUN_147dfc224(void)

undefined8 FUN_147dfc224(longlong *param_1)

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



// FUNCTION 147dfc30e FUN_147dfc30e body=59 status=ok
// SIG undefined FUN_147dfc30e(void)

undefined8 FUN_147dfc30e(longlong *param_1)

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



// FUNCTION 147dfc3b0 FUN_147dfc3b0 body=29 status=ok
// SIG undefined FUN_147dfc3b0(void)

void FUN_147dfc3b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = &PTR_FUN_14ab3bf00;
  return;
}



// FUNCTION 147dfc3ce FUN_147dfc3ce body=36 status=ok
// SIG undefined FUN_147dfc3ce(void)

undefined8 FUN_147dfc3ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 147dfc40e FUN_147dfc40e body=93 status=ok
// SIG undefined FUN_147dfc40e(void)

void FUN_147dfc40e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab3be90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147dfc46c FUN_147dfc46c body=123 status=ok
// SIG undefined FUN_147dfc46c(void)

void FUN_147dfc46c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ab3be90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147dfc4f4 FUN_147dfc4f4 body=21 status=ok
// SIG undefined FUN_147dfc4f4(void)

undefined8 FUN_147dfc4f4(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147dfc50a FUN_147dfc50a body=34 status=ok
// SIG undefined FUN_147dfc50a(void)

undefined8 FUN_147dfc50a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 147dfc534 FUN_147dfc534 body=155 status=ok
// SIG undefined FUN_147dfc534(void)

void FUN_147dfc534(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14ab3bf50;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = *param_3;
  lVar1 = param_3[1];
  param_1[0xf] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  uVar2 = param_2[1];
  param_1[0x10] = *param_2;
  param_1[0x11] = uVar2;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 2;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1c] = 2;
  return;
}



// FUNCTION 147dfc5d0 FUN_147dfc5d0 body=443 status=ok
// SIG undefined FUN_147dfc5d0(void)

void FUN_147dfc5d0(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  int *piVar4;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  longlong *local_58;
  longlong *local_50;
  undefined2 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((((*(int *)(param_2 + 0x38) == *(int *)(param_1 + 0x80)) &&
       (*(int *)(param_2 + 0x3c) == *(int *)(param_1 + 0x84))) &&
      (*(int *)(param_2 + 0x40) == *(int *)(param_1 + 0x88))) &&
     (*(int *)(param_2 + 0x44) == *(int *)(param_1 + 0x8c))) {
    plVar1 = (longlong *)(param_1 + 0x18);
    local_38 = param_1 + 0x28;
    local_40 = 0x100000000;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (*(int *)(param_1 + 0x40) != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = local_30;
    uVar2 = local_68;
    local_60 = local_28;
    local_5c = local_24;
    local_78 = local_40;
    local_70 = local_38;
    local_48 = 0;
    local_68._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    local_80 = plVar1;
    local_58 = plVar1;
    local_50 = plVar1;
    if (local_68._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar3 = local_68._4_4_;
      local_68 = uVar2;
      do {
        piVar4 = (int *)(**(code **)(**(longlong **)(*local_80 + 0x10 + (longlong)iVar3 * 0x28) +
                                    0x28))();
        if (((*piVar4 == *(int *)(param_2 + 0x18)) && (piVar4[1] == *(int *)(param_2 + 0x1c))) &&
           ((piVar4[2] == *(int *)(param_2 + 0x20) && (piVar4[3] == *(int *)(param_2 + 0x24))))) {
          FUN_147dfc78c(*(undefined8 *)(*local_80 + 0x10 + (longlong)local_68._4_4_ * 0x28),param_2,
                        param_3);
          uVar2 = local_68;
          break;
        }
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar3 = local_68._4_4_;
        uVar2 = local_68;
      } while (local_68._4_4_ < *(int *)(local_70 + 0x18));
    }
    local_68 = uVar2;
    if (((char)local_48 == '\x01') && (local_48._1_1_ == '\x01')) {
      FUN_147e04370(local_50,(int)local_50[1] - *(int *)((longlong)local_50 + 0x34));
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dfc78c FUN_147dfc78c body=145 status=ok
// SIG undefined FUN_147dfc78c(void)

void FUN_147dfc78c(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if ((((*(int *)(param_2 + 0x18) == *(int *)(param_1 + 0x78)) &&
       (*(int *)(param_2 + 0x1c) == *(int *)(param_1 + 0x7c))) &&
      (*(int *)(param_2 + 0x20) == *(int *)(param_1 + 0x80))) &&
     (*(int *)(param_2 + 0x24) == *(int *)(param_1 + 0x84))) {
    FUN_144a787a6(param_1 + 0x40,param_2);
    puVar2 = (undefined8 *)(**(code **)(*(longlong *)*param_3 + 0x48))();
    uVar1 = puVar2[1];
    *(undefined8 *)(param_1 + 0x60) = *puVar2;
    *(undefined8 *)(param_1 + 0x68) = uVar1;
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x10);
    *(undefined1 *)(param_1 + 0x74) = *(undefined1 *)(param_2 + 0x14);
    *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0x48);
    FUN_144a787a6(param_1 + 0x98,param_2 + 0x28);
    return;
  }
  return;
}



// FUNCTION 147dfc81e FUN_147dfc81e body=1337 status=ok
// SIG undefined FUN_147dfc81e(void)

void FUN_147dfc81e(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  bool bVar18;
  undefined1 auStack_98 [36];
  undefined4 local_74;
  undefined8 *local_70;
  code *local_68;
  longlong *plStack_60;
  ulonglong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((((*(int *)(param_2 + 0x58) != *(int *)(param_1 + 0x80)) ||
       (*(int *)(param_2 + 0x5c) != *(int *)(param_1 + 0x84))) ||
      (*(int *)(param_2 + 0x60) != *(int *)(param_1 + 0x88))) ||
     (*(int *)(param_2 + 100) != *(int *)(param_1 + 0x8c))) goto LAB_147dfc871;
  *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(param_2 + 0x88);
  FUN_144a787a6(param_1 + 0xa0,param_2 + 0x78);
  FUN_144a787a6(param_1 + 0x90,param_2 + 0x68);
  uVar11 = (**(code **)(*(longlong *)*param_3 + 0x48))();
  uVar8 = FUN_1448eb174(uVar11,0x10,0);
  puVar12 = (ulonglong *)FUN_147e04574(param_1 + 0x18,uVar8,uVar11);
  if (*puVar12 == 0) {
    plVar5 = *(longlong **)(param_1 + 0x78);
    if (plVar5 != (longlong *)0x0) {
      iVar9 = (int)plVar5[1];
      do {
        if (iVar9 == 0) goto LAB_147dfc941;
        LOCK();
        iVar7 = (int)plVar5[1];
        bVar18 = iVar9 == iVar7;
        if (bVar18) {
          *(int *)(plVar5 + 1) = iVar9 + 1;
          iVar7 = iVar9;
        }
        iVar9 = iVar7;
        UNLOCK();
      } while (!bVar18);
      uVar6 = *(ulonglong *)(param_1 + 0x70);
      if (uVar6 != 0) {
        uVar13 = FUN_14494321d(0x110);
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        plStack_60 = *(longlong **)(param_1 + 0x10);
        uVar15 = uVar13;
        if (plStack_60 == (longlong *)0x0) {
LAB_147dfc98f:
          local_68 = (code *)0x0;
          plStack_60 = (longlong *)0x0;
          local_74 = (undefined4)CONCAT71((int7)(uVar15 >> 8),1);
        }
        else {
          uVar15 = (ulonglong)*(uint *)(plStack_60 + 1);
          do {
            uVar10 = (uint)uVar15;
            if (uVar10 == 0) goto LAB_147dfc98f;
            LOCK();
            uVar4 = *(uint *)(plStack_60 + 1);
            if (uVar10 == uVar4) {
              *(uint *)(plStack_60 + 1) = uVar10 + 1;
            }
            else {
              uVar15 = (ulonglong)uVar4;
            }
            UNLOCK();
          } while (uVar10 != uVar4);
          local_68 = *(code **)(param_1 + 8);
          LOCK();
          *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
          UNLOCK();
          local_74 = 0;
        }
        plVar3 = plStack_60;
        local_58 = uVar6;
        local_50 = plVar5;
        FUN_147dfceb2(uVar13,param_2 + 0x28,&local_68,&local_58);
        plVar14 = (longlong *)FUN_14494321d(0x18);
        plVar14[1] = (longlong)&DAT_100000001;
        *plVar14 = (longlong)&PTR_FUN_14ab3c310;
        plVar14[2] = uVar13;
        if ((uVar13 != 0) &&
           (((*(longlong *)(uVar13 + 8) == 0 || (*(longlong *)(uVar13 + 0x10) == 0)) ||
            (*(int *)(*(longlong *)(uVar13 + 0x10) + 8) < 1)))) {
          if (plVar14 == (longlong *)0x0) {
            *(ulonglong *)(uVar13 + 8) = uVar13;
            plVar17 = *(longlong **)(uVar13 + 0x10);
            if (plVar17 != (longlong *)0x0) {
LAB_147dfca98:
              LOCK();
              piVar1 = (int *)((longlong)plVar17 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              puVar16 = (undefined8 *)(uVar13 + 0x10);
              if (*piVar1 == 0) {
                local_70 = (undefined8 *)(uVar13 + 0x10);
                (**(code **)(*plVar17 + 0x10))();
                puVar16 = local_70;
              }
              *puVar16 = plVar14;
              if (plVar14 != (longlong *)0x0) goto LAB_147dfcd10;
            }
          }
          else {
            LOCK();
            *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
            UNLOCK();
            *(ulonglong *)(uVar13 + 8) = uVar13;
            if (*(longlong **)(uVar13 + 0x10) != plVar14) {
              LOCK();
              *(int *)((longlong)plVar14 + 0xc) = *(int *)((longlong)plVar14 + 0xc) + 1;
              UNLOCK();
              plVar17 = *(longlong **)(uVar13 + 0x10);
              if (plVar17 != (longlong *)0x0) goto LAB_147dfca98;
              *(longlong **)(uVar13 + 0x10) = plVar14;
            }
LAB_147dfcd10:
            LOCK();
            plVar17 = plVar14 + 1;
            *(int *)plVar17 = (int)*plVar17 + -1;
            UNLOCK();
            if ((int)*plVar17 == 0) {
              (**(code **)*plVar14)(plVar14);
              LOCK();
              piVar1 = (int *)((longlong)plVar14 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar14 + 0x10))(plVar14);
              }
            }
          }
        }
        *puVar12 = uVar13;
        plVar17 = (longlong *)puVar12[1];
        if (plVar14 == plVar17) {
          if (plVar14 != (longlong *)0x0) {
            LOCK();
            plVar17 = plVar14 + 1;
            *(int *)plVar17 = (int)*plVar17 + -1;
            UNLOCK();
            if ((int)*plVar17 == 0) {
              (**(code **)*plVar14)(plVar14);
              LOCK();
              piVar1 = (int *)((longlong)plVar14 + 0xc);
              *piVar1 = *piVar1 + -1;
              iVar9 = *piVar1;
              UNLOCK();
joined_r0x000147dfcadd:
              if (iVar9 == 0) {
                (**(code **)(*plVar14 + 0x10))(plVar14);
              }
            }
          }
        }
        else {
          puVar12[1] = (ulonglong)plVar14;
          if (plVar17 != (longlong *)0x0) {
            LOCK();
            plVar14 = plVar17 + 1;
            *(int *)plVar14 = (int)*plVar14 + -1;
            UNLOCK();
            if ((int)*plVar14 == 0) {
              (**(code **)*plVar17)(plVar17);
              LOCK();
              piVar1 = (int *)((longlong)plVar17 + 0xc);
              *piVar1 = *piVar1 + -1;
              iVar9 = *piVar1;
              UNLOCK();
              plVar14 = plVar17;
              goto joined_r0x000147dfcadd;
            }
          }
        }
        plVar14 = plStack_60;
        if (plStack_60 != (longlong *)0x0) {
          LOCK();
          plVar17 = plStack_60 + 1;
          *(int *)plVar17 = (int)*plVar17 + -1;
          UNLOCK();
          if ((int)*plVar17 == 0) {
            (**(code **)*plStack_60)(plStack_60);
            LOCK();
            piVar1 = (int *)((longlong)plVar14 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
            }
          }
        }
        if ((char)local_74 == '\0') {
          LOCK();
          plVar14 = plVar3 + 1;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)*plVar14 == 0) {
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
        plVar14 = local_50;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_50 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar1 = (int *)((longlong)plVar14 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
            }
          }
        }
        uVar11 = (**(code **)(*(longlong *)*puVar12 + 0x80))();
        local_68 = FUN_147dfd0d0;
        plStack_60 = (longlong *)((ulonglong)plStack_60 & 0xffffffff00000000);
        FUN_147e04a96(&local_58,param_1);
        FUN_147e049ae(uVar11,&local_68,&local_58);
        FUN_1449db362(&local_58);
        FUN_147dfcd58(*puVar12,param_2,param_3);
        local_58 = *puVar12;
        plVar14 = (longlong *)puVar12[1];
        if (plVar14 == (longlong *)0x0) {
          local_50 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
          UNLOCK();
          local_50 = plVar14;
        }
        plStack_60 = *(longlong **)(param_1 + 0x10);
        if (plStack_60 == (longlong *)0x0) {
LAB_147dfcc09:
          local_68 = (code *)0x0;
          plStack_60 = (longlong *)0x0;
          bVar18 = true;
        }
        else {
          iVar9 = (int)plStack_60[1];
          do {
            if (iVar9 == 0) goto LAB_147dfcc09;
            LOCK();
            iVar7 = (int)plStack_60[1];
            bVar18 = iVar9 == iVar7;
            if (bVar18) {
              *(int *)(plStack_60 + 1) = iVar9 + 1;
              iVar7 = iVar9;
            }
            iVar9 = iVar7;
            UNLOCK();
          } while (!bVar18);
          local_68 = *(code **)(param_1 + 8);
          LOCK();
          *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
          UNLOCK();
          bVar18 = false;
        }
        plVar3 = plStack_60;
        FUN_147e04f4c(param_1 + 0xb8,&local_68,&local_58);
        plVar17 = plStack_60;
        if (plStack_60 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_60 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plStack_60)(plStack_60);
            LOCK();
            piVar1 = (int *)((longlong)plVar17 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar17 + 0x10))(plVar17);
            }
          }
        }
        if (!bVar18) {
          LOCK();
          plVar17 = plVar3 + 1;
          *(int *)plVar17 = (int)*plVar17 + -1;
          UNLOCK();
          if ((int)*plVar17 == 0) {
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
        plVar3 = local_50;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar17 = local_50 + 1;
          *(int *)plVar17 = (int)*plVar17 + -1;
          UNLOCK();
          if ((int)*plVar17 == 0) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar14 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plVar14)(plVar14);
            LOCK();
            piVar1 = (int *)((longlong)plVar14 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
            }
          }
        }
      }
      LOCK();
      plVar14 = plVar5 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  else {
    FUN_147dfcd58(*puVar12,param_2,param_3);
  }
LAB_147dfc941:
  FUN_140212f8e(&local_58);
  *(ulonglong *)(param_1 + 0x68) = local_58;
LAB_147dfc871:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dfcd58 FUN_147dfcd58 body=344 status=ok
// SIG undefined FUN_147dfcd58(void)

void FUN_147dfcd58(longlong param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((((*(int *)(param_2 + 0x28) == *(int *)(param_1 + 0x78)) &&
       (*(int *)(param_2 + 0x2c) == *(int *)(param_1 + 0x7c))) &&
      (*(int *)(param_2 + 0x30) == *(int *)(param_1 + 0x80))) &&
     (*(int *)(param_2 + 0x34) == *(int *)(param_1 + 0x84))) {
    if (*(longlong *)(param_1 + 0xc0) != 0) {
      piVar5 = (int *)(**(code **)(*(longlong *)*param_3 + 0x48))();
      if (((*(int *)(param_1 + 0x18) != *piVar5) || (*(int *)(param_1 + 0x1c) != piVar5[1])) ||
         ((*(int *)(param_1 + 0x20) != piVar5[2] || (*(int *)(param_1 + 0x24) != piVar5[3])))) {
        uVar1 = *(undefined8 *)(param_1 + 0xc0);
        uVar7 = (**(code **)(*(longlong *)*param_3 + 0x48))();
        uVar8 = FUN_14001cc68(1,0);
        FUN_147dfd6c6(uVar1,uVar8,uVar7);
      }
    }
    *(undefined1 *)(param_1 + 0x28) = *param_2;
    puVar6 = (undefined4 *)(**(code **)(*(longlong *)*param_3 + 0x48))();
    uVar2 = puVar6[1];
    uVar3 = puVar6[2];
    uVar4 = puVar6[3];
    *(undefined4 *)(param_1 + 0x18) = *puVar6;
    *(undefined4 *)(param_1 + 0x1c) = uVar2;
    *(undefined4 *)(param_1 + 0x20) = uVar3;
    *(undefined4 *)(param_1 + 0x24) = uVar4;
    FUN_144a787a6(param_1 + 0x30,param_2 + 8);
    FUN_144a787a6(param_1 + 0x50,param_2 + 0x18);
    FUN_144a787a6(param_1 + 0x88,param_2 + 0x38);
    FUN_144a787a6(param_1 + 0xe0,param_2 + 0x48);
    FUN_140212f8e(&local_38);
    *(undefined8 *)(param_1 + 0xa8) = local_38;
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dfceb2 FUN_147dfceb2 body=540 status=ok
// SIG undefined FUN_147dfceb2(void)

undefined8 *
FUN_147dfceb2(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined8 local_88;
  longlong local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  code *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14ab3bfb0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  *(undefined4 *)(param_1 + 0xf) = *param_2;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar4;
  *(undefined4 *)(param_1 + 0x10) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar6;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = *param_3;
  lVar2 = param_3[1];
  param_1[0x1b] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 2;
  FUN_1446ddc76(&local_90,"FSessionInstanceInfo",1);
  local_88 = *param_4;
  local_80 = param_4[1];
  if (local_80 != 0) {
    LOCK();
    *(int *)(local_80 + 0xc) = *(int *)(local_80 + 0xc) + 1;
    UNLOCK();
  }
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_4c = local_90;
  plVar7 = (longlong *)FUN_144a7672a();
  local_44 = (**(code **)(*plVar7 + 0x10))(plVar7,0);
  local_40 = FUN_147dfd506;
  local_38 = (longlong *)((ulonglong)local_38._4_4_ << 0x20);
  FUN_147dfd46c(&local_88,param_1,&local_40);
  FUN_1458bfc2e(&local_88,&local_40);
  plVar7 = local_38;
  if ((code **)(param_1 + 0x18) != &local_40) {
    param_1[0x18] = local_40;
    local_40 = (code *)0x0;
    plVar3 = (longlong *)param_1[0x19];
    if (local_38 != plVar3) {
      local_38 = (longlong *)0x0;
      param_1[0x19] = plVar7;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar3 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
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
    }
  }
  plVar7 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  FUN_1458bf708(&local_88);
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dfd0d0 FUN_147dfd0d0 body=217 status=ok
// SIG undefined FUN_147dfd0d0(void)

void FUN_147dfd0d0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plStack_30 = *(longlong **)(param_1 + 0x10);
  if (plStack_30 == (longlong *)0x0) {
LAB_147dfd0ff:
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
    bVar7 = true;
  }
  else {
    iVar6 = (int)plStack_30[1];
    do {
      if (iVar6 == 0) goto LAB_147dfd0ff;
      LOCK();
      iVar5 = (int)plStack_30[1];
      bVar7 = iVar6 == iVar5;
      if (bVar7) {
        *(int *)(plStack_30 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar7);
    local_38 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
    bVar7 = false;
  }
  plVar4 = plStack_30;
  FUN_147e050fa(param_1 + 0xd0,&local_38,param_2,param_3);
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
  if (!bVar7) {
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147dfd1aa FUN_147dfd1aa body=350 status=ok
// SIG undefined FUN_147dfd1aa(void)

void FUN_147dfd1aa(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_147e04ffb(*param_2,(int)param_2[1]);
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != 0) {
    FUN_147e05044(param_2);
  }
  local_48 = param_1 + 0x28;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_1449c0562(&local_50);
  }
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  local_78 = (longlong *)(param_1 + 0x18);
  if (iStack_3c < *(int *)(local_48 + 0x18)) {
    do {
      uVar2 = *(undefined8 *)(*local_78 + 0x10 + (longlong)iStack_5c * 0x28);
      lVar3 = *(longlong *)(*local_78 + 0x18 + (longlong)iStack_5c * 0x28);
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
      }
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_147e05074(param_2,iVar1);
      }
      lVar4 = *param_2;
      *(undefined8 *)(lVar4 + (longlong)iVar1 * 0x10) = uVar2;
      *(longlong *)(lVar4 + 8 + (longlong)iVar1 * 0x10) = lVar3;
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < *(int *)(local_68 + 0x18));
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147dfd338 FUN_147dfd338 body=307 status=ok
// SIG undefined FUN_147dfd338(void)

void FUN_147dfd338(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  longlong *local_48;
  longlong *local_40;
  undefined2 local_38;
  undefined8 local_30;
  longlong local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 0x18);
  local_28 = param_1 + 0x28;
  local_30 = 0x100000000;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = local_20;
  iStack_54 = iStack_1c;
  local_50 = local_18;
  local_4c = local_14;
  local_68 = local_30;
  local_60 = local_28;
  local_38 = 0;
  local_70 = plVar1;
  local_48 = plVar1;
  local_40 = plVar1;
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      (**(code **)(**(longlong **)(*local_70 + 0x10 + (longlong)iStack_54 * 0x28) + 0x78))();
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < *(int *)(local_60 + 0x18));
    if (((local_38 & 1) != 0) && (local_38._1_1_ == '\x01')) {
      FUN_147e04370(local_40,(int)local_40[1] - *(int *)((longlong)local_40 + 0x34));
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dfd46c FUN_147dfd46c body=153 status=ok
// SIG undefined FUN_147dfd46c(void)

longlong FUN_147dfd46c(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar6 = (undefined8 *)FUN_14494321d(0x20);
  *puVar6 = &PTR_FUN_14ab3c408;
  puVar6[1] = param_2;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *(undefined4 *)(puVar6 + 2) = *param_3;
  *(undefined4 *)((longlong)puVar6 + 0x14) = uVar3;
  *(undefined4 *)(puVar6 + 3) = uVar4;
  *(undefined4 *)((longlong)puVar6 + 0x1c) = uVar5;
  puVar7 = (undefined8 *)FUN_14494321d(0x18);
  puVar7[1] = &DAT_100000001;
  *puVar7 = &PTR_LAB_14ab3c420;
  puVar7[2] = puVar6;
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_1458bf82a(param_1 + 0x28,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(undefined8 **)(lVar2 + (longlong)iVar1 * 0x10) = puVar6;
  *(undefined8 **)(lVar2 + 8 + (longlong)iVar1 * 0x10) = puVar7;
  return param_1;
}



// FUNCTION 147dfd506 FUN_147dfd506 body=446 status=ok
// SIG undefined FUN_147dfd506(void)

void FUN_147dfd506(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 local_48;
  longlong *plStack_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar7 = FUN_14494321d(0x50);
  local_60 = *(undefined1 *)(param_2 + 0x30);
  local_68 = param_2 + 8;
  local_58 = param_2;
  FUN_147dfdd4a(lVar7,param_1 + 0x78,param_1 + 0x88,(float)*(double *)(param_2 + 0x28));
  local_38 = lVar7;
  plVar8 = (longlong *)FUN_14494321d(0x18);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14ab3c440;
  plVar8[2] = lVar7;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  iVar6 = *(int *)(param_1 + 0xb8);
  *(uint *)(param_1 + 0xb8) = iVar6 + 1U;
  local_30 = plVar8;
  if (*(uint *)(param_1 + 0xbc) < iVar6 + 1U) {
    FUN_147e053cc(param_1 + 0xb0,iVar6);
  }
  lVar4 = *(longlong *)(param_1 + 0xb0);
  *(longlong *)(lVar4 + (longlong)iVar6 * 0x10) = lVar7;
  *(longlong **)(lVar4 + 8 + (longlong)iVar6 * 0x10) = plVar8;
  plStack_40 = *(longlong **)(param_1 + 0x10);
  if (plStack_40 == (longlong *)0x0) {
LAB_147dfd5ea:
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar9 = true;
  }
  else {
    iVar6 = (int)plStack_40[1];
    do {
      if (iVar6 == 0) goto LAB_147dfd5ea;
      LOCK();
      iVar5 = (int)plStack_40[1];
      bVar9 = iVar6 == iVar5;
      if (bVar9) {
        *(int *)(plStack_40 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar9);
    local_48 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
    UNLOCK();
    bVar9 = false;
  }
  plVar8 = plStack_40;
  FUN_147e05452(param_1 + 0xf8,&local_48,&local_38);
  plVar3 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (!bVar9) {
    LOCK();
    plVar3 = plVar8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  plVar8 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147dfd6c6 FUN_147dfd6c6 body=352 status=ok
// SIG undefined FUN_147dfd6c6(void)

void FUN_147dfd6c6(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined4 *_Src;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  void **local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  longlong *plStack_70;
  undefined4 *local_68;
  ulonglong uStack_60;
  void *local_50;
  int local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_38 = 0x2bca2875f4373fff;
  local_40 = 0;
  local_68 = (undefined4 *)0x0;
  uStack_60 = 1;
  FUN_14706f770(&local_68,0);
  _Src = local_68;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *local_68 = *param_3;
  local_68[1] = uVar3;
  local_68[2] = uVar4;
  local_68[3] = uVar5;
  local_50 = (void *)0x0;
  lVar8 = (longlong)(int)uStack_60;
  local_48 = (int)uStack_60;
  if (lVar8 == 0) {
    local_44 = 0;
  }
  else {
    FUN_14707042c(&local_50,uStack_60 & 0xffffffff,0);
    memcpy(local_50,_Src,lVar8 << 4);
  }
  local_78 = 0;
  plStack_70 = (longlong *)0x0;
  uVar7 = FUN_146415940();
  local_80 = &local_38;
  local_88 = &local_40;
  local_90 = &local_50;
  local_98 = &local_78;
  FUN_147aaba9a(param_1,param_2,uVar7,0);
  plVar6 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dfd828 FUN_147dfd828 body=161 status=ok
// SIG undefined FUN_147dfd828(void)

void FUN_147dfd828(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0xc0);
  if ((lVar1 != 0) &&
     (((*(int *)(param_1 + 100) != 0 || *(int *)(param_1 + 0x60) != 0) ||
      *(int *)(param_1 + 0x68) != 0) || *(int *)(param_1 + 0x6c) != 0)) {
    if (DAT_14c8c3290 == 0) {
      local_28 = (undefined2 *)CONCAT44(local_28._4_4_,0x100);
      GetUserNameW(&DAT_14c8c3290,(LPDWORD)&local_28);
    }
    local_28 = &DAT_14c8c3290;
    uVar2 = FUN_147dfda2c(param_2);
    FUN_147dfd8ca(lVar1,uVar2,param_1 + 0x60);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dfd8ca FUN_147dfd8ca body=352 status=ok
// SIG undefined FUN_147dfd8ca(void)

void FUN_147dfd8ca(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined4 *_Src;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  void **local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  longlong *plStack_70;
  undefined4 *local_68;
  ulonglong uStack_60;
  void *local_50;
  int local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_38 = 0x2bca2875f4373fff;
  local_40 = 0;
  local_68 = (undefined4 *)0x0;
  uStack_60 = 1;
  FUN_14706f770(&local_68,0);
  _Src = local_68;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *local_68 = *param_3;
  local_68[1] = uVar3;
  local_68[2] = uVar4;
  local_68[3] = uVar5;
  local_50 = (void *)0x0;
  lVar8 = (longlong)(int)uStack_60;
  local_48 = (int)uStack_60;
  if (lVar8 == 0) {
    local_44 = 0;
  }
  else {
    FUN_14707042c(&local_50,uStack_60 & 0xffffffff,0);
    memcpy(local_50,_Src,lVar8 << 4);
  }
  local_78 = 0;
  plStack_70 = (longlong *)0x0;
  uVar7 = FUN_14629dc40();
  local_80 = &local_38;
  local_88 = &local_40;
  local_90 = &local_50;
  local_98 = &local_78;
  FUN_147aaba9a(param_1,param_2,uVar7,0);
  plVar6 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dfda2c FUN_147dfda2c body=119 status=ok
// SIG undefined FUN_147dfda2c(void)

undefined8 FUN_147dfda2c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_14001cc68(0x20,0);
  FUN_140056680(local_30,*param_2);
  FUN_147e052c2(uVar1,param_1,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dfdaa4 FUN_147dfdaa4 body=153 status=ok
// SIG undefined FUN_147dfdaa4(void)

void FUN_147dfdaa4(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined2 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0xc0);
  if ((lVar1 != 0) &&
     (((*(int *)(param_1 + 100) != 0 || *(int *)(param_1 + 0x60) != 0) ||
      *(int *)(param_1 + 0x68) != 0) || *(int *)(param_1 + 0x6c) != 0)) {
    if (DAT_14c8c3290 == 0) {
      local_20 = (undefined2 *)CONCAT44(local_20._4_4_,0x100);
      GetUserNameW(&DAT_14c8c3290,(LPDWORD)&local_20);
    }
    local_20 = &DAT_14c8c3290;
    uVar2 = FUN_147dfdca0();
    FUN_147dfdb3e(lVar1,uVar2,param_1 + 0x60);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dfdb3e FUN_147dfdb3e body=352 status=ok
// SIG undefined FUN_147dfdb3e(void)

void FUN_147dfdb3e(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined4 *_Src;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  void **local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  longlong *plStack_70;
  undefined4 *local_68;
  ulonglong uStack_60;
  void *local_50;
  int local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_38 = 0x2bca2875f4373fff;
  local_40 = 0;
  local_68 = (undefined4 *)0x0;
  uStack_60 = 1;
  FUN_14706f770(&local_68,0);
  _Src = local_68;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *local_68 = *param_3;
  local_68[1] = uVar3;
  local_68[2] = uVar4;
  local_68[3] = uVar5;
  local_50 = (void *)0x0;
  lVar8 = (longlong)(int)uStack_60;
  local_48 = (int)uStack_60;
  if (lVar8 == 0) {
    local_44 = 0;
  }
  else {
    FUN_14707042c(&local_50,uStack_60 & 0xffffffff,0);
    memcpy(local_50,_Src,lVar8 << 4);
  }
  local_78 = 0;
  plStack_70 = (longlong *)0x0;
  uVar7 = FUN_14629dcd2();
  local_80 = &local_38;
  local_88 = &local_40;
  local_90 = &local_50;
  local_98 = &local_78;
  FUN_147aaba9a(param_1,param_2,uVar7,0);
  plVar6 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dfdca0 FUN_147dfdca0 body=168 status=ok
// SIG undefined FUN_147dfdca0(void)

undefined8 * FUN_147dfdca0(undefined8 *param_1)

{
  void *_Src;
  undefined8 *puVar1;
  undefined1 auStack_58 [40];
  void *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0);
  FUN_140056680(&local_30,*param_1);
  _Src = local_30;
  *puVar1 = 0;
  *(int *)(puVar1 + 1) = local_28;
  if ((longlong)local_28 == 0) {
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(puVar1,local_28,0);
    memcpy((void *)*puVar1,_Src,(longlong)local_28 * 2);
  }
  if (local_30 != (void *)0x0) {
    FUN_1400020a8(local_30);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dfdd4a FUN_147dfdd4a body=381 status=ok
// SIG undefined FUN_147dfdd4a(void)

longlong *
FUN_147dfdd4a(longlong *param_1,undefined4 *param_2,undefined8 *param_3,float param_4,
             undefined8 *param_5,undefined1 param_6,longlong *param_7)

{
  longlong *plVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_98 [40];
  longlong local_70 [2];
  longlong local_60 [2];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = *param_7;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  *(undefined4 *)(param_1 + 1) = *param_2;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
  *(undefined4 *)(param_1 + 2) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar6;
  param_1[3] = 0;
  iVar2 = *(int *)(param_3 + 1);
  pvVar3 = (void *)*param_3;
  *(int *)(param_1 + 4) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar2,0);
    memcpy((void *)param_1[3],pvVar3,(longlong)iVar2 * 2);
  }
  plVar1 = param_1 + 5;
  if (*param_7 == 0) {
    param_1[5] = 0;
    iVar2 = *(int *)(param_5 + 1);
    pvVar3 = (void *)*param_5;
    *(int *)(param_1 + 6) = iVar2;
    if ((longlong)iVar2 == 0) {
      *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    }
    else {
      FUN_1446dd670(plVar1,iVar2,0);
      memcpy((void *)*plVar1,pvVar3,(longlong)iVar2 * 2);
    }
  }
  else {
    FUN_1400021e4(param_7,local_70);
    FUN_144a882a8(local_60,local_70,&DAT_149e35320);
    FUN_144a7dea0(plVar1,local_60,param_5);
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1402160b8(param_1 + 7);
  param_1[8] = (longlong)(double)param_4;
  *(undefined1 *)(param_1 + 9) = param_6;
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dfdec8 FUN_147dfdec8 body=1519 status=ok
// SIG undefined FUN_147dfdec8(void)

undefined8 * FUN_147dfdec8(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  void *_Src;
  code *pcVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined8 uVar12;
  undefined2 *puVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  undefined1 auStack_f8 [32];
  ulonglong local_d8;
  undefined4 local_d0;
  undefined8 *local_c0;
  undefined8 local_b8;
  void *local_b0;
  longlong *local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  code *local_68;
  undefined8 local_60;
  undefined2 *local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14ab3c060;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = *param_2;
  lVar3 = param_2[1];
  param_1[7] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 2;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0x200000000;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x25) = 2;
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 0;
  local_58 = (undefined2 *)0x0;
  uStack_50 = 0;
  uVar10 = FUN_14118da1c();
  local_d8 = 0;
  cVar6 = FUN_14063337c(uVar10,L"SessionFilter=",&local_58,1);
  if (cVar6 != '\0') {
    plVar11 = param_1 + 0x1e;
    local_d0 = 0xffffffff;
    local_d8 = local_d8 & 0xffffffff00000000;
    local_c0 = param_2;
    uVar7 = FUN_1447ee042(&local_58,&DAT_149e06124,1,0);
    if (uVar7 != 0xffffffff) {
      do {
        puVar13 = &DAT_149dfb77a;
        if ((int)uStack_50 != 0) {
          puVar13 = local_58;
        }
        uVar8 = (int)uStack_50 - 1;
        if ((int)uStack_50 == 0) {
          uVar8 = 0;
        }
        uVar9 = uVar7;
        if ((int)uVar8 <= (int)uVar7) {
          uVar9 = uVar8;
        }
        if ((int)uVar9 < 1) {
          uVar9 = 0;
        }
        FUN_14006620a(&local_b0,puVar13,uVar9);
        iVar16 = *(int *)(param_1 + 0x1f);
        *(uint *)(param_1 + 0x1f) = iVar16 + 1U;
        if (*(uint *)((longlong)param_1 + 0xfc) < iVar16 + 1U) {
          FUN_1447a1bd6(plVar11,iVar16);
        }
        _Src = local_b0;
        lVar3 = *plVar11;
        lVar17 = (longlong)iVar16 * 0x10;
        puVar2 = (undefined8 *)(lVar3 + lVar17);
        *(undefined8 *)(lVar3 + lVar17) = 0;
        lVar15 = (longlong)(int)local_a8;
        *(int *)(lVar3 + 8 + lVar17) = (int)local_a8;
        if (lVar15 == 0) {
          *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar2,(ulonglong)local_a8 & 0xffffffff,0);
          memcpy((void *)*puVar2,_Src,lVar15 * 2);
        }
        iVar16 = (int)uStack_50 + -1;
        if ((int)uStack_50 == 0) {
          iVar16 = 0;
        }
        iVar14 = ~uVar7 + iVar16;
        if (iVar16 <= (int)(~uVar7 + iVar16)) {
          iVar14 = iVar16;
        }
        if (iVar14 < 1) {
          iVar14 = 0;
        }
        FUN_14496493a(&local_58,0,iVar16 - iVar14,0);
        local_d0 = 0xffffffff;
        local_d8 = local_d8 & 0xffffffff00000000;
        uVar7 = FUN_1447ee042(&local_58,&DAT_149e06124,1);
        if (local_b0 != (void *)0x0) {
          FUN_1400020a8();
        }
      } while (uVar7 != 0xffffffff);
    }
    iVar16 = *(int *)(param_1 + 0x1f);
    *(uint *)(param_1 + 0x1f) = iVar16 + 1U;
    if (*(uint *)((longlong)param_1 + 0xfc) < iVar16 + 1U) {
      FUN_1447a1bd6(plVar11,iVar16);
    }
    puVar13 = local_58;
    lVar3 = *plVar11;
    lVar17 = (longlong)iVar16 * 0x10;
    puVar2 = (undefined8 *)(lVar3 + lVar17);
    *(undefined8 *)(lVar3 + lVar17) = 0;
    lVar15 = (longlong)(int)uStack_50;
    *(int *)(lVar3 + 8 + lVar17) = (int)uStack_50;
    if (lVar15 == 0) {
      *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
      param_2 = local_c0;
    }
    else {
      FUN_1446dd670(puVar2,uStack_50 & 0xffffffff,0);
      memcpy((void *)*puVar2,puVar13,lVar15 * 2);
      param_2 = local_c0;
    }
  }
  FUN_1446ddc76(&local_b8,"FSessionManager",1);
  local_b0 = (void *)*param_2;
  local_a8 = (longlong *)param_2[1];
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)local_a8 + 0xc) = *(int *)((longlong)local_a8 + 0xc) + 1;
    UNLOCK();
  }
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_74 = local_b8;
  plVar11 = (longlong *)FUN_144a7672a();
  local_6c = (**(code **)(*plVar11 + 0x10))(plVar11,0);
  local_68 = FUN_147dfe552;
  local_60._0_4_ = 0;
  FUN_147dfe4b8(&local_b0,param_1,&local_68);
  local_68 = FUN_147dfe6b4;
  local_60 = (longlong *)((ulonglong)local_60._4_4_ << 0x20);
  FUN_147dfe61a(&local_b0,param_1,&local_68);
  FUN_1458bfc2e(&local_b0,&local_68);
  plVar11 = local_60;
  if ((code **)(param_1 + 8) != &local_68) {
    param_1[8] = local_68;
    local_68 = (code *)0x0;
    plVar4 = (longlong *)param_1[9];
    if (local_60 != plVar4) {
      local_60 = (longlong *)0x0;
      param_1[9] = plVar11;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar11 = plVar4 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
    }
  }
  plVar11 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_60 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  FUN_1458bf708(&local_b0);
  uVar10 = FUN_1401cb356();
  local_68 = (code *)0x0;
  local_60 = (longlong *)((ulonglong)local_60 & 0xffffffff00000000);
  FUN_1446efa72(&local_68,0,3,0x10);
  pcVar5 = local_68;
  local_60 = (longlong *)CONCAT44(local_60._4_4_,3);
  *(undefined ***)local_68 = &PTR_LAB_149e02020;
  uVar12 = FUN_144a3f946();
  *(undefined8 *)(pcVar5 + 0x10) = uVar12;
  *(undefined ***)pcVar5 = &PTR_FUN_14ab3c4c0;
  *(undefined8 **)(pcVar5 + 0x18) = param_1;
  *(code **)(pcVar5 + 0x20) = FUN_1437d1634;
  *(undefined4 *)(pcVar5 + 0x28) = 0;
  local_d8 = CONCAT44(local_d8._4_4_,0x40a00000);
  FUN_1405f67fc(uVar10,&local_b0,&local_68,L"FSessionManager_HandleTicker");
  if ((void **)(param_1 + 0x2c) != &local_b0) {
    param_1[0x2c] = local_b0;
    local_b0 = (void *)0x0;
    plVar11 = (longlong *)param_1[0x2d];
    param_1[0x2d] = local_a8;
    local_a8 = (longlong *)0x0;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))();
      }
    }
  }
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_a8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_a8 + 0x10))();
    }
  }
  FUN_1449db362(&local_68);
  FUN_1437d169e(param_1);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147dfe4b8 FUN_147dfe4b8 body=153 status=ok
// SIG undefined FUN_147dfe4b8(void)

longlong FUN_147dfe4b8(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar6 = (undefined8 *)FUN_14494321d(0x20);
  *puVar6 = &PTR_FUN_14ab3c458;
  puVar6[1] = param_2;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *(undefined4 *)(puVar6 + 2) = *param_3;
  *(undefined4 *)((longlong)puVar6 + 0x14) = uVar3;
  *(undefined4 *)(puVar6 + 3) = uVar4;
  *(undefined4 *)((longlong)puVar6 + 0x1c) = uVar5;
  puVar7 = (undefined8 *)FUN_14494321d(0x18);
  puVar7[1] = &DAT_100000001;
  *puVar7 = &PTR_LAB_14ab3c470;
  puVar7[2] = puVar6;
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_1458bf82a(param_1 + 0x28,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(undefined8 **)(lVar2 + (longlong)iVar1 * 0x10) = puVar6;
  *(undefined8 **)(lVar2 + 8 + (longlong)iVar1 * 0x10) = puVar7;
  return param_1;
}



// FUNCTION 147dfe552 FUN_147dfe552 body=199 status=ok
// SIG undefined FUN_147dfe552(void)

void FUN_147dfe552(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  
  if (((*(int *)(param_2 + 0x3c) != 0 || *(int *)(param_2 + 0x38) != 0) ||
      *(int *)(param_2 + 0x40) != 0) || *(int *)(param_2 + 0x44) != 0) {
    uVar5 = FUN_1447addd0(param_2 + 0x38,0x10);
    iVar6 = FUN_147e059f8((longlong *)(param_1 + 0x70),uVar5,param_2 + 0x38);
    if ((iVar6 != -1) &&
       (lVar7 = (longlong)iVar6 * 0x28 + *(longlong *)(param_1 + 0x70), lVar7 != 0)) {
      lVar3 = *(longlong *)(lVar7 + 0x10);
      plVar4 = *(longlong **)(lVar7 + 0x18);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      if (lVar3 != 0) {
        FUN_147dfc5d0(lVar3,param_2,param_3);
        FUN_1447f69b6(param_1 + 0x148);
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
                    /* WARNING: Could not recover jumptable at 0x000147dfe5f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar4 + 0x10))(plVar4);
            return;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 147dfe61a FUN_147dfe61a body=153 status=ok
// SIG undefined FUN_147dfe61a(void)

longlong FUN_147dfe61a(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar6 = (undefined8 *)FUN_14494321d(0x20);
  *puVar6 = &PTR_FUN_14ab3c488;
  puVar6[1] = param_2;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *(undefined4 *)(puVar6 + 2) = *param_3;
  *(undefined4 *)((longlong)puVar6 + 0x14) = uVar3;
  *(undefined4 *)(puVar6 + 3) = uVar4;
  *(undefined4 *)((longlong)puVar6 + 0x1c) = uVar5;
  puVar7 = (undefined8 *)FUN_14494321d(0x18);
  puVar7[1] = &DAT_100000001;
  *puVar7 = &PTR_LAB_14ab3c4a0;
  puVar7[2] = puVar6;
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_1458bf82a(param_1 + 0x28,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(undefined8 **)(lVar2 + (longlong)iVar1 * 0x10) = puVar6;
  *(undefined8 **)(lVar2 + 8 + (longlong)iVar1 * 0x10) = puVar7;
  return param_1;
}



// FUNCTION 147dfe6b4 FUN_147dfe6b4 body=926 status=ok
// SIG undefined FUN_147dfe6b4(void)

void FUN_147dfe6b4(longlong param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  ushort uVar14;
  ulonglong uVar15;
  ushort uVar16;
  ulonglong uVar17;
  bool bVar18;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined4 local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((((*(int *)(param_2 + 0x5c) == 0 && *(int *)(param_2 + 0x58) == 0) &&
       *(int *)(param_2 + 0x60) == 0) && *(int *)(param_2 + 100) == 0) ||
     (((*(char *)(param_2 + 0x88) == '\0' &&
       (cVar5 = FUN_147dff52e(param_1,param_2 + 0x78), cVar5 == '\0')) ||
      (plVar2 = *(longlong **)(param_1 + 0x38), plVar2 == (longlong *)0x0)))) goto LAB_147dfe737;
  lVar13 = param_2 + 0x58;
  iVar6 = (int)plVar2[1];
  do {
    if (iVar6 == 0) goto LAB_147dfe737;
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar18 = iVar6 == iVar4;
    if (bVar18) {
      *(int *)(plVar2 + 1) = iVar6 + 1;
      iVar4 = iVar6;
    }
    iVar6 = iVar4;
    UNLOCK();
  } while (!bVar18);
  lVar3 = *(longlong *)(param_1 + 0x30);
  if (lVar3 != 0) {
    uVar7 = FUN_1447addd0(lVar13,0x10);
    plVar8 = (longlong *)FUN_147e0621a(param_1 + 0x70,uVar7,lVar13);
    if ((longlong *)*plVar8 == (longlong *)0x0) {
      lVar9 = FUN_14494321d(0xe8);
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
      local_58 = lVar3;
      local_50 = plVar2;
      FUN_147dfc534(lVar9,lVar13);
      plVar10 = (longlong *)FUN_14494321d(0x18);
      plVar10[1] = (longlong)&DAT_100000001;
      *plVar10 = (longlong)&PTR_FUN_14ab3c530;
      plVar10[2] = lVar9;
      if ((lVar9 != 0) &&
         (((*(longlong *)(lVar9 + 8) == 0 || (*(longlong *)(lVar9 + 0x10) == 0)) ||
          (*(int *)(*(longlong *)(lVar9 + 0x10) + 8) < 1)))) {
        if (plVar10 == (longlong *)0x0) {
          *(longlong *)(lVar9 + 8) = lVar9;
          plVar12 = *(longlong **)(lVar9 + 0x10);
          if (plVar12 != (longlong *)0x0) {
LAB_147dfe8f7:
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar12 + 0x10))();
            }
            *(longlong **)(lVar9 + 0x10) = plVar10;
            if (plVar10 != (longlong *)0x0) goto LAB_147dfea03;
          }
        }
        else {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
          *(longlong *)(lVar9 + 8) = lVar9;
          if (*(longlong **)(lVar9 + 0x10) != plVar10) {
            LOCK();
            *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
            UNLOCK();
            plVar12 = *(longlong **)(lVar9 + 0x10);
            if (plVar12 != (longlong *)0x0) goto LAB_147dfe8f7;
            *(longlong **)(lVar9 + 0x10) = plVar10;
          }
LAB_147dfea03:
          LOCK();
          plVar12 = plVar10 + 1;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)*plVar12 == 0) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
          }
        }
      }
      *plVar8 = lVar9;
      plVar12 = (longlong *)plVar8[1];
      if (plVar10 == plVar12) {
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar12 = plVar10 + 1;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)*plVar12 == 0) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar6 = *piVar1;
            UNLOCK();
joined_r0x000147dfe933:
            if (iVar6 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
          }
        }
      }
      else {
        plVar8[1] = (longlong)plVar10;
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar12 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar6 = *piVar1;
            UNLOCK();
            plVar10 = plVar12;
            goto joined_r0x000147dfe933;
          }
        }
      }
      plVar10 = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_50 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
      uVar11 = (**(code **)(*(longlong *)*plVar8 + 0x48))();
      local_68 = &LAB_147dff894;
      local_60 = 0;
      FUN_147e06654(&local_58,param_1);
      FUN_147e0656c(uVar11,&local_68,&local_58);
      FUN_1449db362(&local_58);
LAB_147dfe9b7:
      FUN_147dfc81e(*plVar8,param_2,param_3);
      FUN_1447f69b6(param_1 + 0x130);
    }
    else {
      plVar10 = (longlong *)(**(code **)(*(longlong *)*plVar8 + 0x28))();
      iVar6 = (int)plVar10[1];
      if (iVar6 == *(int *)(param_2 + 0x80)) {
        if (1 < iVar6) {
          lVar13 = 0;
          while( true ) {
            uVar14 = *(ushort *)(*plVar10 + lVar13);
            uVar15 = (ulonglong)uVar14;
            uVar16 = *(ushort *)(*(longlong *)(param_2 + 0x78) + lVar13);
            if (uVar14 != uVar16) break;
            if (uVar14 == 0) goto LAB_147dfe9e0;
LAB_147dfe887:
            lVar13 = lVar13 + 2;
          }
          if ((uVar16 | uVar14) < 0x80) {
            uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
            uVar17 = (ulonglong)uVar16;
            uVar16 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
            if ((&DAT_149e05da0)[uVar15] == (&DAT_149e05da0)[uVar17]) goto LAB_147dfe887;
          }
          if (uVar14 != uVar16) goto LAB_147dfe9b7;
        }
      }
      else if (*(int *)(param_2 + 0x80) + iVar6 != 1) goto LAB_147dfe9b7;
LAB_147dfe9e0:
      FUN_147dfc81e(*plVar8,param_2,param_3);
    }
  }
  LOCK();
  plVar8 = plVar2 + 1;
  *(int *)plVar8 = (int)*plVar8 + -1;
  UNLOCK();
  if ((int)*plVar8 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
LAB_147dfe737:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dfea54 FUN_147dfea54 body=563 status=ok
// SIG undefined FUN_147dfea54(void)

void FUN_147dfea54(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_14ab3c060;
  FUN_1401cb356();
  local_28 = param_1[0x2c];
  local_20 = param_1[0x2d];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
    UNLOCK();
  }
  FUN_140d61352(&local_28);
  plVar3 = (longlong *)param_1[0x2d];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  FUN_144760e21(param_1[0x29],*(undefined4 *)(param_1 + 0x2a));
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x26],*(undefined4 *)(param_1 + 0x27));
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x23],*(undefined4 *)(param_1 + 0x24));
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x20],*(undefined4 *)(param_1 + 0x21));
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[0x1e],*(undefined4 *)(param_1 + 0x1f));
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x1b],*(undefined4 *)(param_1 + 0x1c));
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x18],*(undefined4 *)(param_1 + 0x19));
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_147e03c86(param_1 + 0xe);
  plVar3 = (longlong *)param_1[0xd];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  FUN_147e04ffb(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[9];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  plVar3 = (longlong *)param_1[7];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dfec88 FUN_147dfec88 body=145 status=ok
// SIG undefined FUN_147dfec88(void)

void FUN_147dfec88(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  longlong lVar4;
  
  iVar2 = *(int *)(param_1 + 0xf8);
  *(uint *)(param_1 + 0xf8) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0xfc) < iVar2 + 1U) {
    FUN_1447a1bd6((longlong *)(param_1 + 0xf0),iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0xf0);
  lVar4 = (longlong)iVar2 * 0x10;
  puVar1 = (undefined8 *)(lVar3 + lVar4);
  *(undefined8 *)(lVar3 + lVar4) = 0;
  iVar2 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(lVar3 + 8 + lVar4) = iVar2;
  if ((longlong)iVar2 != 0) {
    FUN_1446dd670(puVar1,iVar2,0);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  return;
}



// FUNCTION 147dfed26 FUN_147dfed26 body=332 status=ok
// SIG undefined FUN_147dfed26(void)

void FUN_147dfed26(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_147dfee74(param_2,*(int *)(param_1 + 0x78) - *(int *)(param_1 + 0xa4));
  local_48 = param_1 + 0x80;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  if (*(int *)(param_1 + 0x98) != 0) {
    FUN_1449c0562(&local_50);
  }
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  local_78 = (longlong *)(param_1 + 0x70);
  if (iStack_3c < *(int *)(local_48 + 0x18)) {
    do {
      uVar2 = *(undefined8 *)(*local_78 + 0x10 + (longlong)iStack_5c * 0x28);
      lVar3 = *(longlong *)(*local_78 + 0x18 + (longlong)iStack_5c * 0x28);
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
      }
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_147e05972(param_2,iVar1);
      }
      lVar4 = *param_2;
      *(undefined8 *)(lVar4 + (longlong)iVar1 * 0x10) = uVar2;
      *(longlong *)(lVar4 + 8 + (longlong)iVar1 * 0x10) = lVar3;
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < *(int *)(local_68 + 0x18));
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147dfee74 FUN_147dfee74 body=68 status=ok
// SIG undefined FUN_147dfee74(void)

void FUN_147dfee74(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_147e058c9(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_147e05912(param_1,param_2);
  return;
}



// FUNCTION 147dfeeba FUN_147dfeeba body=194 status=ok
// SIG undefined FUN_147dfeeba(void)

ulonglong FUN_147dfeeba(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*(longlong *)*param_2 + 0x50))((longlong *)*param_2,&local_30);
  if ((local_30 == *(longlong *)(param_1 + 0x60)) && ((longlong)*(int *)(param_1 + 0x58) != 0)) {
    lVar3 = *param_2;
    lVar6 = 0;
    do {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x50) + lVar6);
      bVar5 = lVar4 == lVar3 && lVar4 != 0;
      param_2 = (longlong *)CONCAT71((int7)((ulonglong)param_2 >> 8),bVar5);
      if (bVar5) break;
      bVar5 = (longlong)*(int *)(param_1 + 0x58) * 0x10 + -0x10 != lVar6;
      lVar6 = lVar6 + 0x10;
    } while (bVar5);
  }
  else {
    param_2 = (longlong *)0x0;
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)param_2 & 0xffffffff;
}



// FUNCTION 147dfef8e FUN_147dfef8e body=82 status=ok
// SIG undefined FUN_147dfef8e(void)

void FUN_147dfef8e(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  FUN_140c8411c(param_1 + 0xf0,&local_18);
  FUN_147dfefe2(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dfefe2 FUN_147dfefe2 body=386 status=ok
// SIG undefined FUN_147dfefe2(void)

void FUN_147dfefe2(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  longlong *local_58;
  longlong *local_50;
  undefined2 local_48;
  undefined8 local_40;
  longlong local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x70);
  local_38 = param_1 + 0x80;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if (*(int *)(param_1 + 0x98) != 0) {
    FUN_1449c0562(&local_40);
  }
  local_68 = local_30;
  iStack_64 = iStack_2c;
  local_60 = local_28;
  local_5c = local_24;
  local_78 = local_40;
  local_70 = local_38;
  local_48 = 0;
  local_80 = plVar1;
  local_58 = plVar1;
  local_50 = plVar1;
  if (iStack_2c < *(int *)(local_38 + 0x18)) {
    bVar4 = false;
    do {
      uVar3 = (**(code **)(**(longlong **)(*local_80 + 0x10 + (longlong)iStack_64 * 0x28) + 0x28))()
      ;
      cVar2 = FUN_147dff52e(param_1,uVar3);
      if (cVar2 == '\0') {
        FUN_147e05f82(local_58,iStack_64);
        local_48 = CONCAT11(local_48._1_1_,1);
        bVar4 = true;
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < *(int *)(local_70 + 0x18));
    if (((local_48 & 1) != 0) && (local_48._1_1_ == '\x01')) {
      FUN_147e05d82(local_50,(int)local_50[1] - *(int *)((longlong)local_50 + 0x34));
    }
    if (bVar4) {
      FUN_1447f69b6(param_1 + 0x130);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dff166 FUN_147dff166 body=436 status=ok
// SIG undefined FUN_147dff166(void)

ulonglong FUN_147dff166(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 unaff_RBX;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong *local_58;
  char local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar3 = (longlong *)*param_2;
  uVar9 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (plVar3 != *(longlong **)(param_1 + 0x60)) {
    if (plVar3 != (longlong *)0x0) {
      uVar8 = (**(code **)(*plVar3 + 0x18))();
      uVar6 = FUN_1447addd0(uVar8,0x10);
      iVar7 = FUN_147e059f8(param_1 + 0x70,uVar6,uVar8);
      if (iVar7 == -1) {
        uVar9 = 0;
        goto LAB_147dff193;
      }
    }
    local_49 = '\x01';
    FUN_147e05a6c(param_1 + 0xc0,param_2,&local_49);
    uVar9 = CONCAT71((int7)((ulonglong)&local_49 >> 8),local_49);
    if (local_49 == '\x01') {
      puVar11 = *(undefined8 **)(param_1 + 0x50);
      uVar6 = 0;
      if ((longlong)*(int *)(param_1 + 0x58) != 0) {
        puVar10 = puVar11 + (longlong)*(int *)(param_1 + 0x58) * 2;
        do {
          local_60 = *puVar11;
          local_58 = (longlong *)puVar11[1];
          if (local_58 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_58 + 1) = (int)local_58[1] + 1;
            UNLOCK();
          }
          FUN_147e05b1c(param_1 + 0xd8,&local_60,0);
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
          puVar11 = puVar11 + 2;
        } while (puVar11 != puVar10);
        uVar6 = *(undefined4 *)(param_1 + 0x58);
        puVar11 = *(undefined8 **)(param_1 + 0x50);
      }
      FUN_147e04ffb(puVar11,uVar6);
      *(undefined4 *)(param_1 + 0x58) = 0;
      if (*(int *)(param_1 + 0x5c) != 0) {
        FUN_147e05044(param_1 + 0x50);
      }
      lVar4 = *param_2;
      lVar5 = param_2[1];
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
      }
      plVar3 = *(longlong **)(param_1 + 0x68);
      *(longlong *)(param_1 + 0x60) = lVar4;
      *(longlong *)(param_1 + 0x68) = lVar5;
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
      FUN_147e05bcc(param_1 + 0x118,param_2);
    }
  }
LAB_147dff193:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar9 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dff31c FUN_147dff31c body=529 status=ok
// SIG undefined FUN_147dff31c(void)

bool FUN_147dff31c(longlong param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*(longlong *)*param_2 + 0x50))((longlong *)*param_2,&local_60);
  plVar7 = local_58;
  lVar6 = local_60;
  lVar3 = *(longlong *)(param_1 + 0x60);
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if (lVar6 == lVar3) {
    if (param_3 == '\0') {
      local_60 = *param_2;
      local_58 = (longlong *)param_2[1];
      if (local_58 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_58 + 1) = (int)local_58[1] + 1;
        UNLOCK();
      }
      local_50 = &local_60;
      iVar8 = FUN_147e05c70(param_1 + 0x50);
      plVar7 = local_58;
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_58 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_58)(local_58);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      if (iVar8 < 1) goto LAB_147dff389;
      local_60 = *param_2;
      local_58 = (longlong *)param_2[1];
      if (local_58 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_58 + 1) = (int)local_58[1] + 1;
        UNLOCK();
      }
      uVar10 = 0;
    }
    else {
      iVar8 = *(int *)(param_1 + 0x58);
      lVar4 = *param_2;
      if ((longlong)iVar8 != 0) {
        lVar9 = 0;
        do {
          lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x50) + lVar9);
          if (lVar5 != 0 && lVar5 == lVar4) goto LAB_147dff389;
          lVar9 = lVar9 + 0x10;
        } while ((longlong)iVar8 << 4 != lVar9);
      }
      lVar9 = param_2[1];
      if (lVar9 != 0) {
        LOCK();
        *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
        UNLOCK();
        iVar8 = *(int *)(param_1 + 0x58);
      }
      *(uint *)(param_1 + 0x58) = iVar8 + 1U;
      if (*(uint *)(param_1 + 0x5c) < iVar8 + 1U) {
        FUN_147e05074(param_1 + 0x50,iVar8);
      }
      lVar5 = *(longlong *)(param_1 + 0x50);
      *(longlong *)(lVar5 + (longlong)iVar8 * 0x10) = lVar4;
      *(longlong *)(lVar5 + 8 + (longlong)iVar8 * 0x10) = lVar9;
      local_60 = *param_2;
      local_58 = (longlong *)param_2[1];
      if (local_58 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_58 + 1) = (int)local_58[1] + 1;
        UNLOCK();
      }
      uVar10 = 1;
    }
    FUN_147e05b1c(param_1 + 0xd8,&local_60,uVar10);
    plVar7 = local_58;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_58 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
LAB_147dff389:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar6 == lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dff52e FUN_147dff52e body=331 status=ok
// SIG undefined FUN_147dff52e(void)

undefined8 FUN_147dff52e(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined8 uVar4;
  ushort uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  ushort uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined1 auStack_48 [36];
  DWORD local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c8c3290 == 0) {
    local_24 = 0x100;
    GetUserNameW(&DAT_14c8c3290,&local_24);
  }
  uVar1 = *(uint *)(param_2 + 1);
  puVar3 = &DAT_149dfb77a;
  if (uVar1 != 0) {
    puVar3 = (undefined2 *)*param_2;
  }
  lVar7 = 0;
  while( true ) {
    uVar9 = *(ushort *)((longlong)puVar3 + lVar7);
    uVar10 = (ulonglong)uVar9;
    uVar5 = *(ushort *)((longlong)&DAT_14c8c3290 + lVar7);
    if (uVar9 != uVar5) break;
    if (uVar9 == 0) goto LAB_147dff659;
LAB_147dff5a9:
    lVar7 = lVar7 + 2;
  }
  if ((uVar5 | uVar9) < 0x80) {
    uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
    uVar6 = (ulonglong)uVar5;
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar6]) goto LAB_147dff5a9;
  }
  if (uVar9 != uVar5) {
    if ((longlong)*(int *)(param_1 + 0xf8) == 0) {
      uVar4 = 0;
      goto LAB_147dff65b;
    }
    puVar11 = *(undefined8 **)(param_1 + 0xf0);
    puVar8 = puVar11 + (longlong)*(int *)(param_1 + 0xf8) * 2;
    goto LAB_147dff5f0;
  }
LAB_147dff659:
  uVar4 = CONCAT71((int7)((ulonglong)puVar3 >> 8),1);
LAB_147dff65b:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
LAB_147dff5f0:
  uVar2 = *(uint *)(puVar11 + 1);
  puVar3 = (undefined2 *)(ulonglong)uVar2;
  if (uVar2 == uVar1) {
    if (1 < (int)uVar1) {
      puVar3 = (undefined2 *)*puVar11;
      lVar7 = 0;
      do {
        uVar9 = *(ushort *)((longlong)puVar3 + lVar7);
        uVar10 = (ulonglong)uVar9;
        uVar5 = *(ushort *)((longlong)*param_2 + lVar7);
        if (uVar9 == uVar5) {
          if (uVar9 == 0) break;
        }
        else {
          if (0x7f < (uVar5 | uVar9)) goto LAB_147dff651;
          uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
          uVar6 = (ulonglong)uVar5;
          uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
          if ((&DAT_149e05da0)[uVar10] != (&DAT_149e05da0)[uVar6]) goto LAB_147dff651;
        }
        lVar7 = lVar7 + 2;
      } while( true );
    }
  }
  else {
    puVar3 = (undefined2 *)(ulonglong)(uVar2 + uVar1);
    if (uVar2 + uVar1 != 1) goto LAB_147dff640;
  }
  goto LAB_147dff659;
LAB_147dff651:
  if (uVar9 == uVar5) goto LAB_147dff659;
LAB_147dff640:
  puVar11 = puVar11 + 2;
  uVar4 = 0;
  if (puVar11 == puVar8) goto LAB_147dff65b;
  goto LAB_147dff5f0;
}



// FUNCTION 147dff67a FUN_147dff67a body=182 status=ok
// SIG undefined FUN_147dff67a(void)

void FUN_147dff67a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_80 = 0x2bca2875f4373fff;
  local_88 = 0;
  uVar1 = FUN_1458bf754();
  local_a8 = &local_78;
  local_58 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  uStack_50 = 0x8000000000;
  local_48 = 0xffffffff;
  local_a0 = &local_88;
  local_98 = &local_80;
  FUN_147e0609a(param_1,param_2,uVar1,2);
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dff732 FUN_147dff732 body=182 status=ok
// SIG undefined FUN_147dff732(void)

void FUN_147dff732(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_80 = 0x2bca2875f4373fff;
  local_88 = 0;
  uVar1 = FUN_145d88ef2();
  local_a8 = &local_78;
  local_58 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  uStack_50 = 0x8000000000;
  local_48 = 0xffffffff;
  local_a0 = &local_88;
  local_98 = &local_80;
  FUN_147e0609a(param_1,param_2,uVar1,2);
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dff7ea FUN_147dff7ea body=168 status=ok
// SIG undefined FUN_147dff7ea(void)

undefined8 * FUN_147dff7ea(undefined8 *param_1)

{
  void *_Src;
  undefined8 *puVar1;
  undefined1 auStack_58 [40];
  void *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0);
  FUN_140056680(&local_30,*param_1);
  _Src = local_30;
  *puVar1 = 0;
  *(int *)(puVar1 + 1) = local_28;
  if ((longlong)local_28 == 0) {
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(puVar1,local_28,0);
    memcpy((void *)*puVar1,_Src,(longlong)local_28 * 2);
  }
  if (local_30 != (void *)0x0) {
    FUN_1400020a8(local_30);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dff8b0 FUN_147dff8b0 body=507 status=ok
// SIG undefined FUN_147dff8b0(void)

undefined8 * FUN_147dff8b0(longlong param_1,undefined8 *param_2,int *param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  int *piVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_d8 [36];
  int local_b4;
  longlong *local_b0;
  undefined4 local_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  uint local_98;
  int iStack_94;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  uint local_78;
  int iStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar1 = (longlong *)(param_1 + 0x70);
  uVar2 = param_1 + 0x80;
  local_88 = 0x100000000;
  local_78 = 0xffffffff;
  iStack_74 = 0;
  uStack_70 = 0;
  uStack_80 = uVar2;
  if (*(int *)(param_1 + 0x98) == 0) {
    iVar9 = 0;
  }
  else {
    FUN_1449c0562(&local_88);
    iVar9 = *(int *)(param_1 + 0x98);
  }
  uStack_90 = CONCAT44(uStack_6c,uStack_70);
  local_98 = local_78;
  iStack_94 = iStack_74;
  local_a8 = (undefined4)local_88;
  uStack_a4 = local_88._4_4_;
  uStack_a0 = (int)uStack_80;
  uStack_9c = uStack_80._4_4_;
  iVar6 = iVar9;
  local_b0 = plVar1;
  if ((iStack_74 != iVar9) || (uStack_80 != uVar2)) {
    do {
      local_b4 = iVar6;
      local_88 = 0;
      uStack_80 = 0;
      puVar3 = *(undefined8 **)(*local_b0 + 0x10 + (longlong)iStack_94 * 0x28);
      (**(code **)*puVar3)(puVar3,&local_88);
      lVar4 = local_88;
      lVar8 = (longlong)(int)uStack_80;
      bVar5 = true;
      if (lVar8 != 0) {
        lVar10 = 0;
        do {
          piVar7 = (int *)(**(code **)(**(longlong **)(lVar4 + lVar10) + 0x28))();
          iVar9 = local_b4;
          if ((((*piVar7 == *param_3) && (piVar7[1] == param_3[1])) && (piVar7[2] == param_3[2])) &&
             (piVar7[3] == param_3[3])) {
            *param_2 = *(undefined8 *)(lVar4 + lVar10);
            lVar4 = *(longlong *)(lVar4 + 8 + lVar10);
            param_2[1] = lVar4;
            if (lVar4 != 0) {
              LOCK();
              *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
              UNLOCK();
            }
            bVar5 = false;
            break;
          }
          lVar10 = lVar10 + 0x10;
        } while (lVar8 * 0x10 != lVar10);
      }
      FUN_147e04ffb(local_88,uStack_80 & 0xffffffff);
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      if (!bVar5) goto LAB_147dff95f;
      local_98 = local_98 & ~uStack_a4;
      FUN_1449c0562(&local_a8);
      iVar6 = local_b4;
    } while ((CONCAT44(uStack_9c,uStack_a0) != uVar2 || iStack_94 != iVar9) || local_b0 != plVar1);
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_147dff95f:
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147dffaac FUN_147dffaac body=67 status=ok
// SIG undefined FUN_147dffaac(void)

void FUN_147dffaac(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  uVar1 = (**(code **)(*(longlong *)*param_3 + 0x48))();
  FUN_147e06d02(param_1 + 0x18,uVar1);
                    /* WARNING: Could not recover jumptable at 0x000147dffae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return;
}



// FUNCTION 147dffaf0 FUN_147dffaf0 body=109 status=ok
// SIG undefined FUN_147dffaf0(void)

void FUN_147dffaf0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  local_28 = (**(code **)(*(longlong *)*param_3 + 0x48))();
  FUN_147e06d9c(param_1 + 0x18);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000147dffb51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dffb6c FUN_147dffb6c body=197 status=ok
// SIG undefined FUN_147dffb6c(void)

void FUN_147dffb6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 local_58;
  longlong *plStack_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_40 = 0x2bca2875f4373fff;
  local_48 = 0;
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  uVar4 = FUN_1464158ae();
  local_78 = &local_58;
  local_70 = param_3;
  local_68 = &local_48;
  local_60 = &local_40;
  FUN_147aaba9a(param_1,param_2,uVar4,0);
  plVar3 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_50)(plStack_50);
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
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dffc32 FUN_147dffc32 body=249 status=ok
// SIG undefined FUN_147dffc32(void)

undefined8 *
FUN_147dffc32(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4,
             undefined1 *param_5)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  void *_Src;
  undefined8 *puVar6;
  undefined1 auStack_88 [40];
  void *local_60;
  int local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar6 = (undefined8 *)FUN_14001cc68(0x38,0);
  uVar2 = *param_5;
  uVar1 = *param_4;
  FUN_140056680(&local_60,*param_2);
  _Src = local_60;
  *puVar6 = *param_1;
  puVar6[1] = 0;
  *(int *)(puVar6 + 2) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar6 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(puVar6 + 1,local_58,0);
    memcpy((void *)puVar6[1],_Src,(longlong)local_58 * 2);
  }
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *(undefined4 *)(puVar6 + 3) = *param_3;
  *(undefined4 *)((longlong)puVar6 + 0x1c) = uVar3;
  *(undefined4 *)(puVar6 + 4) = uVar4;
  *(undefined4 *)((longlong)puVar6 + 0x24) = uVar5;
  puVar6[5] = uVar1;
  *(undefined1 *)(puVar6 + 6) = uVar2;
  if (local_60 != (void *)0x0) {
    FUN_1400020a8(local_60);
  }
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return puVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147dffd2c FUN_147dffd2c body=905 status=ok
// SIG undefined FUN_147dffd2c(void)

void FUN_147dffd2c(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  longlong *plVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  DWORD DVar8;
  undefined1 *_Dst;
  undefined2 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  ushort uVar13;
  ulonglong uVar14;
  ushort uVar15;
  ulonglong uVar16;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  int iStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    _Dst = (undefined1 *)FUN_14001cc68(0x90);
    memset(_Dst,0,0x90);
    _Dst[0x88] = 1;
    if (DAT_14c8c3290 == 0) {
      local_50 = (void *)CONCAT44(local_50._4_4_,0x100);
      GetUserNameW(&DAT_14c8c3290,(LPDWORD)&local_50);
    }
    iVar1 = *(int *)(param_3 + 1);
    puVar9 = &DAT_149dfb77a;
    if (iVar1 != 0) {
      puVar9 = (undefined2 *)*param_3;
    }
    lVar12 = 0;
    while( true ) {
      uVar13 = *(ushort *)((longlong)&DAT_14c8c3290 + lVar12);
      uVar14 = (ulonglong)uVar13;
      uVar15 = *(ushort *)((longlong)puVar9 + lVar12);
      if (uVar13 != uVar15) {
        if ((uVar15 | uVar13) < 0x80) {
          uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
          uVar16 = (ulonglong)uVar15;
          uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
          if ((&DAT_149e05da0)[uVar14] == (&DAT_149e05da0)[uVar16]) goto LAB_147dffe0d;
        }
        uVar7 = 1;
        if (uVar13 == uVar15) goto LAB_147dffea2;
        if (DAT_14c867008 != iVar1) {
          if (DAT_14c867008 + iVar1 == 1) goto LAB_147dffea2;
          goto LAB_147e000a2;
        }
        if (iVar1 < 2) goto LAB_147dffea2;
        lVar12 = 0;
        goto LAB_147dffe5b;
      }
      if (uVar13 == 0) break;
LAB_147dffe0d:
      lVar12 = lVar12 + 2;
    }
    uVar7 = 1;
LAB_147dffea2:
    *_Dst = uVar7;
    FUN_145a16b9e(&local_50);
    *(DWORD *)(_Dst + 8) = (DWORD)local_50;
    *(undefined4 *)(_Dst + 0xc) = local_50._4_4_;
    *(int *)(_Dst + 0x10) = iStack_48;
    *(undefined4 *)(_Dst + 0x14) = uStack_44;
    uVar10 = FUN_1468306ee();
    FUN_14020fad6(_Dst + 0x18,uVar10);
    FUN_145bdec9c(&local_50);
    *(void **)(_Dst + 0x28) = local_50;
    *(ulonglong *)(_Dst + 0x30) = CONCAT44(uStack_44,iStack_48);
    DVar8 = GetCurrentProcessId();
    uVar10 = FUN_1468306ee();
    FUN_140002266(&local_50,L"%s-%i",uVar10,DVar8);
    if (*(longlong *)(_Dst + 0x38) != 0) {
      FUN_1400020a8();
    }
    *(void **)(_Dst + 0x38) = local_50;
    local_50 = (void *)0x0;
    *(int *)(_Dst + 0x40) = iStack_48;
    *(undefined4 *)(_Dst + 0x44) = uStack_44;
    FUN_1400b22c2(&local_50,"Windows");
    if (*(longlong *)(_Dst + 0x48) != 0) {
      FUN_1400020a8();
    }
    *(void **)(_Dst + 0x48) = local_50;
    *(int *)(_Dst + 0x50) = iStack_48;
    *(undefined4 *)(_Dst + 0x54) = uStack_44;
    iStack_48 = DAT_14c867038;
    pvVar3 = DAT_14c867030;
    uVar6 = DAT_14c86702c;
    uVar5 = DAT_14c867028;
    uVar4 = DAT_14c867024;
    lVar12 = (longlong)DAT_14c867038;
    *(undefined4 *)(_Dst + 0x58) = DAT_14c867020;
    *(undefined4 *)(_Dst + 0x5c) = uVar4;
    *(undefined4 *)(_Dst + 0x60) = uVar5;
    *(undefined4 *)(_Dst + 100) = uVar6;
    local_50 = (void *)0x0;
    if (lVar12 == 0) {
      uStack_44 = 0;
    }
    else {
      FUN_1446dd670(&local_50,iStack_48,0);
      memcpy(local_50,pvVar3,lVar12 * 2);
    }
    if (*(longlong *)(_Dst + 0x68) != 0) {
      FUN_1400020a8();
    }
    *(void **)(_Dst + 0x68) = local_50;
    *(int *)(_Dst + 0x70) = iStack_48;
    *(undefined4 *)(_Dst + 0x74) = uStack_44;
    pvVar3 = DAT_14c867000;
    lVar12 = (longlong)DAT_14c867008;
    local_50 = (void *)0x0;
    iStack_48 = DAT_14c867008;
    if (lVar12 == 0) {
      uStack_44 = 0;
    }
    else {
      FUN_1446dd670(&local_50,DAT_14c867008,0);
      memcpy(local_50,pvVar3,lVar12 * 2);
    }
    if (*(longlong *)(_Dst + 0x78) != 0) {
      FUN_1400020a8();
    }
    *(void **)(_Dst + 0x78) = local_50;
    local_50 = (void *)0x0;
    *(int *)(_Dst + 0x80) = iStack_48;
    *(undefined4 *)(_Dst + 0x84) = uStack_44;
    plVar2 = (longlong *)*param_2;
    uVar10 = *(undefined8 *)(param_1 + 0x60);
    _Dst[0x88] = DAT_14c759098;
    uVar11 = (**(code **)(*plVar2 + 0x48))();
    FUN_147e000b6(uVar10,_Dst,uVar11);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_147dffe5b:
  uVar13 = *(ushort *)((longlong)DAT_14c867000 + lVar12);
  uVar14 = (ulonglong)uVar13;
  uVar15 = *(ushort *)((longlong)*param_3 + lVar12);
  if (uVar13 != uVar15) {
    if ((uVar15 | uVar13) < 0x80) {
      uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
      uVar16 = (ulonglong)uVar15;
      uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
      if ((&DAT_149e05da0)[uVar14] == (&DAT_149e05da0)[uVar16]) goto LAB_147dffe70;
    }
    if (uVar13 != uVar15) {
LAB_147e000a2:
      uVar7 = FUN_144a23846(&DAT_14c867010,param_3);
    }
    goto LAB_147dffea2;
  }
  if (uVar13 == 0) goto LAB_147dffea2;
LAB_147dffe70:
  lVar12 = lVar12 + 2;
  goto LAB_147dffe5b;
}



// FUNCTION 147e000b6 FUN_147e000b6 body=352 status=ok
// SIG undefined FUN_147e000b6(void)

void FUN_147e000b6(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined4 *_Src;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  void **local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  longlong *plStack_70;
  undefined4 *local_68;
  ulonglong uStack_60;
  void *local_50;
  int local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_38 = 0x2bca2875f4373fff;
  local_40 = 0;
  local_68 = (undefined4 *)0x0;
  uStack_60 = 1;
  FUN_14706f770(&local_68,0);
  _Src = local_68;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *local_68 = *param_3;
  local_68[1] = uVar3;
  local_68[2] = uVar4;
  local_68[3] = uVar5;
  local_50 = (void *)0x0;
  lVar8 = (longlong)(int)uStack_60;
  local_48 = (int)uStack_60;
  if (lVar8 == 0) {
    local_44 = 0;
  }
  else {
    FUN_14707042c(&local_50,uStack_60 & 0xffffffff,0);
    memcpy(local_50,_Src,lVar8 << 4);
  }
  local_78 = 0;
  plStack_70 = (longlong *)0x0;
  uVar7 = FUN_14641581c();
  local_80 = &local_38;
  local_88 = &local_40;
  local_90 = &local_50;
  local_98 = &local_78;
  FUN_147aaba9a(param_1,param_2,uVar7,0);
  plVar6 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e00218 FUN_147e00218 body=720 status=ok
// SIG undefined FUN_147e00218(void)

undefined8 * FUN_147e00218(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_e8 [40];
  undefined8 *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *param_1 = &PTR_FUN_14ab3c200;
  param_1[1] = *param_2;
  lVar2 = param_2[1];
  param_1[2] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[9] = 2;
  InitializeSRWLock((PSRWLOCK)(param_1 + 10));
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  FUN_1446ddc76(&local_b0,"FTraceController",1);
  local_a8 = *param_2;
  local_a0 = param_2[1];
  if (local_a0 != 0) {
    LOCK();
    *(int *)(local_a0 + 0xc) = *(int *)(local_a0 + 0xc) + 1;
    UNLOCK();
  }
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_6c = local_b0;
  plVar5 = (longlong *)FUN_144a7672a();
  local_64 = (**(code **)(*plVar5 + 0x10))(plVar5,0);
  FUN_147e004ea(&local_a8,param_1);
  FUN_147e007b8(&local_a8,param_1);
  FUN_147e008fe(&local_a8,param_1);
  FUN_147e00b9a(&local_a8,param_1);
  FUN_147e00e7a(&local_a8,param_1);
  local_c0 = (undefined8 *)0x0;
  local_b8 = 0;
  FUN_1446efa72(&local_c0,0,3,0x10);
  puVar4 = local_c0;
  local_b8 = 3;
  *local_c0 = &PTR_LAB_14ab3cdc0;
  uVar6 = FUN_144a3f946();
  puVar4[2] = uVar6;
  *puVar4 = &PTR_FUN_14ab3cd50;
  puVar4[3] = param_1;
  puVar4[4] = FUN_147e01100;
  FUN_144a450dc(&local_90,&local_c0);
  FUN_1458bfc2e(&local_a8,&local_60);
  plVar5 = local_58;
  if (param_1 + 3 != &local_60) {
    param_1[3] = local_60;
    local_60 = 0;
    plVar3 = (longlong *)param_1[4];
    if (local_58 != plVar3) {
      local_58 = (longlong *)0x0;
      param_1[4] = plVar5;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar3 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
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
    }
  }
  plVar5 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_58 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  FUN_1449db362(&local_c0);
  FUN_1458bf708(&local_a8);
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e004ea FUN_147e004ea body=154 status=ok
// SIG undefined FUN_147e004ea(void)

longlong FUN_147e004ea(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)FUN_14494321d(0x18);
  *puVar3 = &PTR_FUN_14ab3cc58;
  puVar3[1] = param_2;
  puVar3[2] = FUN_147e00584;
  puVar4 = (undefined8 *)FUN_14494321d(0x18);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_14ab3cc70;
  puVar4[2] = puVar3;
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_1458bf82a(param_1 + 0x28,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(undefined8 **)(lVar2 + (longlong)iVar1 * 0x10) = puVar3;
  *(undefined8 **)(lVar2 + 8 + (longlong)iVar1 * 0x10) = puVar4;
  return param_1;
}



// FUNCTION 147e00584 FUN_147e00584 body=562 status=ok
// SIG undefined FUN_147e00584(void)

void FUN_147e00584(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  bool bVar14;
  undefined1 auStack_228 [40];
  longlong local_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  longlong local_1e0;
  longlong *local_1d8;
  undefined8 local_1d0;
  longlong *local_1c8;
  int local_1bc;
  longlong local_1b8;
  undefined8 local_1b0;
  undefined1 local_c0 [120];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_228;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x50));
  plVar4 = *(longlong **)(param_1 + 0x10);
  if (plVar4 == (longlong *)0x0) goto LAB_147e005fe;
  iVar10 = (int)plVar4[1];
  do {
    if (iVar10 == 0) goto LAB_147e005fe;
    LOCK();
    iVar8 = (int)plVar4[1];
    bVar14 = iVar10 == iVar8;
    if (bVar14) {
      *(int *)(plVar4 + 1) = iVar10 + 1;
      iVar8 = iVar10;
    }
    iVar10 = iVar8;
    UNLOCK();
  } while (!bVar14);
  lVar5 = *(longlong *)(param_1 + 8);
  if (lVar5 != 0) {
    plVar2 = (longlong *)(param_1 + 0x58);
    uVar11 = (**(code **)(*(longlong *)*param_3 + 0x48))();
    uVar9 = FUN_1448eb174(uVar11,0x10,0);
    iVar10 = FUN_147e08354(plVar2,uVar9,uVar11);
    if (iVar10 == -1) {
LAB_147e0067f:
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      local_1e0 = lVar5;
      local_1d8 = plVar4;
      puVar12 = (undefined4 *)(**(code **)(*(longlong *)*param_3 + 0x48))();
      local_1f8 = *puVar12;
      uStack_1f4 = puVar12[1];
      uStack_1f0 = puVar12[2];
      uStack_1ec = puVar12[3];
      FUN_147e01bae(&local_1b8,&local_1e0);
      local_1d0 = (**(code **)(*(longlong *)*param_3 + 0x48))();
      local_1c8 = &local_1b8;
      FUN_147e083ce(plVar2,&local_1bc);
      local_200 = *plVar2;
      FUN_147e023de(local_c0);
      FUN_147e04146(&local_1b8);
      plVar2 = local_1d8;
      if (local_1d8 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_1d8 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_1d8)(local_1d8);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
      lVar5 = local_200 + (longlong)local_1bc * 0x188;
      local_1b0 = (**(code **)(*(longlong *)*param_3 + 0x48))();
      local_1b8 = param_2 + 0x78;
      FUN_147e07ff8(param_1 + 0xa8,&local_1d0);
    }
    else {
      if (*plVar2 + (longlong)iVar10 * 0x188 == 0) goto LAB_147e0067f;
      lVar5 = *plVar2 + (longlong)iVar10 * 0x188;
    }
    puVar13 = (undefined8 *)(lVar5 + 0x10);
    FUN_147e01c88(param_2,puVar13);
    uVar11 = *(undefined8 *)(param_2 + 0x70);
    *puVar13 = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(lVar5 + 0x18) = uVar11;
    uVar9 = *(undefined4 *)(param_2 + 0x7c);
    uVar6 = *(undefined4 *)(param_2 + 0x80);
    uVar7 = *(undefined4 *)(param_2 + 0x84);
    *(undefined4 *)(lVar5 + 0x20) = *(undefined4 *)(param_2 + 0x78);
    *(undefined4 *)(lVar5 + 0x24) = uVar9;
    *(undefined4 *)(lVar5 + 0x28) = uVar6;
    *(undefined4 *)(lVar5 + 0x2c) = uVar7;
    FUN_147e08c5a(param_1 + 0x38,puVar13,0xd,lVar5 + 0x108);
  }
  LOCK();
  plVar2 = plVar4 + 1;
  *(int *)plVar2 = (int)*plVar2 + -1;
  UNLOCK();
  if ((int)*plVar2 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
LAB_147e005fe:
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x50));
  if ((local_48 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e007b8 FUN_147e007b8 body=154 status=ok
// SIG undefined FUN_147e007b8(void)

longlong FUN_147e007b8(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)FUN_14494321d(0x18);
  *puVar3 = &PTR_FUN_14ab3cc88;
  puVar3[1] = param_2;
  puVar3[2] = FUN_147e00852;
  puVar4 = (undefined8 *)FUN_14494321d(0x18);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_14ab3cca0;
  puVar4[2] = puVar3;
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_1458bf82a(param_1 + 0x28,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(undefined8 **)(lVar2 + (longlong)iVar1 * 0x10) = puVar3;
  *(undefined8 **)(lVar2 + 8 + (longlong)iVar1 * 0x10) = puVar4;
  return param_1;
}



// FUNCTION 147e00852 FUN_147e00852 body=171 status=ok
// SIG undefined FUN_147e00852(void)

void FUN_147e00852(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x50));
  uVar3 = (**(code **)(*(longlong *)*param_3 + 0x48))();
  uVar1 = FUN_1448eb174(uVar3,0x10,0);
  iVar2 = FUN_147e08354((longlong *)(param_1 + 0x58),uVar1,uVar3);
  if (iVar2 != -1) {
    lVar5 = (longlong)iVar2 * 0x188 + *(longlong *)(param_1 + 0x58);
    lVar4 = lVar5 + 0x10;
    if (lVar4 != 0 && lVar5 != 0) {
      FUN_147e01c88(param_2,lVar4);
      FUN_147e08c5a(param_1 + 0x38,lVar4,1,lVar5 + 0x108);
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x50));
  return;
}



// FUNCTION 147e008fe FUN_147e008fe body=154 status=ok
// SIG undefined FUN_147e008fe(void)

longlong FUN_147e008fe(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)FUN_14494321d(0x18);
  *puVar3 = &PTR_FUN_14ab3ccb8;
  puVar3[1] = param_2;
  puVar3[2] = FUN_147e00998;
  puVar4 = (undefined8 *)FUN_14494321d(0x18);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_14ab3ccd0;
  puVar4[2] = puVar3;
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_1458bf82a(param_1 + 0x28,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(undefined8 **)(lVar2 + (longlong)iVar1 * 0x10) = puVar3;
  *(undefined8 **)(lVar2 + 8 + (longlong)iVar1 * 0x10) = puVar4;
  return param_1;
}



// FUNCTION 147e00998 FUN_147e00998 body=513 status=ok
// SIG undefined FUN_147e00998(void)

/* WARNING: Removing unreachable block (ram,0x000147e00b57) */
/* WARNING: Removing unreachable block (ram,0x000147e00b66) */

void FUN_147e00998(longlong param_1,undefined1 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x50));
  uVar7 = (**(code **)(*(longlong *)*param_3 + 0x48))();
  uVar5 = FUN_1448eb174(uVar7,0x10,0);
  iVar6 = FUN_147e08354((longlong *)(param_1 + 0x58),uVar5,uVar7);
  if (iVar6 != -1) {
    lVar8 = (longlong)iVar6 * 0x188 + *(longlong *)(param_1 + 0x58);
    if (lVar8 + 0x10 != 0 && lVar8 != 0) {
      *(undefined1 *)(lVar8 + 0x69) = param_2[1];
      *(undefined1 *)(lVar8 + 0x68) = *param_2;
      *(undefined4 *)(lVar8 + 0x6c) = *(undefined4 *)(param_2 + 4);
      local_78 = (longlong *)(lVar8 + 0x70);
      FUN_147e04333(*(undefined8 *)(lVar8 + 0x70),*(undefined4 *)(lVar8 + 0x78));
      *(undefined4 *)(lVar8 + 0x78) = 0;
      if (*(int *)(lVar8 + 0x7c) != 0) {
        FUN_147e091f6(local_78);
      }
      if ((longlong)*(int *)(param_2 + 0x10) != 0) {
        lVar11 = (longlong)*(int *)(param_2 + 0x10) * 0x28;
        lVar10 = *(longlong *)(param_2 + 8) + 0x10;
        uVar7 = local_70;
        uVar2 = local_68;
        uVar3 = local_60;
        uVar4 = local_58;
        do {
          local_58 = uVar4;
          local_60 = uVar3;
          local_68 = uVar2;
          local_70 = uVar7;
          FUN_147e01e24(&local_70,lVar10 + -0x10,lVar10,*(undefined1 *)(lVar10 + 0x10));
          iVar6 = *(int *)(lVar8 + 0x78);
          lVar9 = (longlong)iVar6;
          *(uint *)(lVar8 + 0x78) = iVar6 + 1U;
          if (*(uint *)(lVar8 + 0x7c) < iVar6 + 1U) {
            FUN_147e09226(local_78,iVar6);
          }
          lVar1 = *local_78;
          *(undefined8 *)(lVar1 + lVar9 * 0x28) = 0;
          *(undefined8 *)(lVar1 + lVar9 * 0x28) = local_70;
          *(undefined4 *)(lVar1 + 8 + lVar9 * 0x28) = (undefined4)local_68;
          *(undefined4 *)(lVar1 + 0xc + lVar9 * 0x28) = local_68._4_4_;
          *(undefined8 *)(lVar1 + 0x10 + lVar9 * 0x28) = 0;
          *(undefined8 *)(lVar1 + 0x10 + lVar9 * 0x28) = local_60;
          *(undefined4 *)(lVar1 + 0x18 + lVar9 * 0x28) = (undefined4)local_58;
          *(undefined4 *)(lVar1 + 0x1c + lVar9 * 0x28) = local_58._4_4_;
          *(undefined1 *)(lVar1 + 0x20 + lVar9 * 0x28) = local_50;
          local_58 = 0;
          uVar4 = local_58;
          local_60 = 0;
          uVar3 = local_60;
          local_68 = 0;
          uVar2 = local_68;
          local_70 = 0;
          uVar7 = local_70;
          local_58 = 0;
          local_60 = 0;
          local_68 = 0;
          local_70 = 0;
          lVar10 = lVar10 + 0x28;
          lVar11 = lVar11 + -0x28;
        } while (lVar11 != 0);
      }
      FUN_147e08c5a(param_1 + 0x38,lVar8 + 0x10,2,lVar8 + 0x108);
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x50));
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e00b9a FUN_147e00b9a body=154 status=ok
// SIG undefined FUN_147e00b9a(void)

longlong FUN_147e00b9a(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)FUN_14494321d(0x18);
  *puVar3 = &PTR_FUN_14ab3cce8;
  puVar3[1] = param_2;
  puVar3[2] = FUN_147e00c34;
  puVar4 = (undefined8 *)FUN_14494321d(0x18);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_14ab3cd00;
  puVar4[2] = puVar3;
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_1458bf82a(param_1 + 0x28,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(undefined8 **)(lVar2 + (longlong)iVar1 * 0x10) = puVar3;
  *(undefined8 **)(lVar2 + 8 + (longlong)iVar1 * 0x10) = puVar4;
  return param_1;
}



// FUNCTION 147e00c34 FUN_147e00c34 body=581 status=ok
// SIG undefined FUN_147e00c34(void)

void FUN_147e00c34(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  PSRWLOCK SRWLock;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_b8 [40];
  longlong local_90;
  longlong local_88;
  PSRWLOCK local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  uint local_5c;
  uint *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  SRWLock = (PSRWLOCK)(param_1 + 0x50);
  AcquireSRWLockExclusive(SRWLock);
  local_88 = param_1;
  uVar5 = (**(code **)(*(longlong *)*param_3 + 0x48))();
  uVar3 = FUN_1448eb174(uVar5,0x10,0);
  iVar4 = FUN_147e08354((longlong *)(param_1 + 0x58),uVar3,uVar5);
  if (iVar4 != -1) {
    lVar10 = (longlong)iVar4 * 0x188 + *(longlong *)(param_1 + 0x58);
    if (lVar10 + 0x10 != 0 && lVar10 != 0) {
      lVar8 = (longlong)(int)param_2[1];
      local_80 = SRWLock;
      if (0 < lVar8) {
        plVar1 = (longlong *)(lVar10 + 0x80);
        lVar7 = lVar10 + 0xb8;
        local_88 = local_88 + 0x38;
        local_78 = lVar10 + 0x108;
        lVar9 = 0;
        local_90 = lVar10 + 0x10;
        local_70 = lVar7;
        local_68 = lVar8;
        do {
          local_5c = *(uint *)(param_2[2] + lVar9 * 4);
          if (*(int *)(lVar10 + 0x88) != *(int *)(lVar10 + 0xb4)) {
            lVar6 = *(longlong *)(lVar10 + 0xc0);
            if (*(longlong *)(lVar10 + 0xc0) == 0) {
              lVar6 = lVar7;
            }
            iVar4 = *(int *)(lVar6 + (ulonglong)(*(int *)(lVar10 + 200) - 1U & local_5c) * 4);
            if (iVar4 != -1) {
              do {
                if (*(uint *)(*plVar1 + (longlong)iVar4 * 0x38) == local_5c) goto LAB_147e00e25;
                iVar4 = *(int *)((longlong)iVar4 * 0x38 + *plVar1 + 0x30);
              } while (iVar4 != -1);
            }
          }
          local_58 = &local_5c;
          FUN_147e08d1c(plVar1,&local_4c);
          lVar6 = (longlong)local_4c;
          lVar7 = *plVar1;
          lVar8 = lVar7 + lVar6 * 0x38;
          FUN_144a787a6(lVar8 + 8,*param_2 + lVar9 * 0x10);
          lVar7 = lVar7 + lVar6 * 0x38;
          FUN_144a787a6(lVar7 + 0x18,lVar9 * 0x10 + param_2[4]);
          *(uint *)(lVar7 + 0x28) = local_5c;
          *(undefined1 *)(lVar7 + 0x2c) = 0;
          if ((longlong)(int)param_2[7] == 0) {
            uVar2 = 0;
          }
          else {
            lVar7 = 0;
            do {
              if (*(uint *)(param_2[6] + lVar7) == local_5c) {
                uVar2 = 1;
                goto LAB_147e00e03;
              }
              lVar7 = lVar7 + 4;
            } while ((longlong)(int)param_2[7] * 4 != lVar7);
            uVar2 = 0;
          }
LAB_147e00e03:
          *(undefined1 *)(lVar8 + 0x2d) = uVar2;
          FUN_147e08c5a(local_88,local_90,4,local_78);
          lVar8 = local_68;
          lVar7 = local_70;
LAB_147e00e25:
          lVar9 = lVar9 + 1;
        } while (lVar9 != lVar8);
      }
      FUN_147e01d1a(lVar10 + 0x108,param_2);
      SRWLock = local_80;
    }
  }
  ReleaseSRWLockExclusive(SRWLock);
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e00e7a FUN_147e00e7a body=154 status=ok
// SIG undefined FUN_147e00e7a(void)

longlong FUN_147e00e7a(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)FUN_14494321d(0x18);
  *puVar3 = &PTR_FUN_14ab3cd18;
  puVar3[1] = param_2;
  puVar3[2] = FUN_147e00f14;
  puVar4 = (undefined8 *)FUN_14494321d(0x18);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_14ab3cd30;
  puVar4[2] = puVar3;
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_1458bf82a(param_1 + 0x28,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(undefined8 **)(lVar2 + (longlong)iVar1 * 0x10) = puVar3;
  *(undefined8 **)(lVar2 + 8 + (longlong)iVar1 * 0x10) = puVar4;
  return param_1;
}



// FUNCTION 147e00f14 FUN_147e00f14 body=490 status=ok
// SIG undefined FUN_147e00f14(void)

void FUN_147e00f14(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined1 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x50));
  uVar6 = (**(code **)(*(longlong *)*param_3 + 0x48))();
  uVar3 = FUN_1448eb174(uVar6,0x10,0);
  iVar4 = FUN_147e08354((longlong *)(param_1 + 0x58),uVar3,uVar6);
  if (iVar4 != -1) {
    lVar10 = (longlong)iVar4 * 0x188 + *(longlong *)(param_1 + 0x58);
    lVar9 = lVar10 + 0x10;
    if (lVar9 != 0 && lVar10 != 0) {
      plVar1 = (longlong *)(lVar10 + 0x80);
      lVar2 = lVar10 + 0x90;
      local_68 = 0x100000000;
      local_58 = 0xffffffff;
      local_50 = 0;
      iVar4 = 0;
      local_98 = lVar9;
      local_60 = lVar2;
      if (*(int *)(lVar10 + 0xa8) != 0) {
        FUN_1449c0562(&local_68);
        iVar4 = *(int *)(lVar10 + 0xa8);
      }
      local_78 = local_58;
      uVar6 = local_78;
      local_70 = local_50;
      local_6c = local_4c;
      local_88 = local_68;
      local_80 = local_60;
      local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
      iVar5 = local_78._4_4_;
      local_90 = plVar1;
      if ((local_78._4_4_ != iVar4) || (local_78 = uVar6, local_60 != lVar2)) {
        do {
          local_78 = uVar6;
          piVar7 = (int *)((longlong)iVar5 * 0x38 + *local_90);
          if ((longlong)(int)param_2[1] != 0) {
            lVar9 = 0;
            do {
              if (*(int *)(*param_2 + lVar9) == *piVar7) {
                uVar8 = 1;
                goto LAB_147e010a1;
              }
              lVar9 = lVar9 + 4;
            } while ((longlong)(int)param_2[1] * 4 != lVar9);
          }
          uVar8 = 0;
LAB_147e010a1:
          *(undefined1 *)(piVar7 + 0xb) = uVar8;
          local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
          FUN_1449c0562(&local_88);
          iVar5 = local_78._4_4_;
          uVar6 = local_78;
        } while (local_90 != plVar1 || (local_80 != lVar2 || local_78._4_4_ != iVar4));
      }
      FUN_147e08c5a(param_1 + 0x38,local_98,8,lVar10 + 0x108);
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x50));
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e01100 FUN_147e01100 body=669 status=ok
// SIG undefined FUN_147e01100(void)

void FUN_147e01100(longlong param_1,char *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_108 [32];
  longlong *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  longlong local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_9c [4];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (*param_2 == '\x01') {
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x50));
    iVar5 = FUN_147e07ac8(param_1 + 0x58,param_2 + 4);
    if (iVar5 != 0) {
      local_78 = 0;
      iVar5 = 0;
      local_70 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_6c = 0xffffffff00000080;
      local_64 = 0;
      local_58 = 0;
      local_50 = 0;
      uVar8 = *(int *)(param_1 + 0xb0) - *(int *)(param_1 + 0xdc);
      if (uVar8 != 0) {
        if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456acd4b((longlong)(int)uVar8);
        }
        FUN_147e07ca0(&local_98,uVar8);
        iVar6 = 1;
        if (3 < uVar8) {
          uVar8 = (uVar8 | 1) + 0xe;
          iVar6 = 0x1f;
          if (uVar8 != 0) {
            for (; uVar8 >> iVar6 == 0; iVar6 = iVar6 + -1) {
            }
          }
          iVar6 = 1 << ((byte)iVar6 & 0x1f);
        }
        if ((local_50 == 0) || (local_50 < iVar6)) {
          local_50 = iVar6;
          FUN_147e07e3c();
        }
      }
      plVar1 = (longlong *)(param_1 + 0xa8);
      lVar2 = param_1 + 0xb8;
      local_c0 = 0x100000000;
      local_b0 = 0xffffffff;
      local_a8 = 0;
      local_b8 = lVar2;
      if (*(int *)(param_1 + 0xd0) != 0) {
        FUN_1449c0562(&local_c0);
        iVar5 = *(int *)(param_1 + 0xd0);
      }
      local_d0 = local_b0;
      uVar4 = local_d0;
      local_c8 = local_a8;
      local_c4 = local_a4;
      local_e0 = local_c0;
      local_d8 = local_b8;
      local_d0._4_4_ = (int)((ulonglong)local_b0 >> 0x20);
      local_e8 = plVar1;
      if ((local_d0._4_4_ != iVar5) || (local_b8 != lVar2)) {
        iVar6 = local_d0._4_4_;
        local_d0 = uVar4;
        do {
          lVar3 = *local_e8;
          lVar7 = (longlong)iVar6;
          if ((((*(int *)(lVar3 + 0x10 + lVar7 * 0x28) != *(int *)(param_2 + 4)) ||
               (*(int *)(lVar3 + 0x14 + lVar7 * 0x28) != *(int *)(param_2 + 8))) ||
              (*(int *)(lVar3 + 0x18 + lVar7 * 0x28) != *(int *)(param_2 + 0xc))) ||
             (*(int *)(lVar3 + 0x1c + lVar7 * 0x28) != *(int *)(param_2 + 0x10))) {
            local_c0 = lVar3 + lVar7 * 0x28;
            local_b8 = lVar3 + lVar7 * 0x28 + 0x10;
            FUN_147e07ff8(&local_98,local_9c,&local_c0);
          }
          local_d0 = CONCAT44(local_d0._4_4_,(uint)local_d0 & ~local_e0._4_4_);
          FUN_1449c0562(&local_e0);
          iVar6 = local_d0._4_4_;
          uVar4 = local_d0;
        } while (local_e8 != plVar1 || (local_d8 != lVar2 || local_d0._4_4_ != iVar5));
      }
      local_d0 = uVar4;
      FUN_147e04056(plVar1,&local_98);
      local_50 = 0;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      FUN_147e03e12(&local_98);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x50));
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e013a0 FUN_147e013a0 body=200 status=ok
// SIG undefined FUN_147e013a0(void)

void FUN_147e013a0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ab3c200;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_147e03e12(param_1 + 0x15);
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_147e03ea0(param_1 + 0xb);
  FUN_144760e21(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[4];
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
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147e0145c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 147e01468 FUN_147e01468 body=60 status=ok
// SIG undefined FUN_147e01468(void)

void FUN_147e01468(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)FUN_14001cc68(0x20,0);
  uVar4 = param_2[1];
  *puVar5 = *param_2;
  puVar5[1] = uVar4;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)(puVar5 + 2) = *param_3;
  *(undefined4 *)((longlong)puVar5 + 0x14) = uVar1;
  *(undefined4 *)(puVar5 + 3) = uVar2;
  *(undefined4 *)((longlong)puVar5 + 0x1c) = uVar3;
  FUN_147e014a4(*(undefined8 *)(param_1 + 0x18),puVar5);
  return;
}



// FUNCTION 147e014a4 FUN_147e014a4 body=182 status=ok
// SIG undefined FUN_147e014a4(void)

void FUN_147e014a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_80 = 0x2bca2875f4373fff;
  local_88 = 0;
  uVar1 = FUN_145bdeadc();
  local_a8 = &local_78;
  local_58 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  uStack_50 = 0x8000000000;
  local_48 = 0xffffffff;
  local_a0 = &local_88;
  local_98 = &local_80;
  FUN_147e0609a(param_1,param_2,uVar1,2);
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e0155c FUN_147e0155c body=47 status=ok
// SIG undefined FUN_147e0155c(void)

void FUN_147e0155c(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x20,0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  FUN_147e014a4(*(undefined8 *)(param_1 + 0x18),puVar1);
  return;
}



// FUNCTION 147e0158c FUN_147e0158c body=37 status=ok
// SIG undefined FUN_147e0158c(void)

void FUN_147e0158c(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = FUN_14001cc68(1,0);
  FUN_147e015b2(uVar1,uVar2);
  return;
}



// FUNCTION 147e015b2 FUN_147e015b2 body=182 status=ok
// SIG undefined FUN_147e015b2(void)

void FUN_147e015b2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_80 = 0x2bca2875f4373fff;
  local_88 = 0;
  uVar1 = FUN_145bde9fc();
  local_a8 = &local_78;
  local_58 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  uStack_50 = 0x8000000000;
  local_48 = 0xffffffff;
  local_a0 = &local_88;
  local_98 = &local_80;
  FUN_147e0609a(param_1,param_2,uVar1,2);
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e0166a FUN_147e0166a body=347 status=ok
// SIG undefined FUN_147e0166a(void)

void FUN_147e0166a(longlong param_1)

{
  PSRWLOCK SRWLock;
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  PSRWLOCK local_98;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  SRWLock = (PSRWLOCK)(param_1 + 0x50);
  AcquireSRWLockShared(SRWLock);
  plVar1 = (longlong *)(param_1 + 0x58);
  lVar2 = param_1 + 0x68;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  local_98 = SRWLock;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x80) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar5 = *(int *)(param_1 + 0x80);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar5) || (uStack_60 != lVar2)) {
    do {
      lVar3 = *local_90;
      lVar6 = (longlong)iStack_74 * 0x188;
      piVar4 = (int *)FUN_14001cc68(4,0);
      *piVar4 = 0;
      *piVar4 = *(int *)(lVar3 + 0x88 + lVar6) - *(int *)(lVar3 + 0xb4 + lVar6);
      FUN_147e017c6(*(undefined8 *)(param_1 + 0x18),piVar4,lVar6 + lVar3);
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar5));
  }
  ReleaseSRWLockShared(local_98);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e017c6 FUN_147e017c6 body=352 status=ok
// SIG undefined FUN_147e017c6(void)

void FUN_147e017c6(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined4 *_Src;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  void **local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  longlong *plStack_70;
  undefined4 *local_68;
  ulonglong uStack_60;
  void *local_50;
  int local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_38 = 0x2bca2875f4373fff;
  local_40 = 0;
  local_68 = (undefined4 *)0x0;
  uStack_60 = 1;
  FUN_14706f770(&local_68,0);
  _Src = local_68;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *local_68 = *param_3;
  local_68[1] = uVar3;
  local_68[2] = uVar4;
  local_68[3] = uVar5;
  local_50 = (void *)0x0;
  lVar8 = (longlong)(int)uStack_60;
  local_48 = (int)uStack_60;
  if (lVar8 == 0) {
    local_44 = 0;
  }
  else {
    FUN_14707042c(&local_50,uStack_60 & 0xffffffff,0);
    memcpy(local_50,_Src,lVar8 << 4);
  }
  local_78 = 0;
  plStack_70 = (longlong *)0x0;
  uVar7 = FUN_145bdea6c();
  local_80 = &local_38;
  local_88 = &local_40;
  local_90 = &local_50;
  local_98 = &local_78;
  FUN_147aaba9a(param_1,param_2,uVar7,0);
  plVar6 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e01928 FUN_147e01928 body=291 status=ok
// SIG undefined FUN_147e01928(void)

void FUN_147e01928(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x58);
  lVar2 = param_1 + 0x68;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x80) == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar7 = *(int *)(param_1 + 0x80);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar1;
  if ((iStack_4c != iVar7) || (uStack_58 != lVar2)) {
    do {
      lVar5 = (longlong)iStack_6c;
      lVar3 = *local_88;
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      uVar6 = FUN_14001cc68(1,0);
      FUN_147e01a4c(uVar4,uVar6,lVar5 * 0x188 + lVar3);
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar7));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e01a4c FUN_147e01a4c body=352 status=ok
// SIG undefined FUN_147e01a4c(void)

void FUN_147e01a4c(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined4 *_Src;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  void **local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  longlong *plStack_70;
  undefined4 *local_68;
  ulonglong uStack_60;
  void *local_50;
  int local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_38 = 0x2bca2875f4373fff;
  local_40 = 0;
  local_68 = (undefined4 *)0x0;
  uStack_60 = 1;
  FUN_14706f770(&local_68,0);
  _Src = local_68;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *local_68 = *param_3;
  local_68[1] = uVar3;
  local_68[2] = uVar4;
  local_68[3] = uVar5;
  local_50 = (void *)0x0;
  lVar8 = (longlong)(int)uStack_60;
  local_48 = (int)uStack_60;
  if (lVar8 == 0) {
    local_44 = 0;
  }
  else {
    FUN_14707042c(&local_50,uStack_60 & 0xffffffff,0);
    memcpy(local_50,_Src,lVar8 << 4);
  }
  local_78 = 0;
  plStack_70 = (longlong *)0x0;
  uVar7 = FUN_145bdea34();
  local_80 = &local_38;
  local_88 = &local_40;
  local_90 = &local_50;
  local_98 = &local_78;
  FUN_147aaba9a(param_1,param_2,uVar7,0);
  plVar6 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e01bae FUN_147e01bae body=216 status=ok
// SIG undefined FUN_147e01bae(void)

void * FUN_147e01bae(void *param_1,undefined8 *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  memset(param_1,0,0xf8);
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0;
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  local_48 = *param_2;
  plVar3 = (longlong *)param_2[1];
  local_40 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    FUN_147e02022((longlong)param_1 + 0xf8,&local_48,&local_38);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    FUN_147e02022((longlong)param_1 + 0xf8,&local_48,&local_38);
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e01c88 FUN_147e01c88 body=145 status=ok
// SIG undefined FUN_147e01c88(void)

void FUN_147e01c88(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_2 + 0xf0) = *(undefined1 *)(param_1 + 0x60);
  *(undefined8 *)(param_2 + 0xe8) = *(undefined8 *)(param_1 + 0x58);
  *(undefined1 *)(param_2 + 0x20) = *(undefined1 *)(param_1 + 0x56);
  FUN_144a787a6(param_2 + 0x28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_2 + 0x40) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_2 + 0x50) = uVar1;
  *(undefined1 *)(param_2 + 0x21) = *(undefined1 *)(param_1 + 0x55);
  *(undefined1 *)(param_2 + 0x22) = *(undefined1 *)(param_1 + 0x54);
  *(undefined8 *)(param_2 + 0xc0) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_2 + 0xd0) = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_2 + 200) = *(undefined8 *)(param_1 + 0x38);
  *(undefined4 *)(param_2 + 0xd8) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(param_2 + 0xdc) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_2 + 0xe0) = *(undefined4 *)(param_1 + 0x50);
  return;
}



// FUNCTION 147e01d1a FUN_147e01d1a body=264 status=ok
// SIG undefined FUN_147e01d1a(void)

void FUN_147e01d1a(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  int local_60;
  undefined8 local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar1 = (int)param_2[1];
  if ((0 < (longlong)iVar1) && (iVar1 != *(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x5c))) {
    lVar3 = 0;
    do {
      local_4c = *(int *)(param_2[2] + lVar3 * 4);
      if ((longlong)(int)param_2[7] != 0) {
        lVar4 = 0;
        do {
          if (*(int *)(param_2[6] + lVar4) == local_4c) goto LAB_147e01def;
          lVar4 = lVar4 + 4;
        } while ((longlong)(int)param_2[7] * 4 != lVar4);
      }
      local_68 = *(undefined8 *)(*param_2 + lVar3 * 0x10);
      iVar2 = *(int *)(*param_2 + 8 + lVar3 * 0x10);
      local_60 = iVar2 + -1;
      if (iVar2 == 0) {
        local_60 = 0;
      }
      local_58 = FUN_147e022cc(&local_68);
      FUN_147e092ba(param_1 + 0x28,(int)((ulonglong)local_58 >> 0x20) * 0x17 + (int)local_58,
                    &local_58,&local_4c);
LAB_147e01def:
      lVar3 = lVar3 + 1;
    } while (lVar3 != iVar1);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e01e24 FUN_147e01e24 body=169 status=ok
// SIG undefined FUN_147e01e24(void)

undefined8 *
FUN_147e01e24(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined1 param_4)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_3 + 1);
  pvVar2 = (void *)*param_3;
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 4) = param_4;
  return param_1;
}



// FUNCTION 147e01ece FUN_147e01ece body=58 status=ok
// SIG undefined FUN_147e01ece(void)

bool FUN_147e01ece(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_1447addd0(param_2,0x10);
  iVar2 = FUN_147e0826e(param_1 + 0xa8,uVar1,param_2);
  return iVar2 != -1;
}



// FUNCTION 147e01f08 FUN_147e01f08 body=282 status=ok
// SIG undefined FUN_147e01f08(void)

void FUN_147e01f08(longlong param_1,undefined8 param_2,longlong *param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x50));
  uVar2 = FUN_1447addd0(param_2,0x10);
  iVar3 = FUN_147e0826e((longlong *)(param_1 + 0xa8),uVar2,param_2);
  if ((iVar3 != -1) &&
     (lVar7 = *(longlong *)(param_1 + 0xa8) + (longlong)iVar3 * 0x28, lVar6 = lVar7 + 0x10,
     lVar6 != 0 && lVar7 != 0)) {
    uVar2 = FUN_1448eb174(lVar6,0x10,0);
    iVar3 = FUN_147e08354((longlong *)(param_1 + 0x58),uVar2,lVar6);
    if (iVar3 != -1) {
      lVar7 = (longlong)iVar3 * 0x188 + *(longlong *)(param_1 + 0x58);
      if (lVar7 + 0x10 != 0 && lVar7 != 0) {
        pcVar1 = (code *)*param_3;
        plVar5 = param_3 + 4;
        if ((longlong *)param_3[2] != (longlong *)0x0) {
          plVar5 = (longlong *)param_3[2];
        }
        uVar4 = (**(code **)(*plVar5 + 8))();
        (*pcVar1)(uVar4,lVar7 + 0x10,lVar7 + 0x108);
      }
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x50));
  if (*param_3 != 0) {
    plVar5 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar5 = (longlong *)param_3[2];
    }
                    /* WARNING: Could not recover jumptable at 0x000147e01f9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x10))(plVar5);
    return;
  }
  return;
}



// FUNCTION 147e02022 FUN_147e02022 body=681 status=ok
// SIG undefined FUN_147e02022(void)

undefined8 * FUN_147e02022(undefined8 *param_1,longlong *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  undefined1 auStack_1d8 [40];
  undefined8 local_1b0;
  longlong local_1a8;
  longlong *plStack_1a0;
  undefined1 local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined1 local_170;
  undefined8 local_16c;
  undefined4 local_164;
  undefined8 local_160;
  longlong *local_158;
  wchar_t *local_150;
  wchar_t *local_148;
  ulonglong *local_140;
  undefined1 local_138;
  wchar_t local_130 [128];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  *param_1 = &PTR_FUN_14ab3c260;
  uVar5 = param_3[1];
  param_1[1] = *param_3;
  param_1[2] = uVar5;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  local_150 = local_130;
  local_138 = 0;
  local_140 = &local_30;
  builtin_wcsncpy(local_130,L"FTraceControllerCommands_",0x19);
  local_148 = local_130 + 0x19;
  local_1a8 = 0;
  plStack_1a0 = (longlong *)0x0;
  FUN_1407c869a(param_3,&local_1a8,0);
  iVar7 = (int)plStack_1a0 + -1;
  if ((int)plStack_1a0 == 0) {
    iVar7 = 0;
  }
  FUN_1449668a2(&local_150,local_1a8,iVar7);
  if (local_1a8 != 0) {
    FUN_1400020a8();
  }
  lVar2 = *param_2;
  plVar3 = (longlong *)param_2[1];
  if (plVar3 == (longlong *)0x0) {
    *local_148 = L'\0';
    FUN_1446f470e(&local_1b0,local_150,1);
    plStack_1a0 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *local_148 = L'\0';
    FUN_1446f470e(&local_1b0,local_150,1);
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    plStack_1a0 = plVar3;
  }
  local_198 = 0;
  local_190 = 0;
  local_188 = 0;
  local_180 = 0;
  uStack_178 = 0;
  local_170 = 0;
  local_16c = local_1b0;
  local_1a8 = lVar2;
  plVar6 = (longlong *)FUN_144a7672a();
  local_164 = (**(code **)(*plVar6 + 0x10))(plVar6,0);
  FUN_1458bfc2e(&local_1a8,&local_160);
  plVar6 = local_158;
  if (param_1 + 3 != &local_160) {
    param_1[3] = local_160;
    local_160 = 0;
    plVar4 = (longlong *)param_1[4];
    if (local_158 != plVar4) {
      local_158 = (longlong *)0x0;
      param_1[4] = plVar6;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar4 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
    }
  }
  plVar6 = local_158;
  if (local_158 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_158 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_158)(local_158);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  FUN_1458bf708(&local_1a8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar3 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  FUN_144724f3c(&local_150);
  if ((local_30 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e022cc FUN_147e022cc body=273 status=ok
// SIG undefined FUN_147e022cc(void)

undefined8 FUN_147e022cc(longlong *param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_b8 [40];
  ushort *local_90;
  ushort *local_88;
  ulonglong *local_80;
  undefined1 local_78;
  ushort local_70 [48];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_90 = local_70;
  local_78 = 0;
  local_80 = &local_10;
  uVar4 = (ulonglong)(int)param_1[1];
  if (0 < (longlong)uVar4) {
    uVar4 = (ulonglong)((int)param_1[1] - (uint)(*(short *)(*param_1 + -2 + uVar4 * 2) == 0x73));
  }
  local_88 = local_90;
  FUN_1449668a2(&local_90,*param_1,uVar4);
  lVar3 = ((longlong)local_88 - (longlong)local_90) * 0x80000000;
  uVar1 = *local_90;
  if ((uVar1 != 0) && (((longlong)local_88 - (longlong)local_90 & 0x1ffffffffU) >> 1 != 0)) {
    lVar5 = 1;
    do {
      local_90[lVar5 + -1] = (uVar1 + (ushort)(0x19 < uVar1 - 0x61) * 0x20) - 0x20;
      uVar1 = local_90[lVar5];
      if (uVar1 == 0) break;
      bVar6 = lVar3 >> 0x20 != lVar5;
      lVar5 = lVar5 + 1;
    } while (bVar6);
    lVar3 = ((longlong)local_88 - (longlong)local_90) * 0x80000000;
  }
  uVar2 = FUN_145ec3afa(local_90,lVar3 >> 0x1f & 0xfffffffffffffffe);
  FUN_144724f3c(&local_90);
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e023de FUN_147e023de body=105 status=ok
// SIG undefined FUN_147e023de(void)

void FUN_147e023de(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ab3c260;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_14707ed72(param_1 + 5);
  plVar3 = (longlong *)param_1[4];
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
                    /* WARNING: Could not recover jumptable at 0x000147e0243b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147e02448 FUN_147e02448 body=178 status=ok
// SIG undefined FUN_147e02448(void)

void FUN_147e02448(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar2 = (undefined8 *)FUN_14001cc68(0x20,0);
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  FUN_147e024fb(&local_40,&local_58,param_1 + 0x28);
  *puVar2 = CONCAT44(uStack_3c,local_40);
  puVar2[1] = CONCAT44(uStack_34,uStack_38);
  local_68 = *param_3;
  uStack_64 = param_3[1];
  uStack_60 = param_3[2];
  uStack_5c = param_3[3];
  FUN_147e024fb(&local_40,&local_68,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(puVar2 + 2) = local_40;
  *(undefined4 *)((longlong)puVar2 + 0x14) = uStack_3c;
  *(undefined4 *)(puVar2 + 3) = uStack_38;
  *(undefined4 *)((longlong)puVar2 + 0x1c) = uStack_34;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_147e0264c(uVar1,puVar2,param_1 + 8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
}



// FUNCTION 147e024fb FUN_147e024fb body=335 status=ok
// SIG undefined FUN_147e024fb(void)

longlong * FUN_147e024fb(longlong *param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  if ((longlong)(int)param_2[1] == 0) {
    uStack_50._4_4_ = 0;
    uStack_50._0_4_ = 0;
  }
  else {
    puVar7 = (undefined4 *)*param_2;
    puVar6 = puVar7 + (longlong)(int)param_2[1] * 4;
    do {
      local_68 = *puVar7;
      uStack_64 = puVar7[1];
      uStack_60 = puVar7[2];
      uStack_5c = puVar7[3];
      lVar3 = FUN_147e022cc(&local_68);
      uVar1 = uStack_50;
      if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
        plVar5 = (longlong *)param_3[8];
        if ((longlong *)param_3[8] == (longlong *)0x0) {
          plVar5 = param_3 + 7;
        }
        iVar4 = *(int *)((longlong)plVar5 +
                        (ulonglong)
                        ((int)param_3[9] - 1U & (int)lVar3 + (int)((ulonglong)lVar3 >> 0x20) * 0x17)
                        * 4);
        if (iVar4 != -1) {
          do {
            plVar5 = (longlong *)(*param_3 + (longlong)iVar4 * 0x18);
            if (*plVar5 == lVar3) {
              if (plVar5 + 1 != (longlong *)0x0 && plVar5 != (longlong *)0x0) {
                lVar3 = (longlong)(int)uStack_50;
                uVar2 = (int)uStack_50 + 1;
                uStack_50 = CONCAT44(uStack_50._4_4_,uVar2);
                if (uStack_50._4_4_ < uVar2) {
                  FUN_1447808da(&local_58,uVar1 & 0xffffffff);
                }
                *(int *)(local_58 + lVar3 * 4) = (int)plVar5[1];
              }
              break;
            }
            iVar4 = (int)plVar5[2];
          } while (iVar4 != -1);
        }
      }
      puVar7 = puVar7 + 4;
    } while (puVar7 != puVar6);
  }
  *param_1 = local_58;
  *(int *)(param_1 + 1) = (int)uStack_50;
  *(uint *)((longlong)param_1 + 0xc) = uStack_50._4_4_;
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147e0264c FUN_147e0264c body=352 status=ok
// SIG undefined FUN_147e0264c(void)

void FUN_147e0264c(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined4 *_Src;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  void **local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  longlong *plStack_70;
  undefined4 *local_68;
  ulonglong uStack_60;
  void *local_50;
  int local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_38 = 0x2bca2875f4373fff;
  local_40 = 0;
  local_68 = (undefined4 *)0x0;
  uStack_60 = 1;
  FUN_14706f770(&local_68,0);
  _Src = local_68;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *local_68 = *param_3;
  local_68[1] = uVar3;
  local_68[2] = uVar4;
  local_68[3] = uVar5;
  local_50 = (void *)0x0;
  lVar8 = (longlong)(int)uStack_60;
  local_48 = (int)uStack_60;
  if (lVar8 == 0) {
    local_44 = 0;
  }
  else {
    FUN_14707042c(&local_50,uStack_60 & 0xffffffff,0);
    memcpy(local_50,_Src,lVar8 << 4);
  }
  local_78 = 0;
  plStack_70 = (longlong *)0x0;
  uVar7 = FUN_145bdeaa4();
  local_80 = &local_38;
  local_88 = &local_40;
  local_90 = &local_50;
  local_98 = &local_78;
  FUN_147aaba9a(param_1,param_2,uVar7,0);
  plVar6 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e027ae FUN_147e027ae body=178 status=ok
// SIG undefined FUN_147e027ae(void)

void FUN_147e027ae(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar2 = (undefined8 *)FUN_14001cc68(0x20,0);
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  FUN_147e02861(&local_40,&local_58,param_1 + 0x28);
  *puVar2 = CONCAT44(uStack_3c,local_40);
  puVar2[1] = CONCAT44(uStack_34,uStack_38);
  local_68 = *param_3;
  uStack_64 = param_3[1];
  uStack_60 = param_3[2];
  uStack_5c = param_3[3];
  FUN_147e02861(&local_40,&local_68,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(puVar2 + 2) = local_40;
  *(undefined4 *)((longlong)puVar2 + 0x14) = uStack_3c;
  *(undefined4 *)(puVar2 + 3) = uStack_38;
  *(undefined4 *)((longlong)puVar2 + 0x1c) = uStack_34;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_147e0264c(uVar1,puVar2,param_1 + 8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
}



// FUNCTION 147e02861 FUN_147e02861 body=355 status=ok
// SIG undefined FUN_147e02861(void)

longlong * FUN_147e02861(longlong *param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  int local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  if ((longlong)(int)param_2[1] == 0) {
    uStack_50._4_4_ = 0;
    uStack_50._0_4_ = 0;
  }
  else {
    puVar7 = (undefined8 *)*param_2;
    puVar6 = puVar7 + (longlong)(int)param_2[1] * 2;
    do {
      local_68 = *puVar7;
      local_60 = *(int *)(puVar7 + 1) + -1;
      if (*(int *)(puVar7 + 1) == 0) {
        local_60 = 0;
      }
      lVar3 = FUN_147e022cc(&local_68);
      uVar1 = uStack_50;
      if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
        plVar5 = (longlong *)param_3[8];
        if ((longlong *)param_3[8] == (longlong *)0x0) {
          plVar5 = param_3 + 7;
        }
        iVar4 = *(int *)((longlong)plVar5 +
                        (ulonglong)
                        ((int)param_3[9] - 1U & (int)lVar3 + (int)((ulonglong)lVar3 >> 0x20) * 0x17)
                        * 4);
        if (iVar4 != -1) {
          do {
            plVar5 = (longlong *)(*param_3 + (longlong)iVar4 * 0x18);
            if (*plVar5 == lVar3) {
              if (plVar5 + 1 != (longlong *)0x0 && plVar5 != (longlong *)0x0) {
                lVar3 = (longlong)(int)uStack_50;
                uVar2 = (int)uStack_50 + 1;
                uStack_50 = CONCAT44(uStack_50._4_4_,uVar2);
                if (uStack_50._4_4_ < uVar2) {
                  FUN_1447808da(&local_58,uVar1 & 0xffffffff);
                }
                *(int *)(local_58 + lVar3 * 4) = (int)plVar5[1];
              }
              break;
            }
            iVar4 = (int)plVar5[2];
          } while (iVar4 != -1);
        }
      }
      puVar7 = puVar7 + 2;
    } while (puVar7 != puVar6);
  }
  *param_1 = local_58;
  *(int *)(param_1 + 1) = (int)uStack_50;
  *(uint *)((longlong)param_1 + 0xc) = uStack_50._4_4_;
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147e029c6 FUN_147e029c6 body=121 status=ok
// SIG undefined FUN_147e029c6(void)

void FUN_147e029c6(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x28,0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  FUN_1402980a2(puVar1 + 3,*param_2,*(undefined4 *)(param_2 + 1));
  FUN_1402980a2(puVar1,*param_3,*(undefined4 *)(param_3 + 1));
  *(undefined1 *)(puVar1 + 2) = param_4;
  FUN_147e02a40(*(undefined8 *)(param_1 + 0x18),puVar1,param_1 + 8);
  return;
}



// FUNCTION 147e02a40 FUN_147e02a40 body=352 status=ok
// SIG undefined FUN_147e02a40(void)

void FUN_147e02a40(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined4 *_Src;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  void **local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  longlong *plStack_70;
  undefined4 *local_68;
  ulonglong uStack_60;
  void *local_50;
  int local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_38 = 0x2bca2875f4373fff;
  local_40 = 0;
  local_68 = (undefined4 *)0x0;
  uStack_60 = 1;
  FUN_14706f770(&local_68,0);
  _Src = local_68;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *local_68 = *param_3;
  local_68[1] = uVar3;
  local_68[2] = uVar4;
  local_68[3] = uVar5;
  local_50 = (void *)0x0;
  lVar8 = (longlong)(int)uStack_60;
  local_48 = (int)uStack_60;
  if (lVar8 == 0) {
    local_44 = 0;
  }
  else {
    FUN_14707042c(&local_50,uStack_60 & 0xffffffff,0);
    memcpy(local_50,_Src,lVar8 << 4);
  }
  local_78 = 0;
  plStack_70 = (longlong *)0x0;
  uVar7 = FUN_145bdeb4c();
  local_80 = &local_38;
  local_88 = &local_40;
  local_90 = &local_50;
  local_98 = &local_78;
  FUN_147aaba9a(param_1,param_2,uVar7,0);
  plVar6 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e02ba2 FUN_147e02ba2 body=131 status=ok
// SIG undefined FUN_147e02ba2(void)

void FUN_147e02ba2(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x30,0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  FUN_1402980a2(puVar1 + 3,*param_2,*(undefined4 *)(param_2 + 1));
  FUN_1402980a2(puVar1,*param_3,*(undefined4 *)(param_3 + 1));
  *(undefined1 *)(puVar1 + 2) = param_4;
  *(undefined1 *)(puVar1 + 5) = param_5;
  FUN_147e02c26(*(undefined8 *)(param_1 + 0x18),puVar1,param_1 + 8);
  return;
}



// FUNCTION 147e02c26 FUN_147e02c26 body=352 status=ok
// SIG undefined FUN_147e02c26(void)

void FUN_147e02c26(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined4 *_Src;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  void **local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  longlong *plStack_70;
  undefined4 *local_68;
  ulonglong uStack_60;
  void *local_50;
  int local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_38 = 0x2bca2875f4373fff;
  local_40 = 0;
  local_68 = (undefined4 *)0x0;
  uStack_60 = 1;
  FUN_14706f770(&local_68,0);
  _Src = local_68;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *local_68 = *param_3;
  local_68[1] = uVar3;
  local_68[2] = uVar4;
  local_68[3] = uVar5;
  local_50 = (void *)0x0;
  lVar8 = (longlong)(int)uStack_60;
  local_48 = (int)uStack_60;
  if (lVar8 == 0) {
    local_44 = 0;
  }
  else {
    FUN_14707042c(&local_50,uStack_60 & 0xffffffff,0);
    memcpy(local_50,_Src,lVar8 << 4);
  }
  local_78 = 0;
  plStack_70 = (longlong *)0x0;
  uVar7 = FUN_145bdeb84();
  local_80 = &local_38;
  local_88 = &local_40;
  local_90 = &local_50;
  local_98 = &local_78;
  FUN_147aaba9a(param_1,param_2,uVar7,0);
  plVar6 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e02d88 FUN_147e02d88 body=46 status=ok
// SIG undefined FUN_147e02d88(void)

void FUN_147e02d88(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = FUN_14001cc68(1,0);
  FUN_147e02db6(uVar1,uVar2,param_1 + 8);
  return;
}



// FUNCTION 147e02db6 FUN_147e02db6 body=352 status=ok
// SIG undefined FUN_147e02db6(void)

void FUN_147e02db6(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined4 *_Src;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  void **local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  longlong *plStack_70;
  undefined4 *local_68;
  ulonglong uStack_60;
  void *local_50;
  int local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_38 = 0x2bca2875f4373fff;
  local_40 = 0;
  local_68 = (undefined4 *)0x0;
  uStack_60 = 1;
  FUN_14706f770(&local_68,0);
  _Src = local_68;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *local_68 = *param_3;
  local_68[1] = uVar3;
  local_68[2] = uVar4;
  local_68[3] = uVar5;
  local_50 = (void *)0x0;
  lVar8 = (longlong)(int)uStack_60;
  local_48 = (int)uStack_60;
  if (lVar8 == 0) {
    local_44 = 0;
  }
  else {
    FUN_14707042c(&local_50,uStack_60 & 0xffffffff,0);
    memcpy(local_50,_Src,lVar8 << 4);
  }
  local_78 = 0;
  plStack_70 = (longlong *)0x0;
  uVar7 = FUN_145bdeb14();
  local_80 = &local_38;
  local_88 = &local_40;
  local_90 = &local_50;
  local_98 = &local_78;
  FUN_147aaba9a(param_1,param_2,uVar7,0);
  plVar6 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e02f18 FUN_147e02f18 body=75 status=ok
// SIG undefined FUN_147e02f18(void)

void FUN_147e02f18(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0);
  *puVar1 = 0;
  puVar1[1] = 0;
  FUN_1402980a2(puVar1,*param_2,*(undefined4 *)(param_2 + 1));
  FUN_147e02f64(*(undefined8 *)(param_1 + 0x18),puVar1,param_1 + 8);
  return;
}



// FUNCTION 147e02f64 FUN_147e02f64 body=352 status=ok
// SIG undefined FUN_147e02f64(void)

void FUN_147e02f64(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined4 *_Src;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  void **local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  longlong *plStack_70;
  undefined4 *local_68;
  ulonglong uStack_60;
  void *local_50;
  int local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_38 = 0x2bca2875f4373fff;
  local_40 = 0;
  local_68 = (undefined4 *)0x0;
  uStack_60 = 1;
  FUN_14706f770(&local_68,0);
  _Src = local_68;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *local_68 = *param_3;
  local_68[1] = uVar3;
  local_68[2] = uVar4;
  local_68[3] = uVar5;
  local_50 = (void *)0x0;
  lVar8 = (longlong)(int)uStack_60;
  local_48 = (int)uStack_60;
  if (lVar8 == 0) {
    local_44 = 0;
  }
  else {
    FUN_14707042c(&local_50,uStack_60 & 0xffffffff,0);
    memcpy(local_50,_Src,lVar8 << 4);
  }
  local_78 = 0;
  plStack_70 = (longlong *)0x0;
  uVar7 = FUN_145bde9c4();
  local_80 = &local_38;
  local_88 = &local_40;
  local_90 = &local_50;
  local_98 = &local_78;
  FUN_147aaba9a(param_1,param_2,uVar7,0);
  plVar6 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e030c6 FUN_147e030c6 body=75 status=ok
// SIG undefined FUN_147e030c6(void)

void FUN_147e030c6(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0);
  *puVar1 = 0;
  puVar1[1] = 0;
  FUN_1402980a2(puVar1,*param_2,*(undefined4 *)(param_2 + 1));
  FUN_147e03112(*(undefined8 *)(param_1 + 0x18),puVar1,param_1 + 8);
  return;
}



// FUNCTION 147e03112 FUN_147e03112 body=352 status=ok
// SIG undefined FUN_147e03112(void)

void FUN_147e03112(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined4 *_Src;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  void **local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  longlong *plStack_70;
  undefined4 *local_68;
  ulonglong uStack_60;
  void *local_50;
  int local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_38 = 0x2bca2875f4373fff;
  local_40 = 0;
  local_68 = (undefined4 *)0x0;
  uStack_60 = 1;
  FUN_14706f770(&local_68,0);
  _Src = local_68;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *local_68 = *param_3;
  local_68[1] = uVar3;
  local_68[2] = uVar4;
  local_68[3] = uVar5;
  local_50 = (void *)0x0;
  lVar8 = (longlong)(int)uStack_60;
  local_48 = (int)uStack_60;
  if (lVar8 == 0) {
    local_44 = 0;
  }
  else {
    FUN_14707042c(&local_50,uStack_60 & 0xffffffff,0);
    memcpy(local_50,_Src,lVar8 << 4);
  }
  local_78 = 0;
  plStack_70 = (longlong *)0x0;
  uVar7 = FUN_14629e5d2();
  local_80 = &local_38;
  local_88 = &local_40;
  local_90 = &local_50;
  local_98 = &local_78;
  FUN_147aaba9a(param_1,param_2,uVar7,0);
  plVar6 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e03274 FUN_147e03274 body=46 status=ok
// SIG undefined FUN_147e03274(void)

void FUN_147e03274(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = FUN_14001cc68(1,0);
  FUN_147e032a2(uVar1,uVar2,param_1 + 8);
  return;
}



// FUNCTION 147e032a2 FUN_147e032a2 body=352 status=ok
// SIG undefined FUN_147e032a2(void)

void FUN_147e032a2(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined4 *_Src;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  void **local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  longlong *plStack_70;
  undefined4 *local_68;
  ulonglong uStack_60;
  void *local_50;
  int local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_38 = 0x2bca2875f4373fff;
  local_40 = 0;
  local_68 = (undefined4 *)0x0;
  uStack_60 = 1;
  FUN_14706f770(&local_68,0);
  _Src = local_68;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *local_68 = *param_3;
  local_68[1] = uVar3;
  local_68[2] = uVar4;
  local_68[3] = uVar5;
  local_50 = (void *)0x0;
  lVar8 = (longlong)(int)uStack_60;
  local_48 = (int)uStack_60;
  if (lVar8 == 0) {
    local_44 = 0;
  }
  else {
    FUN_14707042c(&local_50,uStack_60 & 0xffffffff,0);
    memcpy(local_50,_Src,lVar8 << 4);
  }
  local_78 = 0;
  plStack_70 = (longlong *)0x0;
  uVar7 = FUN_145bdebbc();
  local_80 = &local_38;
  local_88 = &local_40;
  local_90 = &local_50;
  local_98 = &local_78;
  FUN_147aaba9a(param_1,param_2,uVar7,0);
  plVar6 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e03404 FUN_147e03404 body=46 status=ok
// SIG undefined FUN_147e03404(void)

void FUN_147e03404(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = FUN_14001cc68(1,0);
  FUN_147e03432(uVar1,uVar2,param_1 + 8);
  return;
}



// FUNCTION 147e03432 FUN_147e03432 body=352 status=ok
// SIG undefined FUN_147e03432(void)

void FUN_147e03432(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined4 *_Src;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  void **local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  longlong *plStack_70;
  undefined4 *local_68;
  ulonglong uStack_60;
  void *local_50;
  int local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_38 = 0x2bca2875f4373fff;
  local_40 = 0;
  local_68 = (undefined4 *)0x0;
  uStack_60 = 1;
  FUN_14706f770(&local_68,0);
  _Src = local_68;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *local_68 = *param_3;
  local_68[1] = uVar3;
  local_68[2] = uVar4;
  local_68[3] = uVar5;
  local_50 = (void *)0x0;
  lVar8 = (longlong)(int)uStack_60;
  local_48 = (int)uStack_60;
  if (lVar8 == 0) {
    local_44 = 0;
  }
  else {
    FUN_14707042c(&local_50,uStack_60 & 0xffffffff,0);
    memcpy(local_50,_Src,lVar8 << 4);
  }
  local_78 = 0;
  plStack_70 = (longlong *)0x0;
  uVar7 = FUN_145bdebf4();
  local_80 = &local_38;
  local_88 = &local_40;
  local_90 = &local_50;
  local_98 = &local_78;
  FUN_147aaba9a(param_1,param_2,uVar7,0);
  plVar6 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e03594 FUN_147e03594 body=75 status=ok
// SIG undefined FUN_147e03594(void)

void FUN_147e03594(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0);
  *puVar1 = 0;
  puVar1[1] = 0;
  FUN_1402980a2(puVar1,*param_2,*(undefined4 *)(param_2 + 1));
  FUN_147e035e0(*(undefined8 *)(param_1 + 0x18),puVar1,param_1 + 8);
  return;
}



// FUNCTION 147e035e0 FUN_147e035e0 body=352 status=ok
// SIG undefined FUN_147e035e0(void)

void FUN_147e035e0(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined4 *_Src;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  void **local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  longlong *plStack_70;
  undefined4 *local_68;
  ulonglong uStack_60;
  void *local_50;
  int local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_38 = 0x2bca2875f4373fff;
  local_40 = 0;
  local_68 = (undefined4 *)0x0;
  uStack_60 = 1;
  FUN_14706f770(&local_68,0);
  _Src = local_68;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *local_68 = *param_3;
  local_68[1] = uVar3;
  local_68[2] = uVar4;
  local_68[3] = uVar5;
  local_50 = (void *)0x0;
  lVar8 = (longlong)(int)uStack_60;
  local_48 = (int)uStack_60;
  if (lVar8 == 0) {
    local_44 = 0;
  }
  else {
    FUN_14707042c(&local_50,uStack_60 & 0xffffffff,0);
    memcpy(local_50,_Src,lVar8 << 4);
  }
  local_78 = 0;
  plStack_70 = (longlong *)0x0;
  uVar7 = FUN_145bdec2c();
  local_80 = &local_38;
  local_88 = &local_40;
  local_90 = &local_50;
  local_98 = &local_78;
  FUN_147aaba9a(param_1,param_2,uVar7,0);
  plVar6 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e03742 FUN_147e03742 body=98 status=ok
// SIG undefined FUN_147e03742(void)

void FUN_147e03742(longlong param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  FUN_1402980a2(puVar1,*param_2,*(undefined4 *)(param_2 + 1));
  *(undefined1 *)(puVar1 + 2) = param_3;
  FUN_147e037a4(*(undefined8 *)(param_1 + 0x18),puVar1,param_1 + 8);
  return;
}



// FUNCTION 147e037a4 FUN_147e037a4 body=352 status=ok
// SIG undefined FUN_147e037a4(void)

void FUN_147e037a4(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined4 *_Src;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  void **local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  longlong *plStack_70;
  undefined4 *local_68;
  ulonglong uStack_60;
  void *local_50;
  int local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_38 = 0x2bca2875f4373fff;
  local_40 = 0;
  local_68 = (undefined4 *)0x0;
  uStack_60 = 1;
  FUN_14706f770(&local_68,0);
  _Src = local_68;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *local_68 = *param_3;
  local_68[1] = uVar3;
  local_68[2] = uVar4;
  local_68[3] = uVar5;
  local_50 = (void *)0x0;
  lVar8 = (longlong)(int)uStack_60;
  local_48 = (int)uStack_60;
  if (lVar8 == 0) {
    local_44 = 0;
  }
  else {
    FUN_14707042c(&local_50,uStack_60 & 0xffffffff,0);
    memcpy(local_50,_Src,lVar8 << 4);
  }
  local_78 = 0;
  plStack_70 = (longlong *)0x0;
  uVar7 = FUN_14629e6be();
  local_80 = &local_38;
  local_88 = &local_40;
  local_90 = &local_50;
  local_98 = &local_78;
  FUN_147aaba9a(param_1,param_2,uVar7,0);
  plVar6 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e03906 FUN_147e03906 body=50 status=ok
// SIG undefined FUN_147e03906(void)

void FUN_147e03906(longlong param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)FUN_14001cc68(1,0);
  *puVar1 = param_2;
  FUN_147e03938(*(undefined8 *)(param_1 + 0x18),puVar1,param_1 + 8);
  return;
}



// FUNCTION 147e03938 FUN_147e03938 body=352 status=ok
// SIG undefined FUN_147e03938(void)

void FUN_147e03938(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined4 *_Src;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  void **local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  longlong *plStack_70;
  undefined4 *local_68;
  ulonglong uStack_60;
  void *local_50;
  int local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_38 = 0x2bca2875f4373fff;
  local_40 = 0;
  local_68 = (undefined4 *)0x0;
  uStack_60 = 1;
  FUN_14706f770(&local_68,0);
  _Src = local_68;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *local_68 = *param_3;
  local_68[1] = uVar3;
  local_68[2] = uVar4;
  local_68[3] = uVar5;
  local_50 = (void *)0x0;
  lVar8 = (longlong)(int)uStack_60;
  local_48 = (int)uStack_60;
  if (lVar8 == 0) {
    local_44 = 0;
  }
  else {
    FUN_14707042c(&local_50,uStack_60 & 0xffffffff,0);
    memcpy(local_50,_Src,lVar8 << 4);
  }
  local_78 = 0;
  plStack_70 = (longlong *)0x0;
  uVar7 = FUN_145bdec64();
  local_80 = &local_38;
  local_88 = &local_40;
  local_90 = &local_50;
  local_98 = &local_78;
  FUN_147aaba9a(param_1,param_2,uVar7,0);
  plVar6 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e03aaa FUN_147e03aaa body=43 status=ok
// SIG undefined FUN_147e03aaa(void)

undefined8 FUN_147e03aaa(undefined8 param_1,int param_2)

{
  FUN_147e09474();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xe8);
  }
  return param_1;
}



// FUNCTION 147e03b7e FUN_147e03b7e body=43 status=ok
// SIG undefined FUN_147e03b7e(void)

undefined8 FUN_147e03b7e(undefined8 param_1,int param_2)

{
  FUN_147e096d6();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x110);
  }
  return param_1;
}



// FUNCTION 147e03bca FUN_147e03bca body=43 status=ok
// SIG undefined FUN_147e03bca(void)

undefined8 FUN_147e03bca(undefined8 param_1,int param_2)

{
  FUN_147dfea54();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x170);
  }
  return param_1;
}



// FUNCTION 147e03bf6 FUN_147e03bf6 body=50 status=ok
// SIG undefined FUN_147e03bf6(void)

longlong FUN_147e03bf6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10;
  FUN_145c021e6(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 147e03c28 FUN_147e03c28 body=43 status=ok
// SIG undefined FUN_147e03c28(void)

undefined8 FUN_147e03c28(undefined8 param_1,int param_2)

{
  FUN_147e013a0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xf8);
  }
  return param_1;
}



// FUNCTION 147e03c5a FUN_147e03c5a body=43 status=ok
// SIG undefined FUN_147e03c5a(void)

undefined8 FUN_147e03c5a(undefined8 param_1,int param_2)

{
  FUN_147e023de();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 147e03c86 FUN_147e03c86 body=52 status=ok
// SIG undefined FUN_147e03c86(void)

void FUN_147e03c86(longlong *param_1)

{
  FUN_147e03cba();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147e03cba FUN_147e03cba body=343 status=ok
// SIG undefined FUN_147e03cba(void)

void FUN_147e03cba(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      plVar4 = *(longlong **)(*local_70 + 0x18 + (longlong)iStack_54 * 0x28);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e03e12 FUN_147e03e12 body=52 status=ok
// SIG undefined FUN_147e03e12(void)

void FUN_147e03e12(longlong *param_1)

{
  FUN_147e03e46();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147e03e46 FUN_147e03e46 body=89 status=ok
// SIG undefined FUN_147e03e46(void)

void FUN_147e03e46(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140957390(param_1,0);
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



// FUNCTION 147e03ea0 FUN_147e03ea0 body=52 status=ok
// SIG undefined FUN_147e03ea0(void)

void FUN_147e03ea0(longlong *param_1)

{
  FUN_147e03ed4();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147e03ed4 FUN_147e03ed4 body=336 status=ok
// SIG undefined FUN_147e03ed4(void)

void FUN_147e03ed4(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      lVar2 = *local_70;
      lVar3 = (longlong)iStack_54;
      FUN_147e023de(lVar2 + lVar3 * 0x188 + 0x108);
      FUN_147e04146(lVar2 + lVar3 * 0x188 + 0x10);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_147e04026(param_1);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e04026 FUN_147e04026 body=48 status=ok
// SIG undefined FUN_147e04026(void)

void FUN_147e04026(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x188,8);
  }
  return;
}



// FUNCTION 147e04056 FUN_147e04056 body=93 status=ok
// SIG undefined FUN_147e04056(void)

longlong FUN_147e04056(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_147e040b4(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 147e040b4 FUN_147e040b4 body=146 status=ok
// SIG undefined FUN_147e040b4(void)

longlong * FUN_147e040b4(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar3 = param_2[3];
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)(param_1 + 2) = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(int *)(param_1 + 3) = (int)lVar3;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 147e04146 FUN_147e04146 body=102 status=ok
// SIG undefined FUN_147e04146(void)

void FUN_147e04146(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  FUN_147e041ac(param_1 + 0x70);
  FUN_147e04333(*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x68));
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147e041ac FUN_147e041ac body=52 status=ok
// SIG undefined FUN_147e041ac(void)

void FUN_147e041ac(longlong *param_1)

{
  FUN_147e041e0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147e041e0 FUN_147e041e0 body=338 status=ok
// SIG undefined FUN_147e041e0(void)

void FUN_147e041e0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      lVar2 = *local_78;
      lVar3 = (longlong)iStack_5c;
      if (*(longlong *)(lVar2 + 0x18 + lVar3 * 0x38) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar2 + lVar3 * 0x38 + 8) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144748838(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e04333 FUN_147e04333 body=61 status=ok
// SIG undefined FUN_147e04333(void)

void FUN_147e04333(longlong param_1,int param_2)

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



// FUNCTION 147e04370 FUN_147e04370 body=68 status=ok
// SIG undefined FUN_147e04370(void)

void FUN_147e04370(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_147e043b4(param_1);
  return;
}



// FUNCTION 147e043b4 FUN_147e043b4 body=446 status=ok
// SIG undefined FUN_147e043b4(void)

void FUN_147e043b4(longlong *param_1)

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
        lVar2 = *local_80 + (longlong)iVar5 * 0x28;
        iVar6 = FUN_1448eb174(lVar2,0x10,0);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x24) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x20) =
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



// FUNCTION 147e04574 FUN_147e04574 body=135 status=ok
// SIG undefined FUN_147e04574(void)

longlong FUN_147e04574(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_147e045fc();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1;
    if (lVar3 + lVar2 * 0x28 != 0) goto LAB_147e045ae;
  }
  local_30 = param_3;
  FUN_147e04670(param_1,&local_24,param_2);
  lVar2 = (longlong)local_24;
  lVar3 = *param_1;
LAB_147e045ae:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar3 + lVar2 * 0x28 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e045fc FUN_147e045fc body=115 status=ok
// SIG undefined FUN_147e045fc(void)

int FUN_147e045fc(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1;
        if ((((*(int *)(lVar2 + lVar4 * 0x28) == *param_3) &&
             (*(int *)(lVar2 + 4 + lVar4 * 0x28) == param_3[1])) &&
            (*(int *)(lVar2 + 8 + lVar4 * 0x28) == param_3[2])) &&
           (*(int *)(lVar2 + 0xc + lVar4 * 0x28) == param_3[3])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + lVar4 * 0x28 + 0x20);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 147e04670 FUN_147e04670 body=277 status=ok
// SIG undefined FUN_147e04670(void)

undefined4 * FUN_147e04670(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147e04786(param_1,local_48);
  uVar1 = ((undefined8 *)*param_4)[1];
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = uVar1;
  local_40[2] = 0;
  local_40[3] = 0;
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  cVar2 = FUN_147e0486c(param_1,param_3,local_40,local_48);
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_40 + 0x24) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_147e043b4(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e04786 FUN_147e04786 body=230 status=ok
// SIG undefined FUN_147e04786(void)

int * FUN_147e04786(longlong *param_1,int *param_2)

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
      FUN_140549c28(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 147e0486c FUN_147e0486c body=145 status=ok
// SIG undefined FUN_147e0486c(void)

undefined8 FUN_147e0486c(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar12 = FUN_147e045fc(), iVar12 != -1)) {
    puVar3 = (undefined4 *)(*param_1 + (longlong)iVar12 * 0x28);
    plVar4 = *(longlong **)(puVar3 + 6);
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
    uVar5 = *param_3;
    uVar6 = param_3[1];
    uVar7 = param_3[2];
    uVar8 = param_3[3];
    uVar9 = param_3[5];
    uVar10 = param_3[6];
    uVar11 = param_3[7];
    puVar3[4] = param_3[4];
    puVar3[5] = uVar9;
    puVar3[6] = uVar10;
    puVar3[7] = uVar11;
    *puVar3 = uVar5;
    puVar3[1] = uVar6;
    puVar3[2] = uVar7;
    puVar3[3] = uVar8;
    FUN_147e048fe(param_1,*param_4);
    *param_4 = iVar12;
    return 1;
  }
  return 0;
}



// FUNCTION 147e048fe FUN_147e048fe body=114 status=ok
// SIG undefined FUN_147e048fe(void)

void FUN_147e048fe(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
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



// FUNCTION 147e04970 FUN_147e04970 body=28 status=ok
// SIG undefined FUN_147e04970(void)

void FUN_147e04970(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147e04988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x88))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 147e0498c FUN_147e0498c body=34 status=ok
// SIG undefined FUN_147e0498c(void)

undefined8 FUN_147e0498c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 147e049ae FUN_147e049ae body=230 status=ok
// SIG undefined FUN_147e049ae(void)

undefined8 * FUN_147e049ae(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined7 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong *)*param_3 != (longlong *)0x0 && (int)param_3[1] != 0) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,CONCAT71(uVar5,1));
      plVar2 = (longlong *)*param_3;
      if (plVar2 == (longlong *)0x0 || (int)param_3[1] == 0) {
        local_30 = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
      }
      *param_2 = local_30;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e04a96 FUN_147e04a96 body=313 status=ok
// SIG undefined FUN_147e04a96(void)

longlong * FUN_147e04a96(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_147e04b92:
    *puVar5 = &PTR_LAB_14ab3c3a0;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_14ab3c330;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_147e04b92;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14ab3c3a0;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_14ab3c330;
    puVar5[3] = uVar10;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 147e04bd0 FUN_147e04bd0 body=69 status=ok
// SIG undefined FUN_147e04bd0(void)

undefined8 * FUN_147e04bd0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14ab3c330;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 147e04c1a FUN_147e04c1a body=81 status=ok
// SIG undefined FUN_147e04c1a(void)

undefined8 FUN_147e04c1a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 147e04c72 FUN_147e04c72 body=89 status=ok
// SIG undefined FUN_147e04c72(void)

bool FUN_147e04c72(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_147e04cbd;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_147e04cbd:
  return lVar6 == param_2;
}



// FUNCTION 147e04cf4 FUN_147e04cf4 body=118 status=ok
// SIG undefined FUN_147e04cf4(void)

void FUN_147e04cf4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab3c3a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab3c330;
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



// FUNCTION 147e04d6a FUN_147e04d6a body=118 status=ok
// SIG undefined FUN_147e04d6a(void)

void FUN_147e04d6a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab3c3a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab3c330;
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



// FUNCTION 147e04de0 FUN_147e04de0 body=156 status=ok
// SIG undefined FUN_147e04de0(void)

void FUN_147e04de0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ab3c3a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ab3c330;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147e04e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147e04e7c FUN_147e04e7c body=104 status=ok
// SIG undefined FUN_147e04e7c(void)

void FUN_147e04e7c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000147e04ec9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000147e04eda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 147e04ee4 FUN_147e04ee4 body=101 status=ok
// SIG undefined FUN_147e04ee4(void)

ulonglong FUN_147e04ee4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_147e04f3e:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_147e04f3e;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
    }
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 147e04f4c FUN_147e04f4c body=175 status=ok
// SIG undefined FUN_147e04f4c(void)

void FUN_147e04f4c(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_147e04fd5;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_147e04fd5:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 147e04ffb FUN_147e04ffb body=73 status=ok
// SIG undefined FUN_147e04ffb(void)

void FUN_147e04ffb(longlong param_1,int param_2)

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



// FUNCTION 147e05044 FUN_147e05044 body=48 status=ok
// SIG undefined FUN_147e05044(void)

void FUN_147e05044(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 147e05074 FUN_147e05074 body=132 status=ok
// SIG undefined FUN_147e05074(void)

void FUN_147e05074(longlong param_1,int param_2)

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



// FUNCTION 147e050fa FUN_147e050fa body=193 status=ok
// SIG undefined FUN_147e050fa(void)

void FUN_147e050fa(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
        goto LAB_147e05191;
      }
    }
    uVar5 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_147e05191:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 147e051bc FUN_147e051bc body=166 status=ok
// SIG undefined FUN_147e051bc(void)

void FUN_147e051bc(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = FUN_1464158ae();
  if (lVar3 != 0) {
    FUN_14706e08c(*param_2,&local_40);
    FUN_1414d7078(lVar3,&local_50);
    if ((local_40 == local_50) && (local_38 == local_48)) {
      pcVar2 = *(code **)(param_1 + 0x10);
      iVar1 = *(int *)(param_1 + 0x18);
      lVar3 = *(longlong *)(param_1 + 8);
      uVar4 = (**(code **)(*(longlong *)*param_2 + 0x18))();
      (*pcVar2)(iVar1 + lVar3,uVar4,param_2);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e05264 FUN_147e05264 body=34 status=ok
// SIG undefined FUN_147e05264(void)

undefined8 FUN_147e05264(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 147e052a0 FUN_147e052a0 body=34 status=ok
// SIG undefined FUN_147e052a0(void)

undefined8 FUN_147e052a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 147e052c2 FUN_147e052c2 body=155 status=ok
// SIG undefined FUN_147e052c2(void)

undefined8 * FUN_147e052c2(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_3 + 1);
  pvVar2 = (void *)*param_3;
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 147e0535e FUN_147e0535e body=9 status=ok
// SIG undefined FUN_147e0535e(void)

void FUN_147e0535e(longlong param_1)

{
  FUN_147e0538a(*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 147e05368 FUN_147e05368 body=34 status=ok
// SIG undefined FUN_147e05368(void)

undefined8 FUN_147e05368(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 147e0538a FUN_147e0538a body=66 status=ok
// SIG undefined FUN_147e0538a(void)

void FUN_147e0538a(longlong param_1)

{
  if (param_1 != 0) {
    if (*(longlong *)(param_1 + 0x28) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    thunk_FUN_1400020a8(param_1,0x50);
    return;
  }
  return;
}



// FUNCTION 147e053cc FUN_147e053cc body=132 status=ok
// SIG undefined FUN_147e053cc(void)

void FUN_147e053cc(longlong param_1,int param_2)

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



// FUNCTION 147e05452 FUN_147e05452 body=175 status=ok
// SIG undefined FUN_147e05452(void)

void FUN_147e05452(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_147e054db;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_147e054db:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 147e05502 FUN_147e05502 body=166 status=ok
// SIG undefined FUN_147e05502(void)

void FUN_147e05502(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = FUN_14629da8a();
  if (lVar3 != 0) {
    FUN_14706e08c(*param_2,&local_40);
    FUN_1414d7078(lVar3,&local_50);
    if ((local_40 == local_50) && (local_38 == local_48)) {
      pcVar2 = *(code **)(param_1 + 0x10);
      iVar1 = *(int *)(param_1 + 0x18);
      lVar3 = *(longlong *)(param_1 + 8);
      uVar4 = (**(code **)(*(longlong *)*param_2 + 0x18))();
      (*pcVar2)(iVar1 + lVar3,uVar4,param_2);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e055aa FUN_147e055aa body=34 status=ok
// SIG undefined FUN_147e055aa(void)

undefined8 FUN_147e055aa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 147e055e6 FUN_147e055e6 body=34 status=ok
// SIG undefined FUN_147e055e6(void)

undefined8 FUN_147e055e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 147e05608 FUN_147e05608 body=166 status=ok
// SIG undefined FUN_147e05608(void)

void FUN_147e05608(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = FUN_14641581c();
  if (lVar3 != 0) {
    FUN_14706e08c(*param_2,&local_40);
    FUN_1414d7078(lVar3,&local_50);
    if ((local_40 == local_50) && (local_38 == local_48)) {
      pcVar2 = *(code **)(param_1 + 0x10);
      iVar1 = *(int *)(param_1 + 0x18);
      lVar3 = *(longlong *)(param_1 + 8);
      uVar4 = (**(code **)(*(longlong *)*param_2 + 0x18))();
      (*pcVar2)(iVar1 + lVar3,uVar4,param_2);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e056b0 FUN_147e056b0 body=34 status=ok
// SIG undefined FUN_147e056b0(void)

undefined8 FUN_147e056b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}


