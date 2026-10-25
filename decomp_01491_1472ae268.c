// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1472ae268 FUN_1472ae268 body=244 status=ok
// SIG undefined FUN_1472ae268(void)

undefined8 *
FUN_1472ae268(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = DAT_14ca36518;
  if (DAT_14ca36518 != 0) {
    LOCK();
    *(int *)(DAT_14ca36518 + 8) = *(int *)(DAT_14ca36518 + 8) + 1;
    UNLOCK();
  }
  local_30 = &DAT_14ca364d0;
  local_48 = 2;
  local_40 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14a2d2bd0;
  uVar1 = param_5[1];
  uVar2 = param_5[2];
  uVar3 = param_5[3];
  *(undefined4 *)(param_1 + 0x37) = *param_5;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = uVar3;
  param_1[0x39] = *(undefined8 *)(param_5 + 4);
  param_1[0x3a] = *(undefined8 *)(param_5 + 6);
  param_1[0x3b] = *(undefined8 *)(param_5 + 8);
  param_1[0x3c] = *(undefined8 *)(param_5 + 10);
  param_1[0x3d] = *(undefined8 *)(param_5 + 0xc);
  param_1[0x3e] = *(undefined8 *)(param_5 + 0xe);
  puVar5 = (undefined8 *)(param_5 + 0x10);
  puVar6 = param_1 + 0x3f;
  for (lVar4 = 0xb; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined1 *)(param_1 + 0x4a) = *(undefined1 *)(param_5 + 0x26);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472ae35e FUN_1472ae35e body=38 status=ok
// SIG undefined FUN_1472ae35e(void)

undefined8 FUN_1472ae35e(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472ae384 FUN_1472ae384 body=253 status=ok
// SIG undefined FUN_1472ae384(void)

void FUN_1472ae384(ulonglong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  uVar1 = *(undefined8 *)(param_3 + 8);
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 5;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x30);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 5;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar3 + 2) = (float)(int)uVar1;
  *(float *)((longlong)puVar3 + 0x14) = (float)(int)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)(puVar3 + 3) = 0;
  *(float *)((longlong)puVar3 + 0x1c) = (float)(int)uVar2;
  *(float *)(puVar3 + 4) = (float)(int)((ulonglong)uVar2 >> 0x20);
  *(undefined4 *)((longlong)puVar3 + 0x24) = 0x3f800000;
  FUN_1404e1f8e(param_1,param_5);
  FUN_142f555ca(param_7);
  FUN_1447a9dbb(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1472ae482 FUN_1472ae482 body=38 status=ok
// SIG undefined FUN_1472ae482(void)

undefined8 FUN_1472ae482(undefined8 param_1,int param_2)

{
  FUN_1462ffa52();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472ae4dc FUN_1472ae4dc body=56 status=ok
// SIG undefined FUN_1472ae4dc(void)

undefined8 * FUN_1472ae4dc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a2d2c90;
  FUN_144725486();
  FUN_14003f39a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472ae514 FUN_1472ae514 body=62 status=ok
// SIG undefined FUN_1472ae514(void)

void FUN_1472ae514(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1472ae552(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xba0,0x10);
  }
  return;
}



// FUNCTION 1472ae552 FUN_1472ae552 body=113 status=ok
// SIG undefined FUN_1472ae552(void)

ulonglong FUN_1472ae552(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0xba0) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1472ae58b;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0xba0,0x10);
      param_2 = param_2 / 0xba0;
    }
  }
LAB_1472ae58b:
  return param_2 & 0xffffffff;
}



// FUNCTION 1472ae5c4 FUN_1472ae5c4 body=62 status=ok
// SIG undefined FUN_1472ae5c4(void)

void FUN_1472ae5c4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1472ae602(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,4);
  }
  return;
}



// FUNCTION 1472ae602 FUN_1472ae602 body=93 status=ok
// SIG undefined FUN_1472ae602(void)

ulonglong FUN_1472ae602(uint param_1,uint param_2)

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



// FUNCTION 1472ae660 FUN_1472ae660 body=149 status=ok
// SIG undefined FUN_1472ae660(void)

void FUN_1472ae660(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined1 (*) [16])(param_1 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 4) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 6) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x34) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x36) = (undefined1  [16])0x0;
  lVar1 = 0x210;
  do {
    *(undefined1 (*) [16])((longlong)param_1 + lVar1) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)param_1 + lVar1 + 0x10) = 0xffff0000;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x2d0);
  *(undefined4 *)((longlong)param_1 + 0x2e4) = 0;
  *(undefined1 (*) [16])(param_1 + 0x5a) = (undefined1  [16])0x0;
  *(undefined2 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x5d) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2ec) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5e) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2f4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5f) = 0;
  *(undefined2 *)((longlong)param_1 + 0x2fc) = 0;
  param_1[0x60] = 0;
  return;
}



// FUNCTION 1472ae6f6 FUN_1472ae6f6 body=29 status=ok
// SIG undefined FUN_1472ae6f6(void)

undefined8 FUN_1472ae6f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472ae714 FUN_1472ae714 body=354 status=ok
// SIG undefined FUN_1472ae714(void)

void FUN_1472ae714(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140069376();
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar14 + 0x41;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x210);
    puVar14 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar14 + 0x41;
  }
  *puVar1 = (ulonglong)puVar13;
  local_48 = DAT_14ca381a8;
  if (DAT_14ca381a8 != 0) {
    LOCK();
    *(int *)(DAT_14ca381a8 + 8) = *(int *)(DAT_14ca381a8 + 8) + 1;
    UNLOCK();
  }
  local_40 = &DAT_14ca38160;
  local_58 = 2;
  local_50 = param_3;
  FUN_140068f1a(puVar14,param_2,&local_50,1);
  *puVar14 = &PTR_FUN_14a2d2ef0;
  uVar10 = param_4[1];
  uVar11 = param_4[2];
  uVar12 = param_4[3];
  puVar14[0x37] = *param_4;
  puVar14[0x38] = uVar10;
  puVar14[0x39] = uVar11;
  puVar14[0x3a] = uVar12;
  puVar14[0x3b] = param_4[4];
  puVar14[0x3c] = param_4[5];
  uVar3 = *(undefined4 *)(param_4 + 6);
  uVar4 = *(undefined4 *)((longlong)param_4 + 0x34);
  uVar5 = *(undefined4 *)(param_4 + 7);
  uVar6 = *(undefined4 *)((longlong)param_4 + 0x3c);
  uVar7 = *(undefined4 *)(param_4 + 8);
  uVar8 = *(undefined4 *)((longlong)param_4 + 0x44);
  uVar9 = *(undefined4 *)(param_4 + 9);
  *(undefined4 *)((longlong)puVar14 + 500) = *(undefined4 *)((longlong)param_4 + 0x3c);
  *(undefined4 *)(puVar14 + 0x3f) = uVar7;
  *(undefined4 *)((longlong)puVar14 + 0x1fc) = uVar8;
  *(undefined4 *)(puVar14 + 0x40) = uVar9;
  *(undefined4 *)(puVar14 + 0x3d) = uVar3;
  *(undefined4 *)((longlong)puVar14 + 0x1ec) = uVar4;
  *(undefined4 *)(puVar14 + 0x3e) = uVar5;
  *(undefined4 *)((longlong)puVar14 + 500) = uVar6;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar14;
  *(int *)((longlong)puVar14 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    FUN_140069100(param_1,puVar14);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472ae878 FUN_1472ae878 body=38 status=ok
// SIG undefined FUN_1472ae878(void)

undefined8 FUN_1472ae878(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472ae89e FUN_1472ae89e body=125 status=ok
// SIG undefined FUN_1472ae89e(void)

void FUN_1472ae89e(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  *(undefined1 (*) [16])(param_1 + 4) = (undefined1  [16])0x0;
  lVar1 = 0x82;
  do {
    *(undefined1 (*) [16])((longlong)param_1 + lVar1 + -0x12) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)param_1 + lVar1 + -2) = 0xffff0000;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x142);
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  *(undefined1 (*) [16])(param_1 + 0x26) = (undefined1  [16])0x0;
  *(undefined2 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x29) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  *(undefined2 *)((longlong)param_1 + 0x15c) = 0;
  param_1[0x2c] = 0;
  return;
}



// FUNCTION 1472ae91c FUN_1472ae91c body=29 status=ok
// SIG undefined FUN_1472ae91c(void)

undefined8 FUN_1472ae91c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472ae93a FUN_1472ae93a body=198 status=ok
// SIG undefined FUN_1472ae93a(void)

void FUN_1472ae93a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  FUN_140069376();
  uVar3 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar2 = uVar3 + 600;
  if (*(ulonglong *)(param_1 + 0x78) < uVar2) {
    FUN_140023dd8((longlong *)(param_1 + 0x70),0x260);
    uVar3 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar2 = uVar3 + 600;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar2;
  FUN_1472aea00(uVar3,param_2,param_3,1,param_4);
  iVar1 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar1 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar1);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x168) + (longlong)iVar1 * 8) = uVar3;
  *(int *)(uVar3 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,uVar3);
  return;
}



// FUNCTION 1472aea00 FUN_1472aea00 body=244 status=ok
// SIG undefined FUN_1472aea00(void)

undefined8 *
FUN_1472aea00(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = DAT_14ca38230;
  if (DAT_14ca38230 != 0) {
    LOCK();
    *(int *)(DAT_14ca38230 + 8) = *(int *)(DAT_14ca38230 + 8) + 1;
    UNLOCK();
  }
  local_30 = &DAT_14ca381e8;
  local_48 = 2;
  local_40 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14a2d2f10;
  uVar1 = param_5[1];
  uVar2 = param_5[2];
  uVar3 = param_5[3];
  *(undefined4 *)(param_1 + 0x37) = *param_5;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = uVar3;
  param_1[0x39] = *(undefined8 *)(param_5 + 4);
  param_1[0x3a] = *(undefined8 *)(param_5 + 6);
  param_1[0x3b] = *(undefined8 *)(param_5 + 8);
  param_1[0x3c] = *(undefined8 *)(param_5 + 10);
  param_1[0x3d] = *(undefined8 *)(param_5 + 0xc);
  param_1[0x3e] = *(undefined8 *)(param_5 + 0xe);
  puVar5 = (undefined8 *)(param_5 + 0x10);
  puVar6 = param_1 + 0x3f;
  for (lVar4 = 0xb; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined1 *)(param_1 + 0x4a) = *(undefined1 *)(param_5 + 0x26);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472aeaf6 FUN_1472aeaf6 body=38 status=ok
// SIG undefined FUN_1472aeaf6(void)

undefined8 FUN_1472aeaf6(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472aeb1c FUN_1472aeb1c body=253 status=ok
// SIG undefined FUN_1472aeb1c(void)

void FUN_1472aeb1c(ulonglong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  uVar1 = *(undefined8 *)(param_3 + 8);
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 5;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x30);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 5;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar3 + 2) = (float)(int)uVar1;
  *(float *)((longlong)puVar3 + 0x14) = (float)(int)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)(puVar3 + 3) = 0;
  *(float *)((longlong)puVar3 + 0x1c) = (float)(int)uVar2;
  *(float *)(puVar3 + 4) = (float)(int)((ulonglong)uVar2 >> 0x20);
  *(undefined4 *)((longlong)puVar3 + 0x24) = 0x3f800000;
  FUN_1404e1f8e(param_1,param_5);
  FUN_142f5accc(param_7);
  FUN_1447a9dbb(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1472aec19 FUN_1472aec19 body=23 status=ok
// SIG undefined FUN_1472aec19(void)

void FUN_1472aec19(undefined8 *param_1,int param_2)

{
  do {
    *(undefined8 *)((longlong)param_1 + 0x19) = 0;
    *(undefined8 *)((longlong)param_1 + 0x21) = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1 = param_1 + 6;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}



// FUNCTION 1472aec30 FUN_1472aec30 body=88 status=ok
// SIG undefined FUN_1472aec30(void)

void FUN_1472aec30(longlong *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)(*param_1 + 0x300);
  FUN_1472ad79f(_Dst);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + 0x10);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((ulonglong)param_2 * 0x30 + (longlong)_Dst),(longlong)iVar2 * 0x30);
    iVar1 = (int)param_1[1];
  }
  *(uint *)(param_1 + 1) = iVar1 - param_2;
  return;
}



// FUNCTION 1472aec88 FUN_1472aec88 body=62 status=ok
// SIG undefined FUN_1472aec88(void)

void FUN_1472aec88(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1472aecc6(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x30,8);
  }
  return;
}



// FUNCTION 1472aecc6 FUN_1472aecc6 body=112 status=ok
// SIG undefined FUN_1472aecc6(void)

ulonglong FUN_1472aecc6(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x30) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1472aed00;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x30,8);
      param_2 = param_2 / 0x30;
    }
  }
LAB_1472aed00:
  return param_2 & 0xffffffff;
}



// FUNCTION 1472aed36 FUN_1472aed36 body=93 status=ok
// SIG undefined FUN_1472aed36(void)

void FUN_1472aed36(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a2d33e0;
  if (param_1[0x1b2d] != 0) {
    FUN_1400020a8();
  }
  FUN_1400f67f6(param_1 + 0x2b);
  *param_1 = &PTR_LAB_14a2912b0;
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_144ab2e4c(param_1 + 2);
  return;
}



// FUNCTION 1472aed94 FUN_1472aed94 body=38 status=ok
// SIG undefined FUN_1472aed94(void)

undefined8 FUN_1472aed94(undefined8 param_1,int param_2)

{
  FUN_1472aed36();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472aedba FUN_1472aedba body=85 status=ok
// SIG undefined FUN_1472aedba(void)

void FUN_1472aedba(longlong param_1,int param_2)

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
  FUN_14033fc50();
  return;
}



// FUNCTION 1472aee10 FUN_1472aee10 body=153 status=ok
// SIG undefined FUN_1472aee10(void)

void FUN_1472aee10(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x120 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x120) = param_2;
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
      puVar7 = puVar7 + 0x48;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1472aeeaa FUN_1472aeeaa body=71 status=ok
// SIG undefined FUN_1472aeeaa(void)

void FUN_1472aeeaa(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x100);
  if (*(longlong *)(param_1 + 0x100) == 0) {
    lVar1 = param_1;
  }
  FUN_144738e90(lVar1,*(undefined4 *)(param_1 + 0x108));
  *(undefined4 *)(param_1 + 0x108) = 0;
  if (*(int *)(param_1 + 0x10c) == 0) {
    return;
  }
  FUN_1472aeef2(param_1);
  return;
}



// FUNCTION 1472aeef2 FUN_1472aeef2 body=90 status=ok
// SIG undefined FUN_1472aeef2(void)

void FUN_1472aeef2(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x10c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
    if (*(void **)((longlong)param_1 + 0x100) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x100),
              (longlong)*(int *)((longlong)param_1 + 0x108) << 5);
      FUN_1446efa72((longlong)param_1 + 0x100,0,0,0x20);
      return;
    }
  }
  return;
}



// FUNCTION 1472aef4c FUN_1472aef4c body=96 status=ok
// SIG undefined FUN_1472aef4c(void)

void FUN_1472aef4c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 1472aefac FUN_1472aefac body=96 status=ok
// SIG undefined FUN_1472aefac(void)

void FUN_1472aefac(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 1472af00c FUN_1472af00c body=38 status=ok
// SIG undefined FUN_1472af00c(void)

void FUN_1472af00c(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1472af032(param_1);
    param_1 = param_1 + 0x60;
  }
  return;
}



// FUNCTION 1472af032 FUN_1472af032 body=70 status=ok
// SIG undefined FUN_1472af032(void)

void FUN_1472af032(longlong *param_1)

{
  FUN_1472af078(param_1[10],(int)param_1[0xb]);
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1472af0b5(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1472af078 FUN_1472af078 body=61 status=ok
// SIG undefined FUN_1472af078(void)

void FUN_1472af078(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x28);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-3] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1472af0b5 FUN_1472af0b5 body=41 status=ok
// SIG undefined FUN_1472af0b5(void)

void FUN_1472af0b5(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_144ab2e4c(param_1);
    param_1 = param_1 + 0x98;
  }
  return;
}



// FUNCTION 1472af0de FUN_1472af0de body=141 status=ok
// SIG undefined FUN_1472af0de(void)

void FUN_1472af0de(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = (ulonglong)uVar1;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar2);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar2 = 4;
    if (4 < uVar1) {
      uVar2 = (ulonglong)uVar1;
    }
  }
  else {
    uVar2 = (uVar2 * 3 >> 3) + uVar2 + 0x10;
  }
  uVar2 = FUN_144a3809e(uVar2 * 0x60,8);
  uVar3 = 0x7fffffff;
  if ((int)uVar1 <= (int)(uVar2 / 0x60)) {
    uVar3 = uVar2 / 0x60 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar3;
  FUN_1446f8d3c(param_1,0,uVar3,0x60,8);
  return;
}



// FUNCTION 1472af16c FUN_1472af16c body=29 status=ok
// SIG undefined FUN_1472af16c(void)

undefined8 FUN_1472af16c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472af18a FUN_1472af18a body=204 status=ok
// SIG undefined FUN_1472af18a(void)

longlong FUN_1472af18a(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x10);
  iVar2 = (int)plVar3[1];
  *(uint *)(plVar3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)plVar3 + 0xc) < iVar2 + 1U) {
    FUN_1472af258(plVar3,iVar2);
  }
  lVar4 = *plVar3;
  lVar8 = (longlong)iVar2 * 0x98;
  *(undefined8 *)(lVar4 + 0x10 + lVar8) = 0;
  *(undefined8 *)(lVar4 + 0x18 + lVar8) = 0x200000000;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + 0x30 + lVar8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + 0x40 + lVar8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + 0x50 + lVar8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + 0x60 + lVar8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(lVar4 + 0x70 + lVar8) = 0;
  FUN_14176f2be(lVar4 + lVar8,param_2);
  uVar5 = *(undefined8 *)(param_2 + 0x78);
  uVar6 = *(undefined8 *)(param_2 + 0x80);
  uVar7 = *(undefined8 *)(param_2 + 0x90);
  puVar1 = (undefined8 *)(lVar4 + 0x88 + lVar8);
  *puVar1 = *(undefined8 *)(param_2 + 0x88);
  puVar1[1] = uVar7;
  puVar1 = (undefined8 *)(lVar4 + 0x78 + lVar8);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  *(int *)(param_1 + 8) = iVar2;
  return lVar8 + **(longlong **)(param_1 + 0x10);
}



// FUNCTION 1472af258 FUN_1472af258 body=146 status=ok
// SIG undefined FUN_1472af258(void)

void FUN_1472af258(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x98,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x98)) {
      uVar5 = uVar4 / 0x98 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x98,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1472af2eb FUN_1472af2eb body=657 status=ok
// SIG undefined FUN_1472af2eb(void)

void FUN_1472af2eb(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong *param_6,longlong param_7,byte *param_8)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined1 local_a0;
  longlong local_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar5 = (**(code **)(**(longlong **)(param_2 + 8) + 0x98))();
  *(undefined4 *)(param_2 + 0x178) = uVar5;
  bVar3 = (**(code **)(**(longlong **)(param_2 + 8) + 0x88))();
  *param_8 = bVar3;
  if ((bVar3 & 0xf) == 0) {
    uVar8 = 1;
    if (*(int *)(param_7 + 0x10) < 1) {
      uVar8 = 0;
      if ((longlong)*(int *)(param_2 + 0x48) != 0) {
        lVar7 = 0;
        uVar8 = 0;
        do {
          iVar10 = (int)*(char *)(*(longlong *)(param_2 + 0x40) + 0xde + lVar7);
          if ((int)uVar8 <= iVar10) {
            uVar8 = iVar10 + 1;
          }
          lVar7 = lVar7 + 0x100;
        } while ((longlong)*(int *)(param_2 + 0x48) * 0x100 != lVar7);
      }
    }
    local_78 = 0;
    uStack_70 = 0;
    FUN_1472aaeac(&local_78,uVar8);
    FUN_1472af57e(&local_78,uVar8);
    iVar10 = (int)param_6[1];
    *(uint *)(param_6 + 1) = iVar10 + 1U;
    if (*(uint *)((longlong)param_6 + 0xc) < iVar10 + 1U) {
      FUN_1472af810(param_6,iVar10);
    }
    lVar7 = *param_6;
    lVar6 = (longlong)iVar10 * 0x38;
    puVar1 = (undefined8 *)(lVar7 + 0x20 + lVar6);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar6);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)(lVar7 + lVar6) = 0;
    ((undefined8 *)(lVar7 + lVar6))[1] = 0;
    *(undefined8 *)(lVar7 + 0x30 + lVar6) = 0;
    local_90 = param_1;
    if ((longlong)*(int *)(param_7 + 0x10) < 1) {
      if ((longlong)*(int *)(param_2 + 0x48) != 0) {
        lVar11 = *(longlong *)(param_2 + 0x40);
        lVar9 = (longlong)*(int *)(param_2 + 0x48) << 8;
        do {
          local_b0 = param_5;
          local_a0 = 0;
          local_b8 = param_4;
          local_a8 = lVar7 + lVar6;
          FUN_1472af5c0(lVar11,param_2,&local_78,param_3);
          lVar11 = lVar11 + 0x100;
          lVar9 = lVar9 + -0x100;
        } while (lVar9 != 0);
      }
    }
    else {
      lVar11 = *(longlong *)(param_7 + 8);
      lVar9 = (longlong)*(int *)(param_7 + 0x10) * 0xf0;
      do {
        local_b0 = param_5;
        local_a0 = 1;
        local_b8 = param_4;
        local_a8 = lVar7 + lVar6;
        FUN_1472af5c0(lVar11,param_2,&local_78,param_3);
        lVar11 = lVar11 + 0xf0;
        lVar9 = lVar9 + -0xf0;
      } while (lVar9 != 0);
    }
    if ((0 < (int)uVar8) && ((*param_8 & 0x40) != 0)) {
      uVar2 = *(undefined1 *)(local_90 + 0x3600);
      lVar7 = 0;
      do {
        lVar6 = local_78;
        uVar4 = FUN_1472b593e(5,CONCAT71((int7)((ulonglong)param_4 >> 8),uVar2) & 0xffffffff);
        *(undefined1 *)(lVar6 + 8 + lVar7) = uVar4;
        lVar7 = lVar7 + 0x30;
      } while ((ulonglong)uVar8 * 0x30 != lVar7);
    }
    local_88 = local_78;
    uStack_80 = uStack_70;
    local_78 = 0;
    uStack_70 = 0;
    FUN_1472af714(param_2);
    FUN_14477c11e(local_78,uStack_70 & 0xffffffff);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1472af57e FUN_1472af57e body=66 status=ok
// SIG undefined FUN_1472af57e(void)

void FUN_1472af57e(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_1472af77c(param_1,iVar1);
  }
  FUN_1472af74c((longlong)iVar1 * 0x30 + *param_1,param_2);
  return;
}



// FUNCTION 1472af5c0 FUN_1472af5c0 body=339 status=ok
// SIG undefined FUN_1472af5c0(void)

void FUN_1472af5c0(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  longlong param_5,undefined8 param_6,longlong *param_7,byte param_8)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong *puVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  FUN_1472b0d56(param_6,param_1,0xffffffffffffffff,*(undefined8 *)(param_2 + 8));
  if ((-1 < *(int *)(param_5 + 8) | param_8) == 1) {
    lVar2 = *param_4;
    lVar6 = (longlong)*(int *)(param_5 + 8) * 0x98;
    lVar3 = lVar6 + lVar2;
    puVar4 = (ulonglong *)((longlong)*(char *)(param_1 + 0xde) * 0x30 + *param_3);
    FUN_1472bb286(lVar3,puVar4);
    lVar2 = *(longlong *)(lVar2 + 0x78 + lVar6);
    if (lVar2 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (ulonglong)*(uint *)(lVar2 + 0x88);
    }
    lVar3 = FUN_144937ede(lVar3);
    *puVar4 = (lVar3 << 0x20 | uVar7) ^ *puVar4 * 2;
    *param_7 = param_2;
    iVar1 = (int)param_7[3];
    *(uint *)(param_7 + 3) = iVar1 + 1U;
    if (*(uint *)((longlong)param_7 + 0x1c) < iVar1 + 1U) {
      FUN_1472af8a0(param_7 + 1,iVar1);
    }
    plVar5 = param_7 + 1;
    if ((longlong *)param_7[2] != (longlong *)0x0) {
      plVar5 = (longlong *)param_7[2];
    }
    *(undefined1 *)((longlong)plVar5 + (longlong)iVar1) = *(undefined1 *)(param_1 + 0xde);
    iVar1 = (int)param_7[6];
    *(uint *)(param_7 + 6) = iVar1 + 1U;
    if (*(uint *)((longlong)param_7 + 0x34) < iVar1 + 1U) {
      FUN_140fadf14(param_7 + 4,iVar1);
    }
    plVar5 = param_7 + 4;
    if ((longlong *)param_7[5] != (longlong *)0x0) {
      plVar5 = (longlong *)param_7[5];
    }
    *(undefined4 *)((longlong)plVar5 + (longlong)iVar1 * 4) = *(undefined4 *)(param_5 + 8);
    *(undefined4 *)(param_5 + 8) = 0xffffffff;
  }
  return;
}



// FUNCTION 1472af714 FUN_1472af714 body=56 status=ok
// SIG undefined FUN_1472af714(void)

void FUN_1472af714(longlong param_1,longlong *param_2)

{
  FUN_1472af992(param_1 + 0x180);
  FUN_14477c11e(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1472af74c FUN_1472af74c body=47 status=ok
// SIG undefined FUN_1472af74c(void)

void FUN_1472af74c(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0x19300;
    param_1[3] = 0;
    param_1[4] = 0x200000000;
    param_1[5] = 0;
    param_1 = param_1 + 6;
  }
  return;
}



// FUNCTION 1472af77c FUN_1472af77c body=147 status=ok
// SIG undefined FUN_1472af77c(void)

void FUN_1472af77c(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
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



// FUNCTION 1472af810 FUN_1472af810 body=143 status=ok
// SIG undefined FUN_1472af810(void)

void FUN_1472af810(longlong param_1,int param_2)

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



// FUNCTION 1472af8a0 FUN_1472af8a0 body=116 status=ok
// SIG undefined FUN_1472af8a0(void)

void FUN_1472af8a0(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (param_2 <= (int)uVar1) {
    iVar5 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0x14) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar4 = (longlong)(int)uVar2;
      }
      else {
        lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      iVar3 = FUN_144a3809e(lVar4,0);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar5 = iVar3;
      }
    }
    *(int *)(param_1 + 0x14) = iVar5;
    FUN_1472af916(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1472af916 FUN_1472af916 body=124 status=ok
// SIG undefined FUN_1472af916(void)

void FUN_1472af916(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 8);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 8,0,param_3,1);
    memmove(*(void **)((longlong)param_1 + 8),param_1,(longlong)param_2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 8,param_2,param_3,1);
  return;
}



// FUNCTION 1472af992 FUN_1472af992 body=78 status=ok
// SIG undefined FUN_1472af992(void)

longlong * FUN_1472af992(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_14477c11e(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 1472af9e0 FUN_1472af9e0 body=235 status=ok
// SIG undefined FUN_1472af9e0(void)

int * FUN_1472af9e0(longlong *param_1,int *param_2)

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
      FUN_14125fb0c(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x98);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x98) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x98 + *param_1;
  return param_2;
}



// FUNCTION 1472afacc FUN_1472afacc body=29 status=ok
// SIG undefined FUN_1472afacc(void)

undefined8 FUN_1472afacc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472afaea FUN_1472afaea body=42 status=ok
// SIG undefined FUN_1472afaea(void)

longlong FUN_1472afaea(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1472aab2a(*(undefined8 *)(param_1 + 0x10));
  *(int *)(param_1 + 8) = iVar1;
  return (longlong)iVar1 * 0x98 + **(longlong **)(param_1 + 0x10);
}



// FUNCTION 1472afb15 FUN_1472afb15 body=250 status=ok
// SIG undefined FUN_1472afb15(void)

void FUN_1472afb15(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  longlong param_5,undefined8 param_6,byte param_7)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  longlong lVar7;
  
  FUN_1472b0d56(param_6,param_1,0xffffffffffffffff,*(undefined8 *)(param_2 + 8));
  if ((-1 < *(int *)(param_5 + 8) | param_7) == 1) {
    lVar2 = *param_4;
    lVar7 = (longlong)*(int *)(param_5 + 8) * 0x98;
    lVar3 = lVar2 + lVar7;
    puVar4 = (ulonglong *)((longlong)*(char *)(param_1 + 0xde) * 0x30 + *param_3);
    FUN_1472bb286(lVar3,puVar4);
    lVar2 = *(longlong *)(lVar2 + 0x78 + lVar7);
    if (lVar2 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (ulonglong)*(uint *)(lVar2 + 0x88);
    }
    lVar3 = FUN_144937ede(lVar3);
    *puVar4 = (lVar3 << 0x20 | uVar5) ^ *puVar4 * 2;
    iVar1 = (int)puVar4[4];
    *(uint *)(puVar4 + 4) = iVar1 + 1U;
    if (*(uint *)((longlong)puVar4 + 0x24) < iVar1 + 1U) {
      FUN_140fadf14(puVar4 + 2,iVar1);
    }
    puVar6 = puVar4 + 2;
    if ((ulonglong *)puVar4[3] != (ulonglong *)0x0) {
      puVar6 = (ulonglong *)puVar4[3];
    }
    *(undefined4 *)((longlong)puVar6 + (longlong)iVar1 * 4) = *(undefined4 *)(param_5 + 8);
    *(undefined4 *)(param_5 + 8) = 0xffffffff;
  }
  return;
}



// FUNCTION 1472afc10 FUN_1472afc10 body=151 status=ok
// SIG undefined FUN_1472afc10(void)

void FUN_1472afc10(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x98 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x98) = param_2;
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
      puVar7 = puVar7 + 0x26;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1472afca8 FUN_1472afca8 body=113 status=ok
// SIG undefined FUN_1472afca8(void)

void FUN_1472afca8(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x30)) {
      uVar2 = uVar1 / 0x30 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x30,8);
  }
  return;
}



// FUNCTION 1472afd4c FUN_1472afd4c body=67 status=ok
// SIG undefined FUN_1472afd4c(void)

undefined8 * FUN_1472afd4c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14a2d35c0;
  puVar2 = (undefined8 *)param_1[2];
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472afd90 FUN_1472afd90 body=117 status=ok
// SIG undefined FUN_1472afd90(void)

void FUN_1472afd90(longlong *param_1,int *param_2,uint param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  longlong *plVar5;
  
  uVar1 = *(uint *)(param_1 + 0xe);
  uVar4 = uVar1 & param_3;
  plVar3 = param_1 + 0xb;
  if ((longlong *)param_1[0xc] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[0xc];
  }
  do {
    if (*(uint *)((longlong)plVar3 + (longlong)(int)uVar4 * 4) == param_3) {
      plVar5 = (longlong *)param_1[9];
      if ((longlong *)param_1[9] == (longlong *)0x0) {
        plVar5 = param_1 + 8;
      }
      iVar2 = *(int *)((longlong)plVar5 + (longlong)(int)uVar4 * 4);
      if (*param_4 == *(int *)(*param_1 + (longlong)iVar2 * 0x58)) goto LAB_1472afdfb;
    }
    uVar4 = uVar4 + 1 & uVar1;
  } while (uVar4 != (*(int *)((longlong)param_1 + 0x74) + param_3 + 1 & uVar1));
  iVar2 = -1;
LAB_1472afdfb:
  *param_2 = iVar2;
  return;
}



// FUNCTION 1472afe06 FUN_1472afe06 body=319 status=ok
// SIG undefined FUN_1472afe06(void)

undefined4 * FUN_1472afe06(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1472aff46(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  *local_40 = *(uint *)*param_3;
  *(undefined8 *)(local_40 + 2) = *puVar1;
  *(undefined8 *)(local_40 + 4) = puVar1[1];
  puVar1[1] = 0;
  local_40[6] = *(uint *)(puVar1 + 2);
  local_40[7] = *(uint *)((longlong)puVar1 + 0x14);
  puVar1[2] = 0;
  local_40[8] = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = *local_40;
  cVar3 = FUN_1472b002c(param_1,uVar5,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_40[9] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[8] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1472b013c(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472aff46 FUN_1472aff46 body=230 status=ok
// SIG undefined FUN_1472aff46(void)

int * FUN_1472aff46(longlong *param_1,int *param_2)

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



// FUNCTION 1472b002c FUN_1472b002c body=158 status=ok
// SIG undefined FUN_1472b002c(void)

undefined8 FUN_1472b002c(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar9 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[8];
    }
    iVar10 = *(int *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar10 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar10 * 0x28);
        if (*piVar1 == *param_3) {
          if (*(longlong *)(piVar1 + 4) != 0) {
            FUN_1400020a8();
          }
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          iVar6 = param_3[5];
          iVar7 = param_3[6];
          iVar8 = param_3[7];
          piVar1[4] = param_3[4];
          piVar1[5] = iVar6;
          piVar1[6] = iVar7;
          piVar1[7] = iVar8;
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_1472b00ca(param_1,*param_4);
          *param_4 = iVar10;
          return 1;
        }
        iVar10 = piVar1[8];
      } while (iVar10 != -1);
    }
  }
  return 0;
}



// FUNCTION 1472b00ca FUN_1472b00ca body=114 status=ok
// SIG undefined FUN_1472b00ca(void)

void FUN_1472b00ca(longlong *param_1,int param_2)

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



// FUNCTION 1472b013c FUN_1472b013c body=419 status=ok
// SIG undefined FUN_1472b013c(void)

void FUN_1472b013c(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0x28);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x24 + lVar6 * 0x28) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x20 + lVar6 * 0x28) =
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



// FUNCTION 1472b02e0 FUN_1472b02e0 body=79 status=ok
// SIG undefined FUN_1472b02e0(void)

void FUN_1472b02e0(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)*param_2) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x28) == *param_2) {
          FUN_1472b0330();
          return;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x28 + 0x20);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 1472b0330 FUN_1472b0330 body=87 status=ok
// SIG undefined FUN_1472b0330(void)

void FUN_1472b0330(longlong *param_1,int param_2)

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
  lVar1 = lVar2 + (longlong)param_2 * 0x28;
  lVar6 = (longlong)*(int *)(lVar1 + 0x24);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x20 + lVar6 * 0x28);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x28 + 0x20);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x20);
  FUN_1472b0388();
  return;
}



// FUNCTION 1472b0388 FUN_1472b0388 body=52 status=ok
// SIG undefined FUN_1472b0388(void)

void FUN_1472b0388(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + 0x10 + (longlong)param_2 * 0x28) != 0) {
    FUN_1400020a8();
  }
  FUN_1472b00ca(param_1,param_2);
  return;
}



// FUNCTION 1472b03bc FUN_1472b03bc body=142 status=ok
// SIG undefined FUN_1472b03bc(void)

undefined1 *
FUN_1472b03bc(undefined1 *param_1,longlong param_2,longlong param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  ushort uVar2;
  
  *param_1 = 0;
  FUN_1471dcd16(param_4,param_5,param_6,param_1);
  FUN_1472c40fd(*(undefined1 *)(param_2 + 0x4580),param_1);
  cVar1 = FUN_1448ee8d8(param_4);
  if (cVar1 != '\0') {
    *param_1 = 1;
  }
  if ((*(byte *)(param_3 + 0x60) & 2) != 0) {
    uVar2 = FUN_144a82cbc(param_2);
    if ((~(&DAT_14ca814c8)[(ulonglong)uVar2 * 0xf] & 0x10400000) == 0) {
      *param_1 = 1;
    }
  }
  if (DAT_14ca385a0 != 0) {
    *param_1 = 0;
  }
  return param_1;
}



// FUNCTION 1472b044a FUN_1472b044a body=153 status=ok
// SIG undefined FUN_1472b044a(void)

undefined8 *
FUN_1472b044a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = param_6;
  local_48 = param_5;
  FUN_1472b03bc(&local_29,param_2,param_4,param_3);
  puVar1 = (undefined8 *)FUN_142f6fd72(param_1);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined1 *)(puVar1 + 2) = local_29;
  memset(puVar1 + 3,0,0x91);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472b0504 FUN_1472b0504 body=118 status=ok
// SIG undefined FUN_1472b0504(void)

undefined4 * FUN_1472b0504(uint param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca3e630) {
    FUN_144b3d300(&DAT_14ca3e630);
    if (DAT_14ca3e630 == -1) {
      FUN_1472bb640();
      atexit(FUN_142f6f63e);
      _Init_thread_footer(&DAT_14ca3e630);
    }
  }
  return &DAT_14ca3e490 + ((ulonglong)param_1 & 0xff) * 0x34;
}



// FUNCTION 1472b057a FUN_1472b057a body=327 status=ok
// SIG undefined FUN_1472b057a(void)

longlong FUN_1472b057a(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  longlong local_a0;
  longlong local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *(undefined1 *)(param_1 + 8) = 0;
  if ((*(byte *)((longlong)&DAT_14ca814d0 +
                (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_2 + 0x3090) * 2) *
                0x3c + 7) & 0x60) != 0) {
    lVar3 = FUN_1472b0504(0);
    if (lVar3 != 0) {
      FUN_147413350(local_a8,lVar3);
      FUN_144b1c300(local_a8,*(undefined8 *)(param_2 + 0x18));
      FUN_144b1c300(local_a8,param_3);
      lVar3 = DAT_14ca1c4e0;
      if (DAT_14ca1c4e0 == 0) {
        FUN_144b1c300(local_a8,0);
      }
      else {
        LOCK();
        *(int *)(DAT_14ca1c4e0 + 8) = *(int *)(DAT_14ca1c4e0 + 8) + 1;
        UNLOCK();
        FUN_144b1c300(local_a8,lVar3);
        LOCK();
        puVar1 = (uint *)(lVar3 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812(lVar3);
        }
      }
      FUN_144b1c300(local_a8,*(undefined8 *)(param_2 + 0x13b08));
      FUN_1472b06c2(param_1,param_4,local_a8);
      if (local_50 != 0) {
        FUN_1400020a8();
      }
      if (local_a0 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472b06c2 FUN_1472b06c2 body=128 status=ok
// SIG undefined FUN_1472b06c2(void)

longlong FUN_1472b06c2(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [120];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_1471f3c22(param_1);
  }
  FUN_1446fe076(local_a0,param_3);
  FUN_1472bfb30(param_1,param_2,local_a0);
  *(undefined1 *)(param_1 + 8) = 1;
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472b0743 FUN_1472b0743 body=723 status=ok
// SIG undefined FUN_1472b0743(void)

void FUN_1472b0743(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  int param_5)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined1 local_61;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar3 = (undefined8 *)FUN_142f6fe74();
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined4 *)(puVar3 + 2) = 0;
  FUN_1400eb768(puVar3,0);
  iVar1 = *(int *)(param_3 + 0x117b8);
  *(uint *)(param_3 + 0x117b8) = iVar1 + 1U;
  if (*(uint *)(param_3 + 0x117bc) < iVar1 + 1U) {
    FUN_1472bfbfe((longlong *)(param_3 + 0x117b0),iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_3 + 0x117b0) + (longlong)iVar1 * 8) = puVar3;
  puVar4 = (undefined8 *)FUN_142f70130(param_1);
  *puVar4 = 0;
  puVar4[1] = 0;
  if (param_5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_5);
  }
  if (param_5 != 0) {
    FUN_1472bfc84(puVar4,param_5);
  }
  iVar1 = *(int *)(param_3 + 0x117a8);
  *(uint *)(param_3 + 0x117a8) = iVar1 + 1U;
  if (*(uint *)(param_3 + 0x117ac) < iVar1 + 1U) {
    FUN_1472bfce4(param_3 + 0x117a0,iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_3 + 0x117a0) + (longlong)iVar1 * 8) = puVar4;
  puVar5 = (undefined8 *)FUN_144a23e24(&DAT_14c896140);
  puVar7 = (undefined8 *)puVar5[1];
  if (puVar7 != (undefined8 *)0x0) {
    iVar1 = *(int *)(puVar5 + 2) + -1;
    goto LAB_1472b082c;
  }
  puVar7 = (undefined8 *)*puVar5;
  if (puVar7 == (undefined8 *)0x0) {
    uVar2 = FUN_14470efbc(&DAT_14c896180);
    if (uVar2 == 0) {
      puVar5[1] = 0;
LAB_1472b09e3:
      puVar7 = (undefined8 *)FUN_14001cc68(0x10000,0);
      puVar5[1] = puVar7;
      iVar1 = 0xff;
      puVar8 = puVar7;
      do {
        puVar6 = puVar8 + 0x20;
        *puVar8 = puVar6;
        iVar1 = iVar1 + -1;
        puVar8 = puVar6;
      } while (iVar1 != 0);
      goto LAB_1472b093c;
    }
    puVar7 = *(undefined8 **)
              (*(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar2 >> 0xe) * 8) + 8 +
              (ulonglong)(uVar2 & 0x3fff) * 0x18);
    FUN_1447d080c(uVar2);
    puVar5[1] = puVar7;
    if (puVar7 == (undefined8 *)0x0) goto LAB_1472b09e3;
  }
  else {
    puVar5[1] = puVar7;
    puVar6 = puVar5;
LAB_1472b093c:
    *puVar6 = 0;
  }
  *(undefined4 *)(puVar5 + 2) = 0x100;
  iVar1 = 0xff;
LAB_1472b082c:
  puVar5[1] = *puVar7;
  *(int *)(puVar5 + 2) = iVar1;
  FUN_144a23e74(puVar7,2,1);
  *puVar7 = &PTR_FUN_14a2dba28;
  local_78 = 0;
  FUN_144a24082(puVar7,L".\\Runtime/Renderer/Private/RayTracing/RayTracing.cpp(431)",1,0);
  puVar7[0x15] = param_4;
  puVar7[0x16] = param_3;
  puVar7[0x17] = param_2;
  puVar7[0x18] = puVar3;
  puVar7[0x19] = puVar4;
  *puVar7 = &PTR_FUN_14a2dba18;
  FUN_144a23f14((ulonglong)puVar7[0x10] >> 0x3b & 0xffffffffffffff07,
                *(undefined4 *)((longlong)puVar7 + 0x1c));
  local_61 = 1;
  FUN_1447439e4(puVar7);
  iVar1 = *(int *)(param_3 + 0x11798);
  *(uint *)(param_3 + 0x11798) = iVar1 + 1U;
  if (*(uint *)(param_3 + 0x1179c) < iVar1 + 1U) {
    FUN_146c54922((longlong *)(param_3 + 0x11790),iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_3 + 0x11790) + (longlong)iVar1 * 8) = puVar7;
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1472b0a18 FUN_1472b0a18 body=266 status=ok
// SIG undefined FUN_1472b0a18(void)

longlong *
FUN_1472b0a18(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5)

{
  longlong *plVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  uVar2 = FUN_147430d07();
  *(undefined1 *)(param_1 + 4) = uVar2;
  lVar3 = FUN_14001cc68(0x308,0x10);
  FUN_14009016e(lVar3,~(-1 << ((byte)DAT_14c760da4 & 0x1f)),0);
  param_1[5] = lVar3;
  param_1[6] = lVar3;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = lVar3;
  plVar1 = param_1 + 0xe;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FUN_147cee930(plVar1,*(undefined4 *)(param_2 + 8),param_4,param_1[1],(char)param_1[4]);
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  FUN_14002049c(param_1[5],1);
  FUN_144b2705c(plVar1,param_1[5],param_1 + 6,param_1 + 9,&DAT_14ca47560);
  FUN_144b2707e(plVar1,param_1[1],0,0,param_1[1] + 0x13bc8);
  return param_1;
}



// FUNCTION 1472b0b22 FUN_1472b0b22 body=195 status=ok
// SIG undefined FUN_1472b0b22(void)

undefined8 FUN_1472b0b22(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_50;
  undefined8 local_40;
  int local_38;
  undefined4 local_34;
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_2c = FUN_1472b59f1(param_3);
  local_40 = *(undefined8 *)(param_2 + 0x18);
  local_38 = *(int *)(param_2 + 0x20);
  local_34 = *(undefined4 *)(param_2 + 0x24);
  if (*(char *)(param_2 + 0x2b) == '\x01') {
    local_50 = 0x40;
    if ((0xffffff < local_2c) && (local_50 = 0x22, 0x2ffffff < local_2c)) {
      local_50 = 0;
    }
  }
  else {
    local_50 = 0;
  }
  if (*(int *)(param_2 + 0x10) != 0) {
    local_38 = *(int *)(param_2 + 0x10);
    local_40 = *(undefined8 *)(param_2 + 8);
  }
  local_58 = *(undefined1 *)(param_2 + 0x2c);
  FUN_1472b5a68(param_1,&local_40,*(undefined4 *)(*(longlong *)(param_3 + 0x210) + 8),&local_2c);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472b0be6 FUN_1472b0be6 body=11 status=ok
// SIG undefined FUN_1472b0be6(void)

bool FUN_1472b0be6(void)

{
  return DAT_14ca385c8 != 0;
}



// FUNCTION 1472b0bf2 FUN_1472b0bf2 body=355 status=ok
// SIG undefined FUN_1472b0bf2(void)

byte * FUN_1472b0bf2(longlong param_1,byte *param_2,undefined8 *param_3,byte param_4,
                    longlong *param_5,byte param_6)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  uint uVar18;
  uint *puVar19;
  longlong lVar20;
  
  lVar5 = *(longlong *)(param_1 + 0x70);
  uVar6 = *param_3;
  lVar1 = lVar5 + (ulonglong)param_4 * 0xf8;
  iVar4 = *(int *)(lVar1 + 0xe0);
  *(uint *)(lVar1 + 0xe0) = iVar4 + 1U;
  if (*(uint *)(lVar1 + 0xe4) < iVar4 + 1U) {
    FUN_1472c373e((longlong *)(lVar1 + 0xd8),iVar4);
  }
  lVar1 = *(longlong *)(lVar1 + 0xd8);
  lVar20 = (longlong)iVar4 * 0x60;
  *(undefined8 *)(lVar1 + 0x30 + lVar20) = param_3[6];
  uVar14 = *param_3;
  uVar15 = param_3[1];
  uVar16 = param_3[2];
  uVar17 = param_3[3];
  uVar7 = *(undefined4 *)((longlong)param_3 + 0x24);
  uVar8 = *(undefined4 *)(param_3 + 5);
  uVar9 = *(undefined4 *)((longlong)param_3 + 0x2c);
  puVar2 = (undefined4 *)(lVar1 + 0x20 + lVar20);
  *puVar2 = *(undefined4 *)(param_3 + 4);
  puVar2[1] = uVar7;
  puVar2[2] = uVar8;
  puVar2[3] = uVar9;
  puVar3 = (undefined8 *)(lVar1 + 0x10 + lVar20);
  *puVar3 = uVar16;
  puVar3[1] = uVar17;
  *(undefined8 *)(lVar1 + lVar20) = uVar14;
  ((undefined8 *)(lVar1 + lVar20))[1] = uVar15;
  *(undefined8 *)(lVar1 + 0x38 + lVar20) = param_3[7];
  param_3[7] = 0;
  uVar7 = *(undefined4 *)(param_3 + 8);
  uVar8 = *(undefined4 *)((longlong)param_3 + 0x44);
  uVar9 = *(undefined4 *)(param_3 + 9);
  uVar10 = *(undefined4 *)((longlong)param_3 + 0x4c);
  uVar11 = *(undefined4 *)((longlong)param_3 + 0x51);
  uVar12 = *(undefined4 *)((longlong)param_3 + 0x55);
  uVar13 = *(undefined4 *)((longlong)param_3 + 0x59);
  puVar2 = (undefined4 *)(lVar1 + 0x4d + lVar20);
  *puVar2 = *(undefined4 *)((longlong)param_3 + 0x4d);
  puVar2[1] = uVar11;
  puVar2[2] = uVar12;
  puVar2[3] = uVar13;
  puVar2 = (undefined4 *)(lVar1 + 0x40 + lVar20);
  *puVar2 = uVar7;
  puVar2[1] = uVar8;
  puVar2[2] = uVar9;
  puVar2[3] = uVar10;
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    puVar19 = (uint *)FUN_1472bb4f0(lVar5 + (ulonglong)param_4 * 0xf8 + 0xe8);
    *puVar19 = (uint)param_6;
    *(undefined8 *)(puVar19 + 2) = uVar6;
    if (param_5 != (longlong *)0x0) {
      uVar18 = (**(code **)(*param_5 + 8))(param_5);
      puVar19[1] = uVar18;
    }
  }
  *param_2 = param_4;
  *(int *)(param_2 + 4) = iVar4;
  if (param_3[7] != 0) {
    LOCK();
    puVar19 = (uint *)(param_3[7] + 8);
    uVar18 = *puVar19;
    *puVar19 = *puVar19 - 1;
    UNLOCK();
    if ((uVar18 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  return param_2;
}



// FUNCTION 1472b0d56 FUN_1472b0d56 body=156 status=ok
// SIG undefined FUN_1472b0d56(void)

void FUN_1472b0d56(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (((*(byte *)(param_2 + 0xe5) & 2) != 0) &&
     (lVar2 = (**(code **)(**(longlong **)(param_2 + 0xb8) + 0x30))(),
     (*(byte *)(lVar2 + 0x29) & 2) != 0)) {
    plVar3 = *(longlong **)(param_2 + 0xc0);
    while ((plVar3 != (longlong *)0x0 &&
           (((lVar2 = (**(code **)(*plVar3 + 0x30))(plVar3,*(undefined4 *)(param_1 + 0x20)),
             lVar2 == 0 || (*(longlong *)(lVar2 + 0x18) == 0)) ||
            (cVar1 = FUN_1472ba338(param_1,param_2,param_3,param_4,plVar3,lVar2), cVar1 == '\0')))))
    {
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x38))(plVar3,*(undefined4 *)(param_1 + 0x20));
    }
  }
  return;
}



// FUNCTION 1472b0df2 FUN_1472b0df2 body=148 status=ok
// SIG undefined FUN_1472b0df2(void)

void FUN_1472b0df2(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 2);
  if (0 < (int)uVar1) {
    iVar3 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar3 + uVar1;
    if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar3) < uVar1) {
      FUN_1446f48e2(param_2,iVar3);
    }
    if (0 < (int)param_1[1]) {
      _Dst = (void *)((longlong)iVar3 * 4 + *param_2);
      iVar3 = 0;
      lVar4 = 0;
      do {
        iVar2 = (int)param_1[2] + iVar3;
        if (0xfff < iVar2) {
          iVar2 = 0x1000;
        }
        memcpy(_Dst,*(void **)(*param_1 + lVar4 * 8),(longlong)iVar2 * 4);
        _Dst = (void *)((longlong)_Dst + (longlong)iVar2 * 4);
        lVar4 = lVar4 + 1;
        iVar3 = iVar3 + -0x1000;
      } while (lVar4 < (int)param_1[1]);
    }
  }
  return;
}



// FUNCTION 1472b0e86 FUN_1472b0e86 body=143 status=ok
// SIG undefined FUN_1472b0e86(void)

void FUN_1472b0e86(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 2);
  if (0 < (int)uVar1) {
    iVar3 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar3 + uVar1;
    if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar3) < uVar1) {
      FUN_1405b572a(param_2,iVar3);
    }
    if (0 < (int)param_1[1]) {
      _Dst = (void *)((longlong)iVar3 * 2 + *param_2);
      iVar3 = 0;
      lVar4 = 0;
      do {
        iVar2 = (int)param_1[2] + iVar3;
        if (0x1fff < iVar2) {
          iVar2 = 0x2000;
        }
        memcpy(_Dst,*(void **)(*param_1 + lVar4 * 8),(longlong)iVar2 * 2);
        _Dst = (void *)((longlong)_Dst + (longlong)iVar2 * 2);
        lVar4 = lVar4 + 1;
        iVar3 = iVar3 + -0x2000;
      } while (lVar4 < (int)param_1[1]);
    }
  }
  return;
}



// FUNCTION 1472b0f16 FUN_1472b0f16 body=148 status=ok
// SIG undefined FUN_1472b0f16(void)

void FUN_1472b0f16(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 2);
  if (0 < (int)uVar1) {
    iVar3 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar3 + uVar1;
    if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar3) < uVar1) {
      FUN_141762202(param_2,iVar3);
    }
    if (0 < (int)param_1[1]) {
      _Dst = (void *)((longlong)iVar3 * 8 + *param_2);
      iVar3 = 0;
      lVar4 = 0;
      do {
        iVar2 = (int)param_1[2] + iVar3;
        if (0x7ff < iVar2) {
          iVar2 = 0x800;
        }
        memcpy(_Dst,*(void **)(*param_1 + lVar4 * 8),(longlong)iVar2 * 8);
        _Dst = (void *)((longlong)_Dst + (longlong)iVar2 * 8);
        lVar4 = lVar4 + 1;
        iVar3 = iVar3 + -0x800;
      } while (lVar4 < (int)param_1[1]);
    }
  }
  return;
}



// FUNCTION 1472b0faa FUN_1472b0faa body=110 status=ok
// SIG undefined FUN_1472b0faa(void)

void FUN_1472b0faa(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1472c04e4(param_1,iVar1);
    }
    FUN_1472c04cd((longlong)iVar1 * 0xc + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_1472c0578(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1472b101a FUN_1472b101a body=151 status=ok
// SIG undefined FUN_1472b101a(void)

void FUN_1472b101a(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  void *_Dst;
  int iVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 2);
  if (0 < (int)uVar1) {
    iVar3 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar3 + uVar1;
    if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar3) < uVar1) {
      FUN_1472c0626(param_2,iVar3);
    }
    if (0 < (int)param_1[1]) {
      _Dst = (void *)((longlong)iVar3 * 0x40 + *param_2);
      iVar3 = 0;
      lVar4 = 0;
      do {
        iVar2 = (int)param_1[2] + iVar3;
        if (0xff < iVar2) {
          iVar2 = 0x100;
        }
        memcpy(_Dst,*(void **)(*param_1 + lVar4 * 8),(longlong)iVar2 * 0x40);
        _Dst = (void *)((longlong)_Dst + (longlong)iVar2 * 0x40);
        lVar4 = lVar4 + 1;
        iVar3 = iVar3 + -0x100;
      } while (lVar4 < (int)param_1[1]);
    }
  }
  return;
}



// FUNCTION 1472b10b2 FUN_1472b10b2 body=49 status=ok
// SIG undefined FUN_1472b10b2(void)

ulonglong FUN_1472b10b2(longlong *param_1)

{
  return (ulonglong)(*(byte *)((longlong)param_1 + 0x12) & 1) << 0x30 ^
         (ulonglong)*(byte *)((longlong)param_1 + 0x11) << 0x28 ^
         (ulonglong)*(byte *)(param_1 + 2) << 0x20 ^ param_1[1] ^ *(ulonglong *)(*param_1 + 0x90);
}



// FUNCTION 1472b10e4 FUN_1472b10e4 body=187 status=ok
// SIG undefined FUN_1472b10e4(void)

longlong FUN_1472b10e4(longlong param_1,longlong param_2,undefined4 *param_3)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined1 auStack_78 [32];
  longlong local_58;
  uint local_50;
  undefined4 *local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = (int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2;
  uVar3 = (ulonglong)(*(uint *)(param_1 + 0x20) & uVar4);
  lVar2 = *(longlong *)(param_1 + 8);
  if ((lVar2 == 0) || (*(char *)(lVar2 + uVar3) < '\0')) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\0';
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x10) + uVar3 * 8) == param_2) {
        lVar2 = uVar3 * 0x28 + *(longlong *)(param_1 + 0x18);
        goto LAB_1472b1149;
      }
      uVar3 = (ulonglong)((int)uVar3 + 1);
      cVar1 = cVar1 + '\x01';
    } while (cVar1 <= *(char *)(lVar2 + uVar3));
  }
  local_18 = *(undefined8 *)(param_3 + 8);
  local_48 = &local_38;
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  local_28 = param_3[4];
  uStack_24 = param_3[5];
  uStack_20 = param_3[6];
  uStack_1c = param_3[7];
  local_58 = param_2;
  local_50 = uVar4;
  lVar2 = FUN_1472c06ac(local_38,cVar1,param_1);
LAB_1472b1149:
  if ((local_10 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 1472b11a0 FUN_1472b11a0 body=200 status=ok
// SIG undefined FUN_1472b11a0(void)

bool FUN_1472b11a0(longlong param_1,longlong param_2,undefined4 param_3)

{
  ulonglong *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *_Dst;
  ulonglong uVar5;
  void *pvVar6;
  
  iVar2 = *(int *)(param_1 + 0x18);
  iVar3 = *(int *)(param_1 + 0x20);
  if (iVar3 == iVar2) {
    uVar5 = 1;
    if (1 < iVar3 * 2) {
      uVar5 = (ulonglong)(uint)(iVar3 * 2);
    }
    puVar1 = (ulonglong *)(param_2 + 0x80);
    _Dst = (void *)(*(longlong *)(param_2 + 0x80) + 0xfU & 0xfffffffffffffff0);
    pvVar6 = (void *)((longlong)_Dst + uVar5 * 4);
    if (*(void **)(param_2 + 0x88) < pvVar6) {
      FUN_140023dd8(puVar1,(int)(uVar5 * 4) + 0x10);
      _Dst = (void *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      pvVar6 = (void *)(uVar5 * 4 + (longlong)_Dst);
    }
    *puVar1 = (ulonglong)pvVar6;
    if (iVar3 != 0) {
      memcpy(_Dst,*(void **)(param_1 + 0x10),(longlong)*(int *)(param_1 + 0x18) << 2);
    }
    *(void **)(param_1 + 0x10) = _Dst;
    *(int *)(param_1 + 0x18) = (int)uVar5;
    iVar4 = *(int *)(param_1 + 0x20);
  }
  else {
    _Dst = *(void **)(param_1 + 0x10);
    iVar4 = iVar3;
  }
  *(undefined4 *)((longlong)_Dst + (longlong)iVar4 * 4) = param_3;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  return iVar3 == iVar2;
}



// FUNCTION 1472b1268 FUN_1472b1268 body=179 status=ok
// SIG undefined FUN_1472b1268(void)

byte * FUN_1472b1268(longlong param_1,byte *param_2,uint param_3,byte param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x70);
  lVar5 = (ulonglong)param_4 * 0xf8;
  lVar1 = lVar4 + lVar5;
  iVar2 = *(int *)(lVar4 + 0xe0 + lVar5);
  *(uint *)(lVar4 + 0xe0 + lVar5) = iVar2 + param_3;
  if ((uint)(*(int *)(lVar4 + 0xe4 + lVar5) - iVar2) < param_3) {
    FUN_1472c373e(lVar1 + 0xd8,iVar2);
  }
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    iVar3 = *(int *)(lVar1 + 0xf0);
    *(uint *)(lVar1 + 0xf0) = iVar3 + param_3;
    if ((uint)(*(int *)(lVar1 + 0xf4) - iVar3) < param_3) {
      FUN_1472c37da(lVar1 + 0xe8);
    }
  }
  *param_2 = param_4;
  *(int *)(param_2 + 4) = iVar2;
  *(uint *)(param_2 + 8) = param_3;
  return param_2;
}



// FUNCTION 1472b131c FUN_1472b131c body=190 status=ok
// SIG undefined FUN_1472b131c(void)

void FUN_1472b131c(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (0 < *(int *)(param_1 + 0x58)) {
    uVar3 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x50) + (longlong)(int)uVar3 * 8);
      *(undefined4 *)(lVar1 + 0x30) = 0;
      if ((longlong)(ulonglong)(uint)(DAT_14c760914 + *(int *)(lVar1 + 0x34)) <=
          *(longlong *)(param_1 + 0x70)) {
        iVar2 = *(int *)(param_1 + 0x58);
        iVar4 = ~uVar3 + iVar2;
        if (iVar4 != 0) {
          if (0 < iVar4) {
            iVar4 = 1;
          }
          memmove((void *)(*(longlong *)(param_1 + 0x50) + (longlong)(int)uVar3 * 8),
                  (void *)(*(longlong *)(param_1 + 0x50) + (longlong)(iVar2 - iVar4) * 8),
                  (longlong)iVar4 << 3);
          iVar2 = *(int *)(param_1 + 0x58);
        }
        *(int *)(param_1 + 0x58) = iVar2 + -1;
        FUN_1472c1826(param_1 + 0x50);
        if (lVar1 != 0) {
          FUN_14476820c(lVar1);
          FUN_1400020a8(lVar1);
        }
        uVar3 = uVar3 - 1;
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < *(int *)(param_1 + 0x58));
  }
  *(longlong *)(param_1 + 0x70) = *(longlong *)(param_1 + 0x70) + 1;
  return;
}



// FUNCTION 1472b13da FUN_1472b13da body=78 status=ok
// SIG undefined FUN_1472b13da(void)

void FUN_1472b13da(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x238) != 0) {
    FUN_1400020a8();
  }
  FUN_1472bba8e(param_1 + 0x70);
  FUN_144ab4c20(param_1 + 0x48);
  FUN_14485b438(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1472b1428 FUN_1472b1428 body=42 status=ok
// SIG undefined FUN_1472b1428(void)

void FUN_1472b1428(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472b1480 FUN_1472b1480 body=67 status=ok
// SIG undefined FUN_1472b1480(void)

undefined8 FUN_1472b1480(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar1,param_1);
  FUN_14744193e(uVar1,uVar1,*(undefined4 *)(param_1 + 0x6c),*(undefined8 *)(param_1 + 0x28));
  return uVar1;
}



// FUNCTION 1472b14c4 FUN_1472b14c4 body=52 status=ok
// SIG undefined FUN_1472b14c4(void)

void FUN_1472b14c4(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472b14f8 FUN_1472b14f8 body=329 status=ok
// SIG undefined FUN_1472b14f8(void)

void FUN_1472b14f8(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar8 = *(uint *)(param_1 + 0x2b28) & 1;
  if (-1 < (int)DAT_14c760908) {
    uVar8 = DAT_14c760908;
  }
  cVar4 = FUN_14090c054(CONCAT31((int3)(uVar8 >> 8),0.0 < *(float *)(param_1 + 0x2b30) && uVar8 != 0
                                ),1,param_1);
  if (cVar4 != '\0') {
    uVar8 = 0;
    bVar3 = true;
    do {
      bVar6 = bVar3;
      uVar7 = 0;
      bVar3 = true;
      do {
        bVar9 = bVar3;
        uVar2 = *(undefined8 *)(param_1 + 0x13818);
        FUN_145eaf6ee();
        FUN_1448e935e(uVar2,&local_58,&DAT_14ca38718,uVar7 | uVar8);
        FUN_145eaf6ee();
        if (local_58 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = *(longlong *)
                   (*(longlong *)(*(longlong *)(local_50 + 8) + 0x50) +
                   (longlong)*(int *)(local_58 + 0xd4) * 8);
          if (lVar5 == 0) {
            lVar5 = FUN_1400bafc2(*(longlong *)(local_50 + 8),(longlong)*(int *)(local_58 + 0xd4),1)
            ;
          }
        }
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_1471499ca(param_2,iVar1);
        }
        *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar5;
        uVar7 = 2;
        bVar3 = false;
      } while (bVar9);
      uVar8 = 1;
      bVar3 = false;
    } while (bVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472b1642 FUN_1472b1642 body=23 status=ok
// SIG undefined FUN_1472b1642(void)

undefined8 FUN_1472b1642(longlong param_1,byte param_2)

{
  return *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x88 + (ulonglong)param_2 * 0xf8);
}



// FUNCTION 1472b165a FUN_1472b165a body=42 status=ok
// SIG undefined FUN_1472b165a(void)

void FUN_1472b165a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472b16b2 FUN_1472b16b2 body=67 status=ok
// SIG undefined FUN_1472b16b2(void)

undefined8 FUN_1472b16b2(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar1,param_1);
  FUN_14744193e(uVar1,uVar1,*(undefined4 *)(param_1 + 0x6c),*(undefined8 *)(param_1 + 0x28));
  return uVar1;
}



// FUNCTION 1472b16f6 FUN_1472b16f6 body=52 status=ok
// SIG undefined FUN_1472b16f6(void)

void FUN_1472b16f6(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472b172a FUN_1472b172a body=42 status=ok
// SIG undefined FUN_1472b172a(void)

void FUN_1472b172a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472b1782 FUN_1472b1782 body=39 status=ok
// SIG undefined FUN_1472b1782(void)

void FUN_1472b1782(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar1,param_1);
  return;
}



// FUNCTION 1472b17aa FUN_1472b17aa body=52 status=ok
// SIG undefined FUN_1472b17aa(void)

void FUN_1472b17aa(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472b17de FUN_1472b17de body=42 status=ok
// SIG undefined FUN_1472b17de(void)

void FUN_1472b17de(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472b1810 FUN_1472b1810 body=96 status=ok
// SIG undefined FUN_1472b1810(void)

undefined8 FUN_1472b1810(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f80ee0();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca3e748,1);
  return uVar3;
}



// FUNCTION 1472b1870 FUN_1472b1870 body=52 status=ok
// SIG undefined FUN_1472b1870(void)

void FUN_1472b1870(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472b18a4 FUN_1472b18a4 body=42 status=ok
// SIG undefined FUN_1472b18a4(void)

void FUN_1472b18a4(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472b18dc FUN_1472b18dc body=67 status=ok
// SIG undefined FUN_1472b18dc(void)

undefined8 FUN_1472b18dc(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar1,param_1);
  FUN_14744193e(uVar1,uVar1,*(undefined4 *)(param_1 + 0x6c),*(undefined8 *)(param_1 + 0x28));
  return uVar1;
}



// FUNCTION 1472b1920 FUN_1472b1920 body=52 status=ok
// SIG undefined FUN_1472b1920(void)

void FUN_1472b1920(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472b1954 FUN_1472b1954 body=42 status=ok
// SIG undefined FUN_1472b1954(void)

void FUN_1472b1954(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472b198c FUN_1472b198c body=67 status=ok
// SIG undefined FUN_1472b198c(void)

undefined8 FUN_1472b198c(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar1,param_1);
  FUN_14744193e(uVar1,uVar1,*(undefined4 *)(param_1 + 0x6c),*(undefined8 *)(param_1 + 0x28));
  return uVar1;
}



// FUNCTION 1472b19d0 FUN_1472b19d0 body=52 status=ok
// SIG undefined FUN_1472b19d0(void)

void FUN_1472b19d0(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472b1a04 FUN_1472b1a04 body=42 status=ok
// SIG undefined FUN_1472b1a04(void)

void FUN_1472b1a04(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472b1a3c FUN_1472b1a3c body=39 status=ok
// SIG undefined FUN_1472b1a3c(void)

void FUN_1472b1a3c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar1,param_1);
  return;
}



// FUNCTION 1472b1a64 FUN_1472b1a64 body=52 status=ok
// SIG undefined FUN_1472b1a64(void)

void FUN_1472b1a64(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472b1a98 FUN_1472b1a98 body=42 status=ok
// SIG undefined FUN_1472b1a98(void)

void FUN_1472b1a98(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472b1b00 FUN_1472b1b00 body=67 status=ok
// SIG undefined FUN_1472b1b00(void)

undefined8 FUN_1472b1b00(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar1,param_1);
  FUN_14744193e(uVar1,uVar1,*(undefined4 *)(param_1 + 0x6c),*(undefined8 *)(param_1 + 0x28));
  return uVar1;
}



// FUNCTION 1472b1b44 FUN_1472b1b44 body=52 status=ok
// SIG undefined FUN_1472b1b44(void)

void FUN_1472b1b44(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472b1b78 FUN_1472b1b78 body=42 status=ok
// SIG undefined FUN_1472b1b78(void)

void FUN_1472b1b78(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472b1bd0 FUN_1472b1bd0 body=39 status=ok
// SIG undefined FUN_1472b1bd0(void)

void FUN_1472b1bd0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar1,param_1);
  return;
}



// FUNCTION 1472b1bf8 FUN_1472b1bf8 body=52 status=ok
// SIG undefined FUN_1472b1bf8(void)

void FUN_1472b1bf8(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472b1c2c FUN_1472b1c2c body=42 status=ok
// SIG undefined FUN_1472b1c2c(void)

void FUN_1472b1c2c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472b1c84 FUN_1472b1c84 body=39 status=ok
// SIG undefined FUN_1472b1c84(void)

void FUN_1472b1c84(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar1,param_1);
  return;
}



// FUNCTION 1472b1cac FUN_1472b1cac body=52 status=ok
// SIG undefined FUN_1472b1cac(void)

void FUN_1472b1cac(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472b1ce0 FUN_1472b1ce0 body=42 status=ok
// SIG undefined FUN_1472b1ce0(void)

void FUN_1472b1ce0(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472b1d38 FUN_1472b1d38 body=67 status=ok
// SIG undefined FUN_1472b1d38(void)

undefined8 FUN_1472b1d38(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar1,param_1);
  FUN_14744193e(uVar1,uVar1,*(undefined4 *)(param_1 + 0x6c),*(undefined8 *)(param_1 + 0x28));
  return uVar1;
}



// FUNCTION 1472b1d7c FUN_1472b1d7c body=52 status=ok
// SIG undefined FUN_1472b1d7c(void)

void FUN_1472b1d7c(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472b1db0 FUN_1472b1db0 body=42 status=ok
// SIG undefined FUN_1472b1db0(void)

void FUN_1472b1db0(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472b1e08 FUN_1472b1e08 body=67 status=ok
// SIG undefined FUN_1472b1e08(void)

undefined8 FUN_1472b1e08(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar1,param_1);
  FUN_14744193e(uVar1,uVar1,*(undefined4 *)(param_1 + 0x6c),*(undefined8 *)(param_1 + 0x28));
  return uVar1;
}



// FUNCTION 1472b1e4c FUN_1472b1e4c body=52 status=ok
// SIG undefined FUN_1472b1e4c(void)

void FUN_1472b1e4c(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472b1e80 FUN_1472b1e80 body=42 status=ok
// SIG undefined FUN_1472b1e80(void)

void FUN_1472b1e80(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472b1eb2 FUN_1472b1eb2 body=96 status=ok
// SIG undefined FUN_1472b1eb2(void)

undefined8 FUN_1472b1eb2(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145ec63aa();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca3ea78,1);
  return uVar3;
}



// FUNCTION 1472b1f12 FUN_1472b1f12 body=52 status=ok
// SIG undefined FUN_1472b1f12(void)

void FUN_1472b1f12(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472b1f46 FUN_1472b1f46 body=42 status=ok
// SIG undefined FUN_1472b1f46(void)

void FUN_1472b1f46(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472b1f9e FUN_1472b1f9e body=67 status=ok
// SIG undefined FUN_1472b1f9e(void)

undefined8 FUN_1472b1f9e(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar1,param_1);
  FUN_14744193e(uVar1,uVar1,*(undefined4 *)(param_1 + 0x6c),*(undefined8 *)(param_1 + 0x28));
  return uVar1;
}



// FUNCTION 1472b1fe2 FUN_1472b1fe2 body=52 status=ok
// SIG undefined FUN_1472b1fe2(void)

void FUN_1472b1fe2(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472b2016 FUN_1472b2016 body=42 status=ok
// SIG undefined FUN_1472b2016(void)

void FUN_1472b2016(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472b2048 FUN_1472b2048 body=96 status=ok
// SIG undefined FUN_1472b2048(void)

undefined8 FUN_1472b2048(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f75332();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca3ec10,1);
  return uVar3;
}



// FUNCTION 1472b20a8 FUN_1472b20a8 body=52 status=ok
// SIG undefined FUN_1472b20a8(void)

void FUN_1472b20a8(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472b20dc FUN_1472b20dc body=42 status=ok
// SIG undefined FUN_1472b20dc(void)

void FUN_1472b20dc(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472b210e FUN_1472b210e body=96 status=ok
// SIG undefined FUN_1472b210e(void)

undefined8 FUN_1472b210e(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f92066();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca3ec98,1);
  return uVar3;
}



// FUNCTION 1472b216e FUN_1472b216e body=52 status=ok
// SIG undefined FUN_1472b216e(void)

void FUN_1472b216e(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472b21a2 FUN_1472b21a2 body=42 status=ok
// SIG undefined FUN_1472b21a2(void)

void FUN_1472b21a2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472b21d4 FUN_1472b21d4 body=96 status=ok
// SIG undefined FUN_1472b21d4(void)

undefined8 FUN_1472b21d4(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e93984();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca3ed20,1);
  return uVar3;
}



// FUNCTION 1472b2234 FUN_1472b2234 body=52 status=ok
// SIG undefined FUN_1472b2234(void)

void FUN_1472b2234(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472b2268 FUN_1472b2268 body=42 status=ok
// SIG undefined FUN_1472b2268(void)

void FUN_1472b2268(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472b229a FUN_1472b229a body=96 status=ok
// SIG undefined FUN_1472b229a(void)

undefined8 FUN_1472b229a(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f59550();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca3eda8,1);
  return uVar3;
}



// FUNCTION 1472b22fa FUN_1472b22fa body=52 status=ok
// SIG undefined FUN_1472b22fa(void)

void FUN_1472b22fa(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472b232e FUN_1472b232e body=42 status=ok
// SIG undefined FUN_1472b232e(void)

void FUN_1472b232e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472b2360 FUN_1472b2360 body=96 status=ok
// SIG undefined FUN_1472b2360(void)

undefined8 FUN_1472b2360(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e93ef4();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca3ee30,1);
  return uVar3;
}



// FUNCTION 1472b23c0 FUN_1472b23c0 body=52 status=ok
// SIG undefined FUN_1472b23c0(void)

void FUN_1472b23c0(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472b23f4 FUN_1472b23f4 body=42 status=ok
// SIG undefined FUN_1472b23f4(void)

void FUN_1472b23f4(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472b2426 FUN_1472b2426 body=96 status=ok
// SIG undefined FUN_1472b2426(void)

undefined8 FUN_1472b2426(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f1ad4e();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca3eeb8,1);
  return uVar3;
}



// FUNCTION 1472b2486 FUN_1472b2486 body=52 status=ok
// SIG undefined FUN_1472b2486(void)

void FUN_1472b2486(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472b24ba FUN_1472b24ba body=54 status=ok
// SIG undefined FUN_1472b24ba(void)

void FUN_1472b24ba(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 1472b24fe FUN_1472b24fe body=83 status=ok
// SIG undefined FUN_1472b24fe(void)

longlong FUN_1472b24fe(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x100,0x10);
  FUN_1472ea2b4(lVar1,param_1);
  *(undefined2 *)(lVar1 + 0xf8) = 0xffff;
  FUN_147440b96(lVar1 + 0xf8,*(undefined8 *)(param_1 + 0x28),L"RaytracingDecalParameters",0);
  return lVar1;
}



// FUNCTION 1472b2552 FUN_1472b2552 body=65 status=ok
// SIG undefined FUN_1472b2552(void)

void * FUN_1472b2552(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x100);
  memset(_Dst,0,0x100);
  FUN_1472ea222(_Dst);
  *(undefined2 *)((longlong)_Dst + 0xf8) = 0xffff;
  return _Dst;
}



// FUNCTION 1472b2594 FUN_1472b2594 body=54 status=ok
// SIG undefined FUN_1472b2594(void)

void FUN_1472b2594(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x108);
  return;
}



// FUNCTION 1472b25d8 FUN_1472b25d8 body=39 status=ok
// SIG undefined FUN_1472b25d8(void)

void FUN_1472b25d8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x108,0x10);
  FUN_1472ea40c(uVar1,param_1);
  return;
}



// FUNCTION 1472b2600 FUN_1472b2600 body=76 status=ok
// SIG undefined FUN_1472b2600(void)

void * FUN_1472b2600(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x108);
  memset(_Dst,0,0x108);
  FUN_1472ea222(_Dst);
  *(undefined8 *)((longlong)_Dst + 0xf8) = 0;
  *(undefined2 *)((longlong)_Dst + 0x100) = 0xffff;
  return _Dst;
}



// FUNCTION 1472b264c FUN_1472b264c body=54 status=ok
// SIG undefined FUN_1472b264c(void)

void FUN_1472b264c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x108);
  return;
}



// FUNCTION 1472b2690 FUN_1472b2690 body=39 status=ok
// SIG undefined FUN_1472b2690(void)

void FUN_1472b2690(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x108,0x10);
  FUN_1472ea40c(uVar1,param_1);
  return;
}



// FUNCTION 1472b26b8 FUN_1472b26b8 body=76 status=ok
// SIG undefined FUN_1472b26b8(void)

void * FUN_1472b26b8(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x108);
  memset(_Dst,0,0x108);
  FUN_1472ea222(_Dst);
  *(undefined8 *)((longlong)_Dst + 0xf8) = 0;
  *(undefined2 *)((longlong)_Dst + 0x100) = 0xffff;
  return _Dst;
}



// FUNCTION 1472b2704 FUN_1472b2704 body=39 status=ok
// SIG undefined FUN_1472b2704(void)

undefined * FUN_1472b2704(int param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    FUN_14608c3d2();
    puVar1 = &DAT_14ca3a328;
  }
  else {
    FUN_14608c63c();
    puVar1 = &DAT_14ca3a450;
  }
  return puVar1;
}



// FUNCTION 1472b272c FUN_1472b272c body=42 status=ok
// SIG undefined FUN_1472b272c(void)

void FUN_1472b272c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472b2764 FUN_1472b2764 body=67 status=ok
// SIG undefined FUN_1472b2764(void)

undefined8 FUN_1472b2764(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar1,param_1);
  FUN_14744193e(uVar1,uVar1,*(undefined4 *)(param_1 + 0x6c),*(undefined8 *)(param_1 + 0x28));
  return uVar1;
}



// FUNCTION 1472b27a8 FUN_1472b27a8 body=52 status=ok
// SIG undefined FUN_1472b27a8(void)

void FUN_1472b27a8(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472b27dc FUN_1472b27dc body=42 status=ok
// SIG undefined FUN_1472b27dc(void)

void FUN_1472b27dc(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472b2814 FUN_1472b2814 body=67 status=ok
// SIG undefined FUN_1472b2814(void)

undefined8 FUN_1472b2814(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar1,param_1);
  FUN_14744193e(uVar1,uVar1,*(undefined4 *)(param_1 + 0x6c),*(undefined8 *)(param_1 + 0x28));
  return uVar1;
}



// FUNCTION 1472b2858 FUN_1472b2858 body=52 status=ok
// SIG undefined FUN_1472b2858(void)

void FUN_1472b2858(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472b288c FUN_1472b288c body=117 status=ok
// SIG undefined FUN_1472b288c(void)

longlong FUN_1472b288c(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1472b2916(param_1,&local_28);
  if (local_28 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)
             (*(longlong *)(*(longlong *)(local_20 + 8) + 0x50) +
             (longlong)*(int *)(local_28 + 0xd4) * 8);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472b2916 FUN_1472b2916 body=108 status=ok
// SIG undefined FUN_1472b2916(void)

undefined4 * FUN_1472b2916(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146091190();
  FUN_146091190();
  FUN_1448e935e(param_1,&local_30,&DAT_14ca3a578,0);
  FUN_146091190();
  *param_2 = local_30;
  param_2[1] = uStack_2c;
  param_2[2] = uStack_28;
  param_2[3] = uStack_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472b2983 FUN_1472b2983 body=117 status=ok
// SIG undefined FUN_1472b2983(void)

longlong FUN_1472b2983(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1472b2a0c(param_1,&local_28);
  if (local_28 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)
             (*(longlong *)(*(longlong *)(local_20 + 8) + 0x50) +
             (longlong)*(int *)(local_28 + 0xd4) * 8);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472b2a0c FUN_1472b2a0c body=108 status=ok
// SIG undefined FUN_1472b2a0c(void)

undefined4 * FUN_1472b2a0c(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1460913fc();
  FUN_1460913fc();
  FUN_1448e935e(param_1,&local_30,&DAT_14ca3a6a0,0);
  FUN_1460913fc();
  *param_2 = local_30;
  param_2[1] = uStack_2c;
  param_2[2] = uStack_28;
  param_2[3] = uStack_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472b2a79 FUN_1472b2a79 body=177 status=ok
// SIG undefined FUN_1472b2a79(void)

void FUN_1472b2a79(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145f1ad4e();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14ca3eeb8,param_4);
  local_78 = &DAT_14ca3eeb8;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_1472c11a4(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472b2b2b FUN_1472b2b2b body=971 status=ok
// SIG undefined FUN_1472b2b2b(void)

longlong * FUN_1472b2b2b(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  double *pdVar3;
  float fVar4;
  double dVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
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
  double dVar20;
  longlong lVar21;
  char cVar22;
  longlong lVar23;
  longlong lVar24;
  undefined4 uVar25;
  double dVar26;
  double dVar27;
  float fVar28;
  undefined1 auStack_1a8 [32];
  undefined2 local_188;
  undefined4 local_180;
  undefined1 local_178 [16];
  double local_168;
  double dStack_160;
  undefined1 local_158 [16];
  double local_148;
  undefined8 uStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  uVar25 = FUN_14714633f();
  dVar5 = *(double *)(param_4 + 0x8a8);
  *param_1 = 0;
  param_1[1] = 0;
  iVar6 = (int)param_2[1];
  if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar6);
  }
  if (iVar6 != 0) {
    FUN_14017f10c(param_1);
    lVar21 = param_2[1];
    if ((longlong)(int)lVar21 != 0) {
      lVar8 = *param_2;
      lVar24 = 0;
      do {
        lVar9 = *(longlong *)(lVar8 + lVar24);
        if (*(longlong *)(lVar9 + 8) != 0) {
          cVar22 = FUN_1410f9880(*(longlong *)(lVar9 + 8),1);
          if ((cVar22 != '\0') && (cVar22 = FUN_144b21410(lVar9,param_4), cVar22 != '\0')) {
            fVar28 = 1.0;
            if (dVar5 < 1.0) {
              fVar4 = *(float *)(lVar9 + 200);
              fVar28 = 1.0;
              if ((fVar4 != 0.0) || (NAN(fVar4))) {
                dVar16 = *(double *)(lVar9 + 0x10);
                dVar17 = *(double *)(lVar9 + 0x18);
                dVar18 = *(double *)(lVar9 + 0x20);
                dVar19 = *(double *)(lVar9 + 0x50);
                dVar20 = *(double *)(lVar9 + 0x58);
                dStack_130 = *(double *)(lVar9 + 0x60);
                dVar27 = dVar17 + dVar17;
                dVar10 = dVar18 + dVar18;
                dVar26 = dVar16 * (dVar16 + dVar16);
                dVar13 = (1.0 - (dVar18 * dVar10 + dVar26)) * dVar20;
                local_128 = (1.0 - (dVar26 + dVar17 * dVar27)) * dStack_130;
                dVar14 = *(double *)(lVar9 + 0x10) * dVar10;
                dVar26 = *(double *)(lVar9 + 0x28);
                dVar11 = dVar10 * dVar26;
                dVar12 = (dVar16 + dVar16) * *(double *)(lVar9 + 0x28);
                dVar26 = dVar27 * dVar26;
                dVar15 = (dVar27 * dVar16 + dVar11) * dVar19;
                local_148 = (dVar10 * dVar17 + dVar12) * dVar20;
                local_138 = (dVar26 + dVar14) * dStack_130;
                local_168 = (dVar14 - dVar26) * dVar19;
                dStack_130 = (dVar10 * dVar17 - dVar12) * dStack_130;
                local_178._8_4_ = SUB84(dVar15,0);
                local_178._0_8_ = (1.0 - (dVar18 * dVar10 + dVar17 * dVar27)) * dVar19;
                local_178._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
                dStack_160 = 0.0;
                local_158._8_4_ = SUB84(dVar13,0);
                local_158._0_8_ = (dVar27 * dVar16 - dVar11) * dVar20;
                local_158._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
                uStack_140 = 0;
                uStack_120 = 0;
                local_118 = *(undefined8 *)(lVar9 + 0x30);
                uStack_110 = *(undefined8 *)(lVar9 + 0x38);
                local_108 = *(undefined8 *)(lVar9 + 0x40);
                uStack_100 = 0x3ff0000000000000;
                fVar28 = (float)FUN_144b0e889(fVar4,local_178,param_4,uVar25);
                if (fVar28 <= 0.0) goto LAB_1472b2e42;
              }
            }
            uVar7 = *(undefined4 *)(param_3 + 8);
            local_188 = FUN_144a82cbc(param_3);
            local_180 = uVar7;
            FUN_147145dae(local_178,lVar9,0,fVar28);
            iVar6 = (int)param_1[1];
            *(uint *)(param_1 + 1) = iVar6 + 1U;
            if (*(uint *)((longlong)param_1 + 0xc) < iVar6 + 1U) {
              FUN_14714bfd8(param_1,iVar6);
            }
            lVar9 = *param_1;
            lVar23 = (longlong)iVar6 * 0x30;
            puVar2 = (undefined8 *)(lVar9 + 0x20 + lVar23);
            *puVar2 = local_158._0_8_;
            puVar2[1] = local_158._8_8_;
            pdVar3 = (double *)(lVar9 + 0x10 + lVar23);
            *pdVar3 = local_168;
            pdVar3[1] = dStack_160;
            puVar1 = (undefined4 *)(lVar9 + lVar23);
            *puVar1 = local_178._0_4_;
            puVar1[1] = local_178._4_4_;
            puVar1[2] = local_178._8_4_;
            puVar1[3] = local_178._12_4_;
          }
        }
LAB_1472b2e42:
        lVar24 = lVar24 + 8;
      } while ((longlong)(int)lVar21 * 8 != lVar24);
    }
  }
  FUN_144b0e9c2(param_1);
  if ((local_f0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1472b2ef8 FUN_1472b2ef8 body=4418 status=ok
// SIG undefined FUN_1472b2ef8(void)

undefined8 FUN_1472b2ef8(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  float *pfVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  longlong lVar19;
  undefined8 *puVar20;
  uint uVar21;
  longlong *plVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auStack_528 [32];
  longlong local_508;
  longlong local_500;
  undefined1 *local_4f8;
  undefined8 *local_4f0;
  longlong local_4e0;
  longlong local_4d8;
  float local_4cc;
  float local_4c8;
  float local_4c4;
  float local_4c0;
  float local_4bc;
  float local_4b8;
  float local_4b4;
  float local_4b0;
  float local_4ac;
  float local_4a8;
  float local_4a4;
  longlong *local_4a0;
  longlong local_498;
  longlong *local_490;
  double local_488;
  double dStack_480;
  longlong local_478;
  longlong local_470;
  undefined8 *local_468;
  undefined8 local_460;
  longlong *local_458;
  undefined8 local_450;
  undefined8 local_448;
  undefined4 local_440;
  longlong local_438;
  int local_430;
  float local_424;
  float local_420;
  float local_41c;
  undefined8 local_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined4 local_3b8;
  uint uStack_3b4;
  undefined4 uStack_3b0;
  uint uStack_3ac;
  ulonglong local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  double local_388;
  double dStack_380;
  double local_378;
  double dStack_370;
  double local_368;
  double dStack_360;
  undefined1 local_358 [128];
  undefined1 local_2d8 [8];
  double adStack_2d0 [13];
  double local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  float fStack_250;
  float fStack_24c;
  undefined8 local_248;
  undefined8 local_240;
  float local_238;
  float local_234;
  float local_230;
  float local_22c;
  float local_228;
  float local_224;
  float local_220;
  float local_21c;
  undefined8 local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  undefined4 local_1a8;
  float local_1a4;
  undefined8 local_198;
  undefined8 uStack_190;
  uint local_188;
  undefined1 local_178 [16];
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_528;
  local_448 = *(undefined8 *)(param_2 + 0x36f8);
  local_440 = *(undefined4 *)(param_2 + 0x3700);
  local_4e0 = param_3;
  local_460 = param_4;
  FUN_1472b2b2b(&local_438,&local_448,param_2);
  plVar22 = (longlong *)(param_1 + 0x70);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar16 = puVar18 + 3;
  if (*(undefined8 **)(param_1 + 0x78) < puVar16) {
    FUN_140023dd8(plVar22,0x28);
    puVar18 = (undefined8 *)(*plVar22 + 0xfU & 0xfffffffffffffff0);
    puVar16 = puVar18 + 3;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar16;
  *puVar18 = &PTR_FUN_14a2dbd68;
  plVar2 = (longlong *)(param_1 + 0x98);
  puVar18[1] = 0;
  puVar18[2] = 0;
  iVar9 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar9 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar9 + 1U) {
    FUN_1448cfae8(plVar2,iVar9);
  }
  *(undefined8 **)(*plVar2 + (longlong)iVar9 * 8) = puVar18;
  if (local_430 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_430);
  }
  if (*(int *)((longlong)puVar18 + 0x14) < local_430) {
    FUN_1472c1590(puVar18 + 1);
  }
  local_458 = plVar2;
  if (local_430 < 1) {
    fVar31 = INFINITY;
    fVar32 = -INFINITY;
    fVar34 = -INFINITY;
    fVar29 = -INFINITY;
    fVar36 = INFINITY;
    fVar30 = INFINITY;
  }
  else {
    fVar29 = -INFINITY;
    fVar30 = INFINITY;
    lVar19 = 0;
    local_4a0 = (longlong *)(param_2 + 0x42b8);
    local_470 = param_2 + 0x42a8;
    fVar36 = INFINITY;
    fVar31 = INFINITY;
    fVar34 = -INFINITY;
    fVar32 = -INFINITY;
    local_498 = param_2;
    local_490 = plVar22;
    local_468 = puVar18 + 1;
    do {
      lVar13 = local_438;
      local_450 = *(undefined8 *)(local_438 + 8 + lVar19 * 0x30);
      lVar10 = FUN_1449cbe5c(local_450,*(undefined4 *)(local_4e0 + 0x3090),&local_450);
      lVar14 = *(longlong *)(lVar10 + 0x18);
      FUN_14612f510();
      lVar11 = FUN_144b1d0c2(*(undefined8 *)(lVar14 + 0x28),&DAT_14ca3a228,0);
      plVar22 = local_490;
      if (lVar11 != 0) {
        plVar22 = (longlong *)(lVar13 + lVar19 * 0x30);
        lVar13 = *plVar22;
        local_198 = 0;
        uStack_190 = 0x3f80000000000000;
        dVar27 = *(double *)(lVar13 + 0x10);
        dVar23 = *(double *)(lVar13 + 0x18);
        dVar7 = *(double *)(lVar13 + 0x20);
        dVar8 = *(double *)(lVar13 + 0x50);
        adStack_2d0[3] = *(double *)(lVar13 + 0x58);
        adStack_2d0[8] = *(double *)(lVar13 + 0x60);
        dVar25 = dVar23 + dVar23;
        dVar28 = dVar7 + dVar7;
        dVar24 = dVar27 * (dVar27 + dVar27);
        adStack_2d0[4] = (1.0 - (dVar7 * dVar28 + dVar24)) * adStack_2d0[3];
        adStack_2d0[9] = (1.0 - (dVar24 + dVar23 * dVar25)) * adStack_2d0[8];
        dVar6 = *(double *)(lVar13 + 0x10) * dVar28;
        dVar24 = *(double *)(lVar13 + 0x28);
        dVar26 = dVar28 * dVar24;
        dVar4 = (dVar27 + dVar27) * *(double *)(lVar13 + 0x28);
        dVar24 = dVar25 * dVar24;
        dVar5 = (dVar25 * dVar27 + dVar26) * dVar8;
        adStack_2d0[5] = (dVar28 * dVar23 + dVar4) * adStack_2d0[3];
        adStack_2d0[7] = (dVar24 + dVar6) * adStack_2d0[8];
        adStack_2d0[1] = (dVar6 - dVar24) * dVar8;
        adStack_2d0[3] = (dVar25 * dVar27 - dVar26) * adStack_2d0[3];
        adStack_2d0[8] = (dVar28 * dVar23 - dVar4) * adStack_2d0[8];
        unique0x100001bc = SUB84(dVar5,0);
        local_2d8 = (1.0 - (dVar7 * dVar28 + dVar23 * dVar25)) * dVar8;
        unique0x100001c0 = (int)((ulonglong)dVar5 >> 0x20);
        adStack_2d0[2] = 0.0;
        adStack_2d0[6] = 0.0;
        adStack_2d0[10] = 0.0;
        adStack_2d0[0xb] = *(double *)(lVar13 + 0x30);
        adStack_2d0[0xc] = *(double *)(lVar13 + 0x38);
        local_268 = *(double *)(lVar13 + 0x40);
        uStack_260 = 0x3ff0000000000000;
        dVar27 = *(double *)(lVar13 + 0x10);
        dVar23 = *(double *)(lVar13 + 0x18);
        dVar7 = *(double *)(lVar13 + 0x20);
        dVar8 = *(double *)(lVar13 + 0x50);
        local_158 = *(double *)(lVar13 + 0x58);
        dStack_130 = *(double *)(lVar13 + 0x60);
        dVar25 = dVar23 + dVar23;
        dVar28 = dVar7 + dVar7;
        dVar24 = dVar27 * (dVar27 + dVar27);
        dStack_150 = (1.0 - (dVar7 * dVar28 + dVar24)) * local_158;
        local_128 = (1.0 - (dVar24 + dVar23 * dVar25)) * dStack_130;
        dVar6 = *(double *)(lVar13 + 0x10) * dVar28;
        dVar24 = *(double *)(lVar13 + 0x28);
        dVar26 = dVar28 * dVar24;
        dVar4 = (dVar27 + dVar27) * *(double *)(lVar13 + 0x28);
        dVar24 = dVar25 * dVar24;
        dVar5 = (dVar25 * dVar27 + dVar26) * dVar8;
        local_148 = (dVar28 * dVar23 + dVar4) * local_158;
        local_138 = (dVar24 + dVar6) * dStack_130;
        local_168 = (dVar6 - dVar24) * dVar8;
        local_158 = (dVar25 * dVar27 - dVar26) * local_158;
        dStack_130 = (dVar28 * dVar23 - dVar4) * dStack_130;
        local_178._8_4_ = SUB84(dVar5,0);
        local_178._0_8_ = (1.0 - (dVar7 * dVar28 + dVar23 * dVar25)) * dVar8;
        local_178._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
        dStack_160 = 0.0;
        dStack_140 = 0.0;
        dStack_120 = 0.0;
        local_118 = *(double *)(lVar13 + 0x30);
        dStack_110 = *(double *)(lVar13 + 0x38);
        local_108 = *(double *)(lVar13 + 0x40);
        dStack_100 = 1.0;
        local_4d8 = lVar10;
        local_4b8 = fVar36;
        local_4b4 = fVar32;
        local_4b0 = fVar34;
        local_4ac = fVar31;
        local_4a8 = fVar30;
        local_4a4 = fVar29;
        FUN_14494412e(local_178,local_358);
        fVar30 = (float)adStack_2d0[0xb];
        fVar29 = (float)adStack_2d0[0xc];
        fVar31 = (float)local_268;
        local_424 = fVar30;
        local_420 = fVar29;
        local_41c = fVar31;
        FUN_144911616(local_178,&local_424,local_2d8);
        local_368 = local_148;
        dStack_360 = dStack_140;
        local_378 = local_158;
        dStack_370 = dStack_150;
        local_388 = local_168;
        dStack_380 = dStack_160;
        local_398 = local_178._0_8_;
        uStack_390 = local_178._8_8_;
        dVar4 = *(double *)(lVar13 + 0x10);
        dVar5 = *(double *)(lVar13 + 0x18);
        dVar6 = *(double *)(lVar13 + 0x20);
        dVar24 = *(double *)(lVar13 + 0x28);
        dVar26 = dVar4 * 0.0 - dVar5 * 1.0;
        dVar27 = dVar5 * 0.0 - dVar6 * 0.0;
        dVar28 = dVar6 * 1.0 - dVar4 * 0.0;
        dVar27 = dVar27 + dVar27;
        dVar28 = dVar28 + dVar28;
        dVar26 = dVar26 + dVar26;
        local_488 = (dVar6 * dVar27 - dVar4 * dVar26) + *(double *)(lVar13 + 0x28) * dVar28 + 0.0;
        local_3a8 = *(ulonglong *)(local_4e0 + 0x1040) ^ 0x8000000000000000;
        local_3b8 = *(undefined4 *)(local_4e0 + 0x1030);
        uStack_3b0 = *(undefined4 *)(local_4e0 + 0x1038);
        uStack_3b4 = *(uint *)(local_4e0 + 0x1034) ^ 0x80000000;
        uStack_3ac = *(uint *)(local_4e0 + 0x103c) ^ 0x80000000;
        local_418 = 0x3ff0000000000000;
        local_410 = 0;
        uStack_408 = 0;
        local_400 = 0;
        uStack_3f8 = 0;
        local_3f0 = 0x3ff0000000000000;
        local_3e8 = 0;
        uStack_3e0 = 0;
        local_3d8 = 0;
        uStack_3d0 = 0;
        local_3c8 = 0x3ff0000000000000;
        local_3c0 = 0;
        local_3a0 = 0x3ff0000000000000;
        dStack_480 = local_488;
        local_478 = lVar13;
        local_1d8 = fVar30;
        local_1d4 = fVar29;
        local_1d0 = fVar31;
        FUN_1447fea8d(local_178,&local_418,local_358);
        local_4c0 = (float)(double)local_178._0_8_;
        local_258._4_4_ = (float)(double)local_178._8_8_;
        fStack_250 = (float)local_168;
        fStack_24c = (float)dStack_160;
        local_238 = (float)local_138;
        local_234 = (float)dStack_130;
        local_230 = (float)local_128;
        local_22c = (float)dStack_120;
        local_4bc = (float)local_118;
        local_4c4 = (float)dStack_110;
        local_4c8 = (float)local_108;
        local_4cc = (float)dStack_100;
        local_248 = CONCAT44((float)dStack_150,(float)local_158);
        local_240 = CONCAT44((float)dStack_140,(float)local_148);
        local_1e8 = local_368;
        dStack_1e0 = dStack_360;
        local_1f8 = local_378;
        dStack_1f0 = dStack_370;
        local_208 = local_388;
        dStack_200 = dStack_380;
        local_218 = local_398;
        uStack_210 = uStack_390;
        local_178._8_8_ = 0x3ff0000000000000;
        local_178._0_8_ = 0x3ff0000000000000;
        local_168 = 1.0;
        lVar13 = 0;
        do {
          dVar23 = *(double *)((longlong)adStack_2d0 + lVar13 * 4 + 8);
          dVar23 = dVar23 * dVar23 +
                   *(double *)(local_2d8 + lVar13 * 4) * *(double *)(local_2d8 + lVar13 * 4) +
                   *(double *)(local_2d8 + lVar13 * 4 + 8) * *(double *)(local_2d8 + lVar13 * 4 + 8)
          ;
          *(ulonglong *)(local_178 + lVar13) =
               -(ulonglong)(9.99999993922529e-09 < dVar23) & (ulonglong)SQRT(dVar23);
          lVar13 = lVar13 + 8;
        } while (lVar13 != 0x18);
        local_1b0 = (float)(dVar26 * dVar24 + 0.0 + (dVar28 * dVar4 - dVar27 * dVar5));
        local_1b4 = (float)local_488;
        local_1b8 = (float)((dVar26 * dVar5 - dVar28 * dVar6) + dVar24 * dVar27 + 1.0);
        local_1c0 = (float)(double)(~-(ulonglong)(local_168 != 0.0) & 0x47eff933c0000000 |
                                   (ulonglong)(1.0 / local_168) & -(ulonglong)(local_168 != 0.0));
        local_1c4 = (float)(double)(~-(ulonglong)((double)local_178._8_8_ != 0.0) &
                                    0x47eff933c0000000 |
                                   (ulonglong)(1.0 / (double)local_178._8_8_) &
                                   -(ulonglong)((double)local_178._8_8_ != 0.0));
        local_1c8 = (float)(double)(~-(ulonglong)((double)local_178._0_8_ != 0.0) &
                                    0x47eff933c0000000 |
                                   (ulonglong)(1.0 / (double)local_178._0_8_) &
                                   -(ulonglong)((double)local_178._0_8_ != 0.0));
        dVar24 = *(double *)(*(longlong *)(local_4e0 + 8) + 0x90);
        local_1a4 = 1.0;
        if ((dVar24 != 0.0) || (NAN(dVar24))) {
          dVar28 = (double)*(float *)(local_478 + 0xbc) * dVar24 +
                   (double)*(float *)(local_478 + 0xc4);
          dVar24 = (double)*(float *)(local_478 + 0xc0) -
                   (double)*(float *)(local_478 + 0xb8) * dVar24;
          if (dVar28 <= dVar24) {
            dVar24 = dVar28;
          }
          if (1.0 <= dVar24) {
            dVar24 = 1.0;
          }
          if (dVar24 <= 0.0) {
            dVar24 = 0.0;
          }
          local_1a4 = (float)dVar24;
        }
        local_1a8 = (undefined4)plVar22[3];
        local_198 = *(undefined8 *)((longlong)plVar22 + 0x1c);
        uStack_190 = *(undefined8 *)((longlong)plVar22 + 0x24);
        local_188 = *(ushort *)((longlong)plVar22 + 0x12) & 0x1f;
        local_258._0_4_ = local_4c0;
        local_228 = local_4bc;
        local_224 = local_4c4;
        local_220 = local_4c8;
        local_21c = local_4cc;
        FUN_142f6f762(local_178,&local_258);
        iVar9 = *(int *)(local_498 + 0x42c0);
        *(uint *)(local_498 + 0x42c0) = iVar9 + 1U;
        if (*(uint *)(local_498 + 0x42c4) < iVar9 + 1U) {
          FUN_144ab4262(local_4a0,iVar9);
        }
        *(undefined8 *)(*local_4a0 + (longlong)iVar9 * 8) = local_178._0_8_;
        if (local_178._0_8_ != 0) {
          LOCK();
          *(int *)(local_178._0_8_ + 8) = *(int *)(local_178._0_8_ + 8) + 1;
          UNLOCK();
        }
        lVar13 = FUN_147272f68(local_470);
        local_258._0_4_ = (float)lVar11;
        local_258._4_4_ = (float)((ulonglong)lVar11 >> 0x20);
        fStack_250 = (float)lVar14;
        fStack_24c = (float)((ulonglong)lVar14 >> 0x20);
        FUN_1472b403c(lVar13,&local_258);
        iVar9 = (int)local_460 + (int)lVar19;
        local_488 = (double)CONCAT44(local_488._4_4_,iVar9);
        *(int *)(lVar13 + 0x84) = iVar9;
        uVar17 = (ulonglong)(*(ushort *)(lVar13 + 0x70) & 0x3ff) -
                 (ulonglong)(*(ushort *)(lVar13 + 0x70) >> 1 & 0x155);
        uVar17 = (uVar17 >> 2 & 0x3333333333333333) + (uVar17 & 0x3333333333333333);
        uVar17 = ((uVar17 >> 4) + uVar17 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar17 == 0) {
          uVar15 = 0x58;
          lVar14 = 0;
        }
        else {
          lVar14 = *(longlong *)(lVar13 + 0x10);
          if (*(longlong *)(lVar13 + 0x10) == 0) {
            lVar14 = lVar13;
          }
          FUN_144b11014(lVar14 + uVar17 * 8 + -8);
          if (*(ushort *)(lVar13 + 0x72) < 0x51) {
            lVar14 = lVar13 + 0x20;
          }
          else {
            lVar14 = *(longlong *)(lVar13 + 0x20);
          }
          if (*(longlong *)(lVar13 + 0x10) != 0) {
            lVar13 = *(longlong *)(lVar13 + 0x10);
          }
          uVar15 = *(undefined8 *)(lVar13 + -8 + uVar17 * 8);
        }
        lVar13 = local_4e0;
        local_258._0_4_ = (float)uVar15;
        local_258._4_4_ = (float)((ulonglong)uVar15 >> 0x20);
        fStack_250 = (float)lVar14;
        fStack_24c = (float)((ulonglong)lVar14 >> 0x20);
        local_4f0 = &local_258;
        local_4f8 = local_178;
        local_500 = local_4e0;
        local_508 = local_4d8;
        FUN_1472b43de(lVar11,local_498,*(undefined4 *)(local_498 + 8),local_450);
        lVar14 = *plVar22;
        dVar24 = *(double *)(lVar14 + 0x88);
        dVar28 = *(double *)(lVar14 + 0xa0);
        dVar26 = *(double *)(lVar14 + 0x78);
        dVar4 = *(double *)(lVar14 + 0x80);
        dVar5 = *(double *)(lVar14 + 0x98);
        dVar6 = *(double *)(lVar14 + 0x90);
        pfVar12 = (float *)FUN_1472b4678(local_468);
        plVar22 = local_490;
        fVar34 = (float)((dVar24 - dVar28) + *(double *)(lVar13 + 0x1040));
        fVar31 = (float)((dVar4 - dVar5) + *(double *)(lVar13 + 0x1038));
        fVar29 = (float)((dVar26 - dVar6) + *(double *)(lVar13 + 0x1030));
        *pfVar12 = fVar29;
        pfVar12[1] = fVar31;
        pfVar12[2] = fVar34;
        fVar32 = (float)(dVar24 + dVar28 + *(double *)(lVar13 + 0x1040));
        fVar35 = (float)(dVar4 + dVar5 + *(double *)(lVar13 + 0x1038));
        fVar33 = (float)(dVar26 + dVar6 + *(double *)(lVar13 + 0x1030));
        pfVar12[4] = fVar33;
        pfVar12[5] = fVar35;
        pfVar12[6] = fVar32;
        pfVar12[7] = local_488._0_4_;
        if (local_178._0_8_ != 0) {
          LOCK();
          puVar1 = (uint *)(local_178._0_8_ + 8);
          uVar3 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar3 & 0x3fffffff) == 1) {
            FUN_144a54812();
          }
        }
        fVar30 = local_4a8;
        if (fVar34 <= local_4a8) {
          fVar30 = fVar34;
        }
        fVar36 = local_4b8;
        if (fVar31 <= local_4b8) {
          fVar36 = fVar31;
        }
        fVar31 = local_4ac;
        if (fVar29 <= local_4ac) {
          fVar31 = fVar29;
        }
        fVar29 = local_4a4;
        if (local_4a4 <= fVar32) {
          fVar29 = fVar32;
        }
        fVar34 = local_4b0;
        if (local_4b0 <= fVar35) {
          fVar34 = fVar35;
        }
        fVar32 = local_4b4;
        if (local_4b4 <= fVar33) {
          fVar32 = fVar33;
        }
      }
      lVar19 = lVar19 + 1;
    } while (lVar19 < local_430);
  }
  uVar3 = *(uint *)(puVar18 + 2);
  uVar21 = 1;
  if (1 < uVar3) {
    uVar21 = uVar3;
  }
  local_500 = (longlong)(int)uVar3 << 5;
  local_508 = puVar18[1];
  local_4f8 = (undefined1 *)CONCAT71(local_4f8._1_7_,1);
  local_240 = FUN_144942e63(param_1,L"PathTracer.DecalsBuffer",0x20,uVar21);
  uVar3 = (uint)(float)local_258 >> 8;
  local_258._0_4_ = (float)((uint)(float)local_258 & 0xffffff00);
  local_258._4_4_ = 0.0;
  fStack_250 = -NAN;
  local_248 = 0;
  if ((*(byte *)(local_240 + 0x68) & 0x80) != 0) {
    local_258._0_4_ = (float)CONCAT31((int3)uVar3,0x1c);
  }
  uVar15 = FUN_14475683e(param_1 + 0x198,plVar22,local_240 + 8,&local_258);
  puVar20 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar16 = puVar20 + 10;
  if (*(undefined8 **)(param_1 + 0x78) < puVar16) {
    FUN_140023dd8(plVar22,0x60);
    puVar20 = (undefined8 *)(*plVar22 + 0xfU & 0xfffffffffffffff0);
    puVar16 = puVar20 + 10;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar16;
  *puVar20 = &PTR_FUN_14a2dbd58;
  puVar20[2] = 0;
  puVar20[3] = 0;
  iVar9 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar9 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar9 + 1U) {
    FUN_1448cfae8(local_458,iVar9);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar9 * 8) = puVar20;
  *(undefined4 *)(puVar20 + 9) = *(undefined4 *)(puVar18 + 2);
  *(float *)(puVar20 + 4) = fVar31;
  *(float *)((longlong)puVar20 + 0x24) = fVar36;
  *(float *)(puVar20 + 5) = fVar30;
  *(float *)(puVar20 + 6) = fVar32;
  *(float *)((longlong)puVar20 + 0x34) = fVar34;
  *(float *)(puVar20 + 7) = fVar29;
  FUN_14049d05c(param_1,*(undefined4 *)(puVar18 + 2),uVar15,puVar20 + 2);
  local_258 = puVar20 + 2;
  FUN_14049cdc2();
  local_178._0_8_ = DAT_14ca39f58;
  uVar15 = FUN_14049cf6a(param_1 + 0x1a8,plVar22,&local_258);
  FUN_1400b5938(&local_438);
  if ((local_f0 ^ (ulonglong)auStack_528) == DAT_14c707940) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472b403c FUN_1472b403c body=929 status=ok
// SIG undefined FUN_1472b403c(void)

void FUN_1472b403c(longlong param_1,longlong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(param_2[1] + 8);
  iVar1 = *(int *)(*param_2 + 0xd4);
  if (*(longlong *)(*(longlong *)(lVar3 + 0x50) + (longlong)iVar1 * 8) == 0) {
    FUN_1400bafc2(lVar3,iVar1,1);
  }
  *(undefined4 *)(param_1 + 0x80) =
       *(undefined4 *)(*(longlong *)(lVar3 + 0x40) + (longlong)iVar1 * 4);
  if (*param_2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (lVar3 == 0) {
      lVar3 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  *(longlong *)(param_1 + 0x78) = lVar3;
  lVar3 = *param_2;
  lVar5 = FUN_1447e4f80();
  FUN_144aff0d6(local_30,lVar5 + 0x28);
  FUN_144aff0d6(&local_38,local_30);
  uVar2 = *(ulonglong *)(lVar3 + 0xa0);
  uVar4 = lVar3 + 0xa0 + ((longlong)uVar2 >> 0x18);
  if ((uVar2 & 1) == 0) {
    uVar4 = uVar2;
  }
  if (0 < (longlong)*(int *)(lVar3 + 0xa8)) {
    lVar5 = 0;
    do {
      if (*(longlong *)(uVar4 + lVar5 * 4) == local_38) {
        uVar2 = *(ulonglong *)(lVar3 + 0xb0);
        uVar4 = lVar3 + 0xb0 + ((longlong)uVar2 >> 0x18);
        if ((uVar2 & 1) == 0) {
          uVar4 = uVar2;
        }
        puVar6 = (undefined2 *)(uVar4 + lVar5);
        goto LAB_1472b415f;
      }
      lVar5 = lVar5 + 2;
    } while ((longlong)*(int *)(lVar3 + 0xa8) * 2 != lVar5);
  }
  puVar6 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_1472b415f:
  *(undefined2 *)(param_1 + 0x88) = *puVar6;
  lVar3 = *param_2;
  lVar5 = FUN_144a75e54();
  FUN_144aff0d6(local_30,lVar5 + 0x28);
  FUN_144aff0d6(&local_38,local_30);
  uVar2 = *(ulonglong *)(lVar3 + 0xa0);
  uVar4 = lVar3 + 0xa0 + ((longlong)uVar2 >> 0x18);
  if ((uVar2 & 1) == 0) {
    uVar4 = uVar2;
  }
  if (0 < (longlong)*(int *)(lVar3 + 0xa8)) {
    lVar5 = 0;
    do {
      if (*(longlong *)(uVar4 + lVar5 * 4) == local_38) {
        uVar2 = *(ulonglong *)(lVar3 + 0xb0);
        uVar4 = lVar3 + 0xb0 + ((longlong)uVar2 >> 0x18);
        if ((uVar2 & 1) == 0) {
          uVar4 = uVar2;
        }
        puVar6 = (undefined2 *)(uVar4 + lVar5);
        goto LAB_1472b4201;
      }
      lVar5 = lVar5 + 2;
    } while ((longlong)*(int *)(lVar3 + 0xa8) * 2 != lVar5);
  }
  puVar6 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_1472b4201:
  *(undefined2 *)(param_1 + 0x8a) = *puVar6;
  lVar3 = *param_2;
  lVar5 = FUN_145e2f24e();
  FUN_144aff0d6(local_30,lVar5 + 0x28);
  FUN_144aff0d6(&local_38,local_30);
  uVar2 = *(ulonglong *)(lVar3 + 0xa0);
  uVar4 = lVar3 + 0xa0 + ((longlong)uVar2 >> 0x18);
  if ((uVar2 & 1) == 0) {
    uVar4 = uVar2;
  }
  if (0 < (longlong)*(int *)(lVar3 + 0xa8)) {
    lVar5 = 0;
    do {
      if (*(longlong *)(uVar4 + lVar5 * 4) == local_38) {
        uVar2 = *(ulonglong *)(lVar3 + 0xb0);
        uVar4 = lVar3 + 0xb0 + ((longlong)uVar2 >> 0x18);
        if ((uVar2 & 1) == 0) {
          uVar4 = uVar2;
        }
        puVar6 = (undefined2 *)(uVar4 + lVar5);
        goto LAB_1472b42a3;
      }
      lVar5 = lVar5 + 2;
    } while ((longlong)*(int *)(lVar3 + 0xa8) * 2 != lVar5);
  }
  puVar6 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_1472b42a3:
  *(undefined2 *)(param_1 + 0x8c) = *puVar6;
  FUN_14723c438(param_1,param_2);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472b43de FUN_1472b43de body=664 status=ok
// SIG undefined FUN_1472b43de(void)

void FUN_1472b43de(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  short *psVar4;
  undefined8 in_stack_00000028;
  longlong in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = in_stack_00000040;
  local_48 = in_stack_00000028;
  FUN_140056988(param_1);
  lVar2 = FUN_1447e4f80();
  FUN_144aff0d6(local_30,lVar2 + 0x28);
  FUN_144aff0d6(&local_38,local_30);
  uVar1 = *(ulonglong *)(param_1 + 0xa0);
  uVar3 = param_1 + 0xa0 + ((longlong)uVar1 >> 0x18);
  if ((uVar1 & 1) == 0) {
    uVar3 = uVar1;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar2 = 0;
    do {
      if (*(longlong *)(uVar3 + lVar2 * 4) == local_38) {
        uVar1 = *(ulonglong *)(param_1 + 0xb0);
        uVar3 = param_1 + 0xb0 + ((longlong)uVar1 >> 0x18);
        if ((uVar1 & 1) == 0) {
          uVar3 = uVar1;
        }
        psVar4 = (short *)(uVar3 + lVar2);
        goto LAB_1472b44b0;
      }
      lVar2 = lVar2 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar2);
  }
  psVar4 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_1472b44b0:
  if (*psVar4 != -1) {
    FUN_144b11088(in_stack_00000040,*(undefined8 *)(in_stack_00000030 + 0x18));
  }
  lVar2 = FUN_144a8f66a();
  FUN_144aff0d6(local_30,lVar2 + 0x28);
  FUN_144aff0d6(&local_38,local_30);
  uVar1 = *(ulonglong *)(param_1 + 0xa0);
  uVar3 = param_1 + 0xa0 + ((longlong)uVar1 >> 0x18);
  if ((uVar1 & 1) == 0) {
    uVar3 = uVar1;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar2 = 0;
    do {
      if (*(longlong *)(uVar3 + lVar2 * 4) == local_38) {
        uVar1 = *(ulonglong *)(param_1 + 0xb0);
        uVar3 = param_1 + 0xb0 + ((longlong)uVar1 >> 0x18);
        if ((uVar1 & 1) == 0) {
          uVar3 = uVar1;
        }
        psVar4 = (short *)(uVar3 + lVar2);
        goto LAB_1472b4567;
      }
      lVar2 = lVar2 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar2);
  }
  psVar4 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_1472b4567:
  if (*psVar4 != -1) {
    FUN_144b11088(in_stack_00000040,DAT_14cb055b0);
  }
  if (*(short *)(param_1 + 0xf8) != -1) {
    FUN_144b11088(in_stack_00000040,*in_stack_00000038);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472b4678 FUN_1472b4678 body=53 status=ok
// SIG undefined FUN_1472b4678(void)

longlong FUN_1472b4678(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1472c159e(param_1,iVar1);
  }
  return (longlong)iVar1 * 0x20 + *param_1;
}



// FUNCTION 1472b46ae FUN_1472b46ae body=54 status=ok
// SIG undefined FUN_1472b46ae(void)

void FUN_1472b46ae(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x140);
  return;
}



// FUNCTION 1472b46ec FUN_1472b46ec body=39 status=ok
// SIG undefined FUN_1472b46ec(void)

void FUN_1472b46ec(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x140,0x10);
  FUN_1472bd428(uVar1,param_1);
  return;
}



// FUNCTION 1472b4714 FUN_1472b4714 body=110 status=ok
// SIG undefined FUN_1472b4714(void)

void * FUN_1472b4714(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x140);
  memset(_Dst,0,0x140);
  FUN_1472ea222(_Dst);
  *(undefined8 *)((longlong)_Dst + 0xf8) = 0;
  *(undefined2 *)((longlong)_Dst + 0x100) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x108) = 0;
  *(undefined8 *)((longlong)_Dst + 0x110) = 0;
  *(undefined8 *)((longlong)_Dst + 0x118) = 0;
  *(undefined8 *)((longlong)_Dst + 0x120) = 0;
  *(undefined8 *)((longlong)_Dst + 0x128) = 0;
  *(undefined8 *)((longlong)_Dst + 0x130) = 0;
  *(undefined4 *)((longlong)_Dst + 0x138) = 0;
  return _Dst;
}



// FUNCTION 1472b4782 FUN_1472b4782 body=284 status=ok
// SIG undefined FUN_1472b4782(void)

void FUN_1472b4782(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_1[0xb];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = param_1[10];
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar4);
      if (lVar2 != 0) {
        FUN_14476820c(lVar2);
        FUN_1400020a8(lVar2);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar4);
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (*(int *)((longlong)param_1 + 0x5c) != 0) {
    FUN_1472c1654(param_1 + 10);
  }
  FUN_14474ae1f(param_1[0xc],(int)param_1[0xd]);
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_14005bcf4(param_1[8],(int)param_1[9]);
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_141538e31(param_1[6],(int)param_1[7]);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_1472c162a(param_1[4],(int)param_1[5]);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_1472c15f4(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_1472c15f4(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1472b489e FUN_1472b489e body=75 status=ok
// SIG undefined FUN_1472b489e(void)

void FUN_1472b489e(longlong param_1)

{
  FUN_1472b48ea(param_1 + 0x20,*(undefined4 *)(param_1 + 0x2c));
  FUN_1472b4930(param_1 + 0x30,*(undefined4 *)(param_1 + 0x3c));
  FUN_1472b4976(param_1 + 0x40,*(undefined4 *)(param_1 + 0x4c));
  FUN_1472b49bc(param_1,*(undefined4 *)(param_1 + 0xc));
  FUN_1472b49bc(param_1 + 0x10,*(undefined4 *)(param_1 + 0x1c));
  return;
}



// FUNCTION 1472b48ea FUN_1472b48ea body=68 status=ok
// SIG undefined FUN_1472b48ea(void)

void FUN_1472b48ea(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_1472c162a(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_1472c1684(param_1,param_2);
  return;
}



// FUNCTION 1472b4930 FUN_1472b4930 body=68 status=ok
// SIG undefined FUN_1472b4930(void)

void FUN_1472b4930(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_141538e31(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_1472c16f4(param_1,param_2);
  return;
}



// FUNCTION 1472b4976 FUN_1472b4976 body=68 status=ok
// SIG undefined FUN_1472b4976(void)

void FUN_1472b4976(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_14005bcf4(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_1472c1754(param_1,param_2);
  return;
}



// FUNCTION 1472b49bc FUN_1472b49bc body=68 status=ok
// SIG undefined FUN_1472b49bc(void)

void FUN_1472b49bc(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_1472c15f4(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_1472c17c6(param_1,param_2);
  return;
}



// FUNCTION 1472b4a02 FUN_1472b4a02 body=262 status=ok
// SIG undefined FUN_1472b4a02(void)

void FUN_1472b4a02(longlong *param_1,short *param_2,void *param_3)

{
  ushort uVar1;
  int iVar2;
  ulonglong uVar3;
  ushort uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  int iVar7;
  void *_Dst;
  longlong lVar8;
  longlong lVar9;
  
  uVar1 = param_2[2];
  if (uVar1 != 0) {
    lVar9 = *param_1;
    uVar3 = *(ulonglong *)(lVar9 + 0x30);
    uVar5 = lVar9 + 0x30 + ((longlong)uVar3 >> 0x18);
    if ((uVar3 & 1) == 0) {
      uVar5 = uVar3;
    }
    lVar8 = (longlong)*(int *)(lVar9 + 0x38);
    if (0 < lVar8) {
      iVar2 = *(int *)(lVar9 + 0x28);
      iVar7 = iVar2 + 0xe;
      if (-1 < iVar2 + 7) {
        iVar7 = iVar2 + 7;
      }
      _Dst = (void *)((ulonglong)
                      (uint)((iVar7 >> 3) +
                            (*(int *)(lVar9 + 8) + *(int *)(lVar9 + 0x18) + iVar2) * 8) + param_1[1]
                     );
      puVar6 = (ulonglong *)(uVar5 + 8);
      do {
        if (*param_2 == (short)puVar6[-1]) {
          uVar3 = *puVar6;
          uVar5 = ((longlong)uVar3 >> 0x18) + (longlong)puVar6;
          if ((uVar3 & 1) == 0) {
            uVar5 = uVar3;
          }
          if ((longlong)(int)puVar6[1] < 1) {
            return;
          }
          lVar9 = 0;
          do {
            if (param_2[1] == *(short *)(uVar5 + lVar9 * 4)) {
              uVar4 = 0x40;
              if (uVar1 < 0x40) {
                uVar4 = uVar1;
              }
              memcpy(_Dst,param_3,(ulonglong)uVar4);
              memset((void *)((longlong)_Dst + (ulonglong)uVar4),0,
                     (longlong)
                     (int)((int)((uint)(ushort)param_2[2] - (uint)uVar4) >> 0x1f &
                          (uint)(ushort)param_2[2] - (uint)uVar4));
              return;
            }
            _Dst = (void *)((longlong)_Dst + (ulonglong)*(ushort *)(uVar5 + 2 + lVar9 * 4));
            lVar9 = lVar9 + 1;
          } while ((int)puVar6[1] != lVar9);
          return;
        }
        _Dst = (void *)((longlong)_Dst + (ulonglong)*(ushort *)((longlong)puVar6 + -6));
        puVar6 = puVar6 + 3;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
  }
  return;
}



// FUNCTION 1472b4b08 FUN_1472b4b08 body=95 status=ok
// SIG undefined FUN_1472b4b08(void)

void FUN_1472b4b08(longlong *param_1,undefined8 *param_2)

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
    FUN_1471b2628(param_1,iVar2);
  }
  FUN_1472c19db((longlong)iVar2 * 0x28 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 1472b4b68 FUN_1472b4b68 body=94 status=ok
// SIG undefined FUN_1472b4b68(void)

void FUN_1472b4b68(longlong *param_1,undefined8 *param_2)

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
    FUN_1472c1948(param_1,iVar2);
  }
  FUN_1472c1b65((longlong)iVar2 * 0x98 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 1472b4bc6 FUN_1472b4bc6 body=68 status=ok
// SIG undefined FUN_1472b4bc6(void)

void FUN_1472b4bc6(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_14474ae1f(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_1472c2746(param_1,param_2);
  return;
}



// FUNCTION 1472b4c0b FUN_1472b4c0b body=669 status=ok
// SIG undefined FUN_1472b4c0b(void)

undefined8 * FUN_1472b4c0b(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_118 [40];
  undefined4 local_f0 [2];
  undefined8 local_e8;
  undefined5 uStack_e0;
  undefined3 uStack_db;
  undefined5 uStack_d8;
  undefined8 uStack_d3;
  undefined4 local_c8;
  undefined8 local_c0;
  int local_b8;
  longlong local_b0;
  undefined8 uStack_a8;
  longlong local_a0;
  undefined8 uStack_98;
  longlong local_90;
  undefined8 uStack_88;
  longlong local_80;
  undefined8 uStack_78;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  iVar2 = (int)param_2[1];
  local_c0 = 0;
  iVar6 = 0;
  local_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  FUN_14017c08a(&local_b0,iVar2,1);
  FUN_14017c08a(&local_a0,iVar2,1);
  FUN_14017c08a(&local_90,iVar2,1);
  FUN_1472b4eaa(&local_80,iVar2);
  local_f0[0] = 0;
  local_c8 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  uStack_db = 0;
  uStack_d8 = 0;
  uStack_d3 = 0;
  if (iVar2 != 0) {
    iVar7 = 0;
    do {
      lVar8 = (longlong)iVar7;
      plVar1 = (longlong *)(*param_2 + lVar8 * 0x60);
      bVar9 = true;
      if (*(int *)(*param_2 + 0x20 + lVar8 * 0x60) == -1) {
        bVar9 = (int)plVar1[6] != 0;
      }
      lVar4 = *plVar1;
      *(longlong *)(local_80 + lVar8 * 8) = lVar4;
      local_b8 = local_b8 + *(int *)(lVar4 + 0x48);
      piVar5 = (int *)FUN_1472b4ef2(local_f0,*plVar1,uStack_68 & 0xffffffff);
      iVar3 = *piVar5;
      *(int *)(local_b0 + lVar8 * 4) = iVar3;
      if (iVar3 == (int)uStack_68) {
        uStack_68 = CONCAT44(uStack_68._4_4_,iVar3 + 1U);
        if (uStack_68._4_4_ < iVar3 + 1U) {
          FUN_1472c27a6(&local_70,iVar3);
        }
        *(longlong *)(local_70 + (longlong)iVar3 * 8) = *plVar1;
      }
      if (bVar9) {
        *(int *)(local_a0 + lVar8 * 4) = (int)local_c0;
        local_c0 = CONCAT44(local_c0._4_4_,(int)local_c0 + (int)plVar1[8]);
      }
      else {
        *(int *)(local_a0 + lVar8 * 4) = local_c0._4_4_;
        local_c0 = CONCAT44(local_c0._4_4_ + (int)plVar1[8],(int)local_c0);
      }
      *(int *)(local_90 + lVar8 * 4) = iVar6;
      iVar6 = iVar6 + (int)plVar1[8];
      iVar7 = iVar7 + 1;
    } while (iVar2 != iVar7);
  }
  *(int *)(param_1 + 1) = local_b8;
  *param_1 = local_c0;
  param_1[2] = local_b0;
  local_b0 = 0;
  *(undefined4 *)(param_1 + 3) = (undefined4)uStack_a8;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_a8._4_4_;
  uStack_a8 = 0;
  param_1[4] = local_a0;
  local_a0 = 0;
  *(undefined4 *)(param_1 + 5) = (undefined4)uStack_98;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_98._4_4_;
  uStack_98 = 0;
  param_1[6] = local_90;
  local_90 = 0;
  *(undefined4 *)(param_1 + 7) = (undefined4)uStack_88;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_88._4_4_;
  uStack_88 = 0;
  param_1[8] = local_80;
  local_80 = 0;
  *(undefined4 *)(param_1 + 9) = (undefined4)uStack_78;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uStack_78._4_4_;
  uStack_78 = 0;
  param_1[10] = local_70;
  local_70 = 0;
  *(int *)(param_1 + 0xb) = (int)uStack_68;
  *(uint *)((longlong)param_1 + 0x5c) = uStack_68._4_4_;
  uStack_68 = 0;
  FUN_1472bd5ba(local_f0);
  FUN_1472b4f8a(&local_c0);
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472b4eaa FUN_1472b4eaa body=71 status=ok
// SIG undefined FUN_1472b4eaa(void)

void FUN_1472b4eaa(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1472c27a6();
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
      FUN_1472c282c();
      return;
    }
  }
  return;
}



// FUNCTION 1472b4ef2 FUN_1472b4ef2 body=152 status=ok
// SIG undefined FUN_1472b4ef2(void)

longlong FUN_1472b4ef2(longlong param_1,ulonglong param_2,undefined4 param_3)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  char cVar4;
  
  uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  uVar1 = uVar1 >> 0x10 ^ uVar1;
  uVar2 = (ulonglong)(*(uint *)(param_1 + 0x20) & uVar1);
  lVar3 = *(longlong *)(param_1 + 8);
  if ((lVar3 == 0) || (*(char *)(lVar3 + uVar2) < '\0')) {
    cVar4 = '\0';
  }
  else {
    cVar4 = '\0';
    do {
      if (*(ulonglong *)(*(longlong *)(param_1 + 0x10) + uVar2 * 8) == param_2) {
        return uVar2 * 4 + *(longlong *)(param_1 + 0x18);
      }
      uVar2 = (ulonglong)((int)uVar2 + 1);
      cVar4 = cVar4 + '\x01';
    } while (cVar4 <= *(char *)(lVar3 + uVar2));
  }
  lVar3 = FUN_1472c28c8(param_1,cVar4,param_1,uVar2,param_2,uVar1,param_3);
  return lVar3;
}



// FUNCTION 1472b4f8a FUN_1472b4f8a body=97 status=ok
// SIG undefined FUN_1472b4f8a(void)

void FUN_1472b4f8a(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x50) != 0) {
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
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1472b4fec FUN_1472b4fec body=42 status=ok
// SIG undefined FUN_1472b4fec(void)

void FUN_1472b4fec(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472b501e FUN_1472b501e body=96 status=ok
// SIG undefined FUN_1472b501e(void)

undefined8 FUN_1472b501e(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f59b46();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca3f120,1);
  return uVar3;
}



// FUNCTION 1472b507e FUN_1472b507e body=52 status=ok
// SIG undefined FUN_1472b507e(void)

void FUN_1472b507e(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472b50b2 FUN_1472b50b2 body=149 status=ok
// SIG undefined FUN_1472b50b2(void)

undefined4 * FUN_1472b50b2(undefined8 param_1,undefined4 *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  bVar1 = *param_3;
  bVar2 = param_3[1];
  bVar3 = param_3[2];
  bVar4 = param_3[3];
  bVar5 = param_3[4];
  FUN_145f598d8();
  FUN_1448e935e(param_1,&local_38,&DAT_14ca3a938,
                (uint)bVar1 + (uint)bVar2 * 2 + (uint)bVar3 * 4 + (uint)bVar4 * 8 | (uint)bVar5 << 4
               );
  FUN_145f598d8();
  *param_2 = local_38;
  param_2[1] = uStack_34;
  param_2[2] = uStack_30;
  param_2[3] = uStack_2c;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472b5148 FUN_1472b5148 body=374 status=ok
// SIG undefined FUN_1472b5148(void)

void FUN_1472b5148(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  void *_Src;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  size_t _Size;
  longlong lVar6;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    FUN_144747744(puVar1,*param_2 + 0x10);
    uVar2 = param_1[0x13];
    lVar6 = (longlong)(int)uVar2;
    if (0 < lVar6) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar5 + 5;
        if ((undefined8 *)param_1[1] < puVar3) {
          FUN_140023dd8(param_1,0x30);
          puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar3 = puVar5 + 5;
        }
        *param_1 = (ulonglong)puVar3;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar5;
        param_1[6] = (ulonglong)(puVar5 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar4 = (void *)((longlong)_Dst + lVar6 * 4);
        _Size = lVar6 * 4;
        if ((void *)param_1[1] < pvVar4) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar4 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar4;
        memcpy(_Dst,_Src,_Size);
        puVar5[1] = 0;
        *puVar5 = &PTR_FUN_14a1fbc38;
        puVar5[2] = param_3;
        puVar5[3] = _Dst;
        *(int *)(puVar5 + 4) = (int)uVar2;
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



// FUNCTION 1472b52be FUN_1472b52be body=880 status=ok
// SIG undefined FUN_1472b52be(void)

void FUN_1472b52be(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6,longlong *param_7,int param_8,int param_9,
                  undefined8 param_10,longlong *param_11,longlong *param_12)

{
  uint *puVar1;
  uint uVar2;
  undefined1 auStack_128 [32];
  int local_108;
  longlong *local_100;
  longlong *local_f8;
  longlong *local_f0;
  longlong *local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  longlong *local_d0;
  longlong *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88 [3];
  longlong local_70;
  longlong local_68 [3];
  longlong local_50;
  ulonglong local_48;
  
  local_b0 = param_12;
  local_c0 = param_11;
  local_b8 = param_7;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (param_8 != 0) {
    local_50 = *param_12;
    if (local_50 != 0) {
      LOCK();
      *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
      UNLOCK();
    }
    local_68[2] = *param_11;
    if (local_68[2] != 0) {
      LOCK();
      *(int *)(local_68[2] + 8) = *(int *)(local_68[2] + 8) + 1;
      UNLOCK();
    }
    local_68[1] = 0;
    local_68[0] = *param_6;
    if (local_68[0] != 0) {
      LOCK();
      *(int *)(local_68[0] + 8) = *(int *)(local_68[0] + 8) + 1;
      UNLOCK();
    }
    local_70 = *param_5;
    if (local_70 != 0) {
      LOCK();
      *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
      UNLOCK();
    }
    local_88[2] = *param_4;
    if (local_88[2] != 0) {
      LOCK();
      *(int *)(local_88[2] + 8) = *(int *)(local_88[2] + 8) + 1;
      UNLOCK();
    }
    local_d0 = &local_50;
    local_d8 = local_68 + 2;
    local_e0 = param_10;
    local_e8 = local_68 + 1;
    local_f0 = local_68;
    local_f8 = &local_70;
    local_100 = local_88 + 2;
    local_108 = 0;
    FUN_142f67cf3(param_1,param_2,param_3,param_8);
  }
  if (param_9 != 0) {
    local_88[1] = 0;
    local_88[0] = *local_c0;
    if (local_88[0] != 0) {
      LOCK();
      *(int *)(local_88[0] + 8) = *(int *)(local_88[0] + 8) + 1;
      UNLOCK();
    }
    local_90 = *local_b8;
    if (local_90 != 0) {
      LOCK();
      *(int *)(local_90 + 8) = *(int *)(local_90 + 8) + 1;
      UNLOCK();
    }
    local_98 = *param_6;
    if (local_98 != 0) {
      LOCK();
      *(int *)(local_98 + 8) = *(int *)(local_98 + 8) + 1;
      UNLOCK();
    }
    local_a0 = *param_5;
    if (local_a0 != 0) {
      LOCK();
      *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
      UNLOCK();
    }
    local_a8 = *param_4;
    if (local_a8 != 0) {
      LOCK();
      *(int *)(local_a8 + 8) = *(int *)(local_a8 + 8) + 1;
      UNLOCK();
    }
    local_d0 = local_88 + 1;
    local_d8 = local_88;
    local_e8 = &local_90;
    local_f0 = &local_98;
    local_f8 = &local_a0;
    local_100 = &local_a8;
    local_108 = param_8;
    local_e0 = 0;
    FUN_142f67cf3(param_1,param_2,param_3,param_9);
  }
  if (*param_4 != 0) {
    LOCK();
    puVar1 = (uint *)(*param_4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*param_5 != 0) {
    LOCK();
    puVar1 = (uint *)(*param_5 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*param_6 != 0) {
    LOCK();
    puVar1 = (uint *)(*param_6 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*local_b8 != 0) {
    LOCK();
    puVar1 = (uint *)(*local_b8 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*local_c0 != 0) {
    LOCK();
    puVar1 = (uint *)(*local_c0 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*local_b0 != 0) {
    LOCK();
    puVar1 = (uint *)(*local_b0 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_128);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472b564a FUN_1472b564a body=35 status=ok
// SIG undefined FUN_1472b564a(void)

int FUN_1472b564a(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if ((*(byte *)(param_1 + 0x18) & 2) == 0) {
    iVar2 = 3;
    if (*(int *)(DAT_14ca3aa08 + 4) < 3) {
      iVar2 = *(int *)(DAT_14ca3aa08 + 4);
    }
    if (0 < iVar2) {
      iVar1 = iVar2;
    }
  }
  return iVar1;
}



// FUNCTION 1472b566d FUN_1472b566d body=13 status=ok
// SIG undefined FUN_1472b566d(void)

undefined4 FUN_1472b566d(void)

{
  return *(undefined4 *)(DAT_14ca3aa38 + 4);
}



// FUNCTION 1472b567a FUN_1472b567a body=274 status=ok
// SIG undefined FUN_1472b567a(void)

byte FUN_1472b567a(longlong param_1,double *param_2,float param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  
  if (*(char *)(param_1 + 0x58) == '\x01') {
    dVar1 = *(double *)(param_1 + 0x18) - *param_2;
    dVar3 = *(double *)(param_1 + 0x20) - param_2[1];
    dVar2 = *(double *)(param_1 + 0x28) - param_2[2];
    bVar4 = dVar2 * dVar2 + dVar3 * dVar3 + dVar1 * dVar1 < (double)(param_3 * param_3);
  }
  else {
    bVar4 = false;
  }
  return (param_2[1] - *(double *)(param_1 + 0x20)) * *(double *)(param_1 + 0x38) +
         *(double *)(param_1 + 0x30) * (*param_2 - *(double *)(param_1 + 0x18)) +
         *(double *)(param_1 + 0x40) * (param_2[2] - *(double *)(param_1 + 0x28)) < -param_2[6] |
         bVar4;
}



// FUNCTION 1472b578c FUN_1472b578c body=36 status=ok
// SIG undefined FUN_1472b578c(void)

undefined8 FUN_1472b578c(longlong param_1,longlong param_2,int param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined7 uVar3;
  
  bVar1 = *(byte *)(*(longlong *)(param_2 + 0x3408) + (longlong)param_3);
  uVar3 = (undefined7)((ulonglong)*(longlong *)(param_2 + 0x3408) >> 8);
  uVar2 = CONCAT71(uVar3,1);
  if ((bVar1 & 3) == 0) {
    uVar2 = CONCAT71(uVar3,(*(byte *)(param_1 + 0x56) ^ 1) & (bVar1 & 0x40) >> 6);
  }
  return uVar2;
}



// FUNCTION 1472b57b0 FUN_1472b57b0 body=398 status=ok
// SIG undefined FUN_1472b57b0(void)

bool FUN_1472b57b0(char *param_1,double *param_2,float param_3,char param_4)

{
  char cVar1;
  float fVar2;
  float fVar3;
  
  if ((*param_1 == '\0') ||
     ((param_1[0x54] == '\0' && (cVar1 = FUN_1472b567a(param_1,param_2,param_3), cVar1 == '\0')))) {
    return false;
  }
  if (param_1[0x55] != '\x01') {
    fVar2 = (float)param_2[6];
    fVar3 = (float)((*(double *)(param_1 + 0x28) - param_2[2]) *
                    (*(double *)(param_1 + 0x28) - param_2[2]) +
                   (*(double *)(param_1 + 0x20) - param_2[1]) *
                   (*(double *)(param_1 + 0x20) - param_2[1]) +
                   (*(double *)(param_1 + 0x18) - *param_2) *
                   (*(double *)(param_1 + 0x18) - *param_2));
    if (param_4 == '\0') {
      if ((fVar3 < param_3 * param_3) && (param_1[0x58] != '\0')) {
        return true;
      }
      if (fVar3 <= (*(float *)(param_1 + 4) + fVar2) * (*(float *)(param_1 + 4) + fVar2)) {
        return false;
      }
      fVar2 = (fVar2 * fVar2) / fVar3;
      fVar3 = *(float *)(param_1 + 0x14);
    }
    else {
      fVar2 = (fVar2 + *(float *)(param_1 + 8)) * (fVar2 + *(float *)(param_1 + 8));
    }
    if (fVar3 <= fVar2) {
      return false;
    }
    return true;
  }
  fVar2 = (float)param_2[6];
  fVar3 = (float)((*(double *)(param_1 + 0x28) - param_2[2]) *
                  (*(double *)(param_1 + 0x28) - param_2[2]) +
                 (*(double *)(param_1 + 0x20) - param_2[1]) *
                 (*(double *)(param_1 + 0x20) - param_2[1]) +
                 (*(double *)(param_1 + 0x18) - *param_2) * (*(double *)(param_1 + 0x18) - *param_2)
                 );
  if (param_4 == '\0') {
    if ((param_1[0x58] & fVar3 < param_3 * param_3) != 0) {
      return true;
    }
    if ((*(float *)(param_1 + 4) + fVar2) * (*(float *)(param_1 + 4) + fVar2) < fVar3) {
      return true;
    }
    fVar2 = (fVar2 * fVar2) / fVar3;
    fVar3 = *(float *)(param_1 + 0x14);
  }
  else {
    fVar2 = (fVar2 + *(float *)(param_1 + 8)) * (fVar2 + *(float *)(param_1 + 8));
  }
  return fVar2 < fVar3;
}



// FUNCTION 1472b593e FUN_1472b593e body=61 status=ok
// SIG undefined FUN_1472b593e(void)

ulonglong FUN_1472b593e(byte param_1,byte param_2)

{
  if (param_2 == 0) {
    if (param_1 < 7) {
      return 0x40201008040201 >> ((param_1 & 7) << 3);
    }
  }
  else if (param_2 < 3 && param_1 < 9) {
    return (ulonglong)(byte)(&DAT_14a2dc4aa)[param_1];
  }
  return 0;
}



// FUNCTION 1472b597b FUN_1472b597b body=118 status=ok
// SIG undefined FUN_1472b597b(void)

byte FUN_1472b597b(undefined8 param_1,byte param_2,byte param_3)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  
  cVar1 = FUN_144b25ac2();
  bVar3 = 0x11;
  if (2 < param_3) {
    bVar3 = 0;
  }
  if (cVar1 == '\0') {
    bVar4 = 2;
    if (param_3 != 0) {
      bVar4 = bVar3;
    }
    bVar3 = 8;
    if (param_3 != 0) {
      bVar3 = (param_3 < 3) << 2;
    }
    bVar2 = 0;
    if (param_2 != 0) {
      bVar2 = bVar3;
    }
    bVar2 = bVar2 | bVar4;
  }
  else {
    bVar2 = 1;
    if (param_3 != 0) {
      bVar2 = bVar3;
    }
    bVar2 = (param_3 < 3 & param_2) << 2 | bVar2;
  }
  return bVar2;
}



// FUNCTION 1472b59f1 FUN_1472b59f1 body=119 status=ok
// SIG undefined FUN_1472b59f1(void)

uint FUN_1472b59f1(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  uVar3 = 0;
  if ((*(byte *)(param_1 + 0xe) & 8) != 0) {
    bVar1 = (**(code **)(*param_1 + 0x1f0))(param_1);
    uVar3 = (uint)(bVar1 ^ 1);
  }
  if ((*(byte *)((longlong)param_1 + 0x72) & 0x20) != 0) {
    bVar1 = (**(code **)(*param_1 + 0x1f0))(param_1);
    uVar4 = (uint)(bVar1 ^ 1) << 8;
  }
  bVar1 = *(byte *)(param_1 + 0xe);
  lVar2 = (**(code **)(*(longlong *)param_1[0x42] + 0x3e0))();
  return (bVar1 & 4) << 0xe | *(int *)(lVar2 + 0x3600) << 0x18 | uVar4 | uVar3;
}



// FUNCTION 1472b5a68 FUN_1472b5a68 body=831 status=ok
// SIG undefined FUN_1472b5a68(void)

void FUN_1472b5a68(byte *param_1,longlong *param_2,undefined4 param_3,char *param_4,char param_5,
                  byte param_6)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  longlong *plVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  longlong lVar14;
  byte bVar15;
  byte bVar16;
  undefined8 uVar17;
  byte bVar18;
  undefined8 in_R11;
  undefined8 uVar19;
  undefined8 unaff_R12;
  uint7 uVar21;
  ulonglong uVar20;
  longlong lVar22;
  bool bVar23;
  byte local_80;
  
  bVar18 = param_1[1];
  bVar1 = param_4[3];
  uVar19 = CONCAT71((int7)((ulonglong)in_R11 >> 8),bVar1);
  iVar9 = (int)param_2[1];
  if (iVar9 < 1) {
    *param_1 = param_6;
    bVar13 = 0x15;
    bVar11 = 0;
  }
  else {
    bVar23 = true;
    lVar14 = 0xe4;
    lVar22 = 0;
    bVar11 = 0;
    uVar21 = (uint7)((ulonglong)unaff_R12 >> 8);
    bVar13 = 1;
    bVar16 = 0;
    local_80 = 1;
    bVar12 = 0;
    bVar15 = 1;
    do {
      lVar2 = *param_2;
      if (((*(byte *)(lVar2 + 1 + lVar14) & 2) != 0) &&
         (lVar3 = *(longlong *)(lVar2 + -0x24 + lVar14), lVar3 != 0)) {
        plVar10 = (longlong *)FUN_14485b2b4(lVar3,param_3);
        iVar9 = (**(code **)(*plVar10 + 0x270))(plVar10);
        if ((*(byte *)(lVar2 + 3 + lVar14) & 0x40) == 0) {
          uVar20 = 0;
        }
        else {
          bVar4 = (**(code **)(*plVar10 + 0x470))(plVar10);
          uVar20 = CONCAT71(uVar21,iVar9 != 3 & bVar4);
        }
        uVar17 = uVar19;
        bVar5 = FUN_1472b597b(iVar9,uVar20 & 0xffffffff,uVar19);
        bVar6 = (**(code **)(*plVar10 + 0xe8))(plVar10);
        bVar7 = (**(code **)(*plVar10 + 0xe8))(plVar10);
        bVar8 = 1;
        bVar4 = (byte)*(undefined4 *)(lVar2 + lVar14);
        if (-1 < (char)bVar4) {
          bVar8 = (**(code **)(*plVar10 + 0x38))(plVar10);
          bVar4 = (byte)*(undefined4 *)(lVar2 + lVar14);
        }
        param_6 = param_6 | bVar5;
        bVar23 = (bool)(bVar23 & iVar9 == 0);
        bVar11 = bVar11 | (byte)uVar20;
        bVar13 = bVar13 & (byte)uVar20;
        uVar21 = (uint7)((ulonglong)uVar17 >> 8) & 0xffffff;
        bVar16 = bVar16 & 1 | bVar6;
        local_80 = local_80 & bVar7;
        bVar12 = bVar12 & 1 | bVar8;
        bVar15 = bVar15 & bVar4 >> 6;
        iVar9 = (int)param_2[1];
      }
      lVar22 = lVar22 + 1;
      lVar14 = lVar14 + 0xf0;
    } while (lVar22 < iVar9);
    *param_1 = param_6;
    bVar4 = 1;
    if (bVar13 == 0) {
      bVar4 = ~bVar11 & 1;
    }
    bVar13 = 0;
    if (bVar23) {
      bVar13 = bVar4;
    }
    bVar13 = bVar13 | bVar15 << 2 | bVar12 * '\x02' & 2 | local_80 << 4 | (bVar16 & 1) << 3;
  }
  param_1[1] = bVar13 | bVar18 & 0xe0;
  bVar18 = 0x22;
  if (2 < bVar1) {
    bVar18 = 0;
  }
  bVar13 = 0x40;
  if (bVar1 != 0) {
    bVar13 = bVar18;
  }
  if ((param_6 & bVar13) != 0) {
    bVar23 = bVar1 < 3;
    bVar13 = 0;
    if (bVar23) {
      bVar13 = 0x15;
    }
    bVar16 = 0x10;
    if (bVar1 != 0) {
      bVar16 = bVar23 << 3;
    }
    bVar12 = 10;
    if (bVar1 != 0) {
      bVar12 = bVar13;
    }
    if (bVar1 == 0) {
      bVar13 = (bVar12 & 0x1e | 4 | bVar16) ^ 0xfe;
      bVar18 = 0x40;
    }
    else {
      bVar13 = 0x11;
      if (2 < bVar1) {
        bVar13 = 0;
      }
      bVar13 = ~(bVar12 | bVar23 * '\x04' | bVar16 | bVar13);
    }
    param_6 = param_6 & bVar13 | bVar18;
    *param_1 = param_6;
    if (bVar11 != 0) {
      param_6 = param_6 | bVar16;
      *param_1 = param_6;
    }
  }
  if (param_4[2] == '\0') {
    param_6 = param_6 & (((byte)(bVar1 - 1) < 2) - 1U | 0xcf);
    *param_1 = param_6;
  }
  if (*param_4 == '\x01') {
    bVar18 = ((byte)(bVar1 - 1) < 2) - 1U | 0xfc;
  }
  else {
    if ((bVar11 & param_4[1]) != 1) goto LAB_1472b5d46;
    bVar18 = 0xbc;
    if (bVar1 != 0) {
      bVar18 = (bVar1 < 3) - 1U | 0xcc;
    }
  }
  *param_1 = bVar18 & param_6;
LAB_1472b5d46:
  if (param_5 == '\x01') {
    *param_1 = (bVar1 == 0) << 5;
  }
  return;
}



// FUNCTION 1472b5da7 FUN_1472b5da7 body=422 status=ok
// SIG undefined FUN_1472b5da7(void)

void FUN_1472b5da7(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  char param_5)

{
  longlong *plVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 unaff_RBP;
  bool bVar8;
  
  plVar1 = *(longlong **)(param_2 + 0xb8);
  if ((*(byte *)(param_2 + 0xe7) & 0x40) != 0) {
    cVar2 = (**(code **)(*param_4 + 0x470))(param_4);
    if (cVar2 != '\0') {
      iVar4 = (**(code **)(*param_4 + 0x270))(param_4);
      bVar8 = iVar4 != 3;
      goto LAB_1472b5df5;
    }
  }
  bVar8 = false;
LAB_1472b5df5:
  *(bool *)(param_1 + 0x89) = bVar8;
  iVar4 = (**(code **)(*param_4 + 0x270))();
  if (iVar4 == 0) {
    lVar7 = (**(code **)(*plVar1 + 0x30))(plVar1);
    bVar8 = true;
    if ((*(byte *)(lVar7 + 0x29) & 8) != 0) {
      bVar8 = (~(&DAT_14ca814c8)[(ulonglong)DAT_14ca85550 * 0xf] & 0x1400000) != 0;
    }
  }
  else {
    bVar8 = false;
  }
  *(bool *)(param_1 + 0x8a) = bVar8;
  iVar4 = (**(code **)(*param_4 + 0x270))(param_4);
  *(bool *)(param_1 + 0x8b) = iVar4 == 1;
  uVar3 = (**(code **)(*param_4 + 0xe8))(param_4);
  *(undefined1 *)(param_1 + 0x8c) = uVar3;
  uVar3 = (**(code **)(*param_4 + 0x368))(param_4);
  *(undefined1 *)(param_1 + 0x8d) = uVar3;
  uVar3 = (**(code **)(*param_4 + 0x38))(param_4);
  *(undefined1 *)(param_1 + 0x8f) = uVar3;
  iVar4 = (**(code **)(*param_4 + 0x270))(param_4);
  *(bool *)(param_1 + 0x8e) = iVar4 == 2;
  *(byte *)(param_1 + 0x90) = *(byte *)(param_2 + 0xe4) >> 6 & 1;
  uVar3 = *(undefined1 *)(param_1 + 0x89);
  uVar5 = (**(code **)(*param_4 + 0x270))(param_4);
  uVar3 = FUN_1472b597b(uVar5,CONCAT71((int7)((ulonglong)param_2 >> 8),uVar3) & 0xffffffff,
                        CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5) & 0xffffffff);
  *(undefined1 *)(param_1 + 0x88) = uVar3;
  if (param_3 != (longlong *)0x0) {
    uVar3 = (**(code **)(*param_3 + 0x50))(param_3);
    *(undefined1 *)(param_1 + 0x90) = uVar3;
    uVar6 = FUN_1472b59f1(param_3);
    if ((byte)(param_5 - 1U) < 2) {
      if ((uVar6 >> 0x10 & 1) == 0) {
        *(byte *)(param_1 + 0x88) = *(byte *)(param_1 + 0x88) & 0xcf;
      }
      if ((uVar6 & 1) != 0) {
        *(byte *)(param_1 + 0x88) = *(byte *)(param_1 + 0x88) & 0xfc;
      }
      if (((uVar6 >> 8 & 1) != 0) && (((~*(byte *)(param_1 + 0x89) | (byte)uVar6) & 1) == 0)) {
        *(byte *)(param_1 + 0x88) = *(byte *)(param_1 + 0x88) & 0xcc;
      }
    }
  }
  return;
}



// FUNCTION 1472b5f4e FUN_1472b5f4e body=42 status=ok
// SIG undefined FUN_1472b5f4e(void)

void FUN_1472b5f4e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472b5f80 FUN_1472b5f80 body=96 status=ok
// SIG undefined FUN_1472b5f80(void)

undefined8 FUN_1472b5f80(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e94464();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca3f1a8,1);
  return uVar3;
}



// FUNCTION 1472b5fe0 FUN_1472b5fe0 body=52 status=ok
// SIG undefined FUN_1472b5fe0(void)

void FUN_1472b5fe0(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472b6014 FUN_1472b6014 body=42 status=ok
// SIG undefined FUN_1472b6014(void)

void FUN_1472b6014(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472b606c FUN_1472b606c body=67 status=ok
// SIG undefined FUN_1472b606c(void)

undefined8 FUN_1472b606c(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar1,param_1);
  FUN_14744193e(uVar1,uVar1,*(undefined4 *)(param_1 + 0x6c),*(undefined8 *)(param_1 + 0x28));
  return uVar1;
}



// FUNCTION 1472b60b0 FUN_1472b60b0 body=52 status=ok
// SIG undefined FUN_1472b60b0(void)

void FUN_1472b60b0(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472b60e4 FUN_1472b60e4 body=54 status=ok
// SIG undefined FUN_1472b60e4(void)

void FUN_1472b60e4(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 1472b6148 FUN_1472b6148 body=39 status=ok
// SIG undefined FUN_1472b6148(void)

void FUN_1472b6148(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x100,0x10);
  FUN_1472be908(uVar1,param_1);
  return;
}



// FUNCTION 1472b6170 FUN_1472b6170 body=50 status=ok
// SIG undefined FUN_1472b6170(void)

longlong FUN_1472b6170(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x100,0x10);
  FUN_1472ea222(lVar1);
  *(undefined4 *)(lVar1 + 0xf8) = 0xffffffff;
  return lVar1;
}



// FUNCTION 1472b61a2 FUN_1472b61a2 body=652 status=ok
// SIG undefined FUN_1472b61a2(void)

undefined8 * FUN_1472b61a2(undefined8 *param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  int local_ac [3];
  longlong local_a0;
  longlong *local_98;
  undefined8 local_90;
  int *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  longlong *local_70;
  int *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(int *)(DAT_14ca3aa98 + 4) == 0) {
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    *(undefined4 *)(param_1 + 6) = 0xffffffff;
  }
  else {
    param_1[4] = 0;
    iVar9 = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    param_1[8] = 0;
    *(undefined4 *)(param_1 + 9) = 0;
    plVar1 = (longlong *)(param_2 + 0x3550);
    piVar2 = (int *)(param_2 + 0x3560);
    local_70 = (longlong *)&DAT_100000000;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_b8 = param_3;
    local_68 = piVar2;
    if (*(int *)(param_2 + 0x3578) != 0) {
      FUN_1449c0562(&local_70);
      iVar9 = *(int *)(param_2 + 0x3578);
    }
    local_90 = local_70;
    local_88 = local_68;
    local_80 = local_60;
    uVar4 = local_80;
    local_78 = local_58;
    local_74 = local_54;
    local_80._4_4_ = (int)((ulonglong)local_60 >> 0x20);
    iVar6 = local_80._4_4_;
    local_98 = plVar1;
    if ((local_80._4_4_ != iVar9) || (param_3 = local_b8, local_80 = uVar4, local_68 != piVar2)) {
      do {
        local_80 = uVar4;
        local_a0 = *(longlong *)(*local_98 + 0x30 + (longlong)iVar6 * 0x40);
        lVar3 = *(longlong *)(*(longlong *)(local_a0 + 0x28) + 0x1c0);
        if (lVar3 != 0) {
          local_ac[1] = 0;
          local_ac[2] = 0;
          plVar8 = (longlong *)FUN_1449cbe5c(lVar3,param_4);
          cVar5 = (**(code **)(*plVar8 + 0xd8))(plVar8);
          if (cVar5 != '\0') {
            lVar3 = plVar8[3];
            FUN_1460478b0();
            lVar7 = FUN_144b1d0c2(*(undefined8 *)(lVar3 + 0x28),&DAT_14ca3aef8,0);
            if (lVar7 != 0) {
              lVar3 = *(longlong *)(lVar3 + 8);
              if (*(longlong *)(*(longlong *)(lVar3 + 0x50) + (longlong)*(int *)(lVar7 + 0xd4) * 8)
                  == 0) {
                FUN_1400bafc2(lVar3,(longlong)*(int *)(lVar7 + 0xd4),1);
              }
            }
            local_ac[0] = *(int *)(param_2 + 0x429c);
            local_68 = local_ac;
            *(int *)(param_2 + 0x429c) = local_ac[0] + 1;
            local_70 = &local_a0;
            FUN_147282fca(param_1,local_4c,&local_70,0);
          }
        }
        local_80 = CONCAT44(local_80._4_4_,(uint)local_80 & ~local_90._4_4_);
        FUN_1449c0562(&local_90);
        param_3 = local_b8;
        iVar6 = local_80._4_4_;
        uVar4 = local_80;
      } while (local_98 != plVar1 || (local_88 != piVar2 || local_80._4_4_ != iVar9));
    }
  }
  if (*(longlong *)(param_3 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1472b642f FUN_1472b642f body=110 status=ok
// SIG undefined FUN_1472b642f(void)

longlong FUN_1472b642f(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1472b649e(param_1,&local_20);
  if (local_20 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)
             (*(longlong *)(*(longlong *)(local_18 + 8) + 0x50) +
             (longlong)*(int *)(local_20 + 0xd4) * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(local_18 + 8),(longlong)*(int *)(local_20 + 0xd4),1);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472b649e FUN_1472b649e body=108 status=ok
// SIG undefined FUN_1472b649e(void)

undefined4 * FUN_1472b649e(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145ee3050();
  FUN_145ee3050();
  FUN_1448e935e(param_1,&local_30,&DAT_14ca3ad10,0);
  FUN_145ee3050();
  *param_2 = local_30;
  param_2[1] = uStack_2c;
  param_2[2] = uStack_28;
  param_2[3] = uStack_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472b650b FUN_1472b650b body=2351 status=ok
// SIG undefined FUN_1472b650b(void)

void FUN_1472b650b(undefined8 param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  int iVar9;
  double dVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStack_408 [32];
  ulonglong local_3e8;
  longlong local_3e0;
  longlong *local_3d8;
  longlong *local_3d0;
  longlong *local_3c8;
  double *local_3c0;
  int local_3b8;
  undefined4 local_3b4;
  longlong local_3b0;
  longlong *local_3a8;
  longlong *local_3a0;
  undefined8 local_398;
  longlong local_390;
  longlong local_388;
  longlong local_380;
  ulonglong local_378;
  undefined8 local_370;
  longlong local_368;
  longlong local_360;
  longlong local_358;
  longlong *local_350;
  undefined4 local_348;
  uint uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined8 local_338;
  ulonglong uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 *local_318;
  ulonglong uStack_310;
  undefined8 ***local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined4 local_2b8;
  longlong local_218 [12];
  undefined4 local_1b8;
  uint uStack_1b4;
  undefined4 uStack_1b0;
  uint uStack_1ac;
  ulonglong local_1a8;
  undefined8 local_1a0;
  double local_198;
  undefined8 ***local_190;
  double dStack_188;
  double local_180;
  double dStack_178;
  double local_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double local_140;
  double dStack_138;
  double local_130;
  double dStack_128;
  double local_120;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  double local_b8;
  undefined4 local_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_408;
  puVar11 = local_338;
  if (param_3 != (longlong *)0x0) {
    plVar1 = param_3 + 2;
    local_328 = 0x100000000;
    local_318 = (undefined8 *)&DAT_ffffffff;
    uStack_310 = uStack_310 & 0xffffffff00000000;
    uStack_320 = plVar1;
    if ((int)param_3[5] == 0) {
      iVar14 = 0;
    }
    else {
      FUN_1449c0562(&local_328);
      iVar14 = (int)param_3[5];
    }
    local_338 = local_318;
    puVar11 = local_338;
    uStack_330 = uStack_310;
    local_348 = (undefined4)local_328;
    uStack_344 = local_328._4_4_;
    uStack_340 = (undefined4)uStack_320;
    uStack_33c = uStack_320._4_4_;
    local_338._4_4_ = (int)((ulonglong)local_318 >> 0x20);
    local_350 = param_3;
    if ((local_338._4_4_ != iVar14) || (uStack_320 != plVar1)) {
      local_380 = param_4 + 0x500;
      iVar9 = local_338._4_4_;
      local_3b8 = iVar14;
      local_3a8 = param_3;
      local_3a0 = plVar1;
      local_398 = param_1;
      local_390 = param_2;
      local_338 = puVar11;
      do {
        lVar5 = *local_350;
        lVar12 = *(longlong *)(lVar5 + (longlong)iVar9 * 0x18);
        lVar6 = *(longlong *)(*(longlong *)(lVar12 + 0x28) + 0x1c0);
        local_358 = 0;
        local_3b0 = FUN_1449cbe5c(lVar6,*(undefined4 *)(param_2 + 8),&local_358);
        local_388 = local_358;
        if (local_358 == 0) {
          local_388 = lVar6;
        }
        local_3e8 = local_3e8 & 0xffffffff00000000;
        FUN_1449e488f(&local_328,param_4,lVar12,0);
        FUN_142ca69a4(&local_360,&local_328,1,1);
        local_d8 = 0;
        uStack_d0 = 0x3f80000000000000;
        lVar6 = *(longlong *)(lVar12 + 0x28);
        local_148 = 1.0 / *(double *)(lVar6 + 0x1a0);
        local_170 = 1.0 / *(double *)(lVar6 + 0x1a8);
        local_198 = 1.0 / *(double *)(lVar6 + 0x1b0);
        local_180 = 0.0;
        dStack_178 = 0.0;
        local_190 = (undefined8 ***)0x0;
        dStack_188 = 0.0;
        local_158 = 0.0;
        dStack_150 = 0.0;
        local_168 = 0.0;
        dStack_160 = 0.0;
        local_130 = 0.0;
        dStack_128 = 0.0;
        local_140 = 0.0;
        dStack_138 = 0.0;
        local_120 = 1.0;
        FUN_1447fea8d(&local_328,lVar6 + 0x50,&local_198);
        local_1b8 = *(undefined4 *)(param_4 + 0x1030);
        uStack_1b0 = *(undefined4 *)(param_4 + 0x1038);
        uStack_1b4 = *(uint *)(param_4 + 0x1034) ^ 0x80000000;
        uStack_1ac = *(uint *)(param_4 + 0x103c) ^ 0x80000000;
        local_218[0] = 0x3ff0000000000000;
        local_218[3] = 0;
        local_218[4] = 0;
        local_218[1] = 0;
        local_218[2] = 0;
        local_218[5] = 0x3ff0000000000000;
        local_218[8] = 0;
        local_218[9] = 0;
        local_218[6] = 0;
        local_218[7] = 0;
        local_218[10] = 0x3ff0000000000000;
        local_218[0xb] = 0;
        local_1a8 = *(ulonglong *)(param_4 + 0x1040) ^ 0x8000000000000000;
        local_1a0 = 0x3ff0000000000000;
        FUN_1447fea8d(&local_198,local_218,&local_328);
        local_118 = (float)local_198;
        local_114 = (float)(double)local_190;
        local_110 = (float)dStack_188;
        local_10c = (float)local_180;
        local_108 = (float)dStack_178;
        local_104 = (float)local_170;
        local_100 = (float)local_168;
        local_fc = (float)dStack_160;
        local_f8 = (float)local_158;
        local_f4 = (float)dStack_150;
        local_f0 = (float)local_148;
        local_ec = (float)local_140;
        local_e8 = (float)dStack_138;
        local_e4 = (float)local_130;
        local_e0 = (float)dStack_128;
        local_dc = (float)local_120;
        cVar4 = (char)(*(longlong **)(lVar12 + 0x28))[0x3d];
        uVar16 = 0;
        fVar15 = 1.0;
        if (cVar4 == '\x02') {
          fVar15 = (float)(**(code **)(**(longlong **)(lVar12 + 0x28) + 0x20))();
          fVar15 = tanf(fVar15);
          uVar16 = 0x3f800000;
        }
        uVar17 = 0x3f800000;
        if (cVar4 != '\x01') {
          uVar17 = 0;
        }
        local_d8 = CONCAT44(0x3f800000,fVar15);
        uStack_d0 = CONCAT44(uVar17,uVar16);
        local_c8 = *(undefined8 *)(*(longlong *)(lVar12 + 0x28) + 0x1b8);
        local_c0 = 0;
        FUN_142cdedaa(&local_198,local_380,lVar12);
        local_b0 = local_190._0_4_;
        local_b8 = local_198;
        FUN_142f6fc50(&local_368,&local_118);
        local_3b4 = *(undefined4 *)(lVar5 + (longlong)iVar9 * 0x18 + 8);
        local_378 = *(ulonglong *)(param_4 + 0x13ae0);
        local_370 = *(undefined8 *)(param_4 + 0x13ae8);
        lVar5 = *(longlong *)(local_3b0 + 0x18);
        FUN_1460478b0();
        dVar10 = (double)FUN_144b1d0c2(*(undefined8 *)(lVar5 + 0x28),&DAT_14ca3aef8,0);
        local_318 = (undefined8 *)0x0;
        uStack_310 = 0x200000000;
        local_190 = (undefined8 ***)lVar5;
        if (dVar10 == 0.0) {
          local_190 = (undefined8 ***)0x0;
        }
        local_2b8 = 0;
        local_2c8 = 0;
        uStack_2c0 = 0;
        local_2d8 = 0;
        uStack_2d0 = 0;
        local_2e8 = 0;
        uStack_2e0 = 0;
        local_2f8 = 0;
        uStack_2f0 = 0;
        local_308 = (undefined8 ****)0x0;
        uStack_300 = 0;
        local_198 = dVar10;
        FUN_14723c438(&local_328,&local_198);
        uVar13 = (ulonglong)(byte)local_2b8 - (ulonglong)(local_2b8 >> 1 & 0x55);
        uVar13 = (uVar13 >> 2 & 0x3333333333333333) + (uVar13 & 0x3333333333333333);
        uVar13 = ((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar13 == 0) {
          local_198 = 4.34777768340297e-322;
          local_190 = (undefined8 ****)0x0;
        }
        else {
          puVar11 = local_318;
          if (local_318 == (undefined8 *)0x0) {
            puVar11 = &local_328;
          }
          FUN_144b11014(puVar11 + (uVar13 - 1));
          local_190 = &local_308;
          if (0x50 < local_2b8._2_2_) {
            local_190 = local_308;
          }
          puVar11 = local_318;
          if (local_318 == (undefined8 *)0x0) {
            puVar11 = &local_328;
          }
          local_198 = (double)puVar11[uVar13 - 1];
        }
        param_2 = local_390;
        plVar1 = local_3a8;
        lVar12 = *(longlong *)(*(longlong *)(param_4 + 0x13b68) + 0x10);
        local_3e0 = param_4;
        local_218[0] = lVar12;
        if (lVar12 == 0) {
          local_3c0 = &local_198;
          local_3c8 = local_218;
          local_3d0 = &local_368;
          local_3d8 = &local_360;
          local_3e8 = local_3b0;
          FUN_1472be966(dVar10,local_390,*(undefined4 *)(local_390 + 8),local_388);
        }
        else {
          LOCK();
          *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
          UNLOCK();
          local_3c0 = &local_198;
          local_3c8 = local_218;
          local_3d0 = &local_368;
          local_3d8 = &local_360;
          local_3e8 = local_3b0;
          FUN_1472be966(dVar10,local_390,*(undefined4 *)(local_390 + 8),local_388);
          if (lVar12 != 0) {
            LOCK();
            puVar2 = (uint *)(lVar12 + 8);
            uVar3 = *puVar2;
            *puVar2 = *puVar2 - 1;
            UNLOCK();
            if ((uVar3 & 0x3fffffff) == 1) {
              FUN_144a54812(lVar12);
            }
          }
        }
        uVar8 = local_398;
        plVar7 = local_3a0;
        iVar14 = local_3b8;
        if (dVar10 == 0.0) {
          lVar12 = 0;
        }
        else {
          lVar12 = *(longlong *)
                    (*(longlong *)(*(longlong *)(lVar5 + 8) + 0x50) +
                    (longlong)*(int *)((longlong)dVar10 + 0xd4) * 8);
          if (lVar12 == 0) {
            lVar12 = FUN_1400bafc2(*(longlong *)(lVar5 + 8),*(int *)((longlong)dVar10 + 0xd4),1);
          }
        }
        uVar16 = FUN_1474050e2(*(undefined8 *)(param_4 + 0x13ae0),lVar12,1);
        local_3e0 = CONCAT44(local_3e0._4_4_,uVar16);
        local_3e8 = local_378;
        FUN_14723c1da(&local_328,uVar8,local_370);
        FUN_144ab2e4c(&local_328);
        if (local_368 != 0) {
          LOCK();
          puVar2 = (uint *)(local_368 + 8);
          uVar3 = *puVar2;
          *puVar2 = *puVar2 - 1;
          UNLOCK();
          if ((uVar3 & 0x3fffffff) == 1) {
            FUN_144a54812();
          }
        }
        if (local_360 != 0) {
          LOCK();
          puVar2 = (uint *)(local_360 + 8);
          uVar3 = *puVar2;
          *puVar2 = *puVar2 - 1;
          UNLOCK();
          if ((uVar3 & 0x3fffffff) == 1) {
            FUN_144a54812();
          }
        }
        local_338 = (undefined8 *)CONCAT44(local_338._4_4_,(uint)local_338 & ~uStack_344);
        FUN_1449c0562(&local_348);
        iVar9 = local_338._4_4_;
        puVar11 = local_338;
      } while (local_350 != plVar1 ||
               ((longlong *)CONCAT44(uStack_33c,uStack_340) != plVar7 || local_338._4_4_ != iVar14))
      ;
    }
  }
  local_338 = puVar11;
  if ((local_a0 ^ (ulonglong)auStack_408) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1472b6e3c FUN_1472b6e3c body=349 status=ok
// SIG undefined FUN_1472b6e3c(void)

void FUN_1472b6e3c(undefined8 param_1,ulonglong *param_2,longlong param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar4 = FUN_1472b6f9a(*(undefined8 *)(param_3 + 0x13818));
  uVar3 = FUN_1474050e2(*(undefined8 *)(param_3 + 0x13ae0),uVar4,1);
  uVar4 = *(undefined8 *)(param_3 + 0x13ae0);
  uVar2 = *(undefined8 *)(param_3 + 0x13ae8);
  puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar7 + 7;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x40);
    puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar7 + 7;
  }
  *param_2 = (ulonglong)puVar5;
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[4] = 0;
  puVar7[5] = 0;
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7[6] = 0;
  *(undefined4 *)(puVar7 + 2) = uVar3;
  puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar6 + 8;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x48);
    puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar6 + 8;
  }
  *param_2 = (ulonglong)puVar5;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar6;
  param_2[6] = (ulonglong)(puVar6 + 1);
  puVar6[1] = 0;
  *puVar6 = &PTR_LAB_14a203848;
  puVar6[2] = uVar2;
  puVar6[3] = 0;
  puVar6[4] = uVar4;
  *(undefined4 *)(puVar6 + 5) = 1;
  puVar6[6] = puVar7;
  *(undefined1 *)(puVar6 + 7) = 2;
  FUN_14494c7ac(param_2,&local_38,1);
  if (local_38 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_38 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_38)(local_38,1);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472b6f9a FUN_1472b6f9a body=110 status=ok
// SIG undefined FUN_1472b6f9a(void)

longlong FUN_1472b6f9a(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1472ba696(param_1,&local_20);
  if (local_20 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)
             (*(longlong *)(*(longlong *)(local_18 + 8) + 0x50) +
             (longlong)*(int *)(local_20 + 0xd4) * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(local_18 + 8),(longlong)*(int *)(local_20 + 0xd4),1);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472b700a FUN_1472b700a body=823 status=ok
// SIG undefined FUN_1472b700a(void)

void FUN_1472b700a(undefined8 param_1,ulonglong *param_2,longlong param_3)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined1 auStack_728 [32];
  longlong local_708;
  longlong local_700;
  undefined8 local_6f8;
  char local_6f0;
  undefined8 local_6e8;
  char local_6e0;
  undefined8 *local_6d8 [144];
  undefined8 auStack_258 [67];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_728;
  lVar7 = FUN_1447e4f80();
  local_6e0 = *(char *)(lVar7 + 0x41);
  if (local_6e0 == '\x03') {
    local_6e0 = '\x02';
  }
  local_6e8 = *(undefined8 *)(param_3 + 0x18);
  uVar4 = *(undefined8 *)(param_3 + 0x13b68);
  FUN_145ce4a14();
  local_6f0 = DAT_14ca3ab29;
  if (DAT_14ca3ab29 == '\x03') {
    local_6f0 = '\x02';
  }
  local_6f8 = uVar4;
  FUN_1472b649e(*(undefined8 *)(param_3 + 0x13818));
  uVar12 = 0;
  memset(local_6d8 + 0x10,0,0x618);
  lVar7 = local_708;
  FUN_145ee32be();
  FUN_1432367d9(local_6d8 + 0x10,local_708,&DAT_14ca3f230,&local_6f8);
  local_6d8[0xe] = (undefined8 *)0x0;
  local_6d8[0xf] = (undefined8 *)0x0;
  local_6d8[0xc] = (undefined8 *)0x0;
  local_6d8[0xd] = (undefined8 *)0x0;
  local_6d8[10] = (undefined8 *)0x0;
  local_6d8[0xb] = (undefined8 *)0x0;
  local_6d8[8] = (undefined8 *)0x0;
  local_6d8[9] = (undefined8 *)0x0;
  local_6d8[6] = (undefined8 *)0x0;
  local_6d8[7] = (undefined8 *)0x0;
  local_6d8[4] = (undefined8 *)0x0;
  local_6d8[5] = (undefined8 *)0x0;
  local_6d8[2] = (undefined8 *)0x0;
  local_6d8[3] = (undefined8 *)0x0;
  local_6d8[0] = (undefined8 *)0x0;
  local_6d8[1] = (undefined8 *)0x0;
  iVar3 = *(int *)(lVar7 + 0x60);
  if (0 < (longlong)iVar3) {
    uVar13 = *(ulonglong *)(lVar7 + 0x58);
    uVar9 = lVar7 + 0x58 + ((longlong)uVar13 >> 0x18);
    if ((uVar13 & 1) == 0) {
      uVar9 = uVar13;
    }
    uVar12 = 0xffffffff;
    lVar7 = 0;
    do {
      uVar2 = *(ushort *)(uVar9 + lVar7 * 2);
      if (uVar2 < 0x10) {
        local_6d8[(uint)uVar2] = (undefined8 *)auStack_258[lVar7];
        if ((int)uVar12 <= (int)(uint)uVar2) {
          uVar12 = (uint)uVar2;
        }
      }
      lVar7 = lVar7 + 1;
    } while (iVar3 != lVar7);
    uVar12 = uVar12 + 1;
  }
  FUN_1472c2e34(local_6d8 + 0x10);
  if (local_708 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(longlong *)
             (*(longlong *)(*(longlong *)(local_700 + 8) + 0x50) +
             (longlong)*(int *)(local_708 + 0xd4) * 8);
    if (lVar7 == 0) {
      lVar7 = FUN_1400bafc2(*(longlong *)(local_700 + 8),*(int *)(local_708 + 0xd4),1);
    }
  }
  uVar6 = FUN_1474050e2(*(undefined8 *)(param_3 + 0x13ae0),lVar7,1);
  uVar4 = *(undefined8 *)(param_3 + 0x13ae0);
  uVar5 = *(undefined8 *)(param_3 + 0x13ae8);
  puVar14 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar8 = puVar14 + 7;
  if ((undefined8 *)param_2[1] < puVar8) {
    FUN_140023dd8(param_2,0x40);
    puVar14 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar14 + 7;
  }
  *param_2 = (ulonglong)puVar8;
  *puVar14 = 0;
  puVar14[1] = 0;
  puVar14[2] = 0;
  puVar14[3] = 0;
  puVar14[4] = 0;
  puVar14[5] = 0;
  puVar14[6] = 0;
  *(undefined4 *)((longlong)puVar14 + 0xc) = 1;
  *(undefined4 *)(puVar14 + 2) = uVar6;
  *(short *)(puVar14 + 3) = (short)uVar12;
  if (uVar12 != 0) {
    uVar11 = (ulonglong)uVar12;
    uVar9 = *param_2 + 7 & 0xfffffffffffffff8;
    uVar13 = uVar9 + uVar11 * 8;
    if (param_2[1] < uVar13) {
      FUN_140023dd8(param_2,(int)(uVar11 * 8) + 8);
      uVar9 = *param_2 + 7 & 0xfffffffffffffff8;
      uVar13 = uVar11 * 8 + uVar9;
    }
    *param_2 = uVar13;
    puVar14[4] = uVar9;
    uVar13 = 0;
    do {
      *(undefined8 **)(puVar14[4] + uVar13 * 8) = local_6d8[uVar13];
      uVar13 = uVar13 + 1;
    } while (uVar11 != uVar13);
  }
  puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar8 = puVar10 + 8;
  if ((undefined8 *)param_2[1] < puVar8) {
    FUN_140023dd8(param_2,0x48);
    puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar10 + 8;
  }
  *param_2 = (ulonglong)puVar8;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar10;
  param_2[6] = (ulonglong)(puVar10 + 1);
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_14a203848;
  puVar10[2] = uVar5;
  puVar10[3] = 0;
  puVar10[4] = uVar4;
  *(undefined4 *)(puVar10 + 5) = 1;
  puVar10[6] = puVar14;
  *(undefined1 *)(puVar10 + 7) = 2;
  FUN_14494c7ac(param_2,local_6d8 + 0x10,1);
  if (local_6d8[0x10] != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_6d8[0x10] + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_6d8[0x10])(local_6d8[0x10],1);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_728) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472b7342 FUN_1472b7342 body=54 status=ok
// SIG undefined FUN_1472b7342(void)

void FUN_1472b7342(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 1472b73a6 FUN_1472b73a6 body=39 status=ok
// SIG undefined FUN_1472b73a6(void)

void FUN_1472b73a6(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1472bed2a(uVar1,param_1);
  return;
}



// FUNCTION 1472b73ce FUN_1472b73ce body=79 status=ok
// SIG undefined FUN_1472b73ce(void)

longlong FUN_1472b73ce(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined4 *)(lVar1 + 0x108) = 0xffffffff;
  *(undefined2 *)(lVar1 + 0x10c) = 0xffff;
  return lVar1;
}



// FUNCTION 1472b741e FUN_1472b741e body=54 status=ok
// SIG undefined FUN_1472b741e(void)

void FUN_1472b741e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 1472b7482 FUN_1472b7482 body=39 status=ok
// SIG undefined FUN_1472b7482(void)

void FUN_1472b7482(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1472bed2a(uVar1,param_1);
  return;
}



// FUNCTION 1472b74aa FUN_1472b74aa body=79 status=ok
// SIG undefined FUN_1472b74aa(void)

longlong FUN_1472b74aa(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined4 *)(lVar1 + 0x108) = 0xffffffff;
  *(undefined2 *)(lVar1 + 0x10c) = 0xffff;
  return lVar1;
}



// FUNCTION 1472b74fa FUN_1472b74fa body=54 status=ok
// SIG undefined FUN_1472b74fa(void)

void FUN_1472b74fa(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 1472b755e FUN_1472b755e body=39 status=ok
// SIG undefined FUN_1472b755e(void)

void FUN_1472b755e(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1472bed2a(uVar1,param_1);
  return;
}



// FUNCTION 1472b7586 FUN_1472b7586 body=79 status=ok
// SIG undefined FUN_1472b7586(void)

longlong FUN_1472b7586(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined4 *)(lVar1 + 0x108) = 0xffffffff;
  *(undefined2 *)(lVar1 + 0x10c) = 0xffff;
  return lVar1;
}



// FUNCTION 1472b75d6 FUN_1472b75d6 body=54 status=ok
// SIG undefined FUN_1472b75d6(void)

void FUN_1472b75d6(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 1472b763a FUN_1472b763a body=39 status=ok
// SIG undefined FUN_1472b763a(void)

void FUN_1472b763a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1472bed2a(uVar1,param_1);
  return;
}



// FUNCTION 1472b7662 FUN_1472b7662 body=79 status=ok
// SIG undefined FUN_1472b7662(void)

longlong FUN_1472b7662(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined4 *)(lVar1 + 0x108) = 0xffffffff;
  *(undefined2 *)(lVar1 + 0x10c) = 0xffff;
  return lVar1;
}



// FUNCTION 1472b76b2 FUN_1472b76b2 body=54 status=ok
// SIG undefined FUN_1472b76b2(void)

void FUN_1472b76b2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 1472b7716 FUN_1472b7716 body=39 status=ok
// SIG undefined FUN_1472b7716(void)

void FUN_1472b7716(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1472bed2a(uVar1,param_1);
  return;
}



// FUNCTION 1472b773e FUN_1472b773e body=79 status=ok
// SIG undefined FUN_1472b773e(void)

longlong FUN_1472b773e(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined4 *)(lVar1 + 0x108) = 0xffffffff;
  *(undefined2 *)(lVar1 + 0x10c) = 0xffff;
  return lVar1;
}



// FUNCTION 1472b778e FUN_1472b778e body=54 status=ok
// SIG undefined FUN_1472b778e(void)

void FUN_1472b778e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 1472b77f2 FUN_1472b77f2 body=39 status=ok
// SIG undefined FUN_1472b77f2(void)

void FUN_1472b77f2(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1472bed2a(uVar1,param_1);
  return;
}



// FUNCTION 1472b781a FUN_1472b781a body=79 status=ok
// SIG undefined FUN_1472b781a(void)

longlong FUN_1472b781a(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined4 *)(lVar1 + 0x108) = 0xffffffff;
  *(undefined2 *)(lVar1 + 0x10c) = 0xffff;
  return lVar1;
}



// FUNCTION 1472b786a FUN_1472b786a body=54 status=ok
// SIG undefined FUN_1472b786a(void)

void FUN_1472b786a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 1472b78ce FUN_1472b78ce body=39 status=ok
// SIG undefined FUN_1472b78ce(void)

void FUN_1472b78ce(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1472bed2a(uVar1,param_1);
  return;
}



// FUNCTION 1472b78f6 FUN_1472b78f6 body=79 status=ok
// SIG undefined FUN_1472b78f6(void)

longlong FUN_1472b78f6(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined4 *)(lVar1 + 0x108) = 0xffffffff;
  *(undefined2 *)(lVar1 + 0x10c) = 0xffff;
  return lVar1;
}



// FUNCTION 1472b7946 FUN_1472b7946 body=54 status=ok
// SIG undefined FUN_1472b7946(void)

void FUN_1472b7946(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 1472b79aa FUN_1472b79aa body=39 status=ok
// SIG undefined FUN_1472b79aa(void)

void FUN_1472b79aa(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1472bed2a(uVar1,param_1);
  return;
}



// FUNCTION 1472b79d2 FUN_1472b79d2 body=79 status=ok
// SIG undefined FUN_1472b79d2(void)

longlong FUN_1472b79d2(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined4 *)(lVar1 + 0x108) = 0xffffffff;
  *(undefined2 *)(lVar1 + 0x10c) = 0xffff;
  return lVar1;
}



// FUNCTION 1472b7a22 FUN_1472b7a22 body=54 status=ok
// SIG undefined FUN_1472b7a22(void)

void FUN_1472b7a22(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 1472b7a86 FUN_1472b7a86 body=39 status=ok
// SIG undefined FUN_1472b7a86(void)

void FUN_1472b7a86(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1472bed2a(uVar1,param_1);
  return;
}


