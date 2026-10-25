// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14743642c FUN_14743642c body=87 status=ok
// SIG undefined FUN_14743642c(void)

void FUN_14743642c(ulonglong *param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_147436484(param_1);
  }
  uVar2 = *param_1;
  uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)param_1;
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2;
  }
  memset((void *)(uVar3 + (longlong)iVar1 * 4),0,(longlong)(int)param_2 << 2);
  return;
}



// FUNCTION 147436484 FUN_147436484 body=132 status=ok
// SIG undefined FUN_147436484(void)

void FUN_147436484(longlong param_1,int param_2)

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



// FUNCTION 14743650a FUN_14743650a body=62 status=ok
// SIG undefined FUN_14743650a(void)

void FUN_14743650a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147436548(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_144a7f90c(param_1,*(undefined4 *)(param_1 + 8),iVar1,4,2);
  }
  return;
}



// FUNCTION 147436548 FUN_147436548 body=93 status=ok
// SIG undefined FUN_147436548(void)

ulonglong FUN_147436548(uint param_1,uint param_2)

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



// FUNCTION 1474365b4 FUN_1474365b4 body=31 status=ok
// SIG undefined FUN_1474365b4(void)

undefined8
FUN_1474365b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_147436bd8(param_2,param_1,param_4);
  return 0x10;
}



// FUNCTION 1474365e2 FUN_1474365e2 body=74 status=ok
// SIG undefined FUN_1474365e2(void)

void FUN_1474365e2(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  FUN_1474366b4();
  FUN_1467ac8f2(param_1,&DAT_14ca99410,uVar1,uVar2,param_3,param_4);
  return;
}



// FUNCTION 14743662c FUN_14743662c body=37 status=ok
// SIG undefined FUN_14743662c(void)

void FUN_14743662c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae(param_1);
  }
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 147436652 FUN_147436652 body=97 status=ok
// SIG undefined FUN_147436652(void)

void FUN_147436652(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  FUN_1474366b4();
  FUN_1467ac78e(param_1,param_2,&DAT_14ca99410,uVar1,0);
  FUN_146826a6c(param_2,param_1 + 8,4);
  FUN_146826a6c(param_2,param_1 + 8,4);
  return;
}



// FUNCTION 1474366b4 FUN_1474366b4 body=200 status=ok
// SIG undefined FUN_1474366b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1474366b4(void)

{
  if ((DAT_14ca99477 & 2) != 0) {
    return;
  }
  DAT_14ca99477 = DAT_14ca99477 | 2;
  _DAT_14ca99418 = L"FParameter";
  _DAT_14ca99430 = FUN_146826540;
  _DAT_14ca99438 = FUN_146825d77;
  _DAT_14ca99440 = FUN_146825fd6;
  _DAT_14ca99448 = FUN_1407e02ea;
  _DAT_14ca99450 = FUN_146826273;
  _DAT_14ca99428 = &LAB_14743677c;
  _DAT_14ca99468 = 0xffffffff00000008;
  _DAT_14ca99470 = 2;
  DAT_14ca99474 = 0;
  _DAT_14ca99458 = &LAB_14743678a;
  FUN_14743678e();
  FUN_1407e00cc(&DAT_14ca99410);
  return;
}



// FUNCTION 14743678e FUN_14743678e body=275 status=ok
// SIG undefined FUN_14743678e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14743678e(void)

{
  FUN_1474368a2();
  _DAT_14ca99478 = L"BufferIndex";
  DAT_14ca994a2 = FUN_140850cc5();
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
  _DAT_14ca99480 = &DAT_14ca84cb0;
  _DAT_14ca99490 = &LAB_14682652b;
  _DAT_14ca99498 = 0x100000000;
  _DAT_14ca994a0 = 0;
  _DAT_14ca99488 = DAT_14ca99420;
  DAT_14ca99420 = &DAT_14ca99478;
  return;
}



// FUNCTION 1474368a2 FUN_1474368a2 body=275 status=ok
// SIG undefined FUN_1474368a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1474368a2(void)

{
  FUN_1474369b6();
  _DAT_14ca994a8 = L"BaseIndex";
  DAT_14ca994d2 = FUN_140850cc5();
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
  _DAT_14ca994b0 = &DAT_14ca84cb0;
  _DAT_14ca994c0 = &LAB_14682652b;
  _DAT_14ca994c8 = &DAT_100000002;
  _DAT_14ca994d0 = 0;
  _DAT_14ca994b8 = DAT_14ca99420;
  DAT_14ca99420 = &DAT_14ca994a8;
  return;
}



// FUNCTION 1474369b6 FUN_1474369b6 body=275 status=ok
// SIG undefined FUN_1474369b6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1474369b6(void)

{
  FUN_147436aca();
  _DAT_14ca994d8 = L"ByteOffset";
  DAT_14ca99502 = FUN_140850cc5();
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
  _DAT_14ca994e0 = &DAT_14ca84cb0;
  _DAT_14ca994f0 = &LAB_14682652b;
  _DAT_14ca994f8 = &DAT_100000004;
  _DAT_14ca99500 = 0;
  _DAT_14ca994e8 = DAT_14ca99420;
  DAT_14ca99420 = &DAT_14ca994d8;
  return;
}



// FUNCTION 147436aca FUN_147436aca body=270 status=ok
// SIG undefined FUN_147436aca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147436aca(void)

{
  _DAT_14ca99508 = L"ByteSize";
  DAT_14ca99532 = FUN_140850cc5();
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
  _DAT_14ca99510 = &DAT_14ca84cb0;
  _DAT_14ca99520 = &LAB_14682652b;
  _DAT_14ca99528 = 0x100000006;
  _DAT_14ca99530 = 0;
  _DAT_14ca99518 = DAT_14ca99420;
  DAT_14ca99420 = &DAT_14ca99508;
  return;
}



// FUNCTION 147436bd8 FUN_147436bd8 body=100 status=ok
// SIG undefined FUN_147436bd8(void)

void FUN_147436bd8(longlong param_1,undefined8 param_2,ulonglong *param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  *param_3 = 0;
  param_3[1] = 0;
  FUN_147436c3c(param_3,*(undefined4 *)(param_1 + 8));
  uVar2 = *param_3;
  uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)param_3;
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2;
  }
  uVar1 = *(undefined4 *)(param_1 + 8);
  FUN_1474366b4();
  FUN_1467ac844(param_1,param_2,&DAT_14ca99410,uVar1,uVar3);
  return;
}



// FUNCTION 147436c3c FUN_147436c3c body=59 status=ok
// SIG undefined FUN_147436c3c(void)

void FUN_147436c3c(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (param_2 - iVar1 != 0 && iVar1 <= param_2) {
    FUN_147436c78(param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 8) = param_2;
    FUN_147436d56();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147436c78 FUN_147436c78 body=87 status=ok
// SIG undefined FUN_147436c78(void)

void FUN_147436c78(ulonglong *param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_147436cd0(param_1);
  }
  uVar2 = *param_1;
  uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)param_1;
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2;
  }
  memset((void *)(uVar3 + (longlong)iVar1 * 8),0,(longlong)(int)param_2 << 3);
  return;
}



// FUNCTION 147436cd0 FUN_147436cd0 body=132 status=ok
// SIG undefined FUN_147436cd0(void)

void FUN_147436cd0(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,2);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_144a7f90c(param_1,param_2,uVar5,8,2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147436d56 FUN_147436d56 body=62 status=ok
// SIG undefined FUN_147436d56(void)

void FUN_147436d56(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147436d94(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_144a7f90c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,2);
  }
  return;
}



// FUNCTION 147436d94 FUN_147436d94 body=93 status=ok
// SIG undefined FUN_147436d94(void)

ulonglong FUN_147436d94(uint param_1,uint param_2)

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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,2);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 147436e36 FUN_147436e36 body=31 status=ok
// SIG undefined FUN_147436e36(void)

undefined8
FUN_147436e36(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14743723c(param_2,param_1,param_4);
  return 0x10;
}



// FUNCTION 147436e7e FUN_147436e7e body=39 status=ok
// SIG undefined FUN_147436e7e(void)

void FUN_147436e7e(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743762e(param_1);
  }
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 147436ea6 FUN_147436ea6 body=234 status=ok
// SIG undefined FUN_147436ea6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147436ea6(longlong param_1,undefined8 param_2)

{
  if ((DAT_14ca9978f & 2) == 0) {
    DAT_14ca9978f = DAT_14ca9978f | 3;
    _DAT_14ca99730 = L"TMemoryImagePtr<T>";
    _DAT_14ca99748 = &LAB_147436f90;
    _DAT_14ca99750 = FUN_147436f96;
    _DAT_14ca99758 = &LAB_147436fac;
    _DAT_14ca99760 = &LAB_147436fba;
    _DAT_14ca99768 = &LAB_147436fc8;
    _DAT_14ca99740 = &LAB_147436fd4;
    _DAT_14ca99780 = 0x800000008;
    _DAT_14ca99788 = 8;
    DAT_14ca9978c = 0;
  }
  FUN_1467ac78e(param_1,param_2,&DAT_14ca99728,*(undefined4 *)(param_1 + 8),0);
  FUN_146826a6c(param_2,param_1 + 8,4);
  FUN_146826a6c(param_2,param_1 + 8,4);
  return;
}



// FUNCTION 147436f96 FUN_147436f96 body=22 status=ok
// SIG undefined FUN_147436f96(void)

undefined8
FUN_147436f96(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1474370b7(param_1,param_2,param_4);
  return 8;
}



// FUNCTION 147436fe2 FUN_147436fe2 body=199 status=ok
// SIG undefined FUN_147436fe2(void)

void FUN_147436fe2(undefined8 param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auStack_68 [32];
  uint *local_48;
  undefined1 local_40 [12];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *param_2;
  uVar2 = ((longlong)uVar1 >> 0x18) + (longlong)param_2;
  if ((uVar1 & 1) == 0) {
    uVar2 = uVar1;
  }
  if (uVar2 == 0) {
    if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
      FUN_1468280da(param_1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_146827ffc(param_1);
  FUN_146069c5a();
  local_34 = 0;
  FUN_146069c5a();
  local_48 = &local_34;
  FUN_14682810a(param_1,local_40,&DAT_14ca98138,&DAT_14ca98138);
  FUN_146828008(local_40,uVar2 - local_34,&DAT_14ca98138);
  FUN_146827334(local_40);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
}



// FUNCTION 1474370b7 FUN_1474370b7 body=205 status=ok
// SIG undefined FUN_1474370b7(void)

void FUN_1474370b7(longlong param_1,ulonglong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  undefined *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *param_2;
  uVar5 = ((longlong)uVar1 >> 0x18) + (longlong)param_2;
  if ((uVar1 & 1) == 0) {
    uVar5 = uVar1;
  }
  if (uVar5 == 0) {
LAB_1474370e0:
    lVar4 = 0;
  }
  else {
    FUN_146069c5a();
    puVar3 = (undefined *)FUN_146828166(param_1,&DAT_14ca98138,((uint)*param_2 >> 1 & 0x7fffff) - 1)
    ;
    if (puVar3 == (undefined *)0x0) {
      if (*(char *)(param_1 + 0x10) != '\x01') goto LAB_1474370e0;
      FUN_146069c5a();
      puVar3 = &DAT_14ca98138;
    }
    uVar2 = FUN_1468264de(puVar3,&DAT_14ca98138);
    lVar4 = FUN_14001cc68(*(int *)(puVar3 + 0x58) + (uint)(*(int *)(puVar3 + 0x58) == 0),0x10);
    (**(code **)(puVar3 + 0x28))(param_1,uVar5 - uVar2,puVar3,lVar4);
    lVar4 = lVar4 + (ulonglong)uVar2;
  }
  *param_3 = lVar4;
  return;
}



// FUNCTION 147437184 FUN_147437184 body=183 status=ok
// SIG undefined FUN_147437184(void)

void FUN_147437184(ulonglong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar1 = *param_1;
  uVar3 = ((longlong)uVar1 >> 0x18) + (longlong)param_1;
  if ((uVar1 & 1) == 0) {
    uVar3 = uVar1;
  }
  if (uVar3 == 0) {
    FUN_146826b22(param_3);
    return;
  }
  FUN_146069c5a();
  FUN_146069c5a();
  uVar2 = FUN_1468264de(&DAT_14ca98138,&DAT_14ca98138);
  if ((*param_1 & 1) == 0) {
    FUN_146826b64(param_3,&DAT_14ca98138);
  }
  else {
    FUN_146826b82(param_3,&DAT_14ca98138,((uint)(*param_1 >> 1) & 0x7fffff) - 1);
  }
                    /* WARNING: Could not recover jumptable at 0x000147437238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_14ca98178)(uVar3 - uVar2,&DAT_14ca98138,param_2,param_3);
  return;
}



// FUNCTION 14743723c FUN_14743723c body=245 status=ok
// SIG undefined FUN_14743723c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14743723c(longlong param_1,undefined8 param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  *param_3 = 0;
  param_3[1] = 0;
  FUN_147437332(param_3,*(undefined4 *)(param_1 + 8));
  uVar1 = *param_3;
  if ((DAT_14ca9978f & 2) == 0) {
    DAT_14ca9978f = DAT_14ca9978f | 3;
    _DAT_14ca99730 = L"TMemoryImagePtr<T>";
    _DAT_14ca99748 = &LAB_147436f90;
    _DAT_14ca99750 = FUN_147436f96;
    _DAT_14ca99758 = &LAB_147436fac;
    _DAT_14ca99760 = &LAB_147436fba;
    _DAT_14ca99768 = &LAB_147436fc8;
    _DAT_14ca99740 = &LAB_147436fd4;
    _DAT_14ca99780 = 0x800000008;
    _DAT_14ca99788 = 8;
    DAT_14ca9978c = 0;
  }
  uVar2 = (longlong)param_3 + ((longlong)uVar1 >> 0x18);
  if ((uVar1 & 1) == 0) {
    uVar2 = uVar1;
  }
  FUN_1467ac844(param_1,param_2,&DAT_14ca99728,*(undefined4 *)(param_1 + 8),uVar2);
  return;
}



// FUNCTION 147437332 FUN_147437332 body=76 status=ok
// SIG undefined FUN_147437332(void)

void FUN_147437332(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    FUN_147437380(param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_14743745e(param_1);
    FUN_1474374c4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147437380 FUN_147437380 body=87 status=ok
// SIG undefined FUN_147437380(void)

void FUN_147437380(ulonglong *param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_1474373d8(param_1);
  }
  uVar2 = *param_1;
  uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)param_1;
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2;
  }
  memset((void *)(uVar3 + (longlong)iVar1 * 8),0,(longlong)(int)param_2 << 3);
  return;
}



// FUNCTION 1474373d8 FUN_1474373d8 body=132 status=ok
// SIG undefined FUN_1474373d8(void)

void FUN_1474373d8(longlong param_1,int param_2)

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



// FUNCTION 14743745e FUN_14743745e body=102 status=ok
// SIG undefined FUN_14743745e(void)

void FUN_14743745e(ulonglong *param_1,uint param_2,int param_3)

{
  void *_Dst;
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar1 = *param_1;
  uVar4 = ((longlong)uVar1 >> 0x18) + (longlong)param_1;
  if ((uVar1 & 1) == 0) {
    uVar4 = uVar1;
  }
  _Dst = (void *)(uVar4 + (ulonglong)param_2 * 8);
  FUN_147437502(_Dst,param_3);
  iVar2 = (int)param_1[1];
  iVar3 = iVar2 - (param_2 + param_3);
  if (iVar3 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 8),(longlong)iVar3 << 3);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 - param_3;
  return;
}



// FUNCTION 1474374c4 FUN_1474374c4 body=62 status=ok
// SIG undefined FUN_1474374c4(void)

void FUN_1474374c4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147437504(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_144a7f90c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 147437502 FUN_147437502 body=1 status=ok
// SIG undefined FUN_147437502(void)

void FUN_147437502(void)

{
  return;
}



// FUNCTION 147437504 FUN_147437504 body=93 status=ok
// SIG undefined FUN_147437504(void)

ulonglong FUN_147437504(uint param_1,uint param_2)

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



// FUNCTION 147437562 FUN_147437562 body=203 status=ok
// SIG undefined FUN_147437562(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147437562(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  if ((DAT_14ca9978f & 2) == 0) {
    DAT_14ca9978f = DAT_14ca9978f | 3;
    _DAT_14ca99730 = L"TMemoryImagePtr<T>";
    _DAT_14ca99748 = &LAB_147436f90;
    _DAT_14ca99750 = FUN_147436f96;
    _DAT_14ca99758 = &LAB_147436fac;
    _DAT_14ca99760 = &LAB_147436fba;
    _DAT_14ca99768 = &LAB_147436fc8;
    _DAT_14ca99740 = &LAB_147436fd4;
    _DAT_14ca99780 = 0x800000008;
    _DAT_14ca99788 = 8;
    DAT_14ca9978c = 0;
  }
  FUN_1467ac8f2(param_1,&DAT_14ca99728,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                param_2,param_3);
  return;
}



// FUNCTION 14743762e FUN_14743762e body=48 status=ok
// SIG undefined FUN_14743762e(void)

void FUN_14743762e(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = *param_1;
  uVar2 = ((longlong)uVar1 >> 0x18) + (longlong)param_1;
  if ((uVar1 & 1) == 0) {
    uVar2 = uVar1;
  }
  FUN_147437502(uVar2,(int)param_1[1]);
  FUN_144a886ae(param_1);
  return;
}



// FUNCTION 14743766c FUN_14743766c body=31 status=ok
// SIG undefined FUN_14743766c(void)

undefined8
FUN_14743766c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_147437a9a(param_2,param_1,param_4);
  return 0x10;
}



// FUNCTION 1474376b4 FUN_1474376b4 body=39 status=ok
// SIG undefined FUN_1474376b4(void)

void FUN_1474376b4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_147437e8c(param_1);
  }
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 1474376dc FUN_1474376dc body=234 status=ok
// SIG undefined FUN_1474376dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1474376dc(longlong param_1,undefined8 param_2)

{
  if ((DAT_14ca9985f & 2) == 0) {
    DAT_14ca9985f = DAT_14ca9985f | 3;
    _DAT_14ca99800 = L"TMemoryImagePtr<T>";
    _DAT_14ca99818 = &LAB_1474377c6;
    _DAT_14ca99820 = FUN_1474377cc;
    _DAT_14ca99828 = &LAB_1474377e2;
    _DAT_14ca99830 = &LAB_1474377f0;
    _DAT_14ca99838 = &LAB_1474377fe;
    _DAT_14ca99810 = &LAB_14743780a;
    _DAT_14ca99850 = 0x800000008;
    _DAT_14ca99858 = 8;
    DAT_14ca9985c = 0;
  }
  FUN_1467ac78e(param_1,param_2,&DAT_14ca997f8,*(undefined4 *)(param_1 + 8),0);
  FUN_146826a6c(param_2,param_1 + 8,4);
  FUN_146826a6c(param_2,param_1 + 8,4);
  return;
}



// FUNCTION 1474377cc FUN_1474377cc body=22 status=ok
// SIG undefined FUN_1474377cc(void)

undefined8
FUN_1474377cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1474378f8(param_1,param_2,param_4);
  return 8;
}



// FUNCTION 147437818 FUN_147437818 body=210 status=ok
// SIG undefined FUN_147437818(void)

void FUN_147437818(undefined8 param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [32];
  uint *local_48;
  undefined1 local_40 [12];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *param_2;
  uVar4 = ((longlong)uVar1 >> 0x18) + (longlong)param_2;
  if ((uVar1 & 1) == 0) {
    uVar4 = uVar1;
  }
  if (uVar4 == 0) {
    if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
      FUN_1468280da(param_1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  uVar2 = FUN_146827ffc(param_1);
  lVar3 = FUN_147432492(uVar4 + 0xc0,uVar2);
  uVar2 = *(undefined8 *)(lVar3 + 0x10);
  local_34 = 0;
  FUN_145cc1382();
  local_48 = &local_34;
  FUN_14682810a(param_1,local_40,&DAT_14ca97f78,uVar2);
  FUN_146828008(local_40,uVar4 - local_34,uVar2);
  FUN_146827334(local_40);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
}



// FUNCTION 1474378f8 FUN_1474378f8 body=221 status=ok
// SIG undefined FUN_1474378f8(void)

void FUN_1474378f8(undefined8 *param_1,ulonglong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *param_2;
  uVar5 = ((longlong)uVar1 >> 0x18) + (longlong)param_2;
  if ((uVar1 & 1) == 0) {
    uVar5 = uVar1;
  }
  if (uVar5 != 0) {
    FUN_145cc1382();
    lVar3 = FUN_146828166(param_1,&DAT_14ca97f78,((uint)*param_2 >> 1 & 0x7fffff) - 1);
    if (lVar3 != 0) {
LAB_147437968:
      uVar2 = FUN_1468264de(lVar3,&DAT_14ca97f78);
      lVar4 = FUN_14001cc68(*(int *)(lVar3 + 0x58) + (uint)(*(int *)(lVar3 + 0x58) == 0),0x10);
      (**(code **)(lVar3 + 0x28))(param_1,uVar5 - uVar2,lVar3,lVar4);
      lVar4 = lVar4 + (ulonglong)uVar2;
      goto LAB_147437924;
    }
    if (*(char *)(param_1 + 2) == '\x01') {
      lVar3 = FUN_147432492(uVar5 + 0xc0,*param_1);
      lVar3 = *(longlong *)(lVar3 + 0x10);
      if (lVar3 != 0) goto LAB_147437968;
    }
  }
  lVar4 = 0;
LAB_147437924:
  *param_3 = lVar4;
  return;
}



// FUNCTION 1474379d5 FUN_1474379d5 body=197 status=ok
// SIG undefined FUN_1474379d5(void)

void FUN_1474379d5(ulonglong *param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *param_1;
  uVar4 = ((longlong)uVar1 >> 0x18) + (longlong)param_1;
  if ((uVar1 & 1) == 0) {
    uVar4 = uVar1;
  }
  if (uVar4 == 0) {
    FUN_146826b22(param_3);
    return;
  }
  FUN_145cc1382();
  lVar3 = FUN_147432492(uVar4 + 0xc0,*(undefined8 *)(param_3 + 8));
  lVar3 = *(longlong *)(lVar3 + 0x10);
  uVar2 = FUN_1468264de(lVar3,&DAT_14ca97f78);
  if ((*param_1 & 1) == 0) {
    FUN_146826b64(param_3,&DAT_14ca97f78);
  }
  else {
    FUN_146826b82(param_3,&DAT_14ca97f78,((uint)(*param_1 >> 1) & 0x7fffff) - 1);
  }
                    /* WARNING: Could not recover jumptable at 0x000147437a97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x40))(uVar4 - uVar2,lVar3,param_2,param_3);
  return;
}



// FUNCTION 147437a9a FUN_147437a9a body=245 status=ok
// SIG undefined FUN_147437a9a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147437a9a(longlong param_1,undefined8 param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  *param_3 = 0;
  param_3[1] = 0;
  FUN_147437b90(param_3,*(undefined4 *)(param_1 + 8));
  uVar1 = *param_3;
  if ((DAT_14ca9985f & 2) == 0) {
    DAT_14ca9985f = DAT_14ca9985f | 3;
    _DAT_14ca99800 = L"TMemoryImagePtr<T>";
    _DAT_14ca99818 = &LAB_1474377c6;
    _DAT_14ca99820 = FUN_1474377cc;
    _DAT_14ca99828 = &LAB_1474377e2;
    _DAT_14ca99830 = &LAB_1474377f0;
    _DAT_14ca99838 = &LAB_1474377fe;
    _DAT_14ca99810 = &LAB_14743780a;
    _DAT_14ca99850 = 0x800000008;
    _DAT_14ca99858 = 8;
    DAT_14ca9985c = 0;
  }
  uVar2 = (longlong)param_3 + ((longlong)uVar1 >> 0x18);
  if ((uVar1 & 1) == 0) {
    uVar2 = uVar1;
  }
  FUN_1467ac844(param_1,param_2,&DAT_14ca997f8,*(undefined4 *)(param_1 + 8),uVar2);
  return;
}



// FUNCTION 147437b90 FUN_147437b90 body=76 status=ok
// SIG undefined FUN_147437b90(void)

void FUN_147437b90(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    FUN_147437bde(param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_147437cbc(param_1);
    FUN_147437d22(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147437bde FUN_147437bde body=87 status=ok
// SIG undefined FUN_147437bde(void)

void FUN_147437bde(ulonglong *param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_147437c36(param_1);
  }
  uVar2 = *param_1;
  uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)param_1;
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2;
  }
  memset((void *)(uVar3 + (longlong)iVar1 * 8),0,(longlong)(int)param_2 << 3);
  return;
}



// FUNCTION 147437c36 FUN_147437c36 body=132 status=ok
// SIG undefined FUN_147437c36(void)

void FUN_147437c36(longlong param_1,int param_2)

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



// FUNCTION 147437cbc FUN_147437cbc body=102 status=ok
// SIG undefined FUN_147437cbc(void)

void FUN_147437cbc(ulonglong *param_1,uint param_2,int param_3)

{
  void *_Dst;
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar1 = *param_1;
  uVar4 = ((longlong)uVar1 >> 0x18) + (longlong)param_1;
  if ((uVar1 & 1) == 0) {
    uVar4 = uVar1;
  }
  _Dst = (void *)(uVar4 + (ulonglong)param_2 * 8);
  FUN_147437d60(_Dst,param_3);
  iVar2 = (int)param_1[1];
  iVar3 = iVar2 - (param_2 + param_3);
  if (iVar3 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 8),(longlong)iVar3 << 3);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 - param_3;
  return;
}



// FUNCTION 147437d22 FUN_147437d22 body=62 status=ok
// SIG undefined FUN_147437d22(void)

void FUN_147437d22(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147437d62(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_144a7f90c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 147437d60 FUN_147437d60 body=1 status=ok
// SIG undefined FUN_147437d60(void)

void FUN_147437d60(void)

{
  return;
}



// FUNCTION 147437d62 FUN_147437d62 body=93 status=ok
// SIG undefined FUN_147437d62(void)

ulonglong FUN_147437d62(uint param_1,uint param_2)

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



// FUNCTION 147437dc0 FUN_147437dc0 body=203 status=ok
// SIG undefined FUN_147437dc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147437dc0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  if ((DAT_14ca9985f & 2) == 0) {
    DAT_14ca9985f = DAT_14ca9985f | 3;
    _DAT_14ca99800 = L"TMemoryImagePtr<T>";
    _DAT_14ca99818 = &LAB_1474377c6;
    _DAT_14ca99820 = FUN_1474377cc;
    _DAT_14ca99828 = &LAB_1474377e2;
    _DAT_14ca99830 = &LAB_1474377f0;
    _DAT_14ca99838 = &LAB_1474377fe;
    _DAT_14ca99810 = &LAB_14743780a;
    _DAT_14ca99850 = 0x800000008;
    _DAT_14ca99858 = 8;
    DAT_14ca9985c = 0;
  }
  FUN_1467ac8f2(param_1,&DAT_14ca997f8,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                param_2,param_3);
  return;
}



// FUNCTION 147437e8c FUN_147437e8c body=48 status=ok
// SIG undefined FUN_147437e8c(void)

void FUN_147437e8c(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = *param_1;
  uVar2 = ((longlong)uVar1 >> 0x18) + (longlong)param_1;
  if ((uVar1 & 1) == 0) {
    uVar2 = uVar1;
  }
  FUN_147437d60(uVar2,(int)param_1[1]);
  FUN_144a886ae(param_1);
  return;
}



// FUNCTION 147437eca FUN_147437eca body=31 status=ok
// SIG undefined FUN_147437eca(void)

undefined8
FUN_147437eca(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_147438022(param_2,param_1,param_4);
  return 0x10;
}



// FUNCTION 147437f12 FUN_147437f12 body=37 status=ok
// SIG undefined FUN_147437f12(void)

void FUN_147437f12(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae(param_1);
  }
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 147437f38 FUN_147437f38 body=234 status=ok
// SIG undefined FUN_147437f38(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147437f38(longlong param_1,undefined8 param_2)

{
  if ((DAT_14c951c5f & 2) == 0) {
    DAT_14c951c5f = DAT_14c951c5f | 3;
    _DAT_14c951c00 = &DAT_149e97ffe;
    _DAT_14c951c18 = &LAB_1468cb2bc;
    _DAT_14c951c20 = &LAB_1468cb2c8;
    _DAT_14c951c28 = &LAB_1468cb2d4;
    _DAT_14c951c30 = &LAB_14280d956;
    _DAT_14c951c38 = &LAB_1468cb2da;
    _DAT_14c951c10 = &LAB_1468cb2e2;
    _DAT_14c951c50 = 0x400000004;
    _DAT_14c951c58 = 4;
    DAT_14c951c5c = 0;
  }
  FUN_1467ac78e(param_1,param_2,&DAT_14c951bf8,*(undefined4 *)(param_1 + 8),0);
  FUN_146826a6c(param_2,param_1 + 8,4);
  FUN_146826a6c(param_2,param_1 + 8,4);
  return;
}



// FUNCTION 147438022 FUN_147438022 body=248 status=ok
// SIG undefined FUN_147438022(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147438022(longlong param_1,undefined8 param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  *param_3 = 0;
  param_3[1] = 0;
  FUN_14743811a(param_3,*(undefined4 *)(param_1 + 8),1);
  uVar1 = *param_3;
  if ((DAT_14c951c5f & 2) == 0) {
    DAT_14c951c5f = DAT_14c951c5f | 3;
    _DAT_14c951c00 = &DAT_149e97ffe;
    _DAT_14c951c18 = &LAB_1468cb2bc;
    _DAT_14c951c20 = &LAB_1468cb2c8;
    _DAT_14c951c28 = &LAB_1468cb2d4;
    _DAT_14c951c30 = &LAB_14280d956;
    _DAT_14c951c38 = &LAB_1468cb2da;
    _DAT_14c951c10 = &LAB_1468cb2e2;
    _DAT_14c951c50 = 0x400000004;
    _DAT_14c951c58 = 4;
    DAT_14c951c5c = 0;
  }
  uVar2 = (longlong)param_3 + ((longlong)uVar1 >> 0x18);
  if ((uVar1 & 1) == 0) {
    uVar2 = uVar1;
  }
  FUN_1467ac844(param_1,param_2,&DAT_14c951bf8,*(undefined4 *)(param_1 + 8),uVar2);
  return;
}



// FUNCTION 14743811a FUN_14743811a body=66 status=ok
// SIG undefined FUN_14743811a(void)

void FUN_14743811a(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (param_2 - iVar1 != 0 && iVar1 <= param_2) {
    FUN_14743815e(param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 8) = param_2, param_3 == '\x01')) {
      FUN_14743823e();
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14743815e FUN_14743815e body=90 status=ok
// SIG undefined FUN_14743815e(void)

int FUN_14743815e(ulonglong *param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_1474381b8(param_1);
  }
  uVar2 = *param_1;
  uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)param_1;
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2;
  }
  memset((void *)(uVar3 + (longlong)iVar1 * 4),0,(longlong)(int)param_2 << 2);
  return iVar1;
}



// FUNCTION 1474381b8 FUN_1474381b8 body=132 status=ok
// SIG undefined FUN_1474381b8(void)

void FUN_1474381b8(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_144a7f90c(param_1,param_2,uVar5,4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14743823e FUN_14743823e body=63 status=ok
// SIG undefined FUN_14743823e(void)

void FUN_14743823e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14743827e(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_144a7f90c(param_1,*(undefined4 *)(param_1 + 8),iVar1,4,4);
  }
  return;
}



// FUNCTION 14743827e FUN_14743827e body=97 status=ok
// SIG undefined FUN_14743827e(void)

ulonglong FUN_14743827e(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x3ffffffffffff000U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 2,4);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 1474382e0 FUN_1474382e0 body=203 status=ok
// SIG undefined FUN_1474382e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1474382e0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  if ((DAT_14c951c5f & 2) == 0) {
    DAT_14c951c5f = DAT_14c951c5f | 3;
    _DAT_14c951c00 = &DAT_149e97ffe;
    _DAT_14c951c18 = &LAB_1468cb2bc;
    _DAT_14c951c20 = &LAB_1468cb2c8;
    _DAT_14c951c28 = &LAB_1468cb2d4;
    _DAT_14c951c30 = &LAB_14280d956;
    _DAT_14c951c38 = &LAB_1468cb2da;
    _DAT_14c951c10 = &LAB_1468cb2e2;
    _DAT_14c951c50 = 0x400000004;
    _DAT_14c951c58 = 4;
    DAT_14c951c5c = 0;
  }
  FUN_1467ac8f2(param_1,&DAT_14c951bf8,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                param_2,param_3);
  return;
}



// FUNCTION 1474383ba FUN_1474383ba body=25 status=ok
// SIG undefined FUN_1474383ba(void)

undefined8
FUN_1474383ba(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1474385da(param_2,param_4);
  return 0x18;
}



// FUNCTION 1474383f6 FUN_1474383f6 body=60 status=ok
// SIG undefined FUN_1474383f6(void)

void FUN_1474383f6(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae(param_1 + 1);
    FUN_144a886ae(param_1);
  }
  param_1[2] = 0xfefefefefefefefe;
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 147438432 FUN_147438432 body=424 status=ok
// SIG undefined FUN_147438432(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147438432(longlong param_1,undefined8 param_2)

{
  if ((DAT_14c87e69f & 2) == 0) {
    DAT_14c87e69f = DAT_14c87e69f | 3;
    _DAT_14c87e640 = L"unsigned int";
    _DAT_14c87e658 = FUN_146828f04;
    _DAT_14c87e660 = &LAB_146828f34;
    _DAT_14c87e668 = &LAB_146828f40;
    _DAT_14c87e670 = &LAB_1407e0362;
    _DAT_14c87e678 = FUN_146828f46;
    _DAT_14c87e650 = &LAB_146828f62;
    _DAT_14c87e690 = 0x400000004;
    _DAT_14c87e698 = 4;
    DAT_14c87e69c = 0;
  }
  FUN_1467ac78e(param_1,param_2,&DAT_14c87e638,*(int *)(param_1 + 0x10) + 1,0);
  if ((DAT_14c87e69f & 2) == 0) {
    DAT_14c87e69f = DAT_14c87e69f | 3;
    _DAT_14c87e640 = L"unsigned int";
    _DAT_14c87e658 = FUN_146828f04;
    _DAT_14c87e660 = &LAB_146828f34;
    _DAT_14c87e668 = &LAB_146828f40;
    _DAT_14c87e670 = &LAB_1407e0362;
    _DAT_14c87e678 = FUN_146828f46;
    _DAT_14c87e650 = &LAB_146828f62;
    _DAT_14c87e690 = 0x400000004;
    _DAT_14c87e698 = 4;
    DAT_14c87e69c = 0;
  }
  FUN_1467ac78e(param_1 + 8,param_2,&DAT_14c87e638,*(undefined4 *)(param_1 + 0x14),0);
  FUN_146826a6c(param_2,param_1 + 0x10,4);
  FUN_146826a6c(param_2,param_1 + 0x14,4);
  return;
}



// FUNCTION 1474385da FUN_1474385da body=256 status=ok
// SIG undefined FUN_1474385da(void)

void FUN_1474385da(ulonglong *param_1,ulonglong *param_2)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  undefined8 uVar6;
  
  iVar1 = (int)param_1[2];
  uVar2 = *(undefined4 *)((longlong)param_1 + 0x14);
  *param_2 = 0;
  param_2[1] = 0;
  *(int *)(param_2 + 2) = iVar1;
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar2;
  uVar6 = 0;
  FUN_144a7f90c(param_2,0,iVar1 + 1,4,0);
  pvVar3 = (void *)*param_2;
  pvVar4 = (void *)(((longlong)pvVar3 >> 0x18) + (longlong)param_2);
  if (((ulonglong)pvVar3 & 1) == 0) {
    pvVar4 = pvVar3;
  }
  memset(pvVar4,(int)CONCAT71((int7)((ulonglong)uVar6 >> 8),0xff),(ulonglong)(iVar1 * 4 + 4));
  if (*(int *)((longlong)param_2 + 0x14) != 0) {
    FUN_144a7f90c(param_2 + 1,0,*(int *)((longlong)param_2 + 0x14),4,0);
  }
  pvVar3 = (void *)*param_1;
  pvVar4 = (void *)(((longlong)pvVar3 >> 0x18) + (longlong)param_1);
  if (((ulonglong)pvVar3 & 1) == 0) {
    pvVar4 = pvVar3;
  }
  pvVar3 = (void *)*param_2;
  pvVar5 = (void *)(((longlong)pvVar3 >> 0x18) + (longlong)param_2);
  if (((ulonglong)pvVar3 & 1) == 0) {
    pvVar5 = pvVar3;
  }
  memcpy(pvVar5,pvVar4,(ulonglong)((int)param_1[2] * 4 + 4));
  pvVar3 = (void *)param_1[1];
  pvVar4 = (void *)((longlong)param_1 + ((longlong)pvVar3 >> 0x18) + 8);
  if (((ulonglong)pvVar3 & 1) == 0) {
    pvVar4 = pvVar3;
  }
  pvVar3 = (void *)param_2[1];
  pvVar5 = (void *)((longlong)(param_2 + 1) + ((longlong)pvVar3 >> 0x18));
  if (((ulonglong)pvVar3 & 1) == 0) {
    pvVar5 = pvVar3;
  }
  memcpy(pvVar5,pvVar4,(ulonglong)(uint)(*(int *)((longlong)param_1 + 0x14) << 2));
  return;
}



// FUNCTION 147438752 FUN_147438752 body=31 status=ok
// SIG undefined FUN_147438752(void)

undefined8
FUN_147438752(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_147438860(param_2,param_1,param_4);
  return 0x10;
}



// FUNCTION 14743878e FUN_14743878e body=74 status=ok
// SIG undefined FUN_14743878e(void)

void FUN_14743878e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  FUN_146143680();
  FUN_1467ac8f2(param_1,&DAT_14ca98288,uVar1,uVar2,param_3,param_4);
  return;
}



// FUNCTION 1474387d8 FUN_1474387d8 body=37 status=ok
// SIG undefined FUN_1474387d8(void)

void FUN_1474387d8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae(param_1);
  }
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 1474387fe FUN_1474387fe body=97 status=ok
// SIG undefined FUN_1474387fe(void)

void FUN_1474387fe(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  FUN_146143680();
  FUN_1467ac78e(param_1,param_2,&DAT_14ca98288,uVar1,0);
  FUN_146826a6c(param_2,param_1 + 8,4);
  FUN_146826a6c(param_2,param_1 + 8,4);
  return;
}



// FUNCTION 147438860 FUN_147438860 body=100 status=ok
// SIG undefined FUN_147438860(void)

void FUN_147438860(longlong param_1,undefined8 param_2,ulonglong *param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  *param_3 = 0;
  param_3[1] = 0;
  FUN_1474388c4(param_3,*(undefined4 *)(param_1 + 8));
  uVar2 = *param_3;
  uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)param_3;
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2;
  }
  uVar1 = *(undefined4 *)(param_1 + 8);
  FUN_146143680();
  FUN_1467ac844(param_1,param_2,&DAT_14ca98288,uVar1,uVar3);
  return;
}



// FUNCTION 1474388c4 FUN_1474388c4 body=59 status=ok
// SIG undefined FUN_1474388c4(void)

void FUN_1474388c4(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (param_2 - iVar1 != 0 && iVar1 <= param_2) {
    FUN_147438900(param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 8) = param_2;
    FUN_1474389de();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147438900 FUN_147438900 body=87 status=ok
// SIG undefined FUN_147438900(void)

void FUN_147438900(ulonglong *param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_147438958(param_1);
  }
  uVar2 = *param_1;
  uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)param_1;
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2;
  }
  memset((void *)(uVar3 + (longlong)iVar1 * 4),0,(longlong)(int)param_2 << 2);
  return;
}



// FUNCTION 147438958 FUN_147438958 body=132 status=ok
// SIG undefined FUN_147438958(void)

void FUN_147438958(longlong param_1,int param_2)

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



// FUNCTION 1474389de FUN_1474389de body=62 status=ok
// SIG undefined FUN_1474389de(void)

void FUN_1474389de(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147438a1c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_144a7f90c(param_1,*(undefined4 *)(param_1 + 8),iVar1,4,2);
  }
  return;
}



// FUNCTION 147438a1c FUN_147438a1c body=93 status=ok
// SIG undefined FUN_147438a1c(void)

ulonglong FUN_147438a1c(uint param_1,uint param_2)

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



// FUNCTION 147438a88 FUN_147438a88 body=31 status=ok
// SIG undefined FUN_147438a88(void)

undefined8
FUN_147438a88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_147438b98(param_2,param_1,param_4);
  return 0x10;
}



// FUNCTION 147438ac4 FUN_147438ac4 body=74 status=ok
// SIG undefined FUN_147438ac4(void)

void FUN_147438ac4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  FUN_14611f246();
  FUN_1467ac8f2(param_1,&DAT_14ca982f8,uVar1,uVar2,param_3,param_4);
  return;
}



// FUNCTION 147438b0e FUN_147438b0e body=39 status=ok
// SIG undefined FUN_147438b0e(void)

void FUN_147438b0e(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_147438e88(param_1);
  }
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 147438b36 FUN_147438b36 body=97 status=ok
// SIG undefined FUN_147438b36(void)

void FUN_147438b36(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  FUN_14611f246();
  FUN_1467ac78e(param_1,param_2,&DAT_14ca982f8,uVar1,0);
  FUN_146826a6c(param_2,param_1 + 8,4);
  FUN_146826a6c(param_2,param_1 + 8,4);
  return;
}



// FUNCTION 147438b98 FUN_147438b98 body=100 status=ok
// SIG undefined FUN_147438b98(void)

void FUN_147438b98(longlong param_1,undefined8 param_2,ulonglong *param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  *param_3 = 0;
  param_3[1] = 0;
  FUN_147438bfc(param_3,*(undefined4 *)(param_1 + 8));
  uVar2 = *param_3;
  uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)param_3;
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2;
  }
  uVar1 = *(undefined4 *)(param_1 + 8);
  FUN_14611f246();
  FUN_1467ac844(param_1,param_2,&DAT_14ca982f8,uVar1,uVar3);
  return;
}



// FUNCTION 147438bfc FUN_147438bfc body=76 status=ok
// SIG undefined FUN_147438bfc(void)

void FUN_147438bfc(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    FUN_147438c4a(param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_147438d3e(param_1);
    FUN_147438db0(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147438c4a FUN_147438c4a body=95 status=ok
// SIG undefined FUN_147438c4a(void)

void FUN_147438c4a(ulonglong *param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_147438caa(param_1);
  }
  uVar2 = *param_1;
  uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)param_1;
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2;
  }
  memset((void *)(uVar3 + (longlong)iVar1 * 0x18),0,(longlong)(int)param_2 * 0x18);
  return;
}



// FUNCTION 147438caa FUN_147438caa body=147 status=ok
// SIG undefined FUN_147438caa(void)

void FUN_147438caa(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_144a7f90c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147438d3e FUN_147438d3e body=114 status=ok
// SIG undefined FUN_147438d3e(void)

void FUN_147438d3e(ulonglong *param_1,uint param_2,int param_3)

{
  void *_Dst;
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar1 = *param_1;
  uVar4 = ((longlong)uVar1 >> 0x18) + (longlong)param_1;
  if ((uVar1 & 1) == 0) {
    uVar4 = uVar1;
  }
  _Dst = (void *)(uVar4 + (ulonglong)param_2 * 0x18);
  FUN_147438dee(_Dst,param_3);
  iVar2 = (int)param_1[1];
  iVar3 = iVar2 - (param_2 + param_3);
  if (iVar3 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x18),(longlong)iVar3 * 0x18);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 - param_3;
  return;
}



// FUNCTION 147438db0 FUN_147438db0 body=62 status=ok
// SIG undefined FUN_147438db0(void)

void FUN_147438db0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147438e18(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_144a7f90c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 147438dee FUN_147438dee body=42 status=ok
// SIG undefined FUN_147438dee(void)

void FUN_147438dee(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 8;
    do {
      FUN_144a886ae(param_1);
      param_1 = param_1 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 147438e18 FUN_147438e18 body=112 status=ok
// SIG undefined FUN_147438e18(void)

ulonglong FUN_147438e18(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147438e52;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x18,8);
      param_2 = param_2 / 0x18;
    }
  }
LAB_147438e52:
  return param_2 & 0xffffffff;
}



// FUNCTION 147438e88 FUN_147438e88 body=48 status=ok
// SIG undefined FUN_147438e88(void)

void FUN_147438e88(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = *param_1;
  uVar2 = ((longlong)uVar1 >> 0x18) + (longlong)param_1;
  if ((uVar1 & 1) == 0) {
    uVar2 = uVar1;
  }
  FUN_147438dee(uVar2,(int)param_1[1]);
  FUN_144a886ae(param_1);
  return;
}



// FUNCTION 147438ec6 FUN_147438ec6 body=31 status=ok
// SIG undefined FUN_147438ec6(void)

undefined8
FUN_147438ec6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_147438fd4(param_2,param_1,param_4);
  return 0x10;
}



// FUNCTION 147438f02 FUN_147438f02 body=74 status=ok
// SIG undefined FUN_147438f02(void)

void FUN_147438f02(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  FUN_146120868();
  FUN_1467ac8f2(param_1,&DAT_14ca98218,uVar1,uVar2,param_3,param_4);
  return;
}



// FUNCTION 147438f4c FUN_147438f4c body=37 status=ok
// SIG undefined FUN_147438f4c(void)

void FUN_147438f4c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae(param_1);
  }
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 147438f72 FUN_147438f72 body=97 status=ok
// SIG undefined FUN_147438f72(void)

void FUN_147438f72(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  FUN_146120868();
  FUN_1467ac78e(param_1,param_2,&DAT_14ca98218,uVar1,0);
  FUN_146826a6c(param_2,param_1 + 8,4);
  FUN_146826a6c(param_2,param_1 + 8,4);
  return;
}



// FUNCTION 147438fd4 FUN_147438fd4 body=100 status=ok
// SIG undefined FUN_147438fd4(void)

void FUN_147438fd4(longlong param_1,undefined8 param_2,ulonglong *param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  *param_3 = 0;
  param_3[1] = 0;
  FUN_147439038(param_3,*(undefined4 *)(param_1 + 8));
  uVar2 = *param_3;
  uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)param_3;
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2;
  }
  uVar1 = *(undefined4 *)(param_1 + 8);
  FUN_146120868();
  FUN_1467ac844(param_1,param_2,&DAT_14ca98218,uVar1,uVar3);
  return;
}



// FUNCTION 147439038 FUN_147439038 body=59 status=ok
// SIG undefined FUN_147439038(void)

void FUN_147439038(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (param_2 - iVar1 != 0 && iVar1 <= param_2) {
    FUN_147439074(param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 8) = param_2;
    FUN_147439152();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147439074 FUN_147439074 body=87 status=ok
// SIG undefined FUN_147439074(void)

void FUN_147439074(ulonglong *param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_1474390cc(param_1);
  }
  uVar2 = *param_1;
  uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)param_1;
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2;
  }
  memset((void *)(uVar3 + (longlong)iVar1 * 4),0,(longlong)(int)param_2 << 2);
  return;
}



// FUNCTION 1474390cc FUN_1474390cc body=132 status=ok
// SIG undefined FUN_1474390cc(void)

void FUN_1474390cc(longlong param_1,int param_2)

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



// FUNCTION 147439152 FUN_147439152 body=62 status=ok
// SIG undefined FUN_147439152(void)

void FUN_147439152(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147439190(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_144a7f90c(param_1,*(undefined4 *)(param_1 + 8),iVar1,4,2);
  }
  return;
}



// FUNCTION 147439190 FUN_147439190 body=93 status=ok
// SIG undefined FUN_147439190(void)

ulonglong FUN_147439190(uint param_1,uint param_2)

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



// FUNCTION 1474391fc FUN_1474391fc body=31 status=ok
// SIG undefined FUN_1474391fc(void)

undefined8
FUN_1474391fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14743930a(param_2,param_1,param_4);
  return 0x10;
}



// FUNCTION 147439238 FUN_147439238 body=74 status=ok
// SIG undefined FUN_147439238(void)

void FUN_147439238(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  FUN_1461a23b8();
  FUN_1467ac8f2(param_1,&DAT_14ca981a8,uVar1,uVar2,param_3,param_4);
  return;
}



// FUNCTION 147439282 FUN_147439282 body=37 status=ok
// SIG undefined FUN_147439282(void)

void FUN_147439282(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae(param_1);
  }
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 1474392a8 FUN_1474392a8 body=97 status=ok
// SIG undefined FUN_1474392a8(void)

void FUN_1474392a8(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  FUN_1461a23b8();
  FUN_1467ac78e(param_1,param_2,&DAT_14ca981a8,uVar1,0);
  FUN_146826a6c(param_2,param_1 + 8,4);
  FUN_146826a6c(param_2,param_1 + 8,4);
  return;
}



// FUNCTION 14743930a FUN_14743930a body=100 status=ok
// SIG undefined FUN_14743930a(void)

void FUN_14743930a(longlong param_1,undefined8 param_2,ulonglong *param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  *param_3 = 0;
  param_3[1] = 0;
  FUN_14743936e(param_3,*(undefined4 *)(param_1 + 8));
  uVar2 = *param_3;
  uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)param_3;
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2;
  }
  uVar1 = *(undefined4 *)(param_1 + 8);
  FUN_1461a23b8();
  FUN_1467ac844(param_1,param_2,&DAT_14ca981a8,uVar1,uVar3);
  return;
}



// FUNCTION 14743936e FUN_14743936e body=59 status=ok
// SIG undefined FUN_14743936e(void)

void FUN_14743936e(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (param_2 - iVar1 != 0 && iVar1 <= param_2) {
    FUN_1474393aa(param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 8) = param_2;
    FUN_147439484();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1474393aa FUN_1474393aa body=86 status=ok
// SIG undefined FUN_1474393aa(void)

void FUN_1474393aa(ulonglong *param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_147439400(param_1);
  }
  uVar2 = *param_1;
  uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)param_1;
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2;
  }
  memset((void *)(uVar3 + (longlong)iVar1 * 2),0,(longlong)(int)param_2 * 2);
  return;
}



// FUNCTION 147439400 FUN_147439400 body=130 status=ok
// SIG undefined FUN_147439400(void)

void FUN_147439400(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 * 2,2);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 1)) {
      uVar5 = uVar3 >> 1 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_144a7f90c(param_1,param_2,uVar5,2,2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147439484 FUN_147439484 body=62 status=ok
// SIG undefined FUN_147439484(void)

void FUN_147439484(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1474394c2(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_144a7f90c(param_1,*(undefined4 *)(param_1 + 8),iVar1,2,2);
  }
  return;
}



// FUNCTION 1474394c2 FUN_1474394c2 body=88 status=ok
// SIG undefined FUN_1474394c2(void)

ulonglong FUN_1474394c2(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x7fffffffffffe000U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e(param_1 * 2,2);
      uVar1 = uVar1 >> 1;
    }
  }
  return uVar1;
}



// FUNCTION 14743951a FUN_14743951a body=103 status=ok
// SIG undefined FUN_14743951a(void)

longlong * FUN_14743951a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  plVar1 = *(longlong **)(param_1 + 8);
  if (plVar1 == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    if (((ulonglong)plVar1[3] >> 0x3e & 1) == 0) {
      (**(code **)(*plVar1 + 8))(plVar1);
    }
    uVar3 = (undefined4)plVar1[2];
    plVar1 = *(longlong **)(param_1 + 8);
    if (plVar1 != (longlong *)0x0) {
      if ((plVar1[3] & 0x4000000000000000U) == 0) {
        (**(code **)(*plVar1 + 8))(plVar1);
      }
      lVar2 = plVar1[1];
      goto LAB_147439570;
    }
  }
  lVar2 = 0;
LAB_147439570:
  *param_2 = lVar2;
  *(undefined4 *)(param_2 + 1) = uVar3;
  return param_2;
}



// FUNCTION 147439582 FUN_147439582 body=172 status=ok
// SIG undefined FUN_147439582(void)

longlong FUN_147439582(longlong param_1,longlong param_2)

{
  thunk_FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  FUN_1474409b8(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"PassData",0);
  FUN_147440a6c(param_1 + 0xe6,*(undefined8 *)(param_2 + 0x28),L"RecordArgBuffer",1);
  FUN_147440a6c(param_1 + 0xea,*(undefined8 *)(param_2 + 0x28),L"RecordDataBuffer",0);
  FUN_147440a6c(param_1 + 0xee,*(undefined8 *)(param_2 + 0x28),L"RWExecutionBuffer",0);
  return param_1;
}



// FUNCTION 14743964a FUN_14743964a body=132 status=ok
// SIG undefined FUN_14743964a(void)

void FUN_14743964a(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1474396d0 FUN_1474396d0 body=132 status=ok
// SIG undefined FUN_1474396d0(void)

void FUN_1474396d0(longlong param_1,int param_2)

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



// FUNCTION 147439756 FUN_147439756 body=147 status=ok
// SIG undefined FUN_147439756(void)

void FUN_147439756(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc,1);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc)) {
      uVar5 = uVar4 / 0xc & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1474397ea FUN_1474397ea body=48 status=ok
// SIG undefined FUN_1474397ea(void)

void FUN_1474397ea(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x60,0x10);
  }
  return;
}



// FUNCTION 14743981a FUN_14743981a body=56 status=ok
// SIG undefined FUN_14743981a(void)

undefined8 * FUN_14743981a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a392cc0;
  FUN_144725486();
  FUN_145bfd1ea(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147439852 FUN_147439852 body=38 status=ok
// SIG undefined FUN_147439852(void)

undefined8 FUN_147439852(undefined8 param_1,int param_2)

{
  FUN_145bfd1ea();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147439878 FUN_147439878 body=326 status=ok
// SIG undefined FUN_147439878(void)

void FUN_147439878(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x2c + (longlong)iVar4 * 0x30) * 4) =
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



// FUNCTION 1474399c0 FUN_1474399c0 body=122 status=ok
// SIG undefined FUN_1474399c0(void)

void FUN_1474399c0(longlong *param_1,int param_2)

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



// FUNCTION 147439a3a FUN_147439a3a body=56 status=ok
// SIG undefined FUN_147439a3a(void)

undefined8 * FUN_147439a3a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a392d20;
  FUN_144725486();
  FUN_1463200fe(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147439a72 FUN_147439a72 body=38 status=ok
// SIG undefined FUN_147439a72(void)

undefined8 FUN_147439a72(undefined8 param_1,int param_2)

{
  FUN_1463200fe();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147439a98 FUN_147439a98 body=56 status=ok
// SIG undefined FUN_147439a98(void)

undefined8 * FUN_147439a98(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a392d80;
  FUN_144725486();
  FUN_147439b24(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147439afe FUN_147439afe body=38 status=ok
// SIG undefined FUN_147439afe(void)

undefined8 FUN_147439afe(undefined8 param_1,int param_2)

{
  FUN_147439b24();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147439b24 FUN_147439b24 body=115 status=ok
// SIG undefined FUN_147439b24(void)

void FUN_147439b24(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a392db0;
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
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



// FUNCTION 147439b98 FUN_147439b98 body=56 status=ok
// SIG undefined FUN_147439b98(void)

undefined8 * FUN_147439b98(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a392de0;
  FUN_144725486();
  FUN_147439c24(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147439bfe FUN_147439bfe body=38 status=ok
// SIG undefined FUN_147439bfe(void)

undefined8 FUN_147439bfe(undefined8 param_1,int param_2)

{
  FUN_147439c24();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147439c24 FUN_147439c24 body=115 status=ok
// SIG undefined FUN_147439c24(void)

void FUN_147439c24(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a392e10;
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
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



// FUNCTION 147439c98 FUN_147439c98 body=56 status=ok
// SIG undefined FUN_147439c98(void)

undefined8 * FUN_147439c98(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a392e40;
  FUN_144725486();
  FUN_147439d24(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147439cfe FUN_147439cfe body=38 status=ok
// SIG undefined FUN_147439cfe(void)

undefined8 FUN_147439cfe(undefined8 param_1,int param_2)

{
  FUN_147439d24();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147439d24 FUN_147439d24 body=115 status=ok
// SIG undefined FUN_147439d24(void)

void FUN_147439d24(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a392e70;
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
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



// FUNCTION 147439d98 FUN_147439d98 body=56 status=ok
// SIG undefined FUN_147439d98(void)

undefined8 * FUN_147439d98(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a392ea0;
  FUN_144725486();
  FUN_144a80d50(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147439dd0 FUN_147439dd0 body=56 status=ok
// SIG undefined FUN_147439dd0(void)

undefined8 * FUN_147439dd0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a392f00;
  FUN_144725486();
  FUN_14003f39a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147439e08 FUN_147439e08 body=56 status=ok
// SIG undefined FUN_147439e08(void)

undefined8 * FUN_147439e08(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a392f60;
  FUN_144725486();
  FUN_144a80d50(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147439e40 FUN_147439e40 body=103 status=ok
// SIG undefined FUN_147439e40(void)

ulonglong FUN_147439e40(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  uVar4 = (ulonglong)iVar1;
  if (uVar4 != 0) {
    lVar5 = uVar4 * 8;
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3 * 8) == *param_2) {
        if ((int)uVar3 != -1) {
          uVar4 = uVar3 & 0xffffffff;
          goto LAB_147439e94;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14178e7bc(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + uVar4 * 8) = *param_2;
LAB_147439e94:
  return uVar4 & 0xffffffff;
}



// FUNCTION 147439ea8 FUN_147439ea8 body=105 status=ok
// SIG undefined FUN_147439ea8(void)

ulonglong FUN_147439ea8(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  uVar4 = (ulonglong)iVar1;
  if (uVar4 != 0) {
    lVar5 = uVar4 * 8;
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3 * 8) == *param_2) {
        if ((int)uVar3 != -1) {
          uVar4 = uVar3 & 0xffffffff;
          goto LAB_147439eef;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145ed2d64(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + uVar4 * 8) = *param_2;
LAB_147439eef:
  return uVar4 & 0xffffffff;
}



// FUNCTION 147439f12 FUN_147439f12 body=115 status=ok
// SIG undefined FUN_147439f12(void)

void FUN_147439f12(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,8);
    iVar2 = (int)(uVar1 / 0x28);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x28,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147439f85 FUN_147439f85 body=112 status=ok
// SIG undefined FUN_147439f85(void)

void FUN_147439f85(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  
  if (param_3 != 0) {
    lVar4 = 0;
    do {
      puVar1 = (undefined8 *)(param_2 + lVar4);
      lVar2 = param_1 + 8 + lVar4;
      *(undefined8 *)(lVar2 + -8) = *puVar1;
      bVar3 = *(byte *)(puVar1 + 3);
      *(byte *)(lVar2 + 0x10) = bVar3;
      (*(code *)(&PTR_LAB_14a393260)[bVar3])(lVar2,puVar1 + 1);
      *(undefined1 *)(lVar2 + 0x18) = *(undefined1 *)(puVar1 + 4);
      lVar4 = lVar4 + 0x28;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14743a000 caseD_0 body=5 status=ok
// SIG undefined caseD_0(void)

void switchD_148a5f16c::caseD_0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  return;
}



// FUNCTION 14743a00b FUN_14743a00b body=6 status=ok
// SIG undefined FUN_14743a00b(void)

void FUN_14743a00b(undefined2 *param_1)

{
  *param_1 = 0xffff;
  return;
}



// FUNCTION 14743a012 FUN_14743a012 body=93 status=ok
// SIG undefined FUN_14743a012(void)

void FUN_14743a012(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 2,2);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 1)) {
      uVar2 = uVar1 >> 1 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_144a7f90c(param_1,*(undefined4 *)(param_1 + 8),uVar2,2,2);
  }
  return;
}



// FUNCTION 14743a070 FUN_14743a070 body=95 status=ok
// SIG undefined FUN_14743a070(void)

void FUN_14743a070(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 2,2);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 2)) {
      uVar2 = uVar1 >> 2 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_144a7f90c(param_1,*(undefined4 *)(param_1 + 8),uVar2,4,2);
  }
  return;
}



// FUNCTION 14743a0d0 FUN_14743a0d0 body=130 status=ok
// SIG undefined FUN_14743a0d0(void)

undefined4 * FUN_14743a0d0(undefined4 *param_1,undefined4 *param_2)

{
  ulonglong *puVar1;
  int iVar2;
  void *pvVar3;
  void *_Dst;
  void *_Src;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  iVar2 = param_2[4];
  pvVar3 = *(void **)(param_2 + 2);
  param_1[4] = iVar2;
  if ((longlong)iVar2 == 0) {
    param_1[5] = 0;
  }
  else {
    puVar1 = (ulonglong *)(param_1 + 2);
    _Src = (void *)((longlong)param_2 + ((longlong)pvVar3 >> 0x18) + 8);
    if (((ulonglong)pvVar3 & 1) == 0) {
      _Src = pvVar3;
    }
    FUN_14743a152(puVar1,iVar2);
    pvVar3 = (void *)*puVar1;
    _Dst = (void *)(((longlong)pvVar3 >> 0x18) + (longlong)puVar1);
    if (((ulonglong)pvVar3 & 1) == 0) {
      _Dst = pvVar3;
    }
    memcpy(_Dst,_Src,(longlong)iVar2 << 2);
  }
  return param_1;
}



// FUNCTION 14743a152 FUN_14743a152 body=89 status=ok
// SIG undefined FUN_14743a152(void)

void FUN_14743a152(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 * 4,2);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 2)) {
    uVar3 = uVar1 >> 2 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_144a7f90c(param_1,0,uVar3,4,2);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 14743a1ab FUN_14743a1ab body=561 status=ok
// SIG undefined FUN_14743a1ab(void)

void FUN_14743a1ab(longlong param_1,uint param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  int iVar6;
  ulonglong uVar7;
  ushort *puVar8;
  ushort *puVar9;
  longlong *plVar10;
  ushort *puVar11;
  ushort *puVar12;
  ushort uVar13;
  int iVar14;
  ushort *puVar15;
  ushort *puVar16;
  ushort *puVar17;
  bool bVar18;
  float fVar19;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [190];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (ulonglong)param_2 * 4 + -4;
    local_348 = param_1;
    fVar19 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar19 + fVar19);
    plVar10 = &local_348;
    do {
      puVar4 = (ushort *)*plVar10;
      puVar11 = (ushort *)plVar10[1];
      iVar14 = (int)plVar10[2];
      iVar6 = (int)((ulonglong)((longlong)puVar11 - (longlong)puVar4) >> 2);
      puVar9 = puVar4;
      puVar15 = puVar11;
      if (iVar14 != 0) {
LAB_14743a26c:
        if (8 < (int)(iVar6 + 1U)) {
          uVar7 = (ulonglong)(iVar6 + 1U >> 1);
          uVar2 = *(undefined4 *)(puVar4 + uVar7 * 2);
          *(undefined4 *)(puVar4 + uVar7 * 2) = *(undefined4 *)puVar4;
          *(undefined4 *)puVar4 = uVar2;
          puVar8 = puVar11 + 2;
          puVar5 = puVar4;
          do {
            puVar3 = puVar5 + 2;
            puVar12 = puVar5 + 2;
            do {
              puVar5 = puVar12;
              puVar16 = puVar3;
              if (puVar11 < puVar5) break;
              puVar3 = puVar16 + 2;
              puVar12 = puVar5 + 2;
            } while (*puVar5 <= *puVar4);
            puVar3 = puVar8 + -4;
            do {
              puVar12 = puVar8;
              puVar17 = puVar3;
              puVar8 = puVar12 + -2;
              if (puVar8 <= puVar4) break;
              puVar3 = puVar17 + -2;
            } while (*puVar4 <= *puVar8);
            if (puVar8 < puVar5) goto LAB_14743a2e6;
            uVar2 = *(undefined4 *)puVar5;
            *(undefined4 *)puVar5 = *(undefined4 *)puVar8;
            *(undefined4 *)puVar8 = uVar2;
          } while( true );
        }
        if (puVar4 < puVar11) {
          do {
            puVar9 = puVar4;
            if (puVar4 + 2 <= puVar11) {
              uVar13 = *puVar4;
              puVar15 = puVar4 + 2;
              do {
                uVar1 = *puVar15;
                bVar18 = uVar13 < uVar1;
                if (uVar13 <= uVar1) {
                  uVar13 = uVar1;
                }
                if (bVar18) {
                  puVar9 = puVar15;
                }
                puVar15 = puVar15 + 2;
              } while (puVar15 <= puVar11);
            }
            uVar2 = *(undefined4 *)puVar9;
            *(undefined4 *)puVar9 = *(undefined4 *)puVar11;
            *(undefined4 *)puVar11 = uVar2;
            puVar11 = puVar11 + -2;
          } while (puVar4 < puVar11);
        }
        goto LAB_14743a3bb;
      }
LAB_14743a3d0:
      FUN_14743a3dd(puVar4);
LAB_14743a3bb:
      plVar10 = plVar10 + -3;
    } while (&local_348 <= plVar10);
  }
  if ((local_40 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14743a2e6:
  uVar2 = *(undefined4 *)puVar4;
  *(undefined4 *)puVar4 = *(undefined4 *)puVar8;
  *(undefined4 *)puVar8 = uVar2;
  iVar14 = iVar14 + -1;
  puVar12 = puVar12 + -4;
  if ((longlong)puVar17 - (longlong)puVar9 < (longlong)puVar15 - (longlong)puVar16) {
    if (puVar5 < puVar11) {
      *plVar10 = (longlong)puVar5;
      plVar10[1] = (longlong)puVar11;
      *(int *)(plVar10 + 2) = iVar14;
      plVar10 = plVar10 + 3;
    }
    puVar16 = puVar4;
    if (puVar8 <= puVar4 + 2) goto LAB_14743a3bb;
  }
  else {
    if (puVar4 + 2 < puVar8) {
      *plVar10 = (longlong)puVar4;
      plVar10[1] = (longlong)puVar12;
      *(int *)(plVar10 + 2) = iVar14;
      plVar10 = plVar10 + 3;
    }
    puVar4 = puVar5;
    puVar12 = puVar11;
    puVar17 = puVar11;
    if (puVar11 <= puVar5) goto LAB_14743a3bb;
  }
  iVar6 = (int)((ulonglong)((longlong)puVar17 - (longlong)puVar16) >> 2);
  puVar9 = puVar16;
  puVar11 = puVar12;
  puVar15 = puVar17;
  if (iVar14 == 0) goto LAB_14743a3d0;
  goto LAB_14743a26c;
}



// FUNCTION 14743a3dd FUN_14743a3dd body=305 status=ok
// SIG undefined FUN_14743a3dd(void)

void FUN_14743a3dd(undefined4 *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  if (param_2 != 0) {
    iVar2 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar7 = iVar2;
joined_r0x00014743a3fe:
    do {
      iVar5 = iVar2 * 2 + 1;
      if (iVar5 < (int)param_2) {
        iVar6 = iVar2 * 2 + 2;
        if ((iVar6 < (int)param_2) && (*(ushort *)(param_1 + iVar5) <= *(ushort *)(param_1 + iVar6))
           ) {
          iVar5 = iVar6;
        }
        if (*(ushort *)(param_1 + iVar2) < *(ushort *)(param_1 + iVar5)) {
          uVar1 = param_1[iVar2];
          param_1[iVar2] = param_1[iVar5];
          param_1[iVar5] = uVar1;
          iVar2 = iVar5;
          goto joined_r0x00014743a3fe;
        }
      }
      bVar8 = iVar7 != 0;
      iVar2 = iVar7 + -1;
      iVar7 = iVar2;
    } while (bVar8);
    if (1 < (int)param_2) {
      uVar3 = (ulonglong)param_2;
      uVar1 = *param_1;
      *param_1 = param_1[uVar3 - 1];
      param_1[uVar3 - 1] = uVar1;
      if (param_2 != 2) {
        do {
          uVar4 = uVar3 - 1;
          iVar2 = 0;
          iVar5 = 1;
          iVar7 = 0;
          do {
            iVar2 = iVar2 + 2;
            iVar6 = iVar5;
            if (((longlong)iVar2 < (longlong)uVar4) &&
               (*(ushort *)(param_1 + iVar5) <= *(ushort *)(param_1 + iVar2))) {
              iVar6 = iVar2;
            }
            if (*(ushort *)(param_1 + iVar6) <= *(ushort *)(param_1 + iVar7)) break;
            uVar1 = param_1[iVar7];
            param_1[iVar7] = param_1[iVar6];
            param_1[iVar6] = uVar1;
            iVar2 = iVar6 * 2;
            iVar5 = iVar6 * 2 + 1;
            iVar7 = iVar6;
          } while ((longlong)iVar5 < (longlong)uVar4);
          uVar1 = *param_1;
          *param_1 = param_1[uVar3 - 2];
          param_1[uVar3 - 2] = uVar1;
          uVar3 = uVar4;
        } while (2 < uVar4);
      }
    }
  }
  return;
}



// FUNCTION 14743a50e FUN_14743a50e body=794 status=ok
// SIG undefined FUN_14743a50e(void)

void FUN_14743a50e(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  ulonglong uVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  longlong *plVar14;
  uint *puVar15;
  uint *puVar16;
  ushort uVar17;
  int iVar18;
  uint *puVar19;
  ushort uVar20;
  uint *puVar21;
  float fVar22;
  undefined1 auStack_378 [32];
  longlong local_358;
  longlong local_350;
  undefined4 local_348 [188];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_378;
  if (1 < (int)param_2) {
    memset(local_348,0,0x2f0);
    local_350 = param_1 + (ulonglong)param_2 * 0x18 + -0x18;
    local_358 = param_1;
    fVar22 = logf((float)(int)param_2);
    local_348[0] = (int)(longlong)(fVar22 + fVar22);
    plVar14 = &local_358;
    do {
      puVar6 = (uint *)*plVar14;
      puVar15 = (uint *)plVar14[1];
      iVar18 = (int)plVar14[2];
      iVar7 = (int)((ulonglong)((longlong)puVar15 - (longlong)puVar6) >> 3);
      puVar12 = puVar15;
      puVar19 = puVar6;
      if (iVar18 != 0) {
LAB_14743a5d9:
        uVar9 = iVar7 * -0x55555555 + 1;
        if (8 < (int)uVar9) {
          uVar10 = (ulonglong)(uVar9 >> 1);
          uVar1 = *(undefined8 *)(puVar6 + uVar10 * 6 + 4);
          uVar2 = *(undefined8 *)(puVar6 + uVar10 * 6);
          uVar3 = *(undefined8 *)(puVar6 + uVar10 * 6 + 2);
          *(undefined8 *)(puVar6 + uVar10 * 6 + 4) = *(undefined8 *)(puVar6 + 4);
          uVar4 = *(undefined8 *)(puVar6 + 2);
          *(undefined8 *)(puVar6 + uVar10 * 6) = *(undefined8 *)puVar6;
          *(undefined8 *)(puVar6 + uVar10 * 6 + 2) = uVar4;
          *(undefined8 *)(puVar6 + 4) = uVar1;
          *(undefined8 *)puVar6 = uVar2;
          *(undefined8 *)(puVar6 + 2) = uVar3;
          puVar11 = puVar15 + 6;
          puVar8 = puVar6;
          do {
            puVar5 = puVar8 + 6;
            puVar16 = puVar8 + 6;
            do {
              puVar8 = puVar16;
              puVar13 = puVar5;
              if (puVar15 < puVar8) break;
              puVar5 = puVar13 + 6;
              puVar16 = puVar8 + 6;
            } while ((ushort)*puVar8 <= (ushort)*puVar6);
            puVar5 = puVar11 + -0xc;
            do {
              puVar16 = puVar11;
              puVar21 = puVar5;
              puVar11 = puVar16 + -6;
              if (puVar11 <= puVar6) break;
              puVar5 = puVar21 + -6;
            } while ((ushort)*puVar6 <= (ushort)*puVar11);
            if (puVar11 < puVar8) goto LAB_14743a6c0;
            uVar1 = *(undefined8 *)(puVar8 + 4);
            uVar2 = *(undefined8 *)puVar8;
            uVar3 = *(undefined8 *)(puVar8 + 2);
            *(undefined8 *)(puVar8 + 4) = *(undefined8 *)(puVar16 + -2);
            uVar4 = *(undefined8 *)(puVar16 + -4);
            *(undefined8 *)puVar8 = *(undefined8 *)puVar11;
            *(undefined8 *)(puVar8 + 2) = uVar4;
            *(undefined8 *)(puVar16 + -2) = uVar1;
            *(undefined8 *)puVar11 = uVar2;
            *(undefined8 *)(puVar16 + -4) = uVar3;
          } while( true );
        }
        if (puVar6 < puVar15) {
          do {
            puVar12 = puVar6;
            if (puVar6 + 6 <= puVar15) {
              uVar9 = (uint)(ushort)*puVar6;
              puVar19 = puVar6 + 6;
              do {
                uVar17 = (ushort)uVar9;
                uVar20 = (ushort)*puVar19;
                if (uVar17 <= uVar20) {
                  uVar9 = *puVar19;
                }
                if (uVar17 < uVar20) {
                  puVar12 = puVar19;
                }
                puVar19 = puVar19 + 6;
              } while (puVar19 <= puVar15);
            }
            local_48 = *(undefined8 *)(puVar12 + 4);
            local_58 = *(undefined8 *)puVar12;
            uStack_50 = *(undefined8 *)(puVar12 + 2);
            uVar2 = local_58;
            uVar3 = uStack_50;
            *(undefined8 *)(puVar12 + 4) = *(undefined8 *)(puVar15 + 4);
            uVar1 = *(undefined8 *)(puVar15 + 2);
            *(undefined8 *)puVar12 = *(undefined8 *)puVar15;
            *(undefined8 *)(puVar12 + 2) = uVar1;
            *(undefined8 *)(puVar15 + 4) = local_48;
            local_58._4_4_ = (uint)((ulonglong)local_58 >> 0x20);
            uStack_50._4_4_ = (uint)((ulonglong)uStack_50 >> 0x20);
            *puVar15 = (uint)local_58;
            puVar15[1] = local_58._4_4_;
            puVar15[2] = (uint)uStack_50;
            puVar15[3] = uStack_50._4_4_;
            puVar15 = puVar15 + -6;
            local_58 = uVar2;
            uStack_50 = uVar3;
          } while (puVar6 < puVar15);
        }
        goto LAB_14743a807;
      }
LAB_14743a81c:
      FUN_14743a829(puVar6);
LAB_14743a807:
      plVar14 = plVar14 + -3;
    } while (&local_358 <= plVar14);
  }
  if ((local_40 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14743a6c0:
  local_48 = *(undefined8 *)(puVar6 + 4);
  local_58 = *(undefined8 *)puVar6;
  uStack_50 = *(undefined8 *)(puVar6 + 2);
  uVar2 = local_58;
  uVar3 = uStack_50;
  *(undefined8 *)(puVar6 + 4) = *(undefined8 *)(puVar16 + -2);
  uVar1 = *(undefined8 *)(puVar16 + -4);
  *(undefined8 *)puVar6 = *(undefined8 *)puVar11;
  *(undefined8 *)(puVar6 + 2) = uVar1;
  *(undefined8 *)(puVar16 + -2) = local_48;
  local_58._4_4_ = (uint)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (uint)((ulonglong)uStack_50 >> 0x20);
  *puVar11 = (uint)local_58;
  puVar16[-5] = local_58._4_4_;
  puVar16[-4] = (uint)uStack_50;
  puVar16[-3] = uStack_50._4_4_;
  iVar18 = iVar18 + -1;
  puVar16 = puVar16 + -0xc;
  local_58 = uVar2;
  uStack_50 = uVar3;
  if ((longlong)puVar21 - (longlong)puVar19 < (longlong)puVar12 - (longlong)puVar13) {
    if (puVar8 < puVar15) {
      *plVar14 = (longlong)puVar8;
      plVar14[1] = (longlong)puVar15;
      *(int *)(plVar14 + 2) = iVar18;
      plVar14 = plVar14 + 3;
    }
    puVar13 = puVar6;
    if (puVar11 <= puVar6 + 6) goto LAB_14743a807;
  }
  else {
    if (puVar6 + 6 < puVar11) {
      *plVar14 = (longlong)puVar6;
      plVar14[1] = (longlong)puVar16;
      *(int *)(plVar14 + 2) = iVar18;
      plVar14 = plVar14 + 3;
    }
    puVar6 = puVar8;
    puVar16 = puVar15;
    puVar21 = puVar15;
    if (puVar15 <= puVar8) goto LAB_14743a807;
  }
  iVar7 = (int)((ulonglong)((longlong)puVar21 - (longlong)puVar13) >> 3);
  puVar15 = puVar16;
  puVar12 = puVar21;
  puVar19 = puVar13;
  if (iVar18 == 0) goto LAB_14743a81c;
  goto LAB_14743a5d9;
}



// FUNCTION 14743a829 FUN_14743a829 body=574 status=ok
// SIG undefined FUN_14743a829(void)

void FUN_14743a829(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    iVar8 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar12 = iVar8;
joined_r0x00014743a85d:
    do {
      iVar10 = iVar8 * 2 + 1;
      if (iVar10 < (int)param_2) {
        iVar11 = iVar8 * 2 + 2;
        if ((iVar11 < (int)param_2) &&
           (*(ushort *)(param_1 + (longlong)iVar10 * 3) <=
            *(ushort *)(param_1 + (longlong)iVar11 * 3))) {
          iVar10 = iVar11;
        }
        if (*(ushort *)(param_1 + (longlong)iVar8 * 3) < *(ushort *)(param_1 + (longlong)iVar10 * 3)
           ) {
          puVar2 = param_1 + (longlong)iVar8 * 3;
          puVar3 = param_1 + (longlong)iVar10 * 3;
          local_18 = puVar2[2];
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          puVar2[2] = puVar3[2];
          uVar6 = puVar3[1];
          *puVar2 = *puVar3;
          puVar2[1] = uVar6;
          puVar3[2] = local_18;
          local_28._0_4_ = (undefined4)uVar4;
          local_28._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar5;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          *(undefined4 *)puVar3 = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar3 + 4) = local_28._4_4_;
          *(undefined4 *)(puVar3 + 1) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_20._4_4_;
          iVar8 = iVar10;
          local_28 = uVar4;
          uStack_20 = uVar5;
          goto joined_r0x00014743a85d;
        }
      }
      bVar13 = iVar12 != 0;
      iVar8 = iVar12 + -1;
      iVar12 = iVar8;
    } while (bVar13);
    if (1 < (int)param_2) {
      uVar9 = (ulonglong)param_2 - 1;
      local_18 = param_1[2];
      uVar4 = *param_1;
      uVar5 = param_1[1];
      param_1[2] = param_1[uVar9 * 3 + 2];
      uVar6 = (param_1 + uVar9 * 3)[1];
      *param_1 = param_1[uVar9 * 3];
      param_1[1] = uVar6;
      param_1[uVar9 * 3 + 2] = local_18;
      local_28._0_4_ = (undefined4)uVar4;
      local_28._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_20._0_4_ = (undefined4)uVar5;
      uStack_20._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      puVar2 = param_1 + uVar9 * 3;
      *(undefined4 *)puVar2 = (undefined4)local_28;
      *(undefined4 *)((longlong)puVar2 + 4) = local_28._4_4_;
      *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_20;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_20._4_4_;
      local_28 = uVar4;
      uStack_20 = uVar5;
      if (param_2 != 2) {
        do {
          iVar8 = 0;
          iVar10 = 1;
          iVar12 = 0;
          do {
            iVar8 = iVar8 + 2;
            iVar11 = iVar10;
            if (((longlong)iVar8 < (longlong)uVar9) &&
               (*(ushort *)(param_1 + (longlong)iVar10 * 3) <=
                *(ushort *)(param_1 + (longlong)iVar8 * 3))) {
              iVar11 = iVar8;
            }
            if (*(ushort *)(param_1 + (longlong)iVar11 * 3) <=
                *(ushort *)(param_1 + (longlong)iVar12 * 3)) break;
            puVar2 = param_1 + (longlong)iVar12 * 3;
            puVar3 = param_1 + (longlong)iVar11 * 3;
            uVar4 = puVar2[2];
            uVar5 = *puVar2;
            uVar6 = puVar2[1];
            puVar2[2] = puVar3[2];
            uVar7 = puVar3[1];
            *puVar2 = *puVar3;
            puVar2[1] = uVar7;
            puVar3[2] = uVar4;
            *puVar3 = uVar5;
            puVar3[1] = uVar6;
            iVar8 = iVar11 * 2;
            iVar10 = iVar11 * 2 + 1;
            iVar12 = iVar11;
          } while ((longlong)iVar10 < (longlong)uVar9);
          uVar1 = uVar9 - 1;
          local_18 = param_1[2];
          uVar4 = *param_1;
          uVar5 = param_1[1];
          param_1[2] = param_1[uVar1 * 3 + 2];
          uVar6 = (param_1 + uVar1 * 3)[1];
          *param_1 = param_1[uVar1 * 3];
          param_1[1] = uVar6;
          param_1[uVar1 * 3 + 2] = local_18;
          local_28._0_4_ = (undefined4)uVar4;
          local_28._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar5;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          puVar2 = param_1 + uVar1 * 3;
          *(undefined4 *)puVar2 = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar2 + 4) = local_28._4_4_;
          *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_20._4_4_;
          bVar13 = 2 < uVar9;
          uVar9 = uVar1;
          local_28 = uVar4;
          uStack_20 = uVar5;
        } while (bVar13);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14743aa68 FUN_14743aa68 body=575 status=ok
// SIG undefined FUN_14743aa68(void)

void FUN_14743aa68(longlong param_1,uint param_2)

{
  ushort uVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  int iVar5;
  ulonglong uVar6;
  ushort *puVar7;
  ushort *puVar8;
  longlong *plVar9;
  ushort *puVar10;
  ushort *puVar11;
  ushort uVar12;
  int iVar13;
  ushort *puVar14;
  ushort *puVar15;
  ushort *puVar16;
  bool bVar17;
  float fVar18;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [190];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (ulonglong)param_2 * 2 + -2;
    local_348 = param_1;
    fVar18 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar18 + fVar18);
    plVar9 = &local_348;
    do {
      puVar3 = (ushort *)*plVar9;
      puVar10 = (ushort *)plVar9[1];
      iVar13 = (int)plVar9[2];
      iVar5 = (int)((ulonglong)((longlong)puVar10 - (longlong)puVar3) >> 1);
      puVar8 = puVar3;
      puVar14 = puVar10;
      if (iVar13 != 0) {
LAB_14743ab28:
        if (8 < (int)(iVar5 + 1U)) {
          uVar6 = (ulonglong)(iVar5 + 1U & 0xfffffffe);
          uVar12 = *(ushort *)((longlong)puVar3 + uVar6);
          *(ushort *)((longlong)puVar3 + uVar6) = *puVar3;
          *puVar3 = uVar12;
          puVar7 = puVar10 + 1;
          puVar4 = puVar3;
          do {
            puVar2 = puVar4 + 1;
            puVar11 = puVar4 + 1;
            do {
              puVar4 = puVar11;
              puVar15 = puVar2;
              if (puVar10 < puVar4) break;
              puVar2 = puVar15 + 1;
              puVar11 = puVar4 + 1;
            } while (*puVar4 <= *puVar3);
            puVar2 = puVar7 + -2;
            do {
              puVar11 = puVar7;
              puVar16 = puVar2;
              puVar7 = puVar11 + -1;
              if (puVar7 <= puVar3) break;
              puVar2 = puVar16 + -1;
            } while (*puVar3 <= *puVar7);
            if (puVar7 < puVar4) goto LAB_14743abab;
            uVar12 = *puVar4;
            *puVar4 = *puVar7;
            *puVar7 = uVar12;
          } while( true );
        }
        if (puVar3 < puVar10) {
          do {
            puVar8 = puVar3;
            if (puVar3 + 1 <= puVar10) {
              uVar12 = *puVar3;
              puVar14 = puVar3 + 1;
              do {
                uVar1 = *puVar14;
                bVar17 = uVar12 < uVar1;
                if (uVar12 <= uVar1) {
                  uVar12 = uVar1;
                }
                if (bVar17) {
                  puVar8 = puVar14;
                }
                puVar14 = puVar14 + 1;
              } while (puVar14 <= puVar10);
            }
            uVar12 = *puVar8;
            *puVar8 = *puVar10;
            *puVar10 = uVar12;
            puVar10 = puVar10 + -1;
          } while (puVar3 < puVar10);
        }
        goto LAB_14743ac86;
      }
LAB_14743ac9b:
      FUN_14743aca8(puVar3);
LAB_14743ac86:
      plVar9 = plVar9 + -3;
    } while (&local_348 <= plVar9);
  }
  if ((local_40 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14743abab:
  uVar12 = *puVar3;
  *puVar3 = *puVar7;
  *puVar7 = uVar12;
  iVar13 = iVar13 + -1;
  puVar11 = puVar11 + -2;
  if ((longlong)puVar16 - (longlong)puVar8 < (longlong)puVar14 - (longlong)puVar15) {
    if (puVar4 < puVar10) {
      *plVar9 = (longlong)puVar4;
      plVar9[1] = (longlong)puVar10;
      *(int *)(plVar9 + 2) = iVar13;
      plVar9 = plVar9 + 3;
    }
    puVar15 = puVar3;
    if (puVar7 <= puVar3 + 1) goto LAB_14743ac86;
  }
  else {
    if (puVar3 + 1 < puVar7) {
      *plVar9 = (longlong)puVar3;
      plVar9[1] = (longlong)puVar11;
      *(int *)(plVar9 + 2) = iVar13;
      plVar9 = plVar9 + 3;
    }
    puVar3 = puVar4;
    puVar11 = puVar10;
    puVar16 = puVar10;
    if (puVar10 <= puVar4) goto LAB_14743ac86;
  }
  iVar5 = (int)((ulonglong)((longlong)puVar16 - (longlong)puVar15) >> 1);
  puVar8 = puVar15;
  puVar10 = puVar11;
  puVar14 = puVar16;
  if (iVar13 == 0) goto LAB_14743ac9b;
  goto LAB_14743ab28;
}



// FUNCTION 14743aca8 FUN_14743aca8 body=309 status=ok
// SIG undefined FUN_14743aca8(void)

void FUN_14743aca8(undefined2 *param_1,uint param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  if (param_2 != 0) {
    iVar3 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar8 = iVar3;
joined_r0x00014743acc9:
    do {
      iVar6 = iVar3 * 2 + 1;
      if (iVar6 < (int)param_2) {
        iVar7 = iVar3 * 2 + 2;
        if ((iVar7 < (int)param_2) && ((ushort)param_1[iVar6] <= (ushort)param_1[iVar7])) {
          iVar6 = iVar7;
        }
        uVar1 = param_1[iVar3];
        if (uVar1 < (ushort)param_1[iVar6]) {
          param_1[iVar3] = param_1[iVar6];
          param_1[iVar6] = uVar1;
          iVar3 = iVar6;
          goto joined_r0x00014743acc9;
        }
      }
      bVar9 = iVar8 != 0;
      iVar3 = iVar8 + -1;
      iVar8 = iVar3;
    } while (bVar9);
    if (1 < (int)param_2) {
      uVar4 = (ulonglong)param_2;
      uVar2 = *param_1;
      *param_1 = param_1[uVar4 - 1];
      param_1[uVar4 - 1] = uVar2;
      if (param_2 != 2) {
        do {
          uVar5 = uVar4 - 1;
          iVar3 = 0;
          iVar6 = 1;
          iVar8 = 0;
          do {
            iVar3 = iVar3 + 2;
            iVar7 = iVar6;
            if (((longlong)iVar3 < (longlong)uVar5) &&
               ((ushort)param_1[iVar6] <= (ushort)param_1[iVar3])) {
              iVar7 = iVar3;
            }
            uVar1 = param_1[iVar8];
            if ((ushort)param_1[iVar7] <= uVar1) break;
            param_1[iVar8] = param_1[iVar7];
            param_1[iVar7] = uVar1;
            iVar3 = iVar7 * 2;
            iVar6 = iVar7 * 2 + 1;
            iVar8 = iVar7;
          } while ((longlong)iVar6 < (longlong)uVar5);
          uVar2 = *param_1;
          *param_1 = param_1[uVar4 - 2];
          param_1[uVar4 - 2] = uVar2;
          uVar4 = uVar5;
        } while (2 < uVar5);
      }
    }
  }
  return;
}



// FUNCTION 14743addd FUN_14743addd body=561 status=ok
// SIG undefined FUN_14743addd(void)

void FUN_14743addd(longlong param_1,uint param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  int iVar6;
  ulonglong uVar7;
  ushort *puVar8;
  ushort *puVar9;
  longlong *plVar10;
  ushort *puVar11;
  ushort *puVar12;
  ushort uVar13;
  int iVar14;
  ushort *puVar15;
  ushort *puVar16;
  ushort *puVar17;
  bool bVar18;
  float fVar19;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [190];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (ulonglong)param_2 * 4 + -4;
    local_348 = param_1;
    fVar19 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar19 + fVar19);
    plVar10 = &local_348;
    do {
      puVar4 = (ushort *)*plVar10;
      puVar11 = (ushort *)plVar10[1];
      iVar14 = (int)plVar10[2];
      iVar6 = (int)((ulonglong)((longlong)puVar11 - (longlong)puVar4) >> 2);
      puVar9 = puVar4;
      puVar15 = puVar11;
      if (iVar14 != 0) {
LAB_14743ae9e:
        if (8 < (int)(iVar6 + 1U)) {
          uVar7 = (ulonglong)(iVar6 + 1U >> 1);
          uVar2 = *(undefined4 *)(puVar4 + uVar7 * 2);
          *(undefined4 *)(puVar4 + uVar7 * 2) = *(undefined4 *)puVar4;
          *(undefined4 *)puVar4 = uVar2;
          puVar8 = puVar11 + 2;
          puVar5 = puVar4;
          do {
            puVar3 = puVar5 + 2;
            puVar12 = puVar5 + 2;
            do {
              puVar5 = puVar12;
              puVar16 = puVar3;
              if (puVar11 < puVar5) break;
              puVar3 = puVar16 + 2;
              puVar12 = puVar5 + 2;
            } while (*puVar5 <= *puVar4);
            puVar3 = puVar8 + -4;
            do {
              puVar12 = puVar8;
              puVar17 = puVar3;
              puVar8 = puVar12 + -2;
              if (puVar8 <= puVar4) break;
              puVar3 = puVar17 + -2;
            } while (*puVar4 <= *puVar8);
            if (puVar8 < puVar5) goto LAB_14743af18;
            uVar2 = *(undefined4 *)puVar5;
            *(undefined4 *)puVar5 = *(undefined4 *)puVar8;
            *(undefined4 *)puVar8 = uVar2;
          } while( true );
        }
        if (puVar4 < puVar11) {
          do {
            puVar9 = puVar4;
            if (puVar4 + 2 <= puVar11) {
              uVar13 = *puVar4;
              puVar15 = puVar4 + 2;
              do {
                uVar1 = *puVar15;
                bVar18 = uVar13 < uVar1;
                if (uVar13 <= uVar1) {
                  uVar13 = uVar1;
                }
                if (bVar18) {
                  puVar9 = puVar15;
                }
                puVar15 = puVar15 + 2;
              } while (puVar15 <= puVar11);
            }
            uVar2 = *(undefined4 *)puVar9;
            *(undefined4 *)puVar9 = *(undefined4 *)puVar11;
            *(undefined4 *)puVar11 = uVar2;
            puVar11 = puVar11 + -2;
          } while (puVar4 < puVar11);
        }
        goto LAB_14743afed;
      }
LAB_14743b002:
      FUN_14743b00f(puVar4);
LAB_14743afed:
      plVar10 = plVar10 + -3;
    } while (&local_348 <= plVar10);
  }
  if ((local_40 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14743af18:
  uVar2 = *(undefined4 *)puVar4;
  *(undefined4 *)puVar4 = *(undefined4 *)puVar8;
  *(undefined4 *)puVar8 = uVar2;
  iVar14 = iVar14 + -1;
  puVar12 = puVar12 + -4;
  if ((longlong)puVar17 - (longlong)puVar9 < (longlong)puVar15 - (longlong)puVar16) {
    if (puVar5 < puVar11) {
      *plVar10 = (longlong)puVar5;
      plVar10[1] = (longlong)puVar11;
      *(int *)(plVar10 + 2) = iVar14;
      plVar10 = plVar10 + 3;
    }
    puVar16 = puVar4;
    if (puVar8 <= puVar4 + 2) goto LAB_14743afed;
  }
  else {
    if (puVar4 + 2 < puVar8) {
      *plVar10 = (longlong)puVar4;
      plVar10[1] = (longlong)puVar12;
      *(int *)(plVar10 + 2) = iVar14;
      plVar10 = plVar10 + 3;
    }
    puVar4 = puVar5;
    puVar12 = puVar11;
    puVar17 = puVar11;
    if (puVar11 <= puVar5) goto LAB_14743afed;
  }
  iVar6 = (int)((ulonglong)((longlong)puVar17 - (longlong)puVar16) >> 2);
  puVar9 = puVar16;
  puVar11 = puVar12;
  puVar15 = puVar17;
  if (iVar14 == 0) goto LAB_14743b002;
  goto LAB_14743ae9e;
}



// FUNCTION 14743b00f FUN_14743b00f body=305 status=ok
// SIG undefined FUN_14743b00f(void)

void FUN_14743b00f(undefined4 *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  if (param_2 != 0) {
    iVar2 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar7 = iVar2;
joined_r0x00014743b030:
    do {
      iVar5 = iVar2 * 2 + 1;
      if (iVar5 < (int)param_2) {
        iVar6 = iVar2 * 2 + 2;
        if ((iVar6 < (int)param_2) && (*(ushort *)(param_1 + iVar5) <= *(ushort *)(param_1 + iVar6))
           ) {
          iVar5 = iVar6;
        }
        if (*(ushort *)(param_1 + iVar2) < *(ushort *)(param_1 + iVar5)) {
          uVar1 = param_1[iVar2];
          param_1[iVar2] = param_1[iVar5];
          param_1[iVar5] = uVar1;
          iVar2 = iVar5;
          goto joined_r0x00014743b030;
        }
      }
      bVar8 = iVar7 != 0;
      iVar2 = iVar7 + -1;
      iVar7 = iVar2;
    } while (bVar8);
    if (1 < (int)param_2) {
      uVar3 = (ulonglong)param_2;
      uVar1 = *param_1;
      *param_1 = param_1[uVar3 - 1];
      param_1[uVar3 - 1] = uVar1;
      if (param_2 != 2) {
        do {
          uVar4 = uVar3 - 1;
          iVar2 = 0;
          iVar5 = 1;
          iVar7 = 0;
          do {
            iVar2 = iVar2 + 2;
            iVar6 = iVar5;
            if (((longlong)iVar2 < (longlong)uVar4) &&
               (*(ushort *)(param_1 + iVar5) <= *(ushort *)(param_1 + iVar2))) {
              iVar6 = iVar2;
            }
            if (*(ushort *)(param_1 + iVar6) <= *(ushort *)(param_1 + iVar7)) break;
            uVar1 = param_1[iVar7];
            param_1[iVar7] = param_1[iVar6];
            param_1[iVar6] = uVar1;
            iVar2 = iVar6 * 2;
            iVar5 = iVar6 * 2 + 1;
            iVar7 = iVar6;
          } while ((longlong)iVar5 < (longlong)uVar4);
          uVar1 = *param_1;
          *param_1 = param_1[uVar3 - 2];
          param_1[uVar3 - 2] = uVar1;
          uVar3 = uVar4;
        } while (2 < uVar4);
      }
    }
  }
  return;
}



// FUNCTION 14743b140 FUN_14743b140 body=89 status=ok
// SIG undefined FUN_14743b140(void)

void FUN_14743b140(longlong param_1)

{
  FUN_144a886ae(param_1 + 0xb0);
  FUN_144a886ae(param_1 + 0xa0);
  FUN_147438e88(param_1 + 0x88);
  FUN_144a886ae(param_1 + 0x78);
  FUN_144a886ae(param_1 + 0x68);
  FUN_144a886ae(param_1 + 0x58);
  FUN_1474337a4(param_1);
  return;
}



// FUNCTION 14743b19a FUN_14743b19a body=95 status=ok
// SIG undefined FUN_14743b19a(void)

void FUN_14743b19a(longlong param_1,uint param_2)

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



// FUNCTION 14743b1f9 FUN_14743b1f9 body=7 status=ok
// SIG undefined FUN_14743b1f9(void)

void FUN_14743b1f9(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 14743b200 FUN_14743b200 body=132 status=ok
// SIG undefined FUN_14743b200(void)

void FUN_14743b200(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14743b285 FUN_14743b285 body=7 status=ok
// SIG undefined FUN_14743b285(void)

void FUN_14743b285(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 14743b28c FUN_14743b28c body=147 status=ok
// SIG undefined FUN_14743b28c(void)

void FUN_14743b28c(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14743b320 FUN_14743b320 body=132 status=ok
// SIG undefined FUN_14743b320(void)

void FUN_14743b320(longlong param_1,int param_2)

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



// FUNCTION 14743b3a6 FUN_14743b3a6 body=369 status=ok
// SIG undefined FUN_14743b3a6(void)

longlong * FUN_14743b3a6(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_14743b698(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x100000 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_14743b518(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x10;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_14743b698(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_14743b65c(param_2);
        FUN_14743b518(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14743b518 FUN_14743b518 body=324 status=ok
// SIG undefined FUN_14743b518(void)

longlong * FUN_14743b518(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[1] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 2,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[2] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  param_2 = param_2 + 3;
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 14743b65c FUN_14743b65c body=59 status=ok
// SIG undefined FUN_14743b65c(void)

longlong FUN_14743b65c(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14743b200(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x10 + *param_1;
  FUN_14743b1f9(lVar2);
  return lVar2;
}



// FUNCTION 14743b698 FUN_14743b698 body=95 status=ok
// SIG undefined FUN_14743b698(void)

void FUN_14743b698(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,4);
  }
  return;
}



// FUNCTION 14743b6f8 FUN_14743b6f8 body=377 status=ok
// SIG undefined FUN_14743b6f8(void)

longlong * FUN_14743b6f8(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x18,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x18);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_14743b9e0(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0xaaaaa < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_14743b872(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x18;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_14743b9e0(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_14743b9a0(param_2);
        FUN_14743b872(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14743b872 FUN_14743b872 body=302 status=ok
// SIG undefined FUN_14743b872(void)

longlong * FUN_14743b872(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  
  puVar1 = *(undefined8 **)param_1[1];
  if ((undefined8 *)((longlong *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,8);
    }
    else {
      FUN_146821949(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
  }
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 1) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)((longlong)param_2 + 0xc),4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)((longlong)param_2 + 0xc) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar3 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,param_2 + 2,1);
  }
  else {
    *(undefined1 *)(param_2 + 2) = *puVar3;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  return param_1;
}



// FUNCTION 14743b9a0 FUN_14743b9a0 body=63 status=ok
// SIG undefined FUN_14743b9a0(void)

longlong FUN_14743b9a0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14743b28c(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x18 + *param_1;
  FUN_14743b285(lVar2);
  return lVar2;
}



// FUNCTION 14743b9e0 FUN_14743b9e0 body=112 status=ok
// SIG undefined FUN_14743b9e0(void)

void FUN_14743b9e0(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x18,8);
  }
  return;
}



// FUNCTION 14743ba50 FUN_14743ba50 body=420 status=ok
// SIG undefined FUN_14743ba50(void)

longlong * FUN_14743ba50(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_68 [44];
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  local_3c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_3c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_3c,4);
    }
    else {
      FUN_14572512c(param_1,&local_3c);
    }
  }
  else {
    local_3c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_3c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_14743b19a(param_2,0);
    }
  }
  else if ((((int)local_3c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x100000 < local_3c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_3c;
    lVar6 = 8;
    lVar7 = 0;
    do {
      lVar3 = *param_2;
      uVar4 = FUN_1408383eb(param_1,lVar3 + lVar6 + -8);
      FUN_1408383eb(uVar4,lVar3 + lVar6);
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x10;
    } while (lVar7 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_3c) ||
       (FUN_14743b19a(param_2), 0 < (int)local_3c)) {
      iVar5 = 0;
      do {
        lVar6 = FUN_14743bbf6(param_2);
        uVar4 = FUN_1408383eb(param_1,lVar6);
        FUN_1408383eb(uVar4,lVar6 + 8);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)local_3c);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14743bbf6 FUN_14743bbf6 body=59 status=ok
// SIG undefined FUN_14743bbf6(void)

longlong FUN_14743bbf6(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14743b320(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x10 + *param_1;
  FUN_14743bc31(lVar2);
  return lVar2;
}



// FUNCTION 14743bc31 FUN_14743bc31 body=7 status=ok
// SIG undefined FUN_14743bc31(void)

void FUN_14743bc31(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 14743bc38 FUN_14743bc38 body=28 status=ok
// SIG undefined FUN_14743bc38(void)

void FUN_14743bc38(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0xffffffff;
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 14743bc54 FUN_14743bc54 body=147 status=ok
// SIG undefined FUN_14743bc54(void)

void FUN_14743bc54(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14743bce8 FUN_14743bce8 body=101 status=ok
// SIG undefined FUN_14743bce8(void)

void FUN_14743bce8(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x18 + *param_1);
  FUN_14743bd8c(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x18),(longlong)iVar2 * 0x18);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 14743bd4e FUN_14743bd4e body=62 status=ok
// SIG undefined FUN_14743bd4e(void)

void FUN_14743bd4e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14743bdc2(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 14743bd8c FUN_14743bd8c body=54 status=ok
// SIG undefined FUN_14743bd8c(void)

void FUN_14743bd8c(longlong *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    puVar2 = (undefined8 *)*param_1;
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 14743bdc2 FUN_14743bdc2 body=112 status=ok
// SIG undefined FUN_14743bdc2(void)

ulonglong FUN_14743bdc2(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_14743bdfc;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x18,8);
      param_2 = param_2 / 0x18;
    }
  }
LAB_14743bdfc:
  return param_2 & 0xffffffff;
}



// FUNCTION 14743be32 FUN_14743be32 body=149 status=ok
// SIG undefined FUN_14743be32(void)

void FUN_14743be32(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  plVar4 = param_1 + 0x16;
  FUN_14743421e(param_1[0x15],*(undefined4 *)(param_1 + 0x17),plVar4);
  plVar3 = (longlong *)param_1[0x16];
  if (plVar3 != (longlong *)0x0) {
    *plVar4 = 0;
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,1);
    }
    plVar4 = (longlong *)*plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar4 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)(*plVar4 + 0x28))(plVar4,1);
      }
    }
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(param_1 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014743bebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14743bec8 FUN_14743bec8 body=132 status=ok
// SIG undefined FUN_14743bec8(void)

void FUN_14743bec8(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14743bf4e FUN_14743bf4e body=132 status=ok
// SIG undefined FUN_14743bf4e(void)

void FUN_14743bf4e(longlong param_1,int param_2)

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



// FUNCTION 14743bfd4 FUN_14743bfd4 body=325 status=ok
// SIG undefined FUN_14743bfd4(void)

void FUN_14743bfd4(longlong *param_1)

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
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
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



// FUNCTION 14743c11a FUN_14743c11a body=41 status=ok
// SIG undefined FUN_14743c11a(void)

undefined8 FUN_14743c11a(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x68) + 0x40))
            ((longlong *)**(undefined8 **)(param_1 + 0x68),param_2,*(undefined4 *)(param_1 + 0x70),
             param_3);
  return param_2;
}



// FUNCTION 14743c15e FUN_14743c15e body=78 status=ok
// SIG undefined FUN_14743c15e(void)

void FUN_14743c15e(longlong param_1,int param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  if ((*(char *)(param_1 + 0x74) == '\0') &&
     (*(longlong *)(*(longlong *)(param_1 + 0x50) + (longlong)param_2 * 8) == 0)) {
    uVar1 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x68) + 0x28))
                      ((longlong *)**(undefined8 **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70)
                       ,param_2);
    FUN_1432319b4(*(undefined8 *)(param_1 + 0x68),uVar1,param_3);
    return;
  }
  return;
}



// FUNCTION 14743c1ac FUN_14743c1ac body=159 status=ok
// SIG undefined FUN_14743c1ac(void)

void FUN_14743c1ac(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x68) + 0x30))
            ((longlong *)**(undefined8 **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70),&local_48
            );
  lVar1 = local_48;
  lVar2 = (longlong)(int)uStack_40;
  if (lVar2 != 0) {
    lVar3 = 0;
    do {
      FUN_1432319b4(*(undefined8 *)(param_1 + 0x68),*(undefined4 *)(lVar1 + lVar3),param_2);
      lVar3 = lVar3 + 4;
    } while (lVar2 * 4 != lVar3);
  }
  if (local_48 != 0) {
    FUN_1400020a8(local_48);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14743c24c FUN_14743c24c body=205 status=ok
// SIG undefined FUN_14743c24c(void)

void FUN_14743c24c(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  
  uVar3 = param_2 + 0x1f;
  if (-1 < (int)param_2) {
    uVar3 = param_2;
  }
  lVar6 = (longlong)(int)(param_2 - (uVar3 & 0xffffffe0));
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + lVar6 + 0x143));
  if (*(int *)(param_1 + lVar6 * 10 + 2) != *(int *)((longlong)param_1 + lVar6 * 0x50 + 0x3c)) {
    puVar4 = param_1 + lVar6 * 10 + 8;
    if ((undefined8 *)param_1[lVar6 * 10 + 9] != (undefined8 *)0x0) {
      puVar4 = (undefined8 *)param_1[lVar6 * 10 + 9];
    }
    iVar5 = *(int *)((longlong)puVar4 +
                    (ulonglong)(*(int *)(param_1 + lVar6 * 10 + 10) - 1U & param_2) * 4);
    if (iVar5 != -1) {
      lVar2 = param_1[lVar6 * 10 + 1];
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x20;
        if (*(uint *)(lVar2 + (longlong)iVar5 * 0x20) == param_2) {
          if (((char *)(lVar1 + 8) != (char *)0x0 && lVar1 != 0) && (*(char *)(lVar1 + 8) == '\x01')
             ) {
            (**(code **)(*(longlong *)*param_1 + 0x78))((longlong *)*param_1,param_2);
            FUN_14054dc28(param_1 + lVar6 * 10 + 1,param_2);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x18);
      } while (iVar5 != -1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014743c29e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + lVar6 + 0x143));
  return;
}



// FUNCTION 14743c31a FUN_14743c31a body=90 status=ok
// SIG undefined FUN_14743c31a(void)

undefined8 * FUN_14743c31a(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  
  lVar2 = **(longlong **)(param_1 + 0x68);
  *param_2 = 0;
  iVar1 = *(int *)(lVar2 + 0x20);
  _Src = *(void **)(lVar2 + 0x18);
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 14743c374 FUN_14743c374 body=54 status=ok
// SIG undefined FUN_14743c374(void)

void FUN_14743c374(longlong param_1,undefined4 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x68) + 0x28))
                    ((longlong *)**(undefined8 **)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70),
                     param_2);
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x68) + 0x90);
                    /* WARNING: Could not recover jumptable at 0x00014743c3a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((longlong *)**(undefined8 **)(param_1 + 0x68),uVar1,UNRECOVERED_JUMPTABLE);
  return;
}



// FUNCTION 14743c3bc FUN_14743c3bc body=11 status=ok
// SIG undefined FUN_14743c3bc(void)

bool FUN_14743c3bc(void)

{
  return 0 < DAT_14c760e5c;
}



// FUNCTION 14743c3c8 FUN_14743c3c8 body=189 status=ok
// SIG undefined FUN_14743c3c8(void)

undefined8 FUN_14743c3c8(undefined8 param_1,undefined8 param_2,ulonglong *param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  bool bVar11;
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0xffffffff;
  plVar4 = (longlong *)FUN_1404d2d58();
  if (plVar4 == (longlong *)0x0) {
    uVar5 = 0;
  }
  else {
    iVar8 = *(int *)(*plVar4 + 0x20);
    iVar3 = (int)param_3[1];
    if (iVar8 == iVar3) {
      uVar5 = CONCAT71((uint7)(uint3)((uint)iVar3 >> 8),1);
      if (iVar8 < 2) goto LAB_14743c463;
      uVar6 = *param_3;
      lVar9 = 0;
      while( true ) {
        uVar1 = *(ushort *)(*(longlong *)(*plVar4 + 0x18) + lVar9);
        uVar7 = (uint)uVar1;
        uVar2 = *(ushort *)(uVar6 + lVar9);
        uVar10 = (uint)uVar2;
        if (uVar1 != uVar2) {
          if ((uVar2 | uVar1) < 0x80) {
            uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar1];
            uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_14743c42e;
          }
          iVar8 = uVar7 - uVar10;
          goto LAB_14743c482;
        }
        if (uVar1 == 0) break;
LAB_14743c42e:
        lVar9 = lVar9 + 2;
      }
      iVar8 = 0;
LAB_14743c482:
      bVar11 = iVar8 == 0;
    }
    else {
      uVar6 = (ulonglong)(uint)(iVar3 + iVar8);
      bVar11 = iVar3 + iVar8 == 1;
    }
    uVar5 = CONCAT71((int7)(uVar6 >> 8),bVar11);
  }
LAB_14743c463:
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14743c486 FUN_14743c486 body=106 status=ok
// SIG undefined FUN_14743c486(void)

undefined8 * FUN_14743c486(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  
  uVar2 = FUN_144a49b4a(*(undefined4 *)(param_3 + 1),*param_3);
  iVar3 = FUN_14743f50c(param_1,uVar2,param_3);
  if (iVar3 != -1) {
    if ((*param_1 + (longlong)iVar3 * 0x20 + 0x10U & 0xffffffffffffffef) != 0) {
      lVar4 = *param_1 + (longlong)iVar3 * 0x20;
      *(undefined1 *)(lVar4 + 0x17) = 1;
      *param_2 = *(undefined8 *)(lVar4 + 0x10);
      uVar1 = 1;
      goto LAB_14743c4d0;
    }
  }
  uVar1 = 0;
LAB_14743c4d0:
  *(undefined1 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 14743c4f0 FUN_14743c4f0 body=122 status=ok
// SIG undefined FUN_14743c4f0(void)

void FUN_14743c4f0(undefined8 param_1,undefined4 *param_2,undefined2 *param_3,undefined2 *param_4,
                  undefined2 *param_5)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined2 local_2a;
  undefined2 local_28;
  undefined2 local_26;
  char local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  FUN_14743c486(local_48,&local_2a);
  if (local_22 == '\x01') {
    *param_3 = local_2a;
    *param_4 = local_28;
    *param_5 = local_26;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14743c56c FUN_14743c56c body=64 status=ok
// SIG undefined FUN_14743c56c(void)

undefined8 FUN_14743c56c(longlong *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_144a49b4a(*(undefined4 *)(param_2 + 1),*param_2);
  iVar2 = FUN_14743f50c(param_1,uVar1,param_2);
  if (iVar2 == -1) {
    uVar4 = 0;
  }
  else {
    lVar3 = (longlong)iVar2 * 0x20 + *param_1;
    uVar4 = CONCAT71((int7)((ulonglong)lVar3 >> 8),lVar3 != 0);
  }
  return uVar4;
}



// FUNCTION 14743c5ac FUN_14743c5ac body=1468 status=ok
// SIG undefined FUN_14743c5ac(void)

ulonglong FUN_14743c5ac(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined8 unaff_RDI;
  longlong lVar11;
  uint uVar12;
  undefined2 *puVar13;
  undefined8 *puVar14;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  int local_b0;
  undefined4 local_ac;
  longlong local_a8;
  int local_a0;
  undefined4 local_9c;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  undefined2 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (((int)param_1[1] < 1) ||
     (uVar10 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1), *(short *)*param_1 != 0x2f)) {
    FUN_14006620a(&local_50);
    puVar4 = local_50;
    puVar13 = &DAT_149dfb77a;
    if (local_48 != 0) {
      puVar13 = local_50;
    }
    FUN_140002266(&local_50,
                  L"Virtual shader source file name \"%s\" should be absolute from the virtual root directory \"/\"."
                  ,puVar13);
    if (puVar4 != (undefined2 *)0x0) {
      FUN_1400020a8(puVar4);
    }
    puVar4 = local_50;
    local_78 = (void *)0x0;
    local_70 = local_48;
    if ((longlong)local_48 == 0) {
      local_6c = 0;
    }
    else {
      FUN_1446dd670(&local_78,local_48,0);
      memcpy(local_78,puVar4,(longlong)local_48 * 2);
      if (local_78 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    if (local_50 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    uVar10 = 0;
  }
  local_68 = (undefined4)*param_1;
  uStack_64 = *(undefined4 *)((longlong)param_1 + 4);
  iStack_60 = (int)param_1[1];
  uStack_5c = *(undefined4 *)((longlong)param_1 + 0xc);
  local_50 = &DAT_149e06258;
  local_48 = 2;
  iVar5 = FUN_144a08910(&local_68,&local_50,0);
  if (iVar5 != -1) {
    FUN_14006620a(&local_50,*param_1,(int)param_1[1]);
    puVar4 = local_50;
    puVar13 = &DAT_149dfb77a;
    if (local_48 != 0) {
      puVar13 = local_50;
    }
    FUN_140002266(&local_50,
                  L"Virtual shader source file name \"%s\" should have relative directories (\"../\") collapsed."
                  ,puVar13);
    if (puVar4 != (undefined2 *)0x0) {
      FUN_1400020a8(puVar4);
    }
    puVar4 = local_50;
    local_88 = (void *)0x0;
    lVar11 = (longlong)local_48;
    local_80 = local_48;
    if (lVar11 == 0) {
      local_7c = 0;
    }
    else {
      FUN_1446dd670(&local_88,local_48,0);
      memcpy(local_88,puVar4,lVar11 * 2);
      if (local_88 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    if (local_50 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    uVar10 = 0;
  }
  local_68 = (undefined4)*param_1;
  uStack_64 = *(undefined4 *)((longlong)param_1 + 4);
  iStack_60 = (int)param_1[1];
  uStack_5c = *(undefined4 *)((longlong)param_1 + 0xc);
  local_50 = &DAT_149e01f64;
  local_48 = 1;
  iVar5 = FUN_144a08910(&local_68,&local_50,0);
  if (iVar5 != -1) {
    FUN_14006620a(&local_50,*param_1,(int)param_1[1]);
    puVar4 = local_50;
    puVar13 = &DAT_149dfb77a;
    if (local_48 != 0) {
      puVar13 = local_50;
    }
    FUN_140002266(&local_50,
                  L"Backslashes are not permitted in virtual shader source file name \"%s\"",puVar13
                 );
    if (puVar4 != (undefined2 *)0x0) {
      FUN_1400020a8(puVar4);
    }
    puVar4 = local_50;
    local_98 = (void *)0x0;
    lVar11 = (longlong)local_48;
    local_90 = local_48;
    if (lVar11 == 0) {
      local_8c = 0;
    }
    else {
      FUN_1446dd670(&local_98,local_48,0);
      memcpy(local_98,puVar4,lVar11 * 2);
      if (local_98 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    if (local_50 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    uVar10 = 0;
  }
  FUN_140fede38(&local_68,param_1,0);
  uVar1 = *(uint *)(param_1 + 1);
  uVar8 = (ulonglong)uVar1;
  if ((longlong)DAT_14ca9eca0 != 0) {
    lVar11 = (longlong)DAT_14ca9eca0 << 4;
    puVar14 = DAT_14ca9ec98;
    do {
      uVar2 = *(uint *)(puVar14 + 1);
      uVar6 = uVar2 - 1;
      if (uVar2 == 0) {
        uVar6 = 0;
      }
      uVar7 = uVar1;
      if ((int)uVar6 < (int)uVar1) {
        uVar7 = uVar6;
      }
      uVar12 = 0;
      if (0 < (int)uVar7) {
        uVar12 = uVar7;
      }
      if ((uVar6 == uVar12) &&
         (((uVar2 < 2 || ((int)uVar7 < 1)) ||
          (iVar5 = FUN_144a54874(*puVar14,*param_1,uVar6), iVar5 == 0)))) {
        if (puVar14 != (undefined8 *)0x0) {
          if ((iStack_60 == 1) &&
             (iVar5 = FUN_144a54874(CONCAT44(uStack_64,local_68),&DAT_149e189ec,1), iVar5 == 0))
          goto LAB_14743ca09;
          FUN_14006620a(&local_50,*param_1,uVar8);
          puVar4 = local_50;
          puVar13 = &DAT_149dfb77a;
          if (local_48 != 0) {
            puVar13 = local_50;
          }
          FUN_140002266(&local_50,
                        L"Extension on virtual shader source file name \"%s\" is wrong. Only .h is allowed for shared headers that are shared between C++ and shader code."
                        ,puVar13);
          if (puVar4 != (undefined2 *)0x0) {
            FUN_1400020a8(puVar4);
          }
          local_a8 = 0;
          local_a0 = local_48;
          uVar10 = (ulonglong)local_48;
          if (uVar10 == 0) {
            local_9c = 0;
            goto LAB_14743c9f5;
          }
          plVar9 = &local_a8;
          goto LAB_14743c9ca;
        }
        break;
      }
      puVar14 = puVar14 + 2;
      lVar11 = lVar11 + -0x10;
    } while (lVar11 != 0);
  }
  if (((int)uVar1 < 0xc) || (iVar5 = FUN_144a54874(L"/ThirdParty/",*param_1,0xc), iVar5 != 0)) {
    lVar11 = (longlong)iStack_60;
    if (lVar11 != 0) {
      uVar3 = CONCAT44(uStack_64,local_68);
      iVar5 = FUN_144a54874(uVar3,&DAT_14a394b66,lVar11);
      if ((((iVar5 == 0) && (*(short *)(&DAT_14a394b66 + lVar11 * 2) == 0)) ||
          ((iVar5 = FUN_144a54874(uVar3,&DAT_14a394b6e,lVar11), iVar5 == 0 &&
           (*(short *)(&DAT_14a394b6e + lVar11 * 2) == 0)))) &&
         (((int)uVar1 < 8 ||
          (iVar5 = FUN_144a54874(L".usf.usf",*param_1 + uVar8 * 2 + -0x10,8), iVar5 != 0))))
      goto LAB_14743ca09;
    }
    FUN_14006620a(&local_50,*param_1,uVar8);
    puVar4 = local_50;
    puVar13 = &DAT_149dfb77a;
    if (local_48 != 0) {
      puVar13 = local_50;
    }
    FUN_140002266(&local_50,
                  L"Extension on virtual shader source file name \"%s\" is wrong. Only .usf or .ush allowed."
                  ,puVar13);
    if (puVar4 != (undefined2 *)0x0) {
      FUN_1400020a8(puVar4);
    }
    local_b8 = 0;
    uVar10 = (ulonglong)local_48;
    local_b0 = local_48;
    if (uVar10 == 0) {
      local_ac = 0;
    }
    else {
      plVar9 = &local_b8;
LAB_14743c9ca:
      puVar4 = local_50;
      FUN_1446dd670(plVar9,uVar10 & 0xffffffff,0);
      memcpy((void *)*plVar9,puVar4,uVar10 * 2);
      if (*plVar9 != 0) {
        FUN_1400020a8();
      }
    }
LAB_14743c9f5:
    if (local_50 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    uVar10 = 0;
  }
LAB_14743ca09:
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10 & 0xffffffff;
}



// FUNCTION 14743cb6a FUN_14743cb6a body=89 status=ok
// SIG undefined FUN_14743cb6a(void)

void FUN_14743cb6a(longlong *param_1)

{
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



// FUNCTION 14743cbc3 FUN_14743cbc3 body=644 status=ok
// SIG undefined FUN_14743cbc3(void)

void FUN_14743cbc3(longlong *param_1,uint param_2)

{
  void *_Src;
  wchar_t *_Str;
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined2 *puVar5;
  longlong lVar6;
  size_t sVar7;
  undefined1 auStack_b8 [32];
  undefined2 *local_98;
  undefined2 *local_88;
  int local_80;
  longlong local_78;
  undefined8 local_70;
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  AcquireSRWLockShared((PSRWLOCK)&DAT_14ca9b218);
  uVar2 = (param_2 & 0xffff) * 0x60;
  local_58 = (undefined2 *)0x0;
  local_50 = *(int *)(&DAT_14ca9b228 + uVar2);
  lVar6 = (longlong)local_50;
  _Src = *(void **)(&DAT_14ca9b220 + uVar2);
  if (lVar6 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_50,0);
    memcpy(local_58,_Src,lVar6 * 2);
  }
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14ca9b218);
  if (1 < local_50) {
    lVar6 = 0;
    do {
      _Str = *(wchar_t **)((longlong)&PTR_u__Platform_Private__14a394d00 + lVar6);
      sVar7 = 0;
      if (_Str != (wchar_t *)0x0) {
        sVar7 = wcslen(_Str);
      }
      cVar1 = FUN_144a791f8(param_1,_Str,sVar7,1);
      if (cVar1 != '\0') {
        puVar5 = &DAT_149dfb77a;
        if (local_50 != 0) {
          puVar5 = local_58;
        }
        FUN_140002266(&local_68,L"/Platform%s",puVar5);
        FUN_140b127b8(&local_68,&DAT_149e065c6,1,1);
        puVar5 = &DAT_149dfb77a;
        if (local_60 != 0) {
          puVar5 = local_68;
        }
        iVar4 = local_60 + -1;
        if (local_60 == 0) {
          iVar4 = 0;
        }
        uVar3 = FUN_144a49b4a(iVar4,puVar5);
        iVar4 = FUN_1457511aa(&DAT_14ca9ec48,uVar3,&local_68);
        if (iVar4 != -1) {
          sVar7 = wcslen(_Str);
          FUN_144a49bb4(param_1,&local_88,sVar7 & 0xffffffff);
          local_98 = &DAT_149dfb77a;
          if (local_80 != 0) {
            local_98 = local_88;
          }
          puVar5 = &DAT_149dfb77a;
          if (local_50 != 0) {
            puVar5 = local_58;
          }
          FUN_140002266(&local_78,L"/Platform%s%s/%s",puVar5,
                        *(undefined8 *)((longlong)&PTR_u_Private_14a394d08 + lVar6));
          if (&local_78 == param_1) {
            if (local_78 != 0) {
              FUN_1400020a8();
            }
          }
          else {
            if (*param_1 != 0) {
              FUN_1400020a8();
            }
            *param_1 = local_78;
            local_78 = 0;
            *(undefined4 *)(param_1 + 1) = (undefined4)local_70;
            *(undefined4 *)((longlong)param_1 + 0xc) = local_70._4_4_;
            local_70 = 0;
          }
          if (local_88 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (local_68 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          break;
        }
        if (local_68 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      lVar6 = lVar6 + 0x10;
    } while (lVar6 != 0x20);
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14743ce48 FUN_14743ce48 body=421 status=ok
// SIG undefined FUN_14743ce48(void)

void FUN_14743ce48(undefined8 *param_1,uint param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined1 auStack_878 [32];
  undefined2 *local_858;
  int local_850;
  undefined8 local_848;
  wchar_t *local_840;
  wchar_t *local_838;
  wchar_t *local_830;
  undefined1 local_828;
  wchar_t local_820 [1024];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_878;
  if (*(int *)(param_1 + 1) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)*param_1;
  }
  iVar1 = FUN_144a54874(puVar3,L"/Engine/Generated/ShaderAutogen/",0x20);
  if (iVar1 == 0) {
    puVar2 = (undefined8 *)0x0;
    if (((uint)(&DAT_14ca814d8)[((ulonglong)param_2 & 0xffff) * 0xf] >> 0x1c & 1) != 0) {
      puVar2 = (undefined8 *)(&DAT_14ca814a0 + ((ulonglong)param_2 & 0xffff) * 0x3c);
    }
    local_848 = *puVar2;
    local_840 = local_820;
    local_828 = 0;
    local_830 = (wchar_t *)&local_20;
    builtin_wcsncpy(local_820,L"/ShaderAutogen/",0xf);
    local_838 = local_820 + 0xf;
    FUN_1400021e4(&local_848,&local_858);
    iVar1 = local_850 + -1;
    puVar3 = local_858;
    if (local_850 == 0) {
      puVar3 = &DAT_149dfb77a;
      iVar1 = 0;
    }
    FUN_1449668a2(&local_840,puVar3,iVar1);
    if (local_830 <= local_838 + 1) {
      FUN_140213274(&local_840,1);
    }
    *local_838 = L'/';
    iVar1 = *(int *)(param_1 + 1);
    if (iVar1 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    else {
      puVar3 = (undefined2 *)*param_1;
    }
    iVar4 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    local_838 = local_838 + 1;
    FUN_1449668a2(&local_840,puVar3 + 0x20,iVar4 + -0x20);
    FUN_1402980a2(param_1,local_840,(ulonglong)((longlong)local_838 - (longlong)local_840) >> 1);
    if (local_858 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    FUN_144724f3c(&local_840);
  }
  if ((local_20 ^ (ulonglong)auStack_878) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14743cfee FUN_14743cfee body=3 status=ok
// SIG undefined FUN_14743cfee(void)

undefined8 FUN_14743cfee(void)

{
  return 0;
}



// FUNCTION 14743cff1 FUN_14743cff1 body=242 status=ok
// SIG undefined FUN_14743cff1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14743cff1(void)

{
  undefined *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (undefined2 *)0x0;
  uStack_20 = 0;
  puVar1 = (undefined *)FUN_143234487();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = local_28;
    if ((int)uStack_20 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    FUN_140033559(".\\Runtime/RenderCore/Private/ShaderCore.cpp",0xbbc,&DAT_149e0625e,puVar2);
    puVar1 = &DAT_14ca9ecf8;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14ca9ed0c) && (FUN_144b3d300(&DAT_14ca9ed0c), DAT_14ca9ed0c == -1)) {
      _DAT_14ca9ecf8 = 0;
      uRam000000014ca9ed00 = 0;
      _DAT_14ca9ed08 = 0;
      _Init_thread_footer(&DAT_14ca9ed0c);
    }
  }
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar1;
}



// FUNCTION 14743d0e4 FUN_14743d0e4 body=117 status=ok
// SIG undefined FUN_14743d0e4(void)

longlong FUN_14743d0e4(ushort param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  ulonglong uVar6;
  
  iVar2 = *(int *)(param_2 + 1);
  if (iVar2 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  uVar6 = 0;
  uVar4 = (ulonglong)(iVar2 - 1);
  if (iVar2 == 0) {
    uVar4 = uVar6;
  }
  uVar1 = FUN_144a49b4a(uVar4,puVar5);
  iVar2 = FUN_14743eb9c(&DAT_14ca9b230 + (uint)param_1 * 0x60,uVar1,param_2);
  if (iVar2 != -1) {
    uVar6 = (longlong)iVar2 * 0x30 + *(longlong *)(&DAT_14ca9b230 + (uint)param_1 * 0x60);
  }
  lVar3 = uVar6 + 0x10;
  if (uVar6 == 0) {
    lVar3 = 0;
  }
  return lVar3;
}



// FUNCTION 14743d15a FUN_14743d15a body=121 status=ok
// SIG undefined FUN_14743d15a(void)

undefined8 FUN_14743d15a(undefined8 param_1,undefined8 param_2)

{
  wchar_t *_Str;
  char cVar1;
  uint uVar2;
  int iVar3;
  size_t sVar4;
  undefined8 uVar5;
  
  cVar1 = FUN_14743eb30();
  if (cVar1 != '\0') {
    uVar2 = ((uint)param_2 & 0xffff) * 0x60;
    uVar5 = CONCAT71((uint7)((ulonglong)param_2 >> 8) & 0xffffff,1);
    if (*(int *)(&DAT_14ca9b228 + uVar2) < 2) {
      return uVar5;
    }
    _Str = *(wchar_t **)(&DAT_14ca9b220 + uVar2);
    if (_Str == (wchar_t *)0x0) {
      return uVar5;
    }
    sVar4 = wcslen(_Str);
    iVar3 = FUN_1447ee042(param_1,_Str,sVar4 & 0xffffffff,1,0,0xffffffff);
    if (iVar3 == -1) {
      return uVar5;
    }
  }
  return 0;
}



// FUNCTION 14743d1d3 FUN_14743d1d3 body=595 status=ok
// SIG undefined FUN_14743d1d3(void)

longlong * FUN_14743d1d3(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)*param_2;
  if (plVar3 == (longlong *)0x0) {
    local_30 = 0;
  }
  else {
    if (((ulonglong)plVar3[3] >> 0x3e & 1) == 0) {
      (**(code **)(*plVar3 + 8))(plVar3);
    }
    local_30 = plVar3[2];
  }
  puVar4 = (ulonglong *)param_1[1];
  plVar3 = (longlong *)*puVar4 + 1;
  if ((longlong *)puVar4[1] < plVar3) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_30,8);
    }
    else {
      thunk_FUN_146821949(param_1,&local_30);
    }
  }
  else {
    local_30 = *(longlong *)*puVar4;
    *puVar4 = (ulonglong)plVar3;
  }
  lVar1 = local_30;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    if ((*(byte *)(param_1 + 5) & 4) != 0) {
      param_2 = (longlong *)*param_2;
      if (param_2 == (longlong *)0x0) {
        lVar5 = 0;
      }
      else {
        if (((ulonglong)param_2[3] >> 0x3e & 1) == 0) {
          (**(code **)(*param_2 + 8))(param_2);
        }
        lVar5 = param_2[1];
      }
      (**(code **)(*param_1 + 0x170))(param_1,lVar5,lVar1);
    }
  }
  else {
    thunk_FUN_1467fe61e(param_2);
    if (local_30 != 0) {
      FUN_140e03604(&local_38);
      lVar1 = local_30;
      plVar3 = local_38;
      if (local_38 == (longlong *)0x0) {
        lVar5 = 0;
      }
      else {
        if (((ulonglong)local_38[3] >> 0x3e & 1) == 0) {
          (**(code **)(*local_38 + 8))(local_38);
        }
        lVar5 = plVar3[1];
      }
      (**(code **)(*param_1 + 0x170))(param_1,lVar5,lVar1);
      FUN_14276fde8(&local_38,&local_40);
      FUN_1467aa942(param_2,&local_40);
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_40 + 3;
        lVar1 = *plVar3;
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (((uint)lVar1 & 0x3fffffff) == 1) {
          (**(code **)(*local_40 + 0x10))(local_40);
          local_40[1] = 0;
          local_40[2] = 0;
          LOCK();
          puVar4 = (ulonglong *)(local_40 + 3);
          uVar2 = *puVar4;
          *puVar4 = *puVar4 - 0x40000000;
          UNLOCK();
          if ((uVar2 & 0xfffffffc0000000) == 0x40000000) {
            (**(code **)*local_40)(local_40,1);
          }
        }
      }
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_38 + 3;
        lVar1 = *plVar3;
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (((uint)lVar1 & 0x3fffffff) == 1) {
          (**(code **)(*local_38 + 0x10))(local_38);
          local_38[1] = 0;
          local_38[2] = 0;
          LOCK();
          puVar4 = (ulonglong *)(local_38 + 3);
          uVar2 = *puVar4;
          *puVar4 = *puVar4 - 0x40000000;
          UNLOCK();
          if ((uVar2 & 0xfffffffc0000000) == 0x40000000) {
            (**(code **)*local_38)(local_38,1);
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14743d427 FUN_14743d427 body=38 status=ok
// SIG undefined FUN_14743d427(void)

void FUN_14743d427(undefined8 param_1,longlong param_2)

{
  FUN_14743d1d3();
  FUN_14743d1d3(param_1,param_2 + 8);
  return;
}



// FUNCTION 14743d44e FUN_14743d44e body=113 status=ok
// SIG undefined FUN_14743d44e(void)

void FUN_14743d44e(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(int *)(param_1 + 2) == 0) && (param_1[1] != 0)) {
    FUN_146826dac(local_30,param_1[1],*param_1,param_2);
    FUN_14179078e(param_1,0);
    param_1[1] = local_28;
    *(undefined4 *)(param_1 + 2) = local_20;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14743d4c0 FUN_14743d4c0 body=131 status=ok
// SIG undefined FUN_14743d4c0(void)

void FUN_14743d4c0(ulonglong *param_1)

{
  FUN_14743d544();
  FUN_14743762e(param_1 + 9);
  FUN_147437e8c(param_1 + 7);
  if (param_1[5] != 0 && (param_1[5] & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0 && (param_1[3] & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0 && (param_1[1] & 1) == 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0 || (*param_1 & 1) != 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14743d544 FUN_14743d544 body=198 status=ok
// SIG undefined FUN_14743d544(void)

void FUN_14743d544(ulonglong *param_1)

{
  ulonglong uVar1;
  void *pvVar2;
  ulonglong uVar3;
  void *_Dst;
  longlong lVar4;
  longlong lVar5;
  
  FUN_14743dc8a();
  if (0 < (int)param_1[8]) {
    lVar4 = 0;
    lVar5 = 0;
    do {
      uVar1 = param_1[7];
      uVar3 = ((longlong)uVar1 >> 0x18) + (longlong)(param_1 + 7);
      if ((uVar1 & 1) == 0) {
        uVar3 = uVar1;
      }
      FUN_1474338e6(uVar3 + lVar4,0);
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 8;
    } while (lVar5 < (int)param_1[8]);
  }
  FUN_14743dc46(param_1 + 7);
  *(undefined4 *)(param_1 + 4) = 0;
  if (*(int *)((longlong)param_1 + 0x24) != 0) {
    FUN_147440702(param_1 + 3);
  }
  *(undefined4 *)(param_1 + 6) = 0;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    FUN_141067c74(param_1 + 5,0);
  }
  if (*(int *)((longlong)param_1 + 0x14) != 0) {
    pvVar2 = (void *)*param_1;
    _Dst = (void *)(((longlong)pvVar2 >> 0x18) + (longlong)param_1);
    if (((ulonglong)pvVar2 & 1) == 0) {
      _Dst = pvVar2;
    }
    memset(_Dst,(int)CONCAT71((int7)((ulonglong)pvVar2 >> 8),0xff),
           (ulonglong)((int)param_1[2] * 4 + 4));
    return;
  }
  return;
}



// FUNCTION 14743d60a FUN_14743d60a body=763 status=ok
// SIG undefined FUN_14743d60a(void)

void FUN_14743d60a(longlong param_1,longlong param_2,undefined4 *param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  ulonglong *local_b0;
  ulonglong local_a8;
  longlong local_a0;
  undefined8 *local_98;
  ulonglong *local_90;
  undefined1 local_84 [4];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined2 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (0 < *(int *)(param_1 + 0x40)) {
    local_b8 = param_1 + 0x38;
    lVar9 = 0;
    do {
      uVar2 = *(ulonglong *)(param_1 + 0x38);
      uVar3 = ((longlong)uVar2 >> 0x18) + local_b8;
      if ((uVar2 & 1) == 0) {
        uVar3 = uVar2;
      }
      puVar1 = (ulonglong *)(uVar3 + lVar9 * 8);
      uVar2 = *puVar1;
      uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)puVar1;
      if ((uVar2 & 1) == 0) {
        uVar3 = uVar2;
      }
      local_50 = FUN_144b1b8d8(*(undefined8 *)(param_1 + 0x58));
      uVar2 = *(ulonglong *)(param_1 + 0x28);
      uVar4 = ((longlong)uVar2 >> 0x18) + param_1 + 0x28;
      if ((uVar2 & 1) == 0) {
        uVar4 = uVar2;
      }
      puVar10 = (undefined8 *)
                ((longlong)(int)(*(ulonglong *)(uVar3 + 200) >> 1) * 8 +
                *(longlong *)(*(longlong *)(param_2 + 0x18) + 0x58));
      if ((*(ulonglong *)(uVar3 + 200) & 1) == 0) {
        puVar10 = (undefined8 *)(uVar3 + 200);
      }
      puVar6 = (undefined8 *)
               ((longlong)(int)(*(ulonglong *)(uVar3 + 0xc0) >> 1) * 8 +
               *(longlong *)(*(longlong *)(param_2 + 0x18) + 0x28));
      if ((*(ulonglong *)(uVar3 + 0xc0) & 1) == 0) {
        puVar6 = (undefined8 *)(uVar3 + 0xc0);
      }
      local_54 = *(undefined4 *)(uVar4 + lVar9 * 4);
      local_78 = *puVar10;
      local_80 = *puVar6;
      local_70 = 0;
      local_58 = param_3[4];
      local_68 = *param_3;
      uStack_64 = param_3[1];
      uStack_60 = param_3[2];
      uStack_5c = param_3[3];
      local_98 = &local_80;
      local_90 = &local_a8;
      local_a8 = uVar3;
      local_a0 = param_2;
      FUN_14743fa0e(param_4,local_84,&local_98);
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)(param_1 + 0x40));
  }
  puVar1 = *(ulonglong **)(param_1 + 0x48);
  puVar5 = (ulonglong *)(param_1 + 0x48 + ((longlong)puVar1 >> 0x18));
  if (((ulonglong)puVar1 & 1) == 0) {
    puVar5 = puVar1;
  }
  local_b8 = param_4;
  if ((longlong)*(int *)(param_1 + 0x50) != 0) {
    local_b0 = puVar5 + *(int *)(param_1 + 0x50);
    do {
      puVar10 = (undefined8 *)*puVar5;
      puVar6 = (undefined8 *)(((longlong)puVar10 >> 0x18) + (longlong)puVar5);
      if (((ulonglong)puVar10 & 1) == 0) {
        puVar6 = puVar10;
      }
      puVar10 = puVar6 + 6;
      lVar9 = 8;
      do {
        uVar2 = *(ulonglong *)((longlong)puVar6 + lVar9);
        uVar3 = (longlong)puVar6 + lVar9 + ((longlong)uVar2 >> 0x18);
        if ((uVar2 & 1) == 0) {
          uVar3 = uVar2;
        }
        if (uVar3 != 0) {
          local_50 = FUN_144b1b8d8(*(undefined8 *)(param_1 + 0x58));
          local_54 = *(undefined4 *)puVar10;
          puVar8 = (undefined8 *)
                   ((longlong)(int)(*(ulonglong *)(uVar3 + 200) >> 1) * 8 +
                   *(longlong *)(*(longlong *)(param_2 + 0x18) + 0x58));
          if ((*(ulonglong *)(uVar3 + 200) & 1) == 0) {
            puVar8 = (undefined8 *)(uVar3 + 200);
          }
          puVar7 = (undefined8 *)
                   ((longlong)(int)(*(ulonglong *)(uVar3 + 0xc0) >> 1) * 8 +
                   *(longlong *)(*(longlong *)(param_2 + 0x18) + 0x28));
          if ((*(ulonglong *)(uVar3 + 0xc0) & 1) == 0) {
            puVar7 = (undefined8 *)(uVar3 + 0xc0);
          }
          local_78 = *puVar8;
          local_80 = *puVar7;
          local_70 = *puVar6;
          local_58 = param_3[4];
          local_68 = *param_3;
          uStack_64 = param_3[1];
          uStack_60 = param_3[2];
          uStack_5c = param_3[3];
          local_98 = &local_80;
          local_90 = &local_a8;
          local_a8 = uVar3;
          local_a0 = param_2;
          FUN_14743fa0e(local_b8,local_84,&local_98);
        }
        lVar9 = lVar9 + 8;
        puVar10 = (undefined8 *)((longlong)puVar10 + 4);
      } while (lVar9 != 0x30);
      puVar5 = puVar5 + 1;
    } while (puVar5 != local_b0);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14743d906 FUN_14743d906 body=474 status=ok
// SIG undefined FUN_14743d906(void)

void FUN_14743d906(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong ****pppplVar2;
  int iVar3;
  longlong ******pppppplVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong *puVar7;
  longlong *****ppppplVar8;
  longlong ******pppppplVar9;
  ulonglong *puVar10;
  undefined1 auStack_98 [40];
  longlong *****local_70;
  undefined8 local_68;
  longlong ***local_60;
  longlong *****local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar3 = *(int *)(param_1 + 0x40);
  if (0 < iVar3) {
    lVar6 = 0;
    do {
      uVar1 = *(ulonglong *)(param_1 + 0x38);
      uVar5 = ((longlong)uVar1 >> 0x18) + param_1 + 0x38;
      if ((uVar1 & 1) == 0) {
        uVar5 = uVar1;
      }
      puVar7 = (ulonglong *)(uVar5 + lVar6 * 8);
      pppppplVar9 = (longlong ******)*puVar7;
      pppppplVar4 = (longlong ******)(((longlong)pppppplVar9 >> 0x18) + (longlong)puVar7);
      if (((ulonglong)pppppplVar9 & 1) == 0) {
        pppppplVar4 = pppppplVar9;
      }
      if (pppppplVar4 != (longlong ******)0x0) {
        uVar1 = *(ulonglong *)(param_1 + 0x18);
        uVar5 = ((longlong)uVar1 >> 0x18) + param_1 + 0x18;
        if ((uVar1 & 1) == 0) {
          uVar5 = uVar1;
        }
        local_60 = (longlong ***)(uVar5 + lVar6 * 8);
        local_58 = (longlong *****)&local_70;
        local_70 = (longlong *****)pppppplVar4;
        local_68 = param_2;
        FUN_147440042(param_3,local_4c,&local_60);
        iVar3 = *(int *)(param_1 + 0x40);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar3);
  }
  puVar7 = *(ulonglong **)(param_1 + 0x48);
  puVar10 = (ulonglong *)(param_1 + 0x48 + ((longlong)puVar7 >> 0x18));
  if (((ulonglong)puVar7 & 1) == 0) {
    puVar10 = puVar7;
  }
  if ((longlong)*(int *)(param_1 + 0x50) != 0) {
    puVar7 = puVar10 + *(int *)(param_1 + 0x50);
    do {
      uVar1 = *puVar10;
      uVar5 = ((longlong)uVar1 >> 0x18) + (longlong)puVar10;
      if ((uVar1 & 1) == 0) {
        uVar5 = uVar1;
      }
      FUN_14743dae2(uVar5,&local_70,param_2);
      if ((longlong)(int)local_68 != 0) {
        pppppplVar4 = (longlong ******)(local_70 + (longlong)(int)local_68 * 2);
        pppppplVar9 = (longlong ******)local_70;
        do {
          pppplVar2 = (*pppppplVar9)[0x18];
          ppppplVar8 = (longlong *****)(pppppplVar9[1][3][5] + (int)((ulonglong)pppplVar2 >> 1));
          if (((ulonglong)pppplVar2 & 1) == 0) {
            ppppplVar8 = *pppppplVar9 + 0x18;
          }
          local_60 = (longlong ***)(*ppppplVar8 + 5);
          local_58 = (longlong *****)pppppplVar9;
          FUN_147440518(param_3,local_4c,&local_60);
          pppppplVar9 = pppppplVar9 + 2;
        } while (pppppplVar9 != pppppplVar4);
      }
      if ((longlong ******)local_70 != (longlong ******)0x0) {
        FUN_1400020a8(local_70);
      }
      puVar10 = puVar10 + 1;
    } while (puVar10 != puVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14743dae2 FUN_14743dae2 body=132 status=ok
// SIG undefined FUN_14743dae2(void)

longlong * FUN_14743dae2(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  lVar5 = 8;
  do {
    uVar2 = *(ulonglong *)(param_1 + lVar5);
    if (uVar2 != 0) {
      uVar4 = ((longlong)uVar2 >> 0x18) + param_1 + lVar5;
      if ((uVar2 & 1) == 0) {
        uVar4 = uVar2;
      }
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_141790964(param_2,iVar1);
      }
      lVar3 = *param_2;
      *(ulonglong *)(lVar3 + (longlong)iVar1 * 0x10) = uVar4;
      *(undefined8 *)(lVar3 + 8 + (longlong)iVar1 * 0x10) = param_3;
    }
    lVar5 = lVar5 + 8;
  } while (lVar5 != 0x30);
  return param_2;
}



// FUNCTION 14743db66 FUN_14743db66 body=223 status=ok
// SIG undefined FUN_14743db66(void)

void FUN_14743db66(longlong param_1,undefined8 param_2,longlong *param_3,int param_4)

{
  int iVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  char cVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  ulonglong *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  uVar6 = FUN_144b1b8d8(*(undefined8 *)(param_1 + 0x58));
  puVar2 = *(ulonglong **)(param_1 + 0x48);
  puVar8 = (ulonglong *)(param_1 + 0x48 + ((longlong)puVar2 >> 0x18));
  if (((ulonglong)puVar2 & 1) == 0) {
    puVar8 = puVar2;
  }
  if ((longlong)*(int *)(param_1 + 0x50) != 0) {
    lVar9 = (longlong)*(int *)(param_1 + 0x50) << 3;
    do {
      uVar3 = *puVar8;
      uVar10 = ((longlong)uVar3 >> 0x18) + (longlong)puVar8;
      if ((uVar3 & 1) == 0) {
        uVar10 = uVar3;
      }
      uVar7 = FUN_14743384a(uVar10);
      cVar5 = FUN_14322703a(uVar7,uVar6);
      if (((param_4 != 1) || (cVar5 == '\0')) &&
         ((cVar5 = FUN_14322703a(uVar7,uVar6), param_4 != 2 || (cVar5 != '\0')))) {
        iVar1 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
          FUN_14744064c(param_3,iVar1);
        }
        lVar4 = *param_3;
        *(ulonglong *)(lVar4 + (longlong)iVar1 * 0x10) = uVar10;
        *(undefined8 *)(lVar4 + 8 + (longlong)iVar1 * 0x10) = param_2;
      }
      puVar8 = puVar8 + 1;
      lVar9 = lVar9 + -8;
    } while (lVar9 != 0);
  }
  return;
}



// FUNCTION 14743dc46 FUN_14743dc46 body=67 status=ok
// SIG undefined FUN_14743dc46(void)

void FUN_14743dc46(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = *param_1;
  uVar2 = ((longlong)uVar1 >> 0x18) + (longlong)param_1;
  if ((uVar1 & 1) == 0) {
    uVar2 = uVar1;
  }
  FUN_147437d60(uVar2,(int)param_1[1]);
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    return;
  }
  FUN_1474406d2(param_1);
  return;
}



// FUNCTION 14743dc8a FUN_14743dc8a body=79 status=ok
// SIG undefined FUN_14743dc8a(void)

void FUN_14743dc8a(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar1 = *(ulonglong *)(param_1 + 0x48);
  uVar3 = param_1 + 0x48 + ((longlong)uVar1 >> 0x18);
  if ((uVar1 & 1) == 0) {
    uVar3 = uVar1;
  }
  if ((longlong)*(int *)(param_1 + 0x50) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x50) << 3;
    do {
      FUN_14743dcda(uVar3);
      uVar3 = uVar3 + 8;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  FUN_14743dd42(param_1 + 0x48);
  return;
}



// FUNCTION 14743dcda FUN_14743dcda body=103 status=ok
// SIG undefined FUN_14743dcda(void)

void FUN_14743dcda(ulonglong *param_1)

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
    lVar2 = FUN_147432386(uVar3);
    if (*(code **)(lVar2 + 0x18) != (code *)0x0) {
      (**(code **)(lVar2 + 0x18))(uVar3,lVar2,0,uVar1 & 0xffffff01);
    }
    if ((uVar1 & 1) == 0) {
      thunk_FUN_1400020a8(uVar1);
    }
    *param_1 = 0;
  }
  return;
}



// FUNCTION 14743dd42 FUN_14743dd42 body=67 status=ok
// SIG undefined FUN_14743dd42(void)

void FUN_14743dd42(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = *param_1;
  uVar2 = ((longlong)uVar1 >> 0x18) + (longlong)param_1;
  if ((uVar1 & 1) == 0) {
    uVar2 = uVar1;
  }
  FUN_147437502(uVar2,(int)param_1[1]);
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    return;
  }
  FUN_147440732(param_1);
  return;
}



// FUNCTION 14743dd86 FUN_14743dd86 body=8 status=ok
// SIG undefined FUN_14743dd86(void)

undefined8 * FUN_14743dd86(void)

{
  return &DAT_14ca9edd0;
}



// FUNCTION 14743dd8e FUN_14743dd8e body=75 status=ok
// SIG undefined FUN_14743dd8e(void)

void FUN_14743dd8e(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_1446f470e(&local_18,param_1,0);
  FUN_14743ddda(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14743ddda FUN_14743ddda body=209 status=ok
// SIG undefined FUN_14743ddda(void)

longlong FUN_14743ddda(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined *puVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = param_1;
  FUN_140b49746();
  FUN_14099931e(&local_20,&local_18);
  if (DAT_14ca9ede0 != DAT_14ca9ee0c) {
    puVar4 = &DAT_14ca9ee10;
    if (DAT_14ca9ee18 != (undefined *)0x0) {
      puVar4 = DAT_14ca9ee18;
    }
    iVar3 = *(int *)(puVar4 + (ulonglong)
                              (DAT_14ca9ee20 - 1U &
                              (int)local_20 + (int)((ulonglong)local_20 >> 0x20) * 0x17) * 4);
    if (iVar3 != -1) {
      lVar2 = 0;
      do {
        plVar1 = (longlong *)(DAT_14ca9edd8 + (longlong)iVar3 * 0x18);
        if (*plVar1 == local_20) {
          if (plVar1 == (longlong *)0x0) goto LAB_14743de16;
          lVar2 = plVar1[1];
          break;
        }
        iVar3 = (int)plVar1[2];
      } while (iVar3 != -1);
      goto LAB_14743de18;
    }
  }
LAB_14743de16:
  lVar2 = 0;
LAB_14743de18:
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 14743deac FUN_14743deac body=533 status=ok
// SIG undefined FUN_14743deac(void)

void FUN_14743deac(longlong *param_1,byte param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 *_Dst;
  uint uVar7;
  undefined1 auStack_238 [47];
  byte local_209;
  longlong local_208;
  undefined4 local_200;
  longlong local_1f8;
  ulonglong uStack_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  longlong lStack_120;
  undefined8 local_118;
  undefined4 local_110 [2];
  undefined4 local_108 [48];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_238;
  _Dst = local_108;
  memset(_Dst,0,0xc0);
  lVar4 = 0x10;
  do {
    *(undefined8 *)((longlong)local_110 + lVar4 + -8) = 0;
    *(undefined8 *)((longlong)local_110 + lVar4) = 0;
    *(undefined4 *)((longlong)local_108 + lVar4) = 0;
    lVar4 = lVar4 + 0x18;
  } while (lVar4 != 0xd0);
  local_1f8 = 0;
  uStack_1f0 = 0;
  iVar1 = (int)param_1[1];
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  local_209 = param_2 | 0xc;
  if (iVar1 != 0) {
    FUN_14744078e(&local_1f8);
    lVar4 = param_1[1];
    if ((longlong)(int)lVar4 != 0) {
      lVar2 = *param_1;
      lVar6 = 0;
      uVar7 = 0;
      do {
        lVar3 = *(longlong *)(*(longlong *)(lVar2 + lVar6) + 0x48);
        lVar5 = FUN_14743e0c4(&local_1f8);
        FUN_144a787a6(lVar5,lVar3 + 0x10);
        *(uint *)(lVar5 + 0x10) = uVar7 | 0xfffffc04;
        uVar7 = uVar7 + 0x10;
        lVar6 = lVar6 + 8;
      } while ((longlong)(int)lVar4 * 8 != lVar6);
    }
  }
  local_208 = local_1f8;
  local_200 = (undefined4)uStack_1f0;
  FUN_14743e104(&local_1e8,local_209);
  local_118 = local_1e8;
  local_110[0] = local_1e0;
  lVar4 = 0x10;
  do {
    FUN_14743f07e((longlong)local_110 + lVar4 + -8,(longlong)&local_1e8 + lVar4);
    lVar4 = lVar4 + 0x18;
  } while (lVar4 != 0xd0);
  lVar4 = 0xc0;
  do {
    if (*(longlong *)((longlong)&uStack_1f0 + lVar4) != 0) {
      FUN_1400020a8();
    }
    lVar4 = lVar4 + -0x18;
  } while (lVar4 != 0);
  *(undefined4 *)(param_3 + 1) = local_110[0];
  *param_3 = local_118;
  param_3 = param_3 + 2;
  lVar4 = 8;
  do {
    FUN_144a787a6(param_3,_Dst);
    *(undefined4 *)(param_3 + 2) = _Dst[4];
    _Dst = _Dst + 6;
    param_3 = param_3 + 3;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  FUN_147440762(local_1f8,uStack_1f0 & 0xffffffff);
  if (local_1f8 != 0) {
    FUN_1400020a8();
  }
  lVar4 = 0xc0;
  do {
    if (*(longlong *)((longlong)&lStack_120 + lVar4) != 0) {
      FUN_1400020a8();
    }
    lVar4 = lVar4 + -0x18;
  } while (lVar4 != 0);
  if ((local_48 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14743e0c4 FUN_14743e0c4 body=63 status=ok
// SIG undefined FUN_14743e0c4(void)

longlong FUN_14743e0c4(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147440804(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x18 + *param_1;
  FUN_1474407f5(lVar2);
  return lVar2;
}



// FUNCTION 14743e104 FUN_14743e104 body=160 status=ok
// SIG undefined FUN_14743e104(void)

undefined4 * FUN_14743e104(undefined4 *param_1,undefined1 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined4 *_Dst;
  uint uVar2;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = param_2;
  param_1[2] = 0;
  _Dst = param_1 + 4;
  memset(_Dst,0,0xc0);
  lVar1 = 0x10;
  do {
    *(undefined8 *)((longlong)param_1 + lVar1) = 0;
    ((undefined8 *)((longlong)param_1 + lVar1))[1] = 0;
    *(undefined4 *)((longlong)param_1 + lVar1 + 0x10) = 0;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0xd0);
  lVar1 = param_3[1];
  param_1[2] = (int)lVar1;
  if ((int)lVar1 != 0) {
    uVar2 = 0;
    do {
      lVar1 = *param_3 + (longlong)(int)uVar2 * 0x18;
      FUN_144a787a6(_Dst,lVar1);
      _Dst[4] = *(undefined4 *)(lVar1 + 0x10);
      uVar2 = uVar2 + 1;
      _Dst = _Dst + 6;
    } while (uVar2 < (uint)param_1[2]);
  }
  FUN_14743ef9a(param_1);
  return param_1;
}



// FUNCTION 14743e1a4 FUN_14743e1a4 body=38 status=ok
// SIG undefined FUN_14743e1a4(void)

undefined8 FUN_14743e1a4(undefined8 param_1,int param_2)

{
  FUN_140407864();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14743e1cc FUN_14743e1cc body=31 status=ok
// SIG undefined FUN_14743e1cc(void)

undefined8 FUN_14743e1cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14743e214 FUN_14743e214 body=93 status=ok
// SIG undefined FUN_14743e214(void)

void FUN_14743e214(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3952b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a395240;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14743e272 FUN_14743e272 body=93 status=ok
// SIG undefined FUN_14743e272(void)

void FUN_14743e272(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3952b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a395240;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14743e2d0 FUN_14743e2d0 body=126 status=ok
// SIG undefined FUN_14743e2d0(void)

void FUN_14743e2d0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a3952b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a395240;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014743e33f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14743e34e FUN_14743e34e body=93 status=ok
// SIG undefined FUN_14743e34e(void)

void FUN_14743e34e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *param_3;
  local_10 = param_3[1];
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18),&local_28,&local_18);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14743e3ae FUN_14743e3ae body=31 status=ok
// SIG undefined FUN_14743e3ae(void)

undefined8 FUN_14743e3ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14743e3f6 FUN_14743e3f6 body=93 status=ok
// SIG undefined FUN_14743e3f6(void)

void FUN_14743e3f6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a395390;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a395320;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14743e454 FUN_14743e454 body=93 status=ok
// SIG undefined FUN_14743e454(void)

void FUN_14743e454(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a395390;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a395320;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14743e4b2 FUN_14743e4b2 body=126 status=ok
// SIG undefined FUN_14743e4b2(void)

void FUN_14743e4b2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a395390;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a395320;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014743e521. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14743e530 FUN_14743e530 body=71 status=ok
// SIG undefined FUN_14743e530(void)

void FUN_14743e530(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14743e57a FUN_14743e57a body=116 status=ok
// SIG undefined FUN_14743e57a(void)

longlong FUN_14743e57a(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  int iVar1;
  void *_Src;
  
  FUN_140056680(param_1,L"Fake");
  *(undefined8 *)(param_1 + 0x10) = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 0x18) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670((undefined8 *)(param_1 + 0x10),iVar1,0);
    memcpy(*(void **)(param_1 + 0x10),_Src,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 0x20) = param_3;
  return param_1;
}



// FUNCTION 14743e5ee FUN_14743e5ee body=114 status=ok
// SIG undefined FUN_14743e5ee(void)

void FUN_14743e5ee(longlong *param_1,int param_2)

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



// FUNCTION 14743e674 FUN_14743e674 body=101 status=ok
// SIG undefined FUN_14743e674(void)

undefined8 * FUN_14743e674(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x40,8);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14a395460;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[6] = 0;
  lVar2 = param_1 + 0x10;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
  }
  FUN_144727e18(puVar1 + 2,lVar2,*(undefined4 *)(param_1 + 0x38),0);
  return puVar1 + 1;
}



// FUNCTION 14743e700 FUN_14743e700 body=29 status=ok
// SIG undefined FUN_14743e700(void)

void FUN_14743e700(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14743e71e FUN_14743e71e body=57 status=ok
// SIG undefined FUN_14743e71e(void)

undefined8 * FUN_14743e71e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a3954a0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14743e758 FUN_14743e758 body=116 status=ok
// SIG undefined FUN_14743e758(void)

void FUN_14743e758(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar3 = (longlong)param_2 * 0x20;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x1c + lVar3);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0x18 + lVar6 * 0x20);
    } while (iVar4 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar6 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + lVar3 + 0x18);
  FUN_14584004c(lVar3 + *param_1);
  FUN_14743e5ee(param_1,param_2);
  return;
}



// FUNCTION 14743e7cc FUN_14743e7cc body=111 status=ok
// SIG undefined FUN_14743e7cc(void)

int FUN_14743e7cc(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xb18));
  if ((longlong)*(int *)(param_1 + 0xa10) == 0) {
    iVar3 = 0;
  }
  else {
    lVar2 = 0;
    iVar3 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa08) + lVar2);
      if (lVar1 != 0) {
        iVar3 = iVar3 + *(int *)(lVar1 + 0x58) * 8 + *(int *)(lVar1 + 0x4c) * 4 + 0x78;
      }
      lVar2 = lVar2 + 8;
    } while ((longlong)*(int *)(param_1 + 0xa10) * 8 != lVar2);
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xb18));
  return iVar3;
}



// FUNCTION 14743e83c FUN_14743e83c body=112 status=ok
// SIG undefined FUN_14743e83c(void)

void FUN_14743e83c(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)param_1[5];
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
  plVar3 = (longlong *)param_1[3];
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
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14743e8ac FUN_14743e8ac body=52 status=ok
// SIG undefined FUN_14743e8ac(void)

void FUN_14743e8ac(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14743e8e0(param_1,param_2);
    param_1 = param_1 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return;
}



// FUNCTION 14743e8e0 FUN_14743e8e0 body=386 status=ok
// SIG undefined FUN_14743e8e0(void)

undefined8 * FUN_14743e8e0(undefined8 *param_1,undefined8 *param_2)

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
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  pvVar2 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  pvVar2 = (void *)param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 6,iVar1,0);
    memcpy((void *)param_1[6],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[8] = 0;
  iVar1 = *(int *)(param_2 + 9);
  pvVar2 = (void *)param_2[8];
  *(int *)(param_1 + 9) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar1,0);
    memcpy((void *)param_1[8],pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 14743ea62 FUN_14743ea62 body=38 status=ok
// SIG undefined FUN_14743ea62(void)

void FUN_14743ea62(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14743cb6a(param_1);
    param_1 = param_1 + 0x50;
  }
  return;
}



// FUNCTION 14743ea88 FUN_14743ea88 body=115 status=ok
// SIG undefined FUN_14743ea88(void)

void FUN_14743ea88(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x50,8);
    iVar2 = (int)(uVar1 / 0x50);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x50,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14743eafb FUN_14743eafb body=53 status=ok
// SIG undefined FUN_14743eafb(void)

void FUN_14743eafb(longlong param_1,int param_2)

{
  byte *pbVar1;
  
  if (param_2 != 0) {
    pbVar1 = (byte *)(param_1 + 0x18);
    do {
      (*(code *)(&PTR_caseD_3_14a1f7d30)[*pbVar1])(pbVar1 + -0x10);
      pbVar1 = pbVar1 + 0x28;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14743eb30 FUN_14743eb30 body=107 status=ok
// SIG undefined FUN_14743eb30(void)

undefined1 FUN_14743eb30(undefined8 param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = FUN_144a791f8(param_1,L"/Engine/Private/Platform/",0x19,1);
  if (cVar1 == '\0') {
    cVar1 = FUN_144a791f8(param_1,L"/Engine/Public/Platform/",0x18,1);
    if (cVar1 == '\0') {
      uVar2 = FUN_144a791f8(param_1,L"/Platform/",10,1);
      return uVar2;
    }
  }
  return 1;
}



// FUNCTION 14743eb9c FUN_14743eb9c body=207 status=ok
// SIG undefined FUN_14743eb9c(void)

int FUN_14743eb9c(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_14743ebe6:
      lVar10 = (longlong)iVar1 * 0x30;
      iVar3 = *(int *)(lVar4 + 8 + lVar10);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_14743ec60;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_14743ec60;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_14743ec51;
    }
  }
  return -1;
LAB_14743ec60:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_14743ec51:
  iVar1 = *(int *)(lVar4 + 0x28 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_14743ebe6;
}



// FUNCTION 14743ec6c FUN_14743ec6c body=326 status=ok
// SIG undefined FUN_14743ec6c(void)

void FUN_14743ec6c(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x2c + (longlong)iVar4 * 0x30) * 4) =
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



// FUNCTION 14743edb4 FUN_14743edb4 body=288 status=ok
// SIG undefined FUN_14743edb4(void)

void FUN_14743edb4(longlong *param_1)

{
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = param_1 + 2;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_38);
  }
  local_58 = local_38;
  local_50 = local_30;
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  local_60 = param_1;
  if (iStack_24 < (int)local_30[3]) {
    do {
      if (*(longlong *)(*local_60 + (longlong)iStack_44 * 0x30) != 0) {
        FUN_1400020a8();
      }
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_14494313c(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14743eed6 FUN_14743eed6 body=38 status=ok
// SIG undefined FUN_14743eed6(void)

undefined8 FUN_14743eed6(undefined8 param_1,int param_2)

{
  FUN_14323b29c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14743eefc FUN_14743eefc body=87 status=ok
// SIG undefined FUN_14743eefc(void)

undefined8 * FUN_14743eefc(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14a395780;
  param_1[2] = &PTR_LAB_14a395800;
  puVar2 = (undefined8 *)param_1[0xd];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  FUN_140407864(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14743ef54 FUN_14743ef54 body=32 status=ok
// SIG undefined FUN_14743ef54(void)

undefined8 FUN_14743ef54(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"InlineCode");
  return param_2;
}



// FUNCTION 14743ef9a FUN_14743ef9a body=97 status=ok
// SIG undefined FUN_14743ef9a(void)

void FUN_14743ef9a(uint *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *param_1;
  uVar1 = (uVar1 >> 2) + 0x9e3779b9 + uVar1 * 0x40 + (uint)(byte)param_1[1] ^ uVar1;
  *param_1 = (uVar1 >> 2) + 0x9e3779b9 + uVar1 * 0x40 + param_1[2] ^ uVar1;
  iVar2 = FUN_14743effb(param_1 + 4);
  uVar1 = *param_1;
  *param_1 = (uVar1 >> 2) + 0x9e3779b9 + uVar1 * 0x40 + iVar2 ^ uVar1;
  return;
}


