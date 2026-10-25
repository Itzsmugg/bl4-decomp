// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148c6a52c FUN_148c6a52c body=63 status=ok
// SIG undefined FUN_148c6a52c(void)

undefined1 FUN_148c6a52c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c6a690(param_2,param_3);
    param_3 = param_3 + 0x6e8;
    param_2 = param_2 + 0x6e8;
  }
  return 1;
}



// FUNCTION 148c6a594 FUN_148c6a594 body=59 status=ok
// SIG undefined FUN_148c6a594(void)

undefined8 FUN_148c6a594(longlong *param_1)

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



// FUNCTION 148c6a5e0 FUN_148c6a5e0 body=40 status=ok
// SIG undefined FUN_148c6a5e0(void)

void FUN_148c6a5e0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x6e8) == '\x01') {
    FUN_145e01cc4(param_2);
    *(undefined1 *)(param_2 + 0x6e8) = 0;
  }
  return;
}



// FUNCTION 148c6a656 FUN_148c6a656 body=57 status=ok
// SIG undefined FUN_148c6a656(void)

void FUN_148c6a656(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb7048 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb7048 = FUN_140002ddd(FUN_1466022d1,uVar1,L"OakUIWidgetData_VaultCards");
  }
  return;
}



// FUNCTION 148c6a690 FUN_148c6a690 body=160 status=ok
// SIG undefined FUN_148c6a690(void)

longlong FUN_148c6a690(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_1489fb7d2();
  FUN_148c6a3ea(param_1 + 0xb0,param_2 + 0xb0);
  FUN_1457e3a18(param_1 + 0xe8,param_2 + 0xe8);
  FUN_14596e30e(param_1 + 0x210,param_2 + 0x210);
  FUN_1413511f6(param_1 + 0x310,param_2 + 0x310);
  FUN_14135191a(param_1 + 1000,param_2 + 1000);
  uVar1 = *(undefined4 *)(param_2 + 0x654);
  uVar2 = *(undefined4 *)(param_2 + 0x658);
  uVar3 = *(undefined4 *)(param_2 + 0x65c);
  *(undefined4 *)(param_1 + 0x650) = *(undefined4 *)(param_2 + 0x650);
  *(undefined4 *)(param_1 + 0x654) = uVar1;
  *(undefined4 *)(param_1 + 0x658) = uVar2;
  *(undefined4 *)(param_1 + 0x65c) = uVar3;
  *(undefined8 *)(param_1 + 0x660) = *(undefined8 *)(param_2 + 0x660);
  FUN_1457fd360(param_1 + 0x668,param_2 + 0x668);
  return param_1;
}



// FUNCTION 148c6a732 FUN_148c6a732 body=87 status=ok
// SIG undefined FUN_148c6a732(void)

void FUN_148c6a732(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xd0);
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b8957f0;
  *(undefined4 *)((longlong)param_2 + 0xbc) = 0;
  *(undefined2 *)(param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc4) = 0;
  param_2[0x16] = 0;
  *(undefined4 *)((longlong)param_2 + 0xb7) = 0;
  return;
}



// FUNCTION 148c6a78a FUN_148c6a78a body=69 status=ok
// SIG undefined FUN_148c6a78a(void)

void FUN_148c6a78a(undefined8 param_1,undefined8 *param_2)

{
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b8957f0;
  *(undefined4 *)((longlong)param_2 + 0xbc) = 0;
  *(undefined2 *)(param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc4) = 0;
  param_2[0x16] = 0;
  *(undefined4 *)((longlong)param_2 + 0xb7) = 0;
  return;
}



// FUNCTION 148c6a7f4 FUN_148c6a7f4 body=90 status=ok
// SIG undefined FUN_148c6a7f4(void)

undefined1 FUN_148c6a7f4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1489fb7d2(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0xb4);
    uVar2 = *(undefined4 *)(param_3 + 0xb8);
    uVar3 = *(undefined4 *)(param_3 + 0xbc);
    uVar4 = *(undefined4 *)(param_3 + 0xbc);
    uVar5 = *(undefined4 *)(param_3 + 0xc0);
    uVar6 = *(undefined4 *)(param_3 + 0xc4);
    uVar7 = *(undefined4 *)(param_3 + 200);
    *(undefined4 *)(param_2 + 0xb0) = *(undefined4 *)(param_3 + 0xb0);
    *(undefined4 *)(param_2 + 0xb4) = uVar1;
    *(undefined4 *)(param_2 + 0xb8) = uVar2;
    *(undefined4 *)(param_2 + 0xbc) = uVar3;
    *(undefined4 *)(param_2 + 0xbc) = uVar4;
    *(undefined4 *)(param_2 + 0xc0) = uVar5;
    *(undefined4 *)(param_2 + 0xc4) = uVar6;
    *(undefined4 *)(param_2 + 200) = uVar7;
    param_2 = param_2 + 0xd0;
    param_3 = param_3 + 0xd0;
  }
  return 1;
}



// FUNCTION 148c6a876 FUN_148c6a876 body=59 status=ok
// SIG undefined FUN_148c6a876(void)

undefined8 FUN_148c6a876(longlong *param_1)

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



// FUNCTION 148c6a8c2 FUN_148c6a8c2 body=38 status=ok
// SIG undefined FUN_148c6a8c2(void)

void FUN_148c6a8c2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd0) == '\x01') {
    FUN_140fe7f26(param_2);
    *(undefined1 *)(param_2 + 0xd0) = 0;
  }
  return;
}



// FUNCTION 148c6a936 FUN_148c6a936 body=38 status=ok
// SIG undefined FUN_148c6a936(void)

undefined8 FUN_148c6a936(undefined8 param_1,int param_2)

{
  FUN_140fe7f26();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c6a95c FUN_148c6a95c body=55 status=ok
// SIG undefined FUN_148c6a95c(void)

void FUN_148c6a95c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb7060 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb7060 = FUN_140002ddd(FUN_146602363,uVar1,L"OakUIData_AmmoBar");
  }
  return;
}



// FUNCTION 148c6a994 FUN_148c6a994 body=106 status=ok
// SIG undefined FUN_148c6a994(void)

void FUN_148c6a994(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xb90);
  FUN_145854e74(param_2);
  *param_2 = &PTR_FUN_14b895980;
  *(undefined1 *)(param_2 + 0x16a) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb54) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb5c) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb64) = 0;
  *(undefined1 *)((longlong)param_2 + 0xb6c) = 2;
  *(undefined4 *)(param_2 + 0x16e) = 0;
  param_2[0x16f] = 0;
  param_2[0x170] = 0;
  *(undefined4 *)(param_2 + 0x171) = 0;
  return;
}



// FUNCTION 148c6a9fe FUN_148c6a9fe body=88 status=ok
// SIG undefined FUN_148c6a9fe(void)

void FUN_148c6a9fe(undefined8 param_1,undefined8 *param_2)

{
  FUN_145854e74(param_2);
  *param_2 = &PTR_FUN_14b895980;
  *(undefined1 *)(param_2 + 0x16a) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb54) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb5c) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb64) = 0;
  *(undefined1 *)((longlong)param_2 + 0xb6c) = 2;
  *(undefined4 *)(param_2 + 0x16e) = 0;
  param_2[0x16f] = 0;
  param_2[0x170] = 0;
  *(undefined4 *)(param_2 + 0x171) = 0;
  return;
}



// FUNCTION 148c6aa74 FUN_148c6aa74 body=63 status=ok
// SIG undefined FUN_148c6aa74(void)

undefined1 FUN_148c6aa74(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c6ac70(param_2,param_3);
    param_3 = param_3 + 0xb90;
    param_2 = param_2 + 0xb90;
  }
  return 1;
}



// FUNCTION 148c6aadc FUN_148c6aadc body=59 status=ok
// SIG undefined FUN_148c6aadc(void)

undefined8 FUN_148c6aadc(longlong *param_1)

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



// FUNCTION 148c6ab28 FUN_148c6ab28 body=40 status=ok
// SIG undefined FUN_148c6ab28(void)

void FUN_148c6ab28(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb90) == '\x01') {
    FUN_148c6ac38(param_2);
    *(undefined1 *)(param_2 + 0xb90) = 0;
  }
  return;
}



// FUNCTION 148c6ab9e FUN_148c6ab9e body=38 status=ok
// SIG undefined FUN_148c6ab9e(void)

undefined8 FUN_148c6ab9e(undefined8 param_1,int param_2)

{
  FUN_148c6ac38();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c6abc4 FUN_148c6abc4 body=55 status=ok
// SIG undefined FUN_148c6abc4(void)

void FUN_148c6abc4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb7078 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb7078 = FUN_140002ddd(FUN_1466023f5,uVar1,L"OakWidgetData_Bank");
  }
  return;
}



// FUNCTION 148c6abfc FUN_148c6abfc body=38 status=ok
// SIG undefined FUN_148c6abfc(void)

undefined8 FUN_148c6abfc(undefined8 param_1,int param_2)

{
  FUN_1412d6bec();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c6ac38 FUN_148c6ac38 body=56 status=ok
// SIG undefined FUN_148c6ac38(void)

void FUN_148c6ac38(longlong param_1)

{
  FUN_141286eab(*(undefined8 *)(param_1 + 0xb78),*(undefined4 *)(param_1 + 0xb80));
  if (*(longlong *)(param_1 + 0xb78) != 0) {
    FUN_1400020a8();
  }
  FUN_1458b3782(param_1);
  return;
}



// FUNCTION 148c6ac70 FUN_148c6ac70 body=238 status=ok
// SIG undefined FUN_148c6ac70(void)

longlong FUN_148c6ac70(longlong param_1,longlong param_2)

{
  FUN_148c6ad5e();
  *(undefined1 *)(param_1 + 0xb50) = *(undefined1 *)(param_2 + 0xb50);
  if (*(int *)(param_1 + 0xb58) != *(int *)(param_2 + 0xb58)) {
    *(undefined4 *)(param_1 + 0xb54) = *(undefined4 *)(param_2 + 0xb54);
    *(undefined4 *)(param_1 + 0xb58) = *(undefined4 *)(param_2 + 0xb58);
  }
  if (*(int *)(param_1 + 0xb60) != *(int *)(param_2 + 0xb60)) {
    *(undefined4 *)(param_1 + 0xb5c) = *(undefined4 *)(param_2 + 0xb5c);
    *(undefined4 *)(param_1 + 0xb60) = *(undefined4 *)(param_2 + 0xb60);
  }
  if (*(int *)(param_1 + 0xb68) != *(int *)(param_2 + 0xb68)) {
    *(undefined4 *)(param_1 + 0xb64) = *(undefined4 *)(param_2 + 0xb64);
    *(undefined4 *)(param_1 + 0xb68) = *(undefined4 *)(param_2 + 0xb68);
  }
  if (*(int *)(param_1 + 0xb70) != *(int *)(param_2 + 0xb70)) {
    *(undefined1 *)(param_1 + 0xb6c) = *(undefined1 *)(param_2 + 0xb6c);
    *(undefined4 *)(param_1 + 0xb70) = *(undefined4 *)(param_2 + 0xb70);
  }
  if ((*(int *)(param_1 + 0xb88) == 0) || (*(int *)(param_1 + 0xb88) != *(int *)(param_2 + 0xb88)))
  {
    *(int *)(param_1 + 0xb88) = *(int *)(param_2 + 0xb88);
    FUN_145916980(param_1 + 0xb78,param_2 + 0xb78);
  }
  return param_1;
}



// FUNCTION 148c6ad5e FUN_148c6ad5e body=725 status=ok
// SIG undefined FUN_148c6ad5e(void)

longlong FUN_148c6ad5e(longlong param_1,longlong param_2)

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
  
  FUN_148c6b034();
  FUN_144a787a6(param_1 + 0x3a0,param_2 + 0x3a0);
  FUN_144a787a6(param_1 + 0x3b0,param_2 + 0x3b0);
  plVar1 = *(longlong **)(param_2 + 0x3c0);
  plVar2 = *(longlong **)(param_1 + 0x3c0);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x3c0) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x3c8) = *(undefined4 *)(param_2 + 0x3c8);
  if (*(int *)(param_1 + 0x3d4) != *(int *)(param_2 + 0x3d4)) {
    *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_2 + 0x3d0);
    *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_2 + 0x3d4);
  }
  if (*(int *)(param_1 + 0x3dc) != *(int *)(param_2 + 0x3dc)) {
    *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_2 + 0x3d8);
    *(undefined4 *)(param_1 + 0x3dc) = *(undefined4 *)(param_2 + 0x3dc);
  }
  *(undefined4 *)(param_1 + 0x3e0) = *(undefined4 *)(param_2 + 0x3e0);
  if (*(int *)(param_1 + 1000) != *(int *)(param_2 + 1000)) {
    *(undefined4 *)(param_1 + 0x3e4) = *(undefined4 *)(param_2 + 0x3e4);
    *(undefined4 *)(param_1 + 1000) = *(undefined4 *)(param_2 + 1000);
  }
  *(undefined4 *)(param_1 + 0x3ec) = *(undefined4 *)(param_2 + 0x3ec);
  FUN_148c6b1b0(param_1 + 0x3f0,param_2 + 0x3f0);
  FUN_148c6b1b0(param_1 + 0x400,param_2 + 0x400);
  if (*(int *)(param_1 + 0x420) != *(int *)(param_2 + 0x420) || *(int *)(param_1 + 0x420) == 0) {
    *(int *)(param_1 + 0x420) = *(int *)(param_2 + 0x420);
    FUN_145916980(param_1 + 0x410,param_2 + 0x410);
  }
  FUN_14135191a(param_1 + 0x428,param_2 + 0x428);
  FUN_14135191a(param_1 + 0x690,param_2 + 0x690);
  uVar3 = *(undefined4 *)(param_2 + 0x8fc);
  uVar4 = *(undefined4 *)(param_2 + 0x900);
  uVar5 = *(undefined4 *)(param_2 + 0x904);
  uVar6 = *(undefined4 *)(param_2 + 0x908);
  uVar7 = *(undefined4 *)(param_2 + 0x90c);
  uVar8 = *(undefined4 *)(param_2 + 0x910);
  uVar9 = *(undefined4 *)(param_2 + 0x914);
  *(undefined4 *)(param_1 + 0x8f8) = *(undefined4 *)(param_2 + 0x8f8);
  *(undefined4 *)(param_1 + 0x8fc) = uVar3;
  *(undefined4 *)(param_1 + 0x900) = uVar4;
  *(undefined4 *)(param_1 + 0x904) = uVar5;
  *(undefined4 *)(param_1 + 0x908) = uVar6;
  *(undefined4 *)(param_1 + 0x90c) = uVar7;
  *(undefined4 *)(param_1 + 0x910) = uVar8;
  *(undefined4 *)(param_1 + 0x914) = uVar9;
  FUN_1457fd360(param_1 + 0x918,param_2 + 0x918);
  FUN_1457fd360(param_1 + 0x998,param_2 + 0x998);
  FUN_1457fd360(param_1 + 0xa18,param_2 + 0xa18);
  if (*(int *)(param_1 + 0xa9c) != *(int *)(param_2 + 0xa9c)) {
    *(undefined4 *)(param_1 + 0xa98) = *(undefined4 *)(param_2 + 0xa98);
    *(undefined4 *)(param_1 + 0xa9c) = *(undefined4 *)(param_2 + 0xa9c);
  }
  *(undefined4 *)(param_1 + 0xaa0) = *(undefined4 *)(param_2 + 0xaa0);
  if (*(int *)(param_1 + 0xab8) != *(int *)(param_2 + 0xab8)) {
    FUN_144a787a6(param_1 + 0xaa8,param_2 + 0xaa8);
    *(undefined4 *)(param_1 + 0xab8) = *(undefined4 *)(param_2 + 0xab8);
  }
  uVar3 = *(undefined4 *)(param_2 + 0xac4);
  uVar4 = *(undefined4 *)(param_2 + 0xac8);
  uVar5 = *(undefined4 *)(param_2 + 0xacc);
  *(undefined4 *)(param_1 + 0xac0) = *(undefined4 *)(param_2 + 0xac0);
  *(undefined4 *)(param_1 + 0xac4) = uVar3;
  *(undefined4 *)(param_1 + 0xac8) = uVar4;
  *(undefined4 *)(param_1 + 0xacc) = uVar5;
  if (*(int *)(param_1 + 0xad4) != *(int *)(param_2 + 0xad4)) {
    *(undefined4 *)(param_1 + 0xad0) = *(undefined4 *)(param_2 + 0xad0);
    *(undefined4 *)(param_1 + 0xad4) = *(undefined4 *)(param_2 + 0xad4);
  }
  FUN_148c6b20e(param_1 + 0xad8,param_2 + 0xad8);
  if (*(int *)(param_1 + 0xaec) != *(int *)(param_2 + 0xaec)) {
    *(undefined4 *)(param_1 + 0xae8) = *(undefined4 *)(param_2 + 0xae8);
    *(undefined4 *)(param_1 + 0xaec) = *(undefined4 *)(param_2 + 0xaec);
  }
  FUN_148c6b26e(param_1 + 0xaf0,param_2 + 0xaf0);
  *(undefined1 *)(param_1 + 0xb00) = *(undefined1 *)(param_2 + 0xb00);
  FUN_148c6b2c6(param_1 + 0xb10,param_2 + 0xb10);
  return param_1;
}



// FUNCTION 148c6b034 FUN_148c6b034 body=380 status=ok
// SIG undefined FUN_148c6b034(void)

longlong FUN_148c6b034(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  
  FUN_1489fb7d2();
  FUN_1457fd360(param_1 + 0xb0,param_2 + 0xb0);
  FUN_1457fd360(param_1 + 0x130,param_2 + 0x130);
  FUN_1457fd360(param_1 + 0x1b0,param_2 + 0x1b0);
  FUN_1457fd360(param_1 + 0x230,param_2 + 0x230);
  FUN_148c56694(param_1 + 0x2b0,param_2 + 0x2b0);
  FUN_140b855d0(param_1 + 0x2c0,param_2 + 0x2c0);
  FUN_140bee9ec(param_1 + 0x310,param_2 + 0x310);
  *(undefined4 *)(param_1 + 800) = *(undefined4 *)(param_2 + 800);
  *(undefined2 *)(param_1 + 0x330) = *(undefined2 *)(param_2 + 0x330);
  *(undefined8 *)(param_1 + 0x328) = *(undefined8 *)(param_2 + 0x328);
  iVar3 = *(int *)(param_2 + 0x340) + -1;
  if (*(int *)(param_2 + 0x340) == 0) {
    iVar3 = 0;
  }
  FUN_1402980a2(param_1 + 0x338,*(undefined8 *)(param_2 + 0x338),iVar3);
  FUN_144a787a6(param_1 + 0x348,param_2 + 0x348);
  FUN_144a787a6(param_1 + 0x358,param_2 + 0x358);
  *(undefined8 *)(param_1 + 0x368) = *(undefined8 *)(param_2 + 0x368);
  plVar1 = *(longlong **)(param_2 + 0x370);
  plVar2 = *(longlong **)(param_1 + 0x370);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x370) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x378) = *(undefined4 *)(param_2 + 0x378);
  FUN_144a787a6(param_1 + 0x380,param_2 + 0x380);
  *(undefined8 *)(param_1 + 0x390) = *(undefined8 *)(param_2 + 0x390);
  *(undefined2 *)(param_1 + 0x398) = *(undefined2 *)(param_2 + 0x398);
  return param_1;
}



// FUNCTION 148c6b1b0 FUN_148c6b1b0 body=93 status=ok
// SIG undefined FUN_148c6b1b0(void)

undefined8 * FUN_148c6b1b0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1412d6a39(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c6b3ea(param_1,iVar1);
      FUN_148c6b45c(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c6b20e FUN_148c6b20e body=95 status=ok
// SIG undefined FUN_148c6b20e(void)

undefined8 * FUN_148c6b20e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1457fcfbf(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c6bb08(param_1,iVar1);
      FUN_148c6bb6a(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c6b26e FUN_148c6b26e body=88 status=ok
// SIG undefined FUN_148c6b26e(void)

undefined8 * FUN_148c6b26e(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148c6bbc2(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 2);
      }
    }
  }
  return param_1;
}



// FUNCTION 148c6b2c6 FUN_148c6b2c6 body=290 status=ok
// SIG undefined FUN_148c6b2c6(void)

longlong * FUN_148c6b2c6(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  local_88 = (longlong *)0x0;
  if (local_98 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)*plVar7)(plVar7,&local_88);
  }
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = (longlong *)param_1[2];
  uStack_40 = param_1[3];
  local_38 = param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  lVar5 = local_28;
  lVar6 = uStack_20;
  lVar3 = local_38;
  lVar4 = uStack_30;
  lVar2 = uStack_40;
  lVar1 = uStack_50;
  param_1[6] = CONCAT44(uStack_64,local_68);
  param_1[7] = CONCAT44(uStack_5c,uStack_60);
  param_1[4] = CONCAT44(uStack_74,local_78);
  param_1[5] = CONCAT44(uStack_6c,uStack_70);
  param_1[2] = (longlong)local_88;
  param_1[3] = CONCAT44(uStack_7c,uStack_80);
  *param_1 = local_98;
  param_1[1] = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_98 = local_58;
  local_88 = local_48;
  uStack_50 = lVar1;
  uStack_40 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  local_28 = lVar5;
  uStack_20 = lVar6;
  if (local_58 != 0) {
    plVar7 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c6b3ea FUN_148c6b3ea body=114 status=ok
// SIG undefined FUN_148c6b3ea(void)

void FUN_148c6b3ea(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x268,8);
    iVar2 = (int)(uVar1 / 0x268);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x268,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c6b45c FUN_148c6b45c body=60 status=ok
// SIG undefined FUN_148c6b45c(void)

void FUN_148c6b45c(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c6b498(param_1,param_2);
    param_1 = param_1 + 0x268;
    param_2 = param_2 + 0x268;
  }
  return;
}



// FUNCTION 148c6b498 FUN_148c6b498 body=1167 status=ok
// SIG undefined FUN_148c6b498(void)

undefined8 * FUN_148c6b498(undefined8 *param_1,undefined8 *param_2)

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
  param_1[0xe] = 0;
  iVar1 = *(int *)(param_2 + 0xf);
  uVar3 = param_2[0xe];
  *(int *)(param_1 + 0xf) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  }
  else {
    FUN_140b856de(param_1 + 0xe,iVar1,0);
    FUN_140b8566a(param_1[0xe],uVar3,iVar1);
  }
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
  uVar4 = *(undefined4 *)(param_2 + 0x10);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x84);
  uVar6 = *(undefined4 *)(param_2 + 0x11);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x8c);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x94);
  uVar9 = *(undefined4 *)(param_2 + 0x13);
  uVar10 = *(undefined4 *)((longlong)param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar8;
  *(undefined4 *)(param_1 + 0x13) = uVar9;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar10;
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar5;
  *(undefined4 *)(param_1 + 0x11) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar7;
  param_1[0x15] = 0;
  iVar1 = *(int *)(param_2 + 0x16);
  pvVar2 = (void *)param_2[0x15];
  *(int *)(param_1 + 0x16) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x15,iVar1,0);
    memcpy((void *)param_1[0x15],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0x17] = 0;
  iVar1 = *(int *)(param_2 + 0x18);
  pvVar2 = (void *)param_2[0x17];
  *(int *)(param_1 + 0x18) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x17,iVar1,0);
    memcpy((void *)param_1[0x17],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0x19] = 0;
  iVar1 = *(int *)(param_2 + 0x1a);
  pvVar2 = (void *)param_2[0x19];
  *(int *)(param_1 + 0x1a) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x19,iVar1,0);
    memcpy((void *)param_1[0x19],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0x1b] = 0;
  iVar1 = *(int *)(param_2 + 0x1c);
  pvVar2 = (void *)param_2[0x1b];
  *(int *)(param_1 + 0x1c) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x1b,iVar1,0);
    memcpy((void *)param_1[0x1b],pvVar2,(longlong)iVar1 * 2);
  }
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
  param_1[0x1f] = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  pvVar2 = (void *)param_2[0x1f];
  *(int *)(param_1 + 0x20) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x1f,iVar1,0);
    memcpy((void *)param_1[0x1f],pvVar2,(longlong)iVar1 * 2);
  }
  FUN_148c6b928(param_1 + 0x21,param_2 + 0x21);
  FUN_14106b1d2(param_1 + 0x2f,param_2 + 0x2f);
  uVar3 = param_2[0x4b];
  param_1[0x4a] = param_2[0x4a];
  param_1[0x4b] = uVar3;
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  return param_1;
}



// FUNCTION 148c6b928 FUN_148c6b928 body=479 status=ok
// SIG undefined FUN_148c6b928(void)

undefined8 * FUN_148c6b928(undefined8 *param_1,undefined8 *param_2)

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
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  param_1[0xb] = 0;
  iVar1 = *(int *)(param_2 + 0xc);
  pvVar2 = (void *)param_2[0xb];
  *(int *)(param_1 + 0xc) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xb,iVar1,0);
    memcpy((void *)param_1[0xb],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  return param_1;
}



// FUNCTION 148c6bb08 FUN_148c6bb08 body=98 status=ok
// SIG undefined FUN_148c6bb08(void)

void FUN_148c6bb08(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 6,0x10);
    iVar1 = (int)(uVar2 >> 6);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x40,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c6bb6a FUN_148c6bb6a body=88 status=ok
// SIG undefined FUN_148c6bb6a(void)

void FUN_148c6bb6a(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x10);
    puVar4 = (undefined8 *)(param_2 + 0x20);
    do {
      lVar1 = puVar4[-4];
      puVar3[-2] = lVar1;
      *puVar3 = 0;
      if (lVar1 != 0) {
        puVar2 = (undefined8 *)puVar4[-2];
        if ((undefined8 *)puVar4[-2] == (undefined8 *)0x0) {
          puVar2 = puVar4;
        }
        (**(code **)*puVar2)(puVar2,puVar3);
      }
      puVar3 = puVar3 + 8;
      puVar4 = puVar4 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148c6bbc2 FUN_148c6bbc2 body=98 status=ok
// SIG undefined FUN_148c6bbc2(void)

void FUN_148c6bbc2(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 2,4);
    iVar1 = (int)(uVar2 >> 2);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,4,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c6bc54 FUN_148c6bc54 body=54 status=ok
// SIG undefined FUN_148c6bc54(void)

undefined1 FUN_148c6bc54(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c6be4e(param_2,param_3);
    param_3 = param_3 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return 1;
}



// FUNCTION 148c6bcb2 FUN_148c6bcb2 body=59 status=ok
// SIG undefined FUN_148c6bcb2(void)

undefined8 FUN_148c6bcb2(longlong *param_1)

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



// FUNCTION 148c6bcf8 FUN_148c6bcf8 body=34 status=ok
// SIG undefined FUN_148c6bcf8(void)

void FUN_148c6bcf8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_148c6bdf2(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 148c6bd68 FUN_148c6bd68 body=137 status=ok
// SIG undefined FUN_148c6bd68(void)

longlong FUN_148c6bd68(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_1400b22c2(param_1,&DAT_149e02088);
  FUN_1400b22c2(param_1 + 0x10,&DAT_149e02088);
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
  FUN_140056680(param_1 + 0x40,&DAT_149dfb77a);
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) & 0xf0;
  return param_1;
}



// FUNCTION 148c6bdf2 FUN_148c6bdf2 body=91 status=ok
// SIG undefined FUN_148c6bdf2(void)

void FUN_148c6bdf2(longlong *param_1)

{
  if (param_1[8] != 0) {
    FUN_1400020a8();
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



// FUNCTION 148c6be4e FUN_148c6be4e body=163 status=ok
// SIG undefined FUN_148c6be4e(void)

longlong FUN_148c6be4e(longlong param_1,longlong param_2)

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
  FUN_144a787a6(param_1 + 0x40,param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined1 *)(param_1 + 0x54) = *(undefined1 *)(param_2 + 0x54);
  return param_1;
}



// FUNCTION 148c6bf26 FUN_148c6bf26 body=63 status=ok
// SIG undefined FUN_148c6bf26(void)

undefined1 FUN_148c6bf26(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c6c44a(param_2,param_3);
    param_3 = param_3 + 0x1c8;
    param_2 = param_2 + 0x1c8;
  }
  return 1;
}



// FUNCTION 148c6bf8e FUN_148c6bf8e body=59 status=ok
// SIG undefined FUN_148c6bf8e(void)

undefined8 FUN_148c6bf8e(longlong *param_1)

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



// FUNCTION 148c6bfda FUN_148c6bfda body=40 status=ok
// SIG undefined FUN_148c6bfda(void)

void FUN_148c6bfda(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1c8) == '\x01') {
    FUN_148c6c364(param_2);
    *(undefined1 *)(param_2 + 0x1c8) = 0;
  }
  return;
}



// FUNCTION 148c6c050 FUN_148c6c050 body=260 status=ok
// SIG undefined FUN_148c6c050(void)

undefined8 * FUN_148c6c050(undefined8 *param_1)

{
  memset(param_1,0,0xb0);
  FUN_1408f3f9e(param_1);
  *param_1 = &PTR_FUN_14b895f50;
  FUN_140056680(param_1 + 0x16,&DAT_149dfb77a);
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x29] = &PTR_FUN_14b895f80;
  *(undefined4 *)(param_1 + 0x37) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0;
  *(undefined1 *)(param_1 + 0x36) = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  return param_1;
}



// FUNCTION 148c6c154 FUN_148c6c154 body=38 status=ok
// SIG undefined FUN_148c6c154(void)

undefined8 FUN_148c6c154(undefined8 param_1,int param_2)

{
  FUN_148c6c364();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c6c17a FUN_148c6c17a body=55 status=ok
// SIG undefined FUN_148c6c17a(void)

void FUN_148c6c17a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb70a8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb70a8 = FUN_140002ddd(FUN_146602519,uVar1,L"OakWidgetData_BankQuickTransfer");
  }
  return;
}



// FUNCTION 148c6c1bc FUN_148c6c1bc body=38 status=ok
// SIG undefined FUN_148c6c1bc(void)

undefined8 FUN_148c6c1bc(undefined8 param_1,int param_2)

{
  FUN_14591706c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c6c1e2 FUN_148c6c1e2 body=130 status=ok
// SIG undefined FUN_148c6c1e2(void)

ulonglong FUN_148c6c1e2(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 unaff_RBX;
  ulonglong uVar8;
  ulonglong uVar10;
  undefined7 uVar9;
  
  iVar1 = *(int *)(param_1 + 0x10);
  uVar9 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar8 = CONCAT71(uVar9,1);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    uVar10 = 0;
    do {
      pcVar3 = *(code **)(lVar2 + uVar10);
      if (pcVar3 != (code *)0x0) {
        plVar4 = *(longlong **)(lVar2 + 0x10 + uVar10);
        plVar7 = (longlong *)(lVar2 + 0x20 + uVar10);
        if (plVar4 != (longlong *)0x0) {
          plVar7 = plVar4;
        }
        uVar6 = (**(code **)(*plVar7 + 8))();
        cVar5 = (*pcVar3)(uVar6,param_2);
        if (cVar5 == '\0') {
          uVar8 = CONCAT71(uVar9,(int)(~uVar10 >> 6) == 0);
          break;
        }
      }
      uVar10 = uVar10 + 0x40;
    } while ((longlong)iVar1 * 0x40 != uVar10);
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 148c6c264 FUN_148c6c264 body=106 status=ok
// SIG undefined FUN_148c6c264(void)

void FUN_148c6c264(longlong *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,&local_28);
  FUN_148c6c316(param_1 + 1,&local_28);
  FUN_141352c8a(local_28,local_20);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c6c2d0 FUN_148c6c2d0 body=69 status=ok
// SIG undefined FUN_148c6c2d0(void)

undefined8 * FUN_148c6c2d0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b895fa0;
  FUN_141352c8a(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c6c316 FUN_148c6c316 body=78 status=ok
// SIG undefined FUN_148c6c316(void)

longlong * FUN_148c6c316(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_141352c8a(*param_1,(int)param_1[1]);
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



// FUNCTION 148c6c364 FUN_148c6c364 body=119 status=ok
// SIG undefined FUN_148c6c364(void)

void FUN_148c6c364(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b895f50;
  FUN_14591706c(param_1 + 0x29);
  FUN_148c6c3dc(param_1 + 0x22);
  FUN_148c6c3dc(param_1 + 0x1b);
  FUN_148c6c424(param_1[0x18],*(undefined4 *)(param_1 + 0x19));
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_140fe7f26(param_1);
  return;
}



// FUNCTION 148c6c3dc FUN_148c6c3dc body=72 status=ok
// SIG undefined FUN_148c6c3dc(void)

void FUN_148c6c3dc(longlong param_1)

{
  FUN_1412d6a39(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  FUN_141286eab(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148c6c424 FUN_148c6c424 body=38 status=ok
// SIG undefined FUN_148c6c424(void)

void FUN_148c6c424(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148c6bdf2(param_1);
    param_1 = param_1 + 0x58;
  }
  return;
}



// FUNCTION 148c6c44a FUN_148c6c44a body=192 status=ok
// SIG undefined FUN_148c6c44a(void)

longlong FUN_148c6c44a(longlong param_1,longlong param_2)

{
  FUN_1489fb7d2();
  FUN_144a787a6(param_1 + 0xb0,param_2 + 0xb0);
  FUN_148c6c50a(param_1 + 0xc0,param_2 + 0xc0);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  FUN_148c6c56a(param_1 + 0xd8,param_2 + 0xd8);
  FUN_148c6c56a(param_1 + 0x110,param_2 + 0x110);
  if (*(int *)(param_1 + 0x1b8) != *(int *)(param_2 + 0x1b8)) {
    FUN_148c6c7b2(param_1 + 0x148,param_2 + 0x148);
    *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_2 + 0x1b8);
  }
  if (*(int *)(param_1 + 0x1c4) != *(int *)(param_2 + 0x1c4)) {
    *(undefined1 *)(param_1 + 0x1c0) = *(undefined1 *)(param_2 + 0x1c0);
    *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(param_2 + 0x1c4);
  }
  return param_1;
}



// FUNCTION 148c6c50a FUN_148c6c50a body=95 status=ok
// SIG undefined FUN_148c6c50a(void)

undefined8 * FUN_148c6c50a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_148c6c424(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c6c5de(param_1,iVar1);
      FUN_148c6c64d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c6c56a FUN_148c6c56a body=115 status=ok
// SIG undefined FUN_148c6c56a(void)

undefined4 * FUN_148c6c56a(undefined4 *param_1,undefined4 *param_2)

{
  if (param_1[1] != param_2[1]) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  if (param_1[3] != param_2[3]) {
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
  }
  if (param_1[8] != param_2[8] || param_1[8] == 0) {
    param_1[8] = param_2[8];
    FUN_145916980(param_1 + 4,param_2 + 4);
  }
  FUN_148c6b1b0(param_1 + 10,param_2 + 10);
  return param_1;
}



// FUNCTION 148c6c5de FUN_148c6c5de body=111 status=ok
// SIG undefined FUN_148c6c5de(void)

void FUN_148c6c5de(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c6c64d FUN_148c6c64d body=52 status=ok
// SIG undefined FUN_148c6c64d(void)

void FUN_148c6c64d(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c6c682(param_1,param_2);
    param_1 = param_1 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return;
}



// FUNCTION 148c6c682 FUN_148c6c682 body=303 status=ok
// SIG undefined FUN_148c6c682(void)

undefined8 * FUN_148c6c682(undefined8 *param_1,undefined8 *param_2)

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
  *(undefined1 *)((longlong)param_1 + 0x54) = *(undefined1 *)((longlong)param_2 + 0x54);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  return param_1;
}



// FUNCTION 148c6c7b2 FUN_148c6c7b2 body=106 status=ok
// SIG undefined FUN_148c6c7b2(void)

longlong FUN_148c6c7b2(longlong param_1,longlong param_2)

{
  FUN_148c6c81c(param_1 + 8,param_2 + 8);
  FUN_140bee9ec(param_1 + 0x18,param_2 + 0x18);
  FUN_140bee9ec(param_1 + 0x28,param_2 + 0x28);
  FUN_140bee9ec(param_1 + 0x38,param_2 + 0x38);
  FUN_140bee9ec(param_1 + 0x48,param_2 + 0x48);
  FUN_140bee9ec(param_1 + 0x58,param_2 + 0x58);
  *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)(param_2 + 0x68);
  return param_1;
}



// FUNCTION 148c6c81c FUN_148c6c81c body=93 status=ok
// SIG undefined FUN_148c6c81c(void)

undefined8 * FUN_148c6c81c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_141352c8a(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c6c87a(param_1,iVar1);
      FUN_148c6c8dc(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c6c87a FUN_148c6c87a body=98 status=ok
// SIG undefined FUN_148c6c87a(void)

void FUN_148c6c87a(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 6,0x10);
    iVar1 = (int)(uVar2 >> 6);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x40,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c6c8dc FUN_148c6c8dc body=88 status=ok
// SIG undefined FUN_148c6c8dc(void)

void FUN_148c6c8dc(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x10);
    puVar4 = (undefined8 *)(param_2 + 0x20);
    do {
      lVar1 = puVar4[-4];
      puVar3[-2] = lVar1;
      *puVar3 = 0;
      if (lVar1 != 0) {
        puVar2 = (undefined8 *)puVar4[-2];
        if ((undefined8 *)puVar4[-2] == (undefined8 *)0x0) {
          puVar2 = puVar4;
        }
        (**(code **)*puVar2)(puVar2,puVar3);
      }
      puVar3 = puVar3 + 8;
      puVar4 = puVar4 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148c6c936 FUN_148c6c936 body=48 status=ok
// SIG undefined FUN_148c6c936(void)

void FUN_148c6c936(undefined8 param_1,longlong param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  FUN_1400b22c2(param_2 + 0x10,&DAT_149e02088);
  return;
}



// FUNCTION 148c6c966 FUN_148c6c966 body=48 status=ok
// SIG undefined FUN_148c6c966(void)

void FUN_148c6c966(undefined8 param_1,longlong param_2)

{
  FUN_1400b22c2(param_2,&DAT_149e02088);
  FUN_1400b22c2(param_2 + 0x10,&DAT_149e02088);
  return;
}



// FUNCTION 148c6c996 FUN_148c6c996 body=47 status=ok
// SIG undefined FUN_148c6c996(void)

void FUN_148c6c996(undefined8 param_1,longlong *param_2)

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



// FUNCTION 148c6c9dc FUN_148c6c9dc body=67 status=ok
// SIG undefined FUN_148c6c9dc(void)

undefined1 FUN_148c6c9dc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 148c6ca48 FUN_148c6ca48 body=59 status=ok
// SIG undefined FUN_148c6ca48(void)

undefined8 FUN_148c6ca48(longlong *param_1)

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



// FUNCTION 148c6cae6 FUN_148c6cae6 body=51 status=ok
// SIG undefined FUN_148c6cae6(void)

void FUN_148c6cae6(longlong *param_1)

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



// FUNCTION 148c6cb4e FUN_148c6cb4e body=54 status=ok
// SIG undefined FUN_148c6cb4e(void)

undefined1 FUN_148c6cb4e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14054c6c4(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 148c6cbac FUN_148c6cbac body=59 status=ok
// SIG undefined FUN_148c6cbac(void)

undefined8 FUN_148c6cbac(longlong *param_1)

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



// FUNCTION 148c6cbf2 FUN_148c6cbf2 body=37 status=ok
// SIG undefined FUN_148c6cbf2(void)

void FUN_148c6cbf2(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 148c6cc68 FUN_148c6cc68 body=112 status=ok
// SIG undefined FUN_148c6cc68(void)

void FUN_148c6cc68(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xf8);
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b8963e0;
  *(undefined4 *)(param_2 + 0x16) = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  FUN_1400b22c2(param_2 + 0x19,&DAT_149e02088);
  *(undefined1 *)(param_2 + 0x1b) = 0;
  FUN_144a5dc74(param_2 + 0x1c);
  *(undefined4 *)(param_2 + 0x1e) = 0;
  return;
}



// FUNCTION 148c6ccd8 FUN_148c6ccd8 body=96 status=ok
// SIG undefined FUN_148c6ccd8(void)

void FUN_148c6ccd8(undefined8 param_1,undefined8 *param_2)

{
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b8963e0;
  *(undefined4 *)(param_2 + 0x16) = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  FUN_1400b22c2(param_2 + 0x19,&DAT_149e02088);
  *(undefined1 *)(param_2 + 0x1b) = 0;
  FUN_144a5dc74(param_2 + 0x1c);
  *(undefined4 *)(param_2 + 0x1e) = 0;
  return;
}



// FUNCTION 148c6cd5c FUN_148c6cd5c body=63 status=ok
// SIG undefined FUN_148c6cd5c(void)

undefined1 FUN_148c6cd5c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c6cf38(param_2,param_3);
    param_3 = param_3 + 0xf8;
    param_2 = param_2 + 0xf8;
  }
  return 1;
}



// FUNCTION 148c6cdc4 FUN_148c6cdc4 body=59 status=ok
// SIG undefined FUN_148c6cdc4(void)

undefined8 FUN_148c6cdc4(longlong *param_1)

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



// FUNCTION 148c6ce10 FUN_148c6ce10 body=40 status=ok
// SIG undefined FUN_148c6ce10(void)

void FUN_148c6ce10(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf8) == '\x01') {
    FUN_148c6cee4(param_2);
    *(undefined1 *)(param_2 + 0xf8) = 0;
  }
  return;
}



// FUNCTION 148c6ce86 FUN_148c6ce86 body=38 status=ok
// SIG undefined FUN_148c6ce86(void)

undefined8 FUN_148c6ce86(undefined8 param_1,int param_2)

{
  FUN_148c6cee4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c6ceac FUN_148c6ceac body=55 status=ok
// SIG undefined FUN_148c6ceac(void)

void FUN_148c6ceac(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb7180 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb7180 = FUN_140002ddd(FUN_1466026cf,uVar1,L"ExploreData");
  }
  return;
}



// FUNCTION 148c6cee4 FUN_148c6cee4 body=83 status=ok
// SIG undefined FUN_148c6cee4(void)

void FUN_148c6cee4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8963e0;
  if ((longlong *)param_1[0x1c] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x1c] + 0x10))();
  }
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_140fe7f26(param_1);
  return;
}



// FUNCTION 148c6cf38 FUN_148c6cf38 body=162 status=ok
// SIG undefined FUN_148c6cf38(void)

longlong FUN_148c6cf38(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_1489fb7d2();
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  FUN_144a787a6(param_1 + 0xb8,param_2 + 0xb8);
  FUN_144a787a6(param_1 + 200,param_2 + 200);
  *(undefined1 *)(param_1 + 0xd8) = *(undefined1 *)(param_2 + 0xd8);
  plVar1 = *(longlong **)(param_2 + 0xe0);
  plVar2 = *(longlong **)(param_1 + 0xe0);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0xe0) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
  return param_1;
}



// FUNCTION 148c6cfdc FUN_148c6cfdc body=52 status=ok
// SIG undefined FUN_148c6cfdc(void)

void FUN_148c6cfdc(undefined8 param_1,undefined8 *param_2)

{
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[4] = 0;
  FUN_1400b22c2(param_2 + 2,&DAT_149e02088);
  *(undefined1 *)(param_2 + 4) = 10;
  return;
}



// FUNCTION 148c6d010 FUN_148c6d010 body=40 status=ok
// SIG undefined FUN_148c6d010(void)

void FUN_148c6d010(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1400b22c2(param_2 + 2,&DAT_149e02088);
  *(undefined1 *)(param_2 + 4) = 10;
  return;
}



// FUNCTION 148c6d056 FUN_148c6d056 body=81 status=ok
// SIG undefined FUN_148c6d056(void)

undefined1 FUN_148c6d056(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      FUN_148c6d1ea(param_2 + -0x10,param_3 + -0x10);
      FUN_144a787a6(param_2,param_3);
      *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_3 + 0x10);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c6d0d0 FUN_148c6d0d0 body=59 status=ok
// SIG undefined FUN_148c6d0d0(void)

undefined8 FUN_148c6d0d0(longlong *param_1)

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



// FUNCTION 148c6d116 FUN_148c6d116 body=34 status=ok
// SIG undefined FUN_148c6d116(void)

void FUN_148c6d116(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_148c6d186(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 148c6d186 FUN_148c6d186 body=58 status=ok
// SIG undefined FUN_148c6d186(void)

void FUN_148c6d186(longlong *param_1)

{
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_148c6d1c0(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148c6d1c0 FUN_148c6d1c0 body=41 status=ok
// SIG undefined FUN_148c6d1c0(void)

void FUN_148c6d1c0(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148c6cee4(param_1);
    param_1 = param_1 + 0xf8;
  }
  return;
}



// FUNCTION 148c6d1ea FUN_148c6d1ea body=95 status=ok
// SIG undefined FUN_148c6d1ea(void)

undefined8 * FUN_148c6d1ea(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_148c6d1c0(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c6d24a(param_1,iVar1);
      FUN_148c6d2c0(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c6d24a FUN_148c6d24a body=118 status=ok
// SIG undefined FUN_148c6d24a(void)

void FUN_148c6d24a(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xf8,8);
    iVar2 = (int)(uVar1 / 0xf8);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xf8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c6d2c0 FUN_148c6d2c0 body=60 status=ok
// SIG undefined FUN_148c6d2c0(void)

void FUN_148c6d2c0(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c6d2fc(param_1,param_2);
    param_1 = param_1 + 0xf8;
    param_2 = param_2 + 0xf8;
  }
  return;
}



// FUNCTION 148c6d2fc FUN_148c6d2fc body=301 status=ok
// SIG undefined FUN_148c6d2fc(void)

undefined8 * FUN_148c6d2fc(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  longlong *plVar3;
  
  FUN_14042a9ce();
  *param_1 = &PTR_FUN_14b8963e0;
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0xb0);
  param_1[0x17] = 0;
  iVar1 = *(int *)(param_2 + 0xc0);
  pvVar2 = *(void **)(param_2 + 0xb8);
  *(int *)(param_1 + 0x18) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x17,iVar1,0);
    memcpy((void *)param_1[0x17],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0x19] = 0;
  iVar1 = *(int *)(param_2 + 0xd0);
  pvVar2 = *(void **)(param_2 + 200);
  *(int *)(param_1 + 0x1a) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x19,iVar1,0);
    memcpy((void *)param_1[0x19],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 0x1b) = *(undefined1 *)(param_2 + 0xd8);
  plVar3 = *(longlong **)(param_2 + 0xe0);
  param_1[0x1c] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  *(undefined4 *)(param_1 + 0x1d) = *(undefined4 *)(param_2 + 0xe8);
  *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)(param_2 + 0xf0);
  return param_1;
}



// FUNCTION 148c6d42a FUN_148c6d42a body=86 status=ok
// SIG undefined FUN_148c6d42a(void)

void FUN_148c6d42a(undefined8 param_1,undefined8 *param_2)

{
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[6] = 0;
  FUN_144a5dc74(param_2);
  FUN_144a5dc74(param_2 + 2);
  *(undefined2 *)(param_2 + 4) = 0;
  *(undefined1 *)((longlong)param_2 + 0x22) = 0;
  FUN_1400b22c2(param_2 + 5,&DAT_149e02088);
  return;
}



// FUNCTION 148c6d480 FUN_148c6d480 body=59 status=ok
// SIG undefined FUN_148c6d480(void)

void FUN_148c6d480(undefined8 param_1,longlong param_2)

{
  FUN_144a5dc74(param_2);
  FUN_144a5dc74(param_2 + 0x10);
  *(undefined2 *)(param_2 + 0x20) = 0;
  *(undefined1 *)(param_2 + 0x22) = 0;
  FUN_1400b22c2(param_2 + 0x28,&DAT_149e02088);
  return;
}



// FUNCTION 148c6d4da FUN_148c6d4da body=54 status=ok
// SIG undefined FUN_148c6d4da(void)

undefined1 FUN_148c6d4da(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c6d62e(param_2,param_3);
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return 1;
}



// FUNCTION 148c6d538 FUN_148c6d538 body=59 status=ok
// SIG undefined FUN_148c6d538(void)

undefined8 FUN_148c6d538(longlong *param_1)

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



// FUNCTION 148c6d57e FUN_148c6d57e body=34 status=ok
// SIG undefined FUN_148c6d57e(void)

void FUN_148c6d57e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_148c6d5ee(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 148c6d5ee FUN_148c6d5ee body=64 status=ok
// SIG undefined FUN_148c6d5ee(void)

void FUN_148c6d5ee(longlong *param_1)

{
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x10))();
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148c6d623. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 148c6d62e FUN_148c6d62e body=147 status=ok
// SIG undefined FUN_148c6d62e(void)

longlong * FUN_148c6d62e(longlong *param_1,longlong *param_2)

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
  *(short *)(param_1 + 4) = (short)param_2[4];
  *(undefined1 *)((longlong)param_1 + 0x22) = *(undefined1 *)((longlong)param_2 + 0x22);
  FUN_144a787a6(param_1 + 5,param_2 + 5);
  return param_1;
}



// FUNCTION 148c6d6c2 FUN_148c6d6c2 body=88 status=ok
// SIG undefined FUN_148c6d6c2(void)

void FUN_148c6d6c2(undefined8 param_1,undefined8 *param_2)

{
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_144a5dc74(param_2);
  FUN_1400b22c2(param_2 + 2,&DAT_149e02088);
  param_2[4] = 0;
  param_2[5] = 0;
  FUN_144a5dc74(param_2 + 6);
  return;
}



// FUNCTION 148c6d71a FUN_148c6d71a body=56 status=ok
// SIG undefined FUN_148c6d71a(void)

void FUN_148c6d71a(undefined8 param_1,longlong param_2)

{
  FUN_144a5dc74(param_2);
  FUN_1400b22c2(param_2 + 0x10,&DAT_149e02088);
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  FUN_144a5dc74(param_2 + 0x30);
  return;
}



// FUNCTION 148c6d770 FUN_148c6d770 body=54 status=ok
// SIG undefined FUN_148c6d770(void)

undefined1 FUN_148c6d770(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c6d904(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 148c6d7ce FUN_148c6d7ce body=59 status=ok
// SIG undefined FUN_148c6d7ce(void)

undefined8 FUN_148c6d7ce(longlong *param_1)

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



// FUNCTION 148c6d814 FUN_148c6d814 body=34 status=ok
// SIG undefined FUN_148c6d814(void)

void FUN_148c6d814(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_148c6d884(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 148c6d884 FUN_148c6d884 body=90 status=ok
// SIG undefined FUN_148c6d884(void)

void FUN_148c6d884(longlong *param_1)

{
  if ((longlong *)param_1[6] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[6] + 0x10))();
  }
  FUN_148c6d8de(param_1[4],(int)param_1[5]);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148c6d8d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 148c6d8de FUN_148c6d8de body=38 status=ok
// SIG undefined FUN_148c6d8de(void)

void FUN_148c6d8de(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148c6d5ee(param_1);
    param_1 = param_1 + 0x38;
  }
  return;
}



// FUNCTION 148c6d904 FUN_148c6d904 body=145 status=ok
// SIG undefined FUN_148c6d904(void)

longlong * FUN_148c6d904(longlong *param_1,longlong *param_2)

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
  FUN_148c6d996(param_1 + 4,param_2 + 4);
  plVar1 = (longlong *)param_2[6];
  plVar2 = (longlong *)param_1[6];
  if (plVar2 != plVar1) {
    param_1[6] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 7) = (int)param_2[7];
  return param_1;
}



// FUNCTION 148c6d996 FUN_148c6d996 body=95 status=ok
// SIG undefined FUN_148c6d996(void)

undefined8 * FUN_148c6d996(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_148c6d8de(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c6d9f6(param_1,iVar1);
      FUN_148c6da65(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c6d9f6 FUN_148c6d9f6 body=111 status=ok
// SIG undefined FUN_148c6d9f6(void)

void FUN_148c6d9f6(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c6da65 FUN_148c6da65 body=52 status=ok
// SIG undefined FUN_148c6da65(void)

void FUN_148c6da65(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c6da9a(param_1,param_2);
    param_1 = param_1 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return;
}



// FUNCTION 148c6da9a FUN_148c6da9a body=157 status=ok
// SIG undefined FUN_148c6da9a(void)

longlong * FUN_148c6da9a(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  void *_Src;
  
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
  *(short *)(param_1 + 4) = (short)param_2[4];
  *(undefined1 *)((longlong)param_1 + 0x22) = *(undefined1 *)((longlong)param_2 + 0x22);
  param_1[5] = 0;
  iVar1 = (int)param_2[6];
  _Src = (void *)param_2[5];
  *(int *)(param_1 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 5,iVar1,0);
    memcpy((void *)param_1[5],_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 148c6db38 FUN_148c6db38 body=54 status=ok
// SIG undefined FUN_148c6db38(void)

void FUN_148c6db38(undefined8 param_1,undefined8 *param_2)

{
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_144a5dc74(param_2);
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  return;
}



// FUNCTION 148c6db6e FUN_148c6db6e body=33 status=ok
// SIG undefined FUN_148c6db6e(void)

void FUN_148c6db6e(undefined8 param_1,longlong param_2)

{
  FUN_144a5dc74(param_2);
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



// FUNCTION 148c6dbae FUN_148c6dbae body=54 status=ok
// SIG undefined FUN_148c6dbae(void)

undefined1 FUN_148c6dbae(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c6dcc2(param_2,param_3);
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return 1;
}



// FUNCTION 148c6dc0c FUN_148c6dc0c body=59 status=ok
// SIG undefined FUN_148c6dc0c(void)

undefined8 FUN_148c6dc0c(longlong *param_1)

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



// FUNCTION 148c6dc52 FUN_148c6dc52 body=34 status=ok
// SIG undefined FUN_148c6dc52(void)

void FUN_148c6dc52(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_145bfacd4(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 148c6dcc2 FUN_148c6dcc2 body=100 status=ok
// SIG undefined FUN_148c6dcc2(void)

longlong * FUN_148c6dcc2(longlong *param_1,longlong *param_2)

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
  FUN_148c6dd26(param_1 + 2,param_2 + 2);
  FUN_148c6dd86(param_1 + 4,param_2 + 4);
  return param_1;
}



// FUNCTION 148c6dd26 FUN_148c6dd26 body=95 status=ok
// SIG undefined FUN_148c6dd26(void)

undefined8 * FUN_148c6dd26(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145bfad56(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c6dde6(param_1,iVar1);
      FUN_148c6de59(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c6dd86 FUN_148c6dd86 body=95 status=ok
// SIG undefined FUN_148c6dd86(void)

undefined8 * FUN_148c6dd86(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145bfad2e(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c6df30(param_1,iVar1);
      FUN_148c6df92(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c6dde6 FUN_148c6dde6 body=115 status=ok
// SIG undefined FUN_148c6dde6(void)

void FUN_148c6dde6(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c6de59 FUN_148c6de59 body=52 status=ok
// SIG undefined FUN_148c6de59(void)

void FUN_148c6de59(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c6de8e(param_1,param_2);
    param_1 = param_1 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return;
}



// FUNCTION 148c6de8e FUN_148c6de8e body=161 status=ok
// SIG undefined FUN_148c6de8e(void)

undefined8 * FUN_148c6de8e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_148c6d24a(param_1,iVar1,0);
    FUN_148c6d2c0(*param_1,uVar2,iVar1);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  _Src = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],_Src,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}



// FUNCTION 148c6df30 FUN_148c6df30 body=98 status=ok
// SIG undefined FUN_148c6df30(void)

void FUN_148c6df30(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 6,8);
    iVar1 = (int)(uVar2 >> 6);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x40,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c6df92 FUN_148c6df92 body=52 status=ok
// SIG undefined FUN_148c6df92(void)

void FUN_148c6df92(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c6dfc6(param_1,param_2);
    param_1 = param_1 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return;
}



// FUNCTION 148c6dfc6 FUN_148c6dfc6 body=209 status=ok
// SIG undefined FUN_148c6dfc6(void)

longlong * FUN_148c6dfc6(longlong *param_1,longlong *param_2)

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
  param_1[2] = 0;
  iVar1 = (int)param_2[3];
  _Src = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],_Src,(longlong)iVar1 * 2);
  }
  param_1[4] = 0;
  iVar1 = (int)param_2[5];
  lVar3 = param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_148c6d9f6(param_1 + 4,iVar1,0);
    FUN_148c6da65(param_1[4],lVar3,iVar1);
  }
  plVar2 = (longlong *)param_2[6];
  param_1[6] = (longlong)plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(int *)(param_1 + 7) = (int)param_2[7];
  return param_1;
}



// FUNCTION 148c6e098 FUN_148c6e098 body=79 status=ok
// SIG undefined FUN_148c6e098(void)

void FUN_148c6e098(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x178);
  FUN_1400b22c2((longlong)param_2 + 8,&DAT_149e02088);
  FUN_1400b22c2((longlong)param_2 + 0x18,&DAT_149e02088);
  FUN_144074204((longlong)param_2 + 0x28);
  return;
}



// FUNCTION 148c6e0e8 FUN_148c6e0e8 body=61 status=ok
// SIG undefined FUN_148c6e0e8(void)

void FUN_148c6e0e8(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 0;
  FUN_1400b22c2(param_2 + 8,&DAT_149e02088);
  FUN_1400b22c2(param_2 + 0x18,&DAT_149e02088);
  FUN_144074204(param_2 + 0x28);
  return;
}



// FUNCTION 148c6e144 FUN_148c6e144 body=118 status=ok
// SIG undefined FUN_148c6e144(void)

undefined1 FUN_148c6e144(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined1 *)(param_2 + lVar1) = *(undefined1 *)(param_3 + lVar1);
      FUN_144a787a6();
      FUN_144a787a6(param_2 + lVar1 + 0x18,param_3 + lVar1 + 0x18);
      FUN_148c6e2de(param_2 + lVar1 + 0x28,param_3 + lVar1 + 0x28);
      lVar1 = lVar1 + 0x178;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c6e1e2 FUN_148c6e1e2 body=59 status=ok
// SIG undefined FUN_148c6e1e2(void)

undefined8 FUN_148c6e1e2(longlong *param_1)

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



// FUNCTION 148c6e22e FUN_148c6e22e body=40 status=ok
// SIG undefined FUN_148c6e22e(void)

void FUN_148c6e22e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x178) == '\x01') {
    FUN_148c6e2a4(param_2);
    *(undefined1 *)(param_2 + 0x178) = 0;
  }
  return;
}



// FUNCTION 148c6e2a4 FUN_148c6e2a4 body=57 status=ok
// SIG undefined FUN_148c6e2a4(void)

void FUN_148c6e2a4(longlong param_1)

{
  FUN_14116e718(param_1 + 0x28);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148c6e2de FUN_148c6e2de body=489 status=ok
// SIG undefined FUN_148c6e2de(void)

undefined8 * FUN_148c6e2de(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  puVar7 = param_2;
  puVar8 = param_1;
  for (lVar6 = 9; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  FUN_148c6e4c8(param_1 + 9,param_2 + 9);
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  FUN_144a787a6(param_1 + 0xc,param_2 + 0xc);
  FUN_144a787a6(param_1 + 0xe,param_2 + 0xe);
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x83);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x83) = uVar1;
  FUN_148c6e526(param_1 + 0x11,param_2 + 0x11);
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
  FUN_145a03412(param_1 + 0x14,param_2 + 0x14);
  param_1[0x18] = param_2[0x18];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0xb4);
  uVar4 = *(undefined4 *)(param_2 + 0x17);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0xbc);
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
  *(undefined4 *)((longlong)param_1 + 0xb4) = uVar1;
  *(undefined4 *)(param_1 + 0x17) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0xbc) = uVar5;
  plVar2 = (longlong *)param_2[0x19];
  plVar3 = (longlong *)param_1[0x19];
  if (plVar3 != plVar2) {
    param_1[0x19] = plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0x1a);
  plVar2 = (longlong *)param_2[0x1b];
  plVar3 = (longlong *)param_1[0x1b];
  if (plVar3 != plVar2) {
    param_1[0x1b] = plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(param_2 + 0x1d);
  FUN_1412dfe7a(param_1 + 0x1e,param_2 + 0x1e);
  plVar2 = (longlong *)param_2[0x20];
  plVar3 = (longlong *)param_1[0x20];
  if (plVar3 != plVar2) {
    param_1[0x20] = plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)(param_2 + 0x21);
  FUN_1407b2780(param_1 + 0x22,param_2 + 0x22);
  param_1[0x24] = param_2[0x24];
  uVar1 = *(undefined4 *)((longlong)param_2 + 300);
  uVar4 = *(undefined4 *)(param_2 + 0x26);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x134);
  *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(param_2 + 0x25);
  *(undefined4 *)((longlong)param_1 + 300) = uVar1;
  *(undefined4 *)(param_1 + 0x26) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x134) = uVar5;
  FUN_144a787a6(param_1 + 0x27,param_2 + 0x27);
  param_1[0x29] = param_2[0x29];
  return param_1;
}



// FUNCTION 148c6e4c8 FUN_148c6e4c8 body=93 status=ok
// SIG undefined FUN_148c6e4c8(void)

undefined8 * FUN_148c6e4c8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14116e870(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1457e7094(param_1,iVar1);
      FUN_1457e7067(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c6e526 FUN_148c6e526 body=93 status=ok
// SIG undefined FUN_148c6e526(void)

undefined8 * FUN_148c6e526(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14116e843(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c6e584(param_1,iVar1);
      FUN_148c6e5f7(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c6e584 FUN_148c6e584 body=115 status=ok
// SIG undefined FUN_148c6e584(void)

void FUN_148c6e584(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c6e5f7 FUN_148c6e5f7 body=124 status=ok
// SIG undefined FUN_148c6e5f7(void)

void FUN_148c6e5f7(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined1 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = (undefined1 *)(param_2 + 0x10);
    do {
      *param_1 = 0;
      iVar1 = *(int *)(puVar2 + -8);
      _Src = *(void **)(puVar2 + -0x10);
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
      }
      *(undefined1 *)(param_1 + 2) = *puVar2;
      param_1 = param_1 + 3;
      puVar2 = puVar2 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148c6e674 FUN_148c6e674 body=37 status=ok
// SIG undefined FUN_148c6e674(void)

void FUN_148c6e674(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x230);
  FUN_1461978fe(param_2);
  return;
}



// FUNCTION 148c6e6c6 FUN_148c6e6c6 body=63 status=ok
// SIG undefined FUN_148c6e6c6(void)

undefined1 FUN_148c6e6c6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c6e84e(param_2,param_3);
    param_3 = param_3 + 0x230;
    param_2 = param_2 + 0x230;
  }
  return 1;
}



// FUNCTION 148c6e72e FUN_148c6e72e body=59 status=ok
// SIG undefined FUN_148c6e72e(void)

undefined8 FUN_148c6e72e(longlong *param_1)

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



// FUNCTION 148c6e77a FUN_148c6e77a body=40 status=ok
// SIG undefined FUN_148c6e77a(void)

void FUN_148c6e77a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x230) == '\x01') {
    FUN_146161f2a(param_2);
    *(undefined1 *)(param_2 + 0x230) = 0;
  }
  return;
}



// FUNCTION 148c6e7f0 FUN_148c6e7f0 body=38 status=ok
// SIG undefined FUN_148c6e7f0(void)

undefined8 FUN_148c6e7f0(undefined8 param_1,int param_2)

{
  FUN_146161f2a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c6e816 FUN_148c6e816 body=55 status=ok
// SIG undefined FUN_148c6e816(void)

void FUN_148c6e816(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb7210 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb7210 = FUN_140002ddd(FUN_146602a3d,uVar1,L"OakWidgetData_BigMap_POIData");
  }
  return;
}



// FUNCTION 148c6e84e FUN_148c6e84e body=601 status=ok
// SIG undefined FUN_148c6e84e(void)

longlong FUN_148c6e84e(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  FUN_1489fb7d2();
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  FUN_144a787a6(param_1 + 0xb8,param_2 + 0xb8);
  FUN_144a787a6(param_1 + 200,param_2 + 200);
  *(undefined1 *)(param_1 + 0xd8) = *(undefined1 *)(param_2 + 0xd8);
  FUN_144a787a6(param_1 + 0xe0,param_2 + 0xe0);
  *(undefined2 *)(param_1 + 0xf0) = *(undefined2 *)(param_2 + 0xf0);
  FUN_148c6eaa8(param_1 + 0xf8,param_2 + 0xf8);
  FUN_144a787a6(param_1 + 0x108,param_2 + 0x108);
  FUN_144a787a6(param_1 + 0x118,param_2 + 0x118);
  plVar2 = *(longlong **)(param_2 + 0x128);
  plVar3 = *(longlong **)(param_1 + 0x128);
  if (plVar3 != plVar2) {
    *(longlong **)(param_1 + 0x128) = plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x130);
  *(undefined1 *)(param_1 + 0x138) = *(undefined1 *)(param_2 + 0x138);
  FUN_144a787a6(param_1 + 0x140,param_2 + 0x140);
  FUN_144a787a6(param_1 + 0x150,param_2 + 0x150);
  *(undefined2 *)(param_1 + 0x160) = *(undefined2 *)(param_2 + 0x160);
  *(undefined1 *)(param_1 + 0x162) = *(undefined1 *)(param_2 + 0x162);
  FUN_145a0339c(param_1 + 0x168,param_2 + 0x168);
  *(undefined2 *)(param_1 + 0x1b0) = *(undefined2 *)(param_2 + 0x1b0);
  FUN_144a787a6(param_1 + 0x1b8,param_2 + 0x1b8);
  FUN_144a787a6(param_1 + 0x1c8,param_2 + 0x1c8);
  FUN_140bee9ec(param_1 + 0x1d8,param_2 + 0x1d8);
  FUN_140bee9ec(param_1 + 0x1e8,param_2 + 0x1e8);
  *(undefined1 *)(param_1 + 0x1f8) = *(undefined1 *)(param_2 + 0x1f8);
  FUN_144a787a6(param_1 + 0x200,param_2 + 0x200);
  uVar4 = *(undefined8 *)(param_2 + 0x210);
  lVar5 = *(longlong *)(param_2 + 0x218);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar2 = *(longlong **)(param_1 + 0x218);
  *(undefined8 *)(param_1 + 0x210) = uVar4;
  *(longlong *)(param_1 + 0x218) = lVar5;
  if (plVar2 != (longlong *)0x0) {
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
  }
  uVar4 = *(undefined8 *)(param_2 + 0x220);
  lVar5 = *(longlong *)(param_2 + 0x228);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar2 = *(longlong **)(param_1 + 0x228);
  *(undefined8 *)(param_1 + 0x220) = uVar4;
  *(longlong *)(param_1 + 0x228) = lVar5;
  if (plVar2 != (longlong *)0x0) {
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
  }
  return param_1;
}



// FUNCTION 148c6eaa8 FUN_148c6eaa8 body=95 status=ok
// SIG undefined FUN_148c6eaa8(void)

undefined8 * FUN_148c6eaa8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_146162165(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c6eb08(param_1,iVar1);
      FUN_148c6eb6a(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c6eb08 FUN_148c6eb08 body=98 status=ok
// SIG undefined FUN_148c6eb08(void)

void FUN_148c6eb08(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c6eb6a FUN_148c6eb6a body=52 status=ok
// SIG undefined FUN_148c6eb6a(void)

void FUN_148c6eb6a(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c6eb9e(param_1,param_2);
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return;
}



// FUNCTION 148c6eb9e FUN_148c6eb9e body=156 status=ok
// SIG undefined FUN_148c6eb9e(void)

undefined8 * FUN_148c6eb9e(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 148c6ec3c FUN_148c6ec3c body=37 status=ok
// SIG undefined FUN_148c6ec3c(void)

void FUN_148c6ec3c(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x4e8);
  FUN_14619770c(param_2);
  return;
}



// FUNCTION 148c6ec8e FUN_148c6ec8e body=63 status=ok
// SIG undefined FUN_148c6ec8e(void)

undefined1 FUN_148c6ec8e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144074584(param_2,param_3);
    param_3 = param_3 + 0x4e8;
    param_2 = param_2 + 0x4e8;
  }
  return 1;
}



// FUNCTION 148c6ecf6 FUN_148c6ecf6 body=59 status=ok
// SIG undefined FUN_148c6ecf6(void)

undefined8 FUN_148c6ecf6(longlong *param_1)

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



// FUNCTION 148c6ed42 FUN_148c6ed42 body=38 status=ok
// SIG undefined FUN_148c6ed42(void)

void FUN_148c6ed42(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x4e8) == '\x01') {
    FUN_14163d542(param_2);
    *(undefined1 *)(param_2 + 0x4e8) = 0;
  }
  return;
}



// FUNCTION 148c6edb6 FUN_148c6edb6 body=57 status=ok
// SIG undefined FUN_148c6edb6(void)

void FUN_148c6edb6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb7228 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb7228 = FUN_140002ddd(FUN_146602acf,uVar1,L"OakWidgetData_BigMap");
  }
  return;
}



// FUNCTION 148c6edef FUN_148c6edef body=43 status=ok
// SIG undefined FUN_148c6edef(void)

void FUN_148c6edef(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148c6e2a4(param_1);
    param_1 = param_1 + 0x178;
  }
  return;
}



// FUNCTION 148c6ee1a FUN_148c6ee1a body=40 status=ok
// SIG undefined FUN_148c6ee1a(void)

void FUN_148c6ee1a(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_145bfacd4(param_1);
    param_1 = param_1 + 0x30;
  }
  return;
}



// FUNCTION 148c6ee42 FUN_148c6ee42 body=95 status=ok
// SIG undefined FUN_148c6ee42(void)

undefined8 * FUN_148c6ee42(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_148c6ee1a(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c6ef62(param_1,iVar1);
      FUN_148c6efd5(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c6eea2 FUN_148c6eea2 body=95 status=ok
// SIG undefined FUN_148c6eea2(void)

undefined8 * FUN_148c6eea2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_148c6edef(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c6f0be(param_1,iVar1);
      FUN_148c6f134(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c6ef02 FUN_148c6ef02 body=95 status=ok
// SIG undefined FUN_148c6ef02(void)

undefined8 * FUN_148c6ef02(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14580f9f9(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_146049370(param_1,iVar1);
      FUN_1460491f6(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c6ef62 FUN_148c6ef62 body=115 status=ok
// SIG undefined FUN_148c6ef62(void)

void FUN_148c6ef62(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c6efd5 FUN_148c6efd5 body=52 status=ok
// SIG undefined FUN_148c6efd5(void)

void FUN_148c6efd5(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c6f00a(param_1,param_2);
    param_1 = param_1 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return;
}



// FUNCTION 148c6f00a FUN_148c6f00a body=179 status=ok
// SIG undefined FUN_148c6f00a(void)

longlong * FUN_148c6f00a(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)*param_2;
  *param_1 = (longlong)plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  param_1[2] = 0;
  iVar1 = (int)param_2[3];
  lVar3 = param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_148c6dde6(param_1 + 2,iVar1,0);
    FUN_148c6de59(param_1[2],lVar3,iVar1);
  }
  param_1[4] = 0;
  iVar1 = (int)param_2[5];
  lVar3 = param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_148c6df30(param_1 + 4,iVar1,0);
    FUN_148c6df92(param_1[4],lVar3,iVar1);
  }
  return param_1;
}



// FUNCTION 148c6f0be FUN_148c6f0be body=118 status=ok
// SIG undefined FUN_148c6f0be(void)

void FUN_148c6f0be(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x178,8);
    iVar2 = (int)(uVar1 / 0x178);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x178,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c6f134 FUN_148c6f134 body=60 status=ok
// SIG undefined FUN_148c6f134(void)

void FUN_148c6f134(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c6f170(param_1,param_2);
    param_1 = param_1 + 0x178;
    param_2 = param_2 + 0x178;
  }
  return;
}



// FUNCTION 148c6f170 FUN_148c6f170 body=186 status=ok
// SIG undefined FUN_148c6f170(void)

undefined1 * FUN_148c6f170(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  pvVar2 = *(void **)(param_2 + 8);
  *(int *)(param_1 + 0x10) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar1,0);
    memcpy(*(void **)(param_1 + 8),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  pvVar2 = *(void **)(param_2 + 0x18);
  *(int *)(param_1 + 0x20) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x18,iVar1,0);
    memcpy(*(void **)(param_1 + 0x18),pvVar2,(longlong)iVar1 * 2);
  }
  FUN_14106add8(param_1 + 0x28,param_2 + 0x28);
  return param_1;
}



// FUNCTION 148c6f270 FUN_148c6f270 body=75 status=ok
// SIG undefined FUN_148c6f270(void)

undefined8 FUN_148c6f270(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_2 + lVar1) = *(undefined8 *)(param_3 + lVar1);
      FUN_1406fa324();
      lVar1 = lVar1 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c6f2e4 FUN_148c6f2e4 body=59 status=ok
// SIG undefined FUN_148c6f2e4(void)

undefined8 FUN_148c6f2e4(longlong *param_1)

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



// FUNCTION 148c6f32a FUN_148c6f32a body=38 status=ok
// SIG undefined FUN_148c6f32a(void)

void FUN_148c6f32a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 148c6f3f4 FUN_148c6f3f4 body=98 status=ok
// SIG undefined FUN_148c6f3f4(void)

undefined8 FUN_148c6f3f4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1411c9b4c(param_2,param_3);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
    FUN_1411c9b4c(param_2 + 0x18,param_3 + 0x18);
    *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_3 + 0x28);
    FUN_1411c9b4c(param_2 + 0x30,param_3 + 0x30);
    *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_3 + 0x40);
    param_2 = param_2 + 0x48;
    param_3 = param_3 + 0x48;
  }
  return 1;
}



// FUNCTION 148c6f47e FUN_148c6f47e body=59 status=ok
// SIG undefined FUN_148c6f47e(void)

undefined8 FUN_148c6f47e(longlong *param_1)

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



// FUNCTION 148c6f4c4 FUN_148c6f4c4 body=34 status=ok
// SIG undefined FUN_148c6f4c4(void)

void FUN_148c6f4c4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_1466033da(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 148c6f56a FUN_148c6f56a body=54 status=ok
// SIG undefined FUN_148c6f56a(void)

undefined1 FUN_148c6f56a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1406fa324(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 148c6f5c8 FUN_148c6f5c8 body=59 status=ok
// SIG undefined FUN_148c6f5c8(void)

undefined8 FUN_148c6f5c8(longlong *param_1)

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



// FUNCTION 148c6f60e FUN_148c6f60e body=37 status=ok
// SIG undefined FUN_148c6f60e(void)

void FUN_148c6f60e(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 148c6f710 FUN_148c6f710 body=48 status=ok
// SIG undefined FUN_148c6f710(void)

void FUN_148c6f710(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x38) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148c6f756 FUN_148c6f756 body=54 status=ok
// SIG undefined FUN_148c6f756(void)

undefined1 FUN_148c6f756(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c6f850(param_2,param_3);
    param_3 = param_3 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return 1;
}



// FUNCTION 148c6f7b4 FUN_148c6f7b4 body=59 status=ok
// SIG undefined FUN_148c6f7b4(void)

undefined8 FUN_148c6f7b4(longlong *param_1)

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



// FUNCTION 148c6f850 FUN_148c6f850 body=241 status=ok
// SIG undefined FUN_148c6f850(void)

undefined4 * FUN_148c6f850(undefined4 *param_1,undefined4 *param_2)

{
  if (param_1[1] != param_2[1]) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  if (param_1[3] != param_2[3]) {
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
  }
  if (param_1[5] != param_2[5]) {
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
  }
  if (param_1[7] != param_2[7]) {
    *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
    param_1[7] = param_2[7];
  }
  if (param_1[9] != param_2[9]) {
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
    param_1[9] = param_2[9];
  }
  if (param_1[0xb] != param_2[0xb]) {
    *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
    param_1[0xb] = param_2[0xb];
  }
  if (param_1[0xd] != param_2[0xd]) {
    *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
    param_1[0xd] = param_2[0xd];
  }
  if (param_1[0x12] != param_2[0x12]) {
    FUN_144a787a6(param_1 + 0xe,param_2 + 0xe);
    param_1[0x12] = param_2[0x12];
  }
  if (param_1[0x18] != param_2[0x18] || param_1[0x18] == 0) {
    param_1[0x18] = param_2[0x18];
    FUN_144a67f5c(param_1 + 0x14,param_2 + 0x14);
  }
  return param_1;
}



// FUNCTION 148c6f942 FUN_148c6f942 body=52 status=ok
// SIG undefined FUN_148c6f942(void)

void FUN_148c6f942(longlong param_1)

{
  if (*(char *)(param_1 + 0x68) == '\x01') {
    if (*(longlong *)(param_1 + 0x50) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x38) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x68) = 0;
  }
  return;
}



// FUNCTION 148c6f976 FUN_148c6f976 body=37 status=ok
// SIG undefined FUN_148c6f976(void)

void FUN_148c6f976(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x138);
  FUN_148c6fb22(param_2);
  return;
}



// FUNCTION 148c6f9c2 FUN_148c6f9c2 body=118 status=ok
// SIG undefined FUN_148c6f9c2(void)

undefined1 FUN_148c6f9c2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c6f850(param_2,param_3);
    FUN_148c6f850(param_2 + 0x68,param_3 + 0x68);
    FUN_148c6f850(param_2 + 0xd0,param_3 + 0xd0);
    param_3 = param_3 + 0x138;
    param_2 = param_2 + 0x138;
  }
  return 1;
}



// FUNCTION 148c6fa60 FUN_148c6fa60 body=59 status=ok
// SIG undefined FUN_148c6fa60(void)

undefined8 FUN_148c6fa60(longlong *param_1)

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



// FUNCTION 148c6faac FUN_148c6faac body=40 status=ok
// SIG undefined FUN_148c6faac(void)

void FUN_148c6faac(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x138) == '\x01') {
    FUN_148c6fc06(param_2);
    *(undefined1 *)(param_2 + 0x138) = 0;
  }
  return;
}



// FUNCTION 148c6fb22 FUN_148c6fb22 body=227 status=ok
// SIG undefined FUN_148c6fb22(void)

void FUN_148c6fb22(undefined8 *param_1)

{
  *param_1 = 0x42c80000;
  param_1[1] = 0x42c80000;
  param_1[2] = 0x42c80000;
  *(undefined1 *)(param_1 + 3) = 1;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0x42c80000;
  param_1[0xe] = 0x42c80000;
  param_1[0xf] = 0x42c80000;
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined1 *)(param_1 + 0x12) = 1;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1a] = 0x42c80000;
  param_1[0x1b] = 0x42c80000;
  param_1[0x1c] = 0x42c80000;
  *(undefined1 *)(param_1 + 0x1d) = 1;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 1;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  return;
}



// FUNCTION 148c6fc06 FUN_148c6fc06 body=116 status=ok
// SIG undefined FUN_148c6fc06(void)

void FUN_148c6fc06(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x120) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148c6fc7c FUN_148c6fc7c body=37 status=ok
// SIG undefined FUN_148c6fc7c(void)

void FUN_148c6fc7c(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x208);
  FUN_148c6fdf2(param_2);
  return;
}



// FUNCTION 148c6fcc8 FUN_148c6fcc8 body=63 status=ok
// SIG undefined FUN_148c6fcc8(void)

undefined1 FUN_148c6fcc8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c6ff1c(param_2,param_3);
    param_3 = param_3 + 0x208;
    param_2 = param_2 + 0x208;
  }
  return 1;
}



// FUNCTION 148c6fd30 FUN_148c6fd30 body=59 status=ok
// SIG undefined FUN_148c6fd30(void)

undefined8 FUN_148c6fd30(longlong *param_1)

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



// FUNCTION 148c6fd7c FUN_148c6fd7c body=40 status=ok
// SIG undefined FUN_148c6fd7c(void)

void FUN_148c6fd7c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x208) == '\x01') {
    FUN_148c6fe72(param_2);
    *(undefined1 *)(param_2 + 0x208) = 0;
  }
  return;
}



// FUNCTION 148c6fdf2 FUN_148c6fdf2 body=127 status=ok
// SIG undefined FUN_148c6fdf2(void)

longlong FUN_148c6fdf2(longlong param_1)

{
  *(undefined2 *)(param_1 + 8) = 1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined2 *)(param_1 + 0x48) = 0x100;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined2 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined2 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xb5) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  FUN_148c6fb22(param_1 + 0xd0);
  return param_1;
}



// FUNCTION 148c6fe72 FUN_148c6fe72 body=170 status=ok
// SIG undefined FUN_148c6fe72(void)

void FUN_148c6fe72(longlong param_1)

{
  FUN_148c6fc06(param_1 + 0xd0);
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148c6ff1c FUN_148c6ff1c body=289 status=ok
// SIG undefined FUN_148c6ff1c(void)

undefined8 * FUN_148c6ff1c(undefined8 *param_1,undefined8 *param_2)

{
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  *param_1 = *param_2;
  FUN_144a787a6(param_1 + 2,param_2 + 2);
  FUN_144a787a6(param_1 + 4,param_2 + 4);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  FUN_144a787a6(param_1 + 7,param_2 + 7);
  *(undefined2 *)(param_1 + 9) = *(undefined2 *)(param_2 + 9);
  FUN_144a787a6(param_1 + 10,param_2 + 10);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  FUN_144a787a6(param_1 + 0xd,param_2 + 0xd);
  *(undefined2 *)(param_1 + 0xf) = *(undefined2 *)(param_2 + 0xf);
  FUN_144a787a6(param_1 + 0x10,param_2 + 0x10);
  *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(param_2 + 0x12);
  FUN_144a787a6(param_1 + 0x13,param_2 + 0x13);
  FUN_144a787a6(param_1 + 0x15,param_2 + 0x15);
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
  *(undefined1 *)((longlong)param_1 + 0xbc) = *(undefined1 *)((longlong)param_2 + 0xbc);
  FUN_144a787a6(param_1 + 0x18,param_2 + 0x18);
  FUN_148c6f850(param_1 + 0x1a,param_2 + 0x1a);
  FUN_148c6f850(param_1 + 0x27,param_2 + 0x27);
  FUN_148c6f850(param_1 + 0x34,param_2 + 0x34);
  return param_1;
}



// FUNCTION 148c7003e FUN_148c7003e body=88 status=ok
// SIG undefined FUN_148c7003e(void)

void FUN_148c7003e(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xd0);
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b8977c0;
  *(undefined1 *)(param_2 + 0x16) = 0;
  *(undefined4 *)((longlong)param_2 + 0xb4) = 0;
  *(undefined1 *)(param_2 + 0x17) = 0;
  *(undefined8 *)((longlong)param_2 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc4) = 0;
  *(undefined4 *)((longlong)param_2 + 0xcc) = 0;
  return;
}



// FUNCTION 148c70096 FUN_148c70096 body=68 status=ok
// SIG undefined FUN_148c70096(void)

void FUN_148c70096(undefined8 param_1,undefined8 *param_2)

{
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b8977c0;
  *(undefined1 *)(param_2 + 0x16) = 0;
  *(undefined4 *)((longlong)param_2 + 0xb4) = 0;
  *(undefined1 *)(param_2 + 0x17) = 0;
  *(undefined8 *)((longlong)param_2 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc4) = 0;
  *(undefined4 *)((longlong)param_2 + 0xcc) = 0;
  return;
}



// FUNCTION 148c700fe FUN_148c700fe body=63 status=ok
// SIG undefined FUN_148c700fe(void)

undefined1 FUN_148c700fe(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c70228(param_2,param_3);
    param_3 = param_3 + 0xd0;
    param_2 = param_2 + 0xd0;
  }
  return 1;
}



// FUNCTION 148c70166 FUN_148c70166 body=59 status=ok
// SIG undefined FUN_148c70166(void)

undefined8 FUN_148c70166(longlong *param_1)

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



// FUNCTION 148c701b2 FUN_148c701b2 body=40 status=ok
// SIG undefined FUN_148c701b2(void)

void FUN_148c701b2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd0) == '\x01') {
    FUN_145b06d48(param_2);
    *(undefined1 *)(param_2 + 0xd0) = 0;
  }
  return;
}



// FUNCTION 148c70228 FUN_148c70228 body=123 status=ok
// SIG undefined FUN_148c70228(void)

longlong FUN_148c70228(longlong param_1,longlong param_2)

{
  FUN_1489fb7d2();
  if (*(int *)(param_1 + 0xb4) != *(int *)(param_2 + 0xb4)) {
    *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(param_2 + 0xb0);
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
  }
  if (*(int *)(param_1 + 0xbc) != *(int *)(param_2 + 0xbc)) {
    *(undefined1 *)(param_1 + 0xb8) = *(undefined1 *)(param_2 + 0xb8);
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_2 + 0xbc);
  }
  FUN_148c702a4(param_1 + 0xc0,param_2 + 0xc0);
  return param_1;
}



// FUNCTION 148c702a4 FUN_148c702a4 body=95 status=ok
// SIG undefined FUN_148c702a4(void)

undefined8 * FUN_148c702a4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145b06d8c(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c70304(param_1,iVar1);
      FUN_148c7037a(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c70304 FUN_148c70304 body=118 status=ok
// SIG undefined FUN_148c70304(void)

void FUN_148c70304(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x208,8);
    iVar2 = (int)(uVar1 / 0x208);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x208,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c7037a FUN_148c7037a body=60 status=ok
// SIG undefined FUN_148c7037a(void)

void FUN_148c7037a(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c703b6(param_1,param_2);
    param_1 = param_1 + 0x208;
    param_2 = param_2 + 0x208;
  }
  return;
}



// FUNCTION 148c703b6 FUN_148c703b6 body=841 status=ok
// SIG undefined FUN_148c703b6(void)

undefined8 * FUN_148c703b6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  *param_1 = *param_2;
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
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
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
  *(undefined2 *)(param_1 + 9) = *(undefined2 *)(param_2 + 9);
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
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
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
  *(undefined2 *)(param_1 + 0xf) = *(undefined2 *)(param_2 + 0xf);
  param_1[0x10] = 0;
  iVar1 = *(int *)(param_2 + 0x11);
  pvVar2 = (void *)param_2[0x10];
  *(int *)(param_1 + 0x11) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x10,iVar1,0);
    memcpy((void *)param_1[0x10],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(param_2 + 0x12);
  param_1[0x13] = 0;
  iVar1 = *(int *)(param_2 + 0x14);
  pvVar2 = (void *)param_2[0x13];
  *(int *)(param_1 + 0x14) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x13,iVar1,0);
    memcpy((void *)param_1[0x13],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0x15] = 0;
  iVar1 = *(int *)(param_2 + 0x16);
  pvVar2 = (void *)param_2[0x15];
  *(int *)(param_1 + 0x16) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x15,iVar1,0);
    memcpy((void *)param_1[0x15],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined1 *)((longlong)param_1 + 0xbc) = *(undefined1 *)((longlong)param_2 + 0xbc);
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
  param_1[0x18] = 0;
  iVar1 = *(int *)(param_2 + 0x19);
  pvVar2 = (void *)param_2[0x18];
  *(int *)(param_1 + 0x19) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x18,iVar1,0);
    memcpy((void *)param_1[0x18],pvVar2,(longlong)iVar1 * 2);
  }
  FUN_148c70700(param_1 + 0x1a,param_2 + 0x1a);
  FUN_148c70700(param_1 + 0x27,param_2 + 0x27);
  FUN_148c70700(param_1 + 0x34,param_2 + 0x34);
  return param_1;
}



// FUNCTION 148c70700 FUN_148c70700 body=262 status=ok
// SIG undefined FUN_148c70700(void)

undefined8 * FUN_148c70700(undefined8 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  *(undefined4 *)param_1 = *param_2;
  *(undefined4 *)((longlong)param_1 + 4) = param_2[1];
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 1) = param_2[2];
  *(undefined4 *)((longlong)param_1 + 0xc) = param_2[3];
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 2) = param_2[4];
  *(undefined4 *)((longlong)param_1 + 0x14) = param_2[5];
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x1c) = param_2[7];
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0x24) = param_2[9];
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 10);
  *(undefined4 *)((longlong)param_1 + 0x2c) = param_2[0xb];
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x34) = param_2[0xd];
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_144a787a6(param_1 + 7,param_2 + 0xe);
  *(undefined4 *)(param_1 + 9) = param_2[0x12];
  param_1[10] = 0;
  iVar1 = param_2[0x16];
  _Src = *(void **)(param_2 + 0x14);
  *(int *)(param_1 + 0xb) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    FUN_1447c510a(param_1 + 10,iVar1,0);
    memcpy((void *)param_1[10],_Src,(longlong)iVar1 << 2);
  }
  *(undefined4 *)(param_1 + 0xc) = param_2[0x18];
  return param_1;
}



// FUNCTION 148c715c8 FUN_148c715c8 body=37 status=ok
// SIG undefined FUN_148c715c8(void)

void FUN_148c715c8(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x268);
  FUN_145742a86(param_2);
  return;
}



// FUNCTION 148c71614 FUN_148c71614 body=63 status=ok
// SIG undefined FUN_148c71614(void)

undefined1 FUN_148c71614(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c7173e(param_2,param_3);
    param_3 = param_3 + 0x268;
    param_2 = param_2 + 0x268;
  }
  return 1;
}



// FUNCTION 148c7167c FUN_148c7167c body=59 status=ok
// SIG undefined FUN_148c7167c(void)

undefined8 FUN_148c7167c(longlong *param_1)

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



// FUNCTION 148c716c8 FUN_148c716c8 body=40 status=ok
// SIG undefined FUN_148c716c8(void)

void FUN_148c716c8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x268) == '\x01') {
    FUN_14574283c(param_2);
    *(undefined1 *)(param_2 + 0x268) = 0;
  }
  return;
}



// FUNCTION 148c7173e FUN_148c7173e body=1948 status=ok
// SIG undefined FUN_148c7173e(void)

undefined1 * FUN_148c7173e(undefined1 *param_1,undefined1 *param_2)

{
  if (*(int *)(param_1 + 4) != *(int *)(param_2 + 4)) {
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  FUN_144a787a6(param_1 + 0x10,param_2 + 0x10);
  FUN_144a787a6(param_1 + 0x20,param_2 + 0x20);
  FUN_144a787a6(param_1 + 0x30,param_2 + 0x30);
  FUN_144a787a6(param_1 + 0x40,param_2 + 0x40);
  if (*(int *)(param_1 + 0x54) != *(int *)(param_2 + 0x54)) {
    param_1[0x50] = param_2[0x50];
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  }
  if (*(int *)(param_1 + 0x5c) != *(int *)(param_2 + 0x5c)) {
    param_1[0x58] = param_2[0x58];
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
  }
  if (*(int *)(param_1 + 100) != *(int *)(param_2 + 100)) {
    param_1[0x60] = param_2[0x60];
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 100);
  }
  if (*(int *)(param_1 + 0x6c) != *(int *)(param_2 + 0x6c)) {
    param_1[0x68] = param_2[0x68];
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  }
  param_1[0x70] = param_2[0x70];
  if (*(int *)(param_1 + 0x78) != *(int *)(param_2 + 0x78)) {
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  }
  if (*(int *)(param_1 + 0x80) != *(int *)(param_2 + 0x80)) {
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  }
  if (*(int *)(param_1 + 0x98) != *(int *)(param_2 + 0x98)) {
    FUN_144a787a6(param_1 + 0x88,param_2 + 0x88);
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  }
  if (*(int *)(param_1 + 0xa4) != *(int *)(param_2 + 0xa4)) {
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
    *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 0xa4);
  }
  if (*(int *)(param_1 + 0xac) != *(int *)(param_2 + 0xac)) {
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
    *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_2 + 0xac);
  }
  if (*(int *)(param_1 + 0xb4) != *(int *)(param_2 + 0xb4)) {
    *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
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
    *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 200);
    *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_2 + 0xcc);
  }
  if (*(int *)(param_1 + 0xd4) != *(int *)(param_2 + 0xd4)) {
    *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
    *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_2 + 0xd4);
  }
  if (*(int *)(param_1 + 0xdc) != *(int *)(param_2 + 0xdc)) {
    *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
    *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_2 + 0xdc);
  }
  if (*(int *)(param_1 + 0xe4) != *(int *)(param_2 + 0xe4)) {
    param_1[0xe0] = param_2[0xe0];
    *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_2 + 0xe4);
  }
  if (*(int *)(param_1 + 0xec) != *(int *)(param_2 + 0xec)) {
    param_1[0xe8] = param_2[0xe8];
    *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_2 + 0xec);
  }
  FUN_140c6effa(param_1 + 0xf0,param_2 + 0xf0);
  if (*(int *)(param_1 + 0x110) != *(int *)(param_2 + 0x110)) {
    FUN_144a787a6(param_1 + 0x100,param_2 + 0x100);
    *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_2 + 0x110);
  }
  if (*(int *)(param_1 + 0x11c) != *(int *)(param_2 + 0x11c)) {
    *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x118);
    *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_2 + 0x11c);
  }
  if (*(int *)(param_1 + 0x124) != *(int *)(param_2 + 0x124)) {
    *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_2 + 0x120);
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
    *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_2 + 0x138);
    *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_2 + 0x13c);
  }
  if (*(int *)(param_1 + 0x144) != *(int *)(param_2 + 0x144)) {
    param_1[0x140] = param_2[0x140];
    *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_2 + 0x144);
  }
  if (*(int *)(param_1 + 0x14c) != *(int *)(param_2 + 0x14c)) {
    param_1[0x148] = param_2[0x148];
    *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_2 + 0x14c);
  }
  if (*(int *)(param_1 + 0x154) != *(int *)(param_2 + 0x154)) {
    *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_2 + 0x150);
    *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_2 + 0x154);
  }
  if (*(int *)(param_1 + 0x15c) != *(int *)(param_2 + 0x15c)) {
    *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_2 + 0x158);
    *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(param_2 + 0x15c);
  }
  if (*(int *)(param_1 + 0x164) != *(int *)(param_2 + 0x164)) {
    *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(param_2 + 0x160);
    *(undefined4 *)(param_1 + 0x164) = *(undefined4 *)(param_2 + 0x164);
  }
  if (*(int *)(param_1 + 0x178) != *(int *)(param_2 + 0x178)) {
    FUN_144a787a6(param_1 + 0x168,param_2 + 0x168);
    *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_2 + 0x178);
  }
  FUN_148c71eda(param_1 + 0x180,param_2 + 0x180);
  if (*(int *)(param_1 + 0x194) != *(int *)(param_2 + 0x194)) {
    param_1[400] = param_2[400];
    *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_2 + 0x194);
  }
  if (*(int *)(param_1 + 0x19c) != *(int *)(param_2 + 0x19c)) {
    *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_2 + 0x198);
    *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(param_2 + 0x19c);
  }
  if (*(int *)(param_1 + 0x1a4) != *(int *)(param_2 + 0x1a4)) {
    param_1[0x1a0] = param_2[0x1a0];
    *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(param_2 + 0x1a4);
  }
  if (*(int *)(param_1 + 0x1ac) != *(int *)(param_2 + 0x1ac)) {
    param_1[0x1a8] = param_2[0x1a8];
    *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_2 + 0x1ac);
  }
  if (*(int *)(param_1 + 0x1b4) != *(int *)(param_2 + 0x1b4)) {
    *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_2 + 0x1b0);
    *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(param_2 + 0x1b4);
  }
  if (*(int *)(param_1 + 0x1bc) != *(int *)(param_2 + 0x1bc)) {
    param_1[0x1b8] = param_2[0x1b8];
    *(undefined4 *)(param_1 + 0x1bc) = *(undefined4 *)(param_2 + 0x1bc);
  }
  if (*(int *)(param_1 + 0x1c4) != *(int *)(param_2 + 0x1c4)) {
    param_1[0x1c0] = param_2[0x1c0];
    *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(param_2 + 0x1c4);
  }
  if (*(int *)(param_1 + 0x1cc) != *(int *)(param_2 + 0x1cc)) {
    param_1[0x1c8] = param_2[0x1c8];
    *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(param_2 + 0x1cc);
  }
  if (*(int *)(param_1 + 0x1d4) != *(int *)(param_2 + 0x1d4)) {
    param_1[0x1d0] = param_2[0x1d0];
    *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(param_2 + 0x1d4);
  }
  if (*(int *)(param_1 + 0x1dc) != *(int *)(param_2 + 0x1dc)) {
    param_1[0x1d8] = param_2[0x1d8];
    *(undefined4 *)(param_1 + 0x1dc) = *(undefined4 *)(param_2 + 0x1dc);
  }
  if (*(int *)(param_1 + 0x1e4) != *(int *)(param_2 + 0x1e4)) {
    param_1[0x1e0] = param_2[0x1e0];
    *(undefined4 *)(param_1 + 0x1e4) = *(undefined4 *)(param_2 + 0x1e4);
  }
  if (*(int *)(param_1 + 0x1ec) != *(int *)(param_2 + 0x1ec)) {
    param_1[0x1e8] = param_2[0x1e8];
    *(undefined4 *)(param_1 + 0x1ec) = *(undefined4 *)(param_2 + 0x1ec);
  }
  if (*(int *)(param_1 + 500) != *(int *)(param_2 + 500)) {
    param_1[0x1f0] = param_2[0x1f0];
    *(undefined4 *)(param_1 + 500) = *(undefined4 *)(param_2 + 500);
  }
  if (*(int *)(param_1 + 0x208) != *(int *)(param_2 + 0x208)) {
    FUN_144a787a6(param_1 + 0x1f8,param_2 + 0x1f8);
    *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_2 + 0x208);
  }
  if (*(int *)(param_1 + 0x214) != *(int *)(param_2 + 0x214)) {
    param_1[0x210] = param_2[0x210];
    *(undefined4 *)(param_1 + 0x214) = *(undefined4 *)(param_2 + 0x214);
  }
  if (*(int *)(param_1 + 0x21c) != *(int *)(param_2 + 0x21c)) {
    param_1[0x218] = param_2[0x218];
    *(undefined4 *)(param_1 + 0x21c) = *(undefined4 *)(param_2 + 0x21c);
  }
  FUN_140ae1244(param_1 + 0x220,param_2 + 0x220);
  FUN_140ae1244(param_1 + 0x238,param_2 + 0x238);
  if (*(int *)(param_1 + 0x254) != *(int *)(param_2 + 0x254)) {
    param_1[0x250] = param_2[0x250];
    *(undefined4 *)(param_1 + 0x254) = *(undefined4 *)(param_2 + 0x254);
  }
  if (*(int *)(param_1 + 0x25c) != *(int *)(param_2 + 0x25c)) {
    param_1[600] = param_2[600];
    *(undefined4 *)(param_1 + 0x25c) = *(undefined4 *)(param_2 + 0x25c);
  }
  if (*(int *)(param_1 + 0x264) != *(int *)(param_2 + 0x264)) {
    param_1[0x260] = param_2[0x260];
    *(undefined4 *)(param_1 + 0x264) = *(undefined4 *)(param_2 + 0x264);
  }
  return param_1;
}



// FUNCTION 148c71eda FUN_148c71eda body=95 status=ok
// SIG undefined FUN_148c71eda(void)

undefined8 * FUN_148c71eda(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14574293e(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c71f3a(param_1,iVar1);
      FUN_148c71fad(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c71f3a FUN_148c71f3a body=115 status=ok
// SIG undefined FUN_148c71f3a(void)

void FUN_148c71f3a(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c71fad FUN_148c71fad body=144 status=ok
// SIG undefined FUN_148c71fad(void)

void FUN_148c71fad(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined4 *)(param_1 + lVar2) = *(undefined4 *)(param_2 + lVar2);
      *(undefined8 *)(param_1 + 8 + lVar2) = 0;
      iVar1 = *(int *)(param_2 + 0x10 + lVar2);
      _Src = *(void **)(param_2 + 8 + lVar2);
      *(int *)(param_1 + 0x10 + lVar2) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x14 + lVar2) = 0;
      }
      else {
        FUN_1446dd670(param_1 + 8 + lVar2,iVar1,0);
        memcpy(*(void **)(param_1 + 8 + lVar2),_Src,(longlong)iVar1 * 2);
      }
      lVar2 = lVar2 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148c7203e FUN_148c7203e body=79 status=ok
// SIG undefined FUN_148c7203e(void)

void FUN_148c7203e(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xd0);
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b89fa10;
  param_2[0x19] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  *(undefined4 *)(param_2 + 0x18) = 0;
  return;
}



// FUNCTION 148c7208e FUN_148c7208e body=63 status=ok
// SIG undefined FUN_148c7208e(void)

void FUN_148c7208e(undefined8 param_1,undefined8 *param_2)

{
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b89fa10;
  param_2[0x19] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  *(undefined4 *)(param_2 + 0x18) = 0;
  return;
}



// FUNCTION 148c720f2 FUN_148c720f2 body=99 status=ok
// SIG undefined FUN_148c720f2(void)

undefined1 FUN_148c720f2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1489fb7d2(param_2,param_3);
    FUN_148c72240(param_2 + 0xb0,param_3 + 0xb0);
    uVar1 = *(undefined4 *)(param_3 + 0xc4);
    uVar2 = *(undefined4 *)(param_3 + 200);
    uVar3 = *(undefined4 *)(param_3 + 0xcc);
    *(undefined4 *)(param_2 + 0xc0) = *(undefined4 *)(param_3 + 0xc0);
    *(undefined4 *)(param_2 + 0xc4) = uVar1;
    *(undefined4 *)(param_2 + 200) = uVar2;
    *(undefined4 *)(param_2 + 0xcc) = uVar3;
    param_2 = param_2 + 0xd0;
    param_3 = param_3 + 0xd0;
  }
  return 1;
}



// FUNCTION 148c7217e FUN_148c7217e body=59 status=ok
// SIG undefined FUN_148c7217e(void)

undefined8 FUN_148c7217e(longlong *param_1)

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



// FUNCTION 148c721ca FUN_148c721ca body=40 status=ok
// SIG undefined FUN_148c721ca(void)

void FUN_148c721ca(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd0) == '\x01') {
    FUN_145c5b8f0(param_2);
    *(undefined1 *)(param_2 + 0xd0) = 0;
  }
  return;
}



// FUNCTION 148c72240 FUN_148c72240 body=95 status=ok
// SIG undefined FUN_148c72240(void)

undefined8 * FUN_148c72240(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145742812(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c722a0(param_1,iVar1);
      FUN_148c72312(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c722a0 FUN_148c722a0 body=114 status=ok
// SIG undefined FUN_148c722a0(void)

void FUN_148c722a0(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x268,8);
    iVar2 = (int)(uVar1 / 0x268);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x268,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c72312 FUN_148c72312 body=60 status=ok
// SIG undefined FUN_148c72312(void)

void FUN_148c72312(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_145742ca6(param_1,param_2);
    param_1 = param_1 + 0x268;
    param_2 = param_2 + 0x268;
  }
  return;
}



// FUNCTION 148c72350 FUN_148c72350 body=37 status=ok
// SIG undefined FUN_148c72350(void)

void FUN_148c72350(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xf0);
  FUN_1459b6156(param_2);
  return;
}



// FUNCTION 148c723a2 FUN_148c723a2 body=63 status=ok
// SIG undefined FUN_148c723a2(void)

undefined1 FUN_148c723a2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c7252a(param_2,param_3);
    param_3 = param_3 + 0xf0;
    param_2 = param_2 + 0xf0;
  }
  return 1;
}



// FUNCTION 148c7240a FUN_148c7240a body=59 status=ok
// SIG undefined FUN_148c7240a(void)

undefined8 FUN_148c7240a(longlong *param_1)

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



// FUNCTION 148c72456 FUN_148c72456 body=40 status=ok
// SIG undefined FUN_148c72456(void)

void FUN_148c72456(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf0) == '\x01') {
    FUN_14579ea74(param_2);
    *(undefined1 *)(param_2 + 0xf0) = 0;
  }
  return;
}



// FUNCTION 148c724cc FUN_148c724cc body=38 status=ok
// SIG undefined FUN_148c724cc(void)

undefined8 FUN_148c724cc(undefined8 param_1,int param_2)

{
  FUN_14579ea74();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c724f2 FUN_148c724f2 body=55 status=ok
// SIG undefined FUN_148c724f2(void)

void FUN_148c724f2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb77c0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb77c0 = FUN_140002ddd(FUN_146603625,uVar1,L"OakWidgetData_CalibrationOptionsMenu");
  }
  return;
}



// FUNCTION 148c7252a FUN_148c7252a body=246 status=ok
// SIG undefined FUN_148c7252a(void)

longlong FUN_148c7252a(longlong param_1,longlong param_2)

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
  FUN_148c72620(param_1 + 0xd0,param_2 + 0xd0);
  if (*(int *)(param_1 + 0xe4) != *(int *)(param_2 + 0xe4)) {
    *(undefined1 *)(param_1 + 0xe0) = *(undefined1 *)(param_2 + 0xe0);
    *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_2 + 0xe4);
  }
  *(undefined2 *)(param_1 + 0xe8) = *(undefined2 *)(param_2 + 0xe8);
  return param_1;
}



// FUNCTION 148c72620 FUN_148c72620 body=93 status=ok
// SIG undefined FUN_148c72620(void)

undefined8 * FUN_148c72620(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140d46fcd(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c7267e(param_1,iVar1);
      FUN_148c726f4(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c7267e FUN_148c7267e body=118 status=ok
// SIG undefined FUN_148c7267e(void)

void FUN_148c7267e(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x1e8,8);
    iVar2 = (int)(uVar1 / 0x1e8);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x1e8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c726f4 FUN_148c726f4 body=60 status=ok
// SIG undefined FUN_148c726f4(void)

void FUN_148c726f4(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c72730(param_1,param_2);
    param_1 = param_1 + 0x1e8;
    param_2 = param_2 + 0x1e8;
  }
  return;
}



// FUNCTION 148c72730 FUN_148c72730 body=378 status=ok
// SIG undefined FUN_148c72730(void)

longlong FUN_148c72730(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  FUN_140dd90de();
  FUN_140dd90de(param_1 + 0x18,param_2 + 0x18);
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
  FUN_145d32fd4(param_1 + 0x38,param_2 + 0x38);
  FUN_145d332e4(param_1 + 0x88,param_2 + 0x88);
  FUN_148c728aa(param_1 + 0xd0,param_2 + 0xd0);
  *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_2 + 0x150);
  *(undefined2 *)(param_1 + 0x158) = *(undefined2 *)(param_2 + 0x158);
  *(undefined8 *)(param_1 + 0x160) = 0;
  iVar1 = *(int *)(param_2 + 0x168);
  _Src = *(void **)(param_2 + 0x160);
  *(int *)(param_1 + 0x168) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x16c) = 0;
  }
  else {
    FUN_1446dd670((undefined8 *)(param_1 + 0x160),iVar1,0);
    memcpy(*(void **)(param_1 + 0x160),_Src,(longlong)iVar1 * 2);
  }
  FUN_148c72a8c(param_1 + 0x170,param_2 + 0x170);
  *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_2 + 0x1a0);
  *(undefined1 *)(param_1 + 0x1a8) = *(undefined1 *)(param_2 + 0x1a8);
  FUN_140dd90de(param_1 + 0x1b0,param_2 + 0x1b0);
  *(undefined1 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  *(undefined1 *)(param_1 + 0x1c8) = *(undefined1 *)(param_2 + 0x1c8);
  *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(param_2 + 0x1cc);
  *(undefined1 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x1d4) = 0;
  *(undefined1 *)(param_1 + 0x1d0) = *(undefined1 *)(param_2 + 0x1d0);
  *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(param_2 + 0x1d4);
  uVar2 = *(undefined8 *)(param_2 + 0x1d8);
  *(undefined8 *)(param_1 + 0x1dd) = *(undefined8 *)(param_2 + 0x1dd);
  *(undefined8 *)(param_1 + 0x1d8) = uVar2;
  return param_1;
}



// FUNCTION 148c728aa FUN_148c728aa body=481 status=ok
// SIG undefined FUN_148c728aa(void)

undefined4 * FUN_148c728aa(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  *(undefined8 *)(param_1 + 6) = 0;
  iVar1 = param_2[8];
  pvVar2 = *(void **)(param_2 + 6);
  param_1[8] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[9] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 6,iVar1,0);
    memcpy(*(void **)(param_1 + 6),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 10) = 0;
  iVar1 = param_2[0xc];
  pvVar2 = *(void **)(param_2 + 10);
  param_1[0xc] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0xd] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 10,iVar1,0);
    memcpy(*(void **)(param_1 + 10),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0xe) = 0;
  iVar1 = param_2[0x10];
  pvVar2 = *(void **)(param_2 + 0xe);
  param_1[0x10] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x11] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xe,iVar1,0);
    memcpy(*(void **)(param_1 + 0xe),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0x12) = 0;
  iVar1 = param_2[0x14];
  pvVar2 = *(void **)(param_2 + 0x12);
  param_1[0x14] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x15] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x12,iVar1,0);
    memcpy(*(void **)(param_1 + 0x12),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0x16) = 0;
  iVar1 = param_2[0x18];
  uVar3 = *(undefined8 *)(param_2 + 0x16);
  param_1[0x18] = iVar1;
  if (iVar1 == 0) {
    param_1[0x19] = 0;
  }
  else {
    FUN_1457fd43c(param_1 + 0x16,iVar1,0);
    FUN_1410d0c19(*(undefined8 *)(param_1 + 0x16),uVar3,iVar1);
  }
  *(undefined2 *)(param_1 + 0x1a) = *(undefined2 *)(param_2 + 0x1a);
  *(undefined8 *)(param_1 + 0x1c) = 0;
  iVar1 = param_2[0x1e];
  uVar3 = *(undefined8 *)(param_2 + 0x1c);
  param_1[0x1e] = iVar1;
  if (iVar1 == 0) {
    param_1[0x1f] = 0;
  }
  else {
    FUN_140b856de(param_1 + 0x1c,iVar1,0);
    FUN_140b8566a(*(undefined8 *)(param_1 + 0x1c),uVar3,iVar1);
  }
  return param_1;
}



// FUNCTION 148c72a8c FUN_148c72a8c body=186 status=ok
// SIG undefined FUN_148c72a8c(void)

undefined8 * FUN_148c72a8c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
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
  *(undefined1 *)((longlong)param_1 + 0x2a) = *(undefined1 *)((longlong)param_2 + 0x2a);
  *(undefined2 *)(param_1 + 5) = *(undefined2 *)(param_2 + 5);
  return param_1;
}



// FUNCTION 148c72b48 FUN_148c72b48 body=48 status=ok
// SIG undefined FUN_148c72b48(void)

void FUN_148c72b48(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xf0);
  FUN_1459b6156(param_2);
  *param_2 = &PTR_FUN_14b89fd30;
  return;
}



// FUNCTION 148c72b78 FUN_148c72b78 body=32 status=ok
// SIG undefined FUN_148c72b78(void)

void FUN_148c72b78(undefined8 param_1,undefined8 *param_2)

{
  FUN_1459b6156(param_2);
  *param_2 = &PTR_FUN_14b89fd30;
  return;
}



// FUNCTION 148c72bbc FUN_148c72bbc body=63 status=ok
// SIG undefined FUN_148c72bbc(void)

undefined1 FUN_148c72bbc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c7252a(param_2,param_3);
    param_3 = param_3 + 0xf0;
    param_2 = param_2 + 0xf0;
  }
  return 1;
}



// FUNCTION 148c72c24 FUN_148c72c24 body=59 status=ok
// SIG undefined FUN_148c72c24(void)

undefined8 FUN_148c72c24(longlong *param_1)

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



// FUNCTION 148c72c70 FUN_148c72c70 body=40 status=ok
// SIG undefined FUN_148c72c70(void)

void FUN_148c72c70(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf0) == '\x01') {
    FUN_14579ea74(param_2);
    *(undefined1 *)(param_2 + 0xf0) = 0;
  }
  return;
}



// FUNCTION 148c72ce6 FUN_148c72ce6 body=38 status=ok
// SIG undefined FUN_148c72ce6(void)

undefined8 FUN_148c72ce6(undefined8 param_1,int param_2)

{
  FUN_14579ea74();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c72d0c FUN_148c72d0c body=55 status=ok
// SIG undefined FUN_148c72d0c(void)

void FUN_148c72d0c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb77d8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb77d8 =
         FUN_140002ddd(FUN_1466036b9,uVar1,L"OakWidgetData_CalibrationOptionsMenu_Accessibility");
  }
  return;
}



// FUNCTION 148c72d44 FUN_148c72d44 body=48 status=ok
// SIG undefined FUN_148c72d44(void)

void FUN_148c72d44(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xf0);
  FUN_1459b6156(param_2);
  *param_2 = &PTR_FUN_14b89fec0;
  return;
}



// FUNCTION 148c72d74 FUN_148c72d74 body=32 status=ok
// SIG undefined FUN_148c72d74(void)

void FUN_148c72d74(undefined8 param_1,undefined8 *param_2)

{
  FUN_1459b6156(param_2);
  *param_2 = &PTR_FUN_14b89fec0;
  return;
}



// FUNCTION 148c72db8 FUN_148c72db8 body=63 status=ok
// SIG undefined FUN_148c72db8(void)

undefined1 FUN_148c72db8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c7252a(param_2,param_3);
    param_3 = param_3 + 0xf0;
    param_2 = param_2 + 0xf0;
  }
  return 1;
}



// FUNCTION 148c72e20 FUN_148c72e20 body=59 status=ok
// SIG undefined FUN_148c72e20(void)

undefined8 FUN_148c72e20(longlong *param_1)

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



// FUNCTION 148c72e6c FUN_148c72e6c body=40 status=ok
// SIG undefined FUN_148c72e6c(void)

void FUN_148c72e6c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf0) == '\x01') {
    FUN_14579ea74(param_2);
    *(undefined1 *)(param_2 + 0xf0) = 0;
  }
  return;
}



// FUNCTION 148c72ee2 FUN_148c72ee2 body=38 status=ok
// SIG undefined FUN_148c72ee2(void)

undefined8 FUN_148c72ee2(undefined8 param_1,int param_2)

{
  FUN_14579ea74();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c72f08 FUN_148c72f08 body=55 status=ok
// SIG undefined FUN_148c72f08(void)

void FUN_148c72f08(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb77f0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb77f0 = FUN_140002ddd(FUN_14660374b,uVar1,L"OakWidgetData_CalibrationOptionsMenu_Audio")
    ;
  }
  return;
}



// FUNCTION 148c72f40 FUN_148c72f40 body=76 status=ok
// SIG undefined FUN_148c72f40(void)

void FUN_148c72f40(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x108);
  FUN_1459b6156(param_2);
  *param_2 = &PTR_FUN_14b8a0050;
  FUN_140056680(param_2 + 0x1e,&DAT_149dfb77a);
  *(undefined2 *)(param_2 + 0x20) = 0;
  return;
}



// FUNCTION 148c72f8c FUN_148c72f8c body=60 status=ok
// SIG undefined FUN_148c72f8c(void)

void FUN_148c72f8c(undefined8 param_1,undefined8 *param_2)

{
  FUN_1459b6156(param_2);
  *param_2 = &PTR_FUN_14b8a0050;
  FUN_140056680(param_2 + 0x1e,&DAT_149dfb77a);
  *(undefined2 *)(param_2 + 0x20) = 0;
  return;
}



// FUNCTION 148c72fec FUN_148c72fec body=105 status=ok
// SIG undefined FUN_148c72fec(void)

undefined8 FUN_148c72fec(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0xf0;
    param_2 = param_2 + 0xf0;
    do {
      FUN_148c7252a(param_2 + -0xf0,param_3 + -0xf0);
      FUN_144a787a6(param_2,param_3);
      *(undefined2 *)(param_2 + 0x10) = *(undefined2 *)(param_3 + 0x10);
      param_3 = param_3 + 0x108;
      param_2 = param_2 + 0x108;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c7307e FUN_148c7307e body=59 status=ok
// SIG undefined FUN_148c7307e(void)

undefined8 FUN_148c7307e(longlong *param_1)

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


