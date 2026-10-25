// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147bc3bf2 FUN_147bc3bf2 body=31 status=ok
// SIG undefined FUN_147bc3bf2(void)

undefined8
FUN_147bc3bf2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_147bc3d0e(param_2,param_1,param_4);
  return 0x10;
}



// FUNCTION 147bc3c2e FUN_147bc3c2e body=74 status=ok
// SIG undefined FUN_147bc3c2e(void)

void FUN_147bc3c2e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  FUN_14611f64a();
  FUN_1467ac8f2(param_1,&DAT_14caef9f0,uVar1,uVar2,param_3,param_4);
  return;
}



// FUNCTION 147bc3c78 FUN_147bc3c78 body=51 status=ok
// SIG undefined FUN_147bc3c78(void)

void FUN_147bc3c78(ulonglong *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if ((param_4 == '\0') && (*param_1 != 0 && (*param_1 & 1) == 0)) {
    FUN_1400020a8();
  }
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 147bc3cac FUN_147bc3cac body=97 status=ok
// SIG undefined FUN_147bc3cac(void)

void FUN_147bc3cac(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  FUN_14611f64a();
  FUN_1467ac78e(param_1,param_2,&DAT_14caef9f0,uVar1,0);
  FUN_146826a6c(param_2,param_1 + 8,4);
  FUN_146826a6c(param_2,param_1 + 8,4);
  return;
}



// FUNCTION 147bc3d0e FUN_147bc3d0e body=100 status=ok
// SIG undefined FUN_147bc3d0e(void)

void FUN_147bc3d0e(longlong param_1,undefined8 param_2,ulonglong *param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  *param_3 = 0;
  param_3[1] = 0;
  FUN_147bc3d72(param_3,*(undefined4 *)(param_1 + 8));
  uVar2 = *param_3;
  uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)param_3;
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2;
  }
  uVar1 = *(undefined4 *)(param_1 + 8);
  FUN_14611f64a();
  FUN_1467ac844(param_1,param_2,&DAT_14caef9f0,uVar1,uVar3);
  return;
}



// FUNCTION 147bc3d72 FUN_147bc3d72 body=59 status=ok
// SIG undefined FUN_147bc3d72(void)

void FUN_147bc3d72(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (param_2 - iVar1 != 0 && iVar1 <= param_2) {
    FUN_147bc3dae(param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 8) = param_2;
    FUN_147bc3ea2();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147bc3dae FUN_147bc3dae body=95 status=ok
// SIG undefined FUN_147bc3dae(void)

void FUN_147bc3dae(ulonglong *param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_147bc3e0e(param_1);
  }
  uVar2 = *param_1;
  uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)param_1;
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2;
  }
  memset((void *)(uVar3 + (longlong)iVar1 * 0xc),0,(longlong)(int)param_2 * 0xc);
  return;
}



// FUNCTION 147bc3e0e FUN_147bc3e0e body=147 status=ok
// SIG undefined FUN_147bc3e0e(void)

void FUN_147bc3e0e(longlong param_1,int param_2)

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
    FUN_144a7f90c(param_1,param_2,uVar5,0xc,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147bc3ea2 FUN_147bc3ea2 body=62 status=ok
// SIG undefined FUN_147bc3ea2(void)

void FUN_147bc3ea2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147bc3ee0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_144a7f90c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xc,4);
  }
  return;
}



// FUNCTION 147bc3ee0 FUN_147bc3ee0 body=112 status=ok
// SIG undefined FUN_147bc3ee0(void)

ulonglong FUN_147bc3ee0(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0xc) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147bc3f1a;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0xc,4);
      param_2 = param_2 / 0xc;
    }
  }
LAB_147bc3f1a:
  return param_2 & 0xffffffff;
}



// FUNCTION 147bc3f5e FUN_147bc3f5e body=31 status=ok
// SIG undefined FUN_147bc3f5e(void)

undefined8
FUN_147bc3f5e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_147bc407a(param_2,param_1,param_4);
  return 0x10;
}



// FUNCTION 147bc3f9a FUN_147bc3f9a body=74 status=ok
// SIG undefined FUN_147bc3f9a(void)

void FUN_147bc3f9a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  FUN_14610998c();
  FUN_1467ac8f2(param_1,&DAT_14caef980,uVar1,uVar2,param_3,param_4);
  return;
}



// FUNCTION 147bc3fe4 FUN_147bc3fe4 body=51 status=ok
// SIG undefined FUN_147bc3fe4(void)

void FUN_147bc3fe4(ulonglong *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if ((param_4 == '\0') && (*param_1 != 0 && (*param_1 & 1) == 0)) {
    FUN_1400020a8();
  }
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 147bc4018 FUN_147bc4018 body=97 status=ok
// SIG undefined FUN_147bc4018(void)

void FUN_147bc4018(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  FUN_14610998c();
  FUN_1467ac78e(param_1,param_2,&DAT_14caef980,uVar1,0);
  FUN_146826a6c(param_2,param_1 + 8,4);
  FUN_146826a6c(param_2,param_1 + 8,4);
  return;
}



// FUNCTION 147bc407a FUN_147bc407a body=100 status=ok
// SIG undefined FUN_147bc407a(void)

void FUN_147bc407a(longlong param_1,undefined8 param_2,ulonglong *param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  *param_3 = 0;
  param_3[1] = 0;
  FUN_147bc40de(param_3,*(undefined4 *)(param_1 + 8));
  uVar2 = *param_3;
  uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)param_3;
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2;
  }
  uVar1 = *(undefined4 *)(param_1 + 8);
  FUN_14610998c();
  FUN_1467ac844(param_1,param_2,&DAT_14caef980,uVar1,uVar3);
  return;
}



// FUNCTION 147bc40de FUN_147bc40de body=59 status=ok
// SIG undefined FUN_147bc40de(void)

void FUN_147bc40de(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (param_2 - iVar1 != 0 && iVar1 <= param_2) {
    FUN_147bc411a(param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 8) = param_2;
    FUN_147bc41fe();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147bc411a FUN_147bc411a body=93 status=ok
// SIG undefined FUN_147bc411a(void)

void FUN_147bc411a(ulonglong *param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_147bc4178(param_1);
  }
  uVar2 = *param_1;
  uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)param_1;
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2;
  }
  memset((void *)((longlong)iVar1 * 0x10 + uVar3),0,(longlong)(int)param_2 << 4);
  return;
}



// FUNCTION 147bc4178 FUN_147bc4178 body=132 status=ok
// SIG undefined FUN_147bc4178(void)

void FUN_147bc4178(longlong param_1,int param_2)

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
    FUN_144a7f90c(param_1,param_2,uVar5,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147bc41fe FUN_147bc41fe body=62 status=ok
// SIG undefined FUN_147bc41fe(void)

void FUN_147bc41fe(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147bc423c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_144a7f90c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,4);
  }
  return;
}



// FUNCTION 147bc423c FUN_147bc423c body=93 status=ok
// SIG undefined FUN_147bc423c(void)

ulonglong FUN_147bc423c(uint param_1,uint param_2)

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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,4);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 147bc42a8 FUN_147bc42a8 body=31 status=ok
// SIG undefined FUN_147bc42a8(void)

undefined8
FUN_147bc42a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_147bc440e(param_2,param_1,param_4);
  return 0x10;
}



// FUNCTION 147bc42f0 FUN_147bc42f0 body=51 status=ok
// SIG undefined FUN_147bc42f0(void)

void FUN_147bc42f0(ulonglong *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if ((param_4 == '\0') && (*param_1 != 0 && (*param_1 & 1) == 0)) {
    FUN_1400020a8();
  }
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 147bc4324 FUN_147bc4324 body=234 status=ok
// SIG undefined FUN_147bc4324(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147bc4324(longlong param_1,undefined8 param_2)

{
  if ((DAT_14caf1377 & 2) == 0) {
    DAT_14caf1377 = DAT_14caf1377 | 3;
    _DAT_14caf1318 = L"FScriptName";
    _DAT_14caf1330 = &LAB_147bc254a;
    _DAT_14caf1338 = &LAB_147bc2550;
    _DAT_14caf1340 = &LAB_147bc2564;
    _DAT_14caf1348 = &LAB_147bc256a;
    _DAT_14caf1350 = &LAB_147bc256e;
    _DAT_14caf1328 = &LAB_147bc2574;
    _DAT_14caf1368 = 0xc0000000c;
    _DAT_14caf1370 = 4;
    DAT_14caf1374 = 0;
  }
  FUN_1467ac78e(param_1,param_2,&DAT_14caf1310,*(undefined4 *)(param_1 + 8),0);
  FUN_146826a6c(param_2,param_1 + 8,4);
  FUN_146826a6c(param_2,param_1 + 8,4);
  return;
}



// FUNCTION 147bc440e FUN_147bc440e body=248 status=ok
// SIG undefined FUN_147bc440e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147bc440e(longlong param_1,undefined8 param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  *param_3 = 0;
  param_3[1] = 0;
  FUN_147bc4506(param_3,*(undefined4 *)(param_1 + 8),1);
  uVar1 = *param_3;
  if ((DAT_14caf1377 & 2) == 0) {
    DAT_14caf1377 = DAT_14caf1377 | 3;
    _DAT_14caf1318 = L"FScriptName";
    _DAT_14caf1330 = &LAB_147bc254a;
    _DAT_14caf1338 = &LAB_147bc2550;
    _DAT_14caf1340 = &LAB_147bc2564;
    _DAT_14caf1348 = &LAB_147bc256a;
    _DAT_14caf1350 = &LAB_147bc256e;
    _DAT_14caf1328 = &LAB_147bc2574;
    _DAT_14caf1368 = 0xc0000000c;
    _DAT_14caf1370 = 4;
    DAT_14caf1374 = 0;
  }
  uVar2 = (longlong)param_3 + ((longlong)uVar1 >> 0x18);
  if ((uVar1 & 1) == 0) {
    uVar2 = uVar1;
  }
  FUN_1467ac844(param_1,param_2,&DAT_14caf1310,*(undefined4 *)(param_1 + 8),uVar2);
  return;
}



// FUNCTION 147bc4506 FUN_147bc4506 body=66 status=ok
// SIG undefined FUN_147bc4506(void)

void FUN_147bc4506(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (param_2 - iVar1 != 0 && iVar1 <= param_2) {
    FUN_147bc454a(param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 8) = param_2, param_3 == '\x01')) {
      FUN_147bc4640();
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147bc454a FUN_147bc454a body=98 status=ok
// SIG undefined FUN_147bc454a(void)

int FUN_147bc454a(ulonglong *param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_147bc45ac(param_1);
  }
  uVar2 = *param_1;
  uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)param_1;
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2;
  }
  memset((void *)(uVar3 + (longlong)iVar1 * 0xc),0,(longlong)(int)param_2 * 0xc);
  return iVar1;
}



// FUNCTION 147bc45ac FUN_147bc45ac body=147 status=ok
// SIG undefined FUN_147bc45ac(void)

void FUN_147bc45ac(longlong param_1,int param_2)

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
    FUN_144a7f90c(param_1,param_2,uVar5,0xc,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147bc4640 FUN_147bc4640 body=63 status=ok
// SIG undefined FUN_147bc4640(void)

void FUN_147bc4640(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147bc4680(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_144a7f90c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xc,4);
  }
  return;
}



// FUNCTION 147bc4680 FUN_147bc4680 body=117 status=ok
// SIG undefined FUN_147bc4680(void)

ulonglong FUN_147bc4680(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0xc) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0xc,4);
      uVar1 = uVar1 / 0xc;
    }
  }
  return uVar1;
}



// FUNCTION 147bc46f6 FUN_147bc46f6 body=203 status=ok
// SIG undefined FUN_147bc46f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147bc46f6(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  if ((DAT_14caf1377 & 2) == 0) {
    DAT_14caf1377 = DAT_14caf1377 | 3;
    _DAT_14caf1318 = L"FScriptName";
    _DAT_14caf1330 = &LAB_147bc254a;
    _DAT_14caf1338 = &LAB_147bc2550;
    _DAT_14caf1340 = &LAB_147bc2564;
    _DAT_14caf1348 = &LAB_147bc256a;
    _DAT_14caf1350 = &LAB_147bc256e;
    _DAT_14caf1328 = &LAB_147bc2574;
    _DAT_14caf1368 = 0xc0000000c;
    _DAT_14caf1370 = 4;
    DAT_14caf1374 = 0;
  }
  FUN_1467ac8f2(param_1,&DAT_14caf1310,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                param_2,param_3);
  return;
}



// FUNCTION 147bc47d0 FUN_147bc47d0 body=31 status=ok
// SIG undefined FUN_147bc47d0(void)

undefined8
FUN_147bc47d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_147bc4be2(param_2,param_1,param_4);
  return 0x10;
}



// FUNCTION 147bc4818 FUN_147bc4818 body=51 status=ok
// SIG undefined FUN_147bc4818(void)

void FUN_147bc4818(ulonglong *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if ((param_4 == '\0') && (*param_1 != 0 && (*param_1 & 1) == 0)) {
    FUN_1400020a8();
  }
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 147bc484c FUN_147bc484c body=234 status=ok
// SIG undefined FUN_147bc484c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147bc484c(longlong param_1,undefined8 param_2)

{
  if ((DAT_14caf0caf & 2) == 0) {
    DAT_14caf0caf = DAT_14caf0caf | 3;
    _DAT_14caf0c50 = L"TMemoryImagePtr<T>";
    _DAT_14caf0c68 = &LAB_147bc4936;
    _DAT_14caf0c70 = FUN_147bc493c;
    _DAT_14caf0c78 = &LAB_147bc4952;
    _DAT_14caf0c80 = &LAB_147bc4960;
    _DAT_14caf0c88 = &LAB_147bc496e;
    _DAT_14caf0c60 = &LAB_147bc497a;
    _DAT_14caf0ca0 = 0x800000008;
    _DAT_14caf0ca8 = 8;
    DAT_14caf0cac = 0;
  }
  FUN_1467ac78e(param_1,param_2,&DAT_14caf0c48,*(undefined4 *)(param_1 + 8),0);
  FUN_146826a6c(param_2,param_1 + 8,4);
  FUN_146826a6c(param_2,param_1 + 8,4);
  return;
}



// FUNCTION 147bc493c FUN_147bc493c body=22 status=ok
// SIG undefined FUN_147bc493c(void)

undefined8
FUN_147bc493c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_147bc4a5d(param_1,param_2,param_4);
  return 8;
}



// FUNCTION 147bc4988 FUN_147bc4988 body=199 status=ok
// SIG undefined FUN_147bc4988(void)

void FUN_147bc4988(undefined8 param_1,ulonglong *param_2)

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
  FUN_14617489a();
  local_34 = 0;
  FUN_14617489a();
  local_48 = &local_34;
  FUN_14682810a(param_1,local_40,&DAT_14caef830,&DAT_14caef830);
  FUN_146828008(local_40,uVar2 - local_34,&DAT_14caef830);
  FUN_146827334(local_40);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
}



// FUNCTION 147bc4a5d FUN_147bc4a5d body=205 status=ok
// SIG undefined FUN_147bc4a5d(void)

void FUN_147bc4a5d(longlong param_1,ulonglong *param_2,longlong *param_3)

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
LAB_147bc4a86:
    lVar4 = 0;
  }
  else {
    FUN_14617489a();
    puVar3 = (undefined *)FUN_146828166(param_1,&DAT_14caef830,((uint)*param_2 >> 1 & 0x7fffff) - 1)
    ;
    if (puVar3 == (undefined *)0x0) {
      if (*(char *)(param_1 + 0x10) != '\x01') goto LAB_147bc4a86;
      FUN_14617489a();
      puVar3 = &DAT_14caef830;
    }
    uVar2 = FUN_1468264de(puVar3,&DAT_14caef830);
    lVar4 = FUN_14001cc68(*(int *)(puVar3 + 0x58) + (uint)(*(int *)(puVar3 + 0x58) == 0),0x10);
    (**(code **)(puVar3 + 0x28))(param_1,uVar5 - uVar2,puVar3,lVar4);
    lVar4 = lVar4 + (ulonglong)uVar2;
  }
  *param_3 = lVar4;
  return;
}



// FUNCTION 147bc4b2a FUN_147bc4b2a body=183 status=ok
// SIG undefined FUN_147bc4b2a(void)

void FUN_147bc4b2a(ulonglong *param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_14617489a();
  FUN_14617489a();
  uVar2 = FUN_1468264de(&DAT_14caef830,&DAT_14caef830);
  if ((*param_1 & 1) == 0) {
    FUN_146826b64(param_3,&DAT_14caef830);
  }
  else {
    FUN_146826b82(param_3,&DAT_14caef830,((uint)(*param_1 >> 1) & 0x7fffff) - 1);
  }
                    /* WARNING: Could not recover jumptable at 0x000147bc4bde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_14caef870)(uVar3 - uVar2,&DAT_14caef830,param_2,param_3);
  return;
}



// FUNCTION 147bc4be2 FUN_147bc4be2 body=245 status=ok
// SIG undefined FUN_147bc4be2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147bc4be2(longlong param_1,undefined8 param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  *param_3 = 0;
  param_3[1] = 0;
  FUN_147bc4cd8(param_3,*(undefined4 *)(param_1 + 8));
  uVar1 = *param_3;
  if ((DAT_14caf0caf & 2) == 0) {
    DAT_14caf0caf = DAT_14caf0caf | 3;
    _DAT_14caf0c50 = L"TMemoryImagePtr<T>";
    _DAT_14caf0c68 = &LAB_147bc4936;
    _DAT_14caf0c70 = FUN_147bc493c;
    _DAT_14caf0c78 = &LAB_147bc4952;
    _DAT_14caf0c80 = &LAB_147bc4960;
    _DAT_14caf0c88 = &LAB_147bc496e;
    _DAT_14caf0c60 = &LAB_147bc497a;
    _DAT_14caf0ca0 = 0x800000008;
    _DAT_14caf0ca8 = 8;
    DAT_14caf0cac = 0;
  }
  uVar2 = (longlong)param_3 + ((longlong)uVar1 >> 0x18);
  if ((uVar1 & 1) == 0) {
    uVar2 = uVar1;
  }
  FUN_1467ac844(param_1,param_2,&DAT_14caf0c48,*(undefined4 *)(param_1 + 8),uVar2);
  return;
}



// FUNCTION 147bc4cd8 FUN_147bc4cd8 body=59 status=ok
// SIG undefined FUN_147bc4cd8(void)

void FUN_147bc4cd8(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (param_2 - iVar1 != 0 && iVar1 <= param_2) {
    FUN_147bc4d14(param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 8) = param_2;
    FUN_147bc4df2();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147bc4d14 FUN_147bc4d14 body=87 status=ok
// SIG undefined FUN_147bc4d14(void)

void FUN_147bc4d14(ulonglong *param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_147bc4d6c(param_1);
  }
  uVar2 = *param_1;
  uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)param_1;
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2;
  }
  memset((void *)(uVar3 + (longlong)iVar1 * 8),0,(longlong)(int)param_2 << 3);
  return;
}



// FUNCTION 147bc4d6c FUN_147bc4d6c body=132 status=ok
// SIG undefined FUN_147bc4d6c(void)

void FUN_147bc4d6c(longlong param_1,int param_2)

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



// FUNCTION 147bc4df2 FUN_147bc4df2 body=62 status=ok
// SIG undefined FUN_147bc4df2(void)

void FUN_147bc4df2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147bc4e30(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_144a7f90c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 147bc4e30 FUN_147bc4e30 body=93 status=ok
// SIG undefined FUN_147bc4e30(void)

ulonglong FUN_147bc4e30(uint param_1,uint param_2)

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



// FUNCTION 147bc4e8e FUN_147bc4e8e body=203 status=ok
// SIG undefined FUN_147bc4e8e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147bc4e8e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  if ((DAT_14caf0caf & 2) == 0) {
    DAT_14caf0caf = DAT_14caf0caf | 3;
    _DAT_14caf0c50 = L"TMemoryImagePtr<T>";
    _DAT_14caf0c68 = &LAB_147bc4936;
    _DAT_14caf0c70 = FUN_147bc493c;
    _DAT_14caf0c78 = &LAB_147bc4952;
    _DAT_14caf0c80 = &LAB_147bc4960;
    _DAT_14caf0c88 = &LAB_147bc496e;
    _DAT_14caf0c60 = &LAB_147bc497a;
    _DAT_14caf0ca0 = 0x800000008;
    _DAT_14caf0ca8 = 8;
    DAT_14caf0cac = 0;
  }
  FUN_1467ac8f2(param_1,&DAT_14caf0c48,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                param_2,param_3);
  return;
}



// FUNCTION 147bc4fde FUN_147bc4fde body=54 status=ok
// SIG undefined FUN_147bc4fde(void)

void FUN_147bc4fde(longlong *param_1)

{
  FUN_147bc5014(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147bc5014 FUN_147bc5014 body=128 status=ok
// SIG undefined FUN_147bc5014(void)

void FUN_147bc5014(longlong param_1,int param_2)

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



// FUNCTION 147bc5096 FUN_147bc5096 body=52 status=ok
// SIG undefined FUN_147bc5096(void)

void FUN_147bc5096(longlong *param_1)

{
  FUN_147bc50ca();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147bc50ca FUN_147bc50ca body=89 status=ok
// SIG undefined FUN_147bc50ca(void)

void FUN_147bc50ca(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
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



// FUNCTION 147bc5124 FUN_147bc5124 body=142 status=ok
// SIG undefined FUN_147bc5124(void)

undefined8 FUN_147bc5124(longlong *param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (((int)param_2 < 0) || (iVar5 = (int)param_1[1], iVar5 <= (int)param_2)) {
    uVar3 = 0;
  }
  else {
    iVar4 = ~param_2 + iVar5;
    if (iVar4 != 0) {
      iVar6 = 1;
      if (iVar4 < 1) {
        iVar6 = iVar4;
      }
      memmove((void *)(*param_1 + (ulonglong)param_2 * 0x14),
              (void *)(*param_1 + (ulonglong)(uint)(iVar5 - iVar6) * 0x14),(longlong)iVar6 * 0x14);
      iVar5 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar5 + -1;
    FUN_147bc51b2(param_1);
    iVar5 = 1;
    if (3 < *(uint *)(param_1 + 1)) {
      uVar2 = (ulonglong)(*(uint *)(param_1 + 1) & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar1 & 0x1f);
    }
    FUN_14008eb94(param_1,iVar5);
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 147bc51b2 FUN_147bc51b2 body=62 status=ok
// SIG undefined FUN_147bc51b2(void)

void FUN_147bc51b2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147bc51f0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x14,4);
  }
  return;
}



// FUNCTION 147bc51f0 FUN_147bc51f0 body=112 status=ok
// SIG undefined FUN_147bc51f0(void)

ulonglong FUN_147bc51f0(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x14) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147bc522a;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x14,4);
      param_2 = param_2 / 0x14;
    }
  }
LAB_147bc522a:
  return param_2 & 0xffffffff;
}



// FUNCTION 147bc5260 FUN_147bc5260 body=44 status=ok
// SIG undefined FUN_147bc5260(void)

void FUN_147bc5260(undefined8 *param_1,undefined8 param_2)

{
  FUN_14357e34a(*param_1,param_1 + 1);
  FUN_14006fee2(*param_1,param_2,0);
  return;
}



// FUNCTION 147bc5296 FUN_147bc5296 body=12 status=ok
// SIG undefined FUN_147bc5296(void)

void FUN_147bc5296(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000147bc529f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 147bc52a2 FUN_147bc52a2 body=29 status=ok
// SIG undefined FUN_147bc52a2(void)

undefined8 FUN_147bc52a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147bc52c0 FUN_147bc52c0 body=151 status=ok
// SIG undefined FUN_147bc52c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147bc52c0(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_14357e34a(_DAT_000000a8,0xb0);
    FUN_14006fee2(_DAT_000000a8,&DAT_14ca85100,0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_14357e34a(param_1[0x15],param_1 + 0x16);
  FUN_14006fee2(param_1[0x15],&DAT_14ca85100,0);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147bc5319. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 147bc5358 FUN_147bc5358 body=142 status=ok
// SIG undefined FUN_147bc5358(void)

undefined8 FUN_147bc5358(longlong *param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (((int)param_2 < 0) || (iVar5 = (int)param_1[1], iVar5 <= (int)param_2)) {
    uVar3 = 0;
  }
  else {
    iVar4 = ~param_2 + iVar5;
    if (iVar4 != 0) {
      iVar6 = 1;
      if (iVar4 < 1) {
        iVar6 = iVar4;
      }
      memmove((void *)(*param_1 + (ulonglong)param_2 * 0x18),
              (void *)(*param_1 + (ulonglong)(uint)(iVar5 - iVar6) * 0x18),(longlong)iVar6 * 0x18);
      iVar5 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar5 + -1;
    FUN_147bc53e6(param_1);
    iVar5 = 1;
    if (3 < *(uint *)(param_1 + 1)) {
      uVar2 = (ulonglong)(*(uint *)(param_1 + 1) & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar1 & 0x1f);
    }
    FUN_14008ee6c(param_1,iVar5);
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 147bc53e6 FUN_147bc53e6 body=62 status=ok
// SIG undefined FUN_147bc53e6(void)

void FUN_147bc53e6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147bc5424(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 147bc5424 FUN_147bc5424 body=112 status=ok
// SIG undefined FUN_147bc5424(void)

ulonglong FUN_147bc5424(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147bc545e;
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
LAB_147bc545e:
  return param_2 & 0xffffffff;
}



// FUNCTION 147bc5494 FUN_147bc5494 body=44 status=ok
// SIG undefined FUN_147bc5494(void)

void FUN_147bc5494(undefined8 *param_1,undefined8 param_2)

{
  FUN_14357e582(*param_1,param_1 + 1);
  FUN_14006fee2(*param_1,param_2,0);
  return;
}



// FUNCTION 147bc54ca FUN_147bc54ca body=12 status=ok
// SIG undefined FUN_147bc54ca(void)

void FUN_147bc54ca(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000147bc54d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 147bc54d6 FUN_147bc54d6 body=29 status=ok
// SIG undefined FUN_147bc54d6(void)

undefined8 FUN_147bc54d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147bc54f4 FUN_147bc54f4 body=151 status=ok
// SIG undefined FUN_147bc54f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147bc54f4(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_14357e582(_DAT_000000a8,0xb0);
    FUN_14006fee2(_DAT_000000a8,&DAT_14ca85100,0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_14357e582(param_1[0x15],param_1 + 0x16);
  FUN_14006fee2(param_1[0x15],&DAT_14ca85100,0);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147bc554d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 147bc558c FUN_147bc558c body=138 status=ok
// SIG undefined FUN_147bc558c(void)

undefined8 FUN_147bc558c(longlong *param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (((int)param_2 < 0) || (iVar5 = (int)param_1[1], iVar5 <= (int)param_2)) {
    uVar3 = 0;
  }
  else {
    iVar4 = ~param_2 + iVar5;
    if (iVar4 != 0) {
      iVar6 = 1;
      if (iVar4 < 1) {
        iVar6 = iVar4;
      }
      memmove((void *)((ulonglong)param_2 * 0x20 + *param_1),
              (void *)((ulonglong)(uint)(iVar5 - iVar6) * 0x20 + *param_1),(longlong)iVar6 << 5);
      iVar5 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar5 + -1;
    FUN_147bc5616(param_1);
    iVar5 = 1;
    if (3 < *(uint *)(param_1 + 1)) {
      uVar2 = (ulonglong)(*(uint *)(param_1 + 1) & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar1 & 0x1f);
    }
    FUN_14008ed50(param_1,iVar5);
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 147bc5616 FUN_147bc5616 body=62 status=ok
// SIG undefined FUN_147bc5616(void)

void FUN_147bc5616(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147bc5654(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x20,4);
  }
  return;
}



// FUNCTION 147bc5654 FUN_147bc5654 body=93 status=ok
// SIG undefined FUN_147bc5654(void)

ulonglong FUN_147bc5654(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x7fffffffffffe00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 5,4);
      uVar1 = uVar1 >> 5;
    }
  }
  return uVar1;
}



// FUNCTION 147bc56b2 FUN_147bc56b2 body=44 status=ok
// SIG undefined FUN_147bc56b2(void)

void FUN_147bc56b2(undefined8 *param_1,undefined8 param_2)

{
  FUN_14357e7b6(*param_1,param_1 + 1);
  FUN_14006fee2(*param_1,param_2,0);
  return;
}



// FUNCTION 147bc56e8 FUN_147bc56e8 body=12 status=ok
// SIG undefined FUN_147bc56e8(void)

void FUN_147bc56e8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000147bc56f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 147bc56f4 FUN_147bc56f4 body=29 status=ok
// SIG undefined FUN_147bc56f4(void)

undefined8 FUN_147bc56f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147bc5712 FUN_147bc5712 body=151 status=ok
// SIG undefined FUN_147bc5712(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147bc5712(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_14357e7b6(_DAT_000000a8,0xb0);
    FUN_14006fee2(_DAT_000000a8,&DAT_14ca85100,0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_14357e7b6(param_1[0x15],param_1 + 0x16);
  FUN_14006fee2(param_1[0x15],&DAT_14ca85100,0);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147bc576b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 147bc57aa FUN_147bc57aa body=43 status=ok
// SIG undefined FUN_147bc57aa(void)

void FUN_147bc57aa(longlong *param_1)

{
  longlong *plVar1;
  
  param_1 = (longlong *)*param_1;
  if (param_1 != (longlong *)0x0) {
    LOCK();
    plVar1 = param_1 + 4;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)*plVar1 == 0) && (((char)param_1[6] == '\x01' || ((char)param_1[6] == '\0')))) {
                    /* WARNING: Could not recover jumptable at 0x000147bc57d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x28))(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 147bc57d6 FUN_147bc57d6 body=93 status=ok
// SIG undefined FUN_147bc57d6(void)

undefined1 * FUN_147bc57d6(undefined1 *param_1,undefined1 *param_2)

{
  longlong lVar1;
  
  *param_1 = *param_2;
  FUN_147bc5834(param_1 + 8,param_2 + 8);
  FUN_147bc5834(param_1 + 0x210,param_2 + 0x210);
  lVar1 = *(longlong *)(param_2 + 0x418);
  *(longlong *)(param_1 + 0x418) = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 147bc5834 FUN_147bc5834 body=89 status=ok
// SIG undefined FUN_147bc5834(void)

longlong FUN_147bc5834(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = 0;
  do {
    FUN_140501b78(param_1 + lVar1,param_2 + lVar1);
    lVar1 = lVar1 + 0x80;
  } while (lVar1 != 0x200);
  lVar1 = *(longlong *)(param_2 + 0x200);
  *(longlong *)(param_1 + 0x200) = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 147bc588e FUN_147bc588e body=132 status=ok
// SIG undefined FUN_147bc588e(void)

void FUN_147bc588e(longlong param_1,int param_2)

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



// FUNCTION 147bc5914 FUN_147bc5914 body=132 status=ok
// SIG undefined FUN_147bc5914(void)

void FUN_147bc5914(longlong param_1,int param_2)

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



// FUNCTION 147bc599a FUN_147bc599a body=29 status=ok
// SIG undefined FUN_147bc599a(void)

undefined8 FUN_147bc599a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147bc59da FUN_147bc59da body=93 status=ok
// SIG undefined FUN_147bc59da(void)

void FUN_147bc59da(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a9db9a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a9db930;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147bc5a38 FUN_147bc5a38 body=93 status=ok
// SIG undefined FUN_147bc5a38(void)

void FUN_147bc5a38(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a9db9a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a9db930;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 147bc5a96 FUN_147bc5a96 body=126 status=ok
// SIG undefined FUN_147bc5a96(void)

void FUN_147bc5a96(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a9db9a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a9db930;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147bc5b05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147bc5b14 FUN_147bc5b14 body=29 status=ok
// SIG undefined FUN_147bc5b14(void)

undefined8 FUN_147bc5b14(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  (**(code **)(param_1 + 0x18))(param_2,param_3);
  return param_2;
}



// FUNCTION 147bc5b32 FUN_147bc5b32 body=77 status=ok
// SIG undefined FUN_147bc5b32(void)

undefined8 FUN_147bc5b32(longlong param_1)

{
  undefined1 auStack_48 [40];
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(param_1 + 0x18))(local_20);
  if (local_20[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bc5b82 FUN_147bc5b82 body=69 status=ok
// SIG undefined FUN_147bc5b82(void)

void FUN_147bc5b82(longlong param_1,uint param_2)

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
  if (*(int *)(param_1 + 0x48) < iVar3 && 0 < (int)param_2 || iVar3 < *(int *)(param_1 + 0x48)) {
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_1417e1e74(param_1);
    return;
  }
  return;
}



// FUNCTION 147bc5c6a FUN_147bc5c6a body=59 status=ok
// SIG undefined FUN_147bc5c6a(void)

undefined8 FUN_147bc5c6a(longlong *param_1)

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



// FUNCTION 147bc5db0 FUN_147bc5db0 body=59 status=ok
// SIG undefined FUN_147bc5db0(void)

undefined8 FUN_147bc5db0(longlong *param_1)

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



// FUNCTION 147bc5ef6 FUN_147bc5ef6 body=59 status=ok
// SIG undefined FUN_147bc5ef6(void)

undefined8 FUN_147bc5ef6(longlong *param_1)

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



// FUNCTION 147bc6050 FUN_147bc6050 body=59 status=ok
// SIG undefined FUN_147bc6050(void)

undefined8 FUN_147bc6050(longlong *param_1)

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



// FUNCTION 147bc61a4 FUN_147bc61a4 body=59 status=ok
// SIG undefined FUN_147bc61a4(void)

undefined8 FUN_147bc61a4(longlong *param_1)

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



// FUNCTION 147bc62e0 FUN_147bc62e0 body=59 status=ok
// SIG undefined FUN_147bc62e0(void)

undefined8 FUN_147bc62e0(longlong *param_1)

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



// FUNCTION 147bc6382 FUN_147bc6382 body=131 status=ok
// SIG undefined FUN_147bc6382(void)

longlong FUN_147bc6382(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_147bc6405();
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) ||
     (((*(byte *)(param_1 + 0x28) & 4) == 0 && ((*(byte *)(param_1 + 0x2b) & 4) != 0)))) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1446efa72(param_2 + 0x40,0,0,4);
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar1 & 0x1f);
    }
    if ((0 < (int)uVar2) && (0 < iVar4)) {
      *(int *)(param_2 + 0x48) = iVar4;
      FUN_147bc67e6(param_2);
    }
  }
  return param_1;
}



// FUNCTION 147bc6405 FUN_147bc6405 body=761 status=ok
// SIG undefined FUN_147bc6405(void)

longlong * FUN_147bc6405(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  ulonglong *puVar3;
  longlong lVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  int local_54;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x18,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x18);
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar6 = local_50._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_54 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar3 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar3 + 1;
    if ((int *)puVar3[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_54,4);
      }
      else {
        FUN_14572512c(param_1,&local_54);
      }
    }
    else {
      local_54 = *(int *)*puVar3;
      *puVar3 = (ulonglong)piVar1;
    }
    local_48 = param_2 + 2;
    local_50 = (undefined8 *)&DAT_100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_50);
    }
    local_78 = local_50;
    local_70 = local_48;
    local_68 = local_40;
    uVar7 = local_68;
    local_60 = local_38;
    local_5c = local_34;
    local_68._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    local_80 = param_2;
    if (local_68._4_4_ < (int)local_48[3]) {
      iVar9 = local_68._4_4_;
      local_68 = uVar7;
      do {
        lVar4 = *local_80;
        (**(code **)(*param_1 + 0x150))(param_1,lVar4 + (longlong)iVar9 * 0x18);
        puVar8 = (undefined4 *)(lVar4 + (longlong)iVar9 * 0x18 + 8);
        puVar5 = *(undefined4 **)param_1[1];
        if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar5 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,puVar8,4);
          }
          else {
            FUN_14572512c(param_1);
          }
        }
        else {
          *puVar8 = *puVar5;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar9 = local_68._4_4_;
        uVar7 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  else {
    local_50 = (undefined8 *)((ulonglong)local_50._4_4_ << 0x20);
    puVar3 = (ulonglong *)param_1[1];
    puVar5 = (undefined4 *)*puVar3 + 1;
    if ((undefined4 *)puVar3[1] < puVar5) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_50,4);
      }
      else {
        FUN_14572512c(param_1,&local_50);
      }
    }
    else {
      local_50 = (undefined8 *)CONCAT44(uVar6,*(undefined4 *)*puVar3);
      *puVar3 = (ulonglong)puVar5;
    }
    FUN_147bc5014(param_2,(ulonglong)local_50 & 0xffffffff);
    uVar7 = local_68;
    if (0 < (int)local_50) {
      iVar9 = 0;
      do {
        FUN_147bc6700(param_2,&local_80);
        *local_78 = 0;
        puVar2 = local_78 + 1;
        *(undefined4 *)(local_78 + 1) = 0;
        *(undefined4 *)(local_78 + 2) = 0xffffffff;
        (**(code **)(*param_1 + 0x150))(param_1);
        puVar5 = *(undefined4 **)param_1[1];
        if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar5 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,puVar2,4);
          }
          else {
            FUN_14572512c(param_1,puVar2);
          }
        }
        else {
          *(undefined4 *)puVar2 = *puVar5;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        iVar9 = iVar9 + 1;
        uVar7 = local_68;
      } while (iVar9 < (int)local_50);
    }
  }
  local_68 = uVar7;
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147bc6700 FUN_147bc6700 body=230 status=ok
// SIG undefined FUN_147bc6700(void)

int * FUN_147bc6700(longlong *param_1,int *param_2)

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



// FUNCTION 147bc67e6 FUN_147bc67e6 body=474 status=ok
// SIG undefined FUN_147bc67e6(void)

void FUN_147bc67e6(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
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
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
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
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar5 = (longlong)iVar4;
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147bc69c2 FUN_147bc69c2 body=405 status=ok
// SIG undefined FUN_147bc69c2(void)

longlong * FUN_147bc69c2(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 3,(longlong)*(int *)((longlong)param_2 + 0xc) << 3
            );
  local_34 = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_34 = *(uint *)(param_2 + 1);
  }
  puVar3 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_34,4);
    }
    else {
      FUN_14572512c(param_1,&local_34);
    }
  }
  else {
    local_34 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  if (local_34 == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_1400821c8(param_2,0);
    }
  }
  else if ((((int)local_34 < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x200000 < local_34 && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_34;
    lVar4 = 0;
    lVar6 = 0;
    do {
      (**(code **)(*param_1 + 0x150))(param_1,*param_2 + lVar4);
      lVar6 = lVar6 + 1;
      lVar4 = lVar4 + 8;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_34) ||
       (FUN_1400821c8(param_2), 0 < (int)local_34)) {
      iVar5 = 0;
      do {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_14473b392(param_2,iVar2);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = 0;
        (**(code **)(*param_1 + 0x150))(param_1);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)local_34);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147bc6b58 FUN_147bc6b58 body=369 status=ok
// SIG undefined FUN_147bc6b58(void)

longlong * FUN_147bc6b58(longlong *param_1,longlong *param_2)

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
      FUN_147bc6d00(param_2,0);
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
      FUN_147bc063a(*param_2 + lVar5,param_1);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x10;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_147bc6d00(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_147bc6cca(param_2);
        FUN_147bc063a(uVar3,param_1);
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



// FUNCTION 147bc6cca FUN_147bc6cca body=53 status=ok
// SIG undefined FUN_147bc6cca(void)

longlong FUN_147bc6cca(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147bc6d60(param_1,iVar1);
  }
  return (longlong)iVar1 * 0x10 + *param_1;
}



// FUNCTION 147bc6d00 FUN_147bc6d00 body=95 status=ok
// SIG undefined FUN_147bc6d00(void)

void FUN_147bc6d00(longlong param_1,uint param_2)

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



// FUNCTION 147bc6d60 FUN_147bc6d60 body=132 status=ok
// SIG undefined FUN_147bc6d60(void)

void FUN_147bc6d60(longlong param_1,int param_2)

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



// FUNCTION 147bc6de6 FUN_147bc6de6 body=52 status=ok
// SIG undefined FUN_147bc6de6(void)

void FUN_147bc6de6(longlong *param_1)

{
  FUN_147bc6e1a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147bc6e1a FUN_147bc6e1a body=89 status=ok
// SIG undefined FUN_147bc6e1a(void)

void FUN_147bc6e1a(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14474875a(param_1,0);
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



// FUNCTION 147bc6e74 FUN_147bc6e74 body=312 status=ok
// SIG undefined FUN_147bc6e74(void)

undefined4 * FUN_147bc6e74(longlong param_1,undefined4 *param_2,ulonglong *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147bc6fae(param_1,local_48);
  uVar5 = *param_3;
  *local_40 = uVar5;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_147bc7094(param_1,uVar3,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
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
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0xc) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_147bc7182(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bc6fae FUN_147bc6fae body=229 status=ok
// SIG undefined FUN_147bc6fae(void)

int * FUN_147bc6fae(longlong *param_1,int *param_2)

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
      FUN_1446efaca(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 147bc7094 FUN_147bc7094 body=124 status=ok
// SIG undefined FUN_147bc7094(void)

undefined8 FUN_147bc7094(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        plVar1 = (longlong *)(*param_1 + (longlong)iVar2 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x10) == *param_3) {
          *plVar1 = *param_3;
          FUN_147bc7110(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = (int)plVar1[1];
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 147bc7110 FUN_147bc7110 body=114 status=ok
// SIG undefined FUN_147bc7110(void)

void FUN_147bc7110(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 4) = uVar4;
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



// FUNCTION 147bc7182 FUN_147bc7182 body=477 status=ok
// SIG undefined FUN_147bc7182(void)

void FUN_147bc7182(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
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
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
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
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar6 = (longlong)iVar4 * 0x10;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0xc + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 8 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147bc7360 FUN_147bc7360 body=52 status=ok
// SIG undefined FUN_147bc7360(void)

void FUN_147bc7360(longlong *param_1)

{
  FUN_147bc7394();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147bc7394 FUN_147bc7394 body=89 status=ok
// SIG undefined FUN_147bc7394(void)

void FUN_147bc7394(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14474875a(param_1,0);
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



// FUNCTION 147bc73ee FUN_147bc73ee body=229 status=ok
// SIG undefined FUN_147bc73ee(void)

int * FUN_147bc73ee(longlong *param_1,int *param_2)

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
      FUN_1446efaca(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 147bc74d4 FUN_147bc74d4 body=124 status=ok
// SIG undefined FUN_147bc74d4(void)

undefined8 FUN_147bc74d4(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        plVar1 = (longlong *)(*param_1 + (longlong)iVar2 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x10) == *param_3) {
          *plVar1 = *param_3;
          FUN_147bc7550(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = (int)plVar1[1];
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 147bc7550 FUN_147bc7550 body=114 status=ok
// SIG undefined FUN_147bc7550(void)

void FUN_147bc7550(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 4) = uVar4;
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



// FUNCTION 147bc75c2 FUN_147bc75c2 body=477 status=ok
// SIG undefined FUN_147bc75c2(void)

void FUN_147bc75c2(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
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
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
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
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar6 = (longlong)iVar4 * 0x10;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0xc + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 8 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147bc77a0 FUN_147bc77a0 body=312 status=ok
// SIG undefined FUN_147bc77a0(void)

undefined4 * FUN_147bc77a0(longlong param_1,undefined4 *param_2,ulonglong *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147bc73ee(param_1,local_48);
  uVar5 = *param_3;
  *local_40 = uVar5;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_147bc74d4(param_1,uVar3,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
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
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0xc) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_147bc75c2(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bc78d9 FUN_147bc78d9 body=23 status=ok
// SIG undefined FUN_147bc78d9(void)

void FUN_147bc78d9(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = 0;
  do {
    *(undefined8 *)(param_1 + lVar1 * 8) = *(undefined8 *)(param_2 + lVar1 * 8);
    lVar1 = lVar1 + 1;
  } while (param_3 != (int)lVar1);
  return;
}



// FUNCTION 147bc78f0 FUN_147bc78f0 body=132 status=ok
// SIG undefined FUN_147bc78f0(void)

void FUN_147bc78f0(longlong param_1,int param_2)

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



// FUNCTION 147bc7976 FUN_147bc7976 body=132 status=ok
// SIG undefined FUN_147bc7976(void)

void FUN_147bc7976(longlong param_1,int param_2)

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



// FUNCTION 147bc79fc FUN_147bc79fc body=201 status=ok
// SIG undefined FUN_147bc79fc(void)

void FUN_147bc79fc(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar3 = (longlong)(int)uVar1;
  if (lVar3 != 0) {
    plVar2 = (longlong *)*param_1;
    uVar4 = 0;
    bVar10 = *plVar2 == *(longlong *)*param_2;
    uVar7 = 0;
    do {
      uVar5 = uVar7 + 1;
      if ((int)(uVar7 + 1) < (int)uVar1) {
        uVar5 = uVar1;
      }
      uVar8 = uVar7;
      uVar6 = (ulonglong)uVar7;
      do {
        uVar6 = uVar6 + 1;
        uVar9 = uVar5;
        if (lVar3 <= (longlong)uVar6) break;
        uVar8 = uVar8 + 1;
        uVar9 = uVar8;
      } while (bVar10 == (plVar2[uVar6] == *(longlong *)*param_2));
      if (bVar10 == false) {
        if (uVar4 != uVar7) {
          memmove(plVar2 + (int)uVar4,plVar2 + uVar7,(longlong)(int)(uVar9 - uVar7) << 3);
        }
        uVar4 = uVar4 + (uVar9 - uVar7);
      }
      bVar10 = (bool)(bVar10 ^ 1);
      uVar7 = uVar9;
    } while ((longlong)uVar6 < lVar3);
    *(uint *)(param_1 + 1) = uVar4;
  }
  return;
}



// FUNCTION 147bc7ac5 FUN_147bc7ac5 body=203 status=ok
// SIG undefined FUN_147bc7ac5(void)

longlong * FUN_147bc7ac5(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  
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
  puVar2 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,1);
  }
  else {
    *(undefined1 *)(param_2 + 1) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar2 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,(undefined1 *)((longlong)param_2 + 5),1);
  }
  else {
    *(undefined1 *)((longlong)param_2 + 5) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  return param_1;
}



// FUNCTION 147bc7b90 FUN_147bc7b90 body=132 status=ok
// SIG undefined FUN_147bc7b90(void)

void FUN_147bc7b90(longlong param_1,int param_2)

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



// FUNCTION 147bc7c16 FUN_147bc7c16 body=236 status=ok
// SIG undefined FUN_147bc7c16(void)

int * FUN_147bc7c16(longlong *param_1,int *param_2,int *param_3,longlong *param_4,int param_5)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  longlong *plVar6;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  if (((param_3[1] != 0 || *param_3 != 0) || param_3[2] != 0) || param_3[3] != 0) {
    iVar2 = param_3[1];
    iVar3 = param_3[2];
    iVar4 = param_3[3];
    *param_2 = *param_3;
    param_2[1] = iVar2;
    param_2[2] = iVar3;
    param_2[3] = iVar4;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
  }
  local_20 = (longlong *)0x0;
  lVar1 = *param_4;
  if ((lVar1 == 0) || (*param_1 == 0)) {
LAB_147bc7cbe:
    if (param_5 == -1) goto LAB_147bc7ce8;
    plVar6 = (longlong *)FUN_140081bf9(param_1[1]);
    if (plVar6 == (longlong *)0x0) goto LAB_147bc7ce8;
  }
  else {
    local_34 = (undefined4)lVar1;
    local_30 = 0;
    local_2c = (undefined4)((ulonglong)lVar1 >> 0x20);
    local_28 = 0xffffffff;
    local_24 = 2;
    cVar5 = FUN_144ae5e76(*param_1,&local_34,&local_20,param_1);
    if ((cVar5 == '\0') || (plVar6 = local_20, local_20 == (longlong *)0x0)) goto LAB_147bc7cbe;
  }
  (**(code **)(*plVar6 + 0x388))(plVar6,param_2);
LAB_147bc7ce8:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147bc7d04 FUN_147bc7d04 body=137 status=ok
// SIG undefined FUN_147bc7d04(void)

void FUN_147bc7d04(undefined4 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_1;
  local_3c = param_1[2];
  local_48 = CONCAT44(local_48._4_4_,param_1[7]);
  FUN_147bc7c16(param_2,local_38,param_1 + 3);
  uVar1 = FUN_14026fbac();
  local_48 = param_4;
  FUN_147a95edc(uVar1,*param_2,local_38,param_3);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bc7d8e FUN_147bc7d8e body=301 status=ok
// SIG undefined FUN_147bc7d8e(void)

uint FUN_147bc7d8e(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [40];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0x38) < 1) {
    uVar6 = 0;
  }
  else {
    lVar8 = 0;
    lVar7 = 0;
    uVar6 = 0;
    do {
      uVar4 = *(ulonglong *)(param_1 + 0x30);
      uVar5 = ((longlong)uVar4 >> 0x18) + param_1 + 0x30;
      if ((uVar4 & 1) == 0) {
        uVar5 = uVar4;
      }
      FUN_144ae6af2(param_2,uVar5 + lVar8,*(undefined4 *)(uVar5 + 0x14 + lVar8),&local_50);
      plVar1 = local_50;
      if (local_50 == (longlong *)0x0) {
LAB_147bc7e3d:
        uVar4 = 0;
      }
      else {
        lVar3 = FUN_1448463c0(local_50);
        if ((lVar3 == 0) || (*(longlong *)(plVar1[0x25] + 0x10) == 0)) goto LAB_147bc7e3d;
        uVar4 = (**(code **)(*plVar1 + 0x328))(plVar1);
        if ((uVar4 & 0x3010) == 0) goto LAB_147bc7e3d;
        uVar4 = *(ulonglong *)(*(longlong *)(plVar1[0x25] + 0x10) + 0x60);
      }
      uVar2 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      uVar2 = uVar2 >> 0x10 ^ uVar2;
      uVar6 = uVar6 + uVar2 * 0x40 + (uVar2 >> 2) + 0x9e3779b9 ^ uVar2;
      lVar7 = lVar7 + 1;
      lVar8 = lVar8 + 0x1c;
    } while (lVar7 < *(int *)(param_1 + 0x38));
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bc7ec6 FUN_147bc7ec6 body=110 status=ok
// SIG undefined FUN_147bc7ec6(void)

longlong * FUN_147bc7ec6(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (0 < *(int *)(param_1 + 0x40)) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x38);
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_1446f84a2(param_2,iVar1);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = *(undefined8 *)(lVar2 + lVar3);
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x1c;
    } while (lVar4 < *(int *)(param_1 + 0x40));
  }
  return param_2;
}



// FUNCTION 147bc7f34 FUN_147bc7f34 body=110 status=ok
// SIG undefined FUN_147bc7f34(void)

longlong * FUN_147bc7f34(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (0 < *(int *)(param_1 + 0x50)) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x48);
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_1446f84a2(param_2,iVar1);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = *(undefined8 *)(lVar2 + lVar3);
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x28;
    } while (lVar4 < *(int *)(param_1 + 0x50));
  }
  return param_2;
}



// FUNCTION 147bc7fa2 FUN_147bc7fa2 body=66 status=ok
// SIG undefined FUN_147bc7fa2(void)

undefined4 FUN_147bc7fa2(longlong param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  
  if (0 < (longlong)*(int *)(param_1 + 0x40)) {
    lVar1 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x38) + lVar1) == param_2) {
        *param_3 = 1;
        return *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x18 + lVar1);
      }
      lVar1 = lVar1 + 0x1c;
    } while ((longlong)*(int *)(param_1 + 0x40) * 0x1c != lVar1);
  }
  *param_3 = 0;
  return 0;
}



// FUNCTION 147bc7fe4 FUN_147bc7fe4 body=73 status=ok
// SIG undefined FUN_147bc7fe4(void)

void FUN_147bc7fe4(longlong param_1,undefined4 *param_2,longlong param_3,undefined1 *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (0 < (longlong)*(int *)(param_1 + 0x50)) {
    lVar2 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x48) + lVar2) == param_3) {
        *param_4 = 1;
        puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x48) + 0x18 + lVar2);
        uVar3 = *puVar1;
        uVar4 = puVar1[1];
        uVar5 = puVar1[2];
        uVar6 = puVar1[3];
        goto LAB_147bc8019;
      }
      lVar2 = lVar2 + 0x28;
    } while ((longlong)*(int *)(param_1 + 0x50) * 0x28 != lVar2);
  }
  *param_4 = 0;
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0x3f800000;
LAB_147bc8019:
  *param_2 = uVar3;
  param_2[1] = uVar4;
  param_2[2] = uVar5;
  param_2[3] = uVar6;
  return;
}



// FUNCTION 147bc802e FUN_147bc802e body=141 status=ok
// SIG undefined FUN_147bc802e(void)

void FUN_147bc802e(longlong param_1,undefined8 *param_2,int *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  lVar3 = (longlong)*(int *)(param_1 + 0x40);
  if (0 < lVar3) {
    puVar2 = *(undefined8 **)(param_1 + 0x38);
    do {
      if ((((*(int *)(puVar2 + 1) == *param_3) && (*(int *)((longlong)puVar2 + 0xc) == param_3[1]))
          && (*(int *)(puVar2 + 2) == param_3[2])) &&
         (*(int *)((longlong)puVar2 + 0x14) == param_3[3])) goto LAB_147bc80ae;
      puVar2 = (undefined8 *)((longlong)puVar2 + 0x1c);
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  lVar3 = (longlong)*(int *)(param_1 + 0x50);
  if (lVar3 < 1) {
    uVar1 = 0;
  }
  else {
    puVar2 = *(undefined8 **)(param_1 + 0x48);
    uVar1 = 0;
    do {
      if (((*(int *)(puVar2 + 1) == *param_3) && (*(int *)((longlong)puVar2 + 0xc) == param_3[1]))
         && ((*(int *)(puVar2 + 2) == param_3[2] &&
             (*(int *)((longlong)puVar2 + 0x14) == param_3[3])))) goto LAB_147bc80ae;
      puVar2 = puVar2 + 5;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
LAB_147bc80b1:
  *param_2 = uVar1;
  return;
LAB_147bc80ae:
  uVar1 = *puVar2;
  goto LAB_147bc80b1;
}



// FUNCTION 147bc80bc FUN_147bc80bc body=82 status=ok
// SIG undefined FUN_147bc80bc(void)

undefined8 FUN_147bc80bc(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x2c);
  lVar2 = (longlong)*(int *)(lVar1 + 0x50);
  if (0 < lVar2) {
    plVar3 = *(longlong **)(lVar1 + 0x48);
    do {
      if (*plVar3 == param_2) {
        if (plVar3 == (longlong *)0x0) {
          return 0;
        }
        FUN_1402aef80(param_1,plVar3,param_3);
        return 1;
      }
      plVar3 = plVar3 + 5;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return 0;
}



// FUNCTION 147bc810e FUN_147bc810e body=24 status=ok
// SIG undefined FUN_147bc810e(void)

bool FUN_147bc810e(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x408))();
  return iVar1 == 1;
}



// FUNCTION 147bc8126 FUN_147bc8126 body=7 status=ok
// SIG undefined FUN_147bc8126(void)

bool FUN_147bc8126(int param_1)

{
  return param_1 == 6;
}



// FUNCTION 147bc812d FUN_147bc812d body=88 status=ok
// SIG undefined FUN_147bc812d(void)

void FUN_147bc812d(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
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
  undefined4 *puVar12;
  undefined4 *puVar13;
  
  if (0 < param_3) {
    puVar12 = (undefined4 *)(param_1 + 0x20);
    puVar13 = (undefined4 *)(param_2 + 0x30);
    do {
      uVar1 = puVar13[-0xb];
      uVar2 = puVar13[-10];
      uVar3 = puVar13[-8];
      uVar4 = puVar13[-7];
      uVar5 = puVar13[-6];
      uVar6 = puVar13[-4];
      uVar7 = puVar13[-3];
      uVar8 = puVar13[-2];
      uVar9 = *puVar13;
      uVar10 = puVar13[1];
      uVar11 = puVar13[2];
      puVar12[-8] = puVar13[-0xc];
      puVar12[-7] = uVar3;
      puVar12[-6] = uVar6;
      puVar12[-5] = uVar9;
      puVar12[-4] = uVar1;
      puVar12[-3] = uVar4;
      puVar12[-2] = uVar7;
      puVar12[-1] = uVar10;
      *puVar12 = uVar2;
      puVar12[1] = uVar5;
      puVar12[2] = uVar8;
      puVar12[3] = uVar11;
      puVar12 = puVar12 + 0xc;
      puVar13 = puVar13 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147bc8192 FUN_147bc8192 body=62 status=ok
// SIG undefined FUN_147bc8192(void)

void FUN_147bc8192(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_140019da0();
  FUN_143582bb0(param_1,param_2,param_4,param_3,lVar1 == param_4);
  return;
}



// FUNCTION 147bc81d0 FUN_147bc81d0 body=94 status=ok
// SIG undefined FUN_147bc81d0(void)

void FUN_147bc81d0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  
  plVar3 = DAT_14c8442c0;
  lVar1 = *(longlong *)(param_1 + 0x88);
  if (((lVar1 != 0) && (*(char *)(lVar1 + 0x28) != '\0')) &&
     (plVar2 = *(longlong **)(lVar1 + 0x20), plVar2 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*plVar2 + 0x20))(plVar2,lVar1);
    if (cVar4 != '\0') {
      *(longlong **)(lVar1 + 0x20) = plVar3;
      *(undefined1 *)(lVar1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x000147bc8223. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x18))(plVar3,lVar1,0);
      return;
    }
  }
  return;
}



// FUNCTION 147bc8232 FUN_147bc8232 body=95 status=ok
// SIG undefined FUN_147bc8232(void)

longlong * FUN_147bc8232(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a6c4d8();
  *param_1 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  *(undefined4 *)(param_1 + 1) = 2;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x101;
  lVar1 = FUN_144a80466();
  param_1[2] = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_1;
}



// FUNCTION 147bc82a4 FUN_147bc82a4 body=2421 status=ok
// SIG undefined FUN_147bc82a4(void)

void FUN_147bc82a4(uint param_1,uint param_2,longlong *param_3,longlong param_4,longlong param_5)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  longlong *plVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  byte *pbVar14;
  longlong *plVar15;
  ulonglong uVar16;
  bool bVar17;
  int iVar18;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong *local_70;
  longlong *local_68;
  uint local_5c;
  undefined8 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = param_4;
  if ((char)param_3[0x26] == '\x01') {
    iVar18 = *(int *)(param_5 + 0x88);
    *(uint *)(param_5 + 0x88) = iVar18 + 1U;
    if (*(uint *)(param_5 + 0x8c) < iVar18 + 1U) {
      FUN_14472e0ae(param_5,iVar18);
    }
    lVar12 = *(longlong *)(param_5 + 0x80);
    if (*(longlong *)(param_5 + 0x80) == 0) {
      lVar12 = param_5;
    }
    puVar1 = (undefined8 *)(lVar12 + (longlong)iVar18 * 0x10);
    *puVar1 = 0;
    puVar1[1] = 0;
    bVar2 = *(byte *)((longlong)param_3 + 0xdf);
    bVar3 = *(byte *)((longlong)param_3 + 0xde);
    bVar4 = *(byte *)((longlong)param_3 + 0xdc);
    iVar18 = *(int *)(local_78 + 0x88);
    *(uint *)(local_78 + 0x88) = iVar18 + 1U;
    if (*(uint *)(local_78 + 0x8c) < iVar18 + 1U) {
      FUN_14738ac8a(local_78,iVar18);
    }
    uVar16 = ((ulonglong)param_1 & 0xffff) << 0x20;
    *(ulonglong *)(local_78 + (longlong)iVar18 * 8) =
         (ulonglong)bVar4 << 8 | (ulonglong)bVar3 << 0x10 | (ulonglong)(bVar2 & 1) << 0x30 | uVar16
         | 0x8000000;
    bVar2 = *(byte *)((longlong)param_3 + 0xef);
    bVar3 = *(byte *)((longlong)param_3 + 0xee);
    bVar4 = *(byte *)((longlong)param_3 + 0xec);
    iVar18 = *(int *)(local_78 + 0x88);
    *(uint *)(local_78 + 0x88) = iVar18 + 1U;
    if (*(uint *)(local_78 + 0x8c) < iVar18 + 1U) {
      FUN_14738ac8a(local_78,iVar18);
    }
    *(ulonglong *)(local_78 + (longlong)iVar18 * 8) =
         (ulonglong)bVar4 << 8 | (ulonglong)bVar3 << 0x10 | (ulonglong)(bVar2 & 1) << 0x30 | uVar16
         | 0x9000000;
    bVar2 = *(byte *)((longlong)param_3 + 0xff);
    bVar3 = *(byte *)((longlong)param_3 + 0xfe);
    bVar4 = *(byte *)((longlong)param_3 + 0xfc);
    iVar18 = *(int *)(local_78 + 0x88);
    *(uint *)(local_78 + 0x88) = iVar18 + 1U;
    if (*(uint *)(local_78 + 0x8c) < iVar18 + 1U) {
      FUN_14738ac8a(local_78,iVar18);
    }
    *(ulonglong *)(local_78 + (longlong)iVar18 * 8) =
         (ulonglong)bVar4 << 8 | (ulonglong)bVar3 << 0x10 | (ulonglong)(bVar2 & 1) << 0x30 | uVar16
         | 0xa000000;
    bVar2 = *(byte *)((longlong)param_3 + 0x11f);
    bVar3 = *(byte *)((longlong)param_3 + 0x11e);
    bVar4 = *(byte *)((longlong)param_3 + 0x11c);
    iVar18 = *(int *)(local_78 + 0x88);
    *(uint *)(local_78 + 0x88) = iVar18 + 1U;
    if (*(uint *)(local_78 + 0x8c) < iVar18 + 1U) {
      FUN_14738ac8a(local_78,iVar18);
    }
    *(ulonglong *)(local_78 + (longlong)iVar18 * 8) =
         (ulonglong)bVar4 << 8 | (ulonglong)bVar3 << 0x10 | (ulonglong)(bVar2 & 1) << 0x30 | uVar16
         | 0xb000000;
    bVar2 = *(byte *)((longlong)param_3 + 0x12f);
    bVar3 = *(byte *)((longlong)param_3 + 0x12e);
    bVar4 = *(byte *)((longlong)param_3 + 300);
    iVar18 = *(int *)(local_78 + 0x88);
    *(uint *)(local_78 + 0x88) = iVar18 + 1U;
    if (*(uint *)(local_78 + 0x8c) < iVar18 + 1U) {
      FUN_14738ac8a(local_78,iVar18);
    }
    *(ulonglong *)(local_78 + (longlong)iVar18 * 8) =
         (ulonglong)bVar4 << 8 | (ulonglong)bVar3 << 0x10 | (ulonglong)(bVar2 & 1) << 0x30 | uVar16
         | 0xc000000;
    bVar2 = *(byte *)((longlong)param_3 + 0xcf);
    bVar3 = *(byte *)((longlong)param_3 + 0xce);
    bVar4 = *(byte *)((longlong)param_3 + 0xcc);
    iVar18 = *(int *)(local_78 + 0x88);
    *(uint *)(local_78 + 0x88) = iVar18 + 1U;
    if (*(uint *)(local_78 + 0x8c) < iVar18 + 1U) {
      FUN_14738ac8a(local_78,iVar18);
    }
    *(ulonglong *)(local_78 + (longlong)iVar18 * 8) =
         (ulonglong)bVar4 << 8 | (ulonglong)bVar3 << 0x10 | (ulonglong)(bVar2 & 1) << 0x30 | uVar16
         | 0xe000000;
    bVar2 = *(byte *)((longlong)param_3 + 0x10f);
    bVar3 = *(byte *)((longlong)param_3 + 0x10e);
    bVar4 = *(byte *)((longlong)param_3 + 0x10c);
    iVar18 = *(int *)(local_78 + 0x88);
    *(uint *)(local_78 + 0x88) = iVar18 + 1U;
    if (*(uint *)(local_78 + 0x8c) < iVar18 + 1U) {
      FUN_14738ac8a(local_78,iVar18);
    }
    *(ulonglong *)(local_78 + (longlong)iVar18 * 8) =
         (ulonglong)bVar4 << 8 | (ulonglong)bVar3 << 0x10 | (ulonglong)(bVar2 & 1) << 0x30 | uVar16
         | 0xf000000;
    iVar18 = *(int *)(param_5 + 0x88);
    *(uint *)(param_5 + 0x88) = iVar18 + 1U;
    if (*(uint *)(param_5 + 0x8c) < iVar18 + 1U) {
      FUN_14472e0ae(param_5,iVar18);
    }
    lVar12 = *(longlong *)(param_5 + 0x80);
    if (*(longlong *)(param_5 + 0x80) == 0) {
      lVar12 = param_5;
    }
    puVar1 = (undefined8 *)(lVar12 + (longlong)iVar18 * 0x10);
    *puVar1 = 0;
    puVar1[1] = 0;
    iVar18 = *(int *)(local_78 + 0x88);
    *(uint *)(local_78 + 0x88) = iVar18 + 1U;
    if (*(uint *)(local_78 + 0x8c) < iVar18 + 1U) {
      FUN_14738ac8a(local_78,iVar18);
    }
    *(ulonglong *)(local_78 + (longlong)iVar18 * 8) =
         ((ulonglong)param_2 & 0xffff) << 0x20 | 0x100000d040001;
  }
  local_58 = (undefined8 *)*param_3;
  if (local_58 != (undefined8 *)0x0) {
    bVar2 = *(byte *)((longlong)param_3 + 0xd);
    bVar3 = *(byte *)((longlong)param_3 + 0xf);
    local_50._0_7_ = CONCAT16(bVar3,(uint6)CONCAT14(bVar2,(int)param_3[1]));
    local_50 = (ulonglong)(uint7)local_50;
    bVar4 = *(byte *)((longlong)param_3 + 0xe);
    bVar5 = *(byte *)((longlong)param_3 + 0xc);
    uVar10 = FUN_14472dff0(param_5);
    iVar18 = *(int *)(local_78 + 0x88);
    *(uint *)(local_78 + 0x88) = iVar18 + 1U;
    if (*(uint *)(local_78 + 0x8c) < iVar18 + 1U) {
      FUN_14738ac8a(local_78,iVar18);
    }
    *(ulonglong *)(local_78 + (longlong)iVar18 * 8) =
         (ulonglong)uVar10 & 0xff |
         (ulonglong)bVar5 << 8 |
         (ulonglong)bVar4 << 0x10 | (ulonglong)bVar2 << 0x20 | (ulonglong)(bVar3 & 1) << 0x30;
  }
  plVar15 = param_3 + 2;
  lVar12 = 0;
  bVar9 = true;
  local_70 = param_3;
  local_68 = plVar15;
  do {
    bVar17 = bVar9;
    local_58 = (undefined8 *)plVar15[lVar12 * 2];
    if (local_58 != (undefined8 *)0x0) {
      bVar2 = (&DAT_14a9defbe)[lVar12];
      bVar3 = *(byte *)((longlong)plVar15 + lVar12 * 0x10 + 0xd);
      bVar4 = *(byte *)((longlong)plVar15 + lVar12 * 0x10 + 0xf);
      local_50._0_7_ = CONCAT16(bVar4,(uint6)CONCAT14(bVar3,(int)plVar15[lVar12 * 2 + 1]));
      local_50 = (ulonglong)(uint7)local_50;
      bVar5 = *(byte *)((longlong)plVar15 + lVar12 * 0x10 + 0xe);
      bVar6 = *(byte *)((longlong)plVar15 + lVar12 * 0x10 + 0xc);
      uVar10 = FUN_14472dff0(param_5,&local_58);
      iVar18 = *(int *)(local_78 + 0x88);
      *(uint *)(local_78 + 0x88) = iVar18 + 1U;
      if (*(uint *)(local_78 + 0x8c) < iVar18 + 1U) {
        FUN_14738ac8a(local_78,iVar18);
      }
      *(ulonglong *)(local_78 + (longlong)iVar18 * 8) =
           (ulonglong)uVar10 & 0xff |
           (ulonglong)bVar6 << 8 |
           (ulonglong)bVar5 << 0x10 |
           (ulonglong)bVar2 << 0x18 | (ulonglong)bVar3 << 0x20 | (ulonglong)(bVar4 & 1) << 0x30;
      plVar15 = local_68;
    }
    plVar8 = local_70;
    lVar12 = 1;
    bVar9 = false;
  } while (bVar17);
  if (local_70[0x16] == 0) {
    local_70[0x16] = DAT_14ca94db0;
    *(undefined4 *)(local_70 + 0x17) = 0;
  }
  local_58 = (undefined8 *)local_70[0x11];
  if (local_58 == (undefined8 *)0x0) {
    local_50 = 0x4000000000000;
    local_58 = &DAT_14ca94d98;
    uVar10 = FUN_14472dff0(param_5);
    iVar18 = *(int *)(local_78 + 0x88);
    *(uint *)(local_78 + 0x88) = iVar18 + 1U;
    if (*(uint *)(local_78 + 0x8c) < iVar18 + 1U) {
      FUN_14738ac8a(local_78,iVar18);
    }
    uVar16 = (ulonglong)(uVar10 & 0xff | 0x3080000);
  }
  else {
    bVar2 = *(byte *)((longlong)local_70 + 0x95);
    bVar3 = *(byte *)((longlong)local_70 + 0x97);
    local_50._0_7_ = CONCAT16(bVar3,(uint6)CONCAT14(bVar2,(int)local_70[0x12]));
    local_50 = (ulonglong)(uint7)local_50;
    bVar4 = *(byte *)((longlong)local_70 + 0x96);
    bVar5 = *(byte *)((longlong)local_70 + 0x94);
    uVar10 = FUN_14472dff0(param_5);
    iVar18 = *(int *)(local_78 + 0x88);
    *(uint *)(local_78 + 0x88) = iVar18 + 1U;
    if (*(uint *)(local_78 + 0x8c) < iVar18 + 1U) {
      FUN_14738ac8a(local_78,iVar18);
    }
    uVar16 = (ulonglong)uVar10 & 0xff |
             (ulonglong)bVar5 << 8 |
             (ulonglong)bVar4 << 0x10 | (ulonglong)bVar2 << 0x20 | (ulonglong)(bVar3 & 1) << 0x30 |
             0x3000000;
  }
  *(ulonglong *)(local_78 + (longlong)iVar18 * 8) = uVar16;
  local_68 = plVar8 + 6;
  iVar18 = (int)plVar8[0xe];
  if (iVar18 != 0) {
    if (0 < iVar18) {
      pbVar14 = (byte *)((longlong)local_70 + 0x3f);
      uVar10 = 0x4000000;
      lVar12 = 0;
      do {
        local_58 = *(undefined8 **)(pbVar14 + -0xf);
        bVar2 = pbVar14[-2];
        bVar3 = *pbVar14;
        local_50._0_7_ = CONCAT16(bVar3,(uint6)CONCAT14(bVar2,*(undefined4 *)(pbVar14 + -7)));
        local_50 = (ulonglong)(uint7)local_50;
        bVar4 = pbVar14[-1];
        bVar5 = pbVar14[-3];
        uVar16 = FUN_14472dff0(param_5,&local_58);
        iVar18 = *(int *)(local_78 + 0x88);
        *(uint *)(local_78 + 0x88) = iVar18 + 1U;
        if (*(uint *)(local_78 + 0x8c) < iVar18 + 1U) {
          local_5c = (uint)uVar16;
          FUN_14738ac8a(local_78,iVar18);
          uVar16 = (ulonglong)local_5c;
        }
        *(ulonglong *)(local_78 + (longlong)iVar18 * 8) =
             uVar16 & 0xff |
             (ulonglong)bVar5 << 8 |
             (ulonglong)bVar4 << 0x10 |
             (ulonglong)uVar10 | (ulonglong)bVar2 << 0x20 | (ulonglong)(bVar3 & 1) << 0x30;
        lVar12 = lVar12 + 1;
        iVar18 = (int)local_70[0xe];
        uVar10 = uVar10 + 0x1000000;
        pbVar14 = pbVar14 + 0x10;
      } while (lVar12 < iVar18);
      if (3 < iVar18) goto LAB_147bc8a80;
    }
    uVar10 = iVar18 * 0x1000000 + 0x4000000;
    iVar18 = iVar18 + -4;
    do {
      lVar12 = (longlong)(int)local_70[0xe];
      lVar13 = lVar12 * 0x10;
      local_58 = (undefined8 *)local_68[lVar12 * 2 + -2];
      bVar2 = *(byte *)((longlong)local_68 + lVar13 + -3);
      bVar3 = *(byte *)((longlong)local_68 + lVar13 + -1);
      local_50._0_7_ = CONCAT16(bVar3,(uint6)CONCAT14(bVar2,(int)local_68[lVar12 * 2 + -1]));
      local_50 = (ulonglong)(uint7)local_50;
      bVar4 = *(byte *)((longlong)local_68 + lVar13 + -2);
      bVar5 = *(byte *)((longlong)local_68 + lVar13 + -4);
      uVar11 = FUN_14472dff0(param_5,&local_58);
      iVar7 = *(int *)(local_78 + 0x88);
      *(uint *)(local_78 + 0x88) = iVar7 + 1U;
      if (*(uint *)(local_78 + 0x8c) < iVar7 + 1U) {
        FUN_14738ac8a(local_78,iVar7);
      }
      *(ulonglong *)(local_78 + (longlong)iVar7 * 8) =
           (ulonglong)uVar11 & 0xff | (ulonglong)bVar5 << 8 | (ulonglong)bVar4 << 0x10 |
           (ulonglong)uVar10 | (ulonglong)bVar2 << 0x20 | (ulonglong)(bVar3 & 1) << 0x30;
      uVar10 = uVar10 + 0x1000000;
      iVar18 = iVar18 + 1;
    } while (iVar18 != 0);
  }
LAB_147bc8a80:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147bc8c1a FUN_147bc8c1a body=296 status=ok
// SIG undefined FUN_147bc8c1a(void)

void FUN_147bc8c1a(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined1 local_a0 [136];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_18 = 0x1100000000;
  local_a8 = param_1 + 0x10;
  FUN_147bc82a4(*(undefined4 *)(param_1 + 0x274),*(undefined4 *)(param_1 + 0x278),param_1 + 0x138);
  if (2 < DAT_14c760db4) {
    *(undefined4 *)(param_1 + 0x2a0) = 0;
    lVar5 = DAT_14caf1738;
    lVar4 = *(longlong *)(param_1 + 0x290);
    if (lVar4 != DAT_14caf1738) {
      *(longlong *)(param_1 + 0x290) = DAT_14caf1738;
      if (lVar5 != 0) {
        LOCK();
        piVar1 = (int *)(lVar5 + 8);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      if (lVar4 != 0) {
        LOCK();
        puVar2 = (uint *)(lVar4 + 8);
        uVar3 = *puVar2;
        *puVar2 = *puVar2 - 1;
        UNLOCK();
        if ((uVar3 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
    lVar5 = DAT_14caf1740;
    lVar4 = *(longlong *)(param_1 + 0x298);
    if (lVar4 != DAT_14caf1740) {
      *(longlong *)(param_1 + 0x298) = DAT_14caf1740;
      if (lVar5 != 0) {
        LOCK();
        piVar1 = (int *)(lVar5 + 8);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      if (lVar4 != 0) {
        LOCK();
        puVar2 = (uint *)(lVar4 + 8);
        uVar3 = *puVar2;
        *puVar2 = *puVar2 - 1;
        UNLOCK();
        if ((uVar3 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
  }
  if (0 < *(int *)(param_1 + 0x98)) {
    FUN_1447f9616(param_1,local_a0,0);
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bc8d44 FUN_147bc8d44 body=139 status=ok
// SIG undefined FUN_147bc8d44(void)

void FUN_147bc8d44(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined1 local_a0 [128];
  longlong local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8 = local_a0;
  local_20 = 0;
  local_18 = 0x800000000;
  FUN_147bc82a4(param_2,param_3,param_4,param_5);
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bc8dd0 FUN_147bc8dd0 body=135 status=ok
// SIG undefined FUN_147bc8dd0(void)

undefined8 FUN_147bc8dd0(longlong param_1,undefined8 param_2,int param_3)

{
  if (*(uint *)(param_1 + 0x2a0) < (uint)(param_3 * 0x30)) {
    FUN_14011fb0c(param_1 + 0x290);
    FUN_140661c88(param_1 + 0x290,param_2,L"PrevTransformBuffer",0x10,param_3 * 3,1,2,0);
  }
  FUN_1401715b2(param_1 + 0x288,param_2);
  return *(undefined8 *)(param_1 + 0x2a8);
}



// FUNCTION 147bc8e60 FUN_147bc8e60 body=56 status=ok
// SIG undefined FUN_147bc8e60(void)

undefined8 * FUN_147bc8e60(undefined8 *param_1)

{
  *param_1 = 0xffffffff3f800000;
  param_1[1] = 0xffffffff3f800000;
  param_1[2] = 0x4100000000000000;
  param_1[3] = 0x42a0000000000000;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined2 *)((longlong)param_1 + 0x24) = 0x303;
  *(undefined1 *)((longlong)param_1 + 0x26) = 3;
  *(byte *)((longlong)param_1 + 0x27) = *(byte *)((longlong)param_1 + 0x27) & 0xe0;
  *(undefined2 *)(param_1 + 5) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x2a) = 0;
  return param_1;
}



// FUNCTION 147bc8ea2 FUN_147bc8ea2 body=120 status=ok
// SIG undefined FUN_147bc8ea2(void)

undefined8 * FUN_147bc8ea2(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf1880) {
    FUN_144b3d300(&DAT_14caf1880);
    if (DAT_14caf1880 == -1) {
      FUN_1446ddc76(&DAT_14caf1878,"Project",1);
      _Init_thread_footer(&DAT_14caf1880);
    }
  }
  *param_2 = DAT_14caf1878;
  return param_2;
}



// FUNCTION 147bc8f1a FUN_147bc8f1a body=120 status=ok
// SIG undefined FUN_147bc8f1a(void)

undefined8 * FUN_147bc8f1a(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf1890) {
    FUN_144b3d300(&DAT_14caf1890);
    if (DAT_14caf1890 == -1) {
      FUN_1446ddc76(&DAT_14caf1888,"Editor",1);
      _Init_thread_footer(&DAT_14caf1890);
    }
  }
  *param_2 = DAT_14caf1888;
  return param_2;
}



// FUNCTION 147bc8f92 FUN_147bc8f92 body=634 status=ok
// SIG undefined FUN_147bc8f92(void)

void FUN_147bc8f92(longlong param_1,float *param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != 0) {
    lVar8 = *(longlong *)(param_1 + 0x660);
    if ((lVar8 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar8);
      lVar8 = *(longlong *)(param_1 + 0x660);
    }
    else if (lVar8 == 0) goto LAB_147bc91b9;
    if ((lVar8 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar8);
    }
    uVar3 = FUN_14370c356(lVar8);
    FUN_143719d02(param_1,uVar3,uVar3);
    if (param_3 == '\0') {
      fVar9 = param_2[3];
      if (fVar9 <= 0.0) {
        fVar9 = 0.0;
      }
      if (1.0 <= fVar9) {
        fVar9 = 1.0;
      }
      fVar10 = param_2[2];
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
      }
      if (1.0 <= fVar10) {
        fVar10 = 1.0;
      }
      fVar11 = *param_2;
      fVar12 = param_2[1];
      if (fVar12 <= 0.0) {
        fVar12 = 0.0;
      }
      if (1.0 <= fVar12) {
        fVar12 = 1.0;
      }
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      if (1.0 <= fVar11) {
        fVar11 = 1.0;
      }
      local_64 = (undefined1)(int)(fVar10 * 255.0 + 0.5);
      local_63 = (undefined1)(int)(fVar12 * 255.0 + 0.5);
      local_62 = (undefined1)(int)(fVar11 * 255.0 + 0.5);
      local_61 = (undefined1)(int)(fVar9 * 255.0 + 0.5);
    }
    else {
      FUN_1411ab38a(param_2,&local_64);
    }
    iVar1 = *(int *)(param_1 + 0x6b0);
    if ((longlong)iVar1 != 0) {
      lVar8 = *(longlong *)(param_1 + 0x6a8);
      lVar7 = 0;
      iVar6 = 0;
      do {
        FUN_147a2f73c(param_1,iVar6);
        lVar2 = *(longlong *)(param_1 + 0x660);
        if ((lVar2 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar2);
        }
        plVar4 = (longlong *)FUN_144b2abfe(lVar2);
        uVar3 = *(undefined4 *)(*(longlong *)(*plVar4 + (longlong)iVar6 * 8) + 0x14c);
        puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
        *(undefined4 *)(puVar5 + 1) = 0xffffffff;
        *(undefined2 *)((longlong)puVar5 + 0xc) = 0x105;
        *(undefined1 *)((longlong)puVar5 + 0xe) = 0;
        puVar5[2] = 0;
        *puVar5 = &PTR_FUN_14aa61a50;
        puVar5[3] = 0;
        puVar5[4] = 0;
        puVar5[5] = 0;
        puVar5[6] = 0;
        *(undefined1 *)(puVar5 + 7) = 1;
        *(undefined8 **)(lVar8 + 0x40 + lVar7) = puVar5;
        local_78 = 1;
        FUN_147cc774a(puVar5,&local_64,uVar3,0);
        FUN_140308182(*(undefined8 *)(lVar8 + 0x40 + lVar7),0);
        iVar6 = iVar6 + 1;
        lVar7 = lVar7 + 0xa0;
      } while ((longlong)iVar1 * 0xa0 != lVar7);
    }
    FUN_1448215fa(param_1);
    *(byte *)(param_1 + 0x676) = *(byte *)(param_1 + 0x676) & 0xfd;
  }
LAB_147bc91b9:
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147bc920e FUN_147bc920e body=1326 status=ok
// SIG undefined FUN_147bc920e(void)

void FUN_147bc920e(longlong param_1,float *param_2,float *param_3,ulonglong param_4,char param_5)

{
  double dVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_1c8 [32];
  undefined1 local_1a8;
  longlong local_1a0;
  ulonglong local_198;
  undefined4 local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  void *local_178;
  ulonglong uStack_170;
  double local_160 [6];
  undefined1 local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  if (param_1 != 0) {
    lVar8 = *(longlong *)(param_1 + 0x660);
    if ((lVar8 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar8);
      lVar8 = *(longlong *)(param_1 + 0x660);
    }
    else if (lVar8 == 0) goto LAB_147bc9683;
    if ((lVar8 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar8);
    }
    FUN_144b2ab52(lVar8,&local_128);
    local_160[0] = local_128 - local_110;
    local_160[1] = local_120 - local_108;
    local_160[2] = local_118 - local_100;
    local_160[3] = local_128 + local_110;
    local_160[4] = local_120 + local_108;
    local_160[5] = local_118 + local_100;
    local_130 = 1;
    local_198 = param_4 & 0xff;
    uVar5 = (ulonglong)(uint)((int)local_198 * 8);
    fVar15 = (float)*(double *)((longlong)local_160 + uVar5);
    dVar1 = *(double *)((longlong)local_160 + uVar5 + 0x18);
    lVar8 = *(longlong *)(param_1 + 0x660);
    if ((lVar8 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar8);
    }
    uVar4 = FUN_14370c356(lVar8);
    FUN_143719d02(param_1,uVar4,uVar4);
    if ((longlong)*(int *)(param_1 + 0x6b0) != 0) {
      lVar8 = *(longlong *)(param_1 + 0x6a8);
      local_1a0 = (longlong)*(int *)(param_1 + 0x6b0) * 0xa0 + lVar8;
      iVar9 = 0;
      do {
        FUN_147a2f73c(param_1);
        lVar3 = *(longlong *)(param_1 + 0x660);
        if ((lVar3 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar3);
        }
        plVar6 = (longlong *)FUN_144b2abfe(lVar3);
        lVar3 = *(longlong *)(*plVar6 + (longlong)iVar9 * 8);
        uVar2 = *(uint *)(lVar3 + 0x14c);
        local_178 = (void *)0x0;
        uStack_170 = (ulonglong)uVar2;
        if ((longlong)(int)uVar2 != 0) {
          uVar10 = 0;
          FUN_14602b1fc(&local_178);
          memset(local_178,0,(longlong)(int)uVar2 * 4);
          do {
            fVar14 = (*(float *)((ulonglong)(*(int *)(lVar3 + 0x148) * uVar10) +
                                 *(longlong *)(lVar3 + 0x140) + local_198 * 4) - fVar15) /
                     ((float)dVar1 - fVar15);
            local_17c = (param_3[3] - param_2[3]) * fVar14 + param_2[3];
            local_180 = (param_3[2] - param_2[2]) * fVar14 + param_2[2];
            local_184 = (param_3[1] - param_2[1]) * fVar14 + param_2[1];
            local_188 = (*param_3 - *param_2) * fVar14 + *param_2;
            if (param_5 == '\0') {
              fVar14 = local_17c;
              if (local_17c <= 0.0) {
                fVar14 = 0.0;
              }
              if (1.0 <= fVar14) {
                fVar14 = 1.0;
              }
              fVar13 = local_180;
              if (local_180 <= 0.0) {
                fVar13 = 0.0;
              }
              if (1.0 <= fVar13) {
                fVar13 = 1.0;
              }
              fVar12 = local_184;
              if (local_184 <= 0.0) {
                fVar12 = 0.0;
              }
              if (1.0 <= fVar12) {
                fVar12 = 1.0;
              }
              fVar11 = local_188;
              if (local_188 <= 0.0) {
                fVar11 = 0.0;
              }
              if (1.0 <= fVar11) {
                fVar11 = 1.0;
              }
              local_18c = CONCAT13((char)(int)(fVar14 * 255.0 + 0.5),
                                   CONCAT12((char)(int)(fVar11 * 255.0 + 0.5),
                                            CONCAT11((char)(int)(fVar12 * 255.0 + 0.5),
                                                     (char)(int)(fVar13 * 255.0 + 0.5))));
            }
            else {
              FUN_1411ab38a(&local_188,&local_18c);
            }
            *(undefined4 *)((longlong)local_178 + (longlong)(int)uVar10 * 4) = local_18c;
            uVar10 = uVar10 + 1;
          } while (uVar2 != uVar10);
        }
        puVar7 = (undefined8 *)FUN_14001cc68(0x40,0x10);
        *(undefined4 *)(puVar7 + 1) = 0xffffffff;
        *(undefined2 *)((longlong)puVar7 + 0xc) = 0x105;
        *(undefined1 *)((longlong)puVar7 + 0xe) = 0;
        puVar7[2] = 0;
        *puVar7 = &PTR_FUN_14aa61a50;
        puVar7[3] = 0;
        puVar7[4] = 0;
        puVar7[5] = 0;
        puVar7[6] = 0;
        *(undefined1 *)(puVar7 + 7) = 1;
        *(undefined8 **)(lVar8 + 0x40) = puVar7;
        local_1a8 = 1;
        FUN_147cc774a(puVar7,local_178,uStack_170 & 0xffffffff,4);
        FUN_140308182(*(undefined8 *)(lVar8 + 0x40),0);
        if (local_178 != (void *)0x0) {
          FUN_1400020a8();
        }
        iVar9 = iVar9 + 1;
        lVar8 = lVar8 + 0xa0;
      } while (lVar8 != local_1a0);
    }
    FUN_1448215fa(param_1);
    *(byte *)(param_1 + 0x676) = *(byte *)(param_1 + 0x676) & 0xfd;
  }
LAB_147bc9683:
  if ((local_f0 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147bc973e FUN_147bc973e body=116 status=ok
// SIG undefined FUN_147bc973e(void)

void FUN_147bc973e(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  if (param_1 != 0) {
    if ((*(longlong *)(param_1 + 0x660) != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    else if (*(longlong *)(param_1 + 0x660) == 0) {
      return;
    }
    if ((longlong)*(int *)(param_1 + 0x6b0) != 0) {
      lVar1 = (longlong)*(int *)(param_1 + 0x6b0) * 0xa0;
      iVar2 = 0;
      do {
        FUN_147a2f73c(param_1,iVar2);
        iVar2 = iVar2 + 1;
        lVar1 = lVar1 + -0xa0;
      } while (lVar1 != 0);
    }
    FUN_1448215fa(param_1);
    *(byte *)(param_1 + 0x676) = *(byte *)(param_1 + 0x676) | 2;
  }
  return;
}



// FUNCTION 147bc97b8 FUN_147bc97b8 body=468 status=ok
// SIG undefined FUN_147bc97b8(void)

void FUN_147bc97b8(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  int local_50;
  undefined1 local_49;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  local_49 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_49);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_49);
  }
  local_50 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_50 != 0;
  puVar3 = local_48;
  if (puVar2 != (undefined1 *)0x0) {
    puVar3 = puVar2;
  }
  puVar2 = local_38;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  FUN_147bc920e(local_28,puVar2,puVar3,local_49);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bc9994 FUN_147bc9994 body=309 status=ok
// SIG undefined FUN_147bc9994(void)

void FUN_147bc9994(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_58 [36];
  int local_34;
  undefined1 local_30 [16];
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  puVar2 = local_30;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147bc8f92(local_20,puVar2,local_34 != 0);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bc9aca FUN_147bc9aca body=148 status=ok
// SIG undefined FUN_147bc9aca(void)

void FUN_147bc9aca(undefined8 param_1,longlong param_2)

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
  FUN_147bc973e(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bc9b62 FUN_147bc9b62 body=483 status=ok
// SIG undefined FUN_147bc9b62(void)

longlong * FUN_147bc9b62(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_1447712aa();
  uVar2 = FUN_1447712aa(uVar2,param_2 + 0xc);
  uVar2 = FUN_1447712aa(uVar2,param_2 + 0x18);
  FUN_1447712aa(uVar2,param_2 + 0x24);
  FUN_147bd0968(param_1,param_2 + 0x30);
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x100),4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x100) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  (**(code **)(*param_1 + 0x138))(param_1,param_2 + 0x108);
  (**(code **)(*param_1 + 0x160))(param_1,param_2 + 0x120);
  (**(code **)(*param_1 + 0x138))(param_1,param_2 + 0x110);
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x128),4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x128) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x130),4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x130) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x138),4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x138) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_14067932b(param_1,param_2 + 0x13c);
  (**(code **)(*param_1 + 0x160))(param_1,param_2 + 0x118);
  return param_1;
}



// FUNCTION 147bc9d45 FUN_147bc9d45 body=1171 status=ok
// SIG undefined FUN_147bc9d45(void)

longlong * FUN_147bc9d45(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  
  FUN_141717eee();
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x10),4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x10) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x14),4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x14) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x18),4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x18) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar3 = *(undefined2 **)param_1[1];
  if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined2 *)(param_2 + 0x1c),2);
    }
    else {
      thunk_FUN_1457251a8(param_1);
    }
  }
  else {
    *(undefined2 *)(param_2 + 0x1c) = *puVar3;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
  }
  puVar3 = *(undefined2 **)param_1[1];
  if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined2 *)(param_2 + 0x1e),2);
    }
    else {
      thunk_FUN_1457251a8(param_1);
    }
  }
  else {
    *(undefined2 *)(param_2 + 0x1e) = *puVar3;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
  }
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x20),4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x20) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x24),4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x24) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x28),4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x28) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x2c),4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x2c) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x30),4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x30) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar4 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar4 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,(undefined1 *)(param_2 + 0x34),1);
  }
  else {
    *(undefined1 *)(param_2 + 0x34) = *puVar4;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar4 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar4 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,(undefined1 *)(param_2 + 0x35),1);
  }
  else {
    *(undefined1 *)(param_2 + 0x35) = *puVar4;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar4 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar4 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,(undefined1 *)(param_2 + 0x36),1);
  }
  else {
    *(undefined1 *)(param_2 + 0x36) = *puVar4;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  pbVar1 = (byte *)(param_2 + 0x37);
  pbVar5 = *(byte **)param_1[1];
  if ((byte *)((undefined8 *)param_1[1])[1] < pbVar5 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,pbVar1,1);
  }
  else {
    *pbVar1 = *pbVar5;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x38),4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x38) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar6 = (undefined4 *)(param_2 + 0x3c);
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,puVar6,4);
    }
    else {
      FUN_14572512c(param_1,puVar6);
    }
  }
  else {
    *puVar6 = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    *pbVar1 = *pbVar1 & 0x1f;
  }
  return param_1;
}



// FUNCTION 147bca1d8 FUN_147bca1d8 body=135 status=ok
// SIG undefined FUN_147bca1d8(void)

longlong * FUN_147bca1d8(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x150))();
  FUN_147bca25f(plVar2,param_2 + 0x10);
  FUN_147bca25f(plVar2,param_2 + 0x18);
  puVar3 = (undefined4 *)(param_2 + 8);
  puVar1 = *(undefined4 **)plVar2[1];
  if ((undefined4 *)((undefined8 *)plVar2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)plVar2 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar2 + 0x170))(plVar2,puVar3,4);
    }
    else {
      FUN_14572512c(plVar2,puVar3);
    }
  }
  else {
    *puVar3 = *puVar1;
    *(longlong *)plVar2[1] = *(longlong *)plVar2[1] + 4;
  }
  return param_1;
}



// FUNCTION 147bca25f FUN_147bca25f body=84 status=ok
// SIG undefined FUN_147bca25f(void)

longlong * FUN_147bca25f(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)param_1[1];
  if ((undefined8 *)((longlong *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,8);
    }
    else {
      thunk_FUN_146821949(param_1);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
  }
  return param_1;
}



// FUNCTION 147bca2b3 FUN_147bca2b3 body=78 status=ok
// SIG undefined FUN_147bca2b3(void)

undefined8 FUN_147bca2b3(undefined8 param_1,longlong param_2)

{
  FUN_1447712aa();
  FUN_1474302aa(param_1,param_2 + 0xc);
  FUN_1474302aa(param_1,param_2 + 0x10);
  FUN_14280e057(param_1,param_2 + 0x14);
  FUN_14280e057(param_1,param_2 + 0x1c);
  return param_1;
}



// FUNCTION 147bca302 FUN_147bca302 body=79 status=ok
// SIG undefined FUN_147bca302(void)

undefined8 * FUN_147bca302(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147bd10d6(param_1,iVar1);
      FUN_147bd1149(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147bca352 FUN_147bca352 body=538 status=ok
// SIG undefined FUN_147bca352(void)

void FUN_147bca352(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  uint *puVar2;
  ulonglong *puVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_48 [40];
  uint local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 4;
  puVar3 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar3 + 1;
  if ((int *)puVar3[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
    }
    else {
      FUN_14572512c(param_2,&local_1c);
    }
  }
  else {
    local_1c = *(int *)*puVar3;
    *puVar3 = (ulonglong)piVar1;
  }
  if ((((*(byte *)(param_2 + 5) & 4) != 0) &&
      ((param_2[0xd] == 0 || (*(longlong *)(param_2[0xd] + 0x10) == 0)))) ||
     ((*(byte *)((longlong)param_2 + 0x2a) & 2) != 0)) {
    FUN_147bd12fe(param_2,param_1);
    goto LAB_147bca4d8;
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 1) << 2,
             (longlong)*(int *)((longlong)param_1 + 0xc) << 2);
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((*(byte *)(param_2 + 5) & 4) == 0) goto LAB_147bca4d8;
    local_20 = *(uint *)(param_1 + 1);
    puVar3 = (ulonglong *)param_2[1];
    puVar2 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar2) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_20,4);
      }
      else {
        FUN_14572512c(param_2,&local_20);
      }
    }
    else {
      local_20 = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar2;
    }
LAB_147bca4c5:
    (**(code **)(*param_2 + 0x170))(param_2,*param_1,(longlong)(int)local_20 << 2);
  }
  else {
    if (local_1c == 4) {
      local_20 = 0;
      puVar3 = (ulonglong *)param_2[1];
      puVar2 = (uint *)*puVar3 + 1;
      if ((uint *)puVar3[1] < puVar2) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_20,4);
        }
        else {
          FUN_14572512c(param_2,&local_20);
        }
      }
      else {
        local_20 = *(uint *)*puVar3;
        *puVar3 = (ulonglong)puVar2;
      }
      if (local_20 < 0x20000000) {
        *(undefined4 *)(param_1 + 1) = 0;
        iVar4 = 0;
        uVar5 = local_20;
        if (*(uint *)((longlong)param_1 + 0xc) != local_20) {
          FUN_147bd1566(param_1);
          iVar4 = *(int *)(param_1 + 1);
          uVar5 = *(uint *)((longlong)param_1 + 0xc);
        }
        *(uint *)(param_1 + 1) = local_20 + iVar4;
        if (uVar5 - iVar4 < local_20) {
          FUN_147bd14e0(param_1,iVar4);
        }
        goto LAB_147bca4c5;
      }
    }
    FUN_14572541c(param_2);
  }
LAB_147bca4d8:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147bca56e FUN_147bca56e body=68 status=ok
// SIG undefined FUN_147bca56e(void)

void FUN_147bca56e(undefined8 param_1,longlong *param_2)

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



// FUNCTION 147bca5bc FUN_147bca5bc body=271 status=ok
// SIG undefined FUN_147bca5bc(void)

void FUN_147bca5bc(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  switchD_143c3d4dc::caseD_38();
  local_68 = (longlong *)(param_1 + 0x88);
  local_38 = param_1 + 0x98;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if (*(int *)(param_1 + 0xb0) != 0) {
    FUN_1449c0562(&local_40);
  }
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_60 = local_40;
  local_58 = local_38;
  if (iStack_2c < *(int *)(local_38 + 0x18)) {
    do {
      FUN_140347a44(param_2,(longlong)
                            *(int *)(*(longlong *)(*local_68 + 8 + (longlong)iStack_4c * 0x18) +
                                    0x20) << 2);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < *(int *)(local_58 + 0x18));
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bca6d4 FUN_147bca6d4 body=317 status=ok
// SIG undefined FUN_147bca6d4(void)

undefined8 * FUN_147bca6d4(undefined8 *param_1)

{
  FUN_1468be472();
  *param_1 = &PTR_FUN_14a9dfea0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  FUN_1415eaa34(param_1 + 0x1e);
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x184) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0x186) = 0;
  param_1[0x31] = 0;
  param_1[0x2f] = &PTR_FUN_14aa50910;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined1 *)(param_1 + 0x36) = 1;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1c4) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0x1c6) = 0;
  param_1[0x39] = 0;
  param_1[0x37] = &PTR_FUN_14aa61a50;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined1 *)(param_1 + 0x3e) = 1;
  param_1[0x3f] = param_1;
  param_1[0x41] = 0;
  *(undefined2 *)(param_1 + 0x42) = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  return param_1;
}



// FUNCTION 147bca812 FUN_147bca812 body=337 status=ok
// SIG undefined FUN_147bca812(void)

void FUN_147bca812(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
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
  plVar1 = (longlong *)(param_1 + 0x88);
  local_28 = param_1 + 0x98;
  local_30 = 0x100000000;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (*(int *)(param_1 + 0xb0) != 0) {
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
      lVar2 = *(longlong *)(*local_70 + 8 + (longlong)iStack_54 * 0x18);
      *(undefined4 *)(lVar2 + 0x20) = 0;
      if (*(int *)(lVar2 + 0x24) != 0) {
        FUN_14480809c(lVar2 + 0x18,0);
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < *(int *)(local_60 + 0x18));
    if (((local_38 & 1) != 0) && (local_38._1_1_ == '\x01')) {
      FUN_147b970ee(local_40,(int)local_40[1] - *(int *)((longlong)local_40 + 0x34),1);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bca964 FUN_147bca964 body=163 status=ok
// SIG undefined FUN_147bca964(void)

void FUN_147bca964(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140719760(local_40,param_1,0);
  FUN_1479ed6e8(param_1,param_2,param_3);
  if (0 < *(int *)(param_1 + 0x658)) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x650) + lVar2 * 8);
      FUN_1412e3d1e(&local_50);
      *(undefined4 *)(lVar1 + 0x30) = local_50;
      *(undefined4 *)(lVar1 + 0x34) = uStack_4c;
      *(undefined4 *)(lVar1 + 0x38) = uStack_48;
      *(undefined4 *)(lVar1 + 0x3c) = uStack_44;
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0x658));
  }
  FUN_14071963e(local_40);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bcaa08 FUN_147bcaa08 body=114 status=ok
// SIG undefined FUN_147bcaa08(void)

void FUN_147bcaa08(longlong *param_1)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (longlong *)0x0;
  uStack_20 = 0;
  local_18 = 0;
  if ((~*(byte *)((longlong)param_1 + 0x9c) & 3) == 0) {
    (**(code **)(*param_1 + 0x340))();
    local_28 = param_1;
    FUN_1405edac7(param_1,0);
  }
  FUN_1405ed516(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bcaa7c FUN_147bcaa7c body=1077 status=ok
// SIG undefined FUN_147bcaa7c(void)

void FUN_147bcaa7c(longlong param_1,int param_2,int *param_3,int *param_4,double *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  double *pdVar6;
  longlong lVar7;
  ulonglong uVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  double dVar14;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 unaff_XMM11 [16];
  undefined1 auStack_118 [32];
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x628) + 0x68);
  FUN_14041c796(lVar13 + (longlong)param_2 * 0x50 + 0x30,&local_ec,&local_f8);
  if (0 < (longlong)*(int *)(param_1 + 0x648)) {
    dVar14 = (double)local_e4;
    lVar13 = lVar13 + (longlong)param_2 * 0x50;
    lVar5 = *(longlong *)(param_1 + 0x628);
    auVar20 = ZEXT816(0xc2a0000000000000);
    dVar16 = 8796093022208.0;
    bVar9 = false;
    dVar19 = 8796093022208.0;
    auVar22 = ZEXT816(0xc2a0000000000000);
    lVar7 = 0;
    do {
      lVar12 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x640) + lVar7 * 2) * 0x40;
      if (*(int *)(*(longlong *)(lVar5 + 0x28) + 0x14 + lVar12) == param_2) {
        lVar12 = lVar12 + *(longlong *)(lVar5 + 0x28);
        uVar8 = (ulonglong)*(byte *)(lVar12 + 0x36);
        if (uVar8 != 0) {
          iVar10 = *(int *)(lVar12 + 0x10);
          lVar12 = *(longlong *)(lVar5 + 0x58);
          dVar15 = dVar19;
          dVar24 = dVar16;
          do {
            unaff_XMM11 = auVar22;
            lVar11 = (longlong)*(int *)(*(longlong *)(lVar5 + 0x38) + (longlong)iVar10 * 0x18);
            dVar19 = (double)*(float *)(lVar12 + 8 + lVar11 * 0xc);
            dVar16 = (double)*(float *)(lVar12 + 4 + lVar11 * 0xc);
            dVar23 = (double)*(float *)(lVar12 + lVar11 * 0xc);
            auVar18._8_4_ = extraout_XMM0_Dc;
            auVar18._0_8_ = dVar14;
            auVar18._12_4_ = extraout_XMM0_Dd;
            auVar22._8_8_ = auVar18._8_8_;
            dVar26 = dVar14 * dVar19 + (double)local_ec * dVar23 + (double)local_e8 * dVar16;
            dVar23 = dVar19 * (double)local_f0 +
                     dVar23 * (double)local_f8 + dVar16 * (double)local_f4;
            dVar19 = dVar26;
            if (dVar15 <= dVar26) {
              dVar19 = dVar15;
            }
            dVar16 = dVar23;
            if (dVar24 <= dVar23) {
              dVar16 = dVar24;
            }
            if (dVar26 <= unaff_XMM11._0_8_) {
              dVar26 = unaff_XMM11._0_8_;
            }
            auVar22._0_8_ = dVar26;
            if (dVar23 <= auVar20._0_8_) {
              dVar23 = auVar20._0_8_;
            }
            auVar20._8_8_ = 0;
            auVar20._0_8_ = dVar23;
            iVar10 = iVar10 + 1;
            uVar8 = uVar8 - 1;
            dVar15 = dVar19;
            dVar24 = dVar16;
          } while (uVar8 != 0);
          bVar9 = true;
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 != *(int *)(param_1 + 0x648));
    if (bVar9) {
      dVar15 = (double)*(float *)(lVar13 + 0x40);
      auVar17._0_8_ = dVar19 / dVar15;
      auVar17._8_8_ = 0;
      auVar18 = roundpd(auVar17,auVar17,1);
      dVar19 = auVar18._0_8_ * dVar15;
      auVar25._0_8_ = dVar16 / dVar15;
      auVar25._8_8_ = 0;
      auVar18 = roundpd(auVar25,auVar25,1);
      dVar24 = auVar18._0_8_ * dVar15;
      auVar27._0_8_ = auVar22._0_8_ / dVar15;
      auVar27._8_8_ = 0;
      auVar18 = roundpd(unaff_XMM11,auVar27,2);
      auVar21._0_8_ = auVar20._0_8_ / dVar15;
      auVar21._8_8_ = 0;
      auVar22 = roundpd(auVar21,auVar21,2);
      dVar26 = auVar18._0_8_ * dVar15 - dVar19;
      dVar16 = dVar15;
      if (dVar15 <= dVar26) {
        dVar16 = dVar26;
      }
      dVar26 = auVar22._0_8_ * dVar15 - dVar24;
      iVar10 = -((int)ROUND(-0.5 - (dVar16 / dVar15 + dVar16 / dVar15)) >> 1);
      if (0x3ff < iVar10) {
        iVar10 = 0x400;
      }
      if (iVar10 < 5) {
        iVar10 = 4;
      }
      if (dVar15 <= dVar26) {
        dVar15 = dVar26;
      }
      *param_3 = iVar10;
      dVar26 = dVar15 / (double)*(float *)(lVar13 + 0x40);
      iVar10 = -((int)ROUND(-0.5 - (dVar26 + dVar26)) >> 1);
      if (0x3ff < iVar10) {
        iVar10 = 0x400;
      }
      if (iVar10 < 5) {
        iVar10 = 4;
      }
      *param_4 = iVar10;
      fVar1 = *(float *)(lVar13 + 0x3c);
      fVar2 = *(float *)(lVar13 + 0x38);
      fVar3 = *(float *)(lVar13 + 0x34);
      fVar4 = *(float *)(lVar13 + 0x30);
      *param_5 = (double)local_ec / dVar16;
      param_5[1] = (double)local_f8 / dVar15;
      param_5[2] = (double)fVar4;
      param_5[3] = 0.0;
      param_5[4] = (double)local_e8 / dVar16;
      param_5[5] = (double)local_f4 / dVar15;
      param_5[6] = (double)fVar3;
      param_5[7] = 0.0;
      param_5[8] = dVar14 / dVar16;
      param_5[9] = (double)local_f0 / dVar15;
      param_5[10] = (double)fVar2;
      param_5[0xb] = 0.0;
      param_5[0xc] = -dVar19 / dVar16;
      param_5[0xd] = -dVar24 / dVar15;
      param_5[0xe] = (double)-fVar1;
      param_5[0xf] = 1.0;
      goto LAB_147bcae44;
    }
  }
  *param_3 = 0;
  *param_4 = 0;
  pdVar6 = (double *)&DAT_14c846400;
  for (lVar13 = 0x10; lVar13 != 0; lVar13 = lVar13 + -1) {
    *param_5 = *pdVar6;
    pdVar6 = pdVar6 + 1;
    param_5 = param_5 + 1;
  }
LAB_147bcae44:
  if ((local_e0 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bcaeb2 FUN_147bcaeb2 body=228 status=ok
// SIG undefined FUN_147bcaeb2(void)

undefined8 FUN_147bcaeb2(longlong param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  undefined1 auStack_118 [32];
  undefined1 *local_f8;
  int local_f0;
  int local_ec;
  undefined1 local_e8 [136];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  fVar3 = 0.0;
  if (0 < *(int *)(*(longlong *)(param_1 + 0x628) + 0x70)) {
    iVar1 = 0;
    iVar2 = 0;
    do {
      local_f8 = local_e8;
      FUN_147bcaa7c(param_1,iVar1,&local_ec,&local_f0);
      iVar2 = iVar2 + local_f0 * local_ec;
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(*(longlong *)(param_1 + 0x628) + 0x70));
    fVar3 = (float)iVar2;
  }
  if (fVar3 < 0.0) {
    fVar3 = sqrtf(fVar3);
  }
  else {
    fVar3 = SQRT(fVar3);
  }
  *param_2 = (int)fVar3;
  *param_3 = (int)fVar3;
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bcaf98 FUN_147bcaf98 body=84 status=ok
// SIG undefined FUN_147bcaf98(void)

int FUN_147bcaf98(longlong *param_1)

{
  undefined1 auStack_48 [40];
  int local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x758))(param_1,&local_1c,&local_20);
  if (local_1c < local_20) {
    local_1c = local_20;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_1c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bcafee FUN_147bcafee body=223 status=ok
// SIG undefined FUN_147bcafee(void)

void FUN_147bcafee(longlong *param_1,int *param_2,int *param_3)

{
  char cVar1;
  longlong lVar2;
  uint uVar3;
  float fVar4;
  undefined1 auStack_58 [32];
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = 0;
  local_38 = 0;
  (**(code **)(*param_1 + 0x758))(param_1,&local_34,&local_38);
  *param_3 = (int)((float)local_38 * (float)local_34 * 1.33);
  lVar2 = param_1[0x16];
  if ((lVar2 != 0) || (lVar2 = FUN_1448abda6(param_1), uVar3 = DAT_14c760db4, lVar2 != 0)) {
    uVar3 = (uint)*(byte *)(lVar2 + 0x150);
  }
  cVar1 = FUN_1449277db(uVar3);
  fVar4 = (float)local_38 * (float)local_34 * 2.66;
  if (cVar1 == '\0') {
    fVar4 = fVar4 * 0.5;
  }
  *param_2 = (int)fVar4;
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147bcb0ce FUN_147bcb0ce body=41 status=ok
// SIG undefined FUN_147bcb0ce(void)

void FUN_147bcb0ce(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_14573310c();
  return;
}



// FUNCTION 147bcb0f8 FUN_147bcb0f8 body=558 status=ok
// SIG undefined FUN_147bcb0f8(void)

void FUN_147bcb0f8(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  uint *puVar2;
  ulonglong *puVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_48 [40];
  uint local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0x24;
  puVar3 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar3 + 1;
  if ((int *)puVar3[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
    }
    else {
      FUN_14572512c(param_2,&local_1c);
    }
  }
  else {
    local_1c = *(int *)*puVar3;
    *puVar3 = (ulonglong)piVar1;
  }
  if ((((*(byte *)(param_2 + 5) & 4) != 0) &&
      ((param_2[0xd] == 0 || (*(longlong *)(param_2[0xd] + 0x10) == 0)))) ||
     ((*(byte *)((longlong)param_2 + 0x2a) & 2) != 0)) {
    FUN_147bd2254(param_2,param_1);
    goto LAB_147bcb292;
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 1) * 0x24,
             (longlong)*(int *)((longlong)param_1 + 0xc) * 0x24);
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((*(byte *)(param_2 + 5) & 4) == 0) goto LAB_147bcb292;
    local_20 = *(uint *)(param_1 + 1);
    puVar3 = (ulonglong *)param_2[1];
    puVar2 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar2) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_20,4);
      }
      else {
        FUN_14572512c(param_2,&local_20);
      }
    }
    else {
      local_20 = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar2;
    }
LAB_147bcb27b:
    (**(code **)(*param_2 + 0x170))(param_2,*param_1,(longlong)(int)local_20 * 0x24);
  }
  else {
    if (local_1c == 0x24) {
      local_20 = 0;
      puVar3 = (ulonglong *)param_2[1];
      puVar2 = (uint *)*puVar3 + 1;
      if ((uint *)puVar3[1] < puVar2) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_20,4);
        }
        else {
          FUN_14572512c(param_2,&local_20);
        }
      }
      else {
        local_20 = *(uint *)*puVar3;
        *puVar3 = (ulonglong)puVar2;
      }
      if (local_20 < 0x38e38e4) {
        *(undefined4 *)(param_1 + 1) = 0;
        iVar4 = 0;
        uVar5 = local_20;
        if (*(uint *)((longlong)param_1 + 0xc) != local_20) {
          FUN_147bd2498(param_1);
          iVar4 = *(int *)(param_1 + 1);
          uVar5 = *(uint *)((longlong)param_1 + 0xc);
        }
        *(uint *)(param_1 + 1) = local_20 + iVar4;
        if (uVar5 - iVar4 < local_20) {
          FUN_147bd2404(param_1,iVar4);
        }
        goto LAB_147bcb27b;
      }
    }
    FUN_14572541c(param_2);
  }
LAB_147bcb292:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147bcb32c FUN_147bcb32c body=339 status=ok
// SIG undefined FUN_147bcb32c(void)

void FUN_147bcb32c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *(undefined8 *)(param_1 + 0x18);
  (**(code **)(*param_2 + 0x160))(param_2);
  plVar1 = (longlong *)(param_1 + 0x30);
  local_2c = 0;
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    local_2c = *(int *)(param_1 + 0x38);
    puVar3 = (ulonglong *)param_2[1];
    piVar2 = (int *)*puVar3 + 1;
    if ((int *)puVar3[1] < piVar2) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
      }
      else {
        FUN_14572512c(param_2,&local_2c);
      }
    }
    else {
      local_2c = *(int *)*puVar3;
      *puVar3 = (ulonglong)piVar2;
    }
  }
  else {
    puVar3 = (ulonglong *)param_2[1];
    piVar2 = (int *)*puVar3 + 1;
    if ((int *)puVar3[1] < piVar2) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
      }
      else {
        FUN_14572512c(param_2,&local_2c);
      }
    }
    else {
      local_2c = *(int *)*puVar3;
      *puVar3 = (ulonglong)piVar2;
    }
    FUN_147bcb99c(plVar1,local_2c);
    FUN_147bce5fc(plVar1,local_2c);
  }
  if (0 < local_2c) {
    lVar4 = 0;
    lVar5 = 0;
    do {
      FUN_147bcb485(param_2,*plVar1 + lVar4);
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x40;
    } while (lVar5 < local_2c);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147bcb485 FUN_147bcb485 body=1001 status=ok
// SIG undefined FUN_147bcb485(void)

longlong * FUN_147bcb485(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x218))(param_1,&DAT_149e3cc28);
  (**(code **)(*param_1 + 0x218))(param_1,&DAT_149e3cbb8);
  (**(code **)(*param_1 + 0x218))(param_1,&DAT_149e3ca68);
  if ((*(byte *)((longlong)param_1 + 0x2b) & 2) != 0) goto LAB_147bcb76d;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
LAB_147bcb4ed:
    if (((*(byte *)((longlong)param_1 + 0x29) & 1) == 0) ||
       (iVar7 = FUN_1448332aa(param_1,&DAT_149e3ca68), iVar7 < 8)) {
LAB_147bcb647:
      FUN_147bd2786(param_1,param_2);
      if ((*(byte *)(param_1 + 5) & 1) != 0) {
        *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_2 + 8);
      }
    }
    else {
      lVar2 = param_1[0xd];
      uVar8 = 0;
      if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x10) != 0)) {
        bVar6 = (**(code **)(**(longlong **)(lVar2 + 8) + 0xb8))(*(longlong **)(lVar2 + 8),0xd);
        uVar8 = (uint)(bVar6 ^ 1);
      }
      puVar3 = (ulonglong *)param_1[1];
      puVar1 = (uint *)*puVar3 + 1;
      if ((uint *)puVar3[1] < puVar1) {
        local_38 = CONCAT44(local_38._4_4_,uVar8);
        (**(code **)(*param_1 + 0x170))(param_1,&local_38,4);
        uVar8 = (uint)local_38;
        if (1 < (uint)local_38) {
          FUN_14572541c(param_1);
          uVar8 = (uint)local_38;
        }
      }
      else {
        uVar8 = *(uint *)*puVar3;
        *puVar3 = (ulonglong)puVar1;
      }
      if (uVar8 == 0) goto LAB_147bcb647;
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_2 + 8);
      puVar4 = *(undefined4 **)param_1[1];
      if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar4 + 1) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x10),4);
        }
        else {
          FUN_14572512c(param_1);
        }
      }
      else {
        *(undefined4 *)(param_2 + 0x10) = *puVar4;
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
      }
    }
    puVar4 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar4 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x14),4);
      }
      else {
        FUN_14572512c(param_1);
      }
    }
    else {
      *(undefined4 *)(param_2 + 0x14) = *puVar4;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    plVar9 = (longlong *)FUN_1403b0476(param_1,param_2 + 0x18);
    piVar5 = *(int **)plVar9[1];
    if ((int *)((undefined8 *)plVar9[1])[1] < piVar5 + 1) {
      local_38 = CONCAT44(local_38._4_4_,(uint)*(byte *)(param_2 + 0x28));
      (**(code **)(*plVar9 + 0x170))(plVar9,&local_38,4);
      if (1 < (uint)local_38) {
        FUN_14572541c(plVar9);
      }
      *(bool *)(param_2 + 0x28) = (uint)local_38 != 0;
    }
    else {
      *(bool *)(param_2 + 0x28) = *piVar5 != 0;
      *(longlong *)plVar9[1] = *(longlong *)plVar9[1] + 4;
    }
  }
  else {
    iVar7 = FUN_1448332aa(param_1,&DAT_149e3cc28);
    if (iVar7 < 0x17) {
      FUN_147bd2786(param_1,param_2);
      puVar4 = *(undefined4 **)param_1[1];
      if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar4 + 1) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x14),4);
        }
        else {
          FUN_14572512c(param_1);
        }
      }
      else {
        *(undefined4 *)(param_2 + 0x14) = *puVar4;
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
      }
    }
    else {
      if (((*(byte *)(param_1 + 5) & 1) == 0) ||
         (iVar7 = FUN_1448332aa(param_1,&DAT_149e3cbb8), 5 < iVar7)) goto LAB_147bcb4ed;
      FUN_147bd2786(param_1,param_2);
      puVar4 = *(undefined4 **)param_1[1];
      if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar4 + 1) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x14),4);
        }
        else {
          FUN_14572512c(param_1);
        }
      }
      else {
        *(undefined4 *)(param_2 + 0x14) = *puVar4;
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
      }
      FUN_1403b0476(param_1,param_2 + 0x18);
    }
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  if (((*(byte *)(param_1 + 5) & 1) == 0) ||
     (iVar7 = FUN_1448332aa(param_1,&DAT_149e3cbb8), 0x9d < iVar7)) {
    if ((param_1[0xd] == 0) ||
       ((*(longlong *)(param_1[0xd] + 0x10) == 0 || ((*(byte *)(param_1 + 5) & 4) == 0)))) {
      FUN_14021219d(param_1,param_2 + 0x30);
    }
    else {
      local_38 = 0;
      uStack_30 = 0;
      FUN_14021219d(param_1,&local_38);
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x38) = 0;
    if (*(int *)(param_2 + 0x3c) != 0) {
      FUN_1446f8c06(param_2 + 0x30,0);
    }
  }
LAB_147bcb76d:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bcb870 FUN_147bcb870 body=62 status=ok
// SIG undefined FUN_147bcb870(void)

undefined8 FUN_147bcb870(longlong *param_1,int param_2,undefined4 *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  if (param_2 < (int)param_1[7]) {
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x2a8))();
    lVar1 = *plVar2;
    *param_3 = *(undefined4 *)(lVar1 + 8 + (longlong)param_2 * 0x40);
    uVar3 = *(undefined8 *)(lVar1 + (longlong)param_2 * 0x40);
  }
  else {
    *param_3 = 0;
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 147bcb900 FUN_147bcb900 body=98 status=ok
// SIG undefined FUN_147bcb900(void)

longlong FUN_147bcb900(longlong *param_1,int param_2,int param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  cVar2 = (**(code **)(*param_1 + 0x2b8))();
  if (cVar2 != '\0') {
    lVar3 = param_1[6];
    lVar4 = (longlong)*(int *)(lVar3 + 0x20 + (longlong)param_2 * 0x40);
    if (lVar4 != 0) {
      lVar1 = lVar3 + 0x18;
      lVar5 = 0;
      do {
        bVar6 = *(int *)(*(longlong *)(lVar1 + (longlong)param_2 * 0x40) + lVar5) == param_3;
        lVar3 = CONCAT71((int7)((ulonglong)lVar3 >> 8),bVar6);
        if (bVar6) {
          return lVar3;
        }
        bVar6 = lVar4 * 4 + -4 != lVar5;
        lVar5 = lVar5 + 4;
      } while (bVar6);
      return lVar3;
    }
  }
  return 0;
}



// FUNCTION 147bcb962 FUN_147bcb962 body=58 status=ok
// SIG undefined FUN_147bcb962(void)

void FUN_147bcb962(longlong param_1)

{
  FUN_145aea195(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x3c) == 0) {
    return;
  }
  FUN_147bd2726(param_1 + 0x30,0);
  return;
}



// FUNCTION 147bcb99c FUN_147bcb99c body=68 status=ok
// SIG undefined FUN_147bcb99c(void)

void FUN_147bcb99c(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_145aea195(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_147bd2726(param_1,param_2);
  return;
}



// FUNCTION 147bcb9e2 FUN_147bcb9e2 body=49 status=ok
// SIG undefined FUN_147bcb9e2(void)

undefined8 FUN_147bcb9e2(longlong *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (param_2 < (int)param_1[7]) {
    plVar1 = (longlong *)(**(code **)(*param_1 + 0x2a8))();
    uVar2 = CONCAT71((int7)((ulonglong)*plVar1 >> 8),
                     1 < *(int *)(*plVar1 + 0x38 + (longlong)param_2 * 0x40));
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 147bcba14 FUN_147bcba14 body=121 status=ok
// SIG undefined FUN_147bcba14(void)

undefined8 * FUN_147bcba14(longlong *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  longlong *plVar3;
  
  if (param_3 < (int)param_1[7]) {
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x2a8))();
    lVar2 = *plVar3;
    *param_2 = 0;
    iVar1 = *(int *)(lVar2 + 0x38 + (longlong)param_3 * 0x40);
    _Src = *(void **)(lVar2 + 0x30 + (longlong)param_3 * 0x40);
    *(int *)(param_2 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_2,iVar1,0);
      memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
    }
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
  }
  return param_2;
}



// FUNCTION 147bcba8e FUN_147bcba8e body=64 status=ok
// SIG undefined FUN_147bcba8e(void)

void FUN_147bcba8e(longlong *param_1,int param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  if (param_2 < (int)param_1[7]) {
    plVar1 = (longlong *)(**(code **)(*param_1 + 0x2a0))();
    FUN_144a787a6((longlong)param_2 * 0x40 + *plVar1 + 0x30,param_3);
    return;
  }
  return;
}



// FUNCTION 147bcbace FUN_147bcbace body=77 status=ok
// SIG undefined FUN_147bcbace(void)

void FUN_147bcbace(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x30);
    lVar2 = (longlong)*(int *)(param_1 + 0x38) << 6;
    do {
      if (*(int *)(lVar1 + 8) != 0) {
        *(int *)(lVar1 + 0x10) = *(int *)(lVar1 + 8);
        *(undefined4 *)(lVar1 + 8) = 0;
        if (*(int *)(lVar1 + 0xc) != 0) {
          FUN_147bce6e2(lVar1,0);
        }
      }
      lVar1 = lVar1 + 0x40;
      lVar2 = lVar2 + -0x40;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 147bcbb1c FUN_147bcbb1c body=159 status=ok
// SIG undefined FUN_147bcbb1c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147bcbb1c(void)

{
  DAT_14caf1968 = 0;
  DAT_14caf1970 = 0;
  DAT_14caf1948 = 0;
  _DAT_14caf1950 = 0;
  _DAT_14caf1974 = 0xffffffff00000080;
  _DAT_14caf197c = 0;
  DAT_14caf1988 = 0;
  _DAT_14caf1990 = 0;
  DAT_14caf1998 = 0xffffffff;
  DAT_14caf199c = 0;
  DAT_14caf19a4 = 1;
  DAT_14caf1ab8 = 0;
  _DAT_14caf1ac0 = 0x2000000000;
  DAT_14caf19a8 = 0;
  uRam000000014caf19b0 = 0;
  DAT_14caf1b48 = 0;
  _DAT_14caf1b50 = 0x2000000000;
  DAT_14caf1b58 = 1;
  DAT_14caf1b90 = 0;
  DAT_14caf1b60 = 0;
  uRam000000014caf1b68 = 0;
  DAT_14caf1b70 = 0;
  uRam000000014caf1b78 = 0;
  return;
}



// FUNCTION 147bcbbbc FUN_147bcbbbc body=149 status=ok
// SIG undefined FUN_147bcbbbc(void)

undefined8 FUN_147bcbbbc(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar2 = *param_2;
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar6 = (uint)lVar2 & 0xffff;
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar5 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar6) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        lVar1 = *param_1 + (longlong)iVar4 * 0x58;
        if (*(longlong *)(*param_1 + (longlong)iVar4 * 0x58) == lVar2) {
          if ((lVar1 + 8U & 0xfffffffffffffff7) == 0) {
            return 0;
          }
          return CONCAT71((int7)(lVar1 + 8U >> 8),*(undefined1 *)(lVar1 + 0x48));
        }
        iVar4 = *(int *)(lVar1 + 0x50);
      } while (iVar4 != -1);
    }
  }
  return 0;
}



// FUNCTION 147bcbc5e FUN_147bcbc5e body=167 status=ok
// SIG undefined FUN_147bcbc5e(void)

void FUN_147bcbc5e(longlong param_1,float *param_2,float *param_3)

{
  longlong lVar1;
  char cVar2;
  double dVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x398);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  if (*(longlong *)(param_1 + 0x1c8) == lVar1) {
    cVar2 = FUN_1433b7698(param_1);
    if (cVar2 != '\0') {
      lVar1 = *(longlong *)(param_1 + 0x398);
      dVar3 = *(double *)(lVar1 + 0x280);
      if (*(double *)(lVar1 + 0x288) <= *(double *)(lVar1 + 0x280)) {
        dVar3 = *(double *)(lVar1 + 0x288);
      }
      *param_2 = (float)dVar3 * *(float *)(lVar1 + 0x644);
      *param_3 = (float)*(double *)(lVar1 + 0x290) * *(float *)(lVar1 + 0x640);
      return;
    }
  }
  FUN_141440178(param_1,param_2,param_3);
  return;
}



// FUNCTION 147bcbd06 FUN_147bcbd06 body=65 status=ok
// SIG undefined FUN_147bcbd06(void)

longlong FUN_147bcbd06(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x398) != 0) {
    lVar1 = FUN_14348b166(*(longlong *)(param_1 + 0x398));
    return lVar1;
  }
  lVar1 = FUN_1447210f0();
  if (*(longlong *)(lVar1 + 0x118) != 0) {
    return *(longlong *)(lVar1 + 0x118);
  }
  lVar1 = FUN_14572cb46(lVar1);
  return lVar1;
}



// FUNCTION 147bcbd48 FUN_147bcbd48 body=48 status=ok
// SIG undefined FUN_147bcbd48(void)

bool FUN_147bcbd48(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  
  lVar1 = FUN_147bcbd06();
  if ((lVar1 == 0) || ((*(byte *)(lVar1 + 0x3d4) & 1) == 0)) {
    bVar2 = *(longlong *)(param_1 + 0x398) != 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



// FUNCTION 147bcbdb0 FUN_147bcbdb0 body=93 status=ok
// SIG undefined FUN_147bcbdb0(void)

undefined8 * FUN_147bcbdb0(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  lVar1 = (**(code **)(*param_1 + 0x90))();
  if (lVar1 != 0) {
    uVar2 = FUN_145958f2a();
    plVar3 = (longlong *)FUN_144718840(lVar1,uVar2);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x18))(plVar3,param_2);
      return param_2;
    }
  }
  param_2[2] = 0x7fefffffffffffff;
  *param_2 = 0x7fefffffffffffff;
  param_2[1] = 0x7fefffffffffffff;
  return param_2;
}



// FUNCTION 147bcbe0e FUN_147bcbe0e body=41 status=ok
// SIG undefined FUN_147bcbe0e(void)

undefined8 FUN_147bcbe0e(longlong *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar2 = (undefined4)param_2;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x20))();
  if ((*(byte *)((longlong)puVar1 + 6) & 1) != 0) {
    uVar2 = *puVar1;
    uVar3 = 0;
  }
  return CONCAT44(uVar3,uVar2);
}



// FUNCTION 147bcbe38 FUN_147bcbe38 body=18 status=ok
// SIG undefined FUN_147bcbe38(void)

undefined1 FUN_147bcbe38(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x20))();
  return *(undefined1 *)(lVar1 + 5);
}



// FUNCTION 147bcbe66 FUN_147bcbe66 body=7 status=ok
// SIG undefined FUN_147bcbe66(void)

void FUN_147bcbe66(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x134) = param_2;
  return;
}



// FUNCTION 147bcbe6e FUN_147bcbe6e body=569 status=ok
// SIG undefined FUN_147bcbe6e(void)

void FUN_147bcbe6e(longlong param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
                  int param_5,int param_6)

{
  undefined8 uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  void *_Dst;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x58) = param_2;
  FUN_140b82e66(param_1);
  uVar2 = FUN_14577cbc2(param_2 + 0x880);
  iVar8 = 0x400;
  if (param_6 < 0x400) {
    iVar8 = param_6;
  }
  *(ulonglong *)(param_1 + 0x1d2c) = (ulonglong)uVar2;
  if (param_6 == 0) {
    iVar8 = 0x400;
  }
  *(int *)(param_1 + 0xa0) = iVar8;
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x134) = param_3;
  if (param_5 == 0) {
    lVar3 = FUN_14045d4ce(param_1 + 0xa8,&DAT_14a9e5386,0);
    lVar4 = FUN_1458cbbd8();
    lVar6 = *(longlong *)(lVar4 + 0x110);
    if (lVar3 == 0) {
      if (lVar6 == 0) {
        FUN_140aa6c08(lVar4);
        lVar6 = *(longlong *)(lVar4 + 0x110);
      }
      piVar5 = (int *)(lVar6 + 0x3c);
    }
    else {
      if (lVar6 == 0) {
        FUN_140aa6c08(lVar4);
        lVar6 = *(longlong *)(lVar4 + 0x110);
      }
      piVar5 = (int *)(lVar6 + 0x40);
    }
    iVar8 = *piVar5;
    if (iVar8 == 0) {
      *(undefined4 *)(param_1 + 0x38) = 0xa28;
    }
    else {
      iVar7 = 0x708;
      if (0x708 < iVar8) {
        iVar7 = iVar8;
      }
      *(int *)(param_1 + 0x38) = iVar7;
    }
  }
  else {
    *(int *)(param_1 + 0x38) = param_5;
  }
  _Dst = (void *)FUN_14001cc68(0x150);
  memset(_Dst,0,0x150);
  FUN_14577ce1c(_Dst);
  uVar1 = *(undefined8 *)(param_1 + 0x1d58);
  *(void **)(param_1 + 0x1d58) = _Dst;
  FUN_14577cb88(uVar1);
  FUN_14577cb88(0);
  uVar1 = *(undefined8 *)(param_1 + 0x1d58);
  if (*(longlong *)(param_1 + 0x58) == 0) {
    FUN_140056680(local_40,&DAT_149dfb77a);
  }
  else {
    local_48 = *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x278);
    FUN_1400021e4(&local_48,local_40);
  }
  FUN_14577cc86(uVar1,local_40,param_1);
  lVar6 = FUN_147bcc0a8(param_1);
  local_58 = *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1b8);
  local_50 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x1c0);
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
  }
  FUN_14577d2c8(lVar6,param_1,&local_58);
  if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar6);
  }
  *(longlong *)(param_1 + 0x68) = lVar6;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bcc0a8 FUN_147bcc0a8 body=175 status=ok
// SIG undefined FUN_147bcc0a8(void)

undefined8 FUN_147bcc0a8(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_1413dbcfa();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bcc166 FUN_147bcc166 body=140 status=ok
// SIG undefined FUN_147bcc166(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147bcc166(longlong param_1,int *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  bool bVar7;
  
  if ((*param_2 == 1) &&
     (cVar5 = FUN_1435876a8(param_1,param_2[1],(short)param_2[2],1), cVar5 != '\0')) {
    plVar3 = *(longlong **)(param_1 + 0x150);
    if (plVar3 == (longlong *)0x0) {
LAB_147bcc1de:
                    /* WARNING: Could not recover jumptable at 0x000147bcc1ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(_DAT_00000000 + 0x58))(0);
      return;
    }
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_147bcc1de;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar6 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar7);
    (**(code **)(**(longlong **)(param_1 + 0x148) + 0x58))();
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
                    /* WARNING: Could not recover jumptable at 0x000147bcc1d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147bcc1f2 FUN_147bcc1f2 body=151 status=ok
// SIG undefined FUN_147bcc1f2(void)

void FUN_147bcc1f2(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0x140);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x58);
    local_18 = *(undefined8 *)(lVar2 + 0x198);
    local_10 = *(longlong *)(lVar2 + 0x1a0);
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
      lVar2 = *(longlong *)(param_1 + 0x58);
    }
    local_28 = *(undefined8 *)(lVar2 + 0x188);
    local_20 = *(longlong *)(lVar2 + 400);
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    FUN_147079830(lVar1,&local_28,&local_18);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bcc28a FUN_147bcc28a body=65 status=ok
// SIG undefined FUN_147bcc28a(void)

longlong FUN_147bcc28a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (((*(longlong **)(param_1 + 0x30) != (longlong *)0x0) &&
      (lVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x6b8))(), lVar1 != 0)) &&
     (lVar2 = FUN_1447210f0(lVar1), lVar2 != 0)) {
    return lVar1;
  }
  return *(longlong *)(param_1 + 0x98);
}



// FUNCTION 147bcc2cc FUN_147bcc2cc body=203 status=ok
// SIG undefined FUN_147bcc2cc(void)

void FUN_147bcc2cc(longlong param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined1 auStack_188 [44];
  undefined1 local_15c [11];
  undefined1 local_151;
  longlong local_150;
  ulonglong *local_148;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar2 = **(longlong **)(param_1 + 0x13f0);
  if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x30) & 2) == 0)) {
    FUN_145acdc08(&local_150,lVar2,0);
    local_151 = 0x15;
    puVar1 = (undefined1 *)*local_148 + 1;
    if ((undefined1 *)local_148[1] < puVar1) {
      (**(code **)(local_150 + 0x170))(&local_150,&local_151,1);
    }
    else {
      local_151 = *(undefined1 *)*local_148;
      *local_148 = (ulonglong)puVar1;
    }
    (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x13f0) + 0x308))
              ((longlong *)**(undefined8 **)(param_1 + 0x13f0),local_15c,&local_150,1);
    FUN_1449daebe(&local_150);
  }
  if ((local_18 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bcc398 FUN_147bcc398 body=117 status=ok
// SIG undefined FUN_147bcc398(void)

uint FUN_147bcc398(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  uint unaff_EBX;
  
  lVar3 = *(longlong *)(param_1 + 0x140);
  if (lVar3 != 0) {
    plVar4 = *(longlong **)(lVar3 + 0x1b8);
    plVar5 = *(longlong **)(lVar3 + 0x1c0);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    if (plVar4 != (longlong *)0x0) {
      unaff_EBX = (**(code **)(*plVar4 + 0x98))(plVar4);
    }
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
    if (plVar4 != (longlong *)0x0) goto LAB_147bcc3fe;
  }
  unaff_EBX = 0;
LAB_147bcc3fe:
  return unaff_EBX & 0xffffff01;
}



// FUNCTION 147bcc40d FUN_147bcc40d body=29 status=ok
// SIG undefined FUN_147bcc40d(void)

wchar_t * FUN_147bcc40d(int param_1)

{
  if (param_1 - 1U < 3) {
    return (wchar_t *)(&PTR_u_Closed_14a9e5408)[param_1 - 1U];
  }
  return L"Invalid";
}



// FUNCTION 147bcc42a FUN_147bcc42a body=196 status=ok
// SIG undefined FUN_147bcc42a(void)

void FUN_147bcc42a(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [24];
  longlong local_40;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_1 + 0x1d58);
  if (lVar1 != 0) {
    FUN_1459b235e(local_58,param_2);
    cVar2 = FUN_146efbf9c(lVar1,local_58);
    if (local_30 != 0) {
      (**(code **)(local_30 + -0x10))(local_30 + -0x10);
    }
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    if (cVar2 != '\x02') goto LAB_147bcc4ce;
  }
  FUN_1459b235e(local_58,param_2);
  FUN_143587ad8(param_1,local_58);
  if (local_30 != 0) {
    (**(code **)(local_30 + -0x10))(local_30 + -0x10);
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
LAB_147bcc4ce:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bcc4f0 FUN_147bcc4f0 body=27 status=ok
// SIG undefined FUN_147bcc4f0(void)

void FUN_147bcc4f0(longlong *param_1)

{
  if ((char)param_1[0x3bc] != '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000147bcc4fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x330))();
    return;
  }
  *(undefined1 *)((longlong)param_1 + 0x1de1) = 1;
  return;
}



// FUNCTION 147bcc50c FUN_147bcc50c body=80 status=ok
// SIG undefined FUN_147bcc50c(void)

void FUN_147bcc50c(longlong param_1)

{
  longlong *plVar1;
  
  if ((DAT_14c868883 == '\x01') &&
     (plVar1 = *(longlong **)(param_1 + 0x98), plVar1 != (longlong *)0x0)) {
    if ((*(uint *)(plVar1 + 1) & 0x18000) == 0) {
      (**(code **)(*plVar1 + 0x3f8))(plVar1,param_1);
    }
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  return;
}



// FUNCTION 147bcc55c FUN_147bcc55c body=284 status=ok
// SIG undefined FUN_147bcc55c(void)

void FUN_147bcc55c(longlong param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [104];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((param_2 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x58) = param_2;
  FUN_140810d00(local_90,0);
  FUN_147bcc67a(param_1 + 0xa8,local_90);
  FUN_141238aee(local_90);
  *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_3 + 0x134);
  iVar3 = *(int *)(param_3 + 0xc0) + -1;
  if (*(int *)(param_3 + 0xc0) == 0) {
    iVar3 = 0;
  }
  FUN_1402980a2(param_1 + 0xb8,*(undefined8 *)(param_3 + 0xb8),iVar3);
  if (param_3 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_3);
  }
  bVar1 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x1de8) = param_3;
  lVar2 = *(longlong *)(param_3 + 0x68);
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_3 + 0x68);
    }
  }
  *(longlong *)(param_1 + 0x68) = lVar2;
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_3 + 0x38);
  FUN_140b82e66(param_1);
  FUN_147bcc7a0(param_1);
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bcc67a FUN_147bcc67a body=294 status=ok
// SIG undefined FUN_147bcc67a(void)

longlong * FUN_147bcc67a(longlong *param_1,longlong *param_2)

{
  if (param_1 == param_2) {
    param_1[4] = param_2[4];
    FUN_1410e5bda(param_1 + 9,param_2 + 9);
  }
  else {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    param_1[2] = param_2[2];
    param_2[2] = 0;
    *(int *)(param_1 + 3) = (int)param_2[3];
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    param_2[3] = 0;
    param_1[4] = param_2[4];
    if (param_1[5] != 0) {
      FUN_1400020a8();
    }
    param_1[5] = param_2[5];
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0;
    if (param_1[7] != 0) {
      FUN_1400020a8();
    }
    param_1[7] = param_2[7];
    param_2[7] = 0;
    *(int *)(param_1 + 8) = (int)param_2[8];
    *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
    param_2[8] = 0;
    FUN_1410e5bda(param_1 + 9,param_2 + 9);
    if (param_1[0xb] != 0) {
      FUN_1400020a8();
    }
    param_1[0xb] = param_2[0xb];
    param_2[0xb] = 0;
    *(int *)(param_1 + 0xc) = (int)param_2[0xc];
    *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)((longlong)param_2 + 100);
    param_2[0xc] = 0;
  }
  return param_1;
}



// FUNCTION 147bcc7a0 FUN_147bcc7a0 body=376 status=ok
// SIG undefined FUN_147bcc7a0(void)

void FUN_147bcc7a0(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint *puVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_78 [40];
  uint local_50 [4];
  uint *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *(longlong *)(param_1 + 0x1de8);
  if (lVar3 != 0) {
    iVar1 = *(int *)(lVar3 + 0x50);
    local_40 = (uint *)0x0;
    local_38 = 0x8000000000;
    lVar11 = 0;
    FUN_14476b79c(local_50);
    puVar6 = local_40;
    if (local_40 == (uint *)0x0) {
      puVar6 = local_50;
    }
    *puVar6 = *puVar6 | 1;
    iVar2 = *(int *)(lVar3 + 0x50);
    if ((longlong)iVar2 != 0) {
      lVar8 = *(longlong *)(lVar3 + 0x48);
      lVar9 = 0;
      do {
        uVar4 = *(ulonglong *)(*(longlong *)(lVar8 + lVar9) + 0x1d2c);
        uVar5 = uVar4 >> 0x20;
        if ((int)uVar4 == 0) {
          uVar5 = uVar4;
        }
        uVar7 = (uint)uVar5;
        if (uVar7 <= iVar1 + 1U) {
          puVar6 = local_40;
          if (local_40 == (uint *)0x0) {
            puVar6 = local_50;
          }
          uVar10 = uVar7 + 0x1f;
          if (-1 < (int)uVar7) {
            uVar10 = uVar7;
          }
          puVar6[(int)uVar10 >> 5] = puVar6[(int)uVar10 >> 5] | 1 << ((byte)uVar5 & 0x1f);
        }
        lVar9 = lVar9 + 8;
      } while ((longlong)iVar2 * 8 != lVar9);
    }
    puVar6 = local_50;
    if (local_40 != (uint *)0x0) {
      puVar6 = local_40;
    }
    if (0x1f < (int)local_38 + 0x1fU) {
      lVar8 = 0;
LAB_147bcc8d5:
      if (*puVar6 == 0xffffffff) goto code_r0x000147bcc8de;
      uVar10 = ~*puVar6;
      uVar7 = 0;
      if (uVar10 != 0) {
        for (; (uVar10 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
        }
      }
      lVar11 = (ulonglong)uVar7 - lVar8;
      if (uVar7 + 1 != (int)lVar8 && (int)lVar11 < (int)local_38) goto LAB_147bcc88e;
LAB_147bcc8ee:
      lVar11 = 0;
    }
LAB_147bcc88e:
    *(ulonglong *)(param_1 + 0x1d2c) = lVar11 << 0x20 | (ulonglong)*(uint *)(lVar3 + 0x1d2c);
    if (local_40 != (uint *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000147bcc8de:
  lVar8 = lVar8 + -0x20;
  puVar6 = puVar6 + 1;
  if ((ulonglong)((int)local_38 + 0x1fU & 0xffffffe0) + lVar8 == 0) goto LAB_147bcc8ee;
  goto LAB_147bcc8d5;
}



// FUNCTION 147bcc934 FUN_147bcc934 body=348 status=ok
// SIG undefined FUN_147bcc934(void)

uint * FUN_147bcc934(longlong param_1,uint *param_2,longlong param_3,undefined8 param_4,char param_5
                    )

{
  longlong lVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uVar3 = (uint)((ulonglong)param_4 >> 0x10);
  uVar4 = (uint)param_4 & 0xffff;
  local_40 = param_4;
  puVar2 = (uint *)FUN_147bd30b2(param_1 + 0x17b0,
                                 ((uint)param_4 << 0x10 | uVar4) + (int)((ulonglong)param_4 >> 0x20)
                                 + (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4));
  uVar3 = *puVar2 + 1 & 0x7fffffff;
  *puVar2 = *puVar2 & 0x80000000 | uVar3 + (uVar3 == 0);
  if (param_5 == '\0') {
    FUN_144a8b5fe(param_1 + 0x1670,local_40);
    FUN_144a8b5fe(param_1 + 0x1530,local_40);
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x840);
    if (lVar1 == 0) {
      FUN_140a2b886(param_1,&local_40);
    }
    else if (*(longlong *)(param_3 + 0x178) != 0) {
      FUN_146f3a0bc(*(undefined8 *)(*(longlong *)(lVar1 + 0x28) + 0x808),&local_48);
      if (CONCAT44(uStack_44,local_48) != 0) {
        FUN_146f46048(lVar1,CONCAT44(uStack_44,local_48),*(undefined4 *)(param_1 + 0x1d2c),0);
      }
    }
  }
  *param_2 = *puVar2;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bcca92 FUN_147bcca92 body=40 status=ok
// SIG undefined FUN_147bcca92(void)

void FUN_147bcca92(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144a79cc8(param_2);
                    /* WARNING: Could not recover jumptable at 0x000147bccab7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x388))(param_1,uVar1,*(code **)(*param_1 + 0x388));
  return;
}



// FUNCTION 147bccaba FUN_147bccaba body=261 status=ok
// SIG undefined FUN_147bccaba(void)

ulonglong * FUN_147bccaba(ulonglong *param_1,uint param_2,undefined8 *param_3)

{
  uint uVar1;
  void *_Src;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [40];
  void *local_40;
  uint local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = FUN_1459b23c6();
  *param_1 = (ulonglong)param_2;
  param_1[1] = 0;
  FUN_14485c47a(param_1 + 1,uVar3);
  param_1[2] = uVar3;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  if (param_2 - 0x10 < 0xfffffffe) {
    uVar1 = *(uint *)(param_3 + 1);
    if ((int)uVar1 < 2) {
      uVar4 = FUN_141427744(param_2);
      FUN_140056680(&local_40,uVar4);
    }
    else {
      local_40 = (void *)0x0;
      _Src = (void *)*param_3;
      local_38 = uVar1;
      FUN_1446dd670(&local_40,(ulonglong)uVar1,0);
      memcpy(local_40,_Src,(ulonglong)uVar1 * 2);
    }
    iVar2 = local_38 - 1;
    if (local_38 == 0) {
      iVar2 = 0;
    }
    FUN_1402980a2(param_1 + 3,local_40,iVar2);
    if (local_40 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bccbc0 FUN_147bccbc0 body=59 status=ok
// SIG undefined FUN_147bccbc0(void)

void FUN_147bccbc0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  FUN_14358c3d2(param_1,param_3,param_5);
  FUN_14358c5cc(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 147bccbfc FUN_147bccbfc body=236 status=ok
// SIG undefined FUN_147bccbfc(void)

undefined8 * FUN_147bccbfc(undefined8 *param_1,longlong *param_2)

{
  ushort *puVar1;
  ulonglong *puVar2;
  uint uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ushort local_2a;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)((longlong)param_2 + 0xe9) & 1) != 0) {
    local_2a = 0;
    puVar2 = (ulonglong *)param_2[1];
    puVar1 = (ushort *)*puVar2 + 1;
    if ((ushort *)puVar2[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_2a,2);
      }
      else {
        thunk_FUN_1457251a8(param_2,&local_2a);
      }
    }
    else {
      local_2a = *(ushort *)*puVar2;
      *puVar2 = (ulonglong)puVar1;
    }
    if (local_2a != 0) {
      uVar3 = 0;
      do {
        local_38 = 0;
        (**(code **)(*param_2 + 400))(param_2,&local_38);
        uVar3 = uVar3 + 1;
      } while (uVar3 < local_2a);
    }
  }
  *param_1 = 0;
  (**(code **)(*param_2 + 400))(param_2,param_1);
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147bcccea FUN_147bcccea body=673 status=ok
// SIG undefined FUN_147bcccea(void)

void FUN_147bcccea(longlong param_1,uint param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  bool bVar4;
  uint *puVar5;
  uint *puVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  undefined1 auStack_b8 [40];
  uint local_90 [16];
  uint *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_50 = (uint *)0x0;
  local_48 = 0x1000000000;
  if (*(int *)(param_1 + 0x18b0) != *(int *)(param_1 + 0x18dc)) {
    lVar7 = *(longlong *)(param_1 + 0x18e8);
    if (*(longlong *)(param_1 + 0x18e8) == 0) {
      lVar7 = param_1 + 0x18e0;
    }
    iVar9 = *(int *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x18f0) - 1U & param_2) * 4);
    if (iVar9 != -1) {
      plVar1 = (longlong *)(param_1 + 0x18a8);
LAB_147bccd65:
      if (*(uint *)(*plVar1 + (longlong)iVar9 * 0x10) != param_2) goto code_r0x000147bccd71;
      local_48 = 0x1000000001;
      local_90[0] = param_2;
      puVar5 = (uint *)FUN_147bccf8c(plVar1);
      if (puVar5 == (uint *)0x0) {
        uVar11 = 1;
      }
      else {
        uVar11 = 1;
        do {
          puVar6 = local_50;
          if (local_50 == (uint *)0x0) {
            puVar6 = local_90;
          }
          if (uVar11 != 0) {
            uVar12 = 0;
            do {
              if (*(uint *)((longlong)puVar6 + uVar12) == *puVar5) {
                if ((~uVar12 & 0x3fffffffc) != 0) goto LAB_147bcce7c;
                break;
              }
              uVar12 = uVar12 + 4;
            } while ((longlong)(int)uVar11 * 4 - uVar12 != 0);
          }
          local_48 = CONCAT44(local_48._4_4_,uVar11 + 1);
          if (local_48._4_4_ < uVar11 + 1) {
            FUN_1401fcbb6(local_90);
          }
          puVar6 = local_50;
          if (local_50 == (uint *)0x0) {
            puVar6 = local_90;
          }
          puVar6[(int)uVar11] = *puVar5;
          puVar5 = local_50;
          if (local_50 == (uint *)0x0) {
            puVar5 = local_90;
          }
          puVar5 = (uint *)FUN_147bccf8c(plVar1,puVar5[(longlong)(int)(uint)local_48 + -1]);
          uVar11 = (uint)local_48;
        } while (puVar5 != (uint *)0x0);
LAB_147bcce7c:
        if ((int)uVar11 < 1) goto LAB_147bccd7c;
      }
      uVar12 = (ulonglong)uVar11;
LAB_147bcce8b:
      puVar5 = local_50;
      if (local_50 == (uint *)0x0) {
        puVar5 = local_90;
      }
      if (*(int *)(param_1 + 0x18b0) != *(int *)(param_1 + 0x18dc)) {
        uVar11 = puVar5[uVar12 - 1];
        lVar7 = *(longlong *)(param_1 + 0x18e8);
        if (*(longlong *)(param_1 + 0x18e8) == 0) {
          lVar7 = param_1 + 0x18e0;
        }
        iVar9 = *(int *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x18f0) - 1U & uVar11) * 4);
        if (iVar9 != -1) {
          lVar8 = (longlong)(int)uVar11;
          lVar7 = *plVar1;
          iVar13 = iVar9;
          do {
            if (*(uint *)(lVar7 + (longlong)iVar13 * 0x10) == uVar11) goto LAB_147bccf02;
            iVar13 = *(int *)((longlong)iVar13 * 0x10 + lVar7 + 8);
          } while (iVar13 != -1);
        }
      }
      goto LAB_147bccea5;
    }
  }
LAB_147bccd7c:
  if (local_50 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000147bccd71:
  iVar9 = *(int *)((longlong)iVar9 * 0x10 + *plVar1 + 8);
  if (iVar9 == -1) goto LAB_147bccd7c;
  goto LAB_147bccd65;
  while (iVar9 = *(int *)(lVar10 + 8), iVar9 != -1) {
LAB_147bccf02:
    lVar10 = lVar7 + (longlong)iVar9 * 0x10;
    if (*(uint *)(lVar7 + (longlong)iVar9 * 0x10) == uVar11) goto LAB_147bccf20;
  }
  lVar10 = 0;
LAB_147bccf20:
  lVar10 = (longlong)*(int *)(lVar10 + 4);
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x13f0) + lVar10 * 8);
  if ((lVar7 != 0) && (*(longlong *)(*(longlong *)(param_1 + 0x13f0) + lVar8 * 8) == 0)) {
    *(uint *)(lVar7 + 0x34) = uVar11;
    lVar7 = *(longlong *)(param_1 + 0x13f0);
    uVar3 = *(undefined8 *)(lVar7 + lVar8 * 8);
    *(undefined8 *)(lVar7 + lVar8 * 8) = *(undefined8 *)(lVar7 + lVar10 * 8);
    *(undefined8 *)(lVar7 + lVar10 * 8) = uVar3;
    lVar7 = *(longlong *)(param_1 + 0x1410);
    uVar2 = *(undefined4 *)(lVar7 + lVar8 * 4);
    *(undefined4 *)(lVar7 + lVar8 * 4) = *(undefined4 *)(lVar7 + lVar10 * 4);
    *(undefined4 *)(lVar7 + lVar10 * 4) = uVar2;
    FUN_14573a2c8(plVar1);
  }
LAB_147bccea5:
  bVar4 = (longlong)uVar12 < 2;
  uVar12 = uVar12 - 1;
  if (bVar4) goto LAB_147bccd7c;
  goto LAB_147bcce8b;
}



// FUNCTION 147bccf8c FUN_147bccf8c body=243 status=ok
// SIG undefined FUN_147bccf8c(void)

longlong FUN_147bccf8c(longlong *param_1,int param_2)

{
  longlong lVar1;
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
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  local_58 = local_38;
  local_50 = local_30;
  local_60 = param_1;
  if (iStack_24 < (int)local_30[3]) {
    do {
      if (*(int *)(*local_60 + 4 + (longlong)iStack_44 * 0x10) == param_2) {
        lVar1 = *local_60 + (longlong)iStack_44 * 0x10;
        goto LAB_147bcd05d;
      }
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  lVar1 = 0;
LAB_147bcd05d:
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bcd080 FUN_147bcd080 body=420 status=ok
// SIG undefined FUN_147bcd080(void)

longlong FUN_147bcd080(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x58);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (*(int *)(lVar1 + 0x220) != *(int *)(lVar1 + 0x24c)) {
    uVar4 = (ulonglong)DAT_14c892f40;
    uVar5 = (DAT_14c892f40 << 0x10 | DAT_14c892f40 & 0xffff) + ((DAT_14c892f40 & 0xffff) >> 4) +
            ((DAT_14c892f40 >> 0x10) << 0x13 | DAT_14c892f40 >> 0x10);
    lVar3 = lVar1 + 0x250;
    if (*(longlong *)(lVar1 + 600) != 0) {
      lVar3 = *(longlong *)(lVar1 + 600);
    }
    iVar6 = *(int *)(lVar3 + (ulonglong)(*(int *)(lVar1 + 0x260) - 1U & uVar5) * 4);
    if (iVar6 != -1) {
      while (*(ulonglong *)(*(longlong *)(lVar1 + 0x218) + (longlong)iVar6 * 0x80) != uVar4) {
        iVar6 = *(int *)((longlong)iVar6 * 0x80 + *(longlong *)(lVar1 + 0x218) + 0x78);
        if (iVar6 == -1) {
          return 0;
        }
      }
      lVar1 = *(longlong *)(param_1 + 0x58);
      if (*(int *)(lVar1 + 0x220) != *(int *)(lVar1 + 0x24c)) {
        lVar3 = lVar1 + 0x250;
        if (*(longlong *)(lVar1 + 600) != 0) {
          lVar3 = *(longlong *)(lVar1 + 600);
        }
        iVar6 = *(int *)(lVar3 + (ulonglong)(*(int *)(lVar1 + 0x260) - 1U & uVar5) * 4);
        if (iVar6 != -1) {
          do {
            lVar3 = *(longlong *)(lVar1 + 0x218) + (longlong)iVar6 * 0x80;
            if (*(ulonglong *)(*(longlong *)(lVar1 + 0x218) + (longlong)iVar6 * 0x80) == uVar4)
            goto LAB_147bcd155;
            iVar6 = *(int *)(lVar3 + 0x78);
          } while (iVar6 != -1);
        }
      }
      lVar3 = 0;
LAB_147bcd155:
      iVar6 = *(int *)(lVar3 + 0x20);
      lVar1 = *(longlong *)(param_1 + 0x13f0);
      lVar3 = *(longlong *)(lVar1 + (longlong)iVar6 * 8);
      if ((lVar3 != 0) && (*(ulonglong *)(lVar3 + 0x40) == uVar4)) {
        lVar3 = FUN_145b5b62c();
        lVar1 = *(longlong *)(lVar1 + (longlong)iVar6 * 8);
        if (lVar1 != 0) {
          if (lVar3 == 0) {
            return 0;
          }
          lVar2 = *(longlong *)(lVar1 + 0x10);
          if (lVar2 == 0) {
            return 0;
          }
          if (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38)) {
            if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
                lVar3 + 0x30) {
              return 0;
            }
            return lVar1;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 147bcd224 FUN_147bcd224 body=164 status=ok
// SIG undefined FUN_147bcd224(void)

void FUN_147bcd224(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 local_48 [24];
  longlong local_30;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(byte *)(param_1 + 0x138) & 1) == 0) {
    local_58 = param_2;
    FUN_147d87416(DAT_14cb0d2b0 + 0xec8,*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1a8),
                  *(longlong *)(param_1 + 0x58),4);
  }
  FUN_1459b235e(local_48,4);
  FUN_143587ad8(param_1,local_48);
  if (local_20 != 0) {
    (**(code **)(local_20 + -0x10))(local_20 + -0x10);
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bcd2ca FUN_147bcd2ca body=224 status=ok
// SIG undefined FUN_147bcd2ca(void)

void FUN_147bcd2ca(longlong param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined1 auStack_188 [36];
  undefined1 local_164 [11];
  undefined1 local_159;
  longlong local_158;
  ulonglong *local_150;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar2 = **(longlong **)(param_1 + 0x13f0);
  if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x30) & 2) == 0)) {
    FUN_145acdc08(&local_158,lVar2,0);
    local_159 = 0xf;
    puVar1 = (undefined1 *)*local_150 + 1;
    if ((undefined1 *)local_150[1] < puVar1) {
      (**(code **)(local_158 + 0x170))(&local_158,&local_159,1);
    }
    else {
      local_159 = *(undefined1 *)*local_150;
      *local_150 = (ulonglong)puVar1;
    }
    FUN_1461c57a4(&local_158,param_2);
    (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x13f0) + 0x308))
              ((longlong *)**(undefined8 **)(param_1 + 0x13f0),local_164,&local_158,1);
    FUN_1449daebe(&local_158);
  }
  if ((local_20 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bcd3ac FUN_147bcd3ac body=120 status=ok
// SIG undefined FUN_147bcd3ac(void)

char FUN_147bcd3ac(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  
  if ((((*(longlong *)(param_1 + 0x30) == 0) ||
       (*(char *)(*(longlong *)(param_1 + 0x30) + 0x5f8) != '\x01')) ||
      (cVar1 = (**(code **)(*param_2 + 0x28))(param_2), cVar1 == '\0')) ||
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0xc50))
                        (*(longlong **)(param_1 + 0x30),param_2), cVar1 != '\0')) {
    cVar1 = '\0';
  }
  else if (*(int *)(param_1 + 0x50) < 1) {
    cVar1 = '\x01';
  }
  else {
    lVar2 = 0;
    do {
      cVar1 = FUN_147bcd3ac(*(undefined8 *)(*(longlong *)(param_1 + 0x48) + lVar2 * 8),param_2);
      if (cVar1 == '\0') {
        return '\0';
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0x50));
  }
  return cVar1;
}



// FUNCTION 147bcd424 FUN_147bcd424 body=447 status=ok
// SIG undefined FUN_147bcd424(void)

void FUN_147bcd424(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
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
  if ((*(longlong *)(param_1 + 0x58) == 0) ||
     (*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x840) == 0)) {
    if (*(longlong **)(param_1 + 0x14a8) == (longlong *)0x0) {
      FUN_147bce932(param_1 + 0x14e0);
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x14a8) + 0x2d0))();
    }
  }
  FUN_147bd4372(param_1 + 0x17b0);
  iVar3 = 0;
  FUN_1408d9e0e(param_1 + 0x1670,0);
  FUN_1408d9e0e(param_1 + 0x1530,0);
  FUN_145eb79a4(param_1 + 0x1580);
  FUN_1417e299a(param_1);
  FUN_145d295ac(param_1 + 0x15d0,0);
  FUN_146efefd8(param_1 + 0x1710,0);
  *(undefined8 *)(param_1 + 0x90) = 0;
  plVar1 = (longlong *)(param_1 + 0x1760);
  lVar2 = param_1 + 6000;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = lVar2;
  if (*(int *)(param_1 + 0x1788) != 0) {
    FUN_1449c0562(&local_50);
    iVar3 = *(int *)(param_1 + 0x1788);
  }
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  local_78 = plVar1;
  if ((iStack_3c != iVar3) || (local_48 != lVar2)) {
    do {
      FUN_140e329ee(param_1,*local_78 + (longlong)iStack_5c * 0x28 + 8);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (local_78 != plVar1 || (local_68 != lVar2 || iStack_5c != iVar3));
  }
  FUN_147bd44f6(plVar1);
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bcd5e4 FUN_147bcd5e4 body=33 status=ok
// SIG undefined FUN_147bcd5e4(void)

void FUN_147bcd5e4(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_1 + 0x58) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x1a8), lVar1 != 0)) {
    FUN_1412f3774(lVar1,param_2,1,1);
    return;
  }
  return;
}



// FUNCTION 147bcd606 FUN_147bcd606 body=189 status=ok
// SIG undefined FUN_147bcd606(void)

void FUN_147bcd606(longlong param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    local_38 = 0;
    FUN_14485c47a(&local_38,param_3);
    uVar2 = local_38;
  }
  cVar1 = FUN_147bdb8fa(param_1 + 0x15d0,param_2,uVar2);
  if (((param_3 != param_2) && (cVar1 != '\0')) && (*(longlong *)(param_1 + 0x58) != 0)) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x858);
    local_38 = 0;
    FUN_14485c47a(&local_38,param_3);
    FUN_147bd79ca(uVar2,param_2,&local_38,param_1);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bcd6c4 FUN_147bcd6c4 body=148 status=ok
// SIG undefined FUN_147bcd6c4(void)

void FUN_147bcd6c4(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((longlong)(int)param_2[1] != 0) {
    puVar2 = (undefined4 *)*param_2;
    puVar1 = puVar2 + (longlong)(int)param_2[1] * 10;
    do {
      FUN_14278ffaa(puVar2,&local_38);
      local_48 = *puVar2;
      uStack_44 = puVar2[1];
      uStack_40 = puVar2[2];
      uStack_3c = puVar2[3];
      FUN_1459476e6(param_1 + 0x1438,&local_48,puVar2[4],local_38);
      puVar2 = puVar2 + 10;
    } while (puVar2 != puVar1);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bcd75a FUN_147bcd75a body=96 status=ok
// SIG undefined FUN_147bcd75a(void)

void FUN_147bcd75a(longlong param_1,longlong param_2)

{
  byte bVar1;
  
  *(undefined4 *)(param_1 + 0x134) = 3;
  if (param_2 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  bVar1 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x30) = param_2;
  if ((param_2 != 0) && ((bVar1 & 1) != 0)) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x98) = param_2;
  return;
}



// FUNCTION 147bcd80a FUN_147bcd80a body=32 status=ok
// SIG undefined FUN_147bcd80a(void)

undefined8 FUN_147bcd80a(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Simulated Client");
  return param_2;
}



// FUNCTION 147bcd840 FUN_147bcd840 body=45 status=ok
// SIG undefined FUN_147bcd840(void)

longlong FUN_147bcd840(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_141462d4a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147bcd86e FUN_147bcd86e body=63 status=ok
// SIG undefined FUN_147bcd86e(void)

undefined8 FUN_147bcd86e(undefined8 param_1,undefined8 param_2)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine/NetConnection.h",0x3c4,
                L"Pure virtual not implemented (%s)",L"UNetConnection::LowLevelGetRemoteAddress");
  FUN_140056680(param_2,&DAT_149dfb77a);
  return param_2;
}



// FUNCTION 147bcd8ae FUN_147bcd8ae body=63 status=ok
// SIG undefined FUN_147bcd8ae(void)

undefined8 FUN_147bcd8ae(undefined8 param_1,undefined8 param_2)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine/NetConnection.h",0x3c7,
                L"Pure virtual not implemented (%s)",L"UNetConnection::LowLevelDescribe");
  FUN_140056680(param_2,&DAT_149dfb77a);
  return param_2;
}



// FUNCTION 147bcd8ee FUN_147bcd8ee body=41 status=ok
// SIG undefined FUN_147bcd8ee(void)

void FUN_147bcd8ee(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine/NetConnection.h",0x3d5,
                L"Pure virtual not implemented (%s)",L"UNetConnection::LowLevelSend");
  return;
}



// FUNCTION 147bcd918 FUN_147bcd918 body=41 status=ok
// SIG undefined FUN_147bcd918(void)

void FUN_147bcd918(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine/NetConnection.h",0x454,
                L"Pure virtual not implemented (%s)",L"UNetConnection::InitRemoteConnection");
  return;
}



// FUNCTION 147bcd942 FUN_147bcd942 body=41 status=ok
// SIG undefined FUN_147bcd942(void)

void FUN_147bcd942(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\Engine/NetConnection.h",0x461,
                L"Pure virtual not implemented (%s)",L"UNetConnection::InitLocalConnection");
  return;
}



// FUNCTION 147bcd96c FUN_147bcd96c body=45 status=ok
// SIG undefined FUN_147bcd96c(void)

longlong FUN_147bcd96c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_141462d4a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147bcd99a FUN_147bcd99a body=142 status=ok
// SIG undefined FUN_147bcd99a(void)

void FUN_147bcd99a(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,param_4);
  return;
}



// FUNCTION 147bcda28 FUN_147bcda28 body=125 status=ok
// SIG undefined FUN_147bcda28(void)

void FUN_147bcda28(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (param_2 <= (int)uVar1) {
    uVar4 = 0x10;
    if (0x10 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x8c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 3,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 3)) {
        uVar4 = uVar2 >> 3 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x8c) = (int)uVar4;
    FUN_147bcd99a(param_1,param_2,uVar4,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147bcdaf6 FUN_147bcdaf6 body=54 status=ok
// SIG undefined FUN_147bcdaf6(void)

undefined1 FUN_147bcdaf6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1463ec1a4(param_2,param_3);
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return 1;
}



// FUNCTION 147bcdb54 FUN_147bcdb54 body=59 status=ok
// SIG undefined FUN_147bcdb54(void)

undefined8 FUN_147bcdb54(longlong *param_1)

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



// FUNCTION 147bcdb9a FUN_147bcdb9a body=38 status=ok
// SIG undefined FUN_147bcdb9a(void)

void FUN_147bcdb9a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 147bcdc10 FUN_147bcdc10 body=138 status=ok
// SIG undefined FUN_147bcdc10(void)

code * FUN_147bcdc10(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LWCTile";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000022;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147bcdc9a;
}



// FUNCTION 147bcdc9a FUN_147bcdc9a body=138 status=ok
// SIG undefined FUN_147bcdc9a(void)

code * FUN_147bcdc9a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bUseLocalSpace";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000021;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e4108e;
}



// FUNCTION 147bcdd24 FUN_147bcdd24 body=138 status=ok
// SIG undefined FUN_147bcdd24(void)

code * FUN_147bcdd24(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TexCoordWeightB";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x140000001e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e41004;
}



// FUNCTION 147bcddae FUN_147bcddae body=132 status=ok
// SIG undefined FUN_147bcddae(void)

undefined1 * FUN_147bcddae(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SubImageSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e41000;
}



// FUNCTION 147bcde3a FUN_147bcde3a body=106 status=ok
// SIG undefined FUN_147bcde3a(void)

longlong FUN_147bcde3a(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_14001cc68(0x30,0x10);
  FUN_147bce47a(lVar2,*(longlong *)(param_1 + 0x4b8),
                *(undefined8 *)(*(longlong *)(param_1 + 0x4b8) + 0x628));
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  iVar1 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
    FUN_147bce512(param_3,iVar1);
  }
  *(longlong *)(*param_3 + (longlong)iVar1 * 8) = lVar2;
  return lVar2;
}



// FUNCTION 147bcdea4 FUN_147bcdea4 body=589 status=ok
// SIG undefined FUN_147bcdea4(void)

void FUN_147bcdea4(longlong param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  undefined1 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_198 [44];
  uint local_16c;
  longlong local_168;
  undefined1 local_160 [168];
  undefined1 *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 local_90;
  uint7 local_88;
  undefined1 uStack_81;
  undefined1 local_80;
  uint local_7c;
  byte local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if (((*(byte *)(param_1 + 0x6c) & 0x20) == 0) && ((*(byte *)(param_1 + 0x77) & 0x40) == 0)) {
    bVar1 = *(byte *)(param_1 + 0x6d);
    (**(code **)(*param_2 + 0x10))(param_2,*(undefined4 *)(param_1 + 0x4c8));
    iVar3 = *(int *)(param_1 + 0x4c8);
    if (0 < iVar3) {
      local_168 = param_1 + 0x298;
      local_16c = (bVar1 & 7) << 0x11;
      lVar5 = 0;
      lVar6 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x650) + lVar6 * 8);
        if (*(int *)(lVar2 + 0x4c) != 0) {
          local_b8 = (undefined1 *)0x0;
          local_b0 = 0x100000000;
          local_98 = 0;
          local_a8 = 0;
          uStack_a0 = 0;
          local_90 = 0xffffffff;
          _local_88 = 0xff0000ffffffff;
          local_80 = 0;
          local_7c = 0x40c00f07;
          local_78 = local_78 & 0xfc;
          FUN_141793e06(local_160);
          puVar4 = local_b8;
          if (local_b8 == (undefined1 *)0x0) {
            puVar4 = local_160;
          }
          *(undefined8 *)(puVar4 + 0x18) = *(undefined8 *)(lVar2 + 0x40);
          local_a8 = local_168;
          uStack_a0 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x4c0) + 0x30 + lVar5) +
                                  0x2f0))();
          local_98 = *(longlong *)(param_1 + 0x4c0) + lVar5;
          *(undefined4 *)(puVar4 + 0x58) = *(undefined4 *)(lVar2 + 0x48);
          *(undefined4 *)(puVar4 + 0x5c) = *(undefined4 *)(lVar2 + 0x4c);
          *(undefined4 *)(puVar4 + 0x68) = *(undefined4 *)(lVar2 + 0x50);
          *(undefined4 *)(puVar4 + 0x6c) = *(undefined4 *)(lVar2 + 0x54);
          *(undefined8 *)(puVar4 + 0x40) =
               *(undefined8 *)(*(longlong *)(param_1 + 0x4c0) + 0x38 + lVar5);
          local_7c = local_7c & 0xfff03fff | local_16c;
          local_88 = (uint7)(uint6)local_88;
          lVar2 = *(longlong *)(puVar4 + 0x18);
          if ((lVar2 == 0) || ((*(int *)(lVar2 + 8) != -1 && (*(longlong *)(lVar2 + 0x10) != 0)))) {
            (**(code **)(*param_2 + 0x18))(param_2,local_160,0x7f7fffff);
          }
          FUN_1446fc232(local_160);
          iVar3 = *(int *)(param_1 + 0x4c8);
        }
        lVar6 = lVar6 + 1;
        lVar5 = lVar5 + 0x88;
      } while (lVar6 < iVar3);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bce0f2 FUN_147bce0f2 body=221 status=ok
// SIG undefined FUN_147bce0f2(void)

void FUN_147bce0f2(longlong param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4,
                  undefined1 *param_5,undefined1 *param_6)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [44];
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_3 = 1;
  *param_4 = 0;
  *param_5 = 1;
  *param_6 = 1;
  if (*(int *)(param_1 + 0x4c8) < 1) {
    *param_4 = 1;
    *param_5 = 0;
  }
  else {
    lVar2 = 0;
    lVar1 = 0;
    do {
      (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x4c0) + lVar2) + 8))
                (*(longlong *)(param_1 + 0x4c0) + lVar2,&local_4c,param_2);
      if ((local_4c != 0) && ((*param_4 = 1, local_4c == 1 || (*param_5 = 0, local_4c != 2)))) {
        *param_3 = 0;
      }
      lVar1 = lVar1 + 1;
      lVar2 = lVar2 + 0x88;
    } while (lVar1 < *(int *)(param_1 + 0x4c8));
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147bce1fe FUN_147bce1fe body=158 status=ok
// SIG undefined FUN_147bce1fe(void)

void FUN_147bce1fe(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar3 = *(int *)(param_1 + 0x4c8);
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  if (*(int *)(param_2 + 0x4c) < iVar3) {
    FUN_147bce598(param_2);
    iVar3 = *(int *)(param_1 + 0x4c8);
  }
  if (0 < iVar3) {
    lVar4 = 0;
    lVar5 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x4c0);
      iVar3 = *(int *)(param_2 + 0x48);
      *(uint *)(param_2 + 0x48) = iVar3 + 1U;
      if (*(uint *)(param_2 + 0x4c) < iVar3 + 1U) {
        FUN_147470a8e(param_2,iVar3);
      }
      lVar2 = *(longlong *)(param_2 + 0x40);
      if (*(longlong *)(param_2 + 0x40) == 0) {
        lVar2 = param_2;
      }
      *(longlong *)(lVar2 + (longlong)iVar3 * 8) = lVar1 + lVar4;
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x88;
    } while (lVar5 < *(int *)(param_1 + 0x4c8));
  }
  return;
}



// FUNCTION 147bce2a8 FUN_147bce2a8 body=105 status=ok
// SIG undefined FUN_147bce2a8(void)

void FUN_147bce2a8(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_145982bee(0xa8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_145982bee(param_1 + 0x15,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147bce307. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 147bce312 FUN_147bce312 body=38 status=ok
// SIG undefined FUN_147bce312(void)

undefined8 FUN_147bce312(undefined8 param_1,int param_2)

{
  FUN_1458d1c10();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147bce338 FUN_147bce338 body=67 status=ok
// SIG undefined FUN_147bce338(void)

int * FUN_147bce338(longlong param_1,int *param_2,longlong *param_3)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = FUN_144807416(param_1,param_3,param_1 + 0x40);
  if (iVar2 == 4) {
    bVar1 = (**(code **)(*param_3 + 8))(param_3,param_1 + 0x50);
    iVar2 = (uint)bVar1 * 2;
  }
  *param_2 = iVar2;
  return param_2;
}



// FUNCTION 147bce37c FUN_147bce37c body=150 status=ok
// SIG undefined FUN_147bce37c(void)

void FUN_147bce37c(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x88,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x88)) {
      uVar5 = uVar4 / 0x88 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x88,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147bce41e FUN_147bce41e body=91 status=ok
// SIG undefined FUN_147bce41e(void)

void FUN_147bce41e(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_14594025c(0xa8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_14594025c(param_1 + 0x15);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147bce46f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 147bce47a FUN_147bce47a body=108 status=ok
// SIG undefined FUN_147bce47a(void)

undefined8 * FUN_147bce47a(undefined8 *param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  
  FUN_147aea248(param_1,0);
  *param_1 = &PTR_FUN_14a9e45f0;
  param_1[4] = param_2;
  if (param_2 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  bVar1 = DAT_14c950c29;
  param_1[5] = param_3;
  if ((param_3 != 0) && ((bVar1 & 1) != 0)) {
    FUN_1456cec3c(param_3);
  }
  return param_1;
}



// FUNCTION 147bce4e6 FUN_147bce4e6 body=38 status=ok
// SIG undefined FUN_147bce4e6(void)

undefined8 FUN_147bce4e6(undefined8 param_1,int param_2)

{
  FUN_147aea288();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147bce512 FUN_147bce512 body=132 status=ok
// SIG undefined FUN_147bce512(void)

void FUN_147bce512(longlong param_1,int param_2)

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



// FUNCTION 147bce598 FUN_147bce598 body=100 status=ok
// SIG undefined FUN_147bce598(void)

void FUN_147bce598(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 8;
    if (8 < param_2) {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,0);
      uVar2 = 0x7fffffff;
      if ((int)param_2 <= (int)(uVar1 >> 3)) {
        uVar2 = uVar1 >> 3 & 0xffffffff;
      }
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0x4c)) {
    *(int *)(param_1 + 0x4c) = (int)uVar2;
    FUN_147470b04(param_1,*(undefined4 *)(param_1 + 0x48),uVar2,8);
    return;
  }
  return;
}



// FUNCTION 147bce5fc FUN_147bce5fc body=65 status=ok
// SIG undefined FUN_147bce5fc(void)

void FUN_147bce5fc(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_147bce65c(param_1,iVar1);
  }
  FUN_147bce63d((longlong)iVar1 * 0x40 + *param_1,param_2);
  return;
}



// FUNCTION 147bce63d FUN_147bce63d body=31 status=ok
// SIG undefined FUN_147bce63d(void)

void FUN_147bce63d(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)((longlong)param_1 + 0x19) = 0;
    *(undefined8 *)((longlong)param_1 + 0x21) = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1 = param_1 + 8;
  }
  return;
}



// FUNCTION 147bce65c FUN_147bce65c body=132 status=ok
// SIG undefined FUN_147bce65c(void)

void FUN_147bce65c(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147bce6e2 FUN_147bce6e2 body=118 status=ok
// SIG undefined FUN_147bce6e2(void)

void FUN_147bce6e2(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x1c,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x1c)) {
      uVar2 = uVar1 / 0x1c & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x1c,4);
  }
  return;
}



// FUNCTION 147bce758 FUN_147bce758 body=95 status=ok
// SIG undefined FUN_147bce758(void)

void FUN_147bce758(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 2,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 2)) {
      uVar2 = uVar1 >> 2 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,4,4);
  }
  return;
}



// FUNCTION 147bce7b8 FUN_147bce7b8 body=50 status=ok
// SIG undefined FUN_147bce7b8(void)

longlong FUN_147bce7b8(longlong param_1,int param_2)

{
  FUN_14585d358(param_1 + 0x20);
  FUN_146efa5e4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147bce7ea FUN_147bce7ea body=178 status=ok
// SIG undefined FUN_147bce7ea(void)

ulonglong FUN_147bce7ea(longlong *param_1,longlong *param_2)

{
  int iVar1;
  ushort uVar2;
  ulonglong uVar3;
  ushort uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  do {
    if (*param_1 != *param_2) {
      return 0;
    }
    iVar1 = (int)param_1[4];
    if (iVar1 == (int)param_2[4]) {
      if (1 < iVar1) {
        lVar6 = 0;
        while( true ) {
          uVar4 = *(ushort *)(param_1[3] + lVar6);
          uVar5 = (ulonglong)uVar4;
          uVar2 = *(ushort *)(param_2[3] + lVar6);
          if (uVar4 != uVar2) break;
          if (uVar4 == 0) goto LAB_147bce85d;
LAB_147bce832:
          lVar6 = lVar6 + 2;
        }
        if ((uVar2 | uVar4) < 0x80) {
          uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
          uVar3 = (ulonglong)uVar2;
          uVar2 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
          if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar3]) goto LAB_147bce832;
        }
        if (uVar4 != uVar2) {
          return 0;
        }
      }
    }
    else if ((int)param_2[4] + iVar1 != 1) {
      return 0;
    }
LAB_147bce85d:
    if (param_1[2] != param_2[2]) {
      return 0;
    }
    param_1 = (longlong *)param_1[5];
    param_2 = (longlong *)param_2[5];
    if ((param_1 == (longlong *)0x0) || (param_2 == (longlong *)0x0)) {
      return CONCAT71(0x149e05d,(param_1 != (longlong *)0x0) != (param_2 != (longlong *)0x0)) ^ 1;
    }
  } while( true );
}



// FUNCTION 147bce89c FUN_147bce89c body=150 status=ok
// SIG undefined FUN_147bce89c(void)

void FUN_147bce89c(longlong *param_1,int param_2,int param_3)

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


