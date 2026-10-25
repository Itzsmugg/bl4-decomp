// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147fffcc5 FUN_147fffcc5 body=52 status=ok
// SIG undefined FUN_147fffcc5(void)

void FUN_147fffcc5(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_147fffcfa(param_1,param_2);
    param_1 = param_1 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return;
}



// FUNCTION 147fffcfa FUN_147fffcfa body=158 status=ok
// SIG undefined FUN_147fffcfa(void)

undefined4 * FUN_147fffcfa(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = param_2[5];
  uVar8 = param_2[6];
  uVar9 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar7;
  param_1[6] = uVar8;
  param_1[7] = uVar9;
  *param_1 = uVar3;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = param_2[10];
  _Src = *(void **)(param_2 + 8);
  param_1[10] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0xb] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar1,0);
    memcpy(*(void **)(param_1 + 8),_Src,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  lVar2 = *(longlong *)(param_2 + 0x10);
  *(longlong *)(param_1 + 0x10) = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 147fffd98 FUN_147fffd98 body=115 status=ok
// SIG undefined FUN_147fffd98(void)

void FUN_147fffd98(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147fffe0b FUN_147fffe0b body=52 status=ok
// SIG undefined FUN_147fffe0b(void)

void FUN_147fffe0b(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_147fffe40(param_1,param_2);
    param_1 = param_1 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return;
}



// FUNCTION 147fffe40 FUN_147fffe40 body=158 status=ok
// SIG undefined FUN_147fffe40(void)

undefined4 * FUN_147fffe40(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = param_2[5];
  uVar8 = param_2[6];
  uVar9 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar7;
  param_1[6] = uVar8;
  param_1[7] = uVar9;
  *param_1 = uVar3;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = param_2[10];
  _Src = *(void **)(param_2 + 8);
  param_1[10] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0xb] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar1,0);
    memcpy(*(void **)(param_1 + 8),_Src,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  uVar3 = param_2[0xf];
  uVar4 = param_2[0x10];
  uVar5 = param_2[0x11];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar3;
  param_1[0x10] = uVar4;
  param_1[0x11] = uVar5;
  lVar2 = *(longlong *)(param_2 + 0x12);
  *(longlong *)(param_1 + 0x12) = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 147fffede FUN_147fffede body=115 status=ok
// SIG undefined FUN_147fffede(void)

void FUN_147fffede(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147ffff51 FUN_147ffff51 body=52 status=ok
// SIG undefined FUN_147ffff51(void)

void FUN_147ffff51(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_147ffff86(param_1,param_2);
    param_1 = param_1 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return;
}



// FUNCTION 147ffff86 FUN_147ffff86 body=164 status=ok
// SIG undefined FUN_147ffff86(void)

undefined4 * FUN_147ffff86(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = param_2[5];
  uVar8 = param_2[6];
  uVar9 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar7;
  param_1[6] = uVar8;
  param_1[7] = uVar9;
  *param_1 = uVar3;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = param_2[10];
  _Src = *(void **)(param_2 + 8);
  param_1[10] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0xb] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar1,0);
    memcpy(*(void **)(param_1 + 8),_Src,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  param_1[0x10] = param_2[0x10];
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  lVar2 = *(longlong *)(param_2 + 0x12);
  *(longlong *)(param_1 + 0x12) = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 14800002a FUN_14800002a body=111 status=ok
// SIG undefined FUN_14800002a(void)

void FUN_14800002a(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x58,8);
    iVar2 = (int)(uVar1 / 0x58);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x58,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148000099 FUN_148000099 body=52 status=ok
// SIG undefined FUN_148000099(void)

void FUN_148000099(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1480000ce(param_1,param_2);
    param_1 = param_1 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return;
}



// FUNCTION 1480000ce FUN_1480000ce body=166 status=ok
// SIG undefined FUN_1480000ce(void)

undefined4 * FUN_1480000ce(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = param_2[5];
  uVar8 = param_2[6];
  uVar9 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar7;
  param_1[6] = uVar8;
  param_1[7] = uVar9;
  *param_1 = uVar3;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = param_2[10];
  _Src = *(void **)(param_2 + 8);
  param_1[10] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0xb] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar1,0);
    memcpy(*(void **)(param_1 + 8),_Src,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  uVar3 = param_2[0xf];
  uVar4 = param_2[0x10];
  uVar5 = param_2[0x11];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar3;
  param_1[0x10] = uVar4;
  param_1[0x11] = uVar5;
  lVar2 = *(longlong *)(param_2 + 0x14);
  *(longlong *)(param_1 + 0x14) = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 148000174 FUN_148000174 body=115 status=ok
// SIG undefined FUN_148000174(void)

void FUN_148000174(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x60,0x10);
    iVar2 = (int)(uVar1 / 0x60);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x60,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1480001e7 FUN_1480001e7 body=52 status=ok
// SIG undefined FUN_1480001e7(void)

void FUN_1480001e7(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14800021c(param_1,param_2);
    param_1 = param_1 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return;
}



// FUNCTION 14800021c FUN_14800021c body=158 status=ok
// SIG undefined FUN_14800021c(void)

undefined4 * FUN_14800021c(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = param_2[5];
  uVar8 = param_2[6];
  uVar9 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar7;
  param_1[6] = uVar8;
  param_1[7] = uVar9;
  *param_1 = uVar3;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = param_2[10];
  _Src = *(void **)(param_2 + 8);
  param_1[10] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0xb] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar1,0);
    memcpy(*(void **)(param_1 + 8),_Src,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  uVar3 = param_2[0x11];
  uVar4 = param_2[0x12];
  uVar5 = param_2[0x13];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar3;
  param_1[0x12] = uVar4;
  param_1[0x13] = uVar5;
  lVar2 = *(longlong *)(param_2 + 0x14);
  *(longlong *)(param_1 + 0x14) = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 1480002ba FUN_1480002ba body=111 status=ok
// SIG undefined FUN_1480002ba(void)

void FUN_1480002ba(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x70,0x10);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 4;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x70,0x10);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148000329 FUN_148000329 body=52 status=ok
// SIG undefined FUN_148000329(void)

void FUN_148000329(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14800035e(param_1,param_2);
    param_1 = param_1 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return;
}



// FUNCTION 14800035e FUN_14800035e body=166 status=ok
// SIG undefined FUN_14800035e(void)

undefined4 * FUN_14800035e(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = param_2[5];
  uVar8 = param_2[6];
  uVar9 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar7;
  param_1[6] = uVar8;
  param_1[7] = uVar9;
  *param_1 = uVar3;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = param_2[10];
  _Src = *(void **)(param_2 + 8);
  param_1[10] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0xb] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar1,0);
    memcpy(*(void **)(param_1 + 8),_Src,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  uVar3 = param_2[0x10];
  uVar4 = param_2[0x11];
  uVar5 = param_2[0x12];
  uVar6 = param_2[0x13];
  uVar7 = param_2[0x15];
  uVar8 = param_2[0x16];
  uVar9 = param_2[0x17];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = uVar7;
  param_1[0x16] = uVar8;
  param_1[0x17] = uVar9;
  param_1[0x10] = uVar3;
  param_1[0x11] = uVar4;
  param_1[0x12] = uVar5;
  param_1[0x13] = uVar6;
  lVar2 = *(longlong *)(param_2 + 0x18);
  *(longlong *)(param_1 + 0x18) = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 148000404 FUN_148000404 body=115 status=ok
// SIG undefined FUN_148000404(void)

void FUN_148000404(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148000477 FUN_148000477 body=52 status=ok
// SIG undefined FUN_148000477(void)

void FUN_148000477(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1480004ac(param_1,param_2);
    param_1 = param_1 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return;
}



// FUNCTION 1480004ac FUN_1480004ac body=164 status=ok
// SIG undefined FUN_1480004ac(void)

undefined4 * FUN_1480004ac(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = param_2[5];
  uVar8 = param_2[6];
  uVar9 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar7;
  param_1[6] = uVar8;
  param_1[7] = uVar9;
  *param_1 = uVar3;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = param_2[10];
  _Src = *(void **)(param_2 + 8);
  param_1[10] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0xb] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar1,0);
    memcpy(*(void **)(param_1 + 8),_Src,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  param_1[0x10] = param_2[0x10];
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  lVar2 = *(longlong *)(param_2 + 0x12);
  *(longlong *)(param_1 + 0x12) = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 148000550 FUN_148000550 body=111 status=ok
// SIG undefined FUN_148000550(void)

void FUN_148000550(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x58,8);
    iVar2 = (int)(uVar1 / 0x58);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x58,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1480005bf FUN_1480005bf body=52 status=ok
// SIG undefined FUN_1480005bf(void)

void FUN_1480005bf(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1480005f4(param_1,param_2);
    param_1 = param_1 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return;
}



// FUNCTION 1480005f4 FUN_1480005f4 body=166 status=ok
// SIG undefined FUN_1480005f4(void)

undefined4 * FUN_1480005f4(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = param_2[5];
  uVar8 = param_2[6];
  uVar9 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar7;
  param_1[6] = uVar8;
  param_1[7] = uVar9;
  *param_1 = uVar3;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = param_2[10];
  _Src = *(void **)(param_2 + 8);
  param_1[10] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0xb] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar1,0);
    memcpy(*(void **)(param_1 + 8),_Src,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  uVar3 = param_2[0xf];
  uVar4 = param_2[0x10];
  uVar5 = param_2[0x11];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar3;
  param_1[0x10] = uVar4;
  param_1[0x11] = uVar5;
  lVar2 = *(longlong *)(param_2 + 0x14);
  *(longlong *)(param_1 + 0x14) = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 14800069a FUN_14800069a body=98 status=ok
// SIG undefined FUN_14800069a(void)

void FUN_14800069a(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 7,0x10);
    iVar1 = (int)(uVar2 >> 7);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x80,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1480006fc FUN_1480006fc body=60 status=ok
// SIG undefined FUN_1480006fc(void)

void FUN_1480006fc(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148000738(param_1,param_2);
    param_1 = param_1 + 0x80;
    param_2 = param_2 + 0x80;
  }
  return;
}



// FUNCTION 148000738 FUN_148000738 body=174 status=ok
// SIG undefined FUN_148000738(void)

undefined4 * FUN_148000738(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
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
  undefined4 uVar13;
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = param_2[5];
  uVar8 = param_2[6];
  uVar9 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar7;
  param_1[6] = uVar8;
  param_1[7] = uVar9;
  *param_1 = uVar3;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = param_2[10];
  _Src = *(void **)(param_2 + 8);
  param_1[10] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0xb] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar1,0);
    memcpy(*(void **)(param_1 + 8),_Src,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  uVar3 = param_2[0x11];
  uVar4 = param_2[0x12];
  uVar5 = param_2[0x13];
  uVar6 = param_2[0x14];
  uVar7 = param_2[0x15];
  uVar8 = param_2[0x16];
  uVar9 = param_2[0x17];
  uVar10 = param_2[0x18];
  uVar11 = param_2[0x19];
  uVar12 = param_2[0x1a];
  uVar13 = param_2[0x1b];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar3;
  param_1[0x12] = uVar4;
  param_1[0x13] = uVar5;
  param_1[0x14] = uVar6;
  param_1[0x15] = uVar7;
  param_1[0x16] = uVar8;
  param_1[0x17] = uVar9;
  param_1[0x18] = uVar10;
  param_1[0x19] = uVar11;
  param_1[0x1a] = uVar12;
  param_1[0x1b] = uVar13;
  lVar2 = *(longlong *)(param_2 + 0x1c);
  *(longlong *)(param_1 + 0x1c) = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 1480007e6 FUN_1480007e6 body=114 status=ok
// SIG undefined FUN_1480007e6(void)

void FUN_1480007e6(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xb0,0x10);
    iVar2 = (int)(uVar1 / 0xb0);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xb0,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148000858 FUN_148000858 body=60 status=ok
// SIG undefined FUN_148000858(void)

void FUN_148000858(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148000894(param_1,param_2);
    param_1 = param_1 + 0xb0;
    param_2 = param_2 + 0xb0;
  }
  return;
}



// FUNCTION 148000894 FUN_148000894 body=173 status=ok
// SIG undefined FUN_148000894(void)

undefined4 * FUN_148000894(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  uVar8 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar6;
  param_1[6] = uVar7;
  param_1[7] = uVar8;
  *param_1 = uVar2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = param_2[10];
  _Src = *(void **)(param_2 + 8);
  param_1[10] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0xb] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar1,0);
    memcpy(*(void **)(param_1 + 8),_Src,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  puVar10 = (undefined8 *)(param_2 + 0x10);
  puVar11 = (undefined8 *)(param_1 + 0x10);
  for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  lVar9 = *(longlong *)(param_2 + 0x28);
  *(longlong *)(param_1 + 0x28) = lVar9;
  if ((lVar9 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 148000982 FUN_148000982 body=105 status=ok
// SIG undefined FUN_148000982(void)

undefined1 FUN_148000982(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      lVar1 = *(longlong *)(param_3 + -8);
      if (DAT_14c950c29 == '\x01') {
        if (lVar1 == 0) {
          lVar1 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar1 = *(longlong *)(param_3 + -8);
        }
      }
      *(longlong *)(param_2 + -8) = lVar1;
      FUN_147fff11a(param_2,param_3);
      param_3 = param_3 + 0xe8;
      param_2 = param_2 + 0xe8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148000a18 FUN_148000a18 body=59 status=ok
// SIG undefined FUN_148000a18(void)

undefined8 FUN_148000a18(longlong *param_1)

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



// FUNCTION 148000a64 FUN_148000a64 body=41 status=ok
// SIG undefined FUN_148000a64(void)

void FUN_148000a64(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe8) == '\x01') {
    FUN_145acfbdc(param_2 + 8);
    *(undefined1 *)(param_2 + 0xe8) = 0;
  }
  return;
}



// FUNCTION 148000ade FUN_148000ade body=52 status=ok
// SIG undefined FUN_148000ade(void)

void FUN_148000ade(longlong *param_1)

{
  FUN_148000b12();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148000b12 FUN_148000b12 body=89 status=ok
// SIG undefined FUN_148000b12(void)

void FUN_148000b12(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140de7f60(param_1,0);
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



// FUNCTION 148000b6c FUN_148000b6c body=53 status=ok
// SIG undefined FUN_148000b6c(void)

void FUN_148000b6c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x30) == 0) {
    lVar1 = param_1;
  }
  FUN_148000ba1(lVar1,*(undefined4 *)(param_1 + 0x38));
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148000ba1 FUN_148000ba1 body=73 status=ok
// SIG undefined FUN_148000ba1(void)

void FUN_148000ba1(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 148000bea FUN_148000bea body=123 status=ok
// SIG undefined FUN_148000bea(void)

undefined8 * FUN_148000bea(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_148000c66();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 148000c66 FUN_148000c66 body=146 status=ok
// SIG undefined FUN_148000c66(void)

longlong * FUN_148000c66(longlong *param_1,longlong *param_2)

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



// FUNCTION 148000cf8 FUN_148000cf8 body=52 status=ok
// SIG undefined FUN_148000cf8(void)

void FUN_148000cf8(longlong *param_1)

{
  FUN_148000d2c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148000d2c FUN_148000d2c body=89 status=ok
// SIG undefined FUN_148000d2c(void)

void FUN_148000d2c(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14472eb64(param_1,0);
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



// FUNCTION 148000dae FUN_148000dae body=90 status=ok
// SIG undefined FUN_148000dae(void)

undefined1 FUN_148000dae(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3 * 8);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar3 * 8);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3 * 8) = lVar2;
      lVar3 = lVar3 + 1;
    } while (param_4 != (int)lVar3);
  }
  return 1;
}



// FUNCTION 148000e30 FUN_148000e30 body=59 status=ok
// SIG undefined FUN_148000e30(void)

undefined8 FUN_148000e30(longlong *param_1)

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



// FUNCTION 148000efa FUN_148000efa body=90 status=ok
// SIG undefined FUN_148000efa(void)

undefined1 FUN_148000efa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3 * 8);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar3 * 8);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3 * 8) = lVar2;
      lVar3 = lVar3 + 1;
    } while (param_4 != (int)lVar3);
  }
  return 1;
}



// FUNCTION 148000f7c FUN_148000f7c body=59 status=ok
// SIG undefined FUN_148000f7c(void)

undefined8 FUN_148000f7c(longlong *param_1)

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



// FUNCTION 14800104e FUN_14800104e body=105 status=ok
// SIG undefined FUN_14800104e(void)

undefined1 FUN_14800104e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      *(undefined4 *)(param_2 + lVar3) = *(undefined4 *)(param_3 + lVar3);
      lVar2 = *(longlong *)(param_3 + 8 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + 8 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + 8 + lVar3) = lVar2;
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1480010e0 FUN_1480010e0 body=59 status=ok
// SIG undefined FUN_1480010e0(void)

undefined8 FUN_1480010e0(longlong *param_1)

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



// FUNCTION 148001182 FUN_148001182 body=139 status=ok
// SIG undefined FUN_148001182(void)

void FUN_148001182(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  if (param_2 <= (int)uVar1) {
    iVar6 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0x3c) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar3 = (longlong)(int)uVar2;
      }
      else {
        lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0x18,0);
      iVar5 = (int)(uVar4 / 0x18);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar5) {
        iVar6 = iVar5;
      }
    }
    *(int *)(param_1 + 0x3c) = iVar6;
    FUN_14800120e(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14800120e FUN_14800120e body=140 status=ok
// SIG undefined FUN_14800120e(void)

void FUN_14800120e(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x30);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x18);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x30,0,param_3,0x18);
    memmove(*(void **)((longlong)param_1 + 0x30),param_1,(longlong)param_2 * 0x18);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x30,param_2,param_3,0x18);
  return;
}



// FUNCTION 1480012b2 FUN_1480012b2 body=47 status=ok
// SIG undefined FUN_1480012b2(void)

void FUN_1480012b2(undefined8 param_1,longlong *param_2)

{
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1480012f8 FUN_1480012f8 body=87 status=ok
// SIG undefined FUN_1480012f8(void)

undefined1 FUN_1480012f8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148001414(param_2,param_3);
    FUN_148001464(param_2 + 0x10,param_3 + 0x10);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 148001378 FUN_148001378 body=59 status=ok
// SIG undefined FUN_148001378(void)

undefined8 FUN_148001378(longlong *param_1)

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



// FUNCTION 148001414 FUN_148001414 body=79 status=ok
// SIG undefined FUN_148001414(void)

undefined8 * FUN_148001414(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1480014b4(param_1,iVar1);
      FUN_148001516(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148001464 FUN_148001464 body=79 status=ok
// SIG undefined FUN_148001464(void)

undefined8 * FUN_148001464(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148001568(param_1,iVar1);
      FUN_1480015ca(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1480014b4 FUN_1480014b4 body=98 status=ok
// SIG undefined FUN_1480014b4(void)

void FUN_1480014b4(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,8);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148001516 FUN_148001516 body=82 status=ok
// SIG undefined FUN_148001516(void)

void FUN_148001516(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3 * 8);
      *(longlong *)(param_1 + lVar3 * 8) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 148001568 FUN_148001568 body=98 status=ok
// SIG undefined FUN_148001568(void)

void FUN_148001568(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,8);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1480015ca FUN_1480015ca body=82 status=ok
// SIG undefined FUN_1480015ca(void)

void FUN_1480015ca(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3 * 8);
      *(longlong *)(param_1 + lVar3 * 8) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 14800161e FUN_14800161e body=51 status=ok
// SIG undefined FUN_14800161e(void)

void FUN_14800161e(longlong *param_1)

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



// FUNCTION 14800174c FUN_14800174c body=59 status=ok
// SIG undefined FUN_14800174c(void)

undefined8 FUN_14800174c(longlong *param_1)

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



// FUNCTION 1480017ec FUN_1480017ec body=29 status=ok
// SIG undefined FUN_1480017ec(void)

undefined8 FUN_1480017ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14800190a FUN_14800190a body=59 status=ok
// SIG undefined FUN_14800190a(void)

undefined8 FUN_14800190a(longlong *param_1)

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



// FUNCTION 1480019aa FUN_1480019aa body=29 status=ok
// SIG undefined FUN_1480019aa(void)

undefined8 FUN_1480019aa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480019f0 FUN_1480019f0 body=90 status=ok
// SIG undefined FUN_1480019f0(void)

undefined1 FUN_1480019f0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3 * 8);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar3 * 8);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3 * 8) = lVar2;
      lVar3 = lVar3 + 1;
    } while (param_4 != (int)lVar3);
  }
  return 1;
}



// FUNCTION 148001a72 FUN_148001a72 body=59 status=ok
// SIG undefined FUN_148001a72(void)

undefined8 FUN_148001a72(longlong *param_1)

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



// FUNCTION 148001c3a FUN_148001c3a body=59 status=ok
// SIG undefined FUN_148001c3a(void)

undefined8 FUN_148001c3a(longlong *param_1)

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



// FUNCTION 148001cda FUN_148001cda body=29 status=ok
// SIG undefined FUN_148001cda(void)

undefined8 FUN_148001cda(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148001cf8 FUN_148001cf8 body=55 status=ok
// SIG undefined FUN_148001cf8(void)

void FUN_148001cf8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb2ad08 == 0) {
    uVar1 = FUN_140d2376e();
    DAT_14cb2ad08 =
         FUN_140002ddd(FUN_146459d6f,uVar1,L"GameplayCamerasActivateCameraRigTaskInstanceData");
  }
  return;
}



// FUNCTION 148001d58 FUN_148001d58 body=90 status=ok
// SIG undefined FUN_148001d58(void)

undefined1 FUN_148001d58(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3 * 8);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar3 * 8);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3 * 8) = lVar2;
      lVar3 = lVar3 + 1;
    } while (param_4 != (int)lVar3);
  }
  return 1;
}



// FUNCTION 148001dda FUN_148001dda body=59 status=ok
// SIG undefined FUN_148001dda(void)

undefined8 FUN_148001dda(longlong *param_1)

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



// FUNCTION 148001fa2 FUN_148001fa2 body=59 status=ok
// SIG undefined FUN_148001fa2(void)

undefined8 FUN_148001fa2(longlong *param_1)

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



// FUNCTION 148002042 FUN_148002042 body=29 status=ok
// SIG undefined FUN_148002042(void)

undefined8 FUN_148002042(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148002060 FUN_148002060 body=55 status=ok
// SIG undefined FUN_148002060(void)

void FUN_148002060(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb2ad38 == 0) {
    uVar1 = FUN_140d2376e();
    DAT_14cb2ad38 =
         FUN_140002ddd(FUN_146459e9b,uVar1,
                       L"GameplayCamerasActivateCameraRigViaProxyTaskInstanceData");
  }
  return;
}



// FUNCTION 148002160 FUN_148002160 body=39 status=ok
// SIG undefined FUN_148002160(void)

undefined8 FUN_148002160(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 0xe; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1480021b0 FUN_1480021b0 body=59 status=ok
// SIG undefined FUN_1480021b0(void)

undefined8 FUN_1480021b0(longlong *param_1)

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



// FUNCTION 148002272 FUN_148002272 body=56 status=ok
// SIG undefined FUN_148002272(void)

void FUN_148002272(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x00014800229f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1480022c0 FUN_1480022c0 body=54 status=ok
// SIG undefined FUN_1480022c0(void)

undefined1 FUN_1480022c0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1480023f2(param_2,param_3);
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return 1;
}



// FUNCTION 14800231e FUN_14800231e body=59 status=ok
// SIG undefined FUN_14800231e(void)

undefined8 FUN_14800231e(longlong *param_1)

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



// FUNCTION 148002364 FUN_148002364 body=64 status=ok
// SIG undefined FUN_148002364(void)

void FUN_148002364(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x18) == '\x01') {
    plVar3 = *(longlong **)(param_2 + 0x10);
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
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 1480023f2 FUN_1480023f2 body=88 status=ok
// SIG undefined FUN_1480023f2(void)

undefined8 * FUN_1480023f2(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *param_1 = *param_2;
  uVar3 = param_2[1];
  lVar4 = param_2[2];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_1[2];
  param_1[1] = uVar3;
  param_1[2] = lVar4;
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
  return param_1;
}



// FUNCTION 14800244c FUN_14800244c body=99 status=ok
// SIG undefined FUN_14800244c(void)

void FUN_14800244c(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_LAB_14ad0ffe0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_147fd8372(param_1 + 8);
  param_1[0x164] = 0;
  param_1[0x165] = 0;
  param_1[0x166] = 0;
  param_1[0x167] = 0;
  param_1[0x168] = 0;
  param_1[0x169] = 0;
  param_1[0x16a] = 0;
  param_1[0x16b] = 0;
  *(undefined2 *)(param_1 + 0x16c) = 0;
  return;
}



// FUNCTION 1480024bc FUN_1480024bc body=73 status=ok
// SIG undefined FUN_1480024bc(void)

void FUN_1480024bc(longlong param_1,int param_2)

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



// FUNCTION 148002506 FUN_148002506 body=132 status=ok
// SIG undefined FUN_148002506(void)

void FUN_148002506(longlong param_1,int param_2)

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



// FUNCTION 14800258b FUN_14800258b body=54 status=ok
// SIG undefined FUN_14800258b(void)

void FUN_14800258b(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 8);
    do {
      plVar2 = (longlong *)*plVar3;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      plVar3 = plVar3 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1480025c2 FUN_1480025c2 body=95 status=ok
// SIG undefined FUN_1480025c2(void)

void FUN_1480025c2(longlong *param_1,uint param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  void *_Dst;
  
  lVar2 = *param_1;
  plVar3 = *(longlong **)(lVar2 + 8 + (longlong)(int)param_2 * 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  iVar4 = (int)param_1[1];
  if (~param_2 + iVar4 != 0) {
    _Dst = (void *)(lVar2 + (longlong)(int)param_2 * 0x10);
    memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~param_2 + iVar4) << 4);
    iVar4 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar4 + -1;
  return;
}



// FUNCTION 148002622 FUN_148002622 body=62 status=ok
// SIG undefined FUN_148002622(void)

void FUN_148002622(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148002660(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 148002660 FUN_148002660 body=93 status=ok
// SIG undefined FUN_148002660(void)

ulonglong FUN_148002660(uint param_1,uint param_2)

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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 1480026be FUN_1480026be body=132 status=ok
// SIG undefined FUN_1480026be(void)

void FUN_1480026be(longlong param_1,int param_2)

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



// FUNCTION 148002744 FUN_148002744 body=48 status=ok
// SIG undefined FUN_148002744(void)

void FUN_148002744(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 148002774 FUN_148002774 body=118 status=ok
// SIG undefined FUN_148002774(void)

void FUN_148002774(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  void *_Dst;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 8 + (longlong)(int)param_2 * 0x10);
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
  iVar5 = (int)param_1[1];
  if (~param_2 + iVar5 != 0) {
    _Dst = (void *)(lVar3 + (longlong)(int)param_2 * 0x10);
    memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~param_2 + iVar5) << 4);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 1480027ea FUN_1480027ea body=62 status=ok
// SIG undefined FUN_1480027ea(void)

void FUN_1480027ea(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148002828(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 148002828 FUN_148002828 body=93 status=ok
// SIG undefined FUN_148002828(void)

ulonglong FUN_148002828(uint param_1,uint param_2)

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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 1480028e8 FUN_1480028e8 body=29 status=ok
// SIG undefined FUN_1480028e8(void)

undefined8 FUN_1480028e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148002906 FUN_148002906 body=132 status=ok
// SIG undefined FUN_148002906(void)

void FUN_148002906(longlong param_1,int param_2)

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



// FUNCTION 14800298c FUN_14800298c body=62 status=ok
// SIG undefined FUN_14800298c(void)

void FUN_14800298c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1480029ca(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1480029ca FUN_1480029ca body=93 status=ok
// SIG undefined FUN_1480029ca(void)

ulonglong FUN_1480029ca(uint param_1,uint param_2)

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



// FUNCTION 148002a28 FUN_148002a28 body=332 status=ok
// SIG undefined FUN_148002a28(void)

undefined4 * FUN_148002a28(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148002b76(param_1,local_48);
  uVar1 = *(undefined8 *)*param_3;
  *local_40 = uVar1;
  local_40[1] = 0;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar8 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar4 >> 4);
  cVar3 = FUN_148002c5c(param_1,uVar8,local_40,&local_4c);
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
      FUN_148002d4e(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148002b76 FUN_148002b76 body=230 status=ok
// SIG undefined FUN_148002b76(void)

int * FUN_148002b76(longlong *param_1,int *param_2)

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



// FUNCTION 148002c5c FUN_148002c5c body=128 status=ok
// SIG undefined FUN_148002c5c(void)

undefined8 FUN_148002c5c(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_148002cdc((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 148002cdc FUN_148002cdc body=114 status=ok
// SIG undefined FUN_148002cdc(void)

void FUN_148002cdc(longlong *param_1,int param_2)

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



// FUNCTION 148002d4e FUN_148002d4e body=473 status=ok
// SIG undefined FUN_148002d4e(void)

void FUN_148002d4e(longlong *param_1)

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



// FUNCTION 148002f28 FUN_148002f28 body=48 status=ok
// SIG undefined FUN_148002f28(void)

void FUN_148002f28(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 148002f58 FUN_148002f58 body=132 status=ok
// SIG undefined FUN_148002f58(void)

void FUN_148002f58(longlong param_1,int param_2)

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



// FUNCTION 148002fde FUN_148002fde body=62 status=ok
// SIG undefined FUN_148002fde(void)

void FUN_148002fde(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14800301c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 14800301c FUN_14800301c body=93 status=ok
// SIG undefined FUN_14800301c(void)

ulonglong FUN_14800301c(uint param_1,uint param_2)

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



// FUNCTION 14800307a FUN_14800307a body=110 status=ok
// SIG undefined FUN_14800307a(void)

longlong * FUN_14800307a(longlong *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  if ((char)param_1[6] == '\x01') {
    plVar2 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar2 = param_1;
    }
    lVar1 = plVar2[param_3];
    *param_2 = lVar1;
    if (DAT_14c950c29 != 1) {
      return param_2;
    }
    if (lVar1 == 0) {
      return param_2;
    }
  }
  else {
    if ((char)param_1[6] != '\0') {
      *param_2 = 0;
      return param_2;
    }
    lVar1 = *(longlong *)(*param_1 + (longlong)param_3 * 8);
    *param_2 = lVar1;
    if ((lVar1 != 0 & DAT_14c950c29) != 1) {
      return param_2;
    }
  }
  FUN_1456cec3c();
  return param_2;
}



// FUNCTION 1480030e8 FUN_1480030e8 body=48 status=ok
// SIG undefined FUN_1480030e8(void)

void FUN_1480030e8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 148003118 FUN_148003118 body=132 status=ok
// SIG undefined FUN_148003118(void)

void FUN_148003118(longlong param_1,int param_2)

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



// FUNCTION 1480031ac FUN_1480031ac body=197 status=ok
// SIG undefined FUN_1480031ac(void)

void FUN_1480031ac(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar4 = (ulonglong)DAT_14cb2b148;
  if ((longlong)uVar4 < 1) {
    return;
  }
  bVar5 = false;
  DAT_14cb2b154 = DAT_14cb2b154 + 1;
  do {
    lVar6 = uVar4 * 0x10 + -8;
    uVar7 = uVar4;
    while (((*(int *)(DAT_14cb2b140 + lVar6) != 0 &&
            (plVar1 = *(longlong **)(DAT_14cb2b140 + -8 + lVar6), plVar1 != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_1,param_2), cVar3 != '\0'))) {
      lVar6 = lVar6 + -0x10;
      bVar2 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar2) {
        DAT_14cb2b154 = DAT_14cb2b154 + -1;
        if (!bVar5) {
          return;
        }
        goto LAB_148003246;
      }
    }
    uVar4 = uVar7 - 1;
    bVar5 = true;
  } while (1 < uVar7);
  DAT_14cb2b154 = DAT_14cb2b154 + -1;
LAB_148003246:
  FUN_14474d06a(&DAT_14cb2b140,0);
  return;
}



// FUNCTION 148003272 FUN_148003272 body=52 status=ok
// SIG undefined FUN_148003272(void)

void FUN_148003272(longlong *param_1)

{
  FUN_1480032a6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1480032a6 FUN_1480032a6 body=89 status=ok
// SIG undefined FUN_1480032a6(void)

void FUN_1480032a6(longlong param_1)

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



// FUNCTION 148003300 FUN_148003300 body=193 status=ok
// SIG undefined FUN_148003300(void)

void FUN_148003300(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar1 = (int)param_2[1];
  uVar3 = uVar2 + iVar1;
  if (uVar2 < uVar3) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar3);
    }
    FUN_1480033c4(param_1,uVar3);
    iVar1 = 1;
    if (3 < uVar3) {
      uVar3 = (uVar3 | 1) + 0xe;
      iVar1 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      iVar1 = 1 << ((byte)iVar1 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar1)) {
      *(int *)(param_1 + 0x48) = iVar1;
      FUN_148003562(param_1);
    }
    iVar1 = (int)param_2[1];
  }
  if (iVar1 != 0) {
    lVar4 = *param_2;
    lVar5 = (longlong)iVar1 << 3;
    do {
      FUN_148003740(param_1,local_2c,lVar4);
      lVar4 = lVar4 + 8;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480033c4 FUN_1480033c4 body=413 status=ok
// SIG undefined FUN_1480033c4(void)

void FUN_1480033c4(longlong *param_1,uint param_2)

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
      FUN_14474875a(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_1446efaca(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar9 * 0x10 + lVar2 + -0xc);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = iVar8 + -1;
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
        puVar5 = puVar5 + -4;
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



// FUNCTION 148003562 FUN_148003562 body=477 status=ok
// SIG undefined FUN_148003562(void)

void FUN_148003562(longlong *param_1)

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



// FUNCTION 148003740 FUN_148003740 body=312 status=ok
// SIG undefined FUN_148003740(void)

undefined4 * FUN_148003740(longlong param_1,undefined4 *param_2,ulonglong *param_3)

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
  FUN_14800387a(param_1,local_48);
  uVar5 = *param_3;
  *local_40 = uVar5;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_148003960(param_1,uVar3,local_40,&local_4c);
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
      FUN_148003562(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14800387a FUN_14800387a body=229 status=ok
// SIG undefined FUN_14800387a(void)

int * FUN_14800387a(longlong *param_1,int *param_2)

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



// FUNCTION 148003960 FUN_148003960 body=124 status=ok
// SIG undefined FUN_148003960(void)

undefined8 FUN_148003960(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_1480039dc(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = (int)plVar1[1];
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1480039dc FUN_1480039dc body=114 status=ok
// SIG undefined FUN_1480039dc(void)

void FUN_1480039dc(longlong *param_1,int param_2)

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



// FUNCTION 148003a4e FUN_148003a4e body=52 status=ok
// SIG undefined FUN_148003a4e(void)

void FUN_148003a4e(longlong *param_1)

{
  FUN_148003a82();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148003a82 FUN_148003a82 body=89 status=ok
// SIG undefined FUN_148003a82(void)

void FUN_148003a82(longlong param_1)

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



// FUNCTION 148003adc FUN_148003adc body=68 status=ok
// SIG undefined FUN_148003adc(void)

void FUN_148003adc(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_148003b20();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_1446f4a44(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 148003b20 FUN_148003b20 body=322 status=ok
// SIG undefined FUN_148003b20(void)

void FUN_148003b20(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
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



// FUNCTION 148003c64 FUN_148003c64 body=326 status=ok
// SIG undefined FUN_148003c64(void)

undefined4 * FUN_148003c64(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148003dac(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar8 = *(ulonglong *)*param_3;
  *local_40 = uVar8;
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = uVar2;
  *(undefined4 *)(local_40 + 2) = uVar3;
  *(undefined4 *)((longlong)local_40 + 0x14) = uVar4;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar6 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  cVar5 = FUN_148003e92(param_1,uVar6,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar5 == '\0') {
    uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar7) {
      uVar8 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      *(uint *)((longlong)local_40 + 0x1c) = uVar6;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_148003f8e(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148003dac FUN_148003dac body=229 status=ok
// SIG undefined FUN_148003dac(void)

int * FUN_148003dac(longlong *param_1,int *param_2)

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
      FUN_1447711aa(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 148003e92 FUN_148003e92 body=137 status=ok
// SIG undefined FUN_148003e92(void)

undefined8 FUN_148003e92(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_148003f1c((int)lVar4,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 148003f1c FUN_148003f1c body=114 status=ok
// SIG undefined FUN_148003f1c(void)

void FUN_148003f1c(longlong *param_1,int param_2)

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



// FUNCTION 148003f8e FUN_148003f8e body=477 status=ok
// SIG undefined FUN_148003f8e(void)

void FUN_148003f8e(longlong *param_1)

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
        lVar6 = (longlong)iVar4 * 0x20;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x1c + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x18 + lVar6) =
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



// FUNCTION 14800416c FUN_14800416c body=312 status=ok
// SIG undefined FUN_14800416c(void)

undefined4 * FUN_14800416c(longlong param_1,undefined4 *param_2,ulonglong *param_3)

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
  FUN_1480042a6(param_1,local_48);
  uVar5 = *param_3;
  *local_40 = uVar5;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_14800438c(param_1,uVar3,local_40,&local_4c);
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
      FUN_14800447a(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480042a6 FUN_1480042a6 body=229 status=ok
// SIG undefined FUN_1480042a6(void)

int * FUN_1480042a6(longlong *param_1,int *param_2)

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



// FUNCTION 14800438c FUN_14800438c body=124 status=ok
// SIG undefined FUN_14800438c(void)

undefined8 FUN_14800438c(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_148004408(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = (int)plVar1[1];
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 148004408 FUN_148004408 body=114 status=ok
// SIG undefined FUN_148004408(void)

void FUN_148004408(longlong *param_1,int param_2)

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



// FUNCTION 14800447a FUN_14800447a body=477 status=ok
// SIG undefined FUN_14800447a(void)

void FUN_14800447a(longlong *param_1)

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



// FUNCTION 148004658 FUN_148004658 body=68 status=ok
// SIG undefined FUN_148004658(void)

void FUN_148004658(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_14800469c();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_1446f4a44(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14800469c FUN_14800469c body=322 status=ok
// SIG undefined FUN_14800469c(void)

void FUN_14800469c(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
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



// FUNCTION 1480047e0 FUN_1480047e0 body=393 status=ok
// SIG undefined FUN_1480047e0(void)

undefined4 * FUN_1480047e0(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14800496a(param_1,local_48);
  puVar1 = (undefined4 *)*param_3;
  puVar2 = (ulonglong *)param_3[1];
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *(undefined4 *)local_40 = *puVar1;
  *(undefined4 *)((longlong)local_40 + 4) = uVar3;
  *(undefined4 *)(local_40 + 1) = uVar4;
  *(undefined4 *)((longlong)local_40 + 0xc) = uVar5;
  local_40[2] = *puVar2;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar7 = ((uint)(*local_40 >> 0x14) & 0xffff ^ (uint)(*local_40 >> 4)) * -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  uVar7 = uVar7 >> 0x10 ^ uVar7;
  uVar8 = ((uint)(local_40[1] >> 0x14) & 0xffff ^ (uint)(local_40[1] >> 4)) * -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  uVar7 = (uVar7 >> 2) + uVar7 * 0x40 + (uVar8 >> 0x10 ^ uVar8) + 0x9e3779b9 ^ uVar7;
  cVar6 = FUN_148004a50(param_1,uVar7,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar6 == '\0') {
    uVar8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar10 = 1;
    if (3 < uVar8) {
      uVar9 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar11 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar11 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_40 + 0x1c) = uVar7;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar10;
      FUN_148004b54(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14800496a FUN_14800496a body=229 status=ok
// SIG undefined FUN_14800496a(void)

int * FUN_14800496a(longlong *param_1,int *param_2)

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
      FUN_1447711aa(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 148004a50 FUN_148004a50 body=145 status=ok
// SIG undefined FUN_148004a50(void)

undefined8 FUN_148004a50(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      lVar2 = *param_1;
      do {
        lVar7 = (longlong)iVar6 * 0x20;
        puVar1 = (undefined4 *)(lVar2 + lVar7);
        if ((*(longlong *)(lVar2 + lVar7) == *param_3) &&
           (*(longlong *)(lVar2 + 8 + lVar7) == param_3[1])) {
          lVar2 = *param_3;
          uVar3 = *(undefined4 *)((longlong)param_3 + 4);
          lVar7 = param_3[1];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar2;
          puVar1[1] = uVar3;
          puVar1[2] = (int)lVar7;
          puVar1[3] = uVar4;
          FUN_148004ae2((int)lVar2,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = puVar1[6];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 148004ae2 FUN_148004ae2 body=114 status=ok
// SIG undefined FUN_148004ae2(void)

void FUN_148004ae2(longlong *param_1,int param_2)

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



// FUNCTION 148004b54 FUN_148004b54 body=560 status=ok
// SIG undefined FUN_148004b54(void)

void FUN_148004b54(longlong *param_1)

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
        lVar6 = (longlong)iVar4 * 0x20;
        uVar10 = *(ulonglong *)(lVar2 + 8 + lVar6);
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar8 = uVar8 >> 0x10 ^ uVar8;
        uVar7 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        uVar10 = (longlong)
                 (int)(uVar8 * 0x40 + (uVar7 >> 0x10 ^ uVar7) + (uVar8 >> 2) + 0x9e3779b9 ^ uVar8) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x1c + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x18 + lVar6) =
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



// FUNCTION 148004d86 FUN_148004d86 body=378 status=ok
// SIG undefined FUN_148004d86(void)

undefined4 * FUN_148004d86(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148004f02(param_1,local_48);
  puVar1 = (undefined4 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  *(undefined8 *)(local_40 + 4) = *(undefined8 *)(puVar1 + 4);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *local_40 = *puVar1;
  local_40[1] = uVar3;
  local_40[2] = uVar4;
  local_40[3] = uVar5;
  *(undefined8 *)(local_40 + 6) = *puVar2;
  local_40[8] = 0xffffffff;
  local_4c = local_48[0];
  uVar7 = FUN_1447addd0(local_40,0x10);
  uVar8 = ((uint)(*(ulonglong *)(local_40 + 4) >> 0x14) & 0xffff ^
          (uint)(*(ulonglong *)(local_40 + 4) >> 4)) * -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  uVar7 = (uVar8 >> 0x10 ^ uVar8) + (uVar7 >> 2) + uVar7 * 0x40 + 0x9e3779b9 ^ uVar7;
  cVar6 = FUN_148004fe8(param_1,uVar7,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar6 == '\0') {
    uVar8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar10 = 1;
    if (3 < uVar8) {
      uVar9 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar11 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar11 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      local_40[9] = uVar7;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      local_40[8] = *(undefined4 *)
                     (lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
      ;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar10;
      FUN_148005138(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148004f02 FUN_148004f02 body=230 status=ok
// SIG undefined FUN_148004f02(void)

int * FUN_148004f02(longlong *param_1,int *param_2)

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



// FUNCTION 148004fe8 FUN_148004fe8 body=93 status=ok
// SIG undefined FUN_148004fe8(void)

undefined8 FUN_148004fe8(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar10 = FUN_148005046(), iVar10 != -1)) {
    lVar2 = *param_1;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    uVar7 = param_3[5];
    uVar8 = param_3[6];
    uVar9 = param_3[7];
    puVar1 = (undefined4 *)(lVar2 + 0x10 + (longlong)iVar10 * 0x28);
    *puVar1 = param_3[4];
    puVar1[1] = uVar7;
    puVar1[2] = uVar8;
    puVar1[3] = uVar9;
    puVar1 = (undefined4 *)(lVar2 + (longlong)iVar10 * 0x28);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_1480050c6(param_1,*param_4);
    *param_4 = iVar10;
    return 1;
  }
  return 0;
}



// FUNCTION 148005046 FUN_148005046 body=128 status=ok
// SIG undefined FUN_148005046(void)

int FUN_148005046(longlong *param_1,uint param_2,int *param_3)

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
           ((*(int *)(lVar2 + 0xc + lVar4 * 0x28) == param_3[3] &&
            (*(longlong *)(lVar2 + lVar4 * 0x28 + 0x10) == *(longlong *)(param_3 + 4))))) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x20 + lVar4 * 0x28);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1480050c6 FUN_1480050c6 body=114 status=ok
// SIG undefined FUN_1480050c6(void)

void FUN_1480050c6(longlong *param_1,int param_2)

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



// FUNCTION 148005138 FUN_148005138 body=513 status=ok
// SIG undefined FUN_148005138(void)

void FUN_148005138(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
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
  uVar5 = *(uint *)(param_1 + 9);
  uVar3 = local_68;
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar5 != uVar9);
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
    uVar3 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar4 = local_68._4_4_;
      local_68 = uVar3;
      do {
        lVar2 = *local_80 + (longlong)iVar4 * 0x28;
        uVar5 = FUN_1447addd0(lVar2,0x10);
        uVar9 = ((uint)(*(ulonglong *)(lVar2 + 0x10) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + 0x10) >> 4)) * -0x7a143595;
        uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
        uVar8 = (longlong)
                (int)((uVar9 >> 0x10 ^ uVar9) + (uVar5 >> 2) + uVar5 * 0x40 + 0x9e3779b9 ^ uVar5) &
                (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar8;
        *(int *)(lVar2 + 0x24) = iVar7;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x20) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar4 = local_68._4_4_;
        uVar3 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14800533a FUN_14800533a body=312 status=ok
// SIG undefined FUN_14800533a(void)

undefined4 * FUN_14800533a(longlong param_1,undefined4 *param_2,ulonglong *param_3)

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
  FUN_1480042a6(param_1,local_48);
  uVar5 = *param_3;
  *local_40 = uVar5;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_14800438c(param_1,uVar3,local_40,&local_4c);
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
      FUN_14800447a(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148005474 FUN_148005474 body=52 status=ok
// SIG undefined FUN_148005474(void)

void FUN_148005474(longlong *param_1)

{
  FUN_1480054a8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1480054a8 FUN_1480054a8 body=89 status=ok
// SIG undefined FUN_1480054a8(void)

void FUN_1480054a8(longlong param_1)

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



// FUNCTION 148005502 FUN_148005502 body=395 status=ok
// SIG undefined FUN_148005502(void)

undefined4 * FUN_148005502(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14800568e(param_1,local_48);
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)local_40 = *param_3;
  *(undefined4 *)((longlong)local_40 + 4) = uVar1;
  *(undefined4 *)(local_40 + 1) = uVar2;
  *(undefined4 *)((longlong)local_40 + 0xc) = uVar3;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar6 = local_40[1];
  uVar5 = ((uint)(*local_40 >> 0x14) & 0xffff ^ (uint)(*local_40 >> 4)) * -0x7a143595;
  uVar7 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar7 = uVar7 >> 0x10 ^ uVar7;
  uVar5 = (uint)(uVar6 >> 0x10);
  uVar10 = (uint)uVar6 & 0xffff;
  uVar7 = (uVar7 >> 2) +
          ((uint)uVar6 << 0x10 | uVar10) + (int)(uVar6 >> 0x20) + (uVar5 << 0x13 | uVar5 & 0xffff) +
          (uVar10 >> 4) + uVar7 * 0x40 + 0x9e3779b9 ^ uVar7;
  cVar4 = FUN_148005774(param_1,uVar7,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar4 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_40 + 0x14) = uVar7;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_14800586e(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14800568e FUN_14800568e body=230 status=ok
// SIG undefined FUN_14800568e(void)

int * FUN_14800568e(longlong *param_1,int *param_2)

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



// FUNCTION 148005774 FUN_148005774 body=136 status=ok
// SIG undefined FUN_148005774(void)

undefined8 FUN_148005774(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if ((*plVar5 == *param_3) &&
           (*(longlong *)(*param_1 + 8 + (longlong)iVar6 * 0x18) == param_3[1])) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_1480057fc((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 1480057fc FUN_1480057fc body=114 status=ok
// SIG undefined FUN_1480057fc(void)

void FUN_1480057fc(longlong *param_1,int param_2)

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



// FUNCTION 14800586e FUN_14800586e body=564 status=ok
// SIG undefined FUN_14800586e(void)

void FUN_14800586e(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
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
  uVar10 = *(uint *)(param_1 + 9);
  uVar3 = local_68;
  if (uVar10 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar10,4);
    if (0 < (int)uVar10) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar10 != uVar7);
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
    uVar3 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar4 = local_68._4_4_;
      local_68 = uVar3;
      do {
        lVar2 = *local_80;
        lVar5 = (longlong)iVar4;
        uVar9 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar3 = *(undefined8 *)(lVar2 + 8 + lVar5 * 0x18);
        uVar10 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
        uVar11 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
        uVar11 = uVar11 >> 0x10 ^ uVar11;
        uVar10 = (uint)((ulonglong)uVar3 >> 0x10);
        uVar7 = (uint)uVar3 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar3 << 0x10 | uVar7) + (int)((ulonglong)uVar3 >> 0x20) +
                      (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar7 >> 4) + uVar11 * 0x40 +
                      (uVar11 >> 2) + 0x9e3779b9 ^ uVar11) & (longlong)(int)param_1[9] - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar9) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar8 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar4 = local_68._4_4_;
        uVar3 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148005aa3 FUN_148005aa3 body=641 status=ok
// SIG undefined FUN_148005aa3(void)

void FUN_148005aa3(longlong *param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_138 [32];
  undefined1 local_118 [4];
  undefined1 local_114 [4];
  longlong *local_110 [2];
  undefined8 local_100;
  longlong *local_f8;
  undefined8 local_f0;
  longlong *local_e8 [2];
  longlong *local_d8 [2];
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  wchar_t **local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80 [2];
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((*(longlong *)(param_3 + 8) != 0) &&
     (*(longlong *)(*(longlong *)(param_3 + 8) + 0x20) != *param_1)) {
    FUN_145715fae(local_d8,param_2 + 0x38);
    local_f0 = *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 0x18);
    FUN_145715fae(local_e8);
    local_88 = L"CameraParameterDrivenTwice";
    local_80[0] = 0x1a;
    FUN_1446e940c(local_114,&local_88);
    local_88 = L"CameraRigAssetBuilder";
    local_80[0] = 0x15;
    FUN_1446e940c(local_118,&local_88);
    FUN_140208bae(local_110,local_118,local_114,
                  L"Camera node parameter \'{0}.{1}\' is both exposed and driven by a variable!");
    FUN_14023409e(&local_100,local_110,1);
    local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
    FUN_14023423e(local_78,local_e8);
    local_68 = 4;
    FUN_14023423e(local_58,local_d8);
    local_a0 = &local_48;
    local_a8 = &local_88;
    FUN_14010d304(&local_98);
    local_b8 = local_100;
    local_b0 = local_f8;
    if (local_f8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_f8 + 1) = (int)local_f8[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_c8,&local_b8,&local_98);
    FUN_14007f2db(local_98,local_90);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    lVar3 = 0x30;
    do {
      plVar2 = *(longlong **)((longlong)local_80 + lVar3 + -8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))();
        *(undefined8 *)((longlong)local_80 + lVar3 + -8) = 0;
        *(undefined4 *)((longlong)local_80 + lVar3) = 0;
      }
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != -0x10);
    if (local_f8 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_f8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_f8)(local_f8);
        LOCK();
        piVar1 = (int *)((longlong)local_f8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_f8 + 0x10))(local_f8);
        }
      }
    }
    if (local_e8[0] != (longlong *)0x0) {
      (**(code **)(*local_e8[0] + 0x10))();
    }
    if (local_d8[0] != (longlong *)0x0) {
      (**(code **)(*local_d8[0] + 0x10))();
    }
    FUN_147fd2e2c(*(undefined8 *)param_1[1],1,local_c8);
    if (local_c8[0] != (longlong *)0x0) {
      (**(code **)(*local_c8[0] + 0x10))();
    }
    if (local_110[0] != (longlong *)0x0) {
      (**(code **)(*local_110[0] + 0x10))();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148005d26 FUN_148005d26 body=334 status=ok
// SIG undefined FUN_148005d26(void)

undefined8 FUN_148005d26(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)(param_1 + 8);
  local_20 = param_2;
  local_18 = param_3;
  if (*(int *)(lVar2 + 0x28) != *(int *)(lVar2 + 0x54)) {
    uVar3 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    uVar4 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    uVar4 = uVar4 >> 0x10 ^ uVar4;
    lVar7 = lVar2 + 0x58;
    if (*(longlong *)(lVar2 + 0x60) != 0) {
      lVar7 = *(longlong *)(lVar2 + 0x60);
    }
    iVar6 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(lVar2 + 0x68) - 1U &
                             (uVar4 * 0x40 + (uVar3 >> 0x10 ^ uVar3) + (uVar4 >> 2) + 0x9e3779b9 ^
                             uVar4)) * 4);
    if (iVar6 != -1) {
      lVar7 = *(longlong *)(lVar2 + 0x20);
      uVar5 = 0;
      do {
        lVar8 = (longlong)iVar6 * 0x20;
        lVar1 = lVar7 + lVar8;
        if ((*(ulonglong *)(lVar7 + lVar8) == param_2) &&
           (*(ulonglong *)(lVar7 + 8 + lVar8) == param_3)) {
          if ((undefined8 *)(lVar1 + 0x10) == (undefined8 *)0x0 || lVar1 == 0) goto LAB_148005d50;
          uVar5 = *(undefined8 *)(lVar1 + 0x10);
          FUN_148005ef8((longlong *)(lVar2 + 0x20),&local_20);
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x18);
      } while (iVar6 != -1);
      goto LAB_148005d52;
    }
  }
LAB_148005d50:
  uVar5 = 0;
LAB_148005d52:
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 148005e75 FUN_148005e75 body=131 status=ok
// SIG undefined FUN_148005e75(void)

void FUN_148005e75(undefined8 param_1,longlong param_2,char *param_3,undefined8 param_4)

{
  longlong lVar1;
  byte bVar2;
  
  lVar1 = FUN_148006036(param_1,param_2 + 0x40,param_4);
  if (*(char *)(lVar1 + 0x40) != *param_3) {
    *(char *)(lVar1 + 0x40) = *param_3;
  }
  FUN_14800628c(param_1,param_2,lVar1);
  if (lVar1 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar1);
  }
  bVar2 = DAT_14c950c29;
  *(longlong *)(param_2 + 0x60) = lVar1;
  if ((lVar1 != 0) && ((bVar2 & 1) != 0)) {
    FUN_1456cec3c(lVar1);
  }
  *(longlong *)(param_3 + 8) = lVar1;
  return;
}



// FUNCTION 148005ef8 FUN_148005ef8 body=228 status=ok
// SIG undefined FUN_148005ef8(void)

void FUN_148005ef8(longlong *param_1,ulonglong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  uint uVar7;
  longlong lVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar5 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    uVar5 = uVar5 >> 0x10 ^ uVar5;
    uVar7 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
    uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar6 +
                    ((longlong)
                     (int)(uVar5 * 0x40 + (uVar7 >> 0x10 ^ uVar7) + (uVar5 >> 2) + 0x9e3779b9 ^
                          uVar5) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      do {
        lVar8 = (longlong)iVar1 * 0x20;
        if ((*(ulonglong *)(lVar4 + lVar8) == uVar2) && (*(ulonglong *)(lVar4 + 8 + lVar8) == uVar3)
           ) {
          FUN_148005fdc();
          return;
        }
        iVar1 = *(int *)(lVar8 + lVar4 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 148005fdc FUN_148005fdc body=90 status=ok
// SIG undefined FUN_148005fdc(void)

void FUN_148005fdc(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_148004ae2();
  return;
}



// FUNCTION 148006036 FUN_148006036 body=597 status=ok
// SIG undefined FUN_148006036(void)

longlong * FUN_148006036(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  void *_Src;
  undefined2 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  void *local_d0;
  int local_c8;
  undefined4 local_c4;
  undefined1 local_c0 [16];
  longlong *local_b0;
  ulonglong *local_a8;
  undefined2 *local_a0;
  int local_98;
  undefined2 *local_90;
  int local_88;
  longlong local_80 [4];
  undefined1 local_60 [32];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_80[0] = *(longlong *)(*param_1 + 0x18);
  FUN_1400021e4(local_80,local_c0);
  FUN_14146ec20(local_80,local_c0);
  local_d0 = (void *)0x0;
  local_c8 = *(int *)(param_2 + 1);
  lVar3 = (longlong)local_c8;
  _Src = (void *)*param_2;
  if (lVar3 == 0) {
    local_c4 = 0;
  }
  else {
    FUN_1446dd670(&local_d0,local_c8,0);
    memcpy(local_d0,_Src,lVar3 * 2);
  }
  FUN_14146ec20(local_60,&local_d0);
  local_a8 = &local_40;
  local_b0 = local_80;
  FUN_1407adb6e(&local_a0);
  FUN_140230a2e(&local_90,L"Override_{0}_{1}",&local_a0);
  FUN_1407adb3e(local_a0,local_98);
  if (local_a0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  lVar3 = 0x40;
  do {
    if (*(longlong *)((longlong)&local_90 + lVar3) != 0) {
      FUN_1400020a8();
    }
    lVar3 = lVar3 + -0x20;
  } while (lVar3 != 0);
  if (param_3 == (longlong *)0x0) {
    puVar1 = local_90;
    if (local_88 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_d8,puVar1,1);
    param_3 = (longlong *)FUN_14800633b(*param_1,local_d8);
  }
  else {
    local_a0 = (undefined2 *)param_3[3];
    FUN_1400021e4(&local_a0,local_80);
    FUN_1400b22c2(&local_a0,"REUSABLE_");
    iVar2 = local_98 + -1;
    puVar1 = local_a0;
    if (local_98 == 0) {
      puVar1 = &DAT_149dfb77a;
      iVar2 = 0;
    }
    FUN_140c540b4(local_80,puVar1,iVar2,0);
    if (local_a0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    puVar1 = local_90;
    if (local_88 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    (**(code **)(*param_3 + 0x170))(param_3,puVar1,0,0x20);
    if (local_80[0] != 0) {
      FUN_1400020a8();
    }
  }
  *(undefined1 *)((longlong)param_3 + 0x2a) = 1;
  *(undefined2 *)(param_3 + 5) = 0x100;
  if (local_90 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14800628c FUN_14800628c body=175 status=ok
// SIG undefined FUN_14800628c(void)

void FUN_14800628c(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (*(int *)(lVar1 + 200) != *(int *)(lVar1 + 0xf4)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    lVar4 = lVar1 + 0xf8;
    if (*(longlong *)(lVar1 + 0x100) != 0) {
      lVar4 = *(longlong *)(lVar1 + 0x100);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)(*(int *)(lVar1 + 0x108) - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4
                    );
    if (iVar3 != -1) {
      do {
        lVar4 = *(longlong *)(lVar1 + 0xc0) + (longlong)iVar3 * 0x20;
        if (*(ulonglong *)(*(longlong *)(lVar1 + 0xc0) + (longlong)iVar3 * 0x20) == param_2) {
          if ((lVar4 + 8U & 0xfffffffffffffff7) == 0) {
            return;
          }
          *(undefined1 *)(lVar4 + 0x10) = 1;
          return;
        }
        iVar3 = *(int *)(lVar4 + 0x18);
      } while (iVar3 != -1);
    }
  }
  return;
}



// FUNCTION 14800633b FUN_14800633b body=183 status=ok
// SIG undefined FUN_14800633b(void)

undefined8 FUN_14800633b(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_1458bc354();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 8;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480063f3 FUN_1480063f3 body=641 status=ok
// SIG undefined FUN_1480063f3(void)

void FUN_1480063f3(longlong *param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_138 [32];
  undefined1 local_118 [4];
  undefined1 local_114 [4];
  longlong *local_110 [2];
  undefined8 local_100;
  longlong *local_f8;
  undefined8 local_f0;
  longlong *local_e8 [2];
  longlong *local_d8 [2];
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  wchar_t **local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80 [2];
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((*(longlong *)(param_3 + 8) != 0) &&
     (*(longlong *)(*(longlong *)(param_3 + 8) + 0x20) != *param_1)) {
    FUN_145715fae(local_d8,param_2 + 0x38);
    local_f0 = *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 0x18);
    FUN_145715fae(local_e8);
    local_88 = L"CameraParameterDrivenTwice";
    local_80[0] = 0x1a;
    FUN_1446e940c(local_114,&local_88);
    local_88 = L"CameraRigAssetBuilder";
    local_80[0] = 0x15;
    FUN_1446e940c(local_118,&local_88);
    FUN_140208bae(local_110,local_118,local_114,
                  L"Camera node parameter \'{0}.{1}\' is both exposed and driven by a variable!");
    FUN_14023409e(&local_100,local_110,1);
    local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
    FUN_14023423e(local_78,local_e8);
    local_68 = 4;
    FUN_14023423e(local_58,local_d8);
    local_a0 = &local_48;
    local_a8 = &local_88;
    FUN_14010d304(&local_98);
    local_b8 = local_100;
    local_b0 = local_f8;
    if (local_f8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_f8 + 1) = (int)local_f8[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_c8,&local_b8,&local_98);
    FUN_14007f2db(local_98,local_90);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    lVar3 = 0x30;
    do {
      plVar2 = *(longlong **)((longlong)local_80 + lVar3 + -8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))();
        *(undefined8 *)((longlong)local_80 + lVar3 + -8) = 0;
        *(undefined4 *)((longlong)local_80 + lVar3) = 0;
      }
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != -0x10);
    if (local_f8 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_f8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_f8)(local_f8);
        LOCK();
        piVar1 = (int *)((longlong)local_f8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_f8 + 0x10))(local_f8);
        }
      }
    }
    if (local_e8[0] != (longlong *)0x0) {
      (**(code **)(*local_e8[0] + 0x10))();
    }
    if (local_d8[0] != (longlong *)0x0) {
      (**(code **)(*local_d8[0] + 0x10))();
    }
    FUN_147fd2e2c(*(undefined8 *)param_1[1],1,local_c8);
    if (local_c8[0] != (longlong *)0x0) {
      (**(code **)(*local_c8[0] + 0x10))();
    }
    if (local_110[0] != (longlong *)0x0) {
      (**(code **)(*local_110[0] + 0x10))();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148006676 FUN_148006676 body=334 status=ok
// SIG undefined FUN_148006676(void)

undefined8 FUN_148006676(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)(param_1 + 8);
  local_20 = param_2;
  local_18 = param_3;
  if (*(int *)(lVar2 + 0x28) != *(int *)(lVar2 + 0x54)) {
    uVar3 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    uVar4 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    uVar4 = uVar4 >> 0x10 ^ uVar4;
    lVar7 = lVar2 + 0x58;
    if (*(longlong *)(lVar2 + 0x60) != 0) {
      lVar7 = *(longlong *)(lVar2 + 0x60);
    }
    iVar6 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(lVar2 + 0x68) - 1U &
                             (uVar4 * 0x40 + (uVar3 >> 0x10 ^ uVar3) + (uVar4 >> 2) + 0x9e3779b9 ^
                             uVar4)) * 4);
    if (iVar6 != -1) {
      lVar7 = *(longlong *)(lVar2 + 0x20);
      uVar5 = 0;
      do {
        lVar8 = (longlong)iVar6 * 0x20;
        lVar1 = lVar7 + lVar8;
        if ((*(ulonglong *)(lVar7 + lVar8) == param_2) &&
           (*(ulonglong *)(lVar7 + 8 + lVar8) == param_3)) {
          if ((undefined8 *)(lVar1 + 0x10) == (undefined8 *)0x0 || lVar1 == 0) goto LAB_1480066a0;
          uVar5 = *(undefined8 *)(lVar1 + 0x10);
          FUN_148005ef8((longlong *)(lVar2 + 0x20),&local_20);
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x18);
      } while (iVar6 != -1);
      goto LAB_1480066a2;
    }
  }
LAB_1480066a0:
  uVar5 = 0;
LAB_1480066a2:
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1480067c5 FUN_1480067c5 body=131 status=ok
// SIG undefined FUN_1480067c5(void)

void FUN_1480067c5(undefined8 param_1,longlong param_2,int *param_3,undefined8 param_4)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = FUN_148006848(param_1,param_2 + 0x40,param_4);
  if (*(int *)(lVar2 + 0x40) != *param_3) {
    *(int *)(lVar2 + 0x40) = *param_3;
  }
  FUN_14800628c(param_1,param_2,lVar2);
  if (lVar2 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar2);
  }
  bVar1 = DAT_14c950c29;
  *(longlong *)(param_2 + 0x60) = lVar2;
  if ((lVar2 != 0) && ((bVar1 & 1) != 0)) {
    FUN_1456cec3c(lVar2);
  }
  *(longlong *)(param_3 + 2) = lVar2;
  return;
}



// FUNCTION 148006848 FUN_148006848 body=597 status=ok
// SIG undefined FUN_148006848(void)

longlong * FUN_148006848(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  void *_Src;
  undefined2 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  void *local_d0;
  int local_c8;
  undefined4 local_c4;
  undefined1 local_c0 [16];
  longlong *local_b0;
  ulonglong *local_a8;
  undefined2 *local_a0;
  int local_98;
  undefined2 *local_90;
  int local_88;
  longlong local_80 [4];
  undefined1 local_60 [32];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_80[0] = *(longlong *)(*param_1 + 0x18);
  FUN_1400021e4(local_80,local_c0);
  FUN_14146ec20(local_80,local_c0);
  local_d0 = (void *)0x0;
  local_c8 = *(int *)(param_2 + 1);
  lVar3 = (longlong)local_c8;
  _Src = (void *)*param_2;
  if (lVar3 == 0) {
    local_c4 = 0;
  }
  else {
    FUN_1446dd670(&local_d0,local_c8,0);
    memcpy(local_d0,_Src,lVar3 * 2);
  }
  FUN_14146ec20(local_60,&local_d0);
  local_a8 = &local_40;
  local_b0 = local_80;
  FUN_1407adb6e(&local_a0);
  FUN_140230a2e(&local_90,L"Override_{0}_{1}",&local_a0);
  FUN_1407adb3e(local_a0,local_98);
  if (local_a0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  lVar3 = 0x40;
  do {
    if (*(longlong *)((longlong)&local_90 + lVar3) != 0) {
      FUN_1400020a8();
    }
    lVar3 = lVar3 + -0x20;
  } while (lVar3 != 0);
  if (param_3 == (longlong *)0x0) {
    puVar1 = local_90;
    if (local_88 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_d8,puVar1,1);
    param_3 = (longlong *)FUN_148006a9e(*param_1,local_d8);
  }
  else {
    local_a0 = (undefined2 *)param_3[3];
    FUN_1400021e4(&local_a0,local_80);
    FUN_1400b22c2(&local_a0,"REUSABLE_");
    iVar2 = local_98 + -1;
    puVar1 = local_a0;
    if (local_98 == 0) {
      puVar1 = &DAT_149dfb77a;
      iVar2 = 0;
    }
    FUN_140c540b4(local_80,puVar1,iVar2,0);
    if (local_a0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    puVar1 = local_90;
    if (local_88 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    (**(code **)(*param_3 + 0x170))(param_3,puVar1,0,0x20);
    if (local_80[0] != 0) {
      FUN_1400020a8();
    }
  }
  *(undefined1 *)((longlong)param_3 + 0x2a) = 1;
  *(undefined2 *)(param_3 + 5) = 0x100;
  if (local_90 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148006a9e FUN_148006a9e body=183 status=ok
// SIG undefined FUN_148006a9e(void)

undefined8 FUN_148006a9e(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_1458bc43e();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 8;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148006b56 FUN_148006b56 body=641 status=ok
// SIG undefined FUN_148006b56(void)

void FUN_148006b56(longlong *param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_138 [32];
  undefined1 local_118 [4];
  undefined1 local_114 [4];
  longlong *local_110 [2];
  undefined8 local_100;
  longlong *local_f8;
  undefined8 local_f0;
  longlong *local_e8 [2];
  longlong *local_d8 [2];
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  wchar_t **local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80 [2];
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((*(longlong *)(param_3 + 8) != 0) &&
     (*(longlong *)(*(longlong *)(param_3 + 8) + 0x20) != *param_1)) {
    FUN_145715fae(local_d8,param_2 + 0x38);
    local_f0 = *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 0x18);
    FUN_145715fae(local_e8);
    local_88 = L"CameraParameterDrivenTwice";
    local_80[0] = 0x1a;
    FUN_1446e940c(local_114,&local_88);
    local_88 = L"CameraRigAssetBuilder";
    local_80[0] = 0x15;
    FUN_1446e940c(local_118,&local_88);
    FUN_140208bae(local_110,local_118,local_114,
                  L"Camera node parameter \'{0}.{1}\' is both exposed and driven by a variable!");
    FUN_14023409e(&local_100,local_110,1);
    local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
    FUN_14023423e(local_78,local_e8);
    local_68 = 4;
    FUN_14023423e(local_58,local_d8);
    local_a0 = &local_48;
    local_a8 = &local_88;
    FUN_14010d304(&local_98);
    local_b8 = local_100;
    local_b0 = local_f8;
    if (local_f8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_f8 + 1) = (int)local_f8[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_c8,&local_b8,&local_98);
    FUN_14007f2db(local_98,local_90);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    lVar3 = 0x30;
    do {
      plVar2 = *(longlong **)((longlong)local_80 + lVar3 + -8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))();
        *(undefined8 *)((longlong)local_80 + lVar3 + -8) = 0;
        *(undefined4 *)((longlong)local_80 + lVar3) = 0;
      }
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != -0x10);
    if (local_f8 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_f8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_f8)(local_f8);
        LOCK();
        piVar1 = (int *)((longlong)local_f8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_f8 + 0x10))(local_f8);
        }
      }
    }
    if (local_e8[0] != (longlong *)0x0) {
      (**(code **)(*local_e8[0] + 0x10))();
    }
    if (local_d8[0] != (longlong *)0x0) {
      (**(code **)(*local_d8[0] + 0x10))();
    }
    FUN_147fd2e2c(*(undefined8 *)param_1[1],1,local_c8);
    if (local_c8[0] != (longlong *)0x0) {
      (**(code **)(*local_c8[0] + 0x10))();
    }
    if (local_110[0] != (longlong *)0x0) {
      (**(code **)(*local_110[0] + 0x10))();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148006dd8 FUN_148006dd8 body=334 status=ok
// SIG undefined FUN_148006dd8(void)

undefined8 FUN_148006dd8(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)(param_1 + 8);
  local_20 = param_2;
  local_18 = param_3;
  if (*(int *)(lVar2 + 0x28) != *(int *)(lVar2 + 0x54)) {
    uVar3 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    uVar4 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    uVar4 = uVar4 >> 0x10 ^ uVar4;
    lVar7 = lVar2 + 0x58;
    if (*(longlong *)(lVar2 + 0x60) != 0) {
      lVar7 = *(longlong *)(lVar2 + 0x60);
    }
    iVar6 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(lVar2 + 0x68) - 1U &
                             (uVar4 * 0x40 + (uVar3 >> 0x10 ^ uVar3) + (uVar4 >> 2) + 0x9e3779b9 ^
                             uVar4)) * 4);
    if (iVar6 != -1) {
      lVar7 = *(longlong *)(lVar2 + 0x20);
      uVar5 = 0;
      do {
        lVar8 = (longlong)iVar6 * 0x20;
        lVar1 = lVar7 + lVar8;
        if ((*(ulonglong *)(lVar7 + lVar8) == param_2) &&
           (*(ulonglong *)(lVar7 + 8 + lVar8) == param_3)) {
          if ((undefined8 *)(lVar1 + 0x10) == (undefined8 *)0x0 || lVar1 == 0) goto LAB_148006e02;
          uVar5 = *(undefined8 *)(lVar1 + 0x10);
          FUN_148005ef8((longlong *)(lVar2 + 0x20),&local_20);
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x18);
      } while (iVar6 != -1);
      goto LAB_148006e04;
    }
  }
LAB_148006e02:
  uVar5 = 0;
LAB_148006e04:
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 148006f27 FUN_148006f27 body=142 status=ok
// SIG undefined FUN_148006f27(void)

void FUN_148006f27(undefined8 param_1,longlong param_2,float *param_3,undefined8 param_4)

{
  float fVar1;
  byte bVar2;
  longlong lVar3;
  
  lVar3 = FUN_148006fb5(param_1,param_2 + 0x40,param_4);
  fVar1 = *param_3;
  if ((*(float *)(lVar3 + 0x40) != fVar1) || (NAN(*(float *)(lVar3 + 0x40)) || NAN(fVar1))) {
    *(float *)(lVar3 + 0x40) = fVar1;
  }
  FUN_14800628c(param_1,param_2,lVar3);
  if (lVar3 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar3);
  }
  bVar2 = DAT_14c950c29;
  *(longlong *)(param_2 + 0x60) = lVar3;
  if ((lVar3 != 0) && ((bVar2 & 1) != 0)) {
    FUN_1456cec3c(lVar3);
  }
  *(longlong *)(param_3 + 2) = lVar3;
  return;
}



// FUNCTION 148006fb5 FUN_148006fb5 body=597 status=ok
// SIG undefined FUN_148006fb5(void)

longlong * FUN_148006fb5(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  void *_Src;
  undefined2 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  void *local_d0;
  int local_c8;
  undefined4 local_c4;
  undefined1 local_c0 [16];
  longlong *local_b0;
  ulonglong *local_a8;
  undefined2 *local_a0;
  int local_98;
  undefined2 *local_90;
  int local_88;
  longlong local_80 [4];
  undefined1 local_60 [32];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_80[0] = *(longlong *)(*param_1 + 0x18);
  FUN_1400021e4(local_80,local_c0);
  FUN_14146ec20(local_80,local_c0);
  local_d0 = (void *)0x0;
  local_c8 = *(int *)(param_2 + 1);
  lVar3 = (longlong)local_c8;
  _Src = (void *)*param_2;
  if (lVar3 == 0) {
    local_c4 = 0;
  }
  else {
    FUN_1446dd670(&local_d0,local_c8,0);
    memcpy(local_d0,_Src,lVar3 * 2);
  }
  FUN_14146ec20(local_60,&local_d0);
  local_a8 = &local_40;
  local_b0 = local_80;
  FUN_1407adb6e(&local_a0);
  FUN_140230a2e(&local_90,L"Override_{0}_{1}",&local_a0);
  FUN_1407adb3e(local_a0,local_98);
  if (local_a0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  lVar3 = 0x40;
  do {
    if (*(longlong *)((longlong)&local_90 + lVar3) != 0) {
      FUN_1400020a8();
    }
    lVar3 = lVar3 + -0x20;
  } while (lVar3 != 0);
  if (param_3 == (longlong *)0x0) {
    puVar1 = local_90;
    if (local_88 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_d8,puVar1,1);
    param_3 = (longlong *)FUN_14800720b(*param_1,local_d8);
  }
  else {
    local_a0 = (undefined2 *)param_3[3];
    FUN_1400021e4(&local_a0,local_80);
    FUN_1400b22c2(&local_a0,"REUSABLE_");
    iVar2 = local_98 + -1;
    puVar1 = local_a0;
    if (local_98 == 0) {
      puVar1 = &DAT_149dfb77a;
      iVar2 = 0;
    }
    FUN_140c540b4(local_80,puVar1,iVar2,0);
    if (local_a0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    puVar1 = local_90;
    if (local_88 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    (**(code **)(*param_3 + 0x170))(param_3,puVar1,0,0x20);
    if (local_80[0] != 0) {
      FUN_1400020a8();
    }
  }
  *(undefined1 *)((longlong)param_3 + 0x2a) = 1;
  *(undefined2 *)(param_3 + 5) = 0x100;
  if (local_90 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14800720b FUN_14800720b body=183 status=ok
// SIG undefined FUN_14800720b(void)

undefined8 FUN_14800720b(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_1458bc528();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 8;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480072c3 FUN_1480072c3 body=641 status=ok
// SIG undefined FUN_1480072c3(void)

void FUN_1480072c3(longlong *param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_138 [32];
  undefined1 local_118 [4];
  undefined1 local_114 [4];
  longlong *local_110 [2];
  undefined8 local_100;
  longlong *local_f8;
  undefined8 local_f0;
  longlong *local_e8 [2];
  longlong *local_d8 [2];
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  wchar_t **local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80 [2];
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((*(longlong *)(param_3 + 8) != 0) &&
     (*(longlong *)(*(longlong *)(param_3 + 8) + 0x20) != *param_1)) {
    FUN_145715fae(local_d8,param_2 + 0x38);
    local_f0 = *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 0x18);
    FUN_145715fae(local_e8);
    local_88 = L"CameraParameterDrivenTwice";
    local_80[0] = 0x1a;
    FUN_1446e940c(local_114,&local_88);
    local_88 = L"CameraRigAssetBuilder";
    local_80[0] = 0x15;
    FUN_1446e940c(local_118,&local_88);
    FUN_140208bae(local_110,local_118,local_114,
                  L"Camera node parameter \'{0}.{1}\' is both exposed and driven by a variable!");
    FUN_14023409e(&local_100,local_110,1);
    local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
    FUN_14023423e(local_78,local_e8);
    local_68 = 4;
    FUN_14023423e(local_58,local_d8);
    local_a0 = &local_48;
    local_a8 = &local_88;
    FUN_14010d304(&local_98);
    local_b8 = local_100;
    local_b0 = local_f8;
    if (local_f8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_f8 + 1) = (int)local_f8[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_c8,&local_b8,&local_98);
    FUN_14007f2db(local_98,local_90);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    lVar3 = 0x30;
    do {
      plVar2 = *(longlong **)((longlong)local_80 + lVar3 + -8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))();
        *(undefined8 *)((longlong)local_80 + lVar3 + -8) = 0;
        *(undefined4 *)((longlong)local_80 + lVar3) = 0;
      }
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != -0x10);
    if (local_f8 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_f8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_f8)(local_f8);
        LOCK();
        piVar1 = (int *)((longlong)local_f8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_f8 + 0x10))(local_f8);
        }
      }
    }
    if (local_e8[0] != (longlong *)0x0) {
      (**(code **)(*local_e8[0] + 0x10))();
    }
    if (local_d8[0] != (longlong *)0x0) {
      (**(code **)(*local_d8[0] + 0x10))();
    }
    FUN_147fd2e2c(*(undefined8 *)param_1[1],1,local_c8);
    if (local_c8[0] != (longlong *)0x0) {
      (**(code **)(*local_c8[0] + 0x10))();
    }
    if (local_110[0] != (longlong *)0x0) {
      (**(code **)(*local_110[0] + 0x10))();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148007546 FUN_148007546 body=334 status=ok
// SIG undefined FUN_148007546(void)

undefined8 FUN_148007546(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)(param_1 + 8);
  local_20 = param_2;
  local_18 = param_3;
  if (*(int *)(lVar2 + 0x28) != *(int *)(lVar2 + 0x54)) {
    uVar3 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    uVar4 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    uVar4 = uVar4 >> 0x10 ^ uVar4;
    lVar7 = lVar2 + 0x58;
    if (*(longlong *)(lVar2 + 0x60) != 0) {
      lVar7 = *(longlong *)(lVar2 + 0x60);
    }
    iVar6 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(lVar2 + 0x68) - 1U &
                             (uVar4 * 0x40 + (uVar3 >> 0x10 ^ uVar3) + (uVar4 >> 2) + 0x9e3779b9 ^
                             uVar4)) * 4);
    if (iVar6 != -1) {
      lVar7 = *(longlong *)(lVar2 + 0x20);
      uVar5 = 0;
      do {
        lVar8 = (longlong)iVar6 * 0x20;
        lVar1 = lVar7 + lVar8;
        if ((*(ulonglong *)(lVar7 + lVar8) == param_2) &&
           (*(ulonglong *)(lVar7 + 8 + lVar8) == param_3)) {
          if ((undefined8 *)(lVar1 + 0x10) == (undefined8 *)0x0 || lVar1 == 0) goto LAB_148007570;
          uVar5 = *(undefined8 *)(lVar1 + 0x10);
          FUN_148005ef8((longlong *)(lVar2 + 0x20),&local_20);
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x18);
      } while (iVar6 != -1);
      goto LAB_148007572;
    }
  }
LAB_148007570:
  uVar5 = 0;
LAB_148007572:
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 148007695 FUN_148007695 body=143 status=ok
// SIG undefined FUN_148007695(void)

void FUN_148007695(undefined8 param_1,longlong param_2,double *param_3,undefined8 param_4)

{
  double dVar1;
  byte bVar2;
  double dVar3;
  
  dVar3 = (double)FUN_148007724(param_1,param_2 + 0x40,param_4);
  dVar1 = *param_3;
  if ((*(double *)((longlong)dVar3 + 0x40) != dVar1) ||
     (NAN(*(double *)((longlong)dVar3 + 0x40)) || NAN(dVar1))) {
    *(double *)((longlong)dVar3 + 0x40) = dVar1;
  }
  FUN_14800628c(param_1,param_2,dVar3);
  if (dVar3 != 0.0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(dVar3);
  }
  bVar2 = DAT_14c950c29;
  *(double *)(param_2 + 0x60) = dVar3;
  if ((dVar3 != 0.0) && ((bVar2 & 1) != 0)) {
    FUN_1456cec3c(dVar3);
  }
  param_3[1] = dVar3;
  return;
}



// FUNCTION 148007724 FUN_148007724 body=597 status=ok
// SIG undefined FUN_148007724(void)

longlong * FUN_148007724(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  void *_Src;
  undefined2 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  void *local_d0;
  int local_c8;
  undefined4 local_c4;
  undefined1 local_c0 [16];
  longlong *local_b0;
  ulonglong *local_a8;
  undefined2 *local_a0;
  int local_98;
  undefined2 *local_90;
  int local_88;
  longlong local_80 [4];
  undefined1 local_60 [32];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_80[0] = *(longlong *)(*param_1 + 0x18);
  FUN_1400021e4(local_80,local_c0);
  FUN_14146ec20(local_80,local_c0);
  local_d0 = (void *)0x0;
  local_c8 = *(int *)(param_2 + 1);
  lVar3 = (longlong)local_c8;
  _Src = (void *)*param_2;
  if (lVar3 == 0) {
    local_c4 = 0;
  }
  else {
    FUN_1446dd670(&local_d0,local_c8,0);
    memcpy(local_d0,_Src,lVar3 * 2);
  }
  FUN_14146ec20(local_60,&local_d0);
  local_a8 = &local_40;
  local_b0 = local_80;
  FUN_1407adb6e(&local_a0);
  FUN_140230a2e(&local_90,L"Override_{0}_{1}",&local_a0);
  FUN_1407adb3e(local_a0,local_98);
  if (local_a0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  lVar3 = 0x40;
  do {
    if (*(longlong *)((longlong)&local_90 + lVar3) != 0) {
      FUN_1400020a8();
    }
    lVar3 = lVar3 + -0x20;
  } while (lVar3 != 0);
  if (param_3 == (longlong *)0x0) {
    puVar1 = local_90;
    if (local_88 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_d8,puVar1,1);
    param_3 = (longlong *)FUN_14800797a(*param_1,local_d8);
  }
  else {
    local_a0 = (undefined2 *)param_3[3];
    FUN_1400021e4(&local_a0,local_80);
    FUN_1400b22c2(&local_a0,"REUSABLE_");
    iVar2 = local_98 + -1;
    puVar1 = local_a0;
    if (local_98 == 0) {
      puVar1 = &DAT_149dfb77a;
      iVar2 = 0;
    }
    FUN_140c540b4(local_80,puVar1,iVar2,0);
    if (local_a0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    puVar1 = local_90;
    if (local_88 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    (**(code **)(*param_3 + 0x170))(param_3,puVar1,0,0x20);
    if (local_80[0] != 0) {
      FUN_1400020a8();
    }
  }
  *(undefined1 *)((longlong)param_3 + 0x2a) = 1;
  *(undefined2 *)(param_3 + 5) = 0x100;
  if (local_90 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14800797a FUN_14800797a body=183 status=ok
// SIG undefined FUN_14800797a(void)

undefined8 FUN_14800797a(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_1458bc612();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 8;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148007a32 FUN_148007a32 body=641 status=ok
// SIG undefined FUN_148007a32(void)

void FUN_148007a32(longlong *param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_138 [32];
  undefined1 local_118 [4];
  undefined1 local_114 [4];
  longlong *local_110 [2];
  undefined8 local_100;
  longlong *local_f8;
  undefined8 local_f0;
  longlong *local_e8 [2];
  longlong *local_d8 [2];
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  wchar_t **local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80 [2];
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((*(longlong *)(param_3 + 8) != 0) &&
     (*(longlong *)(*(longlong *)(param_3 + 8) + 0x20) != *param_1)) {
    FUN_145715fae(local_d8,param_2 + 0x38);
    local_f0 = *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 0x18);
    FUN_145715fae(local_e8);
    local_88 = L"CameraParameterDrivenTwice";
    local_80[0] = 0x1a;
    FUN_1446e940c(local_114,&local_88);
    local_88 = L"CameraRigAssetBuilder";
    local_80[0] = 0x15;
    FUN_1446e940c(local_118,&local_88);
    FUN_140208bae(local_110,local_118,local_114,
                  L"Camera node parameter \'{0}.{1}\' is both exposed and driven by a variable!");
    FUN_14023409e(&local_100,local_110,1);
    local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
    FUN_14023423e(local_78,local_e8);
    local_68 = 4;
    FUN_14023423e(local_58,local_d8);
    local_a0 = &local_48;
    local_a8 = &local_88;
    FUN_14010d304(&local_98);
    local_b8 = local_100;
    local_b0 = local_f8;
    if (local_f8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_f8 + 1) = (int)local_f8[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_c8,&local_b8,&local_98);
    FUN_14007f2db(local_98,local_90);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    lVar3 = 0x30;
    do {
      plVar2 = *(longlong **)((longlong)local_80 + lVar3 + -8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))();
        *(undefined8 *)((longlong)local_80 + lVar3 + -8) = 0;
        *(undefined4 *)((longlong)local_80 + lVar3) = 0;
      }
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != -0x10);
    if (local_f8 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_f8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_f8)(local_f8);
        LOCK();
        piVar1 = (int *)((longlong)local_f8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_f8 + 0x10))(local_f8);
        }
      }
    }
    if (local_e8[0] != (longlong *)0x0) {
      (**(code **)(*local_e8[0] + 0x10))();
    }
    if (local_d8[0] != (longlong *)0x0) {
      (**(code **)(*local_d8[0] + 0x10))();
    }
    FUN_147fd2e2c(*(undefined8 *)param_1[1],1,local_c8);
    if (local_c8[0] != (longlong *)0x0) {
      (**(code **)(*local_c8[0] + 0x10))();
    }
    if (local_110[0] != (longlong *)0x0) {
      (**(code **)(*local_110[0] + 0x10))();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148007cb4 FUN_148007cb4 body=334 status=ok
// SIG undefined FUN_148007cb4(void)

undefined8 FUN_148007cb4(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)(param_1 + 8);
  local_20 = param_2;
  local_18 = param_3;
  if (*(int *)(lVar2 + 0x28) != *(int *)(lVar2 + 0x54)) {
    uVar3 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    uVar4 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    uVar4 = uVar4 >> 0x10 ^ uVar4;
    lVar7 = lVar2 + 0x58;
    if (*(longlong *)(lVar2 + 0x60) != 0) {
      lVar7 = *(longlong *)(lVar2 + 0x60);
    }
    iVar6 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(lVar2 + 0x68) - 1U &
                             (uVar4 * 0x40 + (uVar3 >> 0x10 ^ uVar3) + (uVar4 >> 2) + 0x9e3779b9 ^
                             uVar4)) * 4);
    if (iVar6 != -1) {
      lVar7 = *(longlong *)(lVar2 + 0x20);
      uVar5 = 0;
      do {
        lVar8 = (longlong)iVar6 * 0x20;
        lVar1 = lVar7 + lVar8;
        if ((*(ulonglong *)(lVar7 + lVar8) == param_2) &&
           (*(ulonglong *)(lVar7 + 8 + lVar8) == param_3)) {
          if ((undefined8 *)(lVar1 + 0x10) == (undefined8 *)0x0 || lVar1 == 0) goto LAB_148007cde;
          uVar5 = *(undefined8 *)(lVar1 + 0x10);
          FUN_148005ef8((longlong *)(lVar2 + 0x20),&local_20);
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x18);
      } while (iVar6 != -1);
      goto LAB_148007ce0;
    }
  }
LAB_148007cde:
  uVar5 = 0;
LAB_148007ce0:
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 148007e03 FUN_148007e03 body=169 status=ok
// SIG undefined FUN_148007e03(void)

void FUN_148007e03(undefined8 param_1,longlong param_2,undefined8 *param_3,undefined8 param_4)

{
  byte bVar1;
  float fVar2;
  longlong lVar3;
  float fVar4;
  
  lVar3 = FUN_148007eac(param_1,param_2 + 0x40,param_4);
  fVar2 = (float)*param_3;
  fVar4 = (float)((ulonglong)*param_3 >> 0x20);
  if ((*(float *)(lVar3 + 0x40) == fVar2) && (!NAN(*(float *)(lVar3 + 0x40)) && !NAN(fVar2))) {
    if ((*(float *)(lVar3 + 0x44) == fVar4) && (!NAN(*(float *)(lVar3 + 0x44)) && !NAN(fVar4)))
    goto LAB_148007e54;
  }
  *(float *)(lVar3 + 0x40) = fVar2;
  *(float *)(lVar3 + 0x44) = fVar4;
LAB_148007e54:
  FUN_14800628c(param_1,param_2,lVar3);
  if (lVar3 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar3);
  }
  bVar1 = DAT_14c950c29;
  *(longlong *)(param_2 + 0x60) = lVar3;
  if ((lVar3 != 0) && ((bVar1 & 1) != 0)) {
    FUN_1456cec3c(lVar3);
  }
  param_3[1] = lVar3;
  return;
}



// FUNCTION 148007eac FUN_148007eac body=597 status=ok
// SIG undefined FUN_148007eac(void)

longlong * FUN_148007eac(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  void *_Src;
  undefined2 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  void *local_d0;
  int local_c8;
  undefined4 local_c4;
  undefined1 local_c0 [16];
  longlong *local_b0;
  ulonglong *local_a8;
  undefined2 *local_a0;
  int local_98;
  undefined2 *local_90;
  int local_88;
  longlong local_80 [4];
  undefined1 local_60 [32];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_80[0] = *(longlong *)(*param_1 + 0x18);
  FUN_1400021e4(local_80,local_c0);
  FUN_14146ec20(local_80,local_c0);
  local_d0 = (void *)0x0;
  local_c8 = *(int *)(param_2 + 1);
  lVar3 = (longlong)local_c8;
  _Src = (void *)*param_2;
  if (lVar3 == 0) {
    local_c4 = 0;
  }
  else {
    FUN_1446dd670(&local_d0,local_c8,0);
    memcpy(local_d0,_Src,lVar3 * 2);
  }
  FUN_14146ec20(local_60,&local_d0);
  local_a8 = &local_40;
  local_b0 = local_80;
  FUN_1407adb6e(&local_a0);
  FUN_140230a2e(&local_90,L"Override_{0}_{1}",&local_a0);
  FUN_1407adb3e(local_a0,local_98);
  if (local_a0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  lVar3 = 0x40;
  do {
    if (*(longlong *)((longlong)&local_90 + lVar3) != 0) {
      FUN_1400020a8();
    }
    lVar3 = lVar3 + -0x20;
  } while (lVar3 != 0);
  if (param_3 == (longlong *)0x0) {
    puVar1 = local_90;
    if (local_88 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_d8,puVar1,1);
    param_3 = (longlong *)FUN_148008102(*param_1,local_d8);
  }
  else {
    local_a0 = (undefined2 *)param_3[3];
    FUN_1400021e4(&local_a0,local_80);
    FUN_1400b22c2(&local_a0,"REUSABLE_");
    iVar2 = local_98 + -1;
    puVar1 = local_a0;
    if (local_98 == 0) {
      puVar1 = &DAT_149dfb77a;
      iVar2 = 0;
    }
    FUN_140c540b4(local_80,puVar1,iVar2,0);
    if (local_a0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    puVar1 = local_90;
    if (local_88 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    (**(code **)(*param_3 + 0x170))(param_3,puVar1,0,0x20);
    if (local_80[0] != 0) {
      FUN_1400020a8();
    }
  }
  *(undefined1 *)((longlong)param_3 + 0x2a) = 1;
  *(undefined2 *)(param_3 + 5) = 0x100;
  if (local_90 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148008102 FUN_148008102 body=183 status=ok
// SIG undefined FUN_148008102(void)

undefined8 FUN_148008102(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_14595aac2();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 8;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480081ba FUN_1480081ba body=641 status=ok
// SIG undefined FUN_1480081ba(void)

void FUN_1480081ba(longlong *param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_138 [32];
  undefined1 local_118 [4];
  undefined1 local_114 [4];
  longlong *local_110 [2];
  undefined8 local_100;
  longlong *local_f8;
  undefined8 local_f0;
  longlong *local_e8 [2];
  longlong *local_d8 [2];
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  wchar_t **local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80 [2];
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((*(longlong *)(param_3 + 0x10) != 0) &&
     (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x20) != *param_1)) {
    FUN_145715fae(local_d8,param_2 + 0x38);
    local_f0 = *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 0x18);
    FUN_145715fae(local_e8);
    local_88 = L"CameraParameterDrivenTwice";
    local_80[0] = 0x1a;
    FUN_1446e940c(local_114,&local_88);
    local_88 = L"CameraRigAssetBuilder";
    local_80[0] = 0x15;
    FUN_1446e940c(local_118,&local_88);
    FUN_140208bae(local_110,local_118,local_114,
                  L"Camera node parameter \'{0}.{1}\' is both exposed and driven by a variable!");
    FUN_14023409e(&local_100,local_110,1);
    local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
    FUN_14023423e(local_78,local_e8);
    local_68 = 4;
    FUN_14023423e(local_58,local_d8);
    local_a0 = &local_48;
    local_a8 = &local_88;
    FUN_14010d304(&local_98);
    local_b8 = local_100;
    local_b0 = local_f8;
    if (local_f8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_f8 + 1) = (int)local_f8[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_c8,&local_b8,&local_98);
    FUN_14007f2db(local_98,local_90);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    lVar3 = 0x30;
    do {
      plVar2 = *(longlong **)((longlong)local_80 + lVar3 + -8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))();
        *(undefined8 *)((longlong)local_80 + lVar3 + -8) = 0;
        *(undefined4 *)((longlong)local_80 + lVar3) = 0;
      }
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != -0x10);
    if (local_f8 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_f8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_f8)(local_f8);
        LOCK();
        piVar1 = (int *)((longlong)local_f8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_f8 + 0x10))(local_f8);
        }
      }
    }
    if (local_e8[0] != (longlong *)0x0) {
      (**(code **)(*local_e8[0] + 0x10))();
    }
    if (local_d8[0] != (longlong *)0x0) {
      (**(code **)(*local_d8[0] + 0x10))();
    }
    FUN_147fd2e2c(*(undefined8 *)param_1[1],1,local_c8);
    if (local_c8[0] != (longlong *)0x0) {
      (**(code **)(*local_c8[0] + 0x10))();
    }
    if (local_110[0] != (longlong *)0x0) {
      (**(code **)(*local_110[0] + 0x10))();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14800843c FUN_14800843c body=334 status=ok
// SIG undefined FUN_14800843c(void)

undefined8 FUN_14800843c(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)(param_1 + 8);
  local_20 = param_2;
  local_18 = param_3;
  if (*(int *)(lVar2 + 0x28) != *(int *)(lVar2 + 0x54)) {
    uVar3 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    uVar4 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    uVar4 = uVar4 >> 0x10 ^ uVar4;
    lVar7 = lVar2 + 0x58;
    if (*(longlong *)(lVar2 + 0x60) != 0) {
      lVar7 = *(longlong *)(lVar2 + 0x60);
    }
    iVar6 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(lVar2 + 0x68) - 1U &
                             (uVar4 * 0x40 + (uVar3 >> 0x10 ^ uVar3) + (uVar4 >> 2) + 0x9e3779b9 ^
                             uVar4)) * 4);
    if (iVar6 != -1) {
      lVar7 = *(longlong *)(lVar2 + 0x20);
      uVar5 = 0;
      do {
        lVar8 = (longlong)iVar6 * 0x20;
        lVar1 = lVar7 + lVar8;
        if ((*(ulonglong *)(lVar7 + lVar8) == param_2) &&
           (*(ulonglong *)(lVar7 + 8 + lVar8) == param_3)) {
          if ((undefined8 *)(lVar1 + 0x10) == (undefined8 *)0x0 || lVar1 == 0) goto LAB_148008466;
          uVar5 = *(undefined8 *)(lVar1 + 0x10);
          FUN_148005ef8((longlong *)(lVar2 + 0x20),&local_20);
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x18);
      } while (iVar6 != -1);
      goto LAB_148008468;
    }
  }
LAB_148008466:
  uVar5 = 0;
LAB_148008468:
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 14800858b FUN_14800858b body=160 status=ok
// SIG undefined FUN_14800858b(void)

void FUN_14800858b(undefined8 param_1,longlong param_2,double *param_3,undefined8 param_4)

{
  double dVar1;
  byte bVar2;
  double dVar3;
  
  dVar3 = (double)FUN_14800862b(param_1,param_2 + 0x40,param_4);
  if ((*(double *)((longlong)dVar3 + 0x40) == *param_3) &&
     (!NAN(*(double *)((longlong)dVar3 + 0x40)) && !NAN(*param_3))) {
    if ((*(double *)((longlong)dVar3 + 0x48) == param_3[1]) &&
       (!NAN(*(double *)((longlong)dVar3 + 0x48)) && !NAN(param_3[1]))) goto LAB_1480085d3;
  }
  dVar1 = param_3[1];
  *(double *)((longlong)dVar3 + 0x40) = *param_3;
  *(double *)((longlong)dVar3 + 0x48) = dVar1;
LAB_1480085d3:
  FUN_14800628c(param_1,param_2,dVar3);
  if (dVar3 != 0.0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(dVar3);
  }
  bVar2 = DAT_14c950c29;
  *(double *)(param_2 + 0x60) = dVar3;
  if ((dVar3 != 0.0) && ((bVar2 & 1) != 0)) {
    FUN_1456cec3c(dVar3);
  }
  param_3[2] = dVar3;
  return;
}



// FUNCTION 14800862b FUN_14800862b body=597 status=ok
// SIG undefined FUN_14800862b(void)

longlong * FUN_14800862b(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  void *_Src;
  undefined2 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  void *local_d0;
  int local_c8;
  undefined4 local_c4;
  undefined1 local_c0 [16];
  longlong *local_b0;
  ulonglong *local_a8;
  undefined2 *local_a0;
  int local_98;
  undefined2 *local_90;
  int local_88;
  longlong local_80 [4];
  undefined1 local_60 [32];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_80[0] = *(longlong *)(*param_1 + 0x18);
  FUN_1400021e4(local_80,local_c0);
  FUN_14146ec20(local_80,local_c0);
  local_d0 = (void *)0x0;
  local_c8 = *(int *)(param_2 + 1);
  lVar3 = (longlong)local_c8;
  _Src = (void *)*param_2;
  if (lVar3 == 0) {
    local_c4 = 0;
  }
  else {
    FUN_1446dd670(&local_d0,local_c8,0);
    memcpy(local_d0,_Src,lVar3 * 2);
  }
  FUN_14146ec20(local_60,&local_d0);
  local_a8 = &local_40;
  local_b0 = local_80;
  FUN_1407adb6e(&local_a0);
  FUN_140230a2e(&local_90,L"Override_{0}_{1}",&local_a0);
  FUN_1407adb3e(local_a0,local_98);
  if (local_a0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  lVar3 = 0x40;
  do {
    if (*(longlong *)((longlong)&local_90 + lVar3) != 0) {
      FUN_1400020a8();
    }
    lVar3 = lVar3 + -0x20;
  } while (lVar3 != 0);
  if (param_3 == (longlong *)0x0) {
    puVar1 = local_90;
    if (local_88 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_d8,puVar1,1);
    param_3 = (longlong *)FUN_148008881(*param_1,local_d8);
  }
  else {
    local_a0 = (undefined2 *)param_3[3];
    FUN_1400021e4(&local_a0,local_80);
    FUN_1400b22c2(&local_a0,"REUSABLE_");
    iVar2 = local_98 + -1;
    puVar1 = local_a0;
    if (local_98 == 0) {
      puVar1 = &DAT_149dfb77a;
      iVar2 = 0;
    }
    FUN_140c540b4(local_80,puVar1,iVar2,0);
    if (local_a0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    puVar1 = local_90;
    if (local_88 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    (**(code **)(*param_3 + 0x170))(param_3,puVar1,0,0x20);
    if (local_80[0] != 0) {
      FUN_1400020a8();
    }
  }
  *(undefined1 *)((longlong)param_3 + 0x2a) = 1;
  *(undefined2 *)(param_3 + 5) = 0x100;
  if (local_90 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148008881 FUN_148008881 body=183 status=ok
// SIG undefined FUN_148008881(void)

undefined8 FUN_148008881(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_1458bc6fc();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 8;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148008939 FUN_148008939 body=641 status=ok
// SIG undefined FUN_148008939(void)

void FUN_148008939(longlong *param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_138 [32];
  undefined1 local_118 [4];
  undefined1 local_114 [4];
  longlong *local_110 [2];
  undefined8 local_100;
  longlong *local_f8;
  undefined8 local_f0;
  longlong *local_e8 [2];
  longlong *local_d8 [2];
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  wchar_t **local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80 [2];
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((*(longlong *)(param_3 + 0x10) != 0) &&
     (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x20) != *param_1)) {
    FUN_145715fae(local_d8,param_2 + 0x38);
    local_f0 = *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 0x18);
    FUN_145715fae(local_e8);
    local_88 = L"CameraParameterDrivenTwice";
    local_80[0] = 0x1a;
    FUN_1446e940c(local_114,&local_88);
    local_88 = L"CameraRigAssetBuilder";
    local_80[0] = 0x15;
    FUN_1446e940c(local_118,&local_88);
    FUN_140208bae(local_110,local_118,local_114,
                  L"Camera node parameter \'{0}.{1}\' is both exposed and driven by a variable!");
    FUN_14023409e(&local_100,local_110,1);
    local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
    FUN_14023423e(local_78,local_e8);
    local_68 = 4;
    FUN_14023423e(local_58,local_d8);
    local_a0 = &local_48;
    local_a8 = &local_88;
    FUN_14010d304(&local_98);
    local_b8 = local_100;
    local_b0 = local_f8;
    if (local_f8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_f8 + 1) = (int)local_f8[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_c8,&local_b8,&local_98);
    FUN_14007f2db(local_98,local_90);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    lVar3 = 0x30;
    do {
      plVar2 = *(longlong **)((longlong)local_80 + lVar3 + -8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))();
        *(undefined8 *)((longlong)local_80 + lVar3 + -8) = 0;
        *(undefined4 *)((longlong)local_80 + lVar3) = 0;
      }
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != -0x10);
    if (local_f8 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_f8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_f8)(local_f8);
        LOCK();
        piVar1 = (int *)((longlong)local_f8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_f8 + 0x10))(local_f8);
        }
      }
    }
    if (local_e8[0] != (longlong *)0x0) {
      (**(code **)(*local_e8[0] + 0x10))();
    }
    if (local_d8[0] != (longlong *)0x0) {
      (**(code **)(*local_d8[0] + 0x10))();
    }
    FUN_147fd2e2c(*(undefined8 *)param_1[1],1,local_c8);
    if (local_c8[0] != (longlong *)0x0) {
      (**(code **)(*local_c8[0] + 0x10))();
    }
    if (local_110[0] != (longlong *)0x0) {
      (**(code **)(*local_110[0] + 0x10))();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148008bbc FUN_148008bbc body=334 status=ok
// SIG undefined FUN_148008bbc(void)

undefined8 FUN_148008bbc(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)(param_1 + 8);
  local_20 = param_2;
  local_18 = param_3;
  if (*(int *)(lVar2 + 0x28) != *(int *)(lVar2 + 0x54)) {
    uVar3 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    uVar4 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    uVar4 = uVar4 >> 0x10 ^ uVar4;
    lVar7 = lVar2 + 0x58;
    if (*(longlong *)(lVar2 + 0x60) != 0) {
      lVar7 = *(longlong *)(lVar2 + 0x60);
    }
    iVar6 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(lVar2 + 0x68) - 1U &
                             (uVar4 * 0x40 + (uVar3 >> 0x10 ^ uVar3) + (uVar4 >> 2) + 0x9e3779b9 ^
                             uVar4)) * 4);
    if (iVar6 != -1) {
      lVar7 = *(longlong *)(lVar2 + 0x20);
      uVar5 = 0;
      do {
        lVar8 = (longlong)iVar6 * 0x20;
        lVar1 = lVar7 + lVar8;
        if ((*(ulonglong *)(lVar7 + lVar8) == param_2) &&
           (*(ulonglong *)(lVar7 + 8 + lVar8) == param_3)) {
          if ((undefined8 *)(lVar1 + 0x10) == (undefined8 *)0x0 || lVar1 == 0) goto LAB_148008be6;
          uVar5 = *(undefined8 *)(lVar1 + 0x10);
          FUN_148005ef8((longlong *)(lVar2 + 0x20),&local_20);
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x18);
      } while (iVar6 != -1);
      goto LAB_148008be8;
    }
  }
LAB_148008be6:
  uVar5 = 0;
LAB_148008be8:
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 148008d0b FUN_148008d0b body=175 status=ok
// SIG undefined FUN_148008d0b(void)

void FUN_148008d0b(undefined8 param_1,longlong param_2,float *param_3,undefined8 param_4)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = FUN_148008dba(param_1,param_2 + 0x40,param_4);
  if ((*(float *)(lVar2 + 0x40) == *param_3) && (!NAN(*(float *)(lVar2 + 0x40)) && !NAN(*param_3)))
  {
    if ((*(float *)(lVar2 + 0x44) == param_3[1]) &&
       (!NAN(*(float *)(lVar2 + 0x44)) && !NAN(param_3[1]))) {
      if ((*(float *)(lVar2 + 0x48) == param_3[2]) &&
         (!NAN(*(float *)(lVar2 + 0x48)) && !NAN(param_3[2]))) goto LAB_148008d62;
    }
  }
  *(float *)(lVar2 + 0x48) = param_3[2];
  *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)param_3;
LAB_148008d62:
  FUN_14800628c(param_1,param_2,lVar2);
  if (lVar2 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar2);
  }
  bVar1 = DAT_14c950c29;
  *(longlong *)(param_2 + 0x60) = lVar2;
  if ((lVar2 != 0) && ((bVar1 & 1) != 0)) {
    FUN_1456cec3c(lVar2);
  }
  *(longlong *)(param_3 + 4) = lVar2;
  return;
}



// FUNCTION 148008dba FUN_148008dba body=597 status=ok
// SIG undefined FUN_148008dba(void)

longlong * FUN_148008dba(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  void *_Src;
  undefined2 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  void *local_d0;
  int local_c8;
  undefined4 local_c4;
  undefined1 local_c0 [16];
  longlong *local_b0;
  ulonglong *local_a8;
  undefined2 *local_a0;
  int local_98;
  undefined2 *local_90;
  int local_88;
  longlong local_80 [4];
  undefined1 local_60 [32];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_80[0] = *(longlong *)(*param_1 + 0x18);
  FUN_1400021e4(local_80,local_c0);
  FUN_14146ec20(local_80,local_c0);
  local_d0 = (void *)0x0;
  local_c8 = *(int *)(param_2 + 1);
  lVar3 = (longlong)local_c8;
  _Src = (void *)*param_2;
  if (lVar3 == 0) {
    local_c4 = 0;
  }
  else {
    FUN_1446dd670(&local_d0,local_c8,0);
    memcpy(local_d0,_Src,lVar3 * 2);
  }
  FUN_14146ec20(local_60,&local_d0);
  local_a8 = &local_40;
  local_b0 = local_80;
  FUN_1407adb6e(&local_a0);
  FUN_140230a2e(&local_90,L"Override_{0}_{1}",&local_a0);
  FUN_1407adb3e(local_a0,local_98);
  if (local_a0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  lVar3 = 0x40;
  do {
    if (*(longlong *)((longlong)&local_90 + lVar3) != 0) {
      FUN_1400020a8();
    }
    lVar3 = lVar3 + -0x20;
  } while (lVar3 != 0);
  if (param_3 == (longlong *)0x0) {
    puVar1 = local_90;
    if (local_88 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_d8,puVar1,1);
    param_3 = (longlong *)FUN_148009010(*param_1,local_d8);
  }
  else {
    local_a0 = (undefined2 *)param_3[3];
    FUN_1400021e4(&local_a0,local_80);
    FUN_1400b22c2(&local_a0,"REUSABLE_");
    iVar2 = local_98 + -1;
    puVar1 = local_a0;
    if (local_98 == 0) {
      puVar1 = &DAT_149dfb77a;
      iVar2 = 0;
    }
    FUN_140c540b4(local_80,puVar1,iVar2,0);
    if (local_a0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    puVar1 = local_90;
    if (local_88 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    (**(code **)(*param_3 + 0x170))(param_3,puVar1,0,0x20);
    if (local_80[0] != 0) {
      FUN_1400020a8();
    }
  }
  *(undefined1 *)((longlong)param_3 + 0x2a) = 1;
  *(undefined2 *)(param_3 + 5) = 0x100;
  if (local_90 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148009010 FUN_148009010 body=183 status=ok
// SIG undefined FUN_148009010(void)

undefined8 FUN_148009010(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_14595abac();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 8;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480090c8 FUN_1480090c8 body=641 status=ok
// SIG undefined FUN_1480090c8(void)

void FUN_1480090c8(longlong *param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_138 [32];
  undefined1 local_118 [4];
  undefined1 local_114 [4];
  longlong *local_110 [2];
  undefined8 local_100;
  longlong *local_f8;
  undefined8 local_f0;
  longlong *local_e8 [2];
  longlong *local_d8 [2];
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  wchar_t **local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80 [2];
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((*(longlong *)(param_3 + 0x18) != 0) &&
     (*(longlong *)(*(longlong *)(param_3 + 0x18) + 0x20) != *param_1)) {
    FUN_145715fae(local_d8,param_2 + 0x38);
    local_f0 = *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 0x18);
    FUN_145715fae(local_e8);
    local_88 = L"CameraParameterDrivenTwice";
    local_80[0] = 0x1a;
    FUN_1446e940c(local_114,&local_88);
    local_88 = L"CameraRigAssetBuilder";
    local_80[0] = 0x15;
    FUN_1446e940c(local_118,&local_88);
    FUN_140208bae(local_110,local_118,local_114,
                  L"Camera node parameter \'{0}.{1}\' is both exposed and driven by a variable!");
    FUN_14023409e(&local_100,local_110,1);
    local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
    FUN_14023423e(local_78,local_e8);
    local_68 = 4;
    FUN_14023423e(local_58,local_d8);
    local_a0 = &local_48;
    local_a8 = &local_88;
    FUN_14010d304(&local_98);
    local_b8 = local_100;
    local_b0 = local_f8;
    if (local_f8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_f8 + 1) = (int)local_f8[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_c8,&local_b8,&local_98);
    FUN_14007f2db(local_98,local_90);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    lVar3 = 0x30;
    do {
      plVar2 = *(longlong **)((longlong)local_80 + lVar3 + -8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))();
        *(undefined8 *)((longlong)local_80 + lVar3 + -8) = 0;
        *(undefined4 *)((longlong)local_80 + lVar3) = 0;
      }
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != -0x10);
    if (local_f8 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_f8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_f8)(local_f8);
        LOCK();
        piVar1 = (int *)((longlong)local_f8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_f8 + 0x10))(local_f8);
        }
      }
    }
    if (local_e8[0] != (longlong *)0x0) {
      (**(code **)(*local_e8[0] + 0x10))();
    }
    if (local_d8[0] != (longlong *)0x0) {
      (**(code **)(*local_d8[0] + 0x10))();
    }
    FUN_147fd2e2c(*(undefined8 *)param_1[1],1,local_c8);
    if (local_c8[0] != (longlong *)0x0) {
      (**(code **)(*local_c8[0] + 0x10))();
    }
    if (local_110[0] != (longlong *)0x0) {
      (**(code **)(*local_110[0] + 0x10))();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14800934a FUN_14800934a body=334 status=ok
// SIG undefined FUN_14800934a(void)

undefined8 FUN_14800934a(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)(param_1 + 8);
  local_20 = param_2;
  local_18 = param_3;
  if (*(int *)(lVar2 + 0x28) != *(int *)(lVar2 + 0x54)) {
    uVar3 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    uVar4 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    uVar4 = uVar4 >> 0x10 ^ uVar4;
    lVar7 = lVar2 + 0x58;
    if (*(longlong *)(lVar2 + 0x60) != 0) {
      lVar7 = *(longlong *)(lVar2 + 0x60);
    }
    iVar6 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(lVar2 + 0x68) - 1U &
                             (uVar4 * 0x40 + (uVar3 >> 0x10 ^ uVar3) + (uVar4 >> 2) + 0x9e3779b9 ^
                             uVar4)) * 4);
    if (iVar6 != -1) {
      lVar7 = *(longlong *)(lVar2 + 0x20);
      uVar5 = 0;
      do {
        lVar8 = (longlong)iVar6 * 0x20;
        lVar1 = lVar7 + lVar8;
        if ((*(ulonglong *)(lVar7 + lVar8) == param_2) &&
           (*(ulonglong *)(lVar7 + 8 + lVar8) == param_3)) {
          if ((undefined8 *)(lVar1 + 0x10) == (undefined8 *)0x0 || lVar1 == 0) goto LAB_148009374;
          uVar5 = *(undefined8 *)(lVar1 + 0x10);
          FUN_148005ef8((longlong *)(lVar2 + 0x20),&local_20);
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x18);
      } while (iVar6 != -1);
      goto LAB_148009376;
    }
  }
LAB_148009374:
  uVar5 = 0;
LAB_148009376:
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 148009499 FUN_148009499 body=182 status=ok
// SIG undefined FUN_148009499(void)

void FUN_148009499(undefined8 param_1,longlong param_2,double *param_3,undefined8 param_4)

{
  double dVar1;
  byte bVar2;
  double dVar3;
  
  dVar3 = (double)FUN_14800954f(param_1,param_2 + 0x40,param_4);
  if ((((*(double *)((longlong)dVar3 + 0x40) == *param_3) &&
       (!NAN(*(double *)((longlong)dVar3 + 0x40)) && !NAN(*param_3))) &&
      (*(double *)((longlong)dVar3 + 0x48) == param_3[1])) &&
     (!NAN(*(double *)((longlong)dVar3 + 0x48)) && !NAN(param_3[1]))) {
    if ((*(double *)((longlong)dVar3 + 0x50) == param_3[2]) &&
       (!NAN(*(double *)((longlong)dVar3 + 0x50)) && !NAN(param_3[2]))) goto LAB_1480094f7;
  }
  *(double *)((longlong)dVar3 + 0x50) = param_3[2];
  dVar1 = param_3[1];
  *(double *)((longlong)dVar3 + 0x40) = *param_3;
  *(double *)((longlong)dVar3 + 0x48) = dVar1;
LAB_1480094f7:
  FUN_14800628c(param_1,param_2,dVar3);
  if (dVar3 != 0.0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(dVar3);
  }
  bVar2 = DAT_14c950c29;
  *(double *)(param_2 + 0x60) = dVar3;
  if ((dVar3 != 0.0) && ((bVar2 & 1) != 0)) {
    FUN_1456cec3c(dVar3);
  }
  param_3[3] = dVar3;
  return;
}



// FUNCTION 14800954f FUN_14800954f body=597 status=ok
// SIG undefined FUN_14800954f(void)

longlong * FUN_14800954f(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  void *_Src;
  undefined2 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  void *local_d0;
  int local_c8;
  undefined4 local_c4;
  undefined1 local_c0 [16];
  longlong *local_b0;
  ulonglong *local_a8;
  undefined2 *local_a0;
  int local_98;
  undefined2 *local_90;
  int local_88;
  longlong local_80 [4];
  undefined1 local_60 [32];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_80[0] = *(longlong *)(*param_1 + 0x18);
  FUN_1400021e4(local_80,local_c0);
  FUN_14146ec20(local_80,local_c0);
  local_d0 = (void *)0x0;
  local_c8 = *(int *)(param_2 + 1);
  lVar3 = (longlong)local_c8;
  _Src = (void *)*param_2;
  if (lVar3 == 0) {
    local_c4 = 0;
  }
  else {
    FUN_1446dd670(&local_d0,local_c8,0);
    memcpy(local_d0,_Src,lVar3 * 2);
  }
  FUN_14146ec20(local_60,&local_d0);
  local_a8 = &local_40;
  local_b0 = local_80;
  FUN_1407adb6e(&local_a0);
  FUN_140230a2e(&local_90,L"Override_{0}_{1}",&local_a0);
  FUN_1407adb3e(local_a0,local_98);
  if (local_a0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  lVar3 = 0x40;
  do {
    if (*(longlong *)((longlong)&local_90 + lVar3) != 0) {
      FUN_1400020a8();
    }
    lVar3 = lVar3 + -0x20;
  } while (lVar3 != 0);
  if (param_3 == (longlong *)0x0) {
    puVar1 = local_90;
    if (local_88 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_d8,puVar1,1);
    param_3 = (longlong *)FUN_1480097a5(*param_1,local_d8);
  }
  else {
    local_a0 = (undefined2 *)param_3[3];
    FUN_1400021e4(&local_a0,local_80);
    FUN_1400b22c2(&local_a0,"REUSABLE_");
    iVar2 = local_98 + -1;
    puVar1 = local_a0;
    if (local_98 == 0) {
      puVar1 = &DAT_149dfb77a;
      iVar2 = 0;
    }
    FUN_140c540b4(local_80,puVar1,iVar2,0);
    if (local_a0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    puVar1 = local_90;
    if (local_88 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    (**(code **)(*param_3 + 0x170))(param_3,puVar1,0,0x20);
    if (local_80[0] != 0) {
      FUN_1400020a8();
    }
  }
  *(undefined1 *)((longlong)param_3 + 0x2a) = 1;
  *(undefined2 *)(param_3 + 5) = 0x100;
  if (local_90 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480097a5 FUN_1480097a5 body=183 status=ok
// SIG undefined FUN_1480097a5(void)

undefined8 FUN_1480097a5(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_1458bc7e6();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 8;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14800985d FUN_14800985d body=641 status=ok
// SIG undefined FUN_14800985d(void)

void FUN_14800985d(longlong *param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_138 [32];
  undefined1 local_118 [4];
  undefined1 local_114 [4];
  longlong *local_110 [2];
  undefined8 local_100;
  longlong *local_f8;
  undefined8 local_f0;
  longlong *local_e8 [2];
  longlong *local_d8 [2];
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  wchar_t **local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80 [2];
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((*(longlong *)(param_3 + 0x10) != 0) &&
     (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x20) != *param_1)) {
    FUN_145715fae(local_d8,param_2 + 0x38);
    local_f0 = *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 0x18);
    FUN_145715fae(local_e8);
    local_88 = L"CameraParameterDrivenTwice";
    local_80[0] = 0x1a;
    FUN_1446e940c(local_114,&local_88);
    local_88 = L"CameraRigAssetBuilder";
    local_80[0] = 0x15;
    FUN_1446e940c(local_118,&local_88);
    FUN_140208bae(local_110,local_118,local_114,
                  L"Camera node parameter \'{0}.{1}\' is both exposed and driven by a variable!");
    FUN_14023409e(&local_100,local_110,1);
    local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
    FUN_14023423e(local_78,local_e8);
    local_68 = 4;
    FUN_14023423e(local_58,local_d8);
    local_a0 = &local_48;
    local_a8 = &local_88;
    FUN_14010d304(&local_98);
    local_b8 = local_100;
    local_b0 = local_f8;
    if (local_f8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_f8 + 1) = (int)local_f8[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_c8,&local_b8,&local_98);
    FUN_14007f2db(local_98,local_90);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    lVar3 = 0x30;
    do {
      plVar2 = *(longlong **)((longlong)local_80 + lVar3 + -8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))();
        *(undefined8 *)((longlong)local_80 + lVar3 + -8) = 0;
        *(undefined4 *)((longlong)local_80 + lVar3) = 0;
      }
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != -0x10);
    if (local_f8 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_f8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_f8)(local_f8);
        LOCK();
        piVar1 = (int *)((longlong)local_f8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_f8 + 0x10))(local_f8);
        }
      }
    }
    if (local_e8[0] != (longlong *)0x0) {
      (**(code **)(*local_e8[0] + 0x10))();
    }
    if (local_d8[0] != (longlong *)0x0) {
      (**(code **)(*local_d8[0] + 0x10))();
    }
    FUN_147fd2e2c(*(undefined8 *)param_1[1],1,local_c8);
    if (local_c8[0] != (longlong *)0x0) {
      (**(code **)(*local_c8[0] + 0x10))();
    }
    if (local_110[0] != (longlong *)0x0) {
      (**(code **)(*local_110[0] + 0x10))();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148009ae0 FUN_148009ae0 body=334 status=ok
// SIG undefined FUN_148009ae0(void)

undefined8 FUN_148009ae0(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)(param_1 + 8);
  local_20 = param_2;
  local_18 = param_3;
  if (*(int *)(lVar2 + 0x28) != *(int *)(lVar2 + 0x54)) {
    uVar3 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    uVar4 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    uVar4 = uVar4 >> 0x10 ^ uVar4;
    lVar7 = lVar2 + 0x58;
    if (*(longlong *)(lVar2 + 0x60) != 0) {
      lVar7 = *(longlong *)(lVar2 + 0x60);
    }
    iVar6 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(lVar2 + 0x68) - 1U &
                             (uVar4 * 0x40 + (uVar3 >> 0x10 ^ uVar3) + (uVar4 >> 2) + 0x9e3779b9 ^
                             uVar4)) * 4);
    if (iVar6 != -1) {
      lVar7 = *(longlong *)(lVar2 + 0x20);
      uVar5 = 0;
      do {
        lVar8 = (longlong)iVar6 * 0x20;
        lVar1 = lVar7 + lVar8;
        if ((*(ulonglong *)(lVar7 + lVar8) == param_2) &&
           (*(ulonglong *)(lVar7 + 8 + lVar8) == param_3)) {
          if ((undefined8 *)(lVar1 + 0x10) == (undefined8 *)0x0 || lVar1 == 0) goto LAB_148009b0a;
          uVar5 = *(undefined8 *)(lVar1 + 0x10);
          FUN_148005ef8((longlong *)(lVar2 + 0x20),&local_20);
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x18);
      } while (iVar6 != -1);
      goto LAB_148009b0c;
    }
  }
LAB_148009b0a:
  uVar5 = 0;
LAB_148009b0c:
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 148009c2f FUN_148009c2f body=182 status=ok
// SIG undefined FUN_148009c2f(void)

void FUN_148009c2f(undefined8 param_1,longlong param_2,float *param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  longlong lVar5;
  
  lVar5 = FUN_148009ce5(param_1,param_2 + 0x40,param_4);
  if (((((*(float *)(lVar5 + 0x40) == *param_3) &&
        (!NAN(*(float *)(lVar5 + 0x40)) && !NAN(*param_3))) &&
       (*(float *)(lVar5 + 0x44) == param_3[1])) &&
      ((!NAN(*(float *)(lVar5 + 0x44)) && !NAN(param_3[1]) &&
       (*(float *)(lVar5 + 0x48) == param_3[2])))) &&
     (!NAN(*(float *)(lVar5 + 0x48)) && !NAN(param_3[2]))) {
    if ((*(float *)(lVar5 + 0x4c) == param_3[3]) &&
       (!NAN(*(float *)(lVar5 + 0x4c)) && !NAN(param_3[3]))) goto LAB_148009c8d;
  }
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  *(float *)(lVar5 + 0x40) = *param_3;
  *(float *)(lVar5 + 0x44) = fVar1;
  *(float *)(lVar5 + 0x48) = fVar2;
  *(float *)(lVar5 + 0x4c) = fVar3;
LAB_148009c8d:
  FUN_14800628c(param_1,param_2,lVar5);
  if (lVar5 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar5);
  }
  bVar4 = DAT_14c950c29;
  *(longlong *)(param_2 + 0x60) = lVar5;
  if ((lVar5 != 0) && ((bVar4 & 1) != 0)) {
    FUN_1456cec3c(lVar5);
  }
  *(longlong *)(param_3 + 4) = lVar5;
  return;
}



// FUNCTION 148009ce5 FUN_148009ce5 body=597 status=ok
// SIG undefined FUN_148009ce5(void)

longlong * FUN_148009ce5(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  void *_Src;
  undefined2 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  void *local_d0;
  int local_c8;
  undefined4 local_c4;
  undefined1 local_c0 [16];
  longlong *local_b0;
  ulonglong *local_a8;
  undefined2 *local_a0;
  int local_98;
  undefined2 *local_90;
  int local_88;
  longlong local_80 [4];
  undefined1 local_60 [32];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_80[0] = *(longlong *)(*param_1 + 0x18);
  FUN_1400021e4(local_80,local_c0);
  FUN_14146ec20(local_80,local_c0);
  local_d0 = (void *)0x0;
  local_c8 = *(int *)(param_2 + 1);
  lVar3 = (longlong)local_c8;
  _Src = (void *)*param_2;
  if (lVar3 == 0) {
    local_c4 = 0;
  }
  else {
    FUN_1446dd670(&local_d0,local_c8,0);
    memcpy(local_d0,_Src,lVar3 * 2);
  }
  FUN_14146ec20(local_60,&local_d0);
  local_a8 = &local_40;
  local_b0 = local_80;
  FUN_1407adb6e(&local_a0);
  FUN_140230a2e(&local_90,L"Override_{0}_{1}",&local_a0);
  FUN_1407adb3e(local_a0,local_98);
  if (local_a0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  lVar3 = 0x40;
  do {
    if (*(longlong *)((longlong)&local_90 + lVar3) != 0) {
      FUN_1400020a8();
    }
    lVar3 = lVar3 + -0x20;
  } while (lVar3 != 0);
  if (param_3 == (longlong *)0x0) {
    puVar1 = local_90;
    if (local_88 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_d8,puVar1,1);
    param_3 = (longlong *)FUN_148009f3b(*param_1,local_d8);
  }
  else {
    local_a0 = (undefined2 *)param_3[3];
    FUN_1400021e4(&local_a0,local_80);
    FUN_1400b22c2(&local_a0,"REUSABLE_");
    iVar2 = local_98 + -1;
    puVar1 = local_a0;
    if (local_98 == 0) {
      puVar1 = &DAT_149dfb77a;
      iVar2 = 0;
    }
    FUN_140c540b4(local_80,puVar1,iVar2,0);
    if (local_a0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    puVar1 = local_90;
    if (local_88 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    (**(code **)(*param_3 + 0x170))(param_3,puVar1,0,0x20);
    if (local_80[0] != 0) {
      FUN_1400020a8();
    }
  }
  *(undefined1 *)((longlong)param_3 + 0x2a) = 1;
  *(undefined2 *)(param_3 + 5) = 0x100;
  if (local_90 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148009f3b FUN_148009f3b body=183 status=ok
// SIG undefined FUN_148009f3b(void)

undefined8 FUN_148009f3b(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_14595ac96();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 8;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148009ff3 FUN_148009ff3 body=641 status=ok
// SIG undefined FUN_148009ff3(void)

void FUN_148009ff3(longlong *param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_138 [32];
  undefined1 local_118 [4];
  undefined1 local_114 [4];
  longlong *local_110 [2];
  undefined8 local_100;
  longlong *local_f8;
  undefined8 local_f0;
  longlong *local_e8 [2];
  longlong *local_d8 [2];
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  wchar_t **local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80 [2];
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((*(longlong *)(param_3 + 0x20) != 0) &&
     (*(longlong *)(*(longlong *)(param_3 + 0x20) + 0x20) != *param_1)) {
    FUN_145715fae(local_d8,param_2 + 0x38);
    local_f0 = *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 0x18);
    FUN_145715fae(local_e8);
    local_88 = L"CameraParameterDrivenTwice";
    local_80[0] = 0x1a;
    FUN_1446e940c(local_114,&local_88);
    local_88 = L"CameraRigAssetBuilder";
    local_80[0] = 0x15;
    FUN_1446e940c(local_118,&local_88);
    FUN_140208bae(local_110,local_118,local_114,
                  L"Camera node parameter \'{0}.{1}\' is both exposed and driven by a variable!");
    FUN_14023409e(&local_100,local_110,1);
    local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
    FUN_14023423e(local_78,local_e8);
    local_68 = 4;
    FUN_14023423e(local_58,local_d8);
    local_a0 = &local_48;
    local_a8 = &local_88;
    FUN_14010d304(&local_98);
    local_b8 = local_100;
    local_b0 = local_f8;
    if (local_f8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_f8 + 1) = (int)local_f8[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_c8,&local_b8,&local_98);
    FUN_14007f2db(local_98,local_90);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    lVar3 = 0x30;
    do {
      plVar2 = *(longlong **)((longlong)local_80 + lVar3 + -8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))();
        *(undefined8 *)((longlong)local_80 + lVar3 + -8) = 0;
        *(undefined4 *)((longlong)local_80 + lVar3) = 0;
      }
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != -0x10);
    if (local_f8 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_f8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_f8)(local_f8);
        LOCK();
        piVar1 = (int *)((longlong)local_f8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_f8 + 0x10))(local_f8);
        }
      }
    }
    if (local_e8[0] != (longlong *)0x0) {
      (**(code **)(*local_e8[0] + 0x10))();
    }
    if (local_d8[0] != (longlong *)0x0) {
      (**(code **)(*local_d8[0] + 0x10))();
    }
    FUN_147fd2e2c(*(undefined8 *)param_1[1],1,local_c8);
    if (local_c8[0] != (longlong *)0x0) {
      (**(code **)(*local_c8[0] + 0x10))();
    }
    if (local_110[0] != (longlong *)0x0) {
      (**(code **)(*local_110[0] + 0x10))();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14800a276 FUN_14800a276 body=334 status=ok
// SIG undefined FUN_14800a276(void)

undefined8 FUN_14800a276(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)(param_1 + 8);
  local_20 = param_2;
  local_18 = param_3;
  if (*(int *)(lVar2 + 0x28) != *(int *)(lVar2 + 0x54)) {
    uVar3 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    uVar4 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    uVar4 = uVar4 >> 0x10 ^ uVar4;
    lVar7 = lVar2 + 0x58;
    if (*(longlong *)(lVar2 + 0x60) != 0) {
      lVar7 = *(longlong *)(lVar2 + 0x60);
    }
    iVar6 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(lVar2 + 0x68) - 1U &
                             (uVar4 * 0x40 + (uVar3 >> 0x10 ^ uVar3) + (uVar4 >> 2) + 0x9e3779b9 ^
                             uVar4)) * 4);
    if (iVar6 != -1) {
      lVar7 = *(longlong *)(lVar2 + 0x20);
      uVar5 = 0;
      do {
        lVar8 = (longlong)iVar6 * 0x20;
        lVar1 = lVar7 + lVar8;
        if ((*(ulonglong *)(lVar7 + lVar8) == param_2) &&
           (*(ulonglong *)(lVar7 + 8 + lVar8) == param_3)) {
          if ((undefined8 *)(lVar1 + 0x10) == (undefined8 *)0x0 || lVar1 == 0) goto LAB_14800a2a0;
          uVar5 = *(undefined8 *)(lVar1 + 0x10);
          FUN_148005ef8((longlong *)(lVar2 + 0x20),&local_20);
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x18);
      } while (iVar6 != -1);
      goto LAB_14800a2a2;
    }
  }
LAB_14800a2a0:
  uVar5 = 0;
LAB_14800a2a2:
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 14800a3c5 FUN_14800a3c5 body=196 status=ok
// SIG undefined FUN_14800a3c5(void)

void FUN_14800a3c5(undefined8 param_1,longlong param_2,double *param_3,undefined8 param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  byte bVar4;
  double dVar5;
  
  dVar5 = (double)FUN_14800a489(param_1,param_2 + 0x40,param_4);
  if (((((*(double *)((longlong)dVar5 + 0x40) == *param_3) &&
        (!NAN(*(double *)((longlong)dVar5 + 0x40)) && !NAN(*param_3))) &&
       (*(double *)((longlong)dVar5 + 0x48) == param_3[1])) &&
      ((!NAN(*(double *)((longlong)dVar5 + 0x48)) && !NAN(param_3[1]) &&
       (*(double *)((longlong)dVar5 + 0x50) == param_3[2])))) &&
     (!NAN(*(double *)((longlong)dVar5 + 0x50)) && !NAN(param_3[2]))) {
    if ((*(double *)((longlong)dVar5 + 0x58) == param_3[3]) &&
       (!NAN(*(double *)((longlong)dVar5 + 0x58)) && !NAN(param_3[3]))) goto LAB_14800a431;
  }
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar3 = param_3[3];
  *(double *)((longlong)dVar5 + 0x50) = param_3[2];
  *(double *)((longlong)dVar5 + 0x58) = dVar3;
  *(double *)((longlong)dVar5 + 0x40) = dVar1;
  *(double *)((longlong)dVar5 + 0x48) = dVar2;
LAB_14800a431:
  FUN_14800628c(param_1,param_2,dVar5);
  if (dVar5 != 0.0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(dVar5);
  }
  bVar4 = DAT_14c950c29;
  *(double *)(param_2 + 0x60) = dVar5;
  if ((dVar5 != 0.0) && ((bVar4 & 1) != 0)) {
    FUN_1456cec3c(dVar5);
  }
  param_3[4] = dVar5;
  return;
}



// FUNCTION 14800a489 FUN_14800a489 body=597 status=ok
// SIG undefined FUN_14800a489(void)

longlong * FUN_14800a489(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  void *_Src;
  undefined2 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  void *local_d0;
  int local_c8;
  undefined4 local_c4;
  undefined1 local_c0 [16];
  longlong *local_b0;
  ulonglong *local_a8;
  undefined2 *local_a0;
  int local_98;
  undefined2 *local_90;
  int local_88;
  longlong local_80 [4];
  undefined1 local_60 [32];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_80[0] = *(longlong *)(*param_1 + 0x18);
  FUN_1400021e4(local_80,local_c0);
  FUN_14146ec20(local_80,local_c0);
  local_d0 = (void *)0x0;
  local_c8 = *(int *)(param_2 + 1);
  lVar3 = (longlong)local_c8;
  _Src = (void *)*param_2;
  if (lVar3 == 0) {
    local_c4 = 0;
  }
  else {
    FUN_1446dd670(&local_d0,local_c8,0);
    memcpy(local_d0,_Src,lVar3 * 2);
  }
  FUN_14146ec20(local_60,&local_d0);
  local_a8 = &local_40;
  local_b0 = local_80;
  FUN_1407adb6e(&local_a0);
  FUN_140230a2e(&local_90,L"Override_{0}_{1}",&local_a0);
  FUN_1407adb3e(local_a0,local_98);
  if (local_a0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  lVar3 = 0x40;
  do {
    if (*(longlong *)((longlong)&local_90 + lVar3) != 0) {
      FUN_1400020a8();
    }
    lVar3 = lVar3 + -0x20;
  } while (lVar3 != 0);
  if (param_3 == (longlong *)0x0) {
    puVar1 = local_90;
    if (local_88 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_d8,puVar1,1);
    param_3 = (longlong *)FUN_14800a6df(*param_1,local_d8);
  }
  else {
    local_a0 = (undefined2 *)param_3[3];
    FUN_1400021e4(&local_a0,local_80);
    FUN_1400b22c2(&local_a0,"REUSABLE_");
    iVar2 = local_98 + -1;
    puVar1 = local_a0;
    if (local_98 == 0) {
      puVar1 = &DAT_149dfb77a;
      iVar2 = 0;
    }
    FUN_140c540b4(local_80,puVar1,iVar2,0);
    if (local_a0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    puVar1 = local_90;
    if (local_88 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    (**(code **)(*param_3 + 0x170))(param_3,puVar1,0,0x20);
    if (local_80[0] != 0) {
      FUN_1400020a8();
    }
  }
  *(undefined1 *)((longlong)param_3 + 0x2a) = 1;
  *(undefined2 *)(param_3 + 5) = 0x100;
  if (local_90 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14800a6df FUN_14800a6df body=183 status=ok
// SIG undefined FUN_14800a6df(void)

undefined8 FUN_14800a6df(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_1458bc8d0();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 8;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14800a797 FUN_14800a797 body=641 status=ok
// SIG undefined FUN_14800a797(void)

void FUN_14800a797(longlong *param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_138 [32];
  undefined1 local_118 [4];
  undefined1 local_114 [4];
  longlong *local_110 [2];
  undefined8 local_100;
  longlong *local_f8;
  undefined8 local_f0;
  longlong *local_e8 [2];
  longlong *local_d8 [2];
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  wchar_t **local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80 [2];
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((*(longlong *)(param_3 + 0x10) != 0) &&
     (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x20) != *param_1)) {
    FUN_145715fae(local_d8,param_2 + 0x38);
    local_f0 = *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 0x18);
    FUN_145715fae(local_e8);
    local_88 = L"CameraParameterDrivenTwice";
    local_80[0] = 0x1a;
    FUN_1446e940c(local_114,&local_88);
    local_88 = L"CameraRigAssetBuilder";
    local_80[0] = 0x15;
    FUN_1446e940c(local_118,&local_88);
    FUN_140208bae(local_110,local_118,local_114,
                  L"Camera node parameter \'{0}.{1}\' is both exposed and driven by a variable!");
    FUN_14023409e(&local_100,local_110,1);
    local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
    FUN_14023423e(local_78,local_e8);
    local_68 = 4;
    FUN_14023423e(local_58,local_d8);
    local_a0 = &local_48;
    local_a8 = &local_88;
    FUN_14010d304(&local_98);
    local_b8 = local_100;
    local_b0 = local_f8;
    if (local_f8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_f8 + 1) = (int)local_f8[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_c8,&local_b8,&local_98);
    FUN_14007f2db(local_98,local_90);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    lVar3 = 0x30;
    do {
      plVar2 = *(longlong **)((longlong)local_80 + lVar3 + -8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))();
        *(undefined8 *)((longlong)local_80 + lVar3 + -8) = 0;
        *(undefined4 *)((longlong)local_80 + lVar3) = 0;
      }
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != -0x10);
    if (local_f8 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_f8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_f8)(local_f8);
        LOCK();
        piVar1 = (int *)((longlong)local_f8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_f8 + 0x10))(local_f8);
        }
      }
    }
    if (local_e8[0] != (longlong *)0x0) {
      (**(code **)(*local_e8[0] + 0x10))();
    }
    if (local_d8[0] != (longlong *)0x0) {
      (**(code **)(*local_d8[0] + 0x10))();
    }
    FUN_147fd2e2c(*(undefined8 *)param_1[1],1,local_c8);
    if (local_c8[0] != (longlong *)0x0) {
      (**(code **)(*local_c8[0] + 0x10))();
    }
    if (local_110[0] != (longlong *)0x0) {
      (**(code **)(*local_110[0] + 0x10))();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14800aa1a FUN_14800aa1a body=334 status=ok
// SIG undefined FUN_14800aa1a(void)

undefined8 FUN_14800aa1a(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)(param_1 + 8);
  local_20 = param_2;
  local_18 = param_3;
  if (*(int *)(lVar2 + 0x28) != *(int *)(lVar2 + 0x54)) {
    uVar3 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    uVar4 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    uVar4 = uVar4 >> 0x10 ^ uVar4;
    lVar7 = lVar2 + 0x58;
    if (*(longlong *)(lVar2 + 0x60) != 0) {
      lVar7 = *(longlong *)(lVar2 + 0x60);
    }
    iVar6 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(lVar2 + 0x68) - 1U &
                             (uVar4 * 0x40 + (uVar3 >> 0x10 ^ uVar3) + (uVar4 >> 2) + 0x9e3779b9 ^
                             uVar4)) * 4);
    if (iVar6 != -1) {
      lVar7 = *(longlong *)(lVar2 + 0x20);
      uVar5 = 0;
      do {
        lVar8 = (longlong)iVar6 * 0x20;
        lVar1 = lVar7 + lVar8;
        if ((*(ulonglong *)(lVar7 + lVar8) == param_2) &&
           (*(ulonglong *)(lVar7 + 8 + lVar8) == param_3)) {
          if ((undefined8 *)(lVar1 + 0x10) == (undefined8 *)0x0 || lVar1 == 0) goto LAB_14800aa44;
          uVar5 = *(undefined8 *)(lVar1 + 0x10);
          FUN_148005ef8((longlong *)(lVar2 + 0x20),&local_20);
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x18);
      } while (iVar6 != -1);
      goto LAB_14800aa46;
    }
  }
LAB_14800aa44:
  uVar5 = 0;
LAB_14800aa46:
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 14800ab69 FUN_14800ab69 body=175 status=ok
// SIG undefined FUN_14800ab69(void)

void FUN_14800ab69(undefined8 param_1,longlong param_2,float *param_3,undefined8 param_4)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = FUN_14800ac18(param_1,param_2 + 0x40,param_4);
  if ((*(float *)(lVar2 + 0x40) == *param_3) && (!NAN(*(float *)(lVar2 + 0x40)) && !NAN(*param_3)))
  {
    if ((*(float *)(lVar2 + 0x44) == param_3[1]) &&
       (!NAN(*(float *)(lVar2 + 0x44)) && !NAN(param_3[1]))) {
      if ((*(float *)(lVar2 + 0x48) == param_3[2]) &&
         (!NAN(*(float *)(lVar2 + 0x48)) && !NAN(param_3[2]))) goto LAB_14800abc0;
    }
  }
  *(float *)(lVar2 + 0x48) = param_3[2];
  *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)param_3;
LAB_14800abc0:
  FUN_14800628c(param_1,param_2,lVar2);
  if (lVar2 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar2);
  }
  bVar1 = DAT_14c950c29;
  *(longlong *)(param_2 + 0x60) = lVar2;
  if ((lVar2 != 0) && ((bVar1 & 1) != 0)) {
    FUN_1456cec3c(lVar2);
  }
  *(longlong *)(param_3 + 4) = lVar2;
  return;
}



// FUNCTION 14800ac18 FUN_14800ac18 body=597 status=ok
// SIG undefined FUN_14800ac18(void)

longlong * FUN_14800ac18(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  void *_Src;
  undefined2 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  void *local_d0;
  int local_c8;
  undefined4 local_c4;
  undefined1 local_c0 [16];
  longlong *local_b0;
  ulonglong *local_a8;
  undefined2 *local_a0;
  int local_98;
  undefined2 *local_90;
  int local_88;
  longlong local_80 [4];
  undefined1 local_60 [32];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_80[0] = *(longlong *)(*param_1 + 0x18);
  FUN_1400021e4(local_80,local_c0);
  FUN_14146ec20(local_80,local_c0);
  local_d0 = (void *)0x0;
  local_c8 = *(int *)(param_2 + 1);
  lVar3 = (longlong)local_c8;
  _Src = (void *)*param_2;
  if (lVar3 == 0) {
    local_c4 = 0;
  }
  else {
    FUN_1446dd670(&local_d0,local_c8,0);
    memcpy(local_d0,_Src,lVar3 * 2);
  }
  FUN_14146ec20(local_60,&local_d0);
  local_a8 = &local_40;
  local_b0 = local_80;
  FUN_1407adb6e(&local_a0);
  FUN_140230a2e(&local_90,L"Override_{0}_{1}",&local_a0);
  FUN_1407adb3e(local_a0,local_98);
  if (local_a0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  lVar3 = 0x40;
  do {
    if (*(longlong *)((longlong)&local_90 + lVar3) != 0) {
      FUN_1400020a8();
    }
    lVar3 = lVar3 + -0x20;
  } while (lVar3 != 0);
  if (param_3 == (longlong *)0x0) {
    puVar1 = local_90;
    if (local_88 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_d8,puVar1,1);
    param_3 = (longlong *)FUN_14800ae6e(*param_1,local_d8);
  }
  else {
    local_a0 = (undefined2 *)param_3[3];
    FUN_1400021e4(&local_a0,local_80);
    FUN_1400b22c2(&local_a0,"REUSABLE_");
    iVar2 = local_98 + -1;
    puVar1 = local_a0;
    if (local_98 == 0) {
      puVar1 = &DAT_149dfb77a;
      iVar2 = 0;
    }
    FUN_140c540b4(local_80,puVar1,iVar2,0);
    if (local_a0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    puVar1 = local_90;
    if (local_88 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    (**(code **)(*param_3 + 0x170))(param_3,puVar1,0,0x20);
    if (local_80[0] != 0) {
      FUN_1400020a8();
    }
  }
  *(undefined1 *)((longlong)param_3 + 0x2a) = 1;
  *(undefined2 *)(param_3 + 5) = 0x100;
  if (local_90 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14800ae6e FUN_14800ae6e body=183 status=ok
// SIG undefined FUN_14800ae6e(void)

undefined8 FUN_14800ae6e(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_14595ad80();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 8;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14800af26 FUN_14800af26 body=641 status=ok
// SIG undefined FUN_14800af26(void)

void FUN_14800af26(longlong *param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_138 [32];
  undefined1 local_118 [4];
  undefined1 local_114 [4];
  longlong *local_110 [2];
  undefined8 local_100;
  longlong *local_f8;
  undefined8 local_f0;
  longlong *local_e8 [2];
  longlong *local_d8 [2];
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  wchar_t **local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80 [2];
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((*(longlong *)(param_3 + 0x18) != 0) &&
     (*(longlong *)(*(longlong *)(param_3 + 0x18) + 0x20) != *param_1)) {
    FUN_145715fae(local_d8,param_2 + 0x38);
    local_f0 = *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 0x18);
    FUN_145715fae(local_e8);
    local_88 = L"CameraParameterDrivenTwice";
    local_80[0] = 0x1a;
    FUN_1446e940c(local_114,&local_88);
    local_88 = L"CameraRigAssetBuilder";
    local_80[0] = 0x15;
    FUN_1446e940c(local_118,&local_88);
    FUN_140208bae(local_110,local_118,local_114,
                  L"Camera node parameter \'{0}.{1}\' is both exposed and driven by a variable!");
    FUN_14023409e(&local_100,local_110,1);
    local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
    FUN_14023423e(local_78,local_e8);
    local_68 = 4;
    FUN_14023423e(local_58,local_d8);
    local_a0 = &local_48;
    local_a8 = &local_88;
    FUN_14010d304(&local_98);
    local_b8 = local_100;
    local_b0 = local_f8;
    if (local_f8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_f8 + 1) = (int)local_f8[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_c8,&local_b8,&local_98);
    FUN_14007f2db(local_98,local_90);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    lVar3 = 0x30;
    do {
      plVar2 = *(longlong **)((longlong)local_80 + lVar3 + -8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))();
        *(undefined8 *)((longlong)local_80 + lVar3 + -8) = 0;
        *(undefined4 *)((longlong)local_80 + lVar3) = 0;
      }
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != -0x10);
    if (local_f8 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_f8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_f8)(local_f8);
        LOCK();
        piVar1 = (int *)((longlong)local_f8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_f8 + 0x10))(local_f8);
        }
      }
    }
    if (local_e8[0] != (longlong *)0x0) {
      (**(code **)(*local_e8[0] + 0x10))();
    }
    if (local_d8[0] != (longlong *)0x0) {
      (**(code **)(*local_d8[0] + 0x10))();
    }
    FUN_147fd2e2c(*(undefined8 *)param_1[1],1,local_c8);
    if (local_c8[0] != (longlong *)0x0) {
      (**(code **)(*local_c8[0] + 0x10))();
    }
    if (local_110[0] != (longlong *)0x0) {
      (**(code **)(*local_110[0] + 0x10))();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14800b1a8 FUN_14800b1a8 body=334 status=ok
// SIG undefined FUN_14800b1a8(void)

undefined8 FUN_14800b1a8(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)(param_1 + 8);
  local_20 = param_2;
  local_18 = param_3;
  if (*(int *)(lVar2 + 0x28) != *(int *)(lVar2 + 0x54)) {
    uVar3 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    uVar4 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    uVar4 = uVar4 >> 0x10 ^ uVar4;
    lVar7 = lVar2 + 0x58;
    if (*(longlong *)(lVar2 + 0x60) != 0) {
      lVar7 = *(longlong *)(lVar2 + 0x60);
    }
    iVar6 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(lVar2 + 0x68) - 1U &
                             (uVar4 * 0x40 + (uVar3 >> 0x10 ^ uVar3) + (uVar4 >> 2) + 0x9e3779b9 ^
                             uVar4)) * 4);
    if (iVar6 != -1) {
      lVar7 = *(longlong *)(lVar2 + 0x20);
      uVar5 = 0;
      do {
        lVar8 = (longlong)iVar6 * 0x20;
        lVar1 = lVar7 + lVar8;
        if ((*(ulonglong *)(lVar7 + lVar8) == param_2) &&
           (*(ulonglong *)(lVar7 + 8 + lVar8) == param_3)) {
          if ((undefined8 *)(lVar1 + 0x10) == (undefined8 *)0x0 || lVar1 == 0) goto LAB_14800b1d2;
          uVar5 = *(undefined8 *)(lVar1 + 0x10);
          FUN_148005ef8((longlong *)(lVar2 + 0x20),&local_20);
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x18);
      } while (iVar6 != -1);
      goto LAB_14800b1d4;
    }
  }
LAB_14800b1d2:
  uVar5 = 0;
LAB_14800b1d4:
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 14800b2f7 FUN_14800b2f7 body=182 status=ok
// SIG undefined FUN_14800b2f7(void)

void FUN_14800b2f7(undefined8 param_1,longlong param_2,double *param_3,undefined8 param_4)

{
  double dVar1;
  byte bVar2;
  double dVar3;
  
  dVar3 = (double)FUN_14800b3ad(param_1,param_2 + 0x40,param_4);
  if ((((*(double *)((longlong)dVar3 + 0x40) == *param_3) &&
       (!NAN(*(double *)((longlong)dVar3 + 0x40)) && !NAN(*param_3))) &&
      (*(double *)((longlong)dVar3 + 0x48) == param_3[1])) &&
     (!NAN(*(double *)((longlong)dVar3 + 0x48)) && !NAN(param_3[1]))) {
    if ((*(double *)((longlong)dVar3 + 0x50) == param_3[2]) &&
       (!NAN(*(double *)((longlong)dVar3 + 0x50)) && !NAN(param_3[2]))) goto LAB_14800b355;
  }
  *(double *)((longlong)dVar3 + 0x50) = param_3[2];
  dVar1 = param_3[1];
  *(double *)((longlong)dVar3 + 0x40) = *param_3;
  *(double *)((longlong)dVar3 + 0x48) = dVar1;
LAB_14800b355:
  FUN_14800628c(param_1,param_2,dVar3);
  if (dVar3 != 0.0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(dVar3);
  }
  bVar2 = DAT_14c950c29;
  *(double *)(param_2 + 0x60) = dVar3;
  if ((dVar3 != 0.0) && ((bVar2 & 1) != 0)) {
    FUN_1456cec3c(dVar3);
  }
  param_3[3] = dVar3;
  return;
}



// FUNCTION 14800b3ad FUN_14800b3ad body=597 status=ok
// SIG undefined FUN_14800b3ad(void)

longlong * FUN_14800b3ad(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  void *_Src;
  undefined2 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  void *local_d0;
  int local_c8;
  undefined4 local_c4;
  undefined1 local_c0 [16];
  longlong *local_b0;
  ulonglong *local_a8;
  undefined2 *local_a0;
  int local_98;
  undefined2 *local_90;
  int local_88;
  longlong local_80 [4];
  undefined1 local_60 [32];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_80[0] = *(longlong *)(*param_1 + 0x18);
  FUN_1400021e4(local_80,local_c0);
  FUN_14146ec20(local_80,local_c0);
  local_d0 = (void *)0x0;
  local_c8 = *(int *)(param_2 + 1);
  lVar3 = (longlong)local_c8;
  _Src = (void *)*param_2;
  if (lVar3 == 0) {
    local_c4 = 0;
  }
  else {
    FUN_1446dd670(&local_d0,local_c8,0);
    memcpy(local_d0,_Src,lVar3 * 2);
  }
  FUN_14146ec20(local_60,&local_d0);
  local_a8 = &local_40;
  local_b0 = local_80;
  FUN_1407adb6e(&local_a0);
  FUN_140230a2e(&local_90,L"Override_{0}_{1}",&local_a0);
  FUN_1407adb3e(local_a0,local_98);
  if (local_a0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  lVar3 = 0x40;
  do {
    if (*(longlong *)((longlong)&local_90 + lVar3) != 0) {
      FUN_1400020a8();
    }
    lVar3 = lVar3 + -0x20;
  } while (lVar3 != 0);
  if (param_3 == (longlong *)0x0) {
    puVar1 = local_90;
    if (local_88 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_d8,puVar1,1);
    param_3 = (longlong *)FUN_14800b603(*param_1,local_d8);
  }
  else {
    local_a0 = (undefined2 *)param_3[3];
    FUN_1400021e4(&local_a0,local_80);
    FUN_1400b22c2(&local_a0,"REUSABLE_");
    iVar2 = local_98 + -1;
    puVar1 = local_a0;
    if (local_98 == 0) {
      puVar1 = &DAT_149dfb77a;
      iVar2 = 0;
    }
    FUN_140c540b4(local_80,puVar1,iVar2,0);
    if (local_a0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    puVar1 = local_90;
    if (local_88 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    (**(code **)(*param_3 + 0x170))(param_3,puVar1,0,0x20);
    if (local_80[0] != 0) {
      FUN_1400020a8();
    }
  }
  *(undefined1 *)((longlong)param_3 + 0x2a) = 1;
  *(undefined2 *)(param_3 + 5) = 0x100;
  if (local_90 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14800b603 FUN_14800b603 body=183 status=ok
// SIG undefined FUN_14800b603(void)

undefined8 FUN_14800b603(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_1458bc9ba();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 8;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14800b6bb FUN_14800b6bb body=641 status=ok
// SIG undefined FUN_14800b6bb(void)

void FUN_14800b6bb(longlong *param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_138 [32];
  undefined1 local_118 [4];
  undefined1 local_114 [4];
  longlong *local_110 [2];
  undefined8 local_100;
  longlong *local_f8;
  undefined8 local_f0;
  longlong *local_e8 [2];
  longlong *local_d8 [2];
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  wchar_t **local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80 [2];
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((*(longlong *)(param_3 + 0x30) != 0) &&
     (*(longlong *)(*(longlong *)(param_3 + 0x30) + 0x20) != *param_1)) {
    FUN_145715fae(local_d8,param_2 + 0x38);
    local_f0 = *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 0x18);
    FUN_145715fae(local_e8);
    local_88 = L"CameraParameterDrivenTwice";
    local_80[0] = 0x1a;
    FUN_1446e940c(local_114,&local_88);
    local_88 = L"CameraRigAssetBuilder";
    local_80[0] = 0x15;
    FUN_1446e940c(local_118,&local_88);
    FUN_140208bae(local_110,local_118,local_114,
                  L"Camera node parameter \'{0}.{1}\' is both exposed and driven by a variable!");
    FUN_14023409e(&local_100,local_110,1);
    local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
    FUN_14023423e(local_78,local_e8);
    local_68 = 4;
    FUN_14023423e(local_58,local_d8);
    local_a0 = &local_48;
    local_a8 = &local_88;
    FUN_14010d304(&local_98);
    local_b8 = local_100;
    local_b0 = local_f8;
    if (local_f8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_f8 + 1) = (int)local_f8[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_c8,&local_b8,&local_98);
    FUN_14007f2db(local_98,local_90);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    lVar3 = 0x30;
    do {
      plVar2 = *(longlong **)((longlong)local_80 + lVar3 + -8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))();
        *(undefined8 *)((longlong)local_80 + lVar3 + -8) = 0;
        *(undefined4 *)((longlong)local_80 + lVar3) = 0;
      }
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != -0x10);
    if (local_f8 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_f8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_f8)(local_f8);
        LOCK();
        piVar1 = (int *)((longlong)local_f8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_f8 + 0x10))(local_f8);
        }
      }
    }
    if (local_e8[0] != (longlong *)0x0) {
      (**(code **)(*local_e8[0] + 0x10))();
    }
    if (local_d8[0] != (longlong *)0x0) {
      (**(code **)(*local_d8[0] + 0x10))();
    }
    FUN_147fd2e2c(*(undefined8 *)param_1[1],1,local_c8);
    if (local_c8[0] != (longlong *)0x0) {
      (**(code **)(*local_c8[0] + 0x10))();
    }
    if (local_110[0] != (longlong *)0x0) {
      (**(code **)(*local_110[0] + 0x10))();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14800b93e FUN_14800b93e body=334 status=ok
// SIG undefined FUN_14800b93e(void)

undefined8 FUN_14800b93e(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)(param_1 + 8);
  local_20 = param_2;
  local_18 = param_3;
  if (*(int *)(lVar2 + 0x28) != *(int *)(lVar2 + 0x54)) {
    uVar3 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    uVar4 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    uVar4 = uVar4 >> 0x10 ^ uVar4;
    lVar7 = lVar2 + 0x58;
    if (*(longlong *)(lVar2 + 0x60) != 0) {
      lVar7 = *(longlong *)(lVar2 + 0x60);
    }
    iVar6 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(lVar2 + 0x68) - 1U &
                             (uVar4 * 0x40 + (uVar3 >> 0x10 ^ uVar3) + (uVar4 >> 2) + 0x9e3779b9 ^
                             uVar4)) * 4);
    if (iVar6 != -1) {
      lVar7 = *(longlong *)(lVar2 + 0x20);
      uVar5 = 0;
      do {
        lVar8 = (longlong)iVar6 * 0x20;
        lVar1 = lVar7 + lVar8;
        if ((*(ulonglong *)(lVar7 + lVar8) == param_2) &&
           (*(ulonglong *)(lVar7 + 8 + lVar8) == param_3)) {
          if ((undefined8 *)(lVar1 + 0x10) == (undefined8 *)0x0 || lVar1 == 0) goto LAB_14800b968;
          uVar5 = *(undefined8 *)(lVar1 + 0x10);
          FUN_148005ef8((longlong *)(lVar2 + 0x20),&local_20);
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x18);
      } while (iVar6 != -1);
      goto LAB_14800b96a;
    }
  }
LAB_14800b968:
  uVar5 = 0;
LAB_14800b96a:
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 14800ba8d FUN_14800ba8d body=262 status=ok
// SIG undefined FUN_14800ba8d(void)

void FUN_14800ba8d(undefined8 param_1,longlong param_2,float *param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  byte bVar16;
  longlong lVar17;
  int iVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  
  uVar20 = param_1;
  lVar17 = FUN_14800bb93(param_1,param_2 + 0x40,param_4);
  auVar2._4_4_ = -(uint)(*(float *)(lVar17 + 0x54) != param_3[5]);
  auVar2._0_4_ = -(uint)(*(float *)(lVar17 + 0x50) != param_3[4]);
  auVar2._8_4_ = -(uint)(*(float *)(lVar17 + 0x58) != param_3[6]);
  auVar2._12_4_ = -(uint)(*(float *)(lVar17 + 0x5c) != param_3[7]);
  iVar18 = movmskps((int)uVar20,auVar2);
  if (iVar18 == 0) {
    fVar5 = *(float *)(lVar17 + 0x40);
    auVar4._4_4_ = -(uint)(*(float *)(lVar17 + 0x44) != param_3[1]);
    auVar4._0_4_ = -(uint)(fVar5 != *param_3);
    auVar4._8_4_ = -(uint)(*(float *)(lVar17 + 0x48) != param_3[2]);
    auVar4._12_4_ = -(uint)(*(float *)(lVar17 + 0x4c) != param_3[3]);
    iVar18 = movmskps(0,auVar4);
    uVar19 = 0;
    if ((iVar18 == 0) ||
       (auVar1._4_4_ = -(uint)(*(float *)(lVar17 + 0x44) + param_3[1] != 0.0),
       auVar1._0_4_ = -(uint)(fVar5 + *param_3 != 0.0),
       auVar1._8_4_ = -(uint)(*(float *)(lVar17 + 0x48) + param_3[2] != 0.0),
       auVar1._12_4_ = -(uint)(*(float *)(lVar17 + 0x4c) + param_3[3] != 0.0),
       uVar19 = movmskps(iVar18,auVar1), (char)uVar19 == '\0')) {
      auVar3._4_4_ = -(uint)(*(float *)(lVar17 + 100) != param_3[9]);
      auVar3._0_4_ = -(uint)(*(float *)(lVar17 + 0x60) != param_3[8]);
      auVar3._8_4_ = -(uint)(*(float *)(lVar17 + 0x68) != param_3[10]);
      auVar3._12_4_ = -(uint)(*(float *)(lVar17 + 0x6c) != param_3[0xb]);
      iVar18 = movmskps(uVar19,auVar3);
      if (iVar18 == 0) goto LAB_14800bb3b;
    }
  }
  fVar5 = *param_3;
  fVar6 = param_3[1];
  fVar7 = param_3[2];
  fVar8 = param_3[3];
  fVar9 = param_3[4];
  fVar10 = param_3[5];
  fVar11 = param_3[6];
  fVar12 = param_3[7];
  fVar13 = param_3[9];
  fVar14 = param_3[10];
  fVar15 = param_3[0xb];
  *(float *)(lVar17 + 0x60) = param_3[8];
  *(float *)(lVar17 + 100) = fVar13;
  *(float *)(lVar17 + 0x68) = fVar14;
  *(float *)(lVar17 + 0x6c) = fVar15;
  *(float *)(lVar17 + 0x50) = fVar9;
  *(float *)(lVar17 + 0x54) = fVar10;
  *(float *)(lVar17 + 0x58) = fVar11;
  *(float *)(lVar17 + 0x5c) = fVar12;
  *(float *)(lVar17 + 0x40) = fVar5;
  *(float *)(lVar17 + 0x44) = fVar6;
  *(float *)(lVar17 + 0x48) = fVar7;
  *(float *)(lVar17 + 0x4c) = fVar8;
LAB_14800bb3b:
  FUN_14800628c(param_1,param_2,lVar17);
  if (lVar17 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar17);
  }
  bVar16 = DAT_14c950c29;
  *(longlong *)(param_2 + 0x60) = lVar17;
  if ((lVar17 != 0) && ((bVar16 & 1) != 0)) {
    FUN_1456cec3c(lVar17);
  }
  *(longlong *)(param_3 + 0xc) = lVar17;
  return;
}



// FUNCTION 14800bb93 FUN_14800bb93 body=597 status=ok
// SIG undefined FUN_14800bb93(void)

longlong * FUN_14800bb93(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  void *_Src;
  undefined2 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  void *local_d0;
  int local_c8;
  undefined4 local_c4;
  undefined1 local_c0 [16];
  longlong *local_b0;
  ulonglong *local_a8;
  undefined2 *local_a0;
  int local_98;
  undefined2 *local_90;
  int local_88;
  longlong local_80 [4];
  undefined1 local_60 [32];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_80[0] = *(longlong *)(*param_1 + 0x18);
  FUN_1400021e4(local_80,local_c0);
  FUN_14146ec20(local_80,local_c0);
  local_d0 = (void *)0x0;
  local_c8 = *(int *)(param_2 + 1);
  lVar3 = (longlong)local_c8;
  _Src = (void *)*param_2;
  if (lVar3 == 0) {
    local_c4 = 0;
  }
  else {
    FUN_1446dd670(&local_d0,local_c8,0);
    memcpy(local_d0,_Src,lVar3 * 2);
  }
  FUN_14146ec20(local_60,&local_d0);
  local_a8 = &local_40;
  local_b0 = local_80;
  FUN_1407adb6e(&local_a0);
  FUN_140230a2e(&local_90,L"Override_{0}_{1}",&local_a0);
  FUN_1407adb3e(local_a0,local_98);
  if (local_a0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  lVar3 = 0x40;
  do {
    if (*(longlong *)((longlong)&local_90 + lVar3) != 0) {
      FUN_1400020a8();
    }
    lVar3 = lVar3 + -0x20;
  } while (lVar3 != 0);
  if (param_3 == (longlong *)0x0) {
    puVar1 = local_90;
    if (local_88 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_d8,puVar1,1);
    param_3 = (longlong *)FUN_14800bde9(*param_1,local_d8);
  }
  else {
    local_a0 = (undefined2 *)param_3[3];
    FUN_1400021e4(&local_a0,local_80);
    FUN_1400b22c2(&local_a0,"REUSABLE_");
    iVar2 = local_98 + -1;
    puVar1 = local_a0;
    if (local_98 == 0) {
      puVar1 = &DAT_149dfb77a;
      iVar2 = 0;
    }
    FUN_140c540b4(local_80,puVar1,iVar2,0);
    if (local_a0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    puVar1 = local_90;
    if (local_88 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    (**(code **)(*param_3 + 0x170))(param_3,puVar1,0,0x20);
    if (local_80[0] != 0) {
      FUN_1400020a8();
    }
  }
  *(undefined1 *)((longlong)param_3 + 0x2a) = 1;
  *(undefined2 *)(param_3 + 5) = 0x100;
  if (local_90 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14800bde9 FUN_14800bde9 body=183 status=ok
// SIG undefined FUN_14800bde9(void)

undefined8 FUN_14800bde9(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_14595ae6a();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 8;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14800bea1 FUN_14800bea1 body=641 status=ok
// SIG undefined FUN_14800bea1(void)

void FUN_14800bea1(longlong *param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_138 [32];
  undefined1 local_118 [4];
  undefined1 local_114 [4];
  longlong *local_110 [2];
  undefined8 local_100;
  longlong *local_f8;
  undefined8 local_f0;
  longlong *local_e8 [2];
  longlong *local_d8 [2];
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  wchar_t **local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80 [2];
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((*(longlong *)(param_3 + 0x60) != 0) &&
     (*(longlong *)(*(longlong *)(param_3 + 0x60) + 0x20) != *param_1)) {
    FUN_145715fae(local_d8,param_2 + 0x38);
    local_f0 = *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 0x18);
    FUN_145715fae(local_e8);
    local_88 = L"CameraParameterDrivenTwice";
    local_80[0] = 0x1a;
    FUN_1446e940c(local_114,&local_88);
    local_88 = L"CameraRigAssetBuilder";
    local_80[0] = 0x15;
    FUN_1446e940c(local_118,&local_88);
    FUN_140208bae(local_110,local_118,local_114,
                  L"Camera node parameter \'{0}.{1}\' is both exposed and driven by a variable!");
    FUN_14023409e(&local_100,local_110,1);
    local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
    FUN_14023423e(local_78,local_e8);
    local_68 = 4;
    FUN_14023423e(local_58,local_d8);
    local_a0 = &local_48;
    local_a8 = &local_88;
    FUN_14010d304(&local_98);
    local_b8 = local_100;
    local_b0 = local_f8;
    if (local_f8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_f8 + 1) = (int)local_f8[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_c8,&local_b8,&local_98);
    FUN_14007f2db(local_98,local_90);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    lVar3 = 0x30;
    do {
      plVar2 = *(longlong **)((longlong)local_80 + lVar3 + -8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))();
        *(undefined8 *)((longlong)local_80 + lVar3 + -8) = 0;
        *(undefined4 *)((longlong)local_80 + lVar3) = 0;
      }
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != -0x10);
    if (local_f8 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_f8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_f8)(local_f8);
        LOCK();
        piVar1 = (int *)((longlong)local_f8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_f8 + 0x10))(local_f8);
        }
      }
    }
    if (local_e8[0] != (longlong *)0x0) {
      (**(code **)(*local_e8[0] + 0x10))();
    }
    if (local_d8[0] != (longlong *)0x0) {
      (**(code **)(*local_d8[0] + 0x10))();
    }
    FUN_147fd2e2c(*(undefined8 *)param_1[1],1,local_c8);
    if (local_c8[0] != (longlong *)0x0) {
      (**(code **)(*local_c8[0] + 0x10))();
    }
    if (local_110[0] != (longlong *)0x0) {
      (**(code **)(*local_110[0] + 0x10))();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14800c124 FUN_14800c124 body=334 status=ok
// SIG undefined FUN_14800c124(void)

undefined8 FUN_14800c124(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)(param_1 + 8);
  local_20 = param_2;
  local_18 = param_3;
  if (*(int *)(lVar2 + 0x28) != *(int *)(lVar2 + 0x54)) {
    uVar3 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    uVar4 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    uVar4 = uVar4 >> 0x10 ^ uVar4;
    lVar7 = lVar2 + 0x58;
    if (*(longlong *)(lVar2 + 0x60) != 0) {
      lVar7 = *(longlong *)(lVar2 + 0x60);
    }
    iVar6 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(lVar2 + 0x68) - 1U &
                             (uVar4 * 0x40 + (uVar3 >> 0x10 ^ uVar3) + (uVar4 >> 2) + 0x9e3779b9 ^
                             uVar4)) * 4);
    if (iVar6 != -1) {
      lVar7 = *(longlong *)(lVar2 + 0x20);
      uVar5 = 0;
      do {
        lVar8 = (longlong)iVar6 * 0x20;
        lVar1 = lVar7 + lVar8;
        if ((*(ulonglong *)(lVar7 + lVar8) == param_2) &&
           (*(ulonglong *)(lVar7 + 8 + lVar8) == param_3)) {
          if ((undefined8 *)(lVar1 + 0x10) == (undefined8 *)0x0 || lVar1 == 0) goto LAB_14800c14e;
          uVar5 = *(undefined8 *)(lVar1 + 0x10);
          FUN_148005ef8((longlong *)(lVar2 + 0x20),&local_20);
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x18);
      } while (iVar6 != -1);
      goto LAB_14800c150;
    }
  }
LAB_14800c14e:
  uVar5 = 0;
LAB_14800c150:
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 14800c273 FUN_14800c273 body=132 status=ok
// SIG undefined FUN_14800c273(void)

void FUN_14800c273(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = FUN_14800c2f7(param_1,param_2 + 0x40,param_4);
  FUN_147fddc19(lVar2,param_3);
  FUN_14800628c(param_1,param_2,lVar2);
  if (lVar2 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar2);
  }
  bVar1 = DAT_14c950c29;
  *(longlong *)(param_2 + 0x60) = lVar2;
  if ((lVar2 != 0) && ((bVar1 & 1) != 0)) {
    FUN_1456cec3c(lVar2);
  }
  *(longlong *)(param_3 + 0x60) = lVar2;
  return;
}



// FUNCTION 14800c2f7 FUN_14800c2f7 body=597 status=ok
// SIG undefined FUN_14800c2f7(void)

longlong * FUN_14800c2f7(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  void *_Src;
  undefined2 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  void *local_d0;
  int local_c8;
  undefined4 local_c4;
  undefined1 local_c0 [16];
  longlong *local_b0;
  ulonglong *local_a8;
  undefined2 *local_a0;
  int local_98;
  undefined2 *local_90;
  int local_88;
  longlong local_80 [4];
  undefined1 local_60 [32];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_80[0] = *(longlong *)(*param_1 + 0x18);
  FUN_1400021e4(local_80,local_c0);
  FUN_14146ec20(local_80,local_c0);
  local_d0 = (void *)0x0;
  local_c8 = *(int *)(param_2 + 1);
  lVar3 = (longlong)local_c8;
  _Src = (void *)*param_2;
  if (lVar3 == 0) {
    local_c4 = 0;
  }
  else {
    FUN_1446dd670(&local_d0,local_c8,0);
    memcpy(local_d0,_Src,lVar3 * 2);
  }
  FUN_14146ec20(local_60,&local_d0);
  local_a8 = &local_40;
  local_b0 = local_80;
  FUN_1407adb6e(&local_a0);
  FUN_140230a2e(&local_90,L"Override_{0}_{1}",&local_a0);
  FUN_1407adb3e(local_a0,local_98);
  if (local_a0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  lVar3 = 0x40;
  do {
    if (*(longlong *)((longlong)&local_90 + lVar3) != 0) {
      FUN_1400020a8();
    }
    lVar3 = lVar3 + -0x20;
  } while (lVar3 != 0);
  if (param_3 == (longlong *)0x0) {
    puVar1 = local_90;
    if (local_88 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_d8,puVar1,1);
    param_3 = (longlong *)FUN_14800c54d(*param_1,local_d8);
  }
  else {
    local_a0 = (undefined2 *)param_3[3];
    FUN_1400021e4(&local_a0,local_80);
    FUN_1400b22c2(&local_a0,"REUSABLE_");
    iVar2 = local_98 + -1;
    puVar1 = local_a0;
    if (local_98 == 0) {
      puVar1 = &DAT_149dfb77a;
      iVar2 = 0;
    }
    FUN_140c540b4(local_80,puVar1,iVar2,0);
    if (local_a0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    puVar1 = local_90;
    if (local_88 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    (**(code **)(*param_3 + 0x170))(param_3,puVar1,0,0x20);
    if (local_80[0] != 0) {
      FUN_1400020a8();
    }
  }
  *(undefined1 *)((longlong)param_3 + 0x2a) = 1;
  *(undefined2 *)(param_3 + 5) = 0x100;
  if (local_90 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14800c54d FUN_14800c54d body=183 status=ok
// SIG undefined FUN_14800c54d(void)

undefined8 FUN_14800c54d(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_1458bcaa4();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 8;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14800c606 FUN_14800c606 body=269 status=ok
// SIG undefined FUN_14800c606(void)

longlong FUN_14800c606(longlong param_1,undefined4 *param_2,ulonglong param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  plVar5 = (longlong *)(*(longlong *)(param_1 + 8) + 0x70);
  local_28 = param_3;
  uVar1 = FUN_1447addd0(&local_38,0x10);
  uVar4 = ((uint)(local_28 >> 0x14) & 0xffff ^ (uint)(local_28 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  iVar2 = FUN_148005046(plVar5,(uVar4 >> 0x10 ^ uVar4) + (uVar1 >> 2) + uVar1 * 0x40 + 0x9e3779b9 ^
                               uVar1,&local_38);
  if ((iVar2 != -1) &&
     (lVar6 = *plVar5 + (longlong)iVar2 * 0x28, plVar5 = (longlong *)(lVar6 + 0x18),
     plVar5 != (longlong *)0x0 && lVar6 != 0)) {
    lVar6 = *plVar5;
    FUN_14800c714(*(longlong *)(param_1 + 8) + 0x70,&local_38);
    if (lVar6 != 0) {
      lVar3 = FUN_1458bc354();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) goto LAB_14800c6b6;
    }
  }
  lVar6 = 0;
LAB_14800c6b6:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar6;
}



// FUNCTION 14800c714 FUN_14800c714 body=248 status=ok
// SIG undefined FUN_14800c714(void)

void FUN_14800c714(longlong *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  uint uVar7;
  longlong lVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar5 = FUN_1447addd0(param_2,0x10);
    uVar3 = *(ulonglong *)(param_2 + 4);
    uVar7 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
    uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar6 +
                    ((longlong)
                     (int)((uVar7 >> 0x10 ^ uVar7) + (uVar5 >> 2) + uVar5 * 0x40 + 0x9e3779b9 ^
                          uVar5) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar4 = *param_1;
      do {
        lVar8 = (longlong)iVar2;
        piVar1 = (int *)(lVar4 + lVar8 * 0x28);
        if ((((*piVar1 == *param_2) && (*(int *)(lVar4 + 4 + lVar8 * 0x28) == param_2[1])) &&
            (*(int *)(lVar4 + 8 + lVar8 * 0x28) == param_2[2])) &&
           ((*(int *)(lVar4 + 0xc + lVar8 * 0x28) == param_2[3] &&
            (*(ulonglong *)(piVar1 + 4) == uVar3)))) {
          FUN_14800c80c(param_1);
          return;
        }
        iVar2 = piVar1[8];
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 14800c80c FUN_14800c80c body=87 status=ok
// SIG undefined FUN_14800c80c(void)

void FUN_14800c80c(longlong *param_1,int param_2)

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
  FUN_1480050c6();
  return;
}



// FUNCTION 14800c864 FUN_14800c864 body=269 status=ok
// SIG undefined FUN_14800c864(void)

longlong FUN_14800c864(longlong param_1,undefined4 *param_2,ulonglong param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  plVar5 = (longlong *)(*(longlong *)(param_1 + 8) + 0x70);
  local_28 = param_3;
  uVar1 = FUN_1447addd0(&local_38,0x10);
  uVar4 = ((uint)(local_28 >> 0x14) & 0xffff ^ (uint)(local_28 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  iVar2 = FUN_148005046(plVar5,(uVar4 >> 0x10 ^ uVar4) + (uVar1 >> 2) + uVar1 * 0x40 + 0x9e3779b9 ^
                               uVar1,&local_38);
  if ((iVar2 != -1) &&
     (lVar6 = *plVar5 + (longlong)iVar2 * 0x28, plVar5 = (longlong *)(lVar6 + 0x18),
     plVar5 != (longlong *)0x0 && lVar6 != 0)) {
    lVar6 = *plVar5;
    FUN_14800c714(*(longlong *)(param_1 + 8) + 0x70,&local_38);
    if (lVar6 != 0) {
      lVar3 = FUN_1458bc43e();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) goto LAB_14800c914;
    }
  }
  lVar6 = 0;
LAB_14800c914:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar6;
}



// FUNCTION 14800c972 FUN_14800c972 body=269 status=ok
// SIG undefined FUN_14800c972(void)

longlong FUN_14800c972(longlong param_1,undefined4 *param_2,ulonglong param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  plVar5 = (longlong *)(*(longlong *)(param_1 + 8) + 0x70);
  local_28 = param_3;
  uVar1 = FUN_1447addd0(&local_38,0x10);
  uVar4 = ((uint)(local_28 >> 0x14) & 0xffff ^ (uint)(local_28 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  iVar2 = FUN_148005046(plVar5,(uVar4 >> 0x10 ^ uVar4) + (uVar1 >> 2) + uVar1 * 0x40 + 0x9e3779b9 ^
                               uVar1,&local_38);
  if ((iVar2 != -1) &&
     (lVar6 = *plVar5 + (longlong)iVar2 * 0x28, plVar5 = (longlong *)(lVar6 + 0x18),
     plVar5 != (longlong *)0x0 && lVar6 != 0)) {
    lVar6 = *plVar5;
    FUN_14800c714(*(longlong *)(param_1 + 8) + 0x70,&local_38);
    if (lVar6 != 0) {
      lVar3 = FUN_1458bc528();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) goto LAB_14800ca22;
    }
  }
  lVar6 = 0;
LAB_14800ca22:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar6;
}



// FUNCTION 14800ca80 FUN_14800ca80 body=269 status=ok
// SIG undefined FUN_14800ca80(void)

longlong FUN_14800ca80(longlong param_1,undefined4 *param_2,ulonglong param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  plVar5 = (longlong *)(*(longlong *)(param_1 + 8) + 0x70);
  local_28 = param_3;
  uVar1 = FUN_1447addd0(&local_38,0x10);
  uVar4 = ((uint)(local_28 >> 0x14) & 0xffff ^ (uint)(local_28 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  iVar2 = FUN_148005046(plVar5,(uVar4 >> 0x10 ^ uVar4) + (uVar1 >> 2) + uVar1 * 0x40 + 0x9e3779b9 ^
                               uVar1,&local_38);
  if ((iVar2 != -1) &&
     (lVar6 = *plVar5 + (longlong)iVar2 * 0x28, plVar5 = (longlong *)(lVar6 + 0x18),
     plVar5 != (longlong *)0x0 && lVar6 != 0)) {
    lVar6 = *plVar5;
    FUN_14800c714(*(longlong *)(param_1 + 8) + 0x70,&local_38);
    if (lVar6 != 0) {
      lVar3 = FUN_1458bc612();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) goto LAB_14800cb30;
    }
  }
  lVar6 = 0;
LAB_14800cb30:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar6;
}



// FUNCTION 14800cb8e FUN_14800cb8e body=269 status=ok
// SIG undefined FUN_14800cb8e(void)

longlong FUN_14800cb8e(longlong param_1,undefined4 *param_2,ulonglong param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  plVar5 = (longlong *)(*(longlong *)(param_1 + 8) + 0x70);
  local_28 = param_3;
  uVar1 = FUN_1447addd0(&local_38,0x10);
  uVar4 = ((uint)(local_28 >> 0x14) & 0xffff ^ (uint)(local_28 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  iVar2 = FUN_148005046(plVar5,(uVar4 >> 0x10 ^ uVar4) + (uVar1 >> 2) + uVar1 * 0x40 + 0x9e3779b9 ^
                               uVar1,&local_38);
  if ((iVar2 != -1) &&
     (lVar6 = *plVar5 + (longlong)iVar2 * 0x28, plVar5 = (longlong *)(lVar6 + 0x18),
     plVar5 != (longlong *)0x0 && lVar6 != 0)) {
    lVar6 = *plVar5;
    FUN_14800c714(*(longlong *)(param_1 + 8) + 0x70,&local_38);
    if (lVar6 != 0) {
      lVar3 = FUN_14595aac2();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) goto LAB_14800cc3e;
    }
  }
  lVar6 = 0;
LAB_14800cc3e:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar6;
}



// FUNCTION 14800cc9c FUN_14800cc9c body=269 status=ok
// SIG undefined FUN_14800cc9c(void)

longlong FUN_14800cc9c(longlong param_1,undefined4 *param_2,ulonglong param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  plVar5 = (longlong *)(*(longlong *)(param_1 + 8) + 0x70);
  local_28 = param_3;
  uVar1 = FUN_1447addd0(&local_38,0x10);
  uVar4 = ((uint)(local_28 >> 0x14) & 0xffff ^ (uint)(local_28 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  iVar2 = FUN_148005046(plVar5,(uVar4 >> 0x10 ^ uVar4) + (uVar1 >> 2) + uVar1 * 0x40 + 0x9e3779b9 ^
                               uVar1,&local_38);
  if ((iVar2 != -1) &&
     (lVar6 = *plVar5 + (longlong)iVar2 * 0x28, plVar5 = (longlong *)(lVar6 + 0x18),
     plVar5 != (longlong *)0x0 && lVar6 != 0)) {
    lVar6 = *plVar5;
    FUN_14800c714(*(longlong *)(param_1 + 8) + 0x70,&local_38);
    if (lVar6 != 0) {
      lVar3 = FUN_1458bc6fc();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) goto LAB_14800cd4c;
    }
  }
  lVar6 = 0;
LAB_14800cd4c:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar6;
}



// FUNCTION 14800cdaa FUN_14800cdaa body=269 status=ok
// SIG undefined FUN_14800cdaa(void)

longlong FUN_14800cdaa(longlong param_1,undefined4 *param_2,ulonglong param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  plVar5 = (longlong *)(*(longlong *)(param_1 + 8) + 0x70);
  local_28 = param_3;
  uVar1 = FUN_1447addd0(&local_38,0x10);
  uVar4 = ((uint)(local_28 >> 0x14) & 0xffff ^ (uint)(local_28 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  iVar2 = FUN_148005046(plVar5,(uVar4 >> 0x10 ^ uVar4) + (uVar1 >> 2) + uVar1 * 0x40 + 0x9e3779b9 ^
                               uVar1,&local_38);
  if ((iVar2 != -1) &&
     (lVar6 = *plVar5 + (longlong)iVar2 * 0x28, plVar5 = (longlong *)(lVar6 + 0x18),
     plVar5 != (longlong *)0x0 && lVar6 != 0)) {
    lVar6 = *plVar5;
    FUN_14800c714(*(longlong *)(param_1 + 8) + 0x70,&local_38);
    if (lVar6 != 0) {
      lVar3 = FUN_14595abac();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) goto LAB_14800ce5a;
    }
  }
  lVar6 = 0;
LAB_14800ce5a:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar6;
}



// FUNCTION 14800ceb8 FUN_14800ceb8 body=269 status=ok
// SIG undefined FUN_14800ceb8(void)

longlong FUN_14800ceb8(longlong param_1,undefined4 *param_2,ulonglong param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  plVar5 = (longlong *)(*(longlong *)(param_1 + 8) + 0x70);
  local_28 = param_3;
  uVar1 = FUN_1447addd0(&local_38,0x10);
  uVar4 = ((uint)(local_28 >> 0x14) & 0xffff ^ (uint)(local_28 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  iVar2 = FUN_148005046(plVar5,(uVar4 >> 0x10 ^ uVar4) + (uVar1 >> 2) + uVar1 * 0x40 + 0x9e3779b9 ^
                               uVar1,&local_38);
  if ((iVar2 != -1) &&
     (lVar6 = *plVar5 + (longlong)iVar2 * 0x28, plVar5 = (longlong *)(lVar6 + 0x18),
     plVar5 != (longlong *)0x0 && lVar6 != 0)) {
    lVar6 = *plVar5;
    FUN_14800c714(*(longlong *)(param_1 + 8) + 0x70,&local_38);
    if (lVar6 != 0) {
      lVar3 = FUN_1458bc7e6();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) goto LAB_14800cf68;
    }
  }
  lVar6 = 0;
LAB_14800cf68:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar6;
}



// FUNCTION 14800cfc6 FUN_14800cfc6 body=269 status=ok
// SIG undefined FUN_14800cfc6(void)

longlong FUN_14800cfc6(longlong param_1,undefined4 *param_2,ulonglong param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  plVar5 = (longlong *)(*(longlong *)(param_1 + 8) + 0x70);
  local_28 = param_3;
  uVar1 = FUN_1447addd0(&local_38,0x10);
  uVar4 = ((uint)(local_28 >> 0x14) & 0xffff ^ (uint)(local_28 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  iVar2 = FUN_148005046(plVar5,(uVar4 >> 0x10 ^ uVar4) + (uVar1 >> 2) + uVar1 * 0x40 + 0x9e3779b9 ^
                               uVar1,&local_38);
  if ((iVar2 != -1) &&
     (lVar6 = *plVar5 + (longlong)iVar2 * 0x28, plVar5 = (longlong *)(lVar6 + 0x18),
     plVar5 != (longlong *)0x0 && lVar6 != 0)) {
    lVar6 = *plVar5;
    FUN_14800c714(*(longlong *)(param_1 + 8) + 0x70,&local_38);
    if (lVar6 != 0) {
      lVar3 = FUN_14595ac96();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) goto LAB_14800d076;
    }
  }
  lVar6 = 0;
LAB_14800d076:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar6;
}



// FUNCTION 14800d0d4 FUN_14800d0d4 body=269 status=ok
// SIG undefined FUN_14800d0d4(void)

longlong FUN_14800d0d4(longlong param_1,undefined4 *param_2,ulonglong param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  plVar5 = (longlong *)(*(longlong *)(param_1 + 8) + 0x70);
  local_28 = param_3;
  uVar1 = FUN_1447addd0(&local_38,0x10);
  uVar4 = ((uint)(local_28 >> 0x14) & 0xffff ^ (uint)(local_28 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  iVar2 = FUN_148005046(plVar5,(uVar4 >> 0x10 ^ uVar4) + (uVar1 >> 2) + uVar1 * 0x40 + 0x9e3779b9 ^
                               uVar1,&local_38);
  if ((iVar2 != -1) &&
     (lVar6 = *plVar5 + (longlong)iVar2 * 0x28, plVar5 = (longlong *)(lVar6 + 0x18),
     plVar5 != (longlong *)0x0 && lVar6 != 0)) {
    lVar6 = *plVar5;
    FUN_14800c714(*(longlong *)(param_1 + 8) + 0x70,&local_38);
    if (lVar6 != 0) {
      lVar3 = FUN_1458bc8d0();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) goto LAB_14800d184;
    }
  }
  lVar6 = 0;
LAB_14800d184:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar6;
}



// FUNCTION 14800d1e2 FUN_14800d1e2 body=269 status=ok
// SIG undefined FUN_14800d1e2(void)

longlong FUN_14800d1e2(longlong param_1,undefined4 *param_2,ulonglong param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  plVar5 = (longlong *)(*(longlong *)(param_1 + 8) + 0x70);
  local_28 = param_3;
  uVar1 = FUN_1447addd0(&local_38,0x10);
  uVar4 = ((uint)(local_28 >> 0x14) & 0xffff ^ (uint)(local_28 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  iVar2 = FUN_148005046(plVar5,(uVar4 >> 0x10 ^ uVar4) + (uVar1 >> 2) + uVar1 * 0x40 + 0x9e3779b9 ^
                               uVar1,&local_38);
  if ((iVar2 != -1) &&
     (lVar6 = *plVar5 + (longlong)iVar2 * 0x28, plVar5 = (longlong *)(lVar6 + 0x18),
     plVar5 != (longlong *)0x0 && lVar6 != 0)) {
    lVar6 = *plVar5;
    FUN_14800c714(*(longlong *)(param_1 + 8) + 0x70,&local_38);
    if (lVar6 != 0) {
      lVar3 = FUN_14595ad80();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) goto LAB_14800d292;
    }
  }
  lVar6 = 0;
LAB_14800d292:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar6;
}



// FUNCTION 14800d2f0 FUN_14800d2f0 body=269 status=ok
// SIG undefined FUN_14800d2f0(void)

longlong FUN_14800d2f0(longlong param_1,undefined4 *param_2,ulonglong param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  plVar5 = (longlong *)(*(longlong *)(param_1 + 8) + 0x70);
  local_28 = param_3;
  uVar1 = FUN_1447addd0(&local_38,0x10);
  uVar4 = ((uint)(local_28 >> 0x14) & 0xffff ^ (uint)(local_28 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  iVar2 = FUN_148005046(plVar5,(uVar4 >> 0x10 ^ uVar4) + (uVar1 >> 2) + uVar1 * 0x40 + 0x9e3779b9 ^
                               uVar1,&local_38);
  if ((iVar2 != -1) &&
     (lVar6 = *plVar5 + (longlong)iVar2 * 0x28, plVar5 = (longlong *)(lVar6 + 0x18),
     plVar5 != (longlong *)0x0 && lVar6 != 0)) {
    lVar6 = *plVar5;
    FUN_14800c714(*(longlong *)(param_1 + 8) + 0x70,&local_38);
    if (lVar6 != 0) {
      lVar3 = FUN_1458bc9ba();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) goto LAB_14800d3a0;
    }
  }
  lVar6 = 0;
LAB_14800d3a0:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar6;
}



// FUNCTION 14800d3fe FUN_14800d3fe body=269 status=ok
// SIG undefined FUN_14800d3fe(void)

longlong FUN_14800d3fe(longlong param_1,undefined4 *param_2,ulonglong param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  plVar5 = (longlong *)(*(longlong *)(param_1 + 8) + 0x70);
  local_28 = param_3;
  uVar1 = FUN_1447addd0(&local_38,0x10);
  uVar4 = ((uint)(local_28 >> 0x14) & 0xffff ^ (uint)(local_28 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  iVar2 = FUN_148005046(plVar5,(uVar4 >> 0x10 ^ uVar4) + (uVar1 >> 2) + uVar1 * 0x40 + 0x9e3779b9 ^
                               uVar1,&local_38);
  if ((iVar2 != -1) &&
     (lVar6 = *plVar5 + (longlong)iVar2 * 0x28, plVar5 = (longlong *)(lVar6 + 0x18),
     plVar5 != (longlong *)0x0 && lVar6 != 0)) {
    lVar6 = *plVar5;
    FUN_14800c714(*(longlong *)(param_1 + 8) + 0x70,&local_38);
    if (lVar6 != 0) {
      lVar3 = FUN_14595ae6a();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) goto LAB_14800d4ae;
    }
  }
  lVar6 = 0;
LAB_14800d4ae:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar6;
}



// FUNCTION 14800d50c FUN_14800d50c body=269 status=ok
// SIG undefined FUN_14800d50c(void)

longlong FUN_14800d50c(longlong param_1,undefined4 *param_2,ulonglong param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  plVar5 = (longlong *)(*(longlong *)(param_1 + 8) + 0x70);
  local_28 = param_3;
  uVar1 = FUN_1447addd0(&local_38,0x10);
  uVar4 = ((uint)(local_28 >> 0x14) & 0xffff ^ (uint)(local_28 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  iVar2 = FUN_148005046(plVar5,(uVar4 >> 0x10 ^ uVar4) + (uVar1 >> 2) + uVar1 * 0x40 + 0x9e3779b9 ^
                               uVar1,&local_38);
  if ((iVar2 != -1) &&
     (lVar6 = *plVar5 + (longlong)iVar2 * 0x28, plVar5 = (longlong *)(lVar6 + 0x18),
     plVar5 != (longlong *)0x0 && lVar6 != 0)) {
    lVar6 = *plVar5;
    FUN_14800c714(*(longlong *)(param_1 + 8) + 0x70,&local_38);
    if (lVar6 != 0) {
      lVar3 = FUN_1458bcaa4();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) goto LAB_14800d5bc;
    }
  }
  lVar6 = 0;
LAB_14800d5bc:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar6;
}



// FUNCTION 14800d61a FUN_14800d61a body=68 status=ok
// SIG undefined FUN_14800d61a(void)

void FUN_14800d61a(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_14800d65e();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_140549ad6(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14800d65e FUN_14800d65e body=322 status=ok
// SIG undefined FUN_14800d65e(void)

void FUN_14800d65e(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x24 + (longlong)iVar4 * 0x28) * 4) =
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



// FUNCTION 14800d7a2 FUN_14800d7a2 body=113 status=ok
// SIG undefined FUN_14800d7a2(void)

void FUN_14800d7a2(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x48,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x48)) {
      uVar2 = uVar1 / 0x48 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x48,8);
  }
  return;
}



// FUNCTION 14800d814 FUN_14800d814 body=113 status=ok
// SIG undefined FUN_14800d814(void)

void FUN_14800d814(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x48,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x48)) {
      uVar2 = uVar1 / 0x48 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x48,8);
  }
  return;
}



// FUNCTION 14800d886 FUN_14800d886 body=113 status=ok
// SIG undefined FUN_14800d886(void)

void FUN_14800d886(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x48,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x48)) {
      uVar2 = uVar1 / 0x48 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x48,8);
  }
  return;
}



// FUNCTION 14800d8f8 FUN_14800d8f8 body=113 status=ok
// SIG undefined FUN_14800d8f8(void)

void FUN_14800d8f8(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x48,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x48)) {
      uVar2 = uVar1 / 0x48 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x48,8);
  }
  return;
}



// FUNCTION 14800d96a FUN_14800d96a body=113 status=ok
// SIG undefined FUN_14800d96a(void)

void FUN_14800d96a(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x48,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x48)) {
      uVar2 = uVar1 / 0x48 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x48,8);
  }
  return;
}



// FUNCTION 14800d9dc FUN_14800d9dc body=113 status=ok
// SIG undefined FUN_14800d9dc(void)

void FUN_14800d9dc(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x50,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x50)) {
      uVar2 = uVar1 / 0x50 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x50,8);
  }
  return;
}



// FUNCTION 14800da4e FUN_14800da4e body=113 status=ok
// SIG undefined FUN_14800da4e(void)

void FUN_14800da4e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x50,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x50)) {
      uVar2 = uVar1 / 0x50 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x50,8);
  }
  return;
}


