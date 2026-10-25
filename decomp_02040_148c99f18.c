// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148c99f18 FUN_148c99f18 body=38 status=ok
// SIG undefined FUN_148c99f18(void)

undefined8 FUN_148c99f18(undefined8 param_1,int param_2)

{
  FUN_140963198();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c99f3e FUN_148c99f3e body=55 status=ok
// SIG undefined FUN_148c99f3e(void)

void FUN_148c99f3e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbc8b8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbc8b8 = FUN_140002ddd(FUN_14660b457,uVar1,L"OakWidgetData_WorldIcon");
  }
  return;
}



// FUNCTION 148c99f76 FUN_148c99f76 body=249 status=ok
// SIG undefined FUN_148c99f76(void)

longlong FUN_148c99f76(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  FUN_1489fb7d2();
  puVar11 = (undefined8 *)(param_2 + 0xb0);
  puVar12 = (undefined8 *)(param_1 + 0xb0);
  for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar12 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar12 = puVar12 + 1;
  }
  FUN_144a787a6(param_1 + 0x110,param_2 + 0x110);
  FUN_144a787a6(param_1 + 0x120,param_2 + 0x120);
  *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_2 + 0x150);
  uVar3 = *(undefined4 *)(param_2 + 0x130);
  uVar4 = *(undefined4 *)(param_2 + 0x134);
  uVar5 = *(undefined4 *)(param_2 + 0x138);
  uVar6 = *(undefined4 *)(param_2 + 0x13c);
  uVar7 = *(undefined4 *)(param_2 + 0x144);
  uVar8 = *(undefined4 *)(param_2 + 0x148);
  uVar9 = *(undefined4 *)(param_2 + 0x14c);
  *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_2 + 0x140);
  *(undefined4 *)(param_1 + 0x144) = uVar7;
  *(undefined4 *)(param_1 + 0x148) = uVar8;
  *(undefined4 *)(param_1 + 0x14c) = uVar9;
  *(undefined4 *)(param_1 + 0x130) = uVar3;
  *(undefined4 *)(param_1 + 0x134) = uVar4;
  *(undefined4 *)(param_1 + 0x138) = uVar5;
  *(undefined4 *)(param_1 + 0x13c) = uVar6;
  plVar1 = *(longlong **)(param_2 + 0x158);
  plVar2 = *(longlong **)(param_1 + 0x158);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x158) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(param_2 + 0x160);
  FUN_144a787a6(param_1 + 0x168,param_2 + 0x168);
  FUN_144a787a6(param_1 + 0x178,param_2 + 0x178);
  FUN_144a787a6(param_1 + 0x188,param_2 + 0x188);
  return param_1;
}



// FUNCTION 148c9a070 FUN_148c9a070 body=37 status=ok
// SIG undefined FUN_148c9a070(void)

void FUN_148c9a070(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x420);
  FUN_145ec41c4(param_2);
  return;
}



// FUNCTION 148c9a0c2 FUN_148c9a0c2 body=63 status=ok
// SIG undefined FUN_148c9a0c2(void)

undefined1 FUN_148c9a0c2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c9a1ec(param_2,param_3);
    param_3 = param_3 + 0x420;
    param_2 = param_2 + 0x420;
  }
  return 1;
}



// FUNCTION 148c9a12a FUN_148c9a12a body=59 status=ok
// SIG undefined FUN_148c9a12a(void)

undefined8 FUN_148c9a12a(longlong *param_1)

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



// FUNCTION 148c9a176 FUN_148c9a176 body=40 status=ok
// SIG undefined FUN_148c9a176(void)

void FUN_148c9a176(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x420) == '\x01') {
    FUN_145aefeda(param_2);
    *(undefined1 *)(param_2 + 0x420) = 0;
  }
  return;
}



// FUNCTION 148c9a1ec FUN_148c9a1ec body=161 status=ok
// SIG undefined FUN_148c9a1ec(void)

longlong FUN_148c9a1ec(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1489fb7d2();
  FUN_148c9a28e(param_1 + 0xb0,param_2 + 0xb0);
  FUN_148c9a28e(param_1 + 0xc0,param_2 + 0xc0);
  FUN_148c99f76(param_1 + 0xd0,param_2 + 0xd0);
  FUN_148c99f76(param_1 + 0x268,param_2 + 0x268);
  if (*(int *)(param_1 + 0x404) != *(int *)(param_2 + 0x404)) {
    *(undefined1 *)(param_1 + 0x400) = *(undefined1 *)(param_2 + 0x400);
    *(undefined4 *)(param_1 + 0x404) = *(undefined4 *)(param_2 + 0x404);
  }
  *(undefined8 *)(param_1 + 0x418) = *(undefined8 *)(param_2 + 0x418);
  uVar1 = *(undefined8 *)(param_2 + 0x410);
  *(undefined8 *)(param_1 + 0x408) = *(undefined8 *)(param_2 + 0x408);
  *(undefined8 *)(param_1 + 0x410) = uVar1;
  return param_1;
}



// FUNCTION 148c9a28e FUN_148c9a28e body=95 status=ok
// SIG undefined FUN_148c9a28e(void)

undefined8 * FUN_148c9a28e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145aeff5b(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c9a2ee(param_1,iVar1);
      FUN_148c9a360(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c9a2ee FUN_148c9a2ee body=114 status=ok
// SIG undefined FUN_148c9a2ee(void)

void FUN_148c9a2ee(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x198,8);
    iVar2 = (int)(uVar1 / 0x198);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x198,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c9a360 FUN_148c9a360 body=60 status=ok
// SIG undefined FUN_148c9a360(void)

void FUN_148c9a360(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_140963406(param_1,param_2);
    param_1 = param_1 + 0x198;
    param_2 = param_2 + 0x198;
  }
  return;
}



// FUNCTION 148c9a39e FUN_148c9a39e body=37 status=ok
// SIG undefined FUN_148c9a39e(void)

void FUN_148c9a39e(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x158);
  FUN_146144550(param_2);
  return;
}



// FUNCTION 148c9a3f0 FUN_148c9a3f0 body=63 status=ok
// SIG undefined FUN_148c9a3f0(void)

undefined1 FUN_148c9a3f0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c9a51a(param_2,param_3);
    param_3 = param_3 + 0x158;
    param_2 = param_2 + 0x158;
  }
  return 1;
}



// FUNCTION 148c9a458 FUN_148c9a458 body=59 status=ok
// SIG undefined FUN_148c9a458(void)

undefined8 FUN_148c9a458(longlong *param_1)

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



// FUNCTION 148c9a4a4 FUN_148c9a4a4 body=40 status=ok
// SIG undefined FUN_148c9a4a4(void)

void FUN_148c9a4a4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x158) == '\x01') {
    FUN_145cb0ca0(param_2);
    *(undefined1 *)(param_2 + 0x158) = 0;
  }
  return;
}



// FUNCTION 148c9a51a FUN_148c9a51a body=588 status=ok
// SIG undefined FUN_148c9a51a(void)

longlong FUN_148c9a51a(longlong param_1,longlong param_2)

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
    *(undefined1 *)(param_1 + 0xc0) = *(undefined1 *)(param_2 + 0xc0);
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_2 + 0xc4);
  }
  if (*(int *)(param_1 + 0xcc) != *(int *)(param_2 + 0xcc)) {
    *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 200);
    *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_2 + 0xcc);
  }
  if (*(int *)(param_1 + 0xe0) != *(int *)(param_2 + 0xe0)) {
    FUN_144a787a6(param_1 + 0xd0,param_2 + 0xd0);
    *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
  }
  if (*(int *)(param_1 + 0xec) != *(int *)(param_2 + 0xec)) {
    *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
    *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_2 + 0xec);
  }
  FUN_140ae1244(param_1 + 0xf0,param_2 + 0xf0);
  if (*(int *)(param_1 + 0x10c) != *(int *)(param_2 + 0x10c)) {
    *(undefined1 *)(param_1 + 0x108) = *(undefined1 *)(param_2 + 0x108);
    *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_2 + 0x10c);
  }
  if (*(int *)(param_1 + 0x114) != *(int *)(param_2 + 0x114)) {
    *(undefined1 *)(param_1 + 0x110) = *(undefined1 *)(param_2 + 0x110);
    *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_2 + 0x114);
  }
  if (*(int *)(param_1 + 0x11c) != *(int *)(param_2 + 0x11c)) {
    *(undefined1 *)(param_1 + 0x118) = *(undefined1 *)(param_2 + 0x118);
    *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_2 + 0x11c);
  }
  if (*(int *)(param_1 + 0x124) != *(int *)(param_2 + 0x124)) {
    *(undefined1 *)(param_1 + 0x120) = *(undefined1 *)(param_2 + 0x120);
    *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_2 + 0x124);
  }
  if (*(int *)(param_1 + 300) != *(int *)(param_2 + 300)) {
    *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_2 + 0x128);
    *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_2 + 300);
  }
  if (*(int *)(param_1 + 0x134) != *(int *)(param_2 + 0x134)) {
    *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x130);
    *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_2 + 0x134);
  }
  if (*(int *)(param_1 + 0x13c) != *(int *)(param_2 + 0x13c)) {
    *(undefined1 *)(param_1 + 0x138) = *(undefined1 *)(param_2 + 0x138);
    *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_2 + 0x13c);
  }
  FUN_148c9a766(param_1 + 0x140,param_2 + 0x140);
  *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_2 + 0x150);
  return param_1;
}



// FUNCTION 148c9a766 FUN_148c9a766 body=79 status=ok
// SIG undefined FUN_148c9a766(void)

undefined8 * FUN_148c9a766(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148c9a7b6(param_1,iVar1);
      FUN_148c9a818(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c9a7b6 FUN_148c9a7b6 body=98 status=ok
// SIG undefined FUN_148c9a7b6(void)

void FUN_148c9a7b6(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,4);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c9a818 FUN_148c9a818 body=46 status=ok
// SIG undefined FUN_148c9a818(void)

void FUN_148c9a818(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_1 + lVar1 * 8) = 0;
      *(undefined4 *)(param_1 + lVar1 * 8) = *(undefined4 *)(param_2 + lVar1 * 8);
      *(undefined4 *)(param_1 + 4 + lVar1 * 8) = *(undefined4 *)(param_2 + 4 + lVar1 * 8);
      lVar1 = lVar1 + 1;
    } while (param_3 != (int)lVar1);
  }
  return;
}



// FUNCTION 148c9a848 FUN_148c9a848 body=32 status=ok
// SIG undefined FUN_148c9a848(void)

void FUN_148c9a848(undefined8 param_1,undefined8 *param_2)

{
  FUN_1409e6ae2(param_2);
  *param_2 = &PTR_FUN_14b8d7b20;
  return;
}



// FUNCTION 148c9a87e FUN_148c9a87e body=63 status=ok
// SIG undefined FUN_148c9a87e(void)

undefined1 FUN_148c9a87e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b897b2(param_2,param_3);
    param_3 = param_3 + 0x458;
    param_2 = param_2 + 0x458;
  }
  return 1;
}



// FUNCTION 148c9a8e6 FUN_148c9a8e6 body=59 status=ok
// SIG undefined FUN_148c9a8e6(void)

undefined8 FUN_148c9a8e6(longlong *param_1)

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



// FUNCTION 148c9a932 FUN_148c9a932 body=38 status=ok
// SIG undefined FUN_148c9a932(void)

void FUN_148c9a932(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x458) == '\x01') {
    FUN_14075380c(param_2);
    *(undefined1 *)(param_2 + 0x458) = 0;
  }
  return;
}



// FUNCTION 148c9a9b8 FUN_148c9a9b8 body=63 status=ok
// SIG undefined FUN_148c9a9b8(void)

undefined1 FUN_148c9a9b8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c9ab1c(param_2,param_3);
    param_3 = param_3 + 0x148;
    param_2 = param_2 + 0x148;
  }
  return 1;
}



// FUNCTION 148c9aa20 FUN_148c9aa20 body=59 status=ok
// SIG undefined FUN_148c9aa20(void)

undefined8 FUN_148c9aa20(longlong *param_1)

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



// FUNCTION 148c9aa6c FUN_148c9aa6c body=40 status=ok
// SIG undefined FUN_148c9aa6c(void)

void FUN_148c9aa6c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x148) == '\x01') {
    FUN_145c4ab80(param_2);
    *(undefined1 *)(param_2 + 0x148) = 0;
  }
  return;
}



// FUNCTION 148c9aae2 FUN_148c9aae2 body=57 status=ok
// SIG undefined FUN_148c9aae2(void)

void FUN_148c9aae2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbca48 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbca48 = FUN_140002ddd(FUN_14660b6ff,uVar1,L"OakVaultTrackerDataDef");
  }
  return;
}



// FUNCTION 148c9ab1c FUN_148c9ab1c body=382 status=ok
// SIG undefined FUN_148c9ab1c(void)

longlong FUN_148c9ab1c(longlong param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x10) == '\0') {
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  }
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  FUN_144a7bb84(param_1 + 0x30,param_2 + 0x30);
  FUN_144a82394(param_1 + 0x48,param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  FUN_144a7bb84(param_1 + 0x60,param_2 + 0x60);
  FUN_144a82394(param_1 + 0x78,param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  FUN_144a7bb84(param_1 + 0x90,param_2 + 0x90);
  FUN_144a82394(param_1 + 0xa8,param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
  FUN_144a7bb84(param_1 + 0xc0,param_2 + 0xc0);
  FUN_144a82394(param_1 + 0xd8,param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
  FUN_144a7bb84(param_1 + 0xf0,param_2 + 0xf0);
  FUN_144a82394(param_1 + 0x108,param_2 + 0x108);
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_2 + 0x110);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x118);
  FUN_144a7bb84(param_1 + 0x120,param_2 + 0x120);
  FUN_144a82394(param_1 + 0x138,param_2 + 0x138);
  *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_2 + 0x140);
  return param_1;
}



// FUNCTION 148c9ad62 FUN_148c9ad62 body=59 status=ok
// SIG undefined FUN_148c9ad62(void)

undefined8 FUN_148c9ad62(longlong *param_1)

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



// FUNCTION 148c9ae32 FUN_148c9ae32 body=63 status=ok
// SIG undefined FUN_148c9ae32(void)

undefined1 FUN_148c9ae32(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c9af9c(param_2,param_3);
    param_3 = param_3 + 0x80;
    param_2 = param_2 + 0x80;
  }
  return 1;
}



// FUNCTION 148c9ae9a FUN_148c9ae9a body=59 status=ok
// SIG undefined FUN_148c9ae9a(void)

undefined8 FUN_148c9ae9a(longlong *param_1)

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



// FUNCTION 148c9aee6 FUN_148c9aee6 body=40 status=ok
// SIG undefined FUN_148c9aee6(void)

void FUN_148c9aee6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x80) == '\x01') {
    FUN_148c9af5c(param_2);
    *(undefined1 *)(param_2 + 0x80) = 0;
  }
  return;
}



// FUNCTION 148c9af5c FUN_148c9af5c body=64 status=ok
// SIG undefined FUN_148c9af5c(void)

void FUN_148c9af5c(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0xffffffffffffffff;
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148c9af98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 148c9af9c FUN_148c9af9c body=158 status=ok
// SIG undefined FUN_148c9af9c(void)

undefined8 * FUN_148c9af9c(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar2 = *param_2;
  lVar3 = param_2[1];
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)param_1[1];
  *param_1 = uVar2;
  param_1[1] = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar6 = *(undefined4 *)(param_2 + 3);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar5;
  *(undefined4 *)(param_1 + 3) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar7;
  FUN_1411f346e(param_1 + 4,param_2 + 4);
  param_1[6] = param_2[6];
  FUN_1411f346e(param_1 + 7,param_2 + 7);
  param_1[9] = param_2[9];
  FUN_1411f346e(param_1 + 10,param_2 + 10);
  param_1[0xc] = param_2[0xc];
  FUN_1411f346e(param_1 + 0xd,param_2 + 0xd);
  param_1[0xf] = param_2[0xf];
  return param_1;
}



// FUNCTION 148c9b03c FUN_148c9b03c body=68 status=ok
// SIG undefined FUN_148c9b03c(void)

void FUN_148c9b03c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  *(undefined1 *)(param_2 + 1) = 0;
  *(undefined8 *)(param_2 + 2) = 0xbf800000bf800000;
  param_2[4] = 0;
  *(undefined2 *)(param_2 + 5) = 0;
  FUN_1457aab40(param_2 + 6);
  FUN_1457aab40(param_2 + 0x26);
  return;
}



// FUNCTION 148c9b080 FUN_148c9b080 body=68 status=ok
// SIG undefined FUN_148c9b080(void)

void FUN_148c9b080(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  *(undefined1 *)(param_2 + 1) = 0;
  *(undefined8 *)(param_2 + 2) = 0xbf800000bf800000;
  param_2[4] = 0;
  *(undefined2 *)(param_2 + 5) = 0;
  FUN_1457aab40(param_2 + 6);
  FUN_1457aab40(param_2 + 0x26);
  return;
}



// FUNCTION 148c9b0c4 FUN_148c9b0c4 body=37 status=ok
// SIG undefined FUN_148c9b0c4(void)

void FUN_148c9b0c4(undefined8 param_1,longlong param_2)

{
  FUN_148c9af5c(param_2 + 0x98);
  FUN_148c9af5c(param_2 + 0x18);
  return;
}



// FUNCTION 148c9b100 FUN_148c9b100 body=114 status=ok
// SIG undefined FUN_148c9b100(void)

undefined8 FUN_148c9b100(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x98;
    param_2 = param_2 + 0x98;
    do {
      *(undefined8 *)(param_2 + -0x8a) = *(undefined8 *)(param_3 + -0x8a);
      uVar1 = *(undefined4 *)(param_3 + -0x94);
      uVar2 = *(undefined4 *)(param_3 + -0x90);
      uVar3 = *(undefined4 *)(param_3 + -0x8c);
      *(undefined4 *)(param_2 + -0x98) = *(undefined4 *)(param_3 + -0x98);
      *(undefined4 *)(param_2 + -0x94) = uVar1;
      *(undefined4 *)(param_2 + -0x90) = uVar2;
      *(undefined4 *)(param_2 + -0x8c) = uVar3;
      FUN_148c9af9c(param_2 + -0x80,param_3 + -0x80);
      FUN_148c9af9c(param_2,param_3);
      param_3 = param_3 + 0x118;
      param_2 = param_2 + 0x118;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c9b19a FUN_148c9b19a body=59 status=ok
// SIG undefined FUN_148c9b19a(void)

undefined8 FUN_148c9b19a(longlong *param_1)

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



// FUNCTION 148c9b1e6 FUN_148c9b1e6 body=53 status=ok
// SIG undefined FUN_148c9b1e6(void)

void FUN_148c9b1e6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x118) == '\x01') {
    FUN_148c9af5c(param_2 + 0x98);
    FUN_148c9af5c(param_2 + 0x18);
    *(undefined1 *)(param_2 + 0x118) = 0;
  }
  return;
}



// FUNCTION 148c9b2d6 FUN_148c9b2d6 body=59 status=ok
// SIG undefined FUN_148c9b2d6(void)

undefined8 FUN_148c9b2d6(longlong *param_1)

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



// FUNCTION 148c9b378 FUN_148c9b378 body=85 status=ok
// SIG undefined FUN_148c9b378(void)

void FUN_148c9b378(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_2 = 0;
  *(undefined1 *)(param_2 + 1) = 0;
  uVar1 = DAT_14c846500;
  param_2[2] = DAT_14c8464f8;
  param_2[3] = uVar1;
  param_2[4] = DAT_14c846508;
  puVar3 = &DAT_14c846480;
  puVar4 = param_2 + 6;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_2[0x14] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_2[0x12] = DAT_14c8464e0;
  param_2[0x13] = uVar1;
  return;
}



// FUNCTION 148c9b3ce FUN_148c9b3ce body=85 status=ok
// SIG undefined FUN_148c9b3ce(void)

void FUN_148c9b3ce(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_2 = 0;
  *(undefined1 *)(param_2 + 1) = 0;
  uVar1 = DAT_14c846500;
  param_2[2] = DAT_14c8464f8;
  param_2[3] = uVar1;
  param_2[4] = DAT_14c846508;
  puVar3 = &DAT_14c846480;
  puVar4 = param_2 + 6;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_2[0x14] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_2[0x12] = DAT_14c8464e0;
  param_2[0x13] = uVar1;
  return;
}



// FUNCTION 148c9b43c FUN_148c9b43c body=128 status=ok
// SIG undefined FUN_148c9b43c(void)

undefined8 FUN_148c9b43c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_3 + lVar3);
      if ((bVar2 & 1) != 0) {
        if (lVar1 == 0) {
          lVar1 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar1 = *(longlong *)(param_3 + lVar3);
          bVar2 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3) = lVar1;
      memcpy((longlong *)(param_2 + lVar3) + 1,(void *)(param_3 + lVar3 + 8),0xa0);
      lVar3 = lVar3 + 0xb0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c9b4e4 FUN_148c9b4e4 body=59 status=ok
// SIG undefined FUN_148c9b4e4(void)

undefined8 FUN_148c9b4e4(longlong *param_1)

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



// FUNCTION 148c9b592 FUN_148c9b592 body=66 status=ok
// SIG undefined FUN_148c9b592(void)

undefined8 * FUN_148c9b592(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b8d99e0;
  if (param_1[8] != 0) {
    FUN_140872868(param_1);
  }
  FUN_1403d7c6c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c9b5da FUN_148c9b5da body=125 status=ok
// SIG undefined FUN_148c9b5da(void)

void FUN_148c9b5da(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xb40);
  FUN_140b1ac70(param_2);
  param_2[0x161] = 0;
  *(undefined4 *)(param_2 + 0x162) = 0;
  param_2[0x15a] = 0;
  param_2[0x15b] = 0;
  param_2[0x15c] = 0;
  param_2[0x15d] = 0;
  param_2[0x15e] = 0;
  *(undefined8 *)((longlong)param_2 + 0xb14) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0xb1c) = 0;
  param_2[0x165] = 0;
  *(undefined4 *)(param_2 + 0x166) = 0;
  *param_2 = &PTR_FUN_14b8d8740;
  return;
}



// FUNCTION 148c9b658 FUN_148c9b658 body=107 status=ok
// SIG undefined FUN_148c9b658(void)

void FUN_148c9b658(undefined8 param_1,undefined8 *param_2)

{
  FUN_140b1ac70(param_2);
  param_2[0x161] = 0;
  *(undefined4 *)(param_2 + 0x162) = 0;
  param_2[0x15a] = 0;
  param_2[0x15b] = 0;
  param_2[0x15c] = 0;
  param_2[0x15d] = 0;
  param_2[0x15e] = 0;
  *(undefined8 *)((longlong)param_2 + 0xb14) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0xb1c) = 0;
  param_2[0x165] = 0;
  *(undefined4 *)(param_2 + 0x166) = 0;
  *param_2 = &PTR_FUN_14b8d8740;
  return;
}



// FUNCTION 148c9b6e8 FUN_148c9b6e8 body=63 status=ok
// SIG undefined FUN_148c9b6e8(void)

undefined1 FUN_148c9b6e8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_141852950(param_2,param_3);
    param_3 = param_3 + 0xb40;
    param_2 = param_2 + 0xb40;
  }
  return 1;
}



// FUNCTION 148c9b750 FUN_148c9b750 body=59 status=ok
// SIG undefined FUN_148c9b750(void)

undefined8 FUN_148c9b750(longlong *param_1)

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



// FUNCTION 148c9b79c FUN_148c9b79c body=38 status=ok
// SIG undefined FUN_148c9b79c(void)

void FUN_148c9b79c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb40) == '\x01') {
    FUN_140998e52(param_2);
    *(undefined1 *)(param_2 + 0xb40) = 0;
  }
  return;
}



// FUNCTION 148c9b812 FUN_148c9b812 body=95 status=ok
// SIG undefined FUN_148c9b812(void)

longlong FUN_148c9b812(longlong param_1,int param_2)

{
  *(undefined ***)(param_1 + 0xc0) = &PTR_LAB_149e668b0;
  if ((DAT_14c948580 != 0) && (*(char *)(param_1 + 0xc9) == '\x01')) {
    FUN_14019e20a(DAT_14c948580,param_1 + 0xc0);
    *(undefined1 *)(param_1 + 0xc9) = 0;
  }
  FUN_14079057a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c9b87e FUN_148c9b87e body=32 status=ok
// SIG undefined FUN_148c9b87e(void)

undefined8 FUN_148c9b87e(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FSubsystemCollection");
  return param_2;
}



// FUNCTION 148c9b8aa FUN_148c9b8aa body=230 status=ok
// SIG undefined FUN_148c9b8aa(void)

void FUN_148c9b8aa(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
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
  FUN_148f00294(local_18,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c9b998 FUN_148c9b998 body=155 status=ok
// SIG undefined FUN_148c9b998(void)

void FUN_148c9b998(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_148f0021a(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c9ba34 FUN_148c9ba34 body=255 status=ok
// SIG undefined FUN_148c9ba34(void)

void FUN_148c9ba34(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_21 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  puVar2 = &local_21;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148f001b0(local_20,puVar2);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c9bb34 FUN_148c9bb34 body=238 status=ok
// SIG undefined FUN_148c9bb34(void)

void FUN_148c9bb34(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148f002b6(local_20,local_28);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c9bc2a FUN_148c9bc2a body=155 status=ok
// SIG undefined FUN_148c9bc2a(void)

void FUN_148c9bc2a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_148f00202(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c9bccc FUN_148c9bccc body=232 status=ok
// SIG undefined FUN_148c9bccc(void)

void FUN_148c9bccc(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148f0027a(local_18,local_1c != 0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c9bde8 FUN_148c9bde8 body=75 status=ok
// SIG undefined FUN_148c9bde8(void)

void FUN_148c9bde8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_1459caab2(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c9bef4 FUN_148c9bef4 body=45 status=ok
// SIG undefined FUN_148c9bef4(void)

longlong FUN_148c9bef4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_14071fe68(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c9bf22 FUN_148c9bf22 body=45 status=ok
// SIG undefined FUN_148c9bf22(void)

longlong FUN_148c9bf22(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x50;
  thunk_FUN_14071fe68(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c9bf50 FUN_148c9bf50 body=45 status=ok
// SIG undefined FUN_148c9bf50(void)

longlong FUN_148c9bf50(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x58;
  thunk_FUN_14071fe68(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c9bf7e FUN_148c9bf7e body=42 status=ok
// SIG undefined FUN_148c9bf7e(void)

void FUN_148c9bf7e(undefined8 param_1,undefined8 *param_2)

{
  FUN_14126c416(param_2);
  *param_2 = &PTR_FUN_14b8e1730;
  *(undefined4 *)(param_2 + 0x60) = 0;
  return;
}



// FUNCTION 148c9bfcc FUN_148c9bfcc body=78 status=ok
// SIG undefined FUN_148c9bfcc(void)

undefined1 FUN_148c9bfcc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f74370(param_2,param_3);
    *(undefined4 *)(param_2 + 0x300) = *(undefined4 *)(param_3 + 0x300);
    param_2 = param_2 + 0x310;
    param_3 = param_3 + 0x310;
  }
  return 1;
}



// FUNCTION 148c9c042 FUN_148c9c042 body=59 status=ok
// SIG undefined FUN_148c9c042(void)

undefined8 FUN_148c9c042(longlong *param_1)

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



// FUNCTION 148c9c08e FUN_148c9c08e body=38 status=ok
// SIG undefined FUN_148c9c08e(void)

void FUN_148c9c08e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x310) == '\x01') {
    FUN_14060fc84(param_2);
    *(undefined1 *)(param_2 + 0x310) = 0;
  }
  return;
}



// FUNCTION 148c9c104 FUN_148c9c104 body=32 status=ok
// SIG undefined FUN_148c9c104(void)

void FUN_148c9c104(undefined8 param_1,undefined8 *param_2)

{
  FUN_141355748(param_2);
  *param_2 = &PTR_FUN_14b8e1900;
  return;
}



// FUNCTION 148c9c13a FUN_148c9c13a body=63 status=ok
// SIG undefined FUN_148c9c13a(void)

undefined1 FUN_148c9c13a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147f75384(param_2,param_3);
    param_3 = param_3 + 0x148;
    param_2 = param_2 + 0x148;
  }
  return 1;
}



// FUNCTION 148c9c1a2 FUN_148c9c1a2 body=59 status=ok
// SIG undefined FUN_148c9c1a2(void)

undefined8 FUN_148c9c1a2(longlong *param_1)

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



// FUNCTION 148c9c1ee FUN_148c9c1ee body=38 status=ok
// SIG undefined FUN_148c9c1ee(void)

void FUN_148c9c1ee(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x148) == '\x01') {
    FUN_1407f61d0(param_2);
    *(undefined1 *)(param_2 + 0x148) = 0;
  }
  return;
}



// FUNCTION 148c9c282 FUN_148c9c282 body=220 status=ok
// SIG undefined FUN_148c9c282(void)

undefined8 FUN_148c9c282(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  if (param_4 != 0) {
    lVar8 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar8);
      lVar2 = param_2 + 0x40 + lVar8;
      *(undefined8 *)(lVar2 + -0x20) = puVar1[4];
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      uVar3 = *(undefined4 *)((longlong)puVar1 + 0x14);
      uVar4 = *(undefined4 *)(puVar1 + 3);
      uVar5 = *(undefined4 *)((longlong)puVar1 + 0x1c);
      *(undefined4 *)(lVar2 + -0x30) = *(undefined4 *)(puVar1 + 2);
      *(undefined4 *)(lVar2 + -0x2c) = uVar3;
      *(undefined4 *)(lVar2 + -0x28) = uVar4;
      *(undefined4 *)(lVar2 + -0x24) = uVar5;
      *(undefined8 *)(lVar2 + -0x40) = uVar6;
      *(undefined8 *)(lVar2 + -0x38) = uVar7;
      *(undefined8 *)(lVar2 + -0x18) = puVar1[5];
      uVar3 = *(undefined4 *)((longlong)puVar1 + 0x34);
      uVar4 = *(undefined4 *)(puVar1 + 7);
      uVar5 = *(undefined4 *)((longlong)puVar1 + 0x3c);
      *(undefined4 *)(lVar2 + -0x10) = *(undefined4 *)(puVar1 + 6);
      *(undefined4 *)(lVar2 + -0xc) = uVar3;
      *(undefined4 *)(lVar2 + -8) = uVar4;
      *(undefined4 *)(lVar2 + -4) = uVar5;
      FUN_144a787a6();
      lVar2 = param_2 + lVar8;
      _Src = (void *)(param_3 + 0x50 + lVar8);
      memcpy((void *)(lVar2 + 0x50),_Src,0x93);
      FUN_14115e0ba(param_2 + lVar8 + 0xe8,param_3 + lVar8 + 0xe8);
      uVar6 = *(undefined8 *)((longlong)_Src + 0x128);
      *(undefined8 *)(lVar2 + 0x170) = *(undefined8 *)((longlong)_Src + 0x120);
      *(undefined8 *)(lVar2 + 0x178) = uVar6;
      *(undefined8 *)(lVar2 + 0x180) = *(undefined8 *)((longlong)_Src + 0x130);
      lVar8 = lVar8 + 0x188;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c9c386 FUN_148c9c386 body=59 status=ok
// SIG undefined FUN_148c9c386(void)

undefined8 FUN_148c9c386(longlong *param_1)

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



// FUNCTION 148c9c3d2 FUN_148c9c3d2 body=38 status=ok
// SIG undefined FUN_148c9c3d2(void)

void FUN_148c9c3d2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x188) == '\x01') {
    FUN_140f15312(param_2);
    *(undefined1 *)(param_2 + 0x188) = 0;
  }
  return;
}



// FUNCTION 148c9c5f0 FUN_148c9c5f0 body=63 status=ok
// SIG undefined FUN_148c9c5f0(void)

undefined1 FUN_148c9c5f0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c9c718(param_2,param_3);
    param_3 = param_3 + 0x238;
    param_2 = param_2 + 0x238;
  }
  return 1;
}



// FUNCTION 148c9c658 FUN_148c9c658 body=59 status=ok
// SIG undefined FUN_148c9c658(void)

undefined8 FUN_148c9c658(longlong *param_1)

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



// FUNCTION 148c9c6a4 FUN_148c9c6a4 body=38 status=ok
// SIG undefined FUN_148c9c6a4(void)

void FUN_148c9c6a4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x238) == '\x01') {
    FUN_140d2194c(param_2);
    *(undefined1 *)(param_2 + 0x238) = 0;
  }
  return;
}



// FUNCTION 148c9c718 FUN_148c9c718 body=117 status=ok
// SIG undefined FUN_148c9c718(void)

longlong FUN_148c9c718(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  
  FUN_14862f10e();
  lVar2 = *(longlong *)(param_2 + 0x228);
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 0x228);
    }
  }
  bVar1 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x228) = lVar2;
  lVar2 = *(longlong *)(param_2 + 0x230);
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 0x230);
    }
  }
  *(longlong *)(param_1 + 0x230) = lVar2;
  return param_1;
}



// FUNCTION 148c9c798 FUN_148c9c798 body=48 status=ok
// SIG undefined FUN_148c9c798(void)

void FUN_148c9c798(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x220);
  FUN_1411c3dfa(param_2);
  *param_2 = &PTR_FUN_14b8d99e0;
  return;
}



// FUNCTION 148c9c7c8 FUN_148c9c7c8 body=32 status=ok
// SIG undefined FUN_148c9c7c8(void)

void FUN_148c9c7c8(undefined8 param_1,undefined8 *param_2)

{
  FUN_1411c3dfa(param_2);
  *param_2 = &PTR_FUN_14b8d99e0;
  return;
}



// FUNCTION 148c9c842 FUN_148c9c842 body=59 status=ok
// SIG undefined FUN_148c9c842(void)

undefined8 FUN_148c9c842(longlong *param_1)

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



// FUNCTION 148c9c88e FUN_148c9c88e body=63 status=ok
// SIG undefined FUN_148c9c88e(void)

void FUN_148c9c88e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x44) == '\x01') {
    *param_2 = &PTR_FUN_14b8d99e0;
    if (param_2[8] != 0) {
      FUN_140872868(param_2);
    }
    FUN_1403d7c6c(param_2);
    *(undefined1 *)(param_2 + 0x44) = 0;
  }
  return;
}



// FUNCTION 148c9c94c FUN_148c9c94c body=63 status=ok
// SIG undefined FUN_148c9c94c(void)

undefined1 FUN_148c9c94c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_145ca6fe8(param_2,param_3);
    param_3 = param_3 + 0xf0;
    param_2 = param_2 + 0xf0;
  }
  return 1;
}



// FUNCTION 148c9c9b4 FUN_148c9c9b4 body=59 status=ok
// SIG undefined FUN_148c9c9b4(void)

undefined8 FUN_148c9c9b4(longlong *param_1)

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



// FUNCTION 148c9ca00 FUN_148c9ca00 body=38 status=ok
// SIG undefined FUN_148c9ca00(void)

void FUN_148c9ca00(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf0) == '\x01') {
    FUN_1457227d8(param_2);
    *(undefined1 *)(param_2 + 0xf0) = 0;
  }
  return;
}



// FUNCTION 148c9cae2 FUN_148c9cae2 body=59 status=ok
// SIG undefined FUN_148c9cae2(void)

undefined8 FUN_148c9cae2(longlong *param_1)

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



// FUNCTION 148c9cb76 FUN_148c9cb76 body=55 status=ok
// SIG undefined FUN_148c9cb76(void)

void FUN_148c9cb76(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbce60 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbce60 = FUN_140002ddd(FUN_14660cddf,uVar1,L"OakVehicleContextResolver");
  }
  return;
}



// FUNCTION 148c9cc4e FUN_148c9cc4e body=59 status=ok
// SIG undefined FUN_148c9cc4e(void)

undefined8 FUN_148c9cc4e(longlong *param_1)

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



// FUNCTION 148c9cd60 FUN_148c9cd60 body=63 status=ok
// SIG undefined FUN_148c9cd60(void)

undefined1 FUN_148c9cd60(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c9d3cc(param_2,param_3);
    param_3 = param_3 + 0xd0;
    param_2 = param_2 + 0xd0;
  }
  return 1;
}



// FUNCTION 148c9cdc8 FUN_148c9cdc8 body=59 status=ok
// SIG undefined FUN_148c9cdc8(void)

undefined8 FUN_148c9cdc8(longlong *param_1)

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



// FUNCTION 148c9ce14 FUN_148c9ce14 body=38 status=ok
// SIG undefined FUN_148c9ce14(void)

void FUN_148c9ce14(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd0) == '\x01') {
    FUN_140bb60bc(param_2);
    *(undefined1 *)(param_2 + 0xd0) = 0;
  }
  return;
}



// FUNCTION 148c9ce7c FUN_148c9ce7c body=255 status=ok
// SIG undefined FUN_148c9ce7c(void)

void FUN_148c9ce7c(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x270) = 0;
  if (*(longlong *)(param_1 + 0x268) != 0) {
    FUN_1400020a8();
  }
  FUN_148c9cf7c(param_1 + 0x228);
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    FUN_1400020a8();
  }
  FUN_148c9d034(param_1 + 0x188);
  *(undefined4 *)(param_1 + 0x170) = 0;
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FUN_1400020a8();
  }
  FUN_148c9d0ec(param_1 + 0x128);
  *(undefined4 *)(param_1 + 0x108) = 0;
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_1400020a8();
  }
  FUN_148c9d1a4(param_1 + 0xc0);
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  FUN_148c9d25c(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_148c9d314(param_1 + 0x10);
  return;
}



// FUNCTION 148c9cf7c FUN_148c9cf7c body=54 status=ok
// SIG undefined FUN_148c9cf7c(void)

void FUN_148c9cf7c(longlong *param_1)

{
  FUN_148c9cfb2(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148c9cfb2 FUN_148c9cfb2 body=128 status=ok
// SIG undefined FUN_148c9cfb2(void)

void FUN_148c9cfb2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1448fc38a(param_1,param_2);
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



// FUNCTION 148c9d034 FUN_148c9d034 body=54 status=ok
// SIG undefined FUN_148c9d034(void)

void FUN_148c9d034(longlong *param_1)

{
  FUN_148c9d06a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148c9d06a FUN_148c9d06a body=128 status=ok
// SIG undefined FUN_148c9d06a(void)

void FUN_148c9d06a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140411364(param_1,param_2);
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



// FUNCTION 148c9d0ec FUN_148c9d0ec body=54 status=ok
// SIG undefined FUN_148c9d0ec(void)

void FUN_148c9d0ec(longlong *param_1)

{
  FUN_148c9d122(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148c9d122 FUN_148c9d122 body=128 status=ok
// SIG undefined FUN_148c9d122(void)

void FUN_148c9d122(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140549ad6(param_1,param_2);
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



// FUNCTION 148c9d1a4 FUN_148c9d1a4 body=54 status=ok
// SIG undefined FUN_148c9d1a4(void)

void FUN_148c9d1a4(longlong *param_1)

{
  FUN_148c9d1da(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148c9d1da FUN_148c9d1da body=128 status=ok
// SIG undefined FUN_148c9d1da(void)

void FUN_148c9d1da(longlong param_1,int param_2)

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



// FUNCTION 148c9d25c FUN_148c9d25c body=54 status=ok
// SIG undefined FUN_148c9d25c(void)

void FUN_148c9d25c(longlong *param_1)

{
  FUN_148c9d292(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148c9d292 FUN_148c9d292 body=128 status=ok
// SIG undefined FUN_148c9d292(void)

void FUN_148c9d292(longlong param_1,int param_2)

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



// FUNCTION 148c9d314 FUN_148c9d314 body=54 status=ok
// SIG undefined FUN_148c9d314(void)

void FUN_148c9d314(longlong *param_1)

{
  FUN_148c9d34a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148c9d34a FUN_148c9d34a body=128 status=ok
// SIG undefined FUN_148c9d34a(void)

void FUN_148c9d34a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1447a08a2(param_1,param_2);
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



// FUNCTION 148c9d3cc FUN_148c9d3cc body=196 status=ok
// SIG undefined FUN_148c9d3cc(void)

undefined1 * FUN_148c9d3cc(undefined1 *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  FUN_144a787a6(param_1 + 0x20,param_2 + 0x20);
  FUN_148c9d59c(param_1 + 0x30,param_2 + 0x30);
  FUN_148c9d490(param_1 + 0x80,param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  if ((*(longlong *)(param_1 + 0x98) != *(longlong *)(param_2 + 0x98)) ||
     (*(int *)(param_1 + 0xa0) != *(int *)(param_2 + 0xa0))) {
    *(longlong *)(param_1 + 0x98) = *(longlong *)(param_2 + 0x98);
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  FUN_148c9d4e0(param_1 + 0xb0,param_2 + 0xb0);
  FUN_148c9d53e(param_1 + 0xc0,param_2 + 0xc0);
  return param_1;
}



// FUNCTION 148c9d490 FUN_148c9d490 body=79 status=ok
// SIG undefined FUN_148c9d490(void)

undefined8 * FUN_148c9d490(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148c9d75a(param_1,iVar1);
      FUN_148c9d7bc(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c9d4e0 FUN_148c9d4e0 body=93 status=ok
// SIG undefined FUN_148c9d4e0(void)

undefined8 * FUN_148c9d4e0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140bb617d(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c9d7f2(param_1,iVar1);
      FUN_148c9d864(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c9d53e FUN_148c9d53e body=93 status=ok
// SIG undefined FUN_148c9d53e(void)

undefined8 * FUN_148c9d53e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140bb61a8(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c9e16c(param_1,iVar1);
      FUN_148c9e1de(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c9d59c FUN_148c9d59c body=122 status=ok
// SIG undefined FUN_148c9d59c(void)

longlong FUN_148c9d59c(longlong param_1,longlong param_2)

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
    FUN_148c9d616(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148c9d616 FUN_148c9d616 body=211 status=ok
// SIG undefined FUN_148c9d616(void)

undefined8 * FUN_148c9d616(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140bb62a4(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1447030e2(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      puVar6 = (undefined4 *)*param_1;
      puVar4 = (undefined4 *)*param_2;
      uVar5 = 0;
      do {
        puVar3 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar3 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar3 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *puVar6 = *puVar4;
          puVar6[1] = puVar4[1];
        }
        else {
          FUN_148c9d6ea(puVar6,puVar4);
          *(undefined8 *)(puVar6 + 0xc) = *(undefined8 *)(puVar4 + 0xc);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 0xe;
        puVar6 = puVar6 + 0xe;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 148c9d6ea FUN_148c9d6ea body=112 status=ok
// SIG undefined FUN_148c9d6ea(void)

undefined1 * FUN_148c9d6ea(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  uVar4 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  *(undefined4 *)(param_1 + 0x1c) = uVar4;
  *(undefined8 *)(param_1 + 0x20) = 0;
  iVar1 = *(int *)(param_2 + 0x28);
  _Src = *(void **)(param_2 + 0x20);
  *(int *)(param_1 + 0x28) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x20,iVar1,0);
    memcpy(*(void **)(param_1 + 0x20),_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 148c9d75a FUN_148c9d75a body=98 status=ok
// SIG undefined FUN_148c9d75a(void)

void FUN_148c9d75a(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c9d7bc FUN_148c9d7bc body=54 status=ok
// SIG undefined FUN_148c9d7bc(void)

void FUN_148c9d7bc(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_1 + lVar1) = *(undefined8 *)(param_2 + lVar1);
      *(undefined8 *)(param_1 + 8 + lVar1) = *(undefined8 *)(param_2 + 8 + lVar1);
      *(undefined4 *)(param_1 + 0x10 + lVar1) = *(undefined4 *)(param_2 + 0x10 + lVar1);
      *(undefined8 *)(param_1 + 0x18 + lVar1) = 0;
      lVar1 = lVar1 + 0x20;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148c9d7f2 FUN_148c9d7f2 body=114 status=ok
// SIG undefined FUN_148c9d7f2(void)

void FUN_148c9d7f2(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x278,8);
    iVar2 = (int)(uVar1 / 0x278);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x278,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c9d864 FUN_148c9d864 body=60 status=ok
// SIG undefined FUN_148c9d864(void)

void FUN_148c9d864(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c9d8a0(param_1,param_2);
    param_1 = param_1 + 0x278;
    param_2 = param_2 + 0x278;
  }
  return;
}



// FUNCTION 148c9d8a0 FUN_148c9d8a0 body=574 status=ok
// SIG undefined FUN_148c9d8a0(void)

undefined8 * FUN_148c9d8a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  *(undefined4 *)((longlong)param_1 + 7) = *(undefined4 *)((longlong)param_2 + 7);
  *param_1 = *param_2;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  FUN_148c9dade(param_1 + 2,param_2 + 2);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  FUN_148c9dbd2(param_1 + 0xd,param_2 + 0xd);
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  FUN_148c9dcc2(param_1 + 0x18,param_2 + 0x18);
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x114);
  uVar2 = *(undefined4 *)(param_2 + 0x23);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x11c);
  *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)(param_2 + 0x22);
  *(undefined4 *)((longlong)param_1 + 0x114) = uVar1;
  *(undefined4 *)(param_1 + 0x23) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x11c) = uVar3;
  param_1[0x24] = param_2[0x24];
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  FUN_148c9ddb2(param_1 + 0x25,param_2 + 0x25);
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x17c);
  uVar2 = *(undefined4 *)(param_2 + 0x30);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x184);
  *(undefined4 *)(param_1 + 0x2f) = *(undefined4 *)(param_2 + 0x2f);
  *(undefined4 *)((longlong)param_1 + 0x17c) = uVar1;
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x184) = uVar3;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  FUN_148c9dea6(param_1 + 0x31,param_2 + 0x31);
  *(undefined4 *)(param_1 + 0x3b) = *(undefined4 *)(param_2 + 0x3b);
  FUN_144a7f96e(param_1 + 0x3c,param_2 + 0x3c);
  uVar4 = param_2[0x40];
  param_1[0x3f] = param_2[0x3f];
  param_1[0x40] = uVar4;
  param_1[0x41] = param_2[0x41];
  *(undefined4 *)(param_1 + 0x42) = *(undefined4 *)(param_2 + 0x42);
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  *(undefined8 *)((longlong)param_1 + 0x254) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x25c) = 0;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  FUN_148c9df9c(param_1 + 0x45,param_2 + 0x45);
  return param_1;
}



// FUNCTION 148c9dade FUN_148c9dade body=122 status=ok
// SIG undefined FUN_148c9dade(void)

longlong FUN_148c9dade(longlong param_1,longlong param_2)

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
    FUN_148c9db58(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148c9db58 FUN_148c9db58 body=121 status=ok
// SIG undefined FUN_148c9db58(void)

undefined8 * FUN_148c9db58(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_148c9d34a(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1447cc1b4(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0xc);
    }
  }
  return param_1;
}



// FUNCTION 148c9dbd2 FUN_148c9dbd2 body=122 status=ok
// SIG undefined FUN_148c9dbd2(void)

longlong FUN_148c9dbd2(longlong param_1,longlong param_2)

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
    FUN_148c9dc4c(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148c9dc4c FUN_148c9dc4c body=117 status=ok
// SIG undefined FUN_148c9dc4c(void)

undefined8 * FUN_148c9dc4c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_148c9d292(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_144869a3c(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 << 4);
    }
  }
  return param_1;
}



// FUNCTION 148c9dcc2 FUN_148c9dcc2 body=122 status=ok
// SIG undefined FUN_148c9dcc2(void)

longlong FUN_148c9dcc2(longlong param_1,longlong param_2)

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
    FUN_148c9dd3c(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148c9dd3c FUN_148c9dd3c body=117 status=ok
// SIG undefined FUN_148c9dd3c(void)

undefined8 * FUN_148c9dd3c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_148c9d1da(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_144869a3c(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 << 4);
    }
  }
  return param_1;
}



// FUNCTION 148c9ddb2 FUN_148c9ddb2 body=122 status=ok
// SIG undefined FUN_148c9ddb2(void)

longlong FUN_148c9ddb2(longlong param_1,longlong param_2)

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
    FUN_148c9de2c(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148c9de2c FUN_148c9de2c body=121 status=ok
// SIG undefined FUN_148c9de2c(void)

undefined8 * FUN_148c9de2c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_148c9d122(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140549c28(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x28);
    }
  }
  return param_1;
}



// FUNCTION 148c9dea6 FUN_148c9dea6 body=122 status=ok
// SIG undefined FUN_148c9dea6(void)

longlong FUN_148c9dea6(longlong param_1,longlong param_2)

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
    FUN_148c9df20(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148c9df20 FUN_148c9df20 body=124 status=ok
// SIG undefined FUN_148c9df20(void)

undefined8 * FUN_148c9df20(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_148c9d06a(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1406245f8(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x1c);
    }
  }
  return param_1;
}



// FUNCTION 148c9df9c FUN_148c9df9c body=122 status=ok
// SIG undefined FUN_148c9df9c(void)

longlong FUN_148c9df9c(longlong param_1,longlong param_2)

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
    FUN_148c9e016(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148c9e016 FUN_148c9e016 body=341 status=ok
// SIG undefined FUN_148c9e016(void)

longlong * FUN_148c9e016(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  if (param_1 != param_2) {
    uVar3 = *(uint *)(param_2 + 1);
    FUN_148c9cfb2(param_1,(ulonglong)uVar3);
    lVar6 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar6 + uVar3;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar6) < uVar3) {
      FUN_14488f93c(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar3) {
      lVar6 = *param_1;
      lVar4 = *param_2;
      lVar9 = 0;
      uVar8 = 0;
      do {
        plVar7 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar7 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar7 + (uVar8 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar8 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar6 + lVar9) = *(undefined4 *)(lVar4 + lVar9);
          *(undefined4 *)(lVar6 + 4 + lVar9) = *(undefined4 *)(lVar4 + 4 + lVar9);
        }
        else {
          *(undefined1 *)(lVar6 + lVar9) = *(undefined1 *)(lVar4 + lVar9);
          *(undefined4 *)(lVar6 + 8 + lVar9) = *(undefined4 *)(lVar4 + 8 + lVar9);
          FUN_144a7f96e(lVar6 + 0x10 + lVar9,lVar4 + 0x10 + lVar9);
          puVar1 = (undefined8 *)(lVar4 + 0x28 + lVar9);
          uVar5 = puVar1[1];
          puVar2 = (undefined8 *)(lVar6 + 0x28 + lVar9);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          *(undefined8 *)(lVar6 + 0x38 + lVar9) = *(undefined8 *)(lVar4 + 0x38 + lVar9);
          *(undefined4 *)(lVar6 + 0x40 + lVar9) = *(undefined4 *)(lVar4 + 0x40 + lVar9);
          *(undefined8 *)(lVar6 + 0x48 + lVar9) = 0;
          *(undefined4 *)(lVar6 + 0x50 + lVar9) = *(undefined4 *)(lVar4 + 0x50 + lVar9);
          *(undefined8 *)(lVar6 + 0x58 + lVar9) = *(undefined8 *)(lVar4 + 0x58 + lVar9);
        }
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 0x60;
      } while (uVar3 != uVar8);
    }
  }
  return param_1;
}



// FUNCTION 148c9e16c FUN_148c9e16c body=114 status=ok
// SIG undefined FUN_148c9e16c(void)

void FUN_148c9e16c(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0xe8,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0x8d3dcb08d3dcb09),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0xe8,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c9e1de FUN_148c9e1de body=60 status=ok
// SIG undefined FUN_148c9e1de(void)

void FUN_148c9e1de(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c9e21a(param_1,param_2);
    param_1 = param_1 + 0xe8;
    param_2 = param_2 + 0xe8;
  }
  return;
}



// FUNCTION 148c9e21a FUN_148c9e21a body=215 status=ok
// SIG undefined FUN_148c9e21a(void)

undefined8 * FUN_148c9e21a(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  FUN_144a7f96e(param_1 + 3,param_2 + 3);
  uVar8 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar8;
  param_1[8] = param_2[8];
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  param_1[0x12] = param_2[0x12];
  uVar8 = param_2[0xc];
  uVar9 = param_2[0xd];
  uVar1 = *(undefined4 *)(param_2 + 0xe);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x74);
  uVar3 = *(undefined4 *)(param_2 + 0xf);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x7c);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x84);
  uVar6 = *(undefined4 *)(param_2 + 0x11);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar5;
  *(undefined4 *)(param_1 + 0x11) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar7;
  *(undefined4 *)(param_1 + 0xe) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar2;
  *(undefined4 *)(param_1 + 0xf) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar4;
  param_1[0xc] = uVar8;
  param_1[0xd] = uVar9;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  FUN_148c9e2f2(param_1 + 0x13,param_2 + 0x13);
  return param_1;
}



// FUNCTION 148c9e2f2 FUN_148c9e2f2 body=122 status=ok
// SIG undefined FUN_148c9e2f2(void)

longlong FUN_148c9e2f2(longlong param_1,longlong param_2)

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
    FUN_148c9e36c(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148c9e36c FUN_148c9e36c body=432 status=ok
// SIG undefined FUN_148c9e36c(void)

longlong * FUN_148c9e36c(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  ulonglong uVar13;
  
  if (param_1 != param_2) {
    uVar3 = *(uint *)(param_2 + 1);
    FUN_140bb6228(param_1,(ulonglong)uVar3);
    lVar10 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar10 + uVar3;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar10) < uVar3) {
      FUN_1413d87fe(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar3) {
      lVar10 = *param_1;
      lVar4 = *param_2;
      lVar12 = 0;
      uVar13 = 0;
      do {
        plVar11 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar11 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar11 + (uVar13 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar13 & 0x1f) &
            1) == 0) {
          *(undefined4 *)(lVar10 + lVar12) = *(undefined4 *)(lVar4 + lVar12);
          *(undefined4 *)(lVar10 + 4 + lVar12) = *(undefined4 *)(lVar4 + 4 + lVar12);
        }
        else {
          *(undefined1 *)(lVar10 + lVar12) = *(undefined1 *)(lVar4 + lVar12);
          *(undefined1 *)(lVar10 + 8 + lVar12) = *(undefined1 *)(lVar4 + 8 + lVar12);
          *(undefined4 *)(lVar10 + 0x10 + lVar12) = *(undefined4 *)(lVar4 + 0x10 + lVar12);
          FUN_144a7f96e(lVar10 + 0x18 + lVar12,lVar4 + 0x18 + lVar12);
          puVar1 = (undefined8 *)(lVar4 + 0x30 + lVar12);
          uVar5 = puVar1[1];
          puVar2 = (undefined8 *)(lVar10 + 0x30 + lVar12);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          *(undefined8 *)(lVar10 + 0x40 + lVar12) = *(undefined8 *)(lVar4 + 0x40 + lVar12);
          *(undefined4 *)(lVar10 + 0x48 + lVar12) = *(undefined4 *)(lVar4 + 0x48 + lVar12);
          *(undefined8 *)(lVar10 + 0x50 + lVar12) = 0;
          *(undefined4 *)(lVar10 + 0x58 + lVar12) = *(undefined4 *)(lVar4 + 0x58 + lVar12);
          *(undefined8 *)(lVar10 + 0x90 + lVar12) = *(undefined8 *)(lVar4 + 0x90 + lVar12);
          puVar1 = (undefined8 *)(lVar4 + 0x60 + lVar12);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)(lVar4 + 0x70 + lVar12);
          uVar7 = *puVar1;
          uVar8 = puVar1[1];
          puVar1 = (undefined8 *)(lVar4 + 0x80 + lVar12);
          uVar9 = puVar1[1];
          puVar2 = (undefined8 *)(lVar10 + 0x80 + lVar12);
          *puVar2 = *puVar1;
          puVar2[1] = uVar9;
          puVar1 = (undefined8 *)(lVar10 + 0x70 + lVar12);
          *puVar1 = uVar7;
          puVar1[1] = uVar8;
          puVar1 = (undefined8 *)(lVar10 + 0x60 + lVar12);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined8 *)(lVar10 + 0x98 + lVar12) = *(undefined8 *)(lVar4 + 0x98 + lVar12);
        }
        uVar13 = uVar13 + 1;
        lVar12 = lVar12 + 0xa0;
      } while (uVar3 != uVar13);
    }
  }
  return param_1;
}



// FUNCTION 148c9e51e FUN_148c9e51e body=70 status=ok
// SIG undefined FUN_148c9e51e(void)

void FUN_148c9e51e(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  *param_2 = &PTR_FUN_14b4677f0;
  FUN_144a5dc74(param_2 + 3);
  *param_2 = &PTR_FUN_14b8e2600;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  *(undefined8 *)((longlong)param_2 + 0x44) = 0;
  *(undefined8 *)((longlong)param_2 + 0x4c) = 0;
  return;
}



// FUNCTION 148c9e57a FUN_148c9e57a body=89 status=ok
// SIG undefined FUN_148c9e57a(void)

undefined8 FUN_148c9e57a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1489f8080(param_2,param_3);
    *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_3 + 0x28);
    uVar1 = *(undefined4 *)(param_3 + 0x34);
    uVar2 = *(undefined4 *)(param_3 + 0x38);
    uVar3 = *(undefined4 *)(param_3 + 0x3c);
    *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_3 + 0x30);
    *(undefined4 *)(param_2 + 0x34) = uVar1;
    *(undefined4 *)(param_2 + 0x38) = uVar2;
    *(undefined4 *)(param_2 + 0x3c) = uVar3;
    FUN_144a787a6(param_2 + 0x40,param_3 + 0x40);
    *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_3 + 0x50);
    param_2 = param_2 + 0x58;
    param_3 = param_3 + 0x58;
  }
  return 1;
}



// FUNCTION 148c9e5fc FUN_148c9e5fc body=59 status=ok
// SIG undefined FUN_148c9e5fc(void)

undefined8 FUN_148c9e5fc(longlong *param_1)

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



// FUNCTION 148c9e642 FUN_148c9e642 body=56 status=ok
// SIG undefined FUN_148c9e642(void)

void FUN_148c9e642(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xb) == '\x01') {
    *param_2 = &PTR_FUN_14b8e2600;
    if (param_2[8] != 0) {
      FUN_1400020a8();
    }
    FUN_140f4522c(param_2);
    *(undefined1 *)(param_2 + 0xb) = 0;
  }
  return;
}



// FUNCTION 148c9e732 FUN_148c9e732 body=59 status=ok
// SIG undefined FUN_148c9e732(void)

undefined8 FUN_148c9e732(longlong *param_1)

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



// FUNCTION 148c9e80c FUN_148c9e80c body=67 status=ok
// SIG undefined FUN_148c9e80c(void)

undefined1 FUN_148c9e80c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486c1fae(param_2,param_3);
    FUN_140d02432(param_2 + 0x18,param_3 + 0x18);
    param_2 = param_2 + 0x68;
    param_3 = param_3 + 0x68;
  }
  return 1;
}



// FUNCTION 148c9e878 FUN_148c9e878 body=59 status=ok
// SIG undefined FUN_148c9e878(void)

undefined8 FUN_148c9e878(longlong *param_1)

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



// FUNCTION 148c9e988 FUN_148c9e988 body=59 status=ok
// SIG undefined FUN_148c9e988(void)

undefined8 FUN_148c9e988(longlong *param_1)

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



// FUNCTION 148c9ea48 FUN_148c9ea48 body=63 status=ok
// SIG undefined FUN_148c9ea48(void)

undefined1 FUN_148c9ea48(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c9eb62(param_2,param_3);
    param_3 = param_3 + 0x17e0;
    param_2 = param_2 + 0x17e0;
  }
  return 1;
}



// FUNCTION 148c9eab0 FUN_148c9eab0 body=59 status=ok
// SIG undefined FUN_148c9eab0(void)

undefined8 FUN_148c9eab0(longlong *param_1)

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



// FUNCTION 148c9eafc FUN_148c9eafc body=38 status=ok
// SIG undefined FUN_148c9eafc(void)

void FUN_148c9eafc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x17e0) == '\x01') {
    FUN_1413ff4a0(param_2);
    *(undefined1 *)(param_2 + 0x17e0) = 0;
  }
  return;
}



// FUNCTION 148c9eb62 FUN_148c9eb62 body=2848 status=ok
// SIG undefined FUN_148c9eb62(void)

longlong FUN_148c9eb62(longlong param_1,longlong param_2)

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
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  longlong lVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  
  FUN_147e1a790();
  FUN_14184443c(param_1 + 0x90,param_2 + 0x90);
  *(undefined1 *)(param_1 + 0xa8) = *(undefined1 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  uVar1 = *(undefined4 *)(param_2 + 0xbc);
  uVar2 = *(undefined4 *)(param_2 + 0xc0);
  uVar3 = *(undefined4 *)(param_2 + 0xc4);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
  *(undefined4 *)(param_1 + 0xbc) = uVar1;
  *(undefined4 *)(param_1 + 0xc0) = uVar2;
  *(undefined4 *)(param_1 + 0xc4) = uVar3;
  FUN_144a787a6(param_1 + 200,param_2 + 200);
  FUN_148615fc0(param_1 + 0xd8,param_2 + 0xd8);
  FUN_148c9f682(param_1 + 0xe8,param_2 + 0xe8);
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_2 + 0x100);
  FUN_148c9f6d6(param_1 + 0x108,param_2 + 0x108);
  puVar19 = (undefined8 *)(param_2 + 0x118);
  puVar20 = (undefined8 *)(param_1 + 0x118);
  for (lVar18 = 9; lVar18 != 0; lVar18 = lVar18 + -1) {
    *puVar20 = *puVar19;
    puVar19 = puVar19 + 1;
    puVar20 = puVar20 + 1;
  }
  if ((*(longlong *)(param_1 + 0x160) != *(longlong *)(param_2 + 0x160)) ||
     (*(int *)(param_1 + 0x168) != *(int *)(param_2 + 0x168))) {
    *(longlong *)(param_1 + 0x160) = *(longlong *)(param_2 + 0x160);
    *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_2 + 0x168);
    *(undefined8 *)(param_1 + 0x170) = 0;
  }
  *(undefined1 *)(param_1 + 0x188) = *(undefined1 *)(param_2 + 0x188);
  uVar1 = *(undefined4 *)(param_2 + 0x17c);
  uVar2 = *(undefined4 *)(param_2 + 0x180);
  uVar3 = *(undefined4 *)(param_2 + 0x184);
  *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_2 + 0x178);
  *(undefined4 *)(param_1 + 0x17c) = uVar1;
  *(undefined4 *)(param_1 + 0x180) = uVar2;
  *(undefined4 *)(param_1 + 0x184) = uVar3;
  FUN_14579afd2(param_1 + 400,param_2 + 400);
  *(undefined4 *)(param_1 + 0xe10) = *(undefined4 *)(param_2 + 0xe10);
  *(undefined2 *)(param_1 + 0xe14) = *(undefined2 *)(param_2 + 0xe14);
  FUN_14861620a(param_1 + 0xe18,param_2 + 0xe18);
  *(undefined1 *)(param_1 + 0xe2c) = *(undefined1 *)(param_2 + 0xe2c);
  *(undefined4 *)(param_1 + 0xe28) = *(undefined4 *)(param_2 + 0xe28);
  if ((*(longlong *)(param_1 + 0xe30) != *(longlong *)(param_2 + 0xe30)) ||
     (*(int *)(param_1 + 0xe38) != *(int *)(param_2 + 0xe38))) {
    *(longlong *)(param_1 + 0xe30) = *(longlong *)(param_2 + 0xe30);
    *(undefined4 *)(param_1 + 0xe38) = *(undefined4 *)(param_2 + 0xe38);
    *(undefined8 *)(param_1 + 0xe40) = 0;
  }
  *(undefined8 *)(param_1 + 0xe48) = *(undefined8 *)(param_2 + 0xe48);
  *(undefined4 *)(param_1 + 0xec0) = *(undefined4 *)(param_2 + 0xec0);
  *(undefined2 *)(param_1 + 0xec4) = *(undefined2 *)(param_2 + 0xec4);
  FUN_14093c00e(param_1 + 0xec8,param_2 + 0xec8);
  *(undefined8 *)(param_1 + 0xed8) = *(undefined8 *)(param_2 + 0xed8);
  uVar1 = *(undefined4 *)(param_2 + 0xee4);
  uVar2 = *(undefined4 *)(param_2 + 0xee8);
  uVar3 = *(undefined4 *)(param_2 + 0xeec);
  *(undefined4 *)(param_1 + 0xee0) = *(undefined4 *)(param_2 + 0xee0);
  *(undefined4 *)(param_1 + 0xee4) = uVar1;
  *(undefined4 *)(param_1 + 0xee8) = uVar2;
  *(undefined4 *)(param_1 + 0xeec) = uVar3;
  FUN_144a787a6(param_1 + 0xef0,param_2 + 0xef0);
  uVar1 = *(undefined4 *)(param_2 + 0xf04);
  uVar2 = *(undefined4 *)(param_2 + 0xf08);
  uVar3 = *(undefined4 *)(param_2 + 0xf0c);
  uVar4 = *(undefined4 *)(param_2 + 0xf10);
  uVar5 = *(undefined4 *)(param_2 + 0xf14);
  uVar6 = *(undefined4 *)(param_2 + 0xf18);
  uVar7 = *(undefined4 *)(param_2 + 0xf1c);
  uVar8 = *(undefined4 *)(param_2 + 0xf20);
  uVar9 = *(undefined4 *)(param_2 + 0xf24);
  uVar10 = *(undefined4 *)(param_2 + 0xf28);
  uVar11 = *(undefined4 *)(param_2 + 0xf2c);
  *(undefined4 *)(param_1 + 0xf00) = *(undefined4 *)(param_2 + 0xf00);
  *(undefined4 *)(param_1 + 0xf04) = uVar1;
  *(undefined4 *)(param_1 + 0xf08) = uVar2;
  *(undefined4 *)(param_1 + 0xf0c) = uVar3;
  *(undefined4 *)(param_1 + 0xf10) = uVar4;
  *(undefined4 *)(param_1 + 0xf14) = uVar5;
  *(undefined4 *)(param_1 + 0xf18) = uVar6;
  *(undefined4 *)(param_1 + 0xf1c) = uVar7;
  *(undefined4 *)(param_1 + 0xf20) = uVar8;
  *(undefined4 *)(param_1 + 0xf24) = uVar9;
  *(undefined4 *)(param_1 + 0xf28) = uVar10;
  *(undefined4 *)(param_1 + 0xf2c) = uVar11;
  FUN_148baea02(param_1 + 0xf30,param_2 + 0xf30);
  FUN_148c9f734(param_1 + 0xf40,param_2 + 0xf40);
  *(undefined8 *)(param_1 + 0xf50) = *(undefined8 *)(param_2 + 0xf50);
  *(undefined4 *)(param_1 + 0xf58) = *(undefined4 *)(param_2 + 0xf58);
  FUN_1447cd5a6(param_1 + 0xf60,param_2 + 0xf60);
  uVar1 = *(undefined4 *)(param_2 + 0xf74);
  uVar2 = *(undefined4 *)(param_2 + 0xf78);
  uVar3 = *(undefined4 *)(param_2 + 0xf7c);
  uVar4 = *(undefined4 *)(param_2 + 0xf80);
  uVar5 = *(undefined4 *)(param_2 + 0xf84);
  uVar6 = *(undefined4 *)(param_2 + 0xf88);
  uVar7 = *(undefined4 *)(param_2 + 0xf8c);
  uVar8 = *(undefined4 *)(param_2 + 0xf90);
  uVar9 = *(undefined4 *)(param_2 + 0xf94);
  uVar10 = *(undefined4 *)(param_2 + 0xf98);
  uVar11 = *(undefined4 *)(param_2 + 0xf9c);
  uVar12 = *(undefined4 *)(param_2 + 4000);
  uVar13 = *(undefined4 *)(param_2 + 0xfa4);
  uVar14 = *(undefined4 *)(param_2 + 0xfa8);
  uVar15 = *(undefined4 *)(param_2 + 0xfac);
  *(undefined4 *)(param_1 + 0xf70) = *(undefined4 *)(param_2 + 0xf70);
  *(undefined4 *)(param_1 + 0xf74) = uVar1;
  *(undefined4 *)(param_1 + 0xf78) = uVar2;
  *(undefined4 *)(param_1 + 0xf7c) = uVar3;
  *(undefined4 *)(param_1 + 0xf80) = uVar4;
  *(undefined4 *)(param_1 + 0xf84) = uVar5;
  *(undefined4 *)(param_1 + 0xf88) = uVar6;
  *(undefined4 *)(param_1 + 0xf8c) = uVar7;
  *(undefined4 *)(param_1 + 0xf90) = uVar8;
  *(undefined4 *)(param_1 + 0xf94) = uVar9;
  *(undefined4 *)(param_1 + 0xf98) = uVar10;
  *(undefined4 *)(param_1 + 0xf9c) = uVar11;
  *(undefined4 *)(param_1 + 4000) = uVar12;
  *(undefined4 *)(param_1 + 0xfa4) = uVar13;
  *(undefined4 *)(param_1 + 0xfa8) = uVar14;
  *(undefined4 *)(param_1 + 0xfac) = uVar15;
  *(undefined2 *)(param_1 + 0x1024) = *(undefined2 *)(param_2 + 0x1024);
  *(undefined4 *)(param_1 + 0x1020) = *(undefined4 *)(param_2 + 0x1020);
  FUN_14093c00e(param_1 + 0x1028,param_2 + 0x1028);
  *(undefined8 *)(param_1 + 0x1038) = *(undefined8 *)(param_2 + 0x1038);
  uVar1 = *(undefined4 *)(param_2 + 0x1044);
  uVar2 = *(undefined4 *)(param_2 + 0x1048);
  uVar3 = *(undefined4 *)(param_2 + 0x104c);
  *(undefined4 *)(param_1 + 0x1040) = *(undefined4 *)(param_2 + 0x1040);
  *(undefined4 *)(param_1 + 0x1044) = uVar1;
  *(undefined4 *)(param_1 + 0x1048) = uVar2;
  *(undefined4 *)(param_1 + 0x104c) = uVar3;
  FUN_144a787a6(param_1 + 0x1050,param_2 + 0x1050);
  uVar16 = *(undefined8 *)(param_2 + 0x1068);
  *(undefined8 *)(param_1 + 0x1060) = *(undefined8 *)(param_2 + 0x1060);
  *(undefined8 *)(param_1 + 0x1068) = uVar16;
  *(undefined8 *)(param_1 + 0x1070) = *(undefined8 *)(param_2 + 0x1070);
  uVar1 = *(undefined4 *)(param_2 + 0x107c);
  uVar2 = *(undefined4 *)(param_2 + 0x1080);
  uVar3 = *(undefined4 *)(param_2 + 0x1084);
  *(undefined4 *)(param_1 + 0x1078) = *(undefined4 *)(param_2 + 0x1078);
  *(undefined4 *)(param_1 + 0x107c) = uVar1;
  *(undefined4 *)(param_1 + 0x1080) = uVar2;
  *(undefined4 *)(param_1 + 0x1084) = uVar3;
  FUN_144a787a6(param_1 + 0x1088,param_2 + 0x1088);
  *(undefined8 *)(param_1 + 0x1098) = *(undefined8 *)(param_2 + 0x1098);
  uVar1 = *(undefined4 *)(param_2 + 0x10a4);
  uVar2 = *(undefined4 *)(param_2 + 0x10a8);
  uVar3 = *(undefined4 *)(param_2 + 0x10ac);
  *(undefined4 *)(param_1 + 0x10a0) = *(undefined4 *)(param_2 + 0x10a0);
  *(undefined4 *)(param_1 + 0x10a4) = uVar1;
  *(undefined4 *)(param_1 + 0x10a8) = uVar2;
  *(undefined4 *)(param_1 + 0x10ac) = uVar3;
  FUN_144a787a6(param_1 + 0x10b0,param_2 + 0x10b0);
  *(undefined8 *)(param_1 + 0x10c0) = *(undefined8 *)(param_2 + 0x10c0);
  uVar1 = *(undefined4 *)(param_2 + 0x10cc);
  uVar2 = *(undefined4 *)(param_2 + 0x10d0);
  uVar3 = *(undefined4 *)(param_2 + 0x10d4);
  *(undefined4 *)(param_1 + 0x10c8) = *(undefined4 *)(param_2 + 0x10c8);
  *(undefined4 *)(param_1 + 0x10cc) = uVar1;
  *(undefined4 *)(param_1 + 0x10d0) = uVar2;
  *(undefined4 *)(param_1 + 0x10d4) = uVar3;
  FUN_144a787a6(param_1 + 0x10d8,param_2 + 0x10d8);
  *(undefined8 *)(param_1 + 0x10e8) = *(undefined8 *)(param_2 + 0x10e8);
  uVar1 = *(undefined4 *)(param_2 + 0x10f4);
  uVar2 = *(undefined4 *)(param_2 + 0x10f8);
  uVar3 = *(undefined4 *)(param_2 + 0x10fc);
  *(undefined4 *)(param_1 + 0x10f0) = *(undefined4 *)(param_2 + 0x10f0);
  *(undefined4 *)(param_1 + 0x10f4) = uVar1;
  *(undefined4 *)(param_1 + 0x10f8) = uVar2;
  *(undefined4 *)(param_1 + 0x10fc) = uVar3;
  FUN_144a787a6(&DAT_00001100 + param_1,&DAT_00001100 + param_2);
  uVar1 = *(undefined4 *)(param_2 + 0x1114);
  uVar2 = *(undefined4 *)(param_2 + 0x1118);
  uVar3 = *(undefined4 *)(param_2 + 0x111c);
  uVar4 = *(undefined4 *)(param_2 + 0x111c);
  uVar5 = *(undefined4 *)(param_2 + 0x1120);
  uVar6 = *(undefined4 *)(param_2 + 0x1124);
  uVar7 = *(undefined4 *)(param_2 + 0x1128);
  *(undefined4 *)(param_1 + 0x1110) = *(undefined4 *)(param_2 + 0x1110);
  *(undefined4 *)(param_1 + 0x1114) = uVar1;
  *(undefined4 *)(param_1 + 0x1118) = uVar2;
  *(undefined4 *)(param_1 + 0x111c) = uVar3;
  *(undefined4 *)(param_1 + 0x111c) = uVar4;
  *(undefined4 *)(param_1 + 0x1120) = uVar5;
  *(undefined4 *)(param_1 + 0x1124) = uVar6;
  *(undefined4 *)(param_1 + 0x1128) = uVar7;
  FUN_148c9fab6(param_1 + 0x1130,param_2 + 0x1130);
  *(undefined4 *)(param_1 + 0x1180) = *(undefined4 *)(param_2 + 0x1180);
  if ((*(longlong *)(param_1 + 0x1188) != *(longlong *)(param_2 + 0x1188)) ||
     (*(int *)(param_1 + 0x1190) != *(int *)(param_2 + 0x1190))) {
    *(longlong *)(param_1 + 0x1188) = *(longlong *)(param_2 + 0x1188);
    *(undefined4 *)(param_1 + 0x1190) = *(undefined4 *)(param_2 + 0x1190);
    *(undefined8 *)(param_1 + 0x1198) = 0;
  }
  if ((*(longlong *)(param_1 + 0x11a0) != *(longlong *)(param_2 + 0x11a0)) ||
     (*(int *)(param_1 + 0x11a8) != *(int *)(param_2 + 0x11a8))) {
    *(longlong *)(param_1 + 0x11a0) = *(longlong *)(param_2 + 0x11a0);
    *(undefined4 *)(param_1 + 0x11a8) = *(undefined4 *)(param_2 + 0x11a8);
    *(undefined8 *)(param_1 + 0x11b0) = 0;
  }
  if ((*(longlong *)(param_1 + 0x11b8) != *(longlong *)(param_2 + 0x11b8)) ||
     (*(int *)(param_1 + 0x11c0) != *(int *)(param_2 + 0x11c0))) {
    *(longlong *)(param_1 + 0x11b8) = *(longlong *)(param_2 + 0x11b8);
    *(undefined4 *)(param_1 + 0x11c0) = *(undefined4 *)(param_2 + 0x11c0);
    *(undefined8 *)(param_1 + 0x11c8) = 0;
  }
  if ((*(longlong *)(param_1 + 0x11d0) != *(longlong *)(param_2 + 0x11d0)) ||
     (*(int *)(param_1 + 0x11d8) != *(int *)(param_2 + 0x11d8))) {
    *(longlong *)(param_1 + 0x11d0) = *(longlong *)(param_2 + 0x11d0);
    *(undefined4 *)(param_1 + 0x11d8) = *(undefined4 *)(param_2 + 0x11d8);
    *(undefined8 *)(param_1 + 0x11e0) = 0;
  }
  FUN_148c9f784(param_1 + 0x11e8,param_2 + 0x11e8);
  *(undefined8 *)(param_1 + 0x1228) = *(undefined8 *)(param_2 + 0x1228);
  uVar16 = *(undefined8 *)(param_2 + 0x11f8);
  uVar17 = *(undefined8 *)(param_2 + 0x1200);
  uVar1 = *(undefined4 *)(param_2 + 0x1208);
  uVar2 = *(undefined4 *)(param_2 + 0x120c);
  uVar3 = *(undefined4 *)(param_2 + 0x1210);
  uVar4 = *(undefined4 *)(param_2 + 0x1214);
  uVar5 = *(undefined4 *)(param_2 + 0x121c);
  uVar6 = *(undefined4 *)(param_2 + 0x1220);
  uVar7 = *(undefined4 *)(param_2 + 0x1224);
  *(undefined4 *)(param_1 + 0x1218) = *(undefined4 *)(param_2 + 0x1218);
  *(undefined4 *)(param_1 + 0x121c) = uVar5;
  *(undefined4 *)(param_1 + 0x1220) = uVar6;
  *(undefined4 *)(param_1 + 0x1224) = uVar7;
  *(undefined4 *)(param_1 + 0x1208) = uVar1;
  *(undefined4 *)(param_1 + 0x120c) = uVar2;
  *(undefined4 *)(param_1 + 0x1210) = uVar3;
  *(undefined4 *)(param_1 + 0x1214) = uVar4;
  *(undefined8 *)(param_1 + 0x11f8) = uVar16;
  *(undefined8 *)(param_1 + 0x1200) = uVar17;
  if ((*(longlong *)(param_1 + 0x1230) != *(longlong *)(param_2 + 0x1230)) ||
     (*(int *)(param_1 + 0x1238) != *(int *)(param_2 + 0x1238))) {
    *(longlong *)(param_1 + 0x1230) = *(longlong *)(param_2 + 0x1230);
    *(undefined4 *)(param_1 + 0x1238) = *(undefined4 *)(param_2 + 0x1238);
    *(undefined8 *)(param_1 + 0x1240) = 0;
  }
  *(undefined4 *)(param_1 + 0x1258) = *(undefined4 *)(param_2 + 0x1258);
  uVar1 = *(undefined4 *)(param_2 + 0x124c);
  uVar2 = *(undefined4 *)(param_2 + 0x1250);
  uVar3 = *(undefined4 *)(param_2 + 0x1254);
  *(undefined4 *)(param_1 + 0x1248) = *(undefined4 *)(param_2 + 0x1248);
  *(undefined4 *)(param_1 + 0x124c) = uVar1;
  *(undefined4 *)(param_1 + 0x1250) = uVar2;
  *(undefined4 *)(param_1 + 0x1254) = uVar3;
  FUN_148c9f7d8(param_1 + 0x1260,param_2 + 0x1260);
  FUN_148c9d3cc(param_1 + 0x1270,param_2 + 0x1270);
  *(undefined8 *)(param_1 + 0x1340) = *(undefined8 *)(param_2 + 0x1340);
  *(undefined4 *)(param_1 + 0x1350) = *(undefined4 *)(param_2 + 0x1350);
  *(undefined8 *)(param_1 + 0x1348) = *(undefined8 *)(param_2 + 0x1348);
  FUN_144a7bb84(param_1 + 0x1358,param_2 + 0x1358);
  FUN_144a82394(param_1 + 0x1370,param_2 + 0x1370);
  FUN_14123c256(param_1 + 0x1378,param_2 + 0x1378);
  FUN_14123c256(param_1 + 0x1390,param_2 + 0x1390);
  FUN_14123c256(param_1 + 0x13a8,param_2 + 0x13a8);
  FUN_14123c256(param_1 + 0x13c0,param_2 + 0x13c0);
  FUN_14123c256(param_1 + 0x13d8,param_2 + 0x13d8);
  FUN_14123c256(param_1 + 0x13f0,param_2 + 0x13f0);
  FUN_14123c256(param_1 + 0x1408,param_2 + 0x1408);
  *(undefined4 *)(param_1 + 0x1420) = *(undefined4 *)(param_2 + 0x1420);
  *(undefined4 *)(param_1 + 0x1430) = *(undefined4 *)(param_2 + 0x1430);
  *(undefined8 *)(param_1 + 0x1428) = *(undefined8 *)(param_2 + 0x1428);
  FUN_144a7bb84(param_1 + 0x1438,param_2 + 0x1438);
  FUN_144a82394(param_1 + 0x1450,param_2 + 0x1450);
  *(undefined8 *)(param_1 + 0x1458) = *(undefined8 *)(param_2 + 0x1458);
  *(undefined4 *)(param_1 + 0x1468) = *(undefined4 *)(param_2 + 0x1468);
  *(undefined8 *)(param_1 + 0x1460) = *(undefined8 *)(param_2 + 0x1460);
  FUN_144a7bb84(param_1 + 0x1470,param_2 + 0x1470);
  FUN_144a82394(param_1 + 0x1488,param_2 + 0x1488);
  *(undefined8 *)(param_1 + 0x1490) = *(undefined8 *)(param_2 + 0x1490);
  *(undefined4 *)(param_1 + 0x14a0) = *(undefined4 *)(param_2 + 0x14a0);
  *(undefined8 *)(param_1 + 0x1498) = *(undefined8 *)(param_2 + 0x1498);
  FUN_144a7bb84(param_1 + 0x14a8,param_2 + 0x14a8);
  FUN_144a82394(param_1 + 0x14c0,param_2 + 0x14c0);
  *(undefined8 *)(param_1 + 0x14c8) = *(undefined8 *)(param_2 + 0x14c8);
  *(undefined4 *)(param_1 + 0x14d0) = *(undefined4 *)(param_2 + 0x14d0);
  FUN_144a7bb84(param_1 + 0x14d8,param_2 + 0x14d8);
  FUN_144a82394(param_1 + 0x14f0,param_2 + 0x14f0);
  *(undefined8 *)(param_1 + 0x14f8) = *(undefined8 *)(param_2 + 0x14f8);
  *(undefined4 *)(param_1 + 0x1500) = *(undefined4 *)(param_2 + 0x1500);
  FUN_144a7bb84(param_1 + 0x1508,param_2 + 0x1508);
  FUN_144a82394(param_1 + 0x1520,param_2 + 0x1520);
  *(undefined8 *)(param_1 + 0x1528) = *(undefined8 *)(param_2 + 0x1528);
  *(undefined4 *)(param_1 + 0x1530) = *(undefined4 *)(param_2 + 0x1530);
  FUN_144a7bb84(param_1 + 0x1538,param_2 + 0x1538);
  FUN_144a82394(param_1 + 0x1550,param_2 + 0x1550);
  *(undefined8 *)(param_1 + 0x1558) = *(undefined8 *)(param_2 + 0x1558);
  *(undefined4 *)(param_1 + 0x1560) = *(undefined4 *)(param_2 + 0x1560);
  FUN_144a7bb84(param_1 + 0x1568,param_2 + 0x1568);
  FUN_144a82394(param_1 + 0x1580,param_2 + 0x1580);
  uVar1 = *(undefined4 *)(param_2 + 0x158c);
  uVar2 = *(undefined4 *)(param_2 + 0x1590);
  uVar3 = *(undefined4 *)(param_2 + 0x1594);
  *(undefined4 *)(param_1 + 0x1588) = *(undefined4 *)(param_2 + 0x1588);
  *(undefined4 *)(param_1 + 0x158c) = uVar1;
  *(undefined4 *)(param_1 + 0x1590) = uVar2;
  *(undefined4 *)(param_1 + 0x1594) = uVar3;
  *(undefined8 *)(param_1 + 0x1598) = *(undefined8 *)(param_2 + 0x1598);
  *(undefined8 *)(param_1 + 0x15a0) = *(undefined8 *)(param_2 + 0x15a0);
  *(undefined4 *)(param_1 + 0x15a8) = *(undefined4 *)(param_2 + 0x15a8);
  FUN_144a7bb84(param_1 + 0x15b0,param_2 + 0x15b0);
  FUN_144a82394(param_1 + 0x15c8,param_2 + 0x15c8);
  *(undefined8 *)(param_1 + 0x15d0) = *(undefined8 *)(param_2 + 0x15d0);
  *(undefined4 *)(param_1 + 0x15d8) = *(undefined4 *)(param_2 + 0x15d8);
  FUN_144a7bb84(param_1 + 0x15e0,param_2 + 0x15e0);
  FUN_144a82394(param_1 + 0x15f8,param_2 + 0x15f8);
  *(undefined8 *)(param_1 + 0x1600) = *(undefined8 *)(param_2 + 0x1600);
  *(undefined4 *)(param_1 + 0x1608) = *(undefined4 *)(param_2 + 0x1608);
  FUN_144a7bb84(param_1 + 0x1610,param_2 + 0x1610);
  FUN_144a82394(param_1 + 0x1628,param_2 + 0x1628);
  *(undefined8 *)(param_1 + 0x1630) = *(undefined8 *)(param_2 + 0x1630);
  *(undefined4 *)(param_1 + 0x1638) = *(undefined4 *)(param_2 + 0x1638);
  FUN_144a7bb84(param_1 + 0x1640,param_2 + 0x1640);
  FUN_144a82394(param_1 + 0x1658,param_2 + 0x1658);
  *(undefined8 *)(param_1 + 0x1660) = *(undefined8 *)(param_2 + 0x1660);
  *(undefined4 *)(param_1 + 0x1668) = *(undefined4 *)(param_2 + 0x1668);
  FUN_144a7bb84(param_1 + 0x1670,param_2 + 0x1670);
  FUN_144a82394(param_1 + 0x1688,param_2 + 0x1688);
  *(undefined8 *)(param_1 + 0x1690) = *(undefined8 *)(param_2 + 0x1690);
  *(undefined4 *)(param_1 + 0x1698) = *(undefined4 *)(param_2 + 0x1698);
  FUN_144a7bb84(param_1 + 0x16a0,param_2 + 0x16a0);
  FUN_144a82394(param_1 + 0x16b8,param_2 + 0x16b8);
  FUN_14123c256(param_1 + 0x16c0,param_2 + 0x16c0);
  FUN_148baed36(param_1 + 0x16d8,param_2 + 0x16d8);
  puVar19 = (undefined8 *)(param_2 + 0x16e8);
  puVar20 = (undefined8 *)(param_1 + 0x16e8);
  for (lVar18 = 8; lVar18 != 0; lVar18 = lVar18 + -1) {
    *puVar20 = *puVar19;
    puVar19 = puVar19 + 1;
    puVar20 = puVar20 + 1;
  }
  *(undefined2 *)(param_1 + 0x1728) = *(undefined2 *)(param_2 + 0x1728);
  *(undefined1 *)(param_1 + 0x172a) = *(undefined1 *)(param_2 + 0x172a);
  FUN_148b911aa(param_1 + 0x1730,param_2 + 0x1730);
  FUN_148b91208(param_1 + 0x1740,param_2 + 0x1740);
  FUN_14862fb42(param_1 + 0x1750,param_2 + 0x1750);
  FUN_14099a466(param_1 + 0x1760,param_2 + 0x1760);
  *(undefined1 *)(param_1 + 0x1778) = *(undefined1 *)(param_2 + 0x1778);
  FUN_1418444fa(param_1 + 0x1780,param_2 + 0x1780);
  FUN_148621b46(param_1 + 0x1798,param_2 + 0x1798);
  FUN_140c19cf6(param_1 + 0x17a8,param_2 + 0x17a8);
  *(undefined8 *)(param_1 + 0x17b8) = *(undefined8 *)(param_2 + 0x17b8);
  uVar1 = *(undefined4 *)(param_2 + 0x17c4);
  uVar2 = *(undefined4 *)(param_2 + 0x17c8);
  uVar3 = *(undefined4 *)(param_2 + 0x17cc);
  *(undefined4 *)(param_1 + 0x17c0) = *(undefined4 *)(param_2 + 0x17c0);
  *(undefined4 *)(param_1 + 0x17c4) = uVar1;
  *(undefined4 *)(param_1 + 0x17c8) = uVar2;
  *(undefined4 *)(param_1 + 0x17cc) = uVar3;
  FUN_144a787a6(param_1 + 0x17d0,param_2 + 0x17d0);
  return param_1;
}



// FUNCTION 148c9f682 FUN_148c9f682 body=84 status=ok
// SIG undefined FUN_148c9f682(void)

longlong * FUN_148c9f682(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 148c9f6d6 FUN_148c9f6d6 body=93 status=ok
// SIG undefined FUN_148c9f6d6(void)

undefined8 * FUN_148c9f6d6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1418d1d0e(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c9f830(param_1,iVar1);
      FUN_148c9f8a6(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c9f734 FUN_148c9f734 body=79 status=ok
// SIG undefined FUN_148c9f734(void)

undefined8 * FUN_148c9f734(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148c9f9d4(param_1,iVar1);
      FUN_148c9fa43(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c9f784 FUN_148c9f784 body=84 status=ok
// SIG undefined FUN_148c9f784(void)

undefined8 * FUN_148c9f784(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148c9fe06(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1);
      }
    }
  }
  return param_1;
}



// FUNCTION 148c9f7d8 FUN_148c9f7d8 body=88 status=ok
// SIG undefined FUN_148c9f7d8(void)

undefined8 * FUN_148c9f7d8(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148c9fe60(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 148c9f830 FUN_148c9f830 body=118 status=ok
// SIG undefined FUN_148c9f830(void)

void FUN_148c9f830(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x188,8);
    iVar2 = (int)(uVar1 / 0x188);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x188,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c9f8a6 FUN_148c9f8a6 body=60 status=ok
// SIG undefined FUN_148c9f8a6(void)

void FUN_148c9f8a6(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c9f8e2(param_1,param_2);
    param_1 = param_1 + 0x188;
    param_2 = param_2 + 0x188;
  }
  return;
}



// FUNCTION 148c9f8e2 FUN_148c9f8e2 body=242 status=ok
// SIG undefined FUN_148c9f8e2(void)

undefined8 * FUN_148c9f8e2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  param_1[4] = param_2[4];
  uVar6 = *param_2;
  uVar7 = param_2[1];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar4 = *(undefined4 *)(param_2 + 3);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 3) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar5;
  *param_1 = uVar6;
  param_1[1] = uVar7;
  param_1[5] = param_2[5];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar4 = *(undefined4 *)(param_2 + 7);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar3;
  *(undefined4 *)(param_1 + 7) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar5;
  param_1[8] = 0;
  iVar1 = *(int *)(param_2 + 9);
  _Src = (void *)param_2[8];
  *(int *)(param_1 + 9) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar1,0);
    memcpy((void *)param_1[8],_Src,(longlong)iVar1 * 2);
  }
  memcpy(param_1 + 10,param_2 + 10,0x93);
  FUN_140501b78(param_1 + 0x1d,param_2 + 0x1d);
  lVar2 = param_2[0x2d];
  param_1[0x2d] = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  param_1[0x30] = param_2[0x30];
  uVar6 = param_2[0x2f];
  param_1[0x2e] = param_2[0x2e];
  param_1[0x2f] = uVar6;
  return param_1;
}



// FUNCTION 148c9f9d4 FUN_148c9f9d4 body=111 status=ok
// SIG undefined FUN_148c9f9d4(void)

void FUN_148c9f9d4(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x68,8);
    iVar2 = (int)(uVar1 / 0x68);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x68,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c9fa43 FUN_148c9fa43 body=115 status=ok
// SIG undefined FUN_148c9fa43(void)

void FUN_148c9fa43(longlong param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1486b967a(param_1,param_2);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    FUN_144a7f96e(param_1 + 0x20,param_2 + 0x20);
    uVar1 = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x40) = uVar1;
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
    param_1 = param_1 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return;
}



// FUNCTION 148c9fab6 FUN_148c9fab6 body=122 status=ok
// SIG undefined FUN_148c9fab6(void)

longlong FUN_148c9fab6(longlong param_1,longlong param_2)

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
    FUN_148c9fb30(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148c9fb30 FUN_148c9fb30 body=264 status=ok
// SIG undefined FUN_148c9fb30(void)

longlong * FUN_148c9fb30(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1418d1b1c(param_1,(ulonglong)uVar1);
    lVar3 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar3 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar3) < uVar1) {
      FUN_14041fbf2(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      lVar3 = *param_1;
      lVar2 = *param_2;
      lVar6 = 0;
      uVar5 = 0;
      do {
        plVar4 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar4 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar4 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar3 + lVar6) = *(undefined4 *)(lVar2 + lVar6);
          *(undefined4 *)(lVar3 + 4 + lVar6) = *(undefined4 *)(lVar2 + 4 + lVar6);
        }
        else {
          *(undefined8 *)(lVar3 + lVar6) = *(undefined8 *)(lVar2 + lVar6);
          FUN_148c9fc38(lVar3 + 8 + lVar6,lVar2 + 8 + lVar6);
          *(undefined8 *)(lVar3 + 0xd8 + lVar6) = *(undefined8 *)(lVar2 + 0xd8 + lVar6);
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0xe0;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 148c9fc38 FUN_148c9fc38 body=461 status=ok
// SIG undefined FUN_148c9fc38(void)

undefined1 * FUN_148c9fc38(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  uVar4 = *(undefined4 *)(param_2 + 0x18);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined8 *)(param_1 + 0x20) = 0;
  iVar1 = *(int *)(param_2 + 0x28);
  _Src = *(void **)(param_2 + 0x20);
  *(int *)(param_1 + 0x28) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x20,iVar1,0);
    memcpy(*(void **)(param_1 + 0x20),_Src,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  FUN_148c9d59c(param_1 + 0x30,param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x80) = 0;
  iVar1 = *(int *)(param_2 + 0x88);
  uVar2 = *(undefined8 *)(param_2 + 0x80);
  *(int *)(param_1 + 0x88) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  else {
    FUN_148c9d75a(param_1 + 0x80,iVar1,0);
    FUN_148c9d7bc(*(undefined8 *)(param_1 + 0x80),uVar2,iVar1);
  }
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  iVar1 = *(int *)(param_2 + 0xb8);
  uVar2 = *(undefined8 *)(param_2 + 0xb0);
  *(int *)(param_1 + 0xb8) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xbc) = 0;
  }
  else {
    FUN_148c9d7f2(param_1 + 0xb0,iVar1,0);
    FUN_148c9d864(*(undefined8 *)(param_1 + 0xb0),uVar2,iVar1);
  }
  *(undefined8 *)(param_1 + 0xc0) = 0;
  iVar1 = *(int *)(param_2 + 200);
  uVar2 = *(undefined8 *)(param_2 + 0xc0);
  *(int *)(param_1 + 200) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xcc) = 0;
  }
  else {
    FUN_148c9e16c(param_1 + 0xc0,iVar1,0);
    FUN_148c9e1de(*(undefined8 *)(param_1 + 0xc0),uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 148c9fe06 FUN_148c9fe06 body=90 status=ok
// SIG undefined FUN_148c9fe06(void)

void FUN_148c9fe06(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar1 = FUN_144a3809e((longlong)param_2,1);
    iVar2 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar2 = iVar1;
    }
  }
  if (param_3 < iVar2) {
    FUN_1446f8d3c(param_1,0,iVar2,1,1);
    param_3 = iVar2;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c9fe60 FUN_148c9fe60 body=98 status=ok
// SIG undefined FUN_148c9fe60(void)

void FUN_148c9fe60(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,4);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c9ff0c FUN_148c9ff0c body=59 status=ok
// SIG undefined FUN_148c9ff0c(void)

undefined8 FUN_148c9ff0c(longlong *param_1)

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



// FUNCTION 148c9ffd2 FUN_148c9ffd2 body=60 status=ok
// SIG undefined FUN_148c9ffd2(void)

undefined1 FUN_148c9ffd2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c1eec0(param_2,param_3);
    *(undefined1 *)(param_2 + 0x18) = *(undefined1 *)(param_3 + 0x18);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 148ca0036 FUN_148ca0036 body=59 status=ok
// SIG undefined FUN_148ca0036(void)

undefined8 FUN_148ca0036(longlong *param_1)

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



// FUNCTION 148ca00f2 FUN_148ca00f2 body=63 status=ok
// SIG undefined FUN_148ca00f2(void)

undefined1 FUN_148ca00f2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148ca021c(param_2,param_3);
    param_3 = param_3 + 0x7f8;
    param_2 = param_2 + 0x7f8;
  }
  return 1;
}



// FUNCTION 148ca015a FUN_148ca015a body=59 status=ok
// SIG undefined FUN_148ca015a(void)

undefined8 FUN_148ca015a(longlong *param_1)

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



// FUNCTION 148ca01a6 FUN_148ca01a6 body=40 status=ok
// SIG undefined FUN_148ca01a6(void)

void FUN_148ca01a6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x7f8) == '\x01') {
    FUN_1458cb2b4(param_2);
    *(undefined1 *)(param_2 + 0x7f8) = 0;
  }
  return;
}



// FUNCTION 148ca021c FUN_148ca021c body=1587 status=ok
// SIG undefined FUN_148ca021c(void)

longlong FUN_148ca021c(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  FUN_148c1eec0(param_1 + 0x18,param_2 + 0x18);
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
  FUN_148ca0850(param_1 + 0x38,param_2 + 0x38);
  FUN_140d02432(param_1 + 0x88,param_2 + 0x88);
  FUN_140d02432(param_1 + 0xd8,param_2 + 0xd8);
  *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_2 + 0x128);
  if ((*(longlong *)(param_1 + 0x130) != *(longlong *)(param_2 + 0x130)) ||
     (*(int *)(param_1 + 0x138) != *(int *)(param_2 + 0x138))) {
    *(longlong *)(param_1 + 0x130) = *(longlong *)(param_2 + 0x130);
    *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_2 + 0x138);
    *(undefined8 *)(param_1 + 0x140) = 0;
  }
  if ((*(longlong *)(param_1 + 0x148) != *(longlong *)(param_2 + 0x148)) ||
     (*(int *)(param_1 + 0x150) != *(int *)(param_2 + 0x150))) {
    *(longlong *)(param_1 + 0x148) = *(longlong *)(param_2 + 0x148);
    *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_2 + 0x150);
    *(undefined8 *)(param_1 + 0x158) = 0;
  }
  if ((*(longlong *)(param_1 + 0x160) != *(longlong *)(param_2 + 0x160)) ||
     (*(int *)(param_1 + 0x168) != *(int *)(param_2 + 0x168))) {
    *(longlong *)(param_1 + 0x160) = *(longlong *)(param_2 + 0x160);
    *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_2 + 0x168);
    *(undefined8 *)(param_1 + 0x170) = 0;
  }
  *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(param_2 + 0x1a8);
  uVar8 = *(undefined8 *)(param_2 + 0x178);
  uVar9 = *(undefined8 *)(param_2 + 0x180);
  uVar1 = *(undefined4 *)(param_2 + 0x188);
  uVar2 = *(undefined4 *)(param_2 + 0x18c);
  uVar3 = *(undefined4 *)(param_2 + 400);
  uVar4 = *(undefined4 *)(param_2 + 0x194);
  uVar5 = *(undefined4 *)(param_2 + 0x19c);
  uVar6 = *(undefined4 *)(param_2 + 0x1a0);
  uVar7 = *(undefined4 *)(param_2 + 0x1a4);
  *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_2 + 0x198);
  *(undefined4 *)(param_1 + 0x19c) = uVar5;
  *(undefined4 *)(param_1 + 0x1a0) = uVar6;
  *(undefined4 *)(param_1 + 0x1a4) = uVar7;
  *(undefined4 *)(param_1 + 0x188) = uVar1;
  *(undefined4 *)(param_1 + 0x18c) = uVar2;
  *(undefined4 *)(param_1 + 400) = uVar3;
  *(undefined4 *)(param_1 + 0x194) = uVar4;
  *(undefined8 *)(param_1 + 0x178) = uVar8;
  *(undefined8 *)(param_1 + 0x180) = uVar9;
  *(undefined8 *)(param_1 + 0x1b0) = *(undefined8 *)(param_2 + 0x1b0);
  uVar1 = *(undefined4 *)(param_2 + 0x1bc);
  uVar2 = *(undefined4 *)(param_2 + 0x1c0);
  uVar3 = *(undefined4 *)(param_2 + 0x1c4);
  *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_2 + 0x1b8);
  *(undefined4 *)(param_1 + 0x1bc) = uVar1;
  *(undefined4 *)(param_1 + 0x1c0) = uVar2;
  *(undefined4 *)(param_1 + 0x1c4) = uVar3;
  FUN_144a787a6(param_1 + 0x1c8,param_2 + 0x1c8);
  *(undefined8 *)(param_1 + 0x1d8) = *(undefined8 *)(param_2 + 0x1d8);
  uVar1 = *(undefined4 *)(param_2 + 0x1e4);
  uVar2 = *(undefined4 *)(param_2 + 0x1e8);
  uVar3 = *(undefined4 *)(param_2 + 0x1ec);
  *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_2 + 0x1e0);
  *(undefined4 *)(param_1 + 0x1e4) = uVar1;
  *(undefined4 *)(param_1 + 0x1e8) = uVar2;
  *(undefined4 *)(param_1 + 0x1ec) = uVar3;
  FUN_144a787a6(param_1 + 0x1f0,param_2 + 0x1f0);
  *(undefined8 *)(param_1 + 0x200) = *(undefined8 *)(param_2 + 0x200);
  uVar1 = *(undefined4 *)(param_2 + 0x20c);
  uVar2 = *(undefined4 *)(param_2 + 0x210);
  uVar3 = *(undefined4 *)(param_2 + 0x214);
  *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_2 + 0x208);
  *(undefined4 *)(param_1 + 0x20c) = uVar1;
  *(undefined4 *)(param_1 + 0x210) = uVar2;
  *(undefined4 *)(param_1 + 0x214) = uVar3;
  FUN_144a787a6(param_1 + 0x218,param_2 + 0x218);
  *(undefined8 *)(param_1 + 0x228) = *(undefined8 *)(param_2 + 0x228);
  *(undefined2 *)(param_1 + 0x2a4) = *(undefined2 *)(param_2 + 0x2a4);
  *(undefined4 *)(param_1 + 0x2a0) = *(undefined4 *)(param_2 + 0x2a0);
  FUN_14093c00e(param_1 + 0x2a8,param_2 + 0x2a8);
  *(undefined8 *)(param_1 + 0x2b8) = *(undefined8 *)(param_2 + 0x2b8);
  uVar1 = *(undefined4 *)(param_2 + 0x2c4);
  uVar2 = *(undefined4 *)(param_2 + 0x2c8);
  uVar3 = *(undefined4 *)(param_2 + 0x2cc);
  *(undefined4 *)(param_1 + 0x2c0) = *(undefined4 *)(param_2 + 0x2c0);
  *(undefined4 *)(param_1 + 0x2c4) = uVar1;
  *(undefined4 *)(param_1 + 0x2c8) = uVar2;
  *(undefined4 *)(param_1 + 0x2cc) = uVar3;
  FUN_144a787a6(param_1 + 0x2d0,param_2 + 0x2d0);
  *(undefined4 *)(param_1 + 0x350) = *(undefined4 *)(param_2 + 0x350);
  *(undefined2 *)(param_1 + 0x354) = *(undefined2 *)(param_2 + 0x354);
  FUN_14093c00e(param_1 + 0x358,param_2 + 0x358);
  *(undefined8 *)(param_1 + 0x368) = *(undefined8 *)(param_2 + 0x368);
  uVar1 = *(undefined4 *)(param_2 + 0x374);
  uVar2 = *(undefined4 *)(param_2 + 0x378);
  uVar3 = *(undefined4 *)(param_2 + 0x37c);
  *(undefined4 *)(param_1 + 0x370) = *(undefined4 *)(param_2 + 0x370);
  *(undefined4 *)(param_1 + 0x374) = uVar1;
  *(undefined4 *)(param_1 + 0x378) = uVar2;
  *(undefined4 *)(param_1 + 0x37c) = uVar3;
  FUN_144a787a6(param_1 + 0x380,param_2 + 0x380);
  *(undefined4 *)(param_1 + 0x390) = *(undefined4 *)(param_2 + 0x390);
  *(undefined2 *)(param_1 + 0x40c) = *(undefined2 *)(param_2 + 0x40c);
  *(undefined4 *)(param_1 + 0x408) = *(undefined4 *)(param_2 + 0x408);
  FUN_14093c00e(param_1 + 0x410,param_2 + 0x410);
  *(undefined8 *)(param_1 + 0x420) = *(undefined8 *)(param_2 + 0x420);
  uVar1 = *(undefined4 *)(param_2 + 0x42c);
  uVar2 = *(undefined4 *)(param_2 + 0x430);
  uVar3 = *(undefined4 *)(param_2 + 0x434);
  *(undefined4 *)(param_1 + 0x428) = *(undefined4 *)(param_2 + 0x428);
  *(undefined4 *)(param_1 + 0x42c) = uVar1;
  *(undefined4 *)(param_1 + 0x430) = uVar2;
  *(undefined4 *)(param_1 + 0x434) = uVar3;
  FUN_144a787a6(param_1 + 0x438,param_2 + 0x438);
  *(undefined4 *)(param_1 + 0x4b8) = *(undefined4 *)(param_2 + 0x4b8);
  *(undefined2 *)(param_1 + 0x4bc) = *(undefined2 *)(param_2 + 0x4bc);
  FUN_14093c00e(param_1 + 0x4c0,param_2 + 0x4c0);
  *(undefined8 *)(param_1 + 0x4d0) = *(undefined8 *)(param_2 + 0x4d0);
  uVar1 = *(undefined4 *)(param_2 + 0x4dc);
  uVar2 = *(undefined4 *)(param_2 + 0x4e0);
  uVar3 = *(undefined4 *)(param_2 + 0x4e4);
  *(undefined4 *)(param_1 + 0x4d8) = *(undefined4 *)(param_2 + 0x4d8);
  *(undefined4 *)(param_1 + 0x4dc) = uVar1;
  *(undefined4 *)(param_1 + 0x4e0) = uVar2;
  *(undefined4 *)(param_1 + 0x4e4) = uVar3;
  FUN_144a787a6(param_1 + 0x4e8,param_2 + 0x4e8);
  *(undefined4 *)(param_1 + 0x568) = *(undefined4 *)(param_2 + 0x568);
  *(undefined2 *)(param_1 + 0x56c) = *(undefined2 *)(param_2 + 0x56c);
  FUN_14093c00e(param_1 + 0x570,param_2 + 0x570);
  *(undefined8 *)(param_1 + 0x580) = *(undefined8 *)(param_2 + 0x580);
  uVar1 = *(undefined4 *)(param_2 + 0x58c);
  uVar2 = *(undefined4 *)(param_2 + 0x590);
  uVar3 = *(undefined4 *)(param_2 + 0x594);
  *(undefined4 *)(param_1 + 0x588) = *(undefined4 *)(param_2 + 0x588);
  *(undefined4 *)(param_1 + 0x58c) = uVar1;
  *(undefined4 *)(param_1 + 0x590) = uVar2;
  *(undefined4 *)(param_1 + 0x594) = uVar3;
  FUN_144a787a6(param_1 + 0x598,param_2 + 0x598);
  *(undefined4 *)(param_1 + 0x618) = *(undefined4 *)(param_2 + 0x618);
  *(undefined2 *)(param_1 + 0x61c) = *(undefined2 *)(param_2 + 0x61c);
  FUN_14093c00e(param_1 + 0x620,param_2 + 0x620);
  *(undefined8 *)(param_1 + 0x630) = *(undefined8 *)(param_2 + 0x630);
  uVar1 = *(undefined4 *)(param_2 + 0x63c);
  uVar2 = *(undefined4 *)(param_2 + 0x640);
  uVar3 = *(undefined4 *)(param_2 + 0x644);
  *(undefined4 *)(param_1 + 0x638) = *(undefined4 *)(param_2 + 0x638);
  *(undefined4 *)(param_1 + 0x63c) = uVar1;
  *(undefined4 *)(param_1 + 0x640) = uVar2;
  *(undefined4 *)(param_1 + 0x644) = uVar3;
  FUN_144a787a6(param_1 + 0x648,param_2 + 0x648);
  uVar1 = *(undefined4 *)(param_2 + 0x65c);
  uVar2 = *(undefined4 *)(param_2 + 0x660);
  uVar3 = *(undefined4 *)(param_2 + 0x664);
  uVar4 = *(undefined4 *)(param_2 + 0x668);
  uVar5 = *(undefined4 *)(param_2 + 0x66c);
  uVar6 = *(undefined4 *)(param_2 + 0x670);
  uVar7 = *(undefined4 *)(param_2 + 0x674);
  *(undefined4 *)(param_1 + 0x658) = *(undefined4 *)(param_2 + 0x658);
  *(undefined4 *)(param_1 + 0x65c) = uVar1;
  *(undefined4 *)(param_1 + 0x660) = uVar2;
  *(undefined4 *)(param_1 + 0x664) = uVar3;
  *(undefined4 *)(param_1 + 0x668) = uVar4;
  *(undefined4 *)(param_1 + 0x66c) = uVar5;
  *(undefined4 *)(param_1 + 0x670) = uVar6;
  *(undefined4 *)(param_1 + 0x674) = uVar7;
  *(undefined4 *)(param_1 + 0x678) = *(undefined4 *)(param_2 + 0x678);
  *(undefined4 *)(param_1 + 0x6f0) = *(undefined4 *)(param_2 + 0x6f0);
  *(undefined2 *)(param_1 + 0x6f4) = *(undefined2 *)(param_2 + 0x6f4);
  FUN_14093c00e(param_1 + 0x6f8,param_2 + 0x6f8);
  *(undefined8 *)(param_1 + 0x708) = *(undefined8 *)(param_2 + 0x708);
  uVar1 = *(undefined4 *)(param_2 + 0x714);
  uVar2 = *(undefined4 *)(param_2 + 0x718);
  uVar3 = *(undefined4 *)(param_2 + 0x71c);
  *(undefined4 *)(param_1 + 0x710) = *(undefined4 *)(param_2 + 0x710);
  *(undefined4 *)(param_1 + 0x714) = uVar1;
  *(undefined4 *)(param_1 + 0x718) = uVar2;
  *(undefined4 *)(param_1 + 0x71c) = uVar3;
  FUN_144a787a6(param_1 + 0x720,param_2 + 0x720);
  *(undefined1 *)(param_1 + 0x732) = *(undefined1 *)(param_2 + 0x732);
  *(undefined2 *)(param_1 + 0x730) = *(undefined2 *)(param_2 + 0x730);
  if ((*(longlong *)(param_1 + 0x738) != *(longlong *)(param_2 + 0x738)) ||
     (*(int *)(param_1 + 0x740) != *(int *)(param_2 + 0x740))) {
    *(longlong *)(param_1 + 0x738) = *(longlong *)(param_2 + 0x738);
    *(undefined4 *)(param_1 + 0x740) = *(undefined4 *)(param_2 + 0x740);
    *(undefined8 *)(param_1 + 0x748) = 0;
  }
  if ((*(longlong *)(param_1 + 0x750) != *(longlong *)(param_2 + 0x750)) ||
     (*(int *)(param_1 + 0x758) != *(int *)(param_2 + 0x758))) {
    *(longlong *)(param_1 + 0x750) = *(longlong *)(param_2 + 0x750);
    *(undefined4 *)(param_1 + 0x758) = *(undefined4 *)(param_2 + 0x758);
    *(undefined8 *)(param_1 + 0x760) = 0;
  }
  if ((*(longlong *)(param_1 + 0x768) != *(longlong *)(param_2 + 0x768)) ||
     (*(int *)(param_1 + 0x770) != *(int *)(param_2 + 0x770))) {
    *(longlong *)(param_1 + 0x768) = *(longlong *)(param_2 + 0x768);
    *(undefined4 *)(param_1 + 0x770) = *(undefined4 *)(param_2 + 0x770);
    *(undefined8 *)(param_1 + 0x778) = 0;
  }
  if ((*(longlong *)(param_1 + 0x780) != *(longlong *)(param_2 + 0x780)) ||
     (*(int *)(param_1 + 0x788) != *(int *)(param_2 + 0x788))) {
    *(longlong *)(param_1 + 0x780) = *(longlong *)(param_2 + 0x780);
    *(undefined4 *)(param_1 + 0x788) = *(undefined4 *)(param_2 + 0x788);
    *(undefined8 *)(param_1 + 0x790) = 0;
  }
  if ((*(longlong *)(param_1 + 0x798) != *(longlong *)(param_2 + 0x798)) ||
     (*(int *)(param_1 + 0x7a0) != *(int *)(param_2 + 0x7a0))) {
    *(longlong *)(param_1 + 0x798) = *(longlong *)(param_2 + 0x798);
    *(undefined4 *)(param_1 + 0x7a0) = *(undefined4 *)(param_2 + 0x7a0);
    *(undefined8 *)(param_1 + 0x7a8) = 0;
  }
  *(undefined8 *)(param_1 + 0x7b0) = *(undefined8 *)(param_2 + 0x7b0);
  *(undefined8 *)(param_1 + 0x7b8) = *(undefined8 *)(param_2 + 0x7b8);
  uVar1 = *(undefined4 *)(param_2 + 0x7c4);
  uVar2 = *(undefined4 *)(param_2 + 0x7c8);
  uVar3 = *(undefined4 *)(param_2 + 0x7cc);
  *(undefined4 *)(param_1 + 0x7c0) = *(undefined4 *)(param_2 + 0x7c0);
  *(undefined4 *)(param_1 + 0x7c4) = uVar1;
  *(undefined4 *)(param_1 + 0x7c8) = uVar2;
  *(undefined4 *)(param_1 + 0x7cc) = uVar3;
  FUN_144a787a6(param_1 + 2000,param_2 + 2000);
  uVar8 = *(undefined8 *)(param_2 + 0x7e8);
  *(undefined8 *)(param_1 + 0x7e0) = *(undefined8 *)(param_2 + 0x7e0);
  *(undefined8 *)(param_1 + 0x7e8) = uVar8;
  *(undefined8 *)(param_1 + 0x7ef) = *(undefined8 *)(param_2 + 0x7ef);
  return param_1;
}



// FUNCTION 148ca0850 FUN_148ca0850 body=122 status=ok
// SIG undefined FUN_148ca0850(void)

longlong FUN_148ca0850(longlong param_1,longlong param_2)

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
    FUN_148ca08ca(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 148ca08ca FUN_148ca08ca body=260 status=ok
// SIG undefined FUN_148ca08ca(void)

longlong * FUN_148ca08ca(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1458cb3e2(param_1,(ulonglong)uVar1);
    lVar3 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar3 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar3) < uVar1) {
      FUN_140044672(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      lVar3 = *param_1;
      lVar2 = *param_2;
      lVar6 = 0;
      uVar5 = 0;
      do {
        plVar4 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar4 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar4 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar3 + lVar6) = *(undefined4 *)(lVar2 + lVar6);
          *(undefined4 *)(lVar3 + 4 + lVar6) = *(undefined4 *)(lVar2 + 4 + lVar6);
        }
        else {
          *(undefined1 *)(lVar3 + lVar6) = *(undefined1 *)(lVar2 + lVar6);
          FUN_148ca09ce(lVar3 + 8 + lVar6,lVar2 + 8 + lVar6);
          *(undefined1 *)(lVar3 + 0x20 + lVar6) = *(undefined1 *)(lVar2 + 0x20 + lVar6);
          *(undefined8 *)(lVar3 + 0x28 + lVar6) = *(undefined8 *)(lVar2 + 0x28 + lVar6);
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x30;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 148ca09ce FUN_148ca09ce body=71 status=ok
// SIG undefined FUN_148ca09ce(void)

undefined8 * FUN_148ca09ce(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 148ca0a16 FUN_148ca0a16 body=57 status=ok
// SIG undefined FUN_148ca0a16(void)

void FUN_148ca0a16(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbcf68 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbcf68 = FUN_140002ddd(FUN_14660d389,uVar1,L"OakVehicleInteractionDef");
  }
  return;
}



// FUNCTION 148ca0a8f FUN_148ca0a8f body=62 status=ok
// SIG undefined FUN_148ca0a8f(void)

void FUN_148ca0a8f(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1447cd2ec(param_1,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca0ace FUN_148ca0ace body=62 status=ok
// SIG undefined FUN_148ca0ace(void)

void FUN_148ca0ace(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1447cd2ec(param_1,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca0b0d FUN_148ca0b0d body=62 status=ok
// SIG undefined FUN_148ca0b0d(void)

void FUN_148ca0b0d(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1447cd2ec(param_1,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca0b51 FUN_148ca0b51 body=66 status=ok
// SIG undefined FUN_148ca0b51(void)

void FUN_148ca0b51(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined1 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_10 = param_3;
  FUN_1447cd2ec(param_1,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca0b9c FUN_148ca0b9c body=61 status=ok
// SIG undefined FUN_148ca0b9c(void)

void FUN_148ca0b9c(undefined8 param_1,undefined1 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_2;
  FUN_1447cd2ec(param_1,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca0bf0 FUN_148ca0bf0 body=164 status=ok
// SIG undefined FUN_148ca0bf0(void)

void FUN_148ca0bf0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148f0ac48(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca0c96 FUN_148ca0c96 body=156 status=ok
// SIG undefined FUN_148ca0c96(void)

void FUN_148ca0c96(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_14434d95a(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca0d6a FUN_148ca0d6a body=303 status=ok
// SIG undefined FUN_148ca0d6a(void)

void FUN_148ca0d6a(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 unaff_RBX;
  bool bVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  int local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_1446e6c6a();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  bVar2 = local_3c != 0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_38;
  uVar1 = FUN_14477b664(uStack_30);
  local_50 = FUN_14477b664(uVar1);
  local_48 = local_28;
  FUN_14434db8e(param_1,&local_58,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar2) & 0xffffffff);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca0ed0 FUN_148ca0ed0 body=225 status=ok
// SIG undefined FUN_148ca0ed0(void)

void FUN_148ca0ed0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_1c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148f0b590(local_18,local_1c);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca0fb8 FUN_148ca0fb8 body=155 status=ok
// SIG undefined FUN_148ca0fb8(void)

void FUN_148ca0fb8(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_148f0b6f6(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca1064 FUN_148ca1064 body=39 status=ok
// SIG undefined FUN_148ca1064(void)

void FUN_148ca1064(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148f176ee();
  *param_3 = uVar1;
  return;
}



// FUNCTION 148ca108c FUN_148ca108c body=166 status=ok
// SIG undefined FUN_148ca108c(void)

void FUN_148ca108c(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [39];
  byte local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = 0;
  if ((ulonglong)local_21 != 0x11) {
    uVar1 = *(undefined4 *)(param_1 + 0xe3c + (ulonglong)local_21 * 4);
  }
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca113a FUN_148ca113a body=241 status=ok
// SIG undefined FUN_148ca113a(void)

void FUN_148ca113a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  int local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148f17400(param_1,local_1c,local_20 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca122c FUN_148ca122c body=150 status=ok
// SIG undefined FUN_148ca122c(void)

void FUN_148ca122c(longlong *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = DAT_14c8464e0;
  uStack_40 = DAT_14c8464e8;
  local_38 = DAT_14c8464f0;
  local_30 = (undefined4)DAT_14c8464f8;
  uStack_2c = DAT_14c8464f8._4_4_;
  uStack_28 = (undefined4)DAT_14c846500;
  uStack_24 = DAT_14c846500._4_4_;
  local_20 = DAT_14c846508;
  FUN_14400a028(&local_58);
  uVar1 = FUN_14477b072(param_1,DAT_14cbbd488);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_58);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca12c4 FUN_148ca12c4 body=245 status=ok
// SIG undefined FUN_148ca12c4(void)

void FUN_148ca12c4(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = DAT_14c8464e0;
  uStack_40 = DAT_14c8464e8;
  local_38 = DAT_14c8464f0;
  local_30 = (undefined4)DAT_14c8464f8;
  uStack_2c = DAT_14c8464f8._4_4_;
  uStack_28 = (undefined4)DAT_14c846500;
  uStack_24 = DAT_14c846500._4_4_;
  local_20 = DAT_14c846508;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0x978))(param_1,&local_58);
  if (cVar1 == '\0') {
    FUN_1468998ea(L"ServerSetCommandRingTarget_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x980))(param_1,&local_58);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ca13c6 FUN_148ca13c6 body=48 status=ok
// SIG undefined FUN_148ca13c6(void)

longlong FUN_148ca13c6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_1458d6654(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca13f6 FUN_148ca13f6 body=48 status=ok
// SIG undefined FUN_148ca13f6(void)

longlong FUN_148ca13f6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_1458d6654(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca1426 FUN_148ca1426 body=48 status=ok
// SIG undefined FUN_148ca1426(void)

longlong FUN_148ca1426(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_1458d6654(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca1456 FUN_148ca1456 body=48 status=ok
// SIG undefined FUN_148ca1456(void)

longlong FUN_148ca1456(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b8;
  FUN_1458d6654(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca1486 FUN_148ca1486 body=48 status=ok
// SIG undefined FUN_148ca1486(void)

longlong FUN_148ca1486(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c0;
  FUN_1458d6654(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca14b6 FUN_148ca14b6 body=48 status=ok
// SIG undefined FUN_148ca14b6(void)

longlong FUN_148ca14b6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c8;
  FUN_1458d6654(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca14e6 FUN_148ca14e6 body=48 status=ok
// SIG undefined FUN_148ca14e6(void)

longlong FUN_148ca14e6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3d0;
  FUN_1458d6654(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca1516 FUN_148ca1516 body=48 status=ok
// SIG undefined FUN_148ca1516(void)

longlong FUN_148ca1516(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3d8;
  FUN_1458d6654(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca1546 FUN_148ca1546 body=48 status=ok
// SIG undefined FUN_148ca1546(void)

longlong FUN_148ca1546(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3e0;
  FUN_1458d6654(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca1586 FUN_148ca1586 body=48 status=ok
// SIG undefined FUN_148ca1586(void)

longlong FUN_148ca1586(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_140ef64b4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca15be FUN_148ca15be body=48 status=ok
// SIG undefined FUN_148ca15be(void)

longlong FUN_148ca15be(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_140ef64b4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca15f6 FUN_148ca15f6 body=48 status=ok
// SIG undefined FUN_148ca15f6(void)

longlong FUN_148ca15f6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_140ef64b4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca162e FUN_148ca162e body=48 status=ok
// SIG undefined FUN_148ca162e(void)

longlong FUN_148ca162e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x530;
  FUN_140ef64b4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca165e FUN_148ca165e body=48 status=ok
// SIG undefined FUN_148ca165e(void)

longlong FUN_148ca165e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x538;
  FUN_140ef64b4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca168e FUN_148ca168e body=48 status=ok
// SIG undefined FUN_148ca168e(void)

longlong FUN_148ca168e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x540;
  FUN_140ef64b4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca16c6 FUN_148ca16c6 body=48 status=ok
// SIG undefined FUN_148ca16c6(void)

longlong FUN_148ca16c6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x8c0;
  FUN_140ef64b4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca16fe FUN_148ca16fe body=48 status=ok
// SIG undefined FUN_148ca16fe(void)

longlong FUN_148ca16fe(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x8c8;
  FUN_140ef64b4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca1736 FUN_148ca1736 body=48 status=ok
// SIG undefined FUN_148ca1736(void)

longlong FUN_148ca1736(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x8d0;
  FUN_140ef64b4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca176e FUN_148ca176e body=48 status=ok
// SIG undefined FUN_148ca176e(void)

longlong FUN_148ca176e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x8d8;
  FUN_140ef64b4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca17a6 FUN_148ca17a6 body=48 status=ok
// SIG undefined FUN_148ca17a6(void)

longlong FUN_148ca17a6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x8e0;
  FUN_140ef64b4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca17d6 FUN_148ca17d6 body=48 status=ok
// SIG undefined FUN_148ca17d6(void)

longlong FUN_148ca17d6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x8e8;
  FUN_140ef64b4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca1806 FUN_148ca1806 body=48 status=ok
// SIG undefined FUN_148ca1806(void)

longlong FUN_148ca1806(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xdd8;
  FUN_140ef64b4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca183e FUN_148ca183e body=48 status=ok
// SIG undefined FUN_148ca183e(void)

longlong FUN_148ca183e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xde0;
  FUN_140ef64b4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca186e FUN_148ca186e body=48 status=ok
// SIG undefined FUN_148ca186e(void)

longlong FUN_148ca186e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xde8;
  FUN_140ef64b4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca189e FUN_148ca189e body=48 status=ok
// SIG undefined FUN_148ca189e(void)

longlong FUN_148ca189e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xdf0;
  FUN_140ef64b4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca18ce FUN_148ca18ce body=48 status=ok
// SIG undefined FUN_148ca18ce(void)

longlong FUN_148ca18ce(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x568;
  FUN_140945f4c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca1906 FUN_148ca1906 body=48 status=ok
// SIG undefined FUN_148ca1906(void)

longlong FUN_148ca1906(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_1414fcdee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca193e FUN_148ca193e body=48 status=ok
// SIG undefined FUN_148ca193e(void)

longlong FUN_148ca193e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_1414fcdee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca1976 FUN_148ca1976 body=48 status=ok
// SIG undefined FUN_148ca1976(void)

longlong FUN_148ca1976(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_1414fcdee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca19ae FUN_148ca19ae body=48 status=ok
// SIG undefined FUN_148ca19ae(void)

longlong FUN_148ca19ae(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b8;
  FUN_1414fcdee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca19de FUN_148ca19de body=48 status=ok
// SIG undefined FUN_148ca19de(void)

longlong FUN_148ca19de(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c0;
  FUN_1414fcdee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca1a0e FUN_148ca1a0e body=48 status=ok
// SIG undefined FUN_148ca1a0e(void)

longlong FUN_148ca1a0e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x408;
  FUN_1414fcdee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca1a3e FUN_148ca1a3e body=48 status=ok
// SIG undefined FUN_148ca1a3e(void)

longlong FUN_148ca1a3e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x410;
  FUN_1414fcdee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca1a76 FUN_148ca1a76 body=48 status=ok
// SIG undefined FUN_148ca1a76(void)

longlong FUN_148ca1a76(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x418;
  FUN_1414fcdee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca1aa6 FUN_148ca1aa6 body=48 status=ok
// SIG undefined FUN_148ca1aa6(void)

longlong FUN_148ca1aa6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x420;
  FUN_1414fcdee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca1ade FUN_148ca1ade body=48 status=ok
// SIG undefined FUN_148ca1ade(void)

longlong FUN_148ca1ade(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x428;
  FUN_1414fcdee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca1b26 FUN_148ca1b26 body=48 status=ok
// SIG undefined FUN_148ca1b26(void)

longlong FUN_148ca1b26(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x458;
  FUN_1414fcdee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca1b56 FUN_148ca1b56 body=48 status=ok
// SIG undefined FUN_148ca1b56(void)

longlong FUN_148ca1b56(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x460;
  FUN_1414fcdee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca1b86 FUN_148ca1b86 body=48 status=ok
// SIG undefined FUN_148ca1b86(void)

longlong FUN_148ca1b86(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x468;
  FUN_1414fcdee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca1bbe FUN_148ca1bbe body=48 status=ok
// SIG undefined FUN_148ca1bbe(void)

longlong FUN_148ca1bbe(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x470;
  FUN_1414fcdee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca1bf6 FUN_148ca1bf6 body=48 status=ok
// SIG undefined FUN_148ca1bf6(void)

longlong FUN_148ca1bf6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x478;
  FUN_1414fcdee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca1c2e FUN_148ca1c2e body=48 status=ok
// SIG undefined FUN_148ca1c2e(void)

longlong FUN_148ca1c2e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x480;
  FUN_1414fcdee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca1c66 FUN_148ca1c66 body=48 status=ok
// SIG undefined FUN_148ca1c66(void)

longlong FUN_148ca1c66(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x488;
  FUN_1414fcdee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca1c9e FUN_148ca1c9e body=48 status=ok
// SIG undefined FUN_148ca1c9e(void)

longlong FUN_148ca1c9e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x490;
  FUN_1414fcdee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca1cd6 FUN_148ca1cd6 body=48 status=ok
// SIG undefined FUN_148ca1cd6(void)

longlong FUN_148ca1cd6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x498;
  FUN_1414fcdee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca1d0e FUN_148ca1d0e body=48 status=ok
// SIG undefined FUN_148ca1d0e(void)

longlong FUN_148ca1d0e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a0;
  FUN_1414fcdee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca1d46 FUN_148ca1d46 body=48 status=ok
// SIG undefined FUN_148ca1d46(void)

longlong FUN_148ca1d46(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a8;
  FUN_1414fcdee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca1d7e FUN_148ca1d7e body=48 status=ok
// SIG undefined FUN_148ca1d7e(void)

longlong FUN_148ca1d7e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4b0;
  FUN_1414fcdee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca1dc6 FUN_148ca1dc6 body=48 status=ok
// SIG undefined FUN_148ca1dc6(void)

longlong FUN_148ca1dc6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a98;
  FUN_1414fcdee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca1dfe FUN_148ca1dfe body=48 status=ok
// SIG undefined FUN_148ca1dfe(void)

longlong FUN_148ca1dfe(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1aa0;
  FUN_1414fcdee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca1e2e FUN_148ca1e2e body=48 status=ok
// SIG undefined FUN_148ca1e2e(void)

longlong FUN_148ca1e2e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1aa8;
  FUN_1414fcdee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca1e66 FUN_148ca1e66 body=48 status=ok
// SIG undefined FUN_148ca1e66(void)

longlong FUN_148ca1e66(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ab0;
  FUN_1414fcdee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca1e9e FUN_148ca1e9e body=48 status=ok
// SIG undefined FUN_148ca1e9e(void)

longlong FUN_148ca1e9e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ad0;
  FUN_1414fcdee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca1ed6 FUN_148ca1ed6 body=48 status=ok
// SIG undefined FUN_148ca1ed6(void)

longlong FUN_148ca1ed6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ad8;
  FUN_1414fcdee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca1f06 FUN_148ca1f06 body=48 status=ok
// SIG undefined FUN_148ca1f06(void)

longlong FUN_148ca1f06(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ae0;
  FUN_1414fcdee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca1f36 FUN_148ca1f36 body=48 status=ok
// SIG undefined FUN_148ca1f36(void)

longlong FUN_148ca1f36(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x25f8;
  FUN_1414fcdee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca1f6e FUN_148ca1f6e body=48 status=ok
// SIG undefined FUN_148ca1f6e(void)

longlong FUN_148ca1f6e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_140ef64b4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca1f9e FUN_148ca1f9e body=48 status=ok
// SIG undefined FUN_148ca1f9e(void)

longlong FUN_148ca1f9e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_140ef64b4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca1fce FUN_148ca1fce body=48 status=ok
// SIG undefined FUN_148ca1fce(void)

longlong FUN_148ca1fce(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_140ef64b4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca1ffe FUN_148ca1ffe body=48 status=ok
// SIG undefined FUN_148ca1ffe(void)

longlong FUN_148ca1ffe(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x530;
  FUN_140ef64b4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca202e FUN_148ca202e body=48 status=ok
// SIG undefined FUN_148ca202e(void)

longlong FUN_148ca202e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x538;
  FUN_140ef64b4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca205e FUN_148ca205e body=48 status=ok
// SIG undefined FUN_148ca205e(void)

longlong FUN_148ca205e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x540;
  FUN_140ef64b4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca208e FUN_148ca208e body=48 status=ok
// SIG undefined FUN_148ca208e(void)

longlong FUN_148ca208e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x8c0;
  FUN_140ef64b4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148ca20be FUN_148ca20be body=48 status=ok
// SIG undefined FUN_148ca20be(void)

longlong FUN_148ca20be(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x8c8;
  FUN_140ef64b4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


