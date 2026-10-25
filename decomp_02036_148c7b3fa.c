// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148c7b3fa FUN_148c7b3fa body=59 status=ok
// SIG undefined FUN_148c7b3fa(void)

undefined8 FUN_148c7b3fa(longlong *param_1)

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



// FUNCTION 148c7b446 FUN_148c7b446 body=38 status=ok
// SIG undefined FUN_148c7b446(void)

void FUN_148c7b446(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    FUN_140fe7f26(param_2);
    *(undefined1 *)(param_2 + 0xb0) = 0;
  }
  return;
}



// FUNCTION 148c7b4ba FUN_148c7b4ba body=43 status=ok
// SIG undefined FUN_148c7b4ba(void)

undefined8 FUN_148c7b4ba(undefined8 param_1,int param_2)

{
  FUN_140fe7f26();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 148c7b4e6 FUN_148c7b4e6 body=55 status=ok
// SIG undefined FUN_148c7b4e6(void)

void FUN_148c7b4e6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb8a18 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb8a18 = FUN_140002ddd(FUN_1466051e7,uVar1,L"OakWidgetData_Inventory");
  }
  return;
}



// FUNCTION 148c7b56a FUN_148c7b56a body=54 status=ok
// SIG undefined FUN_148c7b56a(void)

undefined1 FUN_148c7b56a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c7b67e(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 148c7b5c8 FUN_148c7b5c8 body=59 status=ok
// SIG undefined FUN_148c7b5c8(void)

undefined8 FUN_148c7b5c8(longlong *param_1)

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



// FUNCTION 148c7b60e FUN_148c7b60e body=34 status=ok
// SIG undefined FUN_148c7b60e(void)

void FUN_148c7b60e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_145bdcd62(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 148c7b67e FUN_148c7b67e body=289 status=ok
// SIG undefined FUN_148c7b67e(void)

undefined1 * FUN_148c7b67e(undefined1 *param_1,undefined1 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(int *)(param_1 + 4) != *(int *)(param_2 + 4)) {
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  if (*(int *)(param_1 + 0x18) != *(int *)(param_2 + 0x18)) {
    FUN_144a787a6(param_1 + 8,param_2 + 8);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  }
  if (*(int *)(param_1 + 0x24) != *(int *)(param_2 + 0x24)) {
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  }
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_2 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  }
  if (*(int *)(param_1 + 0x34) != *(int *)(param_2 + 0x34)) {
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  }
  if (*(int *)(param_1 + 0x3c) != *(int *)(param_2 + 0x3c)) {
    param_1[0x38] = param_2[0x38];
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  }
  if (*(int *)(param_1 + 0x44) != *(int *)(param_2 + 0x44)) {
    param_1[0x40] = param_2[0x40];
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  }
  if (*(int *)(param_1 + 0x4c) != *(int *)(param_2 + 0x4c)) {
    param_1[0x48] = param_2[0x48];
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  }
  plVar1 = *(longlong **)(param_2 + 0x50);
  plVar2 = *(longlong **)(param_1 + 0x50);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x50) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  plVar1 = *(longlong **)(param_2 + 0x60);
  plVar2 = *(longlong **)(param_1 + 0x60);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x60) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  return param_1;
}



// FUNCTION 148c7b7d4 FUN_148c7b7d4 body=63 status=ok
// SIG undefined FUN_148c7b7d4(void)

undefined1 FUN_148c7b7d4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c7b938(param_2,param_3);
    param_3 = param_3 + 0x120;
    param_2 = param_2 + 0x120;
  }
  return 1;
}



// FUNCTION 148c7b83c FUN_148c7b83c body=59 status=ok
// SIG undefined FUN_148c7b83c(void)

undefined8 FUN_148c7b83c(longlong *param_1)

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



// FUNCTION 148c7b888 FUN_148c7b888 body=40 status=ok
// SIG undefined FUN_148c7b888(void)

void FUN_148c7b888(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x120) == '\x01') {
    FUN_145bdccb2(param_2);
    *(undefined1 *)(param_2 + 0x120) = 0;
  }
  return;
}



// FUNCTION 148c7b8fe FUN_148c7b8fe body=57 status=ok
// SIG undefined FUN_148c7b8fe(void)

void FUN_148c7b8fe(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb9528 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb9528 = FUN_140002ddd(FUN_14660530b,uVar1,L"OakWidgetData_InventoryAmmo");
  }
  return;
}



// FUNCTION 148c7b938 FUN_148c7b938 body=300 status=ok
// SIG undefined FUN_148c7b938(void)

longlong FUN_148c7b938(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_1489fb7d2();
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  plVar1 = *(longlong **)(param_2 + 0xb8);
  plVar2 = *(longlong **)(param_1 + 0xb8);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0xb8) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
  plVar1 = *(longlong **)(param_2 + 200);
  plVar2 = *(longlong **)(param_1 + 200);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 200) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
  if (*(int *)(param_1 + 0xf0) != *(int *)(param_2 + 0xf0)) {
    FUN_144a787a6(param_1 + 0xe0,param_2 + 0xe0);
    *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
  }
  FUN_144a787a6(param_1 + 0xf8,param_2 + 0xf8);
  FUN_148c7ba64(param_1 + 0x108,param_2 + 0x108);
  *(undefined1 *)(param_1 + 0x118) = *(undefined1 *)(param_2 + 0x118);
  return param_1;
}



// FUNCTION 148c7ba64 FUN_148c7ba64 body=95 status=ok
// SIG undefined FUN_148c7ba64(void)

undefined8 * FUN_148c7ba64(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145bdcd3c(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c7bac4(param_1,iVar1);
      FUN_148c7bb33(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c7bac4 FUN_148c7bac4 body=111 status=ok
// SIG undefined FUN_148c7bac4(void)

void FUN_148c7bac4(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c7bb33 FUN_148c7bb33 body=52 status=ok
// SIG undefined FUN_148c7bb33(void)

void FUN_148c7bb33(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c7bb68(param_1,param_2);
    param_1 = param_1 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return;
}



// FUNCTION 148c7bb68 FUN_148c7bb68 body=226 status=ok
// SIG undefined FUN_148c7bb68(void)

undefined1 * FUN_148c7bb68(undefined1 *param_1,undefined1 *param_2)

{
  longlong *plVar1;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x38] = param_2[0x38];
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x40] = param_2[0x40];
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x48] = param_2[0x48];
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  plVar1 = *(longlong **)(param_2 + 0x50);
  *(longlong **)(param_1 + 0x50) = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  plVar1 = *(longlong **)(param_2 + 0x60);
  *(longlong **)(param_1 + 0x60) = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  return param_1;
}



// FUNCTION 148c7bc4c FUN_148c7bc4c body=55 status=ok
// SIG undefined FUN_148c7bc4c(void)

void FUN_148c7bc4c(undefined8 param_1,undefined8 *param_2)

{
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140056680(param_2,&DAT_149dfb77a);
  FUN_140056680(param_2 + 2,&DAT_149dfb77a);
  return;
}



// FUNCTION 148c7bc84 FUN_148c7bc84 body=48 status=ok
// SIG undefined FUN_148c7bc84(void)

void FUN_148c7bc84(undefined8 param_1,longlong param_2)

{
  FUN_140056680(param_2,&DAT_149dfb77a);
  FUN_140056680(param_2 + 0x10,&DAT_149dfb77a);
  return;
}



// FUNCTION 148c7bcb4 FUN_148c7bcb4 body=47 status=ok
// SIG undefined FUN_148c7bcb4(void)

void FUN_148c7bcb4(undefined8 param_1,longlong *param_2)

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



// FUNCTION 148c7bcfa FUN_148c7bcfa body=67 status=ok
// SIG undefined FUN_148c7bcfa(void)

undefined1 FUN_148c7bcfa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 148c7bd66 FUN_148c7bd66 body=59 status=ok
// SIG undefined FUN_148c7bd66(void)

undefined8 FUN_148c7bd66(longlong *param_1)

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



// FUNCTION 148c7be04 FUN_148c7be04 body=51 status=ok
// SIG undefined FUN_148c7be04(void)

void FUN_148c7be04(longlong *param_1)

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



// FUNCTION 148c7be38 FUN_148c7be38 body=37 status=ok
// SIG undefined FUN_148c7be38(void)

void FUN_148c7be38(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x608);
  FUN_145954194(param_2);
  return;
}



// FUNCTION 148c7be8a FUN_148c7be8a body=63 status=ok
// SIG undefined FUN_148c7be8a(void)

undefined1 FUN_148c7be8a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c7bfb4(param_2,param_3);
    param_3 = param_3 + 0x608;
    param_2 = param_2 + 0x608;
  }
  return 1;
}



// FUNCTION 148c7bef2 FUN_148c7bef2 body=59 status=ok
// SIG undefined FUN_148c7bef2(void)

undefined8 FUN_148c7bef2(longlong *param_1)

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



// FUNCTION 148c7bf3e FUN_148c7bf3e body=40 status=ok
// SIG undefined FUN_148c7bf3e(void)

void FUN_148c7bf3e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x608) == '\x01') {
    FUN_1458ec81e(param_2);
    *(undefined1 *)(param_2 + 0x608) = 0;
  }
  return;
}



// FUNCTION 148c7bfb4 FUN_148c7bfb4 body=2432 status=ok
// SIG undefined FUN_148c7bfb4(void)

longlong FUN_148c7bfb4(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  FUN_1489fb7d2();
  if (*(int *)(param_1 + 0xb4) != *(int *)(param_2 + 0xb4)) {
    *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(param_2 + 0xb0);
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
  }
  if (*(int *)(param_1 + 0xbc) != *(int *)(param_2 + 0xbc)) {
    *(undefined1 *)(param_1 + 0xb8) = *(undefined1 *)(param_2 + 0xb8);
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
  if (*(int *)(param_1 + 0xf8) != *(int *)(param_2 + 0xf8)) {
    FUN_144a787a6(param_1 + 0xe8,param_2 + 0xe8);
    *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0xf8);
  }
  if (*(int *)(param_1 + 0x110) != *(int *)(param_2 + 0x110)) {
    FUN_144a787a6(param_1 + 0x100,param_2 + 0x100);
    *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_2 + 0x110);
  }
  if (*(int *)(param_1 + 0x128) != *(int *)(param_2 + 0x128)) {
    FUN_144a787a6(param_1 + 0x118,param_2 + 0x118);
    *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_2 + 0x128);
  }
  if (*(int *)(param_1 + 0x140) != *(int *)(param_2 + 0x140)) {
    FUN_144a787a6(param_1 + 0x130,param_2 + 0x130);
    *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_2 + 0x140);
  }
  if (*(int *)(param_1 + 0x158) != *(int *)(param_2 + 0x158)) {
    FUN_144a787a6(param_1 + 0x148,param_2 + 0x148);
    *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_2 + 0x158);
  }
  if (*(int *)(param_1 + 0x170) != *(int *)(param_2 + 0x170)) {
    FUN_144a787a6(param_1 + 0x160,param_2 + 0x160);
    *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_2 + 0x170);
  }
  if (*(int *)(param_1 + 0x188) != *(int *)(param_2 + 0x188)) {
    FUN_144a787a6(param_1 + 0x178,param_2 + 0x178);
    *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_2 + 0x188);
  }
  FUN_140ae1244(param_1 + 400,param_2 + 400);
  if (*(int *)(param_1 + 0x1ac) != *(int *)(param_2 + 0x1ac)) {
    *(undefined1 *)(param_1 + 0x1a8) = *(undefined1 *)(param_2 + 0x1a8);
    *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_2 + 0x1ac);
  }
  if (*(int *)(param_1 + 0x1b4) != *(int *)(param_2 + 0x1b4)) {
    *(undefined1 *)(param_1 + 0x1b0) = *(undefined1 *)(param_2 + 0x1b0);
    *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(param_2 + 0x1b4);
  }
  FUN_148c7c934(param_1 + 0x1b8,param_2 + 0x1b8);
  if (*(int *)(param_1 + 0x234) != *(int *)(param_2 + 0x234)) {
    *(undefined1 *)(param_1 + 0x230) = *(undefined1 *)(param_2 + 0x230);
    *(undefined4 *)(param_1 + 0x234) = *(undefined4 *)(param_2 + 0x234);
  }
  if (*(int *)(param_1 + 0x248) != *(int *)(param_2 + 0x248)) {
    FUN_144a787a6(param_1 + 0x238,param_2 + 0x238);
    *(undefined4 *)(param_1 + 0x248) = *(undefined4 *)(param_2 + 0x248);
  }
  if (*(int *)(param_1 + 0x260) != *(int *)(param_2 + 0x260)) {
    FUN_144a787a6(param_1 + 0x250,param_2 + 0x250);
    *(undefined4 *)(param_1 + 0x260) = *(undefined4 *)(param_2 + 0x260);
  }
  if (*(int *)(param_1 + 0x278) != *(int *)(param_2 + 0x278)) {
    FUN_144a787a6(param_1 + 0x268,param_2 + 0x268);
    *(undefined4 *)(param_1 + 0x278) = *(undefined4 *)(param_2 + 0x278);
  }
  if (*(int *)(param_1 + 0x290) != *(int *)(param_2 + 0x290)) {
    FUN_144a787a6(param_1 + 0x280,param_2 + 0x280);
    *(undefined4 *)(param_1 + 0x290) = *(undefined4 *)(param_2 + 0x290);
  }
  if (*(int *)(param_1 + 0x2a8) != *(int *)(param_2 + 0x2a8)) {
    FUN_144a787a6(param_1 + 0x298,param_2 + 0x298);
    *(undefined4 *)(param_1 + 0x2a8) = *(undefined4 *)(param_2 + 0x2a8);
  }
  if (*(int *)(param_1 + 0x2c0) != *(int *)(param_2 + 0x2c0)) {
    FUN_144a787a6(param_1 + 0x2b0,param_2 + 0x2b0);
    *(undefined4 *)(param_1 + 0x2c0) = *(undefined4 *)(param_2 + 0x2c0);
  }
  if (*(int *)(param_1 + 0x2d8) != *(int *)(param_2 + 0x2d8)) {
    FUN_144a787a6(param_1 + 0x2c8,param_2 + 0x2c8);
    *(undefined4 *)(param_1 + 0x2d8) = *(undefined4 *)(param_2 + 0x2d8);
  }
  if (*(int *)(param_1 + 0x2f0) != *(int *)(param_2 + 0x2f0)) {
    FUN_144a787a6(param_1 + 0x2e0,param_2 + 0x2e0);
    *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(param_2 + 0x2f0);
  }
  if (*(int *)(param_1 + 0x308) != *(int *)(param_2 + 0x308)) {
    FUN_144a787a6(param_1 + 0x2f8,param_2 + 0x2f8);
    *(undefined4 *)(param_1 + 0x308) = *(undefined4 *)(param_2 + 0x308);
  }
  if (*(int *)(param_1 + 0x314) != *(int *)(param_2 + 0x314)) {
    *(undefined1 *)(param_1 + 0x310) = *(undefined1 *)(param_2 + 0x310);
    *(undefined4 *)(param_1 + 0x314) = *(undefined4 *)(param_2 + 0x314);
  }
  if (*(int *)(param_1 + 0x328) != *(int *)(param_2 + 0x328)) {
    FUN_144a787a6(param_1 + 0x318,param_2 + 0x318);
    *(undefined4 *)(param_1 + 0x328) = *(undefined4 *)(param_2 + 0x328);
  }
  if (*(int *)(param_1 + 0x334) != *(int *)(param_2 + 0x334)) {
    *(undefined1 *)(param_1 + 0x330) = *(undefined1 *)(param_2 + 0x330);
    *(undefined4 *)(param_1 + 0x334) = *(undefined4 *)(param_2 + 0x334);
  }
  if (*(int *)(param_1 + 0x348) != *(int *)(param_2 + 0x348) || *(int *)(param_1 + 0x348) == 0) {
    *(int *)(param_1 + 0x348) = *(int *)(param_2 + 0x348);
    FUN_148c7c99e(param_1 + 0x338,param_2 + 0x338);
  }
  if (*(int *)(param_1 + 0x354) != *(int *)(param_2 + 0x354)) {
    *(undefined1 *)(param_1 + 0x350) = *(undefined1 *)(param_2 + 0x350);
    *(undefined4 *)(param_1 + 0x354) = *(undefined4 *)(param_2 + 0x354);
  }
  if (*(int *)(param_1 + 0x368) != *(int *)(param_2 + 0x368) || *(int *)(param_1 + 0x368) == 0) {
    *(int *)(param_1 + 0x368) = *(int *)(param_2 + 0x368);
    FUN_148c7c99e(param_1 + 0x358,param_2 + 0x358);
  }
  if (*(int *)(param_1 + 0x374) != *(int *)(param_2 + 0x374)) {
    *(undefined1 *)(param_1 + 0x370) = *(undefined1 *)(param_2 + 0x370);
    *(undefined4 *)(param_1 + 0x374) = *(undefined4 *)(param_2 + 0x374);
  }
  if (*(int *)(param_1 + 0x388) != *(int *)(param_2 + 0x388) || *(int *)(param_1 + 0x388) == 0) {
    *(int *)(param_1 + 0x388) = *(int *)(param_2 + 0x388);
    FUN_148c7c99e(param_1 + 0x378,param_2 + 0x378);
  }
  if (*(int *)(param_1 + 0x394) != *(int *)(param_2 + 0x394)) {
    *(undefined1 *)(param_1 + 0x390) = *(undefined1 *)(param_2 + 0x390);
    *(undefined4 *)(param_1 + 0x394) = *(undefined4 *)(param_2 + 0x394);
  }
  if (*(int *)(param_1 + 0x3a8) != *(int *)(param_2 + 0x3a8) || *(int *)(param_1 + 0x3a8) == 0) {
    *(int *)(param_1 + 0x3a8) = *(int *)(param_2 + 0x3a8);
    FUN_148c7c99e(param_1 + 0x398,param_2 + 0x398);
  }
  if (*(int *)(param_1 + 0x3b4) != *(int *)(param_2 + 0x3b4)) {
    *(undefined1 *)(param_1 + 0x3b0) = *(undefined1 *)(param_2 + 0x3b0);
    *(undefined4 *)(param_1 + 0x3b4) = *(undefined4 *)(param_2 + 0x3b4);
  }
  if (*(int *)(param_1 + 0x3c8) != *(int *)(param_2 + 0x3c8) || *(int *)(param_1 + 0x3c8) == 0) {
    *(int *)(param_1 + 0x3c8) = *(int *)(param_2 + 0x3c8);
    FUN_148c7c99e(param_1 + 0x3b8,param_2 + 0x3b8);
  }
  if (*(int *)(param_1 + 0x3d4) != *(int *)(param_2 + 0x3d4)) {
    *(undefined1 *)(param_1 + 0x3d0) = *(undefined1 *)(param_2 + 0x3d0);
    *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_2 + 0x3d4);
  }
  FUN_144a787a6(param_1 + 0x3d8,param_2 + 0x3d8);
  FUN_144a787a6(param_1 + 1000,param_2 + 1000);
  *(undefined2 *)(param_1 + 0x3f8) = *(undefined2 *)(param_2 + 0x3f8);
  if (*(int *)(param_1 + 0x410) != *(int *)(param_2 + 0x410)) {
    FUN_144a787a6(param_1 + 0x400,param_2 + 0x400);
    *(undefined4 *)(param_1 + 0x410) = *(undefined4 *)(param_2 + 0x410);
  }
  if (*(int *)(param_1 + 0x428) != *(int *)(param_2 + 0x428)) {
    FUN_144a787a6(param_1 + 0x418,param_2 + 0x418);
    *(undefined4 *)(param_1 + 0x428) = *(undefined4 *)(param_2 + 0x428);
  }
  FUN_148c7c934(param_1 + 0x430,param_2 + 0x430);
  if (*(int *)(param_1 + 0x4ac) != *(int *)(param_2 + 0x4ac)) {
    *(undefined4 *)(param_1 + 0x4a8) = *(undefined4 *)(param_2 + 0x4a8);
    *(undefined4 *)(param_1 + 0x4ac) = *(undefined4 *)(param_2 + 0x4ac);
  }
  if (*(int *)(param_1 + 0x4c0) != *(int *)(param_2 + 0x4c0)) {
    FUN_144a787a6(param_1 + 0x4b0,param_2 + 0x4b0);
    *(undefined4 *)(param_1 + 0x4c0) = *(undefined4 *)(param_2 + 0x4c0);
  }
  if (*(int *)(param_1 + 0x4cc) != *(int *)(param_2 + 0x4cc)) {
    *(undefined1 *)(param_1 + 0x4c8) = *(undefined1 *)(param_2 + 0x4c8);
    *(undefined4 *)(param_1 + 0x4cc) = *(undefined4 *)(param_2 + 0x4cc);
  }
  if (*(int *)(param_1 + 0x4e0) != *(int *)(param_2 + 0x4e0)) {
    FUN_144a787a6(param_1 + 0x4d0,param_2 + 0x4d0);
    *(undefined4 *)(param_1 + 0x4e0) = *(undefined4 *)(param_2 + 0x4e0);
  }
  if (*(int *)(param_1 + 0x4ec) != *(int *)(param_2 + 0x4ec)) {
    *(undefined1 *)(param_1 + 0x4e8) = *(undefined1 *)(param_2 + 0x4e8);
    *(undefined4 *)(param_1 + 0x4ec) = *(undefined4 *)(param_2 + 0x4ec);
  }
  FUN_148c7c934(param_1 + 0x4f0,param_2 + 0x4f0);
  if (*(int *)(param_1 + 0x56c) != *(int *)(param_2 + 0x56c)) {
    *(undefined1 *)(param_1 + 0x568) = *(undefined1 *)(param_2 + 0x568);
    *(undefined4 *)(param_1 + 0x56c) = *(undefined4 *)(param_2 + 0x56c);
  }
  if (*(int *)(param_1 + 0x580) != *(int *)(param_2 + 0x580)) {
    FUN_144a787a6(param_1 + 0x570,param_2 + 0x570);
    *(undefined4 *)(param_1 + 0x580) = *(undefined4 *)(param_2 + 0x580);
  }
  if (*(int *)(param_1 + 0x58c) != *(int *)(param_2 + 0x58c)) {
    *(undefined1 *)(param_1 + 0x588) = *(undefined1 *)(param_2 + 0x588);
    *(undefined4 *)(param_1 + 0x58c) = *(undefined4 *)(param_2 + 0x58c);
  }
  if (*(int *)(param_1 + 0x594) != *(int *)(param_2 + 0x594)) {
    *(undefined1 *)(param_1 + 0x590) = *(undefined1 *)(param_2 + 0x590);
    *(undefined4 *)(param_1 + 0x594) = *(undefined4 *)(param_2 + 0x594);
  }
  if (*(int *)(param_1 + 0x59c) != *(int *)(param_2 + 0x59c)) {
    *(undefined1 *)(param_1 + 0x598) = *(undefined1 *)(param_2 + 0x598);
    *(undefined4 *)(param_1 + 0x59c) = *(undefined4 *)(param_2 + 0x59c);
  }
  *(undefined1 *)(param_1 + 0x5a0) = *(undefined1 *)(param_2 + 0x5a0);
  if ((*(int *)(param_1 + 0x5b8) == 0) || (*(int *)(param_1 + 0x5b8) != *(int *)(param_2 + 0x5b8)))
  {
    *(int *)(param_1 + 0x5b8) = *(int *)(param_2 + 0x5b8);
    FUN_148c7caa0(param_1 + 0x5a8,param_2 + 0x5a8);
  }
  if (*(int *)(param_1 + 0x5c4) != *(int *)(param_2 + 0x5c4)) {
    *(undefined1 *)(param_1 + 0x5c0) = *(undefined1 *)(param_2 + 0x5c0);
    *(undefined4 *)(param_1 + 0x5c4) = *(undefined4 *)(param_2 + 0x5c4);
  }
  *(undefined4 *)(param_1 + 0x5e8) = *(undefined4 *)(param_2 + 0x5e8);
  uVar1 = *(undefined4 *)(param_2 + 0x5c8);
  uVar2 = *(undefined4 *)(param_2 + 0x5cc);
  uVar3 = *(undefined4 *)(param_2 + 0x5d0);
  uVar4 = *(undefined4 *)(param_2 + 0x5d4);
  uVar5 = *(undefined4 *)(param_2 + 0x5dc);
  uVar6 = *(undefined4 *)(param_2 + 0x5e0);
  uVar7 = *(undefined4 *)(param_2 + 0x5e4);
  *(undefined4 *)(param_1 + 0x5d8) = *(undefined4 *)(param_2 + 0x5d8);
  *(undefined4 *)(param_1 + 0x5dc) = uVar5;
  *(undefined4 *)(param_1 + 0x5e0) = uVar6;
  *(undefined4 *)(param_1 + 0x5e4) = uVar7;
  *(undefined4 *)(param_1 + 0x5c8) = uVar1;
  *(undefined4 *)(param_1 + 0x5cc) = uVar2;
  *(undefined4 *)(param_1 + 0x5d0) = uVar3;
  *(undefined4 *)(param_1 + 0x5d4) = uVar4;
  FUN_144a787a6(param_1 + 0x5f0,param_2 + 0x5f0);
  *(undefined4 *)(param_1 + 0x600) = *(undefined4 *)(param_2 + 0x600);
  return param_1;
}



// FUNCTION 148c7c934 FUN_148c7c934 body=106 status=ok
// SIG undefined FUN_148c7c934(void)

void FUN_148c7c934(longlong param_1,longlong param_2)

{
  if (*(int *)(param_1 + 0x70) != *(int *)(param_2 + 0x70)) {
    FUN_144a787a6();
    FUN_144a787a6(param_1 + 0x10,param_2 + 0x10);
    FUN_144a787a6(param_1 + 0x20,param_2 + 0x20);
    FUN_144a787a6(param_1 + 0x30,param_2 + 0x30);
    FUN_144a787a6(param_1 + 0x40,param_2 + 0x40);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  }
  return;
}



// FUNCTION 148c7c99e FUN_148c7c99e body=93 status=ok
// SIG undefined FUN_148c7c99e(void)

undefined8 * FUN_148c7c99e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140e631a3(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c7c9fc(param_1,iVar1);
      FUN_148c7ca6b(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c7c9fc FUN_148c7c9fc body=111 status=ok
// SIG undefined FUN_148c7c9fc(void)

void FUN_148c7c9fc(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c7ca6b FUN_148c7ca6b body=52 status=ok
// SIG undefined FUN_148c7ca6b(void)

void FUN_148c7ca6b(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c6b928(param_1,param_2);
    param_1 = param_1 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return;
}



// FUNCTION 148c7caa0 FUN_148c7caa0 body=93 status=ok
// SIG undefined FUN_148c7caa0(void)

undefined8 * FUN_148c7caa0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1413215d9(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c7cafe(param_1,iVar1);
      FUN_148c7cb60(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c7cafe FUN_148c7cafe body=98 status=ok
// SIG undefined FUN_148c7cafe(void)

void FUN_148c7cafe(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c7cb60 FUN_148c7cb60 body=52 status=ok
// SIG undefined FUN_148c7cb60(void)

void FUN_148c7cb60(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c7cb94(param_1,param_2);
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return;
}



// FUNCTION 148c7cb94 FUN_148c7cb94 body=156 status=ok
// SIG undefined FUN_148c7cb94(void)

undefined8 * FUN_148c7cb94(undefined8 *param_1,undefined8 *param_2)

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
  return param_1;
}



// FUNCTION 148c7cc32 FUN_148c7cc32 body=48 status=ok
// SIG undefined FUN_148c7cc32(void)

void FUN_148c7cc32(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x608);
  FUN_145954194(param_2);
  *param_2 = &PTR_FUN_14b8ad310;
  return;
}



// FUNCTION 148c7cc62 FUN_148c7cc62 body=32 status=ok
// SIG undefined FUN_148c7cc62(void)

void FUN_148c7cc62(undefined8 param_1,undefined8 *param_2)

{
  FUN_145954194(param_2);
  *param_2 = &PTR_FUN_14b8ad310;
  return;
}



// FUNCTION 148c7cca6 FUN_148c7cca6 body=63 status=ok
// SIG undefined FUN_148c7cca6(void)

undefined1 FUN_148c7cca6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c7bfb4(param_2,param_3);
    param_3 = param_3 + 0x608;
    param_2 = param_2 + 0x608;
  }
  return 1;
}



// FUNCTION 148c7cd0e FUN_148c7cd0e body=59 status=ok
// SIG undefined FUN_148c7cd0e(void)

undefined8 FUN_148c7cd0e(longlong *param_1)

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



// FUNCTION 148c7cd5a FUN_148c7cd5a body=40 status=ok
// SIG undefined FUN_148c7cd5a(void)

void FUN_148c7cd5a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x608) == '\x01') {
    FUN_1458ec81e(param_2);
    *(undefined1 *)(param_2 + 0x608) = 0;
  }
  return;
}



// FUNCTION 148c7ce26 FUN_148c7ce26 body=54 status=ok
// SIG undefined FUN_148c7ce26(void)

undefined1 FUN_148c7ce26(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c7cf3a(param_2,param_3);
    param_3 = param_3 + 0x78;
    param_2 = param_2 + 0x78;
  }
  return 1;
}



// FUNCTION 148c7ce84 FUN_148c7ce84 body=59 status=ok
// SIG undefined FUN_148c7ce84(void)

undefined8 FUN_148c7ce84(longlong *param_1)

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



// FUNCTION 148c7ceca FUN_148c7ceca body=34 status=ok
// SIG undefined FUN_148c7ceca(void)

void FUN_148c7ceca(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_14587bf12(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 148c7cf3a FUN_148c7cf3a body=155 status=ok
// SIG undefined FUN_148c7cf3a(void)

longlong FUN_148c7cf3a(longlong param_1,longlong param_2)

{
  if (*(int *)(param_1 + 0x10) != *(int *)(param_2 + 0x10)) {
    FUN_144a787a6(param_1,param_2);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  }
  if (*(int *)(param_1 + 0x28) != *(int *)(param_2 + 0x28)) {
    FUN_144a787a6(param_1 + 0x18,param_2 + 0x18);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  }
  if (*(int *)(param_1 + 0x40) != *(int *)(param_2 + 0x40)) {
    FUN_144a787a6(param_1 + 0x30,param_2 + 0x30);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  }
  if (*(int *)(param_1 + 0x58) != *(int *)(param_2 + 0x58)) {
    FUN_144a787a6(param_1 + 0x48,param_2 + 0x48);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  }
  if (*(int *)(param_1 + 0x70) != *(int *)(param_2 + 0x70)) {
    FUN_144a787a6(param_1 + 0x60,param_2 + 0x60);
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  }
  return param_1;
}



// FUNCTION 148c7cfd6 FUN_148c7cfd6 body=37 status=ok
// SIG undefined FUN_148c7cfd6(void)

void FUN_148c7cfd6(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x7f8);
  FUN_14613f41a(param_2);
  return;
}



// FUNCTION 148c7d028 FUN_148c7d028 body=63 status=ok
// SIG undefined FUN_148c7d028(void)

undefined1 FUN_148c7d028(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c7d18c(param_2,param_3);
    param_3 = param_3 + 0x7f8;
    param_2 = param_2 + 0x7f8;
  }
  return 1;
}



// FUNCTION 148c7d090 FUN_148c7d090 body=59 status=ok
// SIG undefined FUN_148c7d090(void)

undefined8 FUN_148c7d090(longlong *param_1)

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



// FUNCTION 148c7d0dc FUN_148c7d0dc body=40 status=ok
// SIG undefined FUN_148c7d0dc(void)

void FUN_148c7d0dc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x7f8) == '\x01') {
    FUN_145ec9cf8(param_2);
    *(undefined1 *)(param_2 + 0x7f8) = 0;
  }
  return;
}



// FUNCTION 148c7d152 FUN_148c7d152 body=57 status=ok
// SIG undefined FUN_148c7d152(void)

void FUN_148c7d152(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb9650 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb9650 = FUN_140002ddd(FUN_1466055e5,uVar1,L"OakWidgetData_ItemInspect");
  }
  return;
}



// FUNCTION 148c7d18c FUN_148c7d18c body=421 status=ok
// SIG undefined FUN_148c7d18c(void)

longlong FUN_148c7d18c(longlong param_1,longlong param_2)

{
  FUN_148c7bfb4();
  if (*(int *)(param_1 + 0x618) != *(int *)(param_2 + 0x618)) {
    FUN_144a787a6(param_1 + 0x608,param_2 + 0x608);
    *(undefined4 *)(param_1 + 0x618) = *(undefined4 *)(param_2 + 0x618);
  }
  if (*(int *)(param_1 + 0x698) != *(int *)(param_2 + 0x698)) {
    FUN_148c7cf3a(param_1 + 0x620,param_2 + 0x620);
    *(undefined4 *)(param_1 + 0x698) = *(undefined4 *)(param_2 + 0x698);
  }
  if (*(int *)(param_1 + 0x708) != *(int *)(param_2 + 0x708)) {
    FUN_148c5648a(param_1 + 0x6a0,param_2 + 0x6a0);
    *(undefined4 *)(param_1 + 0x708) = *(undefined4 *)(param_2 + 0x708);
  }
  if (*(int *)(param_1 + 0x720) != *(int *)(param_2 + 0x720)) {
    FUN_144a787a6(param_1 + 0x710,param_2 + 0x710);
    *(undefined4 *)(param_1 + 0x720) = *(undefined4 *)(param_2 + 0x720);
  }
  if (*(int *)(param_1 + 0x738) != *(int *)(param_2 + 0x738)) {
    FUN_144a787a6(param_1 + 0x728,param_2 + 0x728);
    *(undefined4 *)(param_1 + 0x738) = *(undefined4 *)(param_2 + 0x738);
  }
  if (*(int *)(param_1 + 0x750) != *(int *)(param_2 + 0x750)) {
    FUN_144a787a6(param_1 + 0x740,param_2 + 0x740);
    *(undefined4 *)(param_1 + 0x750) = *(undefined4 *)(param_2 + 0x750);
  }
  FUN_148c7c934(param_1 + 0x758,param_2 + 0x758);
  if (*(int *)(param_1 + 0x7e0) != *(int *)(param_2 + 0x7e0)) {
    FUN_144a787a6(param_1 + 2000,param_2 + 2000);
    *(undefined4 *)(param_1 + 0x7e0) = *(undefined4 *)(param_2 + 0x7e0);
  }
  if (*(int *)(param_1 + 0x7ec) != *(int *)(param_2 + 0x7ec)) {
    *(undefined1 *)(param_1 + 0x7e8) = *(undefined1 *)(param_2 + 0x7e8);
    *(undefined4 *)(param_1 + 0x7ec) = *(undefined4 *)(param_2 + 0x7ec);
  }
  if (*(int *)(param_1 + 0x7f4) != *(int *)(param_2 + 0x7f4)) {
    *(undefined1 *)(param_1 + 0x7f0) = *(undefined1 *)(param_2 + 0x7f0);
    *(undefined4 *)(param_1 + 0x7f4) = *(undefined4 *)(param_2 + 0x7f4);
  }
  return param_1;
}



// FUNCTION 148c7d332 FUN_148c7d332 body=37 status=ok
// SIG undefined FUN_148c7d332(void)

void FUN_148c7d332(undefined8 param_1,void *param_2)

{
  memset(param_2,0,200);
  FUN_145d5db04(param_2);
  return;
}



// FUNCTION 148c7d384 FUN_148c7d384 body=63 status=ok
// SIG undefined FUN_148c7d384(void)

undefined1 FUN_148c7d384(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c7d502(param_2,param_3);
    param_3 = param_3 + 200;
    param_2 = param_2 + 200;
  }
  return 1;
}



// FUNCTION 148c7d3ec FUN_148c7d3ec body=59 status=ok
// SIG undefined FUN_148c7d3ec(void)

undefined8 FUN_148c7d3ec(longlong *param_1)

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



// FUNCTION 148c7d438 FUN_148c7d438 body=66 status=ok
// SIG undefined FUN_148c7d438(void)

void FUN_148c7d438(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x19) == '\x01') {
    *param_2 = &PTR_FUN_14b8ad7e0;
    if ((longlong *)param_2[0x17] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_2[0x17] + 0x10))();
    }
    FUN_140fe7f26(param_2);
    *(undefined1 *)(param_2 + 0x19) = 0;
  }
  return;
}



// FUNCTION 148c7d4c8 FUN_148c7d4c8 body=57 status=ok
// SIG undefined FUN_148c7d4c8(void)

void FUN_148c7d4c8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb9668 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb9668 = FUN_140002ddd(FUN_146605677,uVar1,L"OakWidgetData_KeyBindHelper");
  }
  return;
}



// FUNCTION 148c7d502 FUN_148c7d502 body=130 status=ok
// SIG undefined FUN_148c7d502(void)

longlong FUN_148c7d502(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_1489fb7d2();
  if (*(int *)(param_1 + 0xb4) != *(int *)(param_2 + 0xb4)) {
    *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(param_2 + 0xb0);
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
  }
  plVar1 = *(longlong **)(param_2 + 0xb8);
  plVar2 = *(longlong **)(param_1 + 0xb8);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0xb8) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
  return param_1;
}



// FUNCTION 148c7d5ce FUN_148c7d5ce body=54 status=ok
// SIG undefined FUN_148c7d5ce(void)

undefined1 FUN_148c7d5ce(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c7d786(param_2,param_3);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 148c7d62c FUN_148c7d62c body=59 status=ok
// SIG undefined FUN_148c7d62c(void)

undefined8 FUN_148c7d62c(longlong *param_1)

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



// FUNCTION 148c7d672 FUN_148c7d672 body=34 status=ok
// SIG undefined FUN_148c7d672(void)

void FUN_148c7d672(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_148c7d71a(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 148c7d6e2 FUN_148c7d6e2 body=55 status=ok
// SIG undefined FUN_148c7d6e2(void)

longlong FUN_148c7d6e2(longlong param_1)

{
  FUN_144a5dc74();
  FUN_144a5dc74(param_1 + 0x10);
  FUN_144a5dc74(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  return param_1;
}



// FUNCTION 148c7d71a FUN_148c7d71a body=107 status=ok
// SIG undefined FUN_148c7d71a(void)

void FUN_148c7d71a(longlong *param_1)

{
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[4] + 0x10))();
  }
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x10))();
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148c7d77a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 148c7d786 FUN_148c7d786 body=207 status=ok
// SIG undefined FUN_148c7d786(void)

longlong * FUN_148c7d786(longlong *param_1,longlong *param_2)

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
  plVar1 = (longlong *)param_2[2];
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != plVar1) {
    param_1[2] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 3) = (int)param_2[3];
  plVar1 = (longlong *)param_2[4];
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != plVar1) {
    param_1[4] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 5) = (int)param_2[5];
  FUN_144a787a6(param_1 + 6,param_2 + 6);
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  FUN_144a787a6(param_1 + 10,param_2 + 10);
  return param_1;
}



// FUNCTION 148c7d856 FUN_148c7d856 body=37 status=ok
// SIG undefined FUN_148c7d856(void)

void FUN_148c7d856(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x220);
  FUN_145de9dd6(param_2);
  return;
}



// FUNCTION 148c7d8a8 FUN_148c7d8a8 body=63 status=ok
// SIG undefined FUN_148c7d8a8(void)

undefined1 FUN_148c7d8a8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c7da0c(param_2,param_3);
    param_3 = param_3 + 0x220;
    param_2 = param_2 + 0x220;
  }
  return 1;
}



// FUNCTION 148c7d910 FUN_148c7d910 body=59 status=ok
// SIG undefined FUN_148c7d910(void)

undefined8 FUN_148c7d910(longlong *param_1)

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



// FUNCTION 148c7d95c FUN_148c7d95c body=40 status=ok
// SIG undefined FUN_148c7d95c(void)

void FUN_148c7d95c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x220) == '\x01') {
    FUN_145cee3ea(param_2);
    *(undefined1 *)(param_2 + 0x220) = 0;
  }
  return;
}



// FUNCTION 148c7d9d2 FUN_148c7d9d2 body=57 status=ok
// SIG undefined FUN_148c7d9d2(void)

void FUN_148c7d9d2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb9738 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb9738 = FUN_140002ddd(FUN_14660579b,uVar1,L"OakWidgetData_LAN");
  }
  return;
}



// FUNCTION 148c7da0c FUN_148c7da0c body=172 status=ok
// SIG undefined FUN_148c7da0c(void)

longlong FUN_148c7da0c(longlong param_1,longlong param_2)

{
  FUN_1489fb7d2();
  FUN_144a787a6(param_1 + 0xb0,param_2 + 0xb0);
  FUN_148c7dab8(param_1 + 0xc0,param_2 + 0xc0);
  FUN_144a787a6(param_1 + 0xd0,param_2 + 0xd0);
  FUN_144a787a6(param_1 + 0xe0,param_2 + 0xe0);
  FUN_140bee9ec(param_1 + 0xf0,param_2 + 0xf0);
  FUN_1457fd360(param_1 + 0x100,param_2 + 0x100);
  FUN_1489fdc6a(param_1 + 0x180,param_2 + 0x180);
  *(undefined2 *)(param_1 + 0x218) = *(undefined2 *)(param_2 + 0x218);
  *(undefined1 *)(param_1 + 0x21a) = *(undefined1 *)(param_2 + 0x21a);
  return param_1;
}



// FUNCTION 148c7dab8 FUN_148c7dab8 body=95 status=ok
// SIG undefined FUN_148c7dab8(void)

undefined8 * FUN_148c7dab8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145cee4a4(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c7db18(param_1,iVar1);
      FUN_148c7db8b(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c7db18 FUN_148c7db18 body=115 status=ok
// SIG undefined FUN_148c7db18(void)

void FUN_148c7db18(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x60,8);
    iVar2 = (int)(uVar1 / 0x60);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x60,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c7db8b FUN_148c7db8b body=52 status=ok
// SIG undefined FUN_148c7db8b(void)

void FUN_148c7db8b(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c7dbc0(param_1,param_2);
    param_1 = param_1 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return;
}



// FUNCTION 148c7dbc0 FUN_148c7dbc0 body=313 status=ok
// SIG undefined FUN_148c7dbc0(void)

longlong * FUN_148c7dbc0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  void *pvVar3;
  
  plVar2 = (longlong *)*param_2;
  *param_1 = (longlong)plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  plVar2 = (longlong *)param_2[2];
  param_1[2] = (longlong)plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(int *)(param_1 + 3) = (int)param_2[3];
  plVar2 = (longlong *)param_2[4];
  param_1[4] = (longlong)plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(int *)(param_1 + 5) = (int)param_2[5];
  param_1[6] = 0;
  iVar1 = (int)param_2[7];
  pvVar3 = (void *)param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 6,iVar1,0);
    memcpy((void *)param_1[6],pvVar3,(longlong)iVar1 * 2);
  }
  param_1[8] = 0;
  iVar1 = (int)param_2[9];
  pvVar3 = (void *)param_2[8];
  *(int *)(param_1 + 9) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar1,0);
    memcpy((void *)param_1[8],pvVar3,(longlong)iVar1 * 2);
  }
  param_1[10] = 0;
  iVar1 = (int)param_2[0xb];
  pvVar3 = (void *)param_2[10];
  *(int *)(param_1 + 0xb) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 10,iVar1,0);
    memcpy((void *)param_1[10],pvVar3,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 148c7dcfa FUN_148c7dcfa body=76 status=ok
// SIG undefined FUN_148c7dcfa(void)

void FUN_148c7dcfa(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,200);
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b8adc60;
  *(undefined1 *)(param_2 + 0x16) = 1;
  FUN_140056680(param_2 + 0x17,L"LegalSplashTextPC");
  return;
}



// FUNCTION 148c7dd46 FUN_148c7dd46 body=60 status=ok
// SIG undefined FUN_148c7dd46(void)

void FUN_148c7dd46(undefined8 param_1,undefined8 *param_2)

{
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b8adc60;
  *(undefined1 *)(param_2 + 0x16) = 1;
  FUN_140056680(param_2 + 0x17,L"LegalSplashTextPC");
  return;
}



// FUNCTION 148c7dda6 FUN_148c7dda6 body=97 status=ok
// SIG undefined FUN_148c7dda6(void)

undefined1 FUN_148c7dda6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1489fb7d2(param_2,param_3);
    *(undefined1 *)(param_2 + 0xb0) = *(undefined1 *)(param_3 + 0xb0);
    FUN_144a787a6(param_2 + 0xb8,param_3 + 0xb8);
    param_2 = param_2 + 200;
    param_3 = param_3 + 200;
  }
  return 1;
}



// FUNCTION 148c7de30 FUN_148c7de30 body=59 status=ok
// SIG undefined FUN_148c7de30(void)

undefined8 FUN_148c7de30(longlong *param_1)

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



// FUNCTION 148c7de7c FUN_148c7de7c body=65 status=ok
// SIG undefined FUN_148c7de7c(void)

void FUN_148c7de7c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x19) == '\x01') {
    *param_2 = &PTR_FUN_14b8adc60;
    if (param_2[0x17] != 0) {
      FUN_1400020a8();
    }
    FUN_140fe7f26(param_2);
    *(undefined1 *)(param_2 + 0x19) = 0;
  }
  return;
}



// FUNCTION 148c7df0c FUN_148c7df0c body=57 status=ok
// SIG undefined FUN_148c7df0c(void)

void FUN_148c7df0c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb9750 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb9750 = FUN_140002ddd(FUN_14660582d,uVar1,L"OakWidgetData_LegalSplash");
  }
  return;
}



// FUNCTION 148c7df60 FUN_148c7df60 body=48 status=ok
// SIG undefined FUN_148c7df60(void)

void FUN_148c7df60(undefined8 param_1,longlong *param_2)

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



// FUNCTION 148c7dfa6 FUN_148c7dfa6 body=54 status=ok
// SIG undefined FUN_148c7dfa6(void)

undefined1 FUN_148c7dfa6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c7e0cc(param_2,param_3);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 148c7e004 FUN_148c7e004 body=59 status=ok
// SIG undefined FUN_148c7e004(void)

undefined8 FUN_148c7e004(longlong *param_1)

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



// FUNCTION 148c7e04a FUN_148c7e04a body=52 status=ok
// SIG undefined FUN_148c7e04a(void)

void FUN_148c7e04a(undefined8 param_1,longlong *param_2)

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



// FUNCTION 148c7e0cc FUN_148c7e0cc body=77 status=ok
// SIG undefined FUN_148c7e0cc(void)

longlong FUN_148c7e0cc(longlong param_1,longlong param_2)

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



// FUNCTION 148c7e16a FUN_148c7e16a body=54 status=ok
// SIG undefined FUN_148c7e16a(void)

undefined1 FUN_148c7e16a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c7e27c(param_2,param_3);
    param_3 = param_3 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return 1;
}



// FUNCTION 148c7e1c8 FUN_148c7e1c8 body=59 status=ok
// SIG undefined FUN_148c7e1c8(void)

undefined8 FUN_148c7e1c8(longlong *param_1)

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



// FUNCTION 148c7e20e FUN_148c7e20e body=32 status=ok
// SIG undefined FUN_148c7e20e(void)

void FUN_148c7e20e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_14134a3b4(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 148c7e27c FUN_148c7e27c body=226 status=ok
// SIG undefined FUN_148c7e27c(void)

longlong FUN_148c7e27c(longlong param_1,longlong param_2)

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
  FUN_148c7e35e(param_1 + 0x40,param_2 + 0x40);
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_2 + 0x50);
  FUN_144a787a6(param_1 + 0x58,param_2 + 0x58);
  return param_1;
}



// FUNCTION 148c7e35e FUN_148c7e35e body=95 status=ok
// SIG undefined FUN_148c7e35e(void)

undefined8 * FUN_148c7e35e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145e3e385(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c7e3be(param_1,iVar1);
      FUN_148c7e420(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c7e3be FUN_148c7e3be body=98 status=ok
// SIG undefined FUN_148c7e3be(void)

void FUN_148c7e3be(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c7e420 FUN_148c7e420 body=52 status=ok
// SIG undefined FUN_148c7e420(void)

void FUN_148c7e420(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c7e454(param_1,param_2);
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return;
}



// FUNCTION 148c7e454 FUN_148c7e454 body=114 status=ok
// SIG undefined FUN_148c7e454(void)

undefined8 * FUN_148c7e454(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 148c7e4c8 FUN_148c7e4c8 body=55 status=ok
// SIG undefined FUN_148c7e4c8(void)

void FUN_148c7e4c8(undefined8 param_1,undefined8 *param_2)

{
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1400b22c2(param_2,&DAT_149e02088);
  FUN_1400b22c2(param_2 + 2,&DAT_149e02088);
  return;
}



// FUNCTION 148c7e500 FUN_148c7e500 body=48 status=ok
// SIG undefined FUN_148c7e500(void)

void FUN_148c7e500(undefined8 param_1,longlong param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  FUN_1400b22c2(param_2 + 0x10,&DAT_149e02088);
  return;
}



// FUNCTION 148c7e530 FUN_148c7e530 body=47 status=ok
// SIG undefined FUN_148c7e530(void)

void FUN_148c7e530(undefined8 param_1,longlong *param_2)

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



// FUNCTION 148c7e576 FUN_148c7e576 body=67 status=ok
// SIG undefined FUN_148c7e576(void)

undefined1 FUN_148c7e576(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 148c7e5e2 FUN_148c7e5e2 body=59 status=ok
// SIG undefined FUN_148c7e5e2(void)

undefined8 FUN_148c7e5e2(longlong *param_1)

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



// FUNCTION 148c7e680 FUN_148c7e680 body=51 status=ok
// SIG undefined FUN_148c7e680(void)

void FUN_148c7e680(longlong *param_1)

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



// FUNCTION 148c7e6b4 FUN_148c7e6b4 body=37 status=ok
// SIG undefined FUN_148c7e6b4(void)

void FUN_148c7e6b4(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x5b0);
  FUN_145e02ace(param_2);
  return;
}



// FUNCTION 148c7e706 FUN_148c7e706 body=63 status=ok
// SIG undefined FUN_148c7e706(void)

undefined1 FUN_148c7e706(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14407c614(param_2,param_3);
    param_3 = param_3 + 0x5b0;
    param_2 = param_2 + 0x5b0;
  }
  return 1;
}



// FUNCTION 148c7e76e FUN_148c7e76e body=59 status=ok
// SIG undefined FUN_148c7e76e(void)

undefined8 FUN_148c7e76e(longlong *param_1)

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



// FUNCTION 148c7e7ba FUN_148c7e7ba body=40 status=ok
// SIG undefined FUN_148c7e7ba(void)

void FUN_148c7e7ba(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x5b0) == '\x01') {
    FUN_145910e7a(param_2);
    *(undefined1 *)(param_2 + 0x5b0) = 0;
  }
  return;
}



// FUNCTION 148c7e830 FUN_148c7e830 body=93 status=ok
// SIG undefined FUN_148c7e830(void)

undefined8 * FUN_148c7e830(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145910ef2(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c7e88e(param_1,iVar1);
      FUN_148c7e8f0(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c7e88e FUN_148c7e88e body=98 status=ok
// SIG undefined FUN_148c7e88e(void)

void FUN_148c7e88e(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c7e8f0 FUN_148c7e8f0 body=52 status=ok
// SIG undefined FUN_148c7e8f0(void)

void FUN_148c7e8f0(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_146606406(param_1,param_2);
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return;
}



// FUNCTION 148c7e9f6 FUN_148c7e9f6 body=59 status=ok
// SIG undefined FUN_148c7e9f6(void)

undefined8 FUN_148c7e9f6(longlong *param_1)

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



// FUNCTION 148c7ea98 FUN_148c7ea98 body=55 status=ok
// SIG undefined FUN_148c7ea98(void)

void FUN_148c7ea98(undefined8 param_1,undefined8 *param_2)

{
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140056680(param_2,&DAT_149dfb77a);
  FUN_140056680(param_2 + 2,&DAT_149dfb77a);
  return;
}



// FUNCTION 148c7ead0 FUN_148c7ead0 body=48 status=ok
// SIG undefined FUN_148c7ead0(void)

void FUN_148c7ead0(undefined8 param_1,longlong param_2)

{
  FUN_140056680(param_2,&DAT_149dfb77a);
  FUN_140056680(param_2 + 0x10,&DAT_149dfb77a);
  return;
}



// FUNCTION 148c7eb00 FUN_148c7eb00 body=47 status=ok
// SIG undefined FUN_148c7eb00(void)

void FUN_148c7eb00(undefined8 param_1,longlong *param_2)

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



// FUNCTION 148c7eb46 FUN_148c7eb46 body=67 status=ok
// SIG undefined FUN_148c7eb46(void)

undefined1 FUN_148c7eb46(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 148c7ebb2 FUN_148c7ebb2 body=59 status=ok
// SIG undefined FUN_148c7ebb2(void)

undefined8 FUN_148c7ebb2(longlong *param_1)

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



// FUNCTION 148c7ec50 FUN_148c7ec50 body=51 status=ok
// SIG undefined FUN_148c7ec50(void)

void FUN_148c7ec50(longlong *param_1)

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



// FUNCTION 148c7ec84 FUN_148c7ec84 body=37 status=ok
// SIG undefined FUN_148c7ec84(void)

void FUN_148c7ec84(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x120);
  FUN_14109ee14(param_2);
  return;
}



// FUNCTION 148c7ecd0 FUN_148c7ecd0 body=63 status=ok
// SIG undefined FUN_148c7ecd0(void)

undefined1 FUN_148c7ecd0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c7edf8(param_2,param_3);
    param_3 = param_3 + 0x120;
    param_2 = param_2 + 0x120;
  }
  return 1;
}



// FUNCTION 148c7ed38 FUN_148c7ed38 body=59 status=ok
// SIG undefined FUN_148c7ed38(void)

undefined8 FUN_148c7ed38(longlong *param_1)

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



// FUNCTION 148c7ed84 FUN_148c7ed84 body=38 status=ok
// SIG undefined FUN_148c7ed84(void)

void FUN_148c7ed84(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x120) == '\x01') {
    FUN_14109ec9a(param_2);
    *(undefined1 *)(param_2 + 0x120) = 0;
  }
  return;
}



// FUNCTION 148c7edf8 FUN_148c7edf8 body=414 status=ok
// SIG undefined FUN_148c7edf8(void)

longlong FUN_148c7edf8(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  FUN_144a787a6();
  FUN_144a787a6(param_1 + 0x10,param_2 + 0x10);
  FUN_144a787a6(param_1 + 0x20,param_2 + 0x20);
  FUN_144a787a6(param_1 + 0x30,param_2 + 0x30);
  FUN_144a787a6(param_1 + 0x40,param_2 + 0x40);
  FUN_144a787a6(param_1 + 0x50,param_2 + 0x50);
  *(undefined2 *)(param_1 + 0x60) = *(undefined2 *)(param_2 + 0x60);
  *(undefined1 *)(param_1 + 0x62) = *(undefined1 *)(param_2 + 0x62);
  FUN_144a787a6(param_1 + 0x68,param_2 + 0x68);
  FUN_144a787a6(param_1 + 0x78,param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  FUN_144a787a6(param_1 + 0x90,param_2 + 0x90);
  FUN_144a787a6(param_1 + 0xa0,param_2 + 0xa0);
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
  FUN_144a787a6(param_1 + 0xd0,param_2 + 0xd0);
  FUN_148c7ef96(param_1 + 0xe0,param_2 + 0xe0);
  FUN_144a787a6(param_1 + 0xf0,param_2 + 0xf0);
  FUN_144a787a6(param_1 + 0x100,param_2 + 0x100);
  uVar3 = *(undefined8 *)(param_2 + 0x118);
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_2 + 0x110);
  *(undefined8 *)(param_1 + 0x118) = uVar3;
  return param_1;
}



// FUNCTION 148c7ef96 FUN_148c7ef96 body=93 status=ok
// SIG undefined FUN_148c7ef96(void)

undefined8 * FUN_148c7ef96(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14109edd4(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c7eff4(param_1,iVar1);
      FUN_148c7f056(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c7eff4 FUN_148c7eff4 body=98 status=ok
// SIG undefined FUN_148c7eff4(void)

void FUN_148c7eff4(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c7f056 FUN_148c7f056 body=52 status=ok
// SIG undefined FUN_148c7f056(void)

void FUN_148c7f056(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c7f08a(param_1,param_2);
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return;
}



// FUNCTION 148c7f08a FUN_148c7f08a body=156 status=ok
// SIG undefined FUN_148c7f08a(void)

undefined8 * FUN_148c7f08a(undefined8 *param_1,undefined8 *param_2)

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
  return param_1;
}



// FUNCTION 148c7f128 FUN_148c7f128 body=76 status=ok
// SIG undefined FUN_148c7f128(void)

void FUN_148c7f128(undefined8 param_1,undefined8 *param_2)

{
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[4] = 0;
  FUN_140056680(param_2,&DAT_149dfb77a);
  FUN_140056680(param_2 + 2,&DAT_149dfb77a);
  param_2[4] = 0;
  return;
}



// FUNCTION 148c7f174 FUN_148c7f174 body=54 status=ok
// SIG undefined FUN_148c7f174(void)

void FUN_148c7f174(undefined8 param_1,longlong param_2)

{
  FUN_140056680(param_2,&DAT_149dfb77a);
  FUN_140056680(param_2 + 0x10,&DAT_149dfb77a);
  *(undefined8 *)(param_2 + 0x20) = 0;
  return;
}



// FUNCTION 148c7f1aa FUN_148c7f1aa body=47 status=ok
// SIG undefined FUN_148c7f1aa(void)

void FUN_148c7f1aa(undefined8 param_1,longlong *param_2)

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



// FUNCTION 148c7f1f0 FUN_148c7f1f0 body=75 status=ok
// SIG undefined FUN_148c7f1f0(void)

undefined8 FUN_148c7f1f0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_3 + 0x20);
    param_2 = param_2 + 0x28;
    param_3 = param_3 + 0x28;
  }
  return 1;
}



// FUNCTION 148c7f264 FUN_148c7f264 body=59 status=ok
// SIG undefined FUN_148c7f264(void)

undefined8 FUN_148c7f264(longlong *param_1)

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



// FUNCTION 148c7f302 FUN_148c7f302 body=51 status=ok
// SIG undefined FUN_148c7f302(void)

void FUN_148c7f302(longlong *param_1)

{
  if ((char)param_1[5] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return;
}



// FUNCTION 148c7f37a FUN_148c7f37a body=54 status=ok
// SIG undefined FUN_148c7f37a(void)

undefined1 FUN_148c7f37a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c7f48e(param_2,param_3);
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return 1;
}



// FUNCTION 148c7f3d8 FUN_148c7f3d8 body=59 status=ok
// SIG undefined FUN_148c7f3d8(void)

undefined8 FUN_148c7f3d8(longlong *param_1)

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



// FUNCTION 148c7f41e FUN_148c7f41e body=34 status=ok
// SIG undefined FUN_148c7f41e(void)

void FUN_148c7f41e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_145911326(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 148c7f48e FUN_148c7f48e body=106 status=ok
// SIG undefined FUN_148c7f48e(void)

longlong * FUN_148c7f48e(longlong *param_1,longlong *param_2)

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
  param_1[2] = param_2[2];
  FUN_144a787a6(param_1 + 3,param_2 + 3);
  FUN_144a787a6(param_1 + 5,param_2 + 5);
  return param_1;
}



// FUNCTION 148c7f566 FUN_148c7f566 body=59 status=ok
// SIG undefined FUN_148c7f566(void)

undefined8 FUN_148c7f566(longlong *param_1)

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



// FUNCTION 148c7f65c FUN_148c7f65c body=54 status=ok
// SIG undefined FUN_148c7f65c(void)

undefined1 FUN_148c7f65c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c7f770(param_2,param_3);
    param_3 = param_3 + 0x78;
    param_2 = param_2 + 0x78;
  }
  return 1;
}



// FUNCTION 148c7f6ba FUN_148c7f6ba body=59 status=ok
// SIG undefined FUN_148c7f6ba(void)

undefined8 FUN_148c7f6ba(longlong *param_1)

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



// FUNCTION 148c7f700 FUN_148c7f700 body=34 status=ok
// SIG undefined FUN_148c7f700(void)

void FUN_148c7f700(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_14591138c(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 148c7f770 FUN_148c7f770 body=235 status=ok
// SIG undefined FUN_148c7f770(void)

undefined8 * FUN_148c7f770(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *param_1 = *param_2;
  FUN_144a787a6(param_1 + 1,param_2 + 1);
  plVar1 = (longlong *)param_2[3];
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != plVar1) {
    param_1[3] = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  plVar1 = (longlong *)param_2[5];
  plVar2 = (longlong *)param_1[5];
  if (plVar2 != plVar1) {
    param_1[5] = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  if (*(int *)(param_1 + 9) != *(int *)(param_2 + 9) || *(int *)(param_1 + 9) == 0) {
    *(int *)(param_1 + 9) = *(int *)(param_2 + 9);
    FUN_148c7f8b4(param_1 + 7,param_2 + 7);
  }
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x54);
  uVar4 = *(undefined4 *)(param_2 + 0xb);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x5c);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar3;
  *(undefined4 *)(param_1 + 0xb) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar5;
  FUN_148c7f85c(param_1 + 0xc,param_2 + 0xc);
  *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(param_2 + 0xe);
  *(undefined1 *)((longlong)param_1 + 0x72) = *(undefined1 *)((longlong)param_2 + 0x72);
  return param_1;
}



// FUNCTION 148c7f85c FUN_148c7f85c body=88 status=ok
// SIG undefined FUN_148c7f85c(void)

undefined8 * FUN_148c7f85c(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148c7feca(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 148c7f8b4 FUN_148c7f8b4 body=93 status=ok
// SIG undefined FUN_148c7f8b4(void)

undefined8 * FUN_148c7f8b4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14109ec71(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c7f912(param_1,iVar1);
      FUN_148c7f985(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c7f912 FUN_148c7f912 body=115 status=ok
// SIG undefined FUN_148c7f912(void)

void FUN_148c7f912(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x120,8);
    iVar2 = (int)(uVar1 / 0x120);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x120,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c7f985 FUN_148c7f985 body=60 status=ok
// SIG undefined FUN_148c7f985(void)

void FUN_148c7f985(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c7f9c2(param_1,param_2);
    param_1 = param_1 + 0x120;
    param_2 = param_2 + 0x120;
  }
  return;
}



// FUNCTION 148c7f9c2 FUN_148c7f9c2 body=1288 status=ok
// SIG undefined FUN_148c7f9c2(void)

undefined8 * FUN_148c7f9c2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
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
  param_1[10] = 0;
  iVar1 = *(int *)(param_2 + 0xb);
  pvVar2 = (void *)param_2[10];
  *(int *)(param_1 + 0xb) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 10,iVar1,0);
    memcpy((void *)param_1[10],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined1 *)((longlong)param_1 + 0x62) = *(undefined1 *)((longlong)param_2 + 0x62);
  *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_2 + 0xc);
  param_1[0xd] = 0;
  iVar1 = *(int *)(param_2 + 0xe);
  pvVar2 = (void *)param_2[0xd];
  *(int *)(param_1 + 0xe) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xd,iVar1,0);
    memcpy((void *)param_1[0xd],pvVar2,(longlong)iVar1 * 2);
  }
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
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
  param_1[0x12] = 0;
  iVar1 = *(int *)(param_2 + 0x13);
  pvVar2 = (void *)param_2[0x12];
  *(int *)(param_1 + 0x13) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x12,iVar1,0);
    memcpy((void *)param_1[0x12],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0x14] = 0;
  iVar1 = *(int *)(param_2 + 0x15);
  pvVar2 = (void *)param_2[0x14];
  *(int *)(param_1 + 0x15) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x14,iVar1,0);
    memcpy((void *)param_1[0x14],pvVar2,(longlong)iVar1 * 2);
  }
  plVar3 = (longlong *)param_2[0x16];
  param_1[0x16] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
  plVar3 = (longlong *)param_2[0x18];
  param_1[0x18] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 0x19);
  param_1[0x1a] = 0;
  iVar1 = *(int *)(param_2 + 0x1b);
  pvVar2 = (void *)param_2[0x1a];
  *(int *)(param_1 + 0x1b) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x1a,iVar1,0);
    memcpy((void *)param_1[0x1a],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0x1c] = 0;
  iVar1 = *(int *)(param_2 + 0x1d);
  uVar4 = param_2[0x1c];
  *(int *)(param_1 + 0x1d) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  }
  else {
    FUN_148c7eff4(param_1 + 0x1c,iVar1,0);
    FUN_148c7f056(param_1[0x1c],uVar4,iVar1);
  }
  param_1[0x1e] = 0;
  iVar1 = *(int *)(param_2 + 0x1f);
  pvVar2 = (void *)param_2[0x1e];
  *(int *)(param_1 + 0x1f) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x1e,iVar1,0);
    memcpy((void *)param_1[0x1e],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0x20] = 0;
  iVar1 = *(int *)(param_2 + 0x21);
  pvVar2 = (void *)param_2[0x20];
  *(int *)(param_1 + 0x21) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x20,iVar1,0);
    memcpy((void *)param_1[0x20],pvVar2,(longlong)iVar1 * 2);
  }
  uVar4 = param_2[0x23];
  param_1[0x22] = param_2[0x22];
  param_1[0x23] = uVar4;
  return param_1;
}



// FUNCTION 148c7feca FUN_148c7feca body=98 status=ok
// SIG undefined FUN_148c7feca(void)

void FUN_148c7feca(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c7ff2e FUN_148c7ff2e body=55 status=ok
// SIG undefined FUN_148c7ff2e(void)

void FUN_148c7ff2e(undefined8 param_1,undefined8 *param_2)

{
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140056680(param_2,&DAT_149dfb77a);
  FUN_140056680(param_2 + 2,&DAT_149dfb77a);
  return;
}



// FUNCTION 148c7ff66 FUN_148c7ff66 body=48 status=ok
// SIG undefined FUN_148c7ff66(void)

void FUN_148c7ff66(undefined8 param_1,longlong param_2)

{
  FUN_140056680(param_2,&DAT_149dfb77a);
  FUN_140056680(param_2 + 0x10,&DAT_149dfb77a);
  return;
}



// FUNCTION 148c7ff96 FUN_148c7ff96 body=47 status=ok
// SIG undefined FUN_148c7ff96(void)

void FUN_148c7ff96(undefined8 param_1,longlong *param_2)

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



// FUNCTION 148c7ffdc FUN_148c7ffdc body=67 status=ok
// SIG undefined FUN_148c7ffdc(void)

undefined1 FUN_148c7ffdc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 148c80048 FUN_148c80048 body=59 status=ok
// SIG undefined FUN_148c80048(void)

undefined8 FUN_148c80048(longlong *param_1)

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



// FUNCTION 148c800e6 FUN_148c800e6 body=51 status=ok
// SIG undefined FUN_148c800e6(void)

void FUN_148c800e6(longlong *param_1)

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



// FUNCTION 148c8011a FUN_148c8011a body=37 status=ok
// SIG undefined FUN_148c8011a(void)

void FUN_148c8011a(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x350);
  FUN_14601e1ce(param_2);
  return;
}



// FUNCTION 148c8016c FUN_148c8016c body=63 status=ok
// SIG undefined FUN_148c8016c(void)

undefined1 FUN_148c8016c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c80296(param_2,param_3);
    param_3 = param_3 + 0x350;
    param_2 = param_2 + 0x350;
  }
  return 1;
}



// FUNCTION 148c801d4 FUN_148c801d4 body=59 status=ok
// SIG undefined FUN_148c801d4(void)

undefined8 FUN_148c801d4(longlong *param_1)

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



// FUNCTION 148c80220 FUN_148c80220 body=40 status=ok
// SIG undefined FUN_148c80220(void)

void FUN_148c80220(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x350) == '\x01') {
    FUN_1459111d4(param_2);
    *(undefined1 *)(param_2 + 0x350) = 0;
  }
  return;
}



// FUNCTION 148c80296 FUN_148c80296 body=512 status=ok
// SIG undefined FUN_148c80296(void)

longlong FUN_148c80296(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  FUN_1489fb7d2();
  uVar1 = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0xb3) = *(undefined4 *)(param_2 + 0xb3);
  *(undefined4 *)(param_1 + 0xb0) = uVar1;
  if (*(int *)(param_1 + 200) != *(int *)(param_2 + 200) || *(int *)(param_1 + 200) == 0) {
    *(int *)(param_1 + 200) = *(int *)(param_2 + 200);
    FUN_148c7f8b4(param_1 + 0xb8,param_2 + 0xb8);
  }
  FUN_148c80496(param_1 + 0xd0,param_2 + 0xd0);
  *(undefined1 *)(param_1 + 0xf0) = *(undefined1 *)(param_2 + 0xf0);
  uVar1 = *(undefined4 *)(param_2 + 0xe4);
  uVar4 = *(undefined4 *)(param_2 + 0xe8);
  uVar5 = *(undefined4 *)(param_2 + 0xec);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
  *(undefined4 *)(param_1 + 0xe4) = uVar1;
  *(undefined4 *)(param_1 + 0xe8) = uVar4;
  *(undefined4 *)(param_1 + 0xec) = uVar5;
  if (*(int *)(param_1 + 0x108) != *(int *)(param_2 + 0x108) || *(int *)(param_1 + 0x108) == 0) {
    *(int *)(param_1 + 0x108) = *(int *)(param_2 + 0x108);
    FUN_148c80754(param_1 + 0xf8,param_2 + 0xf8);
  }
  FUN_148c7edf8(param_1 + 0x110,param_2 + 0x110);
  FUN_144a787a6(param_1 + 0x230,param_2 + 0x230);
  FUN_144a787a6(param_1 + 0x240,param_2 + 0x240);
  *(undefined8 *)(param_1 + 0x250) = *(undefined8 *)(param_2 + 0x250);
  if (*(int *)(param_1 + 0x268) != *(int *)(param_2 + 0x268)) {
    FUN_144a787a6(param_1 + 600,param_2 + 600);
    *(undefined4 *)(param_1 + 0x268) = *(undefined4 *)(param_2 + 0x268);
  }
  FUN_148c804f6(param_1 + 0x270,param_2 + 0x270);
  plVar2 = *(longlong **)(param_2 + 0x280);
  plVar3 = *(longlong **)(param_1 + 0x280);
  if (plVar3 != plVar2) {
    *(longlong **)(param_1 + 0x280) = plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(undefined4 *)(param_1 + 0x288) = *(undefined4 *)(param_2 + 0x288);
  *(undefined1 *)(param_1 + 0x290) = *(undefined1 *)(param_2 + 0x290);
  if (*(int *)(param_1 + 0x298) != *(int *)(param_2 + 0x298)) {
    *(undefined1 *)(param_1 + 0x294) = *(undefined1 *)(param_2 + 0x294);
    *(undefined4 *)(param_1 + 0x298) = *(undefined4 *)(param_2 + 0x298);
  }
  *(undefined1 *)(param_1 + 0x2a0) = *(undefined1 *)(param_2 + 0x2a0);
  *(undefined4 *)(param_1 + 0x29c) = *(undefined4 *)(param_2 + 0x29c);
  FUN_1489fdc6a(param_1 + 0x2a8,param_2 + 0x2a8);
  FUN_144a787a6(param_1 + 0x340,param_2 + 0x340);
  return param_1;
}



// FUNCTION 148c80496 FUN_148c80496 body=95 status=ok
// SIG undefined FUN_148c80496(void)

undefined8 * FUN_148c80496(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145911365(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c80554(param_1,iVar1);
      FUN_148c805c3(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c804f6 FUN_148c804f6 body=93 status=ok
// SIG undefined FUN_148c804f6(void)

undefined8 * FUN_148c804f6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14109e9d6(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c8091e(param_1,iVar1);
      FUN_148c80980(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c80554 FUN_148c80554 body=111 status=ok
// SIG undefined FUN_148c80554(void)

void FUN_148c80554(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x78,8);
    iVar2 = (int)(uVar1 / 0x78);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x78,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c805c3 FUN_148c805c3 body=52 status=ok
// SIG undefined FUN_148c805c3(void)

void FUN_148c805c3(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c805f8(param_1,param_2);
    param_1 = param_1 + 0x78;
    param_2 = param_2 + 0x78;
  }
  return;
}



// FUNCTION 148c805f8 FUN_148c805f8 body=258 status=ok
// SIG undefined FUN_148c805f8(void)

undefined8 * FUN_148c805f8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  pvVar2 = (void *)param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],pvVar2,(longlong)iVar1 * 2);
  }
  plVar3 = (longlong *)param_2[3];
  param_1[3] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  plVar3 = (longlong *)param_2[5];
  param_1[5] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  FUN_148c806fa(param_1 + 7,param_2 + 7);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x54);
  uVar5 = *(undefined4 *)(param_2 + 0xb);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x5c);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar4;
  *(undefined4 *)(param_1 + 0xb) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar6;
  param_1[0xc] = 0;
  iVar1 = *(int *)(param_2 + 0xd);
  pvVar2 = (void *)param_2[0xc];
  *(int *)(param_1 + 0xd) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  }
  else {
    FUN_148c7feca(param_1 + 0xc,iVar1,0);
    memcpy((void *)param_1[0xc],pvVar2,(longlong)iVar1 << 3);
  }
  *(undefined1 *)((longlong)param_1 + 0x72) = *(undefined1 *)((longlong)param_2 + 0x72);
  *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(param_2 + 0xe);
  return param_1;
}



// FUNCTION 148c806fa FUN_148c806fa body=90 status=ok
// SIG undefined FUN_148c806fa(void)

undefined8 * FUN_148c806fa(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_148c7f912(param_1,iVar1,0);
    FUN_148c7f985(*param_1,uVar2,iVar1);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  return param_1;
}



// FUNCTION 148c80754 FUN_148c80754 body=95 status=ok
// SIG undefined FUN_148c80754(void)

undefined8 * FUN_148c80754(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1459112ff(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c807b4(param_1,iVar1);
      FUN_148c80823(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c807b4 FUN_148c807b4 body=111 status=ok
// SIG undefined FUN_148c807b4(void)

void FUN_148c807b4(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c80823 FUN_148c80823 body=52 status=ok
// SIG undefined FUN_148c80823(void)

void FUN_148c80823(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c80858(param_1,param_2);
    param_1 = param_1 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return;
}



// FUNCTION 148c80858 FUN_148c80858 body=197 status=ok
// SIG undefined FUN_148c80858(void)

longlong * FUN_148c80858(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  void *pvVar3;
  
  plVar2 = (longlong *)*param_2;
  *param_1 = (longlong)plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = 0;
  iVar1 = (int)param_2[4];
  pvVar3 = (void *)param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],pvVar3,(longlong)iVar1 * 2);
  }
  param_1[5] = 0;
  iVar1 = (int)param_2[6];
  pvVar3 = (void *)param_2[5];
  *(int *)(param_1 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 5,iVar1,0);
    memcpy((void *)param_1[5],pvVar3,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 148c8091e FUN_148c8091e body=98 status=ok
// SIG undefined FUN_148c8091e(void)

void FUN_148c8091e(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c80980 FUN_148c80980 body=52 status=ok
// SIG undefined FUN_148c80980(void)

void FUN_148c80980(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c809b4(param_1,param_2);
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return;
}



// FUNCTION 148c809b4 FUN_148c809b4 body=156 status=ok
// SIG undefined FUN_148c809b4(void)

undefined8 * FUN_148c809b4(undefined8 *param_1,undefined8 *param_2)

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
  return param_1;
}



// FUNCTION 148c80f5c FUN_148c80f5c body=48 status=ok
// SIG undefined FUN_148c80f5c(void)

void FUN_148c80f5c(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xb0);
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b8b6360;
  return;
}



// FUNCTION 148c80f8c FUN_148c80f8c body=32 status=ok
// SIG undefined FUN_148c80f8c(void)

void FUN_148c80f8c(undefined8 param_1,undefined8 *param_2)

{
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b8b6360;
  return;
}



// FUNCTION 148c80fd0 FUN_148c80fd0 body=63 status=ok
// SIG undefined FUN_148c80fd0(void)

undefined1 FUN_148c80fd0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1489fb7d2(param_2,param_3);
    param_3 = param_3 + 0xb0;
    param_2 = param_2 + 0xb0;
  }
  return 1;
}



// FUNCTION 148c81038 FUN_148c81038 body=59 status=ok
// SIG undefined FUN_148c81038(void)

undefined8 FUN_148c81038(longlong *param_1)

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



// FUNCTION 148c81084 FUN_148c81084 body=38 status=ok
// SIG undefined FUN_148c81084(void)

void FUN_148c81084(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    FUN_140fe7f26(param_2);
    *(undefined1 *)(param_2 + 0xb0) = 0;
  }
  return;
}



// FUNCTION 148c810fa FUN_148c810fa body=74 status=ok
// SIG undefined FUN_148c810fa(void)

void FUN_148c810fa(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xb70);
  FUN_145854e74(param_2);
  *param_2 = &PTR_FUN_14b8b64f0;
  *(undefined4 *)(param_2 + 0x16d) = 0;
  param_2[0x16a] = 0;
  param_2[0x16b] = 0;
  *(undefined4 *)(param_2 + 0x16c) = 0;
  return;
}



// FUNCTION 148c81144 FUN_148c81144 body=56 status=ok
// SIG undefined FUN_148c81144(void)

void FUN_148c81144(undefined8 param_1,undefined8 *param_2)

{
  FUN_145854e74(param_2);
  *param_2 = &PTR_FUN_14b8b64f0;
  *(undefined4 *)(param_2 + 0x16d) = 0;
  param_2[0x16a] = 0;
  param_2[0x16b] = 0;
  *(undefined4 *)(param_2 + 0x16c) = 0;
  return;
}



// FUNCTION 148c8119a FUN_148c8119a body=63 status=ok
// SIG undefined FUN_148c8119a(void)

undefined1 FUN_148c8119a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c8135a(param_2,param_3);
    param_3 = param_3 + 0xb70;
    param_2 = param_2 + 0xb70;
  }
  return 1;
}



// FUNCTION 148c81202 FUN_148c81202 body=59 status=ok
// SIG undefined FUN_148c81202(void)

undefined8 FUN_148c81202(longlong *param_1)

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



// FUNCTION 148c8124e FUN_148c8124e body=40 status=ok
// SIG undefined FUN_148c8124e(void)

void FUN_148c8124e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb70) == '\x01') {
    FUN_148c81322(param_2);
    *(undefined1 *)(param_2 + 0xb70) = 0;
  }
  return;
}



// FUNCTION 148c812c4 FUN_148c812c4 body=38 status=ok
// SIG undefined FUN_148c812c4(void)

undefined8 FUN_148c812c4(undefined8 param_1,int param_2)

{
  FUN_148c81322();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c812ea FUN_148c812ea body=55 status=ok
// SIG undefined FUN_148c812ea(void)

void FUN_148c812ea(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbba888 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbba888 = FUN_140002ddd(FUN_14660669d,uVar1,L"OakWidgetData_LostLoot");
  }
  return;
}



// FUNCTION 148c81322 FUN_148c81322 body=56 status=ok
// SIG undefined FUN_148c81322(void)

void FUN_148c81322(longlong param_1)

{
  FUN_145d24fc7(*(undefined8 *)(param_1 + 0xb50),*(undefined4 *)(param_1 + 0xb58));
  if (*(longlong *)(param_1 + 0xb50) != 0) {
    FUN_1400020a8();
  }
  FUN_1458b3782(param_1);
  return;
}



// FUNCTION 148c8135a FUN_148c8135a body=84 status=ok
// SIG undefined FUN_148c8135a(void)

longlong FUN_148c8135a(longlong param_1,longlong param_2)

{
  FUN_148c6ad5e();
  if ((*(int *)(param_1 + 0xb60) == 0) || (*(int *)(param_1 + 0xb60) != *(int *)(param_2 + 0xb60)))
  {
    *(int *)(param_1 + 0xb60) = *(int *)(param_2 + 0xb60);
    FUN_148c813ae(param_1 + 0xb50,param_2 + 0xb50);
  }
  *(undefined4 *)(param_1 + 0xb68) = *(undefined4 *)(param_2 + 0xb68);
  return param_1;
}



// FUNCTION 148c813ae FUN_148c813ae body=95 status=ok
// SIG undefined FUN_148c813ae(void)

undefined8 * FUN_148c813ae(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145d24fc7(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c8140e(param_1,iVar1);
      FUN_148c81484(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c8140e FUN_148c8140e body=118 status=ok
// SIG undefined FUN_148c8140e(void)

void FUN_148c8140e(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x448,8);
    iVar2 = (int)(uVar1 / 0x448);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x448,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c81484 FUN_148c81484 body=195 status=ok
// SIG undefined FUN_148c81484(void)

void FUN_148c81484(undefined8 *param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1413505e4(param_1,param_2);
    *param_1 = &PTR_FUN_14b8b6620;
    param_1[0x86] = 0;
    *(undefined4 *)(param_1 + 0x86) = *(undefined4 *)(param_2 + 0x430);
    *(undefined4 *)((longlong)param_1 + 0x434) = *(undefined4 *)(param_2 + 0x434);
    *(undefined1 *)(param_1 + 0x87) = 0;
    *(undefined4 *)((longlong)param_1 + 0x43c) = 0;
    *(undefined1 *)(param_1 + 0x87) = *(undefined1 *)(param_2 + 0x438);
    *(undefined4 *)((longlong)param_1 + 0x43c) = *(undefined4 *)(param_2 + 0x43c);
    *(undefined1 *)(param_1 + 0x88) = 0;
    *(undefined4 *)((longlong)param_1 + 0x444) = 0;
    *(undefined1 *)(param_1 + 0x88) = *(undefined1 *)(param_2 + 0x440);
    *(undefined4 *)((longlong)param_1 + 0x444) = *(undefined4 *)(param_2 + 0x444);
    param_1 = param_1 + 0x89;
    param_2 = param_2 + 0x448;
  }
  return;
}



// FUNCTION 148c81548 FUN_148c81548 body=38 status=ok
// SIG undefined FUN_148c81548(void)

undefined8 FUN_148c81548(undefined8 param_1,int param_2)

{
  FUN_141286efe();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c81570 FUN_148c81570 body=37 status=ok
// SIG undefined FUN_148c81570(void)

void FUN_148c81570(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xd8);
  FUN_148c816f8(param_2);
  return;
}



// FUNCTION 148c8159e FUN_148c8159e body=57 status=ok
// SIG undefined FUN_148c8159e(void)

void FUN_148c8159e(undefined8 param_1,longlong param_2)

{
  if (*(longlong **)(param_2 + 200) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 200) + 0x10))();
  }
  if (*(longlong **)(param_2 + 0xb8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0xb8) + 0x10))();
  }
  FUN_140fe7f26(param_2);
  return;
}



// FUNCTION 148c815ee FUN_148c815ee body=63 status=ok
// SIG undefined FUN_148c815ee(void)

undefined1 FUN_148c815ee(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c817ec(param_2,param_3);
    param_3 = param_3 + 0xd8;
    param_2 = param_2 + 0xd8;
  }
  return 1;
}



// FUNCTION 148c81656 FUN_148c81656 body=59 status=ok
// SIG undefined FUN_148c81656(void)

undefined8 FUN_148c81656(longlong *param_1)

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



// FUNCTION 148c816f8 FUN_148c816f8 body=110 status=ok
// SIG undefined FUN_148c816f8(void)

undefined8 * FUN_148c816f8(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_1408f3f9e();
  *param_1 = &PTR_FUN_14b8b67a0;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[0x17] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x18) = (int)plVar2[1];
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[0x19] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x1a) = (int)plVar2[1];
  return param_1;
}



// FUNCTION 148c81766 FUN_148c81766 body=77 status=ok
// SIG undefined FUN_148c81766(void)

longlong FUN_148c81766(longlong param_1,int param_2)

{
  if (*(longlong **)(param_1 + 200) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 200) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x10))();
  }
  FUN_140fe7f26(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c817b4 FUN_148c817b4 body=55 status=ok
// SIG undefined FUN_148c817b4(void)

void FUN_148c817b4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbba8a0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbba8a0 = FUN_140002ddd(FUN_14660672f,uVar1,L"OakWidgetData_LostLootMisc");
  }
  return;
}



// FUNCTION 148c817ec FUN_148c817ec body=180 status=ok
// SIG undefined FUN_148c817ec(void)

longlong FUN_148c817ec(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_1489fb7d2();
  *(byte *)(param_1 + 0xb0) = *(byte *)(param_1 + 0xb0) & 0xfe | *(byte *)(param_2 + 0xb0) & 1;
  plVar1 = *(longlong **)(param_2 + 0xb8);
  plVar2 = *(longlong **)(param_1 + 0xb8);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0xb8) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
  plVar1 = *(longlong **)(param_2 + 200);
  plVar2 = *(longlong **)(param_1 + 200);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 200) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  return param_1;
}



// FUNCTION 148c818a2 FUN_148c818a2 body=74 status=ok
// SIG undefined FUN_148c818a2(void)

void FUN_148c818a2(longlong param_1)

{
  if (*(char *)(param_1 + 0xd8) == '\x01') {
    if (*(longlong **)(param_1 + 200) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 200) + 0x10))();
    }
    if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x10))();
    }
    FUN_140fe7f26(param_1);
    *(undefined1 *)(param_1 + 0xd8) = 0;
  }
  return;
}



// FUNCTION 148c818ec FUN_148c818ec body=55 status=ok
// SIG undefined FUN_148c818ec(void)

void FUN_148c818ec(undefined8 param_1,undefined8 *param_2)

{
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1400b22c2(param_2,&DAT_149e02088);
  FUN_1400b22c2(param_2 + 2,&DAT_149e02088);
  return;
}



// FUNCTION 148c81924 FUN_148c81924 body=48 status=ok
// SIG undefined FUN_148c81924(void)

void FUN_148c81924(undefined8 param_1,longlong param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  FUN_1400b22c2(param_2 + 0x10,&DAT_149e02088);
  return;
}



// FUNCTION 148c81954 FUN_148c81954 body=47 status=ok
// SIG undefined FUN_148c81954(void)

void FUN_148c81954(undefined8 param_1,longlong *param_2)

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



// FUNCTION 148c8199a FUN_148c8199a body=67 status=ok
// SIG undefined FUN_148c8199a(void)

undefined1 FUN_148c8199a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 148c81a06 FUN_148c81a06 body=59 status=ok
// SIG undefined FUN_148c81a06(void)

undefined8 FUN_148c81a06(longlong *param_1)

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



// FUNCTION 148c81aa4 FUN_148c81aa4 body=51 status=ok
// SIG undefined FUN_148c81aa4(void)

void FUN_148c81aa4(longlong *param_1)

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



// FUNCTION 148c81ad8 FUN_148c81ad8 body=37 status=ok
// SIG undefined FUN_148c81ad8(void)

void FUN_148c81ad8(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x1e8);
  FUN_146177bf4(param_2);
  return;
}



// FUNCTION 148c81b2a FUN_148c81b2a body=63 status=ok
// SIG undefined FUN_148c81b2a(void)

undefined1 FUN_148c81b2a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c81c54(param_2,param_3);
    param_3 = param_3 + 0x1e8;
    param_2 = param_2 + 0x1e8;
  }
  return 1;
}



// FUNCTION 148c81b92 FUN_148c81b92 body=59 status=ok
// SIG undefined FUN_148c81b92(void)

undefined8 FUN_148c81b92(longlong *param_1)

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



// FUNCTION 148c81bde FUN_148c81bde body=40 status=ok
// SIG undefined FUN_148c81bde(void)

void FUN_148c81bde(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1e8) == '\x01') {
    FUN_145e28034(param_2);
    *(undefined1 *)(param_2 + 0x1e8) = 0;
  }
  return;
}



// FUNCTION 148c81c54 FUN_148c81c54 body=427 status=ok
// SIG undefined FUN_148c81c54(void)

longlong FUN_148c81c54(longlong param_1,longlong param_2)

{
  FUN_1489fb7d2();
  FUN_1489fdc6a(param_1 + 0xb0,param_2 + 0xb0);
  if (*(int *)(param_1 + 0x14c) != *(int *)(param_2 + 0x14c)) {
    *(undefined1 *)(param_1 + 0x148) = *(undefined1 *)(param_2 + 0x148);
    *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_2 + 0x14c);
  }
  if (*(int *)(param_1 + 0x154) != *(int *)(param_2 + 0x154)) {
    *(undefined1 *)(param_1 + 0x150) = *(undefined1 *)(param_2 + 0x150);
    *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_2 + 0x154);
  }
  if (*(int *)(param_1 + 0x15c) != *(int *)(param_2 + 0x15c)) {
    *(undefined1 *)(param_1 + 0x158) = *(undefined1 *)(param_2 + 0x158);
    *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(param_2 + 0x15c);
  }
  if (*(int *)(param_1 + 0x164) != *(int *)(param_2 + 0x164)) {
    *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(param_2 + 0x160);
    *(undefined4 *)(param_1 + 0x164) = *(undefined4 *)(param_2 + 0x164);
  }
  FUN_140ae1244(param_1 + 0x168,param_2 + 0x168);
  if (*(int *)(param_1 + 400) != *(int *)(param_2 + 400)) {
    FUN_144a787a6(param_1 + 0x180,param_2 + 0x180);
    *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_2 + 400);
  }
  if (*(int *)(param_1 + 0x19c) != *(int *)(param_2 + 0x19c)) {
    *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_2 + 0x198);
    *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(param_2 + 0x19c);
  }
  if (*(int *)(param_1 + 0x1b0) != *(int *)(param_2 + 0x1b0)) {
    FUN_144a787a6(param_1 + 0x1a0,param_2 + 0x1a0);
    *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_2 + 0x1b0);
  }
  if (*(int *)(param_1 + 0x1c8) != *(int *)(param_2 + 0x1c8)) {
    FUN_144a787a6(param_1 + 0x1b8,param_2 + 0x1b8);
    *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_2 + 0x1c8);
  }
  if ((*(int *)(param_1 + 0x1e0) == 0) || (*(int *)(param_1 + 0x1e0) != *(int *)(param_2 + 0x1e0)))
  {
    *(int *)(param_1 + 0x1e0) = *(int *)(param_2 + 0x1e0);
    FUN_148c81e00(param_1 + 0x1d0,param_2 + 0x1d0);
  }
  return param_1;
}



// FUNCTION 148c81e00 FUN_148c81e00 body=95 status=ok
// SIG undefined FUN_148c81e00(void)

undefined8 * FUN_148c81e00(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1456bab0c(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c81e60(param_1,iVar1);
      FUN_148c81ec2(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c81e60 FUN_148c81e60 body=98 status=ok
// SIG undefined FUN_148c81e60(void)

void FUN_148c81e60(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c81ec2 FUN_148c81ec2 body=52 status=ok
// SIG undefined FUN_148c81ec2(void)

void FUN_148c81ec2(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c81ef6(param_1,param_2);
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return;
}



// FUNCTION 148c81ef6 FUN_148c81ef6 body=156 status=ok
// SIG undefined FUN_148c81ef6(void)

undefined8 * FUN_148c81ef6(undefined8 *param_1,undefined8 *param_2)

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
  return param_1;
}



// FUNCTION 148c81f94 FUN_148c81f94 body=62 status=ok
// SIG undefined FUN_148c81f94(void)

void FUN_148c81f94(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_2[1] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_2 + 2) = (int)plVar2[1];
  return;
}



// FUNCTION 148c81fd2 FUN_148c81fd2 body=58 status=ok
// SIG undefined FUN_148c81fd2(void)

void FUN_148c81fd2(undefined8 param_1,undefined1 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *param_2 = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  *(longlong **)(param_2 + 8) = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_2 + 0x10) = (int)plVar2[1];
  return;
}



// FUNCTION 148c82034 FUN_148c82034 body=54 status=ok
// SIG undefined FUN_148c82034(void)

undefined1 FUN_148c82034(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c8214e(param_2,param_3);
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return 1;
}



// FUNCTION 148c82092 FUN_148c82092 body=59 status=ok
// SIG undefined FUN_148c82092(void)

undefined8 FUN_148c82092(longlong *param_1)

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



// FUNCTION 148c820d8 FUN_148c820d8 body=39 status=ok
// SIG undefined FUN_148c820d8(void)

void FUN_148c820d8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    if (*(longlong **)(param_2 + 8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_2 + 8) + 0x10))();
    }
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 148c8214e FUN_148c8214e body=90 status=ok
// SIG undefined FUN_148c8214e(void)

undefined1 * FUN_148c8214e(undefined1 *param_1,undefined1 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(int *)(param_1 + 4) != *(int *)(param_2 + 4)) {
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  plVar1 = *(longlong **)(param_2 + 8);
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 8) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  return param_1;
}



// FUNCTION 148c821f6 FUN_148c821f6 body=54 status=ok
// SIG undefined FUN_148c821f6(void)

undefined1 FUN_148c821f6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c82308(param_2,param_3);
    param_3 = param_3 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return 1;
}



// FUNCTION 148c82254 FUN_148c82254 body=59 status=ok
// SIG undefined FUN_148c82254(void)

undefined8 FUN_148c82254(longlong *param_1)

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



// FUNCTION 148c8229a FUN_148c8229a body=32 status=ok
// SIG undefined FUN_148c8229a(void)

void FUN_148c8229a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_145ac3de4(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 148c82308 FUN_148c82308 body=87 status=ok
// SIG undefined FUN_148c82308(void)

longlong FUN_148c82308(longlong param_1,longlong param_2)

{
  FUN_144a787a6();
  FUN_144a787a6(param_1 + 0x10,param_2 + 0x10);
  FUN_144a787a6(param_1 + 0x20,param_2 + 0x20);
  FUN_144a787a6(param_1 + 0x30,param_2 + 0x30);
  FUN_148c82360(param_1 + 0x40,param_2 + 0x40);
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_2 + 0x50);
  return param_1;
}



// FUNCTION 148c82360 FUN_148c82360 body=93 status=ok
// SIG undefined FUN_148c82360(void)

undefined8 * FUN_148c82360(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_141282505(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c823be(param_1,iVar1);
      FUN_148c82431(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c823be FUN_148c823be body=115 status=ok
// SIG undefined FUN_148c823be(void)

void FUN_148c823be(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c82431 FUN_148c82431 body=107 status=ok
// SIG undefined FUN_148c82431(void)

void FUN_148c82431(longlong param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined1 *)(param_1 + lVar2) = 0;
      *(undefined4 *)(param_1 + 4 + lVar2) = 0;
      *(undefined1 *)(param_1 + lVar2) = *(undefined1 *)(param_2 + lVar2);
      *(undefined4 *)(param_1 + 4 + lVar2) = *(undefined4 *)(param_2 + 4 + lVar2);
      plVar1 = *(longlong **)(param_2 + 8 + lVar2);
      *(longlong **)(param_1 + 8 + lVar2) = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      *(undefined4 *)(param_1 + 0x10 + lVar2) = *(undefined4 *)(param_2 + 0x10 + lVar2);
      lVar2 = lVar2 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148c8249e FUN_148c8249e body=37 status=ok
// SIG undefined FUN_148c8249e(void)

void FUN_148c8249e(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x2f8);
  FUN_145c01bc0(param_2);
  return;
}



// FUNCTION 148c824f0 FUN_148c824f0 body=63 status=ok
// SIG undefined FUN_148c824f0(void)

undefined1 FUN_148c824f0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c8261a(param_2,param_3);
    param_3 = param_3 + 0x2f8;
    param_2 = param_2 + 0x2f8;
  }
  return 1;
}



// FUNCTION 148c82558 FUN_148c82558 body=59 status=ok
// SIG undefined FUN_148c82558(void)

undefined8 FUN_148c82558(longlong *param_1)

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



// FUNCTION 148c825a4 FUN_148c825a4 body=40 status=ok
// SIG undefined FUN_148c825a4(void)

void FUN_148c825a4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2f8) == '\x01') {
    FUN_145ac3d72(param_2);
    *(undefined1 *)(param_2 + 0x2f8) = 0;
  }
  return;
}



// FUNCTION 148c8261a FUN_148c8261a body=430 status=ok
// SIG undefined FUN_148c8261a(void)

longlong FUN_148c8261a(longlong param_1,longlong param_2)

{
  FUN_1489fb7d2();
  FUN_148c827c8(param_1 + 0xb0,param_2 + 0xb0);
  FUN_1457fd360(param_1 + 0xc0,param_2 + 0xc0);
  FUN_1457fd360(param_1 + 0x140,param_2 + 0x140);
  FUN_148c82308(param_1 + 0x1c0,param_2 + 0x1c0);
  FUN_1489fdc6a(param_1 + 0x218,param_2 + 0x218);
  *(undefined1 *)(param_1 + 0x2b2) = *(undefined1 *)(param_2 + 0x2b2);
  *(undefined2 *)(param_1 + 0x2b0) = *(undefined2 *)(param_2 + 0x2b0);
  if (*(int *)(param_1 + 0x2b8) != *(int *)(param_2 + 0x2b8)) {
    *(undefined1 *)(param_1 + 0x2b4) = *(undefined1 *)(param_2 + 0x2b4);
    *(undefined4 *)(param_1 + 0x2b8) = *(undefined4 *)(param_2 + 0x2b8);
  }
  if (*(int *)(param_1 + 0x2c0) != *(int *)(param_2 + 0x2c0)) {
    *(undefined1 *)(param_1 + 700) = *(undefined1 *)(param_2 + 700);
    *(undefined4 *)(param_1 + 0x2c0) = *(undefined4 *)(param_2 + 0x2c0);
  }
  if (*(int *)(param_1 + 0x2c8) != *(int *)(param_2 + 0x2c8)) {
    *(undefined1 *)(param_1 + 0x2c4) = *(undefined1 *)(param_2 + 0x2c4);
    *(undefined4 *)(param_1 + 0x2c8) = *(undefined4 *)(param_2 + 0x2c8);
  }
  *(undefined2 *)(param_1 + 0x2cc) = *(undefined2 *)(param_2 + 0x2cc);
  if (*(int *)(param_1 + 0x2d4) != *(int *)(param_2 + 0x2d4)) {
    *(undefined1 *)(param_1 + 0x2d0) = *(undefined1 *)(param_2 + 0x2d0);
    *(undefined4 *)(param_1 + 0x2d4) = *(undefined4 *)(param_2 + 0x2d4);
  }
  if (*(int *)(param_1 + 0x2dc) != *(int *)(param_2 + 0x2dc)) {
    *(undefined1 *)(param_1 + 0x2d8) = *(undefined1 *)(param_2 + 0x2d8);
    *(undefined4 *)(param_1 + 0x2dc) = *(undefined4 *)(param_2 + 0x2dc);
  }
  if (*(int *)(param_1 + 0x2e4) != *(int *)(param_2 + 0x2e4)) {
    *(undefined1 *)(param_1 + 0x2e0) = *(undefined1 *)(param_2 + 0x2e0);
    *(undefined4 *)(param_1 + 0x2e4) = *(undefined4 *)(param_2 + 0x2e4);
  }
  if (*(int *)(param_1 + 0x2ec) != *(int *)(param_2 + 0x2ec)) {
    *(undefined4 *)(param_1 + 0x2e8) = *(undefined4 *)(param_2 + 0x2e8);
    *(undefined4 *)(param_1 + 0x2ec) = *(undefined4 *)(param_2 + 0x2ec);
  }
  *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(param_2 + 0x2f0);
  return param_1;
}



// FUNCTION 148c827c8 FUN_148c827c8 body=93 status=ok
// SIG undefined FUN_148c827c8(void)

undefined8 * FUN_148c827c8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_141282492(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c82826(param_1,iVar1);
      FUN_148c82895(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c82826 FUN_148c82826 body=111 status=ok
// SIG undefined FUN_148c82826(void)

void FUN_148c82826(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c82895 FUN_148c82895 body=52 status=ok
// SIG undefined FUN_148c82895(void)

void FUN_148c82895(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c828ca(param_1,param_2);
    param_1 = param_1 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return;
}



// FUNCTION 148c828ca FUN_148c828ca body=385 status=ok
// SIG undefined FUN_148c828ca(void)

undefined8 * FUN_148c828ca(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  
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
  uVar3 = param_2[8];
  *(int *)(param_1 + 9) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_148c823be(param_1 + 8,iVar1,0);
    FUN_148c82431(param_1[8],uVar3,iVar1);
  }
  *(undefined2 *)(param_1 + 10) = *(undefined2 *)(param_2 + 10);
  return param_1;
}



// FUNCTION 148c82a4c FUN_148c82a4c body=37 status=ok
// SIG undefined FUN_148c82a4c(void)

void FUN_148c82a4c(undefined8 param_1,void *param_2)

{
  memset(param_2,0,800);
  FUN_145ce6948(param_2);
  return;
}



// FUNCTION 148c82a9e FUN_148c82a9e body=63 status=ok
// SIG undefined FUN_148c82a9e(void)

undefined1 FUN_148c82a9e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c82bc8(param_2,param_3);
    param_3 = param_3 + 800;
    param_2 = param_2 + 800;
  }
  return 1;
}



// FUNCTION 148c82b06 FUN_148c82b06 body=59 status=ok
// SIG undefined FUN_148c82b06(void)

undefined8 FUN_148c82b06(longlong *param_1)

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



// FUNCTION 148c82b52 FUN_148c82b52 body=40 status=ok
// SIG undefined FUN_148c82b52(void)

void FUN_148c82b52(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 800) == '\x01') {
    FUN_145adb0c6(param_2);
    *(undefined1 *)(param_2 + 800) = 0;
  }
  return;
}



// FUNCTION 148c82bc8 FUN_148c82bc8 body=382 status=ok
// SIG undefined FUN_148c82bc8(void)

longlong FUN_148c82bc8(longlong param_1,longlong param_2)

{
  FUN_1489fb7d2();
  if (*(int *)(param_1 + 0xb4) != *(int *)(param_2 + 0xb4)) {
    *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(param_2 + 0xb0);
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
  }
  *(undefined2 *)(param_1 + 0xc0) = *(undefined2 *)(param_2 + 0xc0);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  FUN_144a787a6(param_1 + 200,param_2 + 200);
  FUN_1489fdc6a(param_1 + 0xd8,param_2 + 0xd8);
  FUN_1457fd360(param_1 + 0x170,param_2 + 0x170);
  FUN_1457fd360(param_1 + 0x1f0,param_2 + 0x1f0);
  FUN_1457fd360(param_1 + 0x270,param_2 + 0x270);
  if (*(int *)(param_1 + 0x2f4) != *(int *)(param_2 + 0x2f4)) {
    *(undefined1 *)(param_1 + 0x2f0) = *(undefined1 *)(param_2 + 0x2f0);
    *(undefined4 *)(param_1 + 0x2f4) = *(undefined4 *)(param_2 + 0x2f4);
  }
  if (*(int *)(param_1 + 0x2fc) != *(int *)(param_2 + 0x2fc)) {
    *(undefined1 *)(param_1 + 0x2f8) = *(undefined1 *)(param_2 + 0x2f8);
    *(undefined4 *)(param_1 + 0x2fc) = *(undefined4 *)(param_2 + 0x2fc);
  }
  if (*(int *)(param_1 + 0x304) != *(int *)(param_2 + 0x304)) {
    *(undefined1 *)(param_1 + 0x300) = *(undefined1 *)(param_2 + 0x300);
    *(undefined4 *)(param_1 + 0x304) = *(undefined4 *)(param_2 + 0x304);
  }
  if (*(int *)(param_1 + 0x30c) != *(int *)(param_2 + 0x30c)) {
    *(undefined1 *)(param_1 + 0x308) = *(undefined1 *)(param_2 + 0x308);
    *(undefined4 *)(param_1 + 0x30c) = *(undefined4 *)(param_2 + 0x30c);
  }
  *(undefined2 *)(param_1 + 0x310) = *(undefined2 *)(param_2 + 0x310);
  if (*(int *)(param_1 + 0x318) != *(int *)(param_2 + 0x318)) {
    *(undefined1 *)(param_1 + 0x314) = *(undefined1 *)(param_2 + 0x314);
    *(undefined4 *)(param_1 + 0x318) = *(undefined4 *)(param_2 + 0x318);
  }
  return param_1;
}



// FUNCTION 148c82dc2 FUN_148c82dc2 body=63 status=ok
// SIG undefined FUN_148c82dc2(void)

undefined1 FUN_148c82dc2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c82f64(param_2,param_3);
    param_3 = param_3 + 0xb0;
    param_2 = param_2 + 0xb0;
  }
  return 1;
}



// FUNCTION 148c82e2a FUN_148c82e2a body=59 status=ok
// SIG undefined FUN_148c82e2a(void)

undefined8 FUN_148c82e2a(longlong *param_1)

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



// FUNCTION 148c82e76 FUN_148c82e76 body=40 status=ok
// SIG undefined FUN_148c82e76(void)

void FUN_148c82e76(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    FUN_148c82eec(param_2);
    *(undefined1 *)(param_2 + 0xb0) = 0;
  }
  return;
}



// FUNCTION 148c82eec FUN_148c82eec body=120 status=ok
// SIG undefined FUN_148c82eec(void)

void FUN_148c82eec(longlong *param_1)

{
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148c82f64 FUN_148c82f64 body=275 status=ok
// SIG undefined FUN_148c82f64(void)

longlong FUN_148c82f64(longlong param_1,longlong param_2)

{
  if (*(int *)(param_1 + 0x10) != *(int *)(param_2 + 0x10)) {
    FUN_144a787a6(param_1,param_2);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  }
  if (*(int *)(param_1 + 0x28) != *(int *)(param_2 + 0x28)) {
    FUN_144a787a6(param_1 + 0x18,param_2 + 0x18);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  }
  if (*(int *)(param_1 + 0x40) != *(int *)(param_2 + 0x40)) {
    FUN_144a787a6(param_1 + 0x30,param_2 + 0x30);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  }
  if (*(int *)(param_1 + 0x58) != *(int *)(param_2 + 0x58)) {
    FUN_144a787a6(param_1 + 0x48,param_2 + 0x48);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  }
  if (*(int *)(param_1 + 0x70) != *(int *)(param_2 + 0x70)) {
    FUN_144a787a6(param_1 + 0x60,param_2 + 0x60);
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  }
  if (*(int *)(param_1 + 0x88) != *(int *)(param_2 + 0x88)) {
    FUN_144a787a6(param_1 + 0x78,param_2 + 0x78);
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  }
  if (*(int *)(param_1 + 0xa0) != *(int *)(param_2 + 0xa0)) {
    FUN_144a787a6(param_1 + 0x90,param_2 + 0x90);
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  }
  if (*(int *)(param_1 + 0xac) != *(int *)(param_2 + 0xac)) {
    *(undefined1 *)(param_1 + 0xa8) = *(undefined1 *)(param_2 + 0xa8);
    *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_2 + 0xac);
  }
  return param_1;
}



// FUNCTION 148c83078 FUN_148c83078 body=69 status=ok
// SIG undefined FUN_148c83078(void)

void FUN_148c83078(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,200);
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b8b7360;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  return;
}



// FUNCTION 148c830be FUN_148c830be body=53 status=ok
// SIG undefined FUN_148c830be(void)

void FUN_148c830be(undefined8 param_1,undefined8 *param_2)

{
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b8b7360;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  return;
}



// FUNCTION 148c83118 FUN_148c83118 body=63 status=ok
// SIG undefined FUN_148c83118(void)

undefined1 FUN_148c83118(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c8330c(param_2,param_3);
    param_3 = param_3 + 200;
    param_2 = param_2 + 200;
  }
  return 1;
}



// FUNCTION 148c83180 FUN_148c83180 body=59 status=ok
// SIG undefined FUN_148c83180(void)

undefined8 FUN_148c83180(longlong *param_1)

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



// FUNCTION 148c831cc FUN_148c831cc body=40 status=ok
// SIG undefined FUN_148c831cc(void)

void FUN_148c831cc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 200) == '\x01') {
    FUN_148c832a0(param_2);
    *(undefined1 *)(param_2 + 200) = 0;
  }
  return;
}



// FUNCTION 148c83242 FUN_148c83242 body=38 status=ok
// SIG undefined FUN_148c83242(void)

undefined8 FUN_148c83242(undefined8 param_1,int param_2)

{
  FUN_148c832a0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c83268 FUN_148c83268 body=55 status=ok
// SIG undefined FUN_148c83268(void)

void FUN_148c83268(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbba960 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbba960 = FUN_140002ddd(FUN_146606bc1,uVar1,L"OakUIData_Mayhem");
  }
  return;
}



// FUNCTION 148c832a0 FUN_148c832a0 body=66 status=ok
// SIG undefined FUN_148c832a0(void)

void FUN_148c832a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8b7360;
  FUN_148c832e2(param_1[0x16],*(undefined4 *)(param_1 + 0x17));
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_140fe7f26(param_1);
  return;
}



// FUNCTION 148c832e2 FUN_148c832e2 body=41 status=ok
// SIG undefined FUN_148c832e2(void)

void FUN_148c832e2(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148c82eec(param_1);
    param_1 = param_1 + 0xb0;
  }
  return;
}



// FUNCTION 148c8330c FUN_148c8330c body=82 status=ok
// SIG undefined FUN_148c8330c(void)

longlong FUN_148c8330c(longlong param_1,longlong param_2)

{
  FUN_1489fb7d2();
  FUN_148c8335e(param_1 + 0xb0,param_2 + 0xb0);
  if (*(int *)(param_1 + 0xc4) != *(int *)(param_2 + 0xc4)) {
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_2 + 0xc4);
  }
  return param_1;
}


