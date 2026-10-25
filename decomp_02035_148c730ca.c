// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148c730ca FUN_148c730ca body=67 status=ok
// SIG undefined FUN_148c730ca(void)

void FUN_148c730ca(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x21) == '\x01') {
    *param_2 = &PTR_FUN_14b8a0050;
    if (param_2[0x1e] != 0) {
      FUN_1400020a8();
    }
    FUN_14579ea74(param_2);
    *(undefined1 *)(param_2 + 0x21) = 0;
  }
  return;
}



// FUNCTION 148c7315e FUN_148c7315e body=69 status=ok
// SIG undefined FUN_148c7315e(void)

void FUN_148c7315e(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x108);
  FUN_1459b6156(param_2);
  *param_2 = &PTR_FUN_14b8a01e0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  return;
}



// FUNCTION 148c731a4 FUN_148c731a4 body=53 status=ok
// SIG undefined FUN_148c731a4(void)

void FUN_148c731a4(undefined8 param_1,undefined8 *param_2)

{
  FUN_1459b6156(param_2);
  *param_2 = &PTR_FUN_14b8a01e0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  return;
}



// FUNCTION 148c731fe FUN_148c731fe body=105 status=ok
// SIG undefined FUN_148c731fe(void)

undefined8 FUN_148c731fe(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0xf8;
    param_2 = param_2 + 0xf8;
    do {
      FUN_148c7252a(param_2 + -0xf8,param_3 + -0xf8);
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_144a787a6(param_2,param_3);
      param_3 = param_3 + 0x108;
      param_2 = param_2 + 0x108;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c73290 FUN_148c73290 body=59 status=ok
// SIG undefined FUN_148c73290(void)

undefined8 FUN_148c73290(longlong *param_1)

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



// FUNCTION 148c732dc FUN_148c732dc body=67 status=ok
// SIG undefined FUN_148c732dc(void)

void FUN_148c732dc(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x21) == '\x01') {
    *param_2 = &PTR_FUN_14b8a01e0;
    if (param_2[0x1f] != 0) {
      FUN_1400020a8();
    }
    FUN_14579ea74(param_2);
    *(undefined1 *)(param_2 + 0x21) = 0;
  }
  return;
}



// FUNCTION 148c73370 FUN_148c73370 body=37 status=ok
// SIG undefined FUN_148c73370(void)

void FUN_148c73370(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xf8);
  FUN_145d698bc(param_2);
  return;
}



// FUNCTION 148c733c2 FUN_148c733c2 body=63 status=ok
// SIG undefined FUN_148c733c2(void)

undefined1 FUN_148c733c2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c734ec(param_2,param_3);
    param_3 = param_3 + 0xf8;
    param_2 = param_2 + 0xf8;
  }
  return 1;
}



// FUNCTION 148c7342a FUN_148c7342a body=59 status=ok
// SIG undefined FUN_148c7342a(void)

undefined8 FUN_148c7342a(longlong *param_1)

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



// FUNCTION 148c73476 FUN_148c73476 body=40 status=ok
// SIG undefined FUN_148c73476(void)

void FUN_148c73476(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf8) == '\x01') {
    FUN_145cb868c(param_2);
    *(undefined1 *)(param_2 + 0xf8) = 0;
  }
  return;
}



// FUNCTION 148c734ec FUN_148c734ec body=81 status=ok
// SIG undefined FUN_148c734ec(void)

longlong FUN_148c734ec(longlong param_1,longlong param_2)

{
  FUN_1489fb7d2();
  FUN_140ae1244(param_1 + 0xb0,param_2 + 0xb0);
  FUN_140ae1244(param_1 + 200,param_2 + 200);
  FUN_140ae1244(param_1 + 0xe0,param_2 + 0xe0);
  return param_1;
}



// FUNCTION 148c7353e FUN_148c7353e body=65 status=ok
// SIG undefined FUN_148c7353e(void)

void FUN_148c7353e(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xb8);
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b8a0500;
  *(undefined1 *)(param_2 + 0x16) = 0;
  *(undefined4 *)((longlong)param_2 + 0xb4) = 0;
  return;
}



// FUNCTION 148c73580 FUN_148c73580 body=49 status=ok
// SIG undefined FUN_148c73580(void)

void FUN_148c73580(undefined8 param_1,undefined8 *param_2)

{
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b8a0500;
  *(undefined1 *)(param_2 + 0x16) = 0;
  *(undefined4 *)((longlong)param_2 + 0xb4) = 0;
  return;
}



// FUNCTION 148c735d6 FUN_148c735d6 body=100 status=ok
// SIG undefined FUN_148c735d6(void)

undefined8 FUN_148c735d6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1489fb7d2(param_2,param_3);
    if (*(int *)(param_2 + 0xb4) != *(int *)(param_3 + 0xb4)) {
      *(undefined1 *)(param_2 + 0xb0) = *(undefined1 *)(param_3 + 0xb0);
      *(undefined4 *)(param_2 + 0xb4) = *(undefined4 *)(param_3 + 0xb4);
    }
    param_3 = param_3 + 0xb8;
    param_2 = param_2 + 0xb8;
  }
  return 1;
}



// FUNCTION 148c73662 FUN_148c73662 body=59 status=ok
// SIG undefined FUN_148c73662(void)

undefined8 FUN_148c73662(longlong *param_1)

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



// FUNCTION 148c736ae FUN_148c736ae body=38 status=ok
// SIG undefined FUN_148c736ae(void)

void FUN_148c736ae(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb8) == '\x01') {
    FUN_140fe7f26(param_2);
    *(undefined1 *)(param_2 + 0xb8) = 0;
  }
  return;
}



// FUNCTION 148c73724 FUN_148c73724 body=37 status=ok
// SIG undefined FUN_148c73724(void)

void FUN_148c73724(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x158);
  FUN_14615c5f8(param_2);
  return;
}



// FUNCTION 148c73776 FUN_148c73776 body=63 status=ok
// SIG undefined FUN_148c73776(void)

undefined1 FUN_148c73776(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c738a0(param_2,param_3);
    param_3 = param_3 + 0x158;
    param_2 = param_2 + 0x158;
  }
  return 1;
}



// FUNCTION 148c737de FUN_148c737de body=59 status=ok
// SIG undefined FUN_148c737de(void)

undefined8 FUN_148c737de(longlong *param_1)

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



// FUNCTION 148c7382a FUN_148c7382a body=40 status=ok
// SIG undefined FUN_148c7382a(void)

void FUN_148c7382a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x158) == '\x01') {
    FUN_145d5da48(param_2);
    *(undefined1 *)(param_2 + 0x158) = 0;
  }
  return;
}



// FUNCTION 148c738a0 FUN_148c738a0 body=496 status=ok
// SIG undefined FUN_148c738a0(void)

longlong FUN_148c738a0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1489fb7d2();
  if (*(int *)(param_1 + 0xb4) != *(int *)(param_2 + 0xb4)) {
    *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
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
  if (*(int *)(param_1 + 0xd8) != *(int *)(param_2 + 0xd8)) {
    FUN_144a787a6(param_1 + 200,param_2 + 200);
    *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
  }
  if (*(int *)(param_1 + 0xf0) != *(int *)(param_2 + 0xf0)) {
    FUN_144a787a6(param_1 + 0xe0,param_2 + 0xe0);
    *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
  }
  if (*(int *)(param_1 + 0x108) != *(int *)(param_2 + 0x108)) {
    FUN_144a787a6(param_1 + 0xf8,param_2 + 0xf8);
    *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_2 + 0x108);
  }
  if ((*(int *)(param_1 + 0x120) == 0) || (*(int *)(param_1 + 0x120) != *(int *)(param_2 + 0x120)))
  {
    *(int *)(param_1 + 0x120) = *(int *)(param_2 + 0x120);
    FUN_14570e782(param_1 + 0x110,param_2 + 0x110);
  }
  if (*(int *)(param_1 + 300) != *(int *)(param_2 + 300)) {
    *(undefined1 *)(param_1 + 0x128) = *(undefined1 *)(param_2 + 0x128);
    *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_2 + 300);
  }
  if (*(int *)(param_1 + 0x134) != *(int *)(param_2 + 0x134)) {
    *(undefined1 *)(param_1 + 0x130) = *(undefined1 *)(param_2 + 0x130);
    *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_2 + 0x134);
  }
  if (*(int *)(param_1 + 0x13c) != *(int *)(param_2 + 0x13c)) {
    *(undefined1 *)(param_1 + 0x138) = *(undefined1 *)(param_2 + 0x138);
    *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_2 + 0x13c);
  }
  if (*(int *)(param_1 + 0x144) != *(int *)(param_2 + 0x144)) {
    *(undefined1 *)(param_1 + 0x140) = *(undefined1 *)(param_2 + 0x140);
    *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_2 + 0x144);
  }
  uVar1 = *(undefined8 *)(param_2 + 0x150);
  *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_2 + 0x148);
  *(undefined8 *)(param_1 + 0x150) = uVar1;
  return param_1;
}



// FUNCTION 148c73af6 FUN_148c73af6 body=54 status=ok
// SIG undefined FUN_148c73af6(void)

undefined1 FUN_148c73af6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c73ca0(param_2,param_3);
    param_3 = param_3 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return 1;
}



// FUNCTION 148c73b54 FUN_148c73b54 body=59 status=ok
// SIG undefined FUN_148c73b54(void)

undefined8 FUN_148c73b54(longlong *param_1)

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



// FUNCTION 148c73b9a FUN_148c73b9a body=34 status=ok
// SIG undefined FUN_148c73b9a(void)

void FUN_148c73b9a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_148c73c0a(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 148c73c0a FUN_148c73c0a body=88 status=ok
// SIG undefined FUN_148c73c0a(void)

void FUN_148c73c0a(longlong param_1)

{
  FUN_148c73c62(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58));
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148c73c62 FUN_148c73c62 body=61 status=ok
// SIG undefined FUN_148c73c62(void)

void FUN_148c73c62(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 148c73ca0 FUN_148c73ca0 body=98 status=ok
// SIG undefined FUN_148c73ca0(void)

undefined4 * FUN_148c73ca0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_144a787a6(param_1 + 4,param_2 + 4);
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  FUN_144a787a6(param_1 + 0xc,param_2 + 0xc);
  FUN_144a787a6(param_1 + 0x10,param_2 + 0x10);
  FUN_148c73d02(param_1 + 0x14,param_2 + 0x14);
  param_1[0x18] = param_2[0x18];
  return param_1;
}



// FUNCTION 148c73d02 FUN_148c73d02 body=95 status=ok
// SIG undefined FUN_148c73d02(void)

undefined8 * FUN_148c73d02(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_148c73c62(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c73d62(param_1,iVar1);
      FUN_148c73dd5(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c73d62 FUN_148c73d62 body=115 status=ok
// SIG undefined FUN_148c73d62(void)

void FUN_148c73d62(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c73dd5 FUN_148c73dd5 body=52 status=ok
// SIG undefined FUN_148c73dd5(void)

void FUN_148c73dd5(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14709f484(param_1,param_2);
    param_1 = param_1 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return;
}



// FUNCTION 148c73e0a FUN_148c73e0a body=37 status=ok
// SIG undefined FUN_148c73e0a(void)

void FUN_148c73e0a(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x148);
  FUN_148c73f86(param_2);
  return;
}



// FUNCTION 148c73e5c FUN_148c73e5c body=63 status=ok
// SIG undefined FUN_148c73e5c(void)

undefined1 FUN_148c73e5c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c74136(param_2,param_3);
    param_3 = param_3 + 0x148;
    param_2 = param_2 + 0x148;
  }
  return 1;
}



// FUNCTION 148c73ec4 FUN_148c73ec4 body=59 status=ok
// SIG undefined FUN_148c73ec4(void)

undefined8 FUN_148c73ec4(longlong *param_1)

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



// FUNCTION 148c73f10 FUN_148c73f10 body=40 status=ok
// SIG undefined FUN_148c73f10(void)

void FUN_148c73f10(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x148) == '\x01') {
    FUN_148c74068(param_2);
    *(undefined1 *)(param_2 + 0x148) = 0;
  }
  return;
}



// FUNCTION 148c73f86 FUN_148c73f86 body=131 status=ok
// SIG undefined FUN_148c73f86(void)

undefined8 * FUN_148c73f86(undefined8 *param_1)

{
  FUN_1408f3f9e();
  *param_1 = &PTR_FUN_14b8a0980;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0x3f0000003f000000;
  param_1[0x24] = 0x41f000000000000a;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined1 *)(param_1 + 0x27) = 1;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  return param_1;
}



// FUNCTION 148c7400a FUN_148c7400a body=38 status=ok
// SIG undefined FUN_148c7400a(void)

undefined8 FUN_148c7400a(undefined8 param_1,int param_2)

{
  FUN_148c74068();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c74030 FUN_148c74030 body=55 status=ok
// SIG undefined FUN_148c74030(void)

void FUN_148c74030(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb7998 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb7998 = FUN_140002ddd(FUN_146603b11,uVar1,L"OakUIData_Credits");
  }
  return;
}



// FUNCTION 148c74068 FUN_148c74068 body=168 status=ok
// SIG undefined FUN_148c74068(void)

void FUN_148c74068(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8a0980;
  FUN_148c74110(param_1[0x25],*(undefined4 *)(param_1 + 0x26));
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_140fe7f26(param_1);
  return;
}



// FUNCTION 148c74110 FUN_148c74110 body=38 status=ok
// SIG undefined FUN_148c74110(void)

void FUN_148c74110(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148c73c0a(param_1);
    param_1 = param_1 + 0x68;
  }
  return;
}



// FUNCTION 148c74136 FUN_148c74136 body=186 status=ok
// SIG undefined FUN_148c74136(void)

longlong FUN_148c74136(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  FUN_1489fb7d2();
  FUN_144a787a6(param_1 + 0xb0,param_2 + 0xb0);
  *(undefined1 *)(param_1 + 0xc0) = *(undefined1 *)(param_2 + 0xc0);
  FUN_144a787a6(param_1 + 200,param_2 + 200);
  FUN_144a787a6(param_1 + 0xd8,param_2 + 0xd8);
  FUN_144a787a6(param_1 + 0xe8,param_2 + 0xe8);
  FUN_144a787a6(param_1 + 0xf8,param_2 + 0xf8);
  FUN_144a787a6(param_1 + 0x108,param_2 + 0x108);
  uVar1 = *(undefined4 *)(param_2 + 0x11c);
  uVar2 = *(undefined4 *)(param_2 + 0x120);
  uVar3 = *(undefined4 *)(param_2 + 0x124);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x118);
  *(undefined4 *)(param_1 + 0x11c) = uVar1;
  *(undefined4 *)(param_1 + 0x120) = uVar2;
  *(undefined4 *)(param_1 + 0x124) = uVar3;
  FUN_148c741f0(param_1 + 0x128,param_2 + 0x128);
  uVar4 = *(undefined8 *)(param_2 + 0x140);
  *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_2 + 0x138);
  *(undefined8 *)(param_1 + 0x140) = uVar4;
  return param_1;
}



// FUNCTION 148c741f0 FUN_148c741f0 body=95 status=ok
// SIG undefined FUN_148c741f0(void)

undefined8 * FUN_148c741f0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_148c74110(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c74250(param_1,iVar1);
      FUN_148c742bf(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c74250 FUN_148c74250 body=111 status=ok
// SIG undefined FUN_148c74250(void)

void FUN_148c74250(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c742bf FUN_148c742bf body=52 status=ok
// SIG undefined FUN_148c742bf(void)

void FUN_148c742bf(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c742f4(param_1,param_2);
    param_1 = param_1 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return;
}



// FUNCTION 148c742f4 FUN_148c742f4 body=333 status=ok
// SIG undefined FUN_148c742f4(void)

undefined4 * FUN_148c742f4(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  *(undefined8 *)(param_1 + 4) = 0;
  iVar1 = param_2[6];
  pvVar2 = *(void **)(param_2 + 4);
  param_1[6] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[7] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy(*(void **)(param_1 + 4),pvVar2,(longlong)iVar1 * 2);
  }
  uVar4 = param_2[9];
  uVar5 = param_2[10];
  uVar6 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = uVar4;
  param_1[10] = uVar5;
  param_1[0xb] = uVar6;
  *(undefined8 *)(param_1 + 0xc) = 0;
  iVar1 = param_2[0xe];
  pvVar2 = *(void **)(param_2 + 0xc);
  param_1[0xe] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0xf] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xc,iVar1,0);
    memcpy(*(void **)(param_1 + 0xc),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  iVar1 = param_2[0x12];
  pvVar2 = *(void **)(param_2 + 0x10);
  param_1[0x12] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x13] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x10,iVar1,0);
    memcpy(*(void **)(param_1 + 0x10),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0x14) = 0;
  iVar1 = param_2[0x16];
  uVar3 = *(undefined8 *)(param_2 + 0x14);
  param_1[0x16] = iVar1;
  if (iVar1 == 0) {
    param_1[0x17] = 0;
  }
  else {
    FUN_148c73d62(param_1 + 0x14,iVar1,0);
    FUN_148c73dd5(*(undefined8 *)(param_1 + 0x14),uVar3,iVar1);
  }
  param_1[0x18] = param_2[0x18];
  return param_1;
}



// FUNCTION 148c74442 FUN_148c74442 body=37 status=ok
// SIG undefined FUN_148c74442(void)

void FUN_148c74442(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x1a8);
  FUN_1461710fc(param_2);
  return;
}



// FUNCTION 148c74494 FUN_148c74494 body=63 status=ok
// SIG undefined FUN_148c74494(void)

undefined1 FUN_148c74494(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144077dd8(param_2,param_3);
    param_3 = param_3 + 0x1a8;
    param_2 = param_2 + 0x1a8;
  }
  return 1;
}



// FUNCTION 148c744fc FUN_148c744fc body=59 status=ok
// SIG undefined FUN_148c744fc(void)

undefined8 FUN_148c744fc(longlong *param_1)

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



// FUNCTION 148c74548 FUN_148c74548 body=40 status=ok
// SIG undefined FUN_148c74548(void)

void FUN_148c74548(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a8) == '\x01') {
    FUN_145c54aec(param_2);
    *(undefined1 *)(param_2 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 148c745c0 FUN_148c745c0 body=76 status=ok
// SIG undefined FUN_148c745c0(void)

void FUN_148c745c0(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xd0);
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b8a0ca0;
  *(undefined1 *)(param_2 + 0x16) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_2 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc4) = 0;
  return;
}



// FUNCTION 148c7460c FUN_148c7460c body=60 status=ok
// SIG undefined FUN_148c7460c(void)

void FUN_148c7460c(undefined8 param_1,undefined8 *param_2)

{
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b8a0ca0;
  *(undefined1 *)(param_2 + 0x16) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_2 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc4) = 0;
  return;
}



// FUNCTION 148c7466c FUN_148c7466c body=63 status=ok
// SIG undefined FUN_148c7466c(void)

undefined1 FUN_148c7466c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c74796(param_2,param_3);
    param_3 = param_3 + 0xd0;
    param_2 = param_2 + 0xd0;
  }
  return 1;
}



// FUNCTION 148c746d4 FUN_148c746d4 body=59 status=ok
// SIG undefined FUN_148c746d4(void)

undefined8 FUN_148c746d4(longlong *param_1)

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



// FUNCTION 148c74720 FUN_148c74720 body=40 status=ok
// SIG undefined FUN_148c74720(void)

void FUN_148c74720(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd0) == '\x01') {
    FUN_145c6773e(param_2);
    *(undefined1 *)(param_2 + 0xd0) = 0;
  }
  return;
}



// FUNCTION 148c74796 FUN_148c74796 body=119 status=ok
// SIG undefined FUN_148c74796(void)

longlong FUN_148c74796(longlong param_1,longlong param_2)

{
  FUN_1489fb7d2();
  if (*(int *)(param_1 + 0xb4) != *(int *)(param_2 + 0xb4)) {
    *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(param_2 + 0xb0);
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
  }
  if (*(int *)(param_1 + 200) != *(int *)(param_2 + 200) || *(int *)(param_1 + 200) == 0) {
    *(int *)(param_1 + 200) = *(int *)(param_2 + 200);
    FUN_140bee9ec(param_1 + 0xb8,param_2 + 0xb8);
  }
  return param_1;
}



// FUNCTION 148c7480e FUN_148c7480e body=69 status=ok
// SIG undefined FUN_148c7480e(void)

void FUN_148c7480e(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_2 + 1);
  *param_2 = &PTR_FUN_14b4677f0;
  FUN_144a5dc74(param_2 + 3);
  *param_2 = &PTR_FUN_14b8a0e30;
  *(undefined4 *)(param_2 + 5) = 0;
  return;
}



// FUNCTION 148c7486a FUN_148c7486a body=60 status=ok
// SIG undefined FUN_148c7486a(void)

undefined8 FUN_148c7486a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1489f8080(param_2,param_3);
    *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_3 + 0x28);
    param_2 = param_2 + 0x30;
    param_3 = param_3 + 0x30;
  }
  return 1;
}



// FUNCTION 148c748ce FUN_148c748ce body=59 status=ok
// SIG undefined FUN_148c748ce(void)

undefined8 FUN_148c748ce(longlong *param_1)

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



// FUNCTION 148c74914 FUN_148c74914 body=32 status=ok
// SIG undefined FUN_148c74914(void)

void FUN_148c74914(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_140f4522c(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 148c74986 FUN_148c74986 body=57 status=ok
// SIG undefined FUN_148c74986(void)

void FUN_148c74986(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb8610 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb8610 = FUN_140002ddd(FUN_146603cc7,uVar1,L"GbxUIDisplayDataDef_ListGroup");
  }
  return;
}



// FUNCTION 148c749f4 FUN_148c749f4 body=47 status=ok
// SIG undefined FUN_148c749f4(void)

void FUN_148c749f4(undefined8 param_1,longlong *param_2)

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



// FUNCTION 148c74a3a FUN_148c74a3a body=75 status=ok
// SIG undefined FUN_148c74a3a(void)

undefined8 FUN_148c74a3a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 148c74aae FUN_148c74aae body=59 status=ok
// SIG undefined FUN_148c74aae(void)

undefined8 FUN_148c74aae(longlong *param_1)

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



// FUNCTION 148c74b4c FUN_148c74b4c body=51 status=ok
// SIG undefined FUN_148c74b4c(void)

void FUN_148c74b4c(longlong *param_1)

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



// FUNCTION 148c74b80 FUN_148c74b80 body=94 status=ok
// SIG undefined FUN_148c74b80(void)

void FUN_148c74b80(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x188);
  FUN_1418d07d6(param_2);
  *(undefined8 *)((longlong)param_2 + 0x120) = 0;
  *(undefined8 *)((longlong)param_2 + 0x128) = 0;
  *(undefined8 *)((longlong)param_2 + 0x130) = 0;
  *(undefined8 *)((longlong)param_2 + 0x138) = 0;
  *(undefined8 *)((longlong)param_2 + 0x140) = 0;
  *(undefined8 *)((longlong)param_2 + 0x148) = 0;
  *(undefined8 *)((longlong)param_2 + 0x150) = 0;
  *(undefined8 *)((longlong)param_2 + 0x158) = 0;
  *(undefined8 *)((longlong)param_2 + 0x160) = 0;
  *(undefined8 *)((longlong)param_2 + 0x168) = 0;
  *(undefined8 *)((longlong)param_2 + 0x170) = 0;
  *(undefined8 *)((longlong)param_2 + 0x178) = 0;
  *(undefined8 *)((longlong)param_2 + 0x180) = 0;
  return;
}



// FUNCTION 148c74bde FUN_148c74bde body=78 status=ok
// SIG undefined FUN_148c74bde(void)

void FUN_148c74bde(undefined8 param_1,longlong param_2)

{
  FUN_1418d07d6(param_2);
  *(undefined8 *)(param_2 + 0x120) = 0;
  *(undefined8 *)(param_2 + 0x128) = 0;
  *(undefined8 *)(param_2 + 0x130) = 0;
  *(undefined8 *)(param_2 + 0x138) = 0;
  *(undefined8 *)(param_2 + 0x140) = 0;
  *(undefined8 *)(param_2 + 0x148) = 0;
  *(undefined8 *)(param_2 + 0x150) = 0;
  *(undefined8 *)(param_2 + 0x158) = 0;
  *(undefined8 *)(param_2 + 0x160) = 0;
  *(undefined8 *)(param_2 + 0x168) = 0;
  *(undefined8 *)(param_2 + 0x170) = 0;
  *(undefined8 *)(param_2 + 0x178) = 0;
  *(undefined8 *)(param_2 + 0x180) = 0;
  return;
}



// FUNCTION 148c74c4a FUN_148c74c4a body=63 status=ok
// SIG undefined FUN_148c74c4a(void)

undefined1 FUN_148c74c4a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c74e2e(param_2,param_3);
    param_3 = param_3 + 0x188;
    param_2 = param_2 + 0x188;
  }
  return 1;
}



// FUNCTION 148c74cb2 FUN_148c74cb2 body=59 status=ok
// SIG undefined FUN_148c74cb2(void)

undefined8 FUN_148c74cb2(longlong *param_1)

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



// FUNCTION 148c74cfe FUN_148c74cfe body=40 status=ok
// SIG undefined FUN_148c74cfe(void)

void FUN_148c74cfe(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x188) == '\x01') {
    FUN_148c74d74(param_2);
    *(undefined1 *)(param_2 + 0x188) = 0;
  }
  return;
}



// FUNCTION 148c74d74 FUN_148c74d74 body=124 status=ok
// SIG undefined FUN_148c74d74(void)

void FUN_148c74d74(longlong param_1)

{
  FUN_148c74df0(*(undefined8 *)(param_1 + 0x160),*(undefined4 *)(param_1 + 0x168));
  if (*(longlong *)(param_1 + 0x160) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x120) != 0) {
    FUN_1400020a8();
  }
  FUN_140ee5626(param_1);
  return;
}



// FUNCTION 148c74df0 FUN_148c74df0 body=61 status=ok
// SIG undefined FUN_148c74df0(void)

void FUN_148c74df0(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 148c74e2e FUN_148c74e2e body=132 status=ok
// SIG undefined FUN_148c74e2e(void)

longlong FUN_148c74e2e(longlong param_1,longlong param_2)

{
  FUN_148c4fac2();
  FUN_144a787a6(param_1 + 0x120,param_2 + 0x120);
  FUN_144a787a6(param_1 + 0x130,param_2 + 0x130);
  FUN_144a787a6(param_1 + 0x140,param_2 + 0x140);
  FUN_144a787a6(param_1 + 0x150,param_2 + 0x150);
  FUN_148c74eb2(param_1 + 0x160,param_2 + 0x160);
  FUN_14597db2c(param_1 + 0x170,param_2 + 0x170);
  return param_1;
}



// FUNCTION 148c74eb2 FUN_148c74eb2 body=95 status=ok
// SIG undefined FUN_148c74eb2(void)

undefined8 * FUN_148c74eb2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_148c74df0(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c74f12(param_1,iVar1);
      FUN_148c74f85(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c74f12 FUN_148c74f12 body=115 status=ok
// SIG undefined FUN_148c74f12(void)

void FUN_148c74f12(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c74f85 FUN_148c74f85 body=52 status=ok
// SIG undefined FUN_148c74f85(void)

void FUN_148c74f85(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c74fba(param_1,param_2);
    param_1 = param_1 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return;
}



// FUNCTION 148c74fba FUN_148c74fba body=168 status=ok
// SIG undefined FUN_148c74fba(void)

undefined8 * FUN_148c74fba(undefined8 *param_1,undefined8 *param_2)

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
  param_1[4] = param_2[4];
  return param_1;
}



// FUNCTION 148c75064 FUN_148c75064 body=37 status=ok
// SIG undefined FUN_148c75064(void)

void FUN_148c75064(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x218);
  FUN_14619e51a(param_2);
  return;
}



// FUNCTION 148c750b6 FUN_148c750b6 body=63 status=ok
// SIG undefined FUN_148c750b6(void)

undefined1 FUN_148c750b6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c7521a(param_2,param_3);
    param_3 = param_3 + 0x218;
    param_2 = param_2 + 0x218;
  }
  return 1;
}



// FUNCTION 148c7511e FUN_148c7511e body=59 status=ok
// SIG undefined FUN_148c7511e(void)

undefined8 FUN_148c7511e(longlong *param_1)

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



// FUNCTION 148c7516a FUN_148c7516a body=40 status=ok
// SIG undefined FUN_148c7516a(void)

void FUN_148c7516a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x218) == '\x01') {
    FUN_14613af6a(param_2);
    *(undefined1 *)(param_2 + 0x218) = 0;
  }
  return;
}



// FUNCTION 148c751e0 FUN_148c751e0 body=57 status=ok
// SIG undefined FUN_148c751e0(void)

void FUN_148c751e0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb8658 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb8658 = FUN_140002ddd(FUN_146603e45,uVar1,L"OakUIWidgetData_Customization");
  }
  return;
}



// FUNCTION 148c7521a FUN_148c7521a body=283 status=ok
// SIG undefined FUN_148c7521a(void)

longlong FUN_148c7521a(longlong param_1,longlong param_2)

{
  FUN_1489fb7d2();
  FUN_145b2a74a(param_1 + 0xb0,param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
  FUN_144a787a6(param_1 + 200,param_2 + 200);
  FUN_148c75336(param_1 + 0xd8,param_2 + 0xd8);
  FUN_148c75396(param_1 + 0xe8,param_2 + 0xe8);
  FUN_141262aba(param_1 + 0xf8,param_2 + 0xf8);
  *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_2 + 0x148);
  FUN_1403de7ba(param_1 + 0x150,param_2 + 0x150);
  *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_2 + 0x170);
  FUN_140b855d0(param_1 + 0x178,param_2 + 0x178);
  FUN_140bee9ec(param_1 + 0x1c8,param_2 + 0x1c8);
  *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(param_2 + 0x1d8);
  *(undefined8 *)(param_1 + 0x1e0) = *(undefined8 *)(param_2 + 0x1e0);
  FUN_144a787a6(param_1 + 0x1e8,param_2 + 0x1e8);
  *(undefined1 *)(param_1 + 0x1f8) = *(undefined1 *)(param_2 + 0x1f8);
  FUN_144a787a6(param_1 + 0x200,param_2 + 0x200);
  *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(param_2 + 0x210);
  return param_1;
}



// FUNCTION 148c75336 FUN_148c75336 body=95 status=ok
// SIG undefined FUN_148c75336(void)

undefined8 * FUN_148c75336(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145da3f75(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c753f6(param_1,iVar1);
      FUN_148c75469(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c75396 FUN_148c75396 body=95 status=ok
// SIG undefined FUN_148c75396(void)

undefined8 * FUN_148c75396(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145da3f4a(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c757a0(param_1,iVar1);
      FUN_148c75816(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c753f6 FUN_148c753f6 body=115 status=ok
// SIG undefined FUN_148c753f6(void)

void FUN_148c753f6(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c75469 FUN_148c75469 body=60 status=ok
// SIG undefined FUN_148c75469(void)

void FUN_148c75469(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c754a6(param_1,param_2);
    param_1 = param_1 + 0x120;
    param_2 = param_2 + 0x120;
  }
  return;
}



// FUNCTION 148c754a6 FUN_148c754a6 body=761 status=ok
// SIG undefined FUN_148c754a6(void)

undefined4 * FUN_148c754a6(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  iVar1 = param_2[4];
  pvVar2 = *(void **)(param_2 + 2);
  param_1[4] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[5] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy(*(void **)(param_1 + 2),pvVar2,(longlong)iVar1 * 2);
  }
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
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  uVar4 = param_2[0xf];
  uVar5 = param_2[0x10];
  uVar6 = param_2[0x11];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar4;
  param_1[0x10] = uVar5;
  param_1[0x11] = uVar6;
  *(undefined8 *)(param_1 + 0x14) = 0;
  iVar1 = param_2[0x16];
  pvVar2 = *(void **)(param_2 + 0x14);
  param_1[0x16] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x17] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x14,iVar1,0);
    memcpy(*(void **)(param_1 + 0x14),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  uVar4 = param_2[0x1b];
  uVar5 = param_2[0x1c];
  uVar6 = param_2[0x1d];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = uVar4;
  param_1[0x1c] = uVar5;
  param_1[0x1d] = uVar6;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  iVar1 = param_2[0x20];
  pvVar2 = *(void **)(param_2 + 0x1e);
  param_1[0x20] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x21] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x1e,iVar1,0);
    memcpy(*(void **)(param_1 + 0x1e),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x22);
  *(undefined8 *)(param_1 + 0x24) = 0;
  iVar1 = param_2[0x26];
  pvVar2 = *(void **)(param_2 + 0x24);
  param_1[0x26] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x27] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x24,iVar1,0);
    memcpy(*(void **)(param_1 + 0x24),pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0x30] = param_2[0x30];
  uVar4 = param_2[0x28];
  uVar5 = param_2[0x29];
  uVar6 = param_2[0x2a];
  uVar7 = param_2[0x2b];
  uVar8 = param_2[0x2d];
  uVar9 = param_2[0x2e];
  uVar10 = param_2[0x2f];
  param_1[0x2c] = param_2[0x2c];
  param_1[0x2d] = uVar8;
  param_1[0x2e] = uVar9;
  param_1[0x2f] = uVar10;
  param_1[0x28] = uVar4;
  param_1[0x29] = uVar5;
  param_1[0x2a] = uVar6;
  param_1[0x2b] = uVar7;
  param_1[0x32] = param_2[0x32];
  FUN_1447a97f4(param_1 + 0x34,param_2 + 0x34);
  *(undefined8 *)(param_1 + 0x3e) = 0;
  iVar1 = param_2[0x40];
  pvVar2 = *(void **)(param_2 + 0x3e);
  param_1[0x40] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x41] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x3e,iVar1,0);
    memcpy(*(void **)(param_1 + 0x3e),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined2 *)(param_1 + 0x42) = *(undefined2 *)(param_2 + 0x42);
  *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_2 + 0x44);
  lVar3 = *(longlong *)(param_2 + 0x46);
  *(longlong *)(param_1 + 0x46) = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 148c757a0 FUN_148c757a0 body=118 status=ok
// SIG undefined FUN_148c757a0(void)

void FUN_148c757a0(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c75816 FUN_148c75816 body=60 status=ok
// SIG undefined FUN_148c75816(void)

void FUN_148c75816(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c75852(param_1,param_2);
    param_1 = param_1 + 0x188;
    param_2 = param_2 + 0x188;
  }
  return;
}



// FUNCTION 148c75852 FUN_148c75852 body=508 status=ok
// SIG undefined FUN_148c75852(void)

longlong FUN_148c75852(longlong param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  FUN_148c754a6();
  *(undefined8 *)(param_1 + 0x120) = 0;
  iVar1 = *(int *)(param_2 + 0x128);
  pvVar2 = *(void **)(param_2 + 0x120);
  *(int *)(param_1 + 0x128) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 300) = 0;
  }
  else {
    FUN_1446dd670((undefined8 *)(param_1 + 0x120),iVar1,0);
    memcpy(*(void **)(param_1 + 0x120),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0x130) = 0;
  iVar1 = *(int *)(param_2 + 0x138);
  pvVar2 = *(void **)(param_2 + 0x130);
  *(int *)(param_1 + 0x138) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x13c) = 0;
  }
  else {
    FUN_1446dd670((undefined8 *)(param_1 + 0x130),iVar1,0);
    memcpy(*(void **)(param_1 + 0x130),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0x140) = 0;
  iVar1 = *(int *)(param_2 + 0x148);
  pvVar2 = *(void **)(param_2 + 0x140);
  *(int *)(param_1 + 0x148) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x14c) = 0;
  }
  else {
    FUN_1446dd670((undefined8 *)(param_1 + 0x140),iVar1,0);
    memcpy(*(void **)(param_1 + 0x140),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0x150) = 0;
  iVar1 = *(int *)(param_2 + 0x158);
  pvVar2 = *(void **)(param_2 + 0x150);
  *(int *)(param_1 + 0x158) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x15c) = 0;
  }
  else {
    FUN_1446dd670((undefined8 *)(param_1 + 0x150),iVar1,0);
    memcpy(*(void **)(param_1 + 0x150),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0x160) = 0;
  iVar1 = *(int *)(param_2 + 0x168);
  uVar3 = *(undefined8 *)(param_2 + 0x160);
  *(int *)(param_1 + 0x168) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x16c) = 0;
  }
  else {
    FUN_148c74f12((undefined8 *)(param_1 + 0x160),iVar1,0);
    FUN_148c74f85(*(undefined8 *)(param_1 + 0x160),uVar3,iVar1);
  }
  FUN_1418d179e(param_1 + 0x170,param_2 + 0x170);
  return param_1;
}



// FUNCTION 148c75a84 FUN_148c75a84 body=54 status=ok
// SIG undefined FUN_148c75a84(void)

undefined1 FUN_148c75a84(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1406fa324(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 148c75ae2 FUN_148c75ae2 body=59 status=ok
// SIG undefined FUN_148c75ae2(void)

undefined8 FUN_148c75ae2(longlong *param_1)

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



// FUNCTION 148c75b28 FUN_148c75b28 body=37 status=ok
// SIG undefined FUN_148c75b28(void)

void FUN_148c75b28(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 148c75bae FUN_148c75bae body=44 status=ok
// SIG undefined FUN_148c75bae(void)

void FUN_148c75bae(undefined8 param_1,longlong *param_2)

{
  FUN_140cc83f7(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148c75bf0 FUN_148c75bf0 body=54 status=ok
// SIG undefined FUN_148c75bf0(void)

undefined1 FUN_148c75bf0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1411c9b4c(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 148c75c4e FUN_148c75c4e body=59 status=ok
// SIG undefined FUN_148c75c4e(void)

undefined8 FUN_148c75c4e(longlong *param_1)

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



// FUNCTION 148c75cec FUN_148c75cec body=48 status=ok
// SIG undefined FUN_148c75cec(void)

void FUN_148c75cec(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_140cc83f7(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 148c75d50 FUN_148c75d50 body=54 status=ok
// SIG undefined FUN_148c75d50(void)

undefined1 FUN_148c75d50(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_145da3bf4(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 148c75dae FUN_148c75dae body=59 status=ok
// SIG undefined FUN_148c75dae(void)

undefined8 FUN_148c75dae(longlong *param_1)

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



// FUNCTION 148c75df4 FUN_148c75df4 body=37 status=ok
// SIG undefined FUN_148c75df4(void)

void FUN_148c75df4(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 148c75eb8 FUN_148c75eb8 body=42 status=ok
// SIG undefined FUN_148c75eb8(void)

void FUN_148c75eb8(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(param_2);
  return;
}



// FUNCTION 148c75ef8 FUN_148c75ef8 body=54 status=ok
// SIG undefined FUN_148c75ef8(void)

undefined1 FUN_148c75ef8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14058acb2(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 148c75f56 FUN_148c75f56 body=59 status=ok
// SIG undefined FUN_148c75f56(void)

undefined8 FUN_148c75f56(longlong *param_1)

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



// FUNCTION 148c75f9c FUN_148c75f9c body=53 status=ok
// SIG undefined FUN_148c75f9c(void)

void FUN_148c75f9c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    *(undefined4 *)(param_2 + 0x48) = 0;
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1407a3a68(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 148c76022 FUN_148c76022 body=48 status=ok
// SIG undefined FUN_148c76022(void)

void FUN_148c76022(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xb50);
  FUN_145854e74(param_2);
  *param_2 = &PTR_FUN_14b8a1980;
  return;
}



// FUNCTION 148c76052 FUN_148c76052 body=32 status=ok
// SIG undefined FUN_148c76052(void)

void FUN_148c76052(undefined8 param_1,undefined8 *param_2)

{
  FUN_145854e74(param_2);
  *param_2 = &PTR_FUN_14b8a1980;
  return;
}



// FUNCTION 148c76090 FUN_148c76090 body=63 status=ok
// SIG undefined FUN_148c76090(void)

undefined1 FUN_148c76090(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c6ad5e(param_2,param_3);
    param_3 = param_3 + 0xb50;
    param_2 = param_2 + 0xb50;
  }
  return 1;
}



// FUNCTION 148c760f8 FUN_148c760f8 body=59 status=ok
// SIG undefined FUN_148c760f8(void)

undefined8 FUN_148c760f8(longlong *param_1)

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



// FUNCTION 148c76144 FUN_148c76144 body=40 status=ok
// SIG undefined FUN_148c76144(void)

void FUN_148c76144(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb50) == '\x01') {
    FUN_1458b3782(param_2);
    *(undefined1 *)(param_2 + 0xb50) = 0;
  }
  return;
}



// FUNCTION 148c761ba FUN_148c761ba body=57 status=ok
// SIG undefined FUN_148c761ba(void)

void FUN_148c761ba(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb86d0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb86d0 = FUN_140002ddd(FUN_14660403f,uVar1,L"OakWidgetData_CustomizationBackpack");
  }
  return;
}



// FUNCTION 148c761f4 FUN_148c761f4 body=81 status=ok
// SIG undefined FUN_148c761f4(void)

void FUN_148c761f4(undefined8 param_1,undefined8 *param_2)

{
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[4] = 0;
  FUN_1400b22c2(param_2,"Initial Text");
  FUN_1400b22c2(param_2 + 2,&DAT_149e02088);
  *(undefined4 *)(param_2 + 4) = 0xf;
  *(undefined2 *)((longlong)param_2 + 0x24) = 0;
  return;
}



// FUNCTION 148c76246 FUN_148c76246 body=58 status=ok
// SIG undefined FUN_148c76246(void)

void FUN_148c76246(undefined8 param_1,longlong param_2)

{
  FUN_1400b22c2(param_2,"Initial Text");
  FUN_1400b22c2(param_2 + 0x10,&DAT_149e02088);
  *(undefined4 *)(param_2 + 0x20) = 0xf;
  *(undefined2 *)(param_2 + 0x24) = 0;
  return;
}



// FUNCTION 148c76280 FUN_148c76280 body=47 status=ok
// SIG undefined FUN_148c76280(void)

void FUN_148c76280(undefined8 param_1,longlong *param_2)

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



// FUNCTION 148c762c6 FUN_148c762c6 body=81 status=ok
// SIG undefined FUN_148c762c6(void)

undefined8 FUN_148c762c6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_3 + 0x20);
    *(undefined2 *)(param_2 + 0x24) = *(undefined2 *)(param_3 + 0x24);
    param_2 = param_2 + 0x28;
    param_3 = param_3 + 0x28;
  }
  return 1;
}



// FUNCTION 148c76340 FUN_148c76340 body=59 status=ok
// SIG undefined FUN_148c76340(void)

undefined8 FUN_148c76340(longlong *param_1)

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



// FUNCTION 148c763de FUN_148c763de body=51 status=ok
// SIG undefined FUN_148c763de(void)

void FUN_148c763de(longlong *param_1)

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



// FUNCTION 148c76412 FUN_148c76412 body=37 status=ok
// SIG undefined FUN_148c76412(void)

void FUN_148c76412(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x2e8);
  FUN_146174c4a(param_2);
  return;
}



// FUNCTION 148c76464 FUN_148c76464 body=63 status=ok
// SIG undefined FUN_148c76464(void)

undefined1 FUN_148c76464(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c765c8(param_2,param_3);
    param_3 = param_3 + 0x2e8;
    param_2 = param_2 + 0x2e8;
  }
  return 1;
}



// FUNCTION 148c764cc FUN_148c764cc body=59 status=ok
// SIG undefined FUN_148c764cc(void)

undefined8 FUN_148c764cc(longlong *param_1)

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



// FUNCTION 148c76518 FUN_148c76518 body=40 status=ok
// SIG undefined FUN_148c76518(void)

void FUN_148c76518(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2e8) == '\x01') {
    FUN_146075f4e(param_2);
    *(undefined1 *)(param_2 + 0x2e8) = 0;
  }
  return;
}



// FUNCTION 148c7658e FUN_148c7658e body=57 status=ok
// SIG undefined FUN_148c7658e(void)

void FUN_148c7658e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb8700 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb8700 = FUN_140002ddd(FUN_146604163,uVar1,L"OakUIData_DialogBox");
  }
  return;
}



// FUNCTION 148c765c8 FUN_148c765c8 body=852 status=ok
// SIG undefined FUN_148c765c8(void)

longlong FUN_148c765c8(longlong param_1,longlong param_2)

{
  FUN_1489fb7d2();
  FUN_140ae1244(param_1 + 0xb0,param_2 + 0xb0);
  if (*(int *)(param_1 + 0xcc) != *(int *)(param_2 + 0xcc)) {
    *(undefined1 *)(param_1 + 200) = *(undefined1 *)(param_2 + 200);
    *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_2 + 0xcc);
  }
  if (*(int *)(param_1 + 0xe0) != *(int *)(param_2 + 0xe0)) {
    FUN_144a787a6(param_1 + 0xd0,param_2 + 0xd0);
    *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
  }
  FUN_140ae1244(param_1 + 0xe8,param_2 + 0xe8);
  if (*(int *)(param_1 + 0x104) != *(int *)(param_2 + 0x104)) {
    *(undefined1 *)(param_1 + 0x100) = *(undefined1 *)(param_2 + 0x100);
    *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_2 + 0x104);
  }
  if (*(int *)(param_1 + 0x10c) != *(int *)(param_2 + 0x10c)) {
    *(undefined1 *)(param_1 + 0x108) = *(undefined1 *)(param_2 + 0x108);
    *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_2 + 0x10c);
  }
  FUN_140ae1244(param_1 + 0x110,param_2 + 0x110);
  if (*(int *)(param_1 + 300) != *(int *)(param_2 + 300)) {
    *(undefined1 *)(param_1 + 0x128) = *(undefined1 *)(param_2 + 0x128);
    *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_2 + 300);
  }
  if (*(int *)(param_1 + 0x134) != *(int *)(param_2 + 0x134)) {
    *(undefined1 *)(param_1 + 0x130) = *(undefined1 *)(param_2 + 0x130);
    *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_2 + 0x134);
  }
  FUN_1407161be(param_1 + 0x138,param_2 + 0x138);
  if (*(int *)(param_1 + 0x14c) != *(int *)(param_2 + 0x14c)) {
    *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_2 + 0x148);
    *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_2 + 0x14c);
  }
  if (*(int *)(param_1 + 0x154) != *(int *)(param_2 + 0x154)) {
    *(undefined1 *)(param_1 + 0x150) = *(undefined1 *)(param_2 + 0x150);
    *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_2 + 0x154);
  }
  FUN_140ae1244(param_1 + 0x158,param_2 + 0x158);
  if (*(int *)(param_1 + 0x174) != *(int *)(param_2 + 0x174)) {
    *(undefined1 *)(param_1 + 0x170) = *(undefined1 *)(param_2 + 0x170);
    *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(param_2 + 0x174);
  }
  if (*(int *)(param_1 + 0x17c) != *(int *)(param_2 + 0x17c)) {
    *(undefined1 *)(param_1 + 0x178) = *(undefined1 *)(param_2 + 0x178);
    *(undefined4 *)(param_1 + 0x17c) = *(undefined4 *)(param_2 + 0x17c);
  }
  if (*(int *)(param_1 + 0x184) != *(int *)(param_2 + 0x184)) {
    *(undefined1 *)(param_1 + 0x180) = *(undefined1 *)(param_2 + 0x180);
    *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_2 + 0x184);
  }
  if (*(int *)(param_1 + 0x18c) != *(int *)(param_2 + 0x18c)) {
    *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_2 + 0x188);
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_2 + 0x18c);
  }
  if (*(int *)(param_1 + 0x194) != *(int *)(param_2 + 0x194)) {
    *(undefined1 *)(param_1 + 400) = *(undefined1 *)(param_2 + 400);
    *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_2 + 0x194);
  }
  if (*(int *)(param_1 + 0x19c) != *(int *)(param_2 + 0x19c)) {
    *(undefined1 *)(param_1 + 0x198) = *(undefined1 *)(param_2 + 0x198);
    *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(param_2 + 0x19c);
  }
  if (*(int *)(param_1 + 0x1a4) != *(int *)(param_2 + 0x1a4)) {
    *(undefined1 *)(param_1 + 0x1a0) = *(undefined1 *)(param_2 + 0x1a0);
    *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(param_2 + 0x1a4);
  }
  FUN_1407161be(param_1 + 0x1a8,param_2 + 0x1a8);
  if (*(int *)(param_1 + 0x1bc) != *(int *)(param_2 + 0x1bc)) {
    *(undefined1 *)(param_1 + 0x1b8) = *(undefined1 *)(param_2 + 0x1b8);
    *(undefined4 *)(param_1 + 0x1bc) = *(undefined4 *)(param_2 + 0x1bc);
  }
  if (*(int *)(param_1 + 0x1d0) != *(int *)(param_2 + 0x1d0) || *(int *)(param_1 + 0x1d0) == 0) {
    *(int *)(param_1 + 0x1d0) = *(int *)(param_2 + 0x1d0);
    FUN_148c7691c(param_1 + 0x1c0,param_2 + 0x1c0);
  }
  *(undefined1 *)(param_1 + 0x1d8) = *(undefined1 *)(param_2 + 0x1d8);
  FUN_1457fd360(param_1 + 0x1e0,param_2 + 0x1e0);
  FUN_1457fd360(param_1 + 0x260,param_2 + 0x260);
  *(undefined4 *)(param_1 + 0x2e0) = *(undefined4 *)(param_2 + 0x2e0);
  return param_1;
}



// FUNCTION 148c7691c FUN_148c7691c body=95 status=ok
// SIG undefined FUN_148c7691c(void)

undefined8 * FUN_148c7691c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145f8d037(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c7697c(param_1,iVar1);
      FUN_148c769ef(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c7697c FUN_148c7697c body=115 status=ok
// SIG undefined FUN_148c7697c(void)

void FUN_148c7697c(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c769ef FUN_148c769ef body=52 status=ok
// SIG undefined FUN_148c769ef(void)

void FUN_148c769ef(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c76a24(param_1,param_2);
    param_1 = param_1 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return;
}



// FUNCTION 148c76a24 FUN_148c76a24 body=174 status=ok
// SIG undefined FUN_148c76a24(void)

undefined8 * FUN_148c76a24(undefined8 *param_1,undefined8 *param_2)

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
  *(undefined2 *)((longlong)param_1 + 0x24) = *(undefined2 *)((longlong)param_2 + 0x24);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  return param_1;
}



// FUNCTION 148c76ad4 FUN_148c76ad4 body=37 status=ok
// SIG undefined FUN_148c76ad4(void)

void FUN_148c76ad4(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x120);
  FUN_1460d1926(param_2);
  return;
}



// FUNCTION 148c76b26 FUN_148c76b26 body=63 status=ok
// SIG undefined FUN_148c76b26(void)

undefined1 FUN_148c76b26(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c76c50(param_2,param_3);
    param_3 = param_3 + 0x120;
    param_2 = param_2 + 0x120;
  }
  return 1;
}



// FUNCTION 148c76b8e FUN_148c76b8e body=59 status=ok
// SIG undefined FUN_148c76b8e(void)

undefined8 FUN_148c76b8e(longlong *param_1)

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



// FUNCTION 148c76bda FUN_148c76bda body=40 status=ok
// SIG undefined FUN_148c76bda(void)

void FUN_148c76bda(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x120) == '\x01') {
    FUN_145c5b958(param_2);
    *(undefined1 *)(param_2 + 0x120) = 0;
  }
  return;
}



// FUNCTION 148c76c50 FUN_148c76c50 body=395 status=ok
// SIG undefined FUN_148c76c50(void)

longlong FUN_148c76c50(longlong param_1,longlong param_2)

{
  FUN_1489fb7d2();
  FUN_140ae1244(param_1 + 0xb0,param_2 + 0xb0);
  if (*(int *)(param_1 + 0xcc) != *(int *)(param_2 + 0xcc)) {
    *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 200);
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
  if (*(int *)(param_1 + 0xf4) != *(int *)(param_2 + 0xf4)) {
    *(undefined1 *)(param_1 + 0xf0) = *(undefined1 *)(param_2 + 0xf0);
    *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_2 + 0xf4);
  }
  if (*(int *)(param_1 + 0xfc) != *(int *)(param_2 + 0xfc)) {
    *(undefined1 *)(param_1 + 0xf8) = *(undefined1 *)(param_2 + 0xf8);
    *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_2 + 0xfc);
  }
  if (*(int *)(param_1 + 0x104) != *(int *)(param_2 + 0x104)) {
    *(undefined1 *)(param_1 + 0x100) = *(undefined1 *)(param_2 + 0x100);
    *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_2 + 0x104);
  }
  if (*(int *)(param_1 + 0x118) != *(int *)(param_2 + 0x118)) {
    FUN_144a787a6(param_1 + 0x108,param_2 + 0x108);
    *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x118);
  }
  return param_1;
}



// FUNCTION 148c76e38 FUN_148c76e38 body=78 status=ok
// SIG undefined FUN_148c76e38(void)

undefined8 FUN_148c76e38(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      lVar1 = param_2 + 0x10 + lVar2;
      *(undefined1 *)(lVar1 + -8) = *(undefined1 *)((undefined8 *)(param_3 + lVar2) + 1);
      *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(param_3 + lVar2);
      FUN_144a787a6();
      lVar2 = lVar2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c76eae FUN_148c76eae body=59 status=ok
// SIG undefined FUN_148c76eae(void)

undefined8 FUN_148c76eae(longlong *param_1)

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



// FUNCTION 148c76ef4 FUN_148c76ef4 body=38 status=ok
// SIG undefined FUN_148c76ef4(void)

void FUN_148c76ef4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 148c76f98 FUN_148c76f98 body=63 status=ok
// SIG undefined FUN_148c76f98(void)

undefined1 FUN_148c76f98(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c77268(param_2,param_3);
    param_3 = param_3 + 0xa8;
    param_2 = param_2 + 0xa8;
  }
  return 1;
}



// FUNCTION 148c77000 FUN_148c77000 body=59 status=ok
// SIG undefined FUN_148c77000(void)

undefined8 FUN_148c77000(longlong *param_1)

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



// FUNCTION 148c7704c FUN_148c7704c body=40 status=ok
// SIG undefined FUN_148c7704c(void)

void FUN_148c7704c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa8) == '\x01') {
    FUN_148c7719a(param_2);
    *(undefined1 *)(param_2 + 0xa8) = 0;
  }
  return;
}



// FUNCTION 148c770c2 FUN_148c770c2 body=216 status=ok
// SIG undefined FUN_148c770c2(void)

longlong FUN_148c770c2(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_1400b22c2(param_1,"SDU_Ident");
  FUN_1400b22c2(param_1 + 0x10,"SDU Group Name");
  FUN_1400b22c2(param_1 + 0x20,"SDU Group Description");
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  *(longlong **)(param_1 + 0x30) = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x38) = (int)plVar2[1];
  *(undefined4 *)(param_1 + 0x40) = 0;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  *(longlong **)(param_1 + 0x48) = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x50) = (int)plVar2[1];
  *(undefined1 *)(param_1 + 0x58) = 1;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  *(longlong **)(param_1 + 0x60) = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x68) = (int)plVar2[1];
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  FUN_1400b22c2(param_1 + 0x80,"No Node Description Set");
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x9d) = 0;
  return param_1;
}



// FUNCTION 148c7719a FUN_148c7719a body=158 status=ok
// SIG undefined FUN_148c7719a(void)

void FUN_148c7719a(longlong *param_1)

{
  FUN_148c77238(param_1[0x12],(int)param_1[0x13]);
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0xc] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xc] + 0x10))();
  }
  if ((longlong *)param_1[9] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[9] + 0x10))();
  }
  if ((longlong *)param_1[6] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[6] + 0x10))();
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



// FUNCTION 148c77238 FUN_148c77238 body=47 status=ok
// SIG undefined FUN_148c77238(void)

void FUN_148c77238(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 148c77268 FUN_148c77268 body=322 status=ok
// SIG undefined FUN_148c77268(void)

longlong FUN_148c77268(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_144a787a6();
  FUN_144a787a6(param_1 + 0x10,param_2 + 0x10);
  FUN_144a787a6(param_1 + 0x20,param_2 + 0x20);
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
  *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(param_2 + 0x58);
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
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined1 *)(param_1 + 0x78) = *(undefined1 *)(param_2 + 0x78);
  FUN_144a787a6(param_1 + 0x80,param_2 + 0x80);
  FUN_148c773aa(param_1 + 0x90,param_2 + 0x90);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined1 *)(param_1 + 0xa4) = *(undefined1 *)(param_2 + 0xa4);
  return param_1;
}



// FUNCTION 148c773aa FUN_148c773aa body=95 status=ok
// SIG undefined FUN_148c773aa(void)

undefined8 * FUN_148c773aa(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_148c77238(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c7740a(param_1,iVar1);
      FUN_148c7746c(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c7740a FUN_148c7740a body=98 status=ok
// SIG undefined FUN_148c7740a(void)

void FUN_148c7740a(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c7746c FUN_148c7746c body=132 status=ok
// SIG undefined FUN_148c7746c(void)

void FUN_148c7746c(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = (undefined8 *)(param_1 + 0x10);
    do {
      *(undefined1 *)(puVar2 + -1) = *(undefined1 *)(param_2 + 1);
      puVar2[-2] = *param_2;
      *puVar2 = 0;
      iVar1 = *(int *)(param_2 + 3);
      _Src = (void *)param_2[2];
      *(int *)(puVar2 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar2,iVar1,0);
        memcpy((void *)*puVar2,_Src,(longlong)iVar1 * 2);
      }
      param_2 = param_2 + 4;
      puVar2 = puVar2 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148c774f2 FUN_148c774f2 body=75 status=ok
// SIG undefined FUN_148c774f2(void)

void FUN_148c774f2(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xd0);
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b8a23e0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  *(undefined8 *)((longlong)param_2 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc4) = 0;
  *(undefined4 *)((longlong)param_2 + 0xcc) = 0xffffffff;
  return;
}



// FUNCTION 148c7753e FUN_148c7753e body=59 status=ok
// SIG undefined FUN_148c7753e(void)

void FUN_148c7753e(undefined8 param_1,undefined8 *param_2)

{
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b8a23e0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  *(undefined8 *)((longlong)param_2 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc4) = 0;
  *(undefined4 *)((longlong)param_2 + 0xcc) = 0xffffffff;
  return;
}



// FUNCTION 148c7759e FUN_148c7759e body=113 status=ok
// SIG undefined FUN_148c7759e(void)

undefined8 FUN_148c7759e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1489fb7d2(param_2,param_3);
    *(undefined8 *)(param_2 + 0xb0) = *(undefined8 *)(param_3 + 0xb0);
    FUN_148c77734(param_2 + 0xb8,param_3 + 0xb8);
    *(undefined8 *)(param_2 + 200) = *(undefined8 *)(param_3 + 200);
    param_2 = param_2 + 0xd0;
    param_3 = param_3 + 0xd0;
  }
  return 1;
}



// FUNCTION 148c77638 FUN_148c77638 body=59 status=ok
// SIG undefined FUN_148c77638(void)

undefined8 FUN_148c77638(longlong *param_1)

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



// FUNCTION 148c77684 FUN_148c77684 body=40 status=ok
// SIG undefined FUN_148c77684(void)

void FUN_148c77684(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd0) == '\x01') {
    FUN_145b06dde(param_2);
    *(undefined1 *)(param_2 + 0xd0) = 0;
  }
  return;
}



// FUNCTION 148c776fa FUN_148c776fa body=57 status=ok
// SIG undefined FUN_148c776fa(void)

void FUN_148c776fa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb8760 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb8760 = FUN_140002ddd(FUN_146604375,uVar1,L"OakUIWidgetData_EchoUpgrade");
  }
  return;
}



// FUNCTION 148c77734 FUN_148c77734 body=95 status=ok
// SIG undefined FUN_148c77734(void)

undefined8 * FUN_148c77734(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145b06e22(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c77794(param_1,iVar1);
      FUN_148c77806(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c77794 FUN_148c77794 body=114 status=ok
// SIG undefined FUN_148c77794(void)

void FUN_148c77794(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0xa8,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0xc30c30c30c30c31),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0xa8,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c77806 FUN_148c77806 body=60 status=ok
// SIG undefined FUN_148c77806(void)

void FUN_148c77806(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c77842(param_1,param_2);
    param_1 = param_1 + 0xa8;
    param_2 = param_2 + 0xa8;
  }
  return;
}



// FUNCTION 148c77842 FUN_148c77842 body=545 status=ok
// SIG undefined FUN_148c77842(void)

undefined8 * FUN_148c77842(undefined8 *param_1,undefined8 *param_2)

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
  plVar3 = (longlong *)param_2[6];
  param_1[6] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  plVar3 = (longlong *)param_2[9];
  param_1[9] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  plVar3 = (longlong *)param_2[0xc];
  param_1[0xc] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  param_1[0xe] = param_2[0xe];
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
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
  param_1[0x12] = 0;
  iVar1 = *(int *)(param_2 + 0x13);
  uVar4 = param_2[0x12];
  *(int *)(param_1 + 0x13) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  }
  else {
    FUN_148c7740a(param_1 + 0x12,iVar1,0);
    FUN_148c7746c(param_1[0x12],uVar4,iVar1);
  }
  *(undefined1 *)((longlong)param_1 + 0xa4) = *(undefined1 *)((longlong)param_2 + 0xa4);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  return param_1;
}



// FUNCTION 148c77a64 FUN_148c77a64 body=37 status=ok
// SIG undefined FUN_148c77a64(void)

void FUN_148c77a64(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x100);
  FUN_145d406ac(param_2);
  return;
}



// FUNCTION 148c77ab6 FUN_148c77ab6 body=63 status=ok
// SIG undefined FUN_148c77ab6(void)

undefined1 FUN_148c77ab6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c77c1a(param_2,param_3);
    param_3 = param_3 + 0x100;
    param_2 = param_2 + 0x100;
  }
  return 1;
}



// FUNCTION 148c77b1e FUN_148c77b1e body=59 status=ok
// SIG undefined FUN_148c77b1e(void)

undefined8 FUN_148c77b1e(longlong *param_1)

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



// FUNCTION 148c77b6a FUN_148c77b6a body=40 status=ok
// SIG undefined FUN_148c77b6a(void)

void FUN_148c77b6a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x100) == '\x01') {
    FUN_145a22c00(param_2);
    *(undefined1 *)(param_2 + 0x100) = 0;
  }
  return;
}



// FUNCTION 148c77be0 FUN_148c77be0 body=57 status=ok
// SIG undefined FUN_148c77be0(void)

void FUN_148c77be0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb8778 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb8778 = FUN_140002ddd(FUN_146604407,uVar1,L"OakWidgetData_Echo_Portrait");
  }
  return;
}



// FUNCTION 148c77c1a FUN_148c77c1a body=265 status=ok
// SIG undefined FUN_148c77c1a(void)

longlong FUN_148c77c1a(longlong param_1,longlong param_2)

{
  FUN_1489fb7d2();
  if (*(int *)(param_1 + 0xb4) != *(int *)(param_2 + 0xb4)) {
    *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(param_2 + 0xb0);
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
  }
  if (*(int *)(param_1 + 200) != *(int *)(param_2 + 200)) {
    FUN_144a787a6(param_1 + 0xb8,param_2 + 0xb8);
    *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 200);
  }
  if (*(int *)(param_1 + 0xe0) != *(int *)(param_2 + 0xe0)) {
    FUN_144a787a6(param_1 + 0xd0,param_2 + 0xd0);
    *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
  }
  if (*(int *)(param_1 + 0xec) != *(int *)(param_2 + 0xec)) {
    *(undefined1 *)(param_1 + 0xe8) = *(undefined1 *)(param_2 + 0xe8);
    *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_2 + 0xec);
  }
  if (*(int *)(param_1 + 0xf4) != *(int *)(param_2 + 0xf4)) {
    *(undefined1 *)(param_1 + 0xf0) = *(undefined1 *)(param_2 + 0xf0);
    *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_2 + 0xf4);
  }
  if (*(int *)(param_1 + 0xfc) != *(int *)(param_2 + 0xfc)) {
    *(undefined1 *)(param_1 + 0xf8) = *(undefined1 *)(param_2 + 0xf8);
    *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_2 + 0xfc);
  }
  return param_1;
}



// FUNCTION 148c77d24 FUN_148c77d24 body=37 status=ok
// SIG undefined FUN_148c77d24(void)

void FUN_148c77d24(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x110);
  FUN_1408f3eac(param_2);
  return;
}



// FUNCTION 148c77d76 FUN_148c77d76 body=63 status=ok
// SIG undefined FUN_148c77d76(void)

undefined1 FUN_148c77d76(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c77efc(param_2,param_3);
    param_3 = param_3 + 0x110;
    param_2 = param_2 + 0x110;
  }
  return 1;
}



// FUNCTION 148c77dde FUN_148c77dde body=59 status=ok
// SIG undefined FUN_148c77dde(void)

undefined8 FUN_148c77dde(longlong *param_1)

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



// FUNCTION 148c77e2a FUN_148c77e2a body=38 status=ok
// SIG undefined FUN_148c77e2a(void)

void FUN_148c77e2a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x110) == '\x01') {
    FUN_1418d17e6(param_2);
    *(undefined1 *)(param_2 + 0x110) = 0;
  }
  return;
}



// FUNCTION 148c77e9e FUN_148c77e9e body=38 status=ok
// SIG undefined FUN_148c77e9e(void)

undefined8 FUN_148c77e9e(undefined8 param_1,int param_2)

{
  FUN_1418d17e6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c77ec4 FUN_148c77ec4 body=55 status=ok
// SIG undefined FUN_148c77ec4(void)

void FUN_148c77ec4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb8800 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb8800 = FUN_140002ddd(FUN_146604499,uVar1,L"OakUIData_EnemyPip");
  }
  return;
}



// FUNCTION 148c77efc FUN_148c77efc body=271 status=ok
// SIG undefined FUN_148c77efc(void)

longlong FUN_148c77efc(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1489fb7d2();
  if (*(int *)(param_1 + 0xc0) != *(int *)(param_2 + 0xc0)) {
    FUN_144a787a6(param_1 + 0xb0,param_2 + 0xb0);
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
  }
  if (*(int *)(param_1 + 0xd8) != *(int *)(param_2 + 0xd8)) {
    FUN_144a787a6(param_1 + 200,param_2 + 200);
    *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
  }
  if (*(int *)(param_1 + 0xe4) != *(int *)(param_2 + 0xe4)) {
    *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
    *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_2 + 0xe4);
  }
  if (*(int *)(param_1 + 0xf8) != *(int *)(param_2 + 0xf8)) {
    uVar1 = *(undefined8 *)(param_2 + 0xf0);
    *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
    *(undefined8 *)(param_1 + 0xf0) = uVar1;
    *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0xf8);
  }
  if (*(int *)(param_1 + 0x104) != *(int *)(param_2 + 0x104)) {
    *(undefined1 *)(param_1 + 0x100) = *(undefined1 *)(param_2 + 0x100);
    *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_2 + 0x104);
  }
  if (*(int *)(param_1 + 0x10c) != *(int *)(param_2 + 0x10c)) {
    *(undefined1 *)(param_1 + 0x108) = *(undefined1 *)(param_2 + 0x108);
    *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_2 + 0x10c);
  }
  return param_1;
}



// FUNCTION 148c7800c FUN_148c7800c body=139 status=ok
// SIG undefined FUN_148c7800c(void)

void FUN_148c7800c(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x108);
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b8a2890;
  *(undefined1 *)(param_2 + 0x16) = 0;
  *(undefined4 *)((longlong)param_2 + 0xb4) = 0;
  *(undefined1 *)(param_2 + 0x17) = 0;
  *(undefined4 *)((longlong)param_2 + 0xbc) = 0;
  *(undefined1 *)(param_2 + 0x18) = 0;
  *(undefined4 *)((longlong)param_2 + 0xec) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_2 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_2 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_2 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_2 + 0xe1) = 0;
  *(undefined1 *)(param_2 + 0x1e) = 1;
  *(undefined8 *)((longlong)param_2 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_2 + 0xfc) = 0;
  *(undefined4 *)((longlong)param_2 + 0x104) = 0;
  return;
}



// FUNCTION 148c78098 FUN_148c78098 body=118 status=ok
// SIG undefined FUN_148c78098(void)

void FUN_148c78098(undefined8 param_1,undefined8 *param_2)

{
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b8a2890;
  *(undefined1 *)(param_2 + 0x16) = 0;
  *(undefined4 *)((longlong)param_2 + 0xb4) = 0;
  *(undefined1 *)(param_2 + 0x17) = 0;
  *(undefined4 *)((longlong)param_2 + 0xbc) = 0;
  *(undefined1 *)(param_2 + 0x18) = 0;
  *(undefined4 *)((longlong)param_2 + 0xec) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_2 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_2 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_2 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_2 + 0xe1) = 0;
  *(undefined1 *)(param_2 + 0x1e) = 1;
  *(undefined8 *)((longlong)param_2 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_2 + 0xfc) = 0;
  *(undefined4 *)((longlong)param_2 + 0x104) = 0;
  return;
}



// FUNCTION 148c78132 FUN_148c78132 body=63 status=ok
// SIG undefined FUN_148c78132(void)

undefined1 FUN_148c78132(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c7825c(param_2,param_3);
    param_3 = param_3 + 0x108;
    param_2 = param_2 + 0x108;
  }
  return 1;
}



// FUNCTION 148c7819a FUN_148c7819a body=59 status=ok
// SIG undefined FUN_148c7819a(void)

undefined8 FUN_148c7819a(longlong *param_1)

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



// FUNCTION 148c781e6 FUN_148c781e6 body=40 status=ok
// SIG undefined FUN_148c781e6(void)

void FUN_148c781e6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x108) == '\x01') {
    FUN_145d0d87e(param_2);
    *(undefined1 *)(param_2 + 0x108) = 0;
  }
  return;
}



// FUNCTION 148c7825c FUN_148c7825c body=265 status=ok
// SIG undefined FUN_148c7825c(void)

longlong FUN_148c7825c(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
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
  FUN_148c78366(param_1 + 200,param_2 + 200);
  FUN_14570e782(param_1 + 0xd8,param_2 + 0xd8);
  if (*(int *)(param_1 + 0xec) != *(int *)(param_2 + 0xec)) {
    *(undefined1 *)(param_1 + 0xe8) = *(undefined1 *)(param_2 + 0xe8);
    *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_2 + 0xec);
  }
  if (*(int *)(param_1 + 0xf4) != *(int *)(param_2 + 0xf4)) {
    *(undefined1 *)(param_1 + 0xf0) = *(undefined1 *)(param_2 + 0xf0);
    *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_2 + 0xf4);
  }
  uVar1 = *(undefined8 *)(param_2 + 0x100);
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_2 + 0xf8);
  *(undefined8 *)(param_1 + 0x100) = uVar1;
  return param_1;
}



// FUNCTION 148c78366 FUN_148c78366 body=93 status=ok
// SIG undefined FUN_148c78366(void)

undefined8 * FUN_148c78366(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14042ab82(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c783c4(param_1,iVar1);
      FUN_148c78436(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c783c4 FUN_148c783c4 body=114 status=ok
// SIG undefined FUN_148c783c4(void)

void FUN_148c783c4(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x110,8);
    iVar2 = (int)(uVar1 / 0x110);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x110,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c78436 FUN_148c78436 body=60 status=ok
// SIG undefined FUN_148c78436(void)

void FUN_148c78436(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14042a7f6(param_1,param_2);
    param_1 = param_1 + 0x110;
    param_2 = param_2 + 0x110;
  }
  return;
}



// FUNCTION 148c78474 FUN_148c78474 body=37 status=ok
// SIG undefined FUN_148c78474(void)

void FUN_148c78474(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x118);
  FUN_145ec4270(param_2);
  return;
}



// FUNCTION 148c784c6 FUN_148c784c6 body=63 status=ok
// SIG undefined FUN_148c784c6(void)

undefined1 FUN_148c784c6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c7862a(param_2,param_3);
    param_3 = param_3 + 0x118;
    param_2 = param_2 + 0x118;
  }
  return 1;
}



// FUNCTION 148c7852e FUN_148c7852e body=59 status=ok
// SIG undefined FUN_148c7852e(void)

undefined8 FUN_148c7852e(longlong *param_1)

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



// FUNCTION 148c7857a FUN_148c7857a body=40 status=ok
// SIG undefined FUN_148c7857a(void)

void FUN_148c7857a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x118) == '\x01') {
    FUN_145d028e8(param_2);
    *(undefined1 *)(param_2 + 0x118) = 0;
  }
  return;
}



// FUNCTION 148c785f0 FUN_148c785f0 body=57 status=ok
// SIG undefined FUN_148c785f0(void)

void FUN_148c785f0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb8830 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb8830 = FUN_140002ddd(FUN_146604585,uVar1,L"OakUIData_EULAScreen");
  }
  return;
}



// FUNCTION 148c7862a FUN_148c7862a body=231 status=ok
// SIG undefined FUN_148c7862a(void)

longlong FUN_148c7862a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_1489fb7d2();
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  FUN_144a787a6(param_1 + 0xb8,param_2 + 0xb8);
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
  plVar1 = *(longlong **)(param_2 + 0xd8);
  plVar2 = *(longlong **)(param_1 + 0xd8);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0xd8) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
  FUN_144a787a6(param_1 + 0xe8,param_2 + 0xe8);
  uVar3 = *(undefined8 *)(param_2 + 0x100);
  uVar4 = *(undefined8 *)(param_2 + 0x101);
  uVar5 = *(undefined8 *)(param_2 + 0x109);
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_2 + 0xf8);
  *(undefined8 *)(param_1 + 0x100) = uVar3;
  *(undefined8 *)(param_1 + 0x101) = uVar4;
  *(undefined8 *)(param_1 + 0x109) = uVar5;
  return param_1;
}



// FUNCTION 148c78712 FUN_148c78712 body=37 status=ok
// SIG undefined FUN_148c78712(void)

void FUN_148c78712(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x338);
  FUN_145d15e1a(param_2);
  return;
}



// FUNCTION 148c78764 FUN_148c78764 body=63 status=ok
// SIG undefined FUN_148c78764(void)

undefined1 FUN_148c78764(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1440783d2(param_2,param_3);
    param_3 = param_3 + 0x338;
    param_2 = param_2 + 0x338;
  }
  return 1;
}



// FUNCTION 148c787cc FUN_148c787cc body=59 status=ok
// SIG undefined FUN_148c787cc(void)

undefined8 FUN_148c787cc(longlong *param_1)

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



// FUNCTION 148c78818 FUN_148c78818 body=40 status=ok
// SIG undefined FUN_148c78818(void)

void FUN_148c78818(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x338) == '\x01') {
    FUN_145b16564(param_2);
    *(undefined1 *)(param_2 + 0x338) = 0;
  }
  return;
}



// FUNCTION 148c7890e FUN_148c7890e body=59 status=ok
// SIG undefined FUN_148c7890e(void)

undefined8 FUN_148c7890e(longlong *param_1)

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



// FUNCTION 148c789b0 FUN_148c789b0 body=37 status=ok
// SIG undefined FUN_148c789b0(void)

void FUN_148c789b0(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x1f0);
  FUN_1461255e8(param_2);
  return;
}



// FUNCTION 148c78a02 FUN_148c78a02 body=63 status=ok
// SIG undefined FUN_148c78a02(void)

undefined1 FUN_148c78a02(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c78b2c(param_2,param_3);
    param_3 = param_3 + 0x1f0;
    param_2 = param_2 + 0x1f0;
  }
  return 1;
}



// FUNCTION 148c78a6a FUN_148c78a6a body=59 status=ok
// SIG undefined FUN_148c78a6a(void)

undefined8 FUN_148c78a6a(longlong *param_1)

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



// FUNCTION 148c78ab6 FUN_148c78ab6 body=40 status=ok
// SIG undefined FUN_148c78ab6(void)

void FUN_148c78ab6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1f0) == '\x01') {
    FUN_145d02974(param_2);
    *(undefined1 *)(param_2 + 0x1f0) = 0;
  }
  return;
}



// FUNCTION 148c78b2c FUN_148c78b2c body=1323 status=ok
// SIG undefined FUN_148c78b2c(void)

longlong FUN_148c78b2c(longlong param_1,longlong param_2)

{
  FUN_1489fb7d2();
  FUN_144a787a6(param_1 + 0xb0,param_2 + 0xb0);
  if (*(int *)(param_1 + 0xc4) != *(int *)(param_2 + 0xc4)) {
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_2 + 0xc4);
  }
  if (*(int *)(param_1 + 0xcc) != *(int *)(param_2 + 0xcc)) {
    *(undefined1 *)(param_1 + 200) = *(undefined1 *)(param_2 + 200);
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
    *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
    *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_2 + 0xe4);
  }
  if (*(int *)(param_1 + 0xec) != *(int *)(param_2 + 0xec)) {
    *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
    *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_2 + 0xec);
  }
  if (*(int *)(param_1 + 0xf4) != *(int *)(param_2 + 0xf4)) {
    *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
    *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_2 + 0xf4);
  }
  if (*(int *)(param_1 + 0xfc) != *(int *)(param_2 + 0xfc)) {
    *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0xf8);
    *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_2 + 0xfc);
  }
  if (*(int *)(param_1 + 0x104) != *(int *)(param_2 + 0x104)) {
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
    *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_2 + 0x104);
  }
  if (*(int *)(param_1 + 0x10c) != *(int *)(param_2 + 0x10c)) {
    *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_2 + 0x108);
    *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_2 + 0x10c);
  }
  if (*(int *)(param_1 + 0x114) != *(int *)(param_2 + 0x114)) {
    *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_2 + 0x110);
    *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_2 + 0x114);
  }
  if (*(int *)(param_1 + 0x11c) != *(int *)(param_2 + 0x11c)) {
    *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x118);
    *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_2 + 0x11c);
  }
  if (*(int *)(param_1 + 0x124) != *(int *)(param_2 + 0x124)) {
    *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_2 + 0x120);
    *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_2 + 0x124);
  }
  FUN_140c6effa(param_1 + 0x128,param_2 + 0x128);
  if (*(int *)(param_1 + 0x13c) != *(int *)(param_2 + 0x13c)) {
    *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_2 + 0x138);
    *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_2 + 0x13c);
  }
  if (*(int *)(param_1 + 0x144) != *(int *)(param_2 + 0x144)) {
    *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_2 + 0x140);
    *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_2 + 0x144);
  }
  if (*(int *)(param_1 + 0x14c) != *(int *)(param_2 + 0x14c)) {
    *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_2 + 0x148);
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
  if (*(int *)(param_1 + 0x16c) != *(int *)(param_2 + 0x16c)) {
    *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_2 + 0x168);
    *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(param_2 + 0x16c);
  }
  if (*(int *)(param_1 + 0x174) != *(int *)(param_2 + 0x174)) {
    *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_2 + 0x170);
    *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(param_2 + 0x174);
  }
  if (*(int *)(param_1 + 0x17c) != *(int *)(param_2 + 0x17c)) {
    *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_2 + 0x178);
    *(undefined4 *)(param_1 + 0x17c) = *(undefined4 *)(param_2 + 0x17c);
  }
  if (*(int *)(param_1 + 0x184) != *(int *)(param_2 + 0x184)) {
    *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_2 + 0x180);
    *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_2 + 0x184);
  }
  if (*(int *)(param_1 + 0x18c) != *(int *)(param_2 + 0x18c)) {
    *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_2 + 0x188);
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_2 + 0x18c);
  }
  if (*(int *)(param_1 + 0x194) != *(int *)(param_2 + 0x194)) {
    *(undefined1 *)(param_1 + 400) = *(undefined1 *)(param_2 + 400);
    *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_2 + 0x194);
  }
  if (*(int *)(param_1 + 0x19c) != *(int *)(param_2 + 0x19c)) {
    *(undefined1 *)(param_1 + 0x198) = *(undefined1 *)(param_2 + 0x198);
    *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(param_2 + 0x19c);
  }
  if (*(int *)(param_1 + 0x1a4) != *(int *)(param_2 + 0x1a4)) {
    *(undefined1 *)(param_1 + 0x1a0) = *(undefined1 *)(param_2 + 0x1a0);
    *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(param_2 + 0x1a4);
  }
  if (*(int *)(param_1 + 0x1ac) != *(int *)(param_2 + 0x1ac)) {
    *(undefined1 *)(param_1 + 0x1a8) = *(undefined1 *)(param_2 + 0x1a8);
    *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_2 + 0x1ac);
  }
  if (*(int *)(param_1 + 0x1b4) != *(int *)(param_2 + 0x1b4)) {
    *(undefined1 *)(param_1 + 0x1b0) = *(undefined1 *)(param_2 + 0x1b0);
    *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(param_2 + 0x1b4);
  }
  if (*(int *)(param_1 + 0x1bc) != *(int *)(param_2 + 0x1bc)) {
    *(undefined1 *)(param_1 + 0x1b8) = *(undefined1 *)(param_2 + 0x1b8);
    *(undefined4 *)(param_1 + 0x1bc) = *(undefined4 *)(param_2 + 0x1bc);
  }
  if (*(int *)(param_1 + 0x1d0) != *(int *)(param_2 + 0x1d0)) {
    FUN_144a787a6(param_1 + 0x1c0,param_2 + 0x1c0);
    *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(param_2 + 0x1d0);
  }
  if (*(int *)(param_1 + 0x1e8) != *(int *)(param_2 + 0x1e8)) {
    FUN_144a787a6(param_1 + 0x1d8,param_2 + 0x1d8);
    *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(param_2 + 0x1e8);
  }
  return param_1;
}



// FUNCTION 148c7987a FUN_148c7987a body=47 status=ok
// SIG undefined FUN_148c7987a(void)

void FUN_148c7987a(undefined8 param_1,longlong *param_2)

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



// FUNCTION 148c798c0 FUN_148c798c0 body=81 status=ok
// SIG undefined FUN_148c798c0(void)

undefined8 FUN_148c798c0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    *(undefined2 *)(param_2 + 0x20) = *(undefined2 *)(param_3 + 0x20);
    *(undefined1 *)(param_2 + 0x22) = *(undefined1 *)(param_3 + 0x22);
    param_2 = param_2 + 0x28;
    param_3 = param_3 + 0x28;
  }
  return 1;
}



// FUNCTION 148c7993a FUN_148c7993a body=59 status=ok
// SIG undefined FUN_148c7993a(void)

undefined8 FUN_148c7993a(longlong *param_1)

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



// FUNCTION 148c799d8 FUN_148c799d8 body=51 status=ok
// SIG undefined FUN_148c799d8(void)

void FUN_148c799d8(longlong *param_1)

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



// FUNCTION 148c79a0c FUN_148c79a0c body=37 status=ok
// SIG undefined FUN_148c79a0c(void)

void FUN_148c79a0c(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x138);
  FUN_146113416(param_2);
  return;
}



// FUNCTION 148c79a5e FUN_148c79a5e body=63 status=ok
// SIG undefined FUN_148c79a5e(void)

undefined1 FUN_148c79a5e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c79b88(param_2,param_3);
    param_3 = param_3 + 0x138;
    param_2 = param_2 + 0x138;
  }
  return 1;
}



// FUNCTION 148c79ac6 FUN_148c79ac6 body=59 status=ok
// SIG undefined FUN_148c79ac6(void)

undefined8 FUN_148c79ac6(longlong *param_1)

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



// FUNCTION 148c79b12 FUN_148c79b12 body=40 status=ok
// SIG undefined FUN_148c79b12(void)

void FUN_148c79b12(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x138) == '\x01') {
    FUN_145f8bcee(param_2);
    *(undefined1 *)(param_2 + 0x138) = 0;
  }
  return;
}



// FUNCTION 148c79b88 FUN_148c79b88 body=240 status=ok
// SIG undefined FUN_148c79b88(void)

longlong FUN_148c79b88(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_1489fb7d2();
  uVar1 = *(undefined4 *)(param_2 + 0xb4);
  uVar2 = *(undefined4 *)(param_2 + 0xb8);
  uVar3 = *(undefined4 *)(param_2 + 0xbc);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0xb4) = uVar1;
  *(undefined4 *)(param_1 + 0xb8) = uVar2;
  *(undefined4 *)(param_1 + 0xbc) = uVar3;
  *(undefined1 *)(param_1 + 0xc0) = *(undefined1 *)(param_2 + 0xc0);
  FUN_148c79c78(param_1 + 200,param_2 + 200);
  FUN_148c79c78(param_1 + 0xd8,param_2 + 0xd8);
  FUN_148c79c78(param_1 + 0xe8,param_2 + 0xe8);
  if (*(int *)(param_1 + 0xfc) != *(int *)(param_2 + 0xfc)) {
    *(undefined1 *)(param_1 + 0xf8) = *(undefined1 *)(param_2 + 0xf8);
    *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_2 + 0xfc);
  }
  if (*(int *)(param_1 + 0x110) != *(int *)(param_2 + 0x110)) {
    FUN_144a787a6(param_1 + 0x100,param_2 + 0x100);
    *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_2 + 0x110);
  }
  if (*(int *)(param_1 + 0x128) != *(int *)(param_2 + 0x128)) {
    FUN_144a787a6(param_1 + 0x118,param_2 + 0x118);
    *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_2 + 0x128);
  }
  *(undefined1 *)(param_1 + 0x130) = *(undefined1 *)(param_2 + 0x130);
  return param_1;
}



// FUNCTION 148c79c78 FUN_148c79c78 body=93 status=ok
// SIG undefined FUN_148c79c78(void)

undefined8 * FUN_148c79c78(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140fa9dd4(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c79cd6(param_1,iVar1);
      FUN_148c79d49(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c79cd6 FUN_148c79cd6 body=115 status=ok
// SIG undefined FUN_148c79cd6(void)

void FUN_148c79cd6(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c79d49 FUN_148c79d49 body=52 status=ok
// SIG undefined FUN_148c79d49(void)

void FUN_148c79d49(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c79d7e(param_1,param_2);
    param_1 = param_1 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return;
}



// FUNCTION 148c79d7e FUN_148c79d7e body=174 status=ok
// SIG undefined FUN_148c79d7e(void)

undefined8 * FUN_148c79d7e(undefined8 *param_1,undefined8 *param_2)

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
  *(undefined1 *)((longlong)param_1 + 0x22) = *(undefined1 *)((longlong)param_2 + 0x22);
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
  return param_1;
}



// FUNCTION 148c79e9e FUN_148c79e9e body=114 status=ok
// SIG undefined FUN_148c79e9e(void)

undefined8 FUN_148c79e9e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  
  if (param_4 != 0) {
    lVar10 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar10);
      lVar2 = param_2 + 0x10 + lVar10;
      *(undefined4 *)(lVar2 + -8) = *(undefined4 *)(puVar1 + 1);
      *(undefined8 *)(lVar2 + -0x10) = *puVar1;
      FUN_144a787a6(lVar2,puVar1 + 2);
      uVar3 = *(undefined4 *)((longlong)puVar1 + 0x24);
      uVar4 = *(undefined4 *)(puVar1 + 5);
      uVar5 = *(undefined4 *)((longlong)puVar1 + 0x2c);
      uVar6 = *(undefined4 *)((longlong)puVar1 + 0x2c);
      uVar7 = *(undefined4 *)(puVar1 + 6);
      uVar8 = *(undefined4 *)((longlong)puVar1 + 0x34);
      uVar9 = *(undefined4 *)(puVar1 + 7);
      *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(puVar1 + 4);
      *(undefined4 *)(lVar2 + 0x14) = uVar3;
      *(undefined4 *)(lVar2 + 0x18) = uVar4;
      *(undefined4 *)(lVar2 + 0x1c) = uVar5;
      *(undefined4 *)(lVar2 + 0x1c) = uVar6;
      *(undefined4 *)(lVar2 + 0x20) = uVar7;
      *(undefined4 *)(lVar2 + 0x24) = uVar8;
      *(undefined4 *)(lVar2 + 0x28) = uVar9;
      lVar10 = lVar10 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c79f38 FUN_148c79f38 body=59 status=ok
// SIG undefined FUN_148c79f38(void)

undefined8 FUN_148c79f38(longlong *param_1)

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



// FUNCTION 148c79f7e FUN_148c79f7e body=38 status=ok
// SIG undefined FUN_148c79f7e(void)

void FUN_148c79f7e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 148c79ff4 FUN_148c79ff4 body=99 status=ok
// SIG undefined FUN_148c79ff4(void)

void FUN_148c79ff4(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xa0);
  *(undefined1 *)((longlong)param_2 + 0x11) = 1;
  *(undefined8 *)((longlong)param_2 + 0x14) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_2 + 0x3a) = 0;
  *(undefined8 *)((longlong)param_2 + 0x42) = 0;
  *(undefined8 *)((longlong)param_2 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x51) = 0;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  *(undefined4 *)((longlong)param_2 + 0x68) = 0;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  *(undefined8 *)((longlong)param_2 + 0x78) = 0;
  *(undefined4 *)((longlong)param_2 + 0x80) = 0xffffffff;
  *(undefined8 *)((longlong)param_2 + 0x88) = 0;
  *(undefined8 *)((longlong)param_2 + 0x90) = 0;
  *(undefined4 *)((longlong)param_2 + 0x98) = 0;
  return;
}



// FUNCTION 148c7a0a8 FUN_148c7a0a8 body=48 status=ok
// SIG undefined FUN_148c7a0a8(void)

void FUN_148c7a0a8(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x70) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x30) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148c7a0ee FUN_148c7a0ee body=199 status=ok
// SIG undefined FUN_148c7a0ee(void)

undefined8 FUN_148c7a0ee(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
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
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  longlong lVar18;
  
  if (param_4 != 0) {
    lVar18 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar18);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      uVar8 = puVar1[4];
      uVar9 = puVar1[5];
      uVar10 = puVar1[6];
      uVar11 = puVar1[7];
      uVar12 = puVar1[8];
      uVar13 = puVar1[9];
      uVar14 = puVar1[10];
      lVar2 = param_2 + 0x30 + lVar18;
      *(undefined4 *)(lVar2 + -0x14) = puVar1[7];
      *(undefined4 *)(lVar2 + -0x10) = uVar12;
      *(undefined4 *)(lVar2 + -0xc) = uVar13;
      *(undefined4 *)(lVar2 + -8) = uVar14;
      *(undefined4 *)(lVar2 + -0x20) = uVar8;
      *(undefined4 *)(lVar2 + -0x1c) = uVar9;
      *(undefined4 *)(lVar2 + -0x18) = uVar10;
      *(undefined4 *)(lVar2 + -0x14) = uVar11;
      *(undefined4 *)(lVar2 + -0x30) = uVar4;
      *(undefined4 *)(lVar2 + -0x2c) = uVar5;
      *(undefined4 *)(lVar2 + -0x28) = uVar6;
      *(undefined4 *)(lVar2 + -0x24) = uVar7;
      FUN_144a787a6(lVar2,puVar1 + 0xc);
      uVar4 = puVar1[0x11];
      uVar5 = puVar1[0x12];
      uVar6 = puVar1[0x13];
      uVar7 = *(undefined4 *)((longlong)puVar1 + 0x49);
      uVar8 = *(undefined4 *)((longlong)puVar1 + 0x4d);
      uVar9 = *(undefined4 *)((longlong)puVar1 + 0x51);
      uVar10 = *(undefined4 *)((longlong)puVar1 + 0x55);
      *(undefined4 *)(lVar2 + 0x10) = puVar1[0x10];
      *(undefined4 *)(lVar2 + 0x14) = uVar4;
      *(undefined4 *)(lVar2 + 0x18) = uVar5;
      *(undefined4 *)(lVar2 + 0x1c) = uVar6;
      *(undefined4 *)(lVar2 + 0x19) = uVar7;
      *(undefined4 *)(lVar2 + 0x1d) = uVar8;
      *(undefined4 *)(lVar2 + 0x21) = uVar9;
      *(undefined4 *)(lVar2 + 0x25) = uVar10;
      *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(puVar1 + 0x18);
      *(undefined4 *)(lVar2 + 0x38) = puVar1[0x1a];
      lVar3 = param_2 + 0x70 + lVar18;
      lVar2 = param_3 + lVar18;
      FUN_144a787a6(lVar3,lVar2 + 0x70);
      uVar15 = *(undefined8 *)(lVar2 + 0x88);
      uVar16 = *(undefined8 *)(lVar2 + 0x8c);
      uVar17 = *(undefined8 *)(lVar2 + 0x94);
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + 0x80);
      *(undefined8 *)(lVar3 + 0x18) = uVar15;
      *(undefined8 *)(lVar3 + 0x1c) = uVar16;
      *(undefined8 *)(lVar3 + 0x24) = uVar17;
      lVar18 = lVar18 + 0xa0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c7a1de FUN_148c7a1de body=59 status=ok
// SIG undefined FUN_148c7a1de(void)

undefined8 FUN_148c7a1de(longlong *param_1)

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



// FUNCTION 148c7a282 FUN_148c7a282 body=58 status=ok
// SIG undefined FUN_148c7a282(void)

void FUN_148c7a282(longlong param_1)

{
  if (*(char *)(param_1 + 0xa0) == '\x01') {
    if (*(longlong *)(param_1 + 0x70) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x30) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 148c7a2bc FUN_148c7a2bc body=106 status=ok
// SIG undefined FUN_148c7a2bc(void)

void FUN_148c7a2bc(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xb0);
  *(undefined1 *)((longlong)param_2 + 0x11) = 1;
  *(undefined8 *)((longlong)param_2 + 0x14) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_2 + 0x3a) = 0;
  *(undefined8 *)((longlong)param_2 + 0x42) = 0;
  *(undefined8 *)((longlong)param_2 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x51) = 0;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  *(undefined4 *)((longlong)param_2 + 0x68) = 0;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  *(undefined8 *)((longlong)param_2 + 0x78) = 0;
  *(undefined4 *)((longlong)param_2 + 0x80) = 0xffffffff;
  *(undefined8 *)((longlong)param_2 + 0x88) = 0;
  *(undefined8 *)((longlong)param_2 + 0x90) = 0;
  *(undefined4 *)((longlong)param_2 + 0x98) = 0;
  *(undefined1 *)((longlong)param_2 + 0xac) = 0;
  return;
}



// FUNCTION 148c7a390 FUN_148c7a390 body=48 status=ok
// SIG undefined FUN_148c7a390(void)

void FUN_148c7a390(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x70) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x30) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148c7a3d6 FUN_148c7a3d6 body=215 status=ok
// SIG undefined FUN_148c7a3d6(void)

undefined8 FUN_148c7a3d6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
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
  
  if (param_4 != 0) {
    lVar18 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar18);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      uVar9 = puVar1[4];
      uVar10 = puVar1[5];
      uVar11 = puVar1[6];
      uVar12 = puVar1[7];
      uVar13 = puVar1[8];
      uVar14 = puVar1[9];
      uVar15 = puVar1[10];
      lVar2 = param_2 + 0x30 + lVar18;
      *(undefined4 *)(lVar2 + -0x14) = puVar1[7];
      *(undefined4 *)(lVar2 + -0x10) = uVar13;
      *(undefined4 *)(lVar2 + -0xc) = uVar14;
      *(undefined4 *)(lVar2 + -8) = uVar15;
      *(undefined4 *)(lVar2 + -0x20) = uVar9;
      *(undefined4 *)(lVar2 + -0x1c) = uVar10;
      *(undefined4 *)(lVar2 + -0x18) = uVar11;
      *(undefined4 *)(lVar2 + -0x14) = uVar12;
      *(undefined4 *)(lVar2 + -0x30) = uVar5;
      *(undefined4 *)(lVar2 + -0x2c) = uVar6;
      *(undefined4 *)(lVar2 + -0x28) = uVar7;
      *(undefined4 *)(lVar2 + -0x24) = uVar8;
      FUN_144a787a6(lVar2,puVar1 + 0xc);
      uVar5 = puVar1[0x11];
      uVar6 = puVar1[0x12];
      uVar7 = puVar1[0x13];
      uVar8 = *(undefined4 *)((longlong)puVar1 + 0x49);
      uVar9 = *(undefined4 *)((longlong)puVar1 + 0x4d);
      uVar10 = *(undefined4 *)((longlong)puVar1 + 0x51);
      uVar11 = *(undefined4 *)((longlong)puVar1 + 0x55);
      *(undefined4 *)(lVar2 + 0x10) = puVar1[0x10];
      *(undefined4 *)(lVar2 + 0x14) = uVar5;
      *(undefined4 *)(lVar2 + 0x18) = uVar6;
      *(undefined4 *)(lVar2 + 0x1c) = uVar7;
      *(undefined4 *)(lVar2 + 0x19) = uVar8;
      *(undefined4 *)(lVar2 + 0x1d) = uVar9;
      *(undefined4 *)(lVar2 + 0x21) = uVar10;
      *(undefined4 *)(lVar2 + 0x25) = uVar11;
      *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(puVar1 + 0x18);
      *(undefined4 *)(lVar2 + 0x38) = puVar1[0x1a];
      lVar3 = param_2 + 0x70 + lVar18;
      lVar2 = param_3 + lVar18;
      FUN_144a787a6(lVar3,lVar2 + 0x70);
      uVar4 = *(undefined8 *)(lVar2 + 0x88);
      uVar16 = *(undefined8 *)(lVar2 + 0x8c);
      uVar17 = *(undefined8 *)(lVar2 + 0x94);
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + 0x80);
      *(undefined8 *)(lVar3 + 0x18) = uVar4;
      *(undefined8 *)(lVar3 + 0x1c) = uVar16;
      *(undefined8 *)(lVar3 + 0x24) = uVar17;
      uVar4 = *(undefined8 *)(lVar2 + 0xa6);
      *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)(lVar2 + 0xa0);
      *(undefined8 *)(lVar3 + 0x36) = uVar4;
      lVar18 = lVar18 + 0xb0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c7a4d6 FUN_148c7a4d6 body=59 status=ok
// SIG undefined FUN_148c7a4d6(void)

undefined8 FUN_148c7a4d6(longlong *param_1)

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



// FUNCTION 148c7a57a FUN_148c7a57a body=58 status=ok
// SIG undefined FUN_148c7a57a(void)

void FUN_148c7a57a(longlong param_1)

{
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    if (*(longlong *)(param_1 + 0x70) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x30) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0xb0) = 0;
  }
  return;
}



// FUNCTION 148c7a5b4 FUN_148c7a5b4 body=79 status=ok
// SIG undefined FUN_148c7a5b4(void)

void FUN_148c7a5b4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[8] = 0;
  *(undefined1 *)((longlong)param_2 + 0xc) = 1;
  FUN_144a5dc74(param_2 + 2);
  param_2[4] = 0;
  *(undefined1 *)(param_2 + 5) = 0;
  FUN_144a5dc74(param_2 + 6);
  param_2[8] = 0;
  return;
}



// FUNCTION 148c7a604 FUN_148c7a604 body=64 status=ok
// SIG undefined FUN_148c7a604(void)

void FUN_148c7a604(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  *(undefined2 *)((longlong)param_2 + 0xc) = 1;
  FUN_144a5dc74(param_2 + 2);
  param_2[4] = 0;
  *(undefined1 *)(param_2 + 5) = 0;
  FUN_144a5dc74(param_2 + 6);
  param_2[8] = 0;
  return;
}



// FUNCTION 148c7a644 FUN_148c7a644 body=51 status=ok
// SIG undefined FUN_148c7a644(void)

void FUN_148c7a644(undefined8 param_1,longlong param_2)

{
  if (*(longlong **)(param_2 + 0x30) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0x30) + 0x10))();
  }
  if (*(longlong **)(param_2 + 0x10) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148c7a66c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_2 + 0x10) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 148c7a68e FUN_148c7a68e body=54 status=ok
// SIG undefined FUN_148c7a68e(void)

undefined1 FUN_148c7a68e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c7a7b6(param_2,param_3);
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return 1;
}



// FUNCTION 148c7a6ec FUN_148c7a6ec body=59 status=ok
// SIG undefined FUN_148c7a6ec(void)

undefined8 FUN_148c7a6ec(longlong *param_1)

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



// FUNCTION 148c7a732 FUN_148c7a732 body=54 status=ok
// SIG undefined FUN_148c7a732(void)

void FUN_148c7a732(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    if (*(longlong **)(param_2 + 0x30) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_2 + 0x30) + 0x10))();
    }
    if (*(longlong **)(param_2 + 0x10) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_2 + 0x10) + 0x10))();
    }
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 148c7a7b6 FUN_148c7a7b6 body=156 status=ok
// SIG undefined FUN_148c7a7b6(void)

undefined8 * FUN_148c7a7b6(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  uVar1 = *param_2;
  *(undefined8 *)((longlong)param_1 + 6) = *(undefined8 *)((longlong)param_2 + 6);
  *param_1 = uVar1;
  plVar2 = (longlong *)param_2[2];
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != plVar2) {
    param_1[2] = plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[4] = param_2[4];
  plVar2 = (longlong *)param_2[6];
  plVar3 = (longlong *)param_1[6];
  if (plVar3 != plVar2) {
    param_1[6] = plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  param_1[8] = param_2[8];
  return param_1;
}



// FUNCTION 148c7a8c0 FUN_148c7a8c0 body=59 status=ok
// SIG undefined FUN_148c7a8c0(void)

undefined8 FUN_148c7a8c0(longlong *param_1)

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



// FUNCTION 148c7a9b0 FUN_148c7a9b0 body=92 status=ok
// SIG undefined FUN_148c7a9b0(void)

undefined8 FUN_148c7a9b0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      FUN_148c7aaee(param_2,param_3);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      *(undefined2 *)(param_2 + 0x18) = *(undefined2 *)(param_3 + 0x18);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c7aa34 FUN_148c7aa34 body=59 status=ok
// SIG undefined FUN_148c7aa34(void)

undefined8 FUN_148c7aa34(longlong *param_1)

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



// FUNCTION 148c7aa7a FUN_148c7aa7a body=38 status=ok
// SIG undefined FUN_148c7aa7a(void)

void FUN_148c7aa7a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 148c7aaee FUN_148c7aaee body=88 status=ok
// SIG undefined FUN_148c7aaee(void)

undefined8 * FUN_148c7aaee(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148c7ab46(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 2);
      }
    }
  }
  return param_1;
}



// FUNCTION 148c7ab46 FUN_148c7ab46 body=98 status=ok
// SIG undefined FUN_148c7ab46(void)

void FUN_148c7ab46(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c7abaa FUN_148c7abaa body=107 status=ok
// SIG undefined FUN_148c7abaa(void)

void FUN_148c7abaa(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x128);
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b8aca10;
  *(undefined1 *)(param_2 + 0x24) = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  *(undefined8 *)((longlong)param_2 + 0xec) = 0;
  *(undefined8 *)((longlong)param_2 + 0xf4) = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  *(undefined8 *)((longlong)param_2 + 0x10a) = 0;
  *(undefined8 *)((longlong)param_2 + 0x112) = 0;
  return;
}



// FUNCTION 148c7ac16 FUN_148c7ac16 body=91 status=ok
// SIG undefined FUN_148c7ac16(void)

void FUN_148c7ac16(undefined8 param_1,undefined8 *param_2)

{
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b8aca10;
  *(undefined1 *)(param_2 + 0x24) = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  *(undefined8 *)((longlong)param_2 + 0xec) = 0;
  *(undefined8 *)((longlong)param_2 + 0xf4) = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  *(undefined8 *)((longlong)param_2 + 0x10a) = 0;
  *(undefined8 *)((longlong)param_2 + 0x112) = 0;
  return;
}



// FUNCTION 148c7ac96 FUN_148c7ac96 body=63 status=ok
// SIG undefined FUN_148c7ac96(void)

undefined1 FUN_148c7ac96(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c7adc0(param_2,param_3);
    param_3 = param_3 + 0x128;
    param_2 = param_2 + 0x128;
  }
  return 1;
}



// FUNCTION 148c7acfe FUN_148c7acfe body=59 status=ok
// SIG undefined FUN_148c7acfe(void)

undefined8 FUN_148c7acfe(longlong *param_1)

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



// FUNCTION 148c7ad4a FUN_148c7ad4a body=40 status=ok
// SIG undefined FUN_148c7ad4a(void)

void FUN_148c7ad4a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x128) == '\x01') {
    FUN_145c5fd02(param_2);
    *(undefined1 *)(param_2 + 0x128) = 0;
  }
  return;
}



// FUNCTION 148c7adc0 FUN_148c7adc0 body=178 status=ok
// SIG undefined FUN_148c7adc0(void)

longlong FUN_148c7adc0(longlong param_1,longlong param_2)

{
  FUN_1489fb7d2();
  FUN_144a787a6(param_1 + 0xb0,param_2 + 0xb0);
  FUN_148c7ae72(param_1 + 0xc0,param_2 + 0xc0);
  FUN_148c7aed2(param_1 + 0xd0,param_2 + 0xd0);
  FUN_148c7af32(param_1 + 0xe0,param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 0xf0);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0xf8);
  FUN_148c7aaee(param_1 + 0x100,param_2 + 0x100);
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_2 + 0x110);
  *(undefined2 *)(param_1 + 0x118) = *(undefined2 *)(param_2 + 0x118);
  *(undefined1 *)(param_1 + 0x120) = *(undefined1 *)(param_2 + 0x120);
  return param_1;
}



// FUNCTION 148c7ae72 FUN_148c7ae72 body=95 status=ok
// SIG undefined FUN_148c7ae72(void)

undefined8 * FUN_148c7ae72(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145c5fdb7(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c7af92(param_1,iVar1);
      FUN_148c7b004(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c7aed2 FUN_148c7aed2 body=95 status=ok
// SIG undefined FUN_148c7aed2(void)

undefined8 * FUN_148c7aed2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145c5fdf7(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c7b15a(param_1,iVar1);
      FUN_148c7b1cd(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c7af32 FUN_148c7af32 body=95 status=ok
// SIG undefined FUN_148c7af32(void)

undefined8 * FUN_148c7af32(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145c5fe38(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c7b26e(param_1,iVar1);
      FUN_148c7b2e1(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c7af92 FUN_148c7af92 body=114 status=ok
// SIG undefined FUN_148c7af92(void)

void FUN_148c7af92(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xb0,8);
    iVar2 = (int)(uVar1 / 0xb0);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xb0,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c7b004 FUN_148c7b004 body=88 status=ok
// SIG undefined FUN_148c7b004(void)

void FUN_148c7b004(longlong param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c7b05c(param_1,param_2);
    uVar1 = *(undefined8 *)(param_2 + 0xa6);
    *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
    *(undefined8 *)(param_1 + 0xa6) = uVar1;
    param_1 = param_1 + 0xb0;
    param_2 = param_2 + 0xb0;
  }
  return;
}



// FUNCTION 148c7b05c FUN_148c7b05c body=253 status=ok
// SIG undefined FUN_148c7b05c(void)

undefined4 * FUN_148c7b05c(undefined4 *param_1,undefined4 *param_2)

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
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = param_2[4];
  uVar8 = param_2[5];
  uVar9 = param_2[6];
  uVar10 = param_2[7];
  uVar11 = param_2[8];
  uVar12 = param_2[9];
  uVar13 = param_2[10];
  param_1[7] = param_2[7];
  param_1[8] = uVar11;
  param_1[9] = uVar12;
  param_1[10] = uVar13;
  param_1[4] = uVar7;
  param_1[5] = uVar8;
  param_1[6] = uVar9;
  param_1[7] = uVar10;
  *param_1 = uVar3;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  *(undefined8 *)(param_1 + 0xc) = 0;
  iVar1 = param_2[0xe];
  pvVar2 = *(void **)(param_2 + 0xc);
  param_1[0xe] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0xf] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xc,iVar1,0);
    memcpy(*(void **)(param_1 + 0xc),pvVar2,(longlong)iVar1 * 2);
  }
  uVar3 = param_2[0x10];
  uVar4 = param_2[0x11];
  uVar5 = param_2[0x12];
  uVar6 = param_2[0x13];
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x4d);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x51);
  uVar9 = *(undefined4 *)((longlong)param_2 + 0x55);
  *(undefined4 *)((longlong)param_1 + 0x49) = *(undefined4 *)((longlong)param_2 + 0x49);
  *(undefined4 *)((longlong)param_1 + 0x4d) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x51) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x55) = uVar9;
  param_1[0x10] = uVar3;
  param_1[0x11] = uVar4;
  param_1[0x12] = uVar5;
  param_1[0x13] = uVar6;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  param_1[0x1a] = param_2[0x1a];
  *(undefined8 *)(param_1 + 0x1c) = 0;
  iVar1 = param_2[0x1e];
  pvVar2 = *(void **)(param_2 + 0x1c);
  param_1[0x1e] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x1f] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x1c,iVar1,0);
    memcpy(*(void **)(param_1 + 0x1c),pvVar2,(longlong)iVar1 * 2);
  }
  uVar14 = *(undefined8 *)(param_2 + 0x20);
  uVar15 = *(undefined8 *)(param_2 + 0x22);
  uVar16 = *(undefined8 *)(param_2 + 0x25);
  *(undefined8 *)(param_1 + 0x23) = *(undefined8 *)(param_2 + 0x23);
  *(undefined8 *)(param_1 + 0x25) = uVar16;
  *(undefined8 *)(param_1 + 0x20) = uVar14;
  *(undefined8 *)(param_1 + 0x22) = uVar15;
  return param_1;
}



// FUNCTION 148c7b15a FUN_148c7b15a body=115 status=ok
// SIG undefined FUN_148c7b15a(void)

void FUN_148c7b15a(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x48,8);
    iVar2 = (int)(uVar1 / 0x48);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x48,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c7b1cd FUN_148c7b1cd body=52 status=ok
// SIG undefined FUN_148c7b1cd(void)

void FUN_148c7b1cd(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c7b202(param_1,param_2);
    param_1 = param_1 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return;
}



// FUNCTION 148c7b202 FUN_148c7b202 body=108 status=ok
// SIG undefined FUN_148c7b202(void)

undefined8 * FUN_148c7b202(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = *param_2;
  *(undefined8 *)((longlong)param_1 + 6) = *(undefined8 *)((longlong)param_2 + 6);
  *param_1 = uVar1;
  plVar2 = (longlong *)param_2[2];
  param_1[2] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  plVar2 = (longlong *)param_2[6];
  param_1[6] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  param_1[8] = param_2[8];
  return param_1;
}



// FUNCTION 148c7b26e FUN_148c7b26e body=115 status=ok
// SIG undefined FUN_148c7b26e(void)

void FUN_148c7b26e(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xa0,8);
    iVar2 = (int)(uVar1 / 0xa0);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xa0,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c7b2e1 FUN_148c7b2e1 body=60 status=ok
// SIG undefined FUN_148c7b2e1(void)

void FUN_148c7b2e1(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c7b05c(param_1,param_2);
    param_1 = param_1 + 0xa0;
    param_2 = param_2 + 0xa0;
  }
  return;
}



// FUNCTION 148c7b31e FUN_148c7b31e body=48 status=ok
// SIG undefined FUN_148c7b31e(void)

void FUN_148c7b31e(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xb0);
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b8acba0;
  return;
}



// FUNCTION 148c7b34e FUN_148c7b34e body=32 status=ok
// SIG undefined FUN_148c7b34e(void)

void FUN_148c7b34e(undefined8 param_1,undefined8 *param_2)

{
  FUN_1408f3f9e(param_2);
  *param_2 = &PTR_FUN_14b8acba0;
  return;
}



// FUNCTION 148c7b392 FUN_148c7b392 body=63 status=ok
// SIG undefined FUN_148c7b392(void)

undefined1 FUN_148c7b392(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1489fb7d2(param_2,param_3);
    param_3 = param_3 + 0xb0;
    param_2 = param_2 + 0xb0;
  }
  return 1;
}


