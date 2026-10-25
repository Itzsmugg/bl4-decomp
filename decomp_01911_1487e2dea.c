// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1487e2dea FUN_1487e2dea body=84 status=ok
// SIG undefined FUN_1487e2dea(void)

void FUN_1487e2dea(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140595974(0x1c0,0);
    lVar4 = 7;
    plVar1 = plVar2;
    do {
      plVar3 = plVar1 + 7;
      *plVar1 = (longlong)plVar3;
      lVar4 = lVar4 + -1;
      plVar1 = plVar3;
    } while (lVar4 != 0);
    *plVar3 = *param_1;
    *param_1 = (longlong)plVar2;
    *(int *)(param_1 + 1) = (int)param_1[1] + 8;
  }
  *param_1 = *plVar2;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return;
}



// FUNCTION 1487e2e44 FUN_1487e2e44 body=44 status=ok
// SIG undefined FUN_1487e2e44(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1487e2e44(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb72e7c = _DAT_14cb72e7c + -1;
  *param_1 = DAT_14cb72e70;
  DAT_14cb72e70 = param_1;
  return;
}



// FUNCTION 1487e2e70 FUN_1487e2e70 body=28 status=ok
// SIG undefined FUN_1487e2e70(void)

void FUN_1487e2e70(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  FUN_1487e54c6(param_1);
  return;
}



// FUNCTION 1487e2e8c FUN_1487e2e8c body=21 status=ok
// SIG undefined FUN_1487e2e8c(void)

void FUN_1487e2e8c(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1487e2ea2();
  FUN_1487e2f14(uVar1);
  return;
}



// FUNCTION 1487e2ea2 FUN_1487e2ea2 body=113 status=ok
// SIG undefined FUN_1487e2ea2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1487e2ea2(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  puVar2 = DAT_14cb72f60;
  if (DAT_14cb72f60 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_140595974(0x1380,0);
    lVar4 = 7;
    puVar1 = puVar2;
    do {
      puVar3 = puVar1 + 0x4e;
      *puVar1 = puVar3;
      lVar4 = lVar4 + -1;
      puVar1 = puVar3;
    } while (lVar4 != 0);
    *puVar3 = DAT_14cb72f60;
    _DAT_14cb72f68 = _DAT_14cb72f68 + 8;
  }
  DAT_14cb72f60 = (undefined8 *)*puVar2;
  _DAT_14cb72f6c = _DAT_14cb72f6c + 1;
  return;
}



// FUNCTION 1487e2f14 FUN_1487e2f14 body=414 status=ok
// SIG undefined FUN_1487e2f14(void)

void FUN_1487e2f14(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = &PTR_FUN_14aff2260;
  *(undefined1 *)((longlong)param_1 + 0x29) = 3;
  *(undefined2 *)((longlong)param_1 + 0x2a) = 0xffff;
  *param_1 = &PTR_FUN_14aff2090;
  *(undefined2 *)(param_1 + 6) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = &DAT_14a171d50;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = &DAT_14a171d50;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined1 *)(param_1 + 0x26) = 1;
  param_1[0x27] = &DAT_14a171d50;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2c] = &DAT_14a171d50;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1bc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x20c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x214) = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x1f] = &DAT_14cb73490;
  param_1[0x23] = &DAT_14cb73490;
  param_1[0x28] = &DAT_14cb73490;
  param_1[0x2d] = &DAT_14cb73500;
  param_1[4] = DAT_14cb735f0;
  *(undefined1 *)(param_1 + 5) = 1;
  return;
}



// FUNCTION 1487e30b2 FUN_1487e30b2 body=44 status=ok
// SIG undefined FUN_1487e30b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1487e30b2(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb72f6c = _DAT_14cb72f6c + -1;
  *param_1 = DAT_14cb72f60;
  DAT_14cb72f60 = param_1;
  return;
}



// FUNCTION 1487e30de FUN_1487e30de body=28 status=ok
// SIG undefined FUN_1487e30de(void)

void FUN_1487e30de(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  FUN_1487e2f14(param_1);
  return;
}



// FUNCTION 1487e30fa FUN_1487e30fa body=21 status=ok
// SIG undefined FUN_1487e30fa(void)

void FUN_1487e30fa(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1487e3110();
  FUN_1487e3182(uVar1);
  return;
}



// FUNCTION 1487e3110 FUN_1487e3110 body=113 status=ok
// SIG undefined FUN_1487e3110(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1487e3110(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  puVar2 = DAT_14cb73050;
  if (DAT_14cb73050 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_140595974(0x5c0,0);
    lVar4 = 7;
    puVar1 = puVar2;
    do {
      puVar3 = puVar1 + 0x17;
      *puVar1 = puVar3;
      lVar4 = lVar4 + -1;
      puVar1 = puVar3;
    } while (lVar4 != 0);
    *puVar3 = DAT_14cb73050;
    _DAT_14cb73058 = _DAT_14cb73058 + 8;
  }
  DAT_14cb73050 = (undefined8 *)*puVar2;
  _DAT_14cb7305c = _DAT_14cb7305c + 1;
  return;
}



// FUNCTION 1487e3182 FUN_1487e3182 body=135 status=ok
// SIG undefined FUN_1487e3182(void)

void FUN_1487e3182(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14aff2a10;
  *(undefined2 *)(param_1 + 3) = 0x100;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3f800000;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0x1ffffffff;
  param_1[0xb] = &DAT_14a171d50;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0x91) = 0;
  *(undefined8 *)((longlong)param_1 + 0x99) = 0;
  param_1[0x15] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0xc] = &DAT_14cb73490;
  return;
}



// FUNCTION 1487e320a FUN_1487e320a body=44 status=ok
// SIG undefined FUN_1487e320a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1487e320a(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb7305c = _DAT_14cb7305c + -1;
  *param_1 = DAT_14cb73050;
  DAT_14cb73050 = param_1;
  return;
}



// FUNCTION 1487e3236 FUN_1487e3236 body=28 status=ok
// SIG undefined FUN_1487e3236(void)

void FUN_1487e3236(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  FUN_1487e3182(param_1);
  return;
}



// FUNCTION 1487e3252 FUN_1487e3252 body=21 status=ok
// SIG undefined FUN_1487e3252(void)

void FUN_1487e3252(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1487e3268();
  FUN_1487e32da(uVar1);
  return;
}



// FUNCTION 1487e3268 FUN_1487e3268 body=113 status=ok
// SIG undefined FUN_1487e3268(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1487e3268(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  puVar2 = DAT_14cb73140;
  if (DAT_14cb73140 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_140595974(0x540,0);
    lVar4 = 7;
    puVar1 = puVar2;
    do {
      puVar3 = puVar1 + 0x15;
      *puVar1 = puVar3;
      lVar4 = lVar4 + -1;
      puVar1 = puVar3;
    } while (lVar4 != 0);
    *puVar3 = DAT_14cb73140;
    _DAT_14cb73148 = _DAT_14cb73148 + 8;
  }
  DAT_14cb73140 = (undefined8 *)*puVar2;
  _DAT_14cb7314c = _DAT_14cb7314c + 1;
  return;
}



// FUNCTION 1487e32da FUN_1487e32da body=145 status=ok
// SIG undefined FUN_1487e32da(void)

void FUN_1487e32da(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = &PTR_FUN_14aff2260;
  *(undefined1 *)((longlong)param_1 + 0x29) = 3;
  *(undefined2 *)((longlong)param_1 + 0x2a) = 0xffff;
  *param_1 = &PTR_FUN_14aff2bd0;
  *(undefined2 *)(param_1 + 6) = 0;
  param_1[7] = &DAT_14a171d50;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[8] = &DAT_14cb73490;
  param_1[4] = DAT_14cb73798;
  *(undefined1 *)(param_1 + 5) = 1;
  return;
}



// FUNCTION 1487e336c FUN_1487e336c body=44 status=ok
// SIG undefined FUN_1487e336c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1487e336c(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb7314c = _DAT_14cb7314c + -1;
  *param_1 = DAT_14cb73140;
  DAT_14cb73140 = param_1;
  return;
}



// FUNCTION 1487e3398 FUN_1487e3398 body=28 status=ok
// SIG undefined FUN_1487e3398(void)

void FUN_1487e3398(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  FUN_1487e32da(param_1);
  return;
}



// FUNCTION 1487e33b4 FUN_1487e33b4 body=57 status=ok
// SIG undefined FUN_1487e33b4(void)

void FUN_1487e33b4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1487e2dea();
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  *puVar1 = &PTR_FUN_14affe710;
  *(undefined1 *)(puVar1 + 3) = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *(undefined1 *)(puVar1 + 6) = 0;
  return;
}



// FUNCTION 1487e33ee FUN_1487e33ee body=40 status=ok
// SIG undefined FUN_1487e33ee(void)

void FUN_1487e33ee(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14affe710;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  return;
}



// FUNCTION 1487e3416 FUN_1487e3416 body=44 status=ok
// SIG undefined FUN_1487e3416(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1487e3416(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb7323c = _DAT_14cb7323c + -1;
  *param_1 = DAT_14cb73230;
  DAT_14cb73230 = param_1;
  return;
}



// FUNCTION 1487e3442 FUN_1487e3442 body=62 status=ok
// SIG undefined FUN_1487e3442(void)

void FUN_1487e3442(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14affe710;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  return;
}



// FUNCTION 1487e3480 FUN_1487e3480 body=51 status=ok
// SIG undefined FUN_1487e3480(void)

void FUN_1487e3480(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1487e34b4();
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  *puVar1 = &PTR_FUN_14aff1d70;
  *(undefined1 *)(puVar1 + 3) = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  return;
}



// FUNCTION 1487e34b4 FUN_1487e34b4 body=101 status=ok
// SIG undefined FUN_1487e34b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1487e34b4(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  puVar2 = DAT_14cb73320;
  if (DAT_14cb73320 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_140595974(0x200,0);
    lVar4 = 7;
    puVar1 = puVar2;
    do {
      puVar3 = puVar1 + 8;
      *puVar1 = puVar3;
      lVar4 = lVar4 + -1;
      puVar1 = puVar3;
    } while (lVar4 != 0);
    *puVar3 = DAT_14cb73320;
    _DAT_14cb73328 = _DAT_14cb73328 + 8;
  }
  DAT_14cb73320 = (undefined8 *)*puVar2;
  _DAT_14cb7332c = _DAT_14cb7332c + 1;
  return;
}



// FUNCTION 1487e3544 FUN_1487e3544 body=44 status=ok
// SIG undefined FUN_1487e3544(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1487e3544(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb7332c = _DAT_14cb7332c + -1;
  *param_1 = DAT_14cb73320;
  DAT_14cb73320 = param_1;
  return;
}



// FUNCTION 1487e3570 FUN_1487e3570 body=62 status=ok
// SIG undefined FUN_1487e3570(void)

void FUN_1487e3570(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14aff1d70;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}



// FUNCTION 1487e35ae FUN_1487e35ae body=51 status=ok
// SIG undefined FUN_1487e35ae(void)

void FUN_1487e35ae(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aff08d0;
  param_1[1] = 0;
  param_1[2] = &DAT_14a171d50;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = &DAT_14cb733b0;
  return;
}



// FUNCTION 1487e35e2 FUN_1487e35e2 body=86 status=ok
// SIG undefined FUN_1487e35e2(void)

float FUN_1487e35e2(longlong param_1,short param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  float fVar6;
  
  if (*(short *)(param_1 + 0x24) < 3) {
    return *(float *)(param_1 + 0x1c);
  }
  uVar3 = (int)*(short *)(param_1 + 0x24) - 1;
  fVar1 = *(float *)(param_1 + 0x1c);
  fVar2 = *(float *)(param_1 + 0x20);
  uVar4 = (longlong)param_2;
  if ((longlong)(ulonglong)uVar3 <= (longlong)param_2) {
    uVar4 = (ulonglong)uVar3;
  }
  iVar5 = 0;
  if (0 < (longlong)uVar4) {
    iVar5 = (int)uVar4;
  }
  fVar6 = ((float)iVar5 * (fVar2 - fVar1)) / (float)(int)uVar3 + fVar1;
  if (fVar2 <= fVar6) {
    fVar6 = fVar2;
  }
  if (fVar6 <= fVar1) {
    fVar6 = fVar1;
  }
  return fVar6;
}



// FUNCTION 1487e3638 FUN_1487e3638 body=22 status=ok
// SIG undefined FUN_1487e3638(void)

undefined8 FUN_1487e3638(int *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  
  plVar4 = DAT_14cb73db8;
  if (DAT_14cb73db8 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cb73db8 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb73db8 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb73db8[0x3a] <= *(int *)((longlong)DAT_14cb73db8 + 0x1fc))) {
LAB_144837614:
      lVar8 = FUN_144837648(plVar4,param_1,1);
      if (lVar8 == 0) {
        return 0;
      }
      FUN_14012a344(plVar4,lVar8,0);
      puVar9 = (undefined8 *)(lVar8 + 0x30);
      goto LAB_144837566;
    }
  }
  else {
    cVar5 = (**(code **)(*DAT_14cb73db8 + 0x300))(DAT_14cb73db8);
    if (cVar5 == '\0') goto LAB_144837614;
  }
  puVar7 = (uint *)&DAT_14c948618;
  if (((*param_1 != 0) && (0 < param_1[1])) && (*param_1 != DAT_14c948000)) {
    puVar7 = (uint *)(param_1 + 2);
    if (0 < param_1[9]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
    if (1 < (uint)param_1[1]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
  }
  uVar2 = *puVar7;
  uVar3 = puVar7[2];
  uVar6 = uVar2;
  if (uVar3 != 0) {
    uVar6 = uVar3 >> 0xd ^ uVar2 - uVar3;
    uVar10 = uVar6 << 8 ^ (-0x61c88647 - uVar3) - uVar6;
    uVar13 = uVar10 >> 0xd ^ (uVar3 - uVar6) - uVar10;
    uVar6 = uVar13 >> 0xc ^ (uVar6 - uVar10) - uVar13;
    uVar15 = uVar6 << 0x10 ^ (uVar10 - uVar13) - uVar6;
    uVar10 = uVar15 >> 5 ^ (uVar13 - uVar6) - uVar15;
    uVar13 = uVar10 >> 3 ^ (uVar6 - uVar15) - uVar10;
    uVar6 = uVar13 << 10 ^ (uVar15 - uVar10) - uVar13;
    uVar6 = uVar6 >> 0xf ^ uVar10 - (uVar13 + uVar6);
  }
  if ((int)plVar4[0x3a] != *(int *)((longlong)plVar4 + 0x1fc)) {
    plVar11 = plVar4 + 0x40;
    if ((longlong *)plVar4[0x41] != (longlong *)0x0) {
      plVar11 = (longlong *)plVar4[0x41];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar4[0x42] - 1U & uVar6) * 4);
    if (iVar12 != -1) {
      lVar8 = plVar4[0x39];
      while ((lVar14 = (longlong)iVar12 * 0x20, *(uint *)(lVar8 + lVar14) != uVar2 ||
             (lVar1 = lVar8 + lVar14, *(uint *)(lVar1 + 8) != uVar3))) {
        iVar12 = *(int *)(lVar8 + 0x18 + lVar14);
        if (iVar12 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      puVar9 = (undefined8 *)(lVar1 + 0x10);
      if (puVar9 == (undefined8 *)0x0) {
        return 0;
      }
LAB_144837566:
      return *puVar9;
    }
  }
  return 0;
}



// FUNCTION 1487e364e FUN_1487e364e body=722 status=ok
// SIG undefined FUN_1487e364e(void)

undefined8 FUN_1487e364e(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auStack_128 [32];
  longlong local_108;
  undefined1 local_100 [8];
  undefined1 local_f8 [8];
  longlong local_f0;
  int local_e8;
  longlong *local_e0;
  undefined4 local_d8;
  uint uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 local_84 [4];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  param_1 = param_1 + 0x58;
  FUN_140e5127a(param_1,0);
  local_b8 = DAT_14cb72b28;
  local_b0 = DAT_14cb72b30;
  FUN_1448075d0(&local_80);
  puVar6 = (undefined8 *)FUN_144a06846(param_2,&local_80);
  local_a8 = *puVar6;
  local_a0 = (longlong *)puVar6[1];
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
    UNLOCK();
  }
  if (CONCAT44(uStack_64,uStack_68) != 0) {
    FUN_1400020a8();
  }
  cVar5 = FUN_140dddae6(&local_a8);
  uVar8 = local_c8;
  if (cVar5 != '\0') {
    plVar7 = (longlong *)FUN_140dddafc(&local_a8);
    plVar1 = plVar7 + 3;
    local_80 = 0x100000000;
    local_70 = 0xffffffff;
    uStack_68 = 0;
    local_108 = param_1;
    uStack_78 = plVar1;
    if ((int)plVar7[6] == 0) {
      iVar10 = 0;
    }
    else {
      FUN_1449c0562(&local_80);
      iVar10 = (int)plVar7[6];
    }
    uStack_c0 = CONCAT44(uStack_64,uStack_68);
    local_c8 = local_70;
    uVar8 = local_c8;
    local_d8 = (undefined4)local_80;
    uStack_d4 = local_80._4_4_;
    uStack_d0 = (undefined4)uStack_78;
    uStack_cc = uStack_78._4_4_;
    local_c8._4_4_ = (int)((ulonglong)local_70 >> 0x20);
    local_e0 = plVar7;
    if ((local_c8._4_4_ != iVar10) || (uStack_78 != plVar1)) {
      iVar3 = local_c8._4_4_;
      local_c8 = uVar8;
      do {
        lVar4 = *local_e0;
        lVar9 = (longlong)iVar3 * 0x40;
        FUN_1447a97f4(&local_80,lVar4 + lVar9);
        local_58 = *(undefined8 *)(lVar4 + 0x28 + lVar9);
        local_50 = *(longlong *)(lVar4 + 0x30 + lVar9);
        if (local_50 != 0) {
          LOCK();
          *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
          UNLOCK();
        }
        uVar8 = FUN_144a7cdd6(&local_58,0);
        FUN_1400b22c2(&local_f0,uVar8);
        if (1 < local_e8) {
          FUN_1446f470e(local_f8,local_f0,1);
          FUN_1447325ac(&local_80,local_100,1);
          local_98 = local_100;
          local_90 = local_f8;
          FUN_146873bc6(local_108,local_84,&local_98,0);
        }
        if (local_f0 != 0) {
          FUN_1400020a8();
        }
        FUN_1447b3f56(&local_80);
        local_c8 = CONCAT44(local_c8._4_4_,(uint)local_c8 & ~uStack_d4);
        FUN_1449c0562(&local_d8);
        iVar3 = local_c8._4_4_;
        uVar8 = local_c8;
      } while (local_e0 != plVar7 ||
               ((longlong *)CONCAT44(uStack_cc,uStack_d0) != plVar1 || local_c8._4_4_ != iVar10));
    }
  }
  local_c8 = uVar8;
  plVar1 = local_a0;
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_a0 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 1487e3926 FUN_1487e3926 body=40 status=ok
// SIG undefined FUN_1487e3926(void)

void FUN_1487e3926(longlong param_1,longlong param_2)

{
  if (1 < *(int *)(param_2 + 8)) {
    FUN_148618b04(param_1 + 0x30);
    return;
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x3c) == 0) {
    return;
  }
  FUN_1457d0886(param_1 + 0x30,0);
  return;
}



// FUNCTION 1487e394e FUN_1487e394e body=40 status=ok
// SIG undefined FUN_1487e394e(void)

void FUN_1487e394e(longlong param_1,longlong param_2)

{
  if (1 < *(int *)(param_2 + 8)) {
    FUN_148618b04(param_1 + 0x30);
    return;
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x3c) == 0) {
    return;
  }
  FUN_1457d0886(param_1 + 0x30,0);
  return;
}



// FUNCTION 1487e3976 FUN_1487e3976 body=22 status=ok
// SIG undefined FUN_1487e3976(void)

longlong FUN_1487e3976(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  ulonglong uStack_70;
  undefined4 uStack_68;
  ulonglong *apuStack_60 [2];
  ulonglong uStack_50;
  undefined4 uStack_48;
  longlong lStack_40;
  int iStack_38;
  ulonglong uStack_30;
  
  lVar2 = DAT_14cb73d68;
  if (DAT_14cb73d68 == 0) {
    return 0;
  }
  uStack_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14141bbdc(param_1,&lStack_40);
  if (0 < iStack_38) {
    FUN_14141bbdc(param_1,apuStack_60);
    uStack_50 = *apuStack_60[0];
    uStack_48 = (undefined4)apuStack_60[0][1];
    iVar3 = FUN_144aff4b2();
    if (iVar3 != 0) {
      FUN_144a78877(uStack_50 & 0xffffffff,iVar3);
    }
    plVar1 = (longlong *)(lVar2 + 0x2e8);
    iVar3 = FUN_1447fa34e(plVar1);
    if (((iVar3 != -1) && (lVar4 = (longlong)iVar3 * 0x20 + *plVar1, lVar4 != 0)) &&
       (lVar4 = *(longlong *)(lVar4 + 0x10), lVar4 != 0)) {
      FUN_14141bbdc(param_1,&lStack_40);
      if (iStack_38 == 1) {
        lStack_40 = *(longlong *)(lVar4 + 0x30);
      }
      else {
        FUN_14141bbdc(param_1,&lStack_40);
        uStack_70 = *(ulonglong *)(lStack_40 + 0xc);
        uStack_68 = *(undefined4 *)(lStack_40 + 0x14);
        iVar3 = FUN_144aff4b2();
        if (iVar3 != 0) {
          FUN_144a78877(uStack_70 & 0xffffffff,iVar3);
        }
        iVar3 = FUN_144b0847a((longlong *)(lVar4 + 0x70));
        if (((iVar3 == -1) ||
            (lVar4 = (longlong)iVar3 * 0x20 + *(longlong *)(lVar4 + 0x70), lVar4 == 0)) ||
           (lVar4 = *(longlong *)(lVar4 + 0x10), lVar4 == 0)) goto LAB_1487e3b20;
        lStack_40 = *(longlong *)(lVar4 + 0x30);
      }
      lVar5 = lStack_40;
      if (lStack_40 == 0) {
        FUN_1487f3ba4(lVar2,&lStack_40,lVar4);
        lVar5 = lStack_40;
      }
      goto LAB_1487e3b22;
    }
  }
LAB_1487e3b20:
  lVar5 = 0;
LAB_1487e3b22:
  if ((uStack_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 1487e398c FUN_1487e398c body=441 status=ok
// SIG undefined FUN_1487e398c(void)

longlong FUN_1487e398c(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [40];
  ulonglong local_70;
  undefined4 local_68;
  ulonglong *local_60 [2];
  ulonglong local_50;
  undefined4 local_48;
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14141bbdc(param_2,&local_40);
  if (0 < local_38) {
    FUN_14141bbdc(param_2,local_60);
    local_50 = *local_60[0];
    local_48 = (undefined4)local_60[0][1];
    iVar1 = FUN_144aff4b2();
    if (iVar1 != 0) {
      FUN_144a78877(local_50 & 0xffffffff,iVar1);
    }
    iVar1 = FUN_1447fa34e((longlong *)(param_1 + 0x2e8));
    if (((iVar1 != -1) &&
        (lVar2 = (longlong)iVar1 * 0x20 + *(longlong *)(param_1 + 0x2e8), lVar2 != 0)) &&
       (lVar2 = *(longlong *)(lVar2 + 0x10), lVar2 != 0)) {
      FUN_14141bbdc(param_2,&local_40);
      if (local_38 == 1) {
        local_40 = *(longlong *)(lVar2 + 0x30);
      }
      else {
        FUN_14141bbdc(param_2,&local_40);
        local_70 = *(ulonglong *)(local_40 + 0xc);
        local_68 = *(undefined4 *)(local_40 + 0x14);
        iVar1 = FUN_144aff4b2();
        if (iVar1 != 0) {
          FUN_144a78877(local_70 & 0xffffffff,iVar1);
        }
        iVar1 = FUN_144b0847a((longlong *)(lVar2 + 0x70));
        if (((iVar1 == -1) ||
            (lVar2 = (longlong)iVar1 * 0x20 + *(longlong *)(lVar2 + 0x70), lVar2 == 0)) ||
           (lVar2 = *(longlong *)(lVar2 + 0x10), lVar2 == 0)) goto LAB_1487e3b20;
        local_40 = *(longlong *)(lVar2 + 0x30);
      }
      lVar3 = local_40;
      if (local_40 == 0) {
        FUN_1487f3ba4(param_1,&local_40,lVar2);
        lVar3 = local_40;
      }
      goto LAB_1487e3b22;
    }
  }
LAB_1487e3b20:
  lVar3 = 0;
LAB_1487e3b22:
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 1487e3b46 FUN_1487e3b46 body=856 status=ok
// SIG undefined FUN_1487e3b46(void)

longlong * FUN_1487e3b46(longlong *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = (longlong)&PTR_FUN_14aff2260;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0xffff0300;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = (longlong)&PTR_FUN_14aff2540;
  *(undefined2 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 2;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)(param_1 + 0x19) = 0x100;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 1;
  param_1[0x1d] = (longlong)&DAT_14a171d50;
  param_1[0x20] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x21] = (longlong)&DAT_14a171d50;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = (longlong)&DAT_14a171d50;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = (longlong)&DAT_14a171d50;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x159) = 0;
  *(undefined8 *)((longlong)param_1 + 0x161) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 500) = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  *(undefined4 *)((longlong)param_1 + 0x234) = 0;
  *(undefined2 *)(param_1 + 0x46) = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x47] = 0x1000100010001;
  *(undefined8 *)((longlong)param_1 + 0x26c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x274) = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x50] = (longlong)&DAT_14a171d50;
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x59) = 0;
  param_1[0x55] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2cc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2d4) = 0;
  param_1[0x5c] = 0;
  *(undefined4 *)(param_1 + 0x5d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x319) = 0;
  *(undefined8 *)((longlong)param_1 + 0x321) = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)((longlong)param_1 + 0x32c) = 0xffffffff;
  if (((DAT_14c9485f0 == 0) || (DAT_14c9485f4 == 0)) || (DAT_14c9485f0 == DAT_14c948000)) {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  else {
    FUN_146029854(param_1 + 1,&DAT_14c9485f0);
    *(undefined4 *)(param_1 + 0x20) = 0;
    if (*(int *)((longlong)param_1 + 0x104) != 0) {
      FUN_140115c12(param_1 + 0x1f,0);
    }
  }
  param_1[0x1e] = (longlong)&DAT_14cb73420;
  *(undefined4 *)(param_1 + 0x53) = 0;
  if (*(int *)((longlong)param_1 + 0x29c) != 0) {
    FUN_140115c12(param_1 + 0x52,0);
  }
  param_1[0x51] = (longlong)&DAT_14cb73420;
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (*(int *)((longlong)param_1 + 0x124) != 0) {
    FUN_140115c12(param_1 + 0x23,0);
  }
  param_1[0x22] = (longlong)&DAT_14cb73490;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)((longlong)param_1 + 0x144) != 0) {
    FUN_140115c12(param_1 + 0x27,0);
  }
  param_1[0x26] = (longlong)&DAT_14cb73500;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (*(int *)((longlong)param_1 + 0x164) != 0) {
    FUN_140115c12(param_1 + 0x2b,0);
  }
  param_1[0x2a] = (longlong)&DAT_14cb73500;
  (**(code **)(*param_1 + 0x18))(param_1);
  return param_1;
}



// FUNCTION 1487e3e9e FUN_1487e3e9e body=22 status=ok
// SIG undefined FUN_1487e3e9e(void)

undefined8 FUN_1487e3e9e(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [40];
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 *apuStack_70 [2];
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined1 auStack_50 [8];
  int iStack_48;
  longlong lStack_38;
  ulonglong uStack_28;
  
  lVar1 = DAT_14cb73f40;
  if (DAT_14cb73f40 == 0) {
    return 0;
  }
  uStack_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_14141bbdc(param_1,auStack_50);
  if (iStack_48 == 2) {
    FUN_14141bbdc(param_1,apuStack_70);
    uStack_60 = *apuStack_70[0];
    uStack_58 = *(undefined4 *)(apuStack_70[0] + 1);
    FUN_1448075d0(auStack_50);
    uVar2 = FUN_1487fdd18(lVar1,auStack_50);
    if (lStack_38 != 0) {
      FUN_1400020a8();
    }
    FUN_14141bbdc(param_1,apuStack_70);
    uStack_80 = *(undefined8 *)((longlong)apuStack_70[0] + 0xc);
    uStack_78 = *(undefined4 *)((longlong)apuStack_70[0] + 0x14);
    FUN_1448075d0(auStack_50);
    uVar2 = FUN_1487fdde6(lVar1,uVar2,auStack_50);
    if (lStack_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    uVar2 = 0;
  }
  if ((uStack_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487e3eb4 FUN_1487e3eb4 body=136 status=ok
// SIG undefined FUN_1487e3eb4(void)

void FUN_1487e3eb4(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x50);
  if (lVar4 == 0) {
    uVar3 = FUN_1464af43e();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x50) = lVar4;
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    return;
  }
  if (lVar4 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
      uVar3 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x48));
    }
    *(undefined8 *)(param_1 + 0x58) = uVar3;
    return;
  }
  return;
}



// FUNCTION 1487e3f3c FUN_1487e3f3c body=1920 status=ok
// SIG undefined FUN_1487e3f3c(void)

void FUN_1487e3f3c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  short sVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  char cVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_158 [40];
  longlong *local_130;
  longlong *local_128;
  ulonglong local_120;
  longlong local_118;
  longlong *local_110;
  longlong local_108;
  longlong *local_100;
  undefined8 local_f8;
  longlong *local_f0;
  uint local_e8;
  int iStack_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  longlong local_d8;
  longlong *local_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  *(undefined1 *)(param_1 + 0x168) = 0;
  local_108 = param_1 + 0x170;
  FUN_14895e22e(local_108,0);
  local_130 = (longlong *)(param_1 + 0x210);
  iVar5 = *(int *)(param_1 + 0x21c);
  FUN_145ca6c64(*(undefined8 *)(param_1 + 0x210),*(undefined4 *)(param_1 + 0x218));
  *(undefined4 *)(param_1 + 0x218) = 0;
  if ((iVar5 < 0) && (*(int *)(param_1 + 0x21c) != 0)) {
    FUN_1487f56cc(local_130);
  }
  local_118 = param_1 + 0x220;
  iVar5 = *(int *)(param_1 + 0x22c);
  FUN_145ca6c63(*(undefined8 *)(param_1 + 0x220),*(undefined4 *)(param_1 + 0x228));
  *(undefined4 *)(param_1 + 0x228) = 0;
  if ((iVar5 < 0) && (*(int *)(param_1 + 0x22c) != 0)) {
    FUN_1487f56fc();
  }
  *(undefined2 *)(param_1 + 0x230) = 0;
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = (undefined1 *)0x0;
  local_120 = 0;
  local_70 = 0;
  if ((longlong)*(int *)(param_1 + 0x70) != 0) {
    lVar17 = *(longlong *)(param_1 + 0x68);
    lVar15 = lVar17 + (longlong)*(int *)(param_1 + 0x70) * 0x18;
    do {
      FUN_1487f572c(lVar17,&local_100);
      plVar7 = local_f8;
      plVar3 = local_100;
      if (local_f8 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_f8 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_f8)(local_f8);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      if (plVar3 != (longlong *)0x0) {
        *(short *)(param_1 + 0x230) = *(short *)(param_1 + 0x230) + 1;
        if ((longlong)(int)plVar3[3] != 0) {
          lVar14 = plVar3[2];
          lVar13 = (longlong)(int)plVar3[3] * 0x80 + lVar14;
          do {
            lVar16 = *(longlong *)(lVar14 + 8);
            if (lVar16 != 0) {
              if ((int)uStack_b0 != local_84) {
                uVar8 = (uint)((ulonglong)lVar16 >> 0x10);
                uVar12 = (uint)lVar16 & 0xffff;
                puVar11 = local_78;
                if (local_78 == (undefined1 *)0x0) {
                  puVar11 = local_80;
                }
                for (iVar5 = *(int *)(puVar11 +
                                     (ulonglong)
                                     (local_70 - 1U &
                                     (int)((ulonglong)lVar16 >> 0x20) +
                                     ((uint)lVar16 << 0x10 | uVar12) +
                                     (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar12 >> 4)) * 4);
                    iVar5 != -1; iVar5 = *(int *)((longlong)iVar5 * 0x10 + local_b8 + 8)) {
                  if (*(longlong *)(local_b8 + (longlong)iVar5 * 0x10) == lVar16)
                  goto LAB_1487e41c2;
                }
              }
              FUN_144a13f80(&local_b8,&local_100,lVar14 + 8,0);
              iVar5 = *(int *)(param_1 + 0x218);
              *(uint *)(param_1 + 0x218) = iVar5 + 1U;
              if (*(uint *)(param_1 + 0x21c) < iVar5 + 1U) {
                FUN_1487f5780(local_130,iVar5);
              }
              FUN_1486196bc((longlong)iVar5 * 0x80 + *local_130,lVar14);
            }
LAB_1487e41c2:
            lVar14 = lVar14 + 0x80;
          } while (lVar14 != lVar13);
        }
        if ((longlong)(int)plVar3[5] != 0) {
          lVar14 = plVar3[4];
          lVar13 = (longlong)(int)plVar3[5] * 0x28;
          do {
            FUN_1487f5806(local_118,lVar14);
            lVar14 = lVar14 + 0x28;
            lVar13 = lVar13 + -0x28;
          } while (lVar13 != 0);
        }
      }
      lVar17 = lVar17 + 0x18;
    } while (lVar17 != lVar15);
  }
  local_128 = (longlong *)(param_1 + 0x78);
  local_110 = (longlong *)(param_1 + 0x88);
  local_d8 = 0x100000000;
  local_c8 = 0xffffffff;
  iStack_c4 = 0;
  local_c0 = 0;
  local_d0 = local_110;
  if (*(int *)(param_1 + 0xa0) != 0) {
    FUN_1449c0562(&local_d8);
    local_120 = (ulonglong)*(uint *)(param_1 + 0xa0);
  }
  local_e8 = local_c8;
  iStack_e4 = iStack_c4;
  local_e0 = local_c0;
  local_dc = local_bc;
  local_f8 = (longlong *)local_d8;
  local_f0 = local_d0;
  local_100 = local_128;
  if ((iStack_c4 != (int)local_120) || (local_d0 != local_110)) {
    do {
      plVar3 = (longlong *)(*local_100 + (longlong)iStack_e4 * 0x20);
      lVar15 = *(longlong *)(*local_100 + 8 + (longlong)iStack_e4 * 0x20);
      if (lVar15 == 0) {
        uVar10 = FUN_1464af156();
        lVar15 = FUN_14477b664(uVar10);
        plVar3[1] = lVar15;
      }
      lVar17 = plVar3[2];
      if (lVar17 == 0) {
        if ((lVar15 != 0) && (*plVar3 != 0)) {
          plVar7 = *(longlong **)(lVar15 + 0xb8);
          if ((plVar7 == (longlong *)0x0) ||
             (cVar9 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar9 == '\0')) {
            plVar3[2] = 0;
          }
          else {
            uVar10 = (**(code **)(*plVar7 + 0x110))(plVar7);
            lVar17 = FUN_144aff482(uVar10,plVar3);
            plVar3[2] = lVar17;
            if (lVar17 != 0) goto LAB_1487e4432;
          }
        }
      }
      else {
LAB_1487e4432:
        if ((longlong)*(int *)(lVar17 + 0x28) != 0) {
          lVar15 = *(longlong *)(lVar17 + 0x20);
          lVar17 = (longlong)*(int *)(lVar17 + 0x28) * 0x18 + lVar15;
          do {
            FUN_1487f595a(lVar15,&local_d8);
            plVar3 = local_d0;
            lVar14 = local_d8;
            if (local_d0 != (longlong *)0x0) {
              LOCK();
              plVar7 = local_d0 + 1;
              *(int *)plVar7 = (int)*plVar7 + -1;
              UNLOCK();
              if ((int)*plVar7 == 0) {
                (**(code **)*local_d0)(local_d0);
                LOCK();
                piVar2 = (int *)((longlong)plVar3 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar3 + 0x10))(plVar3);
                }
              }
            }
            if (lVar14 != 0) {
              *(short *)(param_1 + 0x230) = *(short *)(param_1 + 0x230) + 1;
              if ((longlong)*(int *)(lVar14 + 0x18) != 0) {
                lVar13 = *(longlong *)(lVar14 + 0x10);
                lVar16 = (longlong)*(int *)(lVar14 + 0x18) * 0x80 + lVar13;
                do {
                  lVar6 = *(longlong *)(lVar13 + 8);
                  if (lVar6 != 0) {
                    if ((int)uStack_b0 != local_84) {
                      uVar8 = (uint)((ulonglong)lVar6 >> 0x10);
                      uVar12 = (uint)lVar6 & 0xffff;
                      puVar11 = local_78;
                      if (local_78 == (undefined1 *)0x0) {
                        puVar11 = local_80;
                      }
                      for (iVar5 = *(int *)(puVar11 +
                                           (ulonglong)
                                           (local_70 - 1U &
                                           (int)((ulonglong)lVar6 >> 0x20) +
                                           ((uint)lVar6 << 0x10 | uVar12) +
                                           (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar12 >> 4)) * 4);
                          iVar5 != -1; iVar5 = *(int *)((longlong)iVar5 * 0x10 + local_b8 + 8)) {
                        if (*(longlong *)(local_b8 + (longlong)iVar5 * 0x10) == lVar6)
                        goto LAB_1487e45a1;
                      }
                    }
                    FUN_144a13f80(&local_b8,&local_d8,lVar13 + 8,0);
                    iVar5 = *(int *)(param_1 + 0x218);
                    *(uint *)(param_1 + 0x218) = iVar5 + 1U;
                    if (*(uint *)(param_1 + 0x21c) < iVar5 + 1U) {
                      FUN_1487f5780(local_130,iVar5);
                    }
                    FUN_1486196bc((longlong)iVar5 * 0x80 + *local_130,lVar13);
                  }
LAB_1487e45a1:
                  lVar13 = lVar13 + 0x80;
                } while (lVar13 != lVar16);
              }
              if ((longlong)*(int *)(lVar14 + 0x28) != 0) {
                lVar13 = *(longlong *)(lVar14 + 0x20);
                lVar14 = (longlong)*(int *)(lVar14 + 0x28) * 0x28;
                do {
                  FUN_1487f5806(local_118,lVar13);
                  lVar13 = lVar13 + 0x28;
                  lVar14 = lVar14 + -0x28;
                } while (lVar14 != 0);
              }
            }
            lVar15 = lVar15 + 0x18;
          } while (lVar15 != lVar17);
        }
      }
      local_e8 = local_e8 & ~local_f8._4_4_;
      FUN_1449c0562(&local_f8);
    } while (local_100 != local_128 || (local_f0 != local_110 || iStack_e4 != (int)local_120));
  }
  iVar5 = *(int *)(param_1 + 0x218);
  if ((longlong)iVar5 != 0) {
    lVar15 = *(longlong *)(param_1 + 0x210);
    lVar17 = 0;
    do {
      if ((-1 < *(short *)(lVar15 + 0x26 + lVar17)) && (*(char *)(lVar15 + 0x10 + lVar17) == '\0'))
      {
        *(undefined1 *)(param_1 + 0x168) = 1;
        sVar4 = *(short *)(lVar15 + 0x24 + lVar17);
        if ((longlong)sVar4 < 3) {
LAB_1487e432c:
          lVar13 = 0;
        }
        else {
          lVar14 = (longlong)sVar4 + -1;
          fVar19 = *(float *)(lVar15 + 0x1c + lVar17);
          fVar18 = *(float *)(lVar15 + 0x20 + lVar17) - fVar19;
          fVar19 = *(float *)(lVar15 + 0x14 + lVar17) - fVar19;
          if (fVar18 <= fVar19) {
            fVar19 = fVar18;
          }
          if (fVar19 <= 0.0) {
            fVar19 = 0.0;
          }
          lVar13 = (longlong)(short)(int)(((float)(int)sVar4 * fVar19) / fVar18);
          if (lVar14 <= lVar13) {
            lVar13 = lVar14;
          }
          if (lVar13 < 1) goto LAB_1487e432c;
        }
        *(short *)(lVar15 + 0x18 + lVar17) = (short)lVar13;
        if (0 < *(short *)(lVar15 + 0x26 + lVar17)) {
          FUN_1460b1e5a(local_108,lVar15 + 8 + lVar17);
        }
      }
      lVar17 = lVar17 + 0x80;
    } while ((longlong)iVar5 * 0x80 != lVar17);
  }
  local_70 = 0;
  if (local_78 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(&local_b8);
  if ((local_60 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487e46be FUN_1487e46be body=16 status=ok
// SIG undefined FUN_1487e46be(void)

void FUN_1487e46be(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x20) = DAT_14cb73e10;
  *(undefined1 *)(param_1 + 0x28) = 2;
  return;
}



// FUNCTION 1487e46ce FUN_1487e46ce body=234 status=ok
// SIG undefined FUN_1487e46ce(void)

void FUN_1487e46ce(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  short sVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  longlong *local_78;
  short local_6a;
  undefined8 local_68;
  undefined8 *local_60;
  short *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  (**(code **)(*param_1 + 0x18))();
  if (*(char *)(param_2 + 0x10) == '\0') {
    FUN_1487f59ae(param_1 + 0x54,0);
    lVar2 = param_1[0x1b];
    local_78 = param_1;
    if ((longlong)(int)lVar2 != 0) {
      lVar1 = param_1[0x1a];
      lVar4 = 0;
      sVar3 = 0;
      do {
        local_6a = sVar3;
        local_68 = *(undefined8 *)(lVar1 + 8 + lVar4);
        sVar3 = local_6a + 1;
        local_60 = &local_68;
        local_58 = &local_6a;
        FUN_140870298(param_1 + 0x54,local_4c,&local_60,0);
        lVar4 = lVar4 + 0x38;
      } while ((longlong)(int)lVar2 * 0x38 - lVar4 != 0);
    }
    FUN_1487e3f3c(local_78);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487e47ba FUN_1487e47ba body=150 status=ok
// SIG undefined FUN_1487e47ba(void)

void FUN_1487e47ba(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x278) = 0;
  *(undefined1 *)(param_1 + 0x328) = 0;
  *(undefined4 *)(param_1 + 0x32c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2f8) = 0;
  if (*(int *)(param_1 + 0x2fc) != 0) {
    FUN_1487f5b60(param_1 + 0x2f0,0);
  }
  *(undefined4 *)(param_1 + 0x308) = 0;
  if (*(int *)(param_1 + 0x30c) != 0) {
    FUN_1487f5b60(param_1 + 0x300,0);
  }
  *(undefined4 *)(param_1 + 0x318) = 0;
  if (*(int *)(param_1 + 0x31c) != 0) {
    FUN_1487f5b60(param_1 + 0x310,0);
  }
  *(undefined8 *)(param_1 + 800) = 0;
  return;
}



// FUNCTION 1487e4850 FUN_1487e4850 body=1051 status=ok
// SIG undefined FUN_1487e4850(void)

void FUN_1487e4850(longlong param_1,longlong param_2,undefined8 param_3,undefined1 param_4,
                  int param_5,longlong param_6)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0x32c) == -1) {
    lVar8 = param_2;
    if ((*(longlong *)(param_1 + 0xf0) != 0) && ((longlong)*(int *)(param_1 + 0x100) != 0)) {
      lVar9 = 0;
      do {
        lVar8 = param_1 + 0xe8;
        if (*(longlong *)(*(longlong *)(param_1 + 0xf8) + lVar9) != 0) break;
        lVar9 = lVar9 + 8;
        lVar8 = param_2;
      } while ((longlong)*(int *)(param_1 + 0x100) * 8 != lVar9);
    }
    lVar9 = param_1 + 0x280;
    FUN_140115bdc(lVar9,lVar8);
    *(longlong *)(param_1 + 800) = param_6;
    *(int *)(param_1 + 0x32c) = param_5 + 1;
    *(undefined1 *)(param_1 + 0x328) = param_4;
    FUN_1487f5bc0(*(undefined8 *)(param_1 + 0x2f0),*(undefined4 *)(param_1 + 0x2f8));
    iVar1 = *(int *)(param_1 + 0x2f8);
    if ((longlong)iVar1 != 0) {
      lVar8 = *(longlong *)(param_1 + 0x2f0);
      lVar10 = 0;
      do {
        uVar2 = *(undefined8 *)(lVar8 + lVar10);
        lVar6 = *(longlong *)(param_1 + 0x248);
        if (lVar6 == 0) {
          uVar5 = FUN_1406ef318();
          lVar6 = FUN_14477b664(uVar5);
          *(longlong *)(param_1 + 0x248) = lVar6;
        }
        if (*(longlong *)(param_1 + 0x250) == 0) {
          lVar7 = param_6;
          if ((lVar6 != 0) && (*(longlong *)(param_1 + 0x240) != 0)) {
            plVar3 = *(longlong **)(lVar6 + 0xb8);
            if ((plVar3 == (longlong *)0x0) ||
               (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
              *(undefined8 *)(param_1 + 0x250) = 0;
            }
            else {
              uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
              lVar6 = FUN_144aff482(uVar5,(longlong *)(param_1 + 0x240));
              *(longlong *)(param_1 + 0x250) = lVar6;
              if (lVar6 != 0) goto LAB_1487e49e7;
            }
          }
        }
        else {
LAB_1487e49e7:
          lVar7 = param_1;
        }
        local_68 = *(undefined4 *)(param_1 + 0x32c);
        local_60 = lVar7;
        FUN_1487e4850(uVar2,lVar9);
        lVar10 = lVar10 + 8;
      } while ((longlong)iVar1 * 8 != lVar10);
    }
    FUN_1487f5bc0(*(undefined8 *)(param_1 + 0x300),*(undefined4 *)(param_1 + 0x308));
    iVar1 = *(int *)(param_1 + 0x308);
    if ((longlong)iVar1 != 0) {
      lVar8 = *(longlong *)(param_1 + 0x300);
      lVar10 = 0;
      do {
        uVar2 = *(undefined8 *)(lVar8 + lVar10);
        lVar6 = *(longlong *)(param_1 + 0x248);
        if (lVar6 == 0) {
          uVar5 = FUN_1406ef318();
          lVar6 = FUN_14477b664(uVar5);
          *(longlong *)(param_1 + 0x248) = lVar6;
        }
        if (*(longlong *)(param_1 + 0x250) == 0) {
          lVar7 = param_6;
          if ((lVar6 != 0) && (*(longlong *)(param_1 + 0x240) != 0)) {
            plVar3 = *(longlong **)(lVar6 + 0xb8);
            if ((plVar3 == (longlong *)0x0) ||
               (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
              *(undefined8 *)(param_1 + 0x250) = 0;
            }
            else {
              uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
              lVar6 = FUN_144aff482(uVar5,(longlong *)(param_1 + 0x240));
              *(longlong *)(param_1 + 0x250) = lVar6;
              if (lVar6 != 0) goto LAB_1487e4ae6;
            }
          }
        }
        else {
LAB_1487e4ae6:
          lVar7 = param_1;
        }
        local_68 = *(undefined4 *)(param_1 + 0x32c);
        local_60 = lVar7;
        FUN_1487e4850(uVar2,lVar9);
        lVar10 = lVar10 + 8;
      } while ((longlong)iVar1 * 8 != lVar10);
    }
    FUN_1487f5bc0(*(undefined8 *)(param_1 + 0x310),*(undefined4 *)(param_1 + 0x318));
    iVar1 = *(int *)(param_1 + 0x318);
    if ((longlong)iVar1 != 0) {
      lVar8 = *(longlong *)(param_1 + 0x310);
      lVar10 = 0;
      do {
        uVar2 = *(undefined8 *)(lVar8 + lVar10);
        lVar6 = *(longlong *)(param_1 + 0x248);
        if (lVar6 == 0) {
          uVar5 = FUN_1406ef318();
          lVar6 = FUN_14477b664(uVar5);
          *(longlong *)(param_1 + 0x248) = lVar6;
        }
        if (*(longlong *)(param_1 + 0x250) == 0) {
          lVar7 = param_6;
          if ((lVar6 != 0) && (*(longlong *)(param_1 + 0x240) != 0)) {
            plVar3 = *(longlong **)(lVar6 + 0xb8);
            if ((plVar3 == (longlong *)0x0) ||
               (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
              *(undefined8 *)(param_1 + 0x250) = 0;
            }
            else {
              uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
              lVar6 = FUN_144aff482(uVar5,(longlong *)(param_1 + 0x240));
              *(longlong *)(param_1 + 0x250) = lVar6;
              if (lVar6 != 0) goto LAB_1487e4be5;
            }
          }
        }
        else {
LAB_1487e4be5:
          lVar7 = param_1;
        }
        local_68 = *(undefined4 *)(param_1 + 0x32c);
        local_60 = lVar7;
        FUN_1487e4850(uVar2,lVar9);
        lVar10 = lVar10 + 8;
      } while ((longlong)iVar1 * 8 != lVar10);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487e4c6c FUN_1487e4c6c body=390 status=ok
// SIG undefined FUN_1487e4c6c(void)

ulonglong FUN_1487e4c6c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *unaff_RBX;
  
  if (param_2 == 0) {
    unaff_RBX = (longlong *)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x248);
    if (lVar4 == 0) {
      uVar3 = FUN_1406ef318();
      lVar4 = FUN_14477b664(uVar3);
      *(longlong *)(param_1 + 0x248) = lVar4;
    }
    lVar5 = *(longlong *)(param_1 + 0x250);
    if (((lVar5 == 0) && (lVar5 = 0, lVar4 != 0)) &&
       (unaff_RBX = (longlong *)(param_1 + 0x240), *unaff_RBX != 0)) {
      plVar1 = *(longlong **)(lVar4 + 0xb8);
      if ((plVar1 == (longlong *)0x0) || (cVar2 = (**(code **)(*plVar1 + 0x108))(), cVar2 == '\0'))
      {
        lVar5 = 0;
      }
      else {
        uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar5 = FUN_144aff482(uVar3,unaff_RBX);
      }
      *(longlong *)(param_1 + 0x250) = lVar5;
    }
    cVar2 = FUN_1409501fe(lVar5,param_2);
    if (cVar2 == '\0') {
      unaff_RBX = (longlong *)0x0;
    }
    else {
      do {
        param_1 = *(longlong *)(param_1 + 800);
        unaff_RBX = (longlong *)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_1 == 0);
        if (param_1 == 0) break;
        lVar4 = *(longlong *)(param_1 + 0x248);
        if (lVar4 == 0) {
          uVar3 = FUN_1406ef318();
          lVar4 = FUN_14477b664(uVar3);
          *(longlong *)(param_1 + 0x248) = lVar4;
        }
        lVar5 = *(longlong *)(param_1 + 0x250);
        if (lVar5 == 0) {
          if (lVar4 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = 0;
            if (*(longlong *)(param_1 + 0x240) != 0) {
              plVar1 = *(longlong **)(lVar4 + 0xb8);
              if ((plVar1 == (longlong *)0x0) ||
                 (cVar2 = (**(code **)(*plVar1 + 0x108))(), cVar2 == '\0')) {
                lVar5 = 0;
              }
              else {
                uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
                lVar5 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x240));
              }
              *(longlong *)(param_1 + 0x250) = lVar5;
            }
          }
        }
        cVar2 = FUN_1409501fe(lVar5,param_2);
      } while (cVar2 != '\0');
    }
  }
  return (ulonglong)unaff_RBX & 0xffffffff;
}



// FUNCTION 1487e4df2 FUN_1487e4df2 body=238 status=ok
// SIG undefined FUN_1487e4df2(void)

undefined8 FUN_1487e4df2(longlong param_1,longlong param_2)

{
  char extraout_AL;
  char extraout_AL_00;
  undefined8 in_RAX;
  undefined7 uVar2;
  undefined7 extraout_var;
  undefined8 uVar1;
  undefined7 extraout_var_00;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  
  if (param_2 == 0) {
LAB_1487e4ed6:
    uVar1 = 0;
  }
  else {
    uVar2 = (undefined7)((ulonglong)in_RAX >> 8);
    bVar4 = true;
    if ((*(longlong *)(param_1 + 0x118) != 0) && ((longlong)*(int *)(param_1 + 0x128) != 0)) {
      lVar3 = 0;
      do {
        bVar4 = *(longlong *)(*(longlong *)(param_1 + 0x120) + lVar3) == 0;
        if (!bVar4) break;
        bVar5 = (longlong)*(int *)(param_1 + 0x128) * 8 + -8 != lVar3;
        lVar3 = lVar3 + 8;
      } while (bVar5);
    }
    if ((*(longlong *)(param_1 + 0x140) != 0) && ((longlong)*(int *)(param_1 + 0x150) != 0)) {
      lVar3 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x148) + lVar3) != 0) {
          if (bVar4) goto LAB_1487e4e88;
          bVar5 = false;
          goto LAB_1487e4eb2;
        }
        lVar3 = lVar3 + 8;
      } while ((longlong)*(int *)(param_1 + 0x150) * 8 != lVar3);
    }
    bVar5 = true;
    if (!bVar4) {
LAB_1487e4eb2:
      FUN_140d1d704(param_2 + 0x108,param_1 + 0x110,*(undefined1 *)(param_1 + 0x130));
      if (extraout_AL_00 == '\0') goto LAB_1487e4ed6;
      uVar2 = extraout_var_00;
      if (!bVar5) {
LAB_1487e4e88:
        FUN_140d1d704(param_1 + 0x138,param_2 + 0x108,*(undefined1 *)(param_1 + 0x158));
        uVar2 = extraout_var;
        if (extraout_AL != '\0') goto LAB_1487e4ed6;
      }
    }
    uVar1 = CONCAT71(uVar2,1);
  }
  return uVar1;
}



// FUNCTION 1487e4ee0 FUN_1487e4ee0 body=293 status=ok
// SIG undefined FUN_1487e4ee0(void)

ulonglong FUN_1487e4ee0(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  ushort uVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  undefined8 unaff_RBX;
  undefined7 uVar8;
  ulonglong uVar7;
  uint uVar9;
  undefined2 *puVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  fVar1 = *(float *)(param_2 + 0x234);
  fVar2 = *(float *)(param_1 + 0x234);
  uVar8 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if ((fVar1 != fVar2) || (NAN(fVar1) || NAN(fVar2))) {
    uVar7 = CONCAT71(uVar8,fVar1 < fVar2);
  }
  else {
    uVar5 = FUN_144a7ff8c(param_1 + 8);
    FUN_141710b0e(uVar5,&local_30,1);
    uVar5 = FUN_144a7ff8c(param_2 + 8);
    FUN_141710b0e(uVar5,&local_40,1);
    puVar10 = local_30;
    if (local_28 == 0) {
      puVar10 = &DAT_149dfb77a;
    }
    puVar6 = &DAT_149dfb77a;
    if (local_38 != 0) {
      puVar6 = local_40;
    }
    lVar13 = 0;
    while( true ) {
      uVar3 = *(ushort *)((longlong)puVar6 + lVar13);
      uVar11 = (uint)uVar3;
      uVar4 = *(ushort *)((longlong)puVar10 + lVar13);
      uVar9 = (uint)uVar4;
      if (uVar3 != uVar4) {
        if ((uVar4 | uVar3) < 0x80) {
          uVar11 = (uint)(byte)(&DAT_149e05da0)[uVar3];
          uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar4];
          if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4]) goto LAB_1487e4f92;
        }
        iVar12 = uVar11 - uVar9;
        goto LAB_1487e4fbb;
      }
      if (uVar3 == 0) break;
LAB_1487e4f92:
      lVar13 = lVar13 + 2;
    }
    iVar12 = 0;
LAB_1487e4fbb:
    uVar7 = CONCAT71(uVar8,0 < iVar12);
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8(local_40);
    }
    if (local_30 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487e5006 FUN_1487e5006 body=418 status=ok
// SIG undefined FUN_1487e5006(void)

longlong * FUN_1487e5006(longlong *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = (longlong)&PTR_FUN_14aff2260;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0xffff0300;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = (longlong)&PTR_FUN_14aff2860;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[9] = 0x1000100010001;
  *(undefined2 *)(param_1 + 10) = 0;
  param_1[0xb] = (longlong)&DAT_14a171d50;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = (longlong)&DAT_14a171d50;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = (longlong)&DAT_14a171d50;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  if (((DAT_14c9485f0 != 0) && (DAT_14c9485f4 != 0)) && (DAT_14c9485f0 != DAT_14c948000)) {
    FUN_146029854(param_1 + 1,&DAT_14c9485f0);
    *(undefined4 *)(param_1 + 0xe) = 0;
    if (*(int *)((longlong)param_1 + 0x74) != 0) {
      FUN_140115c12(param_1 + 0xd,0);
    }
  }
  param_1[0xc] = (longlong)&DAT_14cb73420;
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (*(int *)((longlong)param_1 + 0x94) != 0) {
    FUN_140115c12(param_1 + 0x11,0);
  }
  param_1[0x10] = (longlong)&DAT_14cb73490;
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (*(int *)((longlong)param_1 + 0xb4) != 0) {
    FUN_140115c12(param_1 + 0x15,0);
  }
  param_1[0x14] = (longlong)&DAT_14cb73500;
  (**(code **)(*param_1 + 0x18))(param_1);
  return param_1;
}



// FUNCTION 1487e51a8 FUN_1487e51a8 body=27 status=ok
// SIG undefined FUN_1487e51a8(void)

undefined8 FUN_1487e51a8(undefined8 param_1)

{
  undefined8 uVar1;
  
  if (DAT_14cb73f40 == 0) {
    return 0;
  }
  uVar1 = FUN_1487fdd18(DAT_14cb73f40,param_1);
  return uVar1;
}



// FUNCTION 1487e51be FUN_1487e51be body=16 status=ok
// SIG undefined FUN_1487e51be(void)

void FUN_1487e51be(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x20) = DAT_14cb73e10;
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



// FUNCTION 1487e51d6 FUN_1487e51d6 body=275 status=ok
// SIG undefined FUN_1487e51d6(void)

longlong FUN_1487e51d6(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  if ((param_2 != 0) && (iVar8 = *(int *)(param_1 + 0xf8), iVar8 != 0)) {
    iVar6 = 2;
    while( true ) {
      iVar7 = 0;
      if (0 < iVar8) {
        uVar3 = rand();
        iVar4 = (int)((float)iVar8 * ((float)(uVar3 & 0x7fff) / 32767.0));
        iVar7 = iVar8 + -1;
        if (iVar4 < iVar8 + -1) {
          iVar7 = iVar4;
        }
      }
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xf0) + (longlong)iVar7 * 8);
      cVar2 = FUN_1487e4df2(param_2);
      if (cVar2 != '\0') {
        if (*(longlong *)(param_3 + 8) == 0) {
          return lVar1;
        }
        if ((longlong)*(int *)(param_3 + 0x18) == 0) {
          return lVar1;
        }
        lVar5 = 0;
        while (*(longlong *)(*(longlong *)(param_3 + 0x10) + lVar5) == 0) {
          lVar5 = lVar5 + 8;
          if ((longlong)*(int *)(param_3 + 0x18) * 8 == lVar5) {
            return lVar1;
          }
        }
        cVar2 = FUN_140d1d704(lVar1 + 0x108,param_3,param_4);
        if (cVar2 != '\0') {
          return lVar1;
        }
      }
      bVar9 = iVar6 == 0;
      iVar6 = iVar6 + -1;
      if (bVar9) break;
      iVar8 = *(int *)(param_1 + 0xf8);
    }
  }
  return 0;
}



// FUNCTION 1487e52ea FUN_1487e52ea body=345 status=ok
// SIG undefined FUN_1487e52ea(void)

longlong FUN_1487e52ea(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,
                      int param_5)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  bool bVar10;
  
  if ((param_2 == 0) || (param_5 < 0)) {
    lVar5 = FUN_1487e51d6(param_1,param_2,param_3,param_4);
    return lVar5;
  }
  plVar8 = (longlong *)(param_1 + 0xe0);
LAB_1487e5332:
  iVar7 = 2;
  do {
    iVar1 = (int)plVar8[1];
    iVar9 = 0;
    if (0 < iVar1) {
      uVar3 = rand();
      iVar4 = (int)((float)iVar1 * ((float)(uVar3 & 0x7fff) / 32767.0));
      iVar9 = iVar1 + -1;
      if (iVar4 < iVar1 + -1) {
        iVar9 = iVar4;
      }
    }
    lVar5 = *(longlong *)(*plVar8 + (longlong)iVar9 * 8);
    cVar2 = FUN_1487e4df2(param_2);
    if (cVar2 != '\0') {
      if ((*(longlong *)(param_3 + 8) == 0) || ((longlong)*(int *)(param_3 + 0x18) == 0)) break;
      lVar6 = 0;
      while (*(longlong *)(*(longlong *)(param_3 + 0x10) + lVar6) == 0) {
        lVar6 = lVar6 + 8;
        if ((longlong)*(int *)(param_3 + 0x18) * 8 == lVar6) goto LAB_1487e53dd;
      }
      cVar2 = FUN_140d1d704(lVar5 + 0x108,param_3,param_4);
      if (cVar2 != '\0') break;
    }
    bVar10 = iVar7 == 0;
    iVar7 = iVar7 + -1;
    if (bVar10) {
      return 0;
    }
  } while( true );
LAB_1487e53dd:
  if (lVar5 == 0) {
    return 0;
  }
  if (param_5 < 1) {
    return lVar5;
  }
  if (*(int *)(lVar5 + 0x318) == 0) {
    return lVar5;
  }
  plVar8 = (longlong *)(lVar5 + 0x310);
  param_5 = param_5 + -1;
  goto LAB_1487e5332;
}



// FUNCTION 1487e5444 FUN_1487e5444 body=129 status=ok
// SIG undefined FUN_1487e5444(void)

void FUN_1487e5444(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if (*(int *)(param_1 + 0xdc) != 0) {
    FUN_1487f5b60(param_1 + 0xd0,0);
  }
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(int *)(param_1 + 0xec) != 0) {
    FUN_1487f5b60(param_1 + 0xe0,0);
  }
  *(undefined4 *)(param_1 + 0xf8) = 0;
  if (*(int *)(param_1 + 0xfc) != 0) {
    FUN_1487f5b60(param_1 + 0xf0,0);
  }
  FUN_1487f60a0(param_1 + 0x100,0);
  return;
}



// FUNCTION 1487e54c6 FUN_1487e54c6 body=97 status=ok
// SIG undefined FUN_1487e54c6(void)

undefined8 * FUN_1487e54c6(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14aff0a40;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  if (((DAT_14c9485f0 != 0) && (DAT_14c9485f4 != 0)) && (DAT_14c9485f0 != DAT_14c948000)) {
    FUN_146029854(param_1 + 1,&DAT_14c9485f0);
  }
  return param_1;
}



// FUNCTION 1487e5528 FUN_1487e5528 body=22 status=ok
// SIG undefined FUN_1487e5528(void)

undefined8 FUN_1487e5528(int *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  
  plVar4 = DAT_14cb73d48;
  if (DAT_14cb73d48 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cb73d48 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb73d48 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb73d48[0x3a] <= *(int *)((longlong)DAT_14cb73d48 + 0x1fc))) {
LAB_144837614:
      lVar8 = FUN_144837648(plVar4,param_1,1);
      if (lVar8 == 0) {
        return 0;
      }
      FUN_14012a344(plVar4,lVar8,0);
      puVar9 = (undefined8 *)(lVar8 + 0x30);
      goto LAB_144837566;
    }
  }
  else {
    cVar5 = (**(code **)(*DAT_14cb73d48 + 0x300))(DAT_14cb73d48);
    if (cVar5 == '\0') goto LAB_144837614;
  }
  puVar7 = (uint *)&DAT_14c948618;
  if (((*param_1 != 0) && (0 < param_1[1])) && (*param_1 != DAT_14c948000)) {
    puVar7 = (uint *)(param_1 + 2);
    if (0 < param_1[9]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
    if (1 < (uint)param_1[1]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
  }
  uVar2 = *puVar7;
  uVar3 = puVar7[2];
  uVar6 = uVar2;
  if (uVar3 != 0) {
    uVar6 = uVar3 >> 0xd ^ uVar2 - uVar3;
    uVar10 = uVar6 << 8 ^ (-0x61c88647 - uVar3) - uVar6;
    uVar13 = uVar10 >> 0xd ^ (uVar3 - uVar6) - uVar10;
    uVar6 = uVar13 >> 0xc ^ (uVar6 - uVar10) - uVar13;
    uVar15 = uVar6 << 0x10 ^ (uVar10 - uVar13) - uVar6;
    uVar10 = uVar15 >> 5 ^ (uVar13 - uVar6) - uVar15;
    uVar13 = uVar10 >> 3 ^ (uVar6 - uVar15) - uVar10;
    uVar6 = uVar13 << 10 ^ (uVar15 - uVar10) - uVar13;
    uVar6 = uVar6 >> 0xf ^ uVar10 - (uVar13 + uVar6);
  }
  if ((int)plVar4[0x3a] != *(int *)((longlong)plVar4 + 0x1fc)) {
    plVar11 = plVar4 + 0x40;
    if ((longlong *)plVar4[0x41] != (longlong *)0x0) {
      plVar11 = (longlong *)plVar4[0x41];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar4[0x42] - 1U & uVar6) * 4);
    if (iVar12 != -1) {
      lVar8 = plVar4[0x39];
      while ((lVar14 = (longlong)iVar12 * 0x20, *(uint *)(lVar8 + lVar14) != uVar2 ||
             (lVar1 = lVar8 + lVar14, *(uint *)(lVar1 + 8) != uVar3))) {
        iVar12 = *(int *)(lVar8 + 0x18 + lVar14);
        if (iVar12 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      puVar9 = (undefined8 *)(lVar1 + 0x10);
      if (puVar9 == (undefined8 *)0x0) {
        return 0;
      }
LAB_144837566:
      return *puVar9;
    }
  }
  return 0;
}



// FUNCTION 1487e553e FUN_1487e553e body=22 status=ok
// SIG undefined FUN_1487e553e(void)

undefined8 FUN_1487e553e(int *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  
  plVar4 = DAT_14cb73d88;
  if (DAT_14cb73d88 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cb73d88 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb73d88 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb73d88[0x3a] <= *(int *)((longlong)DAT_14cb73d88 + 0x1fc))) {
LAB_144837614:
      lVar8 = FUN_144837648(plVar4,param_1,1);
      if (lVar8 == 0) {
        return 0;
      }
      FUN_14012a344(plVar4,lVar8,0);
      puVar9 = (undefined8 *)(lVar8 + 0x30);
      goto LAB_144837566;
    }
  }
  else {
    cVar5 = (**(code **)(*DAT_14cb73d88 + 0x300))(DAT_14cb73d88);
    if (cVar5 == '\0') goto LAB_144837614;
  }
  puVar7 = (uint *)&DAT_14c948618;
  if (((*param_1 != 0) && (0 < param_1[1])) && (*param_1 != DAT_14c948000)) {
    puVar7 = (uint *)(param_1 + 2);
    if (0 < param_1[9]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
    if (1 < (uint)param_1[1]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
  }
  uVar2 = *puVar7;
  uVar3 = puVar7[2];
  uVar6 = uVar2;
  if (uVar3 != 0) {
    uVar6 = uVar3 >> 0xd ^ uVar2 - uVar3;
    uVar10 = uVar6 << 8 ^ (-0x61c88647 - uVar3) - uVar6;
    uVar13 = uVar10 >> 0xd ^ (uVar3 - uVar6) - uVar10;
    uVar6 = uVar13 >> 0xc ^ (uVar6 - uVar10) - uVar13;
    uVar15 = uVar6 << 0x10 ^ (uVar10 - uVar13) - uVar6;
    uVar10 = uVar15 >> 5 ^ (uVar13 - uVar6) - uVar15;
    uVar13 = uVar10 >> 3 ^ (uVar6 - uVar15) - uVar10;
    uVar6 = uVar13 << 10 ^ (uVar15 - uVar10) - uVar13;
    uVar6 = uVar6 >> 0xf ^ uVar10 - (uVar13 + uVar6);
  }
  if ((int)plVar4[0x3a] != *(int *)((longlong)plVar4 + 0x1fc)) {
    plVar11 = plVar4 + 0x40;
    if ((longlong *)plVar4[0x41] != (longlong *)0x0) {
      plVar11 = (longlong *)plVar4[0x41];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar4[0x42] - 1U & uVar6) * 4);
    if (iVar12 != -1) {
      lVar8 = plVar4[0x39];
      while ((lVar14 = (longlong)iVar12 * 0x20, *(uint *)(lVar8 + lVar14) != uVar2 ||
             (lVar1 = lVar8 + lVar14, *(uint *)(lVar1 + 8) != uVar3))) {
        iVar12 = *(int *)(lVar8 + 0x18 + lVar14);
        if (iVar12 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      puVar9 = (undefined8 *)(lVar1 + 0x10);
      if (puVar9 == (undefined8 *)0x0) {
        return 0;
      }
LAB_144837566:
      return *puVar9;
    }
  }
  return 0;
}



// FUNCTION 1487e5564 FUN_1487e5564 body=586 status=ok
// SIG undefined FUN_1487e5564(void)

ulonglong FUN_1487e5564(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  bool bVar4;
  bool bVar5;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  longlong local_b8;
  undefined1 local_ac [4];
  longlong local_a8;
  char local_99;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (((*(char *)(param_2 + 0x40) == '\x01') && (*(char *)(param_2 + 0x328) == '\x01')) &&
     (DAT_14cb73f40 != 0)) {
    FUN_1487fdf06(DAT_14cb73f40,param_2);
  }
  cVar1 = FUN_1487e57b0(param_1);
  if (cVar1 == '\0') {
LAB_1487e576d:
    uVar3 = 0;
  }
  else {
    bVar4 = true;
    if ((*(longlong *)(param_1 + 0x118) != 0) && ((longlong)*(int *)(param_1 + 0x128) != 0)) {
      lVar2 = 0;
      do {
        bVar4 = *(longlong *)(*(longlong *)(param_1 + 0x120) + lVar2) == 0;
        if (!bVar4) break;
        bVar5 = (longlong)*(int *)(param_1 + 0x128) * 8 + -8 != lVar2;
        lVar2 = lVar2 + 8;
      } while (bVar5);
    }
    if ((*(longlong *)(param_1 + 0x140) != 0) && ((longlong)*(int *)(param_1 + 0x150) != 0)) {
      lVar2 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x148) + lVar2) != 0) {
          uVar3 = 0;
          goto LAB_1487e5643;
        }
        lVar2 = lVar2 + 8;
      } while ((longlong)*(int *)(param_1 + 0x150) * 8 != lVar2);
    }
    uVar3 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    if (!bVar4) {
LAB_1487e5643:
      local_b8 = param_1 + 0x110;
      local_c0 = param_1 + 0x138;
      local_99 = '\0';
      local_78 = 0;
      local_70 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_6c = 0xffffffff00000080;
      local_64 = 0;
      local_58 = 0;
      local_50 = 0;
      lVar2 = param_2 + 0x108;
      do {
        local_a8 = param_2;
        if (*(char *)(param_2 + 0x40) != '\x01') break;
        FUN_1487f64be(&local_98,local_ac,&local_a8,&local_99);
        if (local_99 != '\0') {
LAB_1487e5746:
          local_50 = 0;
          if (local_58 != 0) {
            FUN_1400020a8();
          }
          FUN_1487f6430(&local_98);
          goto LAB_1487e576d;
        }
        if (!bVar4) {
          cVar1 = FUN_140d1d704(param_2 + 0x108,local_b8,*(undefined1 *)(param_1 + 0x130));
          if (cVar1 == '\0') goto LAB_1487e5746;
        }
        if (((char)uVar3 == '\0') &&
           (cVar1 = FUN_140d1d704(local_c0,lVar2,*(undefined1 *)(param_1 + 0x158)), cVar1 != '\0'))
        goto LAB_1487e5746;
        param_2 = FUN_1487e3eb4(param_2);
        local_a8 = param_2;
      } while (param_2 != 0);
      local_50 = 0;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      FUN_1487f6430(&local_98);
      uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 1487e57b0 FUN_1487e57b0 body=592 status=ok
// SIG undefined FUN_1487e57b0(void)

ulonglong FUN_1487e57b0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  undefined4 local_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar1 = (longlong *)(param_1 + 0xa0);
  lVar2 = param_1 + 0xb0;
  local_88 = 0x100000000;
  local_78 = 0xffffffff;
  uStack_70 = 0;
  uStack_80 = lVar2;
  if (*(int *)(param_1 + 200) == 0) {
    iVar10 = 0;
  }
  else {
    FUN_1449c0562(&local_88);
    iVar10 = *(int *)(param_1 + 200);
  }
  uStack_90 = CONCAT44(uStack_6c,uStack_70);
  local_98 = local_78;
  lVar7 = local_98;
  local_a8 = (undefined4)local_88;
  uStack_a4 = local_88._4_4_;
  uStack_a0 = (undefined4)uStack_80;
  uStack_9c = uStack_80._4_4_;
  local_98._4_4_ = (int)((ulonglong)local_78 >> 0x20);
  local_b0 = plVar1;
  local_98 = lVar7;
  if ((local_98._4_4_ == iVar10) && (uStack_80 == lVar2)) {
    uVar9 = 0;
  }
  else {
    iVar5 = local_98._4_4_;
    do {
      lVar7 = *local_b0;
      lVar8 = (longlong)iVar5 * 0x20;
      uStack_80 = 0;
      local_78 = 0;
      local_88 = *(longlong *)(lVar7 + lVar8);
      uVar6 = FUN_14477b664(*(undefined8 *)(lVar7 + 8 + lVar8));
      uStack_80 = FUN_14477b664(uVar6);
      local_78 = *(longlong *)(lVar7 + 0x10 + lVar8);
      if (uStack_80 == 0) {
        uVar6 = FUN_1464af43e();
        uStack_80 = FUN_14477b664(uVar6);
      }
      if (local_78 == 0) {
        local_78 = 0;
        if (uStack_80 != 0) {
          lVar7 = 0;
          if (local_88 == 0) goto LAB_1487e5914;
          plVar3 = *(longlong **)(uStack_80 + 0xb8);
          if ((plVar3 != (longlong *)0x0) &&
             (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 != '\0')) {
            uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
            local_78 = FUN_144aff482(uVar6,&local_88);
            if (local_78 != 0) goto LAB_1487e58f3;
          }
        }
LAB_1487e5912:
        lVar7 = 0;
      }
      else {
LAB_1487e58f3:
        if (((*(char *)(local_78 + 0x40) != '\x01') || (*(char *)(local_78 + 0x328) != '\x01')) ||
           (DAT_14cb73f40 == 0)) goto LAB_1487e5912;
        lVar7 = FUN_1487fdf06(DAT_14cb73f40,local_78);
      }
LAB_1487e5914:
      uVar9 = CONCAT71((int7)((ulonglong)lVar8 >> 8),lVar7 == param_2);
      if (lVar7 == param_2) break;
      local_98 = CONCAT44(local_98._4_4_,(uint)local_98 & ~uStack_a4);
      FUN_1449c0562(&local_a8);
      iVar5 = local_98._4_4_;
    } while (local_b0 != plVar1 ||
             (CONCAT44(uStack_9c,uStack_a0) != lVar2 || local_98._4_4_ != iVar10));
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 1487e5a02 FUN_1487e5a02 body=233 status=ok
// SIG undefined FUN_1487e5a02(void)

void FUN_1487e5a02(longlong *param_1)

{
  longlong lVar1;
  short sVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  float fVar6;
  float fVar7;
  
  (**(code **)(*param_1 + 0x18))();
  FUN_14895e22e(param_1 + 0x32,(int)param_1[0x31]);
  if ((longlong)(int)param_1[0x31] != 0) {
    lVar4 = (longlong)(int)param_1[0x31] << 7;
    plVar5 = (longlong *)(param_1[0x30] + 8);
    do {
      if (((*plVar5 != 0) && (-1 < *(short *)((longlong)plVar5 + 0x1e))) &&
         ((char)plVar5[1] == '\0')) {
        sVar2 = *(short *)((longlong)plVar5 + 0x1c);
        if ((longlong)sVar2 < 3) {
LAB_1487e5a7c:
          lVar3 = 0;
        }
        else {
          lVar1 = (longlong)sVar2 + -1;
          fVar6 = *(float *)(plVar5 + 3) - *(float *)((longlong)plVar5 + 0x14);
          fVar7 = *(float *)((longlong)plVar5 + 0xc) - *(float *)((longlong)plVar5 + 0x14);
          if (fVar6 <= fVar7) {
            fVar7 = fVar6;
          }
          if (fVar7 <= 0.0) {
            fVar7 = 0.0;
          }
          lVar3 = (longlong)(short)(int)(((float)(int)sVar2 * fVar7) / fVar6);
          if (lVar1 <= lVar3) {
            lVar3 = lVar1;
          }
          if (lVar3 < 1) goto LAB_1487e5a7c;
        }
        *(short *)(plVar5 + 2) = (short)lVar3;
        if (*(short *)((longlong)plVar5 + 0x1e) != 0) {
          FUN_1460b1e5a(param_1 + 0x32,plVar5);
        }
      }
      plVar5 = plVar5 + 0x10;
      lVar4 = lVar4 + -0x80;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 1487e5aec FUN_1487e5aec body=42 status=ok
// SIG undefined FUN_1487e5aec(void)

undefined8 FUN_1487e5aec(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1487fe088();
  if (lVar1 != 0) {
    uVar2 = thunk_FUN_144837462(lVar1,param_1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1487e5b16 FUN_1487e5b16 body=351 status=ok
// SIG undefined FUN_1487e5b16(void)

bool FUN_1487e5b16(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar6 = *(int *)(param_1 + 0x54);
  if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar6);
  }
  *(undefined4 *)(param_3 + 8) = 0;
  if (*(int *)(param_3 + 0xc) != iVar6) {
    FUN_1487f5b60(param_3);
  }
  lVar5 = *(longlong *)(param_1 + 0x40);
  if (lVar5 == 0) {
    uVar3 = FUN_1464af53c();
    lVar5 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x40) = lVar5;
  }
  lVar4 = *(longlong *)(param_1 + 0x48);
  if (lVar4 == 0) {
    bVar7 = false;
    if ((lVar5 == 0) || (*(longlong *)(param_1 + 0x38) == 0)) goto LAB_1487e5bc0;
    plVar1 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      *(undefined8 *)(param_1 + 0x48) = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar4 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x38));
      *(longlong *)(param_1 + 0x48) = lVar4;
      if (lVar4 != 0) goto LAB_1487e5b6f;
    }
    bVar7 = false;
  }
  else {
LAB_1487e5b6f:
    if (0 < *(int *)(param_1 + 0x54)) {
      iVar6 = 0;
      do {
        local_58 = *(undefined4 *)(param_1 + 0x50);
        local_48 = FUN_1487e52ea(lVar4,param_2,param_1 + 0x58,*(undefined1 *)(param_1 + 0x78));
        if (local_48 != 0) {
          FUN_1487f69c6(param_3,&local_48);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(param_1 + 0x54));
    }
    bVar7 = *(int *)(param_3 + 8) != 0;
  }
LAB_1487e5bc0:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar7;
}



// FUNCTION 1487e5c76 FUN_1487e5c76 body=22 status=ok
// SIG undefined FUN_1487e5c76(void)

undefined8 FUN_1487e5c76(int *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  
  plVar4 = DAT_14cb73d28;
  if (DAT_14cb73d28 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cb73d28 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb73d28 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb73d28[0x3a] <= *(int *)((longlong)DAT_14cb73d28 + 0x1fc))) {
LAB_144837614:
      lVar8 = FUN_144837648(plVar4,param_1,1);
      if (lVar8 == 0) {
        return 0;
      }
      FUN_14012a344(plVar4,lVar8,0);
      puVar9 = (undefined8 *)(lVar8 + 0x30);
      goto LAB_144837566;
    }
  }
  else {
    cVar5 = (**(code **)(*DAT_14cb73d28 + 0x300))(DAT_14cb73d28);
    if (cVar5 == '\0') goto LAB_144837614;
  }
  puVar7 = (uint *)&DAT_14c948618;
  if (((*param_1 != 0) && (0 < param_1[1])) && (*param_1 != DAT_14c948000)) {
    puVar7 = (uint *)(param_1 + 2);
    if (0 < param_1[9]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
    if (1 < (uint)param_1[1]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
  }
  uVar2 = *puVar7;
  uVar3 = puVar7[2];
  uVar6 = uVar2;
  if (uVar3 != 0) {
    uVar6 = uVar3 >> 0xd ^ uVar2 - uVar3;
    uVar10 = uVar6 << 8 ^ (-0x61c88647 - uVar3) - uVar6;
    uVar13 = uVar10 >> 0xd ^ (uVar3 - uVar6) - uVar10;
    uVar6 = uVar13 >> 0xc ^ (uVar6 - uVar10) - uVar13;
    uVar15 = uVar6 << 0x10 ^ (uVar10 - uVar13) - uVar6;
    uVar10 = uVar15 >> 5 ^ (uVar13 - uVar6) - uVar15;
    uVar13 = uVar10 >> 3 ^ (uVar6 - uVar15) - uVar10;
    uVar6 = uVar13 << 10 ^ (uVar15 - uVar10) - uVar13;
    uVar6 = uVar6 >> 0xf ^ uVar10 - (uVar13 + uVar6);
  }
  if ((int)plVar4[0x3a] != *(int *)((longlong)plVar4 + 0x1fc)) {
    plVar11 = plVar4 + 0x40;
    if ((longlong *)plVar4[0x41] != (longlong *)0x0) {
      plVar11 = (longlong *)plVar4[0x41];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar4[0x42] - 1U & uVar6) * 4);
    if (iVar12 != -1) {
      lVar8 = plVar4[0x39];
      while ((lVar14 = (longlong)iVar12 * 0x20, *(uint *)(lVar8 + lVar14) != uVar2 ||
             (lVar1 = lVar8 + lVar14, *(uint *)(lVar1 + 8) != uVar3))) {
        iVar12 = *(int *)(lVar8 + 0x18 + lVar14);
        if (iVar12 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      puVar9 = (undefined8 *)(lVar1 + 0x10);
      if (puVar9 == (undefined8 *)0x0) {
        return 0;
      }
LAB_144837566:
      return *puVar9;
    }
  }
  return 0;
}



// FUNCTION 1487e5ca4 FUN_1487e5ca4 body=182 status=ok
// SIG undefined FUN_1487e5ca4(void)

undefined8 FUN_1487e5ca4(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = (**(code **)(*param_2 + 8))(param_2);
  if (cVar1 != '\0') {
    uVar2 = (**(code **)(*param_2 + 0x28))(param_2);
    cVar1 = FUN_144a8ab0e(uVar2);
    if (cVar1 != '\0') {
      uVar2 = FUN_144a7cdd6(uVar2,0);
      FUN_1400b22c2(&local_28,uVar2);
      if (&local_28 == param_1) {
        if (local_28 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*param_1 != 0) {
          FUN_1400020a8();
        }
        *param_1 = local_28;
        *(undefined4 *)(param_1 + 1) = local_20;
        *(undefined4 *)((longlong)param_1 + 0xc) = local_1c;
      }
      uVar2 = 1;
      goto LAB_1487e5d2c;
    }
  }
  uVar2 = 0;
LAB_1487e5d2c:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487e5da0 FUN_1487e5da0 body=42 status=ok
// SIG undefined FUN_1487e5da0(void)

undefined8 FUN_1487e5da0(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1487fdff4();
  if (lVar1 != 0) {
    uVar2 = thunk_FUN_144837462(lVar1,param_1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1487e5dca FUN_1487e5dca body=63 status=ok
// SIG undefined FUN_1487e5dca(void)

longlong FUN_1487e5dca(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1487f6a40(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x18 + *param_1;
  FUN_1487f6a31(lVar2);
  return lVar2;
}



// FUNCTION 1487e5e1e FUN_1487e5e1e body=485 status=ok
// SIG undefined FUN_1487e5e1e(void)

void FUN_1487e5e1e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_d8 [40];
  undefined8 *local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined1 local_98 [112];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    local_a0 = *(undefined8 *)(param_1 + 0x3c8);
    FUN_1411374b4(local_98,param_1,&local_a0,*(longlong *)(param_1 + 0x1c8) + 0x240);
    local_b0 = (undefined8 *)0x0;
    local_a8 = 0;
    FUN_1446efa72(&local_b0,0,3,0x10);
    puVar4 = local_b0;
    local_a8 = 3;
    *local_b0 = &PTR_LAB_14a3a3510;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    local_b0[2] = lVar7;
    *local_b0 = &PTR_FUN_14b3f04c0;
    local_b0[3] = 0;
    FUN_14485c47a(local_b0 + 3,param_1);
    puVar4[4] = FUN_143cc72f4;
    *(undefined4 *)(puVar4 + 5) = 0;
    uVar6 = FUN_14180114c(local_98,&local_b0);
    FUN_140faf12e(uVar6,&local_28);
    plVar1 = local_20;
    if ((undefined8 *)(param_1 + 0x3b8) != &local_28) {
      *(undefined8 *)(param_1 + 0x3b8) = local_28;
      local_28 = 0;
      plVar3 = *(longlong **)(param_1 + 0x3c0);
      if (local_20 != plVar3) {
        local_20 = (longlong *)0x0;
        *(longlong **)(param_1 + 0x3c0) = plVar1;
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
    }
    plVar1 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_20 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    FUN_1449db362(&local_b0);
    FUN_14119d0c2(local_98);
  }
  if ((local_18 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487e6004 FUN_1487e6004 body=12 status=ok
// SIG undefined FUN_1487e6004(void)

void FUN_1487e6004(longlong param_1)

{
  FUN_14479d2ce(param_1 + 0x3a8);
  return;
}



// FUNCTION 1487e6010 FUN_1487e6010 body=604 status=ok
// SIG undefined FUN_1487e6010(void)

void FUN_1487e6010(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  void *_Src;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  ushort uVar8;
  ulonglong uVar9;
  ushort uVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 auStack_88 [40];
  longlong *local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = (longlong *)(param_1 + 0x3e0);
  local_50 = param_2;
  if (*(int *)(param_1 + 1000) != *(int *)(param_1 + 0x414)) {
    uVar2 = (uint)((ulonglong)param_2 >> 0x10);
    uVar6 = (uint)param_2 & 0xffff;
    lVar4 = param_1 + 0x418;
    if (*(longlong *)(param_1 + 0x420) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x420);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x428) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar6) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        lVar4 = *plVar1 + (longlong)iVar3 * 0x20;
        if (*(longlong *)(*plVar1 + (longlong)iVar3 * 0x20) == param_2) {
          if ((lVar4 != 0) && (lVar4 + 8 != 0)) {
            local_60 = (longlong *)0x0;
            local_58 = *(int *)(lVar4 + 0x10);
            lVar12 = (longlong)local_58;
            _Src = *(void **)(lVar4 + 8);
            if (lVar12 == 0) {
              local_54 = 0;
              iVar3 = (int)param_3[1];
              iVar7 = 0;
              if (iVar3 == 0) goto LAB_1487e610f;
            }
            else {
              FUN_1446dd670(&local_60,local_58,0);
              memcpy(local_60,_Src,lVar12 * 2);
              iVar3 = (int)param_3[1];
              iVar7 = local_58;
              if (local_58 == iVar3) {
                if (local_58 < 2) goto LAB_1487e622a;
                lVar12 = *param_3;
                lVar5 = 0;
                goto LAB_1487e61be;
              }
            }
            if (iVar7 + iVar3 == 1) goto LAB_1487e622a;
            lVar12 = *param_3;
            goto LAB_1487e6243;
          }
          break;
        }
        iVar3 = *(int *)(lVar4 + 0x18);
      } while (iVar3 != -1);
    }
  }
  local_60 = &local_50;
  FUN_1487f6d78(plVar1,&local_44);
  iVar3 = (int)param_3[1] + -1;
  if ((int)param_3[1] == 0) {
    iVar3 = 0;
  }
  FUN_1402980a2(*plVar1 + (longlong)local_44 * 0x20 + 8,*param_3,iVar3);
LAB_1487e6105:
  FUN_143cc6fdc(param_1,1);
LAB_1487e610f:
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1487e61be:
  uVar8 = *(ushort *)((longlong)local_60 + lVar5);
  uVar9 = (ulonglong)uVar8;
  uVar10 = *(ushort *)(lVar12 + lVar5);
  if (uVar8 == uVar10) {
    if (uVar8 == 0) goto LAB_1487e622a;
LAB_1487e61d3:
    lVar5 = lVar5 + 2;
    goto LAB_1487e61be;
  }
  if ((uVar10 | uVar8) < 0x80) {
    uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
    uVar11 = (ulonglong)uVar10;
    uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
    if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar11]) goto LAB_1487e61d3;
  }
  iVar3 = local_58;
  if (uVar8 != uVar10) goto LAB_1487e6243;
LAB_1487e622a:
  if (local_60 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  goto LAB_1487e610f;
LAB_1487e6243:
  iVar7 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar7 = 0;
  }
  FUN_1402980a2(lVar4 + 8,lVar12,iVar7);
  if (local_60 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  goto LAB_1487e6105;
}



// FUNCTION 1487e626e FUN_1487e626e body=25 status=ok
// SIG undefined FUN_1487e626e(void)

void FUN_1487e626e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b3efc50;
  param_1[1] = DAT_14cb738e8;
  return;
}



// FUNCTION 1487e637e FUN_1487e637e body=136 status=ok
// SIG undefined FUN_1487e637e(void)

longlong * FUN_1487e637e(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = (longlong *)FUN_14001cc68(0x328,0x10);
  plVar2[1] = (longlong)&DAT_100000001;
  *plVar2 = (longlong)&PTR_FUN_14b3f0530;
  plVar3 = plVar2 + 2;
  FUN_1487f729c(plVar3);
  *param_1 = (longlong)plVar3;
  param_1[1] = (longlong)plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
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
    plVar3 = (longlong *)*param_1;
  }
  if (plVar3 != (longlong *)0x0) {
    (**(code **)*plVar3)(plVar3);
  }
  return param_1;
}



// FUNCTION 1487e6406 FUN_1487e6406 body=171 status=ok
// SIG undefined FUN_1487e6406(void)

longlong * FUN_1487e6406(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)FUN_14001cc68(0x328,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b3f0530;
  plVar1 = plVar4 + 2;
  FUN_1487f729c(plVar1);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
  if (plVar1 != (longlong *)0x0) {
    (**(code **)*plVar1)(plVar1);
  }
  *param_1 = (longlong)plVar1;
  param_1[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  return param_1;
}



// FUNCTION 1487e64b2 FUN_1487e64b2 body=141 status=ok
// SIG undefined FUN_1487e64b2(void)

undefined8 * FUN_1487e64b2(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_141173b16(&local_28,param_2,0,&DAT_14cb738f8);
  *param_1 = local_28;
  param_1[1] = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)local_20 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_20 + 0x10))(local_20);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487e6540 FUN_1487e6540 body=103 status=ok
// SIG undefined FUN_1487e6540(void)

void FUN_1487e6540(longlong *param_1,char param_2)

{
  FUN_1487e65b2();
  FUN_1487e6634(param_1);
  FUN_1487e6ab2(param_1);
  FUN_1487e6be8(param_1);
  FUN_1487e6c5c(param_1);
  FUN_1487e6ce0(param_1);
  param_1[0x13] = 0;
  if (param_2 != '\0') {
    (**(code **)(*param_1 + 0x20))(param_1);
  }
  (**(code **)(*param_1 + 0x60))(param_1);
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}



// FUNCTION 1487e65b2 FUN_1487e65b2 body=130 status=ok
// SIG undefined FUN_1487e65b2(void)

void FUN_1487e65b2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0xc0) == '\x05') {
    if (*(longlong *)(param_1 + 0x2b8) != 0) {
      FUN_140ccfb62(*(longlong *)(param_1 + 0x2b8),*(undefined8 *)(param_1 + 0x2c8));
      *(undefined8 *)(param_1 + 0x2b8) = 0;
      plVar3 = *(longlong **)(param_1 + 0x2c0);
      if (plVar3 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x2c0) = 0;
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
      *(undefined8 *)(param_1 + 0x2c8) = 0;
    }
    *(undefined1 *)(param_1 + 0xc0) = 4;
  }
  return;
}



// FUNCTION 1487e6634 FUN_1487e6634 body=1124 status=ok
// SIG undefined FUN_1487e6634(void)

void FUN_1487e6634(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = *(int *)(param_1 + 0x188);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x180);
    lVar6 = 0;
    do {
      puVar3 = *(undefined8 **)(lVar2 + lVar6);
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  *(undefined4 *)(param_1 + 0x188) = 0;
  if (*(int *)(param_1 + 0x18c) != 0) {
    FUN_1487f7452(param_1 + 0x180,0);
  }
  iVar1 = *(int *)(param_1 + 0x198);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 400);
    lVar6 = 0;
    do {
      lVar4 = *(longlong *)(lVar2 + lVar6);
      if (lVar4 != 0) {
        lVar5 = *(longlong *)(lVar4 + 0x48);
        if (lVar5 != 0) {
          local_48 = lVar5;
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c();
          }
          FUN_1487e8f38(param_1 + 0x308,&local_48);
        }
        FUN_1487e9010(lVar4);
        FUN_1400020a8(lVar4);
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  *(undefined4 *)(param_1 + 0x198) = 0;
  if (*(int *)(param_1 + 0x19c) != 0) {
    FUN_1487f74b2(param_1 + 400);
  }
  iVar1 = *(int *)(param_1 + 0x1a8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x1a0);
    lVar6 = 0;
    do {
      lVar4 = *(longlong *)(lVar2 + lVar6);
      if (lVar4 != 0) {
        if (*(longlong *)(lVar4 + 0x18) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(lVar4);
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  if (*(int *)(param_1 + 0x1ac) != 0) {
    FUN_1487f74e2(param_1 + 0x1a0);
  }
  iVar1 = *(int *)(param_1 + 0x1b8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x1b0);
    lVar6 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar6) != 0) {
        FUN_1400020a8();
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  if (*(int *)(param_1 + 0x1bc) != 0) {
    FUN_1487f7512(param_1 + 0x1b0);
  }
  iVar1 = *(int *)(param_1 + 0x1c8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x1c0);
    lVar6 = 0;
    do {
      lVar4 = *(longlong *)(lVar2 + lVar6);
      if (lVar4 != 0) {
        FUN_148618020(lVar4 + 0x10);
        FUN_1400020a8(lVar4);
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  if (*(int *)(param_1 + 0x1cc) != 0) {
    FUN_1487f7542(param_1 + 0x1c0,0);
  }
  *(undefined4 *)(param_1 + 0x2a0) = 0;
  iVar1 = *(int *)(param_1 + 0x1d8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x1d0);
    lVar6 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar6) != 0) {
        FUN_1400020a8();
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  if (*(int *)(param_1 + 0x1dc) != 0) {
    FUN_1487f75a2(param_1 + 0x1d0);
  }
  iVar1 = *(int *)(param_1 + 0x1e8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x1e0);
    lVar6 = 0;
    do {
      lVar4 = *(longlong *)(lVar2 + lVar6);
      if (lVar4 != 0) {
        FUN_1487e905a(lVar4);
        FUN_1400020a8(lVar4);
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  if (*(int *)(param_1 + 0x1ec) != 0) {
    FUN_1487f75d2(param_1 + 0x1e0);
  }
  iVar1 = *(int *)(param_1 + 0x1f8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x1f0);
    lVar6 = 0;
    do {
      lVar4 = *(longlong *)(lVar2 + lVar6);
      if (lVar4 != 0) {
        *(undefined4 *)(lVar4 + 0x50) = 0;
        if (*(longlong *)(lVar4 + 0x48) != 0) {
          FUN_1400020a8();
        }
        FUN_14087e9d8(lVar4 + 8);
        FUN_1400020a8(lVar4);
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  if (*(int *)(param_1 + 0x1fc) != 0) {
    FUN_1487f7602(param_1 + 0x1f0,0);
  }
  FUN_1487f7662(param_1 + 0x200);
  FUN_1487f59ae(param_1 + 0x250,0);
  FUN_14861f76d(*(undefined8 *)(param_1 + 0x160),*(undefined4 *)(param_1 + 0x168));
  *(undefined4 *)(param_1 + 0x168) = 0;
  if (*(int *)(param_1 + 0x16c) != 0) {
    FUN_1487f5fba(param_1 + 0x160,0);
  }
  FUN_14861f76d(*(undefined8 *)(param_1 + 0x170),*(undefined4 *)(param_1 + 0x178));
  *(undefined4 *)(param_1 + 0x178) = 0;
  if (*(int *)(param_1 + 0x17c) != 0) {
    FUN_1487f5fba(param_1 + 0x170,0);
  }
  *(undefined1 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x300) = 0;
  if (*(int *)(param_1 + 0x304) != 0) {
    FUN_140c6998c(param_1 + 0x2f8,0);
  }
  *(undefined4 *)(param_1 + 0x310) = 0;
  if (*(int *)(param_1 + 0x314) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_68);
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487e6ab2 FUN_1487e6ab2 body=308 status=ok
// SIG undefined FUN_1487e6ab2(void)

void FUN_1487e6ab2(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
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
  plVar1 = (longlong *)(param_1 + 0x108);
  lVar2 = param_1 + 0x118;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  iVar4 = 0;
  local_48 = lVar2;
  if (*(int *)(param_1 + 0x130) != 0) {
    FUN_1449c0562(&local_50);
    iVar4 = *(int *)(param_1 + 0x130);
  }
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  local_78 = plVar1;
  if ((iStack_3c != iVar4) || (local_48 != lVar2)) {
    do {
      lVar3 = *(longlong *)(*local_78 + 8 + (longlong)iStack_5c * 0x18);
      if (lVar3 != 0) {
        FUN_1487ef860(lVar3);
        FUN_1400020a8(lVar3);
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (local_78 != plVar1 || (local_68 != lVar2 || iStack_5c != iVar4));
  }
  FUN_1487fadca(plVar1);
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487e6be8 FUN_1487e6be8 body=116 status=ok
// SIG undefined FUN_1487e6be8(void)

void FUN_1487e6be8(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x100);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xf8);
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar3) != 0) {
        FUN_1400020a8();
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  *(undefined4 *)(param_1 + 0x100) = 0;
  if (*(int *)(param_1 + 0x104) == 0) {
    return;
  }
  FUN_1487f8fc6(param_1 + 0xf8,0);
  return;
}



// FUNCTION 1487e6c5c FUN_1487e6c5c body=132 status=ok
// SIG undefined FUN_1487e6c5c(void)

void FUN_1487e6c5c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0xa8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xa0);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      if (lVar3 != 0) {
        FUN_1408348da(lVar3 + 8);
        FUN_1400020a8(lVar3);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (*(int *)(param_1 + 0xac) == 0) {
    return;
  }
  FUN_1487f7ad6(param_1 + 0xa0);
  return;
}



// FUNCTION 1487e6ce0 FUN_1487e6ce0 body=140 status=ok
// SIG undefined FUN_1487e6ce0(void)

void FUN_1487e6ce0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x88);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x80);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      if (lVar3 != 0) {
        FUN_1487e90e0(lVar3);
        FUN_1400020a8(lVar3);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(int *)(param_1 + 0x8c) != 0) {
    FUN_1487f79c6(param_1 + 0x80);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  FUN_1487fb0e8(param_1 + 0x30);
  return;
}



// FUNCTION 1487e6d6c FUN_1487e6d6c body=146 status=ok
// SIG undefined FUN_1487e6d6c(void)

ulonglong FUN_1487e6d6c(longlong *param_1,undefined1 *param_2)

{
  ulonglong uVar1;
  
  (**(code **)(*param_1 + 0x58))();
  uVar1 = 0;
  switch(*param_2) {
  case 0:
    uVar1 = 1;
    FUN_1487e6540(param_1,1);
    break;
  case 2:
    uVar1 = FUN_1487e6dfe(param_1);
    return uVar1;
  case 3:
    FUN_143cc816c(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001487e6dad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x28))(param_1);
    return uVar1;
  case 4:
    uVar1 = FUN_1487e6fea(param_1);
    return uVar1;
  case 5:
    uVar1 = FUN_143cc8c60(param_1);
    return uVar1;
  case 6:
    uVar1 = (ulonglong)((char)param_1[0x18] == '\x06');
  }
  return uVar1;
}



// FUNCTION 1487e6dfe FUN_1487e6dfe body=462 status=ok
// SIG undefined FUN_1487e6dfe(void)

undefined4 FUN_1487e6dfe(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((char)param_1[0x18] != '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_c8);
  }
  *(undefined1 *)(param_1 + 0x18) = 2;
  cVar4 = (**(code **)(*param_1 + 0x40))(param_1,param_1[0x13]);
  if (cVar4 == '\0') {
    uVar5 = 0;
    FUN_1487e6540(param_1,0);
  }
  else {
    local_78 = 0;
    local_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    lVar3 = param_1[0x15];
    if ((longlong)(int)lVar3 != 0) {
      lVar1 = param_1[0x14];
      lVar6 = 0;
      do {
        plVar2 = *(longlong **)(lVar1 + lVar6);
        if (plVar2 != (longlong *)0x0) {
          FUN_1487e97b4(&local_98,plVar2 + 1,*plVar2 + 0x210);
          local_a0 = 0;
          local_a8 = 0;
          FUN_1487e98ce(param_1,*plVar2,&local_98,0);
          FUN_1408348da(plVar2 + 1);
          FUN_1400020a8(plVar2);
        }
        lVar6 = lVar6 + 8;
      } while ((longlong)(int)lVar3 * 8 != lVar6);
    }
    *(undefined4 *)(param_1 + 0x15) = 0;
    if (*(int *)((longlong)param_1 + 0xac) != 0) {
      FUN_1487f7ad6(param_1 + 0x14);
    }
    cVar4 = (**(code **)(*param_1 + 0x48))(param_1,param_1[0x13]);
    if (cVar4 == '\0') {
      uVar5 = 0;
      FUN_1487e6540(param_1,0);
    }
    else {
      (**(code **)(*param_1 + 0x68))(param_1);
      uVar5 = (**(code **)(*param_1 + 0x28))(param_1);
    }
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_1487f4678(&local_98);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1487e6fea FUN_1487e6fea body=7849 status=ok
// SIG undefined FUN_1487e6fea(void)

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1487e6fea(longlong *param_1)

{
  int *piVar1;
  longlong ****pppplVar2;
  longlong *****ppppplVar3;
  double dVar4;
  byte bVar5;
  ushort uVar6;
  longlong ******pppppplVar7;
  longlong *plVar8;
  longlong ****pppplVar9;
  longlong ****pppplVar10;
  longlong ***ppplVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  char cVar15;
  char cVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  uint uVar20;
  int iVar21;
  longlong lVar22;
  longlong *plVar23;
  undefined8 *puVar24;
  longlong lVar25;
  longlong *****ppppplVar26;
  longlong ******pppppplVar27;
  undefined8 uVar28;
  longlong ******pppppplVar29;
  undefined2 uVar30;
  longlong *****ppppplVar31;
  longlong *******ppppppplVar32;
  undefined1 *puVar33;
  bool bVar34;
  uint uVar35;
  longlong lVar36;
  longlong *******ppppppplVar37;
  undefined8 unaff_RBX;
  ulonglong uVar38;
  longlong lVar39;
  longlong lVar40;
  longlong *plVar41;
  longlong lVar42;
  int iVar43;
  longlong lVar44;
  undefined8 *puVar45;
  float fVar46;
  float fVar47;
  undefined1 auStack_1f8 [32];
  longlong *******local_1d8;
  longlong *local_1d0;
  longlong *local_1c8;
  int local_1bc;
  longlong *******local_1b8;
  int local_1ac;
  longlong ******local_1a8;
  longlong *******local_1a0;
  longlong *******local_198;
  longlong *local_190;
  longlong *local_188;
  longlong *******local_180;
  longlong *******local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined2 local_14a;
  longlong *******local_148;
  ulonglong uStack_140;
  longlong local_138;
  undefined8 uStack_130;
  longlong local_128;
  undefined8 uStack_120;
  longlong local_118;
  undefined8 uStack_110;
  longlong local_108;
  undefined8 uStack_100;
  longlong local_f8;
  undefined8 uStack_f0;
  longlong *******local_e8;
  undefined8 uStack_e0;
  longlong ******local_d8;
  longlong *******ppppppplStack_d0;
  ulonglong local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong *******local_b8;
  undefined8 uStack_b0;
  longlong ******pppppplStack_a8;
  undefined8 local_a0;
  ulonglong uStack_98;
  undefined4 local_90;
  undefined8 local_8c;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  uVar38 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (3 < *(byte *)(param_1 + 0x18)) goto LAB_1487e7022;
  if (*(byte *)(param_1 + 0x18) != 3) {
    FUN_143cc816c(param_1);
  }
  FUN_1487e6ab2(param_1);
  FUN_1487e6634(param_1);
  local_188 = param_1 + 0x5d;
  FUN_140595ef6(param_1[0x5d],(int)param_1[0x5e]);
  *(undefined4 *)(param_1 + 0x5e) = 0;
  if (*(int *)((longlong)param_1 + 0x2f4) != 0) {
    FUN_1487f9026(local_188);
  }
  *(int *)(param_1 + 0x55) = (int)param_1[0x55] + 1;
  local_1ac = 0;
  if (param_1[5] == 0) {
    local_1bc = 0;
  }
  else {
    iVar43 = *(int *)(param_1[5] + 0x188);
    local_1bc = 0;
    if (iVar43 != 0) {
      *(undefined1 *)(param_1 + 0x2b) = 1;
      local_1ac = 1;
      local_1bc = iVar43;
    }
  }
  local_e8 = (longlong *******)0x0;
  uStack_e0 = 0;
  ppppppplVar37 = (longlong *******)(ulonglong)*(uint *)(param_1 + 0x20);
  if ((int)*(uint *)(param_1 + 0x20) < 0) goto LAB_1487e8e61;
  iVar43 = 0;
  if (ppppppplVar37 != (longlong *******)0x0) {
    FUN_1487f8fc6(&local_e8);
    iVar43 = 0;
    if ((longlong)(int)param_1[0x20] != 0) {
      puVar45 = (undefined8 *)param_1[0x1f];
      puVar24 = puVar45 + (int)param_1[0x20];
      local_1d0 = (longlong *)((ulonglong)local_1d0 & 0xffffffff00000000);
LAB_1487e7129:
      uVar38 = uStack_e0;
      pppppplVar7 = (longlong ******)*puVar45;
      if (((pppppplVar7 != (longlong ******)0x0) &&
          (ppppplVar26 = *pppppplVar7, ppppplVar26 != (longlong *****)0x0)) &&
         (*(char *)(ppppplVar26 + 0x65) == '\x01')) {
        ppppplVar26[0x4e] = (longlong ****)pppppplVar7;
        local_1d8 = (longlong *******)*pppppplVar7;
        bVar5 = *(byte *)(local_1d8 + 0x19);
        local_1c8 = (longlong *)CONCAT44(local_1c8._4_4_,(uint)bVar5);
        *(ushort *)((longlong)pppppplVar7 + 0x1e) = ~(ushort)bVar5;
        *(undefined2 *)((longlong)pppppplVar7 + 0x1c) = 0;
        *(undefined2 *)((longlong)pppppplVar7 + 0x26) = 0;
        if ((longlong)(int)param_1[0x1c] != 0) {
          plVar23 = (longlong *)param_1[0x1b];
          plVar41 = plVar23 + (int)param_1[0x1c];
          do {
            if (*(int *)(ppppplVar26 + 0x55) != *(int *)((longlong)ppppplVar26 + 0x2d4)) {
              lVar44 = *plVar23;
              uVar20 = (uint)((ulonglong)lVar44 >> 0x10);
              uVar35 = (uint)lVar44 & 0xffff;
              ppppplVar31 = (longlong *****)ppppplVar26[0x5c];
              if ((longlong *****)ppppplVar26[0x5c] == (longlong *****)0x0) {
                ppppplVar31 = ppppplVar26 + 0x5b;
              }
              iVar43 = *(int *)((longlong)ppppplVar31 +
                               (ulonglong)
                               (*(int *)(ppppplVar26 + 0x5d) - 1U &
                               (int)((ulonglong)lVar44 >> 0x20) + ((uint)lVar44 << 0x10 | uVar35) +
                               (uVar20 << 0x13 | uVar20 & 0xffff) + (uVar35 >> 4)) * 4);
              if (iVar43 != -1) {
                do {
                  plVar8 = (longlong *)((longlong)ppppplVar26[0x54] + (longlong)iVar43 * 0x14);
                  if (*plVar8 == lVar44) {
                    if (((plVar8 + 1 != (longlong *)0x0 && plVar8 != (longlong *)0x0) &&
                        (uVar20 = (uint)(short)plVar8[1], -1 < (int)uVar20)) &&
                       ((int)uVar20 < *(int *)(ppppplVar26 + 0x1b))) goto LAB_1487e725b;
                    break;
                  }
                  iVar43 = *(int *)((longlong)plVar8 + 0xc);
                } while (iVar43 != -1);
              }
            }
            plVar23 = plVar23 + 1;
          } while (plVar23 != plVar41);
        }
        if (((*(char *)((longlong)ppppplVar26 + 0xc9) == '\x01') &&
            (lVar44 = param_1[0x1e], lVar44 != 0)) &&
           (*(int *)(ppppplVar26 + 0x55) != *(int *)((longlong)ppppplVar26 + 0x2d4))) {
          uVar20 = (uint)((ulonglong)lVar44 >> 0x10);
          uVar35 = (uint)lVar44 & 0xffff;
          ppppplVar31 = ppppplVar26 + 0x5b;
          if ((longlong *****)ppppplVar26[0x5c] != (longlong *****)0x0) {
            ppppplVar31 = (longlong *****)ppppplVar26[0x5c];
          }
          iVar43 = *(int *)((longlong)ppppplVar31 +
                           (ulonglong)
                           (*(int *)(ppppplVar26 + 0x5d) - 1U &
                           (int)((ulonglong)lVar44 >> 0x20) + ((uint)lVar44 << 0x10 | uVar35) +
                           (uVar20 << 0x13 | uVar20 & 0xffff) + (uVar35 >> 4)) * 4);
          if (iVar43 != -1) {
            do {
              plVar41 = (longlong *)((longlong)ppppplVar26[0x54] + (longlong)iVar43 * 0x14);
              if (*plVar41 == lVar44) {
                if (((plVar41 + 1 != (longlong *)0x0 && plVar41 != (longlong *)0x0) &&
                    (uVar20 = (uint)(short)plVar41[1], -1 < (int)uVar20)) &&
                   ((int)uVar20 < *(int *)(ppppplVar26 + 0x1b))) goto LAB_1487e725b;
                break;
              }
              iVar43 = *(int *)((longlong)plVar41 + 0xc);
            } while (iVar43 != -1);
          }
        }
        if (bVar5 != 0) goto LAB_1487e7305;
        goto LAB_1487e72a9;
      }
      goto LAB_1487e7305;
    }
  }
  goto LAB_1487e742b;
LAB_1487e725b:
  local_1d0 = (longlong *)
              CONCAT44(local_1d0._4_4_,
                       (int)local_1d0 +
                       *(int *)(ppppplVar26[0x1a] + ((ulonglong)uVar20 & 0xffff) * 7 + 6));
  *(short *)((longlong)pppppplVar7 + 0x1e) = (short)uVar20;
LAB_1487e72a9:
  iVar43 = *(int *)(ppppplVar26 + 0x43);
  if (iVar43 != 0) {
    local_1bc = iVar43;
  }
  sVar17 = *(short *)(local_1d8 + 0x46);
  lVar44 = (longlong)(int)uStack_e0;
  uVar20 = (int)uStack_e0 + 1;
  uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar20);
  if (uStack_e0._4_4_ < uVar20) {
    FUN_1487f9056(&local_e8,uVar38 & 0xffffffff);
  }
  local_1ac = local_1ac + (uint)(iVar43 != 0);
  local_1d0 = (longlong *)CONCAT44(local_1d0._4_4_,(int)local_1d0 + sVar17);
  local_e8[lVar44] = pppppplVar7;
LAB_1487e7305:
  puVar45 = puVar45 + 1;
  if (puVar45 == puVar24) goto LAB_1487e740f;
  goto LAB_1487e7129;
LAB_1487e740f:
  lVar44 = param_1[0x20];
  if ((longlong)(int)lVar44 != 0) {
    lVar25 = param_1[0x1f];
    lVar39 = 0;
    do {
      plVar41 = *(longlong **)(lVar25 + lVar39);
      if (((plVar41 != (longlong *)0x0) && (*plVar41 != 0)) &&
         ((*(char *)(*plVar41 + 0x328) == '\x01' &&
          ((lVar40 = FUN_1487e3eb4(), lVar40 != 0 && (*(longlong *)(lVar40 + 0x270) != 0)))))) {
        *(undefined2 *)((longlong)plVar41 + 0x12) =
             *(undefined2 *)(*(longlong *)(lVar40 + 0x270) + 0x10);
      }
      lVar39 = lVar39 + 8;
    } while ((longlong)(int)lVar44 * 8 != lVar39);
  }
  iVar43 = (int)local_1d0;
  if ((int)local_1d0 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4((ulonglong)local_1d0 & 0xffffffff);
  }
LAB_1487e742b:
  local_1c8 = param_1 + 0x2c;
  if (*(int *)((longlong)param_1 + 0x16c) < iVar43) {
    FUN_1487f5fba(local_1c8,iVar43);
  }
  local_f8 = 0;
  uStack_f0 = 0;
  if (iVar43 != 0) {
    FUN_140ca8596(&local_f8,iVar43);
  }
  local_108 = 0;
  uStack_100 = 0;
  ppppppplVar37 = (longlong *******)(ulonglong)*(uint *)(param_1 + 0x20);
  if ((int)*(uint *)(param_1 + 0x20) < 0) {
LAB_1487e8e61:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(ppppppplVar37);
  }
  if (ppppppplVar37 == (longlong *******)0x0) {
LAB_1487e7493:
    uStack_110 = 0;
    local_118 = 0;
LAB_1487e749b:
    ppppppplVar37 = (longlong *******)0x0;
    uStack_120 = 0;
    local_128 = 0;
    local_138 = 0;
    uStack_130 = 0;
  }
  else {
    FUN_1487f90dc(&local_108);
    ppppppplVar37 = (longlong *******)(ulonglong)*(uint *)(param_1 + 0x20);
    local_118 = 0;
    uStack_110 = 0;
    if ((int)*(uint *)(param_1 + 0x20) < 0) goto LAB_1487e8e61;
    if (ppppppplVar37 == (longlong *******)0x0) goto LAB_1487e7493;
    FUN_1487f9132(&local_118);
    ppppppplVar37 = (longlong *******)(ulonglong)*(uint *)(param_1 + 0x20);
    local_128 = 0;
    uStack_120 = 0;
    if ((int)*(uint *)(param_1 + 0x20) < 0) goto LAB_1487e8e61;
    if (ppppppplVar37 == (longlong *******)0x0) goto LAB_1487e749b;
    FUN_1487f9188(&local_128);
    ppppppplVar37 = (longlong *******)(ulonglong)*(uint *)(param_1 + 0x20);
    local_138 = 0;
    uStack_130 = 0;
    if ((int)*(uint *)(param_1 + 0x20) < 0) goto LAB_1487e8e61;
    if (ppppppplVar37 != (longlong *******)0x0) {
      FUN_1487f91de(&local_138);
    }
  }
  plVar41 = param_1 + 0x1f;
  uVar20 = DAT_14cb73428 - _DAT_14cb73454;
  local_1a8 = (longlong ******)CONCAT44(local_1a8._4_4_,uVar20);
  local_148 = (longlong *******)0x0;
  uStack_140 = 0;
  if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar20);
  }
  if (uVar20 != 0) {
    ppppppplVar37 = (longlong *******)(ulonglong)uVar20;
    FUN_1402191ca(&local_148,ppppppplVar37);
  }
  local_190 = plVar41;
  if ((longlong)(int)uStack_e0 != 0) {
    local_180 = local_e8 + (int)uStack_e0;
    ppppppplVar32 = local_e8;
    do {
      pppppplVar7 = *ppppppplVar32;
      if (pppppplVar7 == (longlong ******)0x0) {
        local_1b8 = (longlong *******)0x0;
      }
      else {
        local_1b8 = (longlong *******)*pppppplVar7;
      }
      cVar16 = '\0';
      uStack_98 = 0;
      local_90 = 0;
      local_b8 = (longlong *******)0x0;
      uStack_b0 = (longlong *******)0x0;
      local_8c = 0xffffffff00000080;
      local_84 = 0;
      local_78 = (undefined1 *)0x0;
      local_70 = 0;
      lVar44 = (longlong)*(short *)((longlong)pppppplVar7 + 0x1e);
      local_198 = ppppppplVar32;
      if (lVar44 < 0) {
        local_1d8 = (longlong *******)0x0;
      }
      else {
        pppppplVar27 = local_1b8[0x1a];
        local_1d8 = (longlong *******)
                    CONCAT71((int7)((ulonglong)ppppppplVar37 >> 8),
                             *(undefined1 *)(pppppplVar27 + lVar44 * 7 + 4));
        cVar16 = *(char *)((longlong)pppppplVar27 + lVar44 * 0x38 + 0x21);
        ppppppplVar37 = (longlong *******)(longlong)*(int *)(pppppplVar27 + lVar44 * 7 + 6);
        if (ppppppplVar37 != (longlong *******)0x0) {
          ppppplVar31 = pppppplVar27[lVar44 * 7 + 5];
          ppppplVar26 = ppppplVar31 + (longlong)ppppppplVar37 * 3;
          do {
            pppplVar9 = *ppppplVar31;
            pppplVar10 = ppppplVar31[1];
            if (pppplVar10 == (longlong ****)0x0) {
              if (pppplVar9 != (longlong ****)0x0) goto LAB_1487e818d;
            }
            else {
              LOCK();
              *(int *)(pppplVar10 + 1) = *(int *)(pppplVar10 + 1) + 1;
              UNLOCK();
              LOCK();
              *(int *)(pppplVar10 + 1) = *(int *)(pppplVar10 + 1) + 1;
              UNLOCK();
              LOCK();
              pppplVar2 = pppplVar10 + 1;
              *(int *)pppplVar2 = *(int *)pppplVar2 + -1;
              UNLOCK();
              if (*(int *)pppplVar2 == 0) {
                (*(code *)**pppplVar10)(pppplVar10);
                LOCK();
                piVar1 = (int *)((longlong)pppplVar10 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (*(code *)(*pppplVar10)[2])(pppplVar10);
                }
              }
              LOCK();
              *(int *)(pppplVar10 + 1) = *(int *)(pppplVar10 + 1) + 1;
              UNLOCK();
              LOCK();
              pppplVar2 = pppplVar10 + 1;
              *(int *)pppplVar2 = *(int *)pppplVar2 + -1;
              UNLOCK();
              if (*(int *)pppplVar2 == 0) {
                (*(code *)**pppplVar10)(pppplVar10);
                LOCK();
                piVar1 = (int *)((longlong)pppplVar10 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (*(code *)(*pppplVar10)[2])(pppplVar10);
                }
              }
              if (pppplVar9 != (longlong ****)0x0) {
LAB_1487e818d:
                if (*(short *)(pppppplVar7 + 4) < 0) {
                  *(short *)(pppppplVar7 + 4) = (short)param_1[0x2d];
                  sVar17 = 1;
                }
                else {
                  sVar17 = *(short *)((longlong)pppppplVar7 + 0x22) + 1;
                }
                *(short *)((longlong)pppppplVar7 + 0x22) = sVar17;
                local_14a = (undefined2)param_1[0x2d];
                local_178 = (longlong *******)(pppplVar9 + 1);
                uStack_170 = (longlong ******)&local_14a;
                ppppppplVar37 = &local_d8;
                FUN_140870298(&local_b8,ppppppplVar37,&local_178);
                uVar20 = *(uint *)(param_1 + 0x2d);
                *(uint *)(param_1 + 0x2d) = uVar20 + 1;
                if (*(uint *)((longlong)param_1 + 0x16c) < uVar20 + 1) {
                  ppppppplVar37 = (longlong *******)(ulonglong)uVar20;
                  FUN_1487f601a(local_1c8,ppppppplVar37);
                }
                lVar44 = *local_1c8;
                *(longlong *****)(lVar44 + (longlong)(int)uVar20 * 0x10) = pppplVar9;
                *(longlong *****)(lVar44 + 8 + (longlong)(int)uVar20 * 0x10) = pppplVar10;
                if (pppplVar10 == (longlong ****)0x0) goto LAB_1487e8244;
                LOCK();
                *(int *)(pppplVar10 + 1) = *(int *)(pppplVar10 + 1) + 1;
                UNLOCK();
              }
              LOCK();
              pppplVar9 = pppplVar10 + 1;
              *(int *)pppplVar9 = *(int *)pppplVar9 + -1;
              UNLOCK();
              if (*(int *)pppplVar9 == 0) {
                (*(code *)**pppplVar10)(pppplVar10);
                LOCK();
                piVar1 = (int *)((longlong)pppplVar10 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (*(code *)(*pppplVar10)[2])(pppplVar10);
                }
              }
            }
LAB_1487e8244:
            ppppplVar31 = ppppplVar31 + 3;
          } while (ppppplVar31 != ppppplVar26);
        }
      }
      if ((longlong)*(int *)(local_1b8 + 0xe) != 0) {
        pppppplVar29 = local_1b8[0xd];
        pppppplVar27 = pppppplVar29 + (longlong)*(int *)(local_1b8 + 0xe) * 3;
        do {
          ppppplVar26 = *pppppplVar29;
          ppppplVar31 = pppppplVar29[1];
          if (ppppplVar31 != (longlong *****)0x0) {
            LOCK();
            *(int *)(ppppplVar31 + 1) = *(int *)(ppppplVar31 + 1) + 1;
            UNLOCK();
            LOCK();
            *(int *)(ppppplVar31 + 1) = *(int *)(ppppplVar31 + 1) + 1;
            UNLOCK();
            LOCK();
            ppppplVar3 = ppppplVar31 + 1;
            *(int *)ppppplVar3 = *(int *)ppppplVar3 + -1;
            UNLOCK();
            if (*(int *)ppppplVar3 == 0) {
              (*(code *)**ppppplVar31)(ppppplVar31);
              LOCK();
              piVar1 = (int *)((longlong)ppppplVar31 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (*(code *)(*ppppplVar31)[2])(ppppplVar31);
              }
            }
          }
          if (ppppplVar26 == (longlong *****)0x0) {
LAB_1487e840e:
            if (ppppplVar31 != (longlong *****)0x0) {
LAB_1487e834d:
              LOCK();
              ppppplVar26 = ppppplVar31 + 1;
              *(int *)ppppplVar26 = *(int *)ppppplVar26 + -1;
              UNLOCK();
              if (*(int *)ppppplVar26 == 0) {
                (*(code *)**ppppplVar31)(ppppplVar31);
                LOCK();
                piVar1 = (int *)((longlong)ppppplVar31 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (*(code *)(*ppppplVar31)[2])(ppppplVar31);
                }
              }
            }
          }
          else {
            if (((char)local_1d8 != '\0') && ((int)uStack_b0 != local_84)) {
              pppplVar9 = ppppplVar26[1];
              uVar20 = (uint)((ulonglong)pppplVar9 >> 0x10);
              uVar35 = (uint)pppplVar9 & 0xffff;
              puVar33 = local_78;
              if (local_78 == (undefined1 *)0x0) {
                puVar33 = local_80;
              }
              ppppppplVar37 =
                   (longlong *******)
                   (ulonglong)
                   *(uint *)(puVar33 +
                            (ulonglong)
                            (local_70 - 1U &
                            (int)((ulonglong)pppplVar9 >> 0x20) + ((uint)pppplVar9 << 0x10 | uVar35)
                            + (uVar20 << 0x13 | uVar20 & 0xffff) + (uVar35 >> 4)) * 4);
              if (*(uint *)(puVar33 +
                           (ulonglong)
                           (local_70 - 1U &
                           (int)((ulonglong)pppplVar9 >> 0x20) + ((uint)pppplVar9 << 0x10 | uVar35)
                           + (uVar20 << 0x13 | uVar20 & 0xffff) + (uVar35 >> 4)) * 4) != 0xffffffff)
              {
                do {
                  lVar44 = (longlong)(int)ppppppplVar37;
                  ppppppplVar37 = (longlong *******)(lVar44 * 5);
                  if (*(longlong *****)((longlong)local_b8 + lVar44 * 0x14) == pppplVar9)
                  goto LAB_1487e840e;
                  uVar20 = *(uint *)((longlong)local_b8 + lVar44 * 0x14 + 0xc);
                  ppppppplVar37 = (longlong *******)(ulonglong)uVar20;
                } while (uVar20 != 0xffffffff);
                ppppppplVar37 = (longlong *******)&DAT_ffffffff;
              }
            }
            if (*(short *)(pppppplVar7 + 4) < 0) {
              *(short *)(pppppplVar7 + 4) = (short)param_1[0x2d];
              sVar17 = 1;
            }
            else {
              sVar17 = *(short *)((longlong)pppppplVar7 + 0x22) + 1;
            }
            *(short *)((longlong)pppppplVar7 + 0x22) = sVar17;
            uVar20 = *(uint *)(param_1 + 0x2d);
            *(uint *)(param_1 + 0x2d) = uVar20 + 1;
            if (*(uint *)((longlong)param_1 + 0x16c) < uVar20 + 1) {
              ppppppplVar37 = (longlong *******)(ulonglong)uVar20;
              FUN_1487f601a(local_1c8,ppppppplVar37);
            }
            lVar44 = *local_1c8;
            *(longlong ******)(lVar44 + (longlong)(int)uVar20 * 0x10) = ppppplVar26;
            *(longlong ******)(lVar44 + 8 + (longlong)(int)uVar20 * 0x10) = ppppplVar31;
            if (ppppplVar31 != (longlong *****)0x0) {
              LOCK();
              *(int *)(ppppplVar31 + 1) = *(int *)(ppppplVar31 + 1) + 1;
              UNLOCK();
              goto LAB_1487e834d;
            }
          }
          pppppplVar29 = pppppplVar29 + 3;
        } while (pppppplVar29 != pppppplVar27);
      }
      ppppppplVar32 = local_1b8;
      local_1d8 = local_1b8 + 0x11;
      local_d8 = (longlong ******)&DAT_100000000;
      local_c8 = 0xffffffff;
      uStack_c0 = 0;
      ppppppplStack_d0 = local_1d8;
      if (*(int *)(local_1b8 + 0x14) == 0) {
        iVar43 = 0;
      }
      else {
        FUN_1449c0562(&local_d8);
        iVar43 = *(int *)(ppppppplVar32 + 0x14);
      }
      local_1a0 = ppppppplVar32 + 0xf;
      uStack_158 = CONCAT44(uStack_bc,uStack_c0);
      uStack_160 = local_c8;
      uVar38 = uStack_160;
      uStack_170 = local_d8;
      local_168 = ppppppplStack_d0;
      uStack_160._4_4_ = (int)(local_c8 >> 0x20);
      local_1d0 = (longlong *)CONCAT44(local_1d0._4_4_,iVar43);
      iVar21 = uStack_160._4_4_;
      local_178 = local_1a0;
      if ((uStack_160._4_4_ != iVar43) ||
         (ppppppplVar37 = local_1d8, uStack_160 = uVar38, ppppppplStack_d0 != local_1d8)) {
        do {
          uStack_160 = uVar38;
          ppppppplVar32 = (longlong *******)(*local_178 + (longlong)iVar21 * 4);
          pppppplVar27 = (longlong ******)(*local_178)[(longlong)iVar21 * 4 + 1];
          if (pppppplVar27 == (longlong ******)0x0) {
            uVar28 = FUN_1464af156();
            pppppplVar27 = (longlong ******)FUN_14477b664(uVar28);
            ppppppplVar32[1] = pppppplVar27;
          }
          pppppplVar29 = ppppppplVar32[2];
          if (pppppplVar29 == (longlong ******)0x0) {
            if ((pppppplVar27 != (longlong ******)0x0) && (*ppppppplVar32 != (longlong ******)0x0))
            {
              ppppplVar26 = pppppplVar27[0x17];
              if ((ppppplVar26 == (longlong *****)0x0) ||
                 (cVar15 = (*(code *)(*ppppplVar26)[0x21])(ppppplVar26), cVar15 == '\0')) {
                ppppppplVar32[2] = (longlong ******)0x0;
              }
              else {
                uVar28 = (*(code *)(*ppppplVar26)[0x22])(ppppplVar26);
                ppppppplVar37 = ppppppplVar32;
                pppppplVar29 = (longlong ******)FUN_144aff482(uVar28,ppppppplVar32);
                ppppppplVar32[2] = pppppplVar29;
                if (pppppplVar29 != (longlong ******)0x0) goto LAB_1487e852c;
              }
            }
          }
          else {
LAB_1487e852c:
            if ((longlong)*(int *)(pppppplVar29 + 5) != 0) {
              ppppplVar26 = pppppplVar29[4];
              ppppplVar31 = ppppplVar26 + (longlong)*(int *)(pppppplVar29 + 5) * 3;
              do {
                pppplVar9 = *ppppplVar26;
                pppplVar10 = ppppplVar26[1];
                if (pppplVar10 != (longlong ****)0x0) {
                  LOCK();
                  *(int *)(pppplVar10 + 1) = *(int *)(pppplVar10 + 1) + 1;
                  UNLOCK();
                  LOCK();
                  *(int *)(pppplVar10 + 1) = *(int *)(pppplVar10 + 1) + 1;
                  UNLOCK();
                  LOCK();
                  pppplVar2 = pppplVar10 + 1;
                  *(int *)pppplVar2 = *(int *)pppplVar2 + -1;
                  UNLOCK();
                  if (*(int *)pppplVar2 == 0) {
                    (*(code *)**pppplVar10)(pppplVar10);
                    LOCK();
                    piVar1 = (int *)((longlong)pppplVar10 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (*(code *)(*pppplVar10)[2])(pppplVar10);
                    }
                  }
                }
                if (pppplVar9 == (longlong ****)0x0) {
LAB_1487e86b4:
                  if (pppplVar10 != (longlong ****)0x0) {
LAB_1487e85f3:
                    LOCK();
                    pppplVar9 = pppplVar10 + 1;
                    *(int *)pppplVar9 = *(int *)pppplVar9 + -1;
                    UNLOCK();
                    if (*(int *)pppplVar9 == 0) {
                      (*(code *)**pppplVar10)(pppplVar10);
                      LOCK();
                      piVar1 = (int *)((longlong)pppplVar10 + 0xc);
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (*piVar1 == 0) {
                        (*(code *)(*pppplVar10)[2])(pppplVar10);
                      }
                    }
                  }
                }
                else {
                  if ((cVar16 != '\0') && ((int)uStack_b0 != local_84)) {
                    ppplVar11 = pppplVar9[1];
                    uVar20 = (uint)((ulonglong)ppplVar11 >> 0x10);
                    uVar35 = (uint)ppplVar11 & 0xffff;
                    puVar33 = local_78;
                    if (local_78 == (undefined1 *)0x0) {
                      puVar33 = local_80;
                    }
                    ppppppplVar37 =
                         (longlong *******)
                         (ulonglong)
                         *(uint *)(puVar33 +
                                  (ulonglong)
                                  (local_70 - 1U &
                                  (int)((ulonglong)ppplVar11 >> 0x20) +
                                  ((uint)ppplVar11 << 0x10 | uVar35) +
                                  (uVar20 << 0x13 | uVar20 & 0xffff) + (uVar35 >> 4)) * 4);
                    if (*(uint *)(puVar33 +
                                 (ulonglong)
                                 (local_70 - 1U &
                                 (int)((ulonglong)ppplVar11 >> 0x20) +
                                 ((uint)ppplVar11 << 0x10 | uVar35) +
                                 (uVar20 << 0x13 | uVar20 & 0xffff) + (uVar35 >> 4)) * 4) !=
                        0xffffffff) {
                      do {
                        lVar44 = (longlong)(int)ppppppplVar37;
                        ppppppplVar37 = (longlong *******)(lVar44 * 5);
                        if (*(longlong ****)((longlong)local_b8 + lVar44 * 0x14) == ppplVar11)
                        goto LAB_1487e86b4;
                        uVar20 = *(uint *)((longlong)local_b8 + lVar44 * 0x14 + 0xc);
                        ppppppplVar37 = (longlong *******)(ulonglong)uVar20;
                      } while (uVar20 != 0xffffffff);
                      ppppppplVar37 = (longlong *******)&DAT_ffffffff;
                    }
                  }
                  if (*(short *)(pppppplVar7 + 4) < 0) {
                    *(short *)(pppppplVar7 + 4) = (short)param_1[0x2d];
                    sVar17 = 1;
                  }
                  else {
                    sVar17 = *(short *)((longlong)pppppplVar7 + 0x22) + 1;
                  }
                  *(short *)((longlong)pppppplVar7 + 0x22) = sVar17;
                  uVar20 = *(uint *)(param_1 + 0x2d);
                  *(uint *)(param_1 + 0x2d) = uVar20 + 1;
                  if (*(uint *)((longlong)param_1 + 0x16c) < uVar20 + 1) {
                    ppppppplVar37 = (longlong *******)(ulonglong)uVar20;
                    FUN_1487f601a(local_1c8,ppppppplVar37);
                  }
                  lVar44 = *local_1c8;
                  *(longlong *****)(lVar44 + (longlong)(int)uVar20 * 0x10) = pppplVar9;
                  *(longlong *****)(lVar44 + 8 + (longlong)(int)uVar20 * 0x10) = pppplVar10;
                  if (pppplVar10 != (longlong ****)0x0) {
                    LOCK();
                    *(int *)(pppplVar10 + 1) = *(int *)(pppplVar10 + 1) + 1;
                    UNLOCK();
                    goto LAB_1487e85f3;
                  }
                }
                ppppplVar26 = ppppplVar26 + 3;
              } while (ppppplVar26 != ppppplVar31);
            }
          }
          uStack_160 = CONCAT44(uStack_160._4_4_,(uint)uStack_160 & ~uStack_170._4_4_);
          FUN_1449c0562(&uStack_170);
          bVar34 = local_178 != local_1a0 ||
                   (local_168 != local_1d8 || uStack_160._4_4_ != (int)local_1d0);
          ppppppplVar37 = (longlong *******)CONCAT71((int7)((ulonglong)ppppppplVar37 >> 8),bVar34);
          iVar21 = uStack_160._4_4_;
          uVar38 = uStack_160;
        } while (bVar34);
      }
      if (0 < *(short *)((longlong)pppppplVar7 + 0x22)) {
        sVar17 = 0;
        do {
          sVar19 = *(short *)(pppppplVar7 + 4);
          plVar41 = *(longlong **)(*local_1c8 + (longlong)(short)(sVar19 + sVar17) * 0x10);
          cVar16 = (**(code **)(*plVar41 + 0x18))(plVar41);
          uVar38 = uStack_f0;
          if (cVar16 != '\0') {
            iVar43 = (int)uStack_f0;
            if (*(short *)((longlong)pppppplVar7 + 0x24) < 0) {
              *(short *)((longlong)pppppplVar7 + 0x24) = (short)uStack_f0;
              sVar18 = 1;
            }
            else {
              sVar18 = *(short *)((longlong)pppppplVar7 + 0x26) + 1;
            }
            *(short *)((longlong)pppppplVar7 + 0x26) = sVar18;
            uVar20 = (int)uStack_f0 + 1;
            uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar20);
            if (uStack_f0._4_4_ < uVar20) {
              ppppppplVar37 = (longlong *******)(uVar38 & 0xffffffff);
              FUN_1405b572a(&local_f8,ppppppplVar37);
            }
            *(short *)(local_f8 + (longlong)iVar43 * 2) = sVar19 + sVar17;
          }
          lVar44 = plVar41[1];
          if (lVar44 == DAT_14cb738c0) {
            ppppppplVar37 = (longlong *******)FUN_1464b012c();
            cVar16 = FUN_1448093f4(plVar41,ppppppplVar37);
            uVar38 = uStack_100;
            if ((plVar41 != (longlong *)0x0) && (cVar16 != '\0')) {
              iVar43 = (int)uStack_100;
              if (*(short *)((longlong)pppppplVar7 + 0x2c) < 0) {
                *(short *)((longlong)pppppplVar7 + 0x2c) = (short)uStack_100;
                sVar19 = 1;
              }
              else {
                sVar19 = *(short *)((longlong)pppppplVar7 + 0x2e) + 1;
              }
              *(short *)((longlong)pppppplVar7 + 0x2e) = sVar19;
              uVar20 = (int)uStack_100 + 1;
              uStack_100 = CONCAT44(uStack_100._4_4_,uVar20);
              if (uStack_100._4_4_ < uVar20) {
                ppppppplVar37 = (longlong *******)(uVar38 & 0xffffffff);
                FUN_1487f9234(&local_108,ppppppplVar37);
              }
              *(longlong **)(local_108 + (longlong)iVar43 * 8) = plVar41;
              *(undefined2 *)((longlong)pppppplVar7 + 0x16) = 0xfffe;
            }
          }
          else if (lVar44 == DAT_14cb738c8) {
            ppppppplVar37 = (longlong *******)FUN_1464b01c2();
            cVar16 = FUN_1448093f4(plVar41,ppppppplVar37);
            uVar38 = uStack_110;
            if (((plVar41 != (longlong *)0x0) && (cVar16 != '\0')) &&
               ((*(longlong *)((longlong)plVar41 + 0x14) != 0 || ((char)plVar41[2] == '\0')))) {
              iVar43 = (int)uStack_110;
              if (*(short *)(pppppplVar7 + 5) < 0) {
                *(short *)(pppppplVar7 + 5) = (short)uStack_110;
                *(undefined2 *)((longlong)pppppplVar7 + 0x2a) = 1;
              }
              else {
                *(short *)((longlong)pppppplVar7 + 0x2a) =
                     *(short *)((longlong)pppppplVar7 + 0x2a) + 1;
              }
              uVar20 = (int)uStack_110 + 1;
              uStack_110 = CONCAT44(uStack_110._4_4_,uVar20);
              lVar44 = local_118;
              if (uStack_110._4_4_ < uVar20) {
                ppppppplVar37 = (longlong *******)(uVar38 & 0xffffffff);
                FUN_1487f92ba(&local_118,ppppppplVar37);
                lVar44 = local_118;
              }
LAB_1487e890c:
              *(longlong **)(lVar44 + (longlong)iVar43 * 8) = plVar41;
            }
          }
          else if (lVar44 == DAT_14cb738d0) {
            ppppppplVar37 = (longlong *******)FUN_1464b0258();
            cVar16 = FUN_1448093f4(plVar41,ppppppplVar37);
            uVar38 = uStack_130;
            if (((plVar41 != (longlong *)0x0) && (cVar16 != '\0')) && ((int)plVar41[3] != 0)) {
              iVar43 = (int)uStack_130;
              if (*(short *)(pppppplVar7 + 6) < 0) {
                *(short *)(pppppplVar7 + 6) = (short)uStack_130;
                sVar19 = 1;
              }
              else {
                sVar19 = *(short *)((longlong)pppppplVar7 + 0x32) + 1;
              }
              *(short *)((longlong)pppppplVar7 + 0x32) = sVar19;
              uVar20 = (int)uStack_130 + 1;
              uStack_130 = CONCAT44(uStack_130._4_4_,uVar20);
              lVar44 = local_138;
              if (uStack_130._4_4_ < uVar20) {
                ppppppplVar37 = (longlong *******)(uVar38 & 0xffffffff);
                FUN_1487f9340(&local_138,ppppppplVar37);
                lVar44 = local_138;
              }
              goto LAB_1487e890c;
            }
          }
          else if (lVar44 == DAT_14cb738e0) {
            ppppppplVar37 = (longlong *******)FUN_1464b0384();
            cVar16 = FUN_1448093f4(plVar41,ppppppplVar37);
            uVar38 = uStack_120;
            if (((plVar41 != (longlong *)0x0) && (cVar16 != '\0')) &&
               (((int)plVar41[3] != 0 || ((int)plVar41[5] != 0)))) {
              iVar43 = (int)uStack_120;
              if (*(short *)((longlong)pppppplVar7 + 0x34) < 0) {
                *(short *)((longlong)pppppplVar7 + 0x34) = (short)uStack_120;
                *(undefined2 *)((longlong)pppppplVar7 + 0x36) = 1;
              }
              else {
                *(short *)((longlong)pppppplVar7 + 0x36) =
                     *(short *)((longlong)pppppplVar7 + 0x36) + 1;
              }
              uVar20 = (int)uStack_120 + 1;
              uStack_120 = CONCAT44(uStack_120._4_4_,uVar20);
              lVar44 = local_128;
              if (uStack_120._4_4_ < uVar20) {
                ppppppplVar37 = (longlong *******)(uVar38 & 0xffffffff);
                FUN_1487f93c6(&local_128,ppppppplVar37);
                lVar44 = local_128;
              }
              goto LAB_1487e890c;
            }
          }
          sVar17 = sVar17 + 1;
        } while (sVar17 < *(short *)((longlong)pppppplVar7 + 0x22));
      }
      plVar41 = local_190;
      if ((0 < *(short *)((longlong)pppppplVar7 + 0x26)) ||
         (*(short *)((longlong)pppppplVar7 + 0x16) == -2)) {
        uVar38 = uStack_140 >> 0x20;
        uStack_140 = uStack_140 & 0xffffffff00000000;
        if ((int)uVar38 != (int)local_1a8) {
          FUN_1402191ca(&local_148,(ulonglong)local_1a8 & 0xffffffff);
        }
        ppppppplVar37 = (longlong *******)&local_148;
        FUN_1449f3ff4(local_1b8 + 0x50,ppppppplVar37);
        if ((longlong)(int)uStack_140 != 0) {
          lVar44 = (longlong)(int)uStack_140 << 3;
          ppppppplVar32 = local_148;
          do {
            ppppppplVar37 = ppppppplVar32;
            lVar25 = FUN_1487ec556(param_1,ppppppplVar32);
            if (lVar25 != 0) {
              uVar20 = *(uint *)(lVar25 + 0x10);
              *(uint *)(lVar25 + 0x10) = uVar20 + 1;
              if (*(uint *)(lVar25 + 0x14) < uVar20 + 1) {
                ppppppplVar37 = (longlong *******)(ulonglong)uVar20;
                FUN_1405b572a((longlong *)(lVar25 + 8),ppppppplVar37);
              }
              *(undefined2 *)(*(longlong *)(lVar25 + 8) + (longlong)(int)uVar20 * 2) =
                   *(undefined2 *)(pppppplVar7 + 2);
            }
            ppppppplVar32 = ppppppplVar32 + 1;
            lVar44 = lVar44 + -8;
          } while (lVar44 != 0);
        }
      }
      local_70 = 0;
      if (local_78 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      FUN_14087e9d8(&local_b8);
      ppppppplVar32 = local_198 + 1;
    } while (ppppppplVar32 != local_180);
  }
  iVar43 = local_1bc;
  if (-1 < local_1bc) {
    if (*(int *)((longlong)param_1 + 0x1cc) < local_1bc) {
      FUN_1487f7542(param_1 + 0x38);
    }
    iVar43 = local_1ac;
    if (-1 < local_1ac) {
      local_1d0 = param_1 + 0x3e;
      if (*(int *)((longlong)param_1 + 0x1fc) < local_1ac) {
        FUN_1487f7602(local_1d0);
      }
      if (param_1[5] != 0) {
        FUN_1487ec68a(param_1,0,param_1[5] + 0x180);
      }
      if ((longlong)(int)uStack_e0 != 0) {
        local_1b8 = local_e8 + (int)uStack_e0;
        ppppppplVar37 = local_e8;
        do {
          pppppplVar7 = *ppppppplVar37;
          if (pppppplVar7 == (longlong ******)0x0) {
            local_1d8 = (longlong *******)0x0;
          }
          else {
            local_1d8 = (longlong *******)*pppppplVar7;
          }
          *(undefined4 *)(local_1d8 + 0x4f) = 0;
          local_1d8[0x4e] = (longlong ******)0x0;
          local_1a0 = ppppppplVar37;
          FUN_1487ec68a(param_1,pppppplVar7,local_1d8 + 0x42);
          FUN_1487ecaee(param_1,pppppplVar7,&local_118);
          if (0 < *(short *)((longlong)pppppplVar7 + 0x36)) {
            iVar43 = 0;
            do {
              lVar44 = *(longlong *)
                        (local_128 +
                        ((longlong)iVar43 + (longlong)*(short *)((longlong)pppppplVar7 + 0x34)) * 8)
              ;
              pppppplVar27 = pppppplVar7;
              if (lVar44 != 0) {
                while (pppppplVar27 != (longlong ******)0x0) {
                  uVar6 = *(ushort *)((longlong)pppppplVar27 + 0x14);
                  if (-1 < (short)uVar6) {
                    if ((int)param_1[0x3f] <= (int)(short)uVar6) goto LAB_1487e78b8;
                    plVar23 = (longlong *)((ulonglong)uVar6 * 8 + *local_1d0);
                    goto LAB_1487e764b;
                  }
                  uVar6 = *(ushort *)((longlong)pppppplVar27 + 0x12);
                  if (((short)uVar6 < 0) || ((int)param_1[0x20] <= (int)(short)uVar6)) break;
                  pppppplVar27 = *(longlong *******)(*plVar41 + (ulonglong)uVar6 * 8);
                }
                if ((char)param_1[0x2b] == '\x01') {
                  plVar23 = (longlong *)*local_1d0;
LAB_1487e764b:
                  lVar25 = *plVar23;
                  if (lVar25 != 0) {
                    if ((longlong)*(int *)(lVar44 + 0x18) != 0) {
                      lVar39 = (longlong)*(int *)(lVar44 + 0x18) * 0x68;
                      lVar40 = *(longlong *)(lVar44 + 0x10) + 0x30;
                      do {
                        lVar22 = FUN_1487eceb4(param_1,lVar40 + -0x28,lVar25);
                        if (((lVar22 != 0) &&
                            (*(char *)(lVar22 + 0x20) == *(char *)(lVar40 + -0x20))) &&
                           (*(int *)(lVar22 + 0x90) == 0)) {
                          fVar47 = *(float *)(lVar40 + -0x1c);
                          *(float *)(lVar22 + 0x24) = fVar47;
                          sVar17 = *(short *)(lVar22 + 0x34);
                          if ((longlong)sVar17 < 3) {
                            lVar42 = 0;
                          }
                          else {
                            lVar42 = (longlong)sVar17 + -1;
                            fVar46 = *(float *)(lVar22 + 0x30) - *(float *)(lVar22 + 0x2c);
                            fVar47 = fVar47 - *(float *)(lVar22 + 0x2c);
                            if (fVar46 <= fVar47) {
                              fVar47 = fVar46;
                            }
                            if (fVar47 <= 0.0) {
                              fVar47 = 0.0;
                            }
                            lVar36 = (longlong)(short)(int)(((float)(int)sVar17 * fVar47) / fVar46);
                            if (lVar36 < lVar42) {
                              lVar42 = lVar36;
                            }
                            if (lVar42 < 1) {
                              lVar42 = 0;
                            }
                          }
                          *(short *)(lVar22 + 0x28) = (short)lVar42;
                          *(undefined8 *)(lVar22 + 0x40) = *(undefined8 *)(lVar40 + -0x18);
                          uVar12 = *(undefined4 *)(lVar40 + -0xc);
                          uVar13 = *(undefined4 *)(lVar40 + -8);
                          uVar14 = *(undefined4 *)(lVar40 + -4);
                          *(undefined4 *)(lVar22 + 0x48) = *(undefined4 *)(lVar40 + -0x10);
                          *(undefined4 *)(lVar22 + 0x4c) = uVar12;
                          *(undefined4 *)(lVar22 + 0x50) = uVar13;
                          *(undefined4 *)(lVar22 + 0x54) = uVar14;
                          FUN_144a787a6(lVar22 + 0x58,lVar40);
                          *(undefined8 *)(lVar22 + 0x68) = *(undefined8 *)(lVar40 + 0x10);
                          uVar12 = *(undefined4 *)(lVar40 + 0x1c);
                          uVar13 = *(undefined4 *)(lVar40 + 0x20);
                          uVar14 = *(undefined4 *)(lVar40 + 0x24);
                          *(undefined4 *)(lVar22 + 0x70) = *(undefined4 *)(lVar40 + 0x18);
                          *(undefined4 *)(lVar22 + 0x74) = uVar12;
                          *(undefined4 *)(lVar22 + 0x78) = uVar13;
                          *(undefined4 *)(lVar22 + 0x7c) = uVar14;
                          FUN_144a787a6(lVar22 + 0x80);
                          *(int *)(lVar22 + 0x90) = (int)param_1[0x55];
                          *(longlong ********)(lVar22 + 0x98) = local_1d8;
                        }
                        lVar40 = lVar40 + 0x68;
                        lVar39 = lVar39 + -0x68;
                      } while (lVar39 != 0);
                    }
                    plVar41 = local_190;
                    if ((longlong)*(int *)(lVar44 + 0x28) != 0) {
                      lVar39 = *(longlong *)(lVar44 + 0x20);
                      lVar44 = (longlong)*(int *)(lVar44 + 0x28) * 0x40 + lVar39;
                      do {
                        local_b8 = (longlong *******)(double)*(float *)(lVar39 + 0x10);
                        uStack_b0 = (longlong *******)(double)*(float *)(lVar39 + 0x14);
                        pppppplStack_a8 = (longlong ******)(double)*(float *)(lVar39 + 0x18);
                        local_a0 = (longlong *******)(double)*(float *)(lVar39 + 0x1c);
                        lVar40 = 0x20;
                        do {
                          lVar22 = FUN_1487eceb4(param_1,lVar39 + lVar40,lVar25);
                          if (((lVar22 != 0) && (*(char *)(lVar22 + 0x20) == '\0')) &&
                             (*(int *)(lVar22 + 0x90) == 0)) {
                            dVar4 = *(double *)((longlong)&local_d8 + lVar40);
                            *(float *)(lVar22 + 0x24) = (float)dVar4;
                            sVar17 = *(short *)(lVar22 + 0x34);
                            if ((longlong)sVar17 < 3) {
                              uVar30 = 0;
                            }
                            else {
                              lVar42 = (longlong)sVar17 + -1;
                              fVar46 = *(float *)(lVar22 + 0x30) - *(float *)(lVar22 + 0x2c);
                              fVar47 = (float)dVar4 - *(float *)(lVar22 + 0x2c);
                              if (fVar46 <= fVar47) {
                                fVar47 = fVar46;
                              }
                              if (fVar47 <= 0.0) {
                                fVar47 = 0.0;
                              }
                              lVar36 = (longlong)
                                       (short)(int)(((float)(int)sVar17 * fVar47) / fVar46);
                              if (lVar36 < lVar42) {
                                lVar42 = lVar36;
                              }
                              if (lVar42 < 1) {
                                lVar42 = 0;
                              }
                              uVar30 = (undefined2)lVar42;
                            }
                            *(undefined2 *)(lVar22 + 0x28) = uVar30;
                            *(int *)(lVar22 + 0x90) = (int)param_1[0x55];
                            *(longlong ********)(lVar22 + 0x98) = local_1d8;
                          }
                          lVar40 = lVar40 + 8;
                        } while (lVar40 != 0x40);
                        lVar39 = lVar39 + 0x40;
                      } while (lVar39 != lVar44);
                    }
                  }
                }
              }
LAB_1487e78b8:
              iVar43 = iVar43 + 1;
            } while (iVar43 < *(short *)((longlong)pppppplVar7 + 0x36));
          }
          ppppppplVar37 = local_1a0 + 1;
        } while (ppppppplVar37 != local_1b8);
      }
      lVar44 = param_1[0x39];
      if ((longlong)(int)lVar44 != 0) {
        lVar25 = param_1[0x38];
        lVar39 = 0;
        do {
          lVar40 = *(longlong *)(lVar25 + lVar39);
          if (((lVar40 != 0) && (*(char *)(lVar40 + 0x20) == '\0')) && (*(int *)(lVar40 + 0x90) < 1)
             ) {
            sVar17 = *(short *)(lVar40 + 0x34);
            if ((longlong)sVar17 < 3) {
LAB_1487e8c64:
              lVar42 = 0;
            }
            else {
              lVar22 = (longlong)sVar17 + -1;
              fVar46 = *(float *)(lVar40 + 0x30) - *(float *)(lVar40 + 0x2c);
              fVar47 = *(float *)(lVar40 + 0x24) - *(float *)(lVar40 + 0x2c);
              if (fVar46 <= fVar47) {
                fVar47 = fVar46;
              }
              if (fVar47 <= 0.0) {
                fVar47 = 0.0;
              }
              lVar42 = (longlong)(short)(int)(((float)(int)sVar17 * fVar47) / fVar46);
              if (lVar22 <= lVar42) {
                lVar42 = lVar22;
              }
              if (lVar42 < 1) goto LAB_1487e8c64;
            }
            *(short *)(lVar40 + 0x28) = (short)lVar42;
          }
          *(undefined4 *)(lVar40 + 0x90) = 0;
          lVar39 = lVar39 + 8;
        } while ((longlong)(int)lVar44 * 8 != lVar39);
      }
      if (param_1[5] != 0) {
        FUN_1487ecfba(param_1,0,param_1[5] + 0x230);
      }
      ppppppplVar37 = local_e8;
      lVar44 = (longlong)(int)uStack_e0;
      if (lVar44 != 0) {
        lVar25 = 0;
        do {
          plVar41 = *(longlong **)((longlong)ppppppplVar37 + lVar25);
          if ((plVar41 != (longlong *)0x0) && (*plVar41 != 0)) {
            FUN_1487ecfba(param_1,plVar41,*plVar41 + 0x220);
          }
          lVar25 = lVar25 + 8;
        } while (lVar44 * 8 != lVar25);
      }
      FUN_1487ed332(param_1);
      ppppppplVar37 = (longlong *******)(param_1 + 0x21);
      pppppplVar7 = (longlong ******)(param_1 + 0x23);
      local_178 = (longlong *******)0x100000000;
      local_168._0_4_ = 0xffffffff;
      local_168._4_4_ = 0;
      uStack_160 = uStack_160 & 0xffffffff00000000;
      uStack_170 = pppppplVar7;
      if ((int)param_1[0x26] == 0) {
        iVar43 = 0;
      }
      else {
        FUN_1449c0562(&local_178);
        iVar43 = (int)param_1[0x26];
      }
      local_a0._0_4_ = (uint)local_168;
      local_a0._4_4_ = local_168._4_4_;
      uStack_98 = uStack_160;
      uStack_b0 = local_178;
      pppppplStack_a8 = uStack_170;
      local_b8 = ppppppplVar37;
      if ((local_168._4_4_ != iVar43) || (uStack_170 != pppppplVar7)) {
        do {
          if ((*local_b8)[(longlong)local_a0._4_4_ * 3 + 1] != (longlong *****)0x0) {
            FUN_143cca0f8((*local_b8)[(longlong)local_a0._4_4_ * 3 + 1],&local_e8,&local_108);
          }
          local_a0._0_4_ = (uint)local_a0 & ~uStack_b0._4_4_;
          FUN_1449c0562(&uStack_b0);
        } while (local_b8 != ppppppplVar37 ||
                 (pppppplStack_a8 != pppppplVar7 || local_a0._4_4_ != iVar43));
      }
      local_1a8 = pppppplVar7;
      local_198 = ppppppplVar37;
      if ((longlong)(int)uStack_e0 != 0) {
        local_1d8 = local_e8 + (int)uStack_e0;
        ppppppplVar37 = local_e8;
        do {
          pppppplVar7 = *ppppppplVar37;
          if ((*(short *)((longlong)pppppplVar7 + 0x16) == -3) &&
             (*(undefined2 *)((longlong)pppppplVar7 + 0x16) = 0xffff,
             0 < *(short *)((longlong)pppppplVar7 + 0x2e))) {
            lVar44 = 0;
            puVar24 = (undefined8 *)0x0;
            do {
              lVar25 = *(longlong *)
                        (local_108 + (*(short *)((longlong)pppppplVar7 + 0x2c) + lVar44) * 8);
              if (lVar25 != 0) {
                if (puVar24 == (undefined8 *)0x0) {
                  puVar24 = (undefined8 *)FUN_14001cc68(0x48,0x10);
                  *puVar24 = 0;
                  puVar24[1] = 0;
                  *(undefined2 *)puVar24 = 0xffff;
                  puVar24[1] = &DAT_14a171d50;
                  puVar24[2] = 0;
                  puVar24[3] = 0;
                  puVar24[4] = 0;
                  puVar24[5] = &DAT_14a171d50;
                  puVar24[6] = 0;
                  puVar24[7] = 0;
                  puVar24[8] = 0;
                  FUN_140115bdc(puVar24 + 1,lVar25 + 0x10);
                  FUN_140115bdc(puVar24 + 5);
                  lVar25 = param_1[0x3d];
                  *(short *)puVar24 = (short)lVar25;
                  *(short *)((longlong)pppppplVar7 + 0x16) = (short)lVar25;
                  lVar25 = param_1[0x3d];
                  uVar20 = (int)lVar25 + 1;
                  *(uint *)(param_1 + 0x3d) = uVar20;
                  if (*(uint *)((longlong)param_1 + 0x1ec) < uVar20) {
                    FUN_1487f944c(param_1 + 0x3c);
                  }
                  *(undefined8 **)(param_1[0x3c] + (longlong)(int)lVar25 * 8) = puVar24;
                }
                else {
                  FUN_1405dc634(puVar24 + 1,lVar25 + 0x10);
                  FUN_1405dc634(puVar24 + 5);
                }
              }
              lVar44 = lVar44 + 1;
            } while ((int)lVar44 < (int)*(short *)((longlong)pppppplVar7 + 0x2e));
          }
          ppppppplVar37 = ppppppplVar37 + 1;
        } while (ppppppplVar37 != local_1d8);
      }
      if ((longlong)(int)param_1[0x20] == 0) {
        iVar43 = 0;
      }
      else {
        lVar44 = 0;
        iVar43 = 0;
        do {
          plVar41 = *(longlong **)(param_1[0x1f] + lVar44);
          if ((((plVar41 != (longlong *)0x0) && (*plVar41 != 0)) &&
              (*(char *)(*plVar41 + 0x328) == '\x01')) && (0 < *(short *)((longlong)plVar41 + 0x1c))
             ) {
            iVar43 = iVar43 + *(short *)((longlong)plVar41 + 0x26);
          }
          lVar44 = lVar44 + 8;
        } while ((longlong)(int)param_1[0x20] * 8 != lVar44);
        if (iVar43 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar43);
        }
      }
      plVar41 = param_1 + 0x2e;
      if (*(int *)((longlong)param_1 + 0x17c) < iVar43) {
        FUN_1487f5fba(plVar41);
      }
      local_1d8 = (longlong *******)(param_1 + 0x30);
      if (*(int *)((longlong)param_1 + 0x18c) < iVar43) {
        FUN_1487f7452(local_1d8);
      }
      if ((longlong)(int)uStack_e0 != 0) {
        local_1b8 = local_e8 + (int)uStack_e0;
        ppppppplVar37 = local_e8;
        do {
          pppppplVar7 = *ppppppplVar37;
          local_1a0 = ppppppplVar37;
          if ((0 < *(short *)((longlong)pppppplVar7 + 0x1c)) &&
             (0 < *(short *)((longlong)pppppplVar7 + 0x26))) {
            if ((*pppppplVar7 == (longlong *****)0x0) || (DAT_14cb73f40 == 0)) {
              sVar17 = *(short *)((longlong)pppppplVar7 + 0x24);
              *(short *)((longlong)pppppplVar7 + 0x24) = (short)param_1[0x2f];
              local_1d0 = (longlong *)0x0;
            }
            else {
              local_1d0 = (longlong *)FUN_1487fdf06();
              sVar17 = *(short *)((longlong)pppppplVar7 + 0x24);
              *(short *)((longlong)pppppplVar7 + 0x24) = (short)param_1[0x2f];
              if (*(short *)((longlong)pppppplVar7 + 0x26) < 1) goto LAB_1487e7de6;
            }
            lVar44 = 0;
            do {
              lVar25 = (longlong)*(short *)(local_f8 + (longlong)sVar17 * 2 + lVar44 * 2) * 0x10;
              plVar23 = *(longlong **)(*local_1c8 + lVar25);
              plVar8 = *(longlong **)(*local_1c8 + 8 + lVar25);
              if (plVar8 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
                UNLOCK();
              }
              lVar25 = param_1[0x2f];
              uVar20 = (int)lVar25 + 1;
              *(uint *)(param_1 + 0x2f) = uVar20;
              if (*(uint *)((longlong)param_1 + 0x17c) < uVar20) {
                FUN_1487f601a(plVar41);
              }
              lVar39 = (longlong)(int)lVar25 * 0x10;
              lVar25 = *plVar41;
              *(longlong **)(lVar25 + lVar39) = plVar23;
              *(longlong **)(lVar25 + 8 + lVar39) = plVar8;
              if (plVar8 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
                UNLOCK();
              }
              if ((plVar23 == (longlong *)0x0) ||
                 (ppppplVar26 = (longlong *****)(**(code **)(*plVar23 + 0x20))(plVar23),
                 ppppplVar26 == (longlong *****)0x0)) {
                ppppplVar26 = (longlong *****)0x0;
              }
              else {
                ppppplVar26[1] = (longlong ****)plVar23[1];
                *(short *)(ppppplVar26 + 2) = (short)param_1[0x31];
                *(undefined2 *)((longlong)ppppplVar26 + 0x12) = *(undefined2 *)(pppppplVar7 + 2);
                *(short *)((longlong)ppppplVar26 + 0x14) = (short)local_1d0[10];
                (*(code *)(*ppppplVar26)[2])(ppppplVar26,plVar23,local_188);
              }
              lVar25 = param_1[0x31];
              uVar20 = (int)lVar25 + 1;
              *(uint *)(param_1 + 0x31) = uVar20;
              if (*(uint *)((longlong)param_1 + 0x18c) < uVar20) {
                FUN_1487f94d2(local_1d8);
              }
              (*local_1d8)[(int)lVar25] = ppppplVar26;
              if (plVar8 != (longlong *)0x0) {
                LOCK();
                plVar23 = plVar8 + 1;
                *(int *)plVar23 = (int)*plVar23 + -1;
                UNLOCK();
                if ((int)*plVar23 == 0) {
                  (**(code **)*plVar8)(plVar8);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar8 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar8 + 0x10))(plVar8);
                  }
                }
              }
              lVar44 = lVar44 + 1;
            } while (lVar44 < *(short *)((longlong)pppppplVar7 + 0x26));
          }
LAB_1487e7de6:
          ppppppplVar37 = local_1a0 + 1;
        } while (ppppppplVar37 != local_1b8);
      }
      pppppplVar7 = local_1a8;
      local_178 = (longlong *******)&DAT_100000000;
      uStack_170 = local_1a8;
      local_168 = (longlong *******)&DAT_ffffffff;
      uStack_160 = uStack_160 & 0xffffffff00000000;
      if ((int)param_1[0x26] == 0) {
        iVar43 = 0;
      }
      else {
        FUN_1449c0562(&local_178);
        iVar43 = (int)param_1[0x26];
      }
      plVar41 = local_190;
      ppppppplVar37 = local_198;
      local_a0 = local_168;
      ppppppplVar32 = local_a0;
      uStack_98 = uStack_160;
      uStack_b0 = local_178;
      pppppplStack_a8 = uStack_170;
      local_b8 = local_198;
      local_a0._4_4_ = (int)((ulonglong)local_168 >> 0x20);
      if ((local_a0._4_4_ != iVar43) || (uStack_170 != pppppplVar7)) {
        iVar21 = local_a0._4_4_;
        local_a0 = ppppppplVar32;
        do {
          ppppplVar26 = (*local_b8)[(longlong)iVar21 * 3 + 1];
          if (ppppplVar26 != (longlong *****)0x0) {
            FUN_1487ed68e(ppppplVar26,plVar41);
            FUN_143cc9788(ppppplVar26,plVar41,param_1 + 0x3c,local_1d8);
          }
          local_a0 = (longlong *******)CONCAT44(local_a0._4_4_,(uint)local_a0 & ~uStack_b0._4_4_);
          FUN_1449c0562(&uStack_b0);
          iVar21 = local_a0._4_4_;
          ppppppplVar32 = local_a0;
        } while (local_b8 != ppppppplVar37 ||
                 (pppppplStack_a8 != pppppplVar7 || local_a0._4_4_ != iVar43));
      }
      local_a0 = ppppppplVar32;
      lVar44 = param_1[0x31];
      if ((longlong)(int)lVar44 != 0) {
        lVar25 = param_1[0x30];
        lVar39 = 0;
        do {
          FUN_1487ed760(param_1,*(undefined8 *)(lVar25 + lVar39),&local_138);
          lVar39 = lVar39 + 8;
        } while ((longlong)(int)lVar44 * 8 != lVar39);
      }
      lVar44 = param_1[0x20];
      if ((longlong)(int)lVar44 != 0) {
        lVar25 = param_1[0x1f];
        lVar39 = 0;
        do {
          if (((*(longlong **)(lVar25 + lVar39) != (longlong *)0x0) &&
              (lVar40 = **(longlong **)(lVar25 + lVar39), lVar40 != 0)) &&
             (*(char *)(lVar40 + 0x328) == '\x01')) {
            *(undefined4 *)(lVar40 + 0x278) = 0;
            *(undefined8 *)(lVar40 + 0x270) = 0;
          }
          lVar39 = lVar39 + 8;
        } while ((longlong)(int)lVar44 * 8 != lVar39);
      }
      uVar20 = (**(code **)(*param_1 + 0x78))(param_1);
      uVar38 = (ulonglong)uVar20;
      if ((char)uVar20 == '\0') {
        FUN_1487e6ab2(param_1);
        FUN_1487e6634(param_1);
        FUN_140595ef6(param_1[0x5d],(int)param_1[0x5e]);
        *(undefined4 *)(param_1 + 0x5e) = 0;
        if (*(int *)((longlong)param_1 + 0x2f4) != 0) {
          FUN_1487f9026(local_188);
        }
      }
      else {
        (**(code **)(*param_1 + 0x80))(param_1);
        *(undefined1 *)(param_1 + 0x18) = 4;
      }
      if (local_148 != (longlong *******)0x0) {
        FUN_1400020a8();
      }
      if (local_138 != 0) {
        FUN_1400020a8();
      }
      if (local_128 != 0) {
        FUN_1400020a8();
      }
      if (local_118 != 0) {
        FUN_1400020a8();
      }
      if (local_108 != 0) {
        FUN_1400020a8();
      }
      if (local_f8 != 0) {
        FUN_1400020a8();
      }
      if (local_e8 != (longlong *******)0x0) {
        FUN_1400020a8();
      }
LAB_1487e7022:
      if ((local_60 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return uVar38 & 0xffffffff;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar43);
}



// FUNCTION 1487e8ea8 FUN_1487e8ea8 body=143 status=ok
// SIG undefined FUN_1487e8ea8(void)

ulonglong FUN_1487e8ea8(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined *puVar3;
  char cVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar1 = *(longlong *)(param_1 + 0xb0);
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((lVar1 != 0) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) {
    puVar3 = *(undefined **)(param_1 + 0x28);
    if (puVar3 == (undefined *)0x0) {
      cVar4 = *(char *)(lVar2 + 0x29);
joined_r0x0001487e8f10:
      if (cVar4 == '\0') {
        *(undefined1 *)(lVar1 + 0x18) = 1;
        uVar5 = 0;
      }
    }
    else if (((puVar3 != &DAT_14cb73968) && (*(longlong *)(lVar2 + 0x10) != 0)) &&
            ((longlong)*(int *)(lVar2 + 0x20) != 0)) {
      lVar6 = (longlong)*(int *)(lVar2 + 0x20) * 8;
      lVar7 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar2 + 0x18) + lVar7) != 0) {
          cVar4 = FUN_140d1d704(puVar3 + 0xf0,lVar2 + 8,
                                CONCAT71((int7)((ulonglong)lVar6 >> 8),*(undefined1 *)(lVar2 + 0x28)
                                        ));
          goto joined_r0x0001487e8f10;
        }
        lVar7 = lVar7 + 8;
      } while (lVar6 != lVar7);
    }
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 1487e8f38 FUN_1487e8f38 body=215 status=ok
// SIG undefined FUN_1487e8f38(void)

void FUN_1487e8f38(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  
  iVar3 = (int)param_1[1];
  if (0 < iVar3) {
    lVar6 = 0;
    bVar5 = false;
    do {
      while( true ) {
        lVar1 = *param_1;
        lVar2 = *param_2;
        if ((lVar2 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar2);
          iVar3 = (int)param_1[1];
        }
        if (*(longlong *)(lVar1 + lVar6 * 8) != lVar2) break;
        iVar4 = iVar3 + ~(uint)lVar6;
        if (iVar4 != 0) {
          if (0 < iVar4) {
            iVar4 = 1;
          }
          memmove((void *)(*param_1 + lVar6 * 8),(void *)(*param_1 + (longlong)(iVar3 - iVar4) * 8),
                  (longlong)iVar4 << 3);
          iVar3 = (int)param_1[1];
        }
        iVar3 = iVar3 + -1;
        *(int *)(param_1 + 1) = iVar3;
        bVar5 = true;
        if (iVar3 <= lVar6) goto LAB_1487e8ff7;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar3);
    if (bVar5) {
LAB_1487e8ff7:
      FUN_1472d8e80(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1487e9010 FUN_1487e9010 body=74 status=ok
// SIG undefined FUN_1487e9010(void)

void FUN_1487e9010(longlong param_1)

{
  FUN_1487f46ae(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
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



// FUNCTION 1487e905a FUN_1487e905a body=134 status=ok
// SIG undefined FUN_1487e905a(void)

void FUN_1487e905a(longlong param_1)

{
  *(undefined2 **)(param_1 + 0x28) = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    FUN_140115c12(param_1 + 0x38,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  *(undefined2 **)(param_1 + 8) = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_140115c12(param_1 + 0x18,0);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1487e90e0 FUN_1487e90e0 body=67 status=ok
// SIG undefined FUN_1487e90e0(void)

void FUN_1487e90e0(longlong param_1)

{
  FUN_1487efac4();
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1487e9124 FUN_1487e9124 body=1678 status=ok
// SIG undefined FUN_1487e9124(void)

void FUN_1487e9124(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *(longlong *)(param_1 + 0x28) = param_2;
  if (param_2 == 0) goto LAB_1487e9157;
  cVar4 = FUN_1487ea4aa(param_1,param_2 + 0x240);
  if (cVar4 == '\0') {
    *(undefined8 *)(param_1 + 0x28) = 0;
    goto LAB_1487e9157;
  }
  lVar11 = *(longlong *)(param_1 + 0x28);
  plVar9 = (longlong *)(lVar11 + 0xa0);
  lVar1 = lVar11 + 0xb0;
  local_80 = 0x100000000;
  local_70._0_4_ = 0xffffffff;
  local_70._4_4_ = 0;
  local_68 = 0;
  iVar10 = 0;
  local_78 = lVar1;
  if (*(int *)(lVar11 + 200) != 0) {
    FUN_1449c0562(&local_80);
    iVar10 = *(int *)(lVar11 + 200);
  }
  local_90._0_4_ = (uint)local_70;
  local_90._4_4_ = local_70._4_4_;
  local_88 = local_68;
  local_84 = local_64;
  local_a0 = local_80;
  local_98 = local_78;
  local_a8 = plVar9;
  if ((local_70._4_4_ != iVar10) || (local_78 != lVar1)) {
    local_b0 = (longlong *)(param_1 + 0x80);
    do {
      plVar2 = (longlong *)(*local_a8 + (longlong)local_90._4_4_ * 0x20);
      lVar11 = *(longlong *)(*local_a8 + 8 + (longlong)local_90._4_4_ * 0x20);
      if (lVar11 == 0) {
        uVar6 = FUN_1464af43e();
        lVar11 = FUN_14477b664(uVar6);
        plVar2[1] = lVar11;
      }
      lVar8 = plVar2[2];
      if (lVar8 == 0) {
        if ((lVar11 != 0) && (*plVar2 != 0)) {
          plVar3 = *(longlong **)(lVar11 + 0xb8);
          if ((plVar3 == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
            plVar2[2] = 0;
          }
          else {
            uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
            lVar8 = FUN_144aff482(uVar6,plVar2);
            plVar2[2] = lVar8;
            if (lVar8 != 0) goto LAB_1487e942d;
          }
        }
      }
      else {
LAB_1487e942d:
        if ((DAT_14cb73f40 != 0) && (lVar11 = FUN_1487fdf06(DAT_14cb73f40,lVar8), lVar11 != 0)) {
          puVar7 = (undefined8 *)FUN_14001cc68(0x58,0x10);
          puVar7[6] = 0;
          puVar7[7] = 0;
          *puVar7 = 0;
          puVar7[1] = 0;
          puVar7[2] = 0;
          puVar7[3] = 0;
          puVar7[4] = 0;
          puVar7[5] = 0;
          *(undefined4 *)(puVar7 + 6) = 0xffffffff;
          puVar7[9] = 0;
          puVar7[10] = 0;
          puVar7[7] = 0;
          puVar7[8] = 0;
          *(undefined4 *)puVar7 = *(undefined4 *)(param_1 + 0x88);
          puVar7[1] = lVar11;
          puVar7[2] = lVar8;
          uVar6 = FUN_144a7ff8c(lVar11 + 8);
          FUN_141710b0e(uVar6,&local_80,1);
          if (puVar7[3] != 0) {
            FUN_1400020a8();
          }
          puVar7[3] = local_80;
          local_80 = 0;
          *(undefined4 *)(puVar7 + 4) = (undefined4)local_78;
          *(undefined4 *)((longlong)puVar7 + 0x24) = local_78._4_4_;
          *(undefined4 *)(puVar7 + 5) = *(undefined4 *)(lVar11 + 0x44);
          iVar5 = *(int *)(param_1 + 0x88);
          *(uint *)(param_1 + 0x88) = iVar5 + 1U;
          if (*(uint *)(param_1 + 0x8c) < iVar5 + 1U) {
            FUN_1487f7b06(local_b0,iVar5);
          }
          *(undefined8 **)(*local_b0 + (longlong)iVar5 * 8) = puVar7;
        }
      }
      local_90._0_4_ = (uint)local_90 & ~local_a0._4_4_;
      FUN_1449c0562(&local_a0);
    } while (local_a8 != plVar9 || (local_98 != lVar1 || local_90._4_4_ != iVar10));
  }
  FUN_1487f7b8b(*(undefined8 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x88));
  lVar11 = *(longlong *)(param_1 + 0x28);
  plVar9 = (longlong *)(lVar11 + 0x38);
  lVar1 = lVar11 + 0x48;
  local_80 = 0x100000000;
  local_70 = 0xffffffff;
  local_68 = 0;
  iVar10 = 0;
  local_78 = lVar1;
  if (*(int *)(lVar11 + 0x60) != 0) {
    FUN_1449c0562(&local_80);
    iVar10 = *(int *)(lVar11 + 0x60);
  }
  local_90 = local_70;
  uVar6 = local_90;
  local_88 = local_68;
  local_84 = local_64;
  local_a0 = local_80;
  local_98 = local_78;
  local_90._4_4_ = (int)((ulonglong)local_70 >> 0x20);
  local_a8 = plVar9;
  if ((local_90._4_4_ != iVar10) || (local_78 != lVar1)) {
    iVar5 = local_90._4_4_;
    local_90 = uVar6;
    do {
      plVar2 = (longlong *)(*local_a8 + (longlong)iVar5 * 0x20);
      lVar11 = *(longlong *)(*local_a8 + 8 + (longlong)iVar5 * 0x20);
      if (lVar11 == 0) {
        uVar6 = FUN_145d6407a();
        lVar11 = FUN_14477b664(uVar6);
        plVar2[1] = lVar11;
      }
      lVar8 = plVar2[2];
      if (lVar8 == 0) {
        if ((lVar11 != 0) && (*plVar2 != 0)) {
          plVar3 = *(longlong **)(lVar11 + 0xb8);
          if ((plVar3 == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
            plVar2[2] = 0;
          }
          else {
            uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
            lVar8 = FUN_144aff482(uVar6,plVar2);
            plVar2[2] = lVar8;
            if (lVar8 != 0) goto LAB_1487e9607;
          }
        }
      }
      else {
LAB_1487e9607:
        iVar5 = *(int *)(param_1 + 0xd0);
        *(uint *)(param_1 + 0xd0) = iVar5 + 1U;
        if (*(uint *)(param_1 + 0xd4) < iVar5 + 1U) {
          FUN_1487f834a((longlong *)(param_1 + 200),iVar5);
        }
        *(longlong *)(*(longlong *)(param_1 + 200) + (longlong)iVar5 * 8) = lVar8;
      }
      local_90 = CONCAT44(local_90._4_4_,(uint)local_90 & ~local_a0._4_4_);
      FUN_1449c0562(&local_a0);
      iVar5 = local_90._4_4_;
      uVar6 = local_90;
    } while (local_a8 != plVar9 || (local_98 != lVar1 || local_90._4_4_ != iVar10));
  }
  local_90 = uVar6;
  FUN_1487f83cf(*(undefined8 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xd0));
  iVar10 = *(int *)(param_1 + 0xd0);
  if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar10);
  }
  plVar9 = (longlong *)(param_1 + 0xd8);
  *(undefined4 *)(param_1 + 0xe0) = 0;
  if (*(int *)(param_1 + 0xe4) != iVar10) {
    FUN_1402191ca(plVar9);
    iVar10 = *(int *)(param_1 + 0xd0);
  }
  if (iVar10 != 0) {
    lVar1 = *(longlong *)(param_1 + 200);
    lVar11 = 0;
    do {
      uVar6 = FUN_144a7ff8c(*(longlong *)(lVar1 + lVar11) + 8);
      FUN_1447325ac(uVar6,&local_a8,1);
      iVar5 = *(int *)(param_1 + 0xe0);
      *(uint *)(param_1 + 0xe0) = iVar5 + 1U;
      if (*(uint *)(param_1 + 0xe4) < iVar5 + 1U) {
        FUN_1446f84a2(plVar9,iVar5);
      }
      *(longlong **)(*plVar9 + (longlong)iVar5 * 8) = local_a8;
      lVar11 = lVar11 + 8;
    } while ((longlong)iVar10 * 8 != lVar11);
  }
  lVar1 = *(longlong *)(param_1 + 0x28);
  lVar11 = *(longlong *)(lVar1 + 0x90);
  if (lVar11 == 0) {
    uVar6 = FUN_145d6407a();
    lVar11 = FUN_14477b664(uVar6);
    *(longlong *)(lVar1 + 0x90) = lVar11;
  }
  lVar8 = *(longlong *)(lVar1 + 0x98);
  if (lVar8 == 0) {
    if ((*(longlong *)(lVar1 + 0x88) == 0) || (lVar11 == 0)) {
      *(undefined8 *)(param_1 + 0xe8) = 0;
    }
    else {
      plVar9 = *(longlong **)(lVar11 + 0xb8);
      if ((plVar9 == (longlong *)0x0) ||
         (cVar4 = (**(code **)(*plVar9 + 0x108))(plVar9), cVar4 == '\0')) {
        plVar9 = (longlong *)0x0;
        *(undefined8 *)(lVar1 + 0x98) = 0;
        *(undefined8 *)(param_1 + 0xe8) = 0;
        goto LAB_1487e93e6;
      }
      uVar6 = (**(code **)(*plVar9 + 0x110))(plVar9);
      lVar8 = FUN_144aff482(uVar6,(longlong *)(lVar1 + 0x88));
      *(longlong *)(lVar1 + 0x98) = lVar8;
      *(longlong *)(param_1 + 0xe8) = lVar8;
      if (lVar8 != 0) goto LAB_1487e93c7;
    }
    plVar9 = (longlong *)0x0;
  }
  else {
    *(longlong *)(param_1 + 0xe8) = lVar8;
LAB_1487e93c7:
    uVar6 = FUN_144a7ff8c(lVar8 + 8);
    FUN_1447325ac(uVar6,&local_a8,1);
    plVar9 = local_a8;
  }
LAB_1487e93e6:
  *(longlong **)(param_1 + 0xf0) = plVar9;
LAB_1487e9157:
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487e97b4 FUN_1487e97b4 body=281 status=ok
// SIG undefined FUN_1487e97b4(void)

void FUN_1487e97b4(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1487fb0e8();
  if ((param_3 != (longlong *)0x0) && ((longlong)(int)param_2[1] != 0)) {
    plVar4 = (longlong *)*param_2;
    plVar1 = plVar4 + (int)param_2[1];
    do {
      lVar2 = *plVar4;
      if ((((-1 < *(short *)(lVar2 + 0xc)) || (*(longlong *)(lVar2 + 4) != 0)) &&
          ((*(longlong *)(lVar2 + 0x20) != 0 || (-1 < *(short *)(lVar2 + 0x30))))) &&
         ((longlong)(int)param_3[1] != 0)) {
        lVar3 = 0;
        do {
          if (*(longlong *)(*param_3 + 8 + lVar3) == *(longlong *)(lVar2 + 4)) {
            if (-1 < *(short *)(*param_3 + 0x26 + lVar3)) {
              local_48 = lVar2 + 4;
              FUN_1487fb368(param_1,&local_3c,&local_48);
              lVar2 = *param_1;
              *(undefined8 *)(lVar2 + 8 + (longlong)local_3c * 0x1c) = *(undefined8 *)(*plVar4 + 4);
              *(undefined2 *)(lVar2 + 0x10 + (longlong)local_3c * 0x1c) =
                   *(undefined2 *)(*plVar4 + 0x30);
            }
            break;
          }
          lVar3 = lVar3 + 0x80;
        } while ((longlong)(int)param_3[1] * 0x80 != lVar3);
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar1);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487e98ce FUN_1487e98ce body=1072 status=ok
// SIG undefined FUN_1487e98ce(void)

void FUN_1487e98ce(longlong param_1,longlong param_2,undefined8 param_3,char param_4,char param_5,
                  char param_6)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  longlong *plVar6;
  char cVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((param_2 != 0) && (*(longlong *)(param_1 + 0x28) != 0)) &&
     (cVar7 = FUN_1487e5564(), cVar7 != '\0')) {
    uVar9 = FUN_14479d2ce(param_1 + 0xb8);
    cVar7 = FUN_1487e4c6c(param_2,uVar9);
    if (((cVar7 != '\0') && (DAT_14cb73f40 != 0)) &&
       (lVar10 = FUN_1487fdf06(DAT_14cb73f40,param_2), lVar10 != 0)) {
      iVar1 = *(int *)(param_1 + 0x88);
      if (0 < (longlong)iVar1) {
        lVar13 = 0;
        do {
          lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x80) + lVar13 * 8);
          if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) == lVar10)) {
            if (((int)lVar13 < iVar1) &&
               (local_70 = *(longlong *)(*(longlong *)(param_1 + 0x80) + lVar13 * 8), local_70 != 0)
               ) {
              local_60 = (longlong *)(local_70 + 0x38);
              uVar15 = (longlong)*(int *)(local_70 + 0x40);
              if (0 < (longlong)*(int *)(local_70 + 0x40)) {
                do {
                  plVar3 = *(longlong **)(*local_60 + -8 + uVar15 * 8);
                  if ((plVar3 != (longlong *)0x0) && (*plVar3 == param_2)) {
                    FUN_1487ea5e0(local_70,(int)uVar15 + -1);
                  }
                  bVar5 = 1 < uVar15;
                  uVar15 = uVar15 - 1;
                } while (bVar5);
              }
              iVar1 = *(int *)(local_70 + 0x50);
              if ((longlong)iVar1 < 1) {
LAB_1487e9ac2:
                local_68 = (longlong *)FUN_14001cc68(0x70,0x10);
                local_68[6] = 0;
                local_68[7] = 0;
                local_68[10] = 0;
                local_68[0xb] = 0;
                *local_68 = 0;
                local_68[1] = 0;
                local_68[2] = 0;
                local_68[3] = 0;
                local_68[4] = 0;
                local_68[5] = 0;
                local_68[8] = 0;
                local_68[9] = 0;
                *(undefined8 *)((longlong)local_68 + 0x34) = 0xffffffff00000080;
                *(undefined1 *)(local_68 + 0xb) = 0;
                local_68[0xc] = 0;
                local_68[0xd] = 0;
                FUN_1487ea666(local_68,param_2);
              }
              else {
                plVar3 = (longlong *)(local_70 + 0x48);
                iVar14 = -iVar1;
                local_68 = (longlong *)0x0;
                uVar15 = (longlong)iVar1;
                do {
                  lVar10 = *plVar3;
                  plVar4 = *(longlong **)(lVar10 + -8 + uVar15 * 8);
                  if ((plVar4 != (longlong *)0x0) && (*plVar4 == param_2)) {
                    *(undefined8 *)(lVar10 + -8 + uVar15 * 8) = 0;
                    uVar8 = *(uint *)(local_70 + 0x50);
                    if (uVar15 != uVar8) {
                      memmove((void *)(*(longlong *)(local_70 + 0x48) + uVar15 * 8 + -8),
                              (void *)(*(longlong *)(local_70 + 0x48) + uVar15 * 8),
                              (longlong)(int)(uVar8 + iVar14) << 3);
                      uVar8 = *(uint *)(local_70 + 0x50);
                    }
                    *(uint *)(local_70 + 0x50) = uVar8 - 1;
                    FUN_1487f8774(plVar3);
                    *(undefined1 *)(plVar4 + 0xb) = 0;
                    *(undefined1 *)((longlong)plVar4 + 0x5a) = 1;
                    local_68 = plVar4;
                  }
                  iVar14 = iVar14 + 1;
                  bVar5 = 1 < uVar15;
                  uVar15 = uVar15 - 1;
                } while (bVar5);
                if (local_68 == (longlong *)0x0) goto LAB_1487e9ac2;
              }
              if ((param_6 != '\0') && (*(int *)(param_2 + 0x318) != 0)) {
                local_58 = 0;
                uStack_50 = 0;
                if (0 < (longlong)*(int *)(local_70 + 0x40)) {
                  lVar10 = (longlong)*(int *)(local_70 + 0x40);
                  do {
                    plVar3 = *(longlong **)(*local_60 + -8 + lVar10 * 8);
                    if (plVar3 == (longlong *)0x0) {
                      lVar13 = 0;
                    }
                    else {
                      lVar13 = *plVar3;
                    }
                    do {
                      if ((lVar13 == 0) || (*(int *)(lVar13 + 0x32c) <= *(int *)(param_2 + 0x32c)))
                      goto LAB_1487e9bb0;
                      lVar13 = FUN_1487e3eb4(lVar13);
                      uVar15 = uStack_50;
                    } while (lVar13 != param_2);
                    lVar13 = (longlong)(int)uStack_50;
                    uVar8 = (int)uStack_50 + 1;
                    uStack_50 = CONCAT44(uStack_50._4_4_,uVar8);
                    if (uStack_50._4_4_ < uVar8) {
                      FUN_1446f48e2(&local_58,uVar15 & 0xffffffff);
                    }
                    *(int *)(local_58 + lVar13 * 4) = (int)(lVar10 + -1);
LAB_1487e9bb0:
                    bVar5 = 1 < lVar10;
                    lVar10 = lVar10 + -1;
                  } while (bVar5);
                  if (0 < (longlong)(int)uStack_50) {
                    uVar15 = (longlong)(int)uStack_50 + 1;
                    do {
                      FUN_1487ea5e0(local_70,*(undefined4 *)(local_58 + -8 + uVar15 * 4));
                      uVar15 = uVar15 - 1;
                    } while (1 < uVar15);
                  }
                  if (local_58 != 0) {
                    FUN_1400020a8();
                  }
                }
              }
              plVar4 = local_68;
              plVar3 = local_68 + 1;
              *(undefined4 *)(local_68 + 10) = 0;
              if (local_68[9] != 0) {
                FUN_1400020a8();
              }
              FUN_1487f4678(plVar3);
              plVar6 = local_68;
              local_68[5] = 0;
              *(undefined4 *)(local_68 + 6) = 0;
              *plVar3 = 0;
              plVar4[2] = 0;
              *(undefined8 *)((longlong)local_68 + 0x34) = 0xffffffff00000080;
              *(undefined4 *)((longlong)local_68 + 0x3c) = 0;
              local_68[9] = 0;
              *(undefined4 *)(local_68 + 10) = 0;
              FUN_14861f2f8(plVar3,param_3);
              FUN_1487ea73e(plVar3,*plVar6 + 0x210);
              uVar8 = *(uint *)(local_70 + 0x40);
              uVar12 = uVar8 + 1;
              *(uint *)(local_70 + 0x40) = uVar12;
              if (param_4 == '\0') {
                if (*(uint *)(local_70 + 0x44) < uVar12) {
                  FUN_1487f8810(local_60,uVar8);
                }
                puVar11 = (undefined8 *)((longlong)(int)uVar8 * 8 + *local_60);
              }
              else {
                if (*(uint *)(local_70 + 0x44) < uVar12) {
                  FUN_1487f8810(local_60,(ulonglong)uVar8);
                }
                plVar3 = local_60;
                memmove((void *)(*local_60 + 8),(void *)*local_60,(ulonglong)uVar8 << 3);
                puVar11 = (undefined8 *)*plVar3;
              }
              *puVar11 = local_68;
              *(undefined4 *)(local_70 + 0x30) = 0xffffffff;
              FUN_1487eaa20(param_1);
              if (param_5 != '\0') {
                FUN_143cc816c(param_1);
              }
            }
            break;
          }
          lVar13 = lVar13 + 1;
        } while (iVar1 != lVar13);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487e9d00 FUN_1487e9d00 body=986 status=ok
// SIG undefined FUN_1487e9d00(void)

ulonglong FUN_1487e9d00(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  char cVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 auStack_f8 [39];
  char local_d1;
  longlong *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined *local_b8;
  undefined1 local_b0 [24];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 local_78 [24];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar8 = (longlong *)FUN_14001cc68(0x120,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14b3e6280;
  FUN_140be3cb8(plVar8 + 2,&DAT_14cb738f8);
  if (plVar8 == (longlong *)0x0) {
    param_1[2] = 0x10;
    plVar10 = (longlong *)param_1[3];
    if (plVar10 == (longlong *)0x0) goto LAB_1487e9dd3;
    param_1[3] = 0;
LAB_1487e9d94:
    LOCK();
    plVar1 = plVar10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
    if (plVar8 == (longlong *)0x0) goto LAB_1487e9dd3;
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    param_1[2] = (longlong)(plVar8 + 2);
    plVar10 = (longlong *)param_1[3];
    if (plVar8 == plVar10) {
      LOCK();
      plVar10 = plVar8 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
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
    else {
      param_1[3] = (longlong)plVar8;
      if (plVar10 != (longlong *)0x0) goto LAB_1487e9d94;
    }
  }
  LOCK();
  plVar10 = plVar8 + 1;
  *(int *)plVar10 = (int)*plVar10 + -1;
  UNLOCK();
  if ((int)*plVar10 == 0) {
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar2 = (int *)((longlong)plVar8 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
LAB_1487e9dd3:
  FUN_143e21aa0(local_78,param_1[2]);
  uVar7 = FUN_143e21ad4(local_78,&DAT_14cb735e0,param_1[5]);
  uVar11 = (ulonglong)uVar7;
  cVar6 = (char)uVar7;
  if (cVar6 != '\0') {
    FUN_1487ea0dc(param_1,0);
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    FUN_1487ea320(param_1 + 6,&local_98,param_1[5] + 0x180);
    FUN_1407e122c(local_78,&local_98,0);
    FUN_143e21abe(local_78,local_b0);
    local_d1 = cVar6;
    if ((char)param_1[0x18] == '\x01') {
      lVar9 = param_1[0x15];
      if ((longlong)(int)lVar9 != 0) {
        lVar4 = param_1[0x14];
        lVar12 = 0;
        do {
          puVar5 = *(undefined8 **)(lVar4 + lVar12);
          if (puVar5 != (undefined8 *)0x0) {
            cVar6 = FUN_143e21ad4(local_b0,&DAT_14cb73e00,*puVar5);
            if (cVar6 != '\0') {
              FUN_1407e122c(local_b0,puVar5 + 1,1);
            }
          }
          lVar12 = lVar12 + 8;
        } while ((longlong)(int)lVar9 * 8 != lVar12);
      }
      if ((param_1[0x13] != 0) && (FUN_143e21ad4(local_78,&DAT_14cb73788), 0 < (short)param_1[0x12])
         ) {
        local_c8 = 0;
        uStack_c0 = 0;
        local_b8 = &DAT_14cb736e0;
        lVar9 = FUN_1418a8a46();
        *(undefined2 *)(lVar9 + 0xc) = 1;
        *(undefined8 *)(lVar9 + 4) = DAT_14cb73780;
        *(short *)(lVar9 + 0x30) = (short)param_1[0x12];
        FUN_1418a8a92(&local_c8,lVar9);
        FUN_1407e122c(local_78,&local_c8,1);
        FUN_1408348da(&local_c8);
      }
    }
    else if ((longlong)(int)param_1[0x11] != 0) {
      plVar8 = (longlong *)param_1[0x10];
      local_d0 = plVar8 + (int)param_1[0x11];
      do {
        lVar9 = *plVar8;
        if ((lVar9 != 0) && (iVar3 = *(int *)(lVar9 + 0x40), (longlong)iVar3 != 0)) {
          uVar11 = *(ulonglong *)(lVar9 + 0x38);
          lVar9 = 0;
          do {
            plVar10 = *(longlong **)(uVar11 + lVar9);
            if (((plVar10 != (longlong *)0x0) && (*(char *)((longlong)plVar10 + 0x5a) == '\x01')) &&
               (cVar6 = FUN_143e21ad4(local_b0,&DAT_14cb73e00,*plVar10), cVar6 != '\0')) {
              FUN_1487ea0dc(param_1,plVar10);
              local_c8 = 0;
              uStack_c0 = 0;
              local_b8 = (undefined *)0x0;
              FUN_1487ea320(plVar10 + 1,&local_c8,*plVar10 + 0x210);
              FUN_1407e122c(local_b0,&local_c8,1);
              FUN_1408348da(&local_c8);
            }
            lVar9 = lVar9 + 8;
          } while ((longlong)iVar3 * 8 != lVar9);
        }
        plVar8 = plVar8 + 1;
      } while (plVar8 != local_d0);
    }
    (**(code **)(*param_1 + 0x50))(param_1);
    FUN_1408348da(&local_98);
    uVar11 = CONCAT71((int7)(uVar11 >> 8),local_d1);
  }
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11 & 0xffffffff;
}



// FUNCTION 1487ea0dc FUN_1487ea0dc body=578 status=ok
// SIG undefined FUN_1487ea0dc(void)

void FUN_1487ea0dc(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(param_1 + 0x1c8) != 0) {
    if (param_2 == (longlong *)0x0) {
      if (*(longlong *)(param_1 + 0x28) == 0) goto LAB_1487ea11b;
      if ((*(char *)(param_1 + 0x158) == '\x01') && (*(int *)(param_1 + 0x1f8) != 0)) {
        lVar4 = **(longlong **)(param_1 + 0x1f0);
      }
      else {
        lVar4 = 0;
      }
      plVar9 = (longlong *)(*(longlong *)(param_1 + 0x28) + 0x180);
      param_2 = (longlong *)(param_1 + 0x30);
    }
    else {
      lVar8 = *param_2;
      if (lVar8 == 0) goto LAB_1487ea11b;
      lVar4 = FUN_1487ebeb0(param_1,lVar8);
      plVar9 = (longlong *)(lVar8 + 0x210);
      param_2 = param_2 + 1;
    }
    if (((param_2 != (longlong *)0x0) &&
        (FUN_1487fb0e8(param_2), plVar9 != (longlong *)0x0 && lVar4 != 0)) &&
       ((longlong)(int)plVar9[1] != 0)) {
      lVar8 = *plVar9;
      lVar10 = (longlong)(int)plVar9[1] * 0x80 + lVar8;
      do {
        lVar2 = *(longlong *)(lVar8 + 8);
        if (((lVar2 != 0) && (-1 < *(short *)(lVar8 + 0x26))) &&
           ((*(char *)(lVar8 + 0x10) == '\0' && (*(int *)(lVar4 + 0x10) != *(int *)(lVar4 + 0x3c))))
           ) {
          uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
          uVar6 = (uint)lVar2 & 0xffff;
          lVar5 = *(longlong *)(lVar4 + 0x48);
          if (*(longlong *)(lVar4 + 0x48) == 0) {
            lVar5 = lVar4 + 0x40;
          }
          iVar7 = *(int *)(lVar5 + (ulonglong)
                                   (*(int *)(lVar4 + 0x50) - 1U &
                                   (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar6) +
                                   (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4)) * 4);
          if (iVar7 != -1) {
            do {
              plVar9 = (longlong *)(*(longlong *)(lVar4 + 8) + (longlong)iVar7 * 0x14);
              if (*plVar9 == lVar2) {
                if ((ushort *)(plVar9 + 1) != (ushort *)0x0 && plVar9 != (longlong *)0x0) {
                  uVar1 = *(ushort *)(plVar9 + 1);
                  if (((-1 < (short)uVar1) && ((int)(short)uVar1 < *(int *)(param_1 + 0x1c8))) &&
                     ((lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)uVar1 * 8),
                      lVar2 != 0 && (*(short *)(lVar2 + 0x28) != *(short *)(lVar8 + 0x18))))) {
                    local_58 = &local_70;
                    local_70 = 0;
                    local_68 = 0xffff;
                    local_60 = (undefined8 *)(lVar8 + 8);
                    FUN_1487fa606(param_2,&local_4c);
                    lVar5 = *param_2;
                    *(undefined8 *)(lVar5 + 8 + (longlong)local_4c * 0x1c) =
                         *(undefined8 *)(lVar8 + 8);
                    *(undefined2 *)(lVar5 + 0x10 + (longlong)local_4c * 0x1c) =
                         *(undefined2 *)(lVar2 + 0x28);
                  }
                }
                break;
              }
              iVar7 = *(int *)((longlong)plVar9 + 0xc);
            } while (iVar7 != -1);
          }
        }
        lVar8 = lVar8 + 0x80;
      } while (lVar8 != lVar10);
    }
  }
LAB_1487ea11b:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487ea320 FUN_1487ea320 body=393 status=ok
// SIG undefined FUN_1487ea320(void)

void FUN_1487ea320(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  short sVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = param_2;
  FUN_140834900(param_2);
  if (param_3 != (longlong *)0x0) {
    plVar1 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    uStack_60 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar7 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar7 = (int)param_1[5];
    }
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    uVar4 = local_78;
    local_88 = (undefined4)local_68;
    uStack_84 = local_68._4_4_;
    uStack_80 = (undefined4)uStack_60;
    uStack_7c = uStack_60._4_4_;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    iVar5 = local_78._4_4_;
    local_90 = param_1;
    if ((local_78._4_4_ != iVar7) || (local_78 = uVar4, uStack_60 != plVar1)) {
      do {
        local_78 = uVar4;
        if ((longlong)(int)param_3[1] != 0) {
          plVar9 = (longlong *)((longlong)iVar5 * 0x1c + *local_90);
          lVar3 = *param_3;
          lVar8 = 0;
          do {
            if (*(longlong *)(lVar3 + 8 + lVar8) == *plVar9) {
              if (-1 < *(short *)(lVar3 + 0x26 + lVar8)) {
                lVar6 = FUN_1418a8a46();
                *(longlong *)(lVar6 + 4) = *plVar9;
                sVar2 = *(short *)(lVar3 + 0x26 + lVar8);
                if (0 < sVar2) {
                  *(short *)(lVar6 + 0xc) = sVar2;
                }
                *(short *)(lVar6 + 0x30) = (short)plVar9[2];
                FUN_1418a8a92(local_98,lVar6);
              }
              break;
            }
            lVar8 = lVar8 + 0x80;
          } while ((longlong)(int)param_3[1] * 0x80 != lVar8);
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
        FUN_1449c0562(&local_88);
        iVar5 = local_78._4_4_;
        uVar4 = local_78;
      } while (local_90 != param_1 ||
               ((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar1 || local_78._4_4_ != iVar7));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487ea4aa FUN_1487ea4aa body=309 status=ok
// SIG undefined FUN_1487ea4aa(void)

undefined8 FUN_1487ea4aa(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  cVar2 = FUN_144729dda(param_1 + 0xb8);
  if (cVar2 == '\0') {
    return 1;
  }
  lVar4 = param_2[1];
  if (lVar4 == 0) {
    uVar3 = FUN_1406ef318();
    lVar4 = FUN_14477b664(uVar3);
    param_2[1] = lVar4;
  }
  if (param_2[2] == 0) {
    if (lVar4 == 0) {
      return 1;
    }
    if (*param_2 == 0) {
      return 1;
    }
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      param_2[2] = 0;
      return 1;
    }
    uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar4 = FUN_144aff482(uVar3,param_2);
    param_2[2] = lVar4;
    if (lVar4 == 0) {
      return 1;
    }
  }
  uVar3 = FUN_14479d2ce(param_1 + 0xb8);
  lVar4 = param_2[1];
  if (lVar4 == 0) {
    uVar5 = FUN_1406ef318();
    lVar4 = FUN_14477b664(uVar5);
    param_2[1] = lVar4;
  }
  lVar6 = param_2[2];
  if (((lVar6 == 0) && (lVar6 = 0, lVar4 != 0)) && (*param_2 != 0)) {
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) || (cVar2 = (**(code **)(*plVar1 + 0x108))(), cVar2 == '\0')) {
      lVar6 = 0;
    }
    else {
      uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar6 = FUN_144aff482(uVar5,param_2);
    }
    param_2[2] = lVar6;
  }
  uVar3 = FUN_1409501fe(lVar6,uVar3);
  return uVar3;
}



// FUNCTION 1487ea5e0 FUN_1487ea5e0 body=133 status=ok
// SIG undefined FUN_1487ea5e0(void)

undefined8 FUN_1487ea5e0(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  if (((int)param_2 < 0) || (iVar2 = *(int *)(param_1 + 0x40), iVar2 <= (int)param_2)) {
    uVar3 = 0;
  }
  else {
    uVar4 = (ulonglong)param_2;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x38) + uVar4 * 8);
    if (lVar1 != 0) {
      FUN_1487efb8e(lVar1);
      FUN_1400020a8(lVar1);
      iVar2 = *(int *)(param_1 + 0x40);
    }
    if (~param_2 + iVar2 != 0) {
      memmove((void *)(*(longlong *)(param_1 + 0x38) + uVar4 * 8),
              (void *)(*(longlong *)(param_1 + 0x38) + uVar4 * 8 + 8),
              (longlong)(int)(~param_2 + iVar2) << 3);
      iVar2 = *(int *)(param_1 + 0x40);
    }
    *(int *)(param_1 + 0x40) = iVar2 + -1;
    FUN_1487f8774((longlong *)(param_1 + 0x38));
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 1487ea666 FUN_1487ea666 body=216 status=ok
// SIG undefined FUN_1487ea666(void)

void FUN_1487ea666(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  *(undefined1 *)((longlong)param_1 + 0x5a) = 1;
  *param_1 = param_2;
  iVar1 = *(int *)(param_2 + 0x32c);
  if (param_2 != 0 && -1 < (longlong)iVar1) {
    FUN_1487efa58(param_1 + 0xc,iVar1 + 1);
    lVar7 = (longlong)iVar1 << 3;
    do {
      *(longlong *)(param_1[0xc] + lVar7) = param_2;
      lVar6 = *(longlong *)(param_2 + 0x50);
      if (lVar6 == 0) {
        uVar4 = FUN_1464af43e();
        lVar6 = FUN_14477b664(uVar4);
        *(longlong *)(param_2 + 0x50) = lVar6;
      }
      lVar5 = *(longlong *)(param_2 + 0x58);
      if (lVar5 == 0) {
        if (lVar6 == 0) {
          return;
        }
        if (*(longlong *)(param_2 + 0x48) == 0) {
          return;
        }
        plVar2 = *(longlong **)(lVar6 + 0xb8);
        if ((plVar2 == (longlong *)0x0) || (cVar3 = (**(code **)(*plVar2 + 0x108))(), cVar3 == '\0')
           ) {
          lVar5 = 0;
        }
        else {
          uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar5 = FUN_144aff482(uVar4,(longlong *)(param_2 + 0x48));
        }
        *(longlong *)(param_2 + 0x58) = lVar5;
      }
      lVar7 = lVar7 + -8;
      param_2 = lVar5;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 1487ea73e FUN_1487ea73e body=711 status=ok
// SIG undefined FUN_1487ea73e(void)

void FUN_1487ea73e(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  undefined4 local_d8;
  uint uStack_d4;
  longlong *plStack_d0;
  uint local_c8;
  int iStack_c4;
  undefined8 uStack_c0;
  undefined4 local_b8;
  uint uStack_b4;
  longlong *plStack_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88 [2];
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  int local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_2 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_108);
  }
  local_78 = 0;
  iVar3 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  plVar1 = param_1 + 2;
  local_b8 = 0;
  uStack_b4 = 1;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  uStack_a0 = 0;
  plStack_b0 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_b8);
    iVar3 = (int)param_1[5];
  }
  local_c8 = local_a8;
  iStack_c4 = iStack_a4;
  uStack_c0 = CONCAT44(uStack_9c,uStack_a0);
  local_d8 = local_b8;
  uStack_d4 = uStack_b4;
  plStack_d0 = plStack_b0;
  local_e0 = param_1;
  if ((iStack_a4 != iVar3) || (plStack_b0 != plVar1)) {
    do {
      if ((longlong)(int)param_2[1] != 0) {
        lVar2 = 0;
        do {
          if (*(longlong *)(*param_2 + 8 + lVar2) ==
              *(longlong *)((longlong)iStack_c4 * 0x1c + *local_e0)) {
            if (-1 < *(short *)(*param_2 + 0x26 + lVar2)) goto LAB_1487ea8d7;
            break;
          }
          lVar2 = lVar2 + 0x80;
        } while ((longlong)(int)param_2[1] * 0x80 != lVar2);
      }
      FUN_144a13f80(&local_98,&local_b8);
LAB_1487ea8d7:
      local_c8 = local_c8 & ~uStack_d4;
      FUN_1449c0562(&local_d8);
    } while (local_e0 != param_1 || (plStack_d0 != plVar1 || iStack_c4 != iVar3));
    if ((int)uStack_90 != local_64) {
      local_b8 = 0;
      uStack_b4 = 1;
      local_a8 = 0xffffffff;
      iStack_a4 = 0;
      uStack_a0 = 0;
      plStack_b0 = local_88;
      if (local_70 == 0) {
        iVar3 = 0;
      }
      else {
        FUN_1449c0562(&local_b8);
        iVar3 = local_70;
      }
      local_c8 = local_a8;
      iStack_c4 = iStack_a4;
      uStack_c0 = CONCAT44(uStack_9c,uStack_a0);
      local_d8 = local_b8;
      uStack_d4 = uStack_b4;
      plStack_d0 = plStack_b0;
      local_e0 = &local_98;
      if ((iStack_a4 != iVar3) || (plStack_b0 != local_88)) {
        do {
          FUN_1487fb276(param_1,*(undefined8 *)(*local_e0 + (longlong)iStack_c4 * 0x10));
          local_c8 = local_c8 & ~uStack_d4;
          FUN_1449c0562(&local_d8);
        } while (local_e0 != &local_98 || (plStack_d0 != local_88 || iStack_c4 != iVar3));
      }
    }
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(&local_98);
  if ((local_40 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487eaa20 FUN_1487eaa20 body=61 status=ok
// SIG undefined FUN_1487eaa20(void)

void FUN_1487eaa20(longlong param_1)

{
  if (2 < *(byte *)(param_1 + 0xc0)) {
    FUN_1487e65b2();
    FUN_1487e6634(param_1);
    FUN_1487e6ab2(param_1);
    FUN_1487e6be8(param_1);
    *(undefined1 *)(param_1 + 0xc0) = 2;
  }
  return;
}



// FUNCTION 1487eaa5e FUN_1487eaa5e body=208 status=ok
// SIG undefined FUN_1487eaa5e(void)

void FUN_1487eaa5e(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  FUN_1487e6dfe();
  if ((DAT_14cb73f40 != 0) && (lVar5 = FUN_1487fdf06(DAT_14cb73f40,param_2), lVar5 != 0)) {
    iVar1 = *(int *)(param_1 + 0x88);
    if (0 < (longlong)iVar1) {
      lVar7 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x80) + lVar7 * 8);
        if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) == lVar5)) {
          if (iVar1 <= (int)lVar7) {
            return;
          }
          lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x80) + lVar7 * 8);
          if (lVar5 == 0) {
            return;
          }
          if ((longlong)*(int *)(lVar5 + 0x40) < 1) {
            return;
          }
          uVar6 = 0;
          uVar8 = (longlong)*(int *)(lVar5 + 0x40);
          do {
            plVar3 = *(longlong **)(*(longlong *)(lVar5 + 0x38) + -8 + uVar8 * 8);
            if ((plVar3 != (longlong *)0x0) && (*plVar3 == param_2)) {
              uVar6 = FUN_1487ea5e0(lVar5,(int)uVar8 + -1);
            }
            bVar4 = 1 < uVar8;
            uVar8 = uVar8 - 1;
          } while (bVar4);
          if ((uVar6 & 1) == 0) {
            return;
          }
          FUN_1487eaa20(param_1);
          FUN_143cc816c(param_1);
          return;
        }
        lVar7 = lVar7 + 1;
      } while (iVar1 != lVar7);
    }
  }
  return;
}



// FUNCTION 1487eab2e FUN_1487eab2e body=1281 status=ok
// SIG undefined FUN_1487eab2e(void)

ulonglong FUN_1487eab2e(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 unaff_RDI;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  float fVar12;
  undefined1 auStack_f8 [40];
  longlong *local_d0;
  undefined8 local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  undefined4 local_80;
  undefined4 local_7c;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar9 = (longlong *)CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  if ((undefined *)param_1[5] == (undefined *)0x0 || (undefined *)param_1[5] == &DAT_14cb73968) {
    if (param_2 == 0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      plVar9 = (longlong *)0x0;
      if (*(int *)(param_2 + 0x60) != *(int *)(param_2 + 0x8c)) {
        plVar11 = (longlong *)(param_2 + 0x58);
        local_a8 = 0;
        uStack_a0 = 0;
        lVar8 = param_2 + 0x68;
        local_98 = 0x100000000;
        local_88 = 0xffffffff;
        local_80 = 0;
        lStack_90 = lVar8;
        if (*(int *)(param_2 + 0x80) != 0) {
          FUN_1449c0562(&local_98);
          plVar9 = (longlong *)(ulonglong)*(uint *)(param_2 + 0x80);
        }
        local_b8 = local_88;
        lVar7 = local_b8;
        local_b0 = local_80;
        local_ac = local_7c;
        local_c8 = local_98;
        local_c0 = lStack_90;
        local_b8._4_4_ = (int)((ulonglong)local_88 >> 0x20);
        local_d0 = plVar11;
        if ((local_b8._4_4_ != (int)plVar9) || (fVar12 = 0.0, lStack_90 != lVar8)) {
          fVar12 = 0.0;
          iVar5 = local_b8._4_4_;
          local_b8 = lVar7;
          do {
            lVar7 = *local_d0;
            lVar10 = (longlong)iVar5 * 0x20;
            lStack_90 = 0;
            local_88 = 0;
            local_98 = *(longlong *)(lVar7 + lVar10);
            uVar6 = FUN_14477b664(*(undefined8 *)(lVar7 + 8 + lVar10));
            lStack_90 = FUN_14477b664(uVar6);
            local_88 = *(longlong *)(lVar7 + 0x10 + lVar10);
            if (lStack_90 == 0) {
              uVar6 = FUN_145d3a0da();
              lStack_90 = FUN_14477b664(uVar6);
            }
            if (local_88 == 0) {
              local_88 = 0;
              if ((((lStack_90 != 0) && (local_98 != 0)) &&
                  (plVar1 = *(longlong **)(lStack_90 + 0xb8), plVar1 != (longlong *)0x0)) &&
                 (cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar3 != '\0')) {
                uVar6 = (**(code **)(*plVar1 + 0x110))(plVar1);
                local_88 = FUN_144aff482(uVar6,&local_98);
                if (local_88 != 0) goto LAB_1487ead99;
              }
            }
            else {
LAB_1487ead99:
              lVar7 = local_88;
              if (*(char *)(local_88 + 0x19) == '\0') {
                lVar10 = *(longlong *)(local_88 + 0x28);
                if (lVar10 == 0) {
                  uVar6 = FUN_145d642f2();
                  lVar10 = FUN_14477b664(uVar6);
                  *(longlong *)(lVar7 + 0x28) = lVar10;
                }
                if (*(longlong *)(lVar7 + 0x30) == 0) {
                  if ((lVar10 != 0) && (*(longlong *)(lVar7 + 0x20) != 0)) {
                    plVar1 = *(longlong **)(lVar10 + 0xb8);
                    if ((plVar1 == (longlong *)0x0) ||
                       (cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar3 == '\0')) {
                      *(undefined8 *)(lVar7 + 0x30) = 0;
                    }
                    else {
                      uVar6 = (**(code **)(*plVar1 + 0x110))(plVar1);
                      lVar10 = FUN_144aff482(uVar6,(longlong *)(lVar7 + 0x20));
                      *(longlong *)(lVar7 + 0x30) = lVar10;
                      if (lVar10 != 0) goto LAB_1487eae5c;
                    }
                  }
                }
                else {
LAB_1487eae5c:
                  uVar2 = uStack_a0;
                  lVar10 = (longlong)(int)uStack_a0;
                  uVar4 = (int)uStack_a0 + 1;
                  uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar4);
                  if (uStack_a0._4_4_ < uVar4) {
                    FUN_1487f88c6(&local_a8,uVar2 & 0xffffffff);
                  }
                  *(longlong *)(local_a8 + lVar10 * 8) = lVar7;
                  uVar4 = -(uint)(0.0 < *(float *)(lVar7 + 0x1c));
                  fVar12 = (float)(~uVar4 & (uint)fVar12 |
                                  (uint)(fVar12 + *(float *)(lVar7 + 0x1c)) & uVar4);
                }
              }
            }
            local_b8 = CONCAT44(local_b8._4_4_,(uint)local_b8 & ~local_c8._4_4_);
            FUN_1449c0562(&local_c8);
            iVar5 = local_b8._4_4_;
            lVar7 = local_b8;
          } while (local_d0 != plVar11 || (local_c0 != lVar8 || local_b8._4_4_ != (int)plVar9));
        }
        local_b8 = lVar7;
        if ((int)uStack_a0 != 0) {
          plVar9 = *(longlong **)(local_a8 + (longlong)((int)uStack_a0 + -1) * 8);
          if (1 < (int)uStack_a0) {
            uVar4 = rand();
            if ((longlong)(int)uStack_a0 != 0) {
              fVar12 = fVar12 * ((float)(uVar4 & 0x7fff) / 32767.0);
              lVar8 = 0;
              do {
                plVar11 = *(longlong **)(local_a8 + lVar8);
                if (((plVar11 != (longlong *)0x0) && (0.0 < *(float *)((longlong)plVar11 + 0x1c)))
                   && (fVar12 = fVar12 - *(float *)((longlong)plVar11 + 0x1c), fVar12 <= 0.0))
                goto LAB_1487eaf69;
                lVar8 = lVar8 + 8;
              } while ((longlong)(int)uStack_a0 * 8 != lVar8);
            }
          }
          plVar11 = plVar9;
          if (plVar9 != (longlong *)0x0) {
LAB_1487eaf69:
            FUN_1487e6ce0(param_1);
            lVar8 = param_1[0x13];
            lVar7 = plVar11[5];
            if (lVar7 == 0) {
              uVar6 = FUN_145d642f2();
              lVar7 = FUN_14477b664(uVar6);
              plVar11[5] = lVar7;
            }
            if (((plVar11[6] == 0) && (lVar7 != 0)) && (plVar9 = plVar11 + 4, *plVar9 != 0)) {
              plVar1 = *(longlong **)(lVar7 + 0xb8);
              if ((plVar1 == (longlong *)0x0) ||
                 (cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar3 == '\0')) {
                lVar7 = 0;
              }
              else {
                uVar6 = (**(code **)(*plVar1 + 0x110))(plVar1);
                lVar7 = FUN_144aff482(uVar6,plVar9);
              }
              plVar11[6] = lVar7;
            }
            FUN_1487e9124(param_1);
            param_1[0x13] = lVar8;
            cVar3 = (**(code **)(*param_1 + 0x38))(param_1);
            if (cVar3 == '\0') {
              FUN_1487e6ce0(param_1);
            }
          }
        }
        if (param_1[5] == 0) {
          plVar9 = (longlong *)0x0;
        }
        else {
          plVar9 = (longlong *)CONCAT71((int7)((ulonglong)plVar9 >> 8),(int)param_1[0x11] != 0);
        }
        if (local_a8 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)plVar9 & 0xffffffff;
}



// FUNCTION 1487eb030 FUN_1487eb030 body=3072 status=ok
// SIG undefined FUN_1487eb030(void)

ulonglong FUN_1487eb030(longlong param_1,longlong param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar18;
  longlong **pplVar19;
  longlong *plVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_198 [32];
  undefined1 local_178;
  undefined1 local_170;
  longlong *local_160;
  longlong local_158;
  undefined2 local_150;
  longlong local_148;
  undefined8 uStack_140;
  longlong *local_138;
  undefined8 uStack_130;
  longlong *local_128;
  undefined8 uStack_120;
  longlong *local_110;
  longlong *plStack_108;
  undefined8 local_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined1 local_ec [4];
  longlong *local_e8;
  undefined8 uStack_e0;
  longlong *plStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  longlong local_a8;
  undefined4 local_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if (((param_2 == 0) || (*(int *)(param_2 + 0x60) == *(int *)(param_2 + 0x8c))) ||
     (*(longlong *)(param_1 + 0x28) == 0)) {
    uVar16 = 0;
  }
  else {
    uVar16 = 0;
    iVar15 = 0;
    if (*(int *)(param_1 + 0x88) != 0) {
      plVar9 = (longlong *)(param_2 + 0x58);
      local_128 = (longlong *)0x0;
      uStack_120 = 0;
      local_138 = (longlong *)0x0;
      uStack_130 = 0;
      lVar12 = param_2 + 0x68;
      local_110 = (longlong *)0x100000000;
      local_100._0_4_ = 0xffffffff;
      local_100._4_4_ = 0;
      uStack_f8 = 0;
      plStack_108 = (longlong *)lVar12;
      if (*(int *)(param_2 + 0x80) != 0) {
        FUN_1449c0562(&local_110);
        iVar15 = *(int *)(param_2 + 0x80);
      }
      local_d0._0_4_ = (uint)local_100;
      local_d0._4_4_ = local_100._4_4_;
      uStack_c8 = CONCAT44(uStack_f4,uStack_f8);
      uStack_e0 = local_110;
      plStack_d8 = plStack_108;
      local_e8 = plVar9;
      if ((local_100._4_4_ != iVar15) || (plStack_108 != (longlong *)lVar12)) {
        do {
          plVar5 = (longlong *)(*local_e8 + (longlong)local_d0._4_4_ * 0x20);
          lVar18 = *(longlong *)(*local_e8 + 8 + (longlong)local_d0._4_4_ * 0x20);
          if (lVar18 == 0) {
            uVar6 = FUN_145d3a0da();
            lVar18 = FUN_14477b664(uVar6);
            plVar5[1] = lVar18;
          }
          lVar10 = plVar5[2];
          if (lVar10 == 0) {
            if ((lVar18 != 0) && (*plVar5 != 0)) {
              plVar11 = *(longlong **)(lVar18 + 0xb8);
              if ((plVar11 == (longlong *)0x0) ||
                 (cVar3 = (**(code **)(*plVar11 + 0x108))(plVar11), cVar3 == '\0')) {
                plVar5[2] = 0;
              }
              else {
                uVar6 = (**(code **)(*plVar11 + 0x110))(plVar11);
                lVar10 = FUN_144aff482(uVar6,plVar5);
                plVar5[2] = lVar10;
                if (lVar10 != 0) goto LAB_1487eb888;
              }
            }
          }
          else {
LAB_1487eb888:
            if (*(char *)(lVar10 + 0x19) == '\x02') {
              lVar18 = *(longlong *)(lVar10 + 0x90);
              if (lVar18 == 0) {
                uVar6 = FUN_1464af43e();
                lVar18 = FUN_14477b664(uVar6);
                *(longlong *)(lVar10 + 0x90) = lVar18;
              }
              if (*(longlong *)(lVar10 + 0x98) == 0) {
                lVar13 = 0;
                if ((lVar18 != 0) && (*(longlong *)(lVar10 + 0x88) != 0)) {
                  plVar5 = *(longlong **)(lVar18 + 0xb8);
                  if ((plVar5 == (longlong *)0x0) ||
                     (cVar3 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar3 == '\0')) {
                    lVar13 = 0;
                  }
                  else {
                    uVar6 = (**(code **)(*plVar5 + 0x110))(plVar5);
                    lVar13 = FUN_144aff482(uVar6,(longlong *)(lVar10 + 0x88));
                  }
                  *(longlong *)(lVar10 + 0x98) = lVar13;
                }
                if (((lVar13 == 0) && (lVar18 = *(longlong *)(lVar10 + 0x7c), lVar18 != 0)) &&
                   (lVar13 = *(longlong *)(param_1 + 0x28),
                   *(int *)(lVar13 + 0x198) != *(int *)(lVar13 + 0x1c4))) {
                  uVar4 = (uint)((ulonglong)lVar18 >> 0x10);
                  uVar17 = (uint)lVar18 & 0xffff;
                  lVar14 = lVar13 + 0x1c8;
                  if (*(longlong *)(lVar13 + 0x1d0) != 0) {
                    lVar14 = *(longlong *)(lVar13 + 0x1d0);
                  }
                  iVar8 = *(int *)(lVar14 + (ulonglong)
                                            (*(int *)(lVar13 + 0x1d8) - 1U &
                                            (int)((ulonglong)lVar18 >> 0x20) +
                                            ((uint)lVar18 << 0x10 | uVar17) +
                                            (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar17 >> 4)) * 4);
                  if (iVar8 != -1) {
                    do {
                      plVar5 = (longlong *)(*(longlong *)(lVar13 + 400) + (longlong)iVar8 * 0x14);
                      if (*plVar5 == lVar18) {
                        if (plVar5 + 1 != (longlong *)0x0 && plVar5 != (longlong *)0x0) {
                          *(int *)(lVar10 + 0xb0) = (int)(short)plVar5[1];
                          iVar8 = (int)uStack_130;
                          uVar4 = (int)uStack_130 + 1;
                          uStack_130 = CONCAT44(uStack_130._4_4_,uVar4);
                          if (uStack_130._4_4_ < uVar4) {
                            pplVar19 = &local_138;
                            goto LAB_1487ebbf2;
                          }
                          pplVar19 = &local_138;
                          goto LAB_1487ebb74;
                        }
                        break;
                      }
                      iVar8 = *(int *)((longlong)plVar5 + 0xc);
                    } while (iVar8 != -1);
                  }
                }
              }
            }
            else if (*(char *)(lVar10 + 0x19) == '\x01') {
              lVar18 = *(longlong *)(lVar10 + 0x40);
              if (lVar18 == 0) {
                uVar6 = FUN_1464af53c();
                lVar18 = FUN_14477b664(uVar6);
                *(longlong *)(lVar10 + 0x40) = lVar18;
              }
              lVar13 = *(longlong *)(lVar10 + 0x48);
              if (lVar13 == 0) {
                if ((lVar18 != 0) && (*(longlong *)(lVar10 + 0x38) != 0)) {
                  plVar5 = *(longlong **)(lVar18 + 0xb8);
                  if ((plVar5 == (longlong *)0x0) ||
                     (cVar3 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar3 == '\0')) {
                    *(undefined8 *)(lVar10 + 0x48) = 0;
                  }
                  else {
                    uVar6 = (**(code **)(*plVar5 + 0x110))(plVar5);
                    lVar13 = FUN_144aff482(uVar6,(longlong *)(lVar10 + 0x38));
                    *(longlong *)(lVar10 + 0x48) = lVar13;
                    if (lVar13 != 0) goto LAB_1487eb8b9;
                  }
                }
              }
              else {
LAB_1487eb8b9:
                iVar8 = *(int *)(param_1 + 0x88);
                if (0 < (longlong)iVar8) {
                  lVar18 = 0;
                  do {
                    lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x80) + lVar18 * 8);
                    if ((lVar14 != 0) && (*(longlong *)(lVar14 + 8) == lVar13)) {
                      if (((int)lVar18 < iVar8) &&
                         ((lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x80) + lVar18 * 8),
                          lVar13 != 0 && (*(int *)(lVar13 + 0x40) == 0)))) {
                        *(int *)(lVar10 + 0xb0) = (int)lVar18;
                        iVar8 = (int)uStack_120;
                        uVar4 = (int)uStack_120 + 1;
                        uStack_120 = CONCAT44(uStack_120._4_4_,uVar4);
                        if (uStack_120._4_4_ < uVar4) {
                          pplVar19 = &local_128;
LAB_1487ebbf2:
                          FUN_1487f88c6(pplVar19,iVar8);
                        }
                        else {
                          pplVar19 = &local_128;
                        }
LAB_1487ebb74:
                        (*pplVar19)[iVar8] = lVar10;
                      }
                      break;
                    }
                    lVar18 = lVar18 + 1;
                  } while (iVar8 != lVar18);
                }
              }
            }
          }
          local_d0._0_4_ = (uint)local_d0 & ~uStack_e0._4_4_;
          FUN_1449c0562(&uStack_e0);
        } while (local_e8 != plVar9 ||
                 (plStack_d8 != (longlong *)lVar12 || local_d0._4_4_ != iVar15));
      }
      local_148 = 0;
      uStack_140 = 0;
      FUN_1487f5b60(&local_148,3);
      if (0 < *(int *)(param_1 + 0x88)) {
        uVar16 = 0;
        do {
          lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x80) + uVar16 * 8);
          if ((lVar12 == 0) || (*(int *)(lVar12 + 0x40) == 0)) {
            lVar12 = (longlong)(int)uStack_120;
            if (lVar12 != 0) {
              plVar9 = local_128 + lVar12;
              fVar24 = 0.0;
              lVar18 = 0;
              do {
                lVar10 = *(longlong *)((longlong)local_128 + lVar18);
                if (((lVar10 != 0) && (uVar16 == *(uint *)(lVar10 + 0xb0))) &&
                   (0.0 < *(float *)(lVar10 + 0x1c))) {
                  fVar24 = fVar24 + *(float *)(lVar10 + 0x1c);
                }
                lVar18 = lVar18 + 8;
              } while (lVar12 * 8 != lVar18);
              fVar21 = 0.0;
              if (0.0 < fVar24) {
                uVar4 = rand();
                fVar21 = (float)(uVar4 & 0x7fff) / 32767.0;
                if ((longlong)(int)uStack_120 == 0) goto LAB_1487eb348;
                plVar9 = local_128 + (int)uStack_120;
              }
              fVar24 = fVar24 * fVar21;
              lVar12 = 0;
              plVar5 = local_128;
              do {
                lVar18 = *plVar5;
                if (((lVar18 != 0) && (uVar16 == *(uint *)(lVar18 + 0xb0))) &&
                   ((lVar12 = lVar18, 0.0 < *(float *)(lVar18 + 0x1c) &&
                    (fVar24 = fVar24 - *(float *)(lVar18 + 0x1c), fVar24 <= 0.0))))
                goto LAB_1487eb2df;
                plVar5 = plVar5 + 1;
              } while (plVar5 != plVar9);
              lVar18 = lVar12;
              if (lVar12 != 0) {
LAB_1487eb2df:
                lVar12 = *(longlong *)(lVar18 + 0x40);
                if (lVar12 == 0) {
                  uVar6 = FUN_1464af53c();
                  lVar12 = FUN_14477b664(uVar6);
                  *(longlong *)(lVar18 + 0x40) = lVar12;
                }
                if (*(longlong *)(lVar18 + 0x48) == 0) {
                  if ((lVar12 != 0) && (*(longlong *)(lVar18 + 0x38) != 0)) {
                    plVar9 = *(longlong **)(lVar12 + 0xb8);
                    if ((plVar9 == (longlong *)0x0) ||
                       (cVar3 = (**(code **)(*plVar9 + 0x108))(plVar9), cVar3 == '\0')) {
                      *(undefined8 *)(lVar18 + 0x48) = 0;
                    }
                    else {
                      uVar6 = (**(code **)(*plVar9 + 0x110))(plVar9);
                      lVar12 = FUN_144aff482(uVar6,(longlong *)(lVar18 + 0x38));
                      *(longlong *)(lVar18 + 0x48) = lVar12;
                      if (lVar12 != 0) goto LAB_1487eb360;
                    }
                  }
                }
                else {
LAB_1487eb360:
                  cVar3 = FUN_1487e5b16(lVar18,*(undefined8 *)(param_1 + 0x28));
                  lVar12 = local_148;
                  if (cVar3 != '\0') {
                    lVar18 = (longlong)(int)uStack_140;
                    if (lVar18 != 0) {
                      lVar10 = 0;
                      do {
                        uStack_c8 = 0;
                        local_c0 = 0;
                        local_e8 = (longlong *)0x0;
                        uStack_e0 = (longlong *)0x0;
                        local_bc = 0xffffffff00000080;
                        local_b4 = 0;
                        local_a8 = 0;
                        local_a0 = 0;
                        local_170 = 0;
                        local_178 = 0;
                        FUN_1487e98ce(param_1,*(undefined8 *)(lVar12 + lVar10),&local_e8,0);
                        local_a0 = 0;
                        if (local_a8 != 0) {
                          FUN_1400020a8();
                        }
                        FUN_1487f4678(&local_e8);
                        lVar10 = lVar10 + 8;
                      } while (lVar18 * 8 != lVar10);
                    }
                  }
                }
              }
            }
          }
LAB_1487eb348:
          uVar16 = uVar16 + 1;
        } while ((longlong)uVar16 < (longlong)*(int *)(param_1 + 0x88));
      }
      lVar12 = *(longlong *)(param_1 + 0x28);
      plVar9 = (longlong *)(lVar12 + 0x1e0);
      plVar5 = (longlong *)(lVar12 + 0x1f0);
      local_110 = (longlong *)&DAT_100000000;
      local_100 = 0xffffffff;
      uStack_f8 = 0;
      plStack_108 = plVar5;
      if (*(int *)(lVar12 + 0x208) == 0) {
        iVar15 = 0;
      }
      else {
        FUN_1449c0562(&local_110);
        iVar15 = *(int *)(lVar12 + 0x208);
      }
      uStack_c8 = CONCAT44(uStack_f4,uStack_f8);
      local_d0 = local_100;
      uVar6 = local_d0;
      uStack_e0 = local_110;
      plStack_d8 = plStack_108;
      local_d0._4_4_ = (int)((ulonglong)local_100 >> 0x20);
      local_e8 = plVar9;
      if ((local_d0._4_4_ != iVar15) || (plStack_108 != plVar5)) {
        local_160 = (longlong *)(param_1 + 0x30);
        iVar8 = local_d0._4_4_;
        local_d0 = uVar6;
        do {
          lVar18 = *local_e8;
          lVar10 = (longlong)iVar8;
          if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
            lVar13 = *(longlong *)(lVar18 + 4 + lVar10 * 0x14);
            uVar4 = (uint)((ulonglong)lVar13 >> 0x10);
            uVar17 = (uint)lVar13 & 0xffff;
            lVar14 = *(longlong *)(param_1 + 0x70);
            if (*(longlong *)(param_1 + 0x70) == 0) {
              lVar14 = param_1 + 0x68;
            }
            iVar8 = *(int *)(lVar14 + (ulonglong)
                                      (*(int *)(param_1 + 0x78) - 1U &
                                      (int)((ulonglong)lVar13 >> 0x20) +
                                      ((uint)lVar13 << 0x10 | uVar17) +
                                      (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar17 >> 4)) * 4);
            if (iVar8 != -1) {
              do {
                if (*(longlong *)(*local_160 + (longlong)iVar8 * 0x1c) == lVar13)
                goto LAB_1487eb653;
                iVar8 = *(int *)((longlong)iVar8 * 0x1c + *local_160 + 0x14);
              } while (iVar8 != -1);
            }
          }
          lVar13 = (longlong)(int)uStack_130;
          if (lVar13 != 0) {
            psVar1 = (short *)(lVar18 + lVar10 * 0x14);
            plVar20 = (longlong *)(lVar18 + lVar10 * 0x14 + 4);
            plVar11 = local_138 + lVar13;
            fVar24 = 0.0;
            lVar18 = 0;
            do {
              lVar10 = *(longlong *)((longlong)local_138 + lVar18);
              if (((lVar10 != 0) && (*(int *)(lVar10 + 0xb0) == (int)*psVar1)) &&
                 (0.0 < *(float *)(lVar10 + 0x1c))) {
                fVar24 = fVar24 + *(float *)(lVar10 + 0x1c);
              }
              lVar18 = lVar18 + 8;
            } while (lVar13 * 8 != lVar18);
            fVar21 = 0.0;
            if (0.0 < fVar24) {
              uVar4 = rand();
              fVar21 = (float)(uVar4 & 0x7fff) / 32767.0;
              if ((longlong)(int)uStack_130 == 0) goto LAB_1487eb653;
              plVar11 = local_138 + (int)uStack_130;
            }
            fVar24 = fVar24 * fVar21;
            lVar18 = 0;
            plVar7 = local_138;
            do {
              lVar10 = *plVar7;
              if (((lVar10 != 0) && (*(int *)(lVar10 + 0xb0) == (int)*psVar1)) &&
                 ((lVar18 = lVar10, 0.0 < *(float *)(lVar10 + 0x1c) &&
                  (fVar24 = fVar24 - *(float *)(lVar10 + 0x1c), fVar24 <= 0.0))))
              goto LAB_1487eb618;
              plVar7 = plVar7 + 1;
            } while (plVar7 != plVar11);
            lVar10 = lVar18;
            if (lVar18 != 0) {
LAB_1487eb618:
              lVar18 = (longlong)*(int *)(*(longlong *)(param_1 + 0x28) + 0x188);
              if (lVar18 != 0) {
                lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x180);
                lVar12 = 0;
                do {
                  if ((*(longlong *)(lVar13 + 8 + lVar12) == *plVar20) &&
                     (*(char *)(lVar13 + 0x10 + lVar12) == '\0')) {
                    local_158 = 0;
                    local_150 = 0xffff;
                    fVar24 = *(float *)(lVar10 + 0xa4);
                    fVar21 = *(float *)(lVar10 + 0xa8);
                    if (*(char *)(lVar10 + 0xa0) == '\x01') {
                      fVar22 = *(float *)(lVar13 + 0x1c + lVar12);
                      fVar23 = *(float *)(lVar13 + 0x20 + lVar12) - fVar22;
                      fVar24 = fVar24 * fVar23 + fVar22;
                      fVar21 = fVar23 * fVar21 + fVar22;
                    }
                    uVar4 = rand();
                    local_158 = *plVar20;
                    sVar2 = *(short *)(lVar13 + 0x24 + lVar12);
                    if ((longlong)sVar2 < 3) {
                      local_150 = 0;
                    }
                    else {
                      lVar18 = (longlong)sVar2 + -1;
                      fVar22 = *(float *)(lVar13 + 0x1c + lVar12);
                      fVar23 = *(float *)(lVar13 + 0x20 + lVar12) - fVar22;
                      fVar22 = (((float)(uVar4 & 0x7fff) / 32767.0) * (fVar21 - fVar24) + fVar24) -
                               fVar22;
                      if (fVar23 <= fVar22) {
                        fVar22 = fVar23;
                      }
                      if (fVar22 <= 0.0) {
                        fVar22 = 0.0;
                      }
                      lVar10 = (longlong)(short)(int)(((float)(int)sVar2 * fVar22) / fVar23);
                      if (lVar10 < lVar18) {
                        lVar18 = lVar10;
                      }
                      if (lVar18 < 1) {
                        lVar18 = 0;
                      }
                      local_150 = (undefined2)lVar18;
                    }
                    plStack_108 = &local_158;
                    local_110 = plVar20;
                    FUN_1487f894c(local_160,local_ec,&local_110);
                    break;
                  }
                  lVar12 = lVar12 + 0x80;
                } while (lVar18 * 0x80 != lVar12);
              }
            }
          }
LAB_1487eb653:
          local_d0 = CONCAT44(local_d0._4_4_,(uint)local_d0 & ~uStack_e0._4_4_);
          FUN_1449c0562(&uStack_e0);
          iVar8 = local_d0._4_4_;
          uVar6 = local_d0;
        } while (local_e8 != plVar9 || (plStack_d8 != plVar5 || local_d0._4_4_ != iVar15));
      }
      local_d0 = uVar6;
      if (local_148 != 0) {
        FUN_1400020a8();
      }
      if (local_138 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (local_128 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      uVar16 = CONCAT71((int7)((ulonglong)lVar12 >> 8),1);
    }
  }
  if ((local_90 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar16 & 0xffffffff;
}



// FUNCTION 1487ebc32 FUN_1487ebc32 body=81 status=ok
// SIG undefined FUN_1487ebc32(void)

undefined8 FUN_1487ebc32(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  
  FUN_1487e6dfe();
  param_1[0x13] = 0;
  cVar1 = (**(code **)(*param_1 + 0x40))(param_1,param_2);
  if ((cVar1 != '\0') && (cVar1 = (**(code **)(*param_1 + 0x48))(param_1,param_2), cVar1 != '\0')) {
    FUN_143cc816c(param_1);
    return 1;
  }
  return 0;
}



// FUNCTION 1487ebc84 FUN_1487ebc84 body=178 status=ok
// SIG undefined FUN_1487ebc84(void)

longlong * FUN_1487ebc84(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1487e637e(&local_30);
  if (local_30 != 0) {
    cVar3 = FUN_1487ebc32(local_30,param_2);
    if (cVar3 != '\0') {
      *param_1 = local_30;
      param_1[1] = (longlong)local_28;
      if (local_28 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_28 + 1) = (int)local_28[1] + 1;
        UNLOCK();
      }
      goto LAB_1487ebcbb;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_1487ebcbb:
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487ebd3a FUN_1487ebd3a body=373 status=ok
// SIG undefined FUN_1487ebd3a(void)

undefined2 FUN_1487ebd3a(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  
  lVar4 = FUN_1487ebeb0();
  lVar2 = *param_3;
  uVar5 = (uint)lVar2;
  iVar6 = (int)((ulonglong)lVar2 >> 0x20);
  uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
  if ((lVar4 != 0) && (*(int *)(lVar4 + 0x10) != *(int *)(lVar4 + 0x3c))) {
    lVar8 = lVar4 + 0x40;
    if (*(longlong *)(lVar4 + 0x48) != 0) {
      lVar8 = *(longlong *)(lVar4 + 0x48);
    }
    iVar7 = *(int *)(lVar8 + (ulonglong)
                             (*(int *)(lVar4 + 0x50) - 1U &
                             iVar6 + (uVar5 << 0x10 | uVar5 & 0xffff) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + ((uVar5 & 0xffff) >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(lVar4 + 8) + (longlong)iVar7 * 0x14);
        if (*plVar1 == lVar2) {
          plVar9 = plVar1 + 1;
          if (plVar9 != (longlong *)0x0 && plVar1 != (longlong *)0x0) goto LAB_1487ebea7;
          break;
        }
        iVar7 = *(int *)((longlong)plVar1 + 0xc);
      } while (iVar7 != -1);
    }
  }
  if (*(int *)(param_1 + 600) != *(int *)(param_1 + 0x284)) {
    lVar4 = param_1 + 0x288;
    if (*(longlong *)(param_1 + 0x290) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x290);
    }
    iVar6 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x298) - 1U &
                             iVar6 + (uVar5 << 0x10 | uVar5 & 0xffff) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + ((uVar5 & 0xffff) >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x250) + (longlong)iVar6 * 0x14);
        if (*plVar1 == lVar2) {
          plVar9 = plVar1 + 1;
          if (plVar9 == (longlong *)0x0 || plVar1 == (longlong *)0x0) {
            return 0xffff;
          }
LAB_1487ebea7:
          return (short)*plVar9;
        }
        iVar6 = *(int *)((longlong)plVar1 + 0xc);
      } while (iVar6 != -1);
    }
  }
  return 0xffff;
}



// FUNCTION 1487ebeb0 FUN_1487ebeb0 body=239 status=ok
// SIG undefined FUN_1487ebeb0(void)

undefined8 FUN_1487ebeb0(longlong param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  
  if (param_2 == 0) {
    if ((*(char *)(param_1 + 0x158) == '\x01') && (*(int *)(param_1 + 0x1f8) != 0)) {
      puVar5 = *(undefined8 **)(param_1 + 0x1f0);
LAB_1487ebf67:
      return *puVar5;
    }
  }
  else if (*(int *)(param_1 + 0x208) != *(int *)(param_1 + 0x234)) {
    uVar3 = ((uint)(uint7)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    lVar4 = param_1 + 0x238;
    if (*(longlong *)(param_1 + 0x240) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x240);
    }
    iVar6 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x248) - 1U & (uVar3 >> 0x10 ^ uVar3)) *
                             4);
    if (iVar6 != -1) {
      while (puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x200) + (longlong)iVar6 * 0x18),
            *puVar1 != param_2) {
        iVar6 = (int)puVar1[2];
        if (iVar6 == -1) {
          return 0;
        }
      }
      if (puVar1 + 1 == (ulonglong *)0x0 || puVar1 == (ulonglong *)0x0) {
        return 0;
      }
      uVar2 = (ushort)puVar1[1];
      if ((short)uVar2 < 0) {
        return 0;
      }
      if (*(int *)(param_1 + 0x1f8) <= (int)(short)uVar2) {
        return 0;
      }
      puVar5 = (undefined8 *)((ulonglong)uVar2 * 8 + *(longlong *)(param_1 + 0x1f0));
      goto LAB_1487ebf67;
    }
  }
  return 0;
}



// FUNCTION 1487ebfa0 FUN_1487ebfa0 body=246 status=ok
// SIG undefined FUN_1487ebfa0(void)

void FUN_1487ebfa0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  byte bVar6;
  ushort uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  
  if ((longlong)*(int *)(param_1 + 0x198) == 0) {
    bVar6 = 0;
  }
  else {
    plVar10 = *(longlong **)(param_1 + 400);
    plVar1 = plVar10 + *(int *)(param_1 + 0x198);
    bVar6 = 0;
    do {
      lVar2 = *plVar10;
      if ((lVar2 == 0) || (*(int *)(lVar2 + 0x30) < 1)) {
        bVar4 = 0;
      }
      else {
        lVar8 = 0;
        lVar9 = 0;
        bVar4 = 0;
        do {
          bVar3 = FUN_1487ef200(param_1,lVar2,*(longlong *)(lVar2 + 0x28) + lVar8,0);
          bVar4 = bVar4 | bVar3;
          lVar9 = lVar9 + 1;
          lVar8 = lVar8 + 0x98;
        } while (lVar9 < *(int *)(lVar2 + 0x30));
      }
      bVar6 = bVar6 | bVar4;
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar1);
  }
  bVar4 = FUN_1487ec26a(param_1);
  uVar7 = (ushort)bVar4 + (ushort)bVar4;
  if ((bVar4 != 0) || ((bVar6 & 1) != 0)) {
    *(undefined4 *)(param_1 + 0x2ac) = *(undefined4 *)(param_1 + 0x2a8);
    uVar7 = uVar7 | 4;
  }
  cVar5 = FUN_1487ec4e4(param_1);
  if (cVar5 != '\0') {
    uVar7 = uVar7 + 8;
  }
  if (uVar7 != 0) {
    FUN_1487f8f16(param_1 + 0x2d0,param_1);
    return;
  }
  return;
}



// FUNCTION 1487ec096 FUN_1487ec096 body=114 status=ok
// SIG undefined FUN_1487ec096(void)

void FUN_1487ec096(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1405b572a(param_1);
    }
    memset((void *)((longlong)iVar1 * 2 + *param_1),0,(longlong)(param_2 - iVar1) * 2);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_146cb447a(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1487ec10a FUN_1487ec10a body=203 status=ok
// SIG undefined FUN_1487ec10a(void)

ulonglong FUN_1487ec10a(longlong param_1,ushort param_2,float param_3,char param_4)

{
  short sVar1;
  longlong lVar2;
  undefined2 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 unaff_RSI;
  ulonglong uVar6;
  longlong lVar7;
  float fVar8;
  
  if ((((-1 < (short)param_2) && ((int)(uint)param_2 < *(int *)(param_1 + 0x1c8))) &&
      (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)param_2 * 8), lVar2 != 0))
     && (*(char *)(lVar2 + 0x20) == '\0')) {
    if ((*(float *)(lVar2 + 0x24) != param_3) || (NAN(*(float *)(lVar2 + 0x24)) || NAN(param_3))) {
      *(float *)(lVar2 + 0x24) = param_3;
      sVar1 = *(short *)(lVar2 + 0x34);
      if ((longlong)sVar1 < 3) {
        uVar3 = 0;
      }
      else {
        lVar7 = (longlong)sVar1 + -1;
        fVar8 = *(float *)(lVar2 + 0x30) - *(float *)(lVar2 + 0x2c);
        param_3 = param_3 - *(float *)(lVar2 + 0x2c);
        if (fVar8 <= param_3) {
          param_3 = fVar8;
        }
        if (param_3 <= 0.0) {
          param_3 = 0.0;
        }
        lVar5 = (longlong)(short)(int)(((float)(int)sVar1 * param_3) / fVar8);
        if (lVar5 < lVar7) {
          lVar7 = lVar5;
        }
        uVar3 = 0;
        if (0 < lVar7) {
          uVar3 = (undefined2)lVar7;
        }
      }
      *(undefined2 *)(lVar2 + 0x28) = uVar3;
      iVar4 = *(int *)(param_1 + 0x2a8) + 1;
      *(int *)(param_1 + 0x2a8) = iVar4;
      *(int *)(lVar2 + 0x90) = iVar4;
      uVar6 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
      if (param_4 != '\0') {
        FUN_1487ebfa0();
      }
      goto LAB_1487ec137;
    }
  }
  uVar6 = 0;
LAB_1487ec137:
  return uVar6 & 0xffffffff;
}



// FUNCTION 1487ec1d6 FUN_1487ec1d6 body=147 status=ok
// SIG undefined FUN_1487ec1d6(void)

void FUN_1487ec1d6(longlong param_1,longlong *param_2,undefined4 param_3)

{
  short sVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  
  *(undefined4 *)(param_1 + 0x2a8) = param_3;
  iVar3 = *(int *)(param_1 + 0x2a0);
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + lVar4 * 8);
      if (((lVar2 != 0) && (lVar4 < (int)param_2[1])) &&
         (sVar1 = *(short *)(*param_2 + lVar4 * 2), *(short *)(lVar2 + 0x28) != sVar1)) {
        *(short *)(lVar2 + 0x28) = sVar1;
        uVar5 = FUN_1487e35e2(lVar2 + 0x10);
        *(undefined4 *)(lVar2 + 0x24) = uVar5;
        *(undefined4 *)(lVar2 + 0x90) = param_3;
        iVar3 = *(int *)(param_1 + 0x2a0);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  FUN_1487ebfa0(param_1);
  return;
}



// FUNCTION 1487ec26a FUN_1487ec26a body=632 status=ok
// SIG undefined FUN_1487ec26a(void)

byte FUN_1487ec26a(longlong param_1)

{
  longlong *plVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  byte *pbVar5;
  longlong lVar6;
  undefined8 uVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  byte bVar12;
  longlong lVar13;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar3 = *(uint *)(param_1 + 0x2b0);
  *(undefined4 *)(param_1 + 0x2b0) = 0;
  iVar10 = *(int *)(param_1 + 0x1d8);
  if ((longlong)iVar10 == 0) {
    uVar11 = 0;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x1d0);
    lVar13 = 0;
    do {
      pbVar5 = *(byte **)(lVar4 + lVar13);
      uVar2 = *(ushort *)(pbVar5 + 2);
      if (((((short)uVar2 < 0) || (*(int *)(param_1 + 0x1c8) <= (int)(short)uVar2)) ||
          (lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)uVar2 * 8), lVar6 == 0)
          ) || (*(char *)(lVar6 + 0x20) != '\0')) {
        pbVar5[0x15] = 0;
      }
      else {
        bVar12 = pbVar5[0x14];
        pbVar5[0x15] = bVar12;
        if ((*(float *)(pbVar5 + 0xc) <= *(float *)(lVar6 + 0x24)) &&
           (*(float *)(lVar6 + 0x24) < *(float *)(pbVar5 + 0x10))) {
          bVar12 = bVar12 ^ 1;
          pbVar5[0x15] = bVar12;
        }
        if (bVar12 != 0) {
          *(uint *)(param_1 + 0x2b0) = *(uint *)(param_1 + 0x2b0) | 1 << (*pbVar5 & 0x1f);
        }
      }
      lVar13 = lVar13 + 8;
    } while ((longlong)iVar10 * 8 != lVar13);
    uVar11 = *(uint *)(param_1 + 0x2b0);
  }
  uVar7 = local_78;
  if (uVar3 != uVar11) {
    iVar10 = *(int *)(param_1 + 0x100);
    if ((longlong)iVar10 != 0) {
      lVar4 = *(longlong *)(param_1 + 0xf8);
      lVar13 = 0;
      do {
        lVar6 = *(longlong *)(lVar4 + lVar13);
        if (((lVar6 != 0) && (*(uint *)(lVar6 + 0x18) != 0)) && (*(char *)(lVar6 + 0x38) == '\x01'))
        {
          *(bool *)(lVar6 + 0x39) = (*(uint *)(lVar6 + 0x18) & ~*(uint *)(param_1 + 0x2b0)) == 0;
        }
        lVar13 = lVar13 + 8;
      } while ((longlong)iVar10 * 8 != lVar13);
      uVar11 = *(uint *)(param_1 + 0x2b0);
    }
    plVar1 = (longlong *)(param_1 + 0x108);
    lVar4 = param_1 + 0x118;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    uStack_60 = lVar4;
    if (*(int *)(param_1 + 0x130) == 0) {
      iVar10 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar10 = *(int *)(param_1 + 0x130);
    }
    local_88 = (undefined4)local_68;
    uStack_84 = local_68._4_4_;
    uStack_80 = (undefined4)uStack_60;
    uStack_7c = uStack_60._4_4_;
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    uVar7 = local_78;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = plVar1;
    if ((local_78._4_4_ != iVar10) || (uStack_60 != lVar4)) {
      local_98 = param_1 + 0xf8;
      bVar12 = 0;
      iVar9 = local_78._4_4_;
      local_78 = uVar7;
      do {
        lVar13 = *(longlong *)(*local_90 + 8 + (longlong)iVar9 * 0x18);
        if ((lVar13 != 0) && ((*(uint *)(lVar13 + 0x6c) & (uVar11 ^ uVar3)) != 0)) {
          bVar8 = FUN_143cc9788(lVar13,local_98,param_1 + 0x1e0,param_1 + 0x180);
          bVar12 = bVar12 | bVar8;
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
        FUN_1449c0562(&local_88);
        iVar9 = local_78._4_4_;
      } while (local_90 != plVar1 ||
               (CONCAT44(uStack_7c,uStack_80) != lVar4 || local_78._4_4_ != iVar10));
      goto LAB_1487ec346;
    }
  }
  local_78 = uVar7;
  bVar12 = 0;
LAB_1487ec346:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar12 & 1;
}



// FUNCTION 1487ec4e4 FUN_1487ec4e4 body=113 status=ok
// SIG undefined FUN_1487ec4e4(void)

undefined8 FUN_1487ec4e4(longlong param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  iVar2 = *(int *)(param_1 + 0x1b8);
  if ((longlong)iVar2 == 0) {
    uVar7 = 0;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x1b0);
    lVar8 = 0;
    uVar7 = 0;
    do {
      lVar5 = *(longlong *)(lVar4 + lVar8);
      if (lVar5 != 0) {
        uVar1 = *(ushort *)(lVar5 + 2);
        if ((((-1 < (short)uVar1) && ((int)(short)uVar1 < *(int *)(param_1 + 0x1c8))) &&
            (lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)uVar1 * 8),
            lVar6 != 0)) && (iVar3 = *(int *)(lVar6 + 0x90), *(int *)(lVar5 + 4) != iVar3)) {
          *(int *)(lVar5 + 4) = iVar3;
          uVar7 = 1;
        }
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar2 * 8 != lVar8);
  }
  return uVar7;
}



// FUNCTION 1487ec556 FUN_1487ec556 body=306 status=ok
// SIG undefined FUN_1487ec556(void)

longlong * FUN_1487ec556(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  longlong **local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x110) != *(int *)(param_1 + 0x13c)) {
    lVar1 = *param_2;
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar6 = (uint)lVar1 & 0xffff;
    lVar5 = param_1 + 0x140;
    if (*(longlong *)(param_1 + 0x148) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x148);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x150) - 1U &
                             (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar6) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        plVar3 = (longlong *)(*(longlong *)(param_1 + 0x108) + (longlong)iVar4 * 0x18);
        if (*plVar3 == lVar1) {
          if (((plVar3 != (longlong *)0x0) && (plVar3 + 1 != (longlong *)0x0)) &&
             (plVar3 = (longlong *)plVar3[1], plVar3 != (longlong *)0x0)) goto LAB_1487ec66a;
          break;
        }
        iVar4 = (int)plVar3[2];
      } while (iVar4 != -1);
    }
  }
  local_40 = (longlong *)FUN_14001cc68(0x70,0x10);
  local_40[1] = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  local_40[4] = 0;
  local_40[5] = 0;
  local_40[6] = 0;
  local_40[7] = 0;
  local_40[8] = 0;
  local_40[9] = 0;
  local_40[10] = 0;
  local_40[0xb] = 0;
  local_40[0xc] = 0;
  local_40[0xd] = 0;
  local_30 = &local_40;
  *local_40 = *param_2;
  local_38 = param_2;
  FUN_1487fa8c8((longlong *)(param_1 + 0x108),local_24);
  plVar3 = local_40;
LAB_1487ec66a:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return plVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487ec68a FUN_1487ec68a body=1122 status=ok
// SIG undefined FUN_1487ec68a(void)

void FUN_1487ec68a(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  undefined2 **ppuVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined2 uVar7;
  short sVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined2 *_Dst;
  undefined2 uVar11;
  int iVar12;
  undefined2 **ppuVar13;
  longlong lVar14;
  undefined4 uVar15;
  undefined1 auStack_f8 [40];
  longlong *local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  longlong local_b8;
  undefined2 **local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined2 local_84 [2];
  undefined2 *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((param_3 != (longlong *)0x0) && ((int)param_3[1] != 0)) {
    puVar10 = (undefined8 *)FUN_14001cc68(0x58);
    *puVar10 = 0;
    puVar10[1] = 0;
    puVar10[2] = 0;
    puVar10[3] = 0;
    puVar10[6] = 0;
    puVar10[7] = 0;
    puVar10[4] = 0;
    puVar10[5] = 0;
    puVar10[8] = 0;
    puVar10[9] = 0;
    puVar10[10] = 0;
    *(undefined1 *)puVar10 = 1;
    *(undefined2 *)((longlong)puVar10 + 6) = 0xffff;
    puVar10[1] = 0;
    puVar10[2] = 0;
    *(undefined8 *)((longlong)puVar10 + 0x34) = 0xffffffff00000080;
    if (param_2 == (undefined8 *)0x0) {
      uVar7 = (undefined2)*(undefined4 *)(param_1 + 0x1f8);
      uVar11 = 0xffff;
      local_80 = (undefined2 *)0x0;
    }
    else {
      uVar11 = *(undefined2 *)(param_2 + 2);
      uVar7 = (undefined2)*(undefined4 *)(param_1 + 0x1f8);
      local_80 = (undefined2 *)*param_2;
    }
    *(undefined2 *)((longlong)puVar10 + 2) = uVar11;
    *(undefined2 *)((longlong)puVar10 + 4) = uVar7;
    local_b0 = &local_80;
    local_a8 = (undefined2 *)((longlong)puVar10 + 4);
    FUN_1487f9558(param_1 + 0x200,local_84);
    iVar12 = *(int *)(param_1 + 0x1f8);
    *(uint *)(param_1 + 0x1f8) = iVar12 + 1U;
    if (*(uint *)(param_1 + 0x1fc) < iVar12 + 1U) {
      FUN_1487f9878(param_1 + 0x1f0,iVar12);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x1f0) + (longlong)iVar12 * 8) = puVar10;
    if (param_2 == (undefined8 *)0x0) {
      ppuVar13 = (undefined2 **)(param_1 + 0x30);
    }
    else {
      ppuVar13 = (undefined2 **)(param_2[1] + 8);
      if (param_2[1] == 0) {
        ppuVar13 = (undefined2 **)0x0;
      }
      *(undefined2 *)((longlong)param_2 + 0x14) = *(undefined2 *)((longlong)puVar10 + 4);
      do {
        uVar2 = *(ushort *)((longlong)param_2 + 0x12);
        if ((((short)uVar2 < 0) || (*(int *)(param_1 + 0x100) <= (int)(short)uVar2)) ||
           (param_2 = *(undefined8 **)(*(longlong *)(param_1 + 0xf8) + (ulonglong)uVar2 * 8),
           param_2 == (undefined8 *)0x0)) {
          sVar8 = -(*(byte *)(param_1 + 0x158) ^ 1);
          break;
        }
        sVar8 = *(short *)((longlong)param_2 + 0x14);
      } while (sVar8 < 0);
      *(short *)((longlong)puVar10 + 6) = sVar8;
    }
    if ((longlong)(int)param_3[1] != 0) {
      local_c0 = puVar10 + 1;
      lVar14 = *param_3;
      local_b8 = (longlong)(int)param_3[1] * 0x80 + lVar14;
      local_d0 = (longlong *)(param_1 + 0x1c0);
      ppuVar1 = ppuVar13 + 2;
      local_c8 = puVar10;
      do {
        local_84[0] = *(undefined2 *)(param_1 + 0x1c8);
        local_a8 = local_84;
        local_b0 = (undefined2 **)(lVar14 + 8);
        FUN_140870298(local_c0,&local_80,&local_b0,0);
        _Dst = (undefined2 *)FUN_14001cc68(0xa0);
        memset(_Dst,0,0xa0);
        *(undefined ***)(_Dst + 8) = &PTR_FUN_14aff1550;
        *(undefined8 *)(_Dst + 0x4c) = 0;
        *(undefined8 *)(_Dst + 0x2c) = 0;
        *(undefined8 *)(_Dst + 0x30) = 0;
        *(undefined8 *)(_Dst + 0x34) = 0;
        *(undefined8 *)(_Dst + 0x38) = 0;
        *(undefined8 *)(_Dst + 0x3c) = 0;
        *(undefined8 *)(_Dst + 0x40) = 0;
        *(undefined8 *)(_Dst + 0x42) = 0;
        *(undefined8 *)(_Dst + 0x46) = 0;
        *_Dst = *(undefined2 *)(param_1 + 0x1c8);
        _Dst[1] = *(undefined2 *)((longlong)puVar10 + 2);
        _Dst[2] = *(undefined2 *)((longlong)puVar10 + 4);
        *(undefined8 *)(_Dst + 0x1c) = *(undefined8 *)(lVar14 + 0x28);
        uVar5 = *(undefined8 *)(lVar14 + 8);
        uVar6 = *(undefined8 *)(lVar14 + 0x10);
        uVar15 = *(undefined4 *)(lVar14 + 0x1c);
        uVar3 = *(undefined4 *)(lVar14 + 0x20);
        uVar4 = *(undefined4 *)(lVar14 + 0x24);
        *(undefined4 *)(_Dst + 0x14) = *(undefined4 *)(lVar14 + 0x18);
        *(undefined4 *)(_Dst + 0x16) = uVar15;
        *(undefined4 *)(_Dst + 0x18) = uVar3;
        *(undefined4 *)(_Dst + 0x1a) = uVar4;
        *(undefined8 *)(_Dst + 0xc) = uVar5;
        *(undefined8 *)(_Dst + 0x10) = uVar6;
        *(undefined8 *)(_Dst + 0x20) = *(undefined8 *)(lVar14 + 0x30);
        uVar15 = *(undefined4 *)(lVar14 + 0x3c);
        uVar3 = *(undefined4 *)(lVar14 + 0x40);
        uVar4 = *(undefined4 *)(lVar14 + 0x44);
        *(undefined4 *)(_Dst + 0x24) = *(undefined4 *)(lVar14 + 0x38);
        *(undefined4 *)(_Dst + 0x26) = uVar15;
        *(undefined4 *)(_Dst + 0x28) = uVar3;
        *(undefined4 *)(_Dst + 0x2a) = uVar4;
        FUN_144a787a6(_Dst + 0x2c,lVar14 + 0x48);
        *(undefined8 *)(_Dst + 0x34) = *(undefined8 *)(lVar14 + 0x58);
        uVar15 = *(undefined4 *)(lVar14 + 100);
        uVar3 = *(undefined4 *)(lVar14 + 0x68);
        uVar4 = *(undefined4 *)(lVar14 + 0x6c);
        *(undefined4 *)(_Dst + 0x38) = *(undefined4 *)(lVar14 + 0x60);
        *(undefined4 *)(_Dst + 0x3a) = uVar15;
        *(undefined4 *)(_Dst + 0x3c) = uVar3;
        *(undefined4 *)(_Dst + 0x3e) = uVar4;
        FUN_144a787a6(_Dst + 0x40,lVar14 + 0x70);
        if ((ppuVar13 != (undefined2 **)0x0) && (*(char *)(lVar14 + 0x10) == '\0')) {
          local_80 = (undefined2 *)&DAT_100000000;
          local_70 = 0xffffffff;
          uStack_68 = 0;
          uStack_78 = ppuVar1;
          if (*(int *)(ppuVar13 + 5) == 0) {
            iVar12 = 0;
          }
          else {
            FUN_1449c0562(&local_80);
            iVar12 = *(int *)(ppuVar13 + 5);
          }
          uStack_90 = CONCAT44(uStack_64,uStack_68);
          local_98 = local_70;
          uVar5 = local_98;
          local_a8 = local_80;
          uStack_a0 = (undefined4)uStack_78;
          uStack_9c = uStack_78._4_4_;
          local_98._4_4_ = (int)((ulonglong)local_70 >> 0x20);
          iVar9 = local_98._4_4_;
          local_b0 = ppuVar13;
          if ((local_98._4_4_ != iVar12) ||
             (puVar10 = local_c8, local_98 = uVar5, uStack_78 != ppuVar1)) {
            do {
              local_98 = uVar5;
              if (*(undefined2 **)(*local_b0 + (longlong)iVar9 * 0xe) ==
                  *(undefined2 **)(lVar14 + 8)) {
                _Dst[0x14] = (*local_b0)[(longlong)iVar9 * 0xe + 8];
                uVar15 = FUN_1487e35e2(_Dst + 8);
                *(undefined4 *)(_Dst + 0x12) = uVar15;
                *(undefined4 *)(_Dst + 0x48) = *(undefined4 *)(param_1 + 0x2a8);
              }
              local_98 = CONCAT44(local_98._4_4_,(uint)local_98 & ~local_a8._4_4_);
              FUN_1449c0562(&local_a8);
              puVar10 = local_c8;
              iVar9 = local_98._4_4_;
              uVar5 = local_98;
            } while (local_b0 != ppuVar13 ||
                     ((undefined2 **)CONCAT44(uStack_9c,uStack_a0) != ppuVar1 ||
                     local_98._4_4_ != iVar12));
          }
        }
        iVar12 = *(int *)(param_1 + 0x1c8);
        *(uint *)(param_1 + 0x1c8) = iVar12 + 1U;
        if (*(uint *)(param_1 + 0x1cc) < iVar12 + 1U) {
          FUN_1487f98fe(local_d0,iVar12);
        }
        *(undefined2 **)(*local_d0 + (longlong)iVar12 * 8) = _Dst;
        lVar14 = lVar14 + 0x80;
      } while (lVar14 != local_b8);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487ecaee FUN_1487ecaee body=966 status=ok
// SIG undefined FUN_1487ecaee(void)

void FUN_1487ecaee(longlong param_1,longlong param_2,longlong *param_3)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  longlong *plVar6;
  short *psVar7;
  byte *pbVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  byte bVar16;
  uint *puVar17;
  longlong lVar18;
  bool bVar19;
  
  if (param_2 == 0) {
    return;
  }
  uVar3 = *(ushort *)(param_2 + 0x12);
  if (((short)uVar3 < 0) || (*(int *)(param_1 + 0x100) <= (int)(short)uVar3)) {
    lVar9 = 0;
  }
  else {
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0xf8) + (ulonglong)uVar3 * 8);
  }
  sVar4 = *(short *)(param_2 + 0x2a);
  if ((longlong)sVar4 < 1) {
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(undefined1 *)(param_2 + 0x38) = 1;
    if (lVar9 != 0) goto LAB_1487ecbbd;
LAB_1487ecd16:
    bVar19 = (*(uint *)(param_2 + 0x18) & ~*(uint *)(param_1 + 0x2b0)) == 0;
  }
  else {
    lVar12 = 0;
    iVar14 = 0;
    iVar13 = 0;
    do {
      lVar18 = *(longlong *)((longlong)*(short *)(param_2 + 0x28) * 8 + *param_3 + lVar12 * 8);
      if (lVar18 != 0) {
        iVar14 = iVar14 + 1;
        iVar13 = iVar13 + (uint)*(byte *)(lVar18 + 0x10);
      }
      lVar12 = lVar12 + 1;
    } while (sVar4 != lVar12);
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(undefined1 *)(param_2 + 0x38) = 1;
    bVar16 = 1;
    if ((lVar9 != 0) && (iVar14 < 1 || 0 < iVar13)) {
LAB_1487ecbbd:
      *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(lVar9 + 0x18);
      bVar16 = *(byte *)(lVar9 + 0x38);
      *(byte *)(param_2 + 0x38) = bVar16;
    }
    puVar17 = (uint *)(param_2 + 0x18);
    if (sVar4 < 1) {
LAB_1487ecd11:
      if ((bVar16 & 1) != 0) goto LAB_1487ecd16;
    }
    else {
      iVar15 = 0;
      iVar14 = 0;
      iVar13 = 0;
      do {
        lVar9 = *(longlong *)
                 (*param_3 + ((longlong)iVar13 + (longlong)*(short *)(param_2 + 0x28)) * 8);
        if ((lVar9 != 0) && (*(longlong *)(lVar9 + 0x14) != 0)) {
          iVar15 = iVar15 + 1;
          lVar12 = param_2;
          do {
            uVar3 = *(ushort *)(lVar12 + 0x14);
            if (-1 < (short)uVar3) {
              if (*(int *)(param_1 + 0x1f8) <= (int)(short)uVar3) goto LAB_1487ecc53;
              plVar6 = (longlong *)((ulonglong)uVar3 * 8 + *(longlong *)(param_1 + 0x1f0));
              goto LAB_1487ecc4b;
            }
            uVar3 = *(ushort *)(lVar12 + 0x12);
          } while (((-1 < (short)uVar3) && ((int)(short)uVar3 < *(int *)(param_1 + 0x100))) &&
                  (lVar12 = *(longlong *)(*(longlong *)(param_1 + 0xf8) + (ulonglong)uVar3 * 8),
                  lVar12 != 0));
          if (*(char *)(param_1 + 0x158) == '\x01') {
            plVar6 = *(longlong **)(param_1 + 0x1f0);
LAB_1487ecc4b:
            if (((*plVar6 != 0) &&
                (psVar7 = (short *)FUN_1487eceb4(param_1,lVar9 + 0x14), psVar7 != (short *)0x0)) &&
               ((char)psVar7[0x10] == '\0')) {
              iVar14 = iVar14 + 1;
              lVar12 = *(longlong *)(param_1 + 0x1d0);
              iVar5 = *(int *)(param_1 + 0x1d8);
              lVar18 = (longlong)iVar5;
              if (lVar18 != 0) {
                lVar10 = 0;
                do {
                  pbVar8 = *(byte **)(lVar12 + lVar10);
                  if ((pbVar8 != (byte *)0x0) && (*(short *)(pbVar8 + 2) == *psVar7)) {
                    if ((*(float *)(pbVar8 + 0xc) == *(float *)(lVar9 + 0x1c)) &&
                       (!NAN(*(float *)(pbVar8 + 0xc)) && !NAN(*(float *)(lVar9 + 0x1c)))) {
                      if (((*(float *)(pbVar8 + 0x10) == *(float *)(lVar9 + 0x20)) &&
                          (!NAN(*(float *)(pbVar8 + 0x10)) && !NAN(*(float *)(lVar9 + 0x20)))) &&
                         (pbVar8[0x14] == *(byte *)(lVar9 + 0x24))) {
                        *puVar17 = *puVar17 | 1 << (*pbVar8 & 0x1f);
                        goto LAB_1487ecc53;
                      }
                    }
                  }
                  lVar10 = lVar10 + 8;
                } while (lVar18 * 8 - lVar10 != 0);
              }
              pbVar8 = (byte *)FUN_14001cc68(0x18,0x10);
              pbVar8[0] = 0xff;
              pbVar8[1] = 0xff;
              pbVar8[2] = 0xff;
              pbVar8[3] = 0xff;
              pbVar8[4] = 0;
              pbVar8[5] = 0;
              pbVar8[6] = 0;
              pbVar8[7] = 0;
              pbVar8[8] = 0;
              pbVar8[9] = 0;
              pbVar8[10] = 0;
              pbVar8[0xb] = 0;
              pbVar8[0xc] = 0;
              pbVar8[0xd] = 0;
              pbVar8[0xe] = 0;
              pbVar8[0xf] = 0x3f;
              pbVar8[0x10] = 0;
              pbVar8[0x11] = 0;
              pbVar8[0x12] = 200;
              pbVar8[0x13] = 0x42;
              pbVar8[0x14] = 0;
              pbVar8[0x15] = 1;
              *(short *)(pbVar8 + 2) = *psVar7;
              *(short *)pbVar8 = (short)iVar5;
              *(uint *)(param_1 + 0x1d8) = iVar5 + 1U;
              if (*(uint *)(param_1 + 0x1dc) < iVar5 + 1U) {
                FUN_1487f9984((longlong *)(param_1 + 0x1d0));
                lVar12 = *(longlong *)(param_1 + 0x1d0);
              }
              *(byte **)(lVar12 + lVar18 * 8) = pbVar8;
              *(uint *)(psVar7 + 4) = *(uint *)(psVar7 + 4) | 1 << (*pbVar8 & 0x1f);
              *(undefined8 *)(pbVar8 + 4) = *(undefined8 *)(lVar9 + 0x14);
              fVar1 = *(float *)(lVar9 + 0x1c);
              *(float *)(pbVar8 + 0xc) = fVar1;
              fVar2 = *(float *)(lVar9 + 0x20);
              *(float *)(pbVar8 + 0x10) = fVar2;
              bVar16 = *(byte *)(lVar9 + 0x24);
              pbVar8[0x14] = bVar16;
              uVar11 = 1 << (*pbVar8 & 0x1f);
              *puVar17 = *puVar17 | uVar11;
              if ((char)psVar7[0x10] == '\0') {
                pbVar8[0x15] = bVar16;
                if ((fVar1 <= *(float *)(psVar7 + 0x12)) && (*(float *)(psVar7 + 0x12) < fVar2)) {
                  bVar16 = bVar16 ^ 1;
                  pbVar8[0x15] = bVar16;
                }
                if (bVar16 != 0) {
                  *(uint *)(param_1 + 0x2b0) = *(uint *)(param_1 + 0x2b0) | uVar11;
                }
              }
              else {
                pbVar8[0x15] = 0;
              }
            }
          }
        }
LAB_1487ecc53:
        iVar13 = iVar13 + 1;
      } while (iVar13 < *(short *)(param_2 + 0x2a));
      if (iVar15 < 1 || 0 < iVar14) {
        bVar16 = *(byte *)(param_2 + 0x38);
        goto LAB_1487ecd11;
      }
      *(byte *)(param_2 + 0x38) = 0;
    }
    bVar19 = false;
  }
  *(bool *)(param_2 + 0x39) = bVar19;
  return;
}



// FUNCTION 1487eceb4 FUN_1487eceb4 body=261 status=ok
// SIG undefined FUN_1487eceb4(void)

undefined8 FUN_1487eceb4(longlong param_1,ulonglong *param_2,longlong param_3)

{
  ulonglong *puVar1;
  ushort uVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar3 = *param_2;
  if (param_3 != 0 && uVar3 != 0) {
    uVar4 = (uint)(uVar3 >> 0x10);
    do {
      if (*(int *)(param_3 + 0x10) != *(int *)(param_3 + 0x3c)) {
        lVar5 = param_3 + 0x40;
        if (*(longlong *)(param_3 + 0x48) != 0) {
          lVar5 = *(longlong *)(param_3 + 0x48);
        }
        iVar6 = *(int *)(lVar5 + (ulonglong)
                                 (*(int *)(param_3 + 0x50) - 1U &
                                 (int)(uVar3 >> 0x20) +
                                 ((int)uVar3 << 0x10 | (uint)(uVar3 & 0xffff)) +
                                 (uVar4 << 0x13 | uVar4 & 0xffff) + (int)((uVar3 & 0xffff) >> 4)) *
                                 4);
        if (iVar6 != -1) {
          do {
            puVar1 = (ulonglong *)(*(longlong *)(param_3 + 8) + (longlong)iVar6 * 0x14);
            if (*puVar1 == uVar3) {
              if (puVar1 + 1 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) {
                uVar2 = (ushort)puVar1[1];
                if ((-1 < (short)uVar2) && ((int)(short)uVar2 < *(int *)(param_1 + 0x1c8))) {
                  return *(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)uVar2 * 8);
                }
              }
              break;
            }
            iVar6 = *(int *)((longlong)puVar1 + 0xc);
          } while (iVar6 != -1);
        }
      }
      uVar2 = *(ushort *)(param_3 + 6);
    } while (((-1 < (short)uVar2) && ((int)(short)uVar2 < *(int *)(param_1 + 0x1f8))) &&
            (param_3 = *(longlong *)(*(longlong *)(param_1 + 0x1f0) + (ulonglong)uVar2 * 8),
            param_3 != 0));
  }
  return 0;
}



// FUNCTION 1487ecfba FUN_1487ecfba body=888 status=ok
// SIG undefined FUN_1487ecfba(void)

void FUN_1487ecfba(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  short *psVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  
  if ((param_3 != (longlong *)0x0) && ((longlong)(int)param_3[1] != 0)) {
    while (param_2 != 0) {
      uVar3 = *(ushort *)(param_2 + 0x14);
      if (-1 < (short)uVar3) {
        if (*(int *)(param_1 + 0x1f8) <= (int)(short)uVar3) {
          return;
        }
        plVar12 = (longlong *)((ulonglong)uVar3 * 8 + *(longlong *)(param_1 + 0x1f0));
        goto LAB_1487ed02d;
      }
      uVar3 = *(ushort *)(param_2 + 0x12);
      if (((short)uVar3 < 0) || (*(int *)(param_1 + 0x100) <= (int)(short)uVar3)) break;
      param_2 = *(longlong *)(*(longlong *)(param_1 + 0xf8) + (ulonglong)uVar3 * 8);
    }
    if (*(char *)(param_1 + 0x158) == '\x01') {
      plVar12 = *(longlong **)(param_1 + 0x1f0);
LAB_1487ed02d:
      if (*plVar12 != 0) {
        lVar15 = *param_3;
        lVar1 = lVar15 + (longlong)(int)param_3[1] * 0x28;
        plVar12 = (longlong *)(param_1 + 0x1b0);
        do {
          if ((((*(longlong *)(lVar15 + 8) != 0) &&
               (lVar10 = *(longlong *)(lVar15 + 0x10), lVar10 != 0)) &&
              (lVar16 = *(longlong *)(lVar15 + 0x18), lVar16 != 0)) &&
             ((*(longlong *)(lVar15 + 0x20) != 0 &&
              (psVar7 = (short *)FUN_1487eceb4(param_1,lVar15 + 8), psVar7 != (short *)0x0)))) {
            lVar14 = *(longlong *)(param_1 + 0x1a0);
            iVar4 = *(int *)(param_1 + 0x1a8);
            lVar13 = (longlong)iVar4;
            if (lVar13 != 0) {
              lVar11 = 0;
              do {
                puVar8 = *(undefined8 **)(lVar14 + lVar11);
                if (((puVar8 != (undefined8 *)0x0) &&
                    (*(longlong *)((longlong)puVar8 + 4) == lVar10)) &&
                   (*(longlong *)((longlong)puVar8 + 0xc) == lVar16)) goto LAB_1487ed147;
                lVar11 = lVar11 + 8;
              } while (lVar13 * 8 - lVar11 != 0);
            }
            puVar8 = (undefined8 *)FUN_14001cc68(0x28);
            *puVar8 = 0;
            puVar8[1] = 0;
            *(undefined8 *)((longlong)puVar8 + 0x14) = 0;
            *(undefined8 *)((longlong)puVar8 + 0x1c) = 0;
            *(undefined4 *)((longlong)puVar8 + 0x24) = 0;
            *(undefined8 *)((longlong)puVar8 + 4) = *(undefined8 *)(lVar15 + 0x10);
            *(undefined8 *)((longlong)puVar8 + 0xc) = *(undefined8 *)(lVar15 + 0x18);
            *(short *)puVar8 = (short)iVar4;
            *(uint *)(param_1 + 0x1a8) = iVar4 + 1U;
            if (*(uint *)(param_1 + 0x1ac) < iVar4 + 1U) {
              FUN_1487f9a0a((longlong *)(param_1 + 0x1a0));
              lVar14 = *(longlong *)(param_1 + 0x1a0);
            }
            *(undefined8 **)(lVar14 + lVar13 * 8) = puVar8;
LAB_1487ed147:
            lVar10 = puVar8[3];
            iVar4 = *(int *)(puVar8 + 4);
            lVar16 = (longlong)iVar4;
            if (lVar16 != 0) {
              lVar14 = 0;
              do {
                uVar3 = *(ushort *)(lVar10 + lVar14);
                if ((((-1 < (short)uVar3) && ((int)(short)uVar3 < *(int *)(param_1 + 0x1b8))) &&
                    (lVar13 = *(longlong *)(*plVar12 + (ulonglong)uVar3 * 8), lVar13 != 0)) &&
                   ((*psVar7 == *(short *)(lVar13 + 2) &&
                    (*(longlong *)(lVar13 + 8) == *(longlong *)(lVar15 + 0x20)))))
                goto LAB_1487ed07a;
                lVar14 = lVar14 + 2;
              } while (lVar16 * 2 - lVar14 != 0);
            }
            plVar2 = puVar8 + 3;
            iVar5 = *(int *)(param_1 + 0x1b8);
            if ((longlong)iVar5 != 0) {
              lVar14 = 0;
              do {
                puVar6 = *(undefined2 **)(*(longlong *)(param_1 + 0x1b0) + lVar14);
                if (((puVar6 != (undefined2 *)0x0) &&
                    (*(longlong *)(puVar6 + 4) == *(longlong *)(lVar15 + 0x20))) &&
                   (puVar6[1] == *psVar7)) {
                  *(uint *)(puVar8 + 4) = iVar4 + 1U;
                  if (*(uint *)((longlong)puVar8 + 0x24) < iVar4 + 1U) {
                    FUN_1405b572a(plVar2,iVar4);
                    lVar10 = *plVar2;
                  }
                  *(undefined2 *)(lVar10 + lVar16 * 2) = *puVar6;
                  goto LAB_1487ed07a;
                }
                lVar14 = lVar14 + 8;
              } while ((longlong)iVar5 * 8 - lVar14 != 0);
            }
            puVar9 = (undefined8 *)FUN_14001cc68(0x10,0x10);
            *puVar9 = 0xffffffff;
            puVar9[1] = *(undefined8 *)(lVar15 + 0x20);
            *(short *)((longlong)puVar9 + 2) = *psVar7;
            *(short *)puVar9 = (short)iVar5;
            *(undefined1 *)(psVar7 + 6) = 1;
            iVar4 = *(int *)(puVar8 + 4);
            *(uint *)(puVar8 + 4) = iVar4 + 1U;
            if (*(uint *)((longlong)puVar8 + 0x24) < iVar4 + 1U) {
              FUN_1405b572a(plVar2,iVar4);
            }
            *(undefined2 *)(*plVar2 + (longlong)iVar4 * 2) = *(undefined2 *)puVar9;
            iVar4 = *(int *)(param_1 + 0x1b8);
            *(uint *)(param_1 + 0x1b8) = iVar4 + 1U;
            if (*(uint *)(param_1 + 0x1bc) < iVar4 + 1U) {
              FUN_1487f9a90(plVar12,iVar4);
            }
            *(undefined8 **)(*plVar12 + (longlong)iVar4 * 8) = puVar9;
          }
LAB_1487ed07a:
          lVar15 = lVar15 + 0x28;
        } while (lVar15 != lVar1);
      }
    }
  }
  return;
}



// FUNCTION 1487ed332 FUN_1487ed332 body=859 status=ok
// SIG undefined FUN_1487ed332(void)

void FUN_1487ed332(longlong param_1)

{
  char *pcVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  ushort uVar4;
  ushort *puVar5;
  char *pcVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined2 local_9a;
  longlong *local_98;
  undefined4 local_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1487f9b15(*(undefined8 *)(param_1 + 0x1c0));
  *(undefined4 *)(param_1 + 0x2a0) = 0;
  iVar12 = *(int *)(param_1 + 0x1c8);
  if (0 < iVar12) {
    lVar11 = 0;
    do {
      puVar5 = *(ushort **)(*(longlong *)(param_1 + 0x1c0) + lVar11 * 8);
      if (puVar5 != (ushort *)0x0) {
        if (((char)puVar5[0x10] == '\0') &&
           (*(int *)(param_1 + 0x2a0) = *(int *)(param_1 + 0x2a0) + 1, (char)puVar5[6] == '\x01')) {
          *(int *)(param_1 + 0x2a4) = *(int *)(param_1 + 0x2a4) + 1;
        }
        uVar4 = *puVar5;
        if (((int)(uint)uVar4 < iVar12 && -1 < (short)uVar4) &&
           (lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)uVar4 * 8),
           lVar13 != 0)) {
          *(int *)(lVar13 + 0x90) = (int)lVar11;
        }
        *puVar5 = (ushort)lVar11;
        iVar12 = *(int *)(param_1 + 0x1c8);
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < iVar12);
  }
  local_a8 = param_1 + 0x250;
  FUN_1487f59ae();
  if ((longlong)*(int *)(param_1 + 0x1f8) != 0) {
    puVar14 = *(undefined8 **)(param_1 + 0x1f0);
    puVar3 = puVar14 + *(int *)(param_1 + 0x1f8);
    do {
      pcVar6 = (char *)*puVar14;
      if (pcVar6 != (char *)0x0) {
        pcVar1 = pcVar6 + 0x18;
        local_70 = 0x100000000;
        local_60 = 0xffffffff;
        uStack_58 = 0;
        uStack_68 = pcVar1;
        if (*(int *)(pcVar6 + 0x30) == 0) {
          iVar12 = 0;
        }
        else {
          FUN_1449c0562(&local_70);
          iVar12 = *(int *)(pcVar6 + 0x30);
        }
        plVar2 = (longlong *)(pcVar6 + 8);
        uStack_78 = CONCAT44(uStack_54,uStack_58);
        local_80 = local_60;
        uVar9 = local_80;
        local_90 = (undefined4)local_70;
        uStack_8c = local_70._4_4_;
        uStack_88 = (undefined4)uStack_68;
        uStack_84 = uStack_68._4_4_;
        local_80._4_4_ = (int)((ulonglong)local_60 >> 0x20);
        iVar10 = local_80._4_4_;
        local_98 = plVar2;
        if ((local_80._4_4_ != iVar12) || (local_80 = uVar9, uStack_68 != pcVar1)) {
          do {
            local_80 = uVar9;
            uVar4 = *(ushort *)(*local_98 + 8 + (longlong)iVar10 * 0x14);
            if ((-1 < (short)uVar4) &&
               (((int)(short)uVar4 < *(int *)(param_1 + 0x1c8) &&
                (lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)uVar4 * 8),
                lVar11 != 0)))) {
              lVar13 = *local_98 + (longlong)iVar10 * 0x14;
              *(undefined2 *)(lVar13 + 8) = *(undefined2 *)(lVar11 + 0x90);
              if (*pcVar6 == '\x01') {
                local_9a = *(undefined2 *)(lVar11 + 0x90);
                uStack_68 = (char *)&local_9a;
                local_70 = lVar13;
                FUN_140870298(local_a8,local_4c,&local_70,0);
              }
            }
            local_80 = CONCAT44(local_80._4_4_,(uint)local_80 & ~uStack_8c);
            FUN_1449c0562(&local_90);
            iVar10 = local_80._4_4_;
            uVar9 = local_80;
          } while (local_98 != plVar2 ||
                   ((char *)CONCAT44(uStack_84,uStack_88) != pcVar1 || local_80._4_4_ != iVar12));
        }
      }
      puVar14 = puVar14 + 1;
    } while (puVar14 != puVar3);
  }
  iVar12 = *(int *)(param_1 + 0x1d8);
  if ((longlong)iVar12 != 0) {
    lVar11 = *(longlong *)(param_1 + 0x1d0);
    lVar13 = 0;
    do {
      lVar7 = *(longlong *)(lVar11 + lVar13);
      if (lVar7 != 0) {
        uVar4 = *(ushort *)(lVar7 + 2);
        if (((-1 < (short)uVar4) && ((int)(short)uVar4 < *(int *)(param_1 + 0x1c8))) &&
           (lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)uVar4 * 8), lVar8 != 0
           )) {
          *(undefined2 *)(lVar7 + 2) = *(undefined2 *)(lVar8 + 0x90);
        }
      }
      lVar13 = lVar13 + 8;
    } while ((longlong)iVar12 * 8 != lVar13);
  }
  iVar12 = *(int *)(param_1 + 0x1b8);
  if ((longlong)iVar12 != 0) {
    lVar11 = *(longlong *)(param_1 + 0x1b0);
    lVar13 = 0;
    do {
      lVar7 = *(longlong *)(lVar11 + lVar13);
      if (lVar7 != 0) {
        uVar4 = *(ushort *)(lVar7 + 2);
        if (((-1 < (short)uVar4) && ((int)(short)uVar4 < *(int *)(param_1 + 0x1c8))) &&
           (lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)uVar4 * 8), lVar8 != 0
           )) {
          *(undefined2 *)(lVar7 + 2) = *(undefined2 *)(lVar8 + 0x90);
        }
      }
      lVar13 = lVar13 + 8;
    } while ((longlong)iVar12 * 8 != lVar13);
  }
  iVar12 = *(int *)(param_1 + 0x1c8);
  if ((longlong)iVar12 != 0) {
    lVar11 = *(longlong *)(param_1 + 0x1c0);
    lVar13 = 0;
    do {
      lVar7 = *(longlong *)(lVar11 + lVar13);
      if (lVar7 != 0) {
        *(undefined4 *)(lVar7 + 0x90) = *(undefined4 *)(param_1 + 0x2a8);
      }
      lVar13 = lVar13 + 8;
    } while ((longlong)iVar12 * 8 != lVar13);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487ed68e FUN_1487ed68e body=210 status=ok
// SIG undefined FUN_1487ed68e(void)

void FUN_1487ed68e(longlong param_1,longlong *param_2)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  longlong lVar4;
  short sVar5;
  short *psVar6;
  
  if ((longlong)*(int *)(param_1 + 0x20) != 0) {
    psVar6 = *(short **)(param_1 + 0x18);
    psVar1 = psVar6 + *(int *)(param_1 + 0x20);
    do {
      sVar5 = *psVar6;
      if ((((-1 < sVar5) && ((int)sVar5 < (int)param_2[1])) &&
          (lVar4 = *(longlong *)(*param_2 + (longlong)(int)sVar5 * 8), lVar4 != 0)) &&
         (0 < *(short *)(lVar4 + 0x26))) {
        sVar5 = 0;
        do {
          sVar2 = *(short *)(lVar4 + 0x24);
          iVar3 = *(int *)(param_1 + 0x40);
          *(uint *)(param_1 + 0x40) = iVar3 + 1U;
          if (*(uint *)(param_1 + 0x44) < iVar3 + 1U) {
            FUN_1405b572a((longlong *)(param_1 + 0x38),iVar3);
          }
          *(short *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar3 * 2) = sVar2 + sVar5;
          sVar5 = sVar5 + 1;
        } while (sVar5 < *(short *)(lVar4 + 0x26));
      }
      psVar6 = psVar6 + 1;
    } while (psVar6 != psVar1);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_140ca8596(param_1 + 0x18,0);
    return;
  }
  return;
}



// FUNCTION 1487ed760 FUN_1487ed760 body=3075 status=ok
// SIG undefined FUN_1487ed760(void)

void FUN_1487ed760(longlong param_1,longlong *param_2,longlong *param_3)

{
  void **ppvVar1;
  ushort uVar2;
  undefined2 uVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  char cVar7;
  short sVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 uVar11;
  undefined2 *puVar12;
  undefined8 *puVar13;
  uint uVar14;
  longlong *plVar15;
  int iVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong lVar20;
  undefined1 auStack_188 [40];
  undefined8 local_160;
  ulonglong local_158;
  longlong *local_150;
  longlong local_148;
  longlong *local_140;
  longlong local_138;
  ulonglong local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  void *local_118;
  int local_110;
  undefined4 local_10c;
  ulonglong local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  void *local_f0;
  int local_e8;
  undefined4 local_e4;
  ulonglong local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  void *local_c8;
  int local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  int local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if ((((param_2 != (longlong *)0x0) && (-1 < (longlong)*(short *)((longlong)param_2 + 0x12))) &&
      (plVar10 = *(longlong **)
                  (*(longlong *)(param_1 + 0xf8) +
                  (longlong)*(short *)((longlong)param_2 + 0x12) * 8), plVar10 != (longlong *)0x0))
     && (plVar9 = (longlong *)(**(code **)(*param_2 + 0x18))(param_2), plVar9 != (longlong *)0x0)) {
    plVar15 = (longlong *)0x0;
    local_98 = 0;
    local_90 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_8c = 0xffffffff00000080;
    local_84 = 0;
    local_78 = 0;
    local_70 = 0;
    sVar8 = *(short *)((longlong)plVar10 + 0x32);
    iVar16 = 0;
    local_150 = param_3;
    if (0 < sVar8) {
      plVar15 = (longlong *)0x0;
      iVar16 = 0;
      local_140 = plVar9;
      do {
        lVar19 = *(longlong *)(*param_3 + ((longlong)iVar16 + (longlong)(short)plVar10[6]) * 8);
        if ((lVar19 != 0) && ((longlong)*(int *)(lVar19 + 0x18) != 0)) {
          lVar17 = (longlong)*(int *)(lVar19 + 0x18) * 0xa8;
          plVar9 = (longlong *)(*(longlong *)(lVar19 + 0x10) + 8);
          lVar19 = DAT_14cb73ca0;
          do {
            if (*plVar9 == lVar19) {
              if (plVar15 == (longlong *)0x0) {
                plVar15 = plVar9 + -1;
              }
            }
            else {
              FUN_144a13f80(&local_b8,&local_e0,plVar9,0);
              lVar19 = DAT_14cb73ca0;
            }
            plVar9 = plVar9 + 0x15;
            lVar17 = lVar17 + -0xa8;
          } while (lVar17 != 0);
          sVar8 = *(short *)((longlong)plVar10 + 0x32);
          param_3 = local_150;
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 < sVar8);
      iVar16 = (int)uStack_b0 - local_84;
      plVar9 = local_140;
    }
    iVar16 = (uint)(plVar15 != (longlong *)0x0) + iVar16;
    if (iVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar16);
    }
    if (*(int *)((longlong)plVar9 + 0xc) < iVar16) {
      FUN_1487f9f8c(plVar9);
    }
    FUN_1408d9e0e(&local_b8,0);
    sVar8 = *(short *)((longlong)plVar10 + 0x32);
    if (0 < sVar8) {
      iVar16 = 0;
      do {
        lVar19 = *(longlong *)(*param_3 + ((longlong)iVar16 + (longlong)(short)plVar10[6]) * 8);
        if ((lVar19 != 0) && ((longlong)*(int *)(lVar19 + 0x18) != 0)) {
          lVar17 = (longlong)*(int *)(lVar19 + 0x18) * 0xa8;
          plVar18 = (longlong *)(*(longlong *)(lVar19 + 0x10) + 8);
          do {
            lVar19 = *plVar18;
            if (lVar19 != DAT_14cb73ca0) {
              local_e0 = local_e0 & 0xffffffffffffff00;
              uVar6 = (uint)((ulonglong)lVar19 >> 0x10);
              uVar14 = (uint)lVar19 & 0xffff;
              FUN_1487f9ffc(&local_b8,
                            ((uint)lVar19 << 0x10 | uVar14) + (int)((ulonglong)lVar19 >> 0x20) +
                            (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar14 >> 4),plVar18,&local_e0);
              if ((char)local_e0 == '\0') {
                iVar4 = (int)plVar9[1];
                *(uint *)(plVar9 + 1) = iVar4 + 1U;
                if (*(uint *)((longlong)plVar9 + 0xc) < iVar4 + 1U) {
                  FUN_1487fa150(plVar9,iVar4);
                }
                puVar13 = (undefined8 *)((longlong)iVar4 * 0xb0 + *plVar9);
                *puVar13 = 0xffffffffffff;
                puVar13[1] = &PTR_FUN_14aff0bf0;
                puVar13[0x10] = 0;
                *(undefined4 *)(puVar13 + 0x11) = 0;
                puVar13[2] = 0;
                puVar13[3] = 0;
                puVar13[4] = 0;
                puVar13[5] = 0;
                puVar13[6] = 0;
                puVar13[7] = 0;
                puVar13[8] = 0;
                puVar13[9] = 0;
                puVar13[10] = 0;
                puVar13[0xb] = 0;
                puVar13[0xc] = 0;
                puVar13[0xd] = 0;
                *(undefined8 *)((longlong)puVar13 + 0x8c) = 0xffffffff00000080;
                *(undefined4 *)((longlong)puVar13 + 0x94) = 0;
                puVar13[0x14] = 0;
                *(undefined4 *)(puVar13 + 0x15) = 0;
                FUN_1486172ae(puVar13 + 1,plVar18 + -1);
                param_3 = local_150;
              }
            }
            plVar18 = plVar18 + 0x15;
            lVar17 = lVar17 + -0xa8;
          } while (lVar17 != 0);
          sVar8 = *(short *)((longlong)plVar10 + 0x32);
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 < sVar8);
    }
    if (plVar15 != (longlong *)0x0) {
      iVar16 = (int)plVar9[1];
      *(uint *)(plVar9 + 1) = iVar16 + 1U;
      if (*(uint *)((longlong)plVar9 + 0xc) < iVar16 + 1U) {
        FUN_1487fa150(plVar9,iVar16);
      }
      puVar13 = (undefined8 *)((longlong)iVar16 * 0xb0 + *plVar9);
      *puVar13 = 0xffffffffffff;
      puVar13[1] = &PTR_FUN_14aff0bf0;
      puVar13[0x10] = 0;
      *(undefined4 *)(puVar13 + 0x11) = 0;
      puVar13[2] = 0;
      puVar13[3] = 0;
      puVar13[4] = 0;
      puVar13[5] = 0;
      puVar13[6] = 0;
      puVar13[7] = 0;
      puVar13[8] = 0;
      puVar13[9] = 0;
      puVar13[10] = 0;
      puVar13[0xb] = 0;
      puVar13[0xc] = 0;
      puVar13[0xd] = 0;
      *(undefined8 *)((longlong)puVar13 + 0x8c) = 0xffffffff00000080;
      *(undefined4 *)((longlong)puVar13 + 0x94) = 0;
      puVar13[0x14] = 0;
      *(undefined4 *)(puVar13 + 0x15) = 0;
      FUN_1486172ae(puVar13 + 1,plVar15);
    }
    if ((longlong)(int)plVar9[1] != 0) {
      plVar15 = (longlong *)*plVar9;
      local_140 = plVar15 + (longlong)(int)plVar9[1] * 0x16;
      local_148 = param_1 + 0x2e8;
      local_158 = 0;
      local_160 = 0;
      local_150 = plVar10;
      do {
        plVar10 = local_150;
        local_e0 = plVar15[3];
        local_d8 = (undefined4)plVar15[4];
        uStack_d4 = *(undefined4 *)((longlong)plVar15 + 0x24);
        uStack_d0 = (undefined4)plVar15[5];
        uStack_cc = *(undefined4 *)((longlong)plVar15 + 0x2c);
        local_c8 = (void *)0x0;
        local_c0 = (int)plVar15[7];
        lVar19 = (longlong)local_c0;
        pvVar5 = (void *)plVar15[6];
        if (lVar19 == 0) {
          local_bc = 0;
        }
        else {
          FUN_1446dd670(&local_c8,local_c0,0);
          memcpy(local_c8,pvVar5,lVar19 * 2);
        }
        if (plVar15[8] == 0) {
LAB_1487edb51:
          pvVar5 = local_c8;
          if (CONCAT44(uStack_d4,local_d8) != 0) {
            local_108 = local_e0;
            local_100 = local_d8;
            uStack_fc = uStack_d4;
            uStack_f8 = uStack_d0;
            uStack_f4 = uStack_cc;
            local_f0 = (void *)0x0;
            lVar19 = (longlong)local_c0;
            local_e8 = local_c0;
            if (lVar19 == 0) {
              local_e4 = 0;
            }
            else {
              FUN_1446dd670(&local_f0,local_c0,0);
              memcpy(local_f0,pvVar5,lVar19 * 2);
            }
            FUN_1487fa1e4(local_148,&local_108);
            if (local_f0 != (void *)0x0) {
              FUN_1400020a8();
            }
          }
        }
        else {
          if ((local_158 & 1) == 0) {
            do {
              uVar2 = *(ushort *)((longlong)plVar10 + 0x14);
              if (-1 < (short)uVar2) {
                if (*(int *)(param_1 + 0x1f8) <= (int)(short)uVar2) goto LAB_1487ee148;
                puVar13 = (undefined8 *)((ulonglong)uVar2 * 8 + *(longlong *)(param_1 + 0x1f0));
                goto LAB_1487ee0bb;
              }
              uVar2 = *(ushort *)((longlong)plVar10 + 0x12);
            } while (((-1 < (short)uVar2) && ((int)(short)uVar2 < *(int *)(param_1 + 0x100))) &&
                    (plVar10 = *(longlong **)(*(longlong *)(param_1 + 0xf8) + (ulonglong)uVar2 * 8),
                    plVar10 != (longlong *)0x0));
            if (*(char *)(param_1 + 0x158) == '\x01') {
              puVar13 = *(undefined8 **)(param_1 + 0x1f0);
LAB_1487ee0bb:
              local_160 = *puVar13;
            }
            else {
LAB_1487ee148:
              local_160 = 0;
            }
          }
          puVar12 = (undefined2 *)FUN_1487eceb4(param_1,plVar15 + 8);
          local_158 = CONCAT71((int7)((ulonglong)puVar12 >> 8),1);
          if ((puVar12 == (undefined2 *)0x0) || (*(char *)(puVar12 + 0x10) != '\x02'))
          goto LAB_1487edb51;
          local_e0 = *(ulonglong *)(puVar12 + 0x34);
          local_d8 = *(undefined4 *)(puVar12 + 0x38);
          uStack_d4 = *(undefined4 *)(puVar12 + 0x3a);
          uStack_d0 = *(undefined4 *)(puVar12 + 0x3c);
          uStack_cc = *(undefined4 *)(puVar12 + 0x3e);
          FUN_144a787a6(&local_c8,puVar12 + 0x40);
          iVar16 = local_c0;
          pvVar5 = local_c8;
          uVar3 = *puVar12;
          *(undefined2 *)((longlong)plVar15 + 4) = uVar3;
          if (CONCAT44(uStack_d4,local_d8) != 0) {
            ppvVar1 = (void **)(plVar15 + 6);
            plVar15[3] = local_e0;
            *(undefined4 *)(plVar15 + 4) = local_d8;
            *(undefined4 *)((longlong)plVar15 + 0x24) = uStack_d4;
            *(undefined4 *)(plVar15 + 5) = uStack_d0;
            *(undefined4 *)((longlong)plVar15 + 0x2c) = uStack_cc;
            local_158 = CONCAT71((int7)((ulonglong)(plVar15 + 4) >> 8),1);
            if (ppvVar1 != &local_c8) {
              lVar19 = (longlong)local_c0;
              *(int *)(plVar15 + 7) = local_c0;
              if (local_c0 == 0 && *(int *)((longlong)plVar15 + 0x3c) == 0) {
                *(undefined4 *)((longlong)plVar15 + 0x3c) = 0;
              }
              else {
                FUN_1446dd670(ppvVar1,local_c0);
                if (iVar16 != 0) {
                  memcpy(*ppvVar1,pvVar5,lVar19 * 2);
                }
              }
            }
            goto LAB_1487edb51;
          }
          local_158 = CONCAT71((uint7)(byte)((ushort)uVar3 >> 8),1);
        }
        *(undefined2 *)((longlong)plVar15 + 6) = 0;
        lVar19 = plVar15[10];
        if (lVar19 == 0) {
          uVar11 = FUN_145d6456a();
          lVar19 = FUN_14477b664(uVar11);
          plVar15[10] = lVar19;
        }
        lVar17 = plVar15[0xb];
        if (lVar17 == 0) {
          if ((lVar19 != 0) && (plVar15[9] != 0)) {
            plVar10 = *(longlong **)(lVar19 + 0xb8);
            if ((plVar10 == (longlong *)0x0) ||
               (cVar7 = (**(code **)(*plVar10 + 0x108))(plVar10), cVar7 == '\0')) {
              plVar15[0xb] = 0;
            }
            else {
              uVar11 = (**(code **)(*plVar10 + 0x110))(plVar10);
              lVar17 = FUN_144aff482(uVar11,plVar15 + 9);
              plVar15[0xb] = lVar17;
              if (lVar17 != 0) goto LAB_1487edb83;
            }
          }
        }
        else {
LAB_1487edb83:
          if ((*(char *)(lVar17 + 0x18) == '\x01') && ((longlong)*(int *)(lVar17 + 0x28) != 0)) {
            lVar19 = *(longlong *)(lVar17 + 0x20);
            lVar17 = (longlong)*(int *)(lVar17 + 0x28) * 0x80 + lVar19;
            do {
              *(short *)((longlong)plVar15 + 6) =
                   *(short *)((longlong)plVar15 + 6) +
                   (ushort)(*(char *)(lVar19 + 0x10) == '\x01') * 3 + 1;
              if (*(char *)(lVar19 + 0x10) == '\x02') {
                local_108 = *(ulonglong *)(lVar19 + 0x20);
                local_100 = *(undefined4 *)(lVar19 + 0x28);
                uStack_fc = *(undefined4 *)(lVar19 + 0x2c);
                uStack_f8 = *(undefined4 *)(lVar19 + 0x30);
                uStack_f4 = *(undefined4 *)(lVar19 + 0x34);
                local_f0 = (void *)0x0;
                local_e8 = *(int *)(lVar19 + 0x40);
                lVar20 = (longlong)local_e8;
                pvVar5 = *(void **)(lVar19 + 0x38);
                if (lVar20 == 0) {
                  local_e4 = 0;
                }
                else {
                  FUN_1446dd670(&local_f0,local_e8,0);
                  memcpy(local_f0,pvVar5,lVar20 * 2);
                }
                pvVar5 = local_f0;
                if (CONCAT44(uStack_fc,local_100) != 0) {
                  local_130 = local_108;
                  local_128 = local_100;
                  uStack_124 = uStack_fc;
                  uStack_120 = uStack_f8;
                  uStack_11c = uStack_f4;
                  local_118 = (void *)0x0;
                  lVar20 = (longlong)local_e8;
                  local_110 = local_e8;
                  if (lVar20 == 0) {
                    local_10c = 0;
                  }
                  else {
                    FUN_1446dd670(&local_118,local_e8,0);
                    memcpy(local_118,pvVar5,lVar20 * 2);
                  }
                  FUN_1487fa1e4(local_148,&local_130);
                  if (local_118 != (void *)0x0) {
                    FUN_1400020a8();
                  }
                }
                local_138 = *(longlong *)(lVar19 + 0x48);
                if ((int)plVar15[0xd] != *(int *)((longlong)plVar15 + 0x94)) {
                  uVar6 = (uint)((ulonglong)local_138 >> 0x10);
                  uVar14 = (uint)local_138 & 0xffff;
                  plVar10 = (longlong *)plVar15[0x14];
                  if ((longlong *)plVar15[0x14] == (longlong *)0x0) {
                    plVar10 = plVar15 + 0x13;
                  }
                  iVar16 = *(int *)((longlong)plVar10 +
                                   (ulonglong)
                                   ((int)plVar15[0x15] - 1U &
                                   (int)((ulonglong)local_138 >> 0x20) +
                                   ((uint)local_138 << 0x10 | uVar14) +
                                   (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar14 >> 4)) * 4);
                  if (iVar16 != -1) {
                    do {
                      plVar10 = (longlong *)(plVar15[0xc] + (longlong)iVar16 * 0x18);
                      if (*plVar10 == local_138) {
                        if (plVar10 + 1 != (longlong *)0x0 && plVar10 != (longlong *)0x0) {
                          local_138 = plVar10[1];
                        }
                        break;
                      }
                      iVar16 = (int)plVar10[2];
                    } while (iVar16 != -1);
                  }
                }
                if (local_138 != 0) {
                  plVar10 = local_150;
                  if ((local_158 & 1) == 0) {
                    do {
                      uVar2 = *(ushort *)((longlong)plVar10 + 0x14);
                      if (-1 < (short)uVar2) {
                        if (*(int *)(param_1 + 0x1f8) <= (int)(short)uVar2) goto LAB_1487ede88;
                        puVar13 = (undefined8 *)
                                  ((ulonglong)uVar2 * 8 + *(longlong *)(param_1 + 0x1f0));
                        goto LAB_1487ede7b;
                      }
                      uVar2 = *(ushort *)((longlong)plVar10 + 0x12);
                    } while (((-1 < (short)uVar2) && ((int)(short)uVar2 < *(int *)(param_1 + 0x100))
                             ) && (plVar10 = *(longlong **)
                                              (*(longlong *)(param_1 + 0xf8) + (ulonglong)uVar2 * 8)
                                  , plVar10 != (longlong *)0x0));
                    if (*(char *)(param_1 + 0x158) == '\x01') {
                      puVar13 = *(undefined8 **)(param_1 + 0x1f0);
LAB_1487ede7b:
                      local_160 = *puVar13;
                    }
                    else {
LAB_1487ede88:
                      local_160 = 0;
                    }
                  }
                  lVar20 = FUN_1487eceb4(param_1,&local_138);
                  if ((lVar20 != 0) && (*(char *)(lVar20 + 0x20) == '\x01')) {
                    local_108 = *(ulonglong *)(lVar20 + 0x40);
                    local_100 = *(undefined4 *)(lVar20 + 0x48);
                    uStack_fc = *(undefined4 *)(lVar20 + 0x4c);
                    uStack_f8 = *(undefined4 *)(lVar20 + 0x50);
                    uStack_f4 = *(undefined4 *)(lVar20 + 0x54);
                    FUN_144a787a6(&local_f0,lVar20 + 0x58);
                    pvVar5 = local_f0;
                    if (CONCAT44(uStack_fc,local_100) != 0) {
                      local_130 = local_108;
                      local_128 = local_100;
                      uStack_124 = uStack_fc;
                      uStack_120 = uStack_f8;
                      uStack_11c = uStack_f4;
                      local_118 = (void *)0x0;
                      lVar20 = (longlong)local_e8;
                      local_110 = local_e8;
                      if (lVar20 == 0) {
                        local_10c = 0;
                      }
                      else {
                        FUN_1446dd670(&local_118,local_e8,0);
                        memcpy(local_118,pvVar5,lVar20 * 2);
                      }
                      FUN_1487fa1e4(local_148,&local_130);
                      if (local_118 != (void *)0x0) {
                        FUN_1400020a8();
                      }
                    }
                  }
                }
                if (local_f0 != (void *)0x0) {
                  FUN_1400020a8();
                }
              }
              lVar19 = lVar19 + 0x80;
            } while (lVar19 != lVar17);
          }
        }
        if (local_c8 != (void *)0x0) {
          FUN_1400020a8();
        }
        plVar15 = plVar15 + 0x16;
      } while (plVar15 != local_140);
    }
    local_70 = 0;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    FUN_14472eaf0(&local_b8);
  }
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487ee364 FUN_1487ee364 body=1835 status=ok
// SIG undefined FUN_1487ee364(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1487ee364(longlong param_1,longlong *param_2,longlong param_3)

{
  ushort uVar1;
  short sVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined2 *puVar9;
  longlong lVar10;
  ushort *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined2 uVar14;
  undefined8 *puVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong lVar19;
  int iVar20;
  longlong lVar21;
  longlong lVar22;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined8 local_d0;
  longlong local_c8;
  ulonglong local_c0;
  longlong *local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong *local_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  plVar6 = (longlong *)(**(code **)(*param_2 + 0x28))(param_2);
  if (plVar6 != (longlong *)0x0) {
    if ((uStack_70 & 0xffffffff) != 0) {
      if ((int)uStack_70 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uStack_70 & 0xffffffff);
      }
      *(undefined4 *)(plVar6 + 1) = 0;
      if (*(int *)((longlong)plVar6 + 0xc) != (int)uStack_70) {
        FUN_1474bc5fe(plVar6);
      }
      FUN_1487eea90(plVar6,uStack_70 & 0xffffffff);
      plVar7 = (longlong *)(**(code **)(*param_2 + 0x18))(param_2);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb73cb8) && (FUN_144b3d300(&DAT_14cb73cb8), DAT_14cb73cb8 == -1))
      {
        DAT_14cb73ca8 = 0;
        _DAT_14cb73cb0 = 0;
        atexit(FUN_143cca86b);
        _Init_thread_footer(&DAT_14cb73cb8);
      }
      if (0 < (int)uStack_70) {
        plVar18 = &DAT_14cb73ca8;
        if (plVar7 != (longlong *)0x0) {
          plVar18 = plVar7;
        }
        lVar16 = 0;
        local_d0 = 0;
        local_c0 = 0;
        local_c8 = param_1;
        local_b8 = plVar18;
LAB_1487ee4be:
        lVar22 = *(longlong *)(local_78 + lVar16 * 8);
        plVar7 = plVar18 + 1;
        if ((longlong)(int)*plVar7 != 0) {
          lVar19 = *plVar18;
          plVar17 = (longlong *)(lVar19 + 0x58);
          lVar21 = 0;
          do {
            if ((plVar17[-9] == *(longlong *)(local_88 + lVar16 * 8)) ||
               (plVar17[-9] == DAT_14cb73ca0)) {
              *(short *)(plVar17 + -0xb) = (short)lVar16;
              if ((plVar17[-7] != 0) &&
                 (lVar10 = FUN_1402d20ea((lVar19 - lVar21) + 0x18), lVar10 != 0)) {
                lVar22 = lVar10;
              }
              lVar10 = plVar17[-1];
              local_d8 = lVar22;
              if (lVar10 == 0) {
                uVar8 = FUN_145d6456a();
                lVar10 = FUN_14477b664(uVar8);
                plVar17[-1] = lVar10;
              }
              lVar12 = *plVar17;
              if (lVar12 == 0) {
                lVar22 = local_d8;
                plVar18 = local_b8;
                if ((lVar10 == 0) || (plVar17[-2] == 0)) break;
                plVar7 = *(longlong **)(lVar10 + 0xb8);
                if ((plVar7 == (longlong *)0x0) ||
                   (cVar3 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar3 == '\0')) {
                  *plVar17 = 0;
                  param_1 = local_c8;
                  lVar22 = local_d8;
                  plVar18 = local_b8;
                  break;
                }
                uVar8 = (**(code **)(*plVar7 + 0x110))(plVar7);
                lVar12 = FUN_144aff482(uVar8,(lVar19 - lVar21) + 0x48);
                *plVar17 = lVar12;
                param_1 = local_c8;
                lVar22 = local_d8;
                plVar18 = local_b8;
                if (lVar12 == 0) break;
              }
              lVar22 = local_d8;
              plVar18 = local_b8;
              if ((*(char *)(lVar12 + 0x18) == '\x01') &&
                 (iVar5 = *(int *)(lVar12 + 0x28), iVar5 != 0)) {
                lVar22 = param_3;
                if ((local_c0 & 1) == 0) goto LAB_1487ee7d4;
                goto LAB_1487ee87d;
              }
              break;
            }
            plVar17 = plVar17 + 0x16;
            lVar21 = lVar21 + -0xb0;
            plVar18 = local_b8;
          } while ((longlong)(int)*plVar7 * -0xb0 - lVar21 != 0);
        }
        goto LAB_1487ee525;
      }
    }
  }
LAB_1487ee3cb:
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while( true ) {
    uVar1 = *(ushort *)(lVar22 + 0x12);
    if ((((short)uVar1 < 0) || (*(int *)(param_1 + 0x100) <= (int)(short)uVar1)) ||
       (lVar22 = *(longlong *)(*(longlong *)(param_1 + 0xf8) + (ulonglong)uVar1 * 8), lVar22 == 0))
    break;
LAB_1487ee7d4:
    uVar1 = *(ushort *)(lVar22 + 0x14);
    if (-1 < (short)uVar1) {
      if (*(int *)(param_1 + 0x1f8) <= (int)(short)uVar1) goto LAB_1487eea17;
      puVar15 = (undefined8 *)((ulonglong)uVar1 * 8 + *(longlong *)(param_1 + 0x1f0));
      goto LAB_1487ee9f3;
    }
  }
  if (*(char *)(param_1 + 0x158) == '\x01') {
    puVar15 = *(undefined8 **)(param_1 + 0x1f0);
LAB_1487ee9f3:
    local_d0 = *puVar15;
  }
  else {
LAB_1487eea17:
    local_d0 = 0;
  }
LAB_1487ee87d:
  local_98 = 0;
  uStack_90 = 0;
  sVar2 = *(short *)((longlong)plVar17 + -0x52);
  if (sVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4((int)sVar2);
  }
  local_a8 = param_3;
  if (sVar2 != 0) {
    FUN_140ca8596(&local_98);
    iVar5 = *(int *)(lVar12 + 0x28);
  }
  lVar22 = local_d8;
  local_b0 = lVar12;
  if (iVar5 != 0) {
    lVar10 = *(longlong *)(lVar12 + 0x20);
    lVar19 = (lVar19 - lVar21) + 0x60;
    lVar21 = 0;
    local_a0 = plVar6;
    do {
      if (*(longlong *)(lVar10 + 8 + lVar21) != 0) {
        cVar3 = *(char *)(lVar10 + 0x10 + lVar21);
        if (cVar3 == '\x02') {
          uVar8 = FUN_1487eeb08(lVar21 + lVar10 + 0x48,lVar19);
          puVar9 = (undefined2 *)FUN_1487eceb4(local_c8,uVar8,local_d0);
          uVar14 = 0xffff;
          if ((puVar9 != (undefined2 *)0x0) && (*(char *)(puVar9 + 0x10) == '\x01')) {
LAB_1487ee765:
            uVar14 = *puVar9;
          }
LAB_1487ee768:
          uVar13 = uStack_90;
          iVar20 = (uint)uStack_90;
          uVar4 = (uint)uStack_90 + 1;
          uStack_90 = CONCAT44(uStack_90._4_4_,uVar4);
          if (uStack_90._4_4_ < uVar4) {
LAB_1487ee780:
            iVar20 = (int)uVar13;
            FUN_1405b572a(&local_98,uVar13 & 0xffffffff);
            plVar6 = local_a0;
          }
        }
        else {
          if (cVar3 != '\x01') {
            if (cVar3 != '\0') goto LAB_1487ee575;
            uVar8 = FUN_1487eeb08(lVar21 + lVar10 + 0x18,lVar19);
            puVar9 = (undefined2 *)FUN_1487eceb4(local_c8,uVar8,local_d0);
            uVar14 = 0xffff;
            if ((puVar9 != (undefined2 *)0x0) && (*(char *)(puVar9 + 0x10) == '\0'))
            goto LAB_1487ee765;
            goto LAB_1487ee768;
          }
          uVar8 = FUN_1487eeb08(lVar21 + lVar10 + 0x60,lVar19);
          puVar9 = (undefined2 *)FUN_1487eceb4(local_c8,uVar8,local_d0);
          uVar14 = 0xffff;
          if ((puVar9 != (undefined2 *)0x0) && (*(char *)(puVar9 + 0x10) == '\0')) {
            uVar14 = *puVar9;
          }
          lVar22 = (longlong)(int)(uint)uStack_90;
          uVar4 = (uint)uStack_90 + 1;
          if (uStack_90._4_4_ < uVar4) {
            local_c0 = CONCAT62(local_c0._2_6_,uVar14);
            uVar13 = uStack_90 & 0xffffffff;
            uStack_90._0_4_ = uVar4;
            FUN_1405b572a(&local_98,uVar13);
            uVar14 = (undefined2)local_c0;
            uVar4 = (uint)uStack_90;
          }
          uStack_90._0_4_ = uVar4;
          *(undefined2 *)(local_98 + lVar22 * 2) = uVar14;
          uVar8 = FUN_1487eeb08(lVar21 + lVar10 + 0x68,lVar19);
          puVar9 = (undefined2 *)FUN_1487eceb4(local_c8,uVar8,local_d0);
          uVar4 = (uint)uStack_90;
          uVar14 = 0xffff;
          if ((puVar9 != (undefined2 *)0x0) && (*(char *)(puVar9 + 0x10) == '\0')) {
            uVar14 = *puVar9;
          }
          lVar22 = (longlong)(int)(uint)uStack_90;
          uStack_90._0_4_ = (uint)uStack_90 + 1;
          if (uStack_90._4_4_ < (uint)uStack_90) {
            local_c0 = CONCAT62(local_c0._2_6_,uVar14);
            FUN_1405b572a(&local_98,uVar4);
            uVar14 = (undefined2)local_c0;
          }
          *(undefined2 *)(local_98 + lVar22 * 2) = uVar14;
          uVar8 = FUN_1487eeb08(lVar21 + lVar10 + 0x70,lVar19);
          puVar9 = (undefined2 *)FUN_1487eceb4(local_c8,uVar8,local_d0);
          uVar4 = (uint)uStack_90;
          uVar14 = 0xffff;
          if ((puVar9 != (undefined2 *)0x0) && (*(char *)(puVar9 + 0x10) == '\0')) {
            uVar14 = *puVar9;
          }
          lVar22 = (longlong)(int)(uint)uStack_90;
          uStack_90._0_4_ = (uint)uStack_90 + 1;
          if (uStack_90._4_4_ < (uint)uStack_90) {
            local_c0 = CONCAT62(local_c0._2_6_,uVar14);
            FUN_1405b572a(&local_98,uVar4);
            uVar14 = (undefined2)local_c0;
          }
          *(undefined2 *)(local_98 + lVar22 * 2) = uVar14;
          uVar8 = FUN_1487eeb08(lVar21 + lVar10 + 0x78,lVar19);
          puVar9 = (undefined2 *)FUN_1487eceb4(local_c8,uVar8,local_d0);
          uVar13 = uStack_90;
          uVar14 = 0xffff;
          if ((puVar9 != (undefined2 *)0x0) && (*(char *)(puVar9 + 0x10) == '\0')) {
            uVar14 = *puVar9;
          }
          iVar20 = (uint)uStack_90;
          uVar4 = (uint)uStack_90 + 1;
          uStack_90 = CONCAT44(uStack_90._4_4_,uVar4);
          if (uStack_90._4_4_ < uVar4) goto LAB_1487ee780;
        }
        *(undefined2 *)(local_98 + (longlong)iVar20 * 2) = uVar14;
        lVar22 = local_d8;
      }
LAB_1487ee575:
      lVar21 = lVar21 + 0x80;
    } while ((longlong)iVar5 << 7 != lVar21);
  }
  param_1 = local_c8;
  puVar11 = (ushort *)FUN_1487eebaa(local_c8,lVar22,local_b0,&local_98);
  param_3 = local_a8;
  uVar13 = 0;
  lVar22 = local_d8;
  if (puVar11 != (ushort *)0x0) {
    lVar22 = *(longlong *)(puVar11 + 0x24);
    uVar13 = (ulonglong)*puVar11;
    *(ushort *)((longlong)plVar17 + -0x56) = *puVar11;
  }
  if (local_98 != 0) {
    uVar13 = FUN_1400020a8();
  }
  local_c0 = CONCAT71((int7)(uVar13 >> 8),1);
  plVar18 = local_b8;
LAB_1487ee525:
  FUN_14485c47a(lVar16 * 8 + *plVar6,lVar22);
  lVar16 = lVar16 + 1;
  if ((int)uStack_70 <= lVar16) goto LAB_1487ee3cb;
  goto LAB_1487ee4be;
}



// FUNCTION 1487eea90 FUN_1487eea90 body=118 status=ok
// SIG undefined FUN_1487eea90(void)

void FUN_1487eea90(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1474bc6ba(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_1487fa2ae(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1487eeb08 FUN_1487eeb08 body=162 status=ok
// SIG undefined FUN_1487eeb08(void)

longlong * FUN_1487eeb08(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
      uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
      uVar5 = (uint)lVar1 & 0xffff;
      plVar4 = param_2 + 7;
      if ((longlong *)param_2[8] != (longlong *)0x0) {
        plVar4 = (longlong *)param_2[8];
      }
      iVar6 = *(int *)((longlong)plVar4 +
                      (ulonglong)
                      ((int)param_2[9] - 1U &
                      (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar5) +
                      (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
      if (iVar6 != -1) {
        do {
          plVar4 = (longlong *)(*param_2 + (longlong)iVar6 * 0x18);
          if (*plVar4 == lVar1) goto LAB_1487eeb1f;
          iVar6 = (int)plVar4[2];
        } while (iVar6 != -1);
      }
    }
    plVar4 = (longlong *)0x0;
LAB_1487eeb1f:
    plVar3 = plVar4 + 1;
    if (plVar4 == (longlong *)0x0) {
      plVar3 = (longlong *)0x0;
    }
    if (plVar3 != (longlong *)0x0) {
      param_1 = plVar3;
    }
  }
  return param_1;
}



// FUNCTION 1487eebaa FUN_1487eebaa body=1498 status=ok
// SIG undefined FUN_1487eebaa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16]
FUN_1487eebaa(longlong param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined1 *puVar11;
  undefined1 auVar12 [16];
  int iVar13;
  uint uVar14;
  undefined1 (*pauVar15) [16];
  longlong lVar16;
  ulonglong uVar17;
  undefined4 *puVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong lVar21;
  undefined7 uVar22;
  uint *puVar23;
  longlong lVar24;
  undefined4 uVar25;
  undefined4 uVar27;
  undefined1 auVar26 [16];
  longlong lVar28;
  undefined1 in_XMM1 [16];
  undefined1 auVar29 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auStack_108 [32];
  longlong *local_e8;
  longlong *local_e0;
  longlong local_d8;
  ulonglong local_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar16 = *(longlong *)(param_1 + 400);
  local_d0 = (ulonglong)*(int *)(param_1 + 0x198);
  local_e8 = param_4;
  local_d8 = param_1;
  if (local_d0 != 0) {
    iVar4 = (int)param_4[1];
    local_e0 = (longlong *)*param_4;
    lVar28 = local_d0 * 8;
    lVar24 = 0;
    do {
      pauVar15 = *(undefined1 (**) [16])(lVar16 + lVar24);
      if ((((pauVar15 != (undefined1 (*) [16])0x0) && (*(longlong *)pauVar15[4] == param_2)) &&
          (*(longlong *)(pauVar15[3] + 8) == param_3)) &&
         ((*(int *)pauVar15[1] == iVar4 &&
          ((iVar4 == 0 ||
           (iVar13 = memcmp(*(void **)(*pauVar15 + 8),local_e0,(longlong)iVar4 * 2), iVar13 == 0))))
         )) goto LAB_1487eec69;
      lVar24 = lVar24 + 8;
    } while (lVar28 - lVar24 != 0);
  }
  pauVar15 = (undefined1 (*) [16])FUN_14001cc68(0x50,0x10);
  uVar19 = local_d0;
  lVar28 = local_d8;
  plVar10 = (longlong *)(*pauVar15 + 8);
  local_e0 = (longlong *)(pauVar15[2] + 8);
  *pauVar15 = (undefined1  [16])0x0;
  pauVar15[1] = (undefined1  [16])0x0;
  pauVar15[2] = (undefined1  [16])0x0;
  pauVar15[3] = (undefined1  [16])0x0;
  pauVar15[4] = (undefined1  [16])0x0;
  *(int *)*pauVar15 = (int)local_d0;
  uVar14 = (int)local_d0 + 1;
  *(uint *)(local_d8 + 0x198) = uVar14;
  if (*(uint *)(local_d8 + 0x19c) < uVar14) {
    plVar1 = (longlong *)(local_d8 + 400);
    FUN_1487fa376(plVar1,local_d0 & 0xffffffff);
    lVar16 = *plVar1;
  }
  plVar1 = local_e8;
  *(undefined1 (**) [16])(lVar16 + uVar19 * 8) = pauVar15;
  *(longlong *)pauVar15[4] = param_2;
  *(longlong *)(pauVar15[3] + 8) = param_3;
  FUN_147f6e0a0(plVar10,local_e8);
  FUN_144a8c360(pauVar15[1] + 8,(int)plVar1[1],1);
  FUN_1487ef186(local_e0,*(undefined4 *)(param_3 + 0x28));
  if (param_2 == 0) {
    *(undefined8 *)(pauVar15[4] + 8) = 0;
  }
  else {
    lVar16 = FUN_14090ceee(param_2,DAT_14c951640,0);
    *(longlong *)(pauVar15[4] + 8) = lVar16;
    if (lVar16 != 0) {
      local_e8 = plVar10;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar16);
      }
      iVar4 = *(int *)(lVar28 + 0x310);
      *(uint *)(lVar28 + 0x310) = iVar4 + 1U;
      if (*(uint *)(lVar28 + 0x314) < iVar4 + 1U) {
        FUN_1457d5db8((longlong *)(lVar28 + 0x308),iVar4);
      }
      *(longlong *)(*(longlong *)(lVar28 + 0x308) + (longlong)iVar4 * 8) = lVar16;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar16);
      }
      local_78 = (undefined1  [16])0x0;
      local_88 = (undefined1  [16])0x0;
      FUN_1417e1304(*(undefined8 *)(pauVar15[4] + 8));
      local_98 = (undefined1  [16])0x0;
      local_a8 = (undefined1  [16])0x0;
      FUN_147bbe748(*(undefined8 *)(pauVar15[4] + 8));
      local_b8 = (undefined1  [16])0x0;
      local_c8 = (undefined1  [16])0x0;
      FUN_14050458e(*(undefined8 *)(pauVar15[4] + 8));
      if (0 < *(int *)(param_3 + 0x28)) {
        lVar16 = 0;
        uVar14 = 0;
LAB_1487eee33:
        lVar21 = *local_e0;
        lVar28 = *(longlong *)(param_3 + 0x20) + lVar16 * 0x80;
        lVar24 = lVar21 + 0x50 + lVar16 * 0x98;
        *(undefined8 *)(lVar24 + -0x20) = *(undefined8 *)(lVar28 + 0x18);
        uVar5 = *(undefined8 *)(lVar28 + 0x10);
        *(undefined8 *)(lVar24 + -0x30) = *(undefined8 *)(lVar28 + 8);
        *(undefined8 *)(lVar24 + -0x28) = uVar5;
        *(undefined8 *)(lVar24 + -0x18) = *(undefined8 *)(lVar28 + 0x20);
        uVar5 = *(undefined8 *)(lVar28 + 0x30);
        *(undefined8 *)(lVar24 + -0x10) = *(undefined8 *)(lVar28 + 0x28);
        *(undefined8 *)(lVar24 + -8) = uVar5;
        FUN_144a787a6(lVar24,lVar28 + 0x38);
        uVar5 = *(undefined8 *)(lVar28 + 0x50);
        uVar6 = *(undefined8 *)(lVar28 + 0x58);
        uVar7 = *(undefined8 *)(lVar28 + 0x60);
        uVar8 = *(undefined8 *)(lVar28 + 0x68);
        uVar9 = *(undefined8 *)(lVar28 + 0x70);
        *(undefined8 *)(lVar24 + 0x10) = *(undefined8 *)(lVar28 + 0x48);
        *(undefined8 *)(lVar24 + 0x18) = uVar5;
        *(undefined8 *)(lVar24 + 0x20) = uVar6;
        *(undefined8 *)(lVar24 + 0x28) = uVar7;
        *(undefined8 *)(lVar24 + 0x30) = uVar8;
        *(undefined8 *)(lVar24 + 0x38) = uVar9;
        *(undefined8 *)(lVar24 + 0x40) = *(undefined8 *)(lVar28 + 0x78);
        *(undefined4 *)(lVar24 + -0x50) = 0xffffffff;
        uVar20 = uVar14;
        if (*(longlong *)(lVar24 + -0x30) != 0) {
          puVar23 = (uint *)(lVar21 + lVar16 * 0x98);
          cVar3 = (char)puVar23[10];
          plVar10 = (longlong *)local_b8;
          puVar11 = local_b8;
          if (cVar3 == '\x02') {
            plVar10 = (longlong *)local_98;
            puVar11 = local_98;
          }
          if (cVar3 == '\0') {
            plVar10 = (longlong *)local_78;
            puVar11 = local_78;
          }
          if ((longlong)*(int *)(puVar11 + 8) != 0) {
            lVar28 = *plVar10;
            lVar21 = 0;
            do {
              if (*(longlong *)(lVar28 + lVar21) == *(longlong *)(lVar24 + -0x30)) {
                *puVar23 = uVar14;
                puVar2 = (undefined8 *)(lVar28 + lVar21);
                uVar5 = puVar2[1];
                *(undefined8 *)(puVar23 + 1) = *puVar2;
                *(undefined8 *)(puVar23 + 3) = uVar5;
                uVar20 = (uint)(cVar3 == '\x01') * 3 + uVar14 + 1;
                if ((int)uVar14 < 0) goto LAB_1487eef3e;
                uVar19 = 0;
                goto LAB_1487eef8e;
              }
              lVar21 = lVar21 + 0x10;
            } while ((longlong)*(int *)(puVar11 + 8) * 0x10 != lVar21);
          }
          uVar20 = (uint)(cVar3 == '\x01') * 3 + uVar14 + 1;
        }
        goto LAB_1487eef3e;
      }
LAB_1487eefd1:
      if (local_c8._0_8_ != 0) {
        FUN_1400020a8();
      }
      if (local_b8._0_8_ != 0) {
        FUN_1400020a8();
      }
      if (local_a8._0_8_ != 0) {
        FUN_1400020a8();
      }
      if (local_98._0_8_ != 0) {
        FUN_1400020a8();
      }
      if (local_88._0_8_ != 0) {
        FUN_1400020a8();
      }
      if (local_78._0_8_ != 0) {
        FUN_1400020a8();
      }
      goto LAB_1487eec69;
    }
  }
  auVar12 = _DAT_149931e80;
  if ((longlong)*(int *)pauVar15[3] != 0) {
    puVar18 = *(undefined4 **)(pauVar15[2] + 8);
    uVar19 = (longlong)*(int *)pauVar15[3] * 0x98 - 0x98;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar19;
    uVar25 = SUB164(auVar29 * ZEXT816(0xd79435e50d79435f),8);
    uVar27 = (undefined4)(uVar19 / 0x130000000);
    auVar30._0_8_ = CONCAT44(uVar27,uVar25);
    auVar30._8_4_ = uVar25;
    auVar30._12_4_ = uVar27;
    auVar26._0_8_ = auVar30._0_8_ >> 7;
    auVar26._8_8_ = auVar30._8_8_ >> 7;
    uVar17 = 0;
    auVar29 = pmovsxbq(in_XMM1,0x302);
    auVar30 = pmovsxbq(in_XMM2,0x100);
    auVar26 = auVar26 | _DAT_149931e80;
    do {
      lVar16 = auVar26._0_8_;
      lVar28 = auVar26._8_8_;
      if ((bool)(~(lVar16 < (longlong)(uVar17 ^ auVar12._0_8_)) & 1)) {
        *puVar18 = 0xffffffff;
      }
      auVar31._8_4_ = (int)uVar17;
      auVar31._0_8_ = uVar17;
      auVar31._12_4_ = (int)(uVar17 >> 0x20);
      if ((longlong)((auVar31._8_8_ | auVar30._8_8_) ^ auVar12._8_8_) <= lVar28) {
        puVar18[0x26] = 0xffffffff;
      }
      auVar31 = (auVar31 | auVar29) ^ auVar12;
      if (auVar31._0_8_ <= lVar16) {
        puVar18[0x4c] = 0xffffffff;
      }
      if (auVar31._8_8_ <= lVar28) {
        puVar18[0x72] = 0xffffffff;
      }
      uVar17 = uVar17 + 4;
      puVar18 = puVar18 + 0x98;
    } while ((uVar19 / 0x98 + 4 & 0xfffffffffffffffc) != uVar17);
  }
LAB_1487eec69:
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return pauVar15;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
  while (uVar19 = uVar19 + 1, (uint)(cVar3 == '\x01') * 3 + 1 != uVar19) {
LAB_1487eef8e:
    uVar22 = (undefined7)((ulonglong)lVar21 >> 8);
    if (-1 < *(short *)((ulonglong)uVar14 * 2 + *local_e8 + uVar19 * 2)) {
      FUN_1487ef200(local_d8,pauVar15,puVar23,CONCAT71(uVar22,1));
      goto LAB_1487eef3e;
    }
  }
  FUN_1487ef200(local_d8,pauVar15,puVar23,CONCAT71(uVar22,1));
  *puVar23 = 0xffffffff;
LAB_1487eef3e:
  uVar14 = uVar20;
  lVar16 = lVar16 + 1;
  if (*(int *)(param_3 + 0x28) <= lVar16) goto LAB_1487eefd1;
  goto LAB_1487eee33;
}



// FUNCTION 1487ef186 FUN_1487ef186 body=121 status=ok
// SIG undefined FUN_1487ef186(void)

void FUN_1487ef186(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1487fa464(param_1,iVar1);
    }
    FUN_1487fa3fb((longlong)iVar1 * 0x98 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_1487fa4f8(param_1,param_2,iVar1 - param_2);
    FUN_1487fa55a(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1487ef200 FUN_1487ef200 body=577 status=ok
// SIG undefined FUN_1487ef200(void)

/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_1487ef200(longlong param_1,longlong param_2,int *param_3,ulonglong param_4)

{
  char cVar1;
  ushort uVar2;
  longlong lVar3;
  ushort *puVar4;
  longlong lVar5;
  int *piVar6;
  int iVar7;
  undefined1 auStack_88 [24];
  double adStack_70 [6];
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((param_2 == 0) ||
      (lVar3 = *(longlong *)(param_2 + 0x48), param_3 == (int *)0x0 || lVar3 == 0)) ||
     (lVar5 = (longlong)*param_3, lVar5 < 0)) {
LAB_1487ef40f:
    param_4 = 0;
    goto LAB_1487ef411;
  }
  param_4 = param_4 & 0xffffffff;
  puVar4 = (ushort *)(lVar5 * 2 + *(longlong *)(param_2 + 8));
  piVar6 = (int *)(lVar5 * 4 + *(longlong *)(param_2 + 0x18));
  cVar1 = (char)param_3[10];
  if (cVar1 != '\x02') {
    if (cVar1 == '\x01') {
      adStack_70[1] = (double)(float)param_3[0x1a];
      adStack_70[2] = (double)(float)param_3[0x1b];
      adStack_70[3] = (double)(float)param_3[0x1c];
      adStack_70[4] = (double)(float)param_3[0x1d];
      lVar3 = 0;
LAB_1487ef30f:
      lVar3 = lVar3 + 1;
      do {
        uVar2 = puVar4[lVar3 + -1];
        if (((-1 < (short)uVar2) && ((int)(short)uVar2 < *(int *)(param_1 + 0x1c8))) &&
           (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)uVar2 * 8), lVar5 != 0
           )) {
          adStack_70[lVar3] = (double)*(float *)(lVar5 + 0x24);
          if (*(int *)(lVar5 + 0x90) != piVar6[lVar3 + -1]) goto LAB_1487ef362;
        }
        lVar3 = lVar3 + 1;
        if (lVar3 == 5) {
          if ((param_4 & 1) == 0) goto LAB_1487ef40f;
          goto LAB_1487ef3b7;
        }
      } while( true );
    }
    if (cVar1 != '\0') goto LAB_1487ef411;
    iVar7 = param_3[0xb];
    uVar2 = *puVar4;
    if ((((short)uVar2 < 0) || (*(int *)(param_1 + 0x1c8) <= (int)(short)uVar2)) ||
       (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)uVar2 * 8), lVar5 == 0)) {
LAB_1487ef2bb:
      if ((char)param_4 == '\0') goto LAB_1487ef40f;
    }
    else {
      iVar7 = *(int *)(lVar5 + 0x24);
      if (*(int *)(lVar5 + 0x90) == *piVar6) goto LAB_1487ef2bb;
      *piVar6 = *(int *)(lVar5 + 0x90);
      lVar3 = *(longlong *)(param_2 + 0x48);
    }
    FUN_1417e05d0(lVar3,param_3 + 1,iVar7);
    goto LAB_1487ef40a;
  }
  uVar2 = *puVar4;
  if ((((short)uVar2 < 0) || (*(int *)(param_1 + 0x1c8) <= (int)(short)uVar2)) ||
     (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)uVar2 * 8), lVar3 == 0)) {
    lVar5 = 0;
LAB_1487ef3e4:
    if ((char)param_4 == '\0') goto LAB_1487ef40f;
  }
  else {
    lVar5 = FUN_140832a06(lVar3 + 0x40);
    if (*(int *)(lVar3 + 0x90) == *piVar6) goto LAB_1487ef3e4;
    *piVar6 = *(int *)(lVar3 + 0x90);
  }
  if (lVar5 == 0) {
    lVar5 = FUN_140832a06(param_3 + 0xe);
  }
  FUN_1409d961e(*(undefined8 *)(param_2 + 0x48),param_3 + 1,lVar5);
LAB_1487ef40a:
  param_4 = CONCAT71((int7)(param_4 >> 8),1);
LAB_1487ef411:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_4 & 0xffffffff;
LAB_1487ef362:
  piVar6[lVar3 + -1] = *(int *)(lVar5 + 0x90);
  param_4 = 1;
  if (lVar3 == 4) goto LAB_1487ef3b7;
  goto LAB_1487ef30f;
LAB_1487ef3b7:
  param_4 = *(ulonglong *)(param_2 + 0x48);
  FUN_142767b8e(local_40,adStack_70 + 1);
  FUN_1417e08e2(param_4,param_3 + 1,local_40);
  goto LAB_1487ef40a;
}



// FUNCTION 1487ef442 FUN_1487ef442 body=184 status=ok
// SIG undefined FUN_1487ef442(void)

longlong FUN_1487ef442(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  
  if (*(int *)(param_1 + 0x110) != *(int *)(param_1 + 0x13c)) {
    lVar2 = *param_2;
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar6 = (uint)lVar2 & 0xffff;
    lVar5 = param_1 + 0x140;
    if (*(longlong *)(param_1 + 0x148) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x148);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x150) - 1U &
                             (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar6) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x108) + (longlong)iVar4 * 0x18);
        if (*plVar1 == lVar2) {
          if (plVar1 + 1 == (longlong *)0x0 || plVar1 == (longlong *)0x0) {
            return 0;
          }
          lVar2 = plVar1[1];
          if (lVar2 == 0) {
            return 0;
          }
          return lVar2;
        }
        iVar4 = (int)plVar1[2];
      } while (iVar4 != -1);
    }
  }
  return 0;
}



// FUNCTION 1487ef4fa FUN_1487ef4fa body=367 status=ok
// SIG undefined FUN_1487ef4fa(void)

void FUN_1487ef4fa(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  char param_5)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  
  if (param_2 == 0) {
    if ((param_5 == '\0') &&
       (*(undefined4 *)(param_3 + 1) = 0, *(int *)((longlong)param_3 + 0xc) != 0)) {
      FUN_1487fa75c(param_3,0);
      return;
    }
  }
  else {
    if (param_5 == '\0') {
      iVar4 = *(int *)(param_2 + 0x30);
      if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar4);
      }
      *(undefined4 *)(param_3 + 1) = 0;
      if (*(int *)((longlong)param_3 + 0xc) != iVar4) {
        FUN_1487fa75c(param_3);
      }
    }
    iVar4 = *(int *)(param_2 + 0x30);
    if ((longlong)iVar4 != 0) {
      lVar6 = *(longlong *)(param_2 + 0x28);
      lVar9 = 0;
      do {
        uVar3 = *(ushort *)(lVar6 + lVar9);
        if ((-1 < (short)uVar3) && ((int)(short)uVar3 < *(int *)(param_1 + 0x178))) {
          lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x170) + (ulonglong)uVar3 * 0x10);
          plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x170) + 8 + (ulonglong)uVar3 * 0x10);
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
            UNLOCK();
          }
          if ((lVar7 != 0) && ((*param_4 == 0 || (*param_4 == *(longlong *)(lVar7 + 8))))) {
            iVar5 = (int)param_3[1];
            *(uint *)(param_3 + 1) = iVar5 + 1U;
            if (*(uint *)((longlong)param_3 + 0xc) < iVar5 + 1U) {
              FUN_1487fa7bc(param_3,iVar5);
            }
            *(longlong *)(*param_3 + (longlong)iVar5 * 8) = lVar7;
          }
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
        }
        lVar9 = lVar9 + 2;
      } while ((longlong)iVar4 * 2 != lVar9);
    }
  }
  return;
}



// FUNCTION 1487ef66a FUN_1487ef66a body=45 status=ok
// SIG undefined FUN_1487ef66a(void)

void FUN_1487ef66a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1487ef442();
  FUN_1487ef4fa(param_1,uVar1,param_3,param_4);
  return;
}



// FUNCTION 1487ef698 FUN_1487ef698 body=163 status=ok
// SIG undefined FUN_1487ef698(void)

void FUN_1487ef698(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((param_2 != 0) && (iVar2 = *(int *)(param_2 + 0x30), (longlong)iVar2 != 0)) {
    lVar4 = *(longlong *)(param_2 + 0x28);
    lVar6 = 0;
    do {
      uVar1 = *(ushort *)(lVar4 + lVar6);
      if ((((-1 < (short)uVar1) && ((int)(short)uVar1 < *(int *)(param_1 + 0x188))) &&
          (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x180) + (ulonglong)uVar1 * 8), lVar5 != 0)
          ) && ((*param_4 == 0 || (*param_4 == *(longlong *)(lVar5 + 8))))) {
        iVar3 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
          FUN_1487fa842(param_3,iVar3);
        }
        *(longlong *)(*param_3 + (longlong)iVar3 * 8) = lVar5;
      }
      lVar6 = lVar6 + 2;
    } while ((longlong)iVar2 * 2 != lVar6);
  }
  return;
}



// FUNCTION 1487ef73c FUN_1487ef73c body=291 status=ok
// SIG undefined FUN_1487ef73c(void)

void FUN_1487ef73c(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((longlong)*(int *)(param_1 + 0x1a8) != 0) {
    lVar5 = 0;
    do {
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1a0) + lVar5);
      if (((lVar6 != 0) && (*(longlong *)(lVar6 + 4) == *param_2)) &&
         (*(longlong *)(lVar6 + 0xc) == *param_3)) {
        iVar2 = *(int *)(lVar6 + 0x20);
        if ((longlong)iVar2 != 0) {
          lVar5 = *(longlong *)(lVar6 + 0x18);
          lVar6 = 0;
          do {
            uVar1 = *(ushort *)(lVar5 + lVar6);
            if (((-1 < (short)uVar1) && ((int)(short)uVar1 < *(int *)(param_1 + 0x1b8))) &&
               (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x1b0) + (ulonglong)uVar1 * 8),
               lVar3 != 0)) {
              uVar1 = *(ushort *)(lVar3 + 2);
              if (((-1 < (short)uVar1) && ((int)(short)uVar1 < *(int *)(param_1 + 0x1c8))) &&
                 ((lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + (ulonglong)uVar1 * 8),
                  lVar4 != 0 && (*(char *)(lVar4 + 0x20) == '\0')))) {
                local_50 = lVar4 + 0x24;
                local_58 = lVar3 + 8;
                FUN_144a405ac(param_4,local_44,&local_58,0);
              }
            }
            lVar6 = lVar6 + 2;
          } while ((longlong)iVar2 * 2 != lVar6);
        }
        break;
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)*(int *)(param_1 + 0x1a8) * 8 != lVar5);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487ef860 FUN_1487ef860 body=104 status=ok
// SIG undefined FUN_1487ef860(void)

void FUN_1487ef860(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
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



// FUNCTION 1487ef8c8 FUN_1487ef8c8 body=369 status=ok
// SIG undefined FUN_1487ef8c8(void)

void FUN_1487ef8c8(longlong *param_1)

{
  ushort uVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  *(undefined1 *)(param_1 + 0x18) = 6;
  if ((longlong)(int)param_1[0x5e] != 0) {
    lVar5 = param_1[0x5d];
    lVar6 = (longlong)(int)param_1[0x5e] * 0x28;
    do {
      lVar7 = FUN_1401fe4bc(lVar5);
      if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar7);
      }
      iVar2 = (int)param_1[0x60];
      *(uint *)(param_1 + 0x60) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0x304) < iVar2 + 1U) {
        FUN_140845902(param_1 + 0x5f,iVar2);
      }
      *(longlong *)(param_1[0x5f] + (longlong)iVar2 * 8) = lVar7;
      if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar7);
      }
      lVar5 = lVar5 + 0x28;
      lVar6 = lVar6 + -0x28;
    } while (lVar6 != 0);
  }
  lVar5 = param_1[0x31];
  if ((longlong)(int)lVar5 != 0) {
    lVar6 = param_1[0x30];
    lVar7 = 0;
    do {
      plVar3 = *(longlong **)(lVar6 + lVar7);
      if (plVar3 != (longlong *)0x0) {
        uVar1 = *(ushort *)((longlong)plVar3 + 0x12);
        if ((((-1 < (short)uVar1) && ((int)(short)uVar1 < (int)param_1[0x20])) &&
            (plVar4 = *(longlong **)(param_1[0x1f] + (ulonglong)uVar1 * 8),
            plVar4 != (longlong *)0x0)) &&
           ((*plVar4 != 0 && (*(char *)(*plVar4 + 0x328) == '\x01')))) {
          (**(code **)(*plVar3 + 0x20))
                    (plVar3,*(undefined8 *)(param_1[0x2e] + (longlong)(short)plVar3[2] * 0x10));
          FUN_1487ee364(param_1,plVar3,plVar4);
        }
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)(int)lVar5 * 8 != lVar7);
  }
  (**(code **)(*param_1 + 0x90))(param_1);
  FUN_1487f8f16(param_1 + 0x5a,param_1,1);
  return;
}



// FUNCTION 1487efa58 FUN_1487efa58 body=107 status=ok
// SIG undefined FUN_1487efa58(void)

void FUN_1487efa58(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1487f8e90(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (iVar1 <= param_2) {
    return;
  }
  *(int *)(param_1 + 1) = param_2;
  FUN_1487fb4bc(param_1);
  return;
}



// FUNCTION 1487efac4 FUN_1487efac4 body=202 status=ok
// SIG undefined FUN_1487efac4(void)

void FUN_1487efac4(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      if (lVar3 != 0) {
        FUN_1487efb8e(lVar3);
        FUN_1400020a8(lVar3);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    FUN_1487f8896(param_1 + 0x38);
  }
  iVar1 = *(int *)(param_1 + 0x50);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x48);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      if (lVar3 != 0) {
        FUN_1487efb8e(lVar3);
        FUN_1400020a8(lVar3);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(int *)(param_1 + 0x54) != 0) {
    FUN_1487f8896(param_1 + 0x48);
    return;
  }
  return;
}



// FUNCTION 1487efb8e FUN_1487efb8e body=60 status=ok
// SIG undefined FUN_1487efb8e(void)

void FUN_1487efb8e(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_1487f4678(param_1 + 8);
  return;
}



// FUNCTION 1487efbca FUN_1487efbca body=2940 status=ok
// SIG undefined FUN_1487efbca(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1487efbca(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  uint param_5,longlong *param_6)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  longlong *plVar9;
  longlong **pplVar10;
  ushort uVar11;
  ushort uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  longlong ****pppplVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint uVar20;
  undefined1 auStack_1c8 [32];
  longlong local_1a8;
  int local_19c;
  longlong *local_198;
  longlong local_190;
  int local_188;
  uint local_184;
  undefined8 local_180;
  longlong ****local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 local_154;
  longlong **local_150;
  longlong local_148;
  undefined8 uStack_140;
  longlong local_138;
  undefined8 uStack_130;
  longlong local_128;
  undefined8 uStack_120;
  longlong ***local_108;
  undefined1 **local_100;
  ulonglong local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  longlong ****local_e8;
  undefined8 uStack_e0;
  undefined1 *local_d8;
  uint local_d0;
  int iStack_cc;
  ulonglong local_c8;
  int local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  longlong local_a8;
  int local_a0;
  longlong ***local_98;
  undefined8 uStack_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  int local_64;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  if (param_4 == (longlong *)0x0) {
    plVar9 = (longlong *)(*(longlong *)(param_1 + 8) + 0x48);
  }
  else {
    plVar9 = param_4 + 0x47;
  }
  local_19c = (int)(short)*plVar9;
  local_188 = (int)*(short *)((longlong)plVar9 + 2);
  local_184 = (uint)*(ushort *)((longlong)plVar9 + 4);
  local_190 = CONCAT44(local_190._4_4_,(int)*(short *)((longlong)plVar9 + 6));
  local_128 = 0;
  uStack_120 = 0;
  local_78 = 0;
  local_70 = 0;
  local_98 = (longlong ***)0x0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_1a8 = param_1;
  local_198 = param_4;
  local_180 = param_2;
  if (param_4 != (longlong *)0x0) {
    lVar2 = param_4[0x61];
    if ((longlong)(int)lVar2 != 0) {
      lVar17 = param_4[0x60];
      lVar19 = 0;
      do {
        lVar1 = *(longlong *)(lVar17 + lVar19);
        if (((lVar1 != 0) && (*(char *)(lVar1 + 0x40) == '\x01')) &&
           (*(char *)(lVar1 + 0x328) == '\x01')) {
          *(undefined4 *)(lVar1 + 0x278) = 0;
          cVar4 = FUN_1405d595e(param_3,lVar1 + 0x128);
          if (cVar4 == '\0') {
            FUN_1405dc634(param_3,lVar1 + 0x148);
            cVar4 = FUN_1487e4df2(local_180,lVar1);
            if (cVar4 != '\0') {
              *(undefined4 *)(lVar1 + 0x278) = 1;
            }
          }
        }
        lVar19 = lVar19 + 8;
      } while ((longlong)(int)lVar2 * 8 != lVar19);
    }
    iVar5 = 0;
    plVar9 = local_198;
    if ((int)local_198[0x4f] != 2) goto LAB_1487efdc0;
  }
  plVar9 = local_198;
  iVar5 = *(int *)(local_1a8 + 0x40);
  if (iVar5 < 0) {
LAB_1487f0730:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar5);
  }
  if (iVar5 == 0) {
LAB_1487efcba:
    uStack_130 = 0;
    local_138 = 0;
    local_148 = 0;
    uStack_140 = 0;
    uVar20 = 0;
  }
  else {
    FUN_1487f5b60(&local_128);
    uVar20 = *(uint *)(local_1a8 + 0x40);
    if ((uint)((int)uStack_90 - local_64) < uVar20) {
      if ((int)uVar20 < 0) goto LAB_1487f0738;
      FUN_1487fb5b2(&local_98);
      iVar5 = 1;
      if (3 < uVar20) {
        uVar20 = (uVar20 | 1) + 0xe;
        iVar5 = 0x1f;
        if (uVar20 != 0) {
          for (; uVar20 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        iVar5 = 1 << ((byte)iVar5 & 0x1f);
      }
      if ((local_50 == 0) || (local_50 < iVar5)) {
        local_50 = iVar5;
        FUN_1487fb74e();
      }
      uVar20 = *(uint *)(local_1a8 + 0x40);
    }
    local_138 = 0;
    uStack_130 = 0;
    if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar20);
    }
    if (uVar20 == 0) goto LAB_1487efcba;
    FUN_1487f5b60(&local_138,uVar20);
    iVar5 = *(int *)(local_1a8 + 0x40);
    local_148 = 0;
    uStack_140 = 0;
    if (iVar5 < 0) goto LAB_1487f0730;
    uVar20 = 0;
    if (iVar5 != 0) {
      FUN_1487f5b60(&local_148);
      uVar20 = *(uint *)(local_1a8 + 0x40);
    }
  }
  lVar2 = local_1a8;
  local_c8 = 0;
  local_c0 = 0;
  local_e8 = (longlong ****)0x0;
  uStack_e0 = (longlong ****)0x0;
  local_bc = 0xffffffff00000080;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  if (uVar20 != 0) {
    if ((int)uVar20 < 0) {
LAB_1487f0738:
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar20);
    }
    FUN_1487fb5b2(&local_e8);
    iVar5 = 1;
    if (3 < uVar20) {
      uVar20 = (uVar20 | 1) + 0xe;
      iVar5 = 0x1f;
      if (uVar20 != 0) {
        for (; uVar20 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      iVar5 = 1 << ((byte)iVar5 & 0x1f);
    }
    if ((local_a0 == 0) || (local_a0 < iVar5)) {
      local_a0 = iVar5;
      FUN_1487fb74e();
    }
  }
  iVar5 = *(int *)(lVar2 + 0x40);
  if ((longlong)iVar5 != 0) {
    lVar2 = *(longlong *)(local_1a8 + 0x38);
    lVar17 = 0;
    do {
      local_108 = *(longlong ****)(lVar2 + lVar17);
      if ((((local_108 != (longlong ***)0x0) && (-1 < (int)param_5)) &&
          (*(char *)((longlong)local_108 + 0x5a) != '\0')) &&
         ((int)param_5 < *(int *)(local_108 + 0xd))) {
        if (plVar9 == (longlong *)0x0) {
          pplVar10 = local_108[0xc];
        }
        else if ((param_5 == 0) ||
                (pplVar10 = local_108[0xc], pplVar10[(ulonglong)param_5 - 1] != plVar9))
        goto LAB_1487f0005;
        pplVar10 = (longlong **)pplVar10[param_5];
        local_150 = pplVar10;
        cVar4 = FUN_1405d595e(param_3);
        plVar9 = local_198;
        if (cVar4 == '\0') {
          cVar4 = *(char *)(pplVar10 + 0xc);
          if (cVar4 == '\0') {
            FUN_1487f69c6(&local_138);
            plVar9 = local_198;
          }
          else {
            if (cVar4 == '\x01') {
              FUN_1487f69c6(&local_128,&local_150);
              pppplVar16 = &local_98;
            }
            else {
              if (cVar4 != '\x02') goto LAB_1487f0005;
              FUN_1487f69c6(&local_148,&local_150);
              pppplVar16 = (longlong ****)&local_e8;
            }
            local_170 = &local_150;
            local_178 = &local_108;
            FUN_1487fb92a(pppplVar16);
            plVar9 = local_198;
          }
        }
      }
LAB_1487f0005:
      lVar17 = lVar17 + 8;
    } while ((longlong)iVar5 * 8 != lVar17);
  }
  iVar5 = 0;
  if ((int)uStack_140 != 0) {
    iVar13 = local_188;
    if ((int)uStack_140 < local_188) {
      iVar13 = (int)uStack_140;
    }
    if ((short)local_188 < 0) {
      iVar13 = (int)uStack_140;
    }
    iVar5 = local_19c;
    if (iVar13 < local_19c) {
      iVar5 = iVar13;
    }
    if ((short)local_19c < 0) {
      iVar5 = iVar13;
    }
    if (iVar5 < (int)uStack_140) {
      FUN_1487f08f2(&local_148,iVar5);
      local_108 = (longlong ***)&DAT_100000000;
      local_f8 = 0xffffffff;
      local_f0 = 0;
      iVar13 = 0;
      local_100 = &local_d8;
      if (local_c0 != 0) {
        FUN_1449c0562(&local_108);
        iVar13 = local_c0;
      }
      lVar2 = local_1a8;
      local_160 = local_f8;
      uVar18 = local_160;
      local_158 = local_f0;
      local_154 = local_ec;
      local_170 = local_108;
      local_168 = local_100;
      local_160._4_4_ = (int)(local_f8 >> 0x20);
      local_178 = (longlong ****)&local_e8;
      if ((local_160._4_4_ != iVar13) || (local_100 != &local_d8)) {
        iVar6 = local_160._4_4_;
        local_160 = uVar18;
        do {
          if ((longlong)(int)uStack_140 != 0) {
            lVar17 = 0;
            do {
              if (*(longlong ***)(local_148 + lVar17) == (*local_178)[(longlong)iVar6 * 3 + 1])
              goto LAB_1487f01f5;
              lVar17 = lVar17 + 8;
            } while ((longlong)(int)uStack_140 * 8 != lVar17);
          }
          *(undefined1 *)((longlong)(*local_178)[(longlong)iVar6 * 3] + 0x5a) = 0;
          *(int *)(lVar2 + 0x30) = *(int *)(lVar2 + 0x30) + 1;
LAB_1487f01f5:
          local_160 = CONCAT44(local_160._4_4_,(uint)local_160 & ~local_170._4_4_);
          FUN_1449c0562(&local_170);
          iVar6 = local_160._4_4_;
          uVar18 = local_160;
        } while ((longlong *****)local_178 != &local_e8 ||
                 (local_168 != &local_d8 || local_160._4_4_ != iVar13));
      }
      local_160 = uVar18;
      if ((int)uStack_140 == 0) goto LAB_1487efd29;
    }
    lVar2 = local_148;
    lVar17 = (longlong)(int)uStack_140;
    lVar19 = 0;
    do {
      lVar1 = *(longlong *)(lVar2 + lVar19);
      FUN_1405dc634(param_3);
      *(undefined4 *)(lVar1 + 0x278) = 2;
      lVar3 = param_6[1];
      uVar20 = (int)lVar3 + 1;
      *(uint *)(param_6 + 1) = uVar20;
      if (*(uint *)((longlong)param_6 + 0xc) < uVar20) {
        FUN_1487f8e90(param_6);
      }
      *(longlong *)(*param_6 + (longlong)(int)lVar3 * 8) = lVar1;
      lVar19 = lVar19 + 8;
    } while (lVar17 * 8 != lVar19);
  }
LAB_1487efd29:
  lVar2 = local_138;
  if ((longlong)(int)uStack_120 != 0) {
    lVar17 = 0;
    do {
      *(undefined4 *)(*(longlong *)(local_128 + lVar17) + 0x278) = 1;
      lVar17 = lVar17 + 8;
    } while ((longlong)(int)uStack_120 * 8 != lVar17);
  }
  lVar17 = (longlong)(int)uStack_130;
  if (lVar17 != 0) {
    lVar19 = 0;
    do {
      lVar1 = *(longlong *)(lVar2 + lVar19);
      FUN_1405dc634(param_3,lVar1 + 0x148);
      *(undefined4 *)(lVar1 + 0x278) = 2;
      iVar13 = (int)param_6[1];
      *(uint *)(param_6 + 1) = iVar13 + 1U;
      if (*(uint *)((longlong)param_6 + 0xc) < iVar13 + 1U) {
        FUN_1487f8e90(param_6,iVar13);
      }
      *(longlong *)(*param_6 + (longlong)iVar13 * 8) = lVar1;
      lVar19 = lVar19 + 8;
    } while (lVar17 * 8 != lVar19);
  }
  local_a0 = 0;
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  FUN_1487f46ee(&local_e8);
  plVar9 = local_198;
  if (local_148 != 0) {
    FUN_1400020a8();
  }
  if (local_138 != 0) {
    FUN_1400020a8();
  }
LAB_1487efdc0:
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)(*(longlong *)(local_1a8 + 8) + 0xd0);
  }
  else {
    plVar9 = plVar9 + 0x5e;
  }
  lVar2 = plVar9[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar17 = *plVar9;
    lVar19 = 0;
    do {
      if (*(longlong *)(lVar17 + lVar19) != 0) {
        *(undefined4 *)(*(longlong *)(lVar17 + lVar19) + 0x278) = 0;
      }
      lVar19 = lVar19 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar19);
  }
  if (iVar5 < (int)local_190) {
    uVar11 = (ushort)local_184;
    if (uVar11 == 0xffff) {
      uVar20 = *(uint *)(plVar9 + 1);
    }
    else {
      uVar12 = 0;
      if (0 < (short)uVar11) {
        uVar12 = uVar11;
      }
      uVar20 = (uint)uVar12;
    }
    if (-1 < (short)local_19c) {
      uVar14 = local_19c - iVar5;
      uVar15 = 0;
      if (0 < (int)uVar14) {
        uVar15 = uVar14;
      }
      if ((int)uVar14 < (int)uVar20) {
        uVar20 = uVar15;
      }
    }
    if (0 < (int)uVar20) {
      lVar2 = *plVar9;
      uVar15 = *(uint *)(plVar9 + 1);
      uVar14 = 0;
      if (((local_198 == (longlong *)0x0) &&
          (lVar17 = *(longlong *)(local_1a8 + 0x10), uVar14 = 0, lVar17 != 0)) &&
         (cVar4 = FUN_1405d595e(param_3,lVar17 + 0x128), cVar4 == '\0')) {
        FUN_1405dc634(param_3,lVar17 + 0x148);
        lVar17 = local_1a8;
        *(undefined4 *)(*(longlong *)(local_1a8 + 0x10) + 0x278) = 2;
        iVar5 = (int)param_6[1];
        *(uint *)(param_6 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)param_6 + 0xc) < iVar5 + 1U) {
          FUN_1487f8e90(param_6,iVar5);
        }
        *(undefined8 *)(*param_6 + (longlong)iVar5 * 8) = *(undefined8 *)(lVar17 + 0x10);
        uVar14 = 1;
      }
      if ((0 < (int)uVar15) && (uVar14 < uVar20)) {
        uVar18 = 0;
        do {
          lVar17 = *(longlong *)(lVar2 + uVar18 * 8);
          if (((lVar17 != *(longlong *)(local_1a8 + 0x10)) &&
              (cVar4 = FUN_1487e4df2(local_180,lVar17), cVar4 != '\0')) &&
             (cVar4 = FUN_1405d595e(param_3,lVar17 + 0x128), cVar4 == '\0')) {
            FUN_1405dc634(param_3,lVar17 + 0x148);
            uVar7 = 1;
            if ((longlong)(int)uStack_120 != 0) {
              lVar19 = 0;
              do {
                if (*(longlong *)(local_128 + lVar19) == lVar17) {
                  uVar7 = 2;
                  break;
                }
                lVar19 = lVar19 + 8;
              } while ((longlong)(int)uStack_120 * 8 != lVar19);
            }
            *(undefined4 *)(lVar17 + 0x278) = uVar7;
            lVar19 = (longlong)(int)param_6[1];
            uVar8 = (int)param_6[1] + 1;
            *(uint *)(param_6 + 1) = uVar8;
            if (*(uint *)((longlong)param_6 + 0xc) < uVar8) {
              local_190 = lVar19;
              FUN_1487f8e90(param_6,lVar19);
              lVar19 = local_190;
            }
            *(longlong *)(*param_6 + lVar19 * 8) = lVar17;
            uVar14 = uVar14 + 1;
          }
          uVar18 = uVar18 + 1;
        } while ((uVar18 < uVar15) && ((int)uVar14 < (int)uVar20));
      }
    }
  }
  local_178 = (longlong ****)0x100000000;
  local_168._0_4_ = 0xffffffff;
  local_168._4_4_ = 0;
  local_160 = local_160 & 0xffffffff00000000;
  iVar5 = 0;
  local_170 = (longlong ***)local_88;
  if (local_70 != 0) {
    FUN_1449c0562(&local_178);
    iVar5 = local_70;
  }
  lVar2 = local_1a8;
  local_d0 = (uint)local_168;
  iStack_cc = local_168._4_4_;
  local_c8 = local_160;
  uStack_e0 = local_178;
  local_d8 = (undefined1 *)local_170;
  local_e8 = &local_98;
  if ((local_168._4_4_ != iVar5) || (local_170 != (longlong ***)local_88)) {
    do {
      if (*(int *)((*local_e8)[(longlong)iStack_cc * 3 + 1] + 0x4f) != 2) {
        *(undefined1 *)((longlong)(*local_e8)[(longlong)iStack_cc * 3] + 0x5a) = 0;
        *(int *)(lVar2 + 0x30) = *(int *)(lVar2 + 0x30) + 1;
      }
      local_d0 = local_d0 & ~uStack_e0._4_4_;
      FUN_1449c0562(&uStack_e0);
    } while (local_e8 != &local_98 || (local_d8 != local_88 || iStack_cc != iVar5));
  }
  if ((local_198 != (longlong *)0x0) && (lVar2 = local_198[0x61], (longlong)(int)lVar2 != 0)) {
    lVar17 = local_198[0x60];
    lVar19 = 0;
    do {
      lVar1 = *(longlong *)(lVar17 + lVar19);
      if ((((lVar1 != 0) && (*(char *)(lVar1 + 0x40) == '\x01')) &&
          (*(char *)(lVar1 + 0x328) == '\x01')) && (*(int *)(lVar1 + 0x278) == 1)) {
        iVar5 = (int)param_6[1];
        *(uint *)(param_6 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)param_6 + 0xc) < iVar5 + 1U) {
          FUN_1487f8e90(param_6,iVar5);
        }
        *(longlong *)(*param_6 + (longlong)iVar5 * 8) = lVar1;
      }
      lVar19 = lVar19 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar19);
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1487f46ee(&local_98);
  if (local_128 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487f0748 FUN_1487f0748 body=233 status=ok
// SIG undefined FUN_1487f0748(void)

void FUN_1487f0748(longlong param_1,longlong *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  if (param_3 < (int)param_2[1]) {
    lVar4 = (longlong)param_3;
    do {
      lVar2 = *(longlong *)(*param_2 + lVar4 * 8);
      if (*(longlong *)(lVar2 + 0x270) == 0) {
        if (*(char *)(lVar2 + 0x168) == '\x01') {
          puVar3 = (undefined8 *)FUN_14001cc68(0x70,0x10);
          puVar3[6] = 0;
          puVar3[7] = 0;
          puVar3[10] = 0;
          puVar3[0xb] = 0;
          *puVar3 = 0;
          puVar3[1] = 0;
          puVar3[2] = 0;
          puVar3[3] = 0;
          puVar3[4] = 0;
          puVar3[5] = 0;
          puVar3[8] = 0;
          puVar3[9] = 0;
          *(undefined8 *)((longlong)puVar3 + 0x34) = 0xffffffff00000080;
          *(undefined1 *)(puVar3 + 0xb) = 0;
          puVar3[0xc] = 0;
          puVar3[0xd] = 0;
          FUN_1487ea666(puVar3,lVar2);
          *(undefined2 *)(puVar3 + 0xb) = 0x101;
          iVar1 = *(int *)(param_1 + 0x50);
          *(uint *)(param_1 + 0x50) = iVar1 + 1U;
          if (*(uint *)(param_1 + 0x54) < iVar1 + 1U) {
            FUN_1487f8810((longlong *)(param_1 + 0x48),iVar1);
          }
          *(undefined8 **)(*(longlong *)(param_1 + 0x48) + (longlong)iVar1 * 8) = puVar3;
        }
      }
      else {
        *(undefined1 *)(*(longlong *)(lVar2 + 0x270) + 0x59) = 1;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 1487f0832 FUN_1487f0832 body=192 status=ok
// SIG undefined FUN_1487f0832(void)

void FUN_1487f0832(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  
  iVar3 = (int)param_1[1];
  if (iVar3 < 1) {
    return;
  }
  lVar7 = 0;
  bVar4 = false;
  do {
    uVar5 = (uint)lVar7;
    lVar7 = (longlong)(int)uVar5;
    lVar1 = *param_1 + lVar7 * 8;
    lVar9 = 0;
    while (*(longlong *)(lVar1 + lVar9 * 8) != *param_2) {
      lVar2 = lVar7 + lVar9;
      lVar9 = lVar9 + 1;
      if ((longlong)iVar3 <= lVar2 + 1) {
        if (!bVar4) {
          return;
        }
        goto LAB_1487f08de;
      }
    }
    iVar8 = (int)lVar9;
    if (~uVar5 + iVar3 != iVar8) {
      iVar6 = (~uVar5 + iVar3) - iVar8;
      if (0 < iVar6) {
        iVar6 = 1;
      }
      memmove((void *)(lVar1 + lVar9 * 8),(void *)(*param_1 + (longlong)(iVar3 - iVar6) * 8),
              (longlong)iVar6 << 3);
      iVar3 = (int)param_1[1];
    }
    lVar7 = lVar7 + lVar9;
    iVar3 = iVar3 + -1;
    *(int *)(param_1 + 1) = iVar3;
    bVar4 = true;
  } while ((int)(uVar5 + iVar8) < iVar3);
LAB_1487f08de:
  FUN_1487f8774(param_1);
  return;
}



// FUNCTION 1487f08f2 FUN_1487f08f2 body=118 status=ok
// SIG undefined FUN_1487f08f2(void)

void FUN_1487f08f2(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1487f8e90(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_1487fb4bc(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1487f096a FUN_1487f096a body=64 status=ok
// SIG undefined FUN_1487f096a(void)

longlong FUN_1487f096a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_1 + 0x68) != 0) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x148), lVar2 != 0)) {
    iVar1 = *(int *)(param_1 + 0x70);
    if ((-1 < (longlong)iVar1) &&
       (((iVar1 < *(int *)(lVar2 + 0x118) &&
         (lVar2 = (longlong)iVar1 * 0x58 + *(longlong *)(lVar2 + 0x110), lVar2 != 0)) &&
        (*(longlong *)(lVar2 + 0xc) == *(longlong *)(param_1 + 8))))) {
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 1487f09aa FUN_1487f09aa body=289 status=ok
// SIG undefined FUN_1487f09aa(void)

ulonglong FUN_1487f09aa(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 unaff_RBP;
  ulonglong uVar7;
  uint uVar8;
  
  lVar4 = FUN_1487f096a();
  lVar6 = *(longlong *)(param_1 + 0x10);
  if (lVar6 == 0) {
    lVar6 = *(longlong *)(param_1 + 0x38);
  }
  uVar5 = 0;
  if (((DAT_14c9485f0 != 0) && (DAT_14c9485f4 != 0)) && (DAT_14c9485f0 != DAT_14c948000)) {
    if (DAT_14cb73f40 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_1487fdc08(DAT_14cb73f40,&DAT_14c9485f0);
    }
  }
  if (lVar6 != 0) {
    uVar3 = FUN_1487ebd3a(lVar6,uVar5,param_2);
    if ((lVar4 != 0) && (-1 < (short)uVar3)) {
      uVar8 = uVar3 & 0xffff;
      if ((int)uVar8 < *(int *)(lVar4 + 0x40)) {
        uVar7 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
        cVar2 = FUN_1487ec10a(lVar6,uVar3,param_3,1);
        if (cVar2 != '\0') {
          if ((((int)uVar8 < *(int *)(lVar6 + 0x1c8)) &&
              (lVar1 = *(longlong *)(*(longlong *)(lVar6 + 0x1c0) + (ulonglong)uVar8 * 8),
              lVar1 != 0)) && (*(char *)(lVar1 + 0x20) == '\0')) {
            *(undefined2 *)(*(longlong *)(lVar4 + 0x38) + (ulonglong)uVar8 * 2) =
                 *(undefined2 *)(lVar1 + 0x28);
            *(undefined4 *)(param_1 + 4) = *(undefined4 *)(lVar6 + 0x2a8);
            if ((*(longlong *)(param_1 + 0x68) != 0) &&
               (lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x148), lVar6 != 0)) {
              FUN_140705884(lVar6,lVar4);
            }
          }
          goto LAB_1487f09fb;
        }
      }
    }
  }
  uVar7 = 0;
LAB_1487f09fb:
  return uVar7 & 0xffffffff;
}



// FUNCTION 1487f0acc FUN_1487f0acc body=228 status=ok
// SIG undefined FUN_1487f0acc(void)

undefined8
FUN_1487f0acc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  local_38 = 3;
  *local_40 = &PTR_LAB_14b3f0630;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_40[2] = lVar2;
  *local_40 = &PTR_FUN_14b3f05c0;
  local_40[3] = param_3;
  local_40[4] = param_4;
  FUN_1487fbc4a(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487f0bc4 FUN_1487f0bc4 body=282 status=ok
// SIG undefined FUN_1487f0bc4(void)

void FUN_1487f0bc4(longlong param_1,longlong param_2,uint param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = FUN_1487f096a();
  if (lVar6 == 0) {
    return;
  }
  uVar1 = *(ushort *)(param_1 + 0x60);
  if ((param_3 & 2) != 0) {
    *(ushort *)(param_1 + 0x60) = uVar1 | 1;
  }
  lVar7 = *(longlong *)(param_1 + 0x68);
  if ((((lVar7 != 0) && (*(longlong *)(lVar7 + 0x140) != 0)) &&
      (cVar4 = FUN_144729dda(lVar7 + 0x138), cVar4 != '\0')) &&
     ((*(longlong **)(lVar7 + 0x140) != (longlong *)0x0 &&
      (cVar4 = (**(code **)(**(longlong **)(lVar7 + 0x140) + 0x40))(), cVar4 != '\0')))) {
    if ((param_3 & 0xc) == 0) goto LAB_1487f0c52;
    if (*(int *)(param_2 + 0x2a8) != *(int *)(param_1 + 4)) {
      FUN_1487ec096((longlong *)(lVar6 + 0x38),*(undefined4 *)(param_2 + 0x2a0));
      iVar5 = *(int *)(param_2 + 0x2a0);
      if (0 < iVar5) {
        lVar7 = 0;
        do {
          lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x1c0) + lVar7 * 8);
          if (lVar3 != 0) {
            *(undefined2 *)(*(longlong *)(lVar6 + 0x38) + lVar7 * 2) = *(undefined2 *)(lVar3 + 0x28)
            ;
            iVar5 = *(int *)(param_2 + 0x2a0);
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 < iVar5);
      }
      uVar2 = *(undefined4 *)(param_2 + 0x2a8);
      *(undefined4 *)(lVar6 + 0x30) = uVar2;
      *(undefined4 *)(param_1 + 4) = uVar2;
    }
  }
  if ((param_3 & 8) != 0) {
    *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) | 2;
  }
LAB_1487f0c52:
  if ((uVar1 == 0) && (*(short *)(param_1 + 0x60) != 0)) {
    FUN_1487f0d88(param_1);
    return;
  }
  return;
}



// FUNCTION 1487f0cde FUN_1487f0cde body=155 status=ok
// SIG undefined FUN_1487f0cde(void)

void FUN_1487f0cde(int *param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_1487f096a();
  if (lVar1 != 0) {
    if (*param_1 != *(int *)(lVar1 + 0x1c)) {
      *param_1 = *(int *)(lVar1 + 0x1c);
      local_28 = 0;
      uStack_20 = 0;
      FUN_143ccaafe(param_1,&local_28,0,1);
    }
    if (((param_1[1] != *(int *)(lVar1 + 0x30)) &&
        (param_1[1] = *(int *)(lVar1 + 0x30), *(longlong *)(param_1 + 4) == 0)) &&
       (*(longlong *)(param_1 + 0xe) != 0)) {
      FUN_1487ec1d6(*(longlong *)(param_1 + 0xe),lVar1 + 0x38);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487f0d88 FUN_1487f0d88 body=240 status=ok
// SIG undefined FUN_1487f0d88(void)

void FUN_1487f0d88(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = FUN_1487f096a();
  if (((lVar5 != 0) && (*(short *)(param_1 + 0x60) != 0)) &&
     (lVar1 = *(longlong *)(param_1 + 0x68), lVar1 != 0)) {
    if (*(longlong *)(lVar1 + 0x140) != 0) {
      cVar3 = FUN_144729dda(lVar1 + 0x138);
      if ((cVar3 != '\0') && (*(longlong **)(lVar1 + 0x140) != (longlong *)0x0)) {
        cVar3 = (**(code **)(**(longlong **)(lVar1 + 0x140) + 0x40))();
        if (cVar3 != '\0') {
          lVar1 = *(longlong *)(param_1 + 0x38);
          if (lVar1 == 0) {
            *(undefined4 *)(param_1 + 4) = 0;
            *(undefined4 *)(lVar5 + 0x40) = 0;
            if (*(int *)(lVar5 + 0x44) != 0) {
              FUN_140ca8596(lVar5 + 0x38,0);
            }
          }
          else {
            FUN_1487ec096((longlong *)(lVar5 + 0x38),*(undefined4 *)(lVar1 + 0x2a0));
            iVar4 = *(int *)(lVar1 + 0x2a0);
            if (0 < iVar4) {
              lVar6 = 0;
              do {
                lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x1c0) + lVar6 * 8);
                if (lVar2 != 0) {
                  *(undefined2 *)(*(longlong *)(lVar5 + 0x38) + lVar6 * 2) =
                       *(undefined2 *)(lVar2 + 0x28);
                  iVar4 = *(int *)(lVar1 + 0x2a0);
                }
                lVar6 = lVar6 + 1;
              } while (lVar6 < iVar4);
            }
            *(undefined4 *)(param_1 + 4) = *(undefined4 *)(lVar1 + 0x2a8);
          }
        }
      }
    }
    if (*(longlong *)(param_1 + 0x68) != 0) {
      FUN_143ccca3a(*(longlong *)(param_1 + 0x68),0);
      return;
    }
  }
  return;
}



// FUNCTION 1487f0e78 FUN_1487f0e78 body=135 status=ok
// SIG undefined FUN_1487f0e78(void)

void FUN_1487f0e78(longlong param_1)

{
  char cVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20;
  undefined7 uStack_1f;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1487f0acc(*(longlong *)(param_1 + 0x10) + 0x2d0,&local_20,param_1,&LAB_1487f0bb2);
    *(ulonglong *)(param_1 + 0x30) = CONCAT71(uStack_1f,local_20);
    if (*(longlong *)(param_1 + 0x10) != 0) {
      local_20 = 5;
      cVar1 = FUN_1487e6d6c();
      if (cVar1 != '\0') goto LAB_1487f0ea1;
    }
  }
  FUN_143ccafd2(param_1);
LAB_1487f0ea1:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487f0f00 FUN_1487f0f00 body=263 status=ok
// SIG undefined FUN_1487f0f00(void)

void FUN_1487f0f00(longlong param_1,longlong *param_2,longlong *param_3,undefined4 param_4)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)(param_1 + 0x10) == *(int *)(param_1 + 0x3c)) {
    return;
  }
  lVar7 = *param_2;
  uVar2 = (uint)((ulonglong)lVar7 >> 0x10);
  uVar5 = (uint)lVar7 & 0xffff;
  lVar4 = param_1 + 0x40;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x48);
  }
  iVar6 = *(int *)(lVar4 + (ulonglong)
                           (*(int *)(param_1 + 0x50) - 1U &
                           (int)((ulonglong)lVar7 >> 0x20) + ((uint)lVar7 << 0x10 | uVar5) +
                           (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
  if (iVar6 == -1) {
    return;
  }
  while (plVar1 = (longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar6 * 0x48),
        *plVar1 != lVar7) {
    iVar6 = (int)plVar1[8];
    if (iVar6 == -1) {
      return;
    }
  }
  if (((ulonglong)(plVar1 + 1) & 0xfffffffffffffff7) == 0) {
    return;
  }
  if ((longlong)(int)plVar1[7] != 0) {
    plVar3 = (longlong *)plVar1[6];
    lVar7 = (longlong)(int)plVar1[7] * 0x38;
    do {
      if ((*plVar3 == *param_3) && ((int)plVar3[1] == DAT_14c9485f0)) goto LAB_1487f0ffd;
      plVar3 = plVar3 + 7;
      lVar7 = lVar7 + -0x38;
    } while (lVar7 != 0);
  }
  plVar3 = (longlong *)FUN_1487f1008(plVar1 + 6);
  *plVar3 = *param_3;
  FUN_1447715ec(plVar3 + 1,&DAT_14c9485f0);
LAB_1487f0ffd:
  *(undefined4 *)(plVar3 + 6) = param_4;
  return;
}



// FUNCTION 1487f1008 FUN_1487f1008 body=59 status=ok
// SIG undefined FUN_1487f1008(void)

longlong FUN_1487f1008(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1487fbfae(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x38 + *param_1;
  FUN_1487fbf9e(lVar2);
  return lVar2;
}



// FUNCTION 1487f1044 FUN_1487f1044 body=60 status=ok
// SIG undefined FUN_1487f1044(void)

ulonglong FUN_1487f1044(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x18))();
  uVar2 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  if (lVar1 != 0) {
    FUN_1487f1080(lVar1,param_2,param_3,param_4);
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),2);
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 1487f1080 FUN_1487f1080 body=323 status=ok
// SIG undefined FUN_1487f1080(void)

void FUN_1487f1080(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar5 = FUN_1487f1456();
  if (cVar5 != '\0') {
    plVar1 = (longlong *)(param_1 + 0x168);
    lVar2 = param_1 + 0x178;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    uStack_48 = 0;
    uStack_58 = lVar2;
    if (*(int *)(param_1 + 400) == 0) {
      iVar7 = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      iVar7 = *(int *)(param_1 + 400);
    }
    uStack_68 = CONCAT44(uStack_44,uStack_48);
    local_70 = local_50;
    uVar4 = local_70;
    local_80 = (undefined4)local_60;
    uStack_7c = local_60._4_4_;
    uStack_78 = (undefined4)uStack_58;
    uStack_74 = uStack_58._4_4_;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    iVar6 = local_70._4_4_;
    local_88 = plVar1;
    if ((local_70._4_4_ != iVar7) || (local_70 = uVar4, uStack_58 != lVar2)) {
      do {
        local_70 = uVar4;
        lVar3 = *(longlong *)(*(longlong *)(*local_88 + 8 + (longlong)iVar6 * 0x18) + 0x38);
        if (lVar3 != 0) {
          FUN_1487ef73c(lVar3,param_2,param_3,param_4);
        }
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~uStack_7c);
        FUN_1449c0562(&local_80);
        iVar6 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_88 != plVar1 ||
               (CONCAT44(uStack_74,uStack_78) != lVar2 || local_70._4_4_ != iVar7));
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487f11c4 FUN_1487f11c4 body=427 status=ok
// SIG undefined FUN_1487f11c4(void)

ulonglong FUN_1487f11c4(longlong param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 unaff_RBP;
  ulonglong uVar8;
  
  if (4 < *(byte *)(param_1 + 0x1c)) {
LAB_1487f1224:
    *(undefined1 *)(param_1 + 0x1ba) = 1;
    if ((longlong)*(int *)(param_2 + 0x30) == 0) {
      uVar8 = 0;
    }
    else {
      lVar6 = *(longlong *)(param_2 + 0x28);
      lVar5 = lVar6 + (longlong)*(int *)(param_2 + 0x30) * 0x18;
      uVar8 = 0;
      do {
        bVar3 = FUN_145945904(param_1,lVar6,lVar6 + 8,param_3);
        uVar8 = (ulonglong)(byte)((byte)uVar8 | bVar3);
        lVar6 = lVar6 + 0x18;
      } while (lVar6 != lVar5);
    }
    FUN_143ccca3a(param_1,1);
    goto LAB_1487f126e;
  }
  if ((((*(byte *)(param_1 + 0x1c) == 4) || (*(longlong *)(param_1 + 0x140) == 0)) ||
      (cVar2 = FUN_144729dda(param_1 + 0x138), cVar2 == '\0')) ||
     ((*(longlong **)(param_1 + 0x140) == (longlong *)0x0 ||
      (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x140) + 0x40))(), cVar2 == '\0')))) {
    uVar8 = 0;
    goto LAB_1487f126e;
  }
  if (*(byte *)(param_1 + 0x1c) == 1) {
    *(undefined1 *)(param_1 + 0x1c) = 2;
  }
  else if (2 < *(byte *)(param_1 + 0x1c)) goto LAB_1487f1224;
  lVar5 = *(longlong *)(param_2 + 0x18);
  if (lVar5 == 0) {
    uVar4 = FUN_145bc9f92();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_2 + 0x18) = lVar5;
  }
  lVar6 = *(longlong *)(param_2 + 0x20);
  if (lVar6 == 0) {
    if ((lVar5 != 0) && (*(longlong *)(param_2 + 0x10) != 0)) {
      plVar1 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        *(undefined8 *)(param_2 + 0x20) = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar6 = FUN_144aff482(uVar4,(longlong *)(param_2 + 0x10));
        *(longlong *)(param_2 + 0x20) = lVar6;
        if (lVar6 != 0) goto LAB_1487f12fe;
      }
    }
  }
  else {
LAB_1487f12fe:
    if (*(int *)(param_1 + 0x1bc) <= param_3) {
      *(longlong *)(param_1 + 0x1c0) = lVar6;
      *(int *)(param_1 + 0x1bc) = param_3;
    }
  }
  lVar5 = FUN_1487f1638(param_1,param_3);
  uVar8 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  if ((lVar5 != 0) && ((longlong)*(int *)(param_2 + 0x30) != 0)) {
    lVar7 = *(longlong *)(param_2 + 0x28);
    lVar6 = lVar7 + (longlong)*(int *)(param_2 + 0x30) * 0x18;
    do {
      FUN_1459b2546(lVar5,lVar7,lVar7 + 8,param_3);
      lVar7 = lVar7 + 0x18;
    } while (lVar7 != lVar6);
  }
LAB_1487f126e:
  return uVar8 & 0xffffff01;
}



// FUNCTION 1487f1370 FUN_1487f1370 body=128 status=ok
// SIG undefined FUN_1487f1370(void)

void FUN_1487f1370(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0x20))();
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x140) != 0)) {
    cVar1 = FUN_144729dda(lVar2 + 0x138);
    if ((cVar1 != '\0') && (*(longlong **)(lVar2 + 0x140) != (longlong *)0x0)) {
      cVar1 = (**(code **)(**(longlong **)(lVar2 + 0x140) + 0x40))();
      if (cVar1 != '\0') {
        FUN_1487f13f0(lVar2,param_2,param_3,param_4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1487f13f0 FUN_1487f13f0 body=102 status=ok
// SIG undefined FUN_1487f13f0(void)

undefined8 FUN_1487f13f0(longlong param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((*param_2 != 0) || (*(byte *)(param_1 + 0x1c) != 4)) {
    if (*(byte *)(param_1 + 0x1c) < 3) {
      FUN_1487f0f00(param_1 + 200,param_2,param_3,param_4);
      return 1;
    }
    lVar1 = FUN_1487f158a();
    if (lVar1 != 0) {
      uVar2 = FUN_1487f09aa(lVar1,param_3,param_4);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1487f1456 FUN_1487f1456 body=306 status=ok
// SIG undefined FUN_1487f1456(void)

ulonglong FUN_1487f1456(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong unaff_RSI;
  ulonglong uVar5;
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
  plVar1 = (longlong *)(param_1 + 0x168);
  lVar2 = param_1 + 0x178;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  iVar4 = 0;
  local_48 = lVar2;
  if (*(int *)(param_1 + 400) != 0) {
    FUN_1449c0562(&local_50);
    iVar4 = *(int *)(param_1 + 400);
    unaff_RSI = param_1;
  }
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_70 = local_50;
  local_68 = local_48;
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  local_78 = plVar1;
  if ((iStack_3c != iVar4) || (local_48 != lVar2)) {
    do {
      lVar3 = *(longlong *)(*local_78 + 8 + (longlong)iStack_5c * 0x18);
      if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x10) != 0)) {
        uVar5 = 0;
        break;
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while ((iStack_5c != iVar4) || ((local_68 != lVar2 || (local_78 != plVar1))));
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 1487f158a FUN_1487f158a body=173 status=ok
// SIG undefined FUN_1487f158a(void)

longlong FUN_1487f158a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x170) != *(int *)(param_1 + 0x19c)) {
    lVar2 = *param_2;
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar5 = (uint)lVar2 & 0xffff;
    lVar4 = param_1 + 0x1a0;
    if (*(longlong *)(param_1 + 0x1a8) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x1a8);
    }
    iVar6 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x1b0) - 1U &
                             (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar5) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x168) + (longlong)iVar6 * 0x18);
        if (*plVar1 == lVar2) {
          if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
            return plVar1[1];
          }
          return 0;
        }
        iVar6 = (int)plVar1[2];
      } while (iVar6 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1487f1638 FUN_1487f1638 body=102 status=ok
// SIG undefined FUN_1487f1638(void)

undefined8 * FUN_1487f1638(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x20);
    if (puVar1 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)FUN_14001cc68(0x58,0x10);
      puVar1[6] = 0;
      puVar1[7] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[8] = 0;
      puVar1[9] = 0;
      puVar1[10] = 0;
      *(undefined8 *)((longlong)puVar1 + 0x34) = 0xffffffff00000080;
      *(undefined8 **)(param_1 + 0x20) = puVar1;
    }
  }
  else {
    puVar1 = (undefined8 *)(param_1 + 200);
  }
  return puVar1;
}



// FUNCTION 1487f169e FUN_1487f169e body=383 status=ok
// SIG undefined FUN_1487f169e(void)

void FUN_1487f169e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x168);
  FUN_1487f181e(param_2 + 0x28,*(int *)(param_1 + 0x170) - *(int *)(param_1 + 0x19c));
  lVar2 = param_1 + 0x178;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = lVar2;
  if (*(int *)(param_1 + 400) == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar6 = *(int *)(param_1 + 400);
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = plVar1;
  if ((iStack_44 != iVar6) || (uStack_50 != lVar2)) {
    do {
      if (*(longlong *)(*local_80 + 8 + (longlong)iStack_64 * 0x18) != 0) {
        puVar3 = (undefined8 *)(*local_80 + (longlong)iStack_64 * 0x18);
        puVar5 = (undefined8 *)FUN_1487e5dca(param_2 + 0x28);
        *puVar5 = *puVar3;
        lVar4 = puVar3[1];
        puVar3 = (undefined8 *)(lVar4 + 0x20);
        piVar8 = (int *)(lVar4 + 0x28);
        if (*(longlong *)(lVar4 + 0x38) != 0) {
          piVar8 = (int *)(lVar4 + 0x50);
          puVar3 = (undefined8 *)(lVar4 + 0x48);
        }
        iVar7 = 0;
        if (*piVar8 != 0) {
          iVar7 = *piVar8 + -1;
        }
        FUN_1402980a2(puVar5 + 1,*puVar3,iVar7);
      }
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while (local_80 != plVar1 || (CONCAT44(uStack_6c,uStack_70) != lVar2 || iStack_64 != iVar6));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487f181e FUN_1487f181e body=61 status=ok
// SIG undefined FUN_1487f181e(void)

void FUN_1487f181e(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (param_2 <= *(int *)((longlong)param_1 + 0xc)) {
    FUN_14096d529(*param_1,*(undefined4 *)(param_1 + 1));
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  FUN_1487fca42(param_1);
  return;
}



// FUNCTION 1487f185c FUN_1487f185c body=598 status=ok
// SIG undefined FUN_1487f185c(void)

void FUN_1487f185c(undefined4 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined1 uVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (((param_2 != (undefined4 *)0x0) && (param_1[0x5c] == param_1[0x67])) &&
     ((*(longlong *)(param_1 + 0x52) == 0 || (*(int *)(*(longlong *)(param_1 + 0x52) + 0x118) == 0))
     )) {
    plVar1 = (longlong *)(param_1 + 0x5a);
    FUN_1487f477c(plVar1,param_2 + 0x5a);
    puVar2 = param_1 + 0x5e;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    uStack_60 = puVar2;
    if (param_1[100] == 0) {
      iVar14 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar14 = param_1[100];
    }
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    uVar11 = local_78;
    local_88 = (undefined4)local_68;
    uStack_84 = local_68._4_4_;
    uStack_80 = (undefined4)uStack_60;
    uStack_7c = uStack_60._4_4_;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    iVar13 = local_78._4_4_;
    local_90 = plVar1;
    if ((local_78._4_4_ != iVar14) || (local_78 = uVar11, uStack_60 != puVar2)) {
      do {
        local_78 = uVar11;
        lVar16 = *(longlong *)(*local_90 + 8 + (longlong)iVar13 * 0x18);
        if (lVar16 != 0) {
          plVar15 = (longlong *)(*local_90 + (longlong)iVar13 * 0x18 + 8);
          lVar5 = *(longlong *)(lVar16 + 0x38);
          if (lVar5 != 0) {
            lVar6 = *(longlong *)(lVar16 + 0x40);
            if (lVar6 != 0) {
              LOCK();
              *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
              UNLOCK();
            }
            plVar7 = *(longlong **)(lVar16 + 0x18);
            *(longlong *)(lVar16 + 0x10) = lVar5;
            *(longlong *)(lVar16 + 0x18) = lVar6;
            if (plVar7 != (longlong *)0x0) {
              LOCK();
              plVar3 = plVar7 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                (**(code **)*plVar7)(plVar7);
                LOCK();
                piVar4 = (int *)((longlong)plVar7 + 0xc);
                *piVar4 = *piVar4 + -1;
                UNLOCK();
                if (*piVar4 == 0) {
                  (**(code **)(*plVar7 + 0x10))(plVar7);
                }
              }
            }
            lVar16 = *plVar15;
            iVar13 = *(int *)(lVar16 + 0x50) + -1;
            if (*(int *)(lVar16 + 0x50) == 0) {
              iVar13 = 0;
            }
            FUN_1402980a2(lVar16 + 0x20,*(undefined8 *)(lVar16 + 0x48),iVar13);
            lVar16 = *plVar15;
          }
          if (*(longlong *)(lVar16 + 0x10) != 0) {
            FUN_1487f0acc(*(longlong *)(lVar16 + 0x10) + 0x2d0,&local_68,lVar16,&LAB_1487f0bb2);
            *(undefined8 *)(lVar16 + 0x30) = local_68;
            lVar16 = *plVar15;
          }
          *(undefined4 **)(lVar16 + 0x68) = param_1;
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
        FUN_1449c0562(&local_88);
        iVar13 = local_78._4_4_;
        uVar11 = local_78;
      } while (local_90 != plVar1 ||
               ((undefined4 *)CONCAT44(uStack_7c,uStack_80) != puVar2 || local_78._4_4_ != iVar14));
    }
    if (param_2 != param_1) {
      if (*(char *)(param_2 + 6) == '\x01') {
        *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
        uVar8 = param_2[1];
        uVar9 = param_2[2];
        uVar10 = param_2[3];
        *param_1 = *param_2;
        param_1[1] = uVar8;
        param_1[2] = uVar9;
        param_1[3] = uVar10;
        uVar12 = 1;
      }
      else {
        if (*(char *)(param_1 + 6) == '\0') goto LAB_1487f18a9;
        uVar12 = 0;
      }
      *(undefined1 *)(param_1 + 6) = uVar12;
    }
  }
LAB_1487f18a9:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487f1ab4 FUN_1487f1ab4 body=95 status=ok
// SIG undefined FUN_1487f1ab4(void)

undefined8 * FUN_1487f1ab4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1457b9412(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1486208ba(param_1,iVar1);
      FUN_148620929(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1487f1b14 FUN_1487f1b14 body=72 status=ok
// SIG undefined FUN_1487f1b14(void)

int FUN_1487f1b14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = FUN_1487f158a();
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    lVar2 = FUN_1487f096a(lVar2);
    iVar1 = 0;
    if (lVar2 != 0) {
      iVar3 = *(int *)(lVar2 + 0x28) + -1;
      if (*(int *)(lVar2 + 0x28) == 0) {
        iVar3 = iVar1;
      }
      FUN_1402980a2(param_3,*(undefined8 *)(lVar2 + 0x20),iVar3);
      iVar1 = 1;
    }
  }
  return iVar1;
}



// FUNCTION 1487f1b5c FUN_1487f1b5c body=373 status=ok
// SIG undefined FUN_1487f1b5c(void)

undefined8 FUN_1487f1b5c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  undefined2 *local_40;
  longlong local_38;
  longlong local_30;
  int local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147091054(&DAT_14cb73490,&local_40,param_2);
  if ((local_38 != 0) && ((longlong)local_28 != 0)) {
    lVar3 = 0;
    do {
      if (*(longlong *)(local_30 + lVar3) != 0) {
        if (DAT_14cb73d28 != 0) {
          local_58 = 0;
          uStack_50 = 0;
          FUN_1487f1cd2(DAT_14cb73d28,&local_40,&local_58);
          iVar1 = (int)uStack_50;
          if (0 < (int)uStack_50) {
            uVar4 = (int)uStack_50 - 1;
            uVar2 = rand();
            uVar2 = (uint)((float)iVar1 * ((float)(uVar2 & 0x7fff) / 32767.0));
            if ((int)uVar2 < (int)uVar4) {
              uVar4 = uVar2;
            }
            if ((-1 < (int)uVar2) && ((int)uVar4 < (int)uStack_50)) {
              FUN_1487f1d5c(param_1,*(undefined8 *)(local_58 + (ulonglong)uVar4 * 8));
              if (local_58 != 0) {
                FUN_1400020a8();
              }
              goto LAB_1487f1bd5;
            }
          }
          if (local_58 != 0) {
            FUN_1400020a8();
          }
        }
        break;
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)local_28 * 8 != lVar3);
  }
  FUN_140056680(param_1,&DAT_149dfb77a);
LAB_1487f1bd5:
  local_40 = &DAT_14a171d50;
  local_28 = 0;
  if (local_24 != 0) {
    FUN_140115c12(&local_30,0);
  }
  local_38 = 0;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1487f1cd2 FUN_1487f1cd2 body=137 status=ok
// SIG undefined FUN_1487f1cd2(void)

void FUN_1487f1cd2(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined1 *local_48;
  longlong local_40;
  code *local_38;
  undefined8 *local_30;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_21 = 1;
  *(undefined4 *)(param_3 + 8) = 0;
  if (*(int *)(param_3 + 0xc) != 0) {
    FUN_1487fcd30(param_3);
  }
  local_30 = &local_50;
  local_48 = &local_21;
  local_38 = FUN_143cce58c;
  local_50 = param_2;
  local_40 = param_3;
  FUN_1487f2f40(param_1);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487f1d5c FUN_1487f1d5c body=163 status=ok
// SIG undefined FUN_1487f1d5c(void)

undefined8 * FUN_1487f1d5c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1487ebc84(&local_28);
  if (local_28 == 0) {
    FUN_140056680(param_1,&DAT_149dfb77a);
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    FUN_1409e3c80(local_28,param_1,0);
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487f1e02 FUN_1487f1e02 body=134 status=ok
// SIG undefined FUN_1487f1e02(void)

undefined8 FUN_1487f1e02(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  FUN_1446dcdd4(local_40);
  if (DAT_14cb73d28 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144837462(DAT_14cb73d28,local_40);
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_1487f1d5c(param_1,uVar1);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487f1e8a FUN_1487f1e8a body=484 status=ok
// SIG undefined FUN_1487f1e8a(void)

longlong *
FUN_1487f1e8a(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined4 param_4,
             undefined1 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined1 local_e0;
  longlong local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1487e64b2(&local_d0);
  if (local_d0 != 0) {
    local_c0 = *param_3;
    FUN_1446dcdd4(&local_b8);
    if (DAT_14cb73f40 == 0) {
      if (local_a0 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      lVar3 = FUN_1487fdc08(DAT_14cb73f40,&local_b8);
      if (local_a0 != 0) {
        FUN_1400020a8();
      }
      if (lVar3 != 0) {
        local_98 = 0;
        local_90 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_8c = 0xffffffff00000080;
        local_84 = 0;
        local_78 = 0;
        local_70 = 0;
        FUN_1487e6dfe(local_d0);
        local_e0 = 1;
        local_e8 = 1;
        FUN_1487e98ce(local_d0,lVar3,&local_b8,param_4);
        *param_1 = 0;
        param_1[1] = 0;
        FUN_1409e3c80(local_d0,param_1,0);
        *param_5 = 1;
        local_70 = 0;
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        FUN_1487f4678(&local_b8);
        goto LAB_1487f1f4c;
      }
    }
  }
  *param_5 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
LAB_1487f1f4c:
  if (local_c8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_c8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_c8)(local_c8);
      LOCK();
      piVar2 = (int *)((longlong)local_c8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_c8 + 0x10))(local_c8);
      }
    }
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487f2070 FUN_1487f2070 body=449 status=ok
// SIG undefined FUN_1487f2070(void)

longlong *
FUN_1487f2070(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  longlong local_68;
  undefined4 local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1487e64b2(&local_c0);
  if (local_c0 != 0) {
    local_b0 = *param_3;
    FUN_1446dcdd4(&local_a8);
    if (DAT_14cb73f40 == 0) {
      if (local_90 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      lVar3 = FUN_1487fdc08(DAT_14cb73f40,&local_a8);
      if (local_90 != 0) {
        FUN_1400020a8();
      }
      if (lVar3 != 0) {
        local_88 = 0;
        local_80 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_7c = 0xffffffff00000080;
        local_74 = 0;
        local_68 = 0;
        local_60 = 0;
        FUN_1487eaa5e(local_c0,lVar3);
        *param_1 = 0;
        param_1[1] = 0;
        FUN_1409e3c80(local_c0,param_1,0);
        *param_4 = 1;
        local_60 = 0;
        if (local_68 != 0) {
          FUN_1400020a8();
        }
        FUN_1487f4678(&local_a8);
        goto LAB_1487f2125;
      }
    }
  }
  *param_4 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
LAB_1487f2125:
  if (local_b8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_b8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_b8)(local_b8);
      LOCK();
      piVar2 = (int *)((longlong)local_b8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_b8 + 0x10))(local_b8);
      }
    }
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487f2232 FUN_1487f2232 body=124 status=ok
// SIG undefined FUN_1487f2232(void)

undefined8 FUN_1487f2232(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined7 uVar5;
  byte bVar6;
  
  if (param_1 != (longlong *)0x0) {
    uVar2 = FUN_140f26902();
    lVar3 = (**(code **)(*param_1 + 0x288))(param_1,uVar2);
    if (lVar3 != 0) {
      uVar2 = FUN_140f26902();
      lVar4 = FUN_144718840(lVar3,uVar2);
      param_1 = (longlong *)(ulonglong)(lVar3 == lVar4);
      if (lVar4 != 0 && lVar3 != lVar4) {
        uVar2 = FUN_14594588a(lVar4,param_2,param_3,param_4);
        bVar6 = (byte)uVar2;
        uVar5 = (undefined7)((ulonglong)uVar2 >> 8);
        bVar1 = 1;
        goto LAB_1487f228b;
      }
    }
  }
  bVar6 = (byte)param_1;
  bVar1 = 0;
  uVar5 = 0;
LAB_1487f228b:
  return CONCAT71(uVar5,bVar1 & bVar6);
}



// FUNCTION 1487f22ae FUN_1487f22ae body=137 status=ok
// SIG undefined FUN_1487f22ae(void)

byte FUN_1487f22ae(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (param_1 != (longlong *)0x0) {
    uVar2 = FUN_140f26902();
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar2);
    if (plVar3 != (longlong *)0x0) {
      uVar2 = FUN_140f26902();
      plVar4 = (longlong *)FUN_144718840(plVar3,uVar2);
      if (plVar4 != (longlong *)0x0 && plVar3 != plVar4) {
        lVar5 = (**(code **)(*plVar4 + 0x20))(plVar4);
        bVar1 = (byte)plVar4;
        if (lVar5 != 0) {
          bVar1 = FUN_1487f1b14(lVar5,param_2,param_3);
        }
        return lVar5 != 0 & bVar1;
      }
    }
  }
  return 0;
}



// FUNCTION 1487f2338 FUN_1487f2338 body=50 status=ok
// SIG undefined FUN_1487f2338(void)

void FUN_1487f2338(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_14affef50;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  uVar1 = DAT_14cb73de0;
  *(undefined2 *)(param_1 + 7) = 0;
  param_1[1] = uVar1;
  return;
}



// FUNCTION 1487f236a FUN_1487f236a body=64 status=ok
// SIG undefined FUN_1487f236a(void)

void FUN_1487f236a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 2) = 0xffffffff;
  *puVar1 = &PTR_FUN_14b3eff80;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  return;
}



// FUNCTION 1487f23aa FUN_1487f23aa body=310 status=ok
// SIG undefined FUN_1487f23aa(void)

/* WARNING: Removing unreachable block (ram,0x0001487f24a8) */

undefined8 FUN_1487f23aa(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  void *_Src;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  void *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x18) == 0)) {
    uVar5 = 0;
  }
  else {
    *(short *)(param_1 + 0x14) = *(short *)(param_1 + 0x14) + *(short *)(param_2 + 0x38);
    local_50 = *(undefined8 *)(param_2 + 0x10);
    local_48 = *(undefined4 *)(param_2 + 0x18);
    uStack_44 = *(undefined4 *)(param_2 + 0x1c);
    uStack_40 = *(undefined4 *)(param_2 + 0x20);
    uStack_3c = *(undefined4 *)(param_2 + 0x24);
    local_38 = (void *)0x0;
    uVar2 = *(uint *)(param_2 + 0x30);
    _Src = *(void **)(param_2 + 0x28);
    local_30 = CONCAT44(local_30._4_4_,uVar2);
    if ((longlong)(int)uVar2 == 0) {
      local_30 = (ulonglong)uVar2;
    }
    else {
      FUN_1446dd670(&local_38,uVar2,0);
      memcpy(local_38,_Src,(longlong)(int)uVar2 * 2);
    }
    iVar3 = (int)param_3[1];
    lVar6 = (longlong)iVar3;
    *(uint *)(param_3 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
      FUN_140353c32(param_3,iVar3);
    }
    lVar4 = *param_3;
    *(undefined8 *)(lVar4 + lVar6 * 0x28) = local_50;
    puVar1 = (undefined4 *)(lVar4 + 8 + lVar6 * 0x28);
    *puVar1 = local_48;
    puVar1[1] = uStack_44;
    puVar1[2] = uStack_40;
    puVar1[3] = uStack_3c;
    *(undefined8 *)(lVar4 + 0x18 + lVar6 * 0x28) = 0;
    *(void **)(lVar4 + 0x18 + lVar6 * 0x28) = local_38;
    *(undefined4 *)(lVar4 + 0x20 + lVar6 * 0x28) = (undefined4)local_30;
    *(undefined4 *)(lVar4 + 0x24 + lVar6 * 0x28) = local_30._4_4_;
    local_30 = 0;
    local_38 = (void *)0x0;
    uVar5 = CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1487f24e2 FUN_1487f24e2 body=59 status=ok
// SIG undefined FUN_1487f24e2(void)

void FUN_1487f24e2(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0x18) != 0)) {
    uVar1 = FUN_140655cde(param_2 + 0x10);
    FUN_14485c47a(param_1 + 0x28,uVar1);
    return;
  }
  return;
}



// FUNCTION 1487f251e FUN_1487f251e body=241 status=ok
// SIG undefined FUN_1487f251e(void)

longlong FUN_1487f251e(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  
  cVar4 = FUN_144729dda(param_1 + 0x28);
  if (cVar4 == '\0') {
    param_1 = 0;
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != 0) {
      FUN_1448831cc(param_2,0);
    }
    *(undefined4 *)(param_3 + 1) = 0;
    if (*(int *)((longlong)param_3 + 0xc) != 0) {
      FUN_1402191ca(param_3,0);
    }
    plVar5 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x3b8))(plVar5);
    if ((longlong)(int)plVar5[1] != 0) {
      puVar6 = (undefined8 *)*plVar5;
      puVar1 = puVar6 + (longlong)(int)plVar5[1] * 5;
      do {
        uVar3 = *puVar6;
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_144769b64(param_2,iVar2);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = uVar3;
        iVar2 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
          FUN_1446f84a2(param_3,iVar2);
        }
        *(undefined8 *)(*param_3 + (longlong)iVar2 * 8) = puVar6[1];
        puVar6 = puVar6 + 5;
      } while (puVar6 != puVar1);
    }
    param_1 = param_1 + 0x30;
  }
  return param_1;
}



// FUNCTION 1487f2636 FUN_1487f2636 body=60 status=ok
// SIG undefined FUN_1487f2636(void)

void FUN_1487f2636(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 2) = 0xffffffff;
  *puVar1 = &PTR_FUN_14b3effb0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  return;
}



// FUNCTION 1487f2672 FUN_1487f2672 body=46 status=ok
// SIG undefined FUN_1487f2672(void)

undefined8 FUN_1487f2672(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if ((param_2 == 0) || (*(int *)(param_2 + 0x18) == 0)) {
    uVar1 = 0;
  }
  else {
    *(short *)(param_1 + 0x14) = *(short *)(param_1 + 0x14) + *(short *)(param_2 + 0x20);
    FUN_1487f26a0(param_3,param_2 + 0x10);
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 1487f26a0 FUN_1487f26a0 body=95 status=ok
// SIG undefined FUN_1487f26a0(void)

void FUN_1487f26a0(longlong *param_1,undefined8 *param_2)

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
    FUN_140353c32(param_1,iVar2);
  }
  FUN_1487fccae((longlong)iVar2 * 0x28 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 1487f2700 FUN_1487f2700 body=212 status=ok
// SIG undefined FUN_1487f2700(void)

void FUN_1487f2700(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = (longlong *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_14182b7b0(plVar1,0);
  }
  if ((param_2 != 0) && ((longlong)*(int *)(param_2 + 0x18) != 0)) {
    lVar4 = *(longlong *)(param_2 + 0x10);
    lVar5 = (longlong)*(int *)(param_2 + 0x18) * 0x28;
    do {
      if (*(longlong *)(lVar4 + 8) != 0) {
        uVar3 = FUN_140655cde(lVar4);
        local_40 = 0;
        FUN_14485c47a(&local_40,uVar3);
        iVar2 = *(int *)(param_1 + 0x30);
        *(uint *)(param_1 + 0x30) = iVar2 + 1U;
        if (*(uint *)(param_1 + 0x34) < iVar2 + 1U) {
          FUN_14076aab4(plVar1,iVar2);
        }
        *(undefined8 *)(*plVar1 + (longlong)iVar2 * 8) = local_40;
      }
      lVar4 = lVar4 + 0x28;
      lVar5 = lVar5 + -0x28;
    } while (lVar5 != 0);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487f27d6 FUN_1487f27d6 body=303 status=ok
// SIG undefined FUN_1487f27d6(void)

longlong FUN_1487f27d6(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    param_1 = 0;
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != 0) {
      FUN_1448831cc(param_2,0);
    }
    *(undefined4 *)(param_3 + 1) = 0;
    if (*(int *)((longlong)param_3 + 0xc) != 0) {
      FUN_1402191ca(param_3,0);
    }
    if ((longlong)*(int *)(param_1 + 0x30) != 0) {
      lVar8 = *(longlong *)(param_1 + 0x28);
      lVar1 = lVar8 + (longlong)*(int *)(param_1 + 0x30) * 8;
      do {
        cVar4 = FUN_144729dda(lVar8);
        if (cVar4 != '\0') {
          plVar5 = (longlong *)FUN_14479d2ce(lVar8);
          plVar5 = (longlong *)(**(code **)(*plVar5 + 0x3b8))(plVar5);
          if ((longlong)(int)plVar5[1] != 0) {
            puVar7 = (undefined8 *)*plVar5;
            puVar6 = puVar7 + (longlong)(int)plVar5[1] * 5;
            do {
              uVar3 = *puVar7;
              iVar2 = (int)param_2[1];
              *(uint *)(param_2 + 1) = iVar2 + 1U;
              if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
                FUN_144769b64(param_2,iVar2);
              }
              *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = uVar3;
              iVar2 = (int)param_3[1];
              *(uint *)(param_3 + 1) = iVar2 + 1U;
              if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
                FUN_1446f84a2(param_3,iVar2);
              }
              *(undefined8 *)(*param_3 + (longlong)iVar2 * 8) = puVar7[1];
              puVar7 = puVar7 + 5;
            } while (puVar7 != puVar6);
          }
        }
        lVar8 = lVar8 + 8;
      } while (lVar8 != lVar1);
    }
    param_1 = param_1 + 0x38;
  }
  return param_1;
}



// FUNCTION 1487f2932 FUN_1487f2932 body=56 status=ok
// SIG undefined FUN_1487f2932(void)

void FUN_1487f2932(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 2) = 0xffffffff;
  *puVar1 = &PTR_FUN_14b3effe0;
  return;
}



// FUNCTION 1487f296a FUN_1487f296a body=300 status=ok
// SIG undefined FUN_1487f296a(void)

/* WARNING: Removing unreachable block (ram,0x0001487f2a5e) */

undefined8 FUN_1487f296a(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  void *_Src;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  void *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x18) == 0)) {
    uVar5 = 0;
  }
  else {
    local_50 = *(undefined8 *)(param_2 + 0x10);
    local_48 = *(undefined4 *)(param_2 + 0x18);
    uStack_44 = *(undefined4 *)(param_2 + 0x1c);
    uStack_40 = *(undefined4 *)(param_2 + 0x20);
    uStack_3c = *(undefined4 *)(param_2 + 0x24);
    local_38 = (void *)0x0;
    uVar2 = *(uint *)(param_2 + 0x30);
    _Src = *(void **)(param_2 + 0x28);
    local_30 = CONCAT44(local_30._4_4_,uVar2);
    if ((longlong)(int)uVar2 == 0) {
      local_30 = (ulonglong)uVar2;
    }
    else {
      FUN_1446dd670(&local_38,uVar2,0);
      memcpy(local_38,_Src,(longlong)(int)uVar2 * 2);
    }
    iVar3 = (int)param_3[1];
    lVar6 = (longlong)iVar3;
    *(uint *)(param_3 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
      FUN_140353c32(param_3,iVar3);
    }
    lVar4 = *param_3;
    *(undefined8 *)(lVar4 + lVar6 * 0x28) = local_50;
    puVar1 = (undefined4 *)(lVar4 + 8 + lVar6 * 0x28);
    *puVar1 = local_48;
    puVar1[1] = uStack_44;
    puVar1[2] = uStack_40;
    puVar1[3] = uStack_3c;
    *(undefined8 *)(lVar4 + 0x18 + lVar6 * 0x28) = 0;
    *(void **)(lVar4 + 0x18 + lVar6 * 0x28) = local_38;
    *(undefined4 *)(lVar4 + 0x20 + lVar6 * 0x28) = (undefined4)local_30;
    *(undefined4 *)(lVar4 + 0x24 + lVar6 * 0x28) = local_30._4_4_;
    local_30 = 0;
    local_38 = (void *)0x0;
    uVar5 = CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1487f2a98 FUN_1487f2a98 body=58 status=ok
// SIG undefined FUN_1487f2a98(void)

void FUN_1487f2a98(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0x18) != 0)) {
    uVar1 = FUN_145971716(param_2 + 0x10);
    FUN_14485c47a(param_1 + 0x18,uVar1);
    return;
  }
  return;
}



// FUNCTION 1487f2ad2 FUN_1487f2ad2 body=66 status=ok
// SIG undefined FUN_1487f2ad2(void)

undefined8 * FUN_1487f2ad2(undefined8 *param_1)

{
  param_1[1] = DAT_14cb738e8;
  *param_1 = &PTR_FUN_14affefe0;
  param_1[2] = 0;
  FUN_1409e16e4(param_1 + 3);
  param_1[1] = DAT_14cb73df8;
  return param_1;
}



// FUNCTION 1487f2b14 FUN_1487f2b14 body=75 status=ok
// SIG undefined FUN_1487f2b14(void)

undefined8 * FUN_1487f2b14(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x200);
  memset(puVar1 + 1,0,0x1f8);
  *(undefined4 *)(puVar1 + 2) = 0xffffffff;
  *puVar1 = &PTR_FUN_14b3f0010;
  FUN_1409e16e4(puVar1 + 4);
  return puVar1;
}



// FUNCTION 1487f2b60 FUN_1487f2b60 body=482 status=ok
// SIG undefined FUN_1487f2b60(void)

undefined8 * FUN_1487f2b60(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x168) == 0) {
    *param_2 = *(undefined8 *)(param_1 + 0x140);
    uVar4 = *(undefined4 *)(param_1 + 0x14c);
    uVar5 = *(undefined4 *)(param_1 + 0x150);
    uVar6 = *(undefined4 *)(param_1 + 0x154);
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x148);
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar4;
    *(undefined4 *)(param_2 + 2) = uVar5;
    *(undefined4 *)((longlong)param_2 + 0x14) = uVar6;
    param_2[3] = 0;
    iVar2 = *(int *)(param_1 + 0x160);
    _Src = *(void **)(param_1 + 0x158);
    *(int *)(param_2 + 4) = iVar2;
    if ((longlong)iVar2 != 0) {
      FUN_1446dd670(param_2 + 3,iVar2,0);
      memcpy((void *)param_2[3],_Src,(longlong)iVar2 * 2);
LAB_1487f2ca5:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
    }
    *(undefined4 *)((longlong)param_2 + 0x24) = 0;
  }
  else {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x168) + 0xd0);
    if ((lVar3 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar3);
      param_2[2] = 0;
      param_2[3] = 0;
      *param_2 = 0;
      param_2[1] = 0;
      param_2[4] = 0;
    }
    else {
      param_2[2] = 0;
      param_2[3] = 0;
      *param_2 = 0;
      param_2[1] = 0;
      param_2[4] = 0;
      if (lVar3 == 0) {
        *param_2 = 0;
        param_2[1] = 0;
        param_2[2] = 0;
        goto LAB_1487f2ca5;
      }
    }
    FUN_1400bbfae(&local_48,lVar3);
    *(undefined4 *)(param_2 + 1) = local_48;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_44;
    *(undefined4 *)(param_2 + 2) = uStack_40;
    *(undefined4 *)((longlong)param_2 + 0x14) = uStack_3c;
    if (param_2 + 1 == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_2[3] != 0) {
        FUN_1400020a8();
      }
      param_2[3] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_2 + 4) = local_30;
      *(undefined4 *)((longlong)param_2 + 0x24) = local_2c;
    }
    cVar7 = (*(code *)PTR_FUN_14c758760)();
    if (cVar7 != '\0') {
      uVar1 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      if ((*(uint *)(lVar8 + 8) & 0x8400000) != 0) {
        *param_2 = 0;
        goto LAB_1487f2d0d;
      }
    }
    FUN_14485c47a(param_2,lVar3);
  }
LAB_1487f2d0d:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1487f2d44 FUN_1487f2d44 body=37 status=ok
// SIG undefined FUN_1487f2d44(void)

bool FUN_1487f2d44(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_1404222a6(param_2 + 0x18,param_3);
  }
  return param_2 != 0;
}



// FUNCTION 1487f2dc6 FUN_1487f2dc6 body=376 status=ok
// SIG undefined FUN_1487f2dc6(void)

void FUN_1487f2dc6(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar3 = (**(code **)(*param_1 + 0x28))();
  uVar5 = local_70;
  if ((param_2 != (longlong *)0x0) && (cVar3 != '\0')) {
    uVar5 = FUN_140f26902();
    lVar6 = (**(code **)(*param_2 + 0x288))(param_2,uVar5);
    uVar5 = local_70;
    if (lVar6 != 0) {
      uVar5 = FUN_140f26902();
      lVar7 = FUN_144718840(lVar6,uVar5);
      uVar5 = local_70;
      if (lVar7 != 0 && lVar6 != lVar7) {
        lVar2 = param_1[9];
        plVar1 = (longlong *)(lVar2 + 0x48);
        lVar6 = lVar2 + 0x58;
        local_60 = 0x100000000;
        local_50 = 0xffffffff;
        uStack_48 = 0;
        uStack_58 = lVar6;
        if (*(int *)(lVar2 + 0x70) == 0) {
          iVar8 = 0;
        }
        else {
          FUN_1449c0562(&local_60);
          iVar8 = *(int *)(lVar2 + 0x70);
        }
        local_80 = (undefined4)local_60;
        uStack_7c = local_60._4_4_;
        uStack_78 = (undefined4)uStack_58;
        uStack_74 = uStack_58._4_4_;
        uStack_68 = CONCAT44(uStack_44,uStack_48);
        local_70 = local_50;
        uVar5 = local_70;
        local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
        local_88 = plVar1;
        if ((local_70._4_4_ != iVar8) || (uStack_58 != lVar6)) {
          iVar4 = local_70._4_4_;
          local_70 = uVar5;
          do {
            FUN_1487f1370(lVar7,(longlong)iVar4 * 0x10 + *local_88,lVar2 + 0x38,
                          *(undefined4 *)(lVar2 + 0x40));
            local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~uStack_7c);
            FUN_1449c0562(&local_80);
            iVar4 = local_70._4_4_;
            uVar5 = local_70;
          } while (local_88 != plVar1 ||
                   (CONCAT44(uStack_74,uStack_78) != lVar6 || local_70._4_4_ != iVar8));
        }
      }
    }
  }
  local_70 = uVar5;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487f2f40 FUN_1487f2f40 body=669 status=ok
// SIG undefined FUN_1487f2f40(void)

void FUN_1487f2f40(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
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
  cVar4 = (**(code **)(*param_1 + 0x300))();
  if (cVar4 == '\0') {
    plVar1 = param_1 + 0x4f;
    plVar2 = param_1 + 0x51;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    iStack_4c = 0;
    uStack_48 = 0;
    uStack_58 = plVar2;
    if ((int)param_1[0x54] == 0) {
      iVar7 = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      iVar7 = (int)param_1[0x54];
    }
    uStack_68 = CONCAT44(uStack_44,uStack_48);
    local_70 = local_50;
    iStack_6c = iStack_4c;
    local_80 = (undefined4)local_60;
    uStack_7c = local_60._4_4_;
    uStack_78 = (undefined4)uStack_58;
    uStack_74 = uStack_58._4_4_;
    local_88 = plVar1;
    if ((iStack_4c != iVar7) || (uStack_58 != plVar2)) {
      do {
        lVar5 = *local_88;
        lVar8 = (longlong)iStack_6c;
        lVar6 = *(longlong *)(lVar5 + 0x10 + lVar8 * 0x20);
        if ((lVar6 != 0) &&
           ((cVar4 = FUN_140dddae6(lVar6 + 0x48), cVar4 != '\0' &&
            (plVar3 = *(longlong **)(*(longlong *)(lVar5 + lVar8 * 0x20 + 0x10) + 0x30),
            plVar3 != (longlong *)0x0)))) {
          lVar5 = (**(code **)(*plVar3 + 8))(plVar3);
          lVar6 = FUN_145d63e02();
          if ((lVar6 != 0) &&
             ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38) &&
              (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
               lVar6 + 0x30)))) {
            (*(code *)*param_2)(param_2[1],plVar3);
          }
        }
        local_70 = local_70 & ~uStack_7c;
        FUN_1449c0562(&local_80);
      } while (local_88 != plVar1 ||
               ((longlong *)CONCAT44(uStack_74,uStack_78) != plVar2 || iStack_6c != iVar7));
    }
  }
  else {
    plVar1 = param_1 + 0x39;
    plVar2 = param_1 + 0x3b;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    iStack_4c = 0;
    uStack_48 = 0;
    uStack_58 = plVar2;
    if ((int)param_1[0x3e] == 0) {
      iVar7 = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      iVar7 = (int)param_1[0x3e];
    }
    uStack_68 = CONCAT44(uStack_44,uStack_48);
    local_70 = local_50;
    iStack_6c = iStack_4c;
    local_80 = (undefined4)local_60;
    uStack_7c = local_60._4_4_;
    uStack_78 = (undefined4)uStack_58;
    uStack_74 = uStack_58._4_4_;
    local_88 = plVar1;
    if ((iStack_4c != iVar7) || (uStack_58 != plVar2)) {
      do {
        plVar3 = *(longlong **)(*local_88 + 0x10 + (longlong)iStack_6c * 0x20);
        if (plVar3 != (longlong *)0x0) {
          lVar5 = (**(code **)(*plVar3 + 8))(plVar3);
          lVar6 = FUN_145d63e02();
          if (((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
              lVar6 + 0x30)) {
            (*(code *)*param_2)(param_2[1],plVar3);
          }
        }
        local_70 = local_70 & ~uStack_7c;
        FUN_1449c0562(&local_80);
      } while (local_88 != plVar1 ||
               ((longlong *)CONCAT44(uStack_74,uStack_78) != plVar2 || iStack_6c != iVar7));
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487f31de FUN_1487f31de body=76 status=ok
// SIG undefined FUN_1487f31de(void)

void FUN_1487f31de(undefined8 param_1,longlong *param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_2 + 8))(param_2);
    lVar2 = FUN_145d63e02();
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      *(undefined1 *)(param_2 + 6) = param_3;
    }
  }
  return;
}



// FUNCTION 1487f322a FUN_1487f322a body=394 status=ok
// SIG undefined FUN_1487f322a(void)

void FUN_1487f322a(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_141499196();
  FUN_145786938(&DAT_14cb73788);
  plVar1 = (longlong *)(param_1 + 0x278);
  lVar2 = param_1 + 0x288;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = lVar2;
  if (*(int *)(param_1 + 0x2a0) == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar6 = *(int *)(param_1 + 0x2a0);
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = plVar1;
  if ((iStack_44 != iVar6) || (uStack_50 != lVar2)) {
    do {
      lVar4 = *(longlong *)(*local_80 + 0x10 + (longlong)iStack_64 * 0x20);
      if ((lVar4 != 0) && (plVar3 = *(longlong **)(lVar4 + 0x30), plVar3 != (longlong *)0x0)) {
        lVar4 = (**(code **)(*plVar3 + 8))(plVar3);
        lVar5 = FUN_145d63e02();
        if ((((lVar5 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
            (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
             lVar5 + 0x30)) &&
           ((((char)plVar3[6] == '\x01' && (*(char *)((longlong)plVar3 + 0x31) == '\0')) &&
            (*(char *)((longlong)plVar3 + 0x29) != '\0')))) {
          FUN_140c1c1ce(&DAT_14cb73788,plVar3);
        }
      }
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while (local_80 != plVar1 || (CONCAT44(uStack_6c,uStack_70) != lVar2 || iStack_64 != iVar6));
  }
  FUN_1461e3378(&DAT_14cb73788);
  FUN_1487fce26();
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487f33de FUN_1487f33de body=76 status=ok
// SIG undefined FUN_1487f33de(void)

void FUN_1487f33de(undefined8 param_1,longlong *param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_2 + 8))(param_2);
    lVar2 = FUN_145d6407a();
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      *(undefined1 *)(param_2 + 3) = param_3;
    }
  }
  return;
}



// FUNCTION 1487f342a FUN_1487f342a body=19 status=ok
// SIG undefined FUN_1487f342a(void)

void FUN_1487f342a(void)

{
  FUN_141499196();
  FUN_1487fce26();
  return;
}



// FUNCTION 1487f3494 FUN_1487f3494 body=54 status=ok
// SIG undefined FUN_1487f3494(void)

void FUN_1487f3494(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x300))();
  if (cVar1 == '\0') {
    FUN_1400e3b02(param_1,param_2);
    return;
  }
  FUN_1464af156();
  return;
}



// FUNCTION 1487f34ca FUN_1487f34ca body=56 status=ok
// SIG undefined FUN_1487f34ca(void)

void FUN_1487f34ca(longlong param_1)

{
  FUN_141189718(param_1 + 0x60,0);
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)(param_1 + 0x5c) != 0) {
    FUN_141189b3c(param_1 + 0x50,0);
  }
  FUN_140402d60(param_1);
  return;
}



// FUNCTION 1487f351e FUN_1487f351e body=1669 status=ok
// SIG undefined FUN_1487f351e(void)

void FUN_1487f351e(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 auStack_f8 [36];
  int local_d4;
  longlong *local_d0;
  longlong *local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  ulonglong uStack_70;
  longlong *local_68;
  longlong lStack_60;
  ulonglong local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar11 = (longlong *)(param_1 + 0x2e8);
  local_c8 = (longlong *)(param_1 + 0x2f8);
  local_b8 = (longlong *)&DAT_100000000;
  local_a8 = 0xffffffff;
  uStack_a0 = uStack_a0 & 0xffffffff00000000;
  uStack_b0 = local_c8;
  if (*(int *)(param_1 + 0x310) == 0) {
    iVar9 = 0;
  }
  else {
    FUN_1449c0562(&local_b8);
    iVar9 = *(int *)(param_1 + 0x310);
  }
  local_78 = local_a8;
  lVar4 = local_78;
  uStack_70 = uStack_a0;
  local_88 = (undefined4)local_b8;
  uStack_84 = local_b8._4_4_;
  uStack_80 = (undefined4)uStack_b0;
  uStack_7c = uStack_b0._4_4_;
  local_78._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
  local_d0 = plVar11;
  local_c0 = param_1;
  local_90 = plVar11;
  if ((local_78._4_4_ != iVar9) || (uStack_b0 != local_c8)) {
    iVar2 = local_78._4_4_;
    local_d4 = iVar9;
    local_78 = lVar4;
    do {
      lVar4 = *(longlong *)(*local_90 + 0x10 + (longlong)iVar2 * 0x20);
      if (lVar4 != 0) {
        plVar8 = (longlong *)(*local_90 + (longlong)iVar2 * 0x20 + 0x10);
        plVar11 = *(longlong **)(lVar4 + 0x30);
        if (plVar11 != (longlong *)0x0) {
          lVar4 = (**(code **)(*plVar11 + 8))(plVar11);
          lVar7 = FUN_1464af156();
          if ((((lVar7 != 0) && (*(int *)(lVar7 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
              (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
               lVar7 + 0x30)) && (((char)plVar11[3] == '\x01' && ((longlong)(int)plVar11[7] != 0))))
          {
            lVar4 = 0;
            do {
              if ((*(longlong *)(plVar11[6] + lVar4) != 0) &&
                 (*(int *)(*(longlong *)(plVar11[6] + lVar4) + 0x40) == -2)) {
                *(undefined4 *)(*plVar8 + 0x40) = 0xfffffffe;
                break;
              }
              lVar4 = lVar4 + 8;
            } while ((longlong)(int)plVar11[7] << 3 != lVar4);
          }
        }
        lVar7 = *plVar8;
        lVar4 = lVar7 + 0x80;
        local_68 = (longlong *)&DAT_100000000;
        local_58 = 0xffffffff;
        uStack_50 = 0;
        lStack_60 = lVar4;
        if (*(int *)(lVar7 + 0x98) == 0) {
          iVar2 = 0;
        }
        else {
          FUN_1449c0562(&local_68);
          iVar2 = *(int *)(lVar7 + 0x98);
        }
        plVar8 = (longlong *)(lVar7 + 0x70);
        uStack_98 = CONCAT44(uStack_4c,uStack_50);
        uStack_a0 = local_58;
        uVar1 = uStack_a0;
        uStack_b0 = local_68;
        local_a8 = lStack_60;
        uStack_a0._4_4_ = (int)(local_58 >> 0x20);
        iVar3 = uStack_a0._4_4_;
        local_b8 = plVar8;
        if ((uStack_a0._4_4_ != iVar2) ||
           (plVar11 = local_d0, iVar9 = local_d4, uStack_a0 = uVar1, lStack_60 != lVar4)) {
          do {
            uStack_a0 = uVar1;
            lVar7 = *local_b8;
            plVar11 = *(longlong **)(*(longlong *)(lVar7 + 0x10 + (longlong)iVar3 * 0x20) + 0x30);
            if (plVar11 != (longlong *)0x0) {
              lVar5 = (**(code **)(*plVar11 + 8))(plVar11);
              lVar6 = FUN_1464af156();
              if ((((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
                  (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
                   == lVar6 + 0x30)) &&
                 (((char)plVar11[3] == '\x01' && ((longlong)(int)plVar11[7] != 0)))) {
                lVar5 = 0;
                do {
                  if ((*(longlong *)(plVar11[6] + lVar5) != 0) &&
                     (*(int *)(*(longlong *)(plVar11[6] + lVar5) + 0x40) == -2)) {
                    *(undefined4 *)(*(longlong *)(lVar7 + (longlong)iVar3 * 0x20 + 0x10) + 0x40) =
                         0xfffffffe;
                    break;
                  }
                  lVar5 = lVar5 + 8;
                } while ((longlong)(int)plVar11[7] << 3 != lVar5);
              }
            }
            uStack_a0 = CONCAT44(uStack_a0._4_4_,(uint)uStack_a0 & ~uStack_b0._4_4_);
            FUN_1449c0562(&uStack_b0);
            plVar11 = local_d0;
            iVar9 = local_d4;
            iVar3 = uStack_a0._4_4_;
            uVar1 = uStack_a0;
          } while (local_b8 != plVar8 || (local_a8 != lVar4 || uStack_a0._4_4_ != iVar2));
        }
      }
      local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
      FUN_1449c0562(&local_88);
      iVar2 = local_78._4_4_;
    } while (local_90 != plVar11 ||
             ((longlong *)CONCAT44(uStack_7c,uStack_80) != local_c8 || local_78._4_4_ != iVar9));
    iVar9 = *(int *)(local_c0 + 0x310);
    lVar4 = local_78;
  }
  local_78 = lVar4;
  lVar4 = local_c0;
  local_b8 = (longlong *)&DAT_100000000;
  uStack_b0 = local_c8;
  local_a8 = 0xffffffff;
  uStack_a0 = uStack_a0 & 0xffffffff00000000;
  if (iVar9 == 0) {
    iVar9 = 0;
  }
  else {
    FUN_1449c0562(&local_b8);
    iVar9 = *(int *)(lVar4 + 0x310);
  }
  local_78 = local_a8;
  lVar4 = local_78;
  uStack_70 = uStack_a0;
  local_88 = (undefined4)local_b8;
  uStack_84 = local_b8._4_4_;
  uStack_80 = (undefined4)uStack_b0;
  uStack_7c = uStack_b0._4_4_;
  local_78._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
  local_90 = plVar11;
  if ((local_78._4_4_ != iVar9) || (uStack_b0 != local_c8)) {
    iVar2 = local_78._4_4_;
    local_d4 = iVar9;
    local_78 = lVar4;
    do {
      lVar4 = *local_90;
      lVar7 = *(longlong *)(lVar4 + 0x10 + (longlong)iVar2 * 0x20);
      if (lVar7 != 0) {
        if (*(int *)(lVar7 + 0x40) == -2) {
          plVar8 = *(longlong **)(lVar7 + 0x30);
          if (plVar8 == (longlong *)0x0) {
            plVar8 = (longlong *)0x0;
          }
          else {
            lVar7 = (**(code **)(*plVar8 + 8))(plVar8);
            lVar5 = FUN_1464af156();
            plVar11 = local_d0;
            if ((lVar5 == 0) || (*(int *)(lVar7 + 0x38) < *(int *)(lVar5 + 0x38))) {
              plVar8 = (longlong *)0x0;
            }
            else if (*(longlong *)
                      (*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
                     lVar5 + 0x30) {
              plVar8 = (longlong *)0x0;
            }
          }
          plVar10 = (longlong *)(lVar4 + (longlong)iVar2 * 0x20 + 0x10);
          local_b8 = plVar8;
          FUN_1487f3ba4(local_c0,&local_b8,*plVar10);
          lVar7 = *plVar10;
          iVar9 = local_d4;
        }
        lVar4 = lVar7 + 0x80;
        local_68 = (longlong *)&DAT_100000000;
        local_58 = 0xffffffff;
        uStack_50 = 0;
        lStack_60 = lVar4;
        if (*(int *)(lVar7 + 0x98) == 0) {
          iVar2 = 0;
        }
        else {
          FUN_1449c0562(&local_68);
          iVar2 = *(int *)(lVar7 + 0x98);
        }
        plVar8 = (longlong *)(lVar7 + 0x70);
        uStack_98 = CONCAT44(uStack_4c,uStack_50);
        uStack_a0 = local_58;
        uVar1 = uStack_a0;
        uStack_b0 = local_68;
        local_a8 = lStack_60;
        uStack_a0._4_4_ = (int)(local_58 >> 0x20);
        iVar3 = uStack_a0._4_4_;
        local_b8 = plVar8;
        if ((uStack_a0._4_4_ != iVar2) || (uStack_a0 = uVar1, lStack_60 != lVar4)) {
          do {
            uStack_a0 = uVar1;
            lVar7 = *local_b8;
            lVar5 = *(longlong *)(lVar7 + 0x10 + (longlong)iVar3 * 0x20);
            if (*(int *)(lVar5 + 0x40) == -2) {
              plVar10 = *(longlong **)(lVar5 + 0x30);
              if (plVar10 == (longlong *)0x0) {
                plVar10 = (longlong *)0x0;
              }
              else {
                lVar5 = (**(code **)(*plVar10 + 8))(plVar10);
                lVar6 = FUN_1464af156();
                plVar11 = local_d0;
                if ((lVar6 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar6 + 0x38))) {
                  plVar10 = (longlong *)0x0;
                }
                else if (*(longlong *)
                          (*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
                         lVar6 + 0x30) {
                  plVar10 = (longlong *)0x0;
                }
              }
              local_68 = plVar10;
              FUN_1487f3ba4(local_c0,&local_68,
                            *(undefined8 *)(lVar7 + (longlong)iVar3 * 0x20 + 0x10));
              iVar9 = local_d4;
            }
            uStack_a0 = CONCAT44(uStack_a0._4_4_,(uint)uStack_a0 & ~uStack_b0._4_4_);
            FUN_1449c0562(&uStack_b0);
            iVar3 = uStack_a0._4_4_;
            uVar1 = uStack_a0;
          } while (local_b8 != plVar8 || (local_a8 != lVar4 || uStack_a0._4_4_ != iVar2));
        }
      }
      local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
      FUN_1449c0562(&local_88);
      iVar2 = local_78._4_4_;
      lVar4 = local_78;
    } while (local_90 != plVar11 ||
             ((longlong *)CONCAT44(uStack_7c,uStack_80) != local_c8 || local_78._4_4_ != iVar9));
  }
  local_78 = lVar4;
  FUN_1487fce26();
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487f3ba4 FUN_1487f3ba4 body=503 status=ok
// SIG undefined FUN_1487f3ba4(void)

void FUN_1487f3ba4(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *plStack_60;
  longlong local_58 [3];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58[0] = 0;
  local_58[1] = 0;
  uVar4 = FUN_144aff4ae(param_3);
  cVar3 = FUN_1487f3df6(param_1,local_58,param_3,uVar4);
  if (cVar3 != '\0') {
    local_68 = 0;
    plStack_60 = (longlong *)0x0;
    cVar3 = FUN_1446e9750(param_1,&local_68,local_58,0);
    if (cVar3 != '\0') {
      cVar3 = FUN_140dddae6();
      if (cVar3 != '\0') {
        lVar9 = *param_2;
        if (lVar9 == 0) {
          puVar6 = (undefined8 *)FUN_1487e34b4();
          puVar6[1] = 0;
          *(undefined1 *)(puVar6 + 2) = 0;
          *puVar6 = &PTR_FUN_14aff1d70;
          *(undefined1 *)(puVar6 + 3) = 0;
          puVar6[4] = 0;
          puVar6[5] = 0;
          puVar6[6] = 0;
          puVar6[7] = 0;
          *param_2 = (longlong)puVar6;
          *(undefined8 **)(param_3 + 0x30) = puVar6;
LAB_1487f3ccd:
          iVar5 = FUN_144aff4ae(param_3);
          if (iVar5 < 2) {
            FUN_1407d81c6();
          }
          else {
            FUN_1400f0d6e(param_1,param_3,1);
          }
          uVar8 = FUN_1464af156();
          FUN_1446e7478(&local_68,*param_2,uVar8,0);
          *(undefined1 *)(*param_2 + 0x18) = 1;
          *(undefined4 *)(param_3 + 0x40) = *(undefined4 *)(param_3 + 0x44);
          lVar9 = *param_2;
        }
        else if (*(int *)(param_3 + 0x44) != *(int *)(param_3 + 0x40)) {
          plVar7 = (longlong *)FUN_1464af156();
          (**(code **)(*plVar7 + 0x2f0))(plVar7,lVar9,1);
          plVar7 = (longlong *)FUN_1464af156();
          (**(code **)(*plVar7 + 0x2e8))(plVar7,lVar9,1);
          goto LAB_1487f3ccd;
        }
        FUN_1487e394e(lVar9,local_58);
        plVar7 = plStack_60;
        if (plStack_60 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_60 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plStack_60)(plStack_60);
            LOCK();
            piVar2 = (int *)((longlong)plVar7 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
          }
        }
        goto LAB_1487f3c4c;
      }
    }
    plVar7 = plStack_60;
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_60 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_60)(plStack_60);
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
  if (*param_2 != 0) {
    FUN_1487e394e(*param_2,local_58);
    *(undefined1 *)(*param_2 + 0x18) = 0;
  }
LAB_1487f3c4c:
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487f3d9c FUN_1487f3d9c body=89 status=ok
// SIG undefined FUN_1487f3d9c(void)

void FUN_1487f3d9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_144aff4ae(param_3);
  if (iVar1 == 1) {
    uVar3 = thunk_FUN_1400e3c00();
  }
  else {
    uVar3 = FUN_14173887e(param_1,param_3,1);
  }
  uVar2 = FUN_144aff4ae(param_3);
  FUN_1487f3df6(param_1,param_2,uVar3,uVar2);
  return;
}



// FUNCTION 1487f3df6 FUN_1487f3df6 body=166 status=ok
// SIG undefined FUN_1487f3df6(void)

bool FUN_1487f3df6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1487f3e9e(0,&local_48);
  iVar3 = (int)uStack_40;
  if (0 < (longlong)(int)uStack_40) {
    uVar4 = (longlong)(int)uStack_40 + 1;
    do {
      lVar2 = local_48;
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_144837cf2(param_2,iVar1);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = *(undefined8 *)(lVar2 + -0x10 + uVar4 * 8);
      uVar4 = uVar4 - 1;
    } while (1 < uVar4);
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return 0 < iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487f3e9e FUN_1487f3e9e body=303 status=ok
// SIG undefined FUN_1487f3e9e(void)

void FUN_1487f3e9e(longlong param_1,longlong *param_2,longlong param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  longlong lVar4;
  undefined1 auStack_58 [38];
  short local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 != 0) {
    if ((longlong)(int)param_2[1] != 0) {
      lVar4 = 0;
      do {
        if (*(longlong *)(*param_2 + lVar4) == param_3) goto LAB_1487f3f6d;
        lVar4 = lVar4 + 8;
      } while ((longlong)(int)param_2[1] * 8 != lVar4);
    }
    FUN_144837e54(param_3,0);
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_144837cf2(param_2,iVar1);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_3;
    local_32 = -1;
    uVar2 = FUN_144a06846(param_3 + 0x48,param_1 + 0x340);
    piVar3 = (int *)FUN_144a89cb0(uVar2,&local_32);
    if ((((local_32 == *(short *)(param_1 + 0xb6)) && (*piVar3 != 0)) && (piVar3[1] != 0)) &&
       (*piVar3 != DAT_14c948000)) {
      iVar1 = FUN_144aff4ae(piVar3);
      if (iVar1 == param_4) {
        if (param_4 == 1) {
          lVar4 = thunk_FUN_1400e3c00();
        }
        else {
          lVar4 = FUN_14173887e(param_1,piVar3,1);
        }
        if (lVar4 != 0) {
          FUN_1487f3e9e(param_1,param_2,lVar4,param_4);
        }
      }
    }
  }
LAB_1487f3f6d:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487f3fce FUN_1487f3fce body=508 status=ok
// SIG undefined FUN_1487f3fce(void)

void FUN_1487f3fce(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  size_t sVar8;
  int iVar9;
  wchar_t *_Str;
  bool bVar10;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
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
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)(param_1 + 0x278);
  lVar2 = param_1 + 0x288;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x2a0) == 0) {
    iVar9 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar9 = *(int *)(param_1 + 0x2a0);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar1;
  if ((iStack_4c != iVar9) || (uStack_58 != lVar2)) {
    do {
      lVar5 = *(longlong *)(*local_88 + 0x10 + (longlong)iStack_6c * 0x20);
      if ((lVar5 != 0) && (plVar3 = *(longlong **)(lVar5 + 0x30), plVar3 != (longlong *)0x0)) {
        lVar5 = (**(code **)(*plVar3 + 8))(plVar3);
        lVar6 = FUN_145d642f2();
        if ((((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
            (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
             lVar6 + 0x30)) && ((char)plVar3[6] == '\x01')) {
          if (1 < *(int *)(param_2 + 1)) {
            uVar7 = FUN_144a7ff8c(plVar3 + 1);
            FUN_141710b0e(uVar7,&local_60,1);
            if (*(int *)(param_2 + 1) == 0) {
              _Str = L"";
            }
            else {
              _Str = (wchar_t *)*param_2;
            }
            if (_Str == (wchar_t *)0x0) {
              bVar10 = false;
            }
            else {
              sVar8 = wcslen(_Str);
              local_90 = 0xffffffff;
              local_98 = 0;
              iVar4 = FUN_1447ee042(&local_60,_Str,sVar8 & 0xffffffff,1);
              bVar10 = iVar4 != -1;
            }
            if (local_60 != 0) {
              FUN_1400020a8();
            }
            if (!bVar10) goto LAB_1487f40b5;
          }
          local_60 = local_60 & 0xffffffff00000000;
          FUN_143cc69ec(plVar3);
        }
      }
LAB_1487f40b5:
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar9));
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487f41cc FUN_1487f41cc body=76 status=ok
// SIG undefined FUN_1487f41cc(void)

void FUN_1487f41cc(undefined8 param_1,longlong *param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_2 + 8))(param_2);
    lVar2 = FUN_145d642f2();
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      *(undefined1 *)(param_2 + 6) = param_3;
    }
  }
  return;
}



// FUNCTION 1487f4218 FUN_1487f4218 body=394 status=ok
// SIG undefined FUN_1487f4218(void)

void FUN_1487f4218(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_141499196();
  FUN_145786938(&DAT_14cb735e0);
  plVar1 = (longlong *)(param_1 + 0x278);
  lVar2 = param_1 + 0x288;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = lVar2;
  if (*(int *)(param_1 + 0x2a0) == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar6 = *(int *)(param_1 + 0x2a0);
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = plVar1;
  if ((iStack_44 != iVar6) || (uStack_50 != lVar2)) {
    do {
      lVar4 = *(longlong *)(*local_80 + 0x10 + (longlong)iStack_64 * 0x20);
      if ((lVar4 != 0) && (plVar3 = *(longlong **)(lVar4 + 0x30), plVar3 != (longlong *)0x0)) {
        lVar4 = (**(code **)(*plVar3 + 8))(plVar3);
        lVar5 = FUN_145d642f2();
        if ((((lVar5 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
            (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
             lVar5 + 0x30)) &&
           ((((char)plVar3[6] == '\x01' && (*(char *)((longlong)plVar3 + 0x31) == '\0')) &&
            (*(char *)((longlong)plVar3 + 0x29) != '\0')))) {
          FUN_140c1c1ce(&DAT_14cb735e0,plVar3);
        }
      }
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while (local_80 != plVar1 || (CONCAT44(uStack_6c,uStack_70) != lVar2 || iStack_64 != iVar6));
  }
  FUN_1461e3378(&DAT_14cb735e0);
  FUN_1487fce26();
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487f43cc FUN_1487f43cc body=76 status=ok
// SIG undefined FUN_1487f43cc(void)

void FUN_1487f43cc(undefined8 param_1,longlong *param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_2 + 8))(param_2);
    lVar2 = FUN_145d6456a();
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      *(undefined1 *)(param_2 + 3) = param_3;
    }
  }
  return;
}



// FUNCTION 1487f4418 FUN_1487f4418 body=19 status=ok
// SIG undefined FUN_1487f4418(void)

void FUN_1487f4418(void)

{
  FUN_141499196();
  FUN_1487fce26();
  return;
}



// FUNCTION 1487f4454 FUN_1487f4454 body=38 status=ok
// SIG undefined FUN_1487f4454(void)

undefined8 FUN_1487f4454(undefined8 param_1,int param_2)

{
  FUN_14108e0da();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487f447a FUN_1487f447a body=29 status=ok
// SIG undefined FUN_1487f447a(void)

undefined8 FUN_1487f447a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487f449e FUN_1487f449e body=29 status=ok
// SIG undefined FUN_1487f449e(void)

undefined8 FUN_1487f449e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487f44ce FUN_1487f44ce body=29 status=ok
// SIG undefined FUN_1487f44ce(void)

undefined8 FUN_1487f44ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487f44f2 FUN_1487f44f2 body=38 status=ok
// SIG undefined FUN_1487f44f2(void)

undefined8 FUN_1487f44f2(undefined8 param_1,int param_2)

{
  FUN_1412218b2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487f451e FUN_1487f451e body=122 status=ok
// SIG undefined FUN_1487f451e(void)

longlong FUN_1487f451e(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_1487f4598(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1487f4598 FUN_1487f4598 body=115 status=ok
// SIG undefined FUN_1487f4598(void)

undefined8 * FUN_1487f4598(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1406d0424(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1447711aa(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 << 5);
    }
  }
  return param_1;
}



// FUNCTION 1487f460c FUN_1487f460c body=54 status=ok
// SIG undefined FUN_1487f460c(void)

void FUN_1487f460c(longlong *param_1)

{
  FUN_14861fc4a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1487f4642 FUN_1487f4642 body=54 status=ok
// SIG undefined FUN_1487f4642(void)

void FUN_1487f4642(longlong *param_1)

{
  FUN_14861f6ec(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1487f4678 FUN_1487f4678 body=54 status=ok
// SIG undefined FUN_1487f4678(void)

void FUN_1487f4678(longlong *param_1)

{
  FUN_14861f3ee(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1487f46ae FUN_1487f46ae body=63 status=ok
// SIG undefined FUN_1487f46ae(void)

void FUN_1487f46ae(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x50);
    do {
      plVar1[-7] = (longlong)&PTR_FUN_14afff010;
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x13;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1487f46ee FUN_1487f46ee body=52 status=ok
// SIG undefined FUN_1487f46ee(void)

void FUN_1487f46ee(longlong *param_1)

{
  FUN_1487f4722();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1487f4722 FUN_1487f4722 body=89 status=ok
// SIG undefined FUN_1487f4722(void)

void FUN_1487f4722(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
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



// FUNCTION 1487f477c FUN_1487f477c body=93 status=ok
// SIG undefined FUN_1487f477c(void)

longlong FUN_1487f477c(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_1487f47da(param_1);
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



// FUNCTION 1487f47da FUN_1487f47da body=146 status=ok
// SIG undefined FUN_1487f47da(void)

longlong * FUN_1487f47da(longlong *param_1,longlong *param_2)

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



// FUNCTION 1487f486c FUN_1487f486c body=38 status=ok
// SIG undefined FUN_1487f486c(void)

undefined8 FUN_1487f486c(undefined8 param_1,int param_2)

{
  FUN_1487f4898();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487f4898 FUN_1487f4898 body=70 status=ok
// SIG undefined FUN_1487f4898(void)

void FUN_1487f4898(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b3eff80;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_1487fa349(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1487f48de FUN_1487f48de body=38 status=ok
// SIG undefined FUN_1487f48de(void)

undefined8 FUN_1487f48de(undefined8 param_1,int param_2)

{
  FUN_1487f490a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487f490a FUN_1487f490a body=84 status=ok
// SIG undefined FUN_1487f490a(void)

void FUN_1487f490a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b3effb0;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_1487fa349(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1487f495e FUN_1487f495e body=29 status=ok
// SIG undefined FUN_1487f495e(void)

undefined8 FUN_1487f495e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487f497c FUN_1487f497c body=52 status=ok
// SIG undefined FUN_1487f497c(void)

undefined8 * FUN_1487f497c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b3f0010;
  FUN_1403c4c0a(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487f49b0 FUN_1487f49b0 body=144 status=ok
// SIG undefined FUN_1487f49b0(void)

void FUN_1487f49b0(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar1 = 8;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841e01];
  }
  else {
    uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,8,4);
  }
  uVar2 = 0x7fffffff;
  if (0 < (int)(uVar1 >> 3)) {
    uVar2 = uVar1 >> 3 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 1487f4a40 FUN_1487f4a40 body=153 status=ok
// SIG undefined FUN_1487f4a40(void)

undefined8 FUN_1487f4a40(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar3 = 0x4810;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c842281];
  }
  else {
    uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,0x4810,8);
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar3;
  uVar4 = 0x7fffffff;
  if (0 < (int)(uVar3 / 0x4810)) {
    uVar4 = uVar3 / 0x4810 & 0xffffffff;
  }
  if ((int)uVar4 == *(int *)(param_1 + 0xc)) {
    return SUB168(auVar1 * ZEXT816(0xe35bb2bbd6422a3),0);
  }
  *(int *)(param_1 + 0xc) = (int)uVar4;
  uVar2 = FUN_140043092(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x4810);
  return uVar2;
}



// FUNCTION 1487f4ada FUN_1487f4ada body=166 status=ok
// SIG undefined FUN_1487f4ada(void)

void * FUN_1487f4ada(void *param_1,void *param_2)

{
  void *pvVar1;
  
  if (param_1 != param_2) {
    pvVar1 = *(void **)((longlong)param_1 + 0x4800);
    if (*(void **)((longlong)param_1 + 0x4800) == (void *)0x0) {
      pvVar1 = param_1;
    }
    FUN_1402b749f(pvVar1,*(undefined4 *)((longlong)param_1 + 0x4808));
    if (*(longlong *)((longlong)param_2 + 0x4800) == 0) {
      memmove(param_1,param_2,0x4800);
    }
    if (*(longlong *)((longlong)param_1 + 0x4800) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)((longlong)param_1 + 0x4800) = *(undefined8 *)((longlong)param_2 + 0x4800);
    *(undefined8 *)((longlong)param_2 + 0x4800) = 0;
    *(undefined4 *)((longlong)param_1 + 0x4808) = *(undefined4 *)((longlong)param_2 + 0x4808);
    *(undefined4 *)((longlong)param_1 + 0x480c) = *(undefined4 *)((longlong)param_2 + 0x480c);
    *(undefined8 *)((longlong)param_2 + 0x4808) = 0x10000000000;
  }
  return param_1;
}



// FUNCTION 1487f4b80 FUN_1487f4b80 body=132 status=ok
// SIG undefined FUN_1487f4b80(void)

int FUN_1487f4b80(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x98);
  if ((longlong)iVar2 == 0) {
    iVar2 = FUN_1487f4c4c(param_1 + 0x60);
    iVar1 = *(int *)(param_1 + 0x78);
    *(uint *)(param_1 + 0x78) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x7c) < iVar1 + 1U) {
      FUN_1447808da(param_1 + 0x70,iVar1);
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar1 * 4) = 0;
    FUN_1487f4c90(param_1 + 0x80);
  }
  else {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x90) + -4 + (longlong)iVar2 * 4);
    *(int *)(param_1 + 0x98) = iVar2 + -1;
    FUN_144780a3c(param_1 + 0x90);
    iVar2 = iVar1 * 8 + 1;
  }
  return iVar2;
}



// FUNCTION 1487f4c04 FUN_1487f4c04 body=71 status=ok
// SIG undefined FUN_1487f4c04(void)

void FUN_1487f4c04(longlong param_1)

{
  longlong lVar1;
  
  if (-1 < *(int *)(param_1 + 0x480c)) {
    lVar1 = *(longlong *)(param_1 + 0x4800);
    if (*(longlong *)(param_1 + 0x4800) == 0) {
      lVar1 = param_1;
    }
    FUN_1402b749f(lVar1,*(undefined4 *)(param_1 + 0x4808));
    *(undefined4 *)(param_1 + 0x4808) = 0;
    return;
  }
  FUN_1487f4cd2(param_1);
  return;
}



// FUNCTION 1487f4c4c FUN_1487f4c4c body=68 status=ok
// SIG undefined FUN_1487f4c4c(void)

int FUN_1487f4c4c(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 8;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < 8) {
    FUN_14594e9a0(param_1,iVar1);
  }
  FUN_14594e919((longlong)iVar1 * 8 + *param_1,8);
  return iVar1;
}



// FUNCTION 1487f4c90 FUN_1487f4c90 body=65 status=ok
// SIG undefined FUN_1487f4c90(void)

void FUN_1487f4c90(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 8;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < 8) {
    FUN_14594ea24(param_1,iVar1);
  }
  FUN_14594e973((longlong)iVar1 * 0x4810 + *param_1,8);
  return;
}



// FUNCTION 1487f4cd2 FUN_1487f4cd2 body=73 status=ok
// SIG undefined FUN_1487f4cd2(void)

void FUN_1487f4cd2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x4800);
  if (*(longlong *)(param_1 + 0x4800) == 0) {
    lVar1 = param_1;
  }
  FUN_1402b749f(lVar1,*(undefined4 *)(param_1 + 0x4808));
  *(undefined4 *)(param_1 + 0x4808) = 0;
  if (*(int *)(param_1 + 0x480c) == 0) {
    return;
  }
  FUN_1487f4d1c(param_1,0);
  return;
}



// FUNCTION 1487f4d1c FUN_1487f4d1c body=123 status=ok
// SIG undefined FUN_1487f4d1c(void)

void FUN_1487f4d1c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0x100;
    if (0x100 < param_2) {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x48,0);
      iVar2 = (int)(uVar1 / 0x48);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar2) {
        iVar3 = iVar2;
      }
    }
  }
  if (iVar3 != *(int *)(param_1 + 0x480c)) {
    *(int *)(param_1 + 0x480c) = iVar3;
    FUN_141366f36(param_1,*(undefined4 *)(param_1 + 0x4808));
    return;
  }
  return;
}



// FUNCTION 1487f4d98 FUN_1487f4d98 body=114 status=ok
// SIG undefined FUN_1487f4d98(void)

void FUN_1487f4d98(longlong *param_1,int param_2)

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



// FUNCTION 1487f4e0a FUN_1487f4e0a body=145 status=ok
// SIG undefined FUN_1487f4e0a(void)

void FUN_1487f4e0a(longlong param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = (longlong)param_2;
  FUN_1487f4e9c(param_3,*(longlong *)(param_1 + 0x80) + lVar2 * 0x4810);
  FUN_1487f4c04(lVar2 * 0x4810 + *(longlong *)(param_1 + 0x80));
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x60) + lVar2 * 8);
  if (iVar1 == -1) {
    return;
  }
  iVar3 = 0;
  do {
    FUN_1487f4e0a(param_1,iVar1 + iVar3,param_3);
    iVar3 = iVar3 + 1;
  } while (iVar3 != 8);
  *(undefined4 *)(*(longlong *)(param_1 + 0x60) + lVar2 * 8) = 0xffffffff;
  FUN_1487f4f24(param_1,iVar1);
  return;
}



// FUNCTION 1487f4e9c FUN_1487f4e9c body=136 status=ok
// SIG undefined FUN_1487f4e9c(void)

void FUN_1487f4e9c(longlong param_1,void *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  
  uVar1 = *(uint *)((longlong)param_2 + 0x4808);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x4808);
    *(uint *)(param_1 + 0x4808) = iVar2 + uVar1;
    if ((uint)(*(int *)(param_1 + 0x480c) - iVar2) < uVar1) {
      FUN_141366dc6(param_1,iVar2);
    }
    _Src = *(void **)((longlong)param_2 + 0x4800);
    if (*(void **)((longlong)param_2 + 0x4800) == (void *)0x0) {
      _Src = param_2;
    }
    lVar3 = *(longlong *)(param_1 + 0x4800);
    if (*(longlong *)(param_1 + 0x4800) == 0) {
      lVar3 = param_1;
    }
    memmove((void *)(lVar3 + (longlong)iVar2 * 0x48),_Src,(longlong)(int)uVar1 * 0x48);
    *(undefined4 *)((longlong)param_2 + 0x4808) = 0;
  }
  return;
}



// FUNCTION 1487f4f24 FUN_1487f4f24 body=114 status=ok
// SIG undefined FUN_1487f4f24(void)

void FUN_1487f4f24(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  
  lVar2 = 0;
  do {
    *(undefined8 *)(*(longlong *)(param_1 + 0x60) + (longlong)(param_2 + (int)lVar2) * 8) =
         0xffffffff;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 8);
  uVar3 = param_2 - 1U >> 3;
  *(undefined4 *)(*(longlong *)(param_1 + 0x70) + (ulonglong)uVar3 * 4) = 0xffffffff;
  iVar1 = *(int *)(param_1 + 0x98);
  *(uint *)(param_1 + 0x98) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x9c) < iVar1 + 1U) {
    FUN_1447808da((longlong *)(param_1 + 0x90),iVar1);
  }
  *(uint *)(*(longlong *)(param_1 + 0x90) + (longlong)iVar1 * 4) = uVar3;
  return;
}



// FUNCTION 1487f4fa4 FUN_1487f4fa4 body=127 status=ok
// SIG undefined FUN_1487f4fa4(void)

void FUN_1487f4fa4(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x68);
  if (param_2 <= (int)uVar1) {
    iVar5 = 4;
    if (4 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x6c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x18,0);
      iVar4 = (int)(uVar3 / 0x18);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x6c) = iVar5;
    FUN_140b3fadc(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1487f5028 FUN_1487f5028 body=81 status=ok
// SIG undefined FUN_1487f5028(void)

undefined8 FUN_1487f5028(longlong param_1)

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



// FUNCTION 1487f5080 FUN_1487f5080 body=89 status=ok
// SIG undefined FUN_1487f5080(void)

bool FUN_1487f5080(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1487f50cb;
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
LAB_1487f50cb:
  return lVar6 == param_2;
}



// FUNCTION 1487f50f6 FUN_1487f50f6 body=118 status=ok
// SIG undefined FUN_1487f50f6(void)

void FUN_1487f50f6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f0360;
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



// FUNCTION 1487f516c FUN_1487f516c body=156 status=ok
// SIG undefined FUN_1487f516c(void)

void FUN_1487f516c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3f0360;
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
                    /* WARNING: Could not recover jumptable at 0x0001487f51f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487f5208 FUN_1487f5208 body=100 status=ok
// SIG undefined FUN_1487f5208(void)

void FUN_1487f5208(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001487f5254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001487f5261. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 1487f526c FUN_1487f526c body=119 status=ok
// SIG undefined FUN_1487f526c(void)

void FUN_1487f526c(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0xe8);
  if (param_2 <= (int)uVar1) {
    iVar5 = 7;
    if (7 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (7 < *(uint *)(param_1 + 0xec)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 5,0);
      iVar2 = (int)(uVar3 >> 5);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0xec) = iVar5;
    FUN_1487f52e4(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1487f52e4 FUN_1487f52e4 body=141 status=ok
// SIG undefined FUN_1487f52e4(void)

void FUN_1487f52e4(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xe0);
  if ((uint)param_3 < 8) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 5);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xe0,0,param_3,0x20);
    memmove(*(void **)((longlong)param_1 + 0xe0),param_1,(longlong)param_2 << 5);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xe0,param_2,param_3,0x20);
  return;
}



// FUNCTION 1487f5372 FUN_1487f5372 body=9 status=ok
// SIG undefined FUN_1487f5372(void)

void FUN_1487f5372(longlong param_1)

{
  FUN_14060fc84(param_1 + 0x10);
  return;
}



// FUNCTION 1487f537c FUN_1487f537c body=29 status=ok
// SIG undefined FUN_1487f537c(void)

undefined8 FUN_1487f537c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487f539a FUN_1487f539a body=167 status=ok
// SIG undefined FUN_1487f539a(void)

void FUN_1487f539a(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1487f5415;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1487f5415;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_1487f5415:
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
                    /* WARNING: Could not recover jumptable at 0x0001487f5435. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1487f5442 FUN_1487f5442 body=162 status=ok
// SIG undefined FUN_1487f5442(void)

void FUN_1487f5442(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1487f5481;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1487f5481;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_1487f5481:
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
                    /* WARNING: Could not recover jumptable at 0x0001487f54e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1487f54e4 FUN_1487f54e4 body=322 status=ok
// SIG undefined FUN_1487f54e4(void)

void FUN_1487f54e4(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0xc + (longlong)iVar4 * 0x10) * 4) =
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



// FUNCTION 1487f5628 FUN_1487f5628 body=116 status=ok
// SIG undefined FUN_1487f5628(void)

void FUN_1487f5628(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x78) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x78) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x78 + 4) = uVar5;
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


