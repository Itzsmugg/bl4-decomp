// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14747230e FUN_14747230e body=56 status=ok
// SIG undefined FUN_14747230e(void)

longlong FUN_14747230e(longlong param_1,int param_2)

{
  if (*(ulonglong *)(param_1 + 8) != 0 && (*(ulonglong *)(param_1 + 8) & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147472346 FUN_147472346 body=52 status=ok
// SIG undefined FUN_147472346(void)

int FUN_147472346(longlong param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x10) < 0) {
    FUN_140033559("Runtime\\Core\\Public\\Containers/DynamicRHIResourceArray.h",0x47,
                  L"Resource data size too large for uint32, will overflow. Calculate with larger data type or use fewer elements. sizeof(ElementType): %d"
                  ,2);
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x10) * 2;
  }
  return iVar1;
}



// FUNCTION 14747238c FUN_14747238c body=218 status=ok
// SIG undefined FUN_14747238c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14747238c(void)

{
  if ((DAT_14caa76df & 2) == 0) {
    DAT_14caa76df = DAT_14caa76df | 2;
    _DAT_14caa7680 = L"TResourceArray";
    _DAT_14caa7698 = FUN_146826540;
    _DAT_14caa76a0 = FUN_146825d77;
    _DAT_14caa76a8 = FUN_146825fd6;
    _DAT_14caa76b0 = FUN_1407e02ea;
    _DAT_14caa76b8 = FUN_146826273;
    _DAT_14caa7690 = FUN_147472466;
    _DAT_14caa76d0 = 0xffffffff00000020;
    _DAT_14caa76d8 = 8;
    DAT_14caa76dc = 1;
    _DAT_14caa76c0 = &LAB_147472492;
    FUN_147472498(&DAT_14caa7678);
    FUN_1474725a6(&DAT_14caa7678);
    FUN_1407e00cc(&DAT_14caa7678);
  }
  return &DAT_14caa7678;
}



// FUNCTION 147472466 FUN_147472466 body=43 status=ok
// SIG undefined FUN_147472466(void)

void FUN_147472466(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    (**(code **)*param_1)(param_1,0);
  }
  param_1[2] = 0xfefefefefefefefe;
  param_1[3] = 0xfefefefefefefefe;
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 147472498 FUN_147472498 body=269 status=ok
// SIG undefined FUN_147472498(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147472498(longlong param_1)

{
  _DAT_14caa7708 = L"bNeedsCPUAccess";
  DAT_14caa7732 = FUN_140850cc5();
  if ((DAT_14c9cfd57 & 2) == 0) {
    DAT_14c9cfd57 = DAT_14c9cfd57 | 3;
    _DAT_14c9cfcf8 = L"bool";
    _DAT_14c9cfd10 = &LAB_147169480;
    _DAT_14c9cfd18 = &LAB_14716948c;
    _DAT_14c9cfd20 = &LAB_147169498;
    _DAT_14c9cfd28 = &LAB_14716949e;
    _DAT_14c9cfd30 = &LAB_1471694a2;
    _DAT_14c9cfd08 = &LAB_1471694a8;
    _DAT_14c9cfd48 = &DAT_100000001;
    _DAT_14c9cfd50 = 1;
    DAT_14c9cfd54 = 0;
  }
  _DAT_14caa7710 = &DAT_14c9cfcf0;
  _DAT_14caa7720 = &LAB_14682652b;
  _DAT_14caa7728 = &DAT_100000018;
  _DAT_14caa7730 = 0;
  _DAT_14caa7718 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = &DAT_14caa7708;
  return;
}



// FUNCTION 1474725a6 FUN_1474725a6 body=361 status=ok
// SIG undefined FUN_1474725a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1474725a6(longlong param_1)

{
  longlong lVar1;
  
  _DAT_14caa75e8 = L"BASE";
  DAT_14caa7612 = 4;
  if ((DAT_14caa779f & 2) == 0) {
    DAT_14caa779f = DAT_14caa779f | 3;
    _DAT_14caa7740 = L"(TArray<T, AllocatorType>)";
    _DAT_14caa7758 = &LAB_14747278e;
    _DAT_14caa7760 = FUN_14747279c;
    _DAT_14caa7768 = &LAB_1474727bc;
    _DAT_14caa7770 = &LAB_1474727ca;
    _DAT_14caa7778 = &LAB_1474727d8;
    _DAT_14caa7750 = FUN_1474727e4;
    _DAT_14caa7790 = 0x1000000010;
    _DAT_14caa7798 = 8;
    DAT_14caa779c = '\0';
  }
  _DAT_14caa75f0 = &DAT_14caa7738;
  _DAT_14caa7600 = &LAB_14682652b;
  _DAT_14caa7608 = &DAT_100000008;
  _DAT_14caa75f8 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = &DAT_14caa75e8;
  *(char *)(param_1 + 0x65) = *(char *)(param_1 + 0x65) + '\x01';
  if (DAT_14caa779c != '\0') {
    *(char *)(param_1 + 0x66) = *(char *)(param_1 + 0x66) + '\x01';
  }
  _DAT_14caa7618 = L"BASE";
  DAT_14caa7642 = 4;
  lVar1 = FUN_146268212();
  _DAT_14caa7630 = &LAB_14682652b;
  _DAT_14caa7638 = 0x100000000;
  _DAT_14caa7628 = *(undefined8 *)(param_1 + 0x10);
  _DAT_14caa7620 = lVar1;
  *(undefined **)(param_1 + 0x10) = &DAT_14caa7618;
  *(char *)(param_1 + 0x65) = *(char *)(param_1 + 0x65) + '\x01';
  if (*(char *)(lVar1 + 100) != '\0') {
    *(char *)(param_1 + 0x66) = *(char *)(param_1 + 0x66) + '\x01';
  }
  return;
}



// FUNCTION 14747270f FUN_14747270f body=127 status=ok
// SIG undefined FUN_14747270f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14747270f(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa7700) {
    FUN_144b3d300(&DAT_14caa7700);
    if (DAT_14caa7700 == -1) {
      DAT_14caa76e8 = 0;
      uRam000000014caa76f0 = 0;
      _DAT_14caa76e0 = &PTR_FUN_14a3d46e0;
      DAT_14caa76f8 = 0;
      atexit((_func_5014 *)&LAB_14326df22);
      _Init_thread_footer(&DAT_14caa7700);
    }
  }
  return &DAT_14caa76e0;
}



// FUNCTION 14747279c FUN_14747279c body=31 status=ok
// SIG undefined FUN_14747279c(void)

undefined8
FUN_14747279c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_147472902(param_2,param_1,param_4);
  return 0x10;
}



// FUNCTION 1474727e4 FUN_1474727e4 body=51 status=ok
// SIG undefined FUN_1474727e4(void)

void FUN_1474727e4(ulonglong *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if ((param_4 == '\0') && (*param_1 != 0 && (*param_1 & 1) == 0)) {
    FUN_1400020a8();
  }
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 147472818 FUN_147472818 body=234 status=ok
// SIG undefined FUN_147472818(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147472818(longlong param_1,undefined8 param_2)

{
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
  FUN_1467ac78e(param_1,param_2,&DAT_14ca84cb0,*(undefined4 *)(param_1 + 8),0);
  FUN_146826a6c(param_2,param_1 + 8,4);
  FUN_146826a6c(param_2,param_1 + 8,4);
  return;
}



// FUNCTION 147472902 FUN_147472902 body=248 status=ok
// SIG undefined FUN_147472902(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147472902(longlong param_1,undefined8 param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  *param_3 = 0;
  param_3[1] = 0;
  FUN_1474729fa(param_3,*(undefined4 *)(param_1 + 8),1);
  uVar1 = *param_3;
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
  uVar2 = (longlong)param_3 + ((longlong)uVar1 >> 0x18);
  if ((uVar1 & 1) == 0) {
    uVar2 = uVar1;
  }
  FUN_1467ac844(param_1,param_2,&DAT_14ca84cb0,*(undefined4 *)(param_1 + 8),uVar2);
  return;
}



// FUNCTION 1474729fa FUN_1474729fa body=66 status=ok
// SIG undefined FUN_1474729fa(void)

void FUN_1474729fa(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (param_2 - iVar1 != 0 && iVar1 <= param_2) {
    FUN_147472a3e(param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 8) = param_2, param_3 == '\x01')) {
      FUN_147472a96();
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147472a3e FUN_147472a3e body=87 status=ok
// SIG undefined FUN_147472a3e(void)

int FUN_147472a3e(ulonglong *param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_141794766(param_1);
  }
  uVar2 = *param_1;
  uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)param_1;
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2;
  }
  memset((void *)(uVar3 + (longlong)iVar1 * 2),0,(longlong)(int)param_2 * 2);
  return iVar1;
}



// FUNCTION 147472a96 FUN_147472a96 body=63 status=ok
// SIG undefined FUN_147472a96(void)

void FUN_147472a96(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147472ad6(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_144a7f90c(param_1,*(undefined4 *)(param_1 + 8),iVar1,2,2);
  }
  return;
}



// FUNCTION 147472ad6 FUN_147472ad6 body=95 status=ok
// SIG undefined FUN_147472ad6(void)

ulonglong FUN_147472ad6(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x7fffffffffffe000U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e(param_2 * 2,2);
      uVar1 = uVar1 >> 1;
    }
  }
  return uVar1;
}



// FUNCTION 147472b36 FUN_147472b36 body=203 status=ok
// SIG undefined FUN_147472b36(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147472b36(longlong param_1,undefined8 param_2,undefined8 param_3)

{
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
  FUN_1467ac8f2(param_1,&DAT_14ca84cb0,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                param_2,param_3);
  return;
}



// FUNCTION 147472c02 FUN_147472c02 body=102 status=ok
// SIG undefined FUN_147472c02(void)

void FUN_147472c02(ulonglong *param_1,int param_2,uint param_3)

{
  void *_Src;
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_3;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_3) {
    FUN_141794766(param_1,iVar1);
  }
  uVar2 = *param_1;
  uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)param_1;
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2;
  }
  _Src = (void *)(uVar3 + (longlong)param_2 * 2);
  memmove((void *)((longlong)_Src + (longlong)(int)param_3 * 2),_Src,
          (ulonglong)(uint)(iVar1 - param_2) * 2);
  return;
}



// FUNCTION 147472c68 FUN_147472c68 body=62 status=ok
// SIG undefined FUN_147472c68(void)

void FUN_147472c68(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147472ca6(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 147472ca6 FUN_147472ca6 body=93 status=ok
// SIG undefined FUN_147472ca6(void)

ulonglong FUN_147472ca6(uint param_1,uint param_2)

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



// FUNCTION 147472d03 FUN_147472d03 body=52 status=ok
// SIG undefined FUN_147472d03(void)

void FUN_147472d03(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      puVar1 = *(undefined8 **)(param_1 + lVar2 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 147472d38 FUN_147472d38 body=95 status=ok
// SIG undefined FUN_147472d38(void)

void FUN_147472d38(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 147472d98 FUN_147472d98 body=822 status=ok
// SIG undefined FUN_147472d98(void)

void FUN_147472d98(undefined8 *param_1,longlong param_2,undefined8 *param_3,double *param_4,
                  double *param_5,double *param_6,undefined4 param_7,undefined1 param_8,
                  undefined4 param_9,undefined4 param_10)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
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
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_LAB_14a3d0e00;
  *(undefined4 *)(param_1 + 3) = param_10;
  *(undefined4 *)((longlong)param_1 + 0x1c) = param_9;
  param_1[4] = 0x8000000080000000;
  param_1[5] = *param_3;
  param_1[6] = *(undefined8 *)(param_2 + 0x218);
  *(undefined2 *)(param_1 + 7) = 0;
  *param_1 = &PTR_FUN_14a3d4340;
  *(undefined1 *)(param_1 + 8) = param_8;
  *(undefined4 *)((longlong)param_1 + 0x44) = param_7;
  dVar8 = *param_4 * param_6[8];
  dVar10 = param_4[1] * param_6[9];
  dVar12 = param_4[2] * param_6[10];
  dVar6 = *param_6;
  dVar7 = param_6[1];
  dVar9 = param_6[2];
  dVar1 = param_6[3];
  dVar11 = dVar10 * dVar6 - dVar8 * dVar7;
  dVar13 = dVar12 * dVar7 - dVar10 * dVar9;
  dVar14 = dVar8 * dVar9 - dVar6 * dVar12;
  dVar13 = dVar13 + dVar13;
  dVar14 = dVar14 + dVar14;
  dVar11 = dVar11 + dVar11;
  dVar5 = (dVar9 * dVar13 - dVar6 * dVar11) + param_6[3] * dVar14 + dVar10 + param_6[5];
  dVar10 = param_6[6];
  auVar2._8_4_ = SUB84(dVar5,0);
  auVar2._0_8_ = (dVar11 * dVar7 - dVar14 * dVar9) + dVar1 * dVar13 + dVar8 + param_6[4];
  auVar2._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 9) = auVar2;
  param_1[0xb] = dVar11 * dVar1 + dVar12 + (dVar14 * dVar6 - dVar13 * dVar7) + dVar10;
  dVar9 = *param_5 * param_6[8];
  dVar14 = param_5[1] * param_6[9];
  dVar10 = param_5[2] * param_6[10];
  dVar5 = *param_6;
  dVar6 = param_6[1];
  dVar7 = param_6[2];
  dVar1 = param_6[3];
  dVar12 = dVar14 * dVar5 - dVar9 * dVar6;
  dVar8 = dVar10 * dVar6 - dVar14 * dVar7;
  dVar11 = dVar9 * dVar7 - dVar5 * dVar10;
  dVar8 = dVar8 + dVar8;
  dVar11 = dVar11 + dVar11;
  dVar12 = dVar12 + dVar12;
  dVar14 = (dVar7 * dVar8 - dVar5 * dVar12) + param_6[3] * dVar11 + dVar14;
  auVar3._8_4_ = SUB84(dVar14,0);
  auVar3._0_8_ = (dVar12 * dVar6 - dVar11 * dVar7) + dVar1 * dVar8 + dVar9;
  auVar3._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0xc) = auVar3;
  param_1[0xe] = dVar12 * dVar1 + dVar10 + (dVar11 * dVar5 - dVar8 * dVar6);
  dVar9 = *param_5 * param_6[8];
  dVar14 = param_5[1] * param_6[9];
  dVar10 = param_5[2] * param_6[10];
  dVar5 = *param_6;
  dVar6 = param_6[1];
  dVar7 = param_6[2];
  dVar1 = param_6[3];
  dVar12 = dVar14 * dVar5 - dVar9 * dVar6;
  dVar8 = dVar10 * dVar6 - dVar14 * dVar7;
  dVar11 = dVar9 * dVar7 - dVar5 * dVar10;
  dVar8 = dVar8 + dVar8;
  dVar11 = dVar11 + dVar11;
  dVar12 = dVar12 + dVar12;
  dVar14 = (dVar7 * dVar8 - dVar5 * dVar12) + param_6[3] * dVar11 + dVar14;
  auVar4._8_4_ = SUB84(dVar14,0);
  auVar4._0_8_ = (dVar12 * dVar6 - dVar11 * dVar7) + dVar1 * dVar8 + dVar9;
  auVar4._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0xf) = auVar4;
  param_1[0x11] = dVar12 * dVar1 + dVar10 + (dVar11 * dVar5 - dVar8 * dVar6);
  return;
}



// FUNCTION 1474730ce FUN_1474730ce body=29 status=ok
// SIG undefined FUN_1474730ce(void)

undefined8 FUN_1474730ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147473104 FUN_147473104 body=45 status=ok
// SIG undefined FUN_147473104(void)

void FUN_147473104(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[6] = 0;
  puVar2 = &DAT_14c846400;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_3 = *puVar2;
    puVar2 = puVar2 + 1;
    param_3 = param_3 + 1;
  }
  return;
}



// FUNCTION 14747316c FUN_14747316c body=132 status=ok
// SIG undefined FUN_14747316c(void)

void FUN_14747316c(longlong param_1,int param_2)

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



// FUNCTION 1474731f1 FUN_1474731f1 body=103 status=ok
// SIG undefined FUN_1474731f1(void)

bool FUN_1474731f1(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  
  if (param_3 == 0) {
    bVar5 = true;
  }
  else {
    lVar4 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar4 * 8);
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_1456cec3c(lVar1);
        bVar2 = DAT_14c950c29;
      }
      bVar5 = *(longlong *)(param_1 + lVar4 * 8) == lVar1;
    } while ((bVar5) && (iVar3 = (int)lVar4, lVar4 = lVar4 + 1, param_3 + -1 != iVar3));
  }
  return bVar5;
}



// FUNCTION 147473258 FUN_147473258 body=56 status=ok
// SIG undefined FUN_147473258(void)

void FUN_147473258(longlong param_1)

{
  FUN_147472d03(*(undefined8 *)(param_1 + 0x8c0),*(undefined4 *)(param_1 + 0x8c8));
  if (*(longlong *)(param_1 + 0x8c0) != 0) {
    FUN_1400020a8();
  }
  FUN_140208272(param_1);
  return;
}



// FUNCTION 147473294 FUN_147473294 body=76 status=ok
// SIG undefined FUN_147473294(void)

void FUN_147473294(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  local_10 = 0xffffffff;
  FUN_14326f402(param_1,1,1);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474732ec FUN_1474732ec body=75 status=ok
// SIG undefined FUN_1474732ec(void)

void FUN_1474732ec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_147473338(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147473338 FUN_147473338 body=548 status=ok
// SIG undefined FUN_147473338(void)

void FUN_147473338(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  ulonglong *puVar6;
  longlong lVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_78 [44];
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  switchD_143c3d4dc::caseD_21();
  iVar2 = *(int *)(param_1 + 0x50);
  iVar3 = *(int *)(param_1 + 0x28);
  iVar4 = *(int *)(param_1 + 0x2c);
  puVar5 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar5 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x28),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x28) = *puVar5;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar5 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar5 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x2c),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x2c) = *puVar5;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_14480c34d(param_2,param_1 + 0x30);
  local_4c = *(int *)(param_1 + 0x50);
  puVar6 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar6 + 1;
  if ((int *)puVar6[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_4c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_4c);
    }
  }
  else {
    local_4c = *(int *)*puVar6;
    *puVar6 = (ulonglong)piVar1;
  }
  lVar9 = (longlong)iVar2 - (longlong)iVar3;
  lVar7 = (longlong)iVar2 - (longlong)iVar4;
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if (0 < local_4c) {
      lVar11 = 0;
      lVar10 = 0;
      do {
        uVar8 = 0x48;
        if (lVar10 < lVar7) {
          uVar8 = 0x400;
        }
        if (lVar10 < lVar9) {
          uVar8 = 0xc00;
        }
        FUN_14747362c(*(longlong *)(param_1 + 0x48) + lVar11,param_2,param_1,uVar8);
        lVar10 = lVar10 + 1;
        lVar11 = lVar11 + 0x38;
      } while (lVar10 < local_4c);
    }
  }
  else if ((-1 < local_4c) && (FUN_14747534c(param_1 + 0x48), 0 < local_4c)) {
    lVar11 = 0;
    lVar10 = 0;
    do {
      uVar8 = 0x48;
      if (lVar10 < (int)lVar7) {
        uVar8 = 0x400;
      }
      if (lVar10 < (int)lVar9) {
        uVar8 = 0xc00;
      }
      FUN_14747362c(*(longlong *)(param_1 + 0x48) + lVar11,param_2,param_1,uVar8);
      lVar10 = lVar10 + 1;
      lVar11 = lVar11 + 0x38;
    } while (lVar10 < local_4c);
  }
  (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0x58);
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14747355e FUN_14747355e body=143 status=ok
// SIG undefined FUN_14747355e(void)

undefined8 * FUN_14747355e(undefined8 *param_1,longlong param_2)

{
  FUN_147d64f1e(param_1,*(undefined8 *)(param_2 + 0x58),0,0);
  *param_1 = &PTR_FUN_14a3d55b0;
  param_1[0x32] = 0;
  param_1[0x33] = 0xf00000000;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  param_1[0x36] = 0;
  param_1[0x38] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ab) = 0;
  param_1[4] = param_2;
  if (*(longlong *)(param_2 + 0x58) != 0) {
    *(undefined8 *)((longlong)param_1 + 0x1a4) =
         *(undefined8 *)(*(longlong *)(param_2 + 0x58) + 0x18);
  }
  return param_1;
}



// FUNCTION 1474735ee FUN_1474735ee body=62 status=ok
// SIG undefined FUN_1474735ee(void)

void FUN_1474735ee(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x168);
  if (*(longlong *)(param_1 + 0x168) == 0) {
    lVar1 = param_1;
  }
  FUN_147475317(lVar1,*(undefined4 *)(param_1 + 0x170));
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14747362c FUN_14747362c body=354 status=ok
// SIG undefined FUN_14747362c(void)

void FUN_14747362c(undefined4 *param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_40;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1,4);
    }
    else {
      thunk_FUN_14572512c(param_2,param_1);
    }
  }
  else {
    *param_1 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 1,4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    param_1[1] = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  piVar2 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar2 + 1) {
    local_34 = (uint)*(byte *)(param_1 + 2);
    (**(code **)(*param_2 + 0x170))(param_2,&local_34,4);
    if (1 < local_34) {
      FUN_14572541c(param_2);
    }
    *(bool *)(param_1 + 2) = local_34 != 0;
  }
  else {
    *(bool *)(param_1 + 2) = *piVar2 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  local_40 = 0;
  local_48 = 0;
  FUN_147473790(param_1 + 4,param_2,param_3,param_4);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147473790 FUN_147473790 body=169 status=ok
// SIG undefined FUN_147473790(void)

void FUN_147473790(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  undefined4 uVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_5);
  if ((*(byte *)(param_2 + 0x28) & 4) == 0) {
    FUN_140430222(param_1,param_2,param_3,uVar2 & 0xffffffff,1,param_6);
    return;
  }
  uVar1 = FUN_144aff85e(param_1);
  FUN_14688874a(param_1,param_4);
  FUN_140430222(param_1,param_2,param_3,uVar2 & 0xffffffff,1,param_6);
  FUN_1468888b2(param_1,uVar1);
  return;
}



// FUNCTION 14747383a FUN_14747383a body=354 status=ok
// SIG undefined FUN_14747383a(void)

char * FUN_14747383a(longlong param_1,char *param_2,longlong *param_3,char param_4)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar1 = *(int *)(param_1 + 0x50);
  iVar4 = (**(code **)(*param_3 + 0x2e8))(param_3);
  uVar5 = iVar4 - (int)param_3[9];
  if ((int)(iVar1 - 1U) <= (int)uVar5) {
    uVar5 = iVar1 - 1U;
  }
  if ((int)uVar5 < 1) {
    uVar5 = 0;
  }
  iVar4 = iVar1 - uVar5;
  if (DAT_14ca84d90 < (int)(iVar1 - uVar5)) {
    iVar4 = DAT_14ca84d90;
  }
  iVar9 = 0x10;
  if (iVar4 < 0x10) {
    iVar9 = iVar4;
  }
  iVar8 = *(int *)(param_1 + 0x2c);
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar9 < *(int *)(param_1 + 0x28)) {
    iVar2 = iVar9;
  }
  uVar5 = iVar1 - iVar9;
  if (iVar1 - iVar9 < 1) {
    uVar5 = 0;
  }
  iVar1 = iVar8;
  if (iVar9 < iVar8) {
    iVar1 = iVar9;
  }
  iVar6 = iVar9;
  if (iVar8 < iVar9) {
    if (param_4 != '\0') {
      uVar7 = FUN_140083894();
      cVar3 = FUN_1406bafe2(uVar7,1);
      iVar6 = iVar1;
      if (cVar3 != '\0') goto LAB_14747395d;
    }
    iVar6 = (**(code **)(*param_3 + 0x2e8))();
    iVar8 = 0;
    if (0 < (int)(iVar6 - uVar5)) {
      iVar8 = iVar6 - uVar5;
    }
    iVar10 = 1;
    if (1 < iVar9 - iVar8) {
      iVar10 = iVar9 - iVar8;
    }
    iVar6 = iVar10;
    if (((iVar2 < iVar10) && (iVar6 = iVar2, (int)uVar5 < *(int *)(param_1 + 0x50))) &&
       (cVar3 = FUN_146888846((ulonglong)uVar5 * 0x38 + *(longlong *)(param_1 + 0x48) + 0x10),
       iVar6 = iVar10, cVar3 == '\0')) {
      iVar6 = iVar2;
    }
    if (iVar6 < iVar1) {
      iVar6 = iVar1;
    }
  }
LAB_14747395d:
  iVar8 = 0;
  if (0 < iVar6) {
    iVar8 = iVar6;
  }
  cVar3 = (char)iVar8;
  param_2[0] = '\0';
  param_2[1] = '\0';
  param_2[2] = '\0';
  param_2[3] = '\0';
  param_2[4] = '\0';
  param_2[5] = '\0';
  param_2[6] = '\0';
  param_2[7] = '\0';
  *param_2 = param_4;
  param_2[1] = (char)iVar1;
  param_2[2] = (char)iVar2;
  param_2[3] = (char)iVar9;
  if (iVar4 < 1) {
    cVar3 = (char)iVar6;
  }
  param_2[4] = (char)uVar5;
  param_2[5] = cVar3;
  param_2[6] = cVar3;
  return param_2;
}



// FUNCTION 14747399c FUN_14747399c body=641 status=ok
// SIG undefined FUN_14747399c(void)

void FUN_14747399c(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 auStack_158 [32];
  longlong local_138;
  undefined8 uStack_130;
  longlong local_128;
  longlong *local_118 [2];
  longlong local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  code *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  longlong *local_98 [2];
  longlong local_88 [4];
  longlong local_68;
  undefined8 uStack_60;
  longlong *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  uStack_130 = *(undefined8 *)(param_2 + 8);
  local_a8 = *(longlong *)(param_2 + 0x10);
  local_98[0] = (longlong *)0x0;
  local_138 = param_1;
  if (local_a8 == 0) {
    local_128 = 0;
    local_118[0] = (longlong *)0x0;
  }
  else {
    puVar7 = (undefined8 *)(param_2 + 0x30);
    if (*(undefined8 **)(param_2 + 0x20) != (undefined8 *)0x0) {
      puVar7 = *(undefined8 **)(param_2 + 0x20);
    }
    (**(code **)*puVar7)(puVar7,local_98);
    local_128 = local_a8;
    local_118[0] = (longlong *)0x0;
    if (local_a8 != 0) {
      plVar8 = local_98[0];
      if (local_98[0] == (longlong *)0x0) {
        plVar8 = local_88;
      }
      (**(code **)*plVar8)(plVar8,local_118);
    }
  }
  local_e8 = (code *)0x0;
  puVar7 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  *puVar7 = &PTR_FUN_14a3d7390;
  puVar7[2] = local_138;
  puVar7[3] = uStack_130;
  puVar7[4] = local_128;
  puVar7[6] = local_118[0];
  local_118[0] = (longlong *)0x0;
  puVar7[10] = local_f8;
  puVar7[0xb] = uStack_f0;
  puVar7[8] = local_108;
  puVar7[9] = uStack_100;
  if (local_128 != 0) {
    local_128 = 0;
  }
  if (puVar7 != (undefined8 *)&DAT_fffffffffffffff0) {
    local_e8 = FUN_143270ed2;
  }
  local_68 = *(longlong *)(param_1 + 0x1b0);
  uStack_60 = *(undefined8 *)(param_1 + 0x1b8);
  local_58 = *(longlong **)(param_1 + 0x1c0);
  uStack_50 = *(undefined8 *)(param_1 + 0x1c8);
  local_48 = *(undefined8 *)(param_1 + 0x1d0);
  uStack_40 = *(undefined8 *)(param_1 + 0x1d8);
  local_38 = *(undefined8 *)(param_1 + 0x1e0);
  uStack_30 = *(undefined8 *)(param_1 + 0x1e8);
  uVar5 = local_38;
  uVar6 = uStack_30;
  uVar3 = local_48;
  uVar4 = uStack_40;
  uVar2 = uStack_50;
  uVar1 = uStack_60;
  *(ulonglong *)(param_1 + 0x1e0) = CONCAT44(uStack_b4,local_b8);
  *(ulonglong *)(param_1 + 0x1e8) = CONCAT44(uStack_ac,uStack_b0);
  *(ulonglong *)(param_1 + 0x1d0) = CONCAT44(uStack_c4,local_c8);
  *(ulonglong *)(param_1 + 0x1d8) = CONCAT44(uStack_bc,uStack_c0);
  *(undefined8 **)(param_1 + 0x1c0) = puVar7;
  *(ulonglong *)(param_1 + 0x1c8) = CONCAT44(uStack_cc,uStack_d0);
  *(code **)(param_1 + 0x1b0) = local_e8;
  *(ulonglong *)(param_1 + 0x1b8) = CONCAT44(uStack_dc,uStack_e0);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_b8 = (undefined4)local_38;
  uStack_b4 = local_38._4_4_;
  uStack_b0 = (undefined4)uStack_30;
  uStack_ac = uStack_30._4_4_;
  local_c8 = (undefined4)local_48;
  uStack_c4 = local_48._4_4_;
  uStack_c0 = (undefined4)uStack_40;
  uStack_bc = uStack_40._4_4_;
  local_d8 = local_58;
  uStack_d0 = (undefined4)uStack_50;
  uStack_cc = uStack_50._4_4_;
  local_e8 = (code *)local_68;
  uStack_e0 = (undefined4)uStack_60;
  uStack_dc = uStack_60._4_4_;
  uStack_60 = uVar1;
  uStack_50 = uVar2;
  local_48 = uVar3;
  uStack_40 = uVar4;
  local_38 = uVar5;
  uStack_30 = uVar6;
  if (local_68 != 0) {
    plVar8 = local_d8;
    if (local_58 == (longlong *)0x0) {
      plVar8 = (longlong *)&local_c8;
    }
    (**(code **)(*plVar8 + 0x10))();
    if (local_128 != 0) {
      plVar8 = local_118[0];
      if (local_118[0] == (longlong *)0x0) {
        plVar8 = &local_108;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  if (local_a8 != 0) {
    plVar8 = local_98[0];
    if (local_98[0] == (longlong *)0x0) {
      plVar8 = local_88;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147473c1e FUN_147473c1e body=121 status=ok
// SIG undefined FUN_147473c1e(void)

void FUN_147473c1e(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = *(longlong *)(param_1 + 400);
  if (*(longlong *)(param_1 + 400) == 0) {
    lVar4 = param_1 + 0x28;
  }
  iVar1 = *(int *)(param_1 + 0x198);
  if ((longlong)iVar1 != 0) {
    lVar5 = 0;
    do {
      plVar2 = *(longlong **)(lVar4 + 8 + lVar5);
      if (plVar2 != (longlong *)0x0) {
        cVar3 = (**(code **)(*plVar2 + 8))();
        if (cVar3 == '\0') {
          (**(code **)(**(longlong **)(lVar4 + 8 + lVar5) + 0x28))();
          plVar2 = *(longlong **)(lVar4 + 8 + lVar5);
          (**(code **)(*plVar2 + 0x10))(plVar2,0);
        }
      }
      lVar5 = lVar5 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar5);
  }
  FUN_147473c98(param_1 + 0x28);
  return;
}



// FUNCTION 147473c98 FUN_147473c98 body=71 status=ok
// SIG undefined FUN_147473c98(void)

void FUN_147473c98(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x168);
  if (*(longlong *)(param_1 + 0x168) == 0) {
    lVar1 = param_1;
  }
  FUN_147475317(lVar1,*(undefined4 *)(param_1 + 0x170));
  *(undefined4 *)(param_1 + 0x170) = 0;
  if (*(int *)(param_1 + 0x174) == 0) {
    return;
  }
  FUN_147475590(param_1);
  return;
}



// FUNCTION 147473ce0 FUN_147473ce0 body=295 status=ok
// SIG undefined FUN_147473ce0(void)

void FUN_147473ce0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar1 = param_1 + 0x28;
  FUN_147473e08(lVar1,*(undefined4 *)(param_1 + 0x10));
  if (*(byte *)(param_1 + 10) < *(byte *)(param_1 + 0xb)) {
    iVar4 = *(int *)(param_1 + 0x14);
    if (0 < iVar4 && iVar4 < (int)((uint)*(byte *)(param_1 + 0xb) - (uint)*(byte *)(param_1 + 10)))
    {
      lVar6 = 0;
      lVar7 = 0;
      lVar8 = 0;
      do {
        if (lVar8 < *(int *)(*(longlong *)(param_1 + 0x20) + 0x50)) {
          lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x48) + lVar7;
        }
        else {
          lVar5 = 0;
        }
        uVar3 = FUN_1411c4210(lVar5 + 0x28);
        lVar5 = *(longlong *)(param_1 + 400);
        if (*(longlong *)(param_1 + 400) == 0) {
          lVar5 = lVar1;
        }
        *(undefined4 *)(lVar5 + lVar6) = uVar3;
        lVar8 = lVar8 + 1;
        iVar4 = *(int *)(param_1 + 0x14);
        lVar7 = lVar7 + 0x38;
        lVar6 = lVar6 + 0x18;
      } while (lVar8 < iVar4);
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 0x14);
  }
  if (iVar4 < *(int *)(param_1 + 0x10)) {
    lVar7 = (longlong)iVar4;
    lVar8 = lVar7 * 0x38;
    lVar6 = lVar7 * 0x18;
    do {
      if ((lVar7 < 0) || (*(int *)(*(longlong *)(param_1 + 0x20) + 0x50) <= lVar7)) {
        lVar5 = 0;
      }
      else {
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x48) + lVar8;
      }
      cVar2 = FUN_1427d88cc(lVar5 + 0x10);
      if ((cVar2 == '\0') && (*(char *)(lVar5 + 0x1c) != '\0' || *(int *)(lVar5 + 0x18) != 0)) {
        uVar3 = FUN_1411c4210(lVar5 + 0x28);
        lVar5 = *(longlong *)(param_1 + 400);
        if (*(longlong *)(param_1 + 400) == 0) {
          lVar5 = lVar1;
        }
        *(undefined4 *)(lVar5 + lVar6) = uVar3;
      }
      lVar7 = lVar7 + 1;
      lVar8 = lVar8 + 0x38;
      lVar6 = lVar6 + 0x18;
    } while (lVar7 < *(int *)(param_1 + 0x10));
  }
  *(undefined8 *)(param_1 + 0x18) = 1;
  return;
}



// FUNCTION 147473e08 FUN_147473e08 body=86 status=ok
// SIG undefined FUN_147473e08(void)

void FUN_147473e08(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar1 + param_2;
  if ((uint)(*(int *)(param_1 + 0x174) - iVar1) < param_2) {
    FUN_14747569e(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x168);
  if (*(longlong *)(param_1 + 0x168) == 0) {
    lVar2 = param_1;
  }
  FUN_147475683(lVar2 + (longlong)iVar1 * 0x18,param_2);
  return;
}



// FUNCTION 147473e5e FUN_147473e5e body=466 status=ok
// SIG undefined FUN_147473e5e(void)

uint FUN_147473e5e(longlong param_1,undefined8 param_2,uint param_3,longlong param_4,
                  longlong param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  
  FUN_14747399c(param_1,param_5);
  *(uint *)(param_1 + 0x1a0) = param_3;
  uVar7 = param_3;
  if ((int)param_3 < *(int *)(param_1 + 0x10)) {
    lVar1 = param_1 + 0x28;
    lVar11 = (ulonglong)param_3 * 0x18;
    lVar8 = (ulonglong)param_3 * 0x38 + 0x10;
    while ((-1 < (int)param_3 && ((int)uVar7 < *(int *)(param_4 + 0x2d8)))) {
      lVar10 = *(longlong *)(param_4 + 0x2d0);
      if (*(longlong *)(param_4 + 0x2d0) == 0) {
        lVar10 = param_4;
      }
      if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x50) <= (int)uVar7) break;
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x48);
      if ((lVar6 + lVar8 == 0x10) || (*(longlong *)(lVar10 + lVar11 * 2) == 0)) break;
      lVar5 = *(longlong *)(param_1 + 400);
      if (*(longlong *)(param_1 + 400) == 0) {
        lVar5 = lVar1;
      }
      if ((*(int *)(lVar5 + lVar11) == 0) ||
         ((uVar9 = *(ulonglong *)(lVar10 + 8 + lVar11 * 2), uVar9 != 0 &&
          (uVar9 < CONCAT14(*(undefined1 *)(lVar6 + 0xc + lVar8),*(undefined4 *)(lVar6 + 8 + lVar8))
          )))) break;
      LOCK();
      **(int **)(param_5 + 8) = **(int **)(param_5 + 8) + 1;
      UNLOCK();
      uVar9 = (ulonglong)
              CONCAT14(*(undefined1 *)(lVar6 + 0xc + lVar8),*(undefined4 *)(lVar6 + 8 + lVar8));
      uVar3 = FUN_14001cc68(uVar9,0);
      lVar5 = *(longlong *)(param_1 + 400);
      if (*(longlong *)(param_1 + 400) == 0) {
        lVar5 = lVar1;
      }
      puVar4 = (undefined8 *)
               FUN_1411dbcc4(lVar6 + lVar8,0,uVar9,*(byte *)(param_1 + 0x1ac) + 0x201,
                             param_1 + 0x1b0,uVar3);
      puVar2 = *(undefined8 **)(lVar5 + 8 + lVar11);
      if ((puVar2 != puVar4) &&
         (*(undefined8 **)(lVar5 + 8 + lVar11) = puVar4, puVar2 != (undefined8 *)0x0)) {
        (**(code **)*puVar2)();
      }
      lVar6 = *(longlong *)(param_1 + 400);
      if (*(longlong *)(param_1 + 400) == 0) {
        lVar6 = lVar1;
      }
      *(undefined8 *)(lVar6 + 0x10 + lVar11) = *(undefined8 *)(lVar10 + lVar11 * 2);
      uVar7 = uVar7 + 1;
      lVar11 = lVar11 + 0x18;
      lVar8 = lVar8 + 0x38;
      if (*(int *)(param_1 + 0x10) <= (int)uVar7) break;
    }
  }
  *(undefined8 *)(param_1 + 0x18) = 2;
  return uVar7;
}



// FUNCTION 147474030 FUN_147474030 body=95 status=ok
// SIG undefined FUN_147474030(void)

void FUN_147474030(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_1 + 0x28;
  if (*(longlong *)(param_1 + 400) != 0) {
    lVar3 = *(longlong *)(param_1 + 400);
  }
  iVar1 = *(int *)(param_1 + 0x198);
  if ((longlong)iVar1 != 0) {
    lVar4 = 0;
    do {
      plVar2 = *(longlong **)(lVar3 + 8 + lVar4);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x28))();
        *(undefined1 *)(param_1 + 0x1ae) = 1;
      }
      lVar4 = lVar4 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar4);
  }
  return;
}



// FUNCTION 1474740b6 FUN_1474740b6 body=251 status=ok
// SIG undefined FUN_1474740b6(void)

undefined4 FUN_1474740b6(undefined8 param_1,longlong param_2,char param_3)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  FUN_14485c47a(&local_30);
  piVar3 = (int *)FUN_147475728(param_1,(uint)((ulonglong)local_30 >> 0x20) ^ (uint)local_30,
                                &local_30);
  iVar4 = *piVar3;
  if ((*(byte *)(param_2 + 0xbc) & 8) == 0 || iVar4 == 0) {
    *(byte *)(param_2 + 0xbc) = *(byte *)(param_2 + 0xbc) | 8;
    iVar4 = *piVar3;
  }
  *piVar3 = iVar4 + 1;
  uVar2 = 0;
  if (param_2 == 0) {
    if (param_3 != '\0') {
      FUN_147d5ed04(0,0,0);
      uVar2 = 0;
    }
  }
  else {
    cVar1 = FUN_1402bfec4(param_2,0);
    if (cVar1 == '\0') {
      uVar2 = FUN_14371c02c(param_2);
    }
    if (param_3 == '\x01' && (char)uVar2 == '\0') {
      FUN_147d5ed04(param_2,0,0);
      cVar1 = FUN_1402bfec4(param_2,0);
      uVar2 = 0;
      if (cVar1 == '\0') {
        uVar2 = FUN_14371c02c(param_2);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474741b2 FUN_1474741b2 body=45 status=ok
// SIG undefined FUN_1474741b2(void)

undefined8 FUN_1474741b2(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    cVar1 = FUN_1402bfec4(param_1,0);
    if (cVar1 == '\0') {
      uVar2 = FUN_14371c02c(param_1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1474741e0 FUN_1474741e0 body=169 status=ok
// SIG undefined FUN_1474741e0(void)

undefined8 FUN_1474741e0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  
  if ((longlong)DAT_14caa7b20 != 0) {
    plVar3 = DAT_14caa7b18;
    do {
      plVar1 = (longlong *)*plVar3;
      if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
        plVar5 = plVar1 + 7;
        if ((longlong *)plVar1[8] != (longlong *)0x0) {
          plVar5 = (longlong *)plVar1[8];
        }
        iVar4 = *(int *)((longlong)plVar5 +
                        (ulonglong)
                        ((int)plVar1[9] - 1U & ((uint)((ulonglong)param_1 >> 0x20) ^ (uint)param_1))
                        * 4);
        if (iVar4 != -1) {
          do {
            plVar5 = (longlong *)(*plVar1 + (longlong)iVar4 * 0x18);
            if (*plVar5 == param_1) {
              if (plVar5 + 1 != (longlong *)0x0 && plVar5 != (longlong *)0x0) {
                uVar2 = CONCAT71((int7)((ulonglong)*plVar1 >> 8),1);
                if (*(char *)((longlong)plVar5 + 0xc) != '\0') {
                  return uVar2;
                }
                if (0 < (int)plVar5[1]) {
                  return uVar2;
                }
              }
              break;
            }
            iVar4 = (int)plVar5[2];
          } while (iVar4 != -1);
        }
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != DAT_14caa7b18 + DAT_14caa7b20);
  }
  return 0;
}



// FUNCTION 14747428a FUN_14747428a body=145 status=ok
// SIG undefined FUN_14747428a(void)

void FUN_14747428a(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  FUN_14356d31c();
  lVar2 = FUN_144aff0e0(&local_20);
  if ((((*(byte *)(lVar2 + 0x28) & 1) != 0) && (*(int *)(lVar2 + 0x40) < 0x17c)) &&
     (iVar1 = *(int *)(param_1 + 0xb8), (longlong)iVar1 != 0)) {
    lVar2 = *(longlong *)(param_1 + 0xb0);
    lVar3 = 0;
    do {
      if (*(char *)(lVar2 + 8 + lVar3) == '\x01') {
        *(undefined1 *)(lVar2 + 8 + lVar3) = 0;
      }
      lVar3 = lVar3 + 0x88;
    } while ((longlong)iVar1 * 0x88 != lVar3);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14747432c FUN_14747432c body=112 status=ok
// SIG undefined FUN_14747432c(void)

undefined8 FUN_14747432c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  ulonglong *local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = *(undefined8 *)(DAT_14cb0d2b0 + 0xba0);
  local_30 = &local_20;
  local_18 = *(undefined8 *)(DAT_14cb0d2b0 + 0xba8);
  local_28 = &local_10;
  FUN_14745332a(param_2);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474743b2 FUN_1474743b2 body=112 status=ok
// SIG undefined FUN_1474743b2(void)

undefined8 FUN_1474743b2(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  ulonglong *local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = *(undefined8 *)(DAT_14cb0d2b0 + 0xba0);
  local_30 = &local_20;
  local_18 = *(undefined8 *)(DAT_14cb0d2b0 + 0xba8);
  local_28 = &local_10;
  FUN_14745332a(param_2);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147474430 FUN_147474430 body=115 status=ok
// SIG undefined FUN_147474430(void)

void FUN_147474430(undefined8 param_1)

{
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined1 local_1b0 [400];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  FUN_144aff0aa(local_1b0);
  FUN_144aff0c8(local_1b0,&local_1b8);
  FUN_1474744a4(param_1,local_1b8);
  FUN_144aff0d4(local_1b0);
  if ((local_20 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474744a4 FUN_1474744a4 body=197 status=ok
// SIG undefined FUN_1474744a4(void)

void FUN_1474744a4(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = param_2;
  FUN_14356d31c();
  lVar3 = FUN_144aff0e0(&local_50);
  if (*(int *)(lVar3 + 0x40) < 0xf5) {
    local_28 = *(undefined8 *)(param_1 + 0xd0);
    uVar1 = *(undefined8 *)(param_1 + 0xb0);
    uVar2 = *(undefined8 *)(param_1 + 0xb8);
    local_38 = *(undefined8 *)(param_1 + 0xc0);
    uStack_30 = *(undefined8 *)(param_1 + 200);
    *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0xd8);
    *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0xe0);
    *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_1 + 0xe8);
    *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0xf0);
    *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0xf8);
    local_48._0_4_ = (undefined4)uVar1;
    local_48._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
    uStack_40._0_4_ = (undefined4)uVar2;
    uStack_40._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
    *(undefined4 *)(param_1 + 0xd8) = (undefined4)local_48;
    *(undefined4 *)(param_1 + 0xdc) = local_48._4_4_;
    *(undefined4 *)(param_1 + 0xe0) = (undefined4)uStack_40;
    *(undefined4 *)(param_1 + 0xe4) = uStack_40._4_4_;
    *(undefined8 *)(param_1 + 0xe8) = local_38;
    *(undefined8 *)(param_1 + 0xf0) = uStack_30;
    *(undefined8 *)(param_1 + 0xf8) = local_28;
    local_48 = uVar1;
    uStack_40 = uVar2;
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14747457a FUN_14747457a body=112 status=ok
// SIG undefined FUN_14747457a(void)

undefined8 FUN_14747457a(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  ulonglong *local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = *(undefined8 *)(DAT_14cb0d2b0 + 0xba0);
  local_30 = &local_20;
  local_18 = *(undefined8 *)(DAT_14cb0d2b0 + 0xba8);
  local_28 = &local_10;
  FUN_14745332a(param_2);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474745ec FUN_1474745ec body=95 status=ok
// SIG undefined FUN_1474745ec(void)

void FUN_1474745ec(undefined8 param_1)

{
  undefined1 auStack_48 [40];
  int local_20 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14356d3f8();
  FUN_144842a8a(param_1,local_20);
  if (local_20[0] < 0x108) {
    FUN_147bb3040(param_1,1,1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147474650 FUN_147474650 body=95 status=ok
// SIG undefined FUN_147474650(void)

void FUN_147474650(undefined8 param_1)

{
  undefined1 auStack_48 [40];
  int local_20 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14356d3f8();
  FUN_144842a8a(param_1,local_20);
  if (local_20[0] < 0x108) {
    FUN_147bb3040(param_1,1,1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474746c0 FUN_1474746c0 body=112 status=ok
// SIG undefined FUN_1474746c0(void)

undefined8 FUN_1474746c0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  ulonglong *local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = *(undefined8 *)(DAT_14cb0d2b0 + 0xba0);
  local_30 = &local_20;
  local_18 = *(undefined8 *)(DAT_14cb0d2b0 + 0xba8);
  local_28 = &local_10;
  FUN_14745332a(param_2);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14747474a FUN_14747474a body=112 status=ok
// SIG undefined FUN_14747474a(void)

undefined8 FUN_14747474a(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  ulonglong *local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = *(undefined8 *)(DAT_14cb0d2b0 + 0xba0);
  local_30 = &local_20;
  local_18 = *(undefined8 *)(DAT_14cb0d2b0 + 0xba8);
  local_28 = &local_10;
  FUN_14745332a(param_2);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474747c2 FUN_1474747c2 body=45 status=ok
// SIG undefined FUN_1474747c2(void)

longlong FUN_1474747c2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_1457eeb64(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474747f4 FUN_1474747f4 body=39 status=ok
// SIG undefined FUN_1474747f4(void)

void FUN_1474747f4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x1f0,0x10);
  FUN_14747355e(uVar1,param_1);
  return;
}



// FUNCTION 147474820 FUN_147474820 body=89 status=ok
// SIG undefined FUN_147474820(void)

undefined8 * FUN_147474820(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a3d55b0;
  if (param_1[0x36] != 0) {
    plVar1 = param_1 + 0x3a;
    if ((longlong *)param_1[0x38] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x38];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_1474735ee(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147474894 FUN_147474894 body=32 status=ok
// SIG undefined FUN_147474894(void)

undefined8 FUN_147474894(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"GetPhysicalMaterial");
  return param_2;
}



// FUNCTION 147474942 FUN_147474942 body=78 status=ok
// SIG undefined FUN_147474942(void)

undefined8 FUN_147474942(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      lVar1 = param_2 + 0x10 + lVar2;
      *(undefined1 *)(lVar1 + -8) = *(undefined1 *)((undefined8 *)(param_3 + lVar2) + 1);
      *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(param_3 + lVar2);
      FUN_1404d7984();
      lVar2 = lVar2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1474749b8 FUN_1474749b8 body=59 status=ok
// SIG undefined FUN_1474749b8(void)

undefined8 FUN_1474749b8(longlong *param_1)

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



// FUNCTION 1474749fe FUN_1474749fe body=33 status=ok
// SIG undefined FUN_1474749fe(void)

void FUN_1474749fe(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_14102a02c(param_2 + 0x10);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 147474aa8 FUN_147474aa8 body=122 status=ok
// SIG undefined FUN_147474aa8(void)

undefined1 FUN_147474aa8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  byte bVar11;
  longlong lVar12;
  longlong lVar13;
  
  if (param_4 != 0) {
    lVar13 = 0;
    bVar11 = DAT_14c950c29;
    do {
      lVar12 = *(longlong *)(param_3 + lVar13);
      if ((bVar11 & 1) != 0) {
        if (lVar12 == 0) {
          lVar12 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar12 = *(longlong *)(param_3 + lVar13);
          bVar11 = DAT_14c950c29;
        }
      }
      plVar1 = (longlong *)(param_2 + lVar13);
      *plVar1 = lVar12;
      puVar2 = (undefined4 *)(param_3 + 8 + lVar13);
      uVar4 = puVar2[1];
      uVar5 = puVar2[2];
      uVar6 = puVar2[3];
      puVar3 = (undefined4 *)(param_3 + 0x18 + lVar13);
      uVar7 = *puVar3;
      uVar8 = puVar3[1];
      uVar9 = puVar3[2];
      uVar10 = puVar3[3];
      *(undefined4 *)(plVar1 + 1) = *puVar2;
      *(undefined4 *)((longlong)plVar1 + 0xc) = uVar4;
      *(undefined4 *)(plVar1 + 2) = uVar5;
      *(undefined4 *)((longlong)plVar1 + 0x14) = uVar6;
      *(undefined4 *)(plVar1 + 3) = uVar7;
      *(undefined4 *)((longlong)plVar1 + 0x1c) = uVar8;
      *(undefined4 *)(plVar1 + 4) = uVar9;
      *(undefined4 *)((longlong)plVar1 + 0x24) = uVar10;
      plVar1[5] = *(longlong *)(param_3 + 0x28 + lVar13);
      lVar13 = lVar13 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147474b4a FUN_147474b4a body=59 status=ok
// SIG undefined FUN_147474b4a(void)

undefined8 FUN_147474b4a(longlong *param_1)

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



// FUNCTION 147474bec FUN_147474bec body=31 status=ok
// SIG undefined FUN_147474bec(void)

undefined8 FUN_147474bec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147474c26 FUN_147474c26 body=29 status=ok
// SIG undefined FUN_147474c26(void)

bool FUN_147474c26(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147474c44 FUN_147474c44 body=26 status=ok
// SIG undefined FUN_147474c44(void)

bool FUN_147474c44(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147474c5e FUN_147474c5e body=101 status=ok
// SIG undefined FUN_147474c5e(void)

void FUN_147474c5e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3d7160;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a3d70f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147474cc4 FUN_147474cc4 body=101 status=ok
// SIG undefined FUN_147474cc4(void)

void FUN_147474cc4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3d7160;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a3d70f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147474d2a FUN_147474d2a body=134 status=ok
// SIG undefined FUN_147474d2a(void)

void FUN_147474d2a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a3d7160;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a3d70f0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147474da1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147474db0 FUN_147474db0 body=44 status=ok
// SIG undefined FUN_147474db0(void)

void FUN_147474db0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147474dd9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 147474ddc FUN_147474ddc body=144 status=ok
// SIG undefined FUN_147474ddc(void)

bool FUN_147474ddc(longlong param_1,undefined8 param_2)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
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



// FUNCTION 147474e70 FUN_147474e70 body=31 status=ok
// SIG undefined FUN_147474e70(void)

undefined8 FUN_147474e70(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147474eaa FUN_147474eaa body=26 status=ok
// SIG undefined FUN_147474eaa(void)

bool FUN_147474eaa(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147474ec4 FUN_147474ec4 body=101 status=ok
// SIG undefined FUN_147474ec4(void)

void FUN_147474ec4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a3d71d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147474f2a FUN_147474f2a body=101 status=ok
// SIG undefined FUN_147474f2a(void)

void FUN_147474f2a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a3d71d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147474f90 FUN_147474f90 body=134 status=ok
// SIG undefined FUN_147474f90(void)

void FUN_147474f90(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e170a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a3d71d0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147475007. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147475016 FUN_147475016 body=44 status=ok
// SIG undefined FUN_147475016(void)

void FUN_147475016(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014747503f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 147475042 FUN_147475042 body=144 status=ok
// SIG undefined FUN_147475042(void)

bool FUN_147475042(longlong param_1,undefined8 param_2)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
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



// FUNCTION 1474750d6 FUN_1474750d6 body=31 status=ok
// SIG undefined FUN_1474750d6(void)

undefined8 FUN_1474750d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147475110 FUN_147475110 body=101 status=ok
// SIG undefined FUN_147475110(void)

void FUN_147475110(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a3d7320;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147475176 FUN_147475176 body=101 status=ok
// SIG undefined FUN_147475176(void)

void FUN_147475176(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a3d7320;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1474751dc FUN_1474751dc body=134 status=ok
// SIG undefined FUN_1474751dc(void)

void FUN_1474751dc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a3d7320;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147475253. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147475262 FUN_147475262 body=39 status=ok
// SIG undefined FUN_147475262(void)

void FUN_147475262(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147475285. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 14747528a FUN_14747528a body=140 status=ok
// SIG undefined FUN_14747528a(void)

void FUN_14747528a(int param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = DAT_14caa7ad8;
  if (param_1 <= (int)DAT_14caa7ad8) {
    if (DAT_14caa7adc == 0) {
      uVar2 = 4;
      if (4 < DAT_14caa7ad8) {
        uVar2 = DAT_14caa7ad8;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)DAT_14caa7ad8 + ((ulonglong)((longlong)(int)DAT_14caa7ad8 * 3) >> 3) +
              0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    DAT_14caa7adc = (int)uVar5;
    FUN_1446f8d3c(&DAT_14caa7ad0,param_1,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147475317 FUN_147475317 body=52 status=ok
// SIG undefined FUN_147475317(void)

void FUN_147475317(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 8);
    do {
      puVar1 = (undefined8 *)*plVar2;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      plVar2 = plVar2 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14747534c FUN_14747534c body=180 status=ok
// SIG undefined FUN_14747534c(void)

void FUN_14747534c(longlong *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar3 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_147475400(param_1,iVar1);
    }
    if (uVar3 != 0) {
      puVar2 = (undefined8 *)((longlong)iVar1 * 0x38 + *param_1 + 0x28);
      do {
        puVar2[-3] = 0;
        *(undefined1 *)(puVar2 + -2) = 0;
        puVar2[-5] = 0;
        *(undefined1 *)(puVar2 + -4) = 0;
        puVar2[-1] = 0;
        *(undefined8 *)((longlong)puVar2 + -0xf) = 0;
        *(undefined4 *)((longlong)puVar2 + -0xb) = 0xffffffff;
        *(undefined1 *)((longlong)puVar2 + -7) = 0xff;
        *puVar2 = DAT_14c845dbc;
        *(undefined4 *)(puVar2 + 1) = DAT_14c845dc4;
        puVar2 = puVar2 + 7;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    return;
  }
  if (iVar1 <= param_2) {
    return;
  }
  FUN_147475490(param_1,param_2,iVar1 - param_2);
  FUN_1474754ea(param_1);
  return;
}



// FUNCTION 147475400 FUN_147475400 body=143 status=ok
// SIG undefined FUN_147475400(void)

void FUN_147475400(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
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
    uVar5 = FUN_144a3809e(lVar4 * 0x38,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x38,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147475490 FUN_147475490 body=89 status=ok
// SIG undefined FUN_147475490(void)

void FUN_147475490(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x38 + *param_1);
  FUN_145a10fad(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x38 + (longlong)_Dst),(longlong)iVar2 * 0x38);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1474754ea FUN_1474754ea body=62 status=ok
// SIG undefined FUN_1474754ea(void)

void FUN_1474754ea(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147475528(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x38,8);
  }
  return;
}



// FUNCTION 147475528 FUN_147475528 body=104 status=ok
// SIG undefined FUN_147475528(void)

ulonglong FUN_147475528(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x38) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_14747555e;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x38,8);
      param_2 = param_2 / 0x38;
    }
  }
LAB_14747555e:
  return param_2 & 0xffffffff;
}



// FUNCTION 147475590 FUN_147475590 body=94 status=ok
// SIG undefined FUN_147475590(void)

void FUN_147475590(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x174) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x174) = 0;
    if (*(void **)((longlong)param_1 + 0x168) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x168),
              (longlong)*(int *)((longlong)param_1 + 0x170) * 0x18);
      FUN_1446efa72((longlong)param_1 + 0x168,0,0,0x18);
      return;
    }
  }
  return;
}



// FUNCTION 1474755ee FUN_1474755ee body=149 status=ok
// SIG undefined FUN_1474755ee(void)

void FUN_1474755ee(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x168);
  if ((uint)param_3 < 0x10) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x18);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x168,0,param_3,0x18);
    memmove(*(void **)((longlong)param_1 + 0x168),param_1,(longlong)param_2 * 0x18);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x168,param_2,param_3,0x18);
  return;
}



// FUNCTION 147475683 FUN_147475683 body=26 status=ok
// SIG undefined FUN_147475683(void)

void FUN_147475683(undefined4 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    param_1 = param_1 + 6;
  }
  return;
}



// FUNCTION 14747569e FUN_14747569e body=136 status=ok
// SIG undefined FUN_14747569e(void)

void FUN_14747569e(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x170);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0xf;
    if (0xf < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (0xf < *(uint *)(param_1 + 0x174)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x18,0);
      iVar4 = (int)(uVar3 / 0x18);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x174) = iVar5;
    FUN_1474755ee(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147475728 FUN_147475728 body=180 status=ok
// SIG undefined FUN_147475728(void)

longlong * FUN_147475728(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
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
        plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x18);
        if (*plVar2 == *param_3) {
          if (plVar2 != (longlong *)0x0) goto LAB_1474757bf;
          break;
        }
        iVar1 = (int)plVar2[2];
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_1474757de(param_1,&local_1c,param_2);
  plVar2 = (longlong *)(*param_1 + (longlong)local_1c * 0x18);
LAB_1474757bf:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2 + 1;
}



// FUNCTION 1474757de FUN_1474757de body=278 status=ok
// SIG undefined FUN_1474757de(void)

undefined4 * FUN_1474757de(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

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
  FUN_1474758f6(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  cVar1 = FUN_1474759dc(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0x14) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
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
      FUN_147475b12(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474758f6 FUN_1474758f6 body=230 status=ok
// SIG undefined FUN_1474758f6(void)

int * FUN_1474758f6(longlong *param_1,int *param_2)

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



// FUNCTION 1474759dc FUN_1474759dc body=128 status=ok
// SIG undefined FUN_1474759dc(void)

undefined8 FUN_1474759dc(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_147475a5c((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 147475a5c FUN_147475a5c body=114 status=ok
// SIG undefined FUN_147475a5c(void)

void FUN_147475a5c(longlong *param_1,int param_2)

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



// FUNCTION 147475ace FUN_147475ace body=68 status=ok
// SIG undefined FUN_147475ace(void)

void FUN_147475ace(longlong param_1,uint param_2)

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
  FUN_147475b12(param_1);
  return;
}



// FUNCTION 147475b12 FUN_147475b12 body=436 status=ok
// SIG undefined FUN_147475b12(void)

void FUN_147475b12(longlong *param_1)

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
        uVar10 = (longlong)(int)((uint)((ulonglong)uVar4 >> 0x20) ^ (uint)uVar4) &
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



// FUNCTION 147475cc8 FUN_147475cc8 body=89 status=ok
// SIG undefined FUN_147475cc8(void)

void FUN_147475cc8(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 +
                    ((longlong)(int)((uint)((ulonglong)param_2 >> 0x20) ^ (uint)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_147475d22(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 147475d22 FUN_147475d22 body=87 status=ok
// SIG undefined FUN_147475d22(void)

void FUN_147475d22(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x18;
  lVar6 = (longlong)*(int *)(lVar1 + 0x14);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x18 + 0x10);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x10);
  FUN_147475a5c();
  return;
}



// FUNCTION 147475d7a FUN_147475d7a body=295 status=ok
// SIG undefined FUN_147475d7a(void)

void FUN_147475d7a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong local_48 [5];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48[2] = 0;
  local_48[3] = 0;
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
  plVar1 = local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_50 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_20 = local_50;
  FUN_140608954(plVar1);
  if (local_48[2] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147475ea2 FUN_147475ea2 body=335 status=ok
// SIG undefined FUN_147475ea2(void)

void FUN_147475ea2(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_88 [32];
  longlong local_68 [9];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68[6] = 0;
  local_68[7] = 0;
  local_68[4] = 0;
  local_68[5] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68 + 4);
  }
  plVar2 = local_68 + 4;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_68[2] = 0;
  local_68[3] = 0;
  local_68[0] = 0;
  local_68[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_68;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14094f414(plVar2,plVar1);
  if (local_68[2] != 0) {
    FUN_1400020a8();
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68[6] != 0) {
    FUN_1400020a8();
  }
  if (local_68[4] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147475ff2 FUN_147475ff2 body=314 status=ok
// SIG undefined FUN_147475ff2(void)

void FUN_147475ff2(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_78 [32];
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[4] = 0;
  local_58[5] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58 + 2);
  }
  plVar2 = local_58 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
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
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_58;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140c19cf6(plVar1,plVar2);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58[4] != 0) {
    FUN_1400020a8();
  }
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14747612e FUN_14747612e body=202 status=ok
// SIG undefined FUN_14747612e(void)

void FUN_14747612e(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  FUN_1474761fa(&local_30,local_20);
  if ((local_30 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(local_30);
  }
  *param_3 = local_30;
  param_3[1] = local_28;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474761fa FUN_1474761fa body=81 status=ok
// SIG undefined FUN_1474761fa(void)

longlong * FUN_1474761fa(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if ((param_2 == 0) || (DAT_14c950c29 == '\0')) {
    *param_1 = param_2;
    if (param_2 == 0) {
      lVar2 = 0;
      goto LAB_14747622c;
    }
  }
  else {
    FUN_1456cec3c(param_2);
    *param_1 = param_2;
  }
  uVar1 = FUN_1403ad4e4();
  lVar2 = FUN_144718840(param_2,uVar1);
LAB_14747622c:
  param_1[1] = lVar2;
  return param_1;
}



// FUNCTION 147476252 FUN_147476252 body=412 status=ok
// SIG undefined FUN_147476252(void)

void FUN_147476252(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined1 auStack_d8 [40];
  undefined4 local_b0 [2];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68 [5];
  undefined4 *local_40;
  undefined8 local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_68[2] = 0;
  local_68[3] = 0;
  local_68[0] = 0;
  local_68[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  plVar4 = local_68;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  local_b0[0] = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b0);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar3 = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar3 = local_b0;
  }
  if (puVar3[8] == 0) {
    uVar2 = 0;
  }
  else {
    local_40 = local_b0;
    if (puVar1 != (undefined4 *)0x0) {
      local_40 = puVar1;
    }
    local_38 = 0;
    local_30 = 0;
    uVar2 = FUN_14008db60(&local_40,plVar4);
  }
  *param_3 = uVar2;
  FUN_1412dafa6(local_b0);
  if (local_68[2] != 0) {
    FUN_1400020a8();
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474763f6 FUN_1474763f6 body=311 status=ok
// SIG undefined FUN_1474763f6(void)

void FUN_1474763f6(undefined8 param_1,longlong param_2,byte *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  FUN_140be4ae0();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  lVar2 = local_38;
  uVar1 = local_40;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  bVar3 = local_38 != 0 & DAT_14c950c29;
  if (bVar3 == 1) {
    bVar3 = FUN_1456cec3c(local_38);
  }
  plVar4 = (longlong *)0x0;
  if (lVar2 != 0) {
    plVar4 = plStack_30;
  }
  if (plVar4 != (longlong *)0x0) {
    bVar3 = (**(code **)(*plVar4 + 0x18))(plVar4,uVar1);
  }
  *param_3 = plVar4 != (longlong *)0x0 & bVar3;
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14747653a FUN_14747653a body=422 status=ok
// SIG undefined FUN_14747653a(void)

void FUN_14747653a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined1 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_98 [32];
  longlong local_78 [9];
  
  local_78[8] = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78[6] = 0;
  local_78[7] = 0;
  local_78[4] = 0;
  local_78[5] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78 + 4);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  plVar5 = plVar2;
  if (plVar2 == (longlong *)0x0) {
    plVar5 = local_78 + 4;
  }
  local_78[2] = 0;
  local_78[3] = 0;
  local_78[0] = 0;
  local_78[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  plVar4 = local_78;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  plVar7 = local_78 + 4;
  if (plVar2 != (longlong *)0x0) {
    plVar7 = plVar2;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  iVar1 = (int)plVar7[1];
  if (iVar1 == (int)plVar4[1]) {
    uVar3 = 1;
    if (iVar1 != 0) {
      plVar4 = (longlong *)*plVar4;
      plVar2 = plVar4 + iVar1;
      do {
        lVar6 = 0;
        while (*(longlong *)(*plVar5 + lVar6) != *plVar4) {
          lVar6 = lVar6 + 8;
          if ((longlong)iVar1 * 8 == lVar6) goto LAB_147476634;
        }
        plVar4 = plVar4 + 1;
      } while (plVar4 != plVar2);
    }
  }
  else {
LAB_147476634:
    uVar3 = 0;
  }
  *param_3 = uVar3;
  if (local_78[2] != 0) {
    FUN_1400020a8();
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_78[6] != 0) {
    FUN_1400020a8();
  }
  if (local_78[4] != 0) {
    FUN_1400020a8();
  }
  if ((local_78[8] ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474766e2 FUN_1474766e2 body=557 status=ok
// SIG undefined FUN_1474766e2(void)

void FUN_1474766e2(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined1 auStack_b8 [40];
  longlong local_90;
  longlong local_88 [2];
  undefined4 local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
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
  local_78[0] = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  puVar2 = local_78;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  local_88[0] = 0;
  local_88[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  plVar1 = local_88;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_90 = local_30;
  if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  FUN_143271240(local_28,&local_90,puVar2,plVar1);
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1412dafa6(local_78);
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147476910 FUN_147476910 body=233 status=ok
// SIG undefined FUN_147476910(void)

void FUN_147476910(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_20 = local_28;
  FUN_1400021e4(&local_20,&local_38);
  if (&local_38 == param_3) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    *(undefined4 *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474769fa FUN_1474769fa body=285 status=ok
// SIG undefined FUN_1474769fa(void)

void FUN_1474769fa(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  longlong local_38 [5];
  
  local_38[4] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[2] = 0;
  local_38[3] = 0;
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
  plVar1 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1417955f0(plVar1,&local_48,0);
  if (&local_48 == param_3) {
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_48;
    local_48 = 0;
    *(undefined4 *)(param_3 + 1) = local_40;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_3c;
  }
  if (local_38[2] != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[4] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147476b18 FUN_147476b18 body=199 status=ok
// SIG undefined FUN_147476b18(void)

void FUN_147476b18(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [5];
  
  local_38[4] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[2] = 0;
  local_38[3] = 0;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_38;
  }
  *param_3 = (int)plVar1[1];
  if (local_38[2] != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[4] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147476be0 FUN_147476be0 body=277 status=ok
// SIG undefined FUN_147476be0(void)

void FUN_147476be0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [5];
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[4] = 0;
  plStack_20 = (longlong *)0x0;
  FUN_140be4ae0();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 4);
  }
  lVar1 = local_48[4];
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_48[4] != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(local_48[4]);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  if (plStack_20 != (longlong *)0x0 && lVar1 != 0) {
    (**(code **)(*plStack_20 + 0x10))(plStack_20,local_48);
  }
  FUN_140cc1bde(param_3,local_48);
  if (local_48[2] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147476cf6 FUN_147476cf6 body=167 status=ok
// SIG undefined FUN_147476cf6(void)

void FUN_147476cf6(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  puVar1 = &local_20;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = *puVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147476da4 FUN_147476da4 body=389 status=ok
// SIG undefined FUN_147476da4(void)

void FUN_147476da4(undefined8 param_1,longlong param_2,byte *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  undefined1 auStack_88 [32];
  longlong local_68 [5];
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68[4] = 0;
  plStack_40 = (longlong *)0x0;
  FUN_140be4ae0();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68 + 4);
  }
  local_68[2] = 0;
  local_68[3] = 0;
  local_68[0] = 0;
  local_68[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  lVar2 = local_68[4];
  plVar1 = *(longlong **)(param_2 + 0x38);
  plVar4 = plVar1;
  if (plVar1 == (longlong *)0x0) {
    plVar4 = local_68;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_68[4] != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(local_68[4]);
  }
  bVar5 = lVar2 == 0;
  bVar6 = plStack_40 != (longlong *)0x0;
  bVar3 = bVar5;
  if (bVar6 && !bVar5) {
    bVar3 = (**(code **)(*plStack_40 + 0x20))(plStack_40,plVar4);
  }
  plVar4 = local_68;
  if (plVar1 != (longlong *)0x0) {
    plVar4 = plVar1;
  }
  if (!bVar6 || bVar5) {
    bVar3 = (int)plVar4[1] == 0;
  }
  *param_3 = bVar3 & 1;
  if (local_68[2] != 0) {
    FUN_1400020a8();
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147476f36 FUN_147476f36 body=414 status=ok
// SIG undefined FUN_147476f36(void)

void FUN_147476f36(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_98 [44];
  int local_6c;
  longlong local_68 [9];
  
  local_68[8] = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68[6] = 0;
  local_68[7] = 0;
  local_68[4] = 0;
  local_68[5] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68 + 4);
  }
  plVar2 = local_68 + 4;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_68[2] = 0;
  local_68[3] = 0;
  local_68[0] = 0;
  local_68[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  plVar3 = local_68;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_6c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1474770d6(plVar2,plVar3,local_6c != 0);
  *param_3 = uVar1;
  if (local_68[2] != 0) {
    FUN_1400020a8();
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68[6] != 0) {
    FUN_1400020a8();
  }
  if (local_68[4] != 0) {
    FUN_1400020a8();
  }
  if ((local_68[8] ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474770d6 FUN_1474770d6 body=199 status=ok
// SIG undefined FUN_1474770d6(void)

undefined8 FUN_1474770d6(longlong *param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  iVar2 = (int)param_2[1];
  uVar3 = 1;
  if (param_3 == '\0') {
    if (iVar2 != 0) {
      param_2 = (longlong *)*param_2;
      plVar1 = param_2 + iVar2;
      do {
        if ((int)param_1[1] != 0) {
          lVar4 = 0;
          do {
            if (*(longlong *)(*param_1 + lVar4) == *param_2) goto LAB_14747718a;
            lVar4 = lVar4 + 8;
          } while ((longlong)(int)param_1[1] << 3 != lVar4);
        }
        if ((int)param_1[3] == 0) goto LAB_147477195;
        lVar4 = 0;
        while (*(longlong *)(param_1[2] + lVar4) != *param_2) {
          lVar4 = lVar4 + 8;
          if ((longlong)(int)param_1[3] << 3 == lVar4) goto LAB_147477195;
        }
LAB_14747718a:
        param_2 = param_2 + 1;
      } while (param_2 != plVar1);
    }
  }
  else if (iVar2 != 0) {
    if ((longlong)(int)param_1[1] == 0) {
LAB_147477195:
      uVar3 = 0;
    }
    else {
      param_2 = (longlong *)*param_2;
      plVar1 = param_2 + iVar2;
      do {
        lVar4 = 0;
        while (*(longlong *)(*param_1 + lVar4) != *param_2) {
          lVar4 = lVar4 + 8;
          if ((longlong)(int)param_1[1] * 8 == lVar4) goto LAB_147477195;
        }
        param_2 = param_2 + 1;
      } while (param_2 != plVar1);
    }
  }
  return uVar3;
}



// FUNCTION 1474771aa FUN_1474771aa body=414 status=ok
// SIG undefined FUN_1474771aa(void)

void FUN_1474771aa(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_98 [44];
  int local_6c;
  longlong local_68 [9];
  
  local_68[8] = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68[6] = 0;
  local_68[7] = 0;
  local_68[4] = 0;
  local_68[5] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68 + 4);
  }
  plVar2 = local_68 + 4;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_68[2] = 0;
  local_68[3] = 0;
  local_68[0] = 0;
  local_68[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  plVar3 = local_68;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_6c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14747734a(plVar2,plVar3,local_6c != 0);
  *param_3 = uVar1;
  if (local_68[2] != 0) {
    FUN_1400020a8();
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68[6] != 0) {
    FUN_1400020a8();
  }
  if (local_68[4] != 0) {
    FUN_1400020a8();
  }
  if ((local_68[8] ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14747734a FUN_14747734a body=197 status=ok
// SIG undefined FUN_14747734a(void)

undefined8 FUN_14747734a(longlong *param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar2 = (int)param_2[1];
  if (param_3 == '\0') {
    if (iVar2 != 0) {
      param_2 = (longlong *)*param_2;
      plVar1 = param_2 + iVar2;
      do {
        if ((int)param_1[1] != 0) {
          lVar3 = *param_2;
          lVar4 = 0;
          do {
            if (*(longlong *)(*param_1 + lVar4) == lVar3) goto LAB_147477403;
            lVar4 = lVar4 + 8;
          } while ((longlong)(int)param_1[1] << 3 != lVar4);
        }
        if ((int)param_1[3] != 0) {
          lVar3 = param_1[2];
          lVar4 = 0;
          do {
            if (*(longlong *)(lVar3 + lVar4) == *param_2) goto LAB_147477403;
            lVar4 = lVar4 + 8;
          } while ((longlong)(int)param_1[3] << 3 != lVar4);
        }
        param_2 = param_2 + 1;
        if (param_2 == plVar1) {
          return 0;
        }
      } while( true );
    }
  }
  else if (iVar2 != 0) {
    param_2 = (longlong *)*param_2;
    plVar1 = param_2 + iVar2;
    do {
      if ((int)param_1[1] != 0) {
        lVar3 = *param_2;
        lVar4 = 0;
        do {
          if (*(longlong *)(*param_1 + lVar4) == lVar3) {
LAB_147477403:
            return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
          }
          lVar4 = lVar4 + 8;
        } while ((longlong)(int)param_1[1] << 3 != lVar4);
      }
      param_2 = param_2 + 1;
      if (param_2 == plVar1) {
        return 0;
      }
    } while( true );
  }
  return 0;
}



// FUNCTION 147477422 FUN_147477422 body=152 status=ok
// SIG undefined FUN_147477422(void)

void FUN_147477422(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)param_3 = local_20 != 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474774c2 FUN_1474774c2 body=192 status=ok
// SIG undefined FUN_1474774c2(void)

void FUN_1474774c2(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined1 auStack_88 [40];
  undefined4 local_60 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60[0] = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  if (*(undefined4 **)(param_2 + 0x38) == (undefined4 *)0x0) {
    puVar1 = local_60;
  }
  *(bool *)param_3 = puVar1[8] == 0;
  FUN_1412dafa6();
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147477584 FUN_147477584 body=225 status=ok
// SIG undefined FUN_147477584(void)

void FUN_147477584(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28[0] = 0;
  local_28[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  plVar1 = local_28;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1457ae23a(local_48,plVar1);
  FUN_140cc1bde(param_3,local_48);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147477666 FUN_147477666 body=226 status=ok
// SIG undefined FUN_147477666(void)

void FUN_147477666(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[4] = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 4);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48[5] = local_48[4];
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  FUN_140608954(local_48);
  FUN_140cc1bde(param_3,local_48);
  if (local_48[2] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14747774a FUN_14747774a body=334 status=ok
// SIG undefined FUN_14747774a(void)

void FUN_14747774a(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_138 [32];
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_d0 [8];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_88[0] = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_110 = 0;
  uStack_108 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  FUN_140c19bee(local_118,local_88);
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  FUN_14747789a(local_d0,local_118);
  FUN_1412dafa6(local_118);
  FUN_14747789a(param_3,local_d0);
  FUN_1412dafa6(local_d0);
  FUN_1412dafa6(local_88);
  if ((local_40 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14747789a FUN_14747789a body=211 status=ok
// SIG undefined FUN_14747789a(void)

undefined4 * FUN_14747789a(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  if (param_1 != param_2) {
    if (*(longlong *)(param_1 + 2) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_2 + 2) = 0;
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
    *(undefined8 *)(param_2 + 4) = 0;
    if (*(longlong *)(param_1 + 6) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_2 + 6) = 0;
    param_1[8] = param_2[8];
    param_1[9] = param_2[9];
    *(undefined8 *)(param_2 + 8) = 0;
    if (*(longlong *)(param_1 + 10) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_2 + 10) = 0;
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    *(undefined8 *)(param_2 + 0xc) = 0;
    if (*(longlong *)(param_1 + 0xe) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
    *(undefined8 *)(param_2 + 0xe) = 0;
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    *(undefined8 *)(param_2 + 0x10) = 0;
  }
  return param_1;
}



// FUNCTION 14747796e FUN_14747796e body=240 status=ok
// SIG undefined FUN_14747796e(void)

void FUN_14747796e(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [72];
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_48[2] = 0;
  local_48[3] = 0;
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
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14747901c(local_90,plVar1);
  FUN_14747789a(param_3,local_90);
  FUN_1412dafa6(local_90);
  if (local_48[2] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147477a60 FUN_147477a60 body=240 status=ok
// SIG undefined FUN_147477a60(void)

void FUN_147477a60(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [72];
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_48[2] = 0;
  local_48[3] = 0;
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
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147478f6e(local_90,plVar1);
  FUN_14747789a(param_3,local_90);
  FUN_1412dafa6(local_90);
  if (local_48[2] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147477b52 FUN_147477b52 body=240 status=ok
// SIG undefined FUN_147477b52(void)

void FUN_147477b52(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [72];
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_48[2] = 0;
  local_48[3] = 0;
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
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1474790ca(local_90,plVar1);
  FUN_14747789a(param_3,local_90);
  FUN_1412dafa6(local_90);
  if (local_48[2] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147477c44 FUN_147477c44 body=151 status=ok
// SIG undefined FUN_147477c44(void)

void FUN_147477c44(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147477cdc FUN_147477cdc body=308 status=ok
// SIG undefined FUN_147477cdc(void)

void FUN_147477cdc(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58[2] = 0;
  local_58[3] = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_1403de7ba(&local_98,local_58);
  local_78 = (undefined4)local_98;
  uStack_74 = local_98._4_4_;
  uStack_70 = (undefined4)uStack_90;
  uStack_6c = uStack_90._4_4_;
  local_98 = 0;
  uStack_90 = 0;
  local_68 = (undefined4)local_88;
  uStack_64 = local_88._4_4_;
  uStack_60 = (undefined4)uStack_80;
  uStack_5c = uStack_80._4_4_;
  local_88 = 0;
  uStack_80 = 0;
  FUN_140cc1bde(param_3,&local_78);
  if (CONCAT44(uStack_64,local_68) != 0) {
    FUN_1400020a8();
  }
  if (CONCAT44(uStack_74,local_78) != 0) {
    FUN_1400020a8();
  }
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147477e1e FUN_147477e1e body=462 status=ok
// SIG undefined FUN_147477e1e(void)

void FUN_147477e1e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  undefined1 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_98 [44];
  int local_6c;
  longlong local_68 [5];
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_40 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_68[2] = 0;
  local_68[3] = 0;
  local_68[0] = 0;
  local_68[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  plVar3 = plVar1;
  if (plVar1 == (longlong *)0x0) {
    plVar3 = local_68;
  }
  local_6c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18));
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_40;
  if (local_6c == 0) {
    uVar2 = FUN_1410a8654(&local_38,plVar3);
  }
  else {
    plVar5 = local_68;
    if (plVar1 != (longlong *)0x0) {
      plVar5 = plVar1;
    }
    if ((longlong)(int)plVar5[1] != 0) {
      lVar4 = 0;
      do {
        if (*(longlong *)(*plVar3 + lVar4) == local_40) {
          uVar2 = 1;
          goto LAB_147477f25;
        }
        lVar4 = lVar4 + 8;
      } while ((longlong)(int)plVar5[1] * 8 != lVar4);
    }
    uVar2 = 0;
  }
LAB_147477f25:
  *param_3 = uVar2;
  if (local_68[2] != 0) {
    FUN_1400020a8();
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147478000 FUN_147478000 body=230 status=ok
// SIG undefined FUN_147478000(void)

void FUN_147478000(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)param_3 = local_20 != local_28;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474780ee FUN_1474780ee body=437 status=ok
// SIG undefined FUN_1474780ee(void)

void FUN_1474780ee(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_98 [32];
  longlong local_78 [9];
  
  local_78[8] = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78[6] = 0;
  local_78[7] = 0;
  local_78[4] = 0;
  local_78[5] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78 + 4);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  plVar4 = plVar2;
  if (plVar2 == (longlong *)0x0) {
    plVar4 = local_78 + 4;
  }
  local_78[2] = 0;
  local_78[3] = 0;
  local_78[0] = 0;
  local_78[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  plVar3 = local_78;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  plVar7 = local_78 + 4;
  if (plVar2 != (longlong *)0x0) {
    plVar7 = plVar2;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  iVar1 = (int)plVar7[1];
  if (iVar1 == (int)plVar3[1]) {
    if (iVar1 == 0) {
      uVar5 = 0;
    }
    else {
      plVar3 = (longlong *)*plVar3;
      plVar2 = plVar3 + iVar1;
      do {
        lVar6 = 0;
        while (*(longlong *)(*plVar4 + lVar6) != *plVar3) {
          lVar6 = lVar6 + 8;
          if ((longlong)iVar1 * 8 == lVar6) goto LAB_1474781ed;
        }
        plVar3 = plVar3 + 1;
        uVar5 = 0;
      } while (plVar3 != plVar2);
    }
  }
  else {
LAB_1474781ed:
    uVar5 = 1;
  }
  *param_3 = uVar5;
  if (local_78[2] != 0) {
    FUN_1400020a8();
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_78[6] != 0) {
    FUN_1400020a8();
  }
  if (local_78[4] != 0) {
    FUN_1400020a8();
  }
  if ((local_78[8] ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474782aa FUN_1474782aa body=396 status=ok
// SIG undefined FUN_1474782aa(void)

void FUN_1474782aa(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  void *_Src;
  undefined1 uVar1;
  longlong lVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  void *local_58;
  ulonglong uStack_50;
  longlong local_48 [5];
  
  local_48[4] = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  local_58 = (void *)0x0;
  uStack_50 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  _Src = local_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = (void *)0x0;
  lVar2 = (longlong)(int)uStack_50;
  local_60 = (int)uStack_50;
  if (lVar2 == 0) {
    local_5c = 0;
  }
  else {
    FUN_1446dd670(&local_68,uStack_50 & 0xffffffff,0);
    memcpy(local_68,_Src,lVar2 * 2);
  }
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_1403de7ba(&local_88,local_48);
  uVar1 = FUN_147478438(&local_88,&local_68);
  *param_3 = uVar1;
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_48[2] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[4] ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147478438 FUN_147478438 body=2470 status=ok
// SIG undefined FUN_147478438(void)

ulonglong FUN_147478438(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  longlong *plVar6;
  wchar_t *pwVar7;
  undefined2 *puVar8;
  wchar_t **ppwVar9;
  uint uVar10;
  int iVar11;
  wchar_t **ppwVar12;
  longlong lVar13;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 local_110;
  longlong *local_100;
  undefined8 local_f8;
  wchar_t *local_f0;
  wchar_t *local_e8;
  int local_e0;
  longlong local_d8 [2];
  wchar_t *local_c8;
  longlong lStack_c0;
  wchar_t *local_b8;
  undefined8 uStack_b0;
  longlong local_a8 [2];
  wchar_t *local_98;
  longlong local_90;
  undefined2 *local_88;
  int local_80;
  wchar_t *local_78;
  int local_70;
  longlong *local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = (longlong *)0x0;
  uStack_60 = 0;
  ppwVar9 = &local_78;
  FUN_140056680(ppwVar9,&DAT_149e06140);
  FUN_140056680(&local_88);
  local_98 = (wchar_t *)*param_2;
  *param_2 = 0;
  lVar13 = param_2[1];
  local_90 = param_2[1];
  param_2[1] = 0;
  uVar10 = local_70 - 1;
  if (local_70 == 0) {
    uVar10 = 0;
  }
  if ((int)uVar10 < 1) goto LAB_14747850d;
  pwVar7 = L"";
  if (local_70 != 0) {
    pwVar7 = local_78;
  }
  pwVar5 = local_98;
  if ((int)lVar13 == 0) {
    pwVar5 = L"";
  }
  iVar3 = wcsncmp(pwVar5,pwVar7,(ulonglong)uVar10);
  if (iVar3 != 0) goto LAB_14747850d;
  iVar3 = local_80 + -1;
  puVar8 = local_88;
  if (local_80 == 0) {
    puVar8 = &DAT_149dfb77a;
    iVar3 = 0;
  }
  cVar2 = FUN_144a38768(&local_98,puVar8,iVar3,0);
  if (cVar2 == '\0') goto LAB_14747850d;
  iVar3 = (int)local_90 + -1;
  if ((int)local_90 == 0) {
    iVar3 = 0;
  }
  iVar4 = 1;
  if (1 < iVar3) {
    iVar4 = iVar3;
  }
  uVar10 = iVar4 - 1;
  bVar1 = 0 < (int)(iVar3 - uVar10);
  iVar4 = (int)local_90;
  if ((int)uVar10 < iVar3) {
    iVar3 = (int)local_90 - (uVar10 + bVar1);
    if (iVar3 != 0) {
      memmove(local_98 + uVar10,local_98 + (ulonglong)uVar10 + 1,(longlong)iVar3 * 2);
    }
    iVar4 = (int)local_90 - (uint)bVar1;
    local_90 = CONCAT44(local_90._4_4_,iVar4);
    iVar3 = iVar4 + -1;
    if (iVar4 == 0) {
      iVar3 = 0;
    }
  }
  if (0 < iVar3) {
    iVar11 = iVar4 - (uint)(0 < iVar3);
    if (iVar11 != 0) {
      memmove(local_98,local_98 + 1,(longlong)iVar11 * 2);
      iVar4 = (int)local_90;
    }
    local_90 = CONCAT44(local_90._4_4_,iVar4 - (uint)(0 < iVar3));
  }
  FUN_140056680(local_a8,&DAT_149e06162);
  local_110 = 0;
  local_118 = 0;
  FUN_1407cdbc6(&local_98,local_a8,0,&local_98);
  iVar3 = (int)local_90 + -1;
  if ((int)local_90 == 0) {
    iVar3 = 0;
  }
  iVar4 = 1;
  if (1 < iVar3) {
    iVar4 = iVar3;
  }
  uVar10 = iVar4 - 1;
  bVar1 = 0 < (int)(iVar3 - uVar10);
  iVar4 = (int)local_90;
  if ((int)uVar10 < iVar3) {
    iVar3 = (int)local_90 - (uVar10 + bVar1);
    if (iVar3 != 0) {
      memmove(local_98 + uVar10,local_98 + (ulonglong)uVar10 + 1,(longlong)iVar3 * 2);
    }
    iVar4 = (int)local_90 - (uint)bVar1;
    local_90 = CONCAT44(local_90._4_4_,iVar4);
    iVar3 = iVar4 + -1;
    if (iVar4 == 0) {
      iVar3 = 0;
    }
  }
  if (0 < iVar3) {
    iVar11 = iVar4 - (uint)(0 < iVar3);
    if (iVar11 != 0) {
      memmove(local_98,local_98 + 1,(longlong)iVar11 * 2);
      iVar4 = (int)local_90;
    }
    local_90 = CONCAT44(local_90._4_4_,iVar4 - (uint)(0 < iVar3));
  }
  local_b8 = (wchar_t *)0x0;
  uStack_b0 = 0;
  local_c8 = (wchar_t *)0x0;
  lStack_c0 = 0;
  local_100 = param_1;
  FUN_140056680(local_d8,&DAT_149e06196);
  FUN_140056680(&local_e8,&DAT_149e01f5a);
  ppwVar9 = (wchar_t **)0x0;
  local_110 = 0;
  local_118 = 0;
  cVar2 = FUN_1407cdbc6(&local_98,local_d8,&local_b8,&local_c8);
  if (cVar2 != '\0') {
    do {
      local_110 = 0;
      local_118 = 0;
      FUN_1407cdbc6(&local_b8,local_a8,0,&local_b8);
      ppwVar12 = (wchar_t **)(ulonglong)(local_80 - 1);
      if (local_80 == 0) {
        ppwVar12 = ppwVar9;
      }
      puVar8 = &DAT_149dfb77a;
      if (local_80 != 0) {
        puVar8 = local_88;
      }
      cVar2 = FUN_144a38768(&local_b8,puVar8,ppwVar12,0);
      if (cVar2 != '\0') {
        iVar3 = (int)uStack_b0 + -1;
        if ((int)uStack_b0 == 0) {
          iVar3 = 0;
        }
        iVar4 = 1;
        if (1 < iVar3) {
          iVar4 = iVar3;
        }
        uVar10 = iVar4 - 1;
        bVar1 = 0 < (int)(iVar3 - uVar10);
        iVar4 = (int)uStack_b0;
        if ((int)uVar10 < iVar3) {
          iVar3 = (int)uStack_b0 - (uVar10 + bVar1);
          if (iVar3 != 0) {
            memmove(local_b8 + uVar10,local_b8 + (ulonglong)uVar10 + 1,(longlong)iVar3 * 2);
          }
          iVar4 = (int)uStack_b0 - (uint)bVar1;
          uStack_b0 = CONCAT44(uStack_b0._4_4_,iVar4);
        }
        ppwVar12 = (wchar_t **)(ulonglong)(local_e0 - 1);
        if (local_e0 == 0) {
          ppwVar12 = ppwVar9;
        }
        pwVar7 = L"";
        if (local_e0 != 0) {
          pwVar7 = local_e8;
        }
        if (0 < (int)ppwVar12) {
          pwVar5 = L"";
          if (iVar4 != 0) {
            pwVar5 = local_b8;
          }
          iVar3 = wcsncmp(pwVar5,pwVar7,(size_t)ppwVar12);
          if (iVar3 == 0) {
            cVar2 = FUN_144a38768(&local_b8,pwVar7,ppwVar12,0);
            if (cVar2 != '\0') {
              iVar3 = (int)uStack_b0 + -1;
              if ((int)uStack_b0 == 0) {
                iVar3 = 0;
              }
              iVar4 = 1;
              if (1 < iVar3) {
                iVar4 = iVar3;
              }
              uVar10 = iVar4 - 1;
              bVar1 = 0 < (int)(iVar3 - uVar10);
              iVar4 = (int)uStack_b0;
              if ((int)uVar10 < iVar3) {
                iVar3 = (int)uStack_b0 - (uVar10 + bVar1);
                if (iVar3 != 0) {
                  memmove(local_b8 + uVar10,local_b8 + (ulonglong)uVar10 + 1,(longlong)iVar3 * 2);
                }
                iVar4 = (int)uStack_b0 - (uint)bVar1;
                uStack_b0 = CONCAT44(uStack_b0._4_4_,iVar4);
                iVar3 = 0;
                if (iVar4 != 0) {
                  iVar3 = iVar4 + -1;
                }
              }
              if (0 < iVar3) {
                iVar11 = iVar4 - (uint)(0 < iVar3);
                if (iVar11 != 0) {
                  memmove(local_b8,local_b8 + 1,(longlong)iVar11 * 2);
                  iVar4 = (int)uStack_b0;
                }
                uStack_b0 = CONCAT44(uStack_b0._4_4_,iVar4 - (uint)(0 < iVar3));
              }
            }
          }
        }
      }
      ppwVar12 = (wchar_t **)(ulonglong)((int)lStack_c0 - 1);
      if ((int)lStack_c0 == 0) {
        ppwVar12 = ppwVar9;
      }
      FUN_1402980a2(&local_98,local_c8,ppwVar12);
      pwVar7 = L"";
      if ((int)uStack_b0 != 0) {
        pwVar7 = local_b8;
      }
      FUN_1446f470e(&local_f8,pwVar7,1);
      if (DAT_14caa8580 == 0) {
        FUN_140608a9e();
      }
      FUN_1400702d4(DAT_14caa8580,&local_f0,local_f8,1);
      FUN_140608954(&local_68,&local_f0);
      local_110 = 0;
      local_118 = 0;
      cVar2 = FUN_1407cdbc6(&local_98,local_d8,&local_b8,&local_c8);
    } while (cVar2 != '\0');
  }
  param_1 = local_100;
  if ((int)lStack_c0 < 2) {
    if (local_c8 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    local_c8 = local_98;
    local_98 = (wchar_t *)0x0;
    iVar3 = (int)local_90;
    lStack_c0 = local_90;
    local_90 = 0;
    if (1 < iVar3) goto LAB_147478b5d;
  }
  else {
LAB_147478b5d:
    local_110 = 0;
    local_118 = 0;
    FUN_1407cdbc6(&local_c8,local_a8,0,&local_c8);
    iVar3 = local_80 + -1;
    puVar8 = local_88;
    if (local_80 == 0) {
      puVar8 = &DAT_149dfb77a;
      iVar3 = 0;
    }
    cVar2 = FUN_144a38768(&local_c8,puVar8,iVar3,0);
    iVar3 = (int)lStack_c0;
    if (cVar2 != '\0') {
      iVar4 = (int)lStack_c0 + -1;
      if ((int)lStack_c0 == 0) {
        iVar4 = 0;
      }
      iVar11 = 1;
      if (1 < iVar4) {
        iVar11 = iVar4;
      }
      uVar10 = iVar11 - 1;
      bVar1 = 0 < (int)(iVar4 - uVar10);
      if ((int)uVar10 < iVar4) {
        iVar3 = (int)lStack_c0 - (uVar10 + bVar1);
        if (iVar3 != 0) {
          memmove(local_c8 + uVar10,local_c8 + (ulonglong)uVar10 + 1,(longlong)iVar3 * 2);
        }
        iVar3 = (int)lStack_c0 - (uint)bVar1;
        lStack_c0 = CONCAT44(lStack_c0._4_4_,iVar3);
      }
      uVar10 = local_e0 - 1;
      pwVar7 = local_e8;
      if (local_e0 == 0) {
        pwVar7 = L"";
        uVar10 = 0;
      }
      if (0 < (int)uVar10) {
        pwVar5 = local_c8;
        if (iVar3 == 0) {
          pwVar5 = L"";
        }
        iVar4 = wcsncmp(pwVar5,pwVar7,(ulonglong)uVar10);
        if (iVar4 == 0) {
          cVar2 = FUN_144a38768(&local_c8,pwVar7,uVar10,0);
          iVar3 = (int)lStack_c0;
          if (cVar2 != '\0') {
            iVar4 = (int)lStack_c0 + -1;
            if ((int)lStack_c0 == 0) {
              iVar4 = 0;
            }
            iVar11 = 1;
            if (1 < iVar4) {
              iVar11 = iVar4;
            }
            uVar10 = iVar11 - 1;
            bVar1 = 0 < (int)(iVar4 - uVar10);
            if ((int)uVar10 < iVar4) {
              iVar3 = (int)lStack_c0 - (uVar10 + bVar1);
              if (iVar3 != 0) {
                memmove(local_c8 + uVar10,local_c8 + (ulonglong)uVar10 + 1,(longlong)iVar3 * 2);
              }
              iVar3 = (int)lStack_c0 - (uint)bVar1;
              lStack_c0 = CONCAT44(lStack_c0._4_4_,iVar3);
              iVar4 = iVar3 + -1;
              if (iVar3 == 0) {
                iVar4 = 0;
              }
            }
            if (0 < iVar4) {
              iVar11 = iVar3 - (uint)(0 < iVar4);
              if (iVar11 != 0) {
                memmove(local_c8,local_c8 + 1,(longlong)iVar11 * 2);
                iVar3 = (int)lStack_c0;
              }
              iVar3 = iVar3 - (uint)(0 < iVar4);
              lStack_c0 = CONCAT44(lStack_c0._4_4_,iVar3);
            }
          }
        }
      }
    }
    pwVar7 = local_c8;
    if (iVar3 == 0) {
      pwVar7 = L"";
    }
    FUN_1446f470e(&local_f8,pwVar7,1);
    if (DAT_14caa8580 == 0) {
      FUN_140608a9e();
    }
    ppwVar9 = &local_f0;
    FUN_1400702d4(DAT_14caa8580,ppwVar9,local_f8,1);
    FUN_140608954(&local_68,ppwVar9);
  }
  if (local_e8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_d8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_c8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_b8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
LAB_14747850d:
  iVar3 = (int)param_1[1];
  if (iVar3 == (int)uStack_60) {
    if (iVar3 == 0) {
      ppwVar9 = (wchar_t **)0x0;
    }
    else {
      ppwVar9 = (wchar_t **)0x0;
      plVar6 = local_68;
      do {
        lVar13 = 0;
        while (*(longlong *)(*param_1 + lVar13) != *plVar6) {
          lVar13 = lVar13 + 8;
          if ((longlong)iVar3 * 8 == lVar13) goto LAB_14747855b;
        }
        plVar6 = plVar6 + 1;
      } while (plVar6 != local_68 + iVar3);
    }
  }
  else {
LAB_14747855b:
    ppwVar9 = (wchar_t **)CONCAT71((int7)((ulonglong)ppwVar9 >> 8),1);
  }
  if (local_98 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_88 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_68 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)ppwVar9 & 0xffffffff;
}



// FUNCTION 147478dec FUN_147478dec body=294 status=ok
// SIG undefined FUN_147478dec(void)

void FUN_147478dec(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48[2] = 0;
  local_48[3] = 0;
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
  plVar2 = local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_50 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_143271534(plVar2,local_50);
  *param_3 = uVar1;
  if (local_48[2] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147478f16 FUN_147478f16 body=87 status=ok
// SIG undefined FUN_147478f16(void)

undefined8 FUN_147478f16(undefined8 param_1,longlong param_2)

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
    uVar1 = FUN_14008db60(local_20,param_1);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147478f6e FUN_147478f6e body=172 status=ok
// SIG undefined FUN_147478f6e(void)

undefined8 FUN_147478f6e(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  void *pvStack_50;
  ulonglong local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  uStack_30 = 0;
  uStack_60 = 0;
  local_58 = 0;
  pvStack_50 = (void *)0x0;
  local_48 = 0;
  local_68 = 1;
  uVar1 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar1 != 0) {
    local_48 = (ulonglong)uVar1;
    FUN_1403de658(&pvStack_50,0);
    memcpy(pvStack_50,(void *)*param_2,(longlong)(int)uVar1 << 3);
  }
  FUN_14747a562(param_1,&local_68,&local_38);
  FUN_14747990c(&local_68);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14747901c FUN_14747901c body=172 status=ok
// SIG undefined FUN_14747901c(void)

undefined8 FUN_14747901c(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  void *pvStack_50;
  ulonglong local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  uStack_30 = 0;
  uStack_60 = 0;
  local_58 = 0;
  pvStack_50 = (void *)0x0;
  local_48 = 0;
  local_68 = 2;
  uVar1 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar1 != 0) {
    local_48 = (ulonglong)uVar1;
    FUN_1403de658(&pvStack_50,0);
    memcpy(pvStack_50,(void *)*param_2,(longlong)(int)uVar1 << 3);
  }
  FUN_14747a562(param_1,&local_68,&local_38);
  FUN_14747990c(&local_68);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474790ca FUN_1474790ca body=172 status=ok
// SIG undefined FUN_1474790ca(void)

undefined8 FUN_1474790ca(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  void *pvStack_50;
  ulonglong local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  uStack_30 = 0;
  uStack_60 = 0;
  local_58 = 0;
  pvStack_50 = (void *)0x0;
  local_48 = 0;
  local_68 = 3;
  uVar1 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar1 != 0) {
    local_48 = (ulonglong)uVar1;
    FUN_1403de658(&pvStack_50,0);
    memcpy(pvStack_50,(void *)*param_2,(longlong)(int)uVar1 << 3);
  }
  FUN_14747a562(param_1,&local_68,&local_38);
  FUN_14747990c(&local_68);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147479178 FUN_147479178 body=123 status=ok
// SIG undefined FUN_147479178(void)

void FUN_147479178(longlong *param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x30))(param_1,local_38);
  FUN_140cc1bde(param_3,local_38);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474791fa FUN_1474791fa body=214 status=ok
// SIG undefined FUN_1474791fa(void)

void FUN_1474791fa(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [5];
  
  local_48[4] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[2] = 0;
  local_48[3] = 0;
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
  uVar1 = (**(code **)(*param_1 + 0x20))(param_1,plVar2);
  *param_3 = uVar1;
  if (local_48[2] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[4] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474792d8 FUN_1474792d8 body=214 status=ok
// SIG undefined FUN_1474792d8(void)

void FUN_1474792d8(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [5];
  
  local_48[4] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[2] = 0;
  local_48[3] = 0;
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
  uVar1 = (**(code **)(*param_1 + 0x28))(param_1,plVar2);
  *param_3 = uVar1;
  if (local_48[2] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[4] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474793b6 FUN_1474793b6 body=164 status=ok
// SIG undefined FUN_1474793b6(void)

void FUN_1474793b6(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x18))(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14747945e FUN_14747945e body=207 status=ok
// SIG undefined FUN_14747945e(void)

ulonglong FUN_14747945e(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong unaff_RDI;
  bool bVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  (**(code **)(*param_1 + 0x10))();
  if (param_2 == 0) {
    unaff_RDI = 0;
  }
  else {
    if ((longlong)(int)uStack_30 != 0) {
      lVar1 = 0;
      do {
        if (*(longlong *)(local_38 + lVar1) == param_2) {
          unaff_RDI = CONCAT71((int7)(unaff_RDI >> 8),1);
          goto LAB_1474794ec;
        }
        lVar1 = lVar1 + 8;
      } while ((longlong)(int)uStack_30 * 8 != lVar1);
    }
    if ((longlong)(int)uStack_20 == 0) {
      unaff_RDI = 0;
    }
    else {
      lVar1 = 0;
      do {
        bVar2 = *(longlong *)(local_28 + lVar1) == param_2;
        unaff_RDI = CONCAT71((int7)(unaff_RDI >> 8),bVar2);
        if (bVar2) break;
        bVar2 = (longlong)(int)uStack_20 * 8 + -8 != lVar1;
        lVar1 = lVar1 + 8;
      } while (bVar2);
    }
  }
LAB_1474794ec:
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RDI & 0xffffffff;
}



// FUNCTION 14747952e FUN_14747952e body=229 status=ok
// SIG undefined FUN_14747952e(void)

ulonglong FUN_14747952e(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  (**(code **)(*param_1 + 0x10))(0,&local_48);
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((longlong)(int)param_2[1] != 0) {
    plVar2 = (longlong *)*param_2;
    plVar1 = plVar2 + (int)param_2[1];
    do {
      if ((int)uStack_40 != 0) {
        lVar4 = 0;
        do {
          if (*(longlong *)(local_48 + lVar4) == *plVar2) goto LAB_1474795cb;
          lVar4 = lVar4 + 8;
        } while ((longlong)(int)uStack_40 << 3 != lVar4);
      }
      if ((int)uStack_30 == 0) {
LAB_1474795d6:
        uVar3 = 0;
        break;
      }
      lVar4 = 0;
      while (*(longlong *)(local_38 + lVar4) != *plVar2) {
        lVar4 = lVar4 + 8;
        if ((longlong)(int)uStack_30 << 3 == lVar4) goto LAB_1474795d6;
      }
LAB_1474795cb:
      plVar2 = plVar2 + 1;
    } while (plVar2 != plVar1);
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 147479614 FUN_147479614 body=221 status=ok
// SIG undefined FUN_147479614(void)

ulonglong FUN_147479614(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  (**(code **)(*param_1 + 0x10))(0,&local_48);
  if ((longlong)(int)param_2[1] != 0) {
    plVar2 = (longlong *)*param_2;
    plVar1 = plVar2 + (int)param_2[1];
    do {
      if ((int)uStack_40 != 0) {
        lVar3 = 0;
        do {
          if (*(longlong *)(local_48 + lVar3) == *plVar2) goto LAB_1474796b5;
          lVar3 = lVar3 + 8;
        } while ((longlong)(int)uStack_40 << 3 != lVar3);
      }
      if ((int)uStack_30 != 0) {
        lVar3 = 0;
        do {
          if (*(longlong *)(local_38 + lVar3) == *plVar2) goto LAB_1474796b5;
          lVar3 = lVar3 + 8;
        } while ((longlong)(int)uStack_30 << 3 != lVar3);
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != plVar1);
  }
  uVar4 = 0;
LAB_1474796b8:
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_1474796b5:
  uVar4 = CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
  goto LAB_1474796b8;
}



// FUNCTION 1474796f2 FUN_1474796f2 body=127 status=ok
// SIG undefined FUN_1474796f2(void)

undefined8 * FUN_1474796f2(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 8))();
  if (lVar1 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar1);
  }
  if ((lVar1 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(lVar1);
  }
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  if (param_1 != (longlong *)0x0 && lVar1 != 0) {
    (**(code **)(*param_1 + 0x10))(param_1,param_2);
  }
  return param_2;
}



// FUNCTION 147479792 FUN_147479792 body=350 status=ok
// SIG undefined FUN_147479792(void)

void FUN_147479792(longlong *param_1,ushort *param_2,uint param_3,uint param_4)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [40];
  int local_40;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_3 < 1 || (param_4 - param_3 == 0 || (int)param_4 < (int)param_3)) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      *param_2 = 0;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
  }
  uVar5 = (ulonglong)param_3;
  bVar4 = (byte)param_3;
  if ((*(byte *)(param_1 + 5) & 4) == 0) {
    local_3c = 0;
    (**(code **)(*param_1 + 0x178))(param_1,&local_3c,uVar5 + 1);
    uVar2 = local_3c;
    if ((*(uint *)(&DAT_14a3dd674 + uVar5 * 4) & local_3c) != 0) {
      local_40 = 0;
      (**(code **)(*param_1 + 0x178))(param_1,&local_40,(longlong)(int)(param_4 - param_3));
      uVar2 = *(uint *)(&DAT_14a3dd620 + uVar5 * 4) & local_3c | local_40 << (bVar4 & 0x1f);
    }
    *param_2 = (ushort)uVar2;
  }
  else {
    uVar1 = *param_2;
    local_3c = (uint)uVar1;
    if (*(uint *)(&DAT_14a3dd620 + uVar5 * 4) < local_3c) {
      local_3c = (uint)(uVar1 >> (bVar4 & 0x1f)) << (bVar4 + 1 & 0x1f) |
                 *(uint *)(&DAT_14a3dd620 + uVar5 * 4) & (uint)uVar1 |
                 *(uint *)(&DAT_14a3dd674 + uVar5 * 4);
      lVar3 = *param_1;
      param_3 = param_4;
    }
    else {
      lVar3 = *param_1;
    }
    (**(code **)(lVar3 + 0x178))(param_1,&local_3c,param_3 + 1);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14747990c FUN_14747990c body=60 status=ok
// SIG undefined FUN_14747990c(void)

void FUN_14747990c(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  FUN_14747c25f(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147479948 FUN_147479948 body=277 status=ok
// SIG undefined FUN_147479948(void)

void FUN_147479948(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 local_80;
  code **local_78;
  undefined1 local_70;
  longlong local_68 [2];
  code *local_58;
  code *local_50;
  undefined8 **local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (DAT_14caa7e40 == 0) {
    uVar1 = FUN_140608922();
    DAT_14caa7e40 = FUN_140002ddd(FUN_14179491a,uVar1,L"GameplayTagContainer");
  }
  lVar2 = DAT_14caa7e40;
  FUN_140056680(local_68,L"FGameplayTagContainer");
  local_48 = (undefined8 **)&local_58;
  local_78 = &local_50;
  local_50 = FUN_1427ded96;
  local_80 = param_5;
  local_70 = 0;
  local_88 = param_3;
  local_58 = (code *)local_68;
  lVar2 = FUN_1408de6dc(lVar2,*param_2,param_1,param_4);
  *param_2 = lVar2;
  if (local_68[0] != 0) {
    FUN_1400020a8();
    lVar2 = *param_2;
  }
  if (lVar2 != 0) {
    local_68[0] = 0;
    local_50 = (code *)local_68;
    FUN_14747d54e(param_1);
    FUN_1401fa756(param_1);
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147479a5e FUN_147479a5e body=621 status=ok
// SIG undefined FUN_147479a5e(void)

longlong * FUN_147479a5e(longlong *param_1,longlong *param_2,int param_3)

{
  undefined8 *puVar1;
  void *pvVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_a8 [44];
  int local_7c;
  longlong local_78 [2];
  longlong local_68;
  int local_60;
  void *local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_2 = 0;
  param_2[1] = 0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  FUN_1412d7f26(&local_58,param_3);
  if (0 < (int)param_1[1]) {
    lVar4 = 0;
    lVar7 = 0;
    local_7c = param_3;
    do {
      FUN_1400021e4(*param_1 + lVar4,&local_68);
      if (lVar7 < (longlong)(int)param_1[1] + -1) {
        FUN_1400020e8(&local_68,&DAT_149e06196,1);
      }
      iVar3 = local_60 + -1;
      if (local_60 == 0) {
        iVar3 = 0;
      }
      if ((int)((int)uStack_50 + (uint)((int)uStack_50 == 0) + iVar3) < param_3) {
        FUN_1449b8608(local_78,&local_68,&DAT_149e001d8);
        FUN_1400020e8(&local_58,local_78[0]);
        if (local_78[0] != 0) {
          FUN_1400020a8();
        }
      }
      else {
        iVar3 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
          FUN_1447a1bd6(param_2,iVar3);
        }
        pvVar2 = local_58;
        lVar5 = *param_2;
        lVar8 = (longlong)iVar3 * 0x10;
        puVar1 = (undefined8 *)(lVar5 + lVar8);
        *(undefined8 *)(lVar5 + lVar8) = 0;
        lVar6 = (longlong)(int)uStack_50;
        *(int *)(lVar5 + 8 + lVar8) = (int)uStack_50;
        if (lVar6 == 0) {
          *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar1,uStack_50 & 0xffffffff,0);
          memcpy((void *)*puVar1,pvVar2,lVar6 * 2);
        }
        FUN_1402980a2(&local_58,local_68);
        param_3 = local_7c;
      }
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      lVar7 = lVar7 + 1;
      lVar4 = lVar4 + 8;
    } while (lVar7 < (int)param_1[1]);
  }
  if ((int)uStack_50 - 2U < 0x7fffffff) {
    iVar3 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
      FUN_1447a1bd6(param_2,iVar3);
    }
    pvVar2 = local_58;
    lVar4 = *param_2;
    lVar5 = (longlong)iVar3 * 0x10;
    puVar1 = (undefined8 *)(lVar4 + lVar5);
    *(undefined8 *)(lVar4 + lVar5) = 0;
    lVar7 = (longlong)(int)uStack_50;
    *(int *)(lVar4 + 8 + lVar5) = (int)uStack_50;
    if (lVar7 == 0) {
      *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(puVar1,uStack_50 & 0xffffffff,0);
      memcpy((void *)*puVar1,pvVar2,lVar7 * 2);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147479ccc FUN_147479ccc body=450 status=ok
// SIG undefined FUN_147479ccc(void)

void FUN_147479ccc(longlong *param_1,longlong *param_2,undefined8 param_3,undefined1 *param_4)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_68 [45];
  byte local_3b;
  byte local_3a;
  char local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_39 = (int)param_1[1] == 0;
  (**(code **)(*param_2 + 0x178))(param_2,&local_39,1);
  if (local_39 == '\0') {
    if (DAT_14caa8580 == 0) {
      FUN_140608a9e();
    }
    if ((*(byte *)(param_2 + 5) & 4) == 0) {
      local_3b = 0;
      (**(code **)(*param_2 + 0x178))(param_2,&local_3b);
      *(undefined4 *)(param_1 + 1) = 0;
      if (*(uint *)((longlong)param_1 + 0xc) != (uint)local_3b) {
        FUN_1403de8ba(param_1);
      }
      FUN_147479e90(param_1,local_3b);
      if (local_3b != 0) {
        lVar3 = 0;
        uVar2 = 0;
        do {
          FUN_140f60476(*param_1 + lVar3,param_2,param_3,param_4);
          uVar2 = uVar2 + 1;
          lVar3 = lVar3 + 8;
        } while (uVar2 < local_3b);
      }
      FUN_1401fa756(param_1);
    }
    else {
      local_3a = ~(byte)(-1 << ((byte)*(undefined4 *)(DAT_14caa8580 + 0x68) & 0x1f));
      bVar1 = (byte)(int)param_1[1];
      if (bVar1 < local_3a) {
        local_3a = bVar1;
      }
      (**(code **)(*param_2 + 0x178))(param_2,&local_3a);
      if (local_3a != 0) {
        lVar3 = 0;
        uVar2 = 0;
        do {
          FUN_140f60476(*param_1 + lVar3,param_2,param_3,param_4);
          uVar2 = uVar2 + 1;
          lVar3 = lVar3 + 8;
        } while (uVar2 < local_3a);
      }
    }
  }
  else if (0 < (int)param_1[1]) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) < 0) {
      FUN_1403de8ba(param_1,0);
    }
    if (*(int *)((longlong)param_1 + 0x1c) < 0) {
      *(undefined4 *)(param_1 + 3) = 0;
      FUN_1403de8ba(param_1 + 2,0);
    }
    else {
      *(undefined4 *)(param_1 + 3) = 0;
    }
  }
  *param_4 = 1;
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147479e90 FUN_147479e90 body=65 status=ok
// SIG undefined FUN_147479e90(void)

void FUN_147479e90(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_1403de658(param_1,iVar1);
  }
  FUN_140608a8b((longlong)iVar1 * 8 + *param_1,param_2);
  return;
}



// FUNCTION 147479ed2 FUN_147479ed2 body=116 status=ok
// SIG undefined FUN_147479ed2(void)

bool FUN_147479ed2(undefined8 param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(ulonglong *)(param_2 + 0xc);
  FUN_1401a700c(&local_2c,6);
  if (uVar1 == local_2c) {
    (**(code **)(**(longlong **)(*param_3 + 8) + 0x160))(*(longlong **)(*param_3 + 8),param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1 == local_2c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147479f48 FUN_147479f48 body=57 status=ok
// SIG undefined FUN_147479f48(void)

undefined8 FUN_147479f48(undefined8 param_1,undefined8 param_2)

{
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_147479f82(DAT_14caa8580,param_2,param_1);
  return param_2;
}



// FUNCTION 147479f82 FUN_147479f82 body=442 status=ok
// SIG undefined FUN_147479f82(void)

undefined8 * FUN_147479f82(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x250);
  EnterCriticalSection(lpCriticalSection);
  if (*(int *)(param_1 + 0x130) != *(int *)(param_1 + 0x15c)) {
    lVar3 = *param_3;
    uVar5 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar8 = (uint)lVar3 & 0xffff;
    lVar7 = param_1 + 0x160;
    if (*(longlong *)(param_1 + 0x168) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x168);
    }
    iVar9 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(param_1 + 0x170) - 1U &
                             (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar8) +
                             (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar8 >> 4)) * 4);
    if (iVar9 != -1) {
      do {
        lVar7 = *(longlong *)(param_1 + 0x128) + (longlong)iVar9 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0x128) + (longlong)iVar9 * 0x20) == lVar3) {
          if ((lVar7 + 8U & 0xfffffffffffffff7) != 0) {
            lVar3 = *(longlong *)(lVar7 + 8);
            plVar10 = *(longlong **)(lVar7 + 0x10);
            if (plVar10 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
              UNLOCK();
            }
            LeaveCriticalSection(lpCriticalSection);
            if (lVar3 == 0) goto LAB_147479fbd;
            lVar7 = *(longlong *)(lVar3 + 0x38);
            plVar4 = *(longlong **)(lVar3 + 0x40);
            if (plVar4 == (longlong *)0x0) {
              if (lVar7 == 0) goto LAB_147479fbd;
            }
            else {
              LOCK();
              *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
              UNLOCK();
              if (lVar7 == 0) {
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
                goto LAB_147479fbd;
              }
            }
            if (*(int *)(lVar7 + 0x10) < 1) {
              puVar6 = &DAT_14caa8578;
            }
            else {
              puVar6 = *(undefined8 **)(lVar7 + 8);
            }
            *param_2 = *puVar6;
            if (plVar4 != (longlong *)0x0) {
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
            }
            goto LAB_147479fc4;
          }
          break;
        }
        iVar9 = *(int *)(lVar7 + 0x18);
      } while (iVar9 != -1);
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  plVar10 = (longlong *)0x0;
LAB_147479fbd:
  *param_2 = 0;
LAB_147479fc4:
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar10 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  return param_2;
}



// FUNCTION 14747a13c FUN_14747a13c body=24 status=ok
// SIG undefined FUN_14747a13c(void)

undefined1 FUN_14747a13c(void)

{
  undefined1 *in_R9;
  
  FUN_140f60476();
  *in_R9 = 1;
  return 1;
}



// FUNCTION 14747a154 FUN_14747a154 body=315 status=ok
// SIG undefined FUN_14747a154(void)

undefined2 FUN_14747a154(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined2 uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  longlong lVar10;
  
  if (*(char *)(param_1 + 0x28c) == '\x01') {
    FUN_143274272(param_1);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x250));
  if (*(int *)(param_1 + 0x130) != *(int *)(param_1 + 0x15c)) {
    lVar10 = *param_2;
    uVar4 = (uint)((ulonglong)lVar10 >> 0x10);
    uVar6 = (uint)lVar10 & 0xffff;
    lVar5 = param_1 + 0x160;
    if (*(longlong *)(param_1 + 0x168) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x168);
    }
    iVar7 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x170) - 1U &
                             (int)((ulonglong)lVar10 >> 0x20) + ((uint)lVar10 << 0x10 | uVar6) +
                             (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        lVar5 = *(longlong *)(param_1 + 0x128) + (longlong)iVar7 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0x128) + (longlong)iVar7 * 0x20) == lVar10) {
          if ((lVar5 + 8U & 0xfffffffffffffff7) != 0) {
            lVar10 = *(longlong *)(lVar5 + 8);
            plVar8 = *(longlong **)(lVar5 + 0x10);
            if (plVar8 == (longlong *)0x0) {
              plVar8 = (longlong *)0x0;
            }
            else {
              LOCK();
              *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
              UNLOCK();
            }
            goto LAB_14747a197;
          }
          break;
        }
        iVar7 = *(int *)(lVar5 + 0x18);
      } while (iVar7 != -1);
    }
  }
  plVar8 = (longlong *)0x0;
  lVar10 = 0;
LAB_14747a197:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x250));
  puVar9 = (undefined2 *)(param_1 + 0x74);
  if (lVar10 != 0) {
    puVar9 = (undefined2 *)(lVar10 + 0x48);
  }
  uVar3 = *puVar9;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  return uVar3;
}



// FUNCTION 14747a290 FUN_14747a290 body=126 status=ok
// SIG undefined FUN_14747a290(void)

undefined8 * FUN_14747a290(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_142a7d5c8(param_1,&local_20);
  if (local_20 == 0) {
    *param_2 = 0;
  }
  else {
    if (DAT_14caa8580 == 0) {
      FUN_140608a9e();
    }
    FUN_1400702d4(DAT_14caa8580,param_2,local_20,1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14747a310 FUN_14747a310 body=234 status=ok
// SIG undefined FUN_14747a310(void)

void FUN_14747a310(undefined4 *param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  
  *param_1 = 0;
  iVar2 = (int)param_3[1] + -1;
  if ((int)param_3[1] == 0) {
    iVar2 = 0;
  }
  FUN_1402980a2(param_1 + 10,*param_3,iVar2);
  plVar1 = (longlong *)(param_1 + 6);
  param_1[8] = 0;
  if ((int)param_1[9] < 0x80) {
    FUN_144893a1c(plVar1,0x80);
  }
  param_1[4] = 0;
  if ((int)param_1[5] < 0) {
    FUN_1403de8ba(param_1 + 2,0);
  }
  iVar2 = param_1[8];
  param_1[8] = iVar2 + 1U;
  if ((uint)param_1[9] < iVar2 + 1U) {
    FUN_1447403be(plVar1,iVar2);
  }
  *(undefined1 *)(*(longlong *)(param_1 + 6) + (longlong)iVar2) = 0;
  iVar2 = param_1[8];
  param_1[8] = iVar2 + 1U;
  if ((uint)param_1[9] < iVar2 + 1U) {
    FUN_1447403be(plVar1,iVar2);
  }
  *(undefined1 *)(*plVar1 + (longlong)iVar2) = 1;
  FUN_14747a3fa(param_2,plVar1,param_1 + 2);
  if (*param_3 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14747a3fa FUN_14747a3fa body=359 status=ok
// SIG undefined FUN_14747a3fa(void)

void FUN_14747a3fa(byte *param_1,longlong *param_2,undefined8 param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  bVar1 = *param_1;
  iVar2 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
    FUN_1447403be(param_2,iVar2);
  }
  *(byte *)(*param_2 + (longlong)iVar2) = bVar1;
  if (*param_1 - 4 < 3) {
    bVar1 = param_1[0x10];
    iVar2 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
      FUN_1447403be(param_2,iVar2);
    }
    *(byte *)(*param_2 + (longlong)iVar2) = bVar1;
    if ((longlong)*(int *)(param_1 + 0x10) != 0) {
      lVar5 = *(longlong *)(param_1 + 8);
      lVar6 = (longlong)*(int *)(param_1 + 0x10) * 0x28;
      do {
        FUN_14747a3fa(lVar5,param_2,param_3);
        lVar5 = lVar5 + 0x28;
        lVar6 = lVar6 + -0x28;
      } while (lVar6 != 0);
    }
  }
  else if (*param_1 - 1 < 3) {
    bVar1 = param_1[0x20];
    iVar2 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
      FUN_1447403be(param_2,iVar2);
    }
    *(byte *)(*param_2 + (longlong)iVar2) = bVar1;
    iVar2 = *(int *)(param_1 + 0x20);
    if ((longlong)iVar2 != 0) {
      lVar5 = *(longlong *)(param_1 + 0x18);
      lVar6 = 0;
      do {
        local_50 = *(undefined8 *)(lVar5 + lVar6);
        uVar4 = FUN_144976e62(param_3,&local_50);
        iVar3 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
          FUN_1447403be(param_2,iVar3);
        }
        *(undefined1 *)(*param_2 + (longlong)iVar3) = uVar4;
        lVar6 = lVar6 + 8;
      } while ((longlong)iVar2 * 8 != lVar6);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14747a562 FUN_14747a562 body=203 status=ok
// SIG undefined FUN_14747a562(void)

undefined4 * FUN_14747a562(undefined4 *param_1,undefined8 param_2,longlong *param_3)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  local_48 = (void *)0x0;
  local_40 = (int)param_3[1];
  lVar1 = (longlong)local_40;
  _Src = (void *)*param_3;
  if (lVar1 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,_Src,lVar1 * 2);
  }
  FUN_14747a310(param_1,param_2,&local_48);
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14747a62e FUN_14747a62e body=151 status=ok
// SIG undefined FUN_14747a62e(void)

undefined8 FUN_14747a62e(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 *puStack_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  uStack_30 = 0;
  uStack_60 = 0;
  local_58 = 0;
  puStack_50 = (undefined8 *)0x0;
  local_68 = 2;
  uVar1 = *param_2;
  local_48 = 1;
  FUN_1403de658(&puStack_50,0);
  *puStack_50 = uVar1;
  FUN_14747a562(param_1,&local_68,&local_38);
  FUN_14747990c(&local_68);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14747a6c6 FUN_14747a6c6 body=81 status=ok
// SIG undefined FUN_14747a6c6(void)

void FUN_14747a6c6(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined *local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uStack_20 = *(undefined4 *)(param_2 + 8);
  uStack_1c = *(undefined4 *)(param_2 + 0xc);
  local_18 = *(undefined4 *)(param_2 + 0x10);
  uStack_14 = *(undefined4 *)(param_2 + 0x14);
  uStack_10 = *(undefined4 *)(param_2 + 0x18);
  uStack_c = *(undefined4 *)(param_2 + 0x1c);
  local_28 = &DAT_14caa8090;
  (*DAT_14c99c040)();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14747a718 FUN_14747a718 body=81 status=ok
// SIG undefined FUN_14747a718(void)

void FUN_14747a718(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined *local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uStack_20 = *(undefined4 *)(param_2 + 8);
  uStack_1c = *(undefined4 *)(param_2 + 0xc);
  local_18 = *(undefined4 *)(param_2 + 0x10);
  uStack_14 = *(undefined4 *)(param_2 + 0x14);
  uStack_10 = *(undefined4 *)(param_2 + 0x18);
  uStack_c = *(undefined4 *)(param_2 + 0x1c);
  local_28 = &DAT_14caa8090;
  (*DAT_14c99c048)();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14747a76a FUN_14747a76a body=92 status=ok
// SIG undefined FUN_14747a76a(void)

void FUN_14747a76a(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [32];
  undefined *local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  local_28 = param_2[4];
  uStack_24 = param_2[5];
  uStack_20 = param_2[6];
  uStack_1c = param_2[7];
  local_18 = *(undefined8 *)(param_2 + 8);
  local_38 = &DAT_14caa8090;
  (*DAT_14c99c050)(*param_2,&local_38);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14747a7c8 FUN_14747a7c8 body=92 status=ok
// SIG undefined FUN_14747a7c8(void)

void FUN_14747a7c8(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [32];
  undefined *local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  local_28 = param_2[4];
  uStack_24 = param_2[5];
  uStack_20 = param_2[6];
  uStack_1c = param_2[7];
  local_18 = *(undefined8 *)(param_2 + 8);
  local_38 = &DAT_14caa8090;
  (*DAT_14c99c058)(*param_2,&local_38);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14747a826 FUN_14747a826 body=253 status=ok
// SIG undefined FUN_14747a826(void)

void FUN_14747a826(longlong param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  longlong *plStack_40;
  undefined8 local_38;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  if (*(char *)(DAT_14caa8580 + 0x229) == '\x01') {
    local_28[0] = 0;
    local_28[1] = 0;
    if ((*(byte *)(param_1 + 0x120) & 2) == 0) {
      FUN_14747a924(*(undefined8 *)(param_2 + 0x18),local_28);
    }
    uStack_50 = *(undefined4 *)(param_2 + 8);
    uStack_4c = *(undefined4 *)(param_2 + 0xc);
    local_48 = *(undefined4 *)(param_2 + 0x10);
    uStack_44 = *(undefined4 *)(param_2 + 0x14);
    local_38 = *(undefined8 *)(param_2 + 0x20);
    plStack_40 = local_28;
    local_58 = &DAT_14caa8090;
    (*DAT_14c99c060)(param_1);
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
  }
  else {
    local_38 = *(undefined8 *)(param_2 + 0x20);
    uStack_50 = *(undefined4 *)(param_2 + 8);
    uStack_4c = *(undefined4 *)(param_2 + 0xc);
    local_48 = *(undefined4 *)(param_2 + 0x10);
    uStack_44 = *(undefined4 *)(param_2 + 0x14);
    plStack_40 = *(longlong **)(param_2 + 0x18);
    local_58 = &DAT_14caa8090;
    (*DAT_14c99c060)(param_1);
  }
  if ((local_28[2] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14747a924 FUN_14747a924 body=1596 status=ok
// SIG undefined FUN_14747a924(void)

void FUN_14747a924(longlong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  void *pvVar3;
  ulonglong *puVar4;
  undefined2 uVar5;
  void **ppvVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  ulonglong *puVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  ulonglong *puVar18;
  uint uVar19;
  int iVar20;
  ulonglong *puVar21;
  ulonglong *puVar22;
  ulonglong *puVar23;
  longlong lVar24;
  bool bVar25;
  float fVar26;
  undefined1 auStack_3a8 [40];
  undefined8 *local_380;
  longlong *local_378;
  longlong local_370;
  void *local_368;
  ulonglong uStack_360;
  void *local_358;
  longlong local_350;
  undefined4 local_348 [188];
  ulonglong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  lVar24 = DAT_14caa8580;
  lVar9 = (longlong)(int)*(uint *)(param_1 + 1);
  if (0 < lVar9) {
    local_368 = (void *)0x0;
    uStack_360 = (ulonglong)*(uint *)(param_1 + 1);
    FUN_143274ac4(&local_368);
    local_370 = lVar9;
    memset(local_368,0,lVar9 << 4);
    pvVar3 = local_368;
    uVar19 = *(uint *)(param_1 + 1);
    if ((ulonglong)uVar19 != 0) {
      lVar9 = 0;
      uVar10 = 0;
      do {
        *(ulonglong *)((longlong)pvVar3 + lVar9 * 2) = uVar10;
        uVar5 = FUN_14747a154(lVar24);
        *(undefined2 *)((longlong)pvVar3 + lVar9 * 2 + 8) = uVar5;
        uVar10 = uVar10 + 1;
        lVar9 = lVar9 + 8;
      } while (uVar19 != uVar10);
    }
    pvVar3 = local_368;
    iVar15 = (int)uStack_360;
    lVar24 = (longlong)(int)uStack_360;
    if (1 < lVar24) {
      local_380 = param_2;
      local_378 = param_1;
      memset(local_348,0,0x2f0);
      local_358 = pvVar3;
      local_350 = (longlong)pvVar3 + lVar24 * 0x10 + -0x10;
      fVar26 = logf((float)iVar15);
      local_348[0] = (int)(longlong)(fVar26 + fVar26);
      ppvVar6 = &local_358;
      do {
        puVar8 = *ppvVar6;
        puVar11 = ppvVar6[1];
        iVar15 = *(int *)(ppvVar6 + 2);
        iVar20 = (int)((ulonglong)((longlong)puVar11 - (longlong)puVar8) >> 4);
        uVar19 = iVar20 + 1;
        puVar13 = puVar11;
        puVar18 = puVar8;
        if (iVar15 != 0) {
LAB_14747aa6c:
          if (8 < (int)uVar19) {
            uVar10 = puVar8[(ulonglong)(uVar19 >> 1) * 2];
            uVar12 = (puVar8 + (ulonglong)(uVar19 >> 1) * 2)[1];
            uVar1 = puVar8[1];
            puVar8[(ulonglong)(uVar19 >> 1) * 2] = *puVar8;
            (puVar8 + (ulonglong)(uVar19 >> 1) * 2)[1] = uVar1;
            *puVar8 = uVar10;
            puVar8[1] = uVar12;
            puVar21 = puVar13 + 2;
            puVar7 = puVar8;
            do {
              puVar4 = puVar7 + 2;
              puVar14 = puVar7 + 2;
              do {
                puVar7 = puVar14;
                puVar22 = puVar4;
                if (puVar13 < puVar7) break;
                bVar25 = (ushort)puVar8[1] < (ushort)puVar7[1];
                if ((ushort)puVar8[1] == (ushort)puVar7[1]) {
                  bVar25 = *puVar8 < *puVar7;
                }
                puVar4 = puVar22 + 2;
                puVar14 = puVar7 + 2;
              } while (!bVar25);
              puVar4 = puVar21 + -4;
              do {
                puVar14 = puVar21;
                puVar23 = puVar4;
                puVar21 = puVar14 + -2;
                if (puVar21 <= puVar8) break;
                bVar25 = (ushort)puVar14[-1] < (ushort)puVar8[1];
                if ((ushort)puVar14[-1] == (ushort)puVar8[1]) {
                  bVar25 = *puVar21 < *puVar8;
                }
                puVar4 = puVar23 + -2;
              } while (!bVar25);
              if (puVar21 < puVar7) goto LAB_14747ab53;
              uVar10 = *puVar7;
              uVar12 = puVar7[1];
              uVar1 = puVar14[-1];
              *puVar7 = *puVar21;
              puVar7[1] = uVar1;
              *puVar21 = uVar10;
              puVar14[-1] = uVar12;
            } while( true );
          }
          if (puVar8 < puVar13) {
            do {
              puVar11 = puVar8;
              if (puVar8 + 2 <= puVar13) {
                uVar10 = *puVar8;
                puVar18 = puVar8 + 2;
                puVar21 = puVar8;
                do {
                  bVar25 = (ushort)puVar21[1] < (ushort)puVar18[1];
                  if ((ushort)puVar21[1] == (ushort)puVar18[1]) {
                    bVar25 = uVar10 < *puVar18;
                  }
                  puVar11 = puVar18;
                  uVar12 = *puVar18;
                  if (!bVar25) {
                    puVar11 = puVar21;
                    uVar12 = uVar10;
                  }
                  uVar10 = uVar12;
                  puVar18 = puVar18 + 2;
                  puVar21 = puVar11;
                } while (puVar18 <= puVar13);
              }
              local_58 = *puVar11;
              uStack_50 = puVar11[1];
              uVar10 = puVar13[1];
              *puVar11 = *puVar13;
              puVar11[1] = uVar10;
              *puVar13 = local_58;
              puVar13[1] = uStack_50;
              puVar13 = puVar13 + -2;
            } while (puVar8 < puVar13);
          }
          goto LAB_14747aecc;
        }
LAB_14747abfd:
        if (uVar19 != 0) {
          iVar15 = (iVar20 - (iVar20 + -1 >> 0x1f)) + -1 >> 1;
          iVar20 = iVar15;
joined_r0x00014747ac24:
          do {
            iVar17 = iVar15 * 2 + 1;
            if (iVar17 < (int)uVar19) {
              iVar16 = iVar15 * 2 + 2;
              if (iVar16 < (int)uVar19) {
                bVar25 = (ushort)puVar8[(longlong)iVar16 * 2 + 1] <
                         (ushort)puVar8[(longlong)iVar17 * 2 + 1];
                if ((ushort)puVar8[(longlong)iVar16 * 2 + 1] ==
                    (ushort)puVar8[(longlong)iVar17 * 2 + 1]) {
                  bVar25 = puVar8[(longlong)iVar16 * 2] < puVar8[(longlong)iVar17 * 2];
                }
                if (!bVar25) {
                  iVar17 = iVar16;
                }
              }
              lVar24 = (longlong)iVar15;
              lVar9 = (longlong)iVar17;
              bVar25 = (ushort)puVar8[lVar24 * 2 + 1] < (ushort)puVar8[lVar9 * 2 + 1];
              if ((ushort)puVar8[lVar24 * 2 + 1] == (ushort)puVar8[lVar9 * 2 + 1]) {
                bVar25 = puVar8[lVar24 * 2] < puVar8[lVar9 * 2];
              }
              if (bVar25) {
                puVar13 = puVar8 + lVar24 * 2;
                puVar11 = puVar8 + lVar9 * 2;
                local_58 = *puVar13;
                uStack_50 = puVar13[1];
                uVar10 = puVar11[1];
                *puVar13 = *puVar11;
                puVar13[1] = uVar10;
                *puVar11 = local_58;
                puVar11[1] = uStack_50;
                iVar15 = iVar17;
                goto joined_r0x00014747ac24;
              }
            }
            bVar25 = iVar20 != 0;
            iVar15 = iVar20 + -1;
            iVar20 = iVar15;
          } while (bVar25);
          if (1 < (int)uVar19) {
            uVar12 = (ulonglong)uVar19 - 1;
            local_58 = *puVar8;
            uStack_50 = puVar8[1];
            uVar10 = (puVar8 + uVar12 * 2)[1];
            *puVar8 = puVar8[uVar12 * 2];
            puVar8[1] = uVar10;
            puVar8[uVar12 * 2] = local_58;
            (puVar8 + uVar12 * 2)[1] = uStack_50;
            if (uVar19 != 2) {
              do {
                iVar15 = 0;
                iVar17 = 1;
                iVar20 = 0;
                do {
                  lVar24 = (longlong)(iVar15 + 2);
                  iVar16 = iVar17;
                  if (lVar24 < (longlong)uVar12) {
                    bVar25 = (ushort)puVar8[lVar24 * 2 + 1] <
                             (ushort)puVar8[(longlong)iVar17 * 2 + 1];
                    if ((ushort)puVar8[lVar24 * 2 + 1] == (ushort)puVar8[(longlong)iVar17 * 2 + 1])
                    {
                      bVar25 = puVar8[lVar24 * 2] < puVar8[(longlong)iVar17 * 2];
                    }
                    if (!bVar25) {
                      iVar16 = iVar15 + 2;
                    }
                  }
                  lVar24 = (longlong)iVar20;
                  lVar9 = (longlong)iVar16;
                  bVar25 = (ushort)puVar8[lVar24 * 2 + 1] < (ushort)puVar8[lVar9 * 2 + 1];
                  if ((ushort)puVar8[lVar24 * 2 + 1] == (ushort)puVar8[lVar9 * 2 + 1]) {
                    bVar25 = puVar8[lVar24 * 2] < puVar8[lVar9 * 2];
                  }
                  if (!bVar25) break;
                  puVar13 = puVar8 + lVar24 * 2;
                  puVar11 = puVar8 + lVar9 * 2;
                  uVar10 = *puVar13;
                  uVar1 = puVar13[1];
                  uVar2 = puVar11[1];
                  *puVar13 = *puVar11;
                  puVar13[1] = uVar2;
                  *puVar11 = uVar10;
                  puVar11[1] = uVar1;
                  iVar15 = iVar16 * 2;
                  iVar17 = iVar16 * 2 + 1;
                  iVar20 = iVar16;
                } while ((longlong)iVar17 < (longlong)uVar12);
                uVar10 = uVar12 - 1;
                local_58 = *puVar8;
                uStack_50 = puVar8[1];
                uVar1 = (puVar8 + uVar10 * 2)[1];
                *puVar8 = puVar8[uVar10 * 2];
                puVar8[1] = uVar1;
                puVar8[uVar10 * 2] = local_58;
                (puVar8 + uVar10 * 2)[1] = uStack_50;
                bVar25 = 2 < uVar12;
                uVar12 = uVar10;
              } while (bVar25);
            }
          }
        }
LAB_14747aecc:
        ppvVar6 = ppvVar6 + -3;
        param_1 = local_378;
        param_2 = local_380;
      } while (&local_358 <= ppvVar6);
    }
    FUN_140608a1c(param_2,local_370);
    if ((longlong)(int)uStack_360 != 0) {
      param_2 = (undefined8 *)*param_2;
      lVar24 = *param_1;
      lVar9 = 0;
      do {
        *param_2 = *(undefined8 *)(lVar24 + *(longlong *)((longlong)local_368 + lVar9) * 8);
        lVar9 = lVar9 + 0x10;
        param_2 = param_2 + 1;
      } while ((longlong)(int)uStack_360 * 0x10 != lVar9);
    }
    if (local_368 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14747ab53:
  local_58 = *puVar8;
  uStack_50 = puVar8[1];
  uVar10 = puVar14[-1];
  *puVar8 = *puVar21;
  puVar8[1] = uVar10;
  *puVar21 = local_58;
  puVar14[-1] = uStack_50;
  iVar15 = iVar15 + -1;
  puVar14 = puVar14 + -4;
  if ((longlong)puVar23 - (longlong)puVar18 < (longlong)puVar11 - (longlong)puVar22) {
    if (puVar7 < puVar13) {
      *ppvVar6 = puVar7;
      ppvVar6[1] = puVar13;
      *(int *)(ppvVar6 + 2) = iVar15;
      ppvVar6 = ppvVar6 + 3;
    }
    puVar22 = puVar8;
    puVar11 = puVar23;
    if (puVar21 <= puVar8 + 2) goto LAB_14747aecc;
  }
  else {
    if (puVar8 + 2 < puVar21) {
      *ppvVar6 = puVar8;
      ppvVar6[1] = puVar14;
      *(int *)(ppvVar6 + 2) = iVar15;
      ppvVar6 = ppvVar6 + 3;
    }
    puVar8 = puVar7;
    puVar14 = puVar13;
    puVar11 = puVar13;
    if (puVar13 <= puVar7) goto LAB_14747aecc;
  }
  iVar20 = (int)((ulonglong)((longlong)puVar11 - (longlong)puVar22) >> 4);
  uVar19 = iVar20 + 1;
  puVar13 = puVar14;
  puVar18 = puVar22;
  if (iVar15 == 0) goto LAB_14747abfd;
  goto LAB_14747aa6c;
}



// FUNCTION 14747af62 FUN_14747af62 body=192 status=ok
// SIG undefined FUN_14747af62(void)

void FUN_14747af62(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_a8 [32];
  longlong local_88 [2];
  longlong local_78;
  undefined *local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong *local_48;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_38[0] = 0;
  local_38[1] = 0;
  uStack_60 = *(undefined4 *)(param_2 + 8);
  uStack_5c = *(undefined4 *)(param_2 + 0xc);
  local_58 = *(undefined4 *)(param_2 + 0x10);
  uStack_54 = *(undefined4 *)(param_2 + 0x14);
  uStack_50 = *(undefined4 *)(param_2 + 0x18);
  uStack_4c = *(undefined4 *)(param_2 + 0x1c);
  local_68 = &DAT_14caa8090;
  local_48 = local_38;
  (*DAT_14c99c068)();
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  FUN_1457ae23a(local_88,local_38);
  FUN_140cc1bde(uVar1,local_88);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14747b024 FUN_14747b024 body=587 status=ok
// SIG undefined FUN_14747b024(void)

ulonglong FUN_14747b024(ulonglong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong unaff_RSI;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong *local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined *local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  longlong **local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(char *)(param_2 + 5) == '\x01') {
    if (DAT_14caa8580 == 0) {
      FUN_140608a9e();
    }
    if (*(char *)(DAT_14caa8580 + 0x229) == '\x01') {
      uStack_60 = param_2[1];
      local_58 = *(undefined4 *)(param_2 + 2);
      uStack_54 = *(undefined4 *)((longlong)param_2 + 0x14);
      uStack_50 = param_2[3];
      local_48 = (longlong **)param_2[4];
      uStack_40 = *(undefined4 *)(param_2 + 5);
      uStack_3c = *(undefined4 *)((longlong)param_2 + 0x2c);
      local_68 = &DAT_14caa8090;
      uVar3 = (*DAT_14c99c070)(param_1);
      param_1 = (ulonglong)uVar3;
    }
    else {
      local_48 = &local_88;
      local_78 = 0;
      uStack_70 = 0;
      local_88 = (longlong *)0x0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = (longlong *)0x0;
      uStack_a0 = 0;
      local_58 = 0;
      uStack_60 = 0;
      local_68 = (undefined *)*param_2;
      uStack_50 = param_2[3];
      FUN_14747af62(param_1,&local_68);
      uStack_50 = param_2[4];
      local_48 = &local_a8;
      FUN_14747af62(param_1,&local_68);
      lVar4 = (longlong)(int)uStack_80;
      if ((int)uStack_80 == (int)uStack_a0) {
        if ((int)uStack_80 != 0) {
          plVar6 = local_a8;
          do {
            lVar7 = 0;
            while (*(longlong *)((longlong)local_88 + lVar7) != *plVar6) {
              lVar7 = lVar7 + 8;
              if (lVar4 * 8 == lVar7) goto LAB_14747b229;
            }
            plVar6 = plVar6 + 1;
          } while (plVar6 != local_a8 + lVar4);
          param_1 = 0;
          plVar6 = local_88;
          do {
            lVar7 = 0;
            while (*(longlong *)((longlong)local_a8 + lVar7) != *plVar6) {
              lVar7 = lVar7 + 8;
              if (lVar4 * 8 == lVar7) goto LAB_14747b22b;
            }
            plVar6 = plVar6 + 1;
          } while (plVar6 != local_88 + lVar4);
        }
        param_1 = CONCAT71((int7)(param_1 >> 8),1);
      }
      else {
LAB_14747b229:
        param_1 = 0;
      }
LAB_14747b22b:
      if (local_98 != 0) {
        FUN_1400020a8();
      }
      if (local_a8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      if (local_88 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    iVar1 = (int)((longlong *)param_2[3])[1];
    lVar4 = (longlong)iVar1;
    if (iVar1 == (int)((longlong *)param_2[4])[1]) {
      param_1 = unaff_RSI;
      if (iVar1 != 0) {
        plVar2 = *(longlong **)param_2[4];
        plVar5 = *(longlong **)param_2[3];
        plVar6 = plVar5 + lVar4;
        plVar8 = plVar2;
        do {
          lVar7 = 0;
          while (*(longlong *)((longlong)plVar5 + lVar7) != *plVar8) {
            lVar7 = lVar7 + 8;
            if (lVar4 * 8 == lVar7) goto LAB_14747b14e;
          }
          plVar8 = plVar8 + 1;
        } while (plVar8 != plVar2 + lVar4);
        param_1 = 0;
        do {
          lVar7 = 0;
          while (*(longlong *)((longlong)plVar2 + lVar7) != *plVar5) {
            lVar7 = lVar7 + 8;
            if (lVar4 * 8 == lVar7) goto LAB_14747b0a9;
          }
          plVar5 = plVar5 + 1;
        } while (plVar5 != plVar6);
      }
      param_1 = CONCAT71((int7)(param_1 >> 8),1);
    }
    else {
LAB_14747b14e:
      param_1 = 0;
    }
  }
LAB_14747b0a9:
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1 & 0xffffffff;
}



// FUNCTION 14747b270 FUN_14747b270 body=196 status=ok
// SIG undefined FUN_14747b270(void)

undefined4 FUN_14747b270(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_78 [32];
  undefined *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong local_40;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_2 + 0x18);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  if ((*(int *)(DAT_14caa8580 + 0x68) - 0x20U < 0xffffffe1) ||
     (*(uint *)(lVar1 + 8) >> ((byte)*(int *)(DAT_14caa8580 + 0x68) & 0x1f) != 0)) {
    uVar2 = 0;
  }
  else {
    local_38[0] = 0;
    local_38[1] = 0;
    FUN_14747a924(lVar1,local_38);
    uStack_50 = *(undefined4 *)(param_2 + 8);
    uStack_4c = *(undefined4 *)(param_2 + 0xc);
    local_48 = *(undefined8 *)(param_2 + 0x10);
    local_58 = &DAT_14caa8090;
    local_40 = lVar1;
    uVar2 = (*DAT_14c99c078)(param_1);
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38[2] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14747b338 FUN_14747b338 body=92 status=ok
// SIG undefined FUN_14747b338(void)

void FUN_14747b338(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [32];
  undefined *local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  local_28 = param_2[4];
  uStack_24 = param_2[5];
  uStack_20 = param_2[6];
  uStack_1c = param_2[7];
  local_18 = *(undefined8 *)(param_2 + 8);
  local_38 = &DAT_14caa8090;
  (*DAT_14c99c080)(*param_2,&local_38);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14747b396 FUN_14747b396 body=81 status=ok
// SIG undefined FUN_14747b396(void)

void FUN_14747b396(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined *local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uStack_20 = *(undefined4 *)(param_2 + 8);
  uStack_1c = *(undefined4 *)(param_2 + 0xc);
  local_18 = *(undefined4 *)(param_2 + 0x10);
  uStack_14 = *(undefined4 *)(param_2 + 0x14);
  uStack_10 = *(undefined4 *)(param_2 + 0x18);
  uStack_c = *(undefined4 *)(param_2 + 0x1c);
  local_28 = &DAT_14caa8090;
  (*DAT_14c99c088)();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14747b3e8 FUN_14747b3e8 body=132 status=ok
// SIG undefined FUN_14747b3e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14747b3e8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa80d0) {
    FUN_144b3d300(&DAT_14caa80d0);
    if (DAT_14caa80d0 == -1) {
      _DAT_14caa80c0 = &DAT_14caa7fe0;
      _DAT_14caa80b0 = &PTR_LAB_149f970a0;
      _DAT_14caa80c8 = 0;
      _DAT_14caa80b8 = DAT_14caa80a8;
      _Init_thread_footer(&DAT_14caa80d0);
      return;
    }
  }
  return;
}



// FUNCTION 14747b46c FUN_14747b46c body=25 status=ok
// SIG undefined FUN_14747b46c(void)

void FUN_14747b46c(void)

{
  FUN_14747b3e8();
  FUN_146f09d18(&DAT_14caa80b0);
  return;
}



// FUNCTION 14747b486 FUN_14747b486 body=268 status=ok
// SIG undefined FUN_14747b486(void)

void FUN_14747b486(void)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  uint local_60;
  uint local_58;
  undefined1 local_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa7c88 == 0) {
    uVar2 = FUN_140608922();
    DAT_14caa7c88 =
         FUN_140002ddd(FUN_146326b8f,uVar2,L"GameplayTagContainerNetSerializerSerializationHelper");
  }
  lVar1 = DAT_14caa7c88;
  FUN_146f11b1e(local_48);
  FUN_142a6f4a0(&local_28,lVar1,local_48);
  lVar1 = DAT_14caa80a0;
  DAT_14caa80a0 = local_28;
  local_28 = 0;
  if (lVar1 != 0) {
    FUN_146f11920();
    if (local_28 != 0) {
      FUN_146f11920();
    }
  }
  if (8 < *(ushort *)(DAT_14caa80a0 + 0x7a) || 0x10 < *(uint *)(DAT_14caa80a0 + 0x74)) {
    local_58 = (uint)*(ushort *)(DAT_14caa80a0 + 0x7a);
    local_68 = 8;
    local_60 = *(uint *)(DAT_14caa80a0 + 0x74);
    FUN_140033559(".\\Runtime/GameplayTags/Private/GameplayTagContainerNetSerializer.cpp",0x16f,
                  L"FQuantizedType::QuantizedStruct has size %u and alignment %u but requires size %u and alignment %u."
                  ,0x10);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14747b62c FUN_14747b62c body=324 status=ok
// SIG undefined FUN_14747b62c(void)

bool FUN_14747b62c(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint *puVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = *(uint **)(param_2 + 0x18);
  puVar2 = *(uint **)(param_2 + 0x20);
  if (*(char *)(param_2 + 0x28) != '\x01') {
    bVar7 = *(longlong *)puVar1 == *(longlong *)puVar2;
    goto LAB_14747b675;
  }
  if ((char)puVar1[1] != (char)puVar2[1]) goto LAB_14747b755;
  if ((char)puVar1[1] != '\0') {
    bVar7 = (short)*puVar1 == (short)*puVar2;
    goto LAB_14747b675;
  }
  if (((byte)(*puVar1 >> 0x17) & 1) == ((byte)(*puVar2 >> 0x17) & 1)) {
    if (*puVar1 != *puVar2) {
LAB_14747b755:
      bVar7 = false;
      goto LAB_14747b675;
    }
  }
  else {
    if ((*(longlong **)(param_1 + 0xf0) == (longlong *)0x0) ||
       (**(longlong **)(param_1 + 0xf0) == 0)) {
      lVar4 = 0;
    }
    else {
      lVar4 = FUN_146f42d10();
    }
    if ((longlong)*(int *)(lVar4 + 0x20) == 0) {
LAB_14747b6e5:
      lVar4 = 0;
    }
    else {
      plVar3 = *(longlong **)(lVar4 + 0x18);
      lVar5 = (longlong)*(int *)(lVar4 + 0x20) << 4;
      lVar4 = 0;
      do {
        if (*plVar3 == DAT_14caa7e00) {
          if (plVar3 == (longlong *)0x0) goto LAB_14747b6e5;
          lVar4 = plVar3[1];
          break;
        }
        plVar3 = plVar3 + 2;
        lVar5 = lVar5 + -0x10;
      } while (lVar5 != 0);
    }
    if (*(longlong *)(param_1 + 0xf0) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 0x10);
    }
    FUN_14747a290(lVar4,&local_30,*puVar1,uVar6);
    FUN_14747a290(lVar4,&local_38,*puVar2,uVar6);
    if (local_30 != local_38) goto LAB_14747b755;
  }
  bVar7 = true;
LAB_14747b675:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return bVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14747b771 FUN_14747b771 body=132 status=ok
// SIG undefined FUN_14747b771(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14747b771(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa81c8) {
    FUN_144b3d300(&DAT_14caa81c8);
    if (DAT_14caa81c8 == -1) {
      _DAT_14caa81b8 = &DAT_14caa80f0;
      _DAT_14caa81a8 = &PTR_LAB_149f970a0;
      _DAT_14caa81c0 = 0;
      _DAT_14caa81b0 = DAT_14caa81a0;
      _Init_thread_footer(&DAT_14caa81c8);
      return;
    }
  }
  return;
}



// FUNCTION 14747b7f6 FUN_14747b7f6 body=25 status=ok
// SIG undefined FUN_14747b7f6(void)

void FUN_14747b7f6(void)

{
  FUN_14747b771();
  FUN_146f09d18(&DAT_14caa81a8);
  return;
}



// FUNCTION 14747b81a FUN_14747b81a body=126 status=ok
// SIG undefined FUN_14747b81a(void)

void FUN_14747b81a(longlong param_1,char param_2)

{
  if ((*(char *)(param_1 + 0x228) == '\0') && (*(char *)(param_1 + 0x231) == '\x01')) {
    if ((param_2 != '\0') &&
       ((*(char *)(param_1 + 0x230) != '\x01' || (*(char *)(param_1 + 0x22f) == '\0')))) {
      FUN_14575aa7a(param_1);
      FUN_14327338a(param_1);
      return;
    }
    if (*(char *)(param_1 + 0x229) == '\x01') {
      *(undefined1 *)(param_1 + 0x28c) = 1;
    }
    if (*(int *)(param_1 + 0x234) == 0) {
      FUN_1447f69b6(&DAT_14caa8320);
      return;
    }
    *(undefined1 *)(param_1 + 0x238) = 1;
  }
  return;
}



// FUNCTION 14747b898 FUN_14747b898 body=68 status=ok
// SIG undefined FUN_14747b898(void)

void FUN_14747b898(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_14024d120(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_14024d16e(param_1,param_2);
  return;
}



// FUNCTION 14747b8de FUN_14747b8de body=317 status=ok
// SIG undefined FUN_14747b8de(void)

void FUN_14747b8de(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
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
  FUN_14747b898(param_2,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
  local_48 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      iVar3 = iStack_5c;
      lVar4 = *local_78;
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_1403deb82(param_2,iVar1);
      }
      lVar4 = (longlong)iVar3 * 0x20 + lVar4;
      lVar2 = *param_2;
      *(undefined8 *)(lVar2 + (longlong)iVar1 * 0x10) = *(undefined8 *)(lVar4 + 8);
      lVar4 = *(longlong *)(lVar4 + 0x10);
      *(longlong *)(lVar2 + 8 + (longlong)iVar1 * 0x10) = lVar4;
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14747ba1c FUN_14747ba1c body=130 status=ok
// SIG undefined FUN_14747ba1c(void)

void FUN_14747ba1c(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if ((longlong)iVar1 < 0xfffe) {
    *(undefined4 *)(param_1 + 1) = 0xfffe;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < 0xfffeU - iVar1) {
      FUN_1403deb82(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(ulonglong)(0xfffeU - iVar1) << 4);
    return;
  }
  if (iVar1 == 0xfffe) {
    return;
  }
  FUN_14747e08a(param_1,iVar1 + -0xfffe);
  FUN_14747e0de(param_1);
  return;
}



// FUNCTION 14747ba9e FUN_14747ba9e body=437 status=ok
// SIG undefined FUN_14747ba9e(void)

void FUN_14747ba9e(longlong param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_78 [32];
  undefined **local_58;
  undefined **ppuStack_50;
  void *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = (undefined **)0x0;
  ppuStack_50 = (undefined **)0x0;
  lVar3 = FUN_1413f795e(0,DAT_14caa84f8,0,&local_58);
  if (local_58 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  lVar3 = *(longlong *)(lVar3 + 0x10);
  FUN_141795742(param_2,&local_58);
  iVar2 = *(int *)(lVar3 + 0x40);
  *(uint *)(lVar3 + 0x40) = iVar2 + 1U;
  if (*(uint *)(lVar3 + 0x44) < iVar2 + 1U) {
    FUN_14747e50a((longlong *)(lVar3 + 0x38),iVar2);
  }
  _Src = local_48;
  lVar3 = *(longlong *)(lVar3 + 0x38);
  lVar4 = (longlong)iVar2 * 0x20;
  pppuVar1 = (undefined ***)(lVar3 + lVar4);
  *(undefined ***)(lVar3 + lVar4) = &PTR_FUN_14a3de8d0;
  puVar5 = (undefined8 *)(lVar3 + 8 + lVar4);
  *puVar5 = 0;
  puVar5[1] = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar4) = 0;
  if (pppuVar1 != &local_58) {
    pppuVar1[1] = ppuStack_50;
    *(int *)(pppuVar1 + 3) = local_40;
    if ((longlong)local_40 == 0) {
      *(undefined4 *)((longlong)pppuVar1 + 0x1c) = 0;
    }
    else {
      puVar5 = (undefined8 *)(lVar4 + lVar3 + 0x10);
      FUN_1446dd670(puVar5,local_40,0);
      memcpy((void *)*puVar5,_Src,(longlong)local_40 * 2);
    }
  }
  local_58 = &PTR_FUN_14a3de8d0;
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_141795742(param_2,&local_58);
  FUN_1403dd93c(param_1,&local_58);
  local_58 = &PTR_FUN_14a3de8d0;
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((*(char *)(param_1 + 0x228) == '\0') && (*(char *)(param_1 + 0x231) == '\x01')) {
    if (*(char *)(param_1 + 0x229) == '\x01') {
      *(undefined1 *)(param_1 + 0x28c) = 1;
    }
    if (*(int *)(param_1 + 0x234) == 0) {
      FUN_1447f69b6(&DAT_14caa8320);
    }
    else {
      *(undefined1 *)(param_1 + 0x238) = 1;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14747bcec FUN_14747bcec body=54 status=ok
// SIG undefined FUN_14747bcec(void)

undefined1 FUN_14747bcec(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140c19cf6(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 14747bd4a FUN_14747bd4a body=59 status=ok
// SIG undefined FUN_14747bd4a(void)

undefined8 FUN_14747bd4a(longlong *param_1)

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



// FUNCTION 14747bd90 FUN_14747bd90 body=37 status=ok
// SIG undefined FUN_14747bd90(void)

void FUN_14747bd90(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 14747be3e FUN_14747be3e body=116 status=ok
// SIG undefined FUN_14747be3e(void)

bool FUN_14747be3e(undefined8 param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(ulonglong *)(param_2 + 0xc);
  FUN_1401a700c(&local_2c,6);
  if (uVar1 == local_2c) {
    (**(code **)(**(longlong **)(*param_3 + 8) + 0x160))(*(longlong **)(*param_3 + 8),param_4);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1 == local_2c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14747bf1e FUN_14747bf1e body=21 status=ok
// SIG undefined FUN_14747bf1e(void)

undefined1 FUN_14747bf1e(void)

{
  undefined8 in_stack_00000028;
  
  FUN_147479ccc(in_stack_00000028);
  return 1;
}



// FUNCTION 14747bf3e FUN_14747bf3e body=40 status=ok
// SIG undefined FUN_14747bf3e(void)

undefined8
FUN_14747bf3e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6)

{
  FUN_147479948(param_3,param_2,param_4,param_5,param_6);
  return 1;
}



// FUNCTION 14747bf7a FUN_14747bf7a body=59 status=ok
// SIG undefined FUN_14747bf7a(void)

undefined8 FUN_14747bf7a(longlong *param_1)

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



// FUNCTION 14747c00a FUN_14747c00a body=51 status=ok
// SIG undefined FUN_14747c00a(void)

void FUN_14747c00a(longlong *param_1)

{
  if ((char)param_1[4] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 14747c086 FUN_14747c086 body=59 status=ok
// SIG undefined FUN_14747c086(void)

undefined8 FUN_14747c086(longlong *param_1)

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



// FUNCTION 14747c158 FUN_14747c158 body=54 status=ok
// SIG undefined FUN_14747c158(void)

undefined1 FUN_14747c158(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140c19bee(param_2,param_3);
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return 1;
}



// FUNCTION 14747c1b6 FUN_14747c1b6 body=59 status=ok
// SIG undefined FUN_14747c1b6(void)

undefined8 FUN_14747c1b6(longlong *param_1)

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



// FUNCTION 14747c1fc FUN_14747c1fc body=32 status=ok
// SIG undefined FUN_14747c1fc(void)

void FUN_14747c1fc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_1412dafa6(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 14747c25f FUN_14747c25f body=38 status=ok
// SIG undefined FUN_14747c25f(void)

void FUN_14747c25f(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14747990c(param_1);
    param_1 = param_1 + 0x28;
  }
  return;
}



// FUNCTION 14747c286 FUN_14747c286 body=116 status=ok
// SIG undefined FUN_14747c286(void)

void FUN_14747c286(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14747c382(param_1,iVar1);
    }
    FUN_14747c364((longlong)iVar1 * 0x14 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_14747c416(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14747c2fc FUN_14747c2fc body=13 status=ok
// SIG undefined FUN_14747c2fc(void)

void FUN_14747c2fc(longlong param_1)

{
  FUN_14747c328(param_1 + 0x10,*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 14747c30a FUN_14747c30a body=29 status=ok
// SIG undefined FUN_14747c30a(void)

undefined8 FUN_14747c30a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14747c328 FUN_14747c328 body=60 status=ok
// SIG undefined FUN_14747c328(void)

void FUN_14747c328(undefined8 param_1,longlong *param_2)

{
  if (param_2 != (longlong *)0x0) {
    if (param_2[3] != 0) {
      FUN_1400020a8();
    }
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(param_2);
    return;
  }
  return;
}



// FUNCTION 14747c364 FUN_14747c364 body=29 status=ok
// SIG undefined FUN_14747c364(void)

void FUN_14747c364(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined2 *)(param_1 + 2) = 0x100;
    *(undefined1 *)((longlong)param_1 + 0x12) = 0;
    param_1 = (undefined8 *)((longlong)param_1 + 0x14);
  }
  return;
}



// FUNCTION 14747c382 FUN_14747c382 body=147 status=ok
// SIG undefined FUN_14747c382(void)

void FUN_14747c382(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x14,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x14)) {
      uVar5 = uVar4 / 0x14 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x14,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14747c416 FUN_14747c416 body=63 status=ok
// SIG undefined FUN_14747c416(void)

void FUN_14747c416(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14747c456(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x14,4);
  }
  return;
}



// FUNCTION 14747c456 FUN_14747c456 body=117 status=ok
// SIG undefined FUN_14747c456(void)

ulonglong FUN_14747c456(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x14) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x14,4);
      uVar1 = uVar1 / 0x14;
    }
  }
  return uVar1;
}



// FUNCTION 14747c55c FUN_14747c55c body=59 status=ok
// SIG undefined FUN_14747c55c(void)

undefined8 FUN_14747c55c(longlong *param_1)

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



// FUNCTION 14747c5fe FUN_14747c5fe body=29 status=ok
// SIG undefined FUN_14747c5fe(void)

undefined8 FUN_14747c5fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14747c61c FUN_14747c61c body=38 status=ok
// SIG undefined FUN_14747c61c(void)

undefined8 FUN_14747c61c(undefined8 param_1,int param_2)

{
  FUN_14580f0c2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14747c6d2 FUN_14747c6d2 body=59 status=ok
// SIG undefined FUN_14747c6d2(void)

undefined8 FUN_14747c6d2(longlong *param_1)

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



// FUNCTION 14747c773 FUN_14747c773 body=166 status=ok
// SIG undefined FUN_14747c773(void)

void FUN_14747c773(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [39];
  char local_51;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = 0;
  local_48 = 0;
  local_50 = *param_2;
  local_38 = param_2[3];
  local_30 = param_2[4];
  local_28 = 1;
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  local_51 = FUN_14747b62c();
  FUN_146f5435e(uVar1,local_51 != '\0',1);
  if (local_51 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14747c82c FUN_14747c82c body=71 status=ok
// SIG undefined FUN_14747c82c(void)

void FUN_14747c82c(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_146f546d2(*(undefined8 *)(param_1 + 0xd8),1);
  if ((uVar1 & 1) == 0) {
    FUN_143271eb6(param_1,param_2);
    return;
  }
  **(undefined8 **)(param_2 + 0x18) = **(undefined8 **)(param_2 + 0x20);
  return;
}



// FUNCTION 14747c874 FUN_14747c874 body=29 status=ok
// SIG undefined FUN_14747c874(void)

undefined8 FUN_14747c874(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14747c892 FUN_14747c892 body=38 status=ok
// SIG undefined FUN_14747c892(void)

undefined8 FUN_14747c892(undefined8 param_1,int param_2)

{
  FUN_14580f0c2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14747c91c FUN_14747c91c body=59 status=ok
// SIG undefined FUN_14747c91c(void)

undefined8 FUN_14747c91c(longlong *param_1)

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



// FUNCTION 14747c9ee FUN_14747c9ee body=75 status=ok
// SIG undefined FUN_14747c9ee(void)

undefined8 FUN_14747c9ee(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      if (param_2 != param_3) {
        *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
        FUN_144a787a6(param_2,param_3);
      }
      param_3 = param_3 + 0x20;
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14747ca62 FUN_14747ca62 body=59 status=ok
// SIG undefined FUN_14747ca62(void)

undefined8 FUN_14747ca62(longlong *param_1)

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



// FUNCTION 14747caa8 FUN_14747caa8 body=48 status=ok
// SIG undefined FUN_14747caa8(void)

void FUN_14747caa8(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 4) == '\x01') {
    *param_2 = &PTR_FUN_14a3de8d0;
    if (param_2[2] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 4) = 0;
  }
  return;
}



// FUNCTION 14747cb84 FUN_14747cb84 body=59 status=ok
// SIG undefined FUN_14747cb84(void)

undefined8 FUN_14747cb84(longlong *param_1)

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



// FUNCTION 14747cbca FUN_14747cbca body=48 status=ok
// SIG undefined FUN_14747cbca(void)

void FUN_14747cbca(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 5) == '\x01') {
    *param_2 = &PTR_FUN_14a3de8d0;
    if (param_2[2] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 5) = 0;
  }
  return;
}



// FUNCTION 14747cc8a FUN_14747cc8a body=54 status=ok
// SIG undefined FUN_14747cc8a(void)

undefined1 FUN_14747cc8a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14747cd88(param_2,param_3);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 14747cce8 FUN_14747cce8 body=59 status=ok
// SIG undefined FUN_14747cce8(void)

undefined8 FUN_14747cce8(longlong *param_1)

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



// FUNCTION 14747cd88 FUN_14747cd88 body=106 status=ok
// SIG undefined FUN_14747cd88(void)

undefined8 * FUN_14747cd88(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = *param_2;
  lVar2 = param_2[2];
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[2];
    }
  }
  bVar1 = DAT_14c950c29;
  param_1[2] = lVar2;
  lVar2 = param_2[3];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[3];
    }
  }
  param_1[3] = lVar2;
  return param_1;
}



// FUNCTION 14747ce4a FUN_14747ce4a body=54 status=ok
// SIG undefined FUN_14747ce4a(void)

undefined1 FUN_14747ce4a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14747cfd4(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 14747cea8 FUN_14747cea8 body=59 status=ok
// SIG undefined FUN_14747cea8(void)

undefined8 FUN_14747cea8(longlong *param_1)

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



// FUNCTION 14747ceee FUN_14747ceee body=32 status=ok
// SIG undefined FUN_14747ceee(void)

void FUN_14747ceee(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_14747cf5c(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 14747cf5c FUN_14747cf5c body=119 status=ok
// SIG undefined FUN_14747cf5c(void)

void FUN_14747cf5c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x40);
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
  FUN_14024d120(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  if (*(longlong *)(param_1 + 0x28) != 0) {
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



// FUNCTION 14747cfd4 FUN_14747cfd4 body=127 status=ok
// SIG undefined FUN_14747cfd4(void)

undefined8 * FUN_14747cfd4(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *param_1 = *param_2;
  FUN_1403de7ba(param_1 + 1,param_2 + 1);
  FUN_14747d054(param_1 + 5,param_2 + 5);
  uVar3 = param_2[7];
  lVar4 = param_2[8];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_1[8];
  param_1[7] = uVar3;
  param_1[8] = lVar4;
  if (plVar5 != (longlong *)0x0) {
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
  *(undefined2 *)(param_1 + 9) = *(undefined2 *)(param_2 + 9);
  return param_1;
}



// FUNCTION 14747d054 FUN_14747d054 body=93 status=ok
// SIG undefined FUN_14747d054(void)

undefined8 * FUN_14747d054(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14024d120(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14747d0b2(param_1,iVar1);
      FUN_14747d114(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14747d0b2 FUN_14747d0b2 body=98 status=ok
// SIG undefined FUN_14747d0b2(void)

void FUN_14747d0b2(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,8);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14747d114 FUN_14747d114 body=45 status=ok
// SIG undefined FUN_14747d114(void)

void FUN_14747d114(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      lVar1 = *(longlong *)(param_2 + 8 + lVar2);
      *(longlong *)(param_1 + 8 + lVar2) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      lVar2 = lVar2 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14747d142 FUN_14747d142 body=151 status=ok
// SIG undefined FUN_14747d142(void)

undefined8 * FUN_14747d142(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  uVar2 = param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_140b856de(param_1 + 2,iVar1,0);
    FUN_140b8566a(param_1[2],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 14747d1da FUN_14747d1da body=132 status=ok
// SIG undefined FUN_14747d1da(void)

void FUN_14747d1da(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14747d296 FUN_14747d296 body=67 status=ok
// SIG undefined FUN_14747d296(void)

undefined1 FUN_14747d296(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_140bee9ec(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 14747d302 FUN_14747d302 body=59 status=ok
// SIG undefined FUN_14747d302(void)

undefined8 FUN_14747d302(longlong *param_1)

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



// FUNCTION 14747d348 FUN_14747d348 body=34 status=ok
// SIG undefined FUN_14747d348(void)

void FUN_14747d348(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_14747d3b8(param_2);
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 14747d3b8 FUN_14747d3b8 body=59 status=ok
// SIG undefined FUN_14747d3b8(void)

void FUN_14747d3b8(longlong *param_1)

{
  FUN_1447a1747(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14747d42a FUN_14747d42a body=67 status=ok
// SIG undefined FUN_14747d42a(void)

undefined1 FUN_14747d42a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_140bee9ec(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 14747d496 FUN_14747d496 body=59 status=ok
// SIG undefined FUN_14747d496(void)

undefined8 FUN_14747d496(longlong *param_1)

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



// FUNCTION 14747d4dc FUN_14747d4dc body=34 status=ok
// SIG undefined FUN_14747d4dc(void)

void FUN_14747d4dc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_1459783c6(param_2);
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 14747d54e FUN_14747d54e body=209 status=ok
// SIG undefined FUN_14747d54e(void)

int FUN_14747d54e(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  iVar4 = (int)param_1[1];
  lVar5 = (longlong)iVar4;
  if (lVar5 == 0) {
    iVar4 = 0;
  }
  else {
    plVar1 = (longlong *)*param_1;
    iVar3 = 0;
    bVar10 = *plVar1 == *(longlong *)*param_2;
    iVar7 = 0;
    do {
      iVar2 = iVar7 + 1;
      if (iVar7 + 1 < iVar4) {
        iVar2 = iVar4;
      }
      iVar8 = iVar7;
      lVar6 = (longlong)iVar7;
      do {
        lVar6 = lVar6 + 1;
        iVar9 = iVar2;
        if (lVar5 <= lVar6) break;
        iVar8 = iVar8 + 1;
        iVar9 = iVar8;
      } while (bVar10 == (plVar1[lVar6] == *(longlong *)*param_2));
      if (bVar10 == false) {
        if (iVar3 != iVar7) {
          memmove(plVar1 + iVar3,plVar1 + iVar7,(longlong)(iVar9 - iVar7) << 3);
        }
        iVar3 = iVar3 + (iVar9 - iVar7);
      }
      bVar10 = (bool)(bVar10 ^ 1);
      iVar7 = iVar9;
    } while (lVar6 < lVar5);
    *(int *)(param_1 + 1) = iVar3;
    iVar4 = iVar4 - iVar3;
  }
  return iVar4;
}



// FUNCTION 14747d620 FUN_14747d620 body=31 status=ok
// SIG undefined FUN_14747d620(void)

undefined8 FUN_14747d620(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14747d658 FUN_14747d658 body=93 status=ok
// SIG undefined FUN_14747d658(void)

void FUN_14747d658(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a3e1bd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14747d6b6 FUN_14747d6b6 body=93 status=ok
// SIG undefined FUN_14747d6b6(void)

void FUN_14747d6b6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a3e1bd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14747d714 FUN_14747d714 body=126 status=ok
// SIG undefined FUN_14747d714(void)

void FUN_14747d714(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a3e1bd0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014747d783. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}


