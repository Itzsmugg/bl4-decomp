// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148c8adc0 FUN_148c8adc0 body=40 status=ok
// SIG undefined FUN_148c8adc0(void)

void FUN_148c8adc0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a8) == '\x01') {
    FUN_1456e6a64(param_2);
    *(undefined1 *)(param_2 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 148c8ae36 FUN_148c8ae36 body=400 status=ok
// SIG undefined FUN_148c8ae36(void)

longlong FUN_148c8ae36(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  FUN_144a787a6();
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  uVar4 = *(undefined4 *)(param_2 + 0x20);
  uVar5 = *(undefined4 *)(param_2 + 0x24);
  uVar6 = *(undefined4 *)(param_2 + 0x28);
  uVar7 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  *(undefined4 *)(param_1 + 0x20) = uVar4;
  *(undefined4 *)(param_1 + 0x24) = uVar5;
  *(undefined4 *)(param_1 + 0x28) = uVar6;
  *(undefined4 *)(param_1 + 0x2c) = uVar7;
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  FUN_144a787a6(param_1 + 0x38,param_2 + 0x38);
  FUN_144a787a6(param_1 + 0x48,param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  FUN_144a787a6(param_1 + 0x60,param_2 + 0x60);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined2 *)(param_1 + 0x74) = *(undefined2 *)(param_2 + 0x74);
  FUN_144a787a6(param_1 + 0x78,param_2 + 0x78);
  FUN_144a787a6(param_1 + 0x88,param_2 + 0x88);
  puVar10 = (undefined8 *)(param_2 + 0x98);
  puVar11 = (undefined8 *)(param_1 + 0x98);
  for (lVar9 = 9; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
  FUN_144a787a6(param_1 + 0xe8,param_2 + 0xe8);
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_2 + 0xf8);
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
  FUN_144a787a6(param_1 + 0x108,param_2 + 0x108);
  FUN_144a787a6(param_1 + 0x118,param_2 + 0x118);
  uVar1 = *(undefined4 *)(param_2 + 300);
  uVar2 = *(undefined4 *)(param_2 + 0x130);
  uVar3 = *(undefined4 *)(param_2 + 0x134);
  uVar4 = *(undefined4 *)(param_2 + 0x134);
  uVar5 = *(undefined4 *)(param_2 + 0x138);
  uVar6 = *(undefined4 *)(param_2 + 0x13c);
  uVar7 = *(undefined4 *)(param_2 + 0x140);
  *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_2 + 0x128);
  *(undefined4 *)(param_1 + 300) = uVar1;
  *(undefined4 *)(param_1 + 0x130) = uVar2;
  *(undefined4 *)(param_1 + 0x134) = uVar3;
  *(undefined4 *)(param_1 + 0x134) = uVar4;
  *(undefined4 *)(param_1 + 0x138) = uVar5;
  *(undefined4 *)(param_1 + 0x13c) = uVar6;
  *(undefined4 *)(param_1 + 0x140) = uVar7;
  FUN_144a787a6(param_1 + 0x148,param_2 + 0x148);
  uVar1 = *(undefined4 *)(param_2 + 0x15c);
  uVar2 = *(undefined4 *)(param_2 + 0x160);
  uVar3 = *(undefined4 *)(param_2 + 0x164);
  *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_2 + 0x158);
  *(undefined4 *)(param_1 + 0x15c) = uVar1;
  *(undefined4 *)(param_1 + 0x160) = uVar2;
  *(undefined4 *)(param_1 + 0x164) = uVar3;
  *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_2 + 0x168);
  FUN_144a787a6(param_1 + 0x170,param_2 + 0x170);
  FUN_144a787a6(param_1 + 0x180,param_2 + 0x180);
  uVar8 = *(undefined8 *)(param_2 + 0x198);
  *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_2 + 400);
  *(undefined8 *)(param_1 + 0x198) = uVar8;
  *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_2 + 0x1a0);
  return param_1;
}



// FUNCTION 148c8afc8 FUN_148c8afc8 body=69 status=ok
// SIG undefined FUN_148c8afc8(void)

void FUN_148c8afc8(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,200);
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b8c2120;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  return;
}



// FUNCTION 148c8b00e FUN_148c8b00e body=53 status=ok
// SIG undefined FUN_148c8b00e(void)

void FUN_148c8b00e(undefined8 param_1,undefined8 *param_2)

{
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b8c2120;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  return;
}



// FUNCTION 148c8b068 FUN_148c8b068 body=99 status=ok
// SIG undefined FUN_148c8b068(void)

undefined8 FUN_148c8b068(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1489fb7d2(param_2,param_3);
    FUN_148c8b1b6(param_2 + 0xb0,param_3 + 0xb0);
    *(undefined8 *)(param_2 + 0xc0) = *(undefined8 *)(param_3 + 0xc0);
    param_2 = param_2 + 200;
    param_3 = param_3 + 200;
  }
  return 1;
}



// FUNCTION 148c8b0f4 FUN_148c8b0f4 body=59 status=ok
// SIG undefined FUN_148c8b0f4(void)

undefined8 FUN_148c8b0f4(longlong *param_1)

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



// FUNCTION 148c8b140 FUN_148c8b140 body=40 status=ok
// SIG undefined FUN_148c8b140(void)

void FUN_148c8b140(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 200) == '\x01') {
    FUN_145c72f64(param_2);
    *(undefined1 *)(param_2 + 200) = 0;
  }
  return;
}



// FUNCTION 148c8b1b6 FUN_148c8b1b6 body=95 status=ok
// SIG undefined FUN_148c8b1b6(void)

undefined8 * FUN_148c8b1b6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1456e6a3a(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c8b216(param_1,iVar1);
      FUN_148c8b28c(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c8b216 FUN_148c8b216 body=118 status=ok
// SIG undefined FUN_148c8b216(void)

void FUN_148c8b216(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x1a8,8);
    iVar2 = (int)(uVar1 / 0x1a8);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x1a8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c8b28c FUN_148c8b28c body=60 status=ok
// SIG undefined FUN_148c8b28c(void)

void FUN_148c8b28c(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c8b2c8(param_1,param_2);
    param_1 = param_1 + 0x1a8;
    param_2 = param_2 + 0x1a8;
  }
  return;
}



// FUNCTION 148c8b2c8 FUN_148c8b2c8 body=1245 status=ok
// SIG undefined FUN_148c8b2c8(void)

undefined8 * FUN_148c8b2c8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
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
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  uVar3 = *(undefined4 *)(param_2 + 2);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 3);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar8 = *(undefined4 *)(param_2 + 5);
  uVar9 = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 5) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar9;
  *(undefined4 *)(param_1 + 2) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
  *(undefined4 *)(param_1 + 3) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar6;
  param_1[7] = 0;
  iVar1 = *(int *)(param_2 + 8);
  pvVar2 = (void *)param_2[7];
  *(int *)(param_1 + 8) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 7,iVar1,0);
    memcpy((void *)param_1[7],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[9] = 0;
  iVar1 = *(int *)(param_2 + 10);
  pvVar2 = (void *)param_2[9];
  *(int *)(param_1 + 10) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 9,iVar1,0);
    memcpy((void *)param_1[9],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = 0;
  iVar1 = *(int *)(param_2 + 0xd);
  pvVar2 = (void *)param_2[0xc];
  *(int *)(param_1 + 0xd) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xc,iVar1,0);
    memcpy((void *)param_1[0xc],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined2 *)((longlong)param_1 + 0x74) = *(undefined2 *)((longlong)param_2 + 0x74);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  param_1[0xf] = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  pvVar2 = (void *)param_2[0xf];
  *(int *)(param_1 + 0x10) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xf,iVar1,0);
    memcpy((void *)param_1[0xf],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0x11] = 0;
  iVar1 = *(int *)(param_2 + 0x12);
  pvVar2 = (void *)param_2[0x11];
  *(int *)(param_1 + 0x12) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x11,iVar1,0);
    memcpy((void *)param_1[0x11],pvVar2,(longlong)iVar1 * 2);
  }
  puVar12 = param_2 + 0x13;
  puVar13 = param_1 + 0x13;
  for (lVar11 = 9; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar13 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar13 = puVar13 + 1;
  }
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  param_1[0x1d] = 0;
  iVar1 = *(int *)(param_2 + 0x1e);
  pvVar2 = (void *)param_2[0x1d];
  *(int *)(param_1 + 0x1e) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x1d,iVar1,0);
    memcpy((void *)param_1[0x1d],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  param_1[0x1f] = param_2[0x1f];
  param_1[0x21] = 0;
  iVar1 = *(int *)(param_2 + 0x22);
  pvVar2 = (void *)param_2[0x21];
  *(int *)(param_1 + 0x22) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x21,iVar1,0);
    memcpy((void *)param_1[0x21],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0x23] = 0;
  iVar1 = *(int *)(param_2 + 0x24);
  pvVar2 = (void *)param_2[0x23];
  *(int *)(param_1 + 0x24) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x23,iVar1,0);
    memcpy((void *)param_1[0x23],pvVar2,(longlong)iVar1 * 2);
  }
  uVar3 = *(undefined4 *)(param_2 + 0x25);
  uVar4 = *(undefined4 *)((longlong)param_2 + 300);
  uVar5 = *(undefined4 *)(param_2 + 0x26);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x134);
  uVar7 = *(undefined4 *)(param_2 + 0x27);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x13c);
  uVar9 = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)((longlong)param_1 + 0x134) = *(undefined4 *)((longlong)param_2 + 0x134);
  *(undefined4 *)(param_1 + 0x27) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x13c) = uVar8;
  *(undefined4 *)(param_1 + 0x28) = uVar9;
  *(undefined4 *)(param_1 + 0x25) = uVar3;
  *(undefined4 *)((longlong)param_1 + 300) = uVar4;
  *(undefined4 *)(param_1 + 0x26) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x134) = uVar6;
  param_1[0x29] = 0;
  iVar1 = *(int *)(param_2 + 0x2a);
  pvVar2 = (void *)param_2[0x29];
  *(int *)(param_1 + 0x2a) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x29,iVar1,0);
    memcpy((void *)param_1[0x29],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 0x2d) = *(undefined4 *)(param_2 + 0x2d);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x15c);
  uVar4 = *(undefined4 *)(param_2 + 0x2c);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x164);
  *(undefined4 *)(param_1 + 0x2b) = *(undefined4 *)(param_2 + 0x2b);
  *(undefined4 *)((longlong)param_1 + 0x15c) = uVar3;
  *(undefined4 *)(param_1 + 0x2c) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x164) = uVar5;
  param_1[0x2e] = 0;
  iVar1 = *(int *)(param_2 + 0x2f);
  pvVar2 = (void *)param_2[0x2e];
  *(int *)(param_1 + 0x2f) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x17c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x2e,iVar1,0);
    memcpy((void *)param_1[0x2e],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0x30] = 0;
  iVar1 = *(int *)(param_2 + 0x31);
  pvVar2 = (void *)param_2[0x30];
  *(int *)(param_1 + 0x31) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x18c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x30,iVar1,0);
    memcpy((void *)param_1[0x30],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0x34] = param_2[0x34];
  uVar10 = param_2[0x33];
  param_1[0x32] = param_2[0x32];
  param_1[0x33] = uVar10;
  return param_1;
}



// FUNCTION 148c8b7a6 FUN_148c8b7a6 body=81 status=ok
// SIG undefined FUN_148c8b7a6(void)

void FUN_148c8b7a6(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xd0);
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b8c22b0;
  *(undefined4 *)(param_2 + 0x19) = 0;
  *(undefined1 *)((longlong)param_2 + 0xcc) = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  *(undefined4 *)(param_2 + 0x18) = 0;
  return;
}



// FUNCTION 148c8b7f8 FUN_148c8b7f8 body=63 status=ok
// SIG undefined FUN_148c8b7f8(void)

void FUN_148c8b7f8(undefined8 param_1,undefined8 *param_2)

{
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b8c22b0;
  *(undefined4 *)(param_2 + 0x19) = 0;
  *(undefined1 *)((longlong)param_2 + 0xcc) = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  *(undefined4 *)(param_2 + 0x18) = 0;
  return;
}



// FUNCTION 148c8b85c FUN_148c8b85c body=63 status=ok
// SIG undefined FUN_148c8b85c(void)

undefined1 FUN_148c8b85c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c8b986(param_2,param_3);
    param_3 = param_3 + 0xd0;
    param_2 = param_2 + 0xd0;
  }
  return 1;
}



// FUNCTION 148c8b8c4 FUN_148c8b8c4 body=59 status=ok
// SIG undefined FUN_148c8b8c4(void)

undefined8 FUN_148c8b8c4(longlong *param_1)

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



// FUNCTION 148c8b910 FUN_148c8b910 body=40 status=ok
// SIG undefined FUN_148c8b910(void)

void FUN_148c8b910(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd0) == '\x01') {
    FUN_145c72fd2(param_2);
    *(undefined1 *)(param_2 + 0xd0) = 0;
  }
  return;
}



// FUNCTION 148c8b986 FUN_148c8b986 body=103 status=ok
// SIG undefined FUN_148c8b986(void)

longlong FUN_148c8b986(longlong param_1,longlong param_2)

{
  FUN_1489fb7d2();
  if (*(int *)(param_1 + 0xc0) != *(int *)(param_2 + 0xc0) || *(int *)(param_1 + 0xc0) == 0) {
    *(int *)(param_1 + 0xc0) = *(int *)(param_2 + 0xc0);
    FUN_140840e48(param_1 + 0xb0,param_2 + 0xb0);
  }
  *(undefined1 *)(param_1 + 0xcc) = *(undefined1 *)(param_2 + 0xcc);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 200);
  return param_1;
}



// FUNCTION 148c8ba16 FUN_148c8ba16 body=68 status=ok
// SIG undefined FUN_148c8ba16(void)

undefined8 FUN_148c8ba16(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1489fc572(param_2,param_3);
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_3 + 0x18);
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_3 + 0x20);
    param_2 = param_2 + 0x28;
    param_3 = param_3 + 0x28;
  }
  return 1;
}



// FUNCTION 148c8ba82 FUN_148c8ba82 body=59 status=ok
// SIG undefined FUN_148c8ba82(void)

undefined8 FUN_148c8ba82(longlong *param_1)

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



// FUNCTION 148c8bb1c FUN_148c8bb1c body=81 status=ok
// SIG undefined FUN_148c8bb1c(void)

void FUN_148c8bb1c(undefined8 param_1,longlong param_2)

{
  FUN_140056680(param_2,&DAT_149dfb77a);
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x1d) = 0;
  *(undefined8 *)(param_2 + 0x25) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0x242c80000;
  *(undefined4 *)(param_2 + 0x40) = 0x3f800000;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined1 *)(param_2 + 0x68) = 0;
  return;
}



// FUNCTION 148c8bb84 FUN_148c8bb84 body=54 status=ok
// SIG undefined FUN_148c8bb84(void)

undefined1 FUN_148c8bb84(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c8bcce(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 148c8bbe2 FUN_148c8bbe2 body=59 status=ok
// SIG undefined FUN_148c8bbe2(void)

undefined8 FUN_148c8bbe2(longlong *param_1)

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



// FUNCTION 148c8bc28 FUN_148c8bc28 body=32 status=ok
// SIG undefined FUN_148c8bc28(void)

void FUN_148c8bc28(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_148c8bc8e(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 148c8bc8e FUN_148c8bc8e body=64 status=ok
// SIG undefined FUN_148c8bc8e(void)

void FUN_148c8bc8e(longlong *param_1)

{
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 148c8bcce FUN_148c8bcce body=88 status=ok
// SIG undefined FUN_148c8bcce(void)

longlong FUN_148c8bcce(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  FUN_144a787a6();
  FUN_1489fc572(param_1 + 0x10,param_2 + 0x10);
  uVar1 = *(undefined4 *)(param_2 + 0x2c);
  uVar2 = *(undefined4 *)(param_2 + 0x30);
  uVar3 = *(undefined4 *)(param_2 + 0x34);
  uVar4 = *(undefined4 *)(param_2 + 0x34);
  uVar5 = *(undefined4 *)(param_2 + 0x38);
  uVar6 = *(undefined4 *)(param_2 + 0x3c);
  uVar7 = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  *(undefined4 *)(param_1 + 0x34) = uVar3;
  *(undefined4 *)(param_1 + 0x34) = uVar4;
  *(undefined4 *)(param_1 + 0x38) = uVar5;
  *(undefined4 *)(param_1 + 0x3c) = uVar6;
  *(undefined4 *)(param_1 + 0x40) = uVar7;
  FUN_148c8bd26(param_1 + 0x48,param_2 + 0x48);
  FUN_1406fa324(param_1 + 0x58,param_2 + 0x58);
  *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)(param_2 + 0x68);
  return param_1;
}



// FUNCTION 148c8bd26 FUN_148c8bd26 body=79 status=ok
// SIG undefined FUN_148c8bd26(void)

undefined8 * FUN_148c8bd26(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148c8bd76(param_1,iVar1);
      FUN_148c8bde9(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c8bd76 FUN_148c8bd76 body=115 status=ok
// SIG undefined FUN_148c8bd76(void)

void FUN_148c8bd76(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c8bde9 FUN_148c8bde9 body=66 status=ok
// SIG undefined FUN_148c8bde9(void)

void FUN_148c8bde9(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14593ec7a(param_1,param_2);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    param_1 = param_1 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return;
}



// FUNCTION 148c8be2c FUN_148c8be2c body=63 status=ok
// SIG undefined FUN_148c8be2c(void)

void FUN_148c8be2c(undefined8 param_1,longlong param_2)

{
  FUN_144a5dc74(param_2);
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x1c) = 0;
  *(undefined8 *)(param_2 + 0x24) = 0;
  FUN_140056680(param_2 + 0x30,&DAT_149dfb77a);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  return;
}



// FUNCTION 148c8be82 FUN_148c8be82 body=54 status=ok
// SIG undefined FUN_148c8be82(void)

undefined1 FUN_148c8be82(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c8bf96(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 148c8bee0 FUN_148c8bee0 body=59 status=ok
// SIG undefined FUN_148c8bee0(void)

undefined8 FUN_148c8bee0(longlong *param_1)

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



// FUNCTION 148c8bf26 FUN_148c8bf26 body=34 status=ok
// SIG undefined FUN_148c8bf26(void)

void FUN_148c8bf26(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_145813a62(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 148c8bf96 FUN_148c8bf96 body=119 status=ok
// SIG undefined FUN_148c8bf96(void)

longlong * FUN_148c8bf96(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_2;
  plVar2 = (longlong *)*param_1;
  if (plVar2 != plVar1) {
    *param_1 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  FUN_1489fc572(param_1 + 2,param_2 + 2);
  *(int *)(param_1 + 5) = (int)param_2[5];
  FUN_144a787a6(param_1 + 6,param_2 + 6);
  FUN_148c8c00e(param_1 + 8,param_2 + 8);
  return param_1;
}



// FUNCTION 148c8c00e FUN_148c8c00e body=93 status=ok
// SIG undefined FUN_148c8c00e(void)

undefined8 * FUN_148c8c00e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_141154c75(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c8c06c(param_1,iVar1);
      FUN_148c8c0db(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c8c06c FUN_148c8c06c body=111 status=ok
// SIG undefined FUN_148c8c06c(void)

void FUN_148c8c06c(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x70,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 4;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x70,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c8c0db FUN_148c8c0db body=52 status=ok
// SIG undefined FUN_148c8c0db(void)

void FUN_148c8c0db(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c8c110(param_1,param_2);
    param_1 = param_1 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return;
}



// FUNCTION 148c8c110 FUN_148c8c110 body=258 status=ok
// SIG undefined FUN_148c8c110(void)

undefined8 * FUN_148c8c110(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
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
  FUN_14593ec7a(param_1 + 2,param_2 + 2);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar5 = *(undefined4 *)(param_2 + 6);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar8 = *(undefined4 *)(param_2 + 7);
  uVar9 = *(undefined4 *)((longlong)param_2 + 0x3c);
  uVar10 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar4;
  *(undefined4 *)(param_1 + 6) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar7;
  *(undefined4 *)(param_1 + 7) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar9;
  *(undefined4 *)(param_1 + 8) = uVar10;
  param_1[9] = 0;
  iVar1 = *(int *)(param_2 + 10);
  uVar3 = param_2[9];
  *(int *)(param_1 + 10) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  }
  else {
    FUN_148c8bd76(param_1 + 9,iVar1,0);
    FUN_148c8bde9(param_1[9],uVar3,iVar1);
  }
  param_1[0xb] = 0;
  iVar1 = *(int *)(param_2 + 0xc);
  pvVar2 = (void *)param_2[0xb];
  *(int *)(param_1 + 0xc) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  else {
    FUN_1401b309e(param_1 + 0xb,iVar1,0);
    memcpy((void *)param_1[0xb],pvVar2,(longlong)iVar1 << 3);
  }
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  return param_1;
}



// FUNCTION 148c8c232 FUN_148c8c232 body=44 status=ok
// SIG undefined FUN_148c8c232(void)

void FUN_148c8c232(undefined8 param_1,longlong *param_2)

{
  FUN_145d32e8e(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148c8c274 FUN_148c8c274 body=54 status=ok
// SIG undefined FUN_148c8c274(void)

undefined1 FUN_148c8c274(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c8c36e(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 148c8c2d2 FUN_148c8c2d2 body=59 status=ok
// SIG undefined FUN_148c8c2d2(void)

undefined8 FUN_148c8c2d2(longlong *param_1)

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



// FUNCTION 148c8c36e FUN_148c8c36e body=95 status=ok
// SIG undefined FUN_148c8c36e(void)

undefined8 * FUN_148c8c36e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145d32e8e(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c8c3ce(param_1,iVar1);
      FUN_148c8c441(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c8c3ce FUN_148c8c3ce body=115 status=ok
// SIG undefined FUN_148c8c3ce(void)

void FUN_148c8c3ce(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c8c441 FUN_148c8c441 body=52 status=ok
// SIG undefined FUN_148c8c441(void)

void FUN_148c8c441(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c8c476(param_1,param_2);
    param_1 = param_1 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return;
}



// FUNCTION 148c8c476 FUN_148c8c476 body=203 status=ok
// SIG undefined FUN_148c8c476(void)

longlong * FUN_148c8c476(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  void *_Src;
  longlong lVar3;
  
  plVar2 = (longlong *)*param_2;
  *param_1 = (longlong)plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  FUN_14593ec7a(param_1 + 2,param_2 + 2);
  *(int *)(param_1 + 5) = (int)param_2[5];
  param_1[6] = 0;
  iVar1 = (int)param_2[7];
  _Src = (void *)param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 6,iVar1,0);
    memcpy((void *)param_1[6],_Src,(longlong)iVar1 * 2);
  }
  param_1[8] = 0;
  iVar1 = (int)param_2[9];
  lVar3 = param_2[8];
  *(int *)(param_1 + 9) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_148c8c06c(param_1 + 8,iVar1,0);
    FUN_148c8c0db(param_1[8],lVar3,iVar1);
  }
  return param_1;
}



// FUNCTION 148c8c542 FUN_148c8c542 body=50 status=ok
// SIG undefined FUN_148c8c542(void)

void FUN_148c8c542(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_145d32e8e(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 148c8c582 FUN_148c8c582 body=70 status=ok
// SIG undefined FUN_148c8c582(void)

void FUN_148c8c582(undefined8 param_1,undefined8 *param_2)

{
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[5] = 0;
  *param_2 = &PTR_FUN_14b8c2a60;
  FUN_144a5dc74(param_2 + 2);
  FUN_140056680(param_2 + 4,&DAT_149dfb77a);
  return;
}



// FUNCTION 148c8c5c8 FUN_148c8c5c8 body=55 status=ok
// SIG undefined FUN_148c8c5c8(void)

void FUN_148c8c5c8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14b8c2a60;
  *(undefined1 *)(param_2 + 1) = 0;
  FUN_144a5dc74(param_2 + 2);
  FUN_140056680(param_2 + 4,&DAT_149dfb77a);
  return;
}



// FUNCTION 148c8c624 FUN_148c8c624 body=54 status=ok
// SIG undefined FUN_148c8c624(void)

undefined1 FUN_148c8c624(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c8c79a(param_2,param_3);
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return 1;
}



// FUNCTION 148c8c682 FUN_148c8c682 body=59 status=ok
// SIG undefined FUN_148c8c682(void)

undefined8 FUN_148c8c682(longlong *param_1)

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



// FUNCTION 148c8c6c8 FUN_148c8c6c8 body=32 status=ok
// SIG undefined FUN_148c8c6c8(void)

void FUN_148c8c6c8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_1418d196c(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 148c8c736 FUN_148c8c736 body=43 status=ok
// SIG undefined FUN_148c8c736(void)

undefined8 FUN_148c8c736(undefined8 param_1,int param_2)

{
  FUN_1418d196c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 148c8c762 FUN_148c8c762 body=55 status=ok
// SIG undefined FUN_148c8c762(void)

void FUN_148c8c762(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbb100 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbb100 = FUN_140002ddd(FUN_146608bad,uVar1,L"PhotoModeOption");
  }
  return;
}



// FUNCTION 148c8c79a FUN_148c8c79a body=94 status=ok
// SIG undefined FUN_148c8c79a(void)

longlong FUN_148c8c79a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  plVar1 = *(longlong **)(param_2 + 0x10);
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x10) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  FUN_144a787a6(param_1 + 0x20,param_2 + 0x20);
  return param_1;
}



// FUNCTION 148c8c808 FUN_148c8c808 body=71 status=ok
// SIG undefined FUN_148c8c808(void)

void FUN_148c8c808(undefined8 param_1,undefined8 *param_2)

{
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_144a5dc74(param_2);
  FUN_140056680(param_2 + 2,&DAT_149dfb77a);
  param_2[4] = 0;
  param_2[5] = 0;
  return;
}



// FUNCTION 148c8c850 FUN_148c8c850 body=45 status=ok
// SIG undefined FUN_148c8c850(void)

void FUN_148c8c850(undefined8 param_1,longlong param_2)

{
  FUN_144a5dc74(param_2);
  FUN_140056680(param_2 + 0x10,&DAT_149dfb77a);
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



// FUNCTION 148c8c89c FUN_148c8c89c body=54 status=ok
// SIG undefined FUN_148c8c89c(void)

undefined1 FUN_148c8c89c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c8c9b0(param_2,param_3);
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return 1;
}



// FUNCTION 148c8c8fa FUN_148c8c8fa body=59 status=ok
// SIG undefined FUN_148c8c8fa(void)

undefined8 FUN_148c8c8fa(longlong *param_1)

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



// FUNCTION 148c8c940 FUN_148c8c940 body=34 status=ok
// SIG undefined FUN_148c8c940(void)

void FUN_148c8c940(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_1458074e4(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 148c8c9b0 FUN_148c8c9b0 body=100 status=ok
// SIG undefined FUN_148c8c9b0(void)

longlong * FUN_148c8c9b0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_2;
  plVar2 = (longlong *)*param_1;
  if (plVar2 != plVar1) {
    *param_1 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  FUN_144a787a6(param_1 + 2,param_2 + 2);
  FUN_148c8ca14(param_1 + 4,param_2 + 4);
  return param_1;
}



// FUNCTION 148c8ca14 FUN_148c8ca14 body=93 status=ok
// SIG undefined FUN_148c8ca14(void)

undefined8 * FUN_148c8ca14(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14110cefd(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_145d33270(param_1,iVar1);
      FUN_14153c576(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c8ca80 FUN_148c8ca80 body=72 status=ok
// SIG undefined FUN_148c8ca80(void)

void FUN_148c8ca80(undefined8 param_1,undefined8 *param_2)

{
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[6] = 0;
  FUN_140056680(param_2 + 2,&DAT_149dfb77a);
  param_2[4] = 0;
  param_2[5] = 0;
  *(undefined2 *)(param_2 + 6) = 0;
  return;
}



// FUNCTION 148c8cac8 FUN_148c8cac8 body=56 status=ok
// SIG undefined FUN_148c8cac8(void)

void FUN_148c8cac8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined2 *)(param_2 + 1) = 0;
  FUN_140056680(param_2 + 2,&DAT_149dfb77a);
  param_2[4] = 0;
  param_2[5] = 0;
  *(undefined2 *)(param_2 + 6) = 0;
  return;
}



// FUNCTION 148c8cb00 FUN_148c8cb00 body=48 status=ok
// SIG undefined FUN_148c8cb00(void)

void FUN_148c8cb00(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148c8cb46 FUN_148c8cb46 body=125 status=ok
// SIG undefined FUN_148c8cb46(void)

undefined8 FUN_148c8cb46(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      lVar1 = param_2 + 0x10 + lVar2;
      *(undefined2 *)(lVar1 + -8) = *(undefined2 *)((undefined8 *)(param_3 + lVar2) + 1);
      *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(param_3 + lVar2);
      FUN_144a787a6();
      FUN_1406fa324(param_2 + lVar2 + 0x20,param_3 + lVar2 + 0x20);
      *(undefined2 *)(param_2 + lVar2 + 0x30) = *(undefined2 *)(param_3 + lVar2 + 0x30);
      lVar2 = lVar2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c8cbec FUN_148c8cbec body=59 status=ok
// SIG undefined FUN_148c8cbec(void)

undefined8 FUN_148c8cbec(longlong *param_1)

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



// FUNCTION 148c8cc8a FUN_148c8cc8a body=52 status=ok
// SIG undefined FUN_148c8cc8a(void)

void FUN_148c8cc8a(longlong param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  return;
}



// FUNCTION 148c8cccc FUN_148c8cccc body=58 status=ok
// SIG undefined FUN_148c8cccc(void)

void FUN_148c8cccc(undefined8 param_1,undefined8 *param_2)

{
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[10] = 0;
  FUN_14153c466(param_2);
  *(undefined2 *)(param_2 + 10) = 0;
  return;
}



// FUNCTION 148c8cd06 FUN_148c8cd06 body=28 status=ok
// SIG undefined FUN_148c8cd06(void)

void FUN_148c8cd06(undefined8 param_1,longlong param_2)

{
  FUN_14153c466(param_2);
  *(undefined2 *)(param_2 + 0x50) = 0;
  return;
}



// FUNCTION 148c8cd22 FUN_148c8cd22 body=49 status=ok
// SIG undefined FUN_148c8cd22(void)

void FUN_148c8cd22(undefined8 param_1,longlong param_2)

{
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0x38) + 0x10))();
  }
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148c8cd6a FUN_148c8cd6a body=146 status=ok
// SIG undefined FUN_148c8cd6a(void)

undefined8 FUN_148c8cd6a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  
  if (param_4 != 0) {
    lVar7 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar7);
      lVar2 = param_2 + 0x18 + lVar7;
      *(undefined8 *)(lVar2 + -8) = *(undefined8 *)(puVar1 + 4);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      *(undefined4 *)(lVar2 + -0x18) = *puVar1;
      *(undefined4 *)(lVar2 + -0x14) = uVar4;
      *(undefined4 *)(lVar2 + -0x10) = uVar5;
      *(undefined4 *)(lVar2 + -0xc) = uVar6;
      FUN_144a787a6(lVar2,puVar1 + 6);
      uVar3 = *(undefined8 *)((longlong)puVar1 + 0x2d);
      *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(puVar1 + 10);
      *(undefined8 *)(lVar2 + 0x15) = uVar3;
      lVar2 = param_2 + 0x38 + lVar7;
      FUN_140ae1244(lVar2,param_3 + lVar7 + 0x38);
      *(undefined2 *)(lVar2 + 0x18) = *(undefined2 *)(param_3 + lVar7 + 0x50);
      lVar7 = lVar7 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c8ce24 FUN_148c8ce24 body=59 status=ok
// SIG undefined FUN_148c8ce24(void)

undefined8 FUN_148c8ce24(longlong *param_1)

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



// FUNCTION 148c8ce6a FUN_148c8ce6a body=53 status=ok
// SIG undefined FUN_148c8ce6a(void)

void FUN_148c8ce6a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_2 + 0x38) + 0x10))();
    }
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 148c8cefe FUN_148c8cefe body=82 status=ok
// SIG undefined FUN_148c8cefe(void)

void FUN_148c8cefe(undefined8 param_1,undefined8 *param_2)

{
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140056680(param_2 + 4,&DAT_149dfb77a);
  *(undefined4 *)(param_2 + 6) = 0x10001;
  FUN_140056680(param_2 + 7,&DAT_149dfb77a);
  *(undefined2 *)(param_2 + 9) = 0;
  return;
}



// FUNCTION 148c8cf50 FUN_148c8cf50 body=70 status=ok
// SIG undefined FUN_148c8cf50(void)

void FUN_148c8cf50(undefined8 param_1,undefined8 *param_2)

{
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140056680(param_2 + 4,&DAT_149dfb77a);
  *(undefined4 *)(param_2 + 6) = 0x10001;
  FUN_140056680(param_2 + 7,&DAT_149dfb77a);
  *(undefined2 *)(param_2 + 9) = 0;
  return;
}



// FUNCTION 148c8cfb4 FUN_148c8cfb4 body=155 status=ok
// SIG undefined FUN_148c8cfb4(void)

undefined8 FUN_148c8cfb4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      FUN_148c68022();
      FUN_144a787a6(param_2 + lVar6 + 0x20,param_3 + lVar6 + 0x20);
      *(undefined4 *)(param_2 + lVar6 + 0x30) = *(undefined4 *)(param_3 + lVar6 + 0x30);
      FUN_144a787a6(param_2 + lVar6 + 0x38,param_3 + lVar6 + 0x38);
      *(undefined2 *)(param_2 + lVar6 + 0x48) = *(undefined2 *)(param_3 + lVar6 + 0x48);
      lVar6 = lVar6 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c8d078 FUN_148c8d078 body=59 status=ok
// SIG undefined FUN_148c8d078(void)

undefined8 FUN_148c8d078(longlong *param_1)

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



// FUNCTION 148c8d0be FUN_148c8d0be body=32 status=ok
// SIG undefined FUN_148c8d0be(void)

void FUN_148c8d0be(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_14110ce80(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 148c8d13c FUN_148c8d13c body=37 status=ok
// SIG undefined FUN_148c8d13c(void)

void FUN_148c8d13c(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x180);
  FUN_146140cbe(param_2);
  return;
}



// FUNCTION 148c8d18e FUN_148c8d18e body=63 status=ok
// SIG undefined FUN_148c8d18e(void)

undefined1 FUN_148c8d18e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1440838f8(param_2,param_3);
    param_3 = param_3 + 0x180;
    param_2 = param_2 + 0x180;
  }
  return 1;
}



// FUNCTION 148c8d1f6 FUN_148c8d1f6 body=59 status=ok
// SIG undefined FUN_148c8d1f6(void)

undefined8 FUN_148c8d1f6(longlong *param_1)

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



// FUNCTION 148c8d242 FUN_148c8d242 body=40 status=ok
// SIG undefined FUN_148c8d242(void)

void FUN_148c8d242(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x180) == '\x01') {
    FUN_1458073ba(param_2);
    *(undefined1 *)(param_2 + 0x180) = 0;
  }
  return;
}



// FUNCTION 148c8d2b8 FUN_148c8d2b8 body=57 status=ok
// SIG undefined FUN_148c8d2b8(void)

void FUN_148c8d2b8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbb178 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbb178 = FUN_140002ddd(FUN_146608e4f,uVar1,L"OakWidgetData_PhotoMode");
  }
  return;
}



// FUNCTION 148c8d2f2 FUN_148c8d2f2 body=95 status=ok
// SIG undefined FUN_148c8d2f2(void)

undefined8 * FUN_148c8d2f2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1458074be(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c8d472(param_1,iVar1);
      FUN_148c8d4e5(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c8d352 FUN_148c8d352 body=95 status=ok
// SIG undefined FUN_148c8d352(void)

undefined8 * FUN_148c8d352(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14580756d(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c8d51a(param_1,iVar1);
      FUN_148c8d589(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c8d3b2 FUN_148c8d3b2 body=95 status=ok
// SIG undefined FUN_148c8d3b2(void)

undefined8 * FUN_148c8d3b2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14580752f(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c8d5be(param_1,iVar1);
      FUN_148c8d62d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c8d412 FUN_148c8d412 body=95 status=ok
// SIG undefined FUN_148c8d412(void)

undefined8 * FUN_148c8d412(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145807498(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c8d66a(param_1,iVar1);
      FUN_148c8d6dd(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c8d472 FUN_148c8d472 body=115 status=ok
// SIG undefined FUN_148c8d472(void)

void FUN_148c8d472(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,8);
    iVar2 = (int)(uVar1 / 0x30);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x30,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c8d4e5 FUN_148c8d4e5 body=52 status=ok
// SIG undefined FUN_148c8d4e5(void)

void FUN_148c8d4e5(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_145d331b8(param_1,param_2);
    param_1 = param_1 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return;
}



// FUNCTION 148c8d51a FUN_148c8d51a body=111 status=ok
// SIG undefined FUN_148c8d51a(void)

void FUN_148c8d51a(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x38,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x38,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c8d589 FUN_148c8d589 body=52 status=ok
// SIG undefined FUN_148c8d589(void)

void FUN_148c8d589(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_145d330fa(param_1,param_2);
    param_1 = param_1 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return;
}



// FUNCTION 148c8d5be FUN_148c8d5be body=111 status=ok
// SIG undefined FUN_148c8d5be(void)

void FUN_148c8d5be(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c8d62d FUN_148c8d62d body=60 status=ok
// SIG undefined FUN_148c8d62d(void)

void FUN_148c8d62d(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_145d32fd4(param_1,param_2);
    *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_2 + 0x50);
    param_1 = param_1 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return;
}



// FUNCTION 148c8d66a FUN_148c8d66a body=115 status=ok
// SIG undefined FUN_148c8d66a(void)

void FUN_148c8d66a(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c8d6dd FUN_148c8d6dd body=60 status=ok
// SIG undefined FUN_148c8d6dd(void)

void FUN_148c8d6dd(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_145d332e4(param_1,param_2);
    *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(param_2 + 0x48);
    param_1 = param_1 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return;
}



// FUNCTION 148c8d71a FUN_148c8d71a body=81 status=ok
// SIG undefined FUN_148c8d71a(void)

void FUN_148c8d71a(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xe0);
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b8c32f0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  *(undefined4 *)(param_2 + 0x18) = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  *(undefined4 *)(param_2 + 0x1b) = 0;
  return;
}



// FUNCTION 148c8d76c FUN_148c8d76c body=63 status=ok
// SIG undefined FUN_148c8d76c(void)

void FUN_148c8d76c(undefined8 param_1,undefined8 *param_2)

{
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b8c32f0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  *(undefined4 *)(param_2 + 0x18) = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  *(undefined4 *)(param_2 + 0x1b) = 0;
  return;
}



// FUNCTION 148c8d7d0 FUN_148c8d7d0 body=63 status=ok
// SIG undefined FUN_148c8d7d0(void)

undefined1 FUN_148c8d7d0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c8d934(param_2,param_3);
    param_3 = param_3 + 0xe0;
    param_2 = param_2 + 0xe0;
  }
  return 1;
}



// FUNCTION 148c8d838 FUN_148c8d838 body=59 status=ok
// SIG undefined FUN_148c8d838(void)

undefined8 FUN_148c8d838(longlong *param_1)

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



// FUNCTION 148c8d884 FUN_148c8d884 body=40 status=ok
// SIG undefined FUN_148c8d884(void)

void FUN_148c8d884(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe0) == '\x01') {
    FUN_145d19110(param_2);
    *(undefined1 *)(param_2 + 0xe0) = 0;
  }
  return;
}



// FUNCTION 148c8d8fa FUN_148c8d8fa body=57 status=ok
// SIG undefined FUN_148c8d8fa(void)

void FUN_148c8d8fa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbb190 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbb190 = FUN_140002ddd(FUN_146608ee1,uVar1,L"OakWidgetData_PlayerStats");
  }
  return;
}



// FUNCTION 148c8d934 FUN_148c8d934 body=117 status=ok
// SIG undefined FUN_148c8d934(void)

longlong FUN_148c8d934(longlong param_1,longlong param_2)

{
  FUN_1489fb7d2();
  if (*(int *)(param_1 + 0xc0) != *(int *)(param_2 + 0xc0)) {
    FUN_1458b95ee(param_1 + 0xb0,param_2 + 0xb0);
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
  }
  if (*(int *)(param_1 + 0xd8) != *(int *)(param_2 + 0xd8)) {
    FUN_1458b95ee(param_1 + 200,param_2 + 200);
    *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
  }
  return param_1;
}



// FUNCTION 148c8d9aa FUN_148c8d9aa body=111 status=ok
// SIG undefined FUN_148c8d9aa(void)

void FUN_148c8d9aa(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x100);
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b8c3480;
  param_2[0x1a] = 0;
  *(undefined4 *)(param_2 + 0x1b) = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  *(undefined8 *)((longlong)param_2 + 0xdc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0xe4) = 0;
  param_2[0x1e] = 0;
  *(undefined4 *)(param_2 + 0x1f) = 0;
  return;
}



// FUNCTION 148c8da1a FUN_148c8da1a body=93 status=ok
// SIG undefined FUN_148c8da1a(void)

void FUN_148c8da1a(undefined8 param_1,undefined8 *param_2)

{
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b8c3480;
  param_2[0x1a] = 0;
  *(undefined4 *)(param_2 + 0x1b) = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  *(undefined8 *)((longlong)param_2 + 0xdc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0xe4) = 0;
  param_2[0x1e] = 0;
  *(undefined4 *)(param_2 + 0x1f) = 0;
  return;
}



// FUNCTION 148c8da9c FUN_148c8da9c body=85 status=ok
// SIG undefined FUN_148c8da9c(void)

undefined1 FUN_148c8da9c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1489fb7d2(param_2,param_3);
    FUN_14058acb2(param_2 + 0xb0,param_3 + 0xb0);
    param_2 = param_2 + 0x100;
    param_3 = param_3 + 0x100;
  }
  return 1;
}



// FUNCTION 148c8db1a FUN_148c8db1a body=59 status=ok
// SIG undefined FUN_148c8db1a(void)

undefined8 FUN_148c8db1a(longlong *param_1)

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



// FUNCTION 148c8db66 FUN_148c8db66 body=40 status=ok
// SIG undefined FUN_148c8db66(void)

void FUN_148c8db66(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x100) == '\x01') {
    FUN_148c8dc40(param_2);
    *(undefined1 *)(param_2 + 0x100) = 0;
  }
  return;
}



// FUNCTION 148c8dbdc FUN_148c8dbdc body=43 status=ok
// SIG undefined FUN_148c8dbdc(void)

undefined8 FUN_148c8dbdc(undefined8 param_1,int param_2)

{
  FUN_148c8dc40();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 148c8dc08 FUN_148c8dc08 body=55 status=ok
// SIG undefined FUN_148c8dc08(void)

void FUN_148c8dc08(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbb1a8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbb1a8 = FUN_140002ddd(FUN_146608f73,uVar1,L"OakWidgetData_ProtoExample");
  }
  return;
}



// FUNCTION 148c8dc40 FUN_148c8dc40 body=70 status=ok
// SIG undefined FUN_148c8dc40(void)

void FUN_148c8dc40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8c3480;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(param_1 + 0x16);
  FUN_140fe7f26(param_1);
  return;
}



// FUNCTION 148c8dd0e FUN_148c8dd0e body=59 status=ok
// SIG undefined FUN_148c8dd0e(void)

undefined8 FUN_148c8dd0e(longlong *param_1)

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



// FUNCTION 148c8ddb0 FUN_148c8ddb0 body=86 status=ok
// SIG undefined FUN_148c8ddb0(void)

void FUN_148c8ddb0(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xe0);
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b8c3790;
  param_2[0x1a] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  *(undefined8 *)((longlong)param_2 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc4) = 0;
  *(undefined4 *)(param_2 + 0x1b) = 0x3f19999a;
  return;
}



// FUNCTION 148c8de06 FUN_148c8de06 body=70 status=ok
// SIG undefined FUN_148c8de06(void)

void FUN_148c8de06(undefined8 param_1,undefined8 *param_2)

{
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b8c3790;
  param_2[0x1a] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  *(undefined8 *)((longlong)param_2 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc4) = 0;
  *(undefined4 *)(param_2 + 0x1b) = 0x3f19999a;
  return;
}



// FUNCTION 148c8de70 FUN_148c8de70 body=142 status=ok
// SIG undefined FUN_148c8de70(void)

undefined8 FUN_148c8de70(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1489fb7d2(param_2,param_3);
    if (*(int *)(param_2 + 200) != *(int *)(param_3 + 200)) {
      *(undefined8 *)(param_2 + 0xc0) = *(undefined8 *)(param_3 + 0xc0);
      uVar2 = *(undefined4 *)(param_3 + 0xb4);
      uVar3 = *(undefined4 *)(param_3 + 0xb8);
      uVar4 = *(undefined4 *)(param_3 + 0xbc);
      *(undefined4 *)(param_2 + 0xb0) = *(undefined4 *)(param_3 + 0xb0);
      *(undefined4 *)(param_2 + 0xb4) = uVar2;
      *(undefined4 *)(param_2 + 0xb8) = uVar3;
      *(undefined4 *)(param_2 + 0xbc) = uVar4;
      *(undefined4 *)(param_2 + 200) = *(undefined4 *)(param_3 + 200);
    }
    *(undefined4 *)(param_2 + 0xd8) = *(undefined4 *)(param_3 + 0xd8);
    puVar1 = (undefined8 *)(param_3 + 0xd0);
    param_3 = param_3 + 0xe0;
    *(undefined8 *)(param_2 + 0xd0) = *puVar1;
    param_2 = param_2 + 0xe0;
  }
  return 1;
}



// FUNCTION 148c8df26 FUN_148c8df26 body=59 status=ok
// SIG undefined FUN_148c8df26(void)

undefined8 FUN_148c8df26(longlong *param_1)

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



// FUNCTION 148c8df72 FUN_148c8df72 body=38 status=ok
// SIG undefined FUN_148c8df72(void)

void FUN_148c8df72(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe0) == '\x01') {
    FUN_140fe7f26(param_2);
    *(undefined1 *)(param_2 + 0xe0) = 0;
  }
  return;
}



// FUNCTION 148c8dfe6 FUN_148c8dfe6 body=43 status=ok
// SIG undefined FUN_148c8dfe6(void)

undefined8 FUN_148c8dfe6(undefined8 param_1,int param_2)

{
  FUN_140fe7f26();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 148c8e012 FUN_148c8e012 body=55 status=ok
// SIG undefined FUN_148c8e012(void)

void FUN_148c8e012(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbb1e0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbb1e0 = FUN_140002ddd(FUN_146609097,uVar1,L"OakWidgetData_RadialWheel");
  }
  return;
}



// FUNCTION 148c8e836 FUN_148c8e836 body=115 status=ok
// SIG undefined FUN_148c8e836(void)

void FUN_148c8e836(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xe8);
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b8ca820;
  *(undefined1 *)(param_2 + 0x16) = 0;
  *(undefined4 *)((longlong)param_2 + 0xcc) = 0;
  *(undefined1 *)(param_2 + 0x1a) = 0;
  *(undefined4 *)((longlong)param_2 + 0xd4) = 0;
  *(undefined1 *)(param_2 + 0x1b) = 0;
  *(undefined8 *)((longlong)param_2 + 0xdc) = 0;
  *(undefined4 *)((longlong)param_2 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_2 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc1) = 0;
  return;
}



// FUNCTION 148c8e8aa FUN_148c8e8aa body=94 status=ok
// SIG undefined FUN_148c8e8aa(void)

void FUN_148c8e8aa(undefined8 param_1,undefined8 *param_2)

{
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b8ca820;
  *(undefined1 *)(param_2 + 0x16) = 0;
  *(undefined4 *)((longlong)param_2 + 0xcc) = 0;
  *(undefined1 *)(param_2 + 0x1a) = 0;
  *(undefined4 *)((longlong)param_2 + 0xd4) = 0;
  *(undefined1 *)(param_2 + 0x1b) = 0;
  *(undefined8 *)((longlong)param_2 + 0xdc) = 0;
  *(undefined4 *)((longlong)param_2 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_2 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc1) = 0;
  return;
}



// FUNCTION 148c8e92c FUN_148c8e92c body=63 status=ok
// SIG undefined FUN_148c8e92c(void)

undefined1 FUN_148c8e92c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c8ea54(param_2,param_3);
    param_3 = param_3 + 0xe8;
    param_2 = param_2 + 0xe8;
  }
  return 1;
}



// FUNCTION 148c8e994 FUN_148c8e994 body=59 status=ok
// SIG undefined FUN_148c8e994(void)

undefined8 FUN_148c8e994(longlong *param_1)

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



// FUNCTION 148c8e9e0 FUN_148c8e9e0 body=38 status=ok
// SIG undefined FUN_148c8e9e0(void)

void FUN_148c8e9e0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe8) == '\x01') {
    FUN_140fe7f26(param_2);
    *(undefined1 *)(param_2 + 0xe8) = 0;
  }
  return;
}



// FUNCTION 148c8ea54 FUN_148c8ea54 body=297 status=ok
// SIG undefined FUN_148c8ea54(void)

longlong FUN_148c8ea54(longlong param_1,longlong param_2)

{
  FUN_1489fb7d2();
  if (*(int *)(param_1 + 0xb4) != *(int *)(param_2 + 0xb4)) {
    *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(param_2 + 0xb0);
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
  }
  if (*(int *)(param_1 + 0xbc) != *(int *)(param_2 + 0xbc)) {
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_2 + 0xbc);
  }
  if (*(int *)(param_1 + 0xc4) != *(int *)(param_2 + 0xc4)) {
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_2 + 0xc4);
  }
  if (*(int *)(param_1 + 0xcc) != *(int *)(param_2 + 0xcc)) {
    *(undefined1 *)(param_1 + 200) = *(undefined1 *)(param_2 + 200);
    *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_2 + 0xcc);
  }
  if (*(int *)(param_1 + 0xd4) != *(int *)(param_2 + 0xd4)) {
    *(undefined1 *)(param_1 + 0xd0) = *(undefined1 *)(param_2 + 0xd0);
    *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_2 + 0xd4);
  }
  if (*(int *)(param_1 + 0xdc) != *(int *)(param_2 + 0xdc)) {
    *(undefined1 *)(param_1 + 0xd8) = *(undefined1 *)(param_2 + 0xd8);
    *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_2 + 0xdc);
  }
  if (*(int *)(param_1 + 0xe4) != *(int *)(param_2 + 0xe4)) {
    *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
    *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_2 + 0xe4);
  }
  return param_1;
}



// FUNCTION 148c8eb7e FUN_148c8eb7e body=147 status=ok
// SIG undefined FUN_148c8eb7e(void)

void FUN_148c8eb7e(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xf0);
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b8ca9b0;
  *(undefined4 *)(param_2 + 0x16) = 0x42c80000;
  *(undefined4 *)((longlong)param_2 + 0xc4) = 0;
  *(undefined1 *)(param_2 + 0x19) = 0;
  *(undefined4 *)((longlong)param_2 + 0xcc) = 0;
  *(undefined1 *)(param_2 + 0x1a) = 0;
  *(undefined4 *)((longlong)param_2 + 0xd4) = 0;
  *(undefined1 *)(param_2 + 0x1b) = 0;
  *(undefined4 *)((longlong)param_2 + 0xdc) = 0;
  *(undefined1 *)(param_2 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_2 + 0xe4) = 0;
  *(undefined1 *)(param_2 + 0x1d) = 0;
  *(undefined4 *)((longlong)param_2 + 0xec) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb9) = 0;
  return;
}



// FUNCTION 148c8ec12 FUN_148c8ec12 body=124 status=ok
// SIG undefined FUN_148c8ec12(void)

void FUN_148c8ec12(undefined8 param_1,undefined8 *param_2)

{
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b8ca9b0;
  *(undefined4 *)(param_2 + 0x16) = 0x42c80000;
  *(undefined4 *)((longlong)param_2 + 0xc4) = 0;
  *(undefined1 *)(param_2 + 0x19) = 0;
  *(undefined4 *)((longlong)param_2 + 0xcc) = 0;
  *(undefined1 *)(param_2 + 0x1a) = 0;
  *(undefined4 *)((longlong)param_2 + 0xd4) = 0;
  *(undefined1 *)(param_2 + 0x1b) = 0;
  *(undefined4 *)((longlong)param_2 + 0xdc) = 0;
  *(undefined1 *)(param_2 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_2 + 0xe4) = 0;
  *(undefined1 *)(param_2 + 0x1d) = 0;
  *(undefined4 *)((longlong)param_2 + 0xec) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb9) = 0;
  return;
}



// FUNCTION 148c8ecb2 FUN_148c8ecb2 body=63 status=ok
// SIG undefined FUN_148c8ecb2(void)

undefined1 FUN_148c8ecb2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c8edda(param_2,param_3);
    param_3 = param_3 + 0xf0;
    param_2 = param_2 + 0xf0;
  }
  return 1;
}



// FUNCTION 148c8ed1a FUN_148c8ed1a body=59 status=ok
// SIG undefined FUN_148c8ed1a(void)

undefined8 FUN_148c8ed1a(longlong *param_1)

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



// FUNCTION 148c8ed66 FUN_148c8ed66 body=38 status=ok
// SIG undefined FUN_148c8ed66(void)

void FUN_148c8ed66(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf0) == '\x01') {
    FUN_140fe7f26(param_2);
    *(undefined1 *)(param_2 + 0xf0) = 0;
  }
  return;
}



// FUNCTION 148c8edda FUN_148c8edda body=339 status=ok
// SIG undefined FUN_148c8edda(void)

longlong FUN_148c8edda(longlong param_1,longlong param_2)

{
  FUN_1489fb7d2();
  if (*(int *)(param_1 + 0xb4) != *(int *)(param_2 + 0xb4)) {
    *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
  }
  if (*(int *)(param_1 + 0xbc) != *(int *)(param_2 + 0xbc)) {
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_2 + 0xbc);
  }
  if (*(int *)(param_1 + 0xc4) != *(int *)(param_2 + 0xc4)) {
    *(undefined1 *)(param_1 + 0xc0) = *(undefined1 *)(param_2 + 0xc0);
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_2 + 0xc4);
  }
  if (*(int *)(param_1 + 0xcc) != *(int *)(param_2 + 0xcc)) {
    *(undefined1 *)(param_1 + 200) = *(undefined1 *)(param_2 + 200);
    *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_2 + 0xcc);
  }
  if (*(int *)(param_1 + 0xd4) != *(int *)(param_2 + 0xd4)) {
    *(undefined1 *)(param_1 + 0xd0) = *(undefined1 *)(param_2 + 0xd0);
    *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_2 + 0xd4);
  }
  if (*(int *)(param_1 + 0xdc) != *(int *)(param_2 + 0xdc)) {
    *(undefined1 *)(param_1 + 0xd8) = *(undefined1 *)(param_2 + 0xd8);
    *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_2 + 0xdc);
  }
  if (*(int *)(param_1 + 0xe4) != *(int *)(param_2 + 0xe4)) {
    *(undefined1 *)(param_1 + 0xe0) = *(undefined1 *)(param_2 + 0xe0);
    *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_2 + 0xe4);
  }
  if (*(int *)(param_1 + 0xec) != *(int *)(param_2 + 0xec)) {
    *(undefined1 *)(param_1 + 0xe8) = *(undefined1 *)(param_2 + 0xe8);
    *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_2 + 0xec);
  }
  return param_1;
}



// FUNCTION 148c8ef72 FUN_148c8ef72 body=54 status=ok
// SIG undefined FUN_148c8ef72(void)

undefined1 FUN_148c8ef72(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c8f170(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 148c8efd0 FUN_148c8efd0 body=59 status=ok
// SIG undefined FUN_148c8efd0(void)

undefined8 FUN_148c8efd0(longlong *param_1)

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



// FUNCTION 148c8f016 FUN_148c8f016 body=34 status=ok
// SIG undefined FUN_148c8f016(void)

void FUN_148c8f016(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_148c8f114(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 148c8f086 FUN_148c8f086 body=142 status=ok
// SIG undefined FUN_148c8f086(void)

longlong FUN_148c8f086(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_140056680(param_1,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0x10,&DAT_149dfb77a);
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  *(longlong **)(param_1 + 0x20) = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x28) = (int)plVar2[1];
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  *(longlong **)(param_1 + 0x30) = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x38) = (int)plVar2[1];
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  *(longlong **)(param_1 + 0x40) = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x48) = (int)plVar2[1];
  return param_1;
}



// FUNCTION 148c8f114 FUN_148c8f114 body=92 status=ok
// SIG undefined FUN_148c8f114(void)

void FUN_148c8f114(longlong *param_1)

{
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[8] + 0x10))();
  }
  if ((longlong *)param_1[6] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[6] + 0x10))();
  }
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[4] + 0x10))();
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



// FUNCTION 148c8f170 FUN_148c8f170 body=186 status=ok
// SIG undefined FUN_148c8f170(void)

longlong FUN_148c8f170(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_144a787a6();
  FUN_144a787a6(param_1 + 0x10,param_2 + 0x10);
  plVar1 = *(longlong **)(param_2 + 0x20);
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x20) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  plVar1 = *(longlong **)(param_2 + 0x30);
  plVar2 = *(longlong **)(param_1 + 0x30);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x30) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  plVar1 = *(longlong **)(param_2 + 0x40);
  plVar2 = *(longlong **)(param_1 + 0x40);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x40) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  return param_1;
}



// FUNCTION 148c8f246 FUN_148c8f246 body=48 status=ok
// SIG undefined FUN_148c8f246(void)

void FUN_148c8f246(undefined8 param_1,longlong *param_2)

{
  if ((longlong *)param_2[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_2[2] + 0x10))();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148c8f28c FUN_148c8f28c body=54 status=ok
// SIG undefined FUN_148c8f28c(void)

undefined1 FUN_148c8f28c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c8f3f2(param_2,param_3);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 148c8f2ea FUN_148c8f2ea body=59 status=ok
// SIG undefined FUN_148c8f2ea(void)

undefined8 FUN_148c8f2ea(longlong *param_1)

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



// FUNCTION 148c8f330 FUN_148c8f330 body=52 status=ok
// SIG undefined FUN_148c8f330(void)

void FUN_148c8f330(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[4] == '\x01') {
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_2[2] + 0x10))();
    }
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 4) = 0;
  }
  return;
}



// FUNCTION 148c8f3b2 FUN_148c8f3b2 body=63 status=ok
// SIG undefined FUN_148c8f3b2(void)

longlong FUN_148c8f3b2(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_140056680(param_1,&DAT_149dfb77a);
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  *(longlong **)(param_1 + 0x10) = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x18) = (int)plVar2[1];
  return param_1;
}



// FUNCTION 148c8f3f2 FUN_148c8f3f2 body=77 status=ok
// SIG undefined FUN_148c8f3f2(void)

longlong FUN_148c8f3f2(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_144a787a6();
  plVar1 = *(longlong **)(param_2 + 0x10);
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x10) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  return param_1;
}



// FUNCTION 148c8f440 FUN_148c8f440 body=51 status=ok
// SIG undefined FUN_148c8f440(void)

void FUN_148c8f440(undefined8 param_1,undefined8 *param_2)

{
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140056680(param_2,&DAT_149dfb77a);
  *(undefined1 *)(param_2 + 2) = 0;
  *(undefined8 *)((longlong)param_2 + 0x14) = 0;
  return;
}



// FUNCTION 148c8f474 FUN_148c8f474 body=41 status=ok
// SIG undefined FUN_148c8f474(void)

void FUN_148c8f474(undefined8 param_1,longlong param_2)

{
  FUN_140056680(param_2,&DAT_149dfb77a);
  *(undefined1 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x14) = 0;
  return;
}



// FUNCTION 148c8f4c2 FUN_148c8f4c2 body=68 status=ok
// SIG undefined FUN_148c8f4c2(void)

undefined8 FUN_148c8f4c2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_3 + 0x18);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 148c8f52e FUN_148c8f52e body=59 status=ok
// SIG undefined FUN_148c8f52e(void)

undefined8 FUN_148c8f52e(longlong *param_1)

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



// FUNCTION 148c8f574 FUN_148c8f574 body=37 status=ok
// SIG undefined FUN_148c8f574(void)

void FUN_148c8f574(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[4] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 4) = 0;
  }
  return;
}



// FUNCTION 148c8f5ea FUN_148c8f5ea body=37 status=ok
// SIG undefined FUN_148c8f5ea(void)

void FUN_148c8f5ea(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x90);
  FUN_148c8f760(param_2);
  return;
}



// FUNCTION 148c8f636 FUN_148c8f636 body=63 status=ok
// SIG undefined FUN_148c8f636(void)

undefined1 FUN_148c8f636(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c8f942(param_2,param_3);
    param_3 = param_3 + 0x90;
    param_2 = param_2 + 0x90;
  }
  return 1;
}



// FUNCTION 148c8f69e FUN_148c8f69e body=59 status=ok
// SIG undefined FUN_148c8f69e(void)

undefined8 FUN_148c8f69e(longlong *param_1)

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



// FUNCTION 148c8f6ea FUN_148c8f6ea body=40 status=ok
// SIG undefined FUN_148c8f6ea(void)

void FUN_148c8f6ea(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x90) == '\x01') {
    FUN_148c8f83a(param_2);
    *(undefined1 *)(param_2 + 0x90) = 0;
  }
  return;
}



// FUNCTION 148c8f760 FUN_148c8f760 body=217 status=ok
// SIG undefined FUN_148c8f760(void)

longlong FUN_148c8f760(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_140056680(param_1,&DAT_149dfb77a);
  *(undefined8 *)(param_1 + 0x10) = 0;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  *(longlong **)(param_1 + 0x18) = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x20) = (int)plVar2[1];
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  *(longlong **)(param_1 + 0x28) = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x30) = (int)plVar2[1];
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  *(longlong **)(param_1 + 0x38) = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x40) = (int)plVar2[1];
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  *(longlong **)(param_1 + 0x48) = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x50) = (int)plVar2[1];
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  *(longlong **)(param_1 + 0x58) = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x60) = (int)plVar2[1];
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined1 *)(param_1 + 0x88) = 1;
  return param_1;
}



// FUNCTION 148c8f83a FUN_148c8f83a body=163 status=ok
// SIG undefined FUN_148c8f83a(void)

void FUN_148c8f83a(longlong *param_1)

{
  FUN_148c8f8dd(param_1[0xf],(int)param_1[0x10]);
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_148c8f903(param_1[0xd],(int)param_1[0xe]);
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0xb] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xb] + 0x10))();
  }
  if ((longlong *)param_1[9] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[9] + 0x10))();
  }
  if ((longlong *)param_1[7] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[7] + 0x10))();
  }
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[5] + 0x10))();
  }
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148c8f8dd FUN_148c8f8dd body=38 status=ok
// SIG undefined FUN_148c8f8dd(void)

void FUN_148c8f8dd(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148c8f114(param_1);
    param_1 = param_1 + 0x50;
  }
  return;
}



// FUNCTION 148c8f903 FUN_148c8f903 body=62 status=ok
// SIG undefined FUN_148c8f903(void)

void FUN_148c8f903(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if ((longlong *)*plVar1 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar1 + 0x10))();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 148c8f942 FUN_148c8f942 body=380 status=ok
// SIG undefined FUN_148c8f942(void)

longlong FUN_148c8f942(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_144a787a6();
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  plVar1 = *(longlong **)(param_2 + 0x18);
  plVar2 = *(longlong **)(param_1 + 0x18);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x18) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  plVar1 = *(longlong **)(param_2 + 0x28);
  plVar2 = *(longlong **)(param_1 + 0x28);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x28) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  plVar1 = *(longlong **)(param_2 + 0x38);
  plVar2 = *(longlong **)(param_1 + 0x38);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x38) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  plVar1 = *(longlong **)(param_2 + 0x48);
  plVar2 = *(longlong **)(param_1 + 0x48);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x48) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  plVar1 = *(longlong **)(param_2 + 0x58);
  plVar2 = *(longlong **)(param_1 + 0x58);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x58) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  FUN_148c8fabe(param_1 + 0x68,param_2 + 0x68);
  FUN_148c8fb1e(param_1 + 0x78,param_2 + 0x78);
  *(undefined1 *)(param_1 + 0x88) = *(undefined1 *)(param_2 + 0x88);
  return param_1;
}



// FUNCTION 148c8fabe FUN_148c8fabe body=95 status=ok
// SIG undefined FUN_148c8fabe(void)

undefined8 * FUN_148c8fabe(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_148c8f903(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c8fb7e(param_1,iVar1);
      FUN_148c8fbe0(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c8fb1e FUN_148c8fb1e body=95 status=ok
// SIG undefined FUN_148c8fb1e(void)

undefined8 * FUN_148c8fb1e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_148c8f8dd(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c8fc86(param_1,iVar1);
      FUN_148c8fcf9(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c8fb7e FUN_148c8fb7e body=98 status=ok
// SIG undefined FUN_148c8fb7e(void)

void FUN_148c8fb7e(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 5,8);
    iVar1 = (int)(uVar2 >> 5);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x20,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c8fbe0 FUN_148c8fbe0 body=52 status=ok
// SIG undefined FUN_148c8fbe0(void)

void FUN_148c8fbe0(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c8fc14(param_1,param_2);
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return;
}



// FUNCTION 148c8fc14 FUN_148c8fc14 body=114 status=ok
// SIG undefined FUN_148c8fc14(void)

undefined8 * FUN_148c8fc14(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  longlong *plVar2;
  
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
  plVar2 = (longlong *)param_2[2];
  param_1[2] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  return param_1;
}



// FUNCTION 148c8fc86 FUN_148c8fc86 body=115 status=ok
// SIG undefined FUN_148c8fc86(void)

void FUN_148c8fc86(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c8fcf9 FUN_148c8fcf9 body=52 status=ok
// SIG undefined FUN_148c8fcf9(void)

void FUN_148c8fcf9(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c8fd2e(param_1,param_2);
    param_1 = param_1 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return;
}



// FUNCTION 148c8fd2e FUN_148c8fd2e body=246 status=ok
// SIG undefined FUN_148c8fd2e(void)

undefined8 * FUN_148c8fd2e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  longlong *plVar3;
  
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
  plVar3 = (longlong *)param_2[4];
  param_1[4] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  plVar3 = (longlong *)param_2[6];
  param_1[6] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  plVar3 = (longlong *)param_2[8];
  param_1[8] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  return param_1;
}



// FUNCTION 148c8fe26 FUN_148c8fe26 body=37 status=ok
// SIG undefined FUN_148c8fe26(void)

void FUN_148c8fe26(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x330);
  FUN_1440851c8(param_2);
  return;
}



// FUNCTION 148c8fe78 FUN_148c8fe78 body=63 status=ok
// SIG undefined FUN_148c8fe78(void)

undefined1 FUN_148c8fe78(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144085842(param_2,param_3);
    param_3 = param_3 + 0x330;
    param_2 = param_2 + 0x330;
  }
  return 1;
}



// FUNCTION 148c8fee0 FUN_148c8fee0 body=59 status=ok
// SIG undefined FUN_148c8fee0(void)

undefined8 FUN_148c8fee0(longlong *param_1)

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



// FUNCTION 148c8ff2c FUN_148c8ff2c body=38 status=ok
// SIG undefined FUN_148c8ff2c(void)

void FUN_148c8ff2c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x330) == '\x01') {
    FUN_1440856b2(param_2);
    *(undefined1 *)(param_2 + 0x330) = 0;
  }
  return;
}



// FUNCTION 148c8ffa0 FUN_148c8ffa0 body=38 status=ok
// SIG undefined FUN_148c8ffa0(void)

undefined8 FUN_148c8ffa0(undefined8 param_1,int param_2)

{
  FUN_1440856b2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c8ffc6 FUN_148c8ffc6 body=55 status=ok
// SIG undefined FUN_148c8ffc6(void)

void FUN_148c8ffc6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbb358 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbb358 = FUN_140002ddd(FUN_14660990f,uVar1,L"OakWidgetData_SelectCharacterMenu");
  }
  return;
}



// FUNCTION 148c8fffd FUN_148c8fffd body=43 status=ok
// SIG undefined FUN_148c8fffd(void)

void FUN_148c8fffd(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 148c90028 FUN_148c90028 body=95 status=ok
// SIG undefined FUN_148c90028(void)

undefined8 * FUN_148c90028(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_148c8fffd(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c90088(param_1,iVar1);
      FUN_148c900ea(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c90088 FUN_148c90088 body=98 status=ok
// SIG undefined FUN_148c90088(void)

void FUN_148c90088(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 5,8);
    iVar1 = (int)(uVar2 >> 5);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x20,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c900ea FUN_148c900ea body=132 status=ok
// SIG undefined FUN_148c900ea(void)

void FUN_148c900ea(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = (undefined8 *)(param_2 + 0x10);
    do {
      *param_1 = 0;
      iVar1 = *(int *)(puVar2 + -1);
      _Src = (void *)puVar2[-2];
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
      }
      *(undefined4 *)(param_1 + 3) = *(undefined4 *)(puVar2 + 1);
      param_1[2] = *puVar2;
      param_1 = param_1 + 4;
      puVar2 = puVar2 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148c90170 FUN_148c90170 body=48 status=ok
// SIG undefined FUN_148c90170(void)

void FUN_148c90170(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xb0);
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b8cb250;
  return;
}



// FUNCTION 148c901a0 FUN_148c901a0 body=32 status=ok
// SIG undefined FUN_148c901a0(void)

void FUN_148c901a0(undefined8 param_1,undefined8 *param_2)

{
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b8cb250;
  return;
}



// FUNCTION 148c901e4 FUN_148c901e4 body=63 status=ok
// SIG undefined FUN_148c901e4(void)

undefined1 FUN_148c901e4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1489fb7d2(param_2,param_3);
    param_3 = param_3 + 0xb0;
    param_2 = param_2 + 0xb0;
  }
  return 1;
}



// FUNCTION 148c9024c FUN_148c9024c body=59 status=ok
// SIG undefined FUN_148c9024c(void)

undefined8 FUN_148c9024c(longlong *param_1)

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



// FUNCTION 148c90298 FUN_148c90298 body=38 status=ok
// SIG undefined FUN_148c90298(void)

void FUN_148c90298(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    FUN_140fe7f26(param_2);
    *(undefined1 *)(param_2 + 0xb0) = 0;
  }
  return;
}



// FUNCTION 148c9030c FUN_148c9030c body=57 status=ok
// SIG undefined FUN_148c9030c(void)

void FUN_148c9030c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbb370 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbb370 = FUN_140002ddd(FUN_1466099a5,uVar1,L"OakWidgetData_SplitscreenHelper");
  }
  return;
}



// FUNCTION 148c90346 FUN_148c90346 body=67 status=ok
// SIG undefined FUN_148c90346(void)

void FUN_148c90346(undefined8 param_1,undefined8 *param_2)

{
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[4] = 0;
  FUN_140056680(param_2 + 1,&DAT_149dfb77a);
  FUN_140056680(param_2 + 3,&DAT_149dfb77a);
  return;
}



// FUNCTION 148c9038a FUN_148c9038a body=52 status=ok
// SIG undefined FUN_148c9038a(void)

void FUN_148c9038a(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 0;
  FUN_140056680(param_2 + 8,&DAT_149dfb77a);
  FUN_140056680(param_2 + 0x18,&DAT_149dfb77a);
  return;
}



// FUNCTION 148c903be FUN_148c903be body=48 status=ok
// SIG undefined FUN_148c903be(void)

void FUN_148c903be(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148c90404 FUN_148c90404 body=94 status=ok
// SIG undefined FUN_148c90404(void)

undefined1 FUN_148c90404(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined1 *)(param_2 + lVar1) = *(undefined1 *)(param_3 + lVar1);
      FUN_144a787a6();
      FUN_144a787a6(param_2 + lVar1 + 0x18,param_3 + lVar1 + 0x18);
      lVar1 = lVar1 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c9048a FUN_148c9048a body=59 status=ok
// SIG undefined FUN_148c9048a(void)

undefined8 FUN_148c9048a(longlong *param_1)

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



// FUNCTION 148c90528 FUN_148c90528 body=52 status=ok
// SIG undefined FUN_148c90528(void)

void FUN_148c90528(longlong param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 148c90576 FUN_148c90576 body=48 status=ok
// SIG undefined FUN_148c90576(void)

void FUN_148c90576(undefined8 param_1,longlong *param_2)

{
  if ((longlong *)param_2[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_2[2] + 0x10))();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148c905bc FUN_148c905bc body=54 status=ok
// SIG undefined FUN_148c905bc(void)

undefined1 FUN_148c905bc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c906e2(param_2,param_3);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 148c9061a FUN_148c9061a body=59 status=ok
// SIG undefined FUN_148c9061a(void)

undefined8 FUN_148c9061a(longlong *param_1)

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



// FUNCTION 148c90660 FUN_148c90660 body=52 status=ok
// SIG undefined FUN_148c90660(void)

void FUN_148c90660(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[4] == '\x01') {
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_2[2] + 0x10))();
    }
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 4) = 0;
  }
  return;
}



// FUNCTION 148c906e2 FUN_148c906e2 body=77 status=ok
// SIG undefined FUN_148c906e2(void)

longlong FUN_148c906e2(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_144a787a6();
  plVar1 = *(longlong **)(param_2 + 0x10);
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x10) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  return param_1;
}



// FUNCTION 148c90730 FUN_148c90730 body=37 status=ok
// SIG undefined FUN_148c90730(void)

void FUN_148c90730(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x288);
  FUN_1461650f0(param_2);
  return;
}



// FUNCTION 148c90782 FUN_148c90782 body=63 status=ok
// SIG undefined FUN_148c90782(void)

undefined1 FUN_148c90782(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c8499e(param_2,param_3);
    param_3 = param_3 + 0x288;
    param_2 = param_2 + 0x288;
  }
  return 1;
}



// FUNCTION 148c907ea FUN_148c907ea body=59 status=ok
// SIG undefined FUN_148c907ea(void)

undefined8 FUN_148c907ea(longlong *param_1)

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



// FUNCTION 148c90836 FUN_148c90836 body=38 status=ok
// SIG undefined FUN_148c90836(void)

void FUN_148c90836(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x288) == '\x01') {
    FUN_1415c2420(param_2);
    *(undefined1 *)(param_2 + 0x288) = 0;
  }
  return;
}



// FUNCTION 148c908ac FUN_148c908ac body=126 status=ok
// SIG undefined FUN_148c908ac(void)

void FUN_148c908ac(undefined8 param_1,undefined8 *param_2)

{
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[10] = 0;
  FUN_140056680(param_2,L"#FFFFFF");
  FUN_144a5dc74(param_2 + 2);
  FUN_144a5dc74(param_2 + 4);
  *(undefined4 *)(param_2 + 6) = 0;
  param_2[7] = 0;
  *(undefined1 *)(param_2 + 8) = 0;
  *(undefined8 *)((longlong)param_2 + 0x44) = 0;
  *(undefined8 *)((longlong)param_2 + 0x4c) = 0;
  *(undefined4 *)((longlong)param_2 + 0x54) = 0xffffffff;
  return;
}



// FUNCTION 148c9092a FUN_148c9092a body=80 status=ok
// SIG undefined FUN_148c9092a(void)

void FUN_148c9092a(undefined8 param_1,longlong param_2)

{
  FUN_140056680(param_2,L"#FFFFFF");
  FUN_144a5dc74(param_2 + 0x10);
  FUN_144a5dc74(param_2 + 0x20);
  *(undefined4 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined1 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x44) = 0;
  *(undefined8 *)(param_2 + 0x4c) = 0;
  *(undefined4 *)(param_2 + 0x54) = 0xffffffff;
  return;
}



// FUNCTION 148c90998 FUN_148c90998 body=54 status=ok
// SIG undefined FUN_148c90998(void)

undefined1 FUN_148c90998(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_145a1d726(param_2,param_3);
    param_3 = param_3 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return 1;
}



// FUNCTION 148c909f6 FUN_148c909f6 body=59 status=ok
// SIG undefined FUN_148c909f6(void)

undefined8 FUN_148c909f6(longlong *param_1)

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



// FUNCTION 148c90a3c FUN_148c90a3c body=34 status=ok
// SIG undefined FUN_148c90a3c(void)

void FUN_148c90a3c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_145a1d468(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 148c90aae FUN_148c90aae body=37 status=ok
// SIG undefined FUN_148c90aae(void)

void FUN_148c90aae(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x1e0);
  FUN_1460777f4(param_2);
  return;
}



// FUNCTION 148c90b00 FUN_148c90b00 body=63 status=ok
// SIG undefined FUN_148c90b00(void)

undefined1 FUN_148c90b00(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c90c2a(param_2,param_3);
    param_3 = param_3 + 0x1e0;
    param_2 = param_2 + 0x1e0;
  }
  return 1;
}



// FUNCTION 148c90b68 FUN_148c90b68 body=59 status=ok
// SIG undefined FUN_148c90b68(void)

undefined8 FUN_148c90b68(longlong *param_1)

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



// FUNCTION 148c90bb4 FUN_148c90bb4 body=40 status=ok
// SIG undefined FUN_148c90bb4(void)

void FUN_148c90bb4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1e0) == '\x01') {
    FUN_145ecdf4a(param_2);
    *(undefined1 *)(param_2 + 0x1e0) = 0;
  }
  return;
}



// FUNCTION 148c90c2a FUN_148c90c2a body=672 status=ok
// SIG undefined FUN_148c90c2a(void)

longlong FUN_148c90c2a(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_1489fb7d2();
  if ((*(int *)(param_1 + 0xc0) == 0) || (*(int *)(param_1 + 0xc0) != *(int *)(param_2 + 0xc0))) {
    *(int *)(param_1 + 0xc0) = *(int *)(param_2 + 0xc0);
    FUN_148c90eca(param_1 + 0xb0,param_2 + 0xb0);
  }
  if ((*(int *)(param_1 + 0xd8) == 0) || (*(int *)(param_1 + 0xd8) != *(int *)(param_2 + 0xd8))) {
    *(int *)(param_1 + 0xd8) = *(int *)(param_2 + 0xd8);
    FUN_148c90eca(param_1 + 200,param_2 + 200);
  }
  if (*(int *)(param_1 + 0x138) != *(int *)(param_2 + 0x138)) {
    FUN_145a1d726(param_1 + 0xe0,param_2 + 0xe0);
    *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_2 + 0x138);
  }
  if (*(int *)(param_1 + 0x144) != *(int *)(param_2 + 0x144)) {
    *(undefined1 *)(param_1 + 0x140) = *(undefined1 *)(param_2 + 0x140);
    *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_2 + 0x144);
  }
  if (*(int *)(param_1 + 0x14c) != *(int *)(param_2 + 0x14c)) {
    *(undefined1 *)(param_1 + 0x148) = *(undefined1 *)(param_2 + 0x148);
    *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_2 + 0x14c);
  }
  if (*(int *)(param_1 + 0x154) != *(int *)(param_2 + 0x154)) {
    *(undefined1 *)(param_1 + 0x150) = *(undefined1 *)(param_2 + 0x150);
    *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_2 + 0x154);
  }
  if (*(int *)(param_1 + 0x168) != *(int *)(param_2 + 0x168)) {
    uVar1 = *(undefined4 *)(param_2 + 0x15c);
    uVar2 = *(undefined4 *)(param_2 + 0x160);
    uVar3 = *(undefined4 *)(param_2 + 0x164);
    *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_2 + 0x158);
    *(undefined4 *)(param_1 + 0x15c) = uVar1;
    *(undefined4 *)(param_1 + 0x160) = uVar2;
    *(undefined4 *)(param_1 + 0x164) = uVar3;
    *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_2 + 0x168);
  }
  if (*(int *)(param_1 + 0x180) != *(int *)(param_2 + 0x180)) {
    FUN_144a787a6(param_1 + 0x170,param_2 + 0x170);
    *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_2 + 0x180);
  }
  if (*(int *)(param_1 + 0x18c) != *(int *)(param_2 + 0x18c)) {
    *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_2 + 0x188);
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_2 + 0x18c);
  }
  if (*(int *)(param_1 + 0x1a0) != *(int *)(param_2 + 0x1a0)) {
    FUN_144a787a6(param_1 + 400,param_2 + 400);
    *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_2 + 0x1a0);
  }
  if (*(int *)(param_1 + 0x1ac) != *(int *)(param_2 + 0x1ac)) {
    *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_2 + 0x1a8);
    *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_2 + 0x1ac);
  }
  if (*(int *)(param_1 + 0x1c0) != *(int *)(param_2 + 0x1c0)) {
    FUN_144a787a6(param_1 + 0x1b0,param_2 + 0x1b0);
    *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_2 + 0x1c0);
  }
  if (*(int *)(param_1 + 0x1cc) != *(int *)(param_2 + 0x1cc)) {
    *(undefined1 *)(param_1 + 0x1c8) = *(undefined1 *)(param_2 + 0x1c8);
    *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(param_2 + 0x1cc);
  }
  if (*(int *)(param_1 + 0x1d4) != *(int *)(param_2 + 0x1d4)) {
    *(undefined1 *)(param_1 + 0x1d0) = *(undefined1 *)(param_2 + 0x1d0);
    *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(param_2 + 0x1d4);
  }
  if (*(int *)(param_1 + 0x1dc) != *(int *)(param_2 + 0x1dc)) {
    *(undefined1 *)(param_1 + 0x1d8) = *(undefined1 *)(param_2 + 0x1d8);
    *(undefined4 *)(param_1 + 0x1dc) = *(undefined4 *)(param_2 + 0x1dc);
  }
  return param_1;
}



// FUNCTION 148c90eca FUN_148c90eca body=95 status=ok
// SIG undefined FUN_148c90eca(void)

undefined8 * FUN_148c90eca(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145a1d3e7(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c90f2a(param_1,iVar1);
      FUN_148c90f99(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c90f2a FUN_148c90f2a body=111 status=ok
// SIG undefined FUN_148c90f2a(void)

void FUN_148c90f2a(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c90f99 FUN_148c90f99 body=52 status=ok
// SIG undefined FUN_148c90f99(void)

void FUN_148c90f99(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_145a1d862(param_1,param_2);
    param_1 = param_1 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return;
}



// FUNCTION 148c90fce FUN_148c90fce body=37 status=ok
// SIG undefined FUN_148c90fce(void)

void FUN_148c90fce(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xf0);
  FUN_145effb6c(param_2);
  return;
}



// FUNCTION 148c91020 FUN_148c91020 body=63 status=ok
// SIG undefined FUN_148c91020(void)

undefined1 FUN_148c91020(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c9114a(param_2,param_3);
    param_3 = param_3 + 0xf0;
    param_2 = param_2 + 0xf0;
  }
  return 1;
}



// FUNCTION 148c91088 FUN_148c91088 body=59 status=ok
// SIG undefined FUN_148c91088(void)

undefined8 FUN_148c91088(longlong *param_1)

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



// FUNCTION 148c910d4 FUN_148c910d4 body=40 status=ok
// SIG undefined FUN_148c910d4(void)

void FUN_148c910d4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf0) == '\x01') {
    FUN_145c618d8(param_2);
    *(undefined1 *)(param_2 + 0xf0) = 0;
  }
  return;
}



// FUNCTION 148c9114a FUN_148c9114a body=315 status=ok
// SIG undefined FUN_148c9114a(void)

longlong FUN_148c9114a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_1489fb7d2();
  plVar1 = *(longlong **)(param_2 + 0xb0);
  plVar2 = *(longlong **)(param_1 + 0xb0);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0xb0) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
  plVar1 = *(longlong **)(param_2 + 0xc0);
  plVar2 = *(longlong **)(param_1 + 0xc0);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0xc0) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 200);
  if (*(int *)(param_1 + 0xd4) != *(int *)(param_2 + 0xd4)) {
    *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
    *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_2 + 0xd4);
  }
  if (*(int *)(param_1 + 0xdc) != *(int *)(param_2 + 0xdc)) {
    *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
    *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_2 + 0xdc);
  }
  if (*(int *)(param_1 + 0xe4) != *(int *)(param_2 + 0xe4)) {
    *(undefined1 *)(param_1 + 0xe0) = *(undefined1 *)(param_2 + 0xe0);
    *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_2 + 0xe4);
  }
  if (*(int *)(param_1 + 0xec) != *(int *)(param_2 + 0xec)) {
    *(undefined1 *)(param_1 + 0xe8) = *(undefined1 *)(param_2 + 0xe8);
    *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_2 + 0xec);
  }
  return param_1;
}



// FUNCTION 148c91286 FUN_148c91286 body=48 status=ok
// SIG undefined FUN_148c91286(void)

void FUN_148c91286(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xb50);
  FUN_145854e74(param_2);
  *param_2 = &PTR_FUN_14b8cc110;
  return;
}



// FUNCTION 148c912b6 FUN_148c912b6 body=32 status=ok
// SIG undefined FUN_148c912b6(void)

void FUN_148c912b6(undefined8 param_1,undefined8 *param_2)

{
  FUN_145854e74(param_2);
  *param_2 = &PTR_FUN_14b8cc110;
  return;
}



// FUNCTION 148c912f4 FUN_148c912f4 body=63 status=ok
// SIG undefined FUN_148c912f4(void)

undefined1 FUN_148c912f4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c6ad5e(param_2,param_3);
    param_3 = param_3 + 0xb50;
    param_2 = param_2 + 0xb50;
  }
  return 1;
}



// FUNCTION 148c9135c FUN_148c9135c body=59 status=ok
// SIG undefined FUN_148c9135c(void)

undefined8 FUN_148c9135c(longlong *param_1)

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



// FUNCTION 148c913a8 FUN_148c913a8 body=40 status=ok
// SIG undefined FUN_148c913a8(void)

void FUN_148c913a8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb50) == '\x01') {
    FUN_1458b3782(param_2);
    *(undefined1 *)(param_2 + 0xb50) = 0;
  }
  return;
}



// FUNCTION 148c9141e FUN_148c9141e body=38 status=ok
// SIG undefined FUN_148c9141e(void)

undefined8 FUN_148c9141e(undefined8 param_1,int param_2)

{
  FUN_1458b3782();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c91444 FUN_148c91444 body=55 status=ok
// SIG undefined FUN_148c91444(void)

void FUN_148c91444(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbbf80 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbbf80 = FUN_140002ddd(FUN_146609d8d,uVar1,L"OakWidgetData_TransferMenuBackpack");
  }
  return;
}



// FUNCTION 148c9147c FUN_148c9147c body=68 status=ok
// SIG undefined FUN_148c9147c(void)

void FUN_148c9147c(undefined8 param_1,undefined8 *param_2)

{
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140056680(param_2 + 6,&DAT_149dfb77a);
  FUN_140056680(param_2 + 8,&DAT_149dfb77a);
  return;
}



// FUNCTION 148c914c0 FUN_148c914c0 body=71 status=ok
// SIG undefined FUN_148c914c0(void)

void FUN_148c914c0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  *(undefined8 *)((longlong)param_2 + 0x25) = 0;
  FUN_140056680(param_2 + 6,&DAT_149dfb77a);
  FUN_140056680(param_2 + 8,&DAT_149dfb77a);
  return;
}



// FUNCTION 148c91526 FUN_148c91526 body=54 status=ok
// SIG undefined FUN_148c91526(void)

undefined1 FUN_148c91526(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c9163a(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 148c91584 FUN_148c91584 body=59 status=ok
// SIG undefined FUN_148c91584(void)

undefined8 FUN_148c91584(longlong *param_1)

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



// FUNCTION 148c915ca FUN_148c915ca body=34 status=ok
// SIG undefined FUN_148c915ca(void)

void FUN_148c915ca(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_145ac8500(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 148c9163a FUN_148c9163a body=87 status=ok
// SIG undefined FUN_148c9163a(void)

longlong FUN_148c9163a(longlong param_1,longlong param_2)

{
  FUN_144a787a6();
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  FUN_144a787a6(param_1 + 0x18,param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x2c) = *(undefined1 *)(param_2 + 0x2c);
  FUN_144a787a6(param_1 + 0x30,param_2 + 0x30);
  FUN_144a787a6(param_1 + 0x40,param_2 + 0x40);
  return param_1;
}



// FUNCTION 148c91692 FUN_148c91692 body=37 status=ok
// SIG undefined FUN_148c91692(void)

void FUN_148c91692(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x138);
  FUN_145ec1d16(param_2);
  return;
}



// FUNCTION 148c916e4 FUN_148c916e4 body=63 status=ok
// SIG undefined FUN_148c916e4(void)

undefined1 FUN_148c916e4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c91848(param_2,param_3);
    param_3 = param_3 + 0x138;
    param_2 = param_2 + 0x138;
  }
  return 1;
}



// FUNCTION 148c9174c FUN_148c9174c body=59 status=ok
// SIG undefined FUN_148c9174c(void)

undefined8 FUN_148c9174c(longlong *param_1)

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



// FUNCTION 148c91798 FUN_148c91798 body=40 status=ok
// SIG undefined FUN_148c91798(void)

void FUN_148c91798(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x138) == '\x01') {
    FUN_145ac8414(param_2);
    *(undefined1 *)(param_2 + 0x138) = 0;
  }
  return;
}



// FUNCTION 148c9180e FUN_148c9180e body=57 status=ok
// SIG undefined FUN_148c9180e(void)

void FUN_148c9180e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbbfb0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbbfb0 = FUN_140002ddd(FUN_146609eb9,uVar1,L"OakWidgetData_TravelNotification");
  }
  return;
}



// FUNCTION 148c91848 FUN_148c91848 body=192 status=ok
// SIG undefined FUN_148c91848(void)

longlong FUN_148c91848(longlong param_1,longlong param_2)

{
  FUN_1489fb7d2();
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined2 *)(param_1 + 0xb4) = *(undefined2 *)(param_2 + 0xb4);
  FUN_144a787a6(param_1 + 0xb8,param_2 + 0xb8);
  FUN_144a787a6(param_1 + 200,param_2 + 200);
  FUN_144a787a6(param_1 + 0xd8,param_2 + 0xd8);
  FUN_144a787a6(param_1 + 0xe8,param_2 + 0xe8);
  FUN_144a787a6(param_1 + 0xf8,param_2 + 0xf8);
  FUN_148c91908(param_1 + 0x108,param_2 + 0x108);
  FUN_144a787a6(param_1 + 0x118,param_2 + 0x118);
  FUN_144a787a6(param_1 + 0x128,param_2 + 0x128);
  return param_1;
}



// FUNCTION 148c91908 FUN_148c91908 body=95 status=ok
// SIG undefined FUN_148c91908(void)

undefined8 * FUN_148c91908(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145ac84d9(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c91968(param_1,iVar1);
      FUN_148c919db(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c91968 FUN_148c91968 body=115 status=ok
// SIG undefined FUN_148c91968(void)

void FUN_148c91968(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c919db FUN_148c919db body=52 status=ok
// SIG undefined FUN_148c919db(void)

void FUN_148c919db(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c91a10(param_1,param_2);
    param_1 = param_1 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return;
}



// FUNCTION 148c91a10 FUN_148c91a10 body=330 status=ok
// SIG undefined FUN_148c91a10(void)

undefined8 * FUN_148c91a10(undefined8 *param_1,undefined8 *param_2)

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
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  pvVar2 = (void *)param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined1 *)((longlong)param_1 + 0x2c) = *(undefined1 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
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



// FUNCTION 148c91b8a FUN_148c91b8a body=63 status=ok
// SIG undefined FUN_148c91b8a(void)

undefined1 FUN_148c91b8a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1457fd360(param_2,param_3);
    param_3 = param_3 + 0x80;
    param_2 = param_2 + 0x80;
  }
  return 1;
}



// FUNCTION 148c91bf2 FUN_148c91bf2 body=59 status=ok
// SIG undefined FUN_148c91bf2(void)

undefined8 FUN_148c91bf2(longlong *param_1)

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



// FUNCTION 148c91c3e FUN_148c91c3e body=38 status=ok
// SIG undefined FUN_148c91c3e(void)

void FUN_148c91c3e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x80) == '\x01') {
    FUN_140d4710a(param_2);
    *(undefined1 *)(param_2 + 0x80) = 0;
  }
  return;
}



// FUNCTION 148c91cb2 FUN_148c91cb2 body=1284 status=ok
// SIG undefined FUN_148c91cb2(void)

undefined8 * FUN_148c91cb2(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_698 [40];
  longlong local_670 [2];
  longlong local_660 [2];
  longlong local_650 [2];
  longlong local_640 [2];
  longlong local_630 [2];
  longlong local_620 [2];
  longlong local_610 [2];
  longlong local_600 [2];
  longlong local_5f0 [2];
  longlong local_5e0 [2];
  longlong local_5d0 [2];
  longlong local_5c0 [2];
  longlong local_5b0 [2];
  longlong local_5a0 [2];
  longlong local_590 [2];
  longlong local_580 [2];
  longlong local_570 [2];
  longlong local_560 [2];
  longlong *local_550;
  ulonglong *local_548;
  longlong local_540;
  undefined4 local_538;
  undefined4 local_534;
  undefined1 local_4b0 [144];
  undefined1 local_420 [144];
  undefined1 local_390 [144];
  undefined1 local_300 [144];
  undefined1 local_270 [144];
  undefined1 local_1e0 [144];
  undefined1 local_150 [144];
  undefined1 local_c0 [144];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_698;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_14124e07a();
  FUN_1400b22c2(local_560,"Option1");
  FUN_1400b22c2(local_570,"Option 1");
  FUN_148c921b8(&local_540,local_560,local_570);
  FUN_1400b22c2(local_580,"Option2");
  FUN_1400b22c2(local_590,"Option 2");
  FUN_148c921b8(local_4b0,local_580,local_590);
  FUN_1400b22c2(local_5a0,"Option3");
  FUN_1400b22c2(local_5b0,"Option 3");
  FUN_148c921b8(local_420,local_5a0,local_5b0);
  FUN_1400b22c2(local_5c0,"Option4");
  FUN_1400b22c2(local_5d0,"Option 4");
  FUN_148c921b8(local_390,local_5c0,local_5d0);
  FUN_1400b22c2(local_5e0,"Option5");
  FUN_1400b22c2(local_5f0,"Option 5");
  FUN_148c921b8(local_300,local_5e0,local_5f0);
  FUN_1400b22c2(local_600,"Option6");
  FUN_1400b22c2(local_610,"Option 6");
  FUN_148c921b8(local_270,local_600,local_610);
  FUN_1400b22c2(local_620,"Option7");
  FUN_1400b22c2(local_630,"Option 7");
  FUN_148c921b8(local_1e0,local_620,local_630);
  FUN_1400b22c2(local_640,"Option8");
  FUN_1400b22c2(local_650,"Option 8");
  FUN_148c921b8(local_150,local_640,local_650);
  FUN_1400b22c2(local_660,"Option9");
  FUN_1400b22c2(local_670,"Option 9");
  FUN_148c921b8(local_c0,local_660,local_670);
  local_548 = &local_30;
  local_550 = &local_540;
  FUN_148c922d8(param_1 + 0xb);
  lVar1 = 0x480;
  do {
    FUN_140d471ba((longlong)&local_540 + lVar1);
    lVar1 = lVar1 + -0x90;
  } while (lVar1 != -0x90);
  if (local_670[0] != 0) {
    FUN_1400020a8();
  }
  if (local_660[0] != 0) {
    FUN_1400020a8();
  }
  if (local_650[0] != 0) {
    FUN_1400020a8();
  }
  if (local_640[0] != 0) {
    FUN_1400020a8();
  }
  if (local_630[0] != 0) {
    FUN_1400020a8();
  }
  if (local_620[0] != 0) {
    FUN_1400020a8();
  }
  if (local_610[0] != 0) {
    FUN_1400020a8();
  }
  if (local_600[0] != 0) {
    FUN_1400020a8();
  }
  if (local_5f0[0] != 0) {
    FUN_1400020a8();
  }
  if (local_5e0[0] != 0) {
    FUN_1400020a8();
  }
  if (local_5d0[0] != 0) {
    FUN_1400020a8();
  }
  if (local_5c0[0] != 0) {
    FUN_1400020a8();
  }
  if (local_5b0[0] != 0) {
    FUN_1400020a8();
  }
  if (local_5a0[0] != 0) {
    FUN_1400020a8();
  }
  if (local_590[0] != 0) {
    FUN_1400020a8();
  }
  if (local_580[0] != 0) {
    FUN_1400020a8();
  }
  if (local_570[0] != 0) {
    FUN_1400020a8();
  }
  if (local_560[0] != 0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(&local_540,"Default Option");
  if (param_1 + 3 == &local_540) {
    if (local_540 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[3] != 0) {
      FUN_1400020a8();
    }
    param_1[3] = local_540;
    local_540 = 0;
    *(undefined4 *)(param_1 + 4) = local_538;
    *(undefined4 *)((longlong)param_1 + 0x24) = local_534;
  }
  FUN_1400b22c2(&local_540,"Dropdown Tooltip");
  if (param_1 + 5 == &local_540) {
    if (local_540 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[5] != 0) {
      FUN_1400020a8();
    }
    param_1[5] = local_540;
    *(undefined4 *)(param_1 + 6) = local_538;
    *(undefined4 *)((longlong)param_1 + 0x34) = local_534;
  }
  if ((local_30 ^ (ulonglong)auStack_698) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c921b8 FUN_148c921b8 body=288 status=ok
// SIG undefined FUN_148c921b8(void)

undefined8 * FUN_148c921b8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  void *pvVar2;
  longlong *plVar3;
  longlong *plVar4;
  
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
  FUN_1400b22c2(param_1 + 4,&DAT_149e02088);
  FUN_1400b22c2(param_1 + 6,&DAT_149e02088);
  FUN_1400b22c2(param_1 + 8,&DAT_149e02088);
  FUN_1400b22c2(param_1 + 10,&DAT_149e02088);
  plVar4 = (longlong *)FUN_140e82300();
  plVar3 = (longlong *)*plVar4;
  param_1[0xc] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  *(int *)(param_1 + 0xd) = (int)plVar4[1];
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 5;
  *(byte *)((longlong)param_1 + 0x89) = *(byte *)((longlong)param_1 + 0x89) & 0xe0;
  return param_1;
}



// FUNCTION 148c922d8 FUN_148c922d8 body=102 status=ok
// SIG undefined FUN_148c922d8(void)

undefined8 * FUN_148c922d8(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  
  FUN_140d47191(*param_1,*(undefined4 *)(param_1 + 1));
  lVar1 = *param_2;
  iVar2 = (int)((ulonglong)(param_2[1] - lVar1) >> 4) * 0x38e38e39;
  *(int *)(param_1 + 1) = iVar2;
  if (*(int *)((longlong)param_1 + 0xc) == 0 && iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1457fd43c(param_1,iVar2);
    FUN_1410d0c19(*param_1,lVar1,iVar2);
  }
  return param_1;
}



// FUNCTION 148c92340 FUN_148c92340 body=74 status=ok
// SIG undefined FUN_148c92340(void)

void FUN_148c92340(undefined8 param_1,undefined8 *param_2)

{
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_14153c466(param_2);
  FUN_1400b22c2(param_2 + 10,"Slider Tooltip");
  *(undefined8 *)((longlong)param_2 + 4) = 0x3f2666663e800000;
  return;
}



// FUNCTION 148c9238a FUN_148c9238a body=74 status=ok
// SIG undefined FUN_148c9238a(void)

void FUN_148c9238a(undefined8 param_1,undefined8 *param_2)

{
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_14153c466(param_2);
  FUN_1400b22c2(param_2 + 10,"Slider Tooltip");
  *(undefined8 *)((longlong)param_2 + 4) = 0x3f2666663e800000;
  return;
}



// FUNCTION 148c923f2 FUN_148c923f2 body=154 status=ok
// SIG undefined FUN_148c923f2(void)

undefined8 FUN_148c923f2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  
  if (param_4 != 0) {
    lVar7 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar7);
      lVar2 = param_2 + 0x18 + lVar7;
      *(undefined8 *)(lVar2 + -8) = *(undefined8 *)(puVar1 + 4);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      *(undefined4 *)(lVar2 + -0x18) = *puVar1;
      *(undefined4 *)(lVar2 + -0x14) = uVar4;
      *(undefined4 *)(lVar2 + -0x10) = uVar5;
      *(undefined4 *)(lVar2 + -0xc) = uVar6;
      FUN_144a787a6(lVar2,puVar1 + 6);
      uVar3 = *(undefined8 *)((longlong)puVar1 + 0x2d);
      *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(puVar1 + 10);
      *(undefined8 *)(lVar2 + 0x15) = uVar3;
      FUN_140ae1244(param_2 + lVar7 + 0x38,param_3 + lVar7 + 0x38);
      FUN_144a787a6(param_2 + lVar7 + 0x50,param_3 + lVar7 + 0x50);
      lVar7 = lVar7 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c924b4 FUN_148c924b4 body=59 status=ok
// SIG undefined FUN_148c924b4(void)

undefined8 FUN_148c924b4(longlong *param_1)

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



// FUNCTION 148c924fa FUN_148c924fa body=34 status=ok
// SIG undefined FUN_148c924fa(void)

void FUN_148c924fa(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_148c9256a(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 148c9256a FUN_148c9256a body=63 status=ok
// SIG undefined FUN_148c9256a(void)

void FUN_148c9256a(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148c925aa FUN_148c925aa body=92 status=ok
// SIG undefined FUN_148c925aa(void)

void FUN_148c925aa(undefined8 param_1,undefined8 *param_2)

{
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[6] = 0;
  FUN_1400b22c2(param_2,"Initial Text");
  *(undefined4 *)(param_2 + 2) = 0xf;
  FUN_1400b22c2(param_2 + 3,"Text Hint");
  FUN_1400b22c2(param_2 + 5,"Input Tooltip");
  return;
}



// FUNCTION 148c92606 FUN_148c92606 body=70 status=ok
// SIG undefined FUN_148c92606(void)

void FUN_148c92606(undefined8 param_1,longlong param_2)

{
  FUN_1400b22c2(param_2,"Initial Text");
  *(undefined4 *)(param_2 + 0x10) = 0xf;
  FUN_1400b22c2(param_2 + 0x18,"Text Hint");
  FUN_1400b22c2(param_2 + 0x28,"Input Tooltip");
  return;
}



// FUNCTION 148c9266a FUN_148c9266a body=86 status=ok
// SIG undefined FUN_148c9266a(void)

undefined8 FUN_148c9266a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
    FUN_144a787a6(param_2 + 0x18,param_3 + 0x18);
    FUN_144a787a6(param_2 + 0x28,param_3 + 0x28);
    param_2 = param_2 + 0x38;
    param_3 = param_3 + 0x38;
  }
  return 1;
}


