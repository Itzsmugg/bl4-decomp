// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148c0e286 FUN_148c0e286 body=48 status=ok
// SIG undefined FUN_148c0e286(void)

longlong FUN_148c0e286(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3d8;
  FUN_1458d6654(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c0e2b6 FUN_148c0e2b6 body=48 status=ok
// SIG undefined FUN_148c0e2b6(void)

longlong FUN_148c0e2b6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3e0;
  FUN_1458d6654(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c0e2e6 FUN_148c0e2e6 body=45 status=ok
// SIG undefined FUN_148c0e2e6(void)

longlong FUN_148c0e2e6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e852(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c0e3a4 FUN_148c0e3a4 body=59 status=ok
// SIG undefined FUN_148c0e3a4(void)

undefined8 FUN_148c0e3a4(longlong *param_1)

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



// FUNCTION 148c0e3ea FUN_148c0e3ea body=43 status=ok
// SIG undefined FUN_148c0e3ea(void)

void FUN_148c0e3ea(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 4) == '\x01') {
    *param_2 = &PTR_FUN_14a171dc0;
    FUN_144a49ae8(param_2 + 1);
    *(undefined1 *)(param_2 + 4) = 0;
  }
  return;
}



// FUNCTION 148c0e452 FUN_148c0e452 body=28 status=ok
// SIG undefined FUN_148c0e452(void)

undefined8 FUN_148c0e452(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 148c0e480 FUN_148c0e480 body=55 status=ok
// SIG undefined FUN_148c0e480(void)

void FUN_148c0e480(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  *param_2 = &PTR_FUN_14b4677f0;
  FUN_144a5dc74(param_2 + 3);
  *param_2 = &PTR_FUN_14b744430;
  return;
}



// FUNCTION 148c0e4ce FUN_148c0e4ce body=54 status=ok
// SIG undefined FUN_148c0e4ce(void)

undefined1 FUN_148c0e4ce(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1489f8080(param_2,param_3);
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return 1;
}



// FUNCTION 148c0e52c FUN_148c0e52c body=59 status=ok
// SIG undefined FUN_148c0e52c(void)

undefined8 FUN_148c0e52c(longlong *param_1)

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



// FUNCTION 148c0e572 FUN_148c0e572 body=32 status=ok
// SIG undefined FUN_148c0e572(void)

void FUN_148c0e572(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_140f4522c(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 148c0e5da FUN_148c0e5da body=237 status=ok
// SIG undefined FUN_148c0e5da(void)

void FUN_148c0e5da(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  *(undefined2 *)(param_2 + 9) = 0;
  memset(param_2 + 10,0,0x96);
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  *(undefined4 *)(param_2 + 0x22) = 0x466a6000;
  *(undefined2 *)((longlong)param_2 + 0x114) = 0;
  param_2[0x23] = 0;
  *(undefined1 *)(param_2 + 0x24) = 0;
  param_2[0x25] = 0;
  param_2[0x26] = 0;
  param_2[0x27] = 0;
  *(undefined1 *)(param_2 + 0x28) = 1;
  *param_2 = &PTR_FUN_14b7446b0;
  param_2[0x29] = 0;
  param_2[0x2a] = 0;
  param_2[0x2b] = 0;
  *(undefined1 *)(param_2 + 0x2c) = 10;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  *(undefined8 *)((longlong)param_2 + 0x174) = 0;
  *(undefined8 *)((longlong)param_2 + 0x17c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x184) = 0x100000006;
  *(undefined2 *)((longlong)param_2 + 0x18c) = 1;
  *(undefined1 *)((longlong)param_2 + 0x18e) = 1;
  param_2[0x34] = 0;
  param_2[0x32] = 0;
  param_2[0x33] = 0;
  return;
}



// FUNCTION 148c0e6de FUN_148c0e6de body=63 status=ok
// SIG undefined FUN_148c0e6de(void)

undefined1 FUN_148c0e6de(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c0e7f2(param_2,param_3);
    param_3 = param_3 + 0x1a8;
    param_2 = param_2 + 0x1a8;
  }
  return 1;
}



// FUNCTION 148c0e746 FUN_148c0e746 body=59 status=ok
// SIG undefined FUN_148c0e746(void)

undefined8 FUN_148c0e746(longlong *param_1)

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



// FUNCTION 148c0e792 FUN_148c0e792 body=38 status=ok
// SIG undefined FUN_148c0e792(void)

void FUN_148c0e792(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1a8) == '\x01') {
    FUN_141851648(param_2);
    *(undefined1 *)(param_2 + 0x1a8) = 0;
  }
  return;
}



// FUNCTION 148c0e7f2 FUN_148c0e7f2 body=121 status=ok
// SIG undefined FUN_148c0e7f2(void)

longlong FUN_148c0e7f2(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_148697648();
  FUN_148c0bf3c(param_1 + 0x148,param_2 + 0x148);
  *(undefined1 *)(param_1 + 0x160) = *(undefined1 *)(param_2 + 0x160);
  FUN_148c0e86c(param_1 + 0x168,param_2 + 0x168);
  uVar1 = *(undefined8 *)(param_2 + 0x187);
  *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(param_2 + 0x180);
  *(undefined8 *)(param_1 + 0x187) = uVar1;
  FUN_1489fc572(param_1 + 400,param_2 + 400);
  return param_1;
}



// FUNCTION 148c0e86c FUN_148c0e86c body=84 status=ok
// SIG undefined FUN_148c0e86c(void)

longlong * FUN_148c0e86c(longlong *param_1,longlong *param_2)

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



// FUNCTION 148c0e8c2 FUN_148c0e8c2 body=55 status=ok
// SIG undefined FUN_148c0e8c2(void)

void FUN_148c0e8c2(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  *param_2 = &PTR_FUN_14b4677f0;
  FUN_144a5dc74(param_2 + 3);
  *param_2 = &PTR_FUN_14b744830;
  return;
}



// FUNCTION 148c0e910 FUN_148c0e910 body=54 status=ok
// SIG undefined FUN_148c0e910(void)

undefined1 FUN_148c0e910(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1489f8080(param_2,param_3);
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return 1;
}



// FUNCTION 148c0e96e FUN_148c0e96e body=59 status=ok
// SIG undefined FUN_148c0e96e(void)

undefined8 FUN_148c0e96e(longlong *param_1)

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



// FUNCTION 148c0e9b4 FUN_148c0e9b4 body=32 status=ok
// SIG undefined FUN_148c0e9b4(void)

void FUN_148c0e9b4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_140f4522c(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 148c0ea1c FUN_148c0ea1c body=55 status=ok
// SIG undefined FUN_148c0ea1c(void)

void FUN_148c0ea1c(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  *param_2 = &PTR_FUN_14b4677f0;
  FUN_144a5dc74(param_2 + 3);
  *param_2 = &PTR_FUN_14b7449b0;
  return;
}



// FUNCTION 148c0ea6a FUN_148c0ea6a body=54 status=ok
// SIG undefined FUN_148c0ea6a(void)

undefined1 FUN_148c0ea6a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1489f8080(param_2,param_3);
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return 1;
}



// FUNCTION 148c0eac8 FUN_148c0eac8 body=59 status=ok
// SIG undefined FUN_148c0eac8(void)

undefined8 FUN_148c0eac8(longlong *param_1)

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



// FUNCTION 148c0eb0e FUN_148c0eb0e body=32 status=ok
// SIG undefined FUN_148c0eb0e(void)

void FUN_148c0eb0e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_140f4522c(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 148c0eb88 FUN_148c0eb88 body=54 status=ok
// SIG undefined FUN_148c0eb88(void)

undefined1 FUN_148c0eb88(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c0ed42(param_2,param_3);
    param_3 = param_3 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return 1;
}



// FUNCTION 148c0ebe6 FUN_148c0ebe6 body=59 status=ok
// SIG undefined FUN_148c0ebe6(void)

undefined8 FUN_148c0ebe6(longlong *param_1)

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



// FUNCTION 148c0ec2c FUN_148c0ec2c body=32 status=ok
// SIG undefined FUN_148c0ec2c(void)

void FUN_148c0ec2c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_148c0ecdc(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 148c0ec86 FUN_148c0ec86 body=86 status=ok
// SIG undefined FUN_148c0ec86(void)

undefined8 * FUN_148c0ec86(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b4677f0;
  FUN_144a5dc74(param_1 + 3);
  *param_1 = &PTR_FUN_14b744b30;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_144a5dc74(param_1 + 0xb);
  return param_1;
}



// FUNCTION 148c0ecdc FUN_148c0ecdc body=101 status=ok
// SIG undefined FUN_148c0ecdc(void)

void FUN_148c0ecdc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b744b30;
  if ((longlong *)param_1[0xb] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xb] + 0x10))();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b4677f0;
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 148c0ed42 FUN_148c0ed42 body=112 status=ok
// SIG undefined FUN_148c0ed42(void)

longlong FUN_148c0ed42(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  FUN_1489f8080();
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  uVar3 = *(undefined4 *)(param_2 + 0x3c);
  uVar4 = *(undefined4 *)(param_2 + 0x40);
  uVar5 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  *(undefined4 *)(param_1 + 0x40) = uVar4;
  *(undefined4 *)(param_1 + 0x44) = uVar5;
  FUN_144a787a6(param_1 + 0x48,param_2 + 0x48);
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
  return param_1;
}



// FUNCTION 148c0edb4 FUN_148c0edb4 body=69 status=ok
// SIG undefined FUN_148c0edb4(void)

void FUN_148c0edb4(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  *param_2 = &PTR_FUN_14b4677f0;
  FUN_144a5dc74(param_2 + 3);
  *param_2 = &PTR_FUN_14b744cb0;
  param_2[5] = 0;
  param_2[6] = 0;
  *(undefined4 *)(param_2 + 7) = 0;
  return;
}



// FUNCTION 148c0ee10 FUN_148c0ee10 body=73 status=ok
// SIG undefined FUN_148c0ee10(void)

undefined8 FUN_148c0ee10(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1489f8080(param_2,param_3);
    FUN_144a787a6(param_2 + 0x28,param_3 + 0x28);
    *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_3 + 0x38);
    param_2 = param_2 + 0x40;
    param_3 = param_3 + 0x40;
  }
  return 1;
}



// FUNCTION 148c0ee82 FUN_148c0ee82 body=59 status=ok
// SIG undefined FUN_148c0ee82(void)

undefined8 FUN_148c0ee82(longlong *param_1)

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



// FUNCTION 148c0eec8 FUN_148c0eec8 body=56 status=ok
// SIG undefined FUN_148c0eec8(void)

void FUN_148c0eec8(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 8) == '\x01') {
    *param_2 = &PTR_FUN_14b744cb0;
    if (param_2[5] != 0) {
      FUN_1400020a8();
    }
    FUN_140f4522c(param_2);
    *(undefined1 *)(param_2 + 8) = 0;
  }
  return;
}



// FUNCTION 148c0ef3c FUN_148c0ef3c body=67 status=ok
// SIG undefined FUN_148c0ef3c(void)

void FUN_148c0ef3c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14b1382c0;
  FUN_144a5dc74(param_2 + 1);
  FUN_1400b22c2(param_2 + 3,&DAT_149e02088);
  *param_2 = &PTR_FUN_14b744e30;
  param_2[5] = 0;
  return;
}



// FUNCTION 148c0ef80 FUN_148c0ef80 body=67 status=ok
// SIG undefined FUN_148c0ef80(void)

void FUN_148c0ef80(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14b1382c0;
  FUN_144a5dc74(param_2 + 1);
  FUN_1400b22c2(param_2 + 3,&DAT_149e02088);
  *param_2 = &PTR_FUN_14b744e30;
  param_2[5] = 0;
  return;
}



// FUNCTION 148c0efe8 FUN_148c0efe8 body=62 status=ok
// SIG undefined FUN_148c0efe8(void)

undefined8 FUN_148c0efe8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486989f4(param_2,param_3);
    *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_3 + 0x28);
    param_2 = param_2 + 0x30;
    param_3 = param_3 + 0x30;
  }
  return 1;
}



// FUNCTION 148c0f04e FUN_148c0f04e body=59 status=ok
// SIG undefined FUN_148c0f04e(void)

undefined8 FUN_148c0f04e(longlong *param_1)

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



// FUNCTION 148c0f094 FUN_148c0f094 body=34 status=ok
// SIG undefined FUN_148c0f094(void)

void FUN_148c0f094(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_14582a3ea(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 148c0f104 FUN_148c0f104 body=38 status=ok
// SIG undefined FUN_148c0f104(void)

undefined8 FUN_148c0f104(undefined8 param_1,int param_2)

{
  FUN_14582a3ea();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c0f12a FUN_148c0f12a body=55 status=ok
// SIG undefined FUN_148c0f12a(void)

void FUN_148c0f12a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9c10 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9c10 = FUN_140002ddd(FUN_1465d591b,uVar1,L"OakDiscoveryAction_LocateOnMap");
  }
  return;
}



// FUNCTION 148c0f162 FUN_148c0f162 body=67 status=ok
// SIG undefined FUN_148c0f162(void)

void FUN_148c0f162(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14b1382c0;
  FUN_144a5dc74(param_2 + 1);
  FUN_1400b22c2(param_2 + 3,&DAT_149e02088);
  *param_2 = &PTR_FUN_14b748b80;
  param_2[5] = 0;
  return;
}



// FUNCTION 148c0f1a6 FUN_148c0f1a6 body=67 status=ok
// SIG undefined FUN_148c0f1a6(void)

void FUN_148c0f1a6(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14b1382c0;
  FUN_144a5dc74(param_2 + 1);
  FUN_1400b22c2(param_2 + 3,&DAT_149e02088);
  *param_2 = &PTR_FUN_14b748b80;
  param_2[5] = 0;
  return;
}



// FUNCTION 148c0f20e FUN_148c0f20e body=62 status=ok
// SIG undefined FUN_148c0f20e(void)

undefined8 FUN_148c0f20e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486989f4(param_2,param_3);
    *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_3 + 0x28);
    param_2 = param_2 + 0x30;
    param_3 = param_3 + 0x30;
  }
  return 1;
}



// FUNCTION 148c0f274 FUN_148c0f274 body=59 status=ok
// SIG undefined FUN_148c0f274(void)

undefined8 FUN_148c0f274(longlong *param_1)

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



// FUNCTION 148c0f2ba FUN_148c0f2ba body=34 status=ok
// SIG undefined FUN_148c0f2ba(void)

void FUN_148c0f2ba(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_14582a3ea(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 148c0f32a FUN_148c0f32a body=55 status=ok
// SIG undefined FUN_148c0f32a(void)

void FUN_148c0f32a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9c28 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9c28 = FUN_140002ddd(FUN_1465d59b1,uVar1,L"OakDiscoveryAction_FastTravel");
  }
  return;
}



// FUNCTION 148c0f362 FUN_148c0f362 body=59 status=ok
// SIG undefined FUN_148c0f362(void)

void FUN_148c0f362(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14b1382c0;
  FUN_144a5dc74(param_2 + 1);
  FUN_1400b22c2(param_2 + 3,&DAT_149e02088);
  *param_2 = &PTR_FUN_14b745100;
  return;
}



// FUNCTION 148c0f39e FUN_148c0f39e body=59 status=ok
// SIG undefined FUN_148c0f39e(void)

void FUN_148c0f39e(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14b1382c0;
  FUN_144a5dc74(param_2 + 1);
  FUN_1400b22c2(param_2 + 3,&DAT_149e02088);
  *param_2 = &PTR_FUN_14b745100;
  return;
}



// FUNCTION 148c0f3fe FUN_148c0f3fe body=60 status=ok
// SIG undefined FUN_148c0f3fe(void)

undefined8 FUN_148c0f3fe(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486989f4(param_2,param_3);
    *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_3 + 0x28);
    param_2 = param_2 + 0x30;
    param_3 = param_3 + 0x30;
  }
  return 1;
}



// FUNCTION 148c0f462 FUN_148c0f462 body=59 status=ok
// SIG undefined FUN_148c0f462(void)

undefined8 FUN_148c0f462(longlong *param_1)

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



// FUNCTION 148c0f4a8 FUN_148c0f4a8 body=34 status=ok
// SIG undefined FUN_148c0f4a8(void)

void FUN_148c0f4a8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_14582a3ea(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 148c0f518 FUN_148c0f518 body=38 status=ok
// SIG undefined FUN_148c0f518(void)

undefined8 FUN_148c0f518(undefined8 param_1,int param_2)

{
  FUN_14582a3ea();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c0f53e FUN_148c0f53e body=55 status=ok
// SIG undefined FUN_148c0f53e(void)

void FUN_148c0f53e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9c40 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9c40 = FUN_140002ddd(FUN_1465d5a47,uVar1,L"OakDiscoveryAction_RemoveWaypoint");
  }
  return;
}



// FUNCTION 148c0f576 FUN_148c0f576 body=70 status=ok
// SIG undefined FUN_148c0f576(void)

void FUN_148c0f576(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14b1382c0;
  FUN_144a5dc74(param_2 + 1);
  FUN_1400b22c2(param_2 + 3,&DAT_149e02088);
  *param_2 = &PTR_FUN_14b748ba0;
  FUN_144a7a8f6(param_2 + 5);
  return;
}



// FUNCTION 148c0f5bc FUN_148c0f5bc body=70 status=ok
// SIG undefined FUN_148c0f5bc(void)

void FUN_148c0f5bc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14b1382c0;
  FUN_144a5dc74(param_2 + 1);
  FUN_1400b22c2(param_2 + 3,&DAT_149e02088);
  *param_2 = &PTR_FUN_14b748ba0;
  FUN_144a7a8f6(param_2 + 5);
  return;
}



// FUNCTION 148c0f626 FUN_148c0f626 body=68 status=ok
// SIG undefined FUN_148c0f626(void)

undefined8 FUN_148c0f626(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486989f4(param_2,param_3);
    *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_3 + 0x28);
    *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_3 + 0x30);
    param_2 = param_2 + 0x38;
    param_3 = param_3 + 0x38;
  }
  return 1;
}



// FUNCTION 148c0f692 FUN_148c0f692 body=59 status=ok
// SIG undefined FUN_148c0f692(void)

undefined8 FUN_148c0f692(longlong *param_1)

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



// FUNCTION 148c0f6d8 FUN_148c0f6d8 body=34 status=ok
// SIG undefined FUN_148c0f6d8(void)

void FUN_148c0f6d8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_14582a3ea(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 148c0f748 FUN_148c0f748 body=38 status=ok
// SIG undefined FUN_148c0f748(void)

undefined8 FUN_148c0f748(undefined8 param_1,int param_2)

{
  FUN_14582a3ea();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c0f76e FUN_148c0f76e body=55 status=ok
// SIG undefined FUN_148c0f76e(void)

void FUN_148c0f76e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9c58 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9c58 = FUN_140002ddd(FUN_1465d5add,uVar1,L"OakDiscoveryAction_ViewInLog");
  }
  return;
}



// FUNCTION 148c0f7a6 FUN_148c0f7a6 body=70 status=ok
// SIG undefined FUN_148c0f7a6(void)

void FUN_148c0f7a6(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14b1382c0;
  FUN_144a5dc74(param_2 + 1);
  FUN_1400b22c2(param_2 + 3,&DAT_149e02088);
  *param_2 = &PTR_FUN_14b748b90;
  FUN_144a7a8f6(param_2 + 5);
  return;
}



// FUNCTION 148c0f7ec FUN_148c0f7ec body=70 status=ok
// SIG undefined FUN_148c0f7ec(void)

void FUN_148c0f7ec(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14b1382c0;
  FUN_144a5dc74(param_2 + 1);
  FUN_1400b22c2(param_2 + 3,&DAT_149e02088);
  *param_2 = &PTR_FUN_14b748b90;
  FUN_144a7a8f6(param_2 + 5);
  return;
}



// FUNCTION 148c0f856 FUN_148c0f856 body=68 status=ok
// SIG undefined FUN_148c0f856(void)

undefined8 FUN_148c0f856(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486989f4(param_2,param_3);
    *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_3 + 0x28);
    *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_3 + 0x30);
    param_2 = param_2 + 0x38;
    param_3 = param_3 + 0x38;
  }
  return 1;
}



// FUNCTION 148c0f8c2 FUN_148c0f8c2 body=59 status=ok
// SIG undefined FUN_148c0f8c2(void)

undefined8 FUN_148c0f8c2(longlong *param_1)

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



// FUNCTION 148c0f908 FUN_148c0f908 body=34 status=ok
// SIG undefined FUN_148c0f908(void)

void FUN_148c0f908(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_14582a3ea(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 148c0f978 FUN_148c0f978 body=38 status=ok
// SIG undefined FUN_148c0f978(void)

undefined8 FUN_148c0f978(undefined8 param_1,int param_2)

{
  FUN_14582a3ea();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c0f99e FUN_148c0f99e body=55 status=ok
// SIG undefined FUN_148c0f99e(void)

void FUN_148c0f99e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9c70 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9c70 = FUN_140002ddd(FUN_1465d5b73,uVar1,L"OakDiscoveryAction_TrackMission");
  }
  return;
}



// FUNCTION 148c0f9d6 FUN_148c0f9d6 body=81 status=ok
// SIG undefined FUN_148c0f9d6(void)

void FUN_148c0f9d6(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14b1382c0;
  FUN_144a5dc74(param_2 + 1);
  FUN_1400b22c2(param_2 + 3,&DAT_149e02088);
  *param_2 = &PTR_FUN_14b748bb0;
  param_2[5] = &PTR_FUN_14a184370;
  param_2[6] = 0;
  param_2[7] = 0;
  *(undefined1 *)(param_2 + 8) = 0;
  return;
}



// FUNCTION 148c0fa28 FUN_148c0fa28 body=81 status=ok
// SIG undefined FUN_148c0fa28(void)

void FUN_148c0fa28(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14b1382c0;
  FUN_144a5dc74(param_2 + 1);
  FUN_1400b22c2(param_2 + 3,&DAT_149e02088);
  *param_2 = &PTR_FUN_14b748bb0;
  param_2[5] = &PTR_FUN_14a184370;
  param_2[6] = 0;
  param_2[7] = 0;
  *(undefined1 *)(param_2 + 8) = 0;
  return;
}



// FUNCTION 148c0fa9e FUN_148c0fa9e body=54 status=ok
// SIG undefined FUN_148c0fa9e(void)

undefined1 FUN_148c0fa9e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c0fc12(param_2,param_3);
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return 1;
}



// FUNCTION 148c0fafc FUN_148c0fafc body=59 status=ok
// SIG undefined FUN_148c0fafc(void)

undefined8 FUN_148c0fafc(longlong *param_1)

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



// FUNCTION 148c0fb42 FUN_148c0fb42 body=73 status=ok
// SIG undefined FUN_148c0fb42(void)

void FUN_148c0fb42(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 9) == '\x01') {
    *param_2 = &PTR_FUN_14b748bb0;
    param_2[5] = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(param_2 + 8)])(param_2 + 6);
    FUN_14582a3ea(param_2);
    *(undefined1 *)(param_2 + 9) = 0;
  }
  return;
}



// FUNCTION 148c0fbda FUN_148c0fbda body=55 status=ok
// SIG undefined FUN_148c0fbda(void)

void FUN_148c0fbda(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9c88 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9c88 = FUN_140002ddd(FUN_1465d5c09,uVar1,L"OakDiscoveryAction_ViewProfile");
  }
  return;
}



// FUNCTION 148c0fc12 FUN_148c0fc12 body=161 status=ok
// SIG undefined FUN_148c0fc12(void)

longlong FUN_148c0fc12(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1486989f4();
  if (param_2 != param_1) {
    local_48 = CONCAT71(local_48._1_7_,*(byte *)(param_2 + 0x40));
    (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[*(byte *)(param_2 + 0x40)])
              (&local_58,param_2 + 0x30);
    local_28 = local_48;
    local_38 = local_58;
    uStack_34 = uStack_54;
    uStack_30 = uStack_50;
    uStack_2c = uStack_4c;
    uVar1 = *(ulonglong *)(param_1 + 0x40);
    uVar2 = *(undefined4 *)(param_1 + 0x30);
    uVar3 = *(undefined4 *)(param_1 + 0x34);
    uVar4 = *(undefined4 *)(param_1 + 0x38);
    uVar5 = *(undefined4 *)(param_1 + 0x3c);
    *(undefined4 *)(param_1 + 0x30) = local_58;
    *(undefined4 *)(param_1 + 0x34) = uStack_54;
    *(undefined4 *)(param_1 + 0x38) = uStack_50;
    *(undefined4 *)(param_1 + 0x3c) = uStack_4c;
    *(ulonglong *)(param_1 + 0x40) = local_48;
    local_58 = uVar2;
    uStack_54 = uVar3;
    uStack_50 = uVar4;
    uStack_4c = uVar5;
    local_48 = uVar1;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[uVar1 & 0xff])(&local_58);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c0fcb6 FUN_148c0fcb6 body=70 status=ok
// SIG undefined FUN_148c0fcb6(void)

void FUN_148c0fcb6(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14b1382c0;
  FUN_144a5dc74(param_2 + 1);
  FUN_1400b22c2(param_2 + 3,&DAT_149e02088);
  *param_2 = &PTR_FUN_14b748bf0;
  FUN_144a7a8f6(param_2 + 5);
  return;
}



// FUNCTION 148c0fcfc FUN_148c0fcfc body=70 status=ok
// SIG undefined FUN_148c0fcfc(void)

void FUN_148c0fcfc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14b1382c0;
  FUN_144a5dc74(param_2 + 1);
  FUN_1400b22c2(param_2 + 3,&DAT_149e02088);
  *param_2 = &PTR_FUN_14b748bf0;
  FUN_144a7a8f6(param_2 + 5);
  return;
}



// FUNCTION 148c0fd66 FUN_148c0fd66 body=68 status=ok
// SIG undefined FUN_148c0fd66(void)

undefined8 FUN_148c0fd66(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486989f4(param_2,param_3);
    *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_3 + 0x28);
    *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_3 + 0x30);
    param_2 = param_2 + 0x38;
    param_3 = param_3 + 0x38;
  }
  return 1;
}



// FUNCTION 148c0fdd2 FUN_148c0fdd2 body=59 status=ok
// SIG undefined FUN_148c0fdd2(void)

undefined8 FUN_148c0fdd2(longlong *param_1)

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



// FUNCTION 148c0fe18 FUN_148c0fe18 body=34 status=ok
// SIG undefined FUN_148c0fe18(void)

void FUN_148c0fe18(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_14582a3ea(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 148c0fe88 FUN_148c0fe88 body=38 status=ok
// SIG undefined FUN_148c0fe88(void)

undefined8 FUN_148c0fe88(undefined8 param_1,int param_2)

{
  FUN_14582a3ea();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c0feae FUN_148c0feae body=55 status=ok
// SIG undefined FUN_148c0feae(void)

void FUN_148c0feae(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9ca0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9ca0 = FUN_140002ddd(FUN_1465d5c9f,uVar1,L"OakDiscoveryAction_TraitMission");
  }
  return;
}



// FUNCTION 148c0fee6 FUN_148c0fee6 body=59 status=ok
// SIG undefined FUN_148c0fee6(void)

void FUN_148c0fee6(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14b1382c0;
  FUN_144a5dc74(param_2 + 1);
  FUN_1400b22c2(param_2 + 3,&DAT_149e02088);
  *param_2 = &PTR_FUN_14b748b70;
  return;
}



// FUNCTION 148c0ff22 FUN_148c0ff22 body=59 status=ok
// SIG undefined FUN_148c0ff22(void)

void FUN_148c0ff22(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14b1382c0;
  FUN_144a5dc74(param_2 + 1);
  FUN_1400b22c2(param_2 + 3,&DAT_149e02088);
  *param_2 = &PTR_FUN_14b748b70;
  return;
}



// FUNCTION 148c0ff82 FUN_148c0ff82 body=62 status=ok
// SIG undefined FUN_148c0ff82(void)

undefined1 FUN_148c0ff82(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486989f4(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x2c);
    uVar2 = *(undefined4 *)(param_3 + 0x30);
    uVar3 = *(undefined4 *)(param_3 + 0x34);
    *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_3 + 0x28);
    *(undefined4 *)(param_2 + 0x2c) = uVar1;
    *(undefined4 *)(param_2 + 0x30) = uVar2;
    *(undefined4 *)(param_2 + 0x34) = uVar3;
    param_2 = param_2 + 0x38;
    param_3 = param_3 + 0x38;
  }
  return 1;
}



// FUNCTION 148c0ffe8 FUN_148c0ffe8 body=59 status=ok
// SIG undefined FUN_148c0ffe8(void)

undefined8 FUN_148c0ffe8(longlong *param_1)

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



// FUNCTION 148c1002e FUN_148c1002e body=34 status=ok
// SIG undefined FUN_148c1002e(void)

void FUN_148c1002e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_14582a3ea(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 148c1009e FUN_148c1009e body=55 status=ok
// SIG undefined FUN_148c1009e(void)

void FUN_148c1009e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9cb8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9cb8 = FUN_140002ddd(FUN_1465d5d35,uVar1,L"OakDiscoveryAction_ViewMap");
  }
  return;
}



// FUNCTION 148c1012c FUN_148c1012c body=199 status=ok
// SIG undefined FUN_148c1012c(void)

undefined8 FUN_148c1012c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  if (param_4 != 0) {
    lVar11 = 0;
    do {
      if (*(char *)(param_3 + 0x10 + lVar11) == '\0') {
        *(undefined1 *)(param_2 + 0x10 + lVar11) = 0;
        *(undefined8 *)(param_2 + 8 + lVar11) = *(undefined8 *)(param_3 + 8 + lVar11);
      }
      puVar1 = (undefined4 *)(param_3 + 0x18 + lVar11);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar1 = (undefined4 *)(param_3 + 0x24 + lVar11);
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x24 + lVar11);
      *puVar2 = *puVar1;
      puVar2[1] = uVar7;
      puVar2[2] = uVar8;
      puVar2[3] = uVar9;
      puVar1 = (undefined4 *)(param_2 + 0x18 + lVar11);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      *(undefined8 *)(param_2 + 0x38 + lVar11) = *(undefined8 *)(param_3 + 0x38 + lVar11);
      *(undefined4 *)(param_2 + 0x40 + lVar11) = *(undefined4 *)(param_3 + 0x40 + lVar11);
      FUN_14115e0ba(param_2 + 0x48 + lVar11,param_3 + 0x48 + lVar11);
      puVar12 = (undefined8 *)(param_3 + 8 + lVar11 + 200);
      puVar13 = (undefined8 *)(param_2 + 8 + lVar11 + 200);
      for (lVar10 = 0xf; lVar10 != 0; lVar10 = lVar10 + -1) {
        *puVar13 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar13 = puVar13 + 1;
      }
      lVar11 = lVar11 + 0x148;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c1021c FUN_148c1021c body=59 status=ok
// SIG undefined FUN_148c1021c(void)

undefined8 FUN_148c1021c(longlong *param_1)

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



// FUNCTION 148c10268 FUN_148c10268 body=38 status=ok
// SIG undefined FUN_148c10268(void)

void FUN_148c10268(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x148) == '\x01') {
    FUN_148c102c8(param_2);
    *(undefined1 *)(param_2 + 0x148) = 0;
  }
  return;
}



// FUNCTION 148c102c8 FUN_148c102c8 body=93 status=ok
// SIG undefined FUN_148c102c8(void)

void FUN_148c102c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b745950;
  param_1[9] = &DAT_14a176f00;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  param_1[9] = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 10);
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 148c10326 FUN_148c10326 body=115 status=ok
// SIG undefined FUN_148c10326(void)

void FUN_148c10326(undefined8 param_1,undefined8 *param_2)

{
  FUN_143c524da(param_2);
  *param_2 = &PTR_FUN_14b745c30;
  param_2[0x50] = 0;
  param_2[0x51] = 0;
  *(undefined8 *)((longlong)param_2 + 0x289) = 0;
  *(undefined8 *)((longlong)param_2 + 0x291) = 0;
  *(undefined8 *)((longlong)param_2 + 0x524) = 0;
  param_2[0xa6] = 0;
  param_2[0xa7] = 0;
  *(undefined4 *)(param_2 + 0xa8) = 0;
  param_2[0xa9] = 0;
  param_2[0xaa] = 0;
  param_2[0xab] = 0;
  param_2[0xac] = 0;
  param_2[0xad] = 0;
  memset(param_2 + 0x54,0,0x282);
  return;
}



// FUNCTION 148c103b0 FUN_148c103b0 body=120 status=ok
// SIG undefined FUN_148c103b0(void)

undefined1 FUN_148c103b0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486999b2(param_2,param_3);
    FUN_1487297d4(param_2 + 0x280,param_3 + 0x280);
    *(undefined1 *)(param_2 + 0x298) = *(undefined1 *)(param_3 + 0x298);
    FUN_144043ff2(param_2 + 0x2a0,param_3 + 0x2a0);
    param_2 = param_2 + 0x570;
    param_3 = param_3 + 0x570;
  }
  return 1;
}



// FUNCTION 148c10450 FUN_148c10450 body=59 status=ok
// SIG undefined FUN_148c10450(void)

undefined8 FUN_148c10450(longlong *param_1)

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



// FUNCTION 148c1049c FUN_148c1049c body=60 status=ok
// SIG undefined FUN_148c1049c(void)

void FUN_148c1049c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xae) == '\x01') {
    *param_2 = &PTR_FUN_14b745c30;
    FUN_144043f84(param_2 + 0x54);
    FUN_14109589a(param_2);
    *(undefined1 *)(param_2 + 0xae) = 0;
  }
  return;
}



// FUNCTION 148c10532 FUN_148c10532 body=63 status=ok
// SIG undefined FUN_148c10532(void)

undefined1 FUN_148c10532(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c1066e(param_2,param_3);
    param_3 = param_3 + 0xd50;
    param_2 = param_2 + 0xd50;
  }
  return 1;
}



// FUNCTION 148c1059a FUN_148c1059a body=59 status=ok
// SIG undefined FUN_148c1059a(void)

undefined8 FUN_148c1059a(longlong *param_1)

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



// FUNCTION 148c105e6 FUN_148c105e6 body=65 status=ok
// SIG undefined FUN_148c105e6(void)

void FUN_148c105e6(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x1aa) == '\x01') {
    *param_2 = &PTR_FUN_14b747cf0;
    if (param_2[0x1a7] != 0) {
      FUN_1400020a8();
    }
    FUN_1413fe536(param_2);
    *(undefined1 *)(param_2 + 0x1aa) = 0;
  }
  return;
}



// FUNCTION 148c1066e FUN_148c1066e body=129 status=ok
// SIG undefined FUN_148c1066e(void)

longlong FUN_148c1066e(longlong param_1,longlong param_2)

{
  FUN_14869c2a2();
  *(byte *)(param_1 + 0xcf8) = *(byte *)(param_1 + 0xcf8) & 0xfe | *(byte *)(param_2 + 0xcf8) & 1;
  FUN_1418c41de(param_1 + 0xd00,param_2 + 0xd00);
  *(undefined2 *)(param_1 + 0xd18) = *(undefined2 *)(param_2 + 0xd18);
  FUN_147e37066(param_1 + 0xd20,param_2 + 0xd20);
  FUN_140c19cf6(param_1 + 0xd38,param_2 + 0xd38);
  *(undefined1 *)(param_1 + 0xd48) = *(undefined1 *)(param_2 + 0xd48);
  return param_1;
}



// FUNCTION 148c106f0 FUN_148c106f0 body=111 status=ok
// SIG undefined FUN_148c106f0(void)

void FUN_148c106f0(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x98);
  *(undefined4 *)((longlong)param_2 + 0x10) = 2;
  *(undefined8 *)((longlong)param_2 + 0x14) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0x200000000;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x34) = 0;
  *(undefined8 *)((longlong)param_2 + 0x3c) = 0x200000000;
  *(undefined8 *)((longlong)param_2 + 0x44) = 0;
  *(undefined8 *)((longlong)param_2 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x54) = 0;
  *(undefined8 *)((longlong)param_2 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x62) = 0;
  *(undefined1 *)((longlong)param_2 + 0x6a) = 5;
  *(undefined8 *)((longlong)param_2 + 0x78) = 0;
  *(undefined8 *)((longlong)param_2 + 0x80) = 0;
  *(undefined8 *)((longlong)param_2 + 0x84) = 0;
  *(undefined8 *)((longlong)param_2 + 0x8c) = 0;
  *(undefined1 *)((longlong)param_2 + 0x94) = 0xff;
  *(undefined8 *)((longlong)param_2 + 0x98) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa0) = 0;
  return;
}



// FUNCTION 148c107d6 FUN_148c107d6 body=63 status=ok
// SIG undefined FUN_148c107d6(void)

undefined1 FUN_148c107d6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c108fe(param_2,param_3);
    param_3 = param_3 + 0xa8;
    param_2 = param_2 + 0xa8;
  }
  return 1;
}



// FUNCTION 148c1083e FUN_148c1083e body=59 status=ok
// SIG undefined FUN_148c1083e(void)

undefined8 FUN_148c1083e(longlong *param_1)

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



// FUNCTION 148c1088a FUN_148c1088a body=38 status=ok
// SIG undefined FUN_148c1088a(void)

void FUN_148c1088a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa8) == '\x01') {
    FUN_1418c9ea0(param_2);
    *(undefined1 *)(param_2 + 0xa8) = 0;
  }
  return;
}



// FUNCTION 148c108fe FUN_148c108fe body=82 status=ok
// SIG undefined FUN_148c108fe(void)

longlong FUN_148c108fe(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_2 != param_1) {
    FUN_1401b31d8(param_1,param_2);
    FUN_1401b31d8(param_1 + 0x18,param_2 + 0x18);
    FUN_1401b31d8(param_1 + 0x30,param_2 + 0x30);
  }
  puVar2 = (undefined8 *)(param_2 + 0x48);
  puVar3 = (undefined8 *)(param_1 + 0x48);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return param_1;
}



// FUNCTION 148c10952 FUN_148c10952 body=39 status=ok
// SIG undefined FUN_148c10952(void)

void FUN_148c10952(undefined8 param_1,undefined8 *param_2)

{
  FUN_1412dbdbe(param_2);
  *param_2 = &PTR_FUN_14b746070;
  *(undefined1 *)(param_2 + 0x2c) = 0;
  return;
}



// FUNCTION 148c10990 FUN_148c10990 body=74 status=ok
// SIG undefined FUN_148c10990(void)

undefined1 FUN_148c10990(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148729034(param_2,param_3);
    *(undefined1 *)(param_2 + 0x160) = *(undefined1 *)(param_3 + 0x160);
    param_2 = param_2 + 0x168;
    param_3 = param_3 + 0x168;
  }
  return 1;
}



// FUNCTION 148c10a02 FUN_148c10a02 body=59 status=ok
// SIG undefined FUN_148c10a02(void)

undefined8 FUN_148c10a02(longlong *param_1)

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



// FUNCTION 148c10a4e FUN_148c10a4e body=38 status=ok
// SIG undefined FUN_148c10a4e(void)

void FUN_148c10a4e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x168) == '\x01') {
    FUN_140f71356(param_2);
    *(undefined1 *)(param_2 + 0x168) = 0;
  }
  return;
}



// FUNCTION 148c10b5a FUN_148c10b5a body=59 status=ok
// SIG undefined FUN_148c10b5a(void)

undefined8 FUN_148c10b5a(longlong *param_1)

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



// FUNCTION 148c10bfa FUN_148c10bfa body=55 status=ok
// SIG undefined FUN_148c10bfa(void)

void FUN_148c10bfa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9f60 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9f60 = FUN_140002ddd(FUN_1465d683d,uVar1,L"OakEcho4ValueResolver");
  }
  return;
}



// FUNCTION 148c10c6c FUN_148c10c6c body=63 status=ok
// SIG undefined FUN_148c10c6c(void)

undefined1 FUN_148c10c6c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c10dd4(param_2,param_3);
    param_3 = param_3 + 0x100;
    param_2 = param_2 + 0x100;
  }
  return 1;
}



// FUNCTION 148c10cd4 FUN_148c10cd4 body=59 status=ok
// SIG undefined FUN_148c10cd4(void)

undefined8 FUN_148c10cd4(longlong *param_1)

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



// FUNCTION 148c10d20 FUN_148c10d20 body=40 status=ok
// SIG undefined FUN_148c10d20(void)

void FUN_148c10d20(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x100) == '\x01') {
    FUN_1459a7d3c(param_2);
    *(undefined1 *)(param_2 + 0x100) = 0;
  }
  return;
}



// FUNCTION 148c10d9a FUN_148c10d9a body=57 status=ok
// SIG undefined FUN_148c10d9a(void)

void FUN_148c10d9a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9fa8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9fa8 = FUN_140002ddd(FUN_1465d68fa,uVar1,L"OakEchoLocationDataDef");
  }
  return;
}



// FUNCTION 148c10dd4 FUN_148c10dd4 body=261 status=ok
// SIG undefined FUN_148c10dd4(void)

longlong FUN_148c10dd4(longlong param_1,longlong param_2)

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
  undefined8 uVar12;
  
  if (*(char *)(param_2 + 0x10) == '\0') {
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  }
  uVar1 = *(undefined4 *)(param_2 + 0x18);
  uVar2 = *(undefined4 *)(param_2 + 0x1c);
  uVar3 = *(undefined4 *)(param_2 + 0x20);
  uVar4 = *(undefined4 *)(param_2 + 0x24);
  uVar5 = *(undefined4 *)(param_2 + 0x28);
  uVar6 = *(undefined4 *)(param_2 + 0x2c);
  uVar7 = *(undefined4 *)(param_2 + 0x30);
  uVar8 = *(undefined4 *)(param_2 + 0x34);
  uVar9 = *(undefined4 *)(param_2 + 0x3c);
  uVar10 = *(undefined4 *)(param_2 + 0x40);
  uVar11 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = uVar9;
  *(undefined4 *)(param_1 + 0x40) = uVar10;
  *(undefined4 *)(param_1 + 0x44) = uVar11;
  *(undefined4 *)(param_1 + 0x28) = uVar5;
  *(undefined4 *)(param_1 + 0x2c) = uVar6;
  *(undefined4 *)(param_1 + 0x30) = uVar7;
  *(undefined4 *)(param_1 + 0x34) = uVar8;
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  *(undefined4 *)(param_1 + 0x24) = uVar4;
  FUN_148c10eda(param_1 + 0x48,param_2 + 0x48);
  *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  FUN_144a7bb84(param_1 + 0x70,param_2 + 0x70);
  FUN_144a82394(param_1 + 0x88,param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  FUN_144a7bb84(param_1 + 0xa0,param_2 + 0xa0);
  FUN_144a82394(param_1 + 0xb8,param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 200);
  FUN_144a7bb84(param_1 + 0xd0,param_2 + 0xd0);
  FUN_144a82394(param_1 + 0xe8,param_2 + 0xe8);
  uVar12 = *(undefined8 *)(param_2 + 0xf8);
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 0xf0);
  *(undefined8 *)(param_1 + 0xf8) = uVar12;
  return param_1;
}



// FUNCTION 148c10eda FUN_148c10eda body=95 status=ok
// SIG undefined FUN_148c10eda(void)

undefined8 * FUN_148c10eda(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1459a7dee(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c10f3a(param_1,iVar1);
      FUN_148c10fad(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c10f3a FUN_148c10f3a body=115 status=ok
// SIG undefined FUN_148c10f3a(void)

void FUN_148c10f3a(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c10fad FUN_148c10fad body=134 status=ok
// SIG undefined FUN_148c10fad(void)

void FUN_148c10fad(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  if (param_3 != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x18);
    do {
      puVar5[-3] = *param_2;
      uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
      uVar3 = *(undefined4 *)(param_2 + 2);
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
      *(undefined4 *)(puVar5 + -2) = *(undefined4 *)(param_2 + 1);
      *(undefined4 *)((longlong)puVar5 + -0xc) = uVar2;
      *(undefined4 *)(puVar5 + -1) = uVar3;
      *(undefined4 *)((longlong)puVar5 + -4) = uVar4;
      *puVar5 = 0;
      iVar1 = *(int *)(param_2 + 4);
      _Src = (void *)param_2[3];
      *(int *)(puVar5 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar5,iVar1,0);
        memcpy((void *)*puVar5,_Src,(longlong)iVar1 * 2);
      }
      param_2 = param_2 + 5;
      puVar5 = puVar5 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148c11034 FUN_148c11034 body=28 status=ok
// SIG undefined FUN_148c11034(void)

undefined8 FUN_148c11034(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 148c11062 FUN_148c11062 body=85 status=ok
// SIG undefined FUN_148c11062(void)

void FUN_148c11062(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  *param_2 = &PTR_FUN_14b748bc0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *(undefined4 *)(param_2 + 7) = 0;
  FUN_144a5dc74(param_2 + 8);
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  return;
}



// FUNCTION 148c110ce FUN_148c110ce body=54 status=ok
// SIG undefined FUN_148c110ce(void)

undefined1 FUN_148c110ce(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c11214(param_2,param_3);
    param_3 = param_3 + 0x78;
    param_2 = param_2 + 0x78;
  }
  return 1;
}



// FUNCTION 148c1112c FUN_148c1112c body=59 status=ok
// SIG undefined FUN_148c1112c(void)

undefined8 FUN_148c1112c(longlong *param_1)

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



// FUNCTION 148c11172 FUN_148c11172 body=34 status=ok
// SIG undefined FUN_148c11172(void)

void FUN_148c11172(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_145809554(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 148c111da FUN_148c111da body=57 status=ok
// SIG undefined FUN_148c111da(void)

void FUN_148c111da(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaa0f0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaa0f0 = FUN_140002ddd(FUN_1465d6a46,uVar1,L"OakEchoLogCategoryDef");
  }
  return;
}



// FUNCTION 148c11214 FUN_148c11214 body=149 status=ok
// SIG undefined FUN_148c11214(void)

longlong FUN_148c11214(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (*(char *)(param_2 + 0x10) == '\0') {
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  }
  FUN_1489fc572(param_1 + 0x18,param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
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
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  uVar3 = *(undefined4 *)(param_2 + 0x5c);
  uVar4 = *(undefined4 *)(param_2 + 0x60);
  uVar5 = *(undefined4 *)(param_2 + 100);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  *(undefined4 *)(param_1 + 0x60) = uVar4;
  *(undefined4 *)(param_1 + 100) = uVar5;
  FUN_144a787a6(param_1 + 0x68,param_2 + 0x68);
  return param_1;
}



// FUNCTION 148c112aa FUN_148c112aa body=28 status=ok
// SIG undefined FUN_148c112aa(void)

undefined8 FUN_148c112aa(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 148c112f6 FUN_148c112f6 body=63 status=ok
// SIG undefined FUN_148c112f6(void)

undefined1 FUN_148c112f6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14404458a(param_2,param_3);
    param_3 = param_3 + 0xf0;
    param_2 = param_2 + 0xf0;
  }
  return 1;
}



// FUNCTION 148c1135e FUN_148c1135e body=59 status=ok
// SIG undefined FUN_148c1135e(void)

undefined8 FUN_148c1135e(longlong *param_1)

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



// FUNCTION 148c113aa FUN_148c113aa body=38 status=ok
// SIG undefined FUN_148c113aa(void)

void FUN_148c113aa(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf0) == '\x01') {
    FUN_148c114d2(param_2);
    *(undefined1 *)(param_2 + 0xf0) = 0;
  }
  return;
}



// FUNCTION 148c1140a FUN_148c1140a body=199 status=ok
// SIG undefined FUN_148c1140a(void)

undefined8 * FUN_148c1140a(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b746c80;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0x401d;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 1;
  FUN_144a5dc74(param_1 + 0xd);
  FUN_144a5dc74(param_1 + 0xf);
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[0x17] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x18) = (int)plVar2[1];
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x646c63;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  return param_1;
}



// FUNCTION 148c114d2 FUN_148c114d2 body=127 status=ok
// SIG undefined FUN_148c114d2(void)

void FUN_148c114d2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b746c80;
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0x17] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x17] + 0x10))();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0xf] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xf] + 0x10))();
  }
  if ((longlong *)param_1[0xd] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xd] + 0x10))();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 148c11552 FUN_148c11552 body=84 status=ok
// SIG undefined FUN_148c11552(void)

longlong * FUN_148c11552(longlong *param_1,longlong *param_2)

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



// FUNCTION 148c115a6 FUN_148c115a6 body=84 status=ok
// SIG undefined FUN_148c115a6(void)

longlong * FUN_148c115a6(longlong *param_1,longlong *param_2)

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



// FUNCTION 148c11608 FUN_148c11608 body=95 status=ok
// SIG undefined FUN_148c11608(void)

longlong FUN_148c11608(longlong param_1,int param_2)

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



// FUNCTION 148c11674 FUN_148c11674 body=32 status=ok
// SIG undefined FUN_148c11674(void)

undefined8 FUN_148c11674(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FSubsystemCollection");
  return param_2;
}



// FUNCTION 148c11694 FUN_148c11694 body=266 status=ok
// SIG undefined FUN_148c11694(void)

void FUN_148c11694(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_28 = 0;
  uStack_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = *puVar1;
  local_30 = puVar1[1];
  FUN_148d12294(local_18);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c117a6 FUN_148c117a6 body=259 status=ok
// SIG undefined FUN_148c117a6(void)

void FUN_148c117a6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
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
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar2 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148d12290(local_20,puVar2);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c118aa FUN_148c118aa body=148 status=ok
// SIG undefined FUN_148c118aa(void)

void FUN_148c118aa(undefined8 param_1,longlong param_2)

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
  FUN_14410d7f6(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c11940 FUN_148c11940 body=321 status=ok
// SIG undefined FUN_148c11940(void)

void FUN_148c11940(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
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
  FUN_14410d7f4(local_18,local_20,local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c11a82 FUN_148c11a82 body=172 status=ok
// SIG undefined FUN_148c11a82(void)

void FUN_148c11a82(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [24];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_141154cc6(local_38,local_20);
  FUN_148c11b30(param_3,local_38);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c11b30 FUN_148c11b30 body=84 status=ok
// SIG undefined FUN_148c11b30(void)

longlong * FUN_148c11b30(longlong *param_1,longlong *param_2)

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



// FUNCTION 148c11b8a FUN_148c11b8a body=344 status=ok
// SIG undefined FUN_148c11b8a(void)

void FUN_148c11b8a(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [44];
  int local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  puVar2 = &local_38;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148d12284(local_20,puVar2,local_3c != 0);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c11cea FUN_148c11cea body=324 status=ok
// SIG undefined FUN_148c11cea(void)

void FUN_148c11cea(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  int local_24;
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
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148d1228a(local_18,local_20,local_24 != 0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c11e36 FUN_148c11e36 body=235 status=ok
// SIG undefined FUN_148c11e36(void)

void FUN_148c11e36(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
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
  local_24 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_148d1228c(local_20,local_24);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c11f28 FUN_148c11f28 body=344 status=ok
// SIG undefined FUN_148c11f28(void)

void FUN_148c11f28(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [44];
  int local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  puVar2 = &local_38;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148d12286(local_20,puVar2,local_3c != 0);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c12088 FUN_148c12088 body=344 status=ok
// SIG undefined FUN_148c12088(void)

void FUN_148c12088(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [44];
  int local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  puVar2 = &local_38;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148d12288(local_20,puVar2,local_3c != 0);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c121e2 FUN_148c121e2 body=148 status=ok
// SIG undefined FUN_148c121e2(void)

void FUN_148c121e2(undefined8 param_1,longlong param_2)

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
  FUN_148d12296(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c122e0 FUN_148c122e0 body=156 status=ok
// SIG undefined FUN_148c122e0(void)

void FUN_148c122e0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uVar1 = FUN_1412c348c(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c12380 FUN_148c12380 body=230 status=ok
// SIG undefined FUN_148c12380(void)

void FUN_148c12380(undefined8 param_1,longlong param_2)

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
  FUN_148ceeebc(local_18,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c12470 FUN_148c12470 body=355 status=ok
// SIG undefined FUN_148c12470(void)

void FUN_148c12470(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_38 = 0;
  local_30 = 0x5001;
  local_28 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_38;
  local_50 = local_30;
  local_48 = 0;
  FUN_148d1c012(local_20,&local_58,local_3c);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c125d4 FUN_148c125d4 body=355 status=ok
// SIG undefined FUN_148c125d4(void)

void FUN_148c125d4(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_38 = 0;
  local_30 = 0x5001;
  local_28 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_38;
  local_50 = local_30;
  local_48 = 0;
  FUN_148d1c014(local_20,&local_58,local_3c);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c1275c FUN_148c1275c body=48 status=ok
// SIG undefined FUN_148c1275c(void)

longlong FUN_148c1275c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_140ef7316(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c12794 FUN_148c12794 body=48 status=ok
// SIG undefined FUN_148c12794(void)

longlong FUN_148c12794(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_140ef7316(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c127cc FUN_148c127cc body=48 status=ok
// SIG undefined FUN_148c127cc(void)

longlong FUN_148c127cc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_140ef7316(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c12814 FUN_148c12814 body=48 status=ok
// SIG undefined FUN_148c12814(void)

longlong FUN_148c12814(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x530;
  FUN_140ef7316(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c1284c FUN_148c1284c body=48 status=ok
// SIG undefined FUN_148c1284c(void)

longlong FUN_148c1284c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x538;
  FUN_140ef7316(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c12884 FUN_148c12884 body=48 status=ok
// SIG undefined FUN_148c12884(void)

longlong FUN_148c12884(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x540;
  FUN_140ef7316(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c128bc FUN_148c128bc body=48 status=ok
// SIG undefined FUN_148c128bc(void)

longlong FUN_148c128bc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x8c0;
  FUN_140ef7316(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c128f0 FUN_148c128f0 body=45 status=ok
// SIG undefined FUN_148c128f0(void)

longlong FUN_148c128f0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_145d18e36(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c12934 FUN_148c12934 body=64 status=ok
// SIG undefined FUN_148c12934(void)

void FUN_148c12934(undefined8 param_1,longlong param_2)

{
  *(undefined **)(param_2 + 0x18) = &DAT_14a176f00;
  if (*(longlong *)(param_2 + 0x88) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_2 + 0x18) = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_2 + 0x20);
  return;
}



// FUNCTION 148c1298a FUN_148c1298a body=127 status=ok
// SIG undefined FUN_148c1298a(void)

undefined8 FUN_148c1298a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      *(undefined4 *)(lVar2 + -8) = puVar1[4];
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      *(undefined4 *)(lVar2 + -0x18) = *puVar1;
      *(undefined4 *)(lVar2 + -0x14) = uVar4;
      *(undefined4 *)(lVar2 + -0x10) = uVar5;
      *(undefined4 *)(lVar2 + -0xc) = uVar6;
      FUN_14115e0ba(lVar2,puVar1 + 6);
      uVar3 = *(undefined8 *)((longlong)puVar1 + 0xa5);
      *(undefined8 *)(lVar2 + 0x88) = *(undefined8 *)(puVar1 + 0x28);
      *(undefined8 *)(lVar2 + 0x8d) = uVar3;
      lVar7 = lVar7 + 0xb0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c12a32 FUN_148c12a32 body=59 status=ok
// SIG undefined FUN_148c12a32(void)

undefined8 FUN_148c12a32(longlong *param_1)

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



// FUNCTION 148c12ad4 FUN_148c12ad4 body=291 status=ok
// SIG undefined FUN_148c12ad4(void)

undefined1 * FUN_148c12ad4(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[8] = 0;
  *(undefined8 *)(param_1 + 0xc) = 0x42c8000040a00000;
  puVar1 = param_1 + 0x18;
  FUN_14109baa4(puVar1);
  *(undefined4 *)(param_1 + 0xa0) = 0x41200000;
  param_1[0xac] = 0;
  *(undefined8 *)(param_1 + 0xa4) = 0;
  FUN_14045d416(&local_30);
  local_40 = local_30;
  local_48 = 0;
  FUN_1406507bc(puVar1,&local_2c,0,0);
  FUN_140650770(puVar1,local_2c,0,1);
  thunk_FUN_14045d156(puVar1,local_2c,2);
  FUN_14045d416(&local_38);
  local_40 = local_38;
  local_48 = 0;
  FUN_1406507bc(puVar1,&local_34,0x3f800000,0x3f800000);
  FUN_140650770(puVar1,local_34,0,1);
  thunk_FUN_14045d156(puVar1,local_34,2);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c12bfa FUN_148c12bfa body=78 status=ok
// SIG undefined FUN_148c12bfa(void)

void FUN_148c12bfa(longlong param_1)

{
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    *(undefined **)(param_1 + 0x18) = &DAT_14a176f00;
    if (*(longlong *)(param_1 + 0x88) != 0) {
      FUN_1400020a8();
    }
    *(undefined ***)(param_1 + 0x18) = &PTR_FUN_14a177080;
    FUN_144a78a1a(param_1 + 0x20);
    *(undefined1 *)(param_1 + 0xb0) = 0;
  }
  return;
}



// FUNCTION 148c12c8a FUN_148c12c8a body=141 status=ok
// SIG undefined FUN_148c12c8a(void)

undefined8 FUN_148c12c8a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      lVar1 = param_2 + lVar6;
      lVar2 = param_3 + lVar6;
      FUN_141289ada(lVar1 + 8,lVar2 + 8);
      *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
      uVar3 = *(undefined4 *)(lVar2 + 0x24);
      uVar4 = *(undefined4 *)(lVar2 + 0x28);
      uVar5 = *(undefined4 *)(lVar2 + 0x2c);
      *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)(lVar2 + 0x20);
      *(undefined4 *)(lVar1 + 0x24) = uVar3;
      *(undefined4 *)(lVar1 + 0x28) = uVar4;
      *(undefined4 *)(lVar1 + 0x2c) = uVar5;
      FUN_144a787a6(param_2 + lVar6 + 0x30,param_3 + lVar6 + 0x30);
      FUN_1489fc572(param_2 + lVar6 + 0x40,param_3 + lVar6 + 0x40);
      lVar6 = lVar6 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c12d40 FUN_148c12d40 body=59 status=ok
// SIG undefined FUN_148c12d40(void)

undefined8 FUN_148c12d40(longlong *param_1)

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



// FUNCTION 148c12d86 FUN_148c12d86 body=32 status=ok
// SIG undefined FUN_148c12d86(void)

void FUN_148c12d86(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_1418472b4(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 148c12e64 FUN_148c12e64 body=59 status=ok
// SIG undefined FUN_148c12e64(void)

undefined8 FUN_148c12e64(longlong *param_1)

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



// FUNCTION 148c12f24 FUN_148c12f24 body=63 status=ok
// SIG undefined FUN_148c12f24(void)

undefined1 FUN_148c12f24(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c13088(param_2,param_3);
    param_3 = param_3 + 0x228;
    param_2 = param_2 + 0x228;
  }
  return 1;
}



// FUNCTION 148c12f8c FUN_148c12f8c body=59 status=ok
// SIG undefined FUN_148c12f8c(void)

undefined8 FUN_148c12f8c(longlong *param_1)

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



// FUNCTION 148c12fd8 FUN_148c12fd8 body=40 status=ok
// SIG undefined FUN_148c12fd8(void)

void FUN_148c12fd8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x228) == '\x01') {
    FUN_14585cc42(param_2);
    *(undefined1 *)(param_2 + 0x228) = 0;
  }
  return;
}



// FUNCTION 148c1304e FUN_148c1304e body=57 status=ok
// SIG undefined FUN_148c1304e(void)

void FUN_148c1304e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaa3f0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaa3f0 = FUN_140002ddd(FUN_1465d7897,uVar1,L"OakElementGlobals");
  }
  return;
}



// FUNCTION 148c13088 FUN_148c13088 body=154 status=ok
// SIG undefined FUN_148c13088(void)

longlong FUN_148c13088(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  memcpy((void *)(param_1 + 0x20),(void *)(param_2 + 0x20),0x88);
  lVar4 = 0xb0;
  do {
    FUN_14873ac92(param_1 + lVar4,param_2 + lVar4);
    lVar4 = lVar4 + 0x18;
  } while (lVar4 != 0x140);
  param_2 = param_2 + 0x150;
  lVar4 = param_1 + 0x150;
  lVar5 = 6;
  do {
    *(undefined8 *)(lVar4 + -0x18) = *(undefined8 *)(param_2 + -0x18);
    uVar1 = *(undefined4 *)(param_2 + -0xc);
    uVar2 = *(undefined4 *)(param_2 + -8);
    uVar3 = *(undefined4 *)(param_2 + -4);
    *(undefined4 *)(lVar4 + -0x10) = *(undefined4 *)(param_2 + -0x10);
    *(undefined4 *)(lVar4 + -0xc) = uVar1;
    *(undefined4 *)(lVar4 + -8) = uVar2;
    *(undefined4 *)(lVar4 + -4) = uVar3;
    FUN_144a787a6(lVar4,param_2);
    param_2 = param_2 + 0x28;
    lVar4 = lVar4 + 0x28;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return param_1;
}



// FUNCTION 148c13142 FUN_148c13142 body=63 status=ok
// SIG undefined FUN_148c13142(void)

undefined1 FUN_148c13142(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c1326c(param_2,param_3);
    param_3 = param_3 + 0x158;
    param_2 = param_2 + 0x158;
  }
  return 1;
}



// FUNCTION 148c131aa FUN_148c131aa body=59 status=ok
// SIG undefined FUN_148c131aa(void)

undefined8 FUN_148c131aa(longlong *param_1)

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



// FUNCTION 148c131f6 FUN_148c131f6 body=40 status=ok
// SIG undefined FUN_148c131f6(void)

void FUN_148c131f6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x158) == '\x01') {
    FUN_145ae5ebe(param_2);
    *(undefined1 *)(param_2 + 0x158) = 0;
  }
  return;
}



// FUNCTION 148c1326c FUN_148c1326c body=241 status=ok
// SIG undefined FUN_148c1326c(void)

longlong FUN_148c1326c(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  FUN_1447715ec(param_1 + 0x30,param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  FUN_1447715ec(param_1 + 0x68,param_2 + 0x68);
  FUN_148c1335e(param_1 + 0x90,param_2 + 0x90);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  uVar1 = *(undefined4 *)(param_2 + 0xac);
  uVar2 = *(undefined4 *)(param_2 + 0xb0);
  uVar3 = *(undefined4 *)(param_2 + 0xb4);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined4 *)(param_1 + 0xac) = uVar1;
  *(undefined4 *)(param_1 + 0xb0) = uVar2;
  *(undefined4 *)(param_1 + 0xb4) = uVar3;
  FUN_144a787a6(param_1 + 0xb8,param_2 + 0xb8);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  uVar1 = *(undefined4 *)(param_2 + 0xd4);
  uVar2 = *(undefined4 *)(param_2 + 0xd8);
  uVar3 = *(undefined4 *)(param_2 + 0xdc);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  *(undefined4 *)(param_1 + 0xd4) = uVar1;
  *(undefined4 *)(param_1 + 0xd8) = uVar2;
  *(undefined4 *)(param_1 + 0xdc) = uVar3;
  FUN_144a787a6(param_1 + 0xe0,param_2 + 0xe0);
  FUN_148c133ae(param_1 + 0xf0,param_2 + 0xf0);
  puVar5 = (undefined8 *)(param_2 + 0x100);
  puVar6 = (undefined8 *)(param_1 + 0x100);
  for (lVar4 = 0xb; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  return param_1;
}



// FUNCTION 148c1335e FUN_148c1335e body=79 status=ok
// SIG undefined FUN_148c1335e(void)

undefined8 * FUN_148c1335e(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148c13408(param_1,iVar1);
      FUN_148c1347b(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c133ae FUN_148c133ae body=89 status=ok
// SIG undefined FUN_148c133ae(void)

undefined8 * FUN_148c133ae(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148c134f8(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x30);
      }
    }
  }
  return param_1;
}



// FUNCTION 148c13408 FUN_148c13408 body=115 status=ok
// SIG undefined FUN_148c13408(void)

void FUN_148c13408(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c1347b FUN_148c1347b body=52 status=ok
// SIG undefined FUN_148c1347b(void)

void FUN_148c1347b(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_148c134b0(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 148c134b0 FUN_148c134b0 body=71 status=ok
// SIG undefined FUN_148c134b0(void)

undefined8 * FUN_148c134b0(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 148c134f8 FUN_148c134f8 body=115 status=ok
// SIG undefined FUN_148c134f8(void)

void FUN_148c134f8(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,4);
    iVar2 = (int)(uVar1 / 0x30);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x30,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148c1356c FUN_148c1356c body=57 status=ok
// SIG undefined FUN_148c1356c(void)

void FUN_148c1356c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaa438 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaa438 = FUN_140002ddd(FUN_1465d792d,uVar1,L"OakEndGameGlobals");
  }
  return;
}



// FUNCTION 148c135ea FUN_148c135ea body=54 status=ok
// SIG undefined FUN_148c135ea(void)

undefined1 FUN_148c135ea(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c13702(param_2,param_3);
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return 1;
}



// FUNCTION 148c13648 FUN_148c13648 body=59 status=ok
// SIG undefined FUN_148c13648(void)

undefined8 FUN_148c13648(longlong *param_1)

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



// FUNCTION 148c1368e FUN_148c1368e body=38 status=ok
// SIG undefined FUN_148c1368e(void)

void FUN_148c1368e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 148c13702 FUN_148c13702 body=84 status=ok
// SIG undefined FUN_148c13702(void)

undefined8 * FUN_148c13702(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  *param_1 = *param_2;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar2 = *(undefined4 *)(param_2 + 2);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 2) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
  FUN_144a787a6(param_1 + 3,param_2 + 3);
  lVar4 = param_2[5];
  if (DAT_14c950c29 == '\x01') {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = param_2[5];
    }
  }
  param_1[5] = lVar4;
  return param_1;
}



// FUNCTION 148c13782 FUN_148c13782 body=105 status=ok
// SIG undefined FUN_148c13782(void)

undefined8 FUN_148c13782(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 8;
    do {
      plVar1 = *(longlong **)(param_3 + lVar3);
      plVar2 = *(longlong **)(param_2 + lVar3);
      if (plVar2 != plVar1) {
        *(longlong **)(param_2 + lVar3) = plVar1;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
      *(undefined4 *)(param_2 + 8 + lVar3) = *(undefined4 *)(param_3 + 8 + lVar3);
      lVar3 = lVar3 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c13814 FUN_148c13814 body=59 status=ok
// SIG undefined FUN_148c13814(void)

undefined8 FUN_148c13814(longlong *param_1)

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



// FUNCTION 148c1385a FUN_148c1385a body=49 status=ok
// SIG undefined FUN_148c1385a(void)

void FUN_148c1385a(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 3) == '\x01') {
    *param_2 = &PTR_FUN_14b753d50;
    if ((longlong *)param_2[1] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_2[1] + 0x10))();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 148c1392a FUN_148c1392a body=105 status=ok
// SIG undefined FUN_148c1392a(void)

undefined8 FUN_148c1392a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 8;
    do {
      plVar1 = *(longlong **)(param_3 + lVar3);
      plVar2 = *(longlong **)(param_2 + lVar3);
      if (plVar2 != plVar1) {
        *(longlong **)(param_2 + lVar3) = plVar1;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
      *(undefined4 *)(param_2 + 8 + lVar3) = *(undefined4 *)(param_3 + 8 + lVar3);
      lVar3 = lVar3 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c139bc FUN_148c139bc body=59 status=ok
// SIG undefined FUN_148c139bc(void)

undefined8 FUN_148c139bc(longlong *param_1)

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



// FUNCTION 148c13a02 FUN_148c13a02 body=49 status=ok
// SIG undefined FUN_148c13a02(void)

void FUN_148c13a02(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 3) == '\x01') {
    *param_2 = &PTR_FUN_14b753ed0;
    if ((longlong *)param_2[1] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_2[1] + 0x10))();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 148c13a82 FUN_148c13a82 body=58 status=ok
// SIG undefined FUN_148c13a82(void)

undefined8 * FUN_148c13a82(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b753ed0;
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c13ae8 FUN_148c13ae8 body=70 status=ok
// SIG undefined FUN_148c13ae8(void)

undefined1 FUN_148c13ae8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_1401f3db8(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c13b56 FUN_148c13b56 body=59 status=ok
// SIG undefined FUN_148c13b56(void)

undefined8 FUN_148c13b56(longlong *param_1)

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



// FUNCTION 148c13b9c FUN_148c13b9c body=64 status=ok
// SIG undefined FUN_148c13b9c(void)

void FUN_148c13b9c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x28) == '\x01') {
    plVar3 = *(longlong **)(param_2 + 0x18);
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
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 148c13c8a FUN_148c13c8a body=54 status=ok
// SIG undefined FUN_148c13c8a(void)

undefined1 FUN_148c13c8a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c13de0(param_2,param_3);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 148c13ce8 FUN_148c13ce8 body=59 status=ok
// SIG undefined FUN_148c13ce8(void)

undefined8 FUN_148c13ce8(longlong *param_1)

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



// FUNCTION 148c13d2e FUN_148c13d2e body=34 status=ok
// SIG undefined FUN_148c13d2e(void)

void FUN_148c13d2e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_1458d7ef4(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 148c13da8 FUN_148c13da8 body=55 status=ok
// SIG undefined FUN_148c13da8(void)

void FUN_148c13da8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaa680 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaa680 = FUN_140002ddd(FUN_1465d81a1,uVar1,L"OakEnhancementNamingStrategy");
  }
  return;
}



// FUNCTION 148c13de0 FUN_148c13de0 body=90 status=ok
// SIG undefined FUN_148c13de0(void)

longlong FUN_148c13de0(longlong param_1,longlong param_2)

{
  FUN_148c13e3a(param_1 + 8,param_2 + 8);
  FUN_148c13e3a(param_1 + 0x18,param_2 + 0x18);
  FUN_148c13e3a(param_1 + 0x28,param_2 + 0x28);
  FUN_148c13e3a(param_1 + 0x38,param_2 + 0x38);
  FUN_14173baee(param_1 + 0x48,param_2 + 0x48);
  return param_1;
}



// FUNCTION 148c13e3a FUN_148c13e3a body=93 status=ok
// SIG undefined FUN_148c13e3a(void)

undefined8 * FUN_148c13e3a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1413045ef(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c13e98(param_1,iVar1);
      FUN_148c13f0b(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148c13e98 FUN_148c13e98 body=115 status=ok
// SIG undefined FUN_148c13e98(void)

void FUN_148c13e98(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148c13f0b FUN_148c13f0b body=68 status=ok
// SIG undefined FUN_148c13f0b(void)

void FUN_148c13f0b(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_3 != 0) {
    param_1 = param_1 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      uVar1 = *(undefined4 *)(param_2 + -0xc);
      uVar2 = *(undefined4 *)(param_2 + -8);
      uVar3 = *(undefined4 *)(param_2 + -4);
      *(undefined4 *)(param_1 + -0x10) = *(undefined4 *)(param_2 + -0x10);
      *(undefined4 *)(param_1 + -0xc) = uVar1;
      *(undefined4 *)(param_1 + -8) = uVar2;
      *(undefined4 *)(param_1 + -4) = uVar3;
      FUN_1401f3da4(param_1,param_2);
      param_1 = param_1 + 0x28;
      param_2 = param_2 + 0x28;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148c13fcc FUN_148c13fcc body=140 status=ok
// SIG undefined FUN_148c13fcc(void)

undefined8 FUN_148c13fcc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  
  if (param_4 != 0) {
    lVar7 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + 8 + lVar7);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 8 + lVar7);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      FUN_1418443e8(param_2 + 0x18 + lVar7,param_3 + 0x18 + lVar7);
      lVar3 = *(longlong *)(param_3 + 0x30 + lVar7);
      if ((*(longlong *)(param_2 + 0x30 + lVar7) != lVar3) ||
         (*(int *)(param_2 + 0x38 + lVar7) != *(int *)(param_3 + 0x38 + lVar7))) {
        *(longlong *)(param_2 + 0x30 + lVar7) = lVar3;
        *(undefined4 *)(param_2 + 0x38 + lVar7) = *(undefined4 *)(param_3 + 0x38 + lVar7);
        *(undefined8 *)(param_2 + 0x40 + lVar7) = 0;
      }
      lVar7 = lVar7 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c14080 FUN_148c14080 body=59 status=ok
// SIG undefined FUN_148c14080(void)

undefined8 FUN_148c14080(longlong *param_1)

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



// FUNCTION 148c14120 FUN_148c14120 body=29 status=ok
// SIG undefined FUN_148c14120(void)

undefined8 FUN_148c14120(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c1413e FUN_148c1413e body=55 status=ok
// SIG undefined FUN_148c1413e(void)

void FUN_148c1413e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaa6c8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaa6c8 = FUN_140002ddd(FUN_1465d829b,uVar1,L"OakEquipableExecutionTypeAspect");
  }
  return;
}



// FUNCTION 148c141aa FUN_148c141aa body=66 status=ok
// SIG undefined FUN_148c141aa(void)

undefined1 FUN_148c141aa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140e8aa92(param_2,param_3);
    *(undefined1 *)(param_2 + 0x68) = *(undefined1 *)(param_3 + 0x68);
    *(undefined1 *)(param_2 + 0x70) = *(undefined1 *)(param_3 + 0x70);
    param_2 = param_2 + 0x78;
    param_3 = param_3 + 0x78;
  }
  return 1;
}



// FUNCTION 148c14214 FUN_148c14214 body=59 status=ok
// SIG undefined FUN_148c14214(void)

undefined8 FUN_148c14214(longlong *param_1)

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



// FUNCTION 148c1425a FUN_148c1425a body=32 status=ok
// SIG undefined FUN_148c1425a(void)

void FUN_148c1425a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_140485912(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 148c142de FUN_148c142de body=102 status=ok
// SIG undefined FUN_148c142de(void)

undefined8 FUN_148c142de(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar3);
      lVar2 = param_2 + 8 + lVar3;
      *(undefined4 *)(lVar2 + -8) = *puVar1;
      FUN_140e8aa92(lVar2,puVar1 + 2);
      *(undefined1 *)(lVar2 + 0x68) = *(undefined1 *)(puVar1 + 0x1c);
      *(undefined1 *)(lVar2 + 0x70) = *(undefined1 *)(puVar1 + 0x1e);
      lVar3 = lVar3 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c1436c FUN_148c1436c body=59 status=ok
// SIG undefined FUN_148c1436c(void)

undefined8 FUN_148c1436c(longlong *param_1)

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



// FUNCTION 148c143b8 FUN_148c143b8 body=39 status=ok
// SIG undefined FUN_148c143b8(void)

void FUN_148c143b8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x80) == '\x01') {
    FUN_140485912(param_2 + 8);
    *(undefined1 *)(param_2 + 0x80) = 0;
  }
  return;
}



// FUNCTION 148c1446c FUN_148c1446c body=59 status=ok
// SIG undefined FUN_148c1446c(void)

undefined8 FUN_148c1446c(longlong *param_1)

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



// FUNCTION 148c145a0 FUN_148c145a0 body=59 status=ok
// SIG undefined FUN_148c145a0(void)

undefined8 FUN_148c145a0(longlong *param_1)

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



// FUNCTION 148c14640 FUN_148c14640 body=29 status=ok
// SIG undefined FUN_148c14640(void)

undefined8 FUN_148c14640(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c1465e FUN_148c1465e body=37 status=ok
// SIG undefined FUN_148c1465e(void)

void FUN_148c1465e(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xf8);
  FUN_148c147da(param_2);
  return;
}



// FUNCTION 148c146b0 FUN_148c146b0 body=63 status=ok
// SIG undefined FUN_148c146b0(void)

undefined1 FUN_148c146b0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148c1491c(param_2,param_3);
    param_3 = param_3 + 0xf8;
    param_2 = param_2 + 0xf8;
  }
  return 1;
}



// FUNCTION 148c14718 FUN_148c14718 body=59 status=ok
// SIG undefined FUN_148c14718(void)

undefined8 FUN_148c14718(longlong *param_1)

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



// FUNCTION 148c14764 FUN_148c14764 body=40 status=ok
// SIG undefined FUN_148c14764(void)

void FUN_148c14764(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf8) == '\x01') {
    FUN_148c148aa(param_2);
    *(undefined1 *)(param_2 + 0xf8) = 0;
  }
  return;
}



// FUNCTION 148c147da FUN_148c147da body=113 status=ok
// SIG undefined FUN_148c147da(void)

undefined8 * FUN_148c147da(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b754c40;
  *(undefined1 *)(param_1 + 3) = 0;
  FUN_144a5dc74(param_1 + 4);
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0xf00d1e03;
  param_1[9] = 0;
  FUN_144928b90(param_1 + 10,0);
  FUN_144928b90(param_1 + 0x11,0);
  FUN_144928b90(param_1 + 0x18,0);
  return param_1;
}



// FUNCTION 148c1484c FUN_148c1484c body=38 status=ok
// SIG undefined FUN_148c1484c(void)

undefined8 FUN_148c1484c(undefined8 param_1,int param_2)

{
  FUN_148c148aa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c14872 FUN_148c14872 body=55 status=ok
// SIG undefined FUN_148c14872(void)

void FUN_148c14872(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaa7c8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaa7c8 = FUN_140002ddd(FUN_1465d8787,uVar1,L"OakFactionDef");
  }
  return;
}



// FUNCTION 148c148aa FUN_148c148aa body=114 status=ok
// SIG undefined FUN_148c148aa(void)

void FUN_148c148aa(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b754c40;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[4] + 0x10))();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 148c1491c FUN_148c1491c body=249 status=ok
// SIG undefined FUN_148c1491c(void)

longlong FUN_148c1491c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_141289ada(param_1 + 8,param_2 + 8);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
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
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  if ((*(longlong *)(param_1 + 0x38) != *(longlong *)(param_2 + 0x38)) ||
     (*(int *)(param_1 + 0x40) != *(int *)(param_2 + 0x40))) {
    *(longlong *)(param_1 + 0x38) = *(longlong *)(param_2 + 0x38);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  FUN_1447715ec(param_1 + 0x60,param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  FUN_1447715ec(param_1 + 0x98,param_2 + 0x98);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 200);
  FUN_1447715ec(param_1 + 0xd0,param_2 + 0xd0);
  return param_1;
}



// FUNCTION 148c14a86 FUN_148c14a86 body=360 status=ok
// SIG undefined FUN_148c14a86(void)

void FUN_148c14a86(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [44];
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_38 = 0;
  FUN_1446f4b16();
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
  puVar3 = &local_30;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = (**(code **)(*param_1 + 0x9b8))(param_1,puVar3,local_38,local_3c != 0);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c14c24 FUN_148c14c24 body=389 status=ok
// SIG undefined FUN_148c14c24(void)

void FUN_148c14c24(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  longlong local_48 [5];
  
  local_48[4] = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48[2] = 0;
  local_48[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 2);
  }
  plVar1 = local_48 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar2 = local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148cd5760(&local_58,plVar1,plVar2);
  if (&local_58 == param_3) {
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_58;
    local_58 = 0;
    *(undefined4 *)(param_3 + 1) = local_50;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_4c;
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[4] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c14daa FUN_148c14daa body=265 status=ok
// SIG undefined FUN_148c14daa(void)

void FUN_148c14daa(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  plVar1 = &local_28;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148cd5688(&local_38,plVar1);
  if (&local_38 == param_3) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    local_38 = 0;
    *(undefined4 *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  FUN_14587d987(local_28,uStack_20 & 0xffffffff);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c14eb4 FUN_148c14eb4 body=265 status=ok
// SIG undefined FUN_148c14eb4(void)

void FUN_148c14eb4(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  plVar1 = &local_28;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148cd56f4(&local_38,plVar1);
  if (&local_38 == param_3) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    local_38 = 0;
    *(undefined4 *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  FUN_14587d987(local_28,uStack_20 & 0xffffffff);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c14fd4 FUN_148c14fd4 body=268 status=ok
// SIG undefined FUN_148c14fd4(void)

void FUN_148c14fd4(longlong *param_1,longlong param_2)

{
  undefined1 auStack_58 [44];
  int local_2c;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x798))(param_1,local_28,local_2c != 0);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c150e2 FUN_148c150e2 body=92 status=ok
// SIG undefined FUN_148c150e2(void)

void FUN_148c150e2(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cbaac00);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c15140 FUN_148c15140 body=160 status=ok
// SIG undefined FUN_148c15140(void)

void FUN_148c15140(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x788))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c151e2 FUN_148c151e2 body=154 status=ok
// SIG undefined FUN_148c151e2(void)

void FUN_148c151e2(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  local_50 = FUN_14477b664(uVar1);
  local_48 = param_2[2];
  local_40 = param_3;
  local_38 = param_4;
  uVar1 = FUN_14477b072(param_1,DAT_14cbaac10);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_58);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c1527e FUN_148c1527e body=341 status=ok
// SIG undefined FUN_148c1527e(void)

void FUN_148c1527e(longlong *param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x790))(param_1,&local_38,local_40,local_48);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c153da FUN_148c153da body=361 status=ok
// SIG undefined FUN_148c153da(void)

void FUN_148c153da(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [36];
  int local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_40 = 0;
  local_38 = 0x3860a972;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_44 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  puVar2 = &local_40;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x7b8))(param_1,local_28,puVar2,local_44 != 0);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148c155ba FUN_148c155ba body=45 status=ok
// SIG undefined FUN_148c155ba(void)

longlong FUN_148c155ba(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1461a7e2c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c155f0 FUN_148c155f0 body=45 status=ok
// SIG undefined FUN_148c155f0(void)

longlong FUN_148c155f0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_141608ff2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c1561e FUN_148c1561e body=48 status=ok
// SIG undefined FUN_148c1561e(void)

longlong FUN_148c1561e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1c0;
  FUN_141608ff2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148c15756 FUN_148c15756 body=39 status=ok
// SIG undefined FUN_148c15756(void)

undefined8 FUN_148c15756(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c157a6 FUN_148c157a6 body=59 status=ok
// SIG undefined FUN_148c157a6(void)

undefined8 FUN_148c157a6(longlong *param_1)

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



// FUNCTION 148c15920 FUN_148c15920 body=39 status=ok
// SIG undefined FUN_148c15920(void)

undefined8 FUN_148c15920(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 148c15970 FUN_148c15970 body=59 status=ok
// SIG undefined FUN_148c15970(void)

undefined8 FUN_148c15970(longlong *param_1)

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



// FUNCTION 148c15bae FUN_148c15bae body=68 status=ok
// SIG undefined FUN_148c15bae(void)

undefined8 FUN_148c15bae(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0xc0);
      lVar1 = lVar1 + 0xc0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c15c1a FUN_148c15c1a body=59 status=ok
// SIG undefined FUN_148c15c1a(void)

undefined8 FUN_148c15c1a(longlong *param_1)

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



// FUNCTION 148c15ce6 FUN_148c15ce6 body=269 status=ok
// SIG undefined FUN_148c15ce6(void)

undefined8 FUN_148c15ce6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  void *_Src;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  
  if (param_4 != 0) {
    lVar11 = 0;
    do {
      lVar1 = param_2 + lVar11;
      lVar2 = param_3 + lVar11;
      FUN_141289ada(param_2 + lVar11 + 8,param_3 + lVar11 + 8);
      lVar3 = param_2 + lVar11;
      _Src = (void *)(param_3 + 0x18 + lVar11);
      memcpy((void *)(lVar3 + 0x18),_Src,0xd8);
      FUN_148bf489a(lVar1 + 0xf0,lVar2 + 0xf0);
      memcpy((void *)(lVar1 + 0x140),(void *)(lVar2 + 0x140),0x98);
      *(undefined8 *)(lVar3 + 0x1d8) = *(undefined8 *)((longlong)_Src + 0x1c0);
      uVar4 = *(undefined4 *)((longlong)_Src + 0x1cc);
      uVar5 = *(undefined4 *)((longlong)_Src + 0x1d0);
      uVar6 = *(undefined4 *)((longlong)_Src + 0x1d4);
      *(undefined4 *)(lVar3 + 0x1e0) = *(undefined4 *)((longlong)_Src + 0x1c8);
      *(undefined4 *)(lVar3 + 0x1e4) = uVar4;
      *(undefined4 *)(lVar3 + 0x1e8) = uVar5;
      *(undefined4 *)(lVar3 + 0x1ec) = uVar6;
      FUN_144a787a6(lVar1 + 0x1f0,lVar2 + 0x1f0);
      uVar4 = *(undefined4 *)((longlong)_Src + 0x1ec);
      uVar5 = *(undefined4 *)((longlong)_Src + 0x1f0);
      uVar6 = *(undefined4 *)((longlong)_Src + 500);
      uVar7 = *(undefined4 *)((longlong)_Src + 0x1f8);
      uVar8 = *(undefined4 *)((longlong)_Src + 0x1fc);
      uVar9 = *(undefined4 *)((longlong)_Src + 0x200);
      uVar10 = *(undefined4 *)((longlong)_Src + 0x204);
      *(undefined4 *)(lVar3 + 0x200) = *(undefined4 *)((longlong)_Src + 0x1e8);
      *(undefined4 *)(lVar3 + 0x204) = uVar4;
      *(undefined4 *)(lVar3 + 0x208) = uVar5;
      *(undefined4 *)(lVar3 + 0x20c) = uVar6;
      *(undefined4 *)(lVar3 + 0x210) = uVar7;
      *(undefined4 *)(lVar3 + 0x214) = uVar8;
      *(undefined4 *)(lVar3 + 0x218) = uVar9;
      *(undefined4 *)(lVar3 + 0x21c) = uVar10;
      *(undefined4 *)(lVar3 + 0x220) = *(undefined4 *)((longlong)_Src + 0x208);
      lVar11 = lVar11 + 0x228;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148c15e1c FUN_148c15e1c body=59 status=ok
// SIG undefined FUN_148c15e1c(void)

undefined8 FUN_148c15e1c(longlong *param_1)

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


