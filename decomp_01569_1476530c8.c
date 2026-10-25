// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1476530c8 FUN_1476530c8 body=110 status=ok
// SIG undefined FUN_1476530c8(void)

undefined8 * FUN_1476530c8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c4ef0;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    *(undefined1 *)(param_1 + 0x11) = 0;
  }
  if (*(char *)(param_1 + 0xe) == '\x01') {
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  if (*(char *)(param_1 + 0xb) == '\x01') {
    *(undefined1 *)(param_1 + 0xb) = 0;
  }
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (*(int *)((longlong)param_1 + 0x24) != -1) {
    *(undefined8 *)((longlong)param_1 + 0x24) = 0xffffffff;
  }
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147653136 FUN_147653136 body=190 status=ok
// SIG undefined FUN_147653136(void)

void FUN_147653136(undefined4 *param_1,undefined4 *param_2,undefined2 *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 *param_6,undefined4 *param_7)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  cVar1 = *(char *)(param_2 + 5);
  *(char *)(param_1 + 5) = cVar1;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(param_2 + 3);
    *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_2 + 1);
    *(undefined8 *)(param_1 + 3) = uVar2;
  }
  *(undefined2 *)(param_1 + 6) = *param_3;
  if (*(int *)(param_3 + 2) == -1) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined8 *)(param_3 + 2);
  }
  *(undefined8 *)(param_1 + 7) = uVar2;
  param_1[10] = *param_4;
  cVar1 = *(char *)(param_4 + 4);
  *(char *)(param_1 + 0xe) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_4 + 2);
  }
  param_1[0x10] = *param_5;
  cVar1 = *(char *)(param_5 + 4);
  *(char *)(param_1 + 0x14) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_5 + 2);
  }
  param_1[0x16] = *param_6;
  cVar1 = *(char *)(param_6 + 4);
  *(char *)(param_1 + 0x1a) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_6 + 2);
  }
  param_1[0x1c] = *param_7;
  cVar1 = *(char *)(param_7 + 4);
  *(char *)(param_1 + 0x20) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_7 + 2);
  }
  return;
}



// FUNCTION 1476531f4 FUN_1476531f4 body=104 status=ok
// SIG undefined FUN_1476531f4(void)

void FUN_1476531f4(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfd;
  puVar2 = (undefined8 *)FUN_14001cc68(0x98,8);
  *param_1 = puVar2;
  bVar1 = *(byte *)(param_1 + 8);
  *(byte *)(param_1 + 8) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = puVar2;
  }
  *param_1 = &PTR_FUN_14a4c4ef0;
  FUN_14765325c(param_1 + 1,param_2 + 8);
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x90);
  *param_1 = &PTR_FUN_14a4c78a0;
  return;
}



// FUNCTION 14765325c FUN_14765325c body=162 status=ok
// SIG undefined FUN_14765325c(void)

void FUN_14765325c(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  cVar1 = *(char *)(param_2 + 5);
  *(char *)(param_1 + 5) = cVar1;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(param_2 + 3);
    *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_2 + 1);
    *(undefined8 *)(param_1 + 3) = uVar2;
  }
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_2 + 6);
  if (param_2[7] == -1) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 7);
  }
  *(undefined8 *)(param_1 + 7) = uVar2;
  param_1[10] = param_2[10];
  cVar1 = *(char *)(param_2 + 0xe);
  *(char *)(param_1 + 0xe) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  }
  param_1[0x10] = param_2[0x10];
  cVar1 = *(char *)(param_2 + 0x14);
  *(char *)(param_1 + 0x14) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  }
  param_1[0x16] = param_2[0x16];
  cVar1 = *(char *)(param_2 + 0x1a);
  *(char *)(param_1 + 0x1a) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  }
  param_1[0x1c] = param_2[0x1c];
  cVar1 = *(char *)(param_2 + 0x20);
  *(char *)(param_1 + 0x20) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
  }
  return;
}



// FUNCTION 1476532fe FUN_1476532fe body=52 status=ok
// SIG undefined FUN_1476532fe(void)

undefined8 * FUN_1476532fe(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c4f90;
  FUN_147611d3e(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147653332 FUN_147653332 body=233 status=ok
// SIG undefined FUN_147653332(void)

void FUN_147653332(undefined4 *param_1,undefined4 *param_2,undefined2 *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  cVar1 = *(char *)(param_2 + 5);
  *(char *)(param_1 + 5) = cVar1;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(param_2 + 3);
    *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_2 + 1);
    *(undefined8 *)(param_1 + 3) = uVar2;
  }
  *(undefined2 *)(param_1 + 6) = *param_3;
  if (*(int *)(param_3 + 2) == -1) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined8 *)(param_3 + 2);
  }
  *(undefined8 *)(param_1 + 7) = uVar2;
  param_1[10] = *param_4;
  cVar1 = *(char *)(param_4 + 4);
  *(char *)(param_1 + 0xe) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_4 + 2);
  }
  param_1[0x10] = *param_5;
  cVar1 = *(char *)(param_5 + 4);
  *(char *)(param_1 + 0x14) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_5 + 2);
  }
  param_1[0x16] = *param_6;
  cVar1 = *(char *)(param_6 + 4);
  *(char *)(param_1 + 0x1a) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_6 + 2);
  }
  param_1[0x1c] = *param_7;
  cVar1 = *(char *)(param_7 + 4);
  *(char *)(param_1 + 0x20) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_7 + 2);
  }
  param_1[0x22] = *param_8;
  cVar1 = *(char *)(param_8 + 4);
  *(char *)(param_1 + 0x26) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_8 + 2);
  }
  return;
}



// FUNCTION 14765341c FUN_14765341c body=52 status=ok
// SIG undefined FUN_14765341c(void)

undefined8 * FUN_14765341c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c4f70;
  FUN_147611922(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147653450 FUN_147653450 body=276 status=ok
// SIG undefined FUN_147653450(void)

void FUN_147653450(undefined4 *param_1,undefined4 *param_2,undefined2 *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,
                  undefined4 *param_9)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  cVar1 = *(char *)(param_2 + 5);
  *(char *)(param_1 + 5) = cVar1;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(param_2 + 3);
    *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_2 + 1);
    *(undefined8 *)(param_1 + 3) = uVar2;
  }
  *(undefined2 *)(param_1 + 6) = *param_3;
  if (*(int *)(param_3 + 2) == -1) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined8 *)(param_3 + 2);
  }
  *(undefined8 *)(param_1 + 7) = uVar2;
  param_1[10] = *param_4;
  cVar1 = *(char *)(param_4 + 4);
  *(char *)(param_1 + 0xe) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_4 + 2);
  }
  param_1[0x10] = *param_5;
  cVar1 = *(char *)(param_5 + 4);
  *(char *)(param_1 + 0x14) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_5 + 2);
  }
  param_1[0x16] = *param_6;
  cVar1 = *(char *)(param_6 + 4);
  *(char *)(param_1 + 0x1a) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_6 + 2);
  }
  param_1[0x1c] = *param_7;
  cVar1 = *(char *)(param_7 + 4);
  *(char *)(param_1 + 0x20) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_7 + 2);
  }
  param_1[0x22] = *param_8;
  cVar1 = *(char *)(param_8 + 4);
  *(char *)(param_1 + 0x26) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_8 + 2);
  }
  param_1[0x28] = *param_9;
  cVar1 = *(char *)(param_9 + 4);
  *(char *)(param_1 + 0x2c) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x2a) = *(undefined8 *)(param_9 + 2);
  }
  return;
}



// FUNCTION 147653564 FUN_147653564 body=52 status=ok
// SIG undefined FUN_147653564(void)

undefined8 * FUN_147653564(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c4f50;
  FUN_1476114ca(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147653598 FUN_147653598 body=319 status=ok
// SIG undefined FUN_147653598(void)

void FUN_147653598(undefined4 *param_1,undefined4 *param_2,undefined2 *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,
                  undefined4 *param_9,undefined4 *param_10)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  cVar1 = *(char *)(param_2 + 5);
  *(char *)(param_1 + 5) = cVar1;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(param_2 + 3);
    *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_2 + 1);
    *(undefined8 *)(param_1 + 3) = uVar2;
  }
  *(undefined2 *)(param_1 + 6) = *param_3;
  if (*(int *)(param_3 + 2) == -1) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined8 *)(param_3 + 2);
  }
  *(undefined8 *)(param_1 + 7) = uVar2;
  param_1[10] = *param_4;
  cVar1 = *(char *)(param_4 + 4);
  *(char *)(param_1 + 0xe) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_4 + 2);
  }
  param_1[0x10] = *param_5;
  cVar1 = *(char *)(param_5 + 4);
  *(char *)(param_1 + 0x14) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_5 + 2);
  }
  param_1[0x16] = *param_6;
  cVar1 = *(char *)(param_6 + 4);
  *(char *)(param_1 + 0x1a) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_6 + 2);
  }
  param_1[0x1c] = *param_7;
  cVar1 = *(char *)(param_7 + 4);
  *(char *)(param_1 + 0x20) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_7 + 2);
  }
  param_1[0x22] = *param_8;
  cVar1 = *(char *)(param_8 + 4);
  *(char *)(param_1 + 0x26) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_8 + 2);
  }
  param_1[0x28] = *param_9;
  cVar1 = *(char *)(param_9 + 4);
  *(char *)(param_1 + 0x2c) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x2a) = *(undefined8 *)(param_9 + 2);
  }
  param_1[0x2e] = *param_10;
  cVar1 = *(char *)(param_10 + 4);
  *(char *)(param_1 + 0x32) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_10 + 2);
  }
  return;
}



// FUNCTION 1476536d8 FUN_1476536d8 body=52 status=ok
// SIG undefined FUN_1476536d8(void)

undefined8 * FUN_1476536d8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c4f30;
  FUN_147611038(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14765370c FUN_14765370c body=362 status=ok
// SIG undefined FUN_14765370c(void)

void FUN_14765370c(undefined4 *param_1,undefined4 *param_2,undefined2 *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,
                  undefined4 *param_9,undefined4 *param_10,undefined4 *param_11)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  cVar1 = *(char *)(param_2 + 5);
  *(char *)(param_1 + 5) = cVar1;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(param_2 + 3);
    *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_2 + 1);
    *(undefined8 *)(param_1 + 3) = uVar2;
  }
  *(undefined2 *)(param_1 + 6) = *param_3;
  if (*(int *)(param_3 + 2) == -1) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined8 *)(param_3 + 2);
  }
  *(undefined8 *)(param_1 + 7) = uVar2;
  param_1[10] = *param_4;
  cVar1 = *(char *)(param_4 + 4);
  *(char *)(param_1 + 0xe) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_4 + 2);
  }
  param_1[0x10] = *param_5;
  cVar1 = *(char *)(param_5 + 4);
  *(char *)(param_1 + 0x14) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_5 + 2);
  }
  param_1[0x16] = *param_6;
  cVar1 = *(char *)(param_6 + 4);
  *(char *)(param_1 + 0x1a) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_6 + 2);
  }
  param_1[0x1c] = *param_7;
  cVar1 = *(char *)(param_7 + 4);
  *(char *)(param_1 + 0x20) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_7 + 2);
  }
  param_1[0x22] = *param_8;
  cVar1 = *(char *)(param_8 + 4);
  *(char *)(param_1 + 0x26) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_8 + 2);
  }
  param_1[0x28] = *param_9;
  cVar1 = *(char *)(param_9 + 4);
  *(char *)(param_1 + 0x2c) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x2a) = *(undefined8 *)(param_9 + 2);
  }
  param_1[0x2e] = *param_10;
  cVar1 = *(char *)(param_10 + 4);
  *(char *)(param_1 + 0x32) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_10 + 2);
  }
  param_1[0x34] = *param_11;
  cVar1 = *(char *)(param_11 + 4);
  *(char *)(param_1 + 0x38) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x36) = *(undefined8 *)(param_11 + 2);
  }
  return;
}



// FUNCTION 147653876 FUN_147653876 body=52 status=ok
// SIG undefined FUN_147653876(void)

undefined8 * FUN_147653876(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c4f10;
  FUN_147610b6a(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476538aa FUN_1476538aa body=405 status=ok
// SIG undefined FUN_1476538aa(void)

void FUN_1476538aa(undefined4 *param_1,undefined4 *param_2,undefined2 *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,
                  undefined4 *param_9,undefined4 *param_10,undefined4 *param_11,undefined4 *param_12
                  )

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  cVar1 = *(char *)(param_2 + 5);
  *(char *)(param_1 + 5) = cVar1;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(param_2 + 3);
    *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_2 + 1);
    *(undefined8 *)(param_1 + 3) = uVar2;
  }
  *(undefined2 *)(param_1 + 6) = *param_3;
  if (*(int *)(param_3 + 2) == -1) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined8 *)(param_3 + 2);
  }
  *(undefined8 *)(param_1 + 7) = uVar2;
  param_1[10] = *param_4;
  cVar1 = *(char *)(param_4 + 4);
  *(char *)(param_1 + 0xe) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_4 + 2);
  }
  param_1[0x10] = *param_5;
  cVar1 = *(char *)(param_5 + 4);
  *(char *)(param_1 + 0x14) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_5 + 2);
  }
  param_1[0x16] = *param_6;
  cVar1 = *(char *)(param_6 + 4);
  *(char *)(param_1 + 0x1a) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_6 + 2);
  }
  param_1[0x1c] = *param_7;
  cVar1 = *(char *)(param_7 + 4);
  *(char *)(param_1 + 0x20) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_7 + 2);
  }
  param_1[0x22] = *param_8;
  cVar1 = *(char *)(param_8 + 4);
  *(char *)(param_1 + 0x26) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_8 + 2);
  }
  param_1[0x28] = *param_9;
  cVar1 = *(char *)(param_9 + 4);
  *(char *)(param_1 + 0x2c) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x2a) = *(undefined8 *)(param_9 + 2);
  }
  param_1[0x2e] = *param_10;
  cVar1 = *(char *)(param_10 + 4);
  *(char *)(param_1 + 0x32) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_10 + 2);
  }
  param_1[0x34] = *param_11;
  cVar1 = *(char *)(param_11 + 4);
  *(char *)(param_1 + 0x38) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x36) = *(undefined8 *)(param_11 + 2);
  }
  param_1[0x3a] = *param_12;
  cVar1 = *(char *)(param_12 + 4);
  *(char *)(param_1 + 0x3e) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_12 + 2);
  }
  return;
}



// FUNCTION 147653a40 FUN_147653a40 body=104 status=ok
// SIG undefined FUN_147653a40(void)

void FUN_147653a40(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfd;
  puVar2 = (undefined8 *)FUN_14001cc68(0x110,8);
  *param_1 = puVar2;
  bVar1 = *(byte *)(param_1 + 8);
  *(byte *)(param_1 + 8) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = puVar2;
  }
  *param_1 = &PTR_FUN_14a4c4f10;
  FUN_147653aa8(param_1 + 1,param_2 + 8);
  *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)(param_2 + 0x108);
  *param_1 = &PTR_FUN_14a4c7940;
  return;
}



// FUNCTION 147653aa8 FUN_147653aa8 body=384 status=ok
// SIG undefined FUN_147653aa8(void)

void FUN_147653aa8(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  cVar1 = *(char *)(param_2 + 5);
  *(char *)(param_1 + 5) = cVar1;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(param_2 + 3);
    *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_2 + 1);
    *(undefined8 *)(param_1 + 3) = uVar2;
  }
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_2 + 6);
  if (param_2[7] == -1) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 7);
  }
  *(undefined8 *)(param_1 + 7) = uVar2;
  param_1[10] = param_2[10];
  cVar1 = *(char *)(param_2 + 0xe);
  *(char *)(param_1 + 0xe) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  }
  param_1[0x10] = param_2[0x10];
  cVar1 = *(char *)(param_2 + 0x14);
  *(char *)(param_1 + 0x14) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  }
  param_1[0x16] = param_2[0x16];
  cVar1 = *(char *)(param_2 + 0x1a);
  *(char *)(param_1 + 0x1a) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  }
  param_1[0x1c] = param_2[0x1c];
  cVar1 = *(char *)(param_2 + 0x20);
  *(char *)(param_1 + 0x20) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
  }
  param_1[0x22] = param_2[0x22];
  cVar1 = *(char *)(param_2 + 0x26);
  *(char *)(param_1 + 0x26) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  }
  param_1[0x28] = param_2[0x28];
  cVar1 = *(char *)(param_2 + 0x2c);
  *(char *)(param_1 + 0x2c) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x2a) = *(undefined8 *)(param_2 + 0x2a);
  }
  param_1[0x2e] = param_2[0x2e];
  cVar1 = *(char *)(param_2 + 0x32);
  *(char *)(param_1 + 0x32) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  }
  param_1[0x34] = param_2[0x34];
  cVar1 = *(char *)(param_2 + 0x38);
  *(char *)(param_1 + 0x38) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x36) = *(undefined8 *)(param_2 + 0x36);
  }
  param_1[0x3a] = param_2[0x3a];
  cVar1 = *(char *)(param_2 + 0x3e);
  *(char *)(param_1 + 0x3e) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_2 + 0x3c);
  }
  return;
}



// FUNCTION 147653c28 FUN_147653c28 body=257 status=ok
// SIG undefined FUN_147653c28(void)

void FUN_147653c28(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar4 = (undefined8 *)&local_68;
  local_28 = 0;
  FUN_147653ec6(puVar4);
  iVar2 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
    FUN_140561fb4(param_1,iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    lVar3 = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x48);
  *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) & 0xfc | 2;
  FUN_14055f024(puVar1);
  if ((local_28 & 1) != 0) {
    *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) | 1;
    *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) & 0xfd | local_28 & 2;
    *(undefined8 *)(puVar1 + 0xc) = local_38;
    *(undefined8 *)(puVar1 + 0xe) = uStack_30;
    *(undefined8 *)(puVar1 + 8) = local_48;
    *(undefined8 *)(puVar1 + 10) = uStack_40;
    *(undefined8 *)(puVar1 + 4) = local_58;
    *(undefined8 *)(puVar1 + 6) = uStack_50;
    *puVar1 = local_68;
    puVar1[1] = uStack_64;
    puVar1[2] = uStack_60;
    puVar1[3] = uStack_5c;
    local_28 = local_28 & 0xfe;
  }
  if ((local_28 & 1) != 0) {
    if ((local_28 & 2) == 0) {
      puVar4 = (undefined8 *)CONCAT44(uStack_64,local_68);
    }
    local_28 = local_28 & 0xfe;
    (**(code **)*puVar4)(puVar4,0);
    if ((local_28 & 2) == 0) {
      FUN_1400020a8(CONCAT44(uStack_64,local_68));
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147653d2a FUN_147653d2a body=153 status=ok
// SIG undefined FUN_147653d2a(void)

undefined8 *
FUN_147653d2a(longlong param_1,undefined8 *param_2,undefined2 param_3,undefined4 *param_4,
             undefined1 param_5)

{
  undefined1 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  undefined2 *local_38;
  undefined2 local_30;
  undefined1 local_2e;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = &local_30;
  local_2e = param_5;
  local_2c = *param_4;
  uStack_28 = param_4[1];
  uStack_24 = param_4[2];
  uStack_20 = param_4[3];
  local_1c = 1;
  local_40 = param_1 + 0x58;
  local_48 = param_1 + 0x40;
  uVar1 = *(undefined1 *)(param_1 + 0x78);
  local_30 = param_3;
  FUN_147654722(param_2 + 1,param_1 + 8,param_1 + 0x10,param_1 + 0x28);
  *(undefined1 *)(param_2 + 0x12) = uVar1;
  *param_2 = &PTR_FUN_14a4c7980;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147653dc4 FUN_147653dc4 body=257 status=ok
// SIG undefined FUN_147653dc4(void)

void FUN_147653dc4(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar4 = (undefined8 *)&local_68;
  local_28 = 0;
  FUN_1476547ce(puVar4);
  iVar2 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
    FUN_140561fb4(param_1,iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    lVar3 = param_1;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x48);
  *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) & 0xfc | 2;
  FUN_14055f024(puVar1);
  if ((local_28 & 1) != 0) {
    *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) | 1;
    *(byte *)(puVar1 + 0x10) = *(byte *)(puVar1 + 0x10) & 0xfd | local_28 & 2;
    *(undefined8 *)(puVar1 + 0xc) = local_38;
    *(undefined8 *)(puVar1 + 0xe) = uStack_30;
    *(undefined8 *)(puVar1 + 8) = local_48;
    *(undefined8 *)(puVar1 + 10) = uStack_40;
    *(undefined8 *)(puVar1 + 4) = local_58;
    *(undefined8 *)(puVar1 + 6) = uStack_50;
    *puVar1 = local_68;
    puVar1[1] = uStack_64;
    puVar1[2] = uStack_60;
    puVar1[3] = uStack_5c;
    local_28 = local_28 & 0xfe;
  }
  if ((local_28 & 1) != 0) {
    if ((local_28 & 2) == 0) {
      puVar4 = (undefined8 *)CONCAT44(uStack_64,local_68);
    }
    local_28 = local_28 & 0xfe;
    (**(code **)*puVar4)(puVar4,0);
    if ((local_28 & 2) == 0) {
      FUN_1400020a8(CONCAT44(uStack_64,local_68));
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147653ec6 FUN_147653ec6 body=104 status=ok
// SIG undefined FUN_147653ec6(void)

void FUN_147653ec6(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfd;
  puVar2 = (undefined8 *)FUN_14001cc68(0x98,8);
  *param_1 = puVar2;
  bVar1 = *(byte *)(param_1 + 8);
  *(byte *)(param_1 + 8) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = puVar2;
  }
  *param_1 = &PTR_FUN_14a4c79a0;
  FUN_1476540ec(param_1 + 1,param_2 + 8);
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x90);
  *param_1 = &PTR_FUN_14a4c7980;
  return;
}



// FUNCTION 147653f2e FUN_147653f2e body=95 status=ok
// SIG undefined FUN_147653f2e(void)

undefined8 * FUN_147653f2e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c79a0;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    *(undefined1 *)(param_1 + 0x11) = 0;
  }
  if (*(char *)(param_1 + 0xe) == '\x01') {
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  if (*(char *)(param_1 + 10) == '\x01') {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147653f8e FUN_147653f8e body=78 status=ok
// SIG undefined FUN_147653f8e(void)

undefined8 FUN_147653f8e(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_147654182();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147653fde FUN_147653fde body=85 status=ok
// SIG undefined FUN_147653fde(void)

void FUN_147653fde(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_1476542ba(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x90) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147654034 FUN_147654034 body=86 status=ok
// SIG undefined FUN_147654034(void)

void FUN_147654034(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_3 != 0) {
    local_18 = param_3[2];
    local_28 = (undefined4)*param_3;
    uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_20 = (undefined4)param_3[1];
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_147654334(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14765408c FUN_14765408c body=95 status=ok
// SIG undefined FUN_14765408c(void)

undefined8 * FUN_14765408c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c79a0;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    *(undefined1 *)(param_1 + 0x11) = 0;
  }
  if (*(char *)(param_1 + 0xe) == '\x01') {
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  if (*(char *)(param_1 + 10) == '\x01') {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476540ec FUN_1476540ec body=149 status=ok
// SIG undefined FUN_1476540ec(void)

void FUN_1476540ec(undefined2 *param_1,undefined2 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  cVar1 = *(char *)(param_2 + 0xc);
  *(char *)(param_1 + 0xc) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  }
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  cVar1 = *(char *)(param_2 + 0x18);
  *(char *)(param_1 + 0x18) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  }
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  cVar1 = *(char *)(param_2 + 0x24);
  *(char *)(param_1 + 0x24) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  }
  param_1[0x28] = param_2[0x28];
  cVar1 = *(char *)(param_2 + 0x34);
  *(char *)(param_1 + 0x34) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 0x32) = *(undefined4 *)(param_2 + 0x32);
    uVar2 = *(undefined8 *)(param_2 + 0x2e);
    *(undefined8 *)(param_1 + 0x2a) = *(undefined8 *)(param_2 + 0x2a);
    *(undefined8 *)(param_1 + 0x2e) = uVar2;
  }
  *(undefined4 *)(param_1 + 0x36) = *(undefined4 *)(param_2 + 0x36);
  cVar1 = *(char *)(param_2 + 0x40);
  *(char *)(param_1 + 0x40) = cVar1;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(param_2 + 0x3c);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x3c) = uVar2;
  }
  return;
}



// FUNCTION 147654182 FUN_147654182 body=311 status=ok
// SIG undefined FUN_147654182(void)

undefined2 * FUN_147654182(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_58 [2];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58[0] = param_4;
  FUN_1476542ba(local_58,param_1 + 8);
  local_48 = 0;
  local_40 = 0x200000000;
  local_80 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x90) * '\x02' + '\x01',param_4
                ,local_58);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_147654334(&local_78,param_1 + 8);
    local_78 = CONCAT44(uStack_94,local_98);
  }
  uStack_70 = uStack_90;
  uStack_6c = 1;
  FUN_14163869e(local_58,&local_78,&local_80);
  *param_2 = local_88;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476542ba FUN_1476542ba body=121 status=ok
// SIG undefined FUN_1476542ba(void)

void FUN_1476542ba(undefined8 *param_1,undefined2 *param_2)

{
  FUN_140dba9e6(*param_1,*param_2);
  if (*(char *)(param_2 + 5) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[4]);
  }
  if (*(char *)(param_2 + 0x11) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x10]);
  }
  if (*(char *)(param_2 + 0x1d) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x1c]);
  }
  FUN_140dba9e6(*param_1,param_2[0x28]);
  if (*(char *)(param_2 + 0x37) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x36]);
    return;
  }
  return;
}



// FUNCTION 147654334 FUN_147654334 body=101 status=ok
// SIG undefined FUN_147654334(void)

void FUN_147654334(undefined8 *param_1,longlong param_2)

{
  FUN_140659a1a(param_2 + 8,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x20,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x38,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659bfa(param_2 + 0x50,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659abc(param_2 + 0x6c,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 14765439a FUN_14765439a body=79 status=ok
// SIG undefined FUN_14765439a(void)

undefined8 * FUN_14765439a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c79e0;
  if (*(char *)(param_1 + 0xe) == '\x01') {
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  if (*(char *)(param_1 + 10) == '\x01') {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476543ea FUN_1476543ea body=78 status=ok
// SIG undefined FUN_1476543ea(void)

undefined8 FUN_1476543ea(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_147654536();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14765443a FUN_14765443a body=82 status=ok
// SIG undefined FUN_14765443a(void)

void FUN_14765443a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_14765466c(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x78) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14765448e FUN_14765448e body=86 status=ok
// SIG undefined FUN_14765448e(void)

void FUN_14765448e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_3 != 0) {
    local_18 = param_3[2];
    local_28 = (undefined4)*param_3;
    uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_20 = (undefined4)param_3[1];
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_1476546cc(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476544e6 FUN_1476544e6 body=79 status=ok
// SIG undefined FUN_1476544e6(void)

undefined8 * FUN_1476544e6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c79e0;
  if (*(char *)(param_1 + 0xe) == '\x01') {
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  if (*(char *)(param_1 + 10) == '\x01') {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147654536 FUN_147654536 body=308 status=ok
// SIG undefined FUN_147654536(void)

undefined2 * FUN_147654536(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_58 [2];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58[0] = param_4;
  FUN_14765466c(local_58,param_1 + 8);
  local_48 = 0;
  local_40 = 0x200000000;
  local_80 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x78) * '\x02' + '\x01',param_4
                ,local_58);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_1476546cc(&local_78,param_1 + 8);
    local_78 = CONCAT44(uStack_94,local_98);
  }
  uStack_70 = uStack_90;
  uStack_6c = 1;
  FUN_14163869e(local_58,&local_78,&local_80);
  *param_2 = local_88;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14765466c FUN_14765466c body=95 status=ok
// SIG undefined FUN_14765466c(void)

void FUN_14765466c(undefined8 *param_1,undefined2 *param_2)

{
  FUN_140dba9e6(*param_1,*param_2);
  if (*(char *)(param_2 + 5) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[4]);
  }
  if (*(char *)(param_2 + 0x11) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x10]);
  }
  if (*(char *)(param_2 + 0x1d) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x1c]);
  }
  FUN_140dba9e6(*param_1,param_2[0x28]);
  return;
}



// FUNCTION 1476546cc FUN_1476546cc body=85 status=ok
// SIG undefined FUN_1476546cc(void)

void FUN_1476546cc(undefined8 *param_1,longlong param_2)

{
  FUN_140659a1a(param_2 + 8,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x20,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x38,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659bfa(param_2 + 0x50,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 147654722 FUN_147654722 body=172 status=ok
// SIG undefined FUN_147654722(void)

void FUN_147654722(undefined2 *param_1,undefined2 *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined2 *param_6,undefined4 *param_7)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 4) = *param_3;
  cVar1 = *(char *)(param_3 + 4);
  *(char *)(param_1 + 0xc) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_3 + 2);
  }
  *(undefined4 *)(param_1 + 0x10) = *param_4;
  cVar1 = *(char *)(param_4 + 4);
  *(char *)(param_1 + 0x18) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_4 + 2);
  }
  *(undefined4 *)(param_1 + 0x1c) = *param_5;
  cVar1 = *(char *)(param_5 + 4);
  *(char *)(param_1 + 0x24) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_5 + 2);
  }
  param_1[0x28] = *param_6;
  cVar1 = *(char *)(param_6 + 0xc);
  *(char *)(param_1 + 0x34) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 0x32) = *(undefined4 *)(param_6 + 10);
    uVar2 = *(undefined8 *)(param_6 + 6);
    *(undefined8 *)(param_1 + 0x2a) = *(undefined8 *)(param_6 + 2);
    *(undefined8 *)(param_1 + 0x2e) = uVar2;
  }
  *(undefined4 *)(param_1 + 0x36) = *param_7;
  cVar1 = *(char *)(param_7 + 5);
  *(char *)(param_1 + 0x40) = cVar1;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(param_7 + 3);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_7 + 1);
    *(undefined8 *)(param_1 + 0x3c) = uVar2;
  }
  return;
}



// FUNCTION 1476547ce FUN_1476547ce body=98 status=ok
// SIG undefined FUN_1476547ce(void)

void FUN_1476547ce(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfd;
  puVar2 = (undefined8 *)FUN_14001cc68(0x78,8);
  *param_1 = puVar2;
  bVar1 = *(byte *)(param_1 + 8);
  *(byte *)(param_1 + 8) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = puVar2;
  }
  *param_1 = &PTR_FUN_14a4c7a20;
  FUN_1476549cc(param_1 + 1,param_2 + 8);
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0x70);
  *param_1 = &PTR_FUN_14a4c7a00;
  return;
}



// FUNCTION 147654830 FUN_147654830 body=79 status=ok
// SIG undefined FUN_147654830(void)

undefined8 * FUN_147654830(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c7a20;
  if (*(char *)((longlong)param_1 + 0x6c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x6c) = 0;
  }
  if (*(char *)(param_1 + 10) == '\x01') {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147654880 FUN_147654880 body=78 status=ok
// SIG undefined FUN_147654880(void)

undefined8 FUN_147654880(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_147654a3a();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476548d0 FUN_1476548d0 body=82 status=ok
// SIG undefined FUN_1476548d0(void)

void FUN_1476548d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_147654b70(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x70) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147654924 FUN_147654924 body=86 status=ok
// SIG undefined FUN_147654924(void)

void FUN_147654924(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_3 != 0) {
    local_18 = param_3[2];
    local_28 = (undefined4)*param_3;
    uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_20 = (undefined4)param_3[1];
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_147654bde(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14765497c FUN_14765497c body=79 status=ok
// SIG undefined FUN_14765497c(void)

undefined8 * FUN_14765497c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c7a20;
  if (*(char *)((longlong)param_1 + 0x6c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x6c) = 0;
  }
  if (*(char *)(param_1 + 10) == '\x01') {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476549cc FUN_1476549cc body=110 status=ok
// SIG undefined FUN_1476549cc(void)

void FUN_1476549cc(undefined2 *param_1,undefined2 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  cVar1 = *(char *)(param_2 + 0xc);
  *(char *)(param_1 + 0xc) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  }
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  cVar1 = *(char *)(param_2 + 0x18);
  *(char *)(param_1 + 0x18) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  }
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  cVar1 = *(char *)(param_2 + 0x24);
  *(char *)(param_1 + 0x24) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  }
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  cVar1 = *(char *)(param_2 + 0x32);
  *(char *)(param_1 + 0x32) = cVar1;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(param_2 + 0x2e);
    *(undefined8 *)(param_1 + 0x2a) = *(undefined8 *)(param_2 + 0x2a);
    *(undefined8 *)(param_1 + 0x2e) = uVar2;
  }
  return;
}



// FUNCTION 147654a3a FUN_147654a3a body=308 status=ok
// SIG undefined FUN_147654a3a(void)

undefined2 * FUN_147654a3a(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_58 [2];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58[0] = param_4;
  FUN_147654b70(local_58,param_1 + 8);
  local_48 = 0;
  local_40 = 0x200000000;
  local_80 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x70) * '\x02' + '\x01',param_4
                ,local_58);
  FUN_140560464(param_3,&local_98,param_4);
  if (CONCAT44(uStack_94,local_98) == 0) {
    local_78 = 0;
  }
  else {
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    FUN_147654bde(&local_78,param_1 + 8);
    local_78 = CONCAT44(uStack_94,local_98);
  }
  uStack_70 = uStack_90;
  uStack_6c = 1;
  FUN_14163869e(local_58,&local_78,&local_80);
  *param_2 = local_88;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147654b70 FUN_147654b70 body=109 status=ok
// SIG undefined FUN_147654b70(void)

void FUN_147654b70(undefined8 *param_1,undefined2 *param_2)

{
  FUN_140dba9e6(*param_1,*param_2);
  if (*(char *)(param_2 + 5) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[4]);
  }
  if (*(char *)(param_2 + 0x11) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x10]);
  }
  if (*(char *)(param_2 + 0x1d) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x1c]);
  }
  if (*(char *)(param_2 + 0x29) == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x28]);
    return;
  }
  return;
}



// FUNCTION 147654bde FUN_147654bde body=85 status=ok
// SIG undefined FUN_147654bde(void)

void FUN_147654bde(undefined8 *param_1,longlong param_2)

{
  FUN_140659a1a(param_2 + 8,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x20,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659a1a(param_2 + 0x38,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659abc(param_2 + 0x50,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 147654c34 FUN_147654c34 body=136 status=ok
// SIG undefined FUN_147654c34(void)

void FUN_147654c34(longlong param_1,int param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  int local_3c;
  undefined4 *local_38;
  int *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x78);
  local_58 = *puVar1;
  uStack_50 = puVar1[1];
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x78);
  *puVar2 = *param_3;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  local_3c = param_2;
  FUN_1410d7556(param_1 + 0x18);
  local_38 = param_3;
  local_30 = &local_3c;
  FUN_140bf3cbe(param_1 + 0x18,local_24,&local_38,0);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147654cc2 FUN_147654cc2 body=159 status=ok
// SIG undefined FUN_147654cc2(void)

void FUN_147654cc2(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  undefined **local_50;
  undefined2 local_48;
  undefined2 local_46;
  undefined2 local_40;
  longlong local_38;
  undefined1 local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(int *)(param_1 + 0x68) != 0) || (*(char *)(param_1 + 0x84) == '\x01')) {
    lVar1 = FUN_14009d2a0();
    lVar2 = FUN_14038fb82();
    local_40 = *(undefined2 *)(lVar1 + 0x7e);
    local_48 = *(undefined2 *)(lVar1 + 0x126);
    local_46 = *(undefined2 *)(lVar2 + 0xf14);
    local_30 = 1;
    local_28 = 0;
    local_50 = &PTR_FUN_14a4d6d80;
    local_38 = param_1 + 8;
    FUN_147654d62(param_4);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147654d62 FUN_147654d62 body=162 status=ok
// SIG undefined FUN_147654d62(void)

void FUN_147654d62(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  uVar4 = *(undefined2 *)(param_2 + 8);
  uVar5 = *(undefined2 *)(param_2 + 10);
  uVar6 = *(undefined2 *)(param_2 + 0x10);
  uVar2 = *(undefined1 *)(param_2 + 0x20);
  uVar8 = *(undefined8 *)(param_2 + 0x18);
  uVar3 = *(undefined1 *)(param_2 + 0x28);
  iVar7 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar7 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar7 + 1U) {
    FUN_140561fb4(param_1,iVar7);
  }
  lVar9 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    lVar9 = param_1;
  }
  puVar1 = (undefined8 *)(lVar9 + (longlong)iVar7 * 0x48);
  *(byte *)(puVar1 + 8) = *(byte *)(puVar1 + 8) & 0xfc | 2;
  FUN_14055f024(puVar1);
  *(byte *)(puVar1 + 8) = *(byte *)(puVar1 + 8) | 3;
  *puVar1 = &PTR_FUN_14a4d6d80;
  *(undefined2 *)(puVar1 + 1) = uVar4;
  *(undefined2 *)((longlong)puVar1 + 10) = uVar5;
  *(undefined2 *)(puVar1 + 2) = uVar6;
  puVar1[3] = uVar8;
  *(undefined1 *)(puVar1 + 4) = uVar2;
  *(undefined1 *)(puVar1 + 5) = uVar3;
  return;
}



// FUNCTION 147654e08 FUN_147654e08 body=23 status=ok
// SIG undefined FUN_147654e08(void)

undefined1 FUN_147654e08(longlong param_1)

{
  FUN_1476c0c44(param_1 + -0xf8);
  return 1;
}



// FUNCTION 147654e20 FUN_147654e20 body=181 status=ok
// SIG undefined FUN_147654e20(void)

void FUN_147654e20(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined **local_68;
  undefined2 local_60;
  undefined2 local_58;
  longlong local_50;
  undefined1 local_48;
  undefined1 local_40;
  undefined2 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(int *)(param_1 + 0x60) != 0) || (*(char *)(param_1 + 0x88) == '\x01')) {
    lVar1 = FUN_14009d2a0();
    lVar2 = FUN_14038fb82();
    local_60 = *(undefined2 *)(lVar2 + 0x9c);
    local_58 = *(undefined2 *)(lVar1 + 0xa2);
    local_48 = 1;
    local_40 = 0;
    local_68 = &PTR_FUN_14a4d6da0;
    local_50 = param_1 + 8;
    local_38 = local_60;
    FUN_147654ed6(&local_68,param_1 + -0xf8,param_3,param_4);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147654ed6 FUN_147654ed6 body=553 status=ok
// SIG undefined FUN_147654ed6(void)

void FUN_147654ed6(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined **local_b0;
  undefined2 local_a8;
  undefined2 local_a0;
  longlong local_98;
  char local_90;
  uint local_88;
  int local_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  undefined4 local_74;
  undefined1 local_70;
  uint local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  undefined1 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  piVar1 = *(int **)(param_3 + 8);
  if (piVar1 == (int *)0x0) {
    iVar7 = 0;
    iVar9 = 0;
    iVar10 = 0;
    iVar8 = 0;
  }
  else {
    iVar7 = *piVar1;
    iVar9 = piVar1[1];
    iVar10 = piVar1[2];
    iVar8 = piVar1[3];
  }
  local_b8 = param_4;
  lVar4 = FUN_14009d2a0();
  FUN_14038fb82();
  lVar2 = *(longlong *)(param_2 + 0x20);
  if (lVar2 != 0) {
    lVar5 = FUN_140bc7f26();
    lVar6 = (longlong)*(int *)(lVar5 + 0x38);
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + lVar6 * 8) == lVar5 + 0x30
       )) {
      cVar3 = FUN_14332cd60(param_3);
      if (cVar3 == '\0') {
        cVar3 = FUN_145e0c77a(param_3);
        if (cVar3 != '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_d8);
        }
      }
      else {
        local_a8 = *(undefined2 *)(param_1 + 8);
        local_a0 = *(undefined2 *)(param_1 + 0x10);
        local_90 = *(char *)(param_1 + 0x20);
        if (local_90 == '\x01') {
          lVar6 = *(longlong *)(param_1 + 0x18);
        }
        local_50 = *(undefined1 *)(param_1 + 0x28);
        if (local_90 != '\0') {
          local_98 = lVar6;
        }
        local_88 = CONCAT22(local_88._2_2_,*(undefined2 *)(lVar4 + 0x62));
        local_70 = 1;
        local_84 = *(int *)(lVar2 + 0x100);
        iStack_80 = *(int *)(lVar2 + 0x104);
        iStack_7c = *(int *)(lVar2 + 0x108);
        iStack_78 = *(int *)(lVar2 + 0x10c);
        local_74 = *(undefined4 *)(lVar2 + 0x110);
        local_6c = (uint)CONCAT12((iVar10 != 0 || iVar8 != 0) || (iVar9 != 0 || iVar7 != 0),
                                  *(undefined2 *)(lVar4 + 100));
        local_58 = 1;
        local_b0 = &PTR_FUN_14a4d6dc0;
        local_68 = iVar7;
        local_64 = iVar9;
        local_60 = iVar10;
        local_5c = iVar8;
        FUN_147664f18(local_b8);
      }
      goto LAB_14765502d;
    }
  }
  local_70 = *(undefined1 *)(param_1 + 0x28);
  local_a8 = *(undefined2 *)(param_1 + 8);
  local_a0 = *(undefined2 *)(param_1 + 0x10);
  local_90 = *(char *)(param_1 + 0x20);
  if (local_90 == '\x01') {
    local_98 = *(longlong *)(param_1 + 0x18);
  }
  local_88 = (uint)CONCAT12((iVar10 != 0 || iVar8 != 0) || (iVar9 != 0 || iVar7 != 0),
                            *(undefined2 *)(lVar4 + 100));
  local_74 = CONCAT31(local_74._1_3_,1);
  local_b0 = &PTR_FUN_14a4d6e00;
  local_84 = iVar7;
  iStack_80 = iVar9;
  iStack_7c = iVar10;
  iStack_78 = iVar8;
  FUN_147664fea(local_b8);
LAB_14765502d:
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147655124 FUN_147655124 body=94 status=ok
// SIG undefined FUN_147655124(void)

void FUN_147655124(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  lVar1 = FUN_144aff0e0();
  FUN_141001072(param_1,lVar1);
  if ((*(byte *)(lVar1 + 0x28) & 1) != 0) {
    FUN_14135c1a6(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147655188 FUN_147655188 body=96 status=ok
// SIG undefined FUN_147655188(void)

void FUN_147655188(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  lVar1 = FUN_144aff0e0();
  FUN_141001072(param_1,lVar1);
  if ((*(byte *)(lVar1 + 0x28) & 1) != 0) {
    FUN_1461c2626(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147655202 FUN_147655202 body=26 status=ok
// SIG undefined FUN_147655202(void)

void FUN_147655202(undefined8 param_1)

{
  FUN_147574e9a();
  FUN_14135c1a6(param_1);
  return;
}



// FUNCTION 14765521c FUN_14765521c body=700 status=ok
// SIG undefined FUN_14765521c(void)

undefined8 * FUN_14765521c(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined1 auStack_f8 [40];
  undefined8 *local_d0;
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_90;
  undefined4 uStack_8c;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(longlong *)(param_1 + 0xe0) == 0) {
    FUN_14757509a(param_1);
  }
  *param_2 = 0;
  param_2[1] = 0;
  iVar7 = *(int *)(param_1 + 0x540);
  if (iVar7 == 4) {
    plVar3 = (longlong *)FUN_14001cc68(0x28,0x10);
    lVar5 = DAT_14cab5938;
    if (DAT_14cab5938 == 0) {
      uVar4 = FUN_140d2a6db();
      lVar5 = FUN_140002ddd(FUN_14634a2d7,uVar4,L"MovieSceneVector4fKeyStruct");
      DAT_14cab5938 = lVar5;
    }
  }
  else if (iVar7 == 3) {
    plVar3 = (longlong *)FUN_14001cc68(0x28,0x10);
    lVar5 = DAT_14cab5920;
    if (DAT_14cab5920 == 0) {
      uVar4 = FUN_140d2a6db();
      lVar5 = FUN_140002ddd(FUN_14634a241,uVar4,L"MovieSceneVector3fKeyStruct");
      DAT_14cab5920 = lVar5;
    }
  }
  else {
    if (iVar7 != 2) goto LAB_1476554a8;
    plVar3 = (longlong *)FUN_14001cc68(0x28,0x10);
    lVar5 = DAT_14cab5908;
    if (DAT_14cab5908 == 0) {
      uVar4 = FUN_140d2a6db();
      lVar5 = FUN_140002ddd(FUN_14634a1ab,uVar4,L"MovieSceneVector2fKeyStruct");
      DAT_14cab5908 = lVar5;
    }
  }
  FUN_1446e6d0e(plVar3,lVar5);
  puVar6 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar6[1] = &DAT_100000001;
  *puVar6 = &PTR_FUN_14a4c7c20;
  puVar6[2] = plVar3;
  *param_2 = plVar3;
  if (puVar6 != (undefined8 *)0x0) {
    param_2[1] = puVar6;
  }
  if (plVar3 != (longlong *)0x0) {
    local_d0 = param_2;
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3);
    if (0 < *(int *)(param_1 + 0x540)) {
      iVar7 = 0;
      do {
        local_a8 = *param_3;
        uStack_a4 = param_3[1];
        uStack_a0 = param_3[2];
        uStack_9c = param_3[3];
        uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,iVar7);
        FUN_1475c5420(*(undefined8 *)(param_1 + 0xe0),local_c8,iVar7);
        FUN_1475c54c6(&local_90,local_c8,uVar4,&local_a8);
        FUN_147573770(plVar3 + 2,&local_90);
        if ((local_50 & 1) != 0) {
          puVar6 = (undefined8 *)&local_90;
          if ((local_50 & 2) == 0) {
            puVar6 = (undefined8 *)CONCAT44(uStack_8c,local_90);
          }
          local_50 = local_50 & 0xfe;
          (**(code **)*puVar6)(puVar6,0);
          if ((local_50 & 2) == 0) {
            FUN_1400020a8(CONCAT44(uStack_8c,local_90));
          }
        }
        if (local_c0 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_c0 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_c0 + 0x10))();
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(param_1 + 0x540));
    }
    FUN_1475737dc(plVar3 + 2);
    FUN_147573828(plVar3 + 2,&local_90);
    uVar2 = 0;
    if ((char)uStack_8c != '\0') {
      uVar2 = local_90;
    }
    *(undefined4 *)(plVar3 + 1) = uVar2;
    param_2 = local_d0;
  }
LAB_1476554a8:
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476554da FUN_1476554da body=23 status=ok
// SIG undefined FUN_1476554da(void)

undefined1 FUN_1476554da(longlong param_1)

{
  FUN_1476c0c44(param_1 + -0xf8);
  return 1;
}



// FUNCTION 1476554f2 FUN_1476554f2 body=26 status=ok
// SIG undefined FUN_1476554f2(void)

void FUN_1476554f2(undefined8 param_1)

{
  FUN_147574e9a();
  FUN_1461c2626(param_1);
  return;
}



// FUNCTION 14765550c FUN_14765550c body=700 status=ok
// SIG undefined FUN_14765550c(void)

undefined8 * FUN_14765550c(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined1 auStack_f8 [40];
  undefined8 *local_d0;
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_90;
  undefined4 uStack_8c;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(longlong *)(param_1 + 0xe0) == 0) {
    FUN_14757509a(param_1);
  }
  *param_2 = 0;
  param_2[1] = 0;
  iVar7 = *(int *)(param_1 + 0x560);
  if (iVar7 == 4) {
    plVar3 = (longlong *)FUN_14001cc68(0x28,0x10);
    lVar5 = DAT_14cab5998;
    if (DAT_14cab5998 == 0) {
      uVar4 = FUN_140d2a6db();
      lVar5 = FUN_140002ddd(FUN_14634a531,uVar4,L"MovieSceneVector4dKeyStruct");
      DAT_14cab5998 = lVar5;
    }
  }
  else if (iVar7 == 3) {
    plVar3 = (longlong *)FUN_14001cc68(0x28,0x10);
    lVar5 = DAT_14cab5980;
    if (DAT_14cab5980 == 0) {
      uVar4 = FUN_140d2a6db();
      lVar5 = FUN_140002ddd(FUN_14634a49b,uVar4,L"MovieSceneVector3dKeyStruct");
      DAT_14cab5980 = lVar5;
    }
  }
  else {
    if (iVar7 != 2) goto LAB_147655798;
    plVar3 = (longlong *)FUN_14001cc68(0x28,0x10);
    lVar5 = DAT_14cab5968;
    if (DAT_14cab5968 == 0) {
      uVar4 = FUN_140d2a6db();
      lVar5 = FUN_140002ddd(FUN_14634a405,uVar4,L"MovieSceneVector2DKeyStruct");
      DAT_14cab5968 = lVar5;
    }
  }
  FUN_1446e6d0e(plVar3,lVar5);
  puVar6 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar6[1] = &DAT_100000001;
  *puVar6 = &PTR_FUN_14a4c7c20;
  puVar6[2] = plVar3;
  *param_2 = plVar3;
  if (puVar6 != (undefined8 *)0x0) {
    param_2[1] = puVar6;
  }
  if (plVar3 != (longlong *)0x0) {
    local_d0 = param_2;
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3);
    if (0 < *(int *)(param_1 + 0x560)) {
      iVar7 = 0;
      do {
        local_a8 = *param_3;
        uStack_a4 = param_3[1];
        uStack_a0 = param_3[2];
        uStack_9c = param_3[3];
        uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,iVar7);
        FUN_1475bd4b6(*(undefined8 *)(param_1 + 0xe0),local_c8,iVar7);
        FUN_1476557ca(&local_90,local_c8,uVar4,&local_a8);
        FUN_147573770(plVar3 + 2,&local_90);
        if ((local_50 & 1) != 0) {
          puVar6 = (undefined8 *)&local_90;
          if ((local_50 & 2) == 0) {
            puVar6 = (undefined8 *)CONCAT44(uStack_8c,local_90);
          }
          local_50 = local_50 & 0xfe;
          (**(code **)*puVar6)(puVar6,0);
          if ((local_50 & 2) == 0) {
            FUN_1400020a8(CONCAT44(uStack_8c,local_90));
          }
        }
        if (local_c0 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_c0 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_c0 + 0x10))();
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(param_1 + 0x560));
    }
    FUN_1475737dc(plVar3 + 2);
    FUN_147573828(plVar3 + 2,&local_90);
    uVar2 = 0;
    if ((char)uStack_8c != '\0') {
      uVar2 = local_90;
    }
    *(undefined4 *)(plVar3 + 1) = uVar2;
    param_2 = local_d0;
  }
LAB_147655798:
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476557ca FUN_1476557ca body=222 status=ok
// SIG undefined FUN_1476557ca(void)

undefined8 *
FUN_1476557ca(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = *param_2;
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  local_28 = *(undefined4 *)(param_2 + 3);
  local_30 = param_2[2];
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 3;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14a4c7d60;
  param_1[3] = uVar2;
  param_1[4] = lVar1;
  param_1[5] = local_30;
  *(undefined4 *)(param_1 + 6) = local_28;
  param_1[7] = param_3;
  local_48 = *param_4;
  uStack_44 = param_4[1];
  uStack_40 = param_4[2];
  uStack_3c = param_4[3];
  uVar2 = FUN_147526316(param_2);
  FUN_1475bd3f2(&local_30,uVar2,&local_48);
  puVar3 = param_1;
  if ((*(byte *)(param_1 + 8) & 2) == 0) {
    puVar3 = (undefined8 *)*param_1;
  }
  if (&local_30 != puVar3 + 1) {
    if ((char)local_28 == '\x01') {
      puVar3[1] = local_30;
      uVar4 = 1;
    }
    else {
      if (*(char *)(puVar3 + 2) != '\x01') goto LAB_14765587d;
      uVar4 = 0;
    }
    *(undefined1 *)(puVar3 + 2) = uVar4;
  }
LAB_14765587d:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476558aa FUN_1476558aa body=23 status=ok
// SIG undefined FUN_1476558aa(void)

undefined1 FUN_1476558aa(longlong param_1)

{
  FUN_1476c0c44(param_1 + -0xf8);
  return 1;
}



// FUNCTION 1476558c2 FUN_1476558c2 body=519 status=ok
// SIG undefined FUN_1476558c2(void)

void FUN_1476558c2(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_e8 [40];
  undefined **local_c0;
  undefined2 local_b8;
  uint local_b0;
  longlong local_a8;
  undefined1 local_a0;
  uint local_98;
  longlong local_90;
  undefined1 local_88;
  uint local_80;
  longlong local_78;
  undefined1 local_70;
  uint local_68;
  longlong local_60;
  undefined1 local_58;
  undefined1 local_50;
  undefined2 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((*(int *)(param_1 + 0x468) < 1) ||
     (((((*(int *)(param_1 + 0x68) == 0 && (*(char *)(param_1 + 0x88) == '\0')) &&
        (*(int *)(param_1 + 0x180) == 0)) &&
       ((*(char *)(param_1 + 0x1a0) == '\0' && (*(int *)(param_1 + 0x298) == 0)))) &&
      ((*(char *)(param_1 + 0x2b8) == '\0' &&
       ((*(int *)(param_1 + 0x3b0) == 0 && (*(char *)(param_1 + 0x3d0) != '\x01'))))))))
  goto LAB_14765593c;
  lVar2 = FUN_14009d2a0();
  lVar3 = FUN_14038fb82();
  local_b8 = *(undefined2 *)(lVar3 + 0x60);
  uVar1 = *(uint *)(param_1 + 0x468);
  if ((int)uVar1 < 1) {
    local_b0 = (uint)*(ushort *)(lVar2 + 0x90);
LAB_147655a38:
    local_98 = (uint)*(ushort *)(lVar2 + 0x92);
LAB_147655a47:
    local_80 = (uint)*(ushort *)(lVar2 + 0x94);
LAB_147655a4f:
    local_68 = 0;
  }
  else {
    local_b0 = 0x10000;
    if (*(int *)(param_1 + 0x68) == 0) {
      local_b0 = (uint)*(byte *)(param_1 + 0x88) << 0x10;
    }
    local_b0 = *(ushort *)(lVar2 + 0x90) | local_b0;
    if (uVar1 == 1) goto LAB_147655a38;
    local_98 = 0x10000;
    if (*(int *)(param_1 + 0x180) == 0) {
      local_98 = (uint)*(byte *)(param_1 + 0x1a0) << 0x10;
    }
    local_98 = *(ushort *)(lVar2 + 0x92) | local_98;
    if (uVar1 < 3) goto LAB_147655a47;
    local_80 = 0x10000;
    if (*(int *)(param_1 + 0x298) == 0) {
      local_80 = (uint)*(byte *)(param_1 + 0x2b8) << 0x10;
    }
    local_80 = *(ushort *)(lVar2 + 0x94) | local_80;
    if (uVar1 == 3) goto LAB_147655a4f;
    if (*(int *)(param_1 + 0x3b0) == 0) {
      local_68 = (uint)*(byte *)(param_1 + 0x3d0) << 0x10;
    }
    else {
      local_68 = 0x10000;
    }
  }
  local_90 = param_1 + 0x120;
  local_78 = param_1 + 0x238;
  local_60 = param_1 + 0x350;
  local_68 = *(ushort *)(lVar2 + 0x96) | local_68;
  local_a0 = 1;
  local_88 = 1;
  local_70 = 1;
  local_58 = 1;
  local_50 = 0;
  local_c0 = &PTR_FUN_14a4c7d80;
  local_a8 = param_1 + 8;
  local_48 = local_b8;
  FUN_147655aca(&local_c0,param_1 + -0xf8,param_3,param_4);
LAB_14765593c:
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147655aca FUN_147655aca body=367 status=ok
// SIG undefined FUN_147655aca(void)

void FUN_147655aca(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_1b8 [32];
  undefined1 local_198;
  int local_188;
  int iStack_184;
  int iStack_180;
  int iStack_17c;
  undefined1 local_178 [152];
  undefined1 local_e0 [176];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  piVar1 = *(int **)(param_3 + 8);
  if (piVar1 == (int *)0x0) {
    local_188 = 0;
    iStack_184 = 0;
    iStack_180 = 0;
    iStack_17c = 0;
  }
  else {
    local_188 = *piVar1;
    iStack_184 = piVar1[1];
    iStack_180 = piVar1[2];
    iStack_17c = piVar1[3];
  }
  lVar4 = FUN_14009d2a0();
  FUN_14038fb82();
  lVar2 = *(longlong *)(param_2 + 0x20);
  if (lVar2 != 0) {
    lVar5 = FUN_140bc7f26();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) {
      cVar3 = FUN_14332cd60(param_3);
      if (cVar3 == '\0') {
        cVar3 = FUN_145e0c77a(param_3);
        if (cVar3 != '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_1b8);
        }
      }
      else {
        FUN_147665896(param_1,local_178,*(undefined2 *)(lVar4 + 0x62),lVar2 + 0x100);
        local_198 = ((iStack_184 != 0 || local_188 != 0) || iStack_180 != 0) || iStack_17c != 0;
        FUN_14766592a(local_178,local_e0,*(undefined2 *)(lVar4 + 100));
        FUN_147665794(param_4,local_e0);
      }
      goto LAB_147655bc2;
    }
  }
  local_198 = ((iStack_184 != 0 || local_188 != 0) || iStack_180 != 0) || iStack_17c != 0;
  FUN_147665ad4(param_1,local_e0,*(undefined2 *)(lVar4 + 100));
  FUN_1476659d2(param_4,local_e0);
LAB_147655bc2:
  if ((local_30 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147655c58 FUN_147655c58 body=379 status=ok
// SIG undefined FUN_147655c58(void)

undefined8 FUN_147655c58(longlong param_1,ulonglong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined1 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = param_1 + -0x208;
  uVar6 = FUN_1475545d8(param_4,param_3);
  lVar4 = *(longlong *)(param_1 + -0xb0);
  uVar2 = *(uint *)(param_1 + -0xa8);
  puVar5 = *(undefined1 **)(param_1 + -0x98);
  FUN_14073c474(lVar1,&local_58);
  if ((ulonglong)uVar2 == 0) {
    uVar9 = 1;
    if (*(char *)(param_1 + -0x9f) == '\x01') {
      uVar9 = *(undefined1 *)(param_1 + -0xa0);
    }
  }
  else {
    uVar9 = *puVar5;
    if (0 < (int)uVar2) {
      uVar10 = 0;
      do {
        uVar3 = *(uint *)(lVar4 + uVar10 * 4);
        uVar11 = (ulonglong)uVar3 << 0x20;
        if (((char)local_58 == '\x02') || ((int)(local_58 >> 0x20) < (int)uVar3)) {
          local_78 = uVar6;
          local_68 = local_58;
          local_60 = uVar11;
          FUN_1475547f4(param_4,&local_68,lVar1,uVar9);
        }
        local_58 = uVar11 | 1;
        uVar9 = puVar5[uVar10];
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
    }
    local_60 = local_50;
    local_68 = local_58;
    if ((char)local_50 != '\x02' && (char)local_58 != '\x02') {
      iVar8 = (int)(local_58 >> 0x20);
      iVar7 = (int)((ulonglong)local_50 >> 0x20);
      if ((iVar7 < iVar8) ||
         ((iVar8 == iVar7 && ((char)local_50 == '\0' || (char)local_58 == '\0'))))
      goto LAB_147655d54;
    }
    param_2 = &local_68;
  }
  local_78 = uVar6;
  FUN_1475547f4(param_4,param_2,lVar1,uVar9);
LAB_147655d54:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 147655dd8 FUN_147655dd8 body=145 status=ok
// SIG undefined FUN_147655dd8(void)

undefined8 * FUN_147655dd8(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 2);
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[7] = 0x10000000000;
  param_2[0xc] = 0x10000000000;
  param_2[0x13] = 0x10000000000;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0x18] = 0x10000000000;
  FUN_147666b72(param_2,param_2 + 3);
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  FUN_1447c44f6(param_2 + 8);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147655e76 FUN_147655e76 body=145 status=ok
// SIG undefined FUN_147655e76(void)

undefined8 * FUN_147655e76(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 2);
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[7] = 0x10000000000;
  param_2[0xc] = 0x10000000000;
  param_2[0x13] = 0x10000000000;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0x18] = 0x10000000000;
  FUN_14766802a(param_2,param_2 + 3);
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  FUN_1447c44f6(param_2 + 8);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147655f08 FUN_147655f08 body=146 status=ok
// SIG undefined FUN_147655f08(void)

undefined8 * FUN_147655f08(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 2);
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[7] = 0x10000000000;
  param_2[0xc] = 0x10000000000;
  param_2[0x13] = 0x10000000000;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0x18] = 0x10000000000;
  FUN_14766802a(param_2,param_2 + 3);
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_1447c44f6(param_2 + 3);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147655f9c FUN_147655f9c body=121 status=ok
// SIG undefined FUN_147655f9c(void)

void FUN_147655f9c(short *param_1)

{
  undefined1 auStack_108 [32];
  undefined1 local_e8 [104];
  longlong local_80;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (((*param_1 != -1) && (param_1[1] != -1)) && (param_1[2] != -1)) {
    FUN_1476685f2(local_e8);
    FUN_1433121e2(local_e8);
    if (local_80 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14765601e FUN_14765601e body=121 status=ok
// SIG undefined FUN_14765601e(void)

void FUN_14765601e(short *param_1)

{
  undefined1 auStack_108 [32];
  undefined1 local_e8 [104];
  longlong local_80;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (((*param_1 != -1) && (param_1[1] != -1)) && (param_1[2] != -1)) {
    FUN_1476692f8(local_e8);
    FUN_143312720(local_e8);
    if (local_80 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476560aa FUN_1476560aa body=213 status=ok
// SIG undefined FUN_1476560aa(void)

void FUN_1476560aa(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147669c08(*(longlong *)(param_1 + 0x28) + 0x430,&local_30,DAT_14cab5b64);
  plVar1 = local_28;
  *(undefined8 *)(param_1 + 0xe0) = local_30;
  local_30 = 0;
  plVar3 = *(longlong **)(param_1 + 0xe8);
  if (local_28 != plVar3) {
    local_28 = (longlong *)0x0;
    *(longlong **)(param_1 + 0xe8) = plVar1;
    if (plVar3 == (longlong *)0x0) goto LAB_147656172;
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
  plVar3 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
LAB_147656172:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147656192 FUN_147656192 body=676 status=ok
// SIG undefined FUN_147656192(void)

void FUN_147656192(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  uint uStack_a0;
  uint uStack_9c;
  undefined4 local_98;
  undefined4 local_94;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  uint uStack_54;
  uint local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(int *)(param_1 + 0x98) != *(int *)(param_1 + 0xc4)) {
    FUN_14766b8f4(param_1 + 0x90);
    FUN_14766ba3e(param_1 + 0x90);
  }
  plVar1 = (longlong *)(param_1 + 0x40);
  lVar2 = param_1 + 0x50;
  local_b8 = (longlong *)&DAT_100000000;
  local_a8 = 0xffffffff;
  uStack_a0 = 0;
  uStack_b0 = lVar2;
  if (*(int *)(param_1 + 0x68) == 0) {
    iVar9 = 0;
  }
  else {
    FUN_1449c0562(&local_b8);
    iVar9 = *(int *)(param_1 + 0x68);
  }
  local_78 = local_a8;
  lVar3 = local_78;
  uStack_70 = uStack_a0;
  uStack_6c = uStack_9c;
  local_88 = (undefined4)local_b8;
  uStack_84 = local_b8._4_4_;
  uStack_80 = (undefined4)uStack_b0;
  uStack_7c = uStack_b0._4_4_;
  local_78._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
  local_90 = plVar1;
  if ((local_78._4_4_ != iVar9) || (uStack_b0 != lVar2)) {
    iVar4 = local_78._4_4_;
    local_78 = lVar3;
    do {
      lVar7 = *local_90;
      lVar3 = lVar7 + (longlong)iVar4 * 0x60;
      lVar6 = lVar3 + 0x18;
      local_68 = 0x100000000;
      local_58 = 0xffffffff;
      uStack_54 = 0;
      local_50 = 0;
      local_60 = lVar6;
      if (*(int *)(lVar3 + 0x30) != 0) {
        FUN_1449c0562(&local_68);
      }
      lVar7 = lVar7 + (longlong)iVar4 * 0x60;
      plVar8 = (longlong *)(lVar7 + 8);
      uStack_a0 = local_58;
      uStack_9c = uStack_54;
      local_98 = local_50;
      local_94 = local_4c;
      uStack_b0 = local_68;
      local_a8 = local_60;
      uVar5 = *(uint *)(lVar7 + 0x30);
      local_68 = CONCAT44(1 << ((byte)uVar5 & 0x1f),(int)uVar5 >> 5);
      _local_58 = CONCAT44(uVar5,-1 << ((byte)uVar5 & 0x1f));
      local_50 = uVar5 & 0xffffffe0;
      local_b8 = plVar8;
      local_60 = lVar6;
      if (*(uint *)(lVar7 + 0x30) != uVar5) {
        FUN_1449c0562(&local_68);
        uVar5 = uStack_54;
      }
      lVar3 = local_60;
      if ((local_b8 != plVar8 || local_a8 != local_60) || uStack_9c != uVar5) {
        do {
          *(undefined1 *)(*local_b8 + 0x30 + (longlong)(int)uStack_9c * 0x40) = 0;
          uStack_a0 = uStack_a0 & ~uStack_b0._4_4_;
          FUN_1449c0562(&uStack_b0);
        } while (local_b8 != plVar8 || (local_a8 != lVar3 || uStack_9c != uVar5));
      }
      local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
      FUN_1449c0562(&local_88);
      iVar4 = local_78._4_4_;
      lVar3 = local_78;
    } while (local_90 != plVar1 ||
             (CONCAT44(uStack_7c,uStack_80) != lVar2 || local_78._4_4_ != iVar9));
  }
  local_78 = lVar3;
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147656438 FUN_147656438 body=757 status=ok
// SIG undefined FUN_147656438(void)

void FUN_147656438(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_d8 [32];
  undefined4 *local_b8;
  code **local_b0;
  longlong *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_86;
  bool bStack_85;
  ushort local_84;
  undefined4 local_82;
  undefined2 local_7e;
  byte bStack_7c;
  undefined1 uStack_7b;
  undefined2 uStack_7a;
  undefined2 uStack_78;
  undefined2 uStack_76;
  undefined1 uStack_74;
  undefined1 uStack_73;
  undefined2 uStack_72;
  undefined2 uStack_70;
  undefined2 uStack_6e;
  ushort local_6c;
  undefined2 local_6a;
  undefined2 local_68;
  ushort local_64;
  undefined4 local_60;
  undefined1 local_5c;
  code *local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (DAT_14cb0d2b0 != (longlong *)0x0) {
    cVar4 = (**(code **)(*DAT_14cb0d2b0 + 0x400))();
    if (cVar4 != '\0') {
      lVar5 = FUN_14009d2a0();
      lVar6 = FUN_14038fb82();
      local_84 = (ushort)(byte)local_84;
      FUN_14765672e(param_2,&local_8c,&local_84,param_1);
      local_82 = *(undefined4 *)(lVar6 + 0x100);
      local_84 = *(ushort *)(lVar5 + 0x4e);
      local_68 = *(undefined2 *)(lVar5 + 0x6e);
      local_6a = *(undefined2 *)(lVar5 + 0x78);
      local_6c = *(ushort *)(lVar5 + 0xe8);
      uStack_6e = *(undefined2 *)(lVar5 + 0xcc);
      uVar1 = *(undefined4 *)(lVar5 + 0xbc);
      uVar3 = *(undefined4 *)(lVar5 + 0xc4);
      local_7e = (undefined2)uVar1;
      bStack_7c = (byte)((uint)uVar1 >> 0x10);
      uStack_7b = (undefined1)((uint)uVar1 >> 0x18);
      uStack_7a = (undefined2)*(undefined4 *)(lVar5 + 0xc0);
      uStack_78 = (undefined2)((uint)*(undefined4 *)(lVar5 + 0xc0) >> 0x10);
      uStack_76 = (undefined2)uVar3;
      uStack_74 = (undefined1)((uint)uVar3 >> 0x10);
      uStack_73 = (undefined1)((uint)uVar3 >> 0x18);
      uStack_72 = (undefined2)*(undefined4 *)(lVar5 + 200);
      uStack_70 = (undefined2)((uint)*(undefined4 *)(lVar5 + 200) >> 0x10);
      local_64 = (ushort)(byte)local_64;
      local_60 = 0x6ff;
      local_5c = 0;
      local_b8 = &local_9c;
      local_9c = CONCAT22(local_9c._2_2_,local_64);
      local_58 = FUN_14766be28;
      local_50 = 3;
      local_b0 = &local_58;
      local_a8 = &local_98;
      local_98 = param_1;
      FUN_14766bba6(&local_84,&local_90,*(longlong *)(param_1 + 0x28) + 0x28,param_2);
      FUN_1406adae8(param_2,local_8c,local_90);
      local_84 = *(ushort *)(lVar5 + 0x4e);
      local_82 = CONCAT22(*(undefined2 *)(lVar6 + 0x104),*(undefined2 *)(lVar6 + 0x100));
      uStack_7b = 0;
      uStack_78 = 0x6ff;
      uStack_76 = 0;
      uStack_74 = 0;
      local_b8 = &local_a0;
      local_a0 = CONCAT22(local_a0._2_2_,(ushort)bStack_7c);
      local_58 = FUN_14766d25e;
      local_50 = 3;
      local_b0 = &local_58;
      local_a8 = &local_98;
      local_98 = param_1;
      FUN_14766cfcc(&local_84,&local_9c,*(longlong *)(param_1 + 0x28) + 0x28,param_2);
      FUN_1406adae8(param_2,local_8c,local_9c);
      local_82 = *(uint *)(lVar5 + 0x4e) << 0x10 | *(uint *)(lVar5 + 0x4e) >> 0x10;
      local_7e = *(undefined2 *)(lVar6 + 0x100);
      uVar1 = *(undefined4 *)(lVar5 + 0xbc);
      uStack_78 = *(undefined2 *)(lVar5 + 0x4a);
      bStack_7c = (byte)uVar1;
      uStack_7b = (undefined1)((uint)uVar1 >> 8);
      uStack_7a = (undefined2)((uint)uVar1 >> 0x10);
      local_6c = local_6c & 0xff00;
      uVar2 = *(uint *)(*(longlong *)(param_1 + 0x28) + 0x290);
      uStack_70 = (undefined2)uVar2;
      uStack_6e = (undefined2)(uVar2 >> 0x10);
      uStack_73 = (uVar2 & 0xfffffeff) == 1;
      local_a8 = &local_98;
      local_b8 = (undefined4 *)&local_86;
      _local_86 = CONCAT11(uStack_73,uStack_74);
      local_58 = FUN_14766d9ae;
      local_50 = 3;
      local_b0 = &local_58;
      local_98 = param_1;
      FUN_14766d716(&local_84,&local_a0,*(longlong *)(param_1 + 0x28) + 0x28,param_2);
      FUN_1406adae8(param_2,local_90,local_a0);
      FUN_1406adae8(param_2,local_9c,local_a0);
      FUN_1406adae8(param_2,local_8c,local_a0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14765672e FUN_14765672e body=272 status=ok
// SIG undefined FUN_14765672e(void)

undefined8 FUN_14765672e(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined1 **local_58;
  longlong *local_50;
  longlong *local_48;
  undefined1 *local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  local_40 = &LAB_14766bb5c;
  plVar3 = (longlong *)FUN_14001cc68(0x28,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14a4d71c0;
  local_50 = plVar3 + 2;
  plVar3[2] = (longlong)&PTR_FUN_14a4d71d8;
  plVar3[3] = param_4;
  plVar3[4] = (longlong)FUN_147656192;
  local_48 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    local_58 = &local_40;
    FUN_1406abf4a(param_1,param_2,param_3,&local_50);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    local_58 = &local_40;
    FUN_1406abf4a(param_1,param_2,param_3,&local_50);
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
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147656840 FUN_147656840 body=750 status=ok
// SIG undefined FUN_147656840(void)

void FUN_147656840(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_148 [32];
  undefined8 **local_128;
  undefined8 **local_120;
  undefined8 *local_118;
  undefined8 *local_110;
  undefined8 *local_108;
  undefined8 *local_100;
  undefined2 local_f4;
  undefined4 local_f2;
  undefined2 local_ee;
  undefined1 uStack_ec;
  undefined1 uStack_eb;
  undefined2 uStack_ea;
  undefined2 uStack_e8;
  undefined2 uStack_e6;
  undefined1 uStack_e4;
  undefined1 uStack_e3;
  undefined2 uStack_e2;
  undefined2 uStack_e0;
  undefined2 uStack_de;
  ushort local_dc;
  undefined2 local_da;
  undefined2 local_d8;
  undefined1 local_d3;
  undefined4 local_d0;
  undefined1 local_cc;
  undefined1 local_c8 [64];
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((DAT_14cb0d2b0 != (longlong *)0x0) &&
     (cVar6 = (**(code **)(*DAT_14cb0d2b0 + 0x400))(), cVar6 != '\0')) {
    lVar7 = FUN_14009d2a0();
    lVar8 = FUN_14038fb82();
    FUN_147656192(param_1);
    local_88 = 0;
    local_80 = 0x400000000;
    local_58 = 0;
    local_50 = 0x400000000;
    local_f2 = *(undefined4 *)(lVar8 + 0x100);
    local_f4 = *(undefined2 *)(lVar7 + 0x4e);
    local_d8 = *(undefined2 *)(lVar7 + 0x6e);
    local_da = *(undefined2 *)(lVar7 + 0x78);
    local_dc = *(ushort *)(lVar7 + 0xe8);
    uStack_de = *(undefined2 *)(lVar7 + 0xcc);
    uVar2 = *(undefined4 *)(lVar7 + 0xbc);
    uVar4 = *(undefined4 *)(lVar7 + 0xc4);
    local_ee = (undefined2)uVar2;
    uStack_ec = (undefined1)((uint)uVar2 >> 0x10);
    uStack_eb = (undefined1)((uint)uVar2 >> 0x18);
    uStack_ea = (undefined2)*(undefined4 *)(lVar7 + 0xc0);
    uStack_e8 = (undefined2)((uint)*(undefined4 *)(lVar7 + 0xc0) >> 0x10);
    uStack_e6 = (undefined2)uVar4;
    uStack_e4 = (undefined1)((uint)uVar4 >> 0x10);
    uStack_e3 = (undefined1)((uint)uVar4 >> 0x18);
    uStack_e2 = (undefined2)*(undefined4 *)(lVar7 + 200);
    uStack_e0 = (undefined2)((uint)*(undefined4 *)(lVar7 + 200) >> 0x10);
    local_d3 = 0;
    local_d0 = 0x6ff;
    local_cc = 0;
    local_128 = &local_108;
    local_108 = param_1;
    FUN_143307b72(&local_f4,&local_100,param_1[5] + 0x28,param_2);
    puVar5 = local_100;
    if (local_100 != (undefined8 *)0x0) {
      FUN_147552ffc(local_c8,0xffff,&local_100);
    }
    local_f4 = *(undefined2 *)(lVar7 + 0x4e);
    local_f2 = CONCAT22(*(undefined2 *)(lVar8 + 0x104),*(undefined2 *)(lVar8 + 0x100));
    uStack_eb = 0;
    uStack_e8 = 0x6ff;
    uStack_e6 = 0;
    uStack_e4 = 0;
    local_128 = &local_110;
    local_110 = param_1;
    FUN_1433080a8(&local_f4,&local_108,param_1[5] + 0x28,param_2);
    local_100 = local_108;
    local_108 = (undefined8 *)0x0;
    if (puVar5 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar5 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar5)(puVar5,1);
      }
      if (local_108 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_108 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*local_108)(local_108,1);
        }
      }
    }
    if (local_100 != (undefined8 *)0x0) {
      FUN_147552ffc(local_c8,0xffff,&local_100);
    }
    local_f2 = *(uint *)(lVar7 + 0x4e) << 0x10 | *(uint *)(lVar7 + 0x4e) >> 0x10;
    local_ee = *(undefined2 *)(lVar8 + 0x100);
    uVar2 = *(undefined4 *)(lVar7 + 0xbc);
    uStack_e8 = *(undefined2 *)(lVar7 + 0x4a);
    uStack_ec = (undefined1)uVar2;
    uStack_eb = (undefined1)((uint)uVar2 >> 8);
    uStack_ea = (undefined2)((uint)uVar2 >> 0x10);
    local_dc = local_dc & 0xff00;
    uVar3 = *(uint *)(param_1[5] + 0x290);
    uStack_e0 = (undefined2)uVar3;
    uStack_de = (undefined2)(uVar3 >> 0x10);
    uStack_e3 = (uVar3 & 0xfffffeff) == 1;
    local_128 = (undefined8 **)param_3;
    local_120 = &local_108;
    local_108 = param_1;
    FUN_1433085be(&local_f4,&local_118,param_1[5] + 0x28,local_c8);
    if (local_118 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_118 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_118)(local_118,1);
      }
    }
    if (local_100 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_100 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_100)(local_100,1);
      }
    }
    FUN_14588b8d6(local_78);
    FUN_14009d40c(local_c8);
  }
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147656b30 FUN_147656b30 body=749 status=ok
// SIG undefined FUN_147656b30(void)

longlong FUN_147656b30(longlong param_1,uint param_2,ulonglong param_3,ulonglong param_4)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  undefined4 local_c0;
  uint uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  uint local_9c;
  ulonglong local_98;
  uint *local_90;
  undefined8 *local_88;
  int local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  uint uStack_5c;
  undefined1 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar3 = FUN_144a78877(param_3 & 0xffffffff,param_3 >> 0x20);
  if (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x74)) {
    lVar6 = param_1 + 0x78;
    if (*(longlong *)(param_1 + 0x80) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x80);
    }
    iVar4 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x88) - 1U & uVar3) * 4);
    if (iVar4 != -1) {
      lVar6 = *(longlong *)(param_1 + 0x40);
      lVar9 = 0;
      do {
        lVar7 = (longlong)iVar4 * 0x60;
        lVar10 = lVar6 + lVar7;
        if ((*(int *)(lVar6 + lVar7) == (int)param_3) &&
           (*(int *)(lVar6 + 4 + lVar7) == (int)(param_3 >> 0x20))) {
          plVar8 = (longlong *)(lVar10 + 8);
          if (plVar8 == (longlong *)0x0 || lVar10 == 0) goto LAB_147656b7a;
          local_9c = param_2;
          local_98 = param_4;
          iVar4 = FUN_144a78877(param_4 & 0xffffffff,param_4 >> 0x20);
          iVar4 = FUN_147670a4c(plVar8,((param_2 & 0xffff) >> 2) + (param_2 & 0xffff) * 0x40 + iVar4
                                       + 0x9e3779b9 ^ param_2 & 0xffff,&local_9c);
          if (iVar4 != -1) {
            if (*plVar8 + (longlong)iVar4 * 0x40 != 0) {
              lVar9 = *plVar8 + (longlong)iVar4 * 0x40 + 0x10;
              cVar2 = FUN_144729dda(lVar9);
              if (cVar2 != '\0') break;
            }
          }
          lVar6 = lVar10 + 0x18;
          local_78 = 0x100000000;
          local_68 = 0xffffffff;
          uStack_60 = 0;
          uStack_70 = lVar6;
          if (*(int *)(lVar10 + 0x30) == 0) {
            iVar4 = 0;
          }
          else {
            FUN_1449c0562(&local_78);
            iVar4 = *(int *)(lVar10 + 0x30);
          }
          local_c0 = (undefined4)local_78;
          uStack_bc = local_78._4_4_;
          uStack_b8 = (undefined4)uStack_70;
          uStack_b4 = uStack_70._4_4_;
          uStack_a8 = CONCAT44(uStack_5c,uStack_60);
          local_b0 = local_68;
          uVar1 = local_b0;
          local_b0._4_4_ = (int)((ulonglong)local_68 >> 0x20);
          iVar5 = local_b0._4_4_;
          local_c8 = plVar8;
          if ((local_b0._4_4_ != iVar4) || (local_b0 = local_68, uStack_70 != lVar6))
          goto LAB_147656cfd;
          goto LAB_147656b7a;
        }
        iVar4 = *(int *)(lVar10 + 0x58);
      } while (iVar4 != -1);
      goto LAB_147656b7d;
    }
  }
  goto LAB_147656b7a;
  while( true ) {
    local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0 & ~uStack_bc);
    FUN_1449c0562(&local_c0);
    iVar5 = local_b0._4_4_;
    uVar1 = local_b0;
    if (local_c8 == plVar8 && (CONCAT44(uStack_b4,uStack_b8) == lVar6 && local_b0._4_4_ == iVar4))
    break;
LAB_147656cfd:
    local_b0 = uVar1;
    lVar10 = *local_c8;
    lVar9 = lVar10 + (longlong)iVar5 * 0x40;
    lVar7 = FUN_14479d2ce((undefined8 *)(lVar9 + 0x10));
    if ((lVar7 != 0) &&
       (cVar2 = (**(code **)(*(longlong *)(lVar7 + 0x2a8) + 0xa8))(lVar7 + 0x2a8), cVar2 == '\0')) {
      lVar10 = lVar10 + (longlong)iVar5 * 0x40;
      local_68 = *(undefined8 *)(lVar9 + 0x20);
      local_78 = *(undefined8 *)(lVar9 + 0x10);
      uStack_70 = *(longlong *)(lVar9 + 0x18);
      uStack_5c = CONCAT31(uStack_5c._1_3_,*(char *)(lVar10 + 0x2c));
      if (*(char *)(lVar10 + 0x2c) == '\0') {
        local_58 = *(undefined1 *)(lVar10 + 0x30);
        FUN_147670ab4(plVar8,lVar10);
      }
      else {
        uStack_60 = *(undefined4 *)(lVar10 + 0x28);
        local_58 = *(undefined1 *)(lVar10 + 0x30);
        FUN_147670ab4(plVar8,lVar10);
        uStack_5c = uStack_5c & 0xffffff00;
      }
      local_88 = &local_78;
      local_90 = &local_9c;
      FUN_147670c3e(plVar8,&local_7c);
      lVar9 = *plVar8 + (longlong)local_7c * 0x40 + 0x10;
      goto LAB_147656b7d;
    }
  }
LAB_147656b7a:
  lVar9 = 0;
LAB_147656b7d:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar9;
}



// FUNCTION 147656e1e FUN_147656e1e body=148 status=ok
// SIG undefined FUN_147656e1e(void)

undefined8 FUN_147656e1e(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145992be8();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147656eb4 FUN_147656eb4 body=326 status=ok
// SIG undefined FUN_147656eb4(void)

void FUN_147656eb4(longlong param_1,uint param_2,ulonglong param_3,ulonglong param_4)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_68 [44];
  uint local_3c;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = FUN_144a78877(param_3 & 0xffffffff,param_3 >> 0x20);
  if (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x74)) {
    lVar5 = param_1 + 0x78;
    if (*(longlong *)(param_1 + 0x80) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x80);
    }
    iVar3 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x88) - 1U & uVar2) * 4);
    if (iVar3 != -1) {
      lVar5 = *(longlong *)(param_1 + 0x40);
      do {
        lVar4 = (longlong)iVar3 * 0x60;
        lVar1 = lVar5 + lVar4;
        if ((*(int *)(lVar5 + lVar4) == (int)param_3) &&
           (*(int *)(lVar5 + 4 + lVar4) == (int)(param_3 >> 0x20))) {
          plVar6 = (longlong *)(lVar1 + 8);
          if (plVar6 != (longlong *)0x0 && lVar1 != 0) {
            local_3c = param_2;
            local_38 = param_4;
            iVar3 = FUN_144a78877(param_4 & 0xffffffff,param_4 >> 0x20);
            iVar3 = FUN_147670a4c(plVar6,((param_2 & 0xffff) >> 2) + (param_2 & 0xffff) * 0x40 +
                                         iVar3 + 0x9e3779b9 ^ param_2 & 0xffff,&local_3c);
            if (((iVar3 != -1) &&
                (lVar5 = (longlong)iVar3 * 0x40 + *plVar6, lVar5 != -0x10 && lVar5 != 0)) &&
               (plVar6 = (longlong *)FUN_14479d2ce(), plVar6 != (longlong *)0x0)) {
              (**(code **)(*plVar6 + 0x600))(plVar6);
            }
          }
          break;
        }
        iVar3 = *(int *)(lVar1 + 0x58);
      } while (iVar3 != -1);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147657000 FUN_147657000 body=1048 status=ok
// SIG undefined FUN_147657000(void)

void FUN_147657000(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_1a8 [32];
  undefined2 *local_188;
  undefined2 *local_180;
  undefined2 *local_178;
  undefined2 *local_170;
  undefined2 *local_168;
  undefined2 *local_160;
  undefined2 *local_158;
  undefined2 *local_150;
  undefined2 local_144;
  undefined2 local_142;
  undefined2 local_140;
  undefined1 local_13b;
  undefined4 local_138;
  undefined1 local_134;
  undefined8 local_130;
  undefined2 *local_128;
  undefined2 *local_120;
  undefined2 local_114;
  undefined2 local_112;
  undefined2 local_110;
  undefined4 local_10e;
  undefined1 local_107;
  undefined4 local_104;
  undefined1 local_100;
  undefined1 local_d0 [40];
  longlong local_a8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  lVar1 = FUN_14009d2a0();
  local_130 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x548);
  local_110 = *(undefined2 *)(lVar1 + 0x4e);
  local_10e = *(undefined4 *)(lVar1 + 0xe0);
  local_107 = 0;
  local_104 = 0x6ff;
  local_100 = 0;
  FUN_14765741a(&local_110,*(longlong *)(param_1 + 0x28) + 0x28);
  local_142 = *(undefined2 *)(lVar1 + 0xe0);
  local_144 = *(undefined2 *)(lVar1 + 0x70);
  local_140 = *(undefined2 *)(lVar1 + 0x74);
  local_13b = 0;
  local_138 = 0x6ff;
  local_134 = 0;
  local_112 = *(undefined2 *)(lVar1 + 0x11a);
  local_158 = &local_112;
  local_150 = &local_110;
  FUN_1476574f2(&local_144,&local_110);
  local_114 = *(undefined2 *)(lVar1 + 0x130);
  local_120 = &local_112;
  local_128 = &local_114;
  FUN_1447c44f6(local_d0);
  FUN_147657586(&local_110,*(longlong *)(param_1 + 0x28) + 0x28);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  local_142 = *(undefined2 *)(lVar1 + 0xe0);
  local_144 = *(undefined2 *)(lVar1 + 0x76);
  local_140 = *(undefined2 *)(lVar1 + 0x7a);
  local_13b = 0;
  local_138 = 0x6ff;
  local_134 = 0;
  local_112 = *(undefined2 *)(lVar1 + 0x11a);
  local_168 = &local_112;
  local_160 = &local_110;
  FUN_147657600(&local_144,&local_110);
  local_114 = *(undefined2 *)(lVar1 + 0x130);
  local_128 = &local_114;
  local_120 = &local_112;
  FUN_1447c44f6(local_d0);
  FUN_147657694(&local_110,*(longlong *)(param_1 + 0x28) + 0x28);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  lVar2 = -0x12;
  do {
    local_144 = *(undefined2 *)(lVar1 + 0x90 + lVar2);
    local_140 = *(undefined2 *)(lVar1 + 0xe0 + lVar2);
    local_142 = *(undefined2 *)(lVar1 + 0xe0);
    local_13b = 0;
    local_138 = 0x6ff;
    local_134 = 0;
    local_112 = *(undefined2 *)(lVar1 + 0x11a);
    local_178 = &local_112;
    local_170 = &local_110;
    FUN_14765770e(&local_144,&local_110,&local_178);
    local_114 = *(undefined2 *)(lVar1 + 0x130);
    local_128 = &local_114;
    local_120 = &local_112;
    FUN_1447c44f6(local_d0,&local_128);
    FUN_1476577a2(&local_110,*(longlong *)(param_1 + 0x28) + 0x28);
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    lVar2 = lVar2 + 2;
  } while (lVar2 != 0);
  lVar2 = 0;
  do {
    local_144 = *(undefined2 *)(lVar1 + 0x90 + lVar2 * 2);
    local_140 = *(undefined2 *)(lVar1 + 0xce + lVar2 * 2);
    local_142 = *(undefined2 *)(lVar1 + 0xe0);
    local_13b = 0;
    local_138 = 0x6ff;
    local_134 = 0;
    local_112 = *(undefined2 *)(lVar1 + 0x11a);
    local_188 = &local_112;
    local_180 = &local_110;
    FUN_14765781c(&local_144,&local_110,&local_188);
    local_114 = *(undefined2 *)(lVar1 + 0x130);
    local_128 = &local_114;
    local_120 = &local_112;
    FUN_1447c44f6(local_d0,&local_128);
    FUN_1476578b0(&local_110,*(longlong *)(param_1 + 0x28) + 0x28);
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 != 9);
  if ((local_48 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14765741a FUN_14765741a body=215 status=ok
// SIG undefined FUN_14765741a(void)

void FUN_14765741a(short *param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined8 local_c0;
  undefined8 local_98;
  longlong local_90;
  undefined8 uStack_88;
  undefined8 local_60;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (((*param_1 != -1) && (param_1[1] != -1)) && (param_1[2] != -1)) {
    local_e8 = *(undefined4 *)(param_1 + 8);
    local_f8 = *(undefined8 *)param_1;
    uStack_f0 = *(undefined8 *)(param_1 + 4);
    local_c0 = 0x10000000000;
    local_98 = 0x10000000000;
    local_60 = 0x10000000000;
    local_90 = 0;
    uStack_88 = 0;
    local_38 = 0x10000000000;
    FUN_147671ac4(&local_f8);
    local_28 = *(undefined8 *)(param_2 + 0x248);
    local_30 = param_2;
    FUN_143313e98(&local_f8,param_3);
    if (local_90 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476574f2 FUN_1476574f2 body=146 status=ok
// SIG undefined FUN_1476574f2(void)

undefined8 * FUN_1476574f2(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 2);
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[7] = 0x10000000000;
  param_2[0xc] = 0x10000000000;
  param_2[0x13] = 0x10000000000;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0x18] = 0x10000000000;
  FUN_141104392(param_2,param_2 + 3);
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_1447c44f6(param_2 + 3);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147657586 FUN_147657586 body=121 status=ok
// SIG undefined FUN_147657586(void)

void FUN_147657586(short *param_1)

{
  undefined1 auStack_108 [32];
  undefined1 local_e8 [104];
  longlong local_80;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (((*param_1 != -1) && (param_1[1] != -1)) && (param_1[2] != -1)) {
    FUN_147671e1a(local_e8);
    FUN_143313fd2(local_e8);
    if (local_80 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147657600 FUN_147657600 body=146 status=ok
// SIG undefined FUN_147657600(void)

undefined8 * FUN_147657600(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 2);
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[7] = 0x10000000000;
  param_2[0xc] = 0x10000000000;
  param_2[0x13] = 0x10000000000;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0x18] = 0x10000000000;
  FUN_1456ca5b8(param_2,param_2 + 3);
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_1447c44f6(param_2 + 3);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147657694 FUN_147657694 body=121 status=ok
// SIG undefined FUN_147657694(void)

void FUN_147657694(short *param_1)

{
  undefined1 auStack_108 [32];
  undefined1 local_e8 [104];
  longlong local_80;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (((*param_1 != -1) && (param_1[1] != -1)) && (param_1[2] != -1)) {
    FUN_14767206c(local_e8);
    FUN_143314100(local_e8);
    if (local_80 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14765770e FUN_14765770e body=146 status=ok
// SIG undefined FUN_14765770e(void)

undefined8 * FUN_14765770e(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 2);
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[7] = 0x10000000000;
  param_2[0xc] = 0x10000000000;
  param_2[0x13] = 0x10000000000;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0x18] = 0x10000000000;
  FUN_1476722c6(param_2,param_2 + 3);
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_1447c44f6(param_2 + 3);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476577a2 FUN_1476577a2 body=121 status=ok
// SIG undefined FUN_1476577a2(void)

void FUN_1476577a2(short *param_1)

{
  undefined1 auStack_108 [32];
  undefined1 local_e8 [104];
  longlong local_80;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (((*param_1 != -1) && (param_1[1] != -1)) && (param_1[2] != -1)) {
    FUN_14767236e(local_e8);
    FUN_14331422e(local_e8);
    if (local_80 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14765781c FUN_14765781c body=146 status=ok
// SIG undefined FUN_14765781c(void)

undefined8 * FUN_14765781c(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 2);
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[7] = 0x10000000000;
  param_2[0xc] = 0x10000000000;
  param_2[0x13] = 0x10000000000;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0x18] = 0x10000000000;
  FUN_147672680(param_2,param_2 + 3);
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_1447c44f6(param_2 + 3);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476578b0 FUN_1476578b0 body=121 status=ok
// SIG undefined FUN_1476578b0(void)

void FUN_1476578b0(short *param_1)

{
  undefined1 auStack_108 [32];
  undefined1 local_e8 [104];
  longlong local_80;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (((*param_1 != -1) && (param_1[1] != -1)) && (param_1[2] != -1)) {
    FUN_147672728(local_e8);
    FUN_14331435c(local_e8);
    if (local_80 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147657946 FUN_147657946 body=430 status=ok
// SIG undefined FUN_147657946(void)

float * FUN_147657946(float *param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  float fVar10;
  undefined1 auStack_68 [40];
  longlong local_40;
  float local_38;
  char local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_2 + 0x18);
  lVar3 = *param_3;
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar3);
  }
  local_38 = 0.0;
  local_34 = '\0';
  local_40 = lVar3;
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar3);
  }
  FUN_147657af6(&local_40,&local_38);
  *(undefined1 *)(param_1 + 1) = 0;
  lVar3 = (longlong)*(int *)((longlong)param_3 + 0x2c) - (longlong)(int)param_3[5];
  if (local_34 == '\0') {
    dVar7 = ((double)(int)*(undefined8 *)(param_2 + 0x18) * (double)local_38) /
            (double)(int)((ulonglong)*(undefined8 *)(param_2 + 0x18) >> 0x20);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = dVar7;
    auVar9 = roundpd(auVar9,auVar9,1);
    dVar8 = auVar9._0_8_;
    dVar7 = dVar7 - dVar8;
    if (2147483647.0 <= dVar8) {
      dVar8 = 2147483647.0;
    }
    if (dVar8 <= -2147483648.0) {
      dVar8 = -2147483648.0;
    }
    iVar4 = (int)dVar7;
    iVar5 = (int)dVar8 + iVar4;
    iVar2 = (int)lVar3;
    if (iVar5 <= iVar2) {
      if (iVar5 != iVar2) goto LAB_147657a28;
      fVar6 = (float)dVar7 - (float)iVar4;
      fVar10 = fVar6;
      if (0.99999994 <= fVar6) {
        fVar10 = 0.99999994;
      }
      fVar10 = (float)(~-(uint)(0.0 < fVar6) & (uint)fVar6 | (uint)fVar10 & -(uint)(0.0 < fVar6)) +
               0.5 + -0.5;
      if (0.99999994 <= fVar10) {
        fVar10 = 0.99999994;
      }
      if (fVar10 <= 0.0) goto LAB_147657a28;
    }
  }
  *param_1 = (float)(((double)((lVar1 >> 0x20) * lVar3) +
                     (double)((ulonglong)(double)(int)((ulonglong)lVar1 >> 0x20) &
                             0x8000000000000000)) / (double)(int)lVar1);
  *(undefined1 *)(param_1 + 1) = 1;
LAB_147657a28:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147657af6 FUN_147657af6 body=213 status=ok
// SIG undefined FUN_147657af6(void)

undefined8 FUN_147657af6(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = *param_1;
  if ((((lVar3 == 0) || (lVar1 = FUN_1411080a4(), lVar1 == 0)) ||
      (*(int *)(lVar3 + 0x38) < *(int *)(lVar1 + 0x38))) ||
     ((*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
       lVar1 + 0x30 || (lVar3 = *param_1, lVar3 == 0)))) {
LAB_147657b3b:
    uVar2 = 0;
  }
  else {
    lVar1 = FUN_1411080a4();
    if ((lVar1 == 0) ||
       ((*(int *)(lVar3 + 0x38) < *(int *)(lVar1 + 0x38) ||
        (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
         lVar1 + 0x30)))) {
      param_1 = (longlong *)0x0;
    }
    else {
      param_1 = (longlong *)*param_1;
    }
    lVar3 = param_1[0x22];
    if (lVar3 == 0) {
      (**(code **)(*param_1 + 1000))(param_1);
      lVar3 = param_1[0x22];
      if (lVar3 == 0) goto LAB_147657b3b;
    }
    FUN_147990fba(lVar3,&local_28);
    *param_2 = local_28;
    uVar2 = 1;
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 147657bcc FUN_147657bcc body=510 status=ok
// SIG undefined FUN_147657bcc(void)

void FUN_147657bcc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147672a18(*(longlong *)(param_1 + 0x28) + 0x430,&local_30,DAT_14cab5be0);
  plVar1 = local_28;
  *(undefined8 *)(param_1 + 0x40) = local_30;
  local_30 = 0;
  plVar3 = *(longlong **)(param_1 + 0x48);
  if (local_28 == plVar3) {
LAB_147657c1d:
    plVar3 = local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
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
  else {
    local_28 = (longlong *)0x0;
    *(longlong **)(param_1 + 0x48) = plVar1;
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
      goto LAB_147657c1d;
    }
  }
  FUN_14767441e(*(longlong *)(param_1 + 0x28) + 0x430,&local_30,DAT_14cab5be4);
  plVar1 = local_28;
  *(undefined8 *)(param_1 + 0x50) = local_30;
  local_30 = 0;
  plVar3 = *(longlong **)(param_1 + 0x58);
  if (local_28 == plVar3) {
LAB_147657c8f:
    plVar3 = local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
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
  else {
    local_28 = (longlong *)0x0;
    *(longlong **)(param_1 + 0x58) = plVar1;
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
      goto LAB_147657c8f;
    }
  }
  FUN_147675c26(*(longlong *)(param_1 + 0x28) + 0x430,&local_30,DAT_14cab5be8);
  plVar1 = local_28;
  *(undefined8 *)(param_1 + 0x60) = local_30;
  local_30 = 0;
  plVar3 = *(longlong **)(param_1 + 0x68);
  if (local_28 != plVar3) {
    local_28 = (longlong *)0x0;
    *(longlong **)(param_1 + 0x68) = plVar1;
    if (plVar3 == (longlong *)0x0) goto LAB_147657d6f;
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
  plVar3 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
LAB_147657d6f:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147657ddc FUN_147657ddc body=50 status=ok
// SIG undefined FUN_147657ddc(void)

void FUN_147657ddc(longlong param_1)

{
  if (*(int *)(param_1 + 0x78) == *(int *)(param_1 + 0xa4)) {
    return;
  }
  FUN_147677428(param_1 + 0x70);
  FUN_14767756c(param_1 + 0x70);
  return;
}



// FUNCTION 147657e0e FUN_147657e0e body=2846 status=ok
// SIG undefined FUN_147657e0e(void)

void FUN_147657e0e(longlong param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong *plVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong *plVar22;
  longlong lVar23;
  longlong *plVar24;
  longlong lVar25;
  ulonglong *puVar26;
  undefined1 auStack_2d8 [32];
  longlong local_2b8;
  undefined1 local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  char local_289;
  longlong local_288;
  ulonglong local_280;
  longlong local_278;
  ulonglong local_270;
  undefined4 local_264;
  longlong local_260;
  ulonglong local_258;
  longlong local_250;
  int local_244;
  longlong local_240;
  undefined8 local_238;
  longlong local_230;
  longlong local_228;
  longlong local_220;
  undefined2 *local_218;
  undefined1 *local_210;
  longlong local_208;
  longlong *local_200;
  int local_1f8;
  longlong local_1f0;
  longlong *local_1e8;
  int local_1e0;
  longlong local_1d8;
  ulonglong *local_1d0;
  undefined4 local_1c8;
  ulonglong local_1c0;
  longlong *local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  longlong local_1a0;
  longlong local_198;
  longlong local_190;
  int local_188;
  undefined1 local_17b;
  undefined2 local_17a;
  undefined1 local_178 [2];
  undefined2 local_176;
  undefined2 local_174;
  undefined4 local_172;
  undefined1 local_16b;
  undefined4 local_168;
  undefined1 local_164;
  longlong local_160;
  undefined4 local_158;
  undefined1 local_154;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  char local_134;
  undefined1 local_130 [4];
  char local_12c;
  undefined1 local_128 [2];
  short local_126;
  short local_124;
  short local_122;
  short local_120;
  undefined1 local_110 [80];
  longlong local_c0;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  lVar14 = FUN_14009d2a0();
  lVar15 = FUN_14038fb82();
  local_240 = *(longlong *)(param_1 + 0x28);
  local_220 = *(longlong *)(local_240 + 0x548);
  local_174 = *(undefined2 *)(lVar14 + 0x4a);
  local_176 = *(undefined2 *)(lVar14 + 0x4e);
  local_172 = *(undefined4 *)(lVar15 + 0x106);
  local_16b = 0;
  local_168 = 0x6ff;
  local_164 = 0;
  local_17a = *(undefined2 *)(lVar14 + 0x11a);
  local_218 = &local_17a;
  local_210 = local_178;
  local_228 = lVar14;
  FUN_14765892e(local_178,local_128);
  if ((((local_126 != -1) && (local_124 != -1)) && (local_122 != -1)) && (local_120 != -1)) {
    lVar14 = *(longlong *)(param_1 + 0x28);
    local_238 = *(undefined8 *)(lVar14 + 0x270);
    local_289 = *(char *)(lVar14 + 0x298);
    local_260 = param_1;
    FUN_14150e78a(&local_198,lVar14 + 0x28,local_110);
    local_244 = *(int *)(lVar14 + 0x38);
    if (local_188 != local_244) {
      local_240 = local_240 + 0x28;
      do {
        lVar14 = *(longlong *)(*(longlong *)(local_190 + 0x60) + (longlong)local_188 * 8);
        if (local_289 == '\0') {
          *(undefined4 *)(lVar14 + 0x14) = 0;
          lVar15 = lVar14;
        }
        else {
          lVar15 = 0;
        }
        if (*(ushort *)(lVar14 + 0xc) != 0) {
          plVar22 = *(longlong **)(lVar14 + 0x28);
          lVar18 = (ulonglong)*(ushort *)(lVar14 + 0xc) << 5;
          do {
            if (*(short *)((longlong)plVar22 + 0x1e) == local_120) goto LAB_147658024;
            plVar22 = plVar22 + 4;
            lVar18 = lVar18 + -0x20;
          } while (lVar18 != 0);
        }
        plVar22 = (longlong *)0x0;
LAB_147658024:
        iVar6 = *(int *)(lVar14 + 0x14);
        if (iVar6 == 1) {
          AcquireSRWLockExclusive((PSRWLOCK)(plVar22 + 1));
        }
        LOCK();
        *(int *)(plVar22 + 3) = (int)plVar22[3] + 1;
        UNLOCK();
        lVar18 = *plVar22;
        if (*(ushort *)(lVar14 + 0xc) != 0) {
          puVar26 = *(ulonglong **)(lVar14 + 0x28);
          lVar25 = (ulonglong)*(ushort *)(lVar14 + 0xc) << 5;
          do {
            if (*(short *)((longlong)puVar26 + 0x1e) == local_122) goto LAB_14765804d;
            puVar26 = puVar26 + 4;
            lVar25 = lVar25 + -0x20;
          } while (lVar25 != 0);
        }
        puVar26 = (ulonglong *)0x0;
LAB_14765804d:
        iVar7 = *(int *)(lVar14 + 0x14);
        if (iVar7 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(puVar26 + 1));
        }
        LOCK();
        *(int *)(puVar26 + 3) = (int)puVar26[3] + 1;
        UNLOCK();
        local_280 = *puVar26;
        if (*(ushort *)(lVar14 + 0xc) != 0) {
          plVar24 = *(longlong **)(lVar14 + 0x28);
          lVar25 = (ulonglong)*(ushort *)(lVar14 + 0xc) << 5;
          do {
            if (*(short *)((longlong)plVar24 + 0x1e) == local_124) goto LAB_14765808e;
            plVar24 = plVar24 + 4;
            lVar25 = lVar25 + -0x20;
          } while (lVar25 != 0);
        }
        plVar24 = (longlong *)0x0;
LAB_14765808e:
        iVar8 = *(int *)(lVar14 + 0x14);
        local_250 = lVar18;
        local_230 = lVar15;
        if (iVar8 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(plVar24 + 1));
        }
        LOCK();
        *(int *)(plVar24 + 3) = (int)plVar24[3] + 1;
        UNLOCK();
        lVar15 = *plVar24;
        local_270 = CONCAT44(local_270._4_4_,iVar6);
        local_288 = CONCAT44(local_288._4_4_,iVar7);
        if (*(ushort *)(lVar14 + 0xc) != 0) {
          plVar19 = *(longlong **)(lVar14 + 0x28);
          lVar18 = (ulonglong)*(ushort *)(lVar14 + 0xc) << 5;
          do {
            if (*(short *)((longlong)plVar19 + 0x1e) == local_126) goto LAB_1476580c3;
            plVar19 = plVar19 + 4;
            lVar18 = lVar18 + -0x20;
          } while (lVar18 != 0);
        }
        plVar19 = (longlong *)0x0;
LAB_1476580c3:
        iVar6 = *(int *)(lVar14 + 0x14);
        if (iVar6 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(plVar19 + 1));
        }
        LOCK();
        *(int *)(plVar19 + 3) = (int)plVar19[3] + 1;
        UNLOCK();
        local_1f0 = *plVar19;
        local_208 = *(longlong *)(lVar14 + 0x18);
        local_1c8 = (undefined4)local_288;
        local_1c0 = local_280;
        local_1b0 = local_238;
        local_1a8 = (undefined4)local_270;
        local_1a0 = local_250;
        local_270 = (ulonglong)*(ushort *)(lVar14 + 0xe);
        local_200 = plVar19;
        local_1f8 = iVar6;
        local_1e8 = plVar24;
        local_1e0 = iVar8;
        local_1d8 = lVar15;
        local_1d0 = puVar26;
        local_1b8 = plVar22;
        if (local_270 != 0) {
          local_270 = (ulonglong)((uint)*(ushort *)(lVar14 + 0xe) * 2);
          lVar14 = 0xc;
          local_250 = 0;
          uVar21 = 0;
          do {
            uVar12 = local_1c0;
            local_288 = local_1a0;
            lVar15 = *(longlong *)(local_1d8 + uVar21 * 4);
            local_280 = CONCAT62(local_280._2_6_,*(undefined2 *)(local_208 + uVar21));
            lVar18 = *(longlong *)(local_220 + 8);
            lVar20 = (ulonglong)*(ushort *)(local_1f0 + uVar21 * 2) * 0x128;
            lVar25 = *(longlong *)(lVar18 + 0x100 + lVar20);
            plVar22 = *(longlong **)(lVar18 + 0x108 + lVar20);
            if (plVar22 == (longlong *)0x0) {
              local_278 = FUN_14479d2ce(lVar25 + 0x18);
            }
            else {
              LOCK();
              *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
              UNLOCK();
              local_278 = FUN_14479d2ce(lVar25 + 0x18);
              LOCK();
              plVar24 = plVar22 + 1;
              *(int *)plVar24 = (int)*plVar24 + -1;
              UNLOCK();
              if ((int)*plVar24 == 0) {
                (**(code **)*plVar22)(plVar22);
                LOCK();
                piVar1 = (int *)((longlong)plVar22 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar22 + 0x10))(plVar22);
                }
              }
            }
            lVar25 = *(longlong *)((uVar12 - 0x30) + lVar14 * 4);
            if ((DAT_14c950c29 == '\x01') && (lVar25 != 0)) {
              FUN_1456cec3c(lVar25);
            }
            if (lVar15 == 0) {
LAB_14765837a:
              lVar23 = 0;
            }
            else {
              lVar16 = FUN_1411e5cd6();
              if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x38) < *(int *)(lVar16 + 0x38)) ||
                 (lVar23 = lVar15,
                 *(longlong *)
                  (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) +
                  (longlong)*(int *)(lVar16 + 0x38) * 8) != lVar16 + 0x30)) goto LAB_14765837a;
            }
            if (((lVar25 == 0) || (lVar16 = FUN_1411080a4(), lVar16 == 0)) ||
               (*(int *)(lVar25 + 0x38) < *(int *)(lVar16 + 0x38))) {
              lVar17 = 0;
            }
            else {
              lVar17 = 0;
              if (*(longlong *)
                   (*(longlong *)(lVar25 + 0x30) + (longlong)*(int *)(lVar16 + 0x38) * 8) ==
                  lVar16 + 0x30) {
                lVar17 = lVar25;
              }
            }
            if (((lVar23 == 0) || (lVar17 != 0)) ||
               (lVar25 = *(longlong *)(lVar23 + 0x2b8), DAT_14c950c29 != '\x01')) {
LAB_1476583c8:
              if (((lVar25 != 0) && (lVar16 = FUN_1411080a4(), lVar16 != 0)) &&
                 ((*(int *)(lVar16 + 0x38) <= *(int *)(lVar25 + 0x38) &&
                  (*(longlong *)
                    (*(longlong *)(lVar25 + 0x30) + (longlong)*(int *)(lVar16 + 0x38) * 8) ==
                   lVar16 + 0x30)))) {
                local_258 = lVar18 + lVar20;
                FUN_147657946(local_130,lVar18 + lVar20 + 0x68,uVar12 + local_250);
                uVar13 = FUN_140bbead8(local_240,local_280 & 0xffff,
                                       *(undefined2 *)(local_228 + 0x10a));
                lVar18 = local_260;
                uVar9 = *(undefined4 *)(local_258 + 0x122);
                local_17b = 0;
                if (lVar23 == 0) {
                  lVar15 = FUN_141179630(lVar15);
                  if (lVar15 != 0) {
                    local_258 = CONCAT71(local_258._1_7_,(char)uVar13);
                    if (((*(int *)(local_288 + -0x10 + lVar14 * 2) == *(int *)(uVar12 + lVar14 * 4))
                        && (*(int *)(local_288 + -0xc + lVar14 * 2) ==
                            *(int *)(uVar12 + 4 + lVar14 * 4))) &&
                       ((*(int *)(local_288 + -8 + lVar14 * 2) == *(int *)(uVar12 + 8 + lVar14 * 4)
                        && (((*(int *)(local_288 + -4 + lVar14 * 2) ==
                              *(int *)(uVar12 + 0xc + lVar14 * 4) &&
                             (lVar18 = *(longlong *)(local_288 + -0x18 + lVar14 * 2), lVar18 != 0))
                            && (*(char *)(lVar18 + 0xd0) != '\0')))))) {
                      local_264 = 0;
                    }
                    else {
                      lVar20 = local_278;
                      if (local_278 == 0) {
                        lVar20 = DAT_14c951640;
                      }
                      lVar18 = FUN_1411080a4();
                      if ((lVar18 == 0) || (*(int *)(lVar25 + 0x38) < *(int *)(lVar18 + 0x38))) {
                        lVar25 = 0;
                      }
                      else if (*(longlong *)
                                (*(longlong *)(lVar25 + 0x30) +
                                (longlong)*(int *)(lVar18 + 0x38) * 8) != lVar18 + 0x30) {
                        lVar25 = 0;
                      }
                      local_2a8 = 0;
                      uStack_2a0 = 0;
                      local_2b0 = 0;
                      local_2b8 = 0;
                      lVar18 = FUN_147677802(lVar20,lVar25,0,0);
                      local_264 = (undefined4)CONCAT71((int7)((ulonglong)lVar20 >> 8),1);
                    }
                    lVar25 = local_260;
                    uVar11 = local_280;
                    local_2b8 = lVar18;
                    local_278 = lVar18;
                    (**(code **)(*(longlong *)(*(longlong *)(local_260 + 0x40) + 0xd8) + 8))
                              (*(longlong *)(local_260 + 0x40) + 0xd8,local_280 & 0xffff,
                               local_258 & 0xff,uVar9);
                    FUN_147673e26(*(undefined8 *)(lVar25 + 0x40),&local_17b,local_278);
                    lVar18 = local_278;
                    local_2b8 = lVar15;
                    (**(code **)(*(longlong *)(*(longlong *)(lVar25 + 0x50) + 0xd8) + 8))
                              (*(longlong *)(lVar25 + 0x50) + 0xd8,uVar11 & 0xffff,local_258 & 0xff)
                    ;
                    FUN_14767577c(*(undefined8 *)(lVar25 + 0x50),&local_17b,lVar15);
                    if ((lVar18 != 0) && (DAT_14c950c29 != '\0')) {
                      FUN_1456cec3c(lVar18);
                    }
                    puVar2 = (undefined4 *)(uVar12 + lVar14 * 4);
                    puVar3 = (undefined1 *)(local_288 + lVar14 * 2);
                    *(longlong *)(puVar3 + -0x18) = lVar18;
                    uVar9 = puVar2[1];
                    uVar13 = puVar2[2];
                    uVar10 = puVar2[3];
                    *(undefined4 *)(puVar3 + -0x10) = *puVar2;
                    *(undefined4 *)(puVar3 + -0xc) = uVar9;
                    *(undefined4 *)(puVar3 + -8) = uVar13;
                    *(undefined4 *)(puVar3 + -4) = uVar10;
                    *puVar3 = 0;
                    if ((char)local_264 != '\0') {
                      local_160 = 0;
                      local_158 = *(undefined4 *)((uVar12 - 0x28) + lVar14 * 4);
                      local_154 = *(undefined1 *)((uVar12 - 0x24) + lVar14 * 4);
                      local_140 = *(undefined8 *)((uVar12 - 0x10) + lVar14 * 4);
                      puVar4 = (undefined8 *)((uVar12 - 0x20) + lVar14 * 4);
                      local_150 = *puVar4;
                      uStack_148 = puVar4[1];
                      local_134 = local_12c == '\x01';
                      FUN_14341d62a(lVar18,&local_160);
                    }
                  }
                }
                else {
                  local_2b8 = lVar23;
                  if ((((*(int *)(local_288 + -0x10 + lVar14 * 2) == *(int *)(uVar12 + lVar14 * 4))
                       && (*(int *)(local_288 + -0xc + lVar14 * 2) ==
                           *(int *)(uVar12 + 4 + lVar14 * 4))) &&
                      (*(int *)(local_288 + -8 + lVar14 * 2) == *(int *)(uVar12 + 8 + lVar14 * 4)))
                     && ((*(int *)(local_288 + -4 + lVar14 * 2) ==
                          *(int *)(uVar12 + 0xc + lVar14 * 4) &&
                         (lVar15 = *(longlong *)(local_288 + -0x18 + lVar14 * 2), lVar15 != 0)))) {
                    cVar5 = *(char *)(lVar15 + 0xd0);
                    (**(code **)(*(longlong *)(*(longlong *)(local_260 + 0x60) + 0xd8) + 8))
                              (*(longlong *)(local_260 + 0x60) + 0xd8,local_280 & 0xffff,uVar13,
                               uVar9);
                    FUN_147676f7e(*(undefined8 *)(lVar18 + 0x60),&local_17b,lVar23);
                    if (cVar5 == '\0') goto LAB_147658585;
                  }
                  else {
                    (**(code **)(*(longlong *)(*(longlong *)(local_260 + 0x60) + 0xd8) + 8))
                              (*(longlong *)(local_260 + 0x60) + 0xd8,local_280 & 0xffff,uVar13,
                               uVar9);
                    FUN_147676f7e(*(undefined8 *)(lVar18 + 0x60),&local_17b,lVar23);
LAB_147658585:
                    local_160 = 0;
                    local_158 = 0x3f800000;
                    local_154 = 0;
                    local_140 = DAT_14c846508;
                    local_150 = CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
                    uStack_148 = CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
                    local_134 = '\0';
                    if (DAT_14c950c29 == '\x01') {
                      FUN_1456cec3c(lVar25);
                    }
                    local_158 = *(undefined4 *)((uVar12 - 0x28) + lVar14 * 4);
                    local_154 = *(undefined1 *)((uVar12 - 0x24) + lVar14 * 4);
                    local_140 = *(undefined8 *)((uVar12 - 0x10) + lVar14 * 4);
                    puVar4 = (undefined8 *)((uVar12 - 0x20) + lVar14 * 4);
                    local_150 = *puVar4;
                    uStack_148 = puVar4[1];
                    if (local_12c == '\x01') {
                      local_134 = '\x01';
                    }
                    else if (local_134 == '\x01') {
                      local_134 = '\0';
                    }
                    local_160 = lVar25;
                    FUN_1479925c4(lVar23,&local_160);
                  }
                  puVar2 = (undefined4 *)(uVar12 + lVar14 * 4);
                  lVar15 = local_288 + lVar14 * 2;
                  uVar9 = puVar2[1];
                  uVar13 = puVar2[2];
                  uVar10 = puVar2[3];
                  *(undefined4 *)(lVar15 + -0x10) = *puVar2;
                  *(undefined4 *)(lVar15 + -0xc) = uVar9;
                  *(undefined4 *)(lVar15 + -8) = uVar13;
                  *(undefined4 *)(lVar15 + -4) = uVar10;
                }
              }
            }
            else if (lVar25 != 0) {
              FUN_1456cec3c(lVar25);
              lVar25 = *(longlong *)(lVar23 + 0x2b8);
              goto LAB_1476583c8;
            }
            uVar21 = uVar21 + 2;
            lVar14 = lVar14 + 0x10;
            local_250 = local_250 + 0x40;
          } while (local_270 != uVar21);
        }
        FUN_147677752(&local_208);
        if (local_230 != 0) {
          *(undefined4 *)(local_230 + 0x14) = 1;
        }
        local_188 = FUN_1403b8464(&local_198,local_188 + 1);
      } while (local_188 != local_244);
    }
    param_1 = local_260;
    if (local_198 != 0) {
      if (*(char *)(local_190 + 0x270) == '\0') {
        *(int *)(local_190 + 0x264) = *(int *)(local_190 + 0x264) + -1;
      }
      else {
        LOCK();
        *(int *)(local_190 + 0x264) = *(int *)(local_190 + 0x264) + -1;
        UNLOCK();
      }
    }
  }
  if (local_c0 != 0) {
    FUN_1400020a8();
  }
  if (*(int *)(param_1 + 0xa4) < *(int *)(param_1 + 0x78)) {
    FUN_1476589c4(param_1);
  }
  if ((local_60 ^ (ulonglong)auStack_2d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14765892e FUN_14765892e body=148 status=ok
// SIG undefined FUN_14765892e(void)

undefined8 * FUN_14765892e(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_2[2] = param_1[2];
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[7] = 0x10000000000;
  param_2[0xc] = 0x10000000000;
  param_2[0x13] = 0x10000000000;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0x18] = 0x10000000000;
  FUN_14767768a(param_2,param_2 + 3);
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_1447c44f6(param_2 + 3);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476589c4 FUN_1476589c4 body=1250 status=ok
// SIG undefined FUN_1476589c4(void)

void FUN_1476589c4(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int *piVar13;
  undefined1 auStack_178 [32];
  int *local_158;
  longlong *local_148;
  uint local_13c;
  ulonglong local_138;
  longlong local_130;
  longlong *local_128;
  longlong local_120;
  undefined8 local_118;
  int *local_110;
  int *local_108;
  longlong local_100;
  int local_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  undefined8 local_e8;
  undefined8 local_d8;
  longlong local_d0;
  int local_c8;
  longlong *local_c0;
  undefined4 local_b8;
  uint uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  uint local_a8;
  uint uStack_a4;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  uint local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_130 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x548);
  local_148 = (longlong *)(param_1 + 0x70);
  local_138 = param_1 + 0x80;
  local_98 = 0x100000000;
  local_88 = 0xffffffff;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_90 = local_138;
  if (*(int *)(param_1 + 0x98) == 0) {
    uVar9 = 0;
  }
  else {
    FUN_1449c0562(&local_98);
    uVar9 = (ulonglong)*(uint *)(param_1 + 0x98);
  }
  uStack_a0 = CONCAT44(uStack_7c,uStack_80);
  local_a8 = local_88;
  uStack_a4 = uStack_84;
  local_b8 = (undefined4)local_98;
  uStack_b4 = local_98._4_4_;
  uStack_b0 = (int)uStack_90;
  uStack_ac = uStack_90._4_4_;
  local_c0 = local_148;
  if ((uStack_84 != (uint)uVar9) || (uStack_90 != local_138)) {
    local_13c = (uint)uVar9;
    do {
      lVar11 = *local_c0;
      lVar12 = (longlong)(int)uStack_a4;
      lVar8 = *(longlong *)(local_130 + 8);
      lVar6 = (ulonglong)*(ushort *)(lVar11 + lVar12 * 0x20) * 0x128;
      lVar10 = lVar8 + lVar6;
      local_118 = *(undefined8 *)(lVar8 + 0x100 + lVar6);
      plVar3 = *(longlong **)(lVar8 + 0x108 + lVar6);
      if (plVar3 == (longlong *)0x0) {
        if (*(int *)(lVar10 + 0x88) != 0) goto LAB_147658e35;
      }
      else {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar13 = (int *)((longlong)plVar3 + 0xc);
          *piVar13 = *piVar13 + -1;
          UNLOCK();
          if (*piVar13 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
        if (*(int *)(lVar10 + 0x88) != 0) {
          LOCK();
          plVar1 = plVar3 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar13 = (int *)((longlong)plVar3 + 0xc);
            *piVar13 = *piVar13 + -1;
            UNLOCK();
            if (*piVar13 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
          goto LAB_147658e35;
        }
      }
      lVar11 = lVar11 + lVar12 * 0x20;
      lVar8 = (longlong)*(int *)(lVar11 + 0x10);
      local_128 = plVar3;
      if (lVar8 != 0) {
        piVar13 = *(int **)(lVar11 + 8);
        local_108 = piVar13 + lVar8 * 0x10;
        local_120 = lVar10;
        do {
          local_98 = 0;
          uStack_90 = 0;
          if (((piVar13[1] != 0 || *piVar13 != 0) || piVar13[2] != 0) || piVar13[3] != 0) {
            local_d8 = CONCAT44(local_d8._4_4_,*(undefined4 *)(lVar10 + 0x110));
            FUN_1405e06c2(local_118,&local_d0,piVar13,&local_d8);
            lVar11 = local_d0;
            lVar8 = (longlong)local_c8;
            if (lVar8 != 0) {
              lVar6 = 0;
              do {
                local_d8 = *(undefined8 *)(lVar11 + lVar6);
                lVar12 = FUN_14479d2ce(&local_d8);
                if (lVar12 != 0) {
                  lVar7 = FUN_1411e5cd6();
                  uVar4 = uStack_90;
                  if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar12 + 0x10) + 0x38)) &&
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
                       (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
                    uVar9 = (ulonglong)(int)uStack_90;
                    uVar5 = (int)uStack_90 + 1;
                    uStack_90 = CONCAT44(uStack_90._4_4_,uVar5);
                    if (uStack_90._4_4_ < uVar5) {
                      FUN_147677ece(&local_98,uVar4 & 0xffffffff);
                    }
                    *(longlong *)(local_98 + uVar9 * 8) = lVar12;
                  }
                }
                lVar6 = lVar6 + 8;
              } while (lVar8 * 8 != lVar6);
            }
            lVar11 = local_98;
            lVar8 = (longlong)(int)uStack_90;
            if (lVar8 != 0) {
              local_110 = piVar13 + 10;
              lVar6 = 0;
              do {
                lVar10 = *(longlong *)(lVar11 + lVar6);
                lVar12 = *(longlong *)(piVar13 + 6);
                if ((DAT_14c950c29 == '\x01') && (lVar12 != 0)) {
                  FUN_1456cec3c(lVar12);
LAB_147658c97:
                  lVar7 = FUN_1411080a4();
                  if (((lVar7 == 0) || (*(int *)(lVar12 + 0x38) < *(int *)(lVar7 + 0x38))) ||
                     (*(longlong *)
                       (*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
                      lVar7 + 0x30)) goto LAB_147658cb9;
LAB_147658cf7:
                  lVar7 = FUN_1411080a4();
                  if (((lVar7 != 0) && (*(int *)(lVar7 + 0x38) <= *(int *)(lVar12 + 0x38))) &&
                     (*(longlong *)
                       (*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
                      lVar7 + 0x30)) {
                    local_e8 = *(undefined8 *)(local_110 + 4);
                    local_f8 = *local_110;
                    iStack_f4 = local_110[1];
                    iStack_f0 = local_110[2];
                    iStack_ec = local_110[3];
                    uVar9 = CONCAT71((int7)(uVar9 >> 8),(char)piVar13[9]);
                    iVar2 = piVar13[8];
                    local_100 = lVar12;
                    if (DAT_14c950c29 == '\x01') {
                      FUN_1456cec3c(lVar12);
                    }
                    local_158 = &local_f8;
                    FUN_147992164(lVar10,&local_100,iVar2,uVar9 & 0xffffffff);
                  }
                }
                else {
                  if (lVar12 != 0) goto LAB_147658c97;
LAB_147658cb9:
                  if (DAT_14c950c29 == '\x01') {
                    if (*(longlong *)(lVar10 + 0x2b8) != 0) {
                      FUN_1456cec3c();
                      goto LAB_147658ceb;
                    }
                  }
                  else {
LAB_147658ceb:
                    lVar12 = *(longlong *)(lVar10 + 0x2b8);
                    if (lVar12 != 0) goto LAB_147658cf7;
                  }
                }
                lVar6 = lVar6 + 8;
                lVar10 = local_120;
              } while (lVar8 * 8 != lVar6);
            }
            if (local_98 != 0) {
              FUN_1400020a8(local_98);
            }
          }
          piVar13 = piVar13 + 0x10;
        } while (piVar13 != local_108);
      }
      plVar3 = local_128;
      if (local_128 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_128 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_128)(local_128);
          LOCK();
          piVar13 = (int *)((longlong)plVar3 + 0xc);
          *piVar13 = *piVar13 + -1;
          UNLOCK();
          if (*piVar13 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      local_a8 = local_a8 & ~uStack_b4;
      FUN_1449c0562(&local_b8);
      uVar9 = (ulonglong)local_13c;
    } while (local_c0 != local_148 ||
             (CONCAT44(uStack_ac,uStack_b0) != local_138 || uStack_a4 != local_13c));
  }
  FUN_147677f54(local_148);
LAB_147658e35:
  if ((local_70 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147658ea8 FUN_147658ea8 body=265 status=ok
// SIG undefined FUN_147658ea8(void)

void FUN_147658ea8(longlong param_1,uint param_2,undefined4 *param_3,undefined8 *param_4,
                  longlong *param_5)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_34 = param_2;
  plVar7 = (longlong *)FUN_1476778f0(param_1 + 0x70,param_2 & 0xffff);
  local_48 = *param_3;
  uStack_44 = param_3[1];
  uStack_40 = param_3[2];
  uStack_3c = param_3[3];
  uVar4 = *param_4;
  lVar5 = *param_5;
  if ((lVar5 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar5);
  }
  local_68 = (undefined4)param_5[1];
  uStack_64 = *(undefined4 *)((longlong)param_5 + 0xc);
  uStack_60 = (undefined4)param_5[2];
  uStack_5c = *(undefined4 *)((longlong)param_5 + 0x14);
  local_58 = (undefined4)param_5[3];
  uStack_54 = *(undefined4 *)((longlong)param_5 + 0x1c);
  uStack_50 = (undefined4)param_5[4];
  uStack_4c = *(undefined4 *)((longlong)param_5 + 0x24);
  iVar3 = (int)plVar7[1];
  *(uint *)(plVar7 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)plVar7 + 0xc) < iVar3 + 1U) {
    FUN_147677e48(plVar7,iVar3);
  }
  lVar6 = *plVar7;
  lVar8 = (longlong)iVar3 * 0x40;
  lVar1 = lVar6 + lVar8;
  puVar2 = (undefined4 *)(lVar6 + lVar8);
  *puVar2 = local_48;
  puVar2[1] = uStack_44;
  puVar2[2] = uStack_40;
  puVar2[3] = uStack_3c;
  *(undefined8 *)(lVar6 + 0x10 + lVar8) = uVar4;
  *(longlong *)(lVar6 + 0x18 + lVar8) = lVar5;
  if ((lVar5 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar5);
  }
  *(undefined4 *)(lVar1 + 0x30) = local_58;
  *(undefined4 *)(lVar1 + 0x34) = uStack_54;
  *(undefined4 *)(lVar1 + 0x38) = uStack_50;
  *(undefined4 *)(lVar1 + 0x3c) = uStack_4c;
  *(undefined4 *)(lVar1 + 0x20) = local_68;
  *(undefined4 *)(lVar1 + 0x24) = uStack_64;
  *(undefined4 *)(lVar1 + 0x28) = uStack_60;
  *(undefined4 *)(lVar1 + 0x2c) = uStack_5c;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147658fb6 FUN_147658fb6 body=207 status=ok
// SIG undefined FUN_147658fb6(void)

void FUN_147658fb6(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  undefined2 local_44;
  undefined2 local_42;
  undefined4 local_40;
  undefined1 local_3b;
  uint local_38;
  undefined1 local_34;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = FUN_14009d2a0();
  lVar3 = FUN_14038fb82();
  local_42 = *(undefined2 *)(lVar2 + 0x4a);
  local_44 = *(undefined2 *)(lVar2 + 0x4e);
  local_40 = *(undefined4 *)(lVar3 + 0x106);
  local_34 = 0;
  local_50 = param_1 + 0x28;
  local_38 = *(uint *)(*(longlong *)(param_1 + 0x28) + 0x290);
  local_3b = (local_38 & 0xfffffeff) == 1;
  local_58 = param_3;
  FUN_14330940a(&local_44,&local_30,*(longlong *)(param_1 + 0x28) + 0x28,param_2);
  if (local_30 != 0) {
    LOCK();
    piVar1 = (int *)(local_30 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_78);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476590b8 FUN_1476590b8 body=145 status=ok
// SIG undefined FUN_1476590b8(void)

int * FUN_1476590b8(longlong param_1,int *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  uVar2 = FUN_144a78877(*param_3,param_3[1]);
  iVar3 = -1;
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    lVar4 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x58);
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x60) - 1U & uVar2) * 4);
    if (iVar5 != -1) {
      do {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar5 * 0x14);
        if ((*piVar1 == *param_3) &&
           (*(int *)(*(longlong *)(param_1 + 0x18) + 4 + (longlong)iVar5 * 0x14) == param_3[1])) {
          if (piVar1 != (int *)0x0) {
            iVar3 = piVar1[2];
          }
          break;
        }
        iVar5 = piVar1[3];
      } while (iVar5 != -1);
    }
  }
  *param_2 = iVar3;
  return param_2;
}



// FUNCTION 147659158 FUN_147659158 body=300 status=ok
// SIG undefined FUN_147659158(void)

void FUN_147659158(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_c8 [32];
  ushort *local_a8;
  code **local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  longlong **local_88;
  undefined1 local_74 [4];
  undefined8 local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined2 local_58;
  undefined2 local_56;
  undefined2 local_54;
  undefined2 local_52;
  undefined1 local_50;
  undefined1 uStack_4f;
  uint local_4c;
  undefined1 local_48;
  ushort local_42;
  code *local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = FUN_14038fb82();
  lVar2 = FUN_14009d2a0();
  local_58 = *(undefined2 *)(lVar2 + 0x4a);
  local_56 = *(undefined2 *)(lVar2 + 0x4e);
  local_54 = *(undefined2 *)(lVar1 + 0xd8);
  local_52 = *(undefined2 *)(lVar2 + 0x54);
  local_48 = 0;
  local_4c = *(uint *)(param_1[5] + 0x290);
  uStack_4f = (local_4c & 0xfffffeff) == 1;
  local_68 = *(undefined8 *)(param_1[5] + 0x548);
  local_60 = param_1;
  local_70 = (**(code **)(*param_1 + 0x180))(param_1);
  local_98 = &local_70;
  local_a8 = &local_42;
  local_42 = CONCAT11(uStack_4f,local_50) | 0x200;
  local_a0 = &local_40;
  local_40 = FUN_14767e0f0;
  local_38 = 3;
  local_90 = &local_68;
  local_88 = &local_60;
  FUN_14767ddec(&local_58,local_74,param_1[5] + 0x28,param_2);
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147659286 FUN_147659286 body=632 status=ok
// SIG undefined FUN_147659286(void)

void FUN_147659286(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  longlong **local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined2 local_60;
  undefined2 uStack_5e;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined1 local_58;
  undefined1 uStack_57;
  undefined2 uStack_56;
  uint uStack_54;
  undefined1 local_50;
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar5 = *(longlong *)(param_1[5] + 0x5d8);
  puVar3 = *(undefined8 **)(param_1[5] + 0x5e0);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
    UNLOCK();
  }
  cVar4 = *(char *)(lVar5 + 0x7c);
  if (cVar4 == '\x10') {
    lVar5 = FUN_14038fb82();
    lVar6 = FUN_14009d2a0();
    local_60 = *(undefined2 *)(lVar6 + 0x4a);
    uStack_5e = *(undefined2 *)(lVar6 + 0x4e);
    uStack_5c = *(undefined2 *)(lVar5 + 0xd8);
    uStack_5a = *(undefined2 *)(lVar6 + 0x54);
    local_50 = 0;
    uStack_54 = *(uint *)(param_1[5] + 0x290);
    uStack_57 = (uStack_54 & 0xfffffeff) == 1;
    local_70 = *(undefined8 *)(param_1[5] + 0x548);
    local_68 = param_1;
    local_78 = (**(code **)(*param_1 + 0x180))(param_1);
    local_90 = &local_78;
    local_98 = param_3;
    local_88 = &local_70;
    local_80 = &local_68;
    FUN_143309fee(&local_60,&local_48,param_1[5] + 0x28,param_2);
    if (local_48 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(local_48 + 1);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)*local_48)(local_48,1);
      }
    }
  }
  else if (cVar4 == ' ') {
    if ((longlong)(int)param_1[9] != 0) {
      lVar5 = param_1[8];
      lVar6 = (longlong)(int)param_1[9] << 4;
      do {
        cVar4 = FUN_144729dda(lVar5);
        if (cVar4 != '\0') {
          cVar4 = FUN_144729dda(lVar5 + 8);
          if (cVar4 != '\0') {
            plVar7 = (longlong *)FUN_14479d2ce(lVar5);
            uVar8 = FUN_14479d2ce(lVar5 + 8);
            (**(code **)(*plVar7 + 0x310))(plVar7,uVar8,0);
          }
        }
        lVar5 = lVar5 + 0x10;
        lVar6 = lVar6 + -0x10;
      } while (lVar6 != 0);
    }
    *(undefined4 *)(param_1 + 9) = 0;
    if (*(int *)((longlong)param_1 + 0x4c) < 0) {
      FUN_14767ddbc(param_1 + 8);
    }
  }
  else if (cVar4 == '\x04') {
    FUN_14767e8ae(param_1[5] + 0x430,&local_60,DAT_14cab5cc0);
    lVar5 = FUN_14038fb82();
    lVar6 = FUN_14009d2a0();
    FUN_14765951c(CONCAT26(uStack_5a,CONCAT24(uStack_5c,CONCAT22(uStack_5e,local_60))),param_1[5],
                  *(undefined2 *)(lVar6 + 0x4a),*(undefined2 *)(lVar5 + 0xd8));
    plVar7 = (longlong *)CONCAT44(uStack_54,CONCAT22(uStack_56,CONCAT11(uStack_57,local_58)));
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar7 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar7)(plVar7);
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
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar3 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar3)(puVar3);
      LOCK();
      piVar2 = (int *)((longlong)puVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_b8);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14765951c FUN_14765951c body=205 status=ok
// SIG undefined FUN_14765951c(void)

void FUN_14765951c(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined2 param_4)

{
  longlong lVar1;
  undefined1 auStack_d8 [32];
  undefined2 local_b8;
  undefined2 *local_b0;
  undefined1 *local_a8;
  undefined2 local_9a;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined8 local_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_78 = 0x10000000000;
  local_50 = 0x10000000000;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  lVar1 = FUN_14009d2a0();
  local_9a = *(undefined2 *)(lVar1 + 0x11a);
  local_a8 = local_98;
  local_b0 = &local_9a;
  FUN_1447c44f6(local_98);
  local_b8 = param_4;
  FUN_14767fec8(param_1,param_2,local_98,param_3);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476595ee FUN_1476595ee body=113 status=ok
// SIG undefined FUN_1476595ee(void)

void FUN_1476595ee(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(short *)(param_1 + 0x14) != -1) {
    lVar1 = FUN_14479d2ce(param_1);
    if (lVar1 != 0) {
      lVar2 = FUN_14009d2a0();
      FUN_1405e0ab4(lVar1 + 0x28,*(undefined2 *)(param_1 + 0x14),*(undefined2 *)(lVar2 + 0x11c));
    }
    *(undefined2 *)(param_1 + 0x14) = 0xffff;
  }
  if (*(short *)(param_1 + 0x18) != -1) {
    lVar1 = FUN_14479d2ce(param_1 + 8);
    if (lVar1 != 0) {
      FUN_14754610e(lVar1,*(undefined4 *)(param_1 + 0x16));
    }
    *(undefined4 *)(param_1 + 0x16) = 0xffff00ff;
  }
  return;
}



// FUNCTION 147659660 FUN_147659660 body=299 status=ok
// SIG undefined FUN_147659660(void)

void FUN_147659660(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = FUN_14009d2a0();
  lVar5 = FUN_14038fb82();
  FUN_14765978c(param_1 + 0x40,param_1);
  FUN_1476820ec(*(longlong *)(param_1 + 0x28) + 0x430,&local_40,DAT_14cab5ce0);
  plVar1 = local_38;
  *(undefined8 *)(param_1 + 0x1b8) = local_40;
  local_40 = 0;
  plVar3 = *(longlong **)(param_1 + 0x1c0);
  if (local_38 != plVar3) {
    local_38 = (longlong *)0x0;
    *(longlong **)(param_1 + 0x1c0) = plVar1;
    if (plVar3 == (longlong *)0x0) goto LAB_147659712;
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
  plVar3 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
LAB_147659712:
  uVar6 = FUN_1409ee0ec(*(undefined8 *)(param_1 + 0x28));
  FUN_147659836(uVar6,&local_40,*(undefined2 *)(lVar4 + 0x4a),*(undefined2 *)(lVar5 + 0xea));
  *(undefined4 *)(param_1 + 0x1c8) = (undefined4)local_40;
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14765978c FUN_14765978c body=169 status=ok
// SIG undefined FUN_14765978c(void)

void FUN_14765978c(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x168) == '\0') {
    *(undefined1 *)(param_1 + 0x168) = 1;
    FUN_14485c47a(param_1 + 0x170);
    FUN_1476810fe(*(longlong *)(param_2 + 0x28) + 0x658,local_20,param_1,FUN_1476811e4);
    FUN_1476810fe(*(longlong *)(param_2 + 0x28) + 0x670,local_20,param_1,FUN_14768152c);
    FUN_14768171a(*(longlong *)(param_2 + 0x28) + 0x688,local_20,param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147659836 FUN_147659836 body=433 status=ok
// SIG undefined FUN_147659836(void)

void FUN_147659836(longlong param_1,int *param_2,undefined2 param_3,undefined2 param_4)

{
  longlong lVar1;
  longlong lVar2;
  void *_Dst;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_b8 [40];
  int *local_90;
  undefined2 *local_88;
  int *local_80;
  undefined2 local_74;
  undefined2 local_72;
  int local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_90 = param_2;
  FUN_1409ee236(param_1 + 0xb0);
  _Dst = (void *)CONCAT44(uStack_64,uStack_68);
  memset(_Dst,0,0x128);
  iVar3 = local_70;
  *(undefined1 *)((longlong)_Dst + 0x100) = 2;
  *(undefined8 *)((longlong)_Dst + 0x128) = 0x10000000000;
  lVar5 = (longlong)local_70;
  lVar2 = *(longlong *)(param_1 + 0xb0);
  lVar1 = lVar2 + lVar5 * 0x130;
  FUN_1409ee0a6(lVar1);
  puVar4 = (undefined8 *)(lVar2 + lVar5 * 0x130);
  *(byte *)(puVar4 + 0x20) = *(byte *)(puVar4 + 0x20) | 3;
  puVar4[5] = 0;
  *(undefined4 *)(puVar4 + 6) = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *(undefined8 *)((longlong)puVar4 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar4 + 0x3c) = 0;
  puVar4[9] = 0;
  *(undefined4 *)(puVar4 + 10) = 0;
  puVar4[0xd] = 0;
  puVar4[0xe] = 0x8000000000;
  *(undefined2 *)((longlong)puVar4 + 0x7a) = param_3;
  *(undefined2 *)((longlong)puVar4 + 0x7c) = param_4;
  *puVar4 = &PTR_FUN_14a4d8040;
  local_80 = &local_70;
  local_50 = 0x10000000000;
  local_88 = &local_74;
  local_74 = param_3;
  local_72 = param_4;
  FUN_1447c44f6(&local_70);
  if ((int *)(puVar4 + 0x21) != &local_70) {
    puVar4[0x23] = local_60;
    puVar4[0x24] = uStack_58;
    *(int *)(puVar4 + 0x21) = local_70;
    *(undefined4 *)((longlong)puVar4 + 0x10c) = uStack_6c;
    *(undefined4 *)(puVar4 + 0x22) = uStack_68;
    *(undefined4 *)((longlong)puVar4 + 0x114) = uStack_64;
    *(undefined4 *)(lVar1 + 0x128) = (undefined4)local_50;
    *(undefined4 *)(lVar1 + 300) = local_50._4_4_;
  }
  *local_90 = iVar3;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476599e8 FUN_1476599e8 body=125 status=ok
// SIG undefined FUN_1476599e8(void)

void FUN_1476599e8(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  local_20 = *(undefined8 *)(param_1 + 0x28);
  local_18 = param_1;
  FUN_147659a66(param_1 + 0x40);
  lVar1 = FUN_140e3cd36(*(undefined8 *)(param_1 + 0x28));
  if (lVar1 != 0) {
    FUN_140e3cd9a(lVar1,*(undefined4 *)(param_1 + 0x1c8));
  }
  *(undefined4 *)(param_1 + 0x1c8) = 0xffffffff;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147659a66 FUN_147659a66 body=434 status=ok
// SIG undefined FUN_147659a66(void)

void FUN_147659a66(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0xf0);
  lVar2 = param_1 + 0x100;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  iVar3 = 0;
  local_50 = lVar2;
  if (*(int *)(param_1 + 0x118) != 0) {
    FUN_1449c0562(&local_58);
    iVar3 = *(int *)(param_1 + 0x118);
  }
  local_78 = local_58;
  local_70 = local_50;
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_80 = plVar1;
  if ((iStack_44 != iVar3) || (local_50 != lVar2)) {
    do {
      FUN_147684df4(param_2,*local_80 + (longlong)iStack_64 * 0x30 + 0x10);
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (local_80 != plVar1 || (local_70 != lVar2 || iStack_64 != iVar3));
  }
  FUN_1410ffc2a(param_1);
  FUN_1410ffdb0(param_1 + 0x50);
  FUN_147684e50(param_1 + 0xa0);
  FUN_145cd2f10(plVar1);
  *(undefined4 *)(param_1 + 0x140) = 0;
  if (0x80 < *(uint *)(param_1 + 0x144)) {
    *(undefined4 *)(param_1 + 0x144) = 0x80;
    FUN_1446efbd8(param_1 + 0x128,0);
  }
  *(undefined4 *)(param_1 + 0x160) = 0;
  if (0x80 < *(uint *)(param_1 + 0x164)) {
    *(undefined4 *)(param_1 + 0x164) = 0x80;
    FUN_1446efbd8(param_1 + 0x148,0);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147659c1a FUN_147659c1a body=107 status=ok
// SIG undefined FUN_147659c1a(void)

void FUN_147659c1a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x5d8);
  plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x5e0);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  cVar3 = *(char *)(lVar4 + 0x7c);
  if (cVar3 == '\x10') {
    FUN_14765a250();
  }
  else if (cVar3 == '\x04') {
    FUN_147659c86();
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
                    /* WARNING: Could not recover jumptable at 0x000147659c6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147659c86 FUN_147659c86 body=1481 status=ok
// SIG undefined FUN_147659c86(void)

void FUN_147659c86(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  bool bVar14;
  undefined1 auStack_1c8 [32];
  undefined2 local_1a8;
  char local_191;
  longlong local_190;
  int local_184;
  longlong local_180;
  longlong local_178;
  longlong local_170;
  ulonglong *local_168;
  undefined2 *local_160;
  ulonglong local_158;
  undefined8 *local_150;
  int local_148;
  undefined8 local_140;
  undefined2 local_136;
  undefined1 local_134 [6];
  undefined2 local_12e;
  undefined1 local_12c;
  undefined1 local_12b;
  undefined4 local_128;
  undefined1 local_124;
  undefined8 local_120;
  longlong local_118;
  int local_110;
  short local_108;
  short local_106;
  undefined1 local_103;
  undefined4 local_100;
  undefined1 local_fc;
  undefined1 local_f8 [16];
  ulonglong local_e8;
  undefined1 local_e0 [8];
  undefined8 local_d8;
  undefined1 local_d0 [16];
  ulonglong local_c0;
  longlong local_b8;
  ulonglong uStack_b0;
  ulonglong local_a8;
  undefined8 uStack_a0;
  undefined8 local_78;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_190 = param_1;
  lVar6 = FUN_14009d2a0();
  local_180 = FUN_14038fb82();
  local_134._4_2_ = *(undefined2 *)(lVar6 + 0x4a);
  local_12e = *(undefined2 *)(local_180 + 0xea);
  local_12b = 0;
  local_128 = 0x6ff;
  local_124 = 0;
  local_134._0_2_ = *(undefined2 *)(lVar6 + 0x11a);
  local_134._2_2_ = *(undefined2 *)(local_180 + 0xf12);
  FUN_147684fda(&local_108);
  local_168 = (ulonglong *)local_134;
  local_160 = (undefined2 *)(local_134 + 4);
  FUN_1447c44f6(local_f8,&local_168);
  local_136 = *(undefined2 *)(lVar6 + 0x11c);
  local_160 = (undefined2 *)local_134;
  local_168 = (ulonglong *)&local_136;
  local_178 = lVar6;
  FUN_1447c44f6(local_d0,&local_168);
  if ((local_108 != -1) && (local_106 != -1)) {
    lVar6 = *(longlong *)(local_190 + 0x28);
    local_191 = *(char *)(lVar6 + 0x298);
    FUN_14150e78a(&local_120,lVar6 + 0x28,local_f8);
    local_184 = *(int *)(lVar6 + 0x38);
    if (local_110 != local_184) {
      local_170 = local_190 + 0x40;
      do {
        lVar5 = local_118;
        lVar11 = (longlong)local_110;
        lVar6 = *(longlong *)(*(longlong *)(local_118 + 0x60) + lVar11 * 8);
        if (local_191 == '\0') {
          *(undefined4 *)(lVar6 + 0x14) = 0;
          lVar12 = lVar6;
        }
        else {
          lVar12 = 0;
        }
        if (*(ushort *)(lVar6 + 0xc) != 0) {
          puVar13 = *(undefined8 **)(lVar6 + 0x28);
          lVar8 = (ulonglong)*(ushort *)(lVar6 + 0xc) << 5;
          do {
            if (*(short *)((longlong)puVar13 + 0x1e) == local_106) goto LAB_14765a128;
            puVar13 = puVar13 + 4;
            lVar8 = lVar8 + -0x20;
          } while (lVar8 != 0);
        }
        puVar13 = (undefined8 *)0x0;
LAB_14765a128:
        iVar2 = *(int *)(lVar6 + 0x14);
        if (iVar2 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(puVar13 + 1));
        }
        LOCK();
        *(int *)(puVar13 + 3) = *(int *)(puVar13 + 3) + 1;
        UNLOCK();
        uVar4 = *puVar13;
        if (*(ushort *)(lVar6 + 0xc) != 0) {
          puVar9 = *(ulonglong **)(lVar6 + 0x28);
          lVar8 = (ulonglong)*(ushort *)(lVar6 + 0xc) << 5;
          do {
            if (*(short *)((longlong)puVar9 + 0x1e) == local_108) goto LAB_14765a153;
            puVar9 = puVar9 + 4;
            lVar8 = lVar8 + -0x20;
          } while (lVar8 != 0);
        }
        puVar9 = (ulonglong *)0x0;
LAB_14765a153:
        iVar3 = *(int *)(lVar6 + 0x14);
        if (iVar3 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(puVar9 + 1));
        }
        LOCK();
        *(int *)(puVar9 + 3) = (int)puVar9[3] + 1;
        UNLOCK();
        local_158 = *puVar9;
        local_160 = (undefined2 *)CONCAT44(local_160._4_4_,iVar3);
        local_168 = puVar9;
        local_150 = puVar13;
        local_148 = iVar2;
        local_140 = uVar4;
        FUN_1476850ea(local_170,*(undefined8 *)(*(longlong *)(lVar5 + 0x60) + lVar11 * 8),local_158,
                      uVar4);
        FUN_147685094(&local_168);
        if (lVar12 != 0) {
          *(undefined4 *)(lVar12 + 0x14) = 1;
        }
        local_110 = FUN_1403b8464(&local_120,local_110 + 1);
      } while (local_110 != local_184);
    }
    if (local_120 != 0) {
      if (*(char *)(local_118 + 0x270) == '\0') {
        *(int *)(local_118 + 0x264) = *(int *)(local_118 + 0x264) + -1;
      }
      else {
        LOCK();
        *(int *)(local_118 + 0x264) = *(int *)(local_118 + 0x264) + -1;
        UNLOCK();
      }
    }
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  local_160 = (undefined2 *)((longlong)&local_120 + 4);
  local_120._0_4_ = CONCAT22(*(undefined2 *)(local_180 + 0xf12),*(undefined2 *)(local_178 + 0x11c));
  local_103 = 0;
  local_100 = 0x6ff;
  local_fc = 0;
  local_d8 = 0x10000000000;
  uStack_b0 = 0x10000000000;
  local_78 = 0x10000000000;
  local_a8 = 0;
  uStack_a0 = 0;
  local_50 = 0x10000000000;
  local_168 = &local_120;
  FUN_1447c44f6(local_f8);
  lVar5 = local_190;
  lVar6 = *(longlong *)(local_190 + 0x28);
  cVar1 = *(char *)(lVar6 + 0x298);
  FUN_14150e78a(&local_168,lVar6 + 0x28,local_f8);
  iVar2 = *(int *)(lVar6 + 0x38);
  uVar7 = local_158 & 0xffffffff;
  if ((int)local_158 != iVar2) {
    do {
      if (cVar1 == '\0') {
        lVar6 = *(longlong *)(*(longlong *)((longlong)local_160 + 0x60) + (longlong)(int)uVar7 * 8);
        *(undefined4 *)(lVar6 + 0x14) = 0;
      }
      else {
        lVar6 = 0;
      }
      lVar11 = *(longlong *)(*(longlong *)((longlong)local_160 + 0x60) + (longlong)(int)uVar7 * 8);
      uVar7 = (ulonglong)*(ushort *)(lVar11 + 0xe);
      if (uVar7 != 0) {
        lVar11 = *(longlong *)(lVar11 + 0x18);
        uVar10 = 0;
        do {
          FUN_147685aec(lVar5 + 0x40,*(undefined2 *)(lVar11 + uVar10 * 2));
          uVar10 = uVar10 + 1;
        } while (uVar7 != uVar10);
      }
      if (lVar6 != 0) {
        *(undefined4 *)(lVar6 + 0x14) = 1;
      }
      uVar7 = FUN_1403b8464(&local_168,(int)local_158 + 1);
      local_158 = CONCAT44(local_158._4_4_,(int)uVar7);
    } while ((int)uVar7 != iVar2);
  }
  puVar9 = (ulonglong *)(local_134 + 4);
  if (local_168 != (ulonglong *)0x0) {
    if (*(char *)((longlong)local_160 + 0x270) == '\0') {
      *(int *)((longlong)local_160 + 0x264) = *(int *)((longlong)local_160 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)((longlong)local_160 + 0x264) = *(int *)((longlong)local_160 + 0x264) + -1;
      UNLOCK();
    }
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  local_120 = *(ulonglong *)(local_190 + 0x28);
  local_118 = local_190;
  FUN_14765a3f2(lVar5 + 0x40);
  local_e8 = 0x10000000000;
  local_c0 = 0x10000000000;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = local_a8 & 0xffffffff00000000;
  lVar6 = FUN_14009d2a0();
  local_134._4_2_ = *(undefined2 *)(lVar6 + 0x11a);
  local_168 = puVar9;
  local_160 = &local_12e;
  FUN_1447c44f6(&local_108);
  local_e8 = local_e8 & 0xffffffff00000000;
  local_c0 = local_c0 & 0xffffffff00000000;
  bVar14 = (longlong)uStack_b0 < 0;
  uStack_b0 = uStack_b0 & 0xffffffff00000000;
  if (bVar14) {
    FUN_1476644c4(&local_b8,0);
  }
  lVar5 = local_178;
  local_134._4_2_ = *(undefined2 *)(local_178 + 0x5c);
  local_168 = puVar9;
  local_160 = &local_12e;
  FUN_1447c44f6(local_e0,&local_168);
  lVar6 = local_180;
  local_134._4_2_ = *(undefined2 *)(lVar5 + 0x11a);
  local_12e = *(undefined2 *)(local_180 + 0xf12);
  local_168 = puVar9;
  local_160 = (undefined2 *)&local_12c;
  FUN_1447c44f6(&local_108,&local_168);
  local_1a8 = *(undefined2 *)(lVar6 + 0xea);
  FUN_14765a8c8(*(undefined8 *)(local_190 + 0x1b8),*(undefined8 *)(local_190 + 0x28),&local_108,
                *(undefined2 *)(lVar5 + 0x4a));
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14765a250 FUN_14765a250 body=416 status=ok
// SIG undefined FUN_14765a250(void)

void FUN_14765a250(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined2 *local_148;
  undefined1 *local_140;
  undefined2 local_134;
  undefined2 local_132;
  undefined2 local_130;
  undefined1 local_12b;
  undefined4 local_128;
  undefined1 local_124;
  undefined8 *local_120;
  undefined2 *local_118;
  undefined2 *local_110;
  undefined2 local_104;
  undefined2 local_102;
  undefined1 local_100 [9];
  byte local_f7;
  uint local_f4;
  undefined1 local_c0 [40];
  longlong local_98;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar3 = FUN_14009d2a0();
  lVar4 = FUN_14038fb82();
  uVar2 = *(ushort *)(lVar4 + 0xea);
  lVar5 = FUN_14482820e(*(longlong *)(param_1 + 0x28) + 0x28);
  if (((uVar2 != 0xffff) &&
      (*(uint *)(lVar5 + 0x20) != (uint)uVar2 && (int)(uint)uVar2 <= (int)*(uint *)(lVar5 + 0x20)))
     && ((*(uint *)(lVar5 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) != 0)) {
    local_132 = *(undefined2 *)(lVar4 + 0xea);
    local_134 = *(undefined2 *)(lVar3 + 0x4a);
    local_130 = *(undefined2 *)(lVar3 + 0xbc);
    local_12b = 0;
    local_128 = 0x6ff;
    local_124 = 0;
    local_102 = *(undefined2 *)(lVar4 + 0xf12);
    local_148 = &local_102;
    local_140 = local_100;
    FUN_14765ab44(&local_134,local_100);
    local_104 = *(undefined2 *)(lVar3 + 0x5a);
    local_110 = &local_102;
    local_118 = &local_104;
    FUN_1447c44f6(local_c0);
    local_f4 = *(uint *)(*(longlong *)(param_1 + 0x28) + 0x294);
    local_f7 = local_f7 & 0xfe | (local_f4 & 0xfffffeff) == 1;
    local_158 = param_3;
    FUN_14330a53e(local_100,&local_120,*(longlong *)(param_1 + 0x28) + 0x28,param_2);
    if (local_120 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_120 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_120)(local_120,1);
      }
    }
    if (local_98 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14765a3f2 FUN_14765a3f2 body=1237 status=ok
// SIG undefined FUN_14765a3f2(void)

void FUN_14765a3f2(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined2 uVar2;
  ushort uVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  uint uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined8 uVar15;
  ushort *puVar16;
  int iVar17;
  int iVar18;
  bool bVar19;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  uint local_e4;
  longlong local_e0;
  longlong local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 local_68 [16];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar14 = param_1 + 0x128;
  local_d8 = param_2;
  if (*(int *)(param_1 + 0x140) != 0) {
    local_58 = (undefined1 *)0x0;
    local_50 = 0x800000000;
    lVar7 = FUN_14009d2a0();
    uVar2 = *(undefined2 *)(lVar7 + 0x10a);
    local_98 = 0x100000000;
    local_88 = 0xffffffff;
    local_80 = 0;
    local_a0 = lVar14;
    local_90 = lVar14;
    if (*(int *)(param_1 + 0x140) == 0) {
      local_88._4_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_98);
    }
    if ((int)local_88._4_4_ < *(int *)(local_90 + 0x18)) {
      plVar1 = (longlong *)(param_1 + 0x50);
      local_a8 = param_1 + 0x88;
      local_c8 = (longlong *)(param_1 + 0xf0);
      lVar14 = local_d8 + 0x28;
      local_b8 = param_1 + 0x148;
      local_c0 = param_1 + 0xa0;
      uVar11 = local_88._4_4_;
      local_d0 = param_3;
      local_b0 = param_1;
      do {
        bVar19 = (longlong)local_50 < 0;
        local_50 = local_50 & 0xffffffff00000000;
        if (bVar19) {
          FUN_1475b398e(local_68,0);
        }
        local_e4 = uVar11 & 0xffff;
        if (*(int *)(param_1 + 0x98) != 0) {
          lVar7 = *(longlong *)(param_1 + 0x90);
          if (*(longlong *)(param_1 + 0x90) == 0) {
            lVar7 = local_a8;
          }
          iVar18 = *(int *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x98) + 0xffffU & local_e4) * 4);
          do {
            iVar17 = iVar18;
            if (iVar17 == -1) goto LAB_14765a668;
            lVar7 = *plVar1;
            iVar18 = *(int *)(lVar7 + 4 + (longlong)iVar17 * 0xc);
          } while (*(short *)(lVar7 + (longlong)iVar17 * 0xc) != (short)uVar11);
          local_e0 = local_d8 + 0xd0;
          do {
            uVar4 = local_50;
            puVar16 = (ushort *)(lVar7 + (longlong)iVar17 * 0xc + 2);
            uVar3 = *puVar16;
            if ((uVar3 == 0xffff) ||
               (*(uint *)(local_d8 + 0xe8) == (uint)uVar3 ||
                (int)*(uint *)(local_d8 + 0xe8) < (int)(uint)uVar3)) {
LAB_14765a61b:
              FUN_140bbeb1c(param_1,puVar16);
              FUN_14086b624(plVar1,iVar17);
            }
            else {
              lVar7 = *(longlong *)(local_d8 + 0xe0);
              if (*(longlong *)(local_d8 + 0xe0) == 0) {
                lVar7 = local_e0;
              }
              if ((*(uint *)(lVar7 + (ulonglong)(uVar3 >> 5) * 4) >> (uVar3 & 0x1f) & 1) == 0)
              goto LAB_14765a61b;
              lVar7 = (longlong)(int)local_50;
              uVar6 = (int)local_50 + 1;
              local_50 = CONCAT44(local_50._4_4_,uVar6);
              if (local_50._4_4_ < uVar6) {
                FUN_1475b3a76(local_68,uVar4 & 0xffffffff);
              }
              puVar8 = local_58;
              if (local_58 == (undefined1 *)0x0) {
                puVar8 = local_68;
              }
              *(ushort *)(puVar8 + lVar7 * 2) = *puVar16;
            }
            do {
              iVar17 = iVar18;
              if (iVar17 == -1) goto LAB_14765a668;
              lVar7 = *plVar1;
              iVar18 = *(int *)(lVar7 + 4 + (longlong)iVar17 * 0xc);
            } while (*(short *)(lVar7 + (longlong)iVar17 * 0xc) != (short)uVar11);
          } while( true );
        }
LAB_14765a668:
        lVar7 = (ulonglong)local_e4 * 3;
        puVar13 = (undefined8 *)((ulonglong)(uint)((int)lVar7 << 4) + *local_c8);
        lVar9 = (longlong)(int)local_50;
        if (lVar9 < 1) {
          FUN_147684df4(local_d0);
        }
        else {
          puVar8 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar8 = local_68;
          }
          lVar12 = 0;
          local_e0 = lVar7;
          do {
            cVar5 = FUN_140bbead8(lVar14,*(undefined2 *)(puVar8 + lVar12),uVar2);
            param_1 = local_b0;
            if (cVar5 != '\0') break;
            bVar19 = lVar9 * 2 + -2 != lVar12;
            lVar12 = lVar12 + 2;
          } while (bVar19);
          *(char *)((longlong)puVar13 + 0x2c) = cVar5;
          if ((int)local_e4 < *(int *)(local_b0 + 0x160)) {
            lVar7 = *(longlong *)(local_b0 + 0x158);
            if (*(longlong *)(local_b0 + 0x158) == 0) {
              lVar7 = local_b8;
            }
            if ((*(uint *)(lVar7 + (ulonglong)(local_e4 >> 5) * 4) >> (uVar11 & 0x1f) & 1) == 0)
            goto LAB_14765a70c;
            uVar10 = *puVar13;
            uVar15 = puVar13[1];
            local_78 = local_58;
            if (local_58 == (undefined1 *)0x0) {
              local_78 = local_68;
            }
          }
          else {
LAB_14765a70c:
            uVar15 = puVar13[1];
            local_78 = local_58;
            if (local_58 == (undefined1 *)0x0) {
              local_78 = local_68;
            }
            uVar10 = *puVar13;
          }
          local_f8 = puVar13 + 2;
          local_70 = (int)local_50;
          FUN_147685ba6(local_d0,uVar10,uVar15,&local_78);
          lVar7 = local_e0;
        }
        if ((int)local_50 == 0) {
          FUN_147686b4e(local_c0,(ulonglong)(uint)((int)lVar7 << 4) + *(longlong *)(param_1 + 0xf0))
          ;
          FUN_147681b98(local_c8);
        }
        local_88 = CONCAT44(local_88._4_4_,(uint)local_88 & ~local_98._4_4_);
        FUN_1449c0562(&local_98);
        uVar11 = local_88._4_4_;
      } while ((int)local_88._4_4_ < *(int *)(local_90 + 0x18));
    }
    lVar14 = local_a0;
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
      lVar14 = local_a0;
    }
  }
  *(undefined4 *)(param_1 + 0x140) = 0;
  if (0x80 < *(uint *)(param_1 + 0x144)) {
    *(undefined4 *)(param_1 + 0x144) = 0x80;
    FUN_1446efbd8(lVar14,0);
  }
  *(undefined4 *)(param_1 + 0x160) = 0;
  if (0x80 < *(uint *)(param_1 + 0x164)) {
    *(undefined4 *)(param_1 + 0x164) = 0x80;
    FUN_1446efbd8(param_1 + 0x148,0);
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14765a8c8 FUN_14765a8c8 body=273 status=ok
// SIG undefined FUN_14765a8c8(void)

void FUN_14765a8c8(undefined8 param_1,longlong param_2,longlong param_3,undefined2 param_4,
                  undefined2 param_5)

{
  longlong lVar1;
  undefined1 auStack_188 [32];
  undefined1 local_168 [2];
  undefined2 local_166;
  undefined2 local_164;
  undefined2 local_162;
  undefined1 local_15f;
  undefined4 local_15c;
  undefined1 local_158;
  undefined1 local_150 [80];
  longlong local_100;
  undefined8 local_d0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98 [80];
  longlong local_48;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_a0 = param_1;
  FUN_1403b8af8(local_98,param_3);
  local_38 = *(undefined4 *)(param_3 + 0x60);
  lVar1 = FUN_14009d2a0();
  local_166 = *(undefined2 *)(lVar1 + 0x50);
  local_162 = param_5;
  local_15f = 0;
  local_15c = 0x6ff;
  local_158 = 0;
  local_164 = param_4;
  FUN_1403b8af8(local_150,param_3);
  local_d0 = 0x10000000000;
  local_a8 = 0x10000000000;
  FUN_147686c36(local_168,local_150);
  FUN_147686cde(local_168,param_2 + 0x28,local_150,&local_a0);
  if (local_100 != 0) {
    FUN_1400020a8();
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14765a9da FUN_14765a9da body=361 status=ok
// SIG undefined FUN_14765a9da(void)

void FUN_14765a9da(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  undefined1 auStack_178 [32];
  ushort *local_158;
  code **local_150;
  undefined1 local_13c [4];
  undefined2 *local_138;
  undefined1 *local_130;
  undefined2 local_124;
  undefined2 local_122;
  undefined2 local_120;
  undefined1 local_11b;
  undefined4 local_118;
  undefined1 local_114;
  ushort local_10e;
  undefined2 local_10c;
  undefined2 local_10a;
  undefined1 local_108 [8];
  undefined1 local_100;
  byte bStack_ff;
  uint local_fc;
  undefined1 local_c8 [40];
  longlong local_a0;
  code *local_40;
  undefined2 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar1 = FUN_14009d2a0();
  lVar2 = FUN_14038fb82();
  local_122 = *(undefined2 *)(lVar2 + 0xea);
  local_124 = *(undefined2 *)(lVar1 + 0x4a);
  local_120 = *(undefined2 *)(lVar1 + 0xbc);
  local_11b = 0;
  local_118 = 0x6ff;
  local_114 = 0;
  local_10a = *(undefined2 *)(lVar2 + 0xf12);
  local_138 = &local_10a;
  local_130 = local_108;
  FUN_14765ab44(&local_124,local_108);
  local_10c = *(undefined2 *)(lVar1 + 0x5a);
  local_38 = &local_10a;
  local_40 = (code *)&local_10c;
  FUN_1447c44f6(local_c8,&local_40);
  local_fc = *(uint *)(*(longlong *)(param_1 + 0x28) + 0x294);
  bVar3 = bStack_ff & 0xfe | (local_fc & 0xfffffeff) == 1;
  _local_100 = CONCAT11(bVar3,local_100);
  local_158 = &local_10e;
  local_10e = CONCAT11(bVar3,local_100) & 0xfdff;
  local_40 = FUN_147687b26;
  local_38 = (undefined2 *)CONCAT71(local_38._1_7_,3);
  local_150 = &local_40;
  FUN_1476878c8(local_108,local_13c,*(longlong *)(param_1 + 0x28) + 0x28,param_2);
  if (local_a0 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14765ab44 FUN_14765ab44 body=146 status=ok
// SIG undefined FUN_14765ab44(void)

undefined8 * FUN_14765ab44(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 2);
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[7] = 0x10000000000;
  param_2[0xc] = 0x10000000000;
  param_2[0x13] = 0x10000000000;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0x18] = 0x10000000000;
  FUN_147687820(param_2,param_2 + 3);
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_1447c44f6(param_2 + 3);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14765abdc FUN_14765abdc body=160 status=ok
// SIG undefined FUN_14765abdc(void)

void FUN_14765abdc(undefined4 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_1;
  local_24 = param_1[1];
  plVar1 = (longlong *)FUN_14479d2ce(&local_28);
  if (((plVar1 != (longlong *)0x0) && (lVar2 = (**(code **)(*plVar1 + 0x180))(plVar1), lVar2 != 0))
     && (lVar2 = FUN_14765ac96(plVar1), lVar2 != 0)) {
    (**(code **)(*plVar1 + 0x2a0))(plVar1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14765ac96 FUN_14765ac96 body=48 status=ok
// SIG undefined FUN_14765ac96(void)

undefined8 FUN_14765ac96(longlong param_1)

{
  longlong lVar1;
  
  if ((((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0) && ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0))
     && (lVar1 = FUN_14043f728(), lVar1 != 0)) {
    return *(undefined8 *)(lVar1 + 0xd0);
  }
  return 0;
}



// FUNCTION 14765acc6 FUN_14765acc6 body=145 status=ok
// SIG undefined FUN_14765acc6(void)

int * FUN_14765acc6(longlong param_1,int *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  uVar2 = FUN_144a78877(*param_3,param_3[1]);
  iVar3 = -1;
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    lVar4 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x58);
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x60) - 1U & uVar2) * 4);
    if (iVar5 != -1) {
      do {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar5 * 0x14);
        if ((*piVar1 == *param_3) &&
           (*(int *)(*(longlong *)(param_1 + 0x18) + 4 + (longlong)iVar5 * 0x14) == param_3[1])) {
          if (piVar1 != (int *)0x0) {
            iVar3 = piVar1[2];
          }
          break;
        }
        iVar5 = piVar1[3];
      } while (iVar5 != -1);
    }
  }
  *param_2 = iVar3;
  return param_2;
}



// FUNCTION 14765ad58 FUN_14765ad58 body=138 status=ok
// SIG undefined FUN_14765ad58(void)

undefined4 * FUN_14765ad58(undefined8 param_1,undefined4 *param_2,longlong param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  if (param_3 != 0) {
    local_28 = 0;
    FUN_14485c47a(&local_28,param_3);
    local_30 = local_28;
  }
  FUN_14765ade4(param_1,param_2 + 2,&local_30);
  *param_2 = 0xffffffff;
  param_2[1] = DAT_14cab5d00;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14765ade4 FUN_14765ade4 body=258 status=ok
// SIG undefined FUN_14765ade4(void)

int * FUN_14765ade4(longlong param_1,int *param_2,int *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_78 [44];
  undefined1 local_4c [4];
  int *local_48;
  int *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = FUN_144a78877(*param_3,param_3[1]);
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    lVar4 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x58);
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x60) - 1U & uVar3) * 4);
    if (iVar5 != -1) {
      lVar4 = *(longlong *)(param_1 + 0x18);
      do {
        piVar1 = (int *)(lVar4 + (longlong)iVar5 * 0x14);
        if ((*piVar1 == *param_3) && (*(int *)(lVar4 + 4 + (longlong)iVar5 * 0x14) == param_3[1])) {
          if ((piVar1 != (int *)0x0) && (iVar5 = piVar1[2], *param_2 = iVar5, iVar5 != -1))
          goto LAB_14765aebf;
          break;
        }
        iVar5 = piVar1[3];
      } while (iVar5 != -1);
    }
  }
  uVar2 = *(undefined8 *)param_3;
  FUN_147688234(param_1 + 0x68,&local_48);
  *(undefined8 *)local_40 = uVar2;
  *(undefined1 *)((longlong)local_40 + 9) = 0;
  *param_2 = (int)local_48;
  local_48 = param_3;
  local_40 = param_2;
  FUN_14768831a((longlong *)(param_1 + 0x18),local_4c,&local_48);
LAB_14765aebf:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14765aee8 FUN_14765aee8 body=204 status=ok
// SIG undefined FUN_14765aee8(void)

void FUN_14765aee8(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined8 unaff_RBX;
  undefined1 auStack_58 [35];
  undefined1 local_35;
  undefined1 local_34 [8];
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = param_2;
  cVar1 = FUN_14765afb6();
  if (cVar1 != '\0') {
    FUN_14765ad58(param_1,local_34,param_2);
    piVar3 = *(int **)(param_1 + 0xb0);
    if (*piVar3 != 0) {
      thunk_FUN_140adeba6(piVar3,local_34);
      piVar3 = *(int **)(param_1 + 0xb0);
    }
    lVar2 = FUN_1400e4054(piVar3,local_34);
    if (lVar2 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (undefined4)
              CONCAT71((int7)((ulonglong)unaff_RBX >> 8),'\x02' - (*(short *)(lVar2 + 0xe) == 0));
    }
    cVar1 = FUN_14765b038(param_1,local_2c,uVar4);
    if (cVar1 == '\0') {
      local_35 = FUN_147db4522(param_2);
      FUN_14765b0ca(param_1,local_2c,uVar4);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14765afb6 FUN_14765afb6 body=129 status=ok
// SIG undefined FUN_14765afb6(void)

byte FUN_14765afb6(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auStack_48 [36];
  undefined1 local_24 [8];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  bVar2 = 1;
  if (**(int **)(param_1 + 0xb0) == 0) {
    lVar1 = param_1;
    FUN_147688832(param_1,local_24,param_2);
    bVar2 = (byte)lVar1;
    if (local_1c != -1) {
      lVar1 = FUN_1400e4054(*(undefined8 *)(param_1 + 0xb0),local_24);
      bVar2 = lVar1 != 0;
    }
    bVar2 = local_1c != -1 & bVar2;
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar2;
}



// FUNCTION 14765b038 FUN_14765b038 body=146 status=ok
// SIG undefined FUN_14765b038(void)

ulonglong FUN_14765b038(longlong param_1,int param_2,char param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  ulonglong uVar5;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int7 iVar6;
  
  lVar7 = (longlong)param_2 * 0xc + *(longlong *)(param_1 + 0x68);
  iVar6 = (int7)(int3)((uint)param_2 >> 8);
  uVar5 = CONCAT71(iVar6,1);
  if (param_3 == '\x02') {
    bVar2 = *(byte *)(lVar7 + 9);
    if (((bVar2 & 2) == 0 & bVar2) == 0) {
      uVar3 = *(uint *)(param_1 + 0xa8);
      lVar7 = *(longlong *)(param_1 + 0xa0);
      uVar9 = 0;
      uVar8 = uVar3;
      if (0 < (int)uVar3) {
        do {
          uVar1 = (uVar8 >> 1) + uVar9;
          if (*(int *)(lVar7 + (ulonglong)uVar1 * 8) < param_2) {
            uVar9 = uVar1 + (uVar8 & 1);
          }
          bVar4 = 1 < uVar8;
          uVar8 = uVar8 >> 1;
        } while (bVar4);
      }
      if (((int)uVar9 < (int)uVar3) && (*(int *)(lVar7 + (ulonglong)uVar9 * 8) <= param_2)) {
        lVar7 = lVar7 + (ulonglong)uVar9 * 8;
        uVar5 = CONCAT71((int7)((ulonglong)lVar7 >> 8),lVar7 != -4);
      }
      else {
        uVar5 = 0;
      }
    }
  }
  else if (param_3 == '\x01') {
    uVar5 = CONCAT71(iVar6,*(undefined1 *)(lVar7 + 9));
  }
  return uVar5 & 0xffffffffffffff01;
}



// FUNCTION 14765b0ca FUN_14765b0ca body=134 status=ok
// SIG undefined FUN_14765b0ca(void)

void FUN_14765b0ca(longlong param_1,int param_2,char param_3,undefined1 *param_4)

{
  longlong lVar1;
  undefined1 auStack_38 [44];
  int local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = (longlong)param_2 * 0xc + *(longlong *)(param_1 + 0x68);
  local_c = param_2;
  if (param_3 == '\x02') {
    if ((*(byte *)(lVar1 + 9) & 1) == 0) {
      *(undefined1 *)(lVar1 + 8) = *param_4;
      *(byte *)(lVar1 + 9) = *(byte *)(lVar1 + 9) | 1;
    }
    else {
      FUN_1476888be(param_1 + 0xa0,&local_c,param_4);
    }
  }
  else if (param_3 == '\x01') {
    *(undefined1 *)(lVar1 + 8) = *param_4;
    *(byte *)(lVar1 + 9) = *(byte *)(lVar1 + 9) | 3;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14765b152 FUN_14765b152 body=61 status=ok
// SIG undefined FUN_14765b152(void)

void FUN_14765b152(short *param_1,short param_2,char param_3,byte param_4)

{
  if (*param_1 < param_2) {
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    *param_1 = param_2;
  }
  else if (*param_1 != param_2) {
    return;
  }
  if (param_3 == '\x02') {
    *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + 1;
    *(byte *)((longlong)param_1 + 0x11) = *(byte *)((longlong)param_1 + 0x11) | param_4;
  }
  else {
    if (param_3 == '\x01') {
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
      return;
    }
    if (param_3 == '\0') {
      *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + 1;
      *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | param_4;
      return;
    }
  }
  return;
}



// FUNCTION 14765b190 FUN_14765b190 body=255 status=ok
// SIG undefined FUN_14765b190(void)

void FUN_14765b190(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined4 local_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58;
  int iStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  uint local_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  uStack_30 = 0;
  uStack_40 = plVar1;
  if ((int)param_1[5] == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_48);
    iVar4 = (int)param_1[5];
  }
  uStack_50 = CONCAT44(uStack_2c,uStack_30);
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_68 = (undefined4)local_48;
  uStack_64 = local_48._4_4_;
  uStack_60 = (undefined4)uStack_40;
  uStack_5c = uStack_40._4_4_;
  local_70 = param_1;
  if ((iStack_34 != iVar4) || (uStack_40 != plVar1)) {
    do {
      lVar2 = *local_70;
      lVar3 = (longlong)iStack_54;
      *(undefined2 *)(lVar2 + 8 + lVar3 * 0x24) = 0;
      *(undefined8 *)(lVar2 + 0xc + lVar3 * 0x24) = 0;
      *(undefined8 *)(lVar2 + 0x12 + lVar3 * 0x24) = 0;
      local_58 = local_58 & ~uStack_64;
      FUN_1449c0562(&local_68);
    } while (local_70 != param_1 ||
             ((longlong *)CONCAT44(uStack_5c,uStack_60) != plVar1 || iStack_54 != iVar4));
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14765b290 FUN_14765b290 body=340 status=ok
// SIG undefined FUN_14765b290(void)

void FUN_14765b290(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 unaff_RDI;
  undefined1 auStack_a8 [40];
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 **local_60;
  undefined8 *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = 0;
  FUN_14485c47a(&local_78);
  iVar2 = (int)local_78;
  iVar3 = local_78._4_4_;
  uVar4 = FUN_144a78877(local_78 & 0xffffffff,local_78._4_4_);
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & uVar4) * 4);
    if (iVar5 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar5 * 0x24);
        if ((*piVar1 == iVar2) && (*(int *)(*param_1 + 4 + (longlong)iVar5 * 0x24) == iVar3)) {
          if (piVar1 != (int *)0x0) goto LAB_14765b37b;
          break;
        }
        iVar5 = piVar1[7];
      } while (iVar5 != -1);
    }
  }
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = (undefined8 **)0x0;
  FUN_14485c47a(&local_60,param_2);
  local_80 = local_60;
  local_60 = &local_80;
  local_58 = &local_78;
  FUN_147688c90(param_1,&local_4c,&local_60);
  piVar1 = (int *)(*param_1 + (longlong)local_4c * 0x24);
LAB_14765b37b:
  FUN_14765b152(piVar1 + 2,param_3,param_4,
                CONCAT71((int7)((ulonglong)unaff_RDI >> 8),param_5) & 0xffffffff);
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14765b3e8 FUN_14765b3e8 body=1168 status=ok
// SIG undefined FUN_14765b3e8(void)

void FUN_14765b3e8(longlong param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined2 uVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined1 auStack_218 [32];
  undefined1 local_1f8;
  char local_1e2;
  char local_1e1;
  uint local_1e0;
  undefined4 local_1dc;
  longlong local_1d8;
  int local_1cc;
  longlong local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  longlong local_198;
  undefined2 *local_190;
  longlong *local_188;
  int local_180;
  longlong local_178;
  longlong *local_170;
  int local_168;
  longlong local_160;
  undefined8 local_158;
  undefined4 local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  int local_130;
  undefined2 local_126;
  undefined8 local_124;
  undefined1 local_11b;
  undefined4 local_118;
  undefined1 local_114;
  undefined1 local_110 [2];
  short local_10e;
  short local_10c;
  undefined2 local_10a;
  undefined1 local_f8 [40];
  undefined1 local_d0 [40];
  longlong local_a8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_218;
  lVar5 = FUN_14009d2a0();
  lVar6 = FUN_14038fb82();
  FUN_14765b93c(param_1);
  local_1d8 = param_1;
  FUN_14765b190(*(undefined8 *)(param_1 + 0xb0));
  local_124._4_2_ = *(undefined2 *)(lVar6 + 0xf1a);
  local_124._2_2_ = *(undefined2 *)(lVar5 + 0x50);
  local_124._6_2_ = *(undefined2 *)(lVar5 + 0x5e);
  local_11b = 0;
  local_118 = 0x6ff;
  local_114 = 0;
  local_126 = *(undefined2 *)(lVar5 + 0x11c);
  local_1c0 = lVar5;
  FUN_14768901e(local_110);
  local_190 = &local_126;
  local_188 = &local_124;
  FUN_1447c44f6(local_d0);
  if ((local_10e != -1) && (local_10c != -1)) {
    lVar5 = *(longlong *)(local_1d8 + 0x28);
    local_1e2 = *(char *)(lVar5 + 0x298);
    FUN_14150e78a(&local_140,lVar5 + 0x28,local_f8);
    local_1cc = *(int *)(lVar5 + 0x38);
    if (local_130 != local_1cc) {
      do {
        lVar6 = local_138;
        lVar15 = (longlong)local_130;
        lVar5 = *(longlong *)(*(longlong *)(local_138 + 0x60) + lVar15 * 8);
        if (local_1e2 == '\0') {
          *(undefined4 *)(lVar5 + 0x14) = 0;
          lVar12 = lVar5;
        }
        else {
          lVar12 = 0;
        }
        FUN_1410fbae8(lVar5,&local_1a8,local_10a);
        if (*(ushort *)(lVar5 + 0xc) != 0) {
          plVar10 = *(longlong **)(lVar5 + 0x28);
          lVar7 = (ulonglong)*(ushort *)(lVar5 + 0xc) << 5;
          do {
            if (*(short *)((longlong)plVar10 + 0x1e) == local_10c) goto LAB_14765b5c2;
            plVar10 = plVar10 + 4;
            lVar7 = lVar7 + -0x20;
          } while (lVar7 != 0);
        }
        plVar10 = (longlong *)0x0;
LAB_14765b5c2:
        iVar2 = *(int *)(lVar5 + 0x14);
        local_1c8 = lVar12;
        if (iVar2 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(plVar10 + 1));
        }
        LOCK();
        *(int *)(plVar10 + 3) = (int)plVar10[3] + 1;
        UNLOCK();
        lVar12 = *plVar10;
        if (*(ushort *)(lVar5 + 0xc) != 0) {
          plVar14 = *(longlong **)(lVar5 + 0x28);
          lVar7 = (ulonglong)*(ushort *)(lVar5 + 0xc) << 5;
          do {
            if (*(short *)((longlong)plVar14 + 0x1e) == local_10e) goto LAB_14765b5ef;
            plVar14 = plVar14 + 4;
            lVar7 = lVar7 + -0x20;
          } while (lVar7 != 0);
        }
        plVar14 = (longlong *)0x0;
LAB_14765b5ef:
        iVar3 = *(int *)(lVar5 + 0x14);
        if (iVar3 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(plVar14 + 1));
        }
        LOCK();
        *(int *)(plVar14 + 3) = (int)plVar14[3] + 1;
        UNLOCK();
        local_1b0 = *plVar14;
        local_190 = *(undefined2 **)(lVar5 + 0x18);
        local_158 = local_1a8;
        local_150 = local_1a0;
        local_1b8 = local_198;
        local_148 = local_198;
        uVar1 = *(ushort *)(local_1c0 + 300);
        if (uVar1 == 0xffff) {
LAB_14765b6b1:
          local_1e0 = 0;
        }
        else {
          lVar5 = lVar15 * 0x28 + *(longlong *)(lVar6 + 8);
          uVar4 = *(uint *)(lVar5 + 0x20);
          if (uVar4 == uVar1 || (int)uVar4 < (int)(uint)uVar1) goto LAB_14765b6b1;
          local_1e0 = (uint)CONCAT11((char)(uVar1 >> 8),
                                     (*(uint *)(lVar5 + (ulonglong)(uVar1 >> 5) * 4) >>
                                      (uVar1 & 0x1f) & 1) != 0);
        }
        local_188 = plVar14;
        local_180 = iVar3;
        local_178 = local_1b0;
        local_170 = plVar10;
        local_168 = iVar2;
        local_160 = lVar12;
        if (*(short *)(*(longlong *)(*(longlong *)(lVar6 + 0x60) + lVar15 * 8) + 0xe) != 0) {
          uVar11 = 0;
          do {
            lVar5 = *(longlong *)(lVar12 + uVar11 * 8);
            if ((lVar5 != 0) &&
               (lVar7 = FUN_14765b87a(local_1d8,*(undefined4 *)(local_1b0 + uVar11 * 4)), lVar7 != 0
               )) {
              if ((char)local_1e0 == '\0') {
                local_1e1 = FUN_1475c7b4e(lVar5);
              }
              else {
                local_1e1 = FUN_1475c7bbc(lVar5);
              }
              if (local_1e1 == '\x02') {
                local_1dc = FUN_1475c7b74(lVar5);
              }
              else if (local_1e1 == '\0') {
                local_1dc = FUN_1475c7b9a(lVar5);
              }
              else {
                local_1dc = 0;
              }
              iVar2 = *(int *)(lVar5 + 0x108);
              if ((longlong)iVar2 != 0) {
                lVar5 = *(longlong *)(lVar5 + 0x100);
                lVar9 = 0;
                do {
                  lVar8 = FUN_1417fad74(lVar7,*(undefined8 *)(lVar5 + lVar9));
                  if (lVar8 != 0) {
                    if (local_1b8 == 0) {
                      uVar13 = 0;
                    }
                    else {
                      uVar13 = *(undefined2 *)(local_1b8 + uVar11 * 2);
                    }
                    local_1f8 = (undefined1)local_1dc;
                    FUN_14765b290(*(undefined8 *)(local_1d8 + 0xb0),lVar8,uVar13,local_1e1);
                  }
                  lVar9 = lVar9 + 8;
                } while ((longlong)iVar2 * 8 != lVar9);
              }
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < *(ushort *)
                             (*(longlong *)(*(longlong *)(lVar6 + 0x60) + lVar15 * 8) + 0xe));
        }
        FUN_1476890de(&local_190);
        if (local_1c8 != 0) {
          *(undefined4 *)(local_1c8 + 0x14) = 1;
        }
        local_130 = FUN_1403b8464(&local_140,local_130 + 1);
      } while (local_130 != local_1cc);
    }
    if (local_140 != 0) {
      if (*(char *)(local_138 + 0x270) == '\0') {
        *(int *)(local_138 + 0x264) = *(int *)(local_138 + 0x264) + -1;
      }
      else {
        LOCK();
        *(int *)(local_138 + 0x264) = *(int *)(local_138 + 0x264) + -1;
        UNLOCK();
      }
    }
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14765b87a FUN_14765b87a body=139 status=ok
// SIG undefined FUN_14765b87a(void)

undefined8 FUN_14765b87a(longlong param_1,ushort param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x548) + 8);
  lVar3 = *(longlong *)(lVar5 + 0x100 + (ulonglong)param_2 * 0x128);
  plVar4 = *(longlong **)(lVar5 + 0x108 + (ulonglong)param_2 * 0x128);
  if (plVar4 == (longlong *)0x0) {
    lVar5 = FUN_14479d2ce(lVar3 + 0x18);
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    lVar5 = FUN_14479d2ce(lVar3 + 0x18);
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
  if (lVar5 == 0) {
    return 0;
  }
  uVar6 = FUN_14765b906(lVar5);
  return uVar6;
}



// FUNCTION 14765b906 FUN_14765b906 body=53 status=ok
// SIG undefined FUN_14765b906(void)

undefined8 FUN_14765b906(longlong param_1)

{
  longlong lVar1;
  
  if ((((param_1 != 0) && ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0)) &&
      ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0)) && (lVar1 = FUN_14043f728(), lVar1 != 0)) {
    return *(undefined8 *)(lVar1 + 0xd0);
  }
  return 0;
}



// FUNCTION 14765b93c FUN_14765b93c body=1432 status=ok
// SIG undefined FUN_14765b93c(void)

void FUN_14765b93c(longlong param_1)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined1 auStack_238 [37];
  char local_213;
  undefined2 local_212;
  longlong local_210;
  int local_204;
  uint local_200;
  undefined4 local_1fc;
  longlong local_1f8;
  undefined8 local_1f0;
  longlong *local_1e8;
  undefined8 local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  longlong *local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  int local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined1 local_188;
  undefined2 local_182;
  undefined2 local_180;
  undefined1 local_17b;
  undefined4 local_178;
  undefined1 local_174;
  undefined8 local_170;
  longlong *local_168;
  int local_160;
  longlong local_158;
  longlong *local_150;
  int local_148;
  longlong local_140;
  undefined8 local_138;
  longlong local_130;
  undefined1 local_120 [80];
  longlong local_d0;
  undefined1 local_70 [32];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_238;
  lVar6 = FUN_14009d2a0();
  lVar7 = FUN_14038fb82();
  local_1e0 = FUN_140732858(*(longlong *)(param_1 + 0x28) + 0x430);
  FUN_147689156(*(longlong *)(param_1 + 0x28) + 0x430,&local_1c8,DAT_14cab5d00);
  plVar15 = local_1c0;
  local_1f0 = local_1c8;
  *(undefined8 *)(param_1 + 0xc0) = local_1c8;
  plVar10 = *(longlong **)(param_1 + 200);
  local_210 = param_1;
  if (plVar10 != local_1c0) {
    if (local_1c0 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)local_1c0 + 0xc) = *(int *)((longlong)local_1c0 + 0xc) + 1;
      UNLOCK();
      plVar10 = *(longlong **)(param_1 + 200);
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))();
      }
    }
    *(longlong **)(local_210 + 200) = plVar15;
    local_1f0 = local_1c8;
  }
  plVar10 = local_1c0;
  if (local_1c0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1c0 + 1) = (int)local_1c0[1] + 1;
    UNLOCK();
  }
  local_130 = (longlong)&local_170 + 2;
  local_170 = CONCAT62(local_170._2_6_,*(undefined2 *)(lVar6 + 0x11a));
  local_50 = 0x10000000000;
  local_138 = &local_170;
  FUN_1447c44f6(local_70);
  local_182 = *(undefined2 *)(lVar6 + 0x50);
  local_180 = *(undefined2 *)(lVar7 + 0xf1a);
  local_17b = 0;
  local_178 = 0x6ff;
  local_174 = 0;
  FUN_14768a128(&local_138);
  FUN_14010b303(local_70,local_120,1,&local_170);
  if ((local_138._2_2_ != -1) && (local_138._4_2_ != -1)) {
    local_1e8 = plVar10;
    lVar6 = *(longlong *)(local_210 + 0x28);
    local_213 = *(char *)(lVar6 + 0x298);
    FUN_14150e78a(&local_1b8,lVar6 + 0x28,local_120);
    local_204 = *(int *)(lVar6 + 0x38);
    if (local_1a8 != local_204) {
      do {
        lVar7 = local_1b0;
        lVar13 = (longlong)local_1a8;
        lVar6 = *(longlong *)(*(longlong *)(local_1b0 + 0x60) + lVar13 * 8);
        if (local_213 == '\0') {
          *(undefined4 *)(lVar6 + 0x14) = 0;
          local_1f8 = lVar6;
        }
        else {
          local_1f8 = 0;
        }
        if (*(ushort *)(lVar6 + 0xc) != 0) {
          plVar10 = *(longlong **)(lVar6 + 0x28);
          lVar8 = (ulonglong)*(ushort *)(lVar6 + 0xc) << 5;
          do {
            if (*(short *)((longlong)plVar10 + 0x1e) == local_138._4_2_) goto LAB_14765bc01;
            plVar10 = plVar10 + 4;
            lVar8 = lVar8 + -0x20;
          } while (lVar8 != 0);
        }
        plVar10 = (longlong *)0x0;
LAB_14765bc01:
        iVar3 = *(int *)(lVar6 + 0x14);
        if (iVar3 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(plVar10 + 1));
        }
        LOCK();
        *(int *)(plVar10 + 3) = (int)plVar10[3] + 1;
        UNLOCK();
        lVar8 = *plVar10;
        if (*(ushort *)(lVar6 + 0xc) != 0) {
          plVar15 = *(longlong **)(lVar6 + 0x28);
          lVar11 = (ulonglong)*(ushort *)(lVar6 + 0xc) << 5;
          do {
            if (*(short *)((longlong)plVar15 + 0x1e) == local_138._2_2_) goto LAB_14765bc2c;
            plVar15 = plVar15 + 4;
            lVar11 = lVar11 + -0x20;
          } while (lVar11 != 0);
        }
        plVar15 = (longlong *)0x0;
LAB_14765bc2c:
        iVar4 = *(int *)(lVar6 + 0x14);
        if (iVar4 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(plVar15 + 1));
        }
        LOCK();
        *(int *)(plVar15 + 3) = (int)plVar15[3] + 1;
        UNLOCK();
        local_1d0 = *plVar15;
        local_1d8 = *(longlong *)(lVar6 + 0x18);
        lVar11 = lVar13 * 0x28 + *(longlong *)(lVar7 + 8);
        local_170 = local_1d8;
        local_168 = plVar15;
        local_160 = iVar4;
        local_158 = local_1d0;
        local_150 = plVar10;
        local_148 = iVar3;
        local_140 = lVar8;
        lVar6 = FUN_14009d2a0();
        uVar2 = *(ushort *)(lVar6 + 0x10a);
        if ((uVar2 == 0xffff) ||
           (uVar5 = *(uint *)(lVar11 + 0x20), uVar5 == uVar2 || (int)uVar5 < (int)(uint)uVar2)) {
          local_200 = 0;
        }
        else {
          local_200 = (uint)CONCAT11((char)(uVar2 >> 8),
                                     (*(uint *)(lVar11 + (ulonglong)(uVar2 >> 5) * 4) >>
                                      (uVar2 & 0x1f) & 1) != 0);
        }
        if ((((char)local_200 != '\0') || (*(int *)(*(longlong *)(local_210 + 0x28) + 0x430) != 0))
           && (*(short *)(*(longlong *)(*(longlong *)(lVar7 + 0x60) + lVar13 * 8) + 0xe) != 0)) {
          uVar12 = 0;
          do {
            lVar6 = *(longlong *)(lVar8 + uVar12 * 8);
            if (lVar6 != 0) {
              local_212 = *(undefined2 *)(local_1d8 + uVar12 * 2);
              local_1fc = *(undefined4 *)(local_1d0 + uVar12 * 4);
              lVar11 = FUN_14765b87a(local_210);
              if ((lVar11 != 0) && (iVar3 = *(int *)(lVar6 + 0x108), (longlong)iVar3 != 0)) {
                lVar6 = *(longlong *)(lVar6 + 0x100);
                lVar14 = 0;
                do {
                  lVar9 = FUN_1417fad74(lVar11,*(undefined8 *)(lVar6 + lVar14));
                  if (lVar9 != 0) {
                    local_1a0 = 0;
                    local_198 = 0;
                    FUN_14485c47a(&local_198,lVar9);
                    local_1a0 = local_198;
                    FUN_14765ade4(local_1f0,&local_198,&local_1a0);
                    local_190 = (undefined4)local_198;
                    local_1a0 = CONCAT62(local_1a0._2_6_,local_212);
                    local_198 = CONCAT44(DAT_14cab5d00,0xffffffff);
                    local_18c = local_1fc;
                    local_188 = (undefined1)local_200;
                    FUN_1449da5a2(local_1e0,&local_1a0,&local_198);
                  }
                  lVar14 = lVar14 + 8;
                } while ((longlong)iVar3 * 8 != lVar14);
              }
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 < *(ushort *)
                             (*(longlong *)(*(longlong *)(lVar7 + 0x60) + lVar13 * 8) + 0xe));
        }
        FUN_14768a1e8(&local_170);
        if (local_1f8 != 0) {
          *(undefined4 *)(local_1f8 + 0x14) = 1;
        }
        local_1a8 = FUN_1403b8464(&local_1b8,local_1a8 + 1);
      } while (local_1a8 != local_204);
    }
    plVar10 = local_1e8;
    if (local_1b8 != 0) {
      if (*(char *)(local_1b0 + 0x270) == '\0') {
        *(int *)(local_1b0 + 0x264) = *(int *)(local_1b0 + 0x264) + -1;
      }
      else {
        LOCK();
        *(int *)(local_1b0 + 0x264) = *(int *)(local_1b0 + 0x264) + -1;
        UNLOCK();
      }
    }
  }
  if (local_d0 != 0) {
    FUN_1400020a8();
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar15 = plVar10 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  if (local_1c0 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_1c0 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_1c0)(local_1c0);
      LOCK();
      piVar1 = (int *)((longlong)local_1c0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1c0 + 0x10))(local_1c0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14765bee0 FUN_14765bee0 body=138 status=ok
// SIG undefined FUN_14765bee0(void)

void FUN_14765bee0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  if (*(int *)(param_2 + 0x220) < 1) {
    iVar3 = FUN_14765bf6a(param_1 + 0x40,1);
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x40) + (longlong)(iVar3 / 5) * 8);
    lVar4 = (ulonglong)(uint)(iVar3 % 5) * 0x620;
    lVar1 = lVar2 + lVar4;
    if (*(char *)(lVar2 + 0x610 + lVar4) == '\x01') {
      FUN_14490e692(lVar1);
    }
    FUN_1402ed838(lVar1,param_2,1,1);
    *(undefined1 *)(lVar1 + 0x610) = 1;
  }
  return;
}



// FUNCTION 14765bf6a FUN_14765bf6a body=170 status=ok
// SIG undefined FUN_14765bf6a(void)

int FUN_14765bf6a(longlong *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  iVar1 = (int)param_1[2];
  iVar2 = (param_2 + iVar1 + 4) / 5;
  *(int *)(param_1 + 2) = iVar1 + param_2;
  iVar4 = iVar2 - (int)param_1[1];
  if (iVar4 != 0 && (int)param_1[1] <= iVar2) {
    do {
      lVar3 = FUN_14001cc68(0x1ea0,0x10);
      *(undefined1 *)(lVar3 + 0x610) = 0;
      *(undefined1 *)(lVar3 + 0xc30) = 0;
      *(undefined1 *)(lVar3 + 0x1250) = 0;
      *(undefined1 *)(lVar3 + 0x1870) = 0;
      *(undefined1 *)(lVar3 + 0x1e90) = 0;
      iVar2 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
        FUN_1456bd870(param_1,iVar2);
      }
      *(longlong *)(*param_1 + (longlong)iVar2 * 8) = lVar3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return iVar1;
}



// FUNCTION 14765c014 FUN_14765c014 body=762 status=ok
// SIG undefined FUN_14765c014(void)

void FUN_14765c014(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  undefined1 auStack_228 [32];
  undefined1 *local_208;
  undefined1 **local_200;
  undefined1 *local_1f8;
  undefined1 *local_1f0;
  undefined1 *local_1e8;
  int local_1d4;
  undefined2 *local_1d0;
  uint *local_1c8;
  undefined2 local_1c0 [2];
  undefined1 local_1bb;
  undefined4 local_1b8;
  undefined1 local_1b4;
  ushort local_1ae;
  int local_1ac;
  longlong *local_1a8;
  longlong *local_1a0;
  undefined1 *local_198;
  uint **local_190;
  uint *local_188;
  undefined2 local_17a;
  uint local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined1 local_168 [80];
  longlong local_118;
  undefined1 local_108 [40];
  undefined1 local_e0 [40];
  code *local_b8;
  byte local_b0;
  undefined1 local_a8 [8];
  byte local_a0;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined1 local_70 [32];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_228;
  lVar5 = FUN_14009d2a0();
  lVar6 = FUN_14038fb82();
  local_1c0[0] = *(undefined2 *)(lVar5 + 0x4a);
  local_1bb = 0;
  local_1b8 = 0x6ff;
  local_1b4 = 0;
  local_17a = *(undefined2 *)(lVar6 + 0x84);
  local_1d0 = &local_17a;
  local_1c8 = &local_178;
  FUN_14765c310(local_1c0,&local_178);
  uVar4 = local_178;
  uStack_174 = CONCAT22(uStack_174._2_2_,0x900);
  local_1ae = 0xb00;
  local_b8 = FUN_143315094;
  local_b0 = 3;
  uVar3 = (ushort)local_178;
  uVar8 = local_178 & 0xffff;
  if (((uVar8 == 0xffff) ||
      (lVar5 = FUN_14482820e(*(longlong *)(param_1 + 0x28) + 0x28),
      *(uint *)(lVar5 + 0x20) == (uVar4 & 0xffff) || (int)*(uint *)(lVar5 + 0x20) < (int)uVar8)) ||
     ((*(uint *)(lVar5 + (ulonglong)(uVar3 >> 5) * 4) >> (uVar4 & 0x1f) & 1) == 0))
  goto LAB_14765c2a4;
  plVar7 = (longlong *)FUN_14001cc68(0x30,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14a4d81b0;
  plVar7[2] = (longlong)&PTR_FUN_14a4d81c8;
  plVar7[3] = param_1;
  *(uint *)(plVar7 + 4) = local_178;
  *(undefined4 *)((longlong)plVar7 + 0x24) = uStack_174;
  *(undefined4 *)(plVar7 + 5) = uStack_170;
  *(undefined4 *)((longlong)plVar7 + 0x2c) = uStack_16c;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  local_50 = 0;
  FUN_1400abb7c(local_70,local_108);
  local_78 = 0;
  FUN_1400abb7c(local_98,local_e0);
  FUN_140dba9e6(local_70,(ushort)local_178);
  local_190 = &local_188;
  local_198 = &LAB_14331525e;
  local_a0 = local_b0;
  local_188 = &local_178;
  (*(code *)(&PTR_LAB_14a475bc0)[local_b0])(local_a8);
  local_1f8 = local_168;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  local_200 = &local_198;
  local_208 = local_a8;
  local_1f0 = local_70;
  local_1e8 = local_98;
  local_1a8 = plVar7 + 2;
  local_1a0 = plVar7;
  FUN_1406ac01c(param_2,&local_1d4,&local_1ae,&local_1a8);
  if (local_1d4 == -1) {
    if ((local_1ae & 0x400) != 0) {
      FUN_145c71394(param_2,&local_1ac);
      local_1d4 = local_1ac;
      if (local_1ac != -1) goto LAB_14765c262;
    }
  }
  else {
LAB_14765c262:
    FUN_1407ce0e2(param_2,local_1d4,0xffffffff);
    FUN_1407cdf34(param_2,local_1d4,0xffffffff);
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
LAB_14765c2a4:
  if (local_118 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14765c310 FUN_14765c310 body=177 status=ok
// SIG undefined FUN_14765c310(void)

undefined8 * FUN_14765c310(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *puStack_40;
  undefined2 local_2a;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[6] = 0x10000000000;
  param_2[0xb] = 0x10000000000;
  param_2[0x12] = 0x10000000000;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0x17] = 0x10000000000;
  local_2a = *(undefined2 *)param_2;
  puStack_40 = &local_28;
  local_48 = &local_2a;
  FUN_1447c44f6(param_2 + 2,&local_48);
  local_48 = (undefined2 *)*param_3;
  puStack_40 = (ulonglong *)param_3[1];
  FUN_1403b5126(param_2 + 2,&local_48,2);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14765c3c2 FUN_14765c3c2 body=473 status=ok
// SIG undefined FUN_14765c3c2(void)

void FUN_14765c3c2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_168 [40];
  undefined2 *local_140;
  undefined1 *local_138;
  undefined2 *local_130;
  undefined2 *local_128;
  longlong local_120;
  undefined2 *local_118;
  undefined2 *local_110;
  undefined2 local_106;
  undefined2 local_104;
  undefined2 local_102;
  undefined2 local_100;
  undefined1 local_fe [3];
  undefined1 local_fb;
  undefined4 local_f8;
  undefined1 local_f4;
  undefined1 local_f0 [16];
  undefined1 local_e0 [80];
  longlong local_90;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x5d8);
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x5e0);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  cVar3 = *(char *)(lVar7 + 0x7c);
  lVar7 = FUN_14009d2a0();
  lVar8 = FUN_14038fb82();
  puVar5 = local_118;
  local_120 = param_1;
  if (cVar3 == ' ') {
    FUN_14765c64c(param_1);
  }
  else {
    if (cVar3 == '\x10') {
      local_118 = (undefined2 *)CONCAT62(local_118._2_6_,*(undefined2 *)(lVar7 + 0x4a));
      puVar6 = local_118;
      local_118._6_2_ = SUB82(puVar5,6);
      local_118._0_6_ = (uint6)(uint5)puVar6;
      local_110 = (undefined2 *)CONCAT35(local_110._5_3_,0x6ff);
      local_100 = *(undefined2 *)(lVar8 + 0x84);
      local_140 = &local_100;
      local_138 = local_fe;
      FUN_14765c310(&local_118,local_f0);
      FUN_14330b106(local_f0,*(longlong *)(param_1 + 0x28) + 0x28,&local_120);
    }
    else {
      if (cVar3 != '\x04') goto LAB_14765c42c;
      local_100 = *(undefined2 *)(lVar7 + 0x4a);
      local_fb = 0;
      local_f8 = 0x6ff;
      local_f4 = 0;
      local_102 = *(undefined2 *)(lVar8 + 0xda);
      local_130 = &local_102;
      local_128 = &local_100;
      FUN_14765c59c(&local_100,local_f0);
      local_106 = *(undefined2 *)(lVar7 + 0x11a);
      local_110 = &local_102;
      local_104 = *(undefined2 *)(lVar7 + 0x11c);
      local_118 = &local_106;
      FUN_1403b5126(local_e0,&local_118,2);
      FUN_14330b106(local_f0,*(longlong *)(param_1 + 0x28) + 0x28,&local_120);
    }
    if (local_90 != 0) {
      FUN_1400020a8();
    }
  }
LAB_14765c42c:
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
  if ((local_30 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14765c59c FUN_14765c59c body=174 status=ok
// SIG undefined FUN_14765c59c(void)

undefined8 * FUN_14765c59c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *puStack_40;
  undefined2 local_2a;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[6] = 0x10000000000;
  param_2[0xb] = 0x10000000000;
  param_2[0x12] = 0x10000000000;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0x17] = 0x10000000000;
  local_2a = *(undefined2 *)param_2;
  puStack_40 = &local_28;
  local_48 = &local_2a;
  FUN_1447c44f6(param_2 + 2,&local_48);
  local_48 = (undefined2 *)*param_3;
  puStack_40 = (ulonglong *)param_3[1];
  FUN_1447c44f6(param_2 + 2,&local_48);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14765c64c FUN_14765c64c body=255 status=ok
// SIG undefined FUN_14765c64c(void)

void FUN_14765c64c(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  
  iVar2 = *(int *)(param_1 + 0x50);
  if (0 < iVar2) {
    uVar6 = iVar2 + 1;
    uVar3 = (ulonglong)(iVar2 - 1);
    lVar7 = uVar3 * 0x620;
    lVar5 = lVar7 + 0x610;
    do {
      lVar4 = lVar5 + (uVar3 / 5) * -0x1ea0;
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + ((ulonglong)(uVar6 - 2) / 5) * 8);
      if (*(char *)(lVar1 + lVar4) == '\x01') {
        FUN_14490e692(lVar7 + (uVar3 / 5) * -0x1ea0 + lVar1);
        *(undefined1 *)(lVar1 + lVar4) = 0;
      }
      uVar6 = uVar6 - 1;
      lVar7 = lVar7 + -0x620;
      uVar3 = uVar3 - 1;
      lVar5 = lVar5 + -0x620;
    } while (1 < uVar6);
    iVar2 = *(int *)(param_1 + 0x50);
  }
  FUN_145ddf308((longlong *)(param_1 + 0x40),(iVar2 + 4) / 5);
  *(undefined4 *)(param_1 + 0x50) = 0;
  return;
}



// FUNCTION 14765c788 FUN_14765c788 body=122 status=ok
// SIG undefined FUN_14765c788(void)

void FUN_14765c788(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1411341e8(param_1,iVar1);
    }
    FUN_14768a546((longlong)iVar1 * 0x48 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_14768a57a(param_1,param_2,iVar1 - param_2);
    FUN_14768a5dc(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14765c808 FUN_14765c808 body=233 status=ok
// SIG undefined FUN_14765c808(void)

void FUN_14765c808(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 *local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined1 local_3c [2];
  undefined2 local_3a;
  undefined2 local_38;
  undefined2 local_36;
  undefined1 local_33;
  uint local_30;
  undefined1 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = FUN_14009d2a0();
  lVar3 = FUN_14038fb82();
  local_38 = *(undefined2 *)(lVar3 + 0xfe);
  local_3a = *(undefined2 *)(lVar2 + 0x50);
  local_36 = *(undefined2 *)(lVar2 + 0xbc);
  local_2c = 0;
  lVar2 = *(longlong *)(param_1 + 0x28);
  local_30 = *(uint *)(lVar2 + 0x290);
  local_33 = (local_30 & 0xfffffeff) == 1;
  local_58 = param_1 + 0x40;
  local_50 = *(undefined8 *)(lVar2 + 0x548);
  local_60 = &local_50;
  local_68 = param_3;
  FUN_14330b410(local_3c,&local_48,lVar2 + 0x28,param_2);
  if (local_48 != 0) {
    LOCK();
    piVar1 = (int *)(local_48 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_88);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14765c91c FUN_14765c91c body=166 status=ok
// SIG undefined FUN_14765c91c(void)

void FUN_14765c91c(longlong *param_1,ushort param_2,undefined4 *param_3)

{
  ushort *puVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & (uint)param_2) * 4);
    if (iVar2 != -1) {
      do {
        puVar1 = (ushort *)(*param_1 + (longlong)iVar2 * 0x18);
        if (*puVar1 == param_2) {
          if (puVar1 + 4 != (ushort *)0x0 && puVar1 != (ushort *)0x0) {
            local_18 = *param_3;
            uStack_14 = param_3[1];
            uStack_10 = param_3[2];
            uStack_c = param_3[3];
            (**(code **)(**(longlong **)(puVar1 + 4) + 8))();
          }
          break;
        }
        iVar2 = *(int *)(puVar1 + 8);
      } while (iVar2 != -1);
    }
  }
  if ((local_8 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14765c9d2 FUN_14765c9d2 body=356 status=ok
// SIG undefined FUN_14765c9d2(void)

longlong * FUN_14765c9d2(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  char cVar1;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  longlong local_58 [2];
  longlong local_48 [2];
  longlong local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_3 + 0xd0) < 2) {
    FUN_1400021e4(param_2,param_1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_88);
  }
  FUN_1468707ca(&local_38,param_2);
  FUN_1407ec8fc(param_1,param_3 + 200,&local_38);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  cVar1 = FUN_140902d42(*param_2);
  if (cVar1 == '\0') {
    FUN_1400021e4(param_2,local_68);
    FUN_140d2be42(local_58,local_68);
    FUN_144a882a8(local_48,local_58,&DAT_149e065c6);
    FUN_144a7dea0(&local_38,local_48,param_1);
    if (&local_38 == param_1) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_1 != 0) {
        FUN_1400020a8();
      }
      *param_1 = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 1) = (undefined4)local_30;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_30._4_4_;
      local_30 = 0;
    }
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14765cb37 FUN_14765cb37 body=335 status=ok
// SIG undefined FUN_14765cb37(void)

longlong FUN_14765cb37(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  undefined2 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar5 = FUN_14622a6c4();
  if (cVar5 != '\0') {
    FUN_140b1283a(&local_58,&DAT_149e065c6,param_1);
    if (&local_58 == param_1) {
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_1 != 0) {
        FUN_1400020a8();
      }
      *param_1 = local_58;
      local_58 = 0;
      *(undefined4 *)(param_1 + 1) = local_50;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_4c;
    }
  }
  iVar1 = *(int *)(param_2 + 0x90);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_2 + 0x88);
    lVar8 = 0;
    do {
      lVar7 = *(longlong *)(lVar3 + lVar8);
      if (lVar7 != 0) {
        FUN_147b98996(lVar7,&local_58);
        iVar2 = (int)param_1[1];
        iVar4 = iVar2 + -1;
        if (iVar2 == 0) {
          iVar4 = 0;
        }
        puVar6 = &DAT_149dfb77a;
        if (iVar2 != 0) {
          puVar6 = (undefined2 *)*param_1;
        }
        cVar5 = FUN_144a38768(&local_58,puVar6,iVar4,1);
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        if (cVar5 != '\0') goto LAB_14765cc37;
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar1 * 8 != lVar8);
  }
  lVar7 = 0;
LAB_14765cc37:
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14765cc88 FUN_14765cc88 body=213 status=ok
// SIG undefined FUN_14765cc88(void)

void FUN_14765cc88(undefined8 param_1,undefined4 param_2,longlong *param_3,undefined1 param_4,
                  undefined4 param_5,undefined2 param_6)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = param_3[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_3;
    lVar5 = 0;
    do {
      local_50 = *(undefined8 *)(lVar1 + lVar5);
      uVar2 = (uint)((ulonglong)local_50 >> 0x10);
      uVar6 = (uint)local_50 & 0xffff;
      uVar4 = FUN_14768bac4(param_1,((uint)local_50 << 0x10 | uVar6) +
                                    (int)((ulonglong)local_50 >> 0x20) +
                                    (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4),&local_50);
      local_58 = param_4;
      FUN_14765cd5e(uVar4,param_6,param_2,param_5);
      lVar5 = lVar5 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14765cd5e FUN_14765cd5e body=172 status=ok
// SIG undefined FUN_14765cd5e(void)

void FUN_14765cd5e(longlong param_1,short param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = param_1 + 8;
  lVar2 = *(longlong *)(param_1 + 0x28);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = lVar5;
  }
  iVar1 = *(int *)(param_1 + 0x30);
  lVar6 = (longlong)iVar1;
  if (lVar6 != 0) {
    lVar4 = lVar6 << 4;
    do {
      if (*(short *)(lVar3 + 4) == param_2) {
        if (lVar3 != 0) goto LAB_14765cddb;
        break;
      }
      lVar3 = lVar3 + 0x10;
      lVar4 = lVar4 + -0x10;
    } while (lVar4 != 0);
  }
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_14768c896(lVar5,iVar1);
    lVar2 = *(longlong *)(param_1 + 0x28);
  }
  if (lVar2 != 0) {
    lVar5 = lVar2;
  }
  lVar6 = lVar6 * 0x10;
  lVar3 = lVar5 + lVar6;
  *(undefined4 *)(lVar5 + lVar6) = param_3;
  *(short *)(lVar5 + 4 + lVar6) = param_2;
LAB_14765cddb:
  *(undefined4 *)(lVar3 + 8) = param_4;
  *(undefined1 *)(lVar3 + 0xc) = param_5;
  return;
}



// FUNCTION 14765ce0a FUN_14765ce0a body=211 status=ok
// SIG undefined FUN_14765ce0a(void)

void FUN_14765ce0a(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  longlong *plVar7;
  
  if ((longlong)(int)param_2[1] != 0) {
    plVar7 = (longlong *)*param_2;
    plVar1 = plVar7 + (int)param_2[1];
    do {
      if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
        lVar2 = *plVar7;
        uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
        uVar6 = (uint)lVar2 & 0xffff;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = param_1 + 7;
        }
        iVar4 = *(int *)((longlong)plVar5 +
                        (ulonglong)
                        ((int)param_1[9] - 1U &
                        (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar6) +
                        (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4)) * 4);
        if (iVar4 != -1) {
          do {
            plVar5 = (longlong *)(*param_1 + (longlong)iVar4 * 0x48);
            if (*plVar5 == lVar2) {
              if (plVar5 + 1 != (longlong *)0x0 && plVar5 != (longlong *)0x0) {
                FUN_14765cede(plVar5 + 1,param_3);
              }
              break;
            }
            iVar4 = (int)plVar5[8];
          } while (iVar4 != -1);
        }
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar1);
  }
  return;
}



// FUNCTION 14765cede FUN_14765cede body=239 status=ok
// SIG undefined FUN_14765cede(void)

void FUN_14765cede(longlong param_1,short param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  short *psVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar2 = *(int *)(param_1 + 0x30);
  lVar6 = (longlong)iVar2;
  if (lVar6 != 0) {
    lVar4 = param_1 + 8;
    if (*(longlong *)(param_1 + 0x28) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x28);
    }
    iVar13 = 0;
    bVar7 = *(short *)(lVar4 + 4) == param_2;
    iVar10 = 0;
    do {
      lVar9 = (longlong)iVar10;
      iVar3 = iVar10 + 1;
      if (iVar10 + 1 < iVar2) {
        iVar3 = iVar2;
      }
      lVar5 = lVar9 * 0x10;
      psVar8 = (short *)(lVar4 + 0x14 + lVar5);
      iVar11 = iVar10;
      do {
        lVar9 = lVar9 + 1;
        iVar12 = iVar3;
        if (lVar6 <= lVar9) break;
        sVar1 = *psVar8;
        iVar11 = iVar11 + 1;
        psVar8 = psVar8 + 8;
        iVar12 = iVar11;
      } while (bVar7 == (sVar1 == param_2));
      if (bVar7 == false) {
        if (iVar13 != iVar10) {
          memmove((void *)((longlong)iVar13 * 0x10 + lVar4),(void *)(lVar5 + lVar4),
                  (longlong)(iVar12 - iVar10) << 4);
        }
        iVar13 = iVar13 + (iVar12 - iVar10);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar10 = iVar12;
    } while (lVar9 < lVar6);
    *(int *)(param_1 + 0x30) = iVar13;
  }
  return;
}



// FUNCTION 14765cfce FUN_14765cfce body=1323 status=ok
// SIG undefined FUN_14765cfce(void)

void FUN_14765cfce(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  char cVar7;
  undefined1 uVar8;
  char cVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined2 *puVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  longlong *plVar20;
  longlong *plVar21;
  undefined1 auStack_108 [43];
  undefined1 local_dd;
  uint local_dc;
  longlong *local_d8;
  longlong *local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined **local_80;
  longlong *local_78;
  ulonglong uStack_70;
  undefined2 *local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar11 = (**(code **)(*param_2 + 0x180))(param_2);
  if (lVar11 != 0) {
    local_78 = (longlong *)0x0;
    uStack_70 = 0;
    lVar13 = param_2[0xa9];
    local_80 = &PTR_FUN_14a4d6d30;
    plVar1 = param_1 + 2;
    local_68 = (undefined2 *)0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    iVar17 = 0;
    local_60 = plVar1;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
      iVar17 = (int)param_1[5];
    }
    local_90 = local_58;
    uVar6 = local_90;
    local_88 = local_50;
    local_84 = local_4c;
    local_a0 = local_68;
    local_98 = local_60;
    local_90._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_a8 = param_1;
    if ((local_90._4_4_ != iVar17) || (local_60 != plVar1)) {
      local_dc = 0;
      iVar10 = local_90._4_4_;
      local_c8 = lVar11;
      local_c0 = lVar13;
      local_90 = uVar6;
      do {
        lVar11 = *local_a8;
        plVar20 = (longlong *)(lVar11 + (longlong)iVar10 * 0x48);
        if ((int)plVar20[7] == 0) {
          iVar10 = (int)param_1[0x1d];
          *(uint *)(param_1 + 0x1d) = iVar10 + 1U;
          if (*(uint *)((longlong)param_1 + 0xec) < iVar10 + 1U) {
            FUN_146276acc(param_1 + 0x14,iVar10);
          }
          plVar12 = (longlong *)param_1[0x1c];
          if ((longlong *)param_1[0x1c] == (longlong *)0x0) {
            plVar12 = param_1 + 0x14;
          }
          plVar12[iVar10] = *plVar20;
        }
        else {
          FUN_14765c9d2(&local_68,plVar20,local_c8);
          puVar15 = &DAT_149dfb77a;
          if ((int)local_60 != 0) {
            puVar15 = local_68;
          }
          FUN_1446f470e(&local_b0,puVar15,1);
          if (local_68 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          plVar12 = (longlong *)FUN_14765d4fa(param_1,local_b0);
          if (plVar12 != (longlong *)0x0) {
            plVar14 = (longlong *)(lVar11 + (longlong)iVar10 * 0x48 + 8);
            plVar21 = plVar20 + 2;
            if ((longlong *)plVar20[6] != (longlong *)0x0) {
              plVar21 = (longlong *)plVar20[6];
            }
            local_d8 = plVar14;
            if ((longlong)(int)plVar20[7] == 0) {
LAB_14765d453:
              if ((*(char *)((longlong)plVar20 + 9) == '\x01') &&
                 (cVar7 = *(char *)plVar14, cVar9 = (**(code **)(*plVar12 + 0x2e0))(plVar12),
                 cVar7 != cVar9)) {
                cVar7 = *(char *)plVar14;
                FUN_14039914a(plVar12,CONCAT71((int7)((ulonglong)plVar14 >> 8),cVar7) & 0xffffffff);
                cVar9 = (char)local_dc;
                local_dc = local_dc & 0xff;
                if (cVar9 == '\0') {
                  local_dc = 2;
                }
                if (cVar7 == '\x01') goto LAB_14765d4ac;
              }
            }
            else {
              iVar10 = -0x80000000;
              lVar11 = 0;
              uVar16 = 0;
              do {
                uVar18 = -(uint)(*(char *)((longlong)plVar21 + lVar11 + 0xc) != '\0') | 1;
                iVar3 = *(int *)((longlong)plVar21 + lVar11 + 8);
                uVar19 = 0;
                if (iVar3 == iVar10) {
                  uVar19 = uVar18;
                }
                uVar16 = uVar16 + uVar19;
                if (iVar10 < iVar3) {
                  uVar16 = uVar18;
                  iVar10 = iVar3;
                }
                lVar11 = lVar11 + 0x10;
              } while ((longlong)(int)plVar20[7] * 0x10 != lVar11);
              local_d0 = plVar12;
              if (uVar16 == 0) goto LAB_14765d453;
              cVar7 = (**(code **)(*plVar12 + 0x2e0))(plVar12);
              if ((bool)cVar7 == 0 < (int)uVar16) goto LAB_14765d198;
              if (*(char *)((longlong)plVar20 + 9) == '\0') {
                uVar8 = (**(code **)(*local_d0 + 0x2e0))();
                *(undefined1 *)(plVar20 + 1) = uVar8;
                *(undefined1 *)((longlong)plVar20 + 9) = 1;
              }
              uVar5 = uStack_70;
              local_dd = 0 < (int)uVar16;
              FUN_14768c0c0(local_78,uStack_70 & 0xffffffff);
              uVar4 = uStack_70 >> 0x20;
              uStack_70 = uStack_70 & 0xffffffff00000000;
              if (((longlong)uVar5 < 0) && ((int)uVar4 != 0)) {
                FUN_14768c10a(&local_78);
              }
              FUN_14765d672(local_d8,local_c0,&local_78);
              if ((longlong)(int)uStack_70 != 0) {
                local_b8 = local_78 + (longlong)(int)uStack_70 * 2;
                plVar20 = local_78;
                do {
                  lVar11 = *plVar20;
                  local_d8 = (longlong *)plVar20[1];
                  if (local_d8 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(local_d8 + 1) = (int)local_d8[1] + 1;
                    UNLOCK();
                  }
                  lVar13 = DAT_14cab5fb8;
                  if (DAT_14cab5fb8 == 0) {
                    lVar13 = FUN_14570767c(&DAT_14cab5fb8,0);
                  }
                  FUN_14027378e(lVar11 + 0x60,local_d0,lVar13,&local_80);
                  if (local_d8 != (longlong *)0x0) {
                    LOCK();
                    plVar12 = local_d8 + 1;
                    *(int *)plVar12 = (int)*plVar12 + -1;
                    UNLOCK();
                    if ((int)*plVar12 == 0) {
                      (**(code **)*local_d8)(local_d8);
                      LOCK();
                      piVar2 = (int *)((longlong)local_d8 + 0xc);
                      *piVar2 = *piVar2 + -1;
                      UNLOCK();
                      if (*piVar2 == 0) {
                        (**(code **)(*local_d8 + 0x10))();
                      }
                    }
                  }
                  plVar20 = plVar20 + 2;
                } while (plVar20 != local_b8);
              }
              plVar12 = local_d0;
              FUN_14039914a(local_d0,local_dd);
              cVar7 = (char)local_dc;
              local_dc = local_dc & 0xff;
              if (cVar7 == '\0') {
                local_dc = 2;
              }
              if ((int)uVar16 < 1) goto LAB_14765d198;
LAB_14765d4ac:
              if (plVar12[0x2f] == 0) {
                local_dc = 1;
                (**(code **)(*plVar12 + 0x2c0))(plVar12,1);
              }
            }
          }
        }
LAB_14765d198:
        local_90 = CONCAT44(local_90._4_4_,(uint)local_90 & ~local_a0._4_4_);
        FUN_1449c0562(&local_a0);
        iVar10 = local_90._4_4_;
      } while (local_a8 != param_1 || (local_98 != plVar1 || local_90._4_4_ != iVar17));
      uVar6 = local_90;
      if ((char)local_dc != '\0') {
        FUN_143786ce4(local_c8);
        uVar6 = local_90;
      }
    }
    local_90 = uVar6;
    FUN_14768c0c0(local_78,uStack_70 & 0xffffffff);
    if (local_78 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14765d4fa FUN_14765d4fa body=375 status=ok
// SIG undefined FUN_14765d4fa(void)

longlong FUN_14765d4fa(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined1 local_58 [16];
  longlong local_48;
  longlong *local_40;
  undefined8 *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = (longlong *)(param_1 + 0x50);
  local_48 = param_2;
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    uVar3 = (uint)((ulonglong)param_2 >> 0x10);
    uVar6 = (uint)param_2 & 0xffff;
    lVar4 = param_1 + 0x88;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x90);
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x98) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar6) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        plVar2 = (longlong *)(*plVar1 + (longlong)iVar5 * 0x18);
        if (*plVar2 == param_2) {
          if (plVar2 != (longlong *)&DAT_fffffffffffffff8 && plVar2 != (longlong *)0x0) {
            lVar4 = FUN_14479d2ce();
            if (lVar4 != 0) goto LAB_14765d538;
            FUN_14768c25a(plVar1,param_2);
          }
          break;
        }
        iVar5 = (int)plVar2[2];
      } while (iVar5 != -1);
    }
  }
  if (param_2 != 0) {
    FUN_1400021e4(&local_48,local_58);
    lVar4 = FUN_14765cb37(local_58,param_3);
    if (lVar4 != 0) {
      local_60 = 0;
      FUN_14485c47a(&local_60,lVar4);
      local_40 = &local_48;
      local_38 = &local_60;
      FUN_14768c3de(plVar1,local_2c,&local_40,0);
      goto LAB_14765d538;
    }
  }
  lVar4 = 0;
LAB_14765d538:
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4;
}



// FUNCTION 14765d672 FUN_14765d672 body=301 status=ok
// SIG undefined FUN_14765d672(void)

void FUN_14765d672(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar10 = param_1 + 8;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar10 = *(longlong *)(param_1 + 0x28);
  }
  iVar3 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar3 != 0) {
    lVar9 = 0;
    do {
      uVar4 = *(uint *)(lVar10 + lVar9);
      uVar6 = uVar4 & 0xffff;
      if ((int)uVar6 < *(int *)(param_2 + 0x30)) {
        lVar8 = *(longlong *)(param_2 + 0x28);
        if (*(longlong *)(param_2 + 0x28) == 0) {
          lVar8 = param_2 + 0x18;
        }
        if ((*(uint *)(lVar8 + (ulonglong)(uVar6 >> 5) * 4) >> (uVar4 & 0x1f) & 1) != 0) {
          lVar8 = *(longlong *)(param_2 + 8);
          lVar7 = (ulonglong)uVar6 * 0x128;
          if (uVar4 >> 0x10 == (uint)*(ushort *)(lVar8 + 0x11c + lVar7)) {
            local_58 = *(undefined8 *)(lVar8 + 0x100 + lVar7);
            plVar5 = *(longlong **)(lVar8 + 0x108 + lVar7);
            local_50 = plVar5;
            if (plVar5 == (longlong *)0x0) {
              FUN_14768c998(param_3,&local_58);
            }
            else {
              LOCK();
              *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
              UNLOCK();
              FUN_14768c998(param_3,&local_58);
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
            }
          }
        }
      }
      lVar9 = lVar9 + 0x10;
    } while ((longlong)iVar3 * 0x10 != lVar9);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14765d7a0 FUN_14765d7a0 body=671 status=ok
// SIG undefined FUN_14765d7a0(void)

void FUN_14765d7a0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  undefined2 *puVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  char cVar13;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong *local_70;
  undefined2 *local_68;
  int local_60;
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = (**(code **)(*param_2 + 0x180))(param_2);
  if (lVar4 != 0) {
    plVar11 = (longlong *)param_1[0x1c];
    if ((longlong *)param_1[0x1c] == (longlong *)0x0) {
      plVar11 = param_1 + 0x14;
    }
    if ((longlong)(int)param_1[0x1d] == 0) {
      cVar13 = '\0';
    }
    else {
      plVar12 = plVar11 + (int)param_1[0x1d];
      cVar13 = '\0';
      local_70 = param_1 + 7;
      do {
        local_50 = *plVar11;
        FUN_14765c9d2(&local_68,&local_50,lVar4);
        puVar9 = &DAT_149dfb77a;
        if (local_60 != 0) {
          puVar9 = local_68;
        }
        FUN_1446f470e(&local_58,puVar9,1);
        if (local_68 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        plVar5 = (longlong *)FUN_14765d4fa(param_1,local_58,lVar4);
        if (plVar5 != (longlong *)0x0) {
          if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
LAB_14765d906:
            if (DAT_00000009 == '\0') goto LAB_14765d874;
          }
          else {
            uVar2 = (uint)((ulonglong)local_50 >> 0x10);
            uVar8 = (uint)local_50 & 0xffff;
            plVar7 = (longlong *)param_1[8];
            if ((longlong *)param_1[8] == (longlong *)0x0) {
              plVar7 = local_70;
            }
            iVar6 = *(int *)((longlong)plVar7 +
                            (ulonglong)
                            ((int)param_1[9] - 1U &
                            (int)((ulonglong)local_50 >> 0x20) + ((uint)local_50 << 0x10 | uVar8) +
                            (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) * 4);
            if (iVar6 == -1) goto LAB_14765d906;
            iVar10 = iVar6;
            do {
              plVar7 = (longlong *)(*param_1 + (longlong)iVar10 * 0x48);
              if (*plVar7 == local_50) goto LAB_14765d96a;
              iVar10 = (int)plVar7[8];
            } while (iVar10 != -1);
            plVar7 = (longlong *)0x0;
LAB_14765d96a:
            if (*(char *)((longlong)plVar7 + 9) == '\0') goto LAB_14765d874;
            if (iVar6 != -1) {
              do {
                plVar7 = (longlong *)(*param_1 + (longlong)iVar6 * 0x48);
                if (*plVar7 == local_50) goto LAB_14765d921;
                iVar6 = (int)plVar7[8];
              } while (iVar6 != -1);
            }
          }
          plVar7 = (longlong *)0x0;
LAB_14765d921:
          cVar1 = (char)plVar7[1];
          local_78 = plVar12;
          cVar3 = (**(code **)(*plVar5 + 0x2e0))(plVar5);
          plVar12 = local_78;
          if (cVar1 != cVar3) {
            FUN_14039914a(plVar5,CONCAT71((int7)((ulonglong)&local_68 >> 8),cVar1) & 0xffffffff);
            plVar12 = local_78;
            if (cVar13 == '\0') {
              cVar13 = '\x02';
            }
            if ((cVar1 != '\0') && (plVar5[0x2f] == 0)) {
              cVar13 = '\x01';
              (**(code **)(*plVar5 + 0x2c0))(plVar5,1);
            }
          }
        }
LAB_14765d874:
        FUN_14768c13a(param_1,local_50);
        plVar11 = plVar11 + 1;
      } while (plVar11 != plVar12);
    }
    *(undefined4 *)(param_1 + 0x1d) = 0;
    if (*(int *)((longlong)param_1 + 0xec) != 0) {
      FUN_1407d00f0(param_1 + 0x14,0);
    }
    if (cVar13 != '\0') {
      FUN_143786ce4(lVar4,cVar13);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14765da40 FUN_14765da40 body=42 status=ok
// SIG undefined FUN_14765da40(void)

void FUN_14765da40(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145884814(*(undefined8 *)(param_1 + 0x28));
  FUN_14129a52a(*(longlong *)(param_1 + 0x28) + 0x2a0,param_1,uVar1);
  return;
}



// FUNCTION 14765da6a FUN_14765da6a body=1233 status=ok
// SIG undefined FUN_14765da6a(void)

void FUN_14765da6a(longlong param_1)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  char cVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  short sVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong *plVar15;
  bool bVar16;
  bool bVar17;
  undefined1 auStack_1b8 [32];
  int local_198;
  short local_190;
  char local_17f;
  short local_17e;
  short local_17c;
  undefined2 local_17a;
  longlong local_178;
  int local_16c;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  undefined8 local_138;
  undefined4 local_130;
  longlong local_128;
  short *local_120;
  longlong *local_118;
  int local_110;
  longlong local_108;
  longlong *local_100;
  int local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  short local_c0;
  undefined1 auStack_be [14];
  int local_b0;
  undefined1 local_a8 [32];
  undefined8 local_88;
  undefined8 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  cVar6 = FUN_147546242(param_1 + 0x48,*(longlong *)(param_1 + 0x28) + 0x28);
  if (cVar6 != '\0') {
    lVar8 = FUN_14009d2a0();
    lVar9 = FUN_14038fb82();
    sVar1 = *(short *)(lVar8 + 0x4e);
    local_17a = *(undefined2 *)(lVar8 + 0x5e);
    sVar11 = *(short *)(lVar9 + 0xf18);
    lVar9 = *(longlong *)(param_1 + 0x28);
    local_88 = 0x10000000000;
    local_60 = 0x10000000000;
    local_58 = 0;
    uStack_50 = 0;
    local_160 = lVar8;
    local_120 = &local_c0;
    local_118 = (longlong *)auStack_be;
    local_c0 = sVar1;
    FUN_1447c44f6(local_a8,&local_120);
    local_120 = &local_c0;
    local_118 = (longlong *)auStack_be;
    local_c0 = sVar11;
    FUN_1447c44f6(local_a8,&local_120);
    if (sVar11 != -1 && sVar1 != -1) {
      local_17f = *(char *)(lVar9 + 0x298);
      local_168 = param_1;
      FUN_14150e78a(&local_c0,lVar9 + 0x28,local_a8);
      local_16c = *(int *)(lVar9 + 0x38);
      if (local_b0 != local_16c) {
        local_158 = local_168 + 0xb8;
        local_17e = sVar11;
        local_17c = sVar1;
        do {
          sVar11 = local_17c;
          sVar1 = local_17e;
          local_178 = auStack_be._6_8_;
          lVar8 = (longlong)local_b0;
          lVar9 = *(longlong *)(*(longlong *)(auStack_be._6_8_ + 0x60) + lVar8 * 8);
          if (local_17f == '\0') {
            *(undefined4 *)(lVar9 + 0x14) = 0;
            lVar14 = lVar9;
          }
          else {
            lVar14 = 0;
          }
          FUN_1410fbae8(lVar9,&local_138,local_17a);
          if (*(ushort *)(lVar9 + 0xc) != 0) {
            plVar12 = *(longlong **)(lVar9 + 0x28);
            lVar10 = (ulonglong)*(ushort *)(lVar9 + 0xc) << 5;
            do {
              if (*(short *)((longlong)plVar12 + 0x1e) == sVar1) goto LAB_14765dc89;
              plVar12 = plVar12 + 4;
              lVar10 = lVar10 + -0x20;
            } while (lVar10 != 0);
          }
          plVar12 = (longlong *)0x0;
LAB_14765dc89:
          iVar3 = *(int *)(lVar9 + 0x14);
          local_150 = lVar14;
          if (iVar3 == 1) {
            AcquireSRWLockShared((PSRWLOCK)(plVar12 + 1));
          }
          LOCK();
          *(int *)(plVar12 + 3) = (int)plVar12[3] + 1;
          UNLOCK();
          lVar14 = *plVar12;
          if (*(ushort *)(lVar9 + 0xc) != 0) {
            plVar15 = *(longlong **)(lVar9 + 0x28);
            lVar10 = (ulonglong)*(ushort *)(lVar9 + 0xc) << 5;
            do {
              if (*(short *)((longlong)plVar15 + 0x1e) == sVar11) goto LAB_14765dcb6;
              plVar15 = plVar15 + 4;
              lVar10 = lVar10 + -0x20;
            } while (lVar10 != 0);
          }
          plVar15 = (longlong *)0x0;
LAB_14765dcb6:
          iVar4 = *(int *)(lVar9 + 0x14);
          if (iVar4 == 1) {
            AcquireSRWLockShared((PSRWLOCK)(plVar15 + 1));
          }
          LOCK();
          *(int *)(plVar15 + 3) = (int)plVar15[3] + 1;
          UNLOCK();
          local_140 = *plVar15;
          psVar5 = *(short **)(lVar9 + 0x18);
          local_e8 = local_138;
          local_e0 = local_130;
          local_148 = local_128;
          local_d8 = local_128;
          lVar9 = lVar8 * 0x28 + *(longlong *)(local_178 + 8);
          uVar2 = *(ushort *)(local_160 + 0x11a);
          if ((uVar2 == 0xffff) ||
             (*(uint *)(lVar9 + 0x20) == (uint)uVar2 ||
              (int)*(uint *)(lVar9 + 0x20) < (int)(uint)uVar2)) {
            bVar16 = false;
          }
          else {
            bVar16 = (*(uint *)(lVar9 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) != 0;
          }
          uVar2 = *(ushort *)(local_160 + 0x11c);
          if ((uVar2 == 0xffff) ||
             (*(uint *)(lVar9 + 0x20) == (uint)uVar2 ||
              (int)*(uint *)(lVar9 + 0x20) < (int)(uint)uVar2)) {
            bVar17 = false;
          }
          else {
            bVar17 = (*(uint *)(lVar9 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) != 0;
          }
          local_120 = psVar5;
          local_118 = plVar15;
          local_110 = iVar4;
          local_108 = local_140;
          local_100 = plVar12;
          local_f8 = iVar3;
          local_f0 = lVar14;
          if (*(short *)(*(longlong *)(*(longlong *)(local_178 + 0x60) + lVar8 * 8) + 0xe) != 0) {
            uVar13 = 0;
            do {
              lVar9 = *(longlong *)(lVar14 + uVar13 * 8);
              if (lVar9 != 0) {
                sVar1 = psVar5[uVar13];
                uVar7 = FUN_1475c9c1e(lVar9);
                if (bVar16) {
                  if (local_148 == 0) {
                    sVar11 = 0;
                  }
                  else {
                    sVar11 = *(short *)(local_148 + uVar13 * 2);
                  }
                  local_198 = (int)sVar11;
                  local_138 = *(undefined8 *)(lVar9 + 0x108);
                  local_130 = *(undefined4 *)(lVar9 + 0x110);
                  local_190 = sVar1;
                  FUN_14765cc88(local_158,*(undefined4 *)(local_140 + uVar13 * 4),&local_138,uVar7);
                }
                if (bVar17) {
                  local_d0 = *(undefined8 *)(lVar9 + 0x108);
                  local_c8 = *(undefined4 *)(lVar9 + 0x110);
                  FUN_14765ce0a(local_158,&local_d0,sVar1);
                }
              }
              uVar13 = uVar13 + 1;
            } while (uVar13 < *(ushort *)
                               (*(longlong *)(*(longlong *)(local_178 + 0x60) + lVar8 * 8) + 0xe));
          }
          FUN_14768ca9e(&local_120);
          if (local_150 != 0) {
            *(undefined4 *)(local_150 + 0x14) = 1;
          }
          local_b0 = FUN_1403b8464(&local_c0,local_b0 + 1);
        } while (local_b0 != local_16c);
      }
      param_1 = local_168;
      if (CONCAT62(auStack_be._0_6_,local_c0) != 0) {
        if (*(char *)(auStack_be._6_8_ + 0x270) == '\0') {
          *(int *)(auStack_be._6_8_ + 0x264) = *(int *)(auStack_be._6_8_ + 0x264) + -1;
        }
        else {
          LOCK();
          *(int *)(auStack_be._6_8_ + 0x264) = *(int *)(auStack_be._6_8_ + 0x264) + -1;
          UNLOCK();
        }
      }
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_14765cfce(param_1 + 0xb8,*(undefined8 *)(param_1 + 0x28));
  }
  if ((local_48 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14765df50 FUN_14765df50 body=346 status=ok
// SIG undefined FUN_14765df50(void)

void FUN_14765df50(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1412163f0(*(longlong *)(param_1 + 0x28) + 0x430,&local_30,DAT_14cab63ac);
  plVar1 = local_28;
  *(undefined8 *)(param_1 + 0x40) = local_30;
  local_30 = 0;
  plVar3 = *(longlong **)(param_1 + 0x48);
  if (local_28 == plVar3) {
LAB_14765dfd5:
    plVar3 = local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
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
  else {
    local_28 = (longlong *)0x0;
    *(longlong **)(param_1 + 0x48) = plVar1;
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
      goto LAB_14765dfd5;
    }
  }
  FUN_1412167f8(*(longlong *)(param_1 + 0x28) + 0x430,&local_30,DAT_14cab63b0);
  plVar1 = local_28;
  *(undefined8 *)(param_1 + 0x50) = local_30;
  local_30 = 0;
  plVar3 = *(longlong **)(param_1 + 0x58);
  if (local_28 != plVar3) {
    local_28 = (longlong *)0x0;
    *(longlong **)(param_1 + 0x58) = plVar1;
    if (plVar3 == (longlong *)0x0) goto LAB_14765e09d;
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
  plVar3 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
LAB_14765e09d:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14765e0bc FUN_14765e0bc body=706 status=ok
// SIG undefined FUN_14765e0bc(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_14765e0bc(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_1d8 [32];
  undefined2 local_1b8;
  undefined2 *local_1b0;
  undefined8 *local_1a8;
  undefined2 local_19a;
  undefined2 local_198;
  undefined2 local_196;
  undefined2 local_194;
  undefined1 local_192 [26];
  undefined8 local_178;
  undefined1 local_170 [32];
  undefined8 local_150;
  longlong local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined **local_130;
  longlong local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  longlong local_d0;
  undefined4 local_c8;
  undefined1 local_c0 [32];
  undefined8 local_a0;
  undefined1 local_98 [32];
  undefined8 local_78;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  lVar1 = FUN_14009d2a0();
  lVar2 = FUN_14038fb82();
  local_a0 = 0x10000000000;
  local_78 = 0x10000000000;
  local_70 = 0;
  uStack_68 = 0;
  local_198 = *(undefined2 *)(lVar2 + 0xfc);
  local_128 = (longlong)local_192;
  local_196 = *(undefined2 *)(lVar1 + 0x4e);
  local_194 = *(undefined2 *)(lVar1 + 0x11a);
  local_130 = (undefined **)&local_198;
  FUN_1447c44f6(local_c0,&local_130);
  local_198 = *(undefined2 *)(lVar1 + 0x122);
  local_128 = (longlong)&local_196;
  local_130 = (undefined **)&local_198;
  FUN_1447c44f6(local_98,&local_130);
  local_130 = &PTR_FUN_14a4d6d60;
  local_128 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x548);
  local_f0 = 0;
  local_e8 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_e4 = 0xffffffff00000080;
  local_dc = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_120 = FUN_14009d2a0();
  local_118 = FUN_14038fb82();
  FUN_140857d6a(*(longlong *)(param_1 + 0x28) + 0x28,local_c0,&local_130,1);
  local_178 = 0x10000000000;
  local_150 = 0x10000000000;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  lVar3 = FUN_14009d2a0();
  local_19a = *(undefined2 *)(lVar3 + 0x11a);
  local_1b0 = &local_19a;
  local_1a8 = (undefined8 *)&local_198;
  FUN_1447c44f6(&local_198,&local_1b0);
  local_19a = *(undefined2 *)(lVar1 + 0x5c);
  local_1b0 = &local_19a;
  local_1a8 = (undefined8 *)&local_198;
  FUN_1447c44f6(local_170,&local_1b0);
  local_19a = *(undefined2 *)(lVar2 + 0xfc);
  local_1b0 = &local_19a;
  local_1a8 = (undefined8 *)&local_198;
  FUN_1447c44f6(&local_198,&local_1b0);
  local_1b8 = *(undefined2 *)(lVar2 + 0xea);
  FUN_14765e380(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x28),&local_198,
                *(undefined2 *)(lVar2 + 0xfa));
  local_1b8 = *(undefined2 *)(lVar2 + 0xee);
  FUN_14765e492(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x28),&local_198,
                *(undefined2 *)(lVar2 + 0xfa));
  local_1b8 = *(undefined2 *)(lVar2 + 0xf0);
  FUN_14765e492(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x28),&local_198,
                *(undefined2 *)(lVar2 + 0xfa));
  if (local_148 != 0) {
    FUN_1400020a8();
  }
  local_130 = &PTR_FUN_14a4d6d60;
  local_c8 = 0;
  if (local_d0 != 0) {
    FUN_1400020a8();
  }
  FUN_147664bd8(&local_110);
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14765e380 FUN_14765e380 body=273 status=ok
// SIG undefined FUN_14765e380(void)

void FUN_14765e380(undefined8 param_1,longlong param_2,longlong param_3,undefined2 param_4,
                  undefined2 param_5)

{
  longlong lVar1;
  undefined1 auStack_188 [32];
  undefined1 local_168 [2];
  undefined2 local_166;
  undefined2 local_164;
  undefined2 local_162;
  undefined1 local_15f;
  undefined4 local_15c;
  undefined1 local_158;
  undefined1 local_150 [80];
  longlong local_100;
  undefined8 local_d0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98 [80];
  longlong local_48;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_a0 = param_1;
  FUN_1403b8af8(local_98,param_3);
  local_38 = *(undefined4 *)(param_3 + 0x60);
  lVar1 = FUN_14009d2a0();
  local_166 = *(undefined2 *)(lVar1 + 0x50);
  local_162 = param_5;
  local_15f = 0;
  local_15c = 0x6ff;
  local_158 = 0;
  local_164 = param_4;
  FUN_1403b8af8(local_150,param_3);
  local_d0 = 0x10000000000;
  local_a8 = 0x10000000000;
  FUN_140fc3e02(local_168,local_150);
  FUN_14768d976(local_168,param_2 + 0x28,local_150,&local_a0);
  if (local_100 != 0) {
    FUN_1400020a8();
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14765e492 FUN_14765e492 body=273 status=ok
// SIG undefined FUN_14765e492(void)

void FUN_14765e492(undefined8 param_1,longlong param_2,longlong param_3,undefined2 param_4,
                  undefined2 param_5)

{
  longlong lVar1;
  undefined1 auStack_188 [32];
  undefined1 local_168 [2];
  undefined2 local_166;
  undefined2 local_164;
  undefined2 local_162;
  undefined1 local_15f;
  undefined4 local_15c;
  undefined1 local_158;
  undefined1 local_150 [80];
  longlong local_100;
  undefined8 local_d0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98 [80];
  longlong local_48;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_a0 = param_1;
  FUN_1403b8af8(local_98,param_3);
  local_38 = *(undefined4 *)(param_3 + 0x60);
  lVar1 = FUN_14009d2a0();
  local_166 = *(undefined2 *)(lVar1 + 0x50);
  local_162 = param_5;
  local_15f = 0;
  local_15c = 0x6ff;
  local_158 = 0;
  local_164 = param_4;
  FUN_1403b8af8(local_150,param_3);
  local_d0 = 0x10000000000;
  local_a8 = 0x10000000000;
  FUN_140fc3e02(local_168,local_150);
  FUN_14768df06(local_168,param_2 + 0x28,local_150,&local_a0);
  if (local_100 != 0) {
    FUN_1400020a8();
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14765e5ac FUN_14765e5ac body=113 status=ok
// SIG undefined FUN_14765e5ac(void)

void FUN_14765e5ac(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(short *)(param_1 + 0x14) != -1) {
    lVar1 = FUN_14479d2ce(param_1);
    if (lVar1 != 0) {
      lVar2 = FUN_14009d2a0();
      FUN_1405e0ab4(lVar1 + 0x28,*(undefined2 *)(param_1 + 0x14),*(undefined2 *)(lVar2 + 0x11c));
    }
    *(undefined2 *)(param_1 + 0x14) = 0xffff;
  }
  if (*(short *)(param_1 + 0x18) != -1) {
    lVar1 = FUN_14479d2ce(param_1 + 8);
    if (lVar1 != 0) {
      FUN_14754610e(lVar1,*(undefined4 *)(param_1 + 0x16));
    }
    *(undefined4 *)(param_1 + 0x16) = 0xffff00ff;
  }
  return;
}



// FUNCTION 14765e61e FUN_14765e61e body=954 status=ok
// SIG undefined FUN_14765e61e(void)

void FUN_14765e61e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  ushort uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  undefined8 *local_168;
  undefined8 *local_160;
  longlong local_158;
  undefined8 *local_150;
  undefined2 local_142;
  undefined8 local_140;
  undefined8 *local_138;
  undefined2 local_130;
  undefined8 local_12e;
  undefined1 local_126 [11];
  undefined1 local_11b;
  undefined4 local_118;
  undefined1 local_114;
  undefined1 local_110 [9];
  byte local_107;
  uint local_104;
  byte local_fb;
  uint local_f8;
  undefined1 local_c8 [32];
  longlong local_a8;
  longlong local_a0;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar4 = FUN_14009d2a0();
  lVar5 = FUN_14038fb82();
  uVar2 = *(ushort *)(lVar5 + 0xf4);
  lVar6 = FUN_14482820e(*(longlong *)(param_1 + 0x28) + 0x28);
  if (((uVar2 == 0xffff) ||
      (*(uint *)(lVar6 + 0x20) == (uint)uVar2 || (int)*(uint *)(lVar6 + 0x20) < (int)(uint)uVar2))
     || ((*(uint *)(lVar6 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)) {
    uVar2 = *(ushort *)(lVar5 + 0xea);
    lVar6 = FUN_14482820e(*(longlong *)(param_1 + 0x28) + 0x28);
    if (((uVar2 != 0xffff) &&
        (*(uint *)(lVar6 + 0x20) != (uint)uVar2 && (int)(uint)uVar2 <= (int)*(uint *)(lVar6 + 0x20))
        ) && ((*(uint *)(lVar6 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) != 0))
    goto LAB_14765e69a;
  }
  else {
LAB_14765e69a:
    uVar3 = local_126._0_8_;
    local_130 = *(undefined2 *)(lVar5 + 0xfa);
    local_12e._0_6_ =
         CONCAT24(*(undefined2 *)(lVar4 + 0xbc),
                  CONCAT22(*(undefined2 *)(lVar5 + 0xea),*(undefined2 *)(lVar5 + 0xf4)));
    local_12e = local_12e & 0xffffffffffffff;
    local_126._2_4_ = 0x6ff;
    local_126[7] = SUB81(uVar3,7);
    local_126[6] = 0;
    local_160 = &local_140;
    local_140 = (undefined2 *)CONCAT62(local_140._2_6_,*(undefined2 *)(lVar4 + 0x5a));
    local_158 = (longlong)&local_140 + 2;
    FUN_1411c002e(&local_130,local_110);
    local_104 = *(uint *)(*(longlong *)(param_1 + 0x28) + 0x294);
    local_107 = local_107 & 0xfe | (local_104 & 0xfffffeff) == 1;
    local_178 = param_3;
    FUN_14330ba18(local_110,&local_150,*(longlong *)(param_1 + 0x28) + 0x28,param_2);
    if (local_150 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_150 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_150)(local_150,1);
      }
    }
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
  }
  uVar2 = *(ushort *)(lVar5 + 0xf8);
  lVar6 = FUN_14482820e(*(longlong *)(param_1 + 0x28) + 0x28);
  if (((uVar2 == 0xffff) ||
      (*(uint *)(lVar6 + 0x20) == (uint)uVar2 || (int)*(uint *)(lVar6 + 0x20) < (int)(uint)uVar2))
     || ((*(uint *)(lVar6 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)) {
    uVar2 = *(ushort *)(lVar5 + 0xf6);
    lVar6 = FUN_14482820e(*(longlong *)(param_1 + 0x28) + 0x28);
    if (((uVar2 == 0xffff) ||
        (*(uint *)(lVar6 + 0x20) == (uint)uVar2 || (int)*(uint *)(lVar6 + 0x20) < (int)(uint)uVar2))
       || ((*(uint *)(lVar6 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)) {
      uVar2 = *(ushort *)(lVar5 + 0xee);
      lVar6 = FUN_14482820e(*(longlong *)(param_1 + 0x28) + 0x28);
      if (((uVar2 == 0xffff) ||
          (*(uint *)(lVar6 + 0x20) == (uint)uVar2 || (int)*(uint *)(lVar6 + 0x20) < (int)(uint)uVar2
          )) || ((*(uint *)(lVar6 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)) {
        uVar2 = *(ushort *)(lVar5 + 0xf0);
        lVar6 = FUN_14482820e(*(longlong *)(param_1 + 0x28) + 0x28);
        if (((uVar2 == 0xffff) ||
            (*(uint *)(lVar6 + 0x20) == (uint)uVar2 ||
             (int)*(uint *)(lVar6 + 0x20) < (int)(uint)uVar2)) ||
           ((*(uint *)(lVar6 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0))
        goto LAB_14765e8f6;
      }
    }
  }
  local_130 = *(undefined2 *)(lVar5 + 0xfa);
  local_12e = (ulonglong)*(ushort *)(lVar5 + 0xf6) << 0x10 |
              (ulonglong)*(uint *)(lVar5 + 0xee) << 0x20 | (ulonglong)*(ushort *)(lVar5 + 0xf8);
  local_126._0_8_ = *(undefined8 *)(lVar4 + 0xbc);
  local_11b = 0;
  local_118 = 0x6ff;
  local_114 = 0;
  local_142 = *(undefined2 *)(lVar4 + 0x5a);
  FUN_1411bfd6a(local_110);
  local_140 = &local_142;
  local_138 = &local_140;
  FUN_1447c44f6(local_c8);
  local_f8 = *(uint *)(*(longlong *)(param_1 + 0x28) + 0x294);
  local_fb = local_fb & 0xfe | (local_f8 & 0xfffffeff) == 1;
  local_178 = param_3;
  FUN_14330be98(local_110,&local_168,*(longlong *)(param_1 + 0x28) + 0x28,param_2);
  if (local_168 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_168 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_168)(local_168,1);
    }
  }
  if (local_a0 != 0) {
    FUN_1400020a8();
  }
LAB_14765e8f6:
  if ((local_40 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14765e9da FUN_14765e9da body=56 status=ok
// SIG undefined FUN_14765e9da(void)

longlong FUN_14765e9da(longlong *param_1)

{
  longlong lVar1;
  
  if (DAT_14c76101e == '\x01') {
    lVar1 = FUN_1402d20ea(param_1 + 1);
    if (lVar1 == 0) {
      lVar1 = FUN_140cc27fc(param_1 + 1);
      return lVar1;
    }
  }
  else {
    lVar1 = *param_1;
  }
  return lVar1;
}



// FUNCTION 14765ea16 FUN_14765ea16 body=429 status=ok
// SIG undefined FUN_14765ea16(void)

void FUN_14765ea16(int *param_1,longlong param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  
  dVar7 = ((double)(int)*(undefined8 *)(param_2 + 0x18) * 0.0041666666666667) /
          (double)(int)((ulonglong)*(undefined8 *)(param_2 + 0x18) >> 0x20);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = dVar7;
  auVar10 = roundpd(auVar10,auVar10,1);
  dVar9 = auVar10._0_8_;
  dVar7 = dVar7 - dVar9;
  if (2147483647.0 <= dVar9) {
    dVar9 = 2147483647.0;
  }
  if (dVar9 <= -2147483648.0) {
    dVar9 = -2147483648.0;
  }
  iVar5 = (int)dVar7;
  iVar3 = (int)dVar9 + iVar5;
  fVar8 = *(float *)(param_2 + 0x14) - *(float *)(param_2 + 8);
  auVar10 = roundps(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8),1);
  iVar4 = (int)auVar10._0_4_ + (*(int *)(param_2 + 0x10) - *(int *)(param_2 + 4));
  fVar8 = (fVar8 - auVar10._0_4_) + 0.5 + -0.5;
  if (0.99999994 <= fVar8) {
    fVar8 = 0.99999994;
  }
  fVar6 = 0.0;
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  iVar1 = iVar4;
  if (iVar4 <= iVar3) {
    fVar11 = (float)dVar7 - (float)iVar5;
    fVar12 = fVar11;
    if (0.99999994 <= fVar11) {
      fVar12 = 0.99999994;
    }
    fVar12 = (float)(~-(uint)(0.0 < fVar11) & (uint)fVar11 | (uint)fVar12 & -(uint)(0.0 < fVar11)) +
             0.5 + -0.5;
    if (0.99999994 <= fVar12) {
      fVar12 = 0.99999994;
    }
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    if (fVar8 <= fVar12) {
      iVar1 = iVar3;
      fVar8 = fVar12;
    }
    if (iVar3 != iVar4) {
      iVar1 = iVar3;
      fVar8 = fVar12;
    }
  }
  iVar3 = *(int *)(param_2 + 0x24);
  if (SBORROW4(0,iVar3)) {
    piVar2 = (int *)(param_2 + 0x10);
    if (*(int *)(param_2 + 0x20) != 0) {
      piVar2 = (int *)(param_2 + 4);
    }
    iVar3 = *piVar2;
    fVar6 = (float)piVar2[1];
  }
  if (*(int *)(param_2 + 0x20) == 0) {
    fVar6 = fVar6 + fVar8;
    iVar4 = (int)ROUND(fVar6 + fVar6 + -0.5) >> 1;
    auVar10 = roundss(ZEXT416(0),ZEXT416((uint)fVar6),9);
    fVar6 = fVar6 - auVar10._0_4_;
  }
  else {
    fVar6 = fVar6 - fVar8;
    auVar10 = roundps(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6),1);
    iVar4 = (int)auVar10._0_4_;
    fVar6 = fVar6 - auVar10._0_4_;
    iVar1 = -iVar1;
  }
  fVar8 = fVar6 + 0.5 + -0.5;
  if (0.99999994 <= fVar8) {
    fVar8 = 0.99999994;
  }
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  *param_1 = iVar3 + iVar1 + iVar4;
  param_1[1] = (int)fVar8;
  return;
}



// FUNCTION 14765ebc4 FUN_14765ebc4 body=301 status=ok
// SIG undefined FUN_14765ebc4(void)

void FUN_14765ebc4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x5d8);
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x5e0);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if ((*(char *)(lVar3 + 0x7c) == ' ') && (*(char *)(param_1 + 0x91) == '\x01')) {
    local_38 = (undefined8 *)0x0;
    local_30 = 0;
    FUN_1446efa72(&local_38,0,2,0x10);
    local_30 = 2;
    *local_38 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    local_38[2] = lVar6;
    *local_38 = &PTR_FUN_14a4d87b0;
    local_38[3] = param_1;
    FUN_1448b6402(lVar3 + 0x58,local_40,&local_38);
    FUN_1449db362(&local_38);
  }
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
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14765ecf2 FUN_14765ecf2 body=3703 status=ok
// SIG undefined FUN_14765ecf2(void)

void FUN_14765ecf2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  int iVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  ulonglong *puVar17;
  longlong lVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined1 auStack_548 [47];
  char local_519;
  longlong local_518;
  ulonglong local_510;
  undefined8 *local_508;
  longlong local_500;
  undefined8 *local_4f8;
  int local_4ec;
  longlong *local_4e8;
  longlong local_4e0;
  longlong local_4d8;
  longlong local_4d0;
  longlong local_4c8;
  longlong local_4c0;
  longlong local_4b8;
  longlong local_4b0;
  longlong local_4a8;
  longlong local_4a0;
  longlong local_498;
  longlong local_490;
  longlong local_488;
  undefined2 *local_480;
  undefined8 *local_478;
  undefined2 local_470;
  undefined2 local_46e;
  undefined1 uStack_46c;
  undefined1 uStack_46b;
  undefined2 uStack_46a;
  undefined2 uStack_468;
  undefined2 uStack_466;
  undefined1 uStack_464;
  undefined5 uStack_463;
  undefined2 local_45e;
  undefined1 local_45b;
  undefined4 local_458;
  undefined1 local_454;
  ulonglong local_450;
  undefined4 local_448;
  longlong local_440;
  undefined8 local_438;
  undefined4 local_430;
  longlong local_428;
  undefined8 local_420;
  undefined4 local_418;
  longlong local_410;
  longlong local_408;
  undefined4 local_400;
  longlong local_3f8;
  undefined8 local_3f0;
  undefined4 local_3e8;
  longlong local_3e0;
  undefined8 local_3d8;
  undefined4 local_3d0;
  longlong local_3c8;
  longlong local_3c0;
  longlong local_3b8;
  int local_3b0;
  longlong local_3a8;
  undefined8 uStack_3a0;
  int local_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 local_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined8 local_358;
  undefined8 uStack_350;
  longlong local_348;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  int local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined8 local_318;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined8 local_2f8;
  undefined2 local_2e8;
  undefined2 local_2e6;
  undefined2 local_2e4;
  undefined2 local_2e2;
  undefined8 local_2e0;
  undefined8 local_2d8;
  longlong local_2d0;
  undefined2 local_2c2;
  undefined2 local_2c0;
  undefined2 local_2be;
  undefined2 local_2bc;
  undefined2 local_2ba;
  undefined2 local_2b8;
  undefined2 local_2b6;
  undefined2 local_2b4;
  undefined2 local_2b2;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  longlong local_290;
  int local_288;
  longlong local_280;
  longlong local_240;
  undefined1 local_1e0 [80];
  longlong local_190;
  undefined8 local_180;
  undefined8 local_178;
  longlong lStack_170;
  undefined8 local_168;
  longlong *plStack_160;
  longlong local_158;
  undefined8 local_150;
  undefined4 local_148 [2];
  longlong local_140;
  undefined8 local_138;
  undefined4 local_130;
  longlong local_128;
  longlong local_120;
  undefined4 local_118;
  longlong local_110;
  undefined8 local_108;
  undefined4 local_100;
  longlong local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  longlong local_e0;
  ulonglong local_d8;
  undefined4 local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined4 local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined4 local_a0;
  longlong local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_548;
  puVar10 = (undefined8 *)FUN_14009d2a0();
  uVar11 = FUN_14038fb82();
  FUN_14754766e(param_1);
  local_518 = param_1;
  lVar12 = FUN_147660774(*(undefined8 *)(param_1 + 0x28));
  if (lVar12 != 0) {
    FUN_14754766e(lVar12);
  }
  lVar12 = FUN_1476607d8(*(undefined8 *)(local_518 + 0x28));
  if (lVar12 != 0) {
    FUN_14754766e(lVar12);
  }
  lVar12 = local_518;
  FUN_1432d4c8e(*(longlong *)(local_518 + 0x28) + 0x28);
  lVar12 = *(longlong *)(lVar12 + 0x28) + 0x1f8;
  FUN_1403b8af8(local_1e0,lVar12);
  local_178 = (undefined8 *)((longlong)&local_2b0 + 2);
  local_2b0 = (ulonglong *)CONCAT62(local_2b0._2_6_,*(undefined2 *)(uVar11 + 0x84));
  local_180 = &local_2b0;
  local_4e0 = lVar12;
  FUN_1447c44f6(lVar12);
  local_3a8 = 0;
  uStack_3a0 = 0;
  lVar12 = *(longlong *)(*(longlong *)(local_518 + 0x28) + 0x548);
  FUN_14766083c(&local_3a8,*(undefined4 *)(lVar12 + 0x10));
  uStack_2a8 = lVar12 + 0x18;
  local_2b0 = (ulonglong *)0x100000000;
  local_2a0 = 0xffffffff;
  uStack_298 = (longlong *)((ulonglong)uStack_298._4_4_ << 0x20);
  if (*(int *)(lVar12 + 0x30) != 0) {
    FUN_1449c0562(&local_2b0);
  }
  local_178 = local_2b0;
  lStack_170 = uStack_2a8;
  local_168 = local_2a0;
  uVar8 = local_168;
  plStack_160 = uStack_298;
  local_168._4_4_ = (int)(local_2a0 >> 0x20);
  local_180 = (longlong *)(lVar12 + 8);
  if (local_168._4_4_ < *(int *)(uStack_2a8 + 0x18)) {
    iVar9 = local_168._4_4_;
    local_168 = uVar8;
    do {
      FUN_14765ea16(&local_2b0,*local_180 + (longlong)iVar9 * 0x128 + 0x68);
      *(ulonglong **)(local_3a8 + (longlong)iVar9 * 8) = local_2b0;
      local_168 = CONCAT44(local_168._4_4_,(uint)local_168 & ~local_178._4_4_);
      FUN_1449c0562(&local_178);
      iVar9 = local_168._4_4_;
      uVar8 = local_168;
    } while (local_168._4_4_ < *(int *)(lStack_170 + 0x18));
  }
  local_168 = uVar8;
  local_470 = *(undefined2 *)((longlong)puVar10 + 0x4e);
  local_46e = *(undefined2 *)((longlong)puVar10 + 0x54);
  uStack_46b = 0;
  uStack_468 = 0x6ff;
  uStack_466 = 0;
  uStack_464 = 0;
  lVar12 = FUN_14009d2a0();
  local_2e0 = CONCAT62(local_2e0._2_6_,*(undefined2 *)(lVar12 + 0x128));
  FUN_14179e2a2(&local_180,&local_470);
  local_2b0 = &local_2e0;
  uStack_2a8 = (longlong)&local_2e0 + 2;
  FUN_1447c44f6(local_148);
  if (((short)local_180 != -1) && (local_180._2_2_ != -1)) {
    lVar12 = *(longlong *)(local_518 + 0x28);
    local_500 = *(longlong *)(lVar12 + 0x270);
    local_4f8 = (undefined8 *)CONCAT71(local_4f8._1_7_,*(undefined1 *)(lVar12 + 0x298));
    local_510 = uVar11;
    local_508 = puVar10;
    FUN_14150e78a(&local_348,lVar12 + 0x28,&lStack_170);
    iVar9 = *(int *)(lVar12 + 0x38);
    for (; local_338 != iVar9; local_338 = FUN_1403b8464(&local_348,local_338 + 1)) {
      lVar12 = *(longlong *)
                (*(longlong *)(CONCAT44(uStack_33c,uStack_340) + 0x60) + (longlong)local_338 * 8);
      if ((char)local_4f8 == '\0') {
        *(undefined4 *)(lVar12 + 0x14) = 0;
        lVar18 = lVar12;
      }
      else {
        lVar18 = 0;
      }
      if (*(ushort *)(lVar12 + 0xc) != 0) {
        plVar16 = *(longlong **)(lVar12 + 0x28);
        lVar13 = (ulonglong)*(ushort *)(lVar12 + 0xc) << 5;
        do {
          if (*(short *)((longlong)plVar16 + 0x1e) == local_180._2_2_) goto LAB_14765f03c;
          plVar16 = plVar16 + 4;
          lVar13 = lVar13 + -0x20;
        } while (lVar13 != 0);
      }
      plVar16 = (longlong *)0x0;
LAB_14765f03c:
      iVar5 = *(int *)(lVar12 + 0x14);
      if (iVar5 == 1) {
        AcquireSRWLockExclusive((PSRWLOCK)(plVar16 + 1));
      }
      LOCK();
      *(int *)(plVar16 + 3) = (int)plVar16[3] + 1;
      UNLOCK();
      lVar13 = *plVar16;
      if (*(ushort *)(lVar12 + 0xc) != 0) {
        puVar17 = *(ulonglong **)(lVar12 + 0x28);
        lVar14 = (ulonglong)*(ushort *)(lVar12 + 0xc) << 5;
        do {
          if (*(short *)((longlong)puVar17 + 0x1e) == (short)local_180) goto LAB_14765f066;
          puVar17 = puVar17 + 4;
          lVar14 = lVar14 + -0x20;
        } while (lVar14 != 0);
      }
      puVar17 = (ulonglong *)0x0;
LAB_14765f066:
      iVar6 = *(int *)(lVar12 + 0x14);
      if (iVar6 == 1) {
        AcquireSRWLockShared((PSRWLOCK)(puVar17 + 1));
      }
      LOCK();
      *(int *)(puVar17 + 3) = (int)puVar17[3] + 1;
      UNLOCK();
      local_2a0 = *puVar17;
      uStack_2a8 = CONCAT44(uStack_2a8._4_4_,iVar6);
      local_290 = local_500;
      uVar4 = *(ushort *)(lVar12 + 0xe);
      if ((ulonglong)uVar4 != 0) {
        uVar11 = 0;
        do {
          *(undefined8 *)(lVar13 + uVar11 * 8) =
               *(undefined8 *)(local_3a8 + (ulonglong)*(ushort *)(local_2a0 + uVar11 * 4) * 8);
          uVar11 = uVar11 + 1;
        } while (uVar4 != uVar11);
      }
      local_2b0 = puVar17;
      uStack_298 = plVar16;
      local_288 = iVar5;
      local_280 = lVar13;
      FUN_147550970(&local_2b0);
      if (lVar18 != 0) {
        *(undefined4 *)(lVar18 + 0x14) = 1;
      }
    }
    uVar11 = local_510;
    puVar10 = local_508;
    if (local_348 != 0) {
      lVar12 = CONCAT44(uStack_33c,uStack_340);
      if (*(char *)(lVar12 + 0x270) == '\0') {
        *(int *)(lVar12 + 0x264) = *(int *)(lVar12 + 0x264) + -1;
      }
      else {
        LOCK();
        *(int *)(lVar12 + 0x264) = *(int *)(lVar12 + 0x264) + -1;
        UNLOCK();
      }
    }
  }
  if (local_120 != 0) {
    FUN_1400020a8();
  }
  if (local_3a8 != 0) {
    FUN_1400020a8();
  }
  uVar7 = *(undefined8 *)(*(longlong *)(local_518 + 0x28) + 0x5d8);
  plVar16 = *(longlong **)(*(longlong *)(local_518 + 0x28) + 0x5e0);
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
  }
  FUN_147547a84(uVar7);
  local_470 = *(undefined2 *)((longlong)puVar10 + 0x4a);
  local_45e = *(undefined2 *)((longlong)puVar10 + 0xcc);
  uVar7 = *(undefined8 *)((longlong)puVar10 + 0xbc);
  uVar3 = *(undefined8 *)((longlong)puVar10 + 0xc4);
  local_46e = (undefined2)uVar7;
  uStack_46c = (undefined1)((ulonglong)uVar7 >> 0x10);
  uStack_46b = (undefined1)((ulonglong)uVar7 >> 0x18);
  uStack_46a = (undefined2)((ulonglong)uVar7 >> 0x20);
  uStack_468 = (undefined2)((ulonglong)uVar7 >> 0x30);
  uStack_466 = (undefined2)uVar3;
  uStack_464 = (undefined1)((ulonglong)uVar3 >> 0x10);
  uStack_463 = (undefined5)((ulonglong)uVar3 >> 0x18);
  local_45b = 0;
  local_458 = 0x6ff;
  local_454 = 0;
  local_2e2 = *(undefined2 *)(uVar11 + 0x84);
  local_480 = &local_2e2;
  local_478 = &local_2e0;
  FUN_1476608ac(&local_470,&local_2b0);
  local_2e8 = *(undefined2 *)((longlong)puVar10 + 0x104);
  local_178 = (undefined8 *)&local_2e2;
  local_2e6 = *(undefined2 *)((longlong)puVar10 + 0x106);
  local_2e4 = *(undefined2 *)(puVar10 + 0x21);
  local_180 = (longlong *)&local_2e8;
  FUN_1403b5126(&local_290,&local_180,2);
  local_2c2 = *(undefined2 *)((longlong)puVar10 + 0xbc);
  local_178 = &local_2b0;
  local_2c0 = *(undefined2 *)((longlong)puVar10 + 0xbe);
  local_2be = *(undefined2 *)(puVar10 + 0x18);
  local_2bc = *(undefined2 *)((longlong)puVar10 + 0xc2);
  local_2ba = *(undefined2 *)((longlong)puVar10 + 0xc4);
  local_2b8 = *(undefined2 *)((longlong)puVar10 + 0xc6);
  local_2b6 = *(undefined2 *)(puVar10 + 0x19);
  local_2b4 = *(undefined2 *)((longlong)puVar10 + 0xca);
  local_2b2 = *(undefined2 *)((longlong)puVar10 + 0xcc);
  local_180 = (longlong *)&local_2c2;
  FUN_1403b5126(&local_290,&local_180,2);
  if ((short)local_2b0 != -1) {
    lVar12 = *(longlong *)(local_518 + 0x28);
    local_519 = *(char *)(lVar12 + 0x298);
    local_4e8 = plVar16;
    FUN_14150e78a(&local_3c0,lVar12 + 0x28,&local_290);
    local_4ec = *(int *)(lVar12 + 0x38);
    if (local_3b0 != local_4ec) {
      do {
        lVar12 = *(longlong *)(*(longlong *)(local_3b8 + 0x60) + (longlong)local_3b0 * 8);
        if (local_519 == '\0') {
          *(undefined4 *)(lVar12 + 0x14) = 0;
          lVar18 = lVar12;
        }
        else {
          lVar18 = 0;
        }
        FUN_1475b4978(lVar12,&local_348,local_2a0._2_2_);
        FUN_1475b4978(lVar12,&local_3a8,local_2a0 & 0xffff);
        FUN_1475b4978(lVar12,&local_2e0,uStack_2a8._6_2_);
        FUN_1475b4978(lVar12,&local_3d8,uStack_2a8._4_2_);
        FUN_1475b4978(lVar12,&local_3f0,uStack_2a8._2_2_);
        FUN_1475b4978(lVar12,&local_408,uStack_2a8 & 0xffff);
        FUN_1475b4978(lVar12,&local_420,local_2b0._6_2_);
        FUN_1475b4978(lVar12,&local_438,local_2b0._4_2_);
        FUN_1475b4978(lVar12,&local_450,local_2b0._2_2_);
        if (*(ushort *)(lVar12 + 0xc) != 0) {
          plVar16 = *(longlong **)(lVar12 + 0x28);
          lVar13 = (ulonglong)*(ushort *)(lVar12 + 0xc) << 5;
          do {
            if (*(short *)((longlong)plVar16 + 0x1e) == (short)local_2b0) goto LAB_14765f5f5;
            plVar16 = plVar16 + 4;
            lVar13 = lVar13 + -0x20;
          } while (lVar13 != 0);
        }
        plVar16 = (longlong *)0x0;
LAB_14765f5f5:
        iVar9 = *(int *)(lVar12 + 0x14);
        local_4d8 = lVar18;
        if (iVar9 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(plVar16 + 1));
        }
        LOCK();
        *(int *)(plVar16 + 3) = (int)plVar16[3] + 1;
        UNLOCK();
        local_488 = *plVar16;
        local_178 = (undefined8 *)CONCAT44(local_178._4_4_,iVar9);
        local_168 = local_450;
        plStack_160 = (longlong *)CONCAT44(plStack_160._4_4_,local_448);
        local_450 = 0;
        local_490 = local_440;
        local_158 = local_440;
        local_150 = local_438;
        local_148[0] = local_430;
        local_438 = 0;
        local_498 = local_428;
        local_140 = local_428;
        local_138 = local_420;
        local_130 = local_418;
        local_420 = 0;
        local_4a0 = local_410;
        local_128 = local_410;
        local_120 = local_408;
        local_118 = local_400;
        local_408 = 0;
        local_4a8 = local_3f8;
        local_110 = local_3f8;
        local_108 = local_3f0;
        local_100 = local_3e8;
        local_3f0 = 0;
        local_4b0 = local_3e0;
        local_f8 = local_3e0;
        local_f0 = local_3d8;
        local_e8 = local_3d0;
        local_3d8 = 0;
        local_4b8 = local_3c8;
        local_e0 = local_3c8;
        local_d8 = local_2e0;
        local_d0 = (undefined4)local_2d8;
        local_2e0 = 0;
        local_4c0 = local_2d0;
        local_c8 = local_2d0;
        local_c0 = local_3a8;
        local_b8 = (undefined4)uStack_3a0;
        local_3a8 = 0;
        local_4c8 = CONCAT44(uStack_394,local_398);
        local_a8 = local_348;
        local_a0 = uStack_340;
        local_348 = 0;
        local_4d0 = CONCAT44(uStack_334,local_338);
        local_510 = (ulonglong)*(ushort *)(lVar12 + 0xe);
        local_180 = plVar16;
        lStack_170 = local_488;
        local_b0 = local_4c8;
        local_98 = local_4d0;
        if (local_510 != 0) {
          local_510 = (ulonglong)*(ushort *)(lVar12 + 0xe) << 3;
          uVar11 = 0;
          do {
            local_508 = (undefined8 *)(local_4d0 + uVar11);
            if (local_4d0 == 0) {
              local_508 = (undefined8 *)0x0;
            }
            local_4f8 = (undefined8 *)(local_4c8 + uVar11);
            if (local_4c8 == 0) {
              local_4f8 = (undefined8 *)0x0;
            }
            puVar10 = (undefined8 *)(local_4c0 + uVar11);
            if (local_4c0 == 0) {
              puVar10 = (undefined8 *)0x0;
            }
            puVar19 = (undefined8 *)(local_4b8 + uVar11);
            if (local_4b8 == 0) {
              puVar19 = (undefined8 *)0x0;
            }
            puVar17 = (ulonglong *)(local_4b0 + uVar11);
            if (local_4b0 == 0) {
              puVar17 = (ulonglong *)0x0;
            }
            plVar16 = (longlong *)(local_4a8 + uVar11);
            if (local_4a8 == 0) {
              plVar16 = (longlong *)0x0;
            }
            puVar21 = (undefined8 *)(local_4a0 + uVar11);
            if (local_4a0 == 0) {
              puVar21 = (undefined8 *)0x0;
            }
            puVar15 = (undefined8 *)(local_498 + uVar11);
            if (local_498 == 0) {
              puVar15 = (undefined8 *)0x0;
            }
            puVar20 = (undefined8 *)(local_490 + uVar11);
            if (local_490 == 0) {
              puVar20 = (undefined8 *)0x0;
            }
            if (*(longlong *)(local_488 + uVar11) != 0) {
              local_500 = *(longlong *)(local_488 + uVar11);
              lVar12 = FUN_144a799b0();
              if ((*(int *)(lVar12 + 0x38) <= *(int *)(*(longlong *)(local_500 + 0x10) + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(local_500 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar12 + 0x38) * 8) == lVar12 + 0x30)) {
                FUN_14480333a(local_500,&local_348);
                uVar7 = local_318;
                uVar25 = uStack_31c;
                uVar24 = uStack_320;
                uVar23 = uStack_324;
                uVar22 = local_328;
                uStack_3a0 = CONCAT44(uStack_33c,uStack_340);
                local_3a8 = local_348;
                local_398 = local_338;
                uStack_394 = uStack_334;
                uStack_390 = uStack_330;
                uStack_38c = uStack_32c;
                FUN_1448052ee(&local_3a8,&local_2e0);
                if (puVar20 != (undefined8 *)0x0) {
                  uVar22 = (undefined4)*puVar20;
                  uVar23 = (undefined4)((ulonglong)*puVar20 >> 0x20);
                }
                if (puVar15 != (undefined8 *)0x0) {
                  uVar24 = (undefined4)*puVar15;
                  uVar25 = (undefined4)((ulonglong)*puVar15 >> 0x20);
                }
                if (puVar21 != (undefined8 *)0x0) {
                  uVar7 = *puVar21;
                }
                if (plVar16 != (longlong *)0x0) {
                  local_2d0 = *plVar16;
                }
                if (puVar17 != (ulonglong *)0x0) {
                  local_2e0 = *puVar17;
                }
                if (puVar19 != (undefined8 *)0x0) {
                  local_2d8 = *puVar19;
                }
                uVar26 = local_308;
                uVar27 = uStack_304;
                if (puVar10 != (undefined8 *)0x0) {
                  uVar26 = (undefined4)*puVar10;
                  uVar27 = (undefined4)((ulonglong)*puVar10 >> 0x20);
                }
                uVar28 = uStack_300;
                uVar29 = uStack_2fc;
                if (local_4f8 != (undefined8 *)0x0) {
                  uVar28 = (undefined4)*local_4f8;
                  uVar29 = (undefined4)((ulonglong)*local_4f8 >> 0x20);
                }
                uVar3 = local_2f8;
                if (local_508 != (undefined8 *)0x0) {
                  uVar3 = *local_508;
                }
                FUN_144a7484c(&local_2e0,&local_3a8);
                uStack_370 = 0;
                uStack_350 = 0;
                local_388 = uVar22;
                uStack_384 = uVar23;
                uStack_380 = uVar24;
                uStack_37c = uVar25;
                local_378 = uVar7;
                local_368 = uVar26;
                uStack_364 = uVar27;
                uStack_360 = uVar28;
                uStack_35c = uVar29;
                local_358 = uVar3;
                FUN_1476609ec(local_518,local_500,&local_3a8,0);
              }
            }
            uVar11 = uVar11 + 8;
          } while (local_510 != uVar11);
        }
        FUN_147692b18(&local_180);
        if (local_4d8 != 0) {
          *(undefined4 *)(local_4d8 + 0x14) = 1;
        }
        local_3b0 = FUN_1403b8464(&local_3c0,local_3b0 + 1);
      } while (local_3b0 != local_4ec);
    }
    plVar16 = local_4e8;
    if (local_3c0 != 0) {
      if (*(char *)(local_3b8 + 0x270) == '\0') {
        *(int *)(local_3b8 + 0x264) = *(int *)(local_3b8 + 0x264) + -1;
      }
      else {
        LOCK();
        *(int *)(local_3b8 + 0x264) = *(int *)(local_3b8 + 0x264) + -1;
        UNLOCK();
      }
    }
  }
  lVar12 = local_4e0;
  if (local_240 != 0) {
    FUN_1400020a8();
  }
  FUN_147660964(lVar12,local_1e0);
  lVar12 = FUN_147660774(*(undefined8 *)(local_518 + 0x28));
  if (lVar12 != 0) {
    FUN_147547668(lVar12);
  }
  lVar12 = FUN_1476607d8(*(undefined8 *)(local_518 + 0x28));
  if (lVar12 != 0) {
    FUN_147547668(lVar12);
  }
  lVar12 = local_518;
  FUN_147547668(local_518);
  FUN_1432d4c8e(*(longlong *)(lVar12 + 0x28) + 0x28);
  *(undefined1 *)(lVar12 + 0x92) = 0;
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar16 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar2 = (int *)((longlong)plVar16 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
  }
  if (local_190 != 0) {
    FUN_1400020a8();
  }
  if ((local_90 ^ (ulonglong)auStack_548) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14765fb6a FUN_14765fb6a body=3081 status=ok
// SIG undefined FUN_14765fb6a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14765fb6a(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  double dVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  double dVar14;
  double dVar17;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auVar26 [16];
  undefined1 auVar30 [16];
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  double dVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined1 auStack_418 [40];
  longlong *local_3f0;
  undefined4 local_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  double local_3d8;
  double dStack_3d0;
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  double dStack_3a0;
  undefined1 local_398 [16];
  undefined1 local_388 [16];
  undefined1 local_378 [16];
  undefined1 local_368 [16];
  undefined1 local_358 [16];
  double local_348;
  double dStack_340;
  undefined1 local_338 [16];
  undefined1 local_328 [16];
  longlong *local_310;
  undefined8 local_308;
  undefined1 *local_300;
  undefined8 local_2f8;
  undefined4 local_2f0;
  undefined4 local_2ec;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  longlong local_2c8 [2];
  undefined1 local_2b8 [16];
  undefined8 local_2a8;
  int local_2a0;
  undefined8 local_29c;
  undefined4 local_294;
  longlong local_288;
  undefined4 local_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  undefined1 local_258 [16];
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  double local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  longlong *local_148;
  undefined2 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  double local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_418;
  local_2a8 = 0;
  local_2a0 = 0;
  local_2c8[0] = 0;
  local_2c8[1] = 0;
  local_29c = 0xffffffff00000080;
  local_294 = 0;
  local_288 = 0;
  local_280 = 0;
  plVar1 = (longlong *)(param_1 + 0x40);
  local_1f8 = 2.12199579096527e-314;
  dStack_1f0 = (double)(param_1 + 0x50);
  local_1e8 = 2.12199579047121e-314;
  dStack_1e0 = (double)((ulonglong)dStack_1e0 & 0xffffffff00000000);
  if (*(int *)(param_1 + 0x68) != 0) {
    FUN_1449c0562(&local_1f8);
  }
  uStack_160 = local_1e8;
  dVar10 = uStack_160;
  local_158 = dStack_1e0;
  uStack_170 = (undefined1 *)local_1f8;
  local_168 = dStack_1f0;
  uStack_150 = plVar1;
  local_148 = plVar1;
  local_140 = 0;
  uStack_160._4_4_ = (int)((ulonglong)local_1e8 >> 0x20);
  local_3f0 = plVar1;
  if (uStack_160._4_4_ < *(int *)((longlong)dStack_1f0 + 0x18)) {
    iVar7 = uStack_160._4_4_;
    local_178 = plVar1;
    uStack_160 = dVar10;
    do {
      local_1f8 = (double)CONCAT44(*(undefined4 *)(*local_178 + 4 + (longlong)iVar7 * 0x90),
                                   *(undefined4 *)(*local_178 + (longlong)iVar7 * 0x90));
      dVar10 = (double)FUN_14479d2ce(&local_1f8);
      if (dVar10 != 0.0) {
        lVar11 = FUN_144a799b0();
        if ((*(int *)(lVar11 + 0x38) <= *(int *)(*(longlong *)((longlong)dVar10 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)((longlong)dVar10 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar11 + 0x38) * 8) == lVar11 + 0x30)) {
          local_1f8 = dVar10;
          cVar6 = FUN_147660a98(param_1,dVar10);
          if (cVar6 == '\0') {
            FUN_14769314a(local_2c8,&local_278,&local_1f8);
          }
        }
      }
      uStack_160 = (double)CONCAT44(uStack_160._4_4_,(uint)uStack_160 & ~uStack_170._4_4_);
      FUN_1449c0562(&uStack_170);
      iVar7 = uStack_160._4_4_;
    } while (uStack_160._4_4_ < *(int *)((longlong)local_168 + 0x18));
    dVar10 = uStack_160;
    if (((local_140 & 1) != 0) && (local_140._1_1_ == '\x01')) {
      FUN_147692eae(local_148,(int)local_148[1] - *(int *)((longlong)local_148 + 0x34));
      dVar10 = uStack_160;
    }
  }
  uStack_160 = dVar10;
  local_178 = (longlong *)0x100000000;
  uStack_170 = local_2b8;
  local_168 = 2.12199579047121e-314;
  uStack_160 = (double)((ulonglong)uStack_160 & 0xffffffff00000000);
  iVar7 = 0;
  if (local_2a0 != 0) {
    FUN_1449c0562(&local_178);
    iVar7 = local_2a0;
  }
  local_2f8 = local_168;
  dVar10 = local_2f8;
  local_2f0 = (uint)uStack_160;
  local_2ec = uStack_160._4_4_;
  local_308 = (double)local_178;
  local_300 = uStack_170;
  local_2f8._4_4_ = (int)((ulonglong)local_168 >> 0x20);
  local_310 = local_2c8;
  if ((local_2f8._4_4_ != iVar7) || (uStack_170 != local_2b8)) {
    iVar9 = local_2f8._4_4_;
    local_2f8 = dVar10;
    do {
      uVar34 = uRam000000014c8464dc;
      uVar33 = uRam000000014c8464d8;
      uVar32 = DAT_14c8464d0._4_4_;
      uVar31 = (undefined4)DAT_14c8464d0;
      uVar51 = DAT_14c8464c8._4_4_;
      uVar50 = (undefined4)DAT_14c8464c8;
      uVar49 = DAT_14c8464c0._4_4_;
      uVar48 = (undefined4)DAT_14c8464c0;
      uVar43 = DAT_14c8464b8._4_4_;
      uVar42 = (undefined4)DAT_14c8464b8;
      uVar41 = DAT_14c8464b0._4_4_;
      uVar40 = (undefined4)DAT_14c8464b0;
      uVar39 = DAT_14c8464a8._4_4_;
      uVar38 = (undefined4)DAT_14c8464a8;
      uVar37 = DAT_14c8464a0._4_4_;
      uVar36 = (undefined4)DAT_14c8464a0;
      dVar35 = DAT_14c846498;
      dVar10 = DAT_14c846490;
      uVar47 = DAT_14c846488._4_4_;
      uVar46 = (undefined4)DAT_14c846488;
      uVar45 = DAT_14c846480._4_4_;
      uVar44 = (undefined4)DAT_14c846480;
      lVar11 = *(longlong *)(*local_310 + (longlong)iVar9 * 0x10);
      plVar1 = *(longlong **)(lVar11 + 0x120);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x4a8))(plVar1,&local_178,*(undefined8 *)(lVar11 + 0x128),0);
        bVar2 = *(byte *)(lVar11 + 0x1f8);
        if ((bVar2 & 4) == 0) {
          uVar40 = SUB84(local_148,0);
          uVar41 = (undefined4)((ulonglong)local_148 >> 0x20);
          uVar42 = 0;
          uVar43 = 0;
          uVar36 = (undefined4)local_158;
          uVar37 = local_158._4_4_;
          uVar38 = (undefined4)uStack_150;
          uVar39 = uStack_150._4_4_;
        }
        if ((bVar2 & 8) == 0) {
          uVar44 = (undefined4)local_178;
          uVar45 = local_178._4_4_;
          uVar46 = (undefined4)uStack_170;
          uVar47 = uStack_170._4_4_;
          dVar10 = local_168;
          dVar35 = uStack_160;
        }
        if ((bVar2 & 0x10) == 0) {
          uVar31 = SUB84(local_128,0);
          uVar32 = (undefined4)((ulonglong)local_128 >> 0x20);
          uVar33 = 0;
          uVar34 = 0;
          uVar48 = (undefined4)local_138;
          uVar49 = local_138._4_4_;
          uVar50 = (undefined4)uStack_130;
          uVar51 = uStack_130._4_4_;
        }
      }
      lVar13 = param_1;
      uVar8 = FUN_147661aa8(param_1,&local_3d8,lVar11);
      auVar30 = _DAT_149934d80;
      local_348 = 0.0;
      dStack_340 = 0.0;
      local_358 = ZEXT816(0);
      dVar29 = local_398._0_8_;
      dVar4 = local_398._8_8_;
      dVar3 = local_388._0_8_;
      dVar5 = local_388._8_8_;
      auVar19._4_4_ = uVar49;
      auVar19._0_4_ = uVar48;
      auVar19._8_4_ = uVar50;
      auVar19._12_4_ = uVar51;
      auVar19 = minpd(local_398,auVar19);
      auVar24._4_4_ = uVar32;
      auVar24._0_4_ = uVar31;
      auVar24._8_4_ = uVar33;
      auVar24._12_4_ = uVar34;
      auVar24 = minpd(local_388,auVar24);
      auVar20._8_8_ = -(ulonglong)(auVar19._8_8_ < 0.0);
      auVar20._0_8_ = -(ulonglong)(auVar19._0_8_ < 0.0);
      iVar9 = movmskpd(uVar8,auVar20);
      auVar25._8_8_ = -(ulonglong)(auVar24._8_8_ < 0.0);
      auVar25._0_8_ = -(ulonglong)(auVar24._0_8_ < 0.0);
      uVar12 = movmskpd((int)lVar13,auVar25);
      if ((uVar12 & 0x3fffffff) == 0 && iVar9 == 0) {
        dVar14 = local_3d8 * dVar10 * 1.0 +
                 dStack_3c0 * (double)CONCAT44(uVar47,uVar46) +
                 (double)CONCAT44(uVar45,uVar44) * local_3c8 * -1.0 + dVar35 * dStack_3d0;
        local_378._8_4_ = SUB84(dVar14,0);
        local_378._0_8_ =
             dStack_3d0 * dVar10 * -1.0 +
             local_3c8 * (double)CONCAT44(uVar47,uVar46) +
             (double)CONCAT44(uVar45,uVar44) * dStack_3c0 * 1.0 + dVar35 * local_3d8;
        local_378._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
        local_368._8_8_ =
             local_3c8 * dVar10 * -1.0 +
             (((double)CONCAT44(uVar45,uVar44) * local_3d8 * -1.0 + dVar35 * dStack_3c0) -
             (double)CONCAT44(uVar47,uVar46) * dStack_3d0);
        local_368._0_8_ =
             dStack_3c0 * dVar10 * 1.0 +
             (((double)CONCAT44(uVar45,uVar44) * dStack_3d0 * 1.0 + dVar35 * local_3c8) -
             (double)CONCAT44(uVar47,uVar46) * local_3d8);
        dVar14 = local_3b8 * (double)CONCAT44(uVar49,uVar48);
        dVar17 = dStack_3b0 * (double)CONCAT44(uVar51,uVar50);
        dVar23 = local_3a8 * (double)CONCAT44(uVar32,uVar31);
        dVar28 = dStack_3a0 * (double)CONCAT44(uVar34,uVar33);
        dVar22 = dVar17 * (double)CONCAT44(uVar45,uVar44) - (double)CONCAT44(uVar47,uVar46) * dVar14
        ;
        dVar27 = dVar23 * (double)CONCAT44(uVar47,uVar46) - dVar10 * dVar17;
        dVar18 = dVar14 * dVar10 - (double)CONCAT44(uVar45,uVar44) * dVar23;
        dVar21 = dVar28 * dVar35 - dVar35 * dVar28;
        dVar27 = dVar27 + dVar27;
        dVar18 = dVar18 + dVar18;
        dVar22 = dVar22 + dVar22;
        dVar21 = dVar21 + dVar21;
        dVar17 = (double)CONCAT44(uVar39,uVar38) +
                 (dVar27 * dVar10 - dVar22 * (double)CONCAT44(uVar45,uVar44)) +
                 dVar35 * dVar18 + dVar17;
        local_348 = (double)CONCAT44(uVar41,uVar40) +
                    (dVar18 * (double)CONCAT44(uVar45,uVar44) -
                    (double)CONCAT44(uVar47,uVar46) * dVar27) + dVar35 * dVar22 + dVar23;
        dStack_340 = (double)CONCAT44(uVar43,uVar42) +
                     (dVar21 * dVar35 - dVar21 * dVar35) + dVar35 * dVar21 + dVar28;
        local_358._8_4_ = SUB84(dVar17,0);
        local_358._0_8_ =
             (double)CONCAT44(uVar37,uVar36) +
             (dVar22 * (double)CONCAT44(uVar47,uVar46) - dVar10 * dVar18) + dVar35 * dVar27 + dVar14
        ;
        local_358._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
        dVar14 = dVar29 * (double)CONCAT44(uVar49,uVar48);
        dVar17 = dVar4 * (double)CONCAT44(uVar51,uVar50);
        dVar10 = dVar3 * (double)CONCAT44(uVar32,uVar31);
        local_3e8 = uVar40;
        uStack_3e4 = uVar41;
        uStack_3e0 = uVar42;
        uStack_3dc = uVar43;
      }
      else {
        dVar17 = (double)CONCAT44(uVar45,uVar44) + (double)CONCAT44(uVar45,uVar44);
        dVar27 = (double)CONCAT44(uVar47,uVar46) + (double)CONCAT44(uVar47,uVar46);
        dVar14 = dVar10 + dVar10;
        dVar21 = (double)CONCAT44(uVar45,uVar44) * dVar17;
        dVar28 = (double)CONCAT44(uVar47,uVar46) * dVar27;
        local_1f8 = (1.0 - (dVar10 * dVar14 + dVar28)) * (double)CONCAT44(uVar49,uVar48);
        dStack_1d0 = (1.0 - (dVar10 * dVar14 + dVar21)) * (double)CONCAT44(uVar51,uVar50);
        dVar23 = dVar27 * (double)CONCAT44(uVar45,uVar44);
        dVar18 = dVar14 * (double)CONCAT44(uVar47,uVar46);
        dVar22 = (double)CONCAT44(uVar45,uVar44) * dVar14;
        dVar17 = dVar17 * dVar35;
        local_1d8 = (dVar23 - dVar14 * dVar35) * (double)CONCAT44(uVar51,uVar50);
        dStack_1b0 = (dVar18 - dVar17) * (double)CONCAT44(uVar32,uVar31);
        local_1b8 = (dVar27 * dVar35 + dVar22) * (double)CONCAT44(uVar32,uVar31);
        local_1a8 = (1.0 - (dVar21 + dVar28)) * (double)CONCAT44(uVar32,uVar31);
        dVar10 = (double)CONCAT44(uVar32,uVar31) * dVar3;
        dStack_1f0 = (dVar23 + dVar14 * dVar35) * (double)CONCAT44(uVar49,uVar48);
        local_1c8 = (dVar18 + dVar17) * (double)CONCAT44(uVar51,uVar50);
        local_1e8 = (dVar22 - dVar27 * dVar35) * (double)CONCAT44(uVar49,uVar48);
        dStack_1e0 = 0.0;
        uStack_1c0 = 0;
        uStack_1a0 = 0;
        uStack_180 = 0;
        uStack_17c = 0x3ff00000;
        dVar22 = dStack_3d0 + dStack_3d0;
        dVar21 = local_3c8 + local_3c8;
        dVar35 = local_3d8 * (local_3d8 + local_3d8);
        local_228 = (1.0 - (dVar35 + dStack_3d0 * dVar22)) * dVar3;
        dVar23 = (local_3d8 + local_3d8) * dStack_3c0;
        local_238 = (dVar22 * dStack_3c0 + local_3d8 * dVar21) * dVar3;
        dStack_230 = (dVar21 * dStack_3d0 - dVar23) * dVar3;
        dVar14 = (double)CONCAT44(uVar49,uVar48) * dVar29;
        dVar17 = (double)CONCAT44(uVar51,uVar50) * dVar4;
        local_278 = ((double)DAT_149934d80 - (local_3c8 * dVar21 + dStack_3d0 * dVar22)) * dVar29;
        dVar35 = (DAT_149934d80._8_8_ - (local_3c8 * dVar21 + dVar35)) * dVar4;
        dStack_270 = (dVar22 * local_3d8 + dVar21 * dStack_3c0) * dVar29;
        local_248 = (dVar21 * dStack_3d0 + dVar23) * dVar4;
        local_268 = (local_3d8 * dVar21 - dVar22 * dStack_3c0) * dVar29;
        uStack_260 = 0;
        local_258._8_4_ = SUB84(dVar35,0);
        local_258._0_8_ = (dVar22 * local_3d8 - dVar21 * dStack_3c0) * dVar4;
        local_258._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
        uStack_240 = 0;
        uStack_220 = 0;
        local_218 = local_3b8;
        dStack_210 = dStack_3b0;
        local_208 = local_3a8;
        uStack_200 = 0x3ff0000000000000;
        local_198 = uVar36;
        uStack_194 = uVar37;
        uStack_190 = uVar38;
        uStack_18c = uVar39;
        local_188 = uVar40;
        uStack_184 = uVar41;
        FUN_1447fea8d(&local_178,&local_278,&local_1f8);
        FUN_144a1c686(&local_178,0x3e45798ee0000000);
        auVar15._8_8_ = -(ulonglong)(0.0 <= dVar17);
        auVar15._0_8_ = -(ulonglong)(0.0 <= dVar14);
        auVar24 = blendvpd(_DAT_149936790,auVar30,auVar15);
        dVar35 = (double)(~-(ulonglong)(0.0 <= dVar10) & 0xbff0000000000000 |
                         -(ulonglong)(0.0 <= dVar10) & 0x3ff0000000000000);
        dVar29 = auVar24._0_8_;
        local_168 = local_168 * dVar29;
        uStack_170 = (undefined1 *)((double)uStack_170 * dVar29);
        local_178 = (longlong *)((double)local_178 * dVar29);
        dVar29 = auVar24._8_8_;
        local_148 = (longlong *)((double)local_148 * dVar29);
        uStack_150 = (longlong *)((double)uStack_150 * dVar29);
        local_158 = dVar29 * local_158;
        local_128 = local_128 * dVar35;
        uStack_130 = uStack_130 * dVar35;
        local_138 = dVar35 * local_138;
        FUN_14481fd10(&local_2e8,&local_178);
        dVar35 = local_2d8 * local_2d8 + local_2e8 * local_2e8;
        dVar29 = dStack_2d0 * dStack_2d0 + dStack_2e0 * dStack_2e0;
        auVar26._0_8_ = dVar35 + dVar29;
        auVar26._8_8_ = dVar35 + dVar29;
        auVar16._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar26._8_8_);
        auVar16._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar26._0_8_);
        auVar24 = sqrtpd(auVar26,auVar26);
        auVar24 = divpd(auVar30,auVar24);
        auVar30._0_8_ = auVar24._0_8_ * local_2d8;
        auVar30._8_8_ = auVar24._8_8_ * dStack_2d0;
        local_368 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar30,auVar16);
        local_378._8_8_ =
             (ulonglong)(dStack_2e0 * auVar24._8_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar26._8_8_);
        local_378._0_8_ =
             (ulonglong)(local_2e8 * auVar24._0_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar26._0_8_);
        local_358._8_8_ = uStack_110;
        local_358._0_8_ = local_118;
        local_348 = local_108;
        dStack_340 = 0.0;
      }
      dVar5 = dVar5 * (double)CONCAT44(uVar34,uVar33);
      local_338._8_4_ = SUB84(dVar17,0);
      local_338._0_8_ = dVar14;
      local_338._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
      local_328._8_4_ = SUB84(dVar5,0);
      local_328._0_8_ = dVar10;
      local_328._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      FUN_147660b82(param_1,lVar11,local_378);
      local_2f8 = (double)CONCAT44(local_2f8._4_4_,(uint)local_2f8 & ~local_308._4_4_);
      FUN_1449c0562(&local_308);
      iVar9 = local_2f8._4_4_;
      dVar10 = local_2f8;
    } while (local_310 != local_2c8 || (local_300 != local_2b8 || local_2f8._4_4_ != iVar7));
  }
  local_2f8 = dVar10;
  if (*(char *)(param_1 + 0x90) == '\0') {
    FUN_147693636(local_3f0);
    *(undefined1 *)(param_1 + 0x91) = 0;
  }
  local_280 = 0;
  if (local_288 != 0) {
    FUN_1400020a8();
  }
  FUN_1476930bc(local_2c8);
  if ((local_f0 ^ (ulonglong)auStack_418) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147660774 FUN_147660774 body=98 status=ok
// SIG undefined FUN_147660774(void)

void FUN_147660774(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_145920b2e();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_1400a1050(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1476607d8 FUN_1476607d8 body=98 status=ok
// SIG undefined FUN_1476607d8(void)

void FUN_1476607d8(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14588a226();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_1400a1050(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14766083c FUN_14766083c body=111 status=ok
// SIG undefined FUN_14766083c(void)

void FUN_14766083c(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_147563c88(param_1,iVar1);
    }
    FUN_140186ec5((longlong)iVar1 * 8 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_147664e18(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1476608ac FUN_1476608ac body=182 status=ok
// SIG undefined FUN_1476608ac(void)

undefined8 * FUN_1476608ac(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *puStack_40;
  undefined2 local_2a;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = *param_1;
  uVar5 = param_1[1];
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_1 + 3);
  uVar3 = *(undefined4 *)((longlong)param_1 + 0x1c);
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 2);
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar1;
  *(undefined4 *)(param_2 + 3) = uVar2;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uVar3;
  *param_2 = uVar4;
  param_2[1] = uVar5;
  param_2[8] = 0x10000000000;
  param_2[0xd] = 0x10000000000;
  param_2[0x14] = 0x10000000000;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x19] = 0x10000000000;
  local_2a = *(undefined2 *)param_2;
  puStack_40 = &local_28;
  local_48 = &local_2a;
  FUN_1447c44f6(param_2 + 4,&local_48);
  local_48 = (undefined2 *)*param_3;
  puStack_40 = (ulonglong *)param_3[1];
  FUN_1447c44f6(param_2 + 4,&local_48);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147660964 FUN_147660964 body=135 status=ok
// SIG undefined FUN_147660964(void)

undefined8 * FUN_147660964(undefined8 *param_1,undefined8 *param_2)

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
  undefined8 uVar10;
  
  if (param_1 != param_2) {
    uVar8 = *param_2;
    uVar9 = param_2[1];
    uVar10 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = uVar10;
    *param_1 = uVar8;
    param_1[1] = uVar9;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
    param_2[4] = 0;
    uVar1 = *(undefined4 *)(param_2 + 5);
    uVar2 = *(undefined4 *)((longlong)param_2 + 0x2c);
    uVar3 = *(undefined4 *)(param_2 + 6);
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar5 = *(undefined4 *)((longlong)param_2 + 0x3c);
    uVar6 = *(undefined4 *)(param_2 + 8);
    uVar7 = *(undefined4 *)((longlong)param_2 + 0x44);
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
    *(undefined4 *)((longlong)param_1 + 0x3c) = uVar5;
    *(undefined4 *)(param_1 + 8) = uVar6;
    *(undefined4 *)((longlong)param_1 + 0x44) = uVar7;
    *(undefined4 *)(param_1 + 5) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x2c) = uVar2;
    *(undefined4 *)(param_1 + 6) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0x34) = uVar4;
    *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
    *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
    param_2[9] = 0;
    if (param_1[10] != 0) {
      FUN_1400020a8();
    }
    param_1[10] = param_2[10];
    param_2[10] = 0;
    *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
    *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x5c);
    param_2[0xb] = 0;
  }
  return param_1;
}



// FUNCTION 1476609ec FUN_1476609ec body=170 status=ok
// SIG undefined FUN_1476609ec(void)

void FUN_1476609ec(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined1 local_9c [4];
  undefined8 local_98 [12];
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  puVar2 = local_98;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_3;
    param_3 = param_3 + 1;
    puVar2 = puVar2 + 1;
  }
  local_b8 = (undefined8 *)0x0;
  local_38 = param_4;
  if (param_2 != 0) {
    local_b0 = (undefined8 *)0x0;
    FUN_14485c47a(&local_b0);
    local_b8 = local_b0;
  }
  local_b0 = &local_b8;
  local_a8 = local_98;
  FUN_147692c9c(param_1 + 0x40,local_9c);
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147660a98 FUN_147660a98 body=232 status=ok
// SIG undefined FUN_147660a98(void)

undefined8 FUN_147660a98(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar8 = *(longlong *)(param_2 + 0x120);
  if (lVar8 != 0) {
    do {
      local_40 = 0;
      FUN_14485c47a(&local_40,lVar8);
      iVar1 = (int)local_40;
      iVar2 = local_40._4_4_;
      uVar3 = FUN_144a78877(local_40 & 0xffffffff,local_40._4_4_);
      if (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x74)) {
        lVar6 = *(longlong *)(param_1 + 0x80);
        if (*(longlong *)(param_1 + 0x80) == 0) {
          lVar6 = param_1 + 0x78;
        }
        iVar5 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x88) - 1U & uVar3) * 4);
        if (iVar5 != -1) {
          lVar6 = *(longlong *)(param_1 + 0x40);
          do {
            lVar7 = (longlong)iVar5 * 0x90;
            if ((*(int *)(lVar6 + lVar7) == iVar1) && (*(int *)(lVar6 + 4 + lVar7) == iVar2)) {
              uVar4 = CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
              goto LAB_147660b59;
            }
            iVar5 = *(int *)(lVar7 + lVar6 + 0x80);
          } while (iVar5 != -1);
        }
      }
      lVar8 = *(longlong *)(lVar8 + 0x120);
    } while (lVar8 != 0);
  }
  uVar4 = 0;
LAB_147660b59:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 147660b82 FUN_147660b82 body=3876 status=ok
// SIG undefined FUN_147660b82(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147660b82(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  int iVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  uint uVar19;
  longlong lVar20;
  undefined8 uVar21;
  double *pdVar22;
  double *pdVar23;
  longlong lVar24;
  ulonglong uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  undefined1 auVar31 [16];
  double dVar35;
  double dVar36;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar42;
  double dVar43;
  undefined1 auVar41 [16];
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar48;
  undefined1 auVar47 [16];
  double dVar49;
  double dVar50;
  double dVar51;
  undefined1 auVar52 [16];
  undefined1 auStack_3f8 [40];
  longlong local_3d0;
  undefined1 local_3c8 [16];
  undefined1 local_3b8 [16];
  undefined1 local_3a8 [16];
  undefined1 local_398 [16];
  undefined1 local_388 [16];
  undefined1 local_378 [16];
  undefined1 local_368 [16];
  double local_358;
  double dStack_350;
  double local_348;
  double dStack_340;
  double local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  double local_2f8 [4];
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  undefined1 local_258 [16];
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  undefined1 local_1f8 [16];
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  double local_178;
  double local_170;
  double local_168;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  uVar18 = FUN_144a91ace();
  FUN_147cc9dde(uVar18,param_2,param_3);
  iVar3 = *(int *)(param_2 + 0x140);
  local_3d0 = param_2;
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(param_2 + 0x138);
    lVar24 = 0;
    do {
      lVar5 = *(longlong *)(lVar4 + lVar24);
      if (lVar5 != 0) {
        if (*(longlong *)(lVar5 + 0x128) == 0) {
          pdVar22 = (double *)&DAT_14c846480;
          pdVar23 = local_2f8;
          for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
            *pdVar23 = *pdVar22;
            pdVar22 = pdVar22 + 1;
            pdVar23 = pdVar23 + 1;
          }
          uVar17 = 0;
          uVar18 = param_1;
        }
        else {
          uVar21 = param_1;
          uVar18 = FUN_147661be6(param_1,local_2f8,local_3d0);
          uVar17 = (undefined4)uVar21;
        }
        auVar52 = _DAT_149934d80;
        auVar31 = *(undefined1 (*) [16])(param_3 + 8);
        dVar6 = auVar31._0_8_;
        dVar50 = auVar31._8_8_;
        auVar29 = *(undefined1 (*) [16])(param_3 + 10);
        dVar7 = auVar29._0_8_;
        dVar8 = local_2b8._0_8_;
        dVar10 = local_2b8._8_8_;
        dVar9 = local_2a8._0_8_;
        dVar11 = local_2a8._8_8_;
        auVar31 = minpd(local_2b8,auVar31);
        auVar38 = minpd(local_2a8,auVar29);
        auVar33._8_8_ = -(ulonglong)(auVar31._8_8_ < 0.0);
        auVar33._0_8_ = -(ulonglong)(auVar31._0_8_ < 0.0);
        iVar16 = movmskpd((int)uVar18,auVar33);
        auVar31._8_8_ = -(ulonglong)(auVar38._8_8_ < 0.0);
        auVar31._0_8_ = -(ulonglong)(auVar38._0_8_ < 0.0);
        uVar19 = movmskpd(uVar17,auVar31);
        if ((uVar19 & 0x3fffffff) == 0 && iVar16 == 0) {
          dVar12 = *param_3;
          dVar37 = param_3[1];
          dVar42 = param_3[2];
          dVar15 = param_3[3];
          dVar36 = param_3[3];
          dVar48 = param_3[3];
          dVar35 = param_3[1];
          dVar1 = param_3[1];
          dVar44 = param_3[2];
          dVar45 = param_3[2];
          dVar43 = local_2f8[1] * dVar44 * -1.0 +
                   local_2f8[2] * dVar35 + local_2f8[3] * *param_3 * 1.0 + local_2f8[0] * dVar36;
          dVar46 = local_2f8[0] * dVar45 * 1.0 +
                   local_2f8[3] * dVar1 + local_2f8[2] * *param_3 * -1.0 + local_2f8[1] * dVar48;
          auVar52._0_8_ =
               local_2f8[3] * dVar44 * 1.0 +
               ((*param_3 * local_2f8[1] * 1.0 + local_2f8[2] * dVar36) - local_2f8[0] * dVar35);
          auVar52._8_8_ =
               local_2f8[2] * dVar45 * -1.0 +
               ((*param_3 * local_2f8[0] * -1.0 + local_2f8[3] * dVar48) - local_2f8[1] * dVar1);
          dVar51 = local_2d8 * dVar6;
          dVar13 = dStack_2d0 * dVar50;
          dVar45 = local_2c8 * dVar7;
          dVar1 = dStack_2c0 * auVar29._8_8_;
          dVar44 = dVar13 * dVar12 - dVar37 * dVar51;
          dVar49 = dVar45 * dVar37 - dVar42 * dVar13;
          dVar30 = dVar51 * dVar42 - dVar12 * dVar45;
          dVar35 = dVar1 * dVar15 - dVar15 * dVar1;
          dVar49 = dVar49 + dVar49;
          dVar30 = dVar30 + dVar30;
          dVar44 = dVar44 + dVar44;
          dVar35 = dVar35 + dVar35;
          dVar35 = (dVar35 * dVar15 - dVar35 * dVar15) + dVar48 * dVar35 + dVar1 + param_3[7];
          dVar1 = (dVar44 * dVar37 - dVar42 * dVar30) + dVar36 * dVar49 + dVar51 + param_3[4];
          dVar48 = (dVar49 * dVar42 - dVar44 * dVar12) + dVar48 * dVar30 + dVar13 + param_3[5];
          dVar36 = (dVar30 * dVar12 - dVar37 * dVar49) + dVar36 * dVar44 + dVar45 + param_3[6];
        }
        else {
          dVar48 = *param_3;
          dVar35 = param_3[1];
          dVar1 = param_3[2];
          dVar36 = dVar35 + dVar35;
          dVar44 = dVar1 + dVar1;
          dVar46 = dVar48 * (dVar48 + dVar48);
          local_1a8 = (1.0 - (dVar46 + dVar35 * dVar36)) * dVar7;
          dVar43 = param_3[3];
          dVar45 = dVar44 * dVar43;
          dVar49 = (dVar48 + dVar48) * param_3[3];
          dVar43 = dVar36 * dVar43;
          local_1b8 = (dVar43 + *param_3 * dVar44) * dVar7;
          dStack_1d0 = (DAT_149934d80._8_8_ - (dVar1 * dVar44 + dVar46)) * dVar50;
          dVar46 = (dVar36 * dVar48 + dVar45) * dVar6;
          local_1c8 = (dVar44 * dVar35 + dVar49) * dVar50;
          local_1d8 = (dVar36 * dVar48 - dVar45) * dVar50;
          dStack_1b0 = (dVar44 * dVar35 - dVar49) * dVar7;
          local_1e8 = (*param_3 * dVar44 - dVar43) * dVar6;
          local_1f8._8_4_ = SUB84(dVar46,0);
          local_1f8._0_8_ = ((double)DAT_149934d80 - (dVar1 * dVar44 + dVar35 * dVar36)) * dVar6;
          local_1f8._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
          uStack_1e0 = 0;
          uStack_1c0 = 0;
          uStack_1a0 = 0;
          local_198 = *(undefined1 (*) [16])(param_3 + 4);
          local_188._8_8_ = 0x3ff0000000000000;
          local_188._0_8_ = param_3[6];
          dVar46 = local_2f8[1] + local_2f8[1];
          dVar48 = local_2f8[2] + local_2f8[2];
          dVar43 = local_2f8[0] * (local_2f8[0] + local_2f8[0]);
          local_228 = (1.0 - (dVar43 + local_2f8[1] * dVar46)) * dVar9;
          dVar35 = (local_2f8[0] + local_2f8[0]) * local_2f8[3];
          local_238 = (dVar46 * local_2f8[3] + local_2f8[0] * dVar48) * dVar9;
          dStack_230 = (dVar48 * local_2f8[1] - dVar35) * dVar9;
          local_278 = ((double)DAT_149934d80 - (local_2f8[2] * dVar48 + local_2f8[1] * dVar46)) *
                      dVar8;
          dVar43 = (DAT_149934d80._8_8_ - (local_2f8[2] * dVar48 + dVar43)) * dVar10;
          dStack_270 = (dVar46 * local_2f8[0] + dVar48 * local_2f8[3]) * dVar8;
          local_248 = (dVar48 * local_2f8[1] + dVar35) * dVar10;
          local_268 = (local_2f8[0] * dVar48 - dVar46 * local_2f8[3]) * dVar8;
          uStack_260 = 0;
          local_258._8_4_ = SUB84(dVar43,0);
          local_258._0_8_ = (dVar46 * local_2f8[0] - dVar48 * local_2f8[3]) * dVar10;
          local_258._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
          uStack_240 = 0;
          uStack_220 = 0;
          local_218 = local_2d8;
          dStack_210 = dStack_2d0;
          local_208 = local_2c8;
          uStack_200 = 0x3ff0000000000000;
          FUN_1447fea8d(&local_178,&local_278,local_1f8);
          FUN_144a1c686(&local_178,0x3e45798ee0000000);
          auVar38._8_8_ = -(ulonglong)(0.0 <= dVar50 * dVar10);
          auVar38._0_8_ = -(ulonglong)(0.0 <= dVar6 * dVar8);
          auVar31 = blendvpd(_DAT_149936790,auVar52,auVar38);
          uVar25 = -(ulonglong)(0.0 <= dVar7 * dVar9);
          dVar43 = (double)(~uVar25 & 0xbff0000000000000 | uVar25 & 0x3ff0000000000000);
          dVar46 = auVar31._0_8_;
          local_168 = local_168 * dVar46;
          local_170 = local_170 * dVar46;
          local_178 = local_178 * dVar46;
          dVar46 = auVar31._8_8_;
          local_148 = local_148 * dVar46;
          local_150 = local_150 * dVar46;
          local_158 = dVar46 * local_158;
          local_128 = local_128 * dVar43;
          local_130 = local_130 * dVar43;
          local_138 = dVar43 * local_138;
          FUN_14481fd10(&local_358,&local_178);
          dVar43 = local_348 * local_348 + local_358 * local_358;
          dVar46 = dStack_340 * dStack_340 + dStack_350 * dStack_350;
          auVar32._0_8_ = dVar43 + dVar46;
          auVar32._8_8_ = dVar43 + dVar46;
          auVar26._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar32._8_8_);
          auVar26._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar32._0_8_);
          auVar31 = sqrtpd(auVar32,auVar32);
          auVar31 = divpd(auVar52,auVar31);
          auVar39._0_8_ = auVar31._0_8_ * local_348;
          auVar39._8_8_ = auVar31._8_8_ * dStack_340;
          dVar43 = (double)((ulonglong)(local_358 * auVar31._0_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar32._0_8_));
          dVar46 = (double)((ulonglong)(dStack_350 * auVar31._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar32._8_8_));
          auVar52 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar39,auVar26);
          dVar35 = 0.0;
          dVar1 = local_118;
          dVar48 = dStack_110;
          dVar36 = local_108;
        }
        dVar10 = dVar10 * dVar50;
        dVar11 = dVar11 * auVar29._8_8_;
        dVar8 = dVar8 * dVar6;
        dVar9 = dVar9 * dVar7;
        bVar2 = *(byte *)(lVar5 + 0x1f8);
        if ((bVar2 & 4) != 0) {
          dVar35 = 0.0;
          dVar1 = DAT_14c8464e0;
          dVar48 = DAT_14c8464e8;
          dVar36 = DAT_14c8464f0;
        }
        if ((bVar2 & 8) != 0) {
          auVar52 = _DAT_14c8463e0;
          dVar43 = DAT_14c8463d0;
          dVar46 = DAT_14c8463d8;
        }
        if ((bVar2 & 0x10) != 0) {
          dVar8 = 1.0;
          dVar10 = 1.0;
          dVar9 = 1.0;
          dVar11 = 0.0;
        }
        uVar18 = param_1;
        uVar17 = FUN_147661aa8(param_1,&local_358,lVar5);
        auVar31 = _DAT_149934d80;
        local_388 = ZEXT816(0);
        local_398 = ZEXT816(0);
        dVar6 = local_318._0_8_;
        dVar7 = local_318._8_8_;
        auVar29._8_4_ = SUB84(dVar10,0);
        auVar29._0_8_ = dVar8;
        auVar29._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        auVar33 = minpd(local_318,auVar29);
        local_3c8 = local_308;
        auVar29 = local_3c8;
        auVar14._8_4_ = SUB84(dVar11,0);
        auVar14._0_8_ = dVar9;
        auVar14._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
        auVar38 = minpd(local_308,auVar14);
        auVar34._8_8_ = -(ulonglong)(auVar33._8_8_ < 0.0);
        auVar34._0_8_ = -(ulonglong)(auVar33._0_8_ < 0.0);
        iVar16 = movmskpd(uVar17,auVar34);
        auVar40._8_8_ = -(ulonglong)(auVar38._8_8_ < 0.0);
        auVar40._0_8_ = -(ulonglong)(auVar38._0_8_ < 0.0);
        uVar19 = movmskpd((int)uVar18,auVar40);
        dVar50 = auVar52._0_8_;
        dVar44 = auVar52._8_8_;
        local_3c8._0_8_ = local_308._0_8_;
        uVar18 = local_3c8._0_8_;
        local_3c8._8_8_ = local_308._8_8_;
        uVar21 = local_3c8._8_8_;
        local_3c8 = auVar29;
        if ((uVar19 & 0x3fffffff) == 0 && iVar16 == 0) {
          dVar45 = local_358 * dVar50 * 1.0 +
                   dStack_340 * dVar46 + dVar43 * local_348 * -1.0 + dVar44 * dStack_350;
          local_3b8._8_4_ = SUB84(dVar45,0);
          local_3b8._0_8_ =
               dStack_350 * dVar50 * -1.0 +
               local_348 * dVar46 + dVar43 * dStack_340 * 1.0 + dVar44 * local_358;
          local_3b8._12_4_ = (int)((ulonglong)dVar45 >> 0x20);
          local_3a8._8_8_ =
               local_348 * dVar50 * -1.0 +
               ((dVar43 * local_358 * -1.0 + dVar44 * dStack_340) - dVar46 * dStack_350);
          local_3a8._0_8_ =
               dStack_340 * dVar50 * 1.0 +
               ((dVar43 * dStack_350 * 1.0 + dVar44 * local_348) - dVar46 * local_358);
          dVar13 = local_338 * dVar8;
          dVar12 = dStack_330 * dVar10;
          dVar45 = local_328 * dVar9;
          dVar49 = dStack_320 * dVar11;
          dVar37 = dVar12 * dVar43 - dVar46 * dVar13;
          dVar42 = dVar45 * dVar46 - dVar50 * dVar12;
          dVar30 = dVar13 * dVar50 - dVar43 * dVar45;
          dVar51 = dVar49 * dVar44 - dVar44 * dVar49;
          dVar42 = dVar42 + dVar42;
          dVar30 = dVar30 + dVar30;
          dVar37 = dVar37 + dVar37;
          dVar51 = dVar51 + dVar51;
          dVar48 = dVar48 + (dVar42 * dVar50 - dVar37 * dVar43) + dVar44 * dVar30 + dVar12;
          dVar35 = dVar35 + (dVar51 * dVar44 - dVar51 * dVar44) + dVar44 * dVar51 + dVar49;
          local_398._8_4_ = SUB84(dVar48,0);
          local_398._0_8_ = dVar1 + (dVar37 * dVar46 - dVar50 * dVar30) + dVar44 * dVar42 + dVar13;
          local_398._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
          local_388._8_4_ = SUB84(dVar35,0);
          local_388._0_8_ = dVar36 + (dVar30 * dVar43 - dVar46 * dVar42) + dVar44 * dVar37 + dVar45;
          local_388._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
        }
        else {
          dVar35 = dVar46 + dVar46;
          dVar45 = dVar50 + dVar50;
          dVar49 = dVar43 * (dVar43 + dVar43);
          dStack_1d0 = (1.0 - (dVar50 * dVar45 + dVar49)) * dVar10;
          dVar30 = (dVar43 + dVar43) * dVar44;
          local_1d8 = (dVar35 * dVar43 - dVar45 * dVar44) * dVar10;
          dStack_1b0 = (dVar45 * dVar46 - dVar30) * dVar9;
          local_1b8 = (dVar35 * dVar44 + dVar43 * dVar45) * dVar9;
          local_1a8 = (1.0 - (dVar49 + dVar46 * dVar35)) * dVar9;
          dVar49 = dVar9 * (double)local_3c8._0_8_;
          dVar51 = (dVar35 * dVar43 + dVar45 * dVar44) * dVar8;
          local_1c8 = (dVar45 * dVar46 + dVar30) * dVar10;
          local_1e8 = (dVar43 * dVar45 - dVar35 * dVar44) * dVar8;
          local_1f8._8_4_ = SUB84(dVar51,0);
          local_1f8._0_8_ = (1.0 - (dVar50 * dVar45 + dVar46 * dVar35)) * dVar8;
          local_1f8._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
          uStack_1e0 = 0;
          uStack_1c0 = 0;
          uStack_1a0 = 0;
          local_198._8_4_ = SUB84(dVar48,0);
          local_198._0_8_ = dVar1;
          local_198._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
          local_188._8_4_ = 0;
          local_188._0_8_ = dVar36;
          local_188._12_4_ = 0x3ff00000;
          dVar43 = dStack_350 + dStack_350;
          dVar46 = local_348 + local_348;
          dVar50 = local_358 * (local_358 + local_358);
          local_228 = (1.0 - (dVar50 + dStack_350 * dVar43)) * (double)local_3c8._0_8_;
          dVar48 = (local_358 + local_358) * dStack_340;
          local_238 = (dVar43 * dStack_340 + local_358 * dVar46) * (double)local_3c8._0_8_;
          dStack_230 = (dVar46 * dStack_350 - dVar48) * (double)local_3c8._0_8_;
          local_278 = ((double)DAT_149934d80 - (local_348 * dVar46 + dStack_350 * dVar43)) * dVar6;
          dVar50 = (DAT_149934d80._8_8_ - (local_348 * dVar46 + dVar50)) * dVar7;
          dStack_270 = (dVar43 * local_358 + dVar46 * dStack_340) * dVar6;
          local_248 = (dVar46 * dStack_350 + dVar48) * dVar7;
          local_268 = (local_358 * dVar46 - dVar43 * dStack_340) * dVar6;
          uStack_260 = 0;
          local_258._8_4_ = SUB84(dVar50,0);
          local_258._0_8_ = (dVar43 * local_358 - dVar46 * dStack_340) * dVar7;
          local_258._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
          uStack_240 = 0;
          uStack_220 = 0;
          local_218 = local_338;
          dStack_210 = dStack_330;
          local_208 = local_328;
          uStack_200 = 0x3ff0000000000000;
          FUN_1447fea8d(&local_178,&local_278,local_1f8);
          FUN_144a1c686(&local_178,0x3e45798ee0000000);
          auVar27._8_8_ = -(ulonglong)(0.0 <= dVar10 * dVar7);
          auVar27._0_8_ = -(ulonglong)(0.0 <= dVar8 * dVar6);
          auVar29 = blendvpd(_DAT_149936790,auVar31,auVar27);
          uVar25 = -(ulonglong)(0.0 <= dVar49);
          dVar50 = (double)(~uVar25 & 0xbff0000000000000 | uVar25 & 0x3ff0000000000000);
          dVar43 = auVar29._0_8_;
          local_168 = local_168 * dVar43;
          local_170 = local_170 * dVar43;
          local_178 = local_178 * dVar43;
          dVar43 = auVar29._8_8_;
          local_148 = local_148 * dVar43;
          local_150 = local_150 * dVar43;
          local_158 = dVar43 * local_158;
          local_128 = local_128 * dVar50;
          local_130 = local_130 * dVar50;
          local_138 = dVar50 * local_138;
          FUN_14481fd10(&local_298,&local_178);
          dVar50 = local_288 * local_288 + local_298 * local_298;
          dVar43 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
          auVar41._0_8_ = dVar50 + dVar43;
          auVar41._8_8_ = dVar50 + dVar43;
          auVar28._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar41._8_8_);
          auVar28._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar41._0_8_);
          auVar29 = sqrtpd(auVar41,auVar41);
          auVar31 = divpd(auVar31,auVar29);
          auVar47._0_8_ = auVar31._0_8_ * local_288;
          auVar47._8_8_ = auVar31._8_8_ * dStack_280;
          local_3a8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar47,auVar28);
          local_3b8._8_8_ =
               (ulonglong)(dStack_290 * auVar31._8_8_) &
               -(ulonglong)(9.99999993922529e-09 <= auVar41._8_8_);
          local_3b8._0_8_ =
               (ulonglong)(local_298 * auVar31._0_8_) &
               -(ulonglong)(9.99999993922529e-09 <= auVar41._0_8_);
          local_398._8_8_ = dStack_110;
          local_398._0_8_ = local_118;
          local_388._8_8_ = 0;
          local_388._0_8_ = local_108;
        }
        local_378._8_4_ = SUB84(dVar7 * dVar10,0);
        local_378._0_8_ = dVar6 * dVar8;
        local_378._12_4_ = (int)((ulonglong)(dVar7 * dVar10) >> 0x20);
        local_368._8_4_ = SUB84((double)uVar21 * dVar11,0);
        local_368._0_8_ = (double)uVar18 * dVar9;
        local_368._12_4_ = (int)((ulonglong)((double)uVar21 * dVar11) >> 0x20);
        FUN_147660b82(param_1,lVar5,local_3b8);
      }
      lVar24 = lVar24 + 8;
    } while ((longlong)iVar3 * 8 != lVar24);
  }
  if ((local_f0 ^ (ulonglong)auStack_3f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147661aa8 FUN_147661aa8 body=314 status=ok
// SIG undefined FUN_147661aa8(void)

undefined8 * FUN_147661aa8(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 == 0) {
    iVar6 = 0;
    iVar4 = 0;
  }
  else {
    local_38 = 0;
    FUN_14485c47a(&local_38,param_3);
    iVar4 = (int)local_38;
    iVar6 = local_38._4_4_;
  }
  if (*(int *)(param_1 + 0x88) != 0) {
    iVar1 = FUN_144a78877(iVar4,iVar6);
    lVar2 = param_1 + 0x78;
    if (*(longlong *)(param_1 + 0x80) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x80);
    }
    iVar1 = *(int *)(lVar2 + ((longlong)iVar1 & (longlong)*(int *)(param_1 + 0x88) - 1U) * 4);
    while (iVar1 != -1) {
      lVar2 = *(longlong *)(param_1 + 0x40);
      lVar3 = (longlong)iVar1;
      lVar7 = lVar3 * 0x90;
      iVar1 = *(int *)(lVar2 + 0x80 + lVar7);
      if ((*(int *)(lVar2 + lVar7) == iVar4) && (*(int *)(lVar2 + 4 + lVar7) == iVar6)) {
        do {
          if (*(longlong *)(lVar2 + 0x70 + lVar7) == 0) {
            puVar5 = (undefined8 *)(lVar2 + lVar3 * 0x90 + 0x10);
            for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
              *param_2 = *puVar5;
              puVar5 = puVar5 + 1;
              param_2 = param_2 + 1;
            }
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
          }
          do {
            if (iVar1 == -1) goto LAB_147661bac;
            lVar3 = (longlong)iVar1;
            lVar7 = lVar3 * 0x90;
            iVar1 = *(int *)(lVar2 + 0x80 + lVar7);
          } while ((*(int *)(lVar2 + lVar7) != iVar4) || (*(int *)(lVar2 + 4 + lVar7) != iVar6));
        } while( true );
      }
    }
  }
LAB_147661bac:
  FUN_14480333a(param_3,param_2);
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147661be6 FUN_147661be6 body=344 status=ok
// SIG undefined FUN_147661be6(void)

undefined8 * FUN_147661be6(longlong param_1,undefined8 *param_2,longlong *param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 == (longlong *)0x0) {
    iVar4 = 0;
    iVar7 = 0;
  }
  else {
    local_48 = 0;
    FUN_14485c47a(&local_48,param_3);
    iVar7 = (int)local_48;
    iVar4 = local_48._4_4_;
  }
  if (*(int *)(param_1 + 0x88) != 0) {
    iVar1 = FUN_144a78877(iVar7,iVar4);
    lVar2 = param_1 + 0x78;
    if (*(longlong *)(param_1 + 0x80) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x80);
    }
    iVar1 = *(int *)(lVar2 + ((longlong)iVar1 & (longlong)*(int *)(param_1 + 0x88) - 1U) * 4);
    while (iVar1 != -1) {
      lVar2 = *(longlong *)(param_1 + 0x40);
      lVar3 = (longlong)iVar1;
      lVar6 = lVar3 * 0x90;
      iVar1 = *(int *)(lVar2 + 0x80 + lVar6);
      if ((*(int *)(lVar2 + lVar6) == iVar7) && (*(int *)(lVar2 + 4 + lVar6) == iVar4)) {
        do {
          if (*(longlong *)(lVar2 + 0x70 + lVar6) == param_4) {
            puVar5 = (undefined8 *)(lVar2 + lVar3 * 0x90 + 0x10);
            for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
              *param_2 = *puVar5;
              puVar5 = puVar5 + 1;
              param_2 = param_2 + 1;
            }
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_68);
          }
          do {
            if (iVar1 == -1) goto LAB_147661cf6;
            lVar3 = (longlong)iVar1;
            lVar6 = lVar3 * 0x90;
            iVar1 = *(int *)(lVar2 + 0x80 + lVar6);
          } while ((*(int *)(lVar2 + lVar6) != iVar7) || (*(int *)(lVar2 + 4 + lVar6) != iVar4));
        } while( true );
      }
    }
  }
LAB_147661cf6:
  (**(code **)(*param_3 + 0x4a8))(param_3,param_2,param_4,2);
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147661d50 FUN_147661d50 body=46 status=ok
// SIG undefined FUN_147661d50(void)

void FUN_147661d50(longlong param_1,undefined8 param_2)

{
  FUN_14633bf66();
  FUN_147661d7e(param_1 + 0x68,*(undefined8 *)(param_1 + 0x28),param_1 + 0x40,param_2);
  return;
}



// FUNCTION 147661d7e FUN_147661d7e body=923 status=ok
// SIG undefined FUN_147661d7e(void)

void FUN_147661d7e(longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_188 [32];
  ushort *local_168;
  code **local_160;
  code *local_158;
  longlong *local_150;
  longlong *local_148;
  undefined1 local_13d;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined2 local_130;
  undefined2 local_12e;
  undefined2 local_12c;
  undefined2 local_12a;
  ushort local_128;
  undefined1 local_126 [2];
  undefined4 local_124;
  undefined1 local_120;
  ushort local_11a;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  code *local_58;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  iVar1 = *(int *)(param_3 + 0x18);
  if (iVar1 != 0) {
    lVar3 = FUN_14009d2a0();
    local_148 = param_1 + 3;
    *(undefined4 *)(param_1 + 4) = 0;
    if (*(int *)((longlong)param_1 + 0x24) < 0) {
      FUN_147693934(local_148);
    }
    param_2 = param_2 + 0x28;
    uStack_f0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_d8 = 0;
    local_f8 = 0x10000000000;
    local_d0 = 0x10000000000;
    local_c8 = 0;
    uStack_c0 = 0;
    local_12c = (undefined2)param_1[1];
    local_50 = (undefined8 *)local_126;
    local_12a = *(undefined2 *)(*param_1 + 0x66);
    local_128 = *(ushort *)(lVar3 + 0x5a);
    local_58 = (code *)&local_12c;
    FUN_1447c44f6(&local_118);
    cVar2 = FUN_14050a5e0(param_2,&local_118);
    if (local_c8 != 0) {
      FUN_1400020a8();
    }
    if (cVar2 != '\0') {
      FUN_1476937c4(local_148,iVar1);
    }
    local_118._0_2_ = (ushort)(byte)local_118;
    FUN_14769380c(param_4,&local_134,&local_118,param_1);
    local_12c = *(undefined2 *)(lVar3 + 0x5a);
    local_12a = (undefined2)param_1[1];
    local_128 = local_128 & 0xff;
    local_124 = 0x6ff;
    local_120 = 0;
    local_11a = *(ushort *)(*param_1 + 0x66);
    FUN_147693ad0(&local_118);
    local_58 = (code *)&local_11a;
    local_50 = &local_118;
    FUN_1447c44f6(&local_108,&local_58);
    local_12e = *(undefined2 *)(lVar3 + 0x130);
    local_50 = (undefined8 *)&local_12c;
    local_58 = (code *)&local_12e;
    FUN_1447c44f6(&uStack_e0,&local_58);
    FUN_147546104(*param_1,&local_130);
    local_168 = (ushort *)&local_13c;
    local_13c = CONCAT22(local_13c._2_2_,(short)((ulonglong)local_118 >> 0x20)) | 0x200;
    local_58 = FUN_147693de8;
    local_50 = (undefined8 *)CONCAT71(local_50._1_7_,3);
    local_150 = local_148;
    local_160 = &local_58;
    local_158 = (code *)&local_130;
    FUN_147693b8a(&local_118,&local_138,param_2,param_4);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    FUN_1406adae8(param_4,local_134,local_138);
    local_12c = *(undefined2 *)(lVar3 + 0x5c);
    local_12a = (undefined2)param_1[1];
    local_128 = local_128 & 0xff;
    local_124 = 0x6ff;
    local_120 = 0;
    local_12e = *(undefined2 *)(*param_1 + 0x66);
    FUN_147693fdc(&local_118);
    local_58 = (code *)&local_12e;
    local_50 = (undefined8 *)&local_12c;
    FUN_1447c44f6(&local_108,&local_58);
    local_130 = *(undefined2 *)(lVar3 + 0x130);
    local_50 = (undefined8 *)&local_12e;
    local_58 = (code *)&local_130;
    FUN_1447c44f6(&uStack_e0,&local_58);
    FUN_147546104(*param_1,&local_13d);
    local_11a = local_118._4_2_ & 0xfdff;
    local_58 = FUN_147694300;
    local_50 = (undefined8 *)CONCAT71(local_50._1_7_,3);
    local_150 = local_148;
    local_168 = &local_11a;
    local_160 = &local_58;
    local_158 = (code *)&local_13d;
    FUN_147694096(&local_118,&local_13c,param_2,param_4);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    FUN_1406adae8(param_4,local_138,local_13c);
  }
  if ((local_48 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14766211a FUN_14766211a body=58 status=ok
// SIG undefined FUN_14766211a(void)

void FUN_14766211a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14633bf66();
  FUN_147662154(param_1 + 0x68,*(undefined8 *)(param_1 + 0x28),param_1 + 0x40,param_2,param_3);
  return;
}



// FUNCTION 147662154 FUN_147662154 body=983 status=ok
// SIG undefined FUN_147662154(void)

void FUN_147662154(longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int *piVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_208 [32];
  undefined8 *local_1e8;
  longlong *local_1e0;
  longlong *local_1d8;
  longlong local_1c8;
  undefined8 *local_1c0;
  undefined2 local_1b8;
  undefined2 local_1b6;
  undefined1 local_1b3;
  undefined4 local_1b0;
  undefined1 local_1ac;
  undefined8 *local_1a8;
  undefined2 local_19c;
  undefined2 local_19a;
  undefined8 local_198;
  undefined8 *local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  longlong local_138;
  undefined8 uStack_130;
  longlong local_128;
  undefined8 *local_c8;
  longlong local_c0;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  if (*(int *)(param_3 + 0x18) != 0) {
    lVar4 = FUN_14009d2a0();
    local_1c8 = param_2 + 0x28;
    if ((param_1[2] == 0) || ((ulonglong)param_1[2] < *(ulonglong *)(param_2 + 0x278))) {
      param_1[2] = *(longlong *)(param_2 + 0x270);
      *(undefined4 *)(param_1 + 4) = 0;
      if (*(int *)((longlong)param_1 + 0x24) < 0) {
        FUN_147693934(param_1 + 3);
      }
      puVar2 = local_198;
      uStack_160 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_178 = 0;
      uStack_170 = 0;
      local_188 = 0;
      uStack_180 = 0;
      local_148 = 0;
      local_168 = 0x10000000000;
      local_140 = 0x10000000000;
      local_138 = 0;
      uStack_130 = 0;
      local_c0 = (longlong)&local_198 + 6;
      local_198._6_2_ = SUB82(puVar2,6);
      local_198._0_6_ =
           CONCAT24(*(undefined2 *)(lVar4 + 0x5a),
                    CONCAT22(*(undefined2 *)(*param_1 + 0x66),(short)param_1[1]));
      local_c8 = &local_198;
      FUN_1447c44f6(&local_188);
      cVar3 = FUN_14050a5e0(local_1c8);
      if (local_138 != 0) {
        FUN_1400020a8();
      }
      if (cVar3 != '\0') {
        FUN_1476937c4(param_1 + 3);
      }
    }
    memset((void *)param_1[3],0,(longlong)(int)param_1[4] << 3);
    local_88 = 0;
    local_80 = 0x400000000;
    local_58 = 0;
    local_50 = 0x400000000;
    local_1b8 = *(undefined2 *)(lVar4 + 0x5a);
    local_1b6 = (undefined2)param_1[1];
    local_1b3 = 0;
    local_1b0 = 0x6ff;
    local_1ac = 0;
    local_19a = *(undefined2 *)(*param_1 + 0x66);
    FUN_147693ad0(&local_188);
    local_198 = &local_19a;
    local_190 = &local_198;
    FUN_1447c44f6(&local_178,&local_198);
    local_19c = *(undefined2 *)(lVar4 + 0x130);
    local_198 = &local_19c;
    local_190 = (undefined8 *)&local_19a;
    FUN_1447c44f6(&uStack_150,&local_198);
    FUN_147546104(*param_1,&local_198);
    local_1e8 = &local_198;
    local_1e0 = param_1 + 3;
    FUN_143315f80(&local_188,&local_1a8,local_1c8,param_4);
    if (local_128 != 0) {
      FUN_1400020a8();
    }
    if (local_1a8 != (undefined8 *)0x0) {
      FUN_147552ffc(&local_c8,0xffff,&local_1a8);
    }
    local_1b8 = *(undefined2 *)(lVar4 + 0x5c);
    local_1b6 = (undefined2)param_1[1];
    local_1b3 = 0;
    local_1b0 = 0x6ff;
    local_1ac = 0;
    local_19a = *(undefined2 *)(*param_1 + 0x66);
    FUN_147693fdc(&local_188);
    local_198 = &local_19a;
    local_190 = &local_198;
    FUN_1447c44f6(&local_178,&local_198);
    local_19c = *(undefined2 *)(lVar4 + 0x130);
    local_198 = &local_19c;
    local_190 = (undefined8 *)&local_19a;
    FUN_1447c44f6(&uStack_150,&local_198);
    FUN_147546104(*param_1,&local_198);
    local_1e8 = (undefined8 *)param_5;
    local_1e0 = &local_198;
    local_1d8 = param_1 + 3;
    FUN_1433163fc(&local_188,&local_1c0,local_1c8,&local_c8);
    if (local_1c0 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_1c0 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_1c0)(local_1c0,1);
      }
    }
    if (local_128 != 0) {
      FUN_1400020a8();
    }
    if (local_1a8 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_1a8 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_1a8)(local_1a8,1);
      }
    }
    FUN_14588b8d6(local_78);
    FUN_14009d40c(&local_c8);
  }
  if ((local_48 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147662530 FUN_147662530 body=58 status=ok
// SIG undefined FUN_147662530(void)

void FUN_147662530(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14633bf66();
  FUN_14766256a(param_1 + 0x68,*(undefined8 *)(param_1 + 0x28),param_1 + 0x40,param_2,param_3);
  return;
}



// FUNCTION 14766256a FUN_14766256a body=1003 status=ok
// SIG undefined FUN_14766256a(void)

void FUN_14766256a(longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  undefined2 *puVar5;
  char cVar6;
  longlong lVar7;
  undefined1 auStack_208 [32];
  undefined8 local_1e8;
  undefined8 *local_1e0;
  longlong *local_1d8;
  longlong local_1c8;
  undefined8 *local_1c0;
  undefined2 local_1b8;
  undefined2 local_1b6;
  undefined1 local_1b3;
  undefined4 local_1b0;
  undefined1 local_1ac;
  undefined8 *local_1a8;
  undefined2 local_19c;
  undefined2 local_19a;
  undefined8 local_198;
  undefined8 *local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  longlong local_138;
  undefined8 uStack_130;
  longlong local_128;
  undefined8 *local_c8;
  longlong local_c0;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  iVar4 = *(int *)(param_3 + 0x18);
  if (iVar4 != 0) {
    lVar7 = FUN_14009d2a0();
    lVar1 = param_2 + 0x28;
    if ((param_1[2] == 0) || ((ulonglong)param_1[2] < *(ulonglong *)(param_2 + 0x278))) {
      param_1[2] = *(longlong *)(param_2 + 0x270);
      *(undefined4 *)(param_1 + 4) = 0;
      if (*(int *)((longlong)param_1 + 0x24) < 0) {
        FUN_147694b98(param_1 + 3,0);
      }
      puVar5 = local_198;
      uStack_160 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_178 = 0;
      uStack_170 = 0;
      local_188 = 0;
      uStack_180 = 0;
      local_148 = 0;
      local_168 = 0x10000000000;
      local_140 = 0x10000000000;
      local_138 = 0;
      uStack_130 = 0;
      local_c0 = (longlong)&local_198 + 6;
      local_198._6_2_ = SUB82(puVar5,6);
      local_198._0_6_ =
           CONCAT24(*(undefined2 *)(lVar7 + 0x5a),
                    CONCAT22(*(undefined2 *)(*param_1 + 0x66),(short)param_1[1]));
      local_c8 = &local_198;
      FUN_1447c44f6(&local_188);
      cVar6 = FUN_14050a5e0(lVar1);
      if (local_138 != 0) {
        FUN_1400020a8();
      }
      if (cVar6 != '\0') {
        FUN_147694b24(param_1 + 3,iVar4,1);
      }
    }
    plVar2 = param_1 + 3;
    local_1c8 = lVar1;
    if (0 < (longlong)(int)param_1[4]) {
      memset((void *)*plVar2,0,(longlong)(int)param_1[4] << 3);
    }
    local_88 = 0;
    local_80 = 0x400000000;
    local_58 = 0;
    local_50 = 0x400000000;
    local_1b8 = *(undefined2 *)(lVar7 + 0x5a);
    local_1b6 = (undefined2)param_1[1];
    local_1b3 = 0;
    local_1b0 = 0x6ff;
    local_1ac = 0;
    local_19a = *(undefined2 *)(*param_1 + 0x66);
    FUN_147694d22(&local_188);
    local_198 = &local_19a;
    local_190 = &local_198;
    FUN_1447c44f6(&local_178,&local_198);
    local_19c = *(undefined2 *)(lVar7 + 0x130);
    local_190 = (undefined8 *)&local_19a;
    local_198 = &local_19c;
    FUN_1447c44f6(&uStack_150,&local_198);
    FUN_147546104(*param_1,&local_198);
    lVar1 = local_1c8;
    local_1e8 = 0;
    local_1e0 = &local_198;
    local_1d8 = plVar2;
    FUN_143316df6(&local_188,&local_1a8,local_1c8,param_4);
    if (local_128 != 0) {
      FUN_1400020a8();
    }
    if (local_1a8 != (undefined8 *)0x0) {
      FUN_147552ffc(&local_c8,0xffff,&local_1a8);
    }
    local_1b8 = *(undefined2 *)(lVar7 + 0x5c);
    local_1b6 = (undefined2)param_1[1];
    local_1b3 = 0;
    local_1b0 = 0x6ff;
    local_1ac = 0;
    local_19a = *(undefined2 *)(*param_1 + 0x66);
    FUN_147695118(&local_188);
    local_198 = &local_19a;
    local_190 = &local_198;
    FUN_1447c44f6(&local_178,&local_198);
    local_19c = *(undefined2 *)(lVar7 + 0x130);
    local_198 = &local_19c;
    local_190 = (undefined8 *)&local_19a;
    FUN_1447c44f6(&uStack_150,&local_198);
    FUN_147546104(*param_1,&local_198);
    local_1e8 = param_5;
    local_1e0 = &local_198;
    local_1d8 = plVar2;
    FUN_1433172ae(&local_188,&local_1c0,lVar1,&local_c8);
    if (local_1c0 != (undefined8 *)0x0) {
      LOCK();
      piVar3 = (int *)(local_1c0 + 1);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)*local_1c0)(local_1c0,1);
      }
    }
    if (local_128 != 0) {
      FUN_1400020a8();
    }
    if (local_1a8 != (undefined8 *)0x0) {
      LOCK();
      piVar3 = (int *)(local_1a8 + 1);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)*local_1a8)(local_1a8,1);
      }
    }
    FUN_14588b8d6(local_78);
    FUN_14009d40c(&local_c8);
  }
  if ((local_48 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14766295a FUN_14766295a body=130 status=ok
// SIG undefined FUN_14766295a(void)

void FUN_14766295a(longlong *param_1,double *param_2)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_1;
    dVar5 = *param_2;
    lVar4 = 0;
    do {
      if (*(char *)(lVar2 + 8 + lVar4) == '\x01') {
        dVar6 = (double)*(float *)(lVar2 + 0x18 + lVar4) * *(double *)(lVar2 + 0x10 + lVar4);
LAB_14766299a:
        dVar5 = dVar5 + dVar6;
      }
      else {
        fVar1 = *(float *)(lVar2 + 0x18 + lVar4);
        if (fVar1 < 1.0) {
          dVar7 = (double)fVar1;
          dVar6 = dVar7 * *(double *)(lVar2 + 0x10 + lVar4);
          dVar5 = dVar5 * (1.0 - dVar7);
          goto LAB_14766299a;
        }
        dVar5 = *(double *)(lVar2 + 0x10 + lVar4);
      }
      *param_2 = dVar5;
      lVar4 = lVar4 + 0x20;
    } while ((longlong)(int)lVar3 * 0x20 != lVar4);
  }
  return;
}



// FUNCTION 1476629dc FUN_1476629dc body=279 status=ok
// SIG undefined FUN_1476629dc(void)

void FUN_1476629dc(longlong *param_1,uint param_2,double *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_88 [40];
  longlong local_60;
  int local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = *param_1;
  fVar7 = 0.0;
  uVar5 = 0;
  uVar6 = 0;
  param_2 = param_2 & 0xffff;
  uVar3 = 0;
  uVar4 = 0;
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(lVar2 + (ulonglong)(param_2 << 4));
    uVar3 = (undefined4)uVar1;
    uVar4 = (undefined4)((ulonglong)uVar1 >> 0x20);
    fVar7 = *(float *)(lVar2 + 8 + (ulonglong)(param_2 << 4));
  }
  if (param_1[2] != 0) {
    uVar1 = *(undefined8 *)(param_1[2] + (ulonglong)(param_2 << 4));
    uVar5 = (undefined4)uVar1;
    uVar6 = (undefined4)((ulonglong)uVar1 >> 0x20);
  }
  uVar8 = 0;
  uVar9 = 0;
  if (param_1[3] != 0) {
    uVar1 = *(undefined8 *)(param_1[3] + (ulonglong)(param_2 << 4));
    uVar8 = (undefined4)uVar1;
    uVar9 = (undefined4)((ulonglong)uVar1 >> 0x20);
  }
  FUN_145f944fa(param_1,&local_60);
  if ((fVar7 != 0.0) || (NAN(fVar7))) {
    *param_3 = (double)CONCAT44(uVar4,uVar3) / (double)fVar7 + (double)CONCAT44(uVar6,uVar5) +
               (double)CONCAT44(uVar9,uVar8);
  }
  if (0 < local_58) {
    FUN_14766295a(&local_60,param_3);
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147662af4 FUN_147662af4 body=174 status=ok
// SIG undefined FUN_147662af4(void)

undefined8 * FUN_147662af4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *puStack_40;
  undefined2 local_2a;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[6] = 0x10000000000;
  param_2[0xb] = 0x10000000000;
  param_2[0x12] = 0x10000000000;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0x17] = 0x10000000000;
  local_2a = *(undefined2 *)param_2;
  puStack_40 = &local_28;
  local_48 = &local_2a;
  FUN_1447c44f6(param_2 + 2,&local_48);
  local_48 = (undefined2 *)*param_3;
  puStack_40 = (ulonglong *)param_3[1];
  FUN_1447c44f6(param_2 + 2,&local_48);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147662ba4 FUN_147662ba4 body=174 status=ok
// SIG undefined FUN_147662ba4(void)

undefined8 * FUN_147662ba4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *puStack_40;
  undefined2 local_2a;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[6] = 0x10000000000;
  param_2[0xb] = 0x10000000000;
  param_2[0x12] = 0x10000000000;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0x17] = 0x10000000000;
  local_2a = *(undefined2 *)param_2;
  puStack_40 = &local_28;
  local_48 = &local_2a;
  FUN_1447c44f6(param_2 + 2,&local_48);
  local_48 = (undefined2 *)*param_3;
  puStack_40 = (ulonglong *)param_3[1];
  FUN_1447c44f6(param_2 + 2,&local_48);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147662c54 FUN_147662c54 body=121 status=ok
// SIG undefined FUN_147662c54(void)

void FUN_147662c54(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14769827a(param_1,iVar1);
    }
    FUN_147698266((longlong)iVar1 * 0x10 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_147698300(param_1,param_2,iVar1 - param_2);
    FUN_14769835a(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147662cce FUN_147662cce body=148 status=ok
// SIG undefined FUN_147662cce(void)

undefined8 * FUN_147662cce(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_2[2] = param_1[2];
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[7] = 0x10000000000;
  param_2[0xc] = 0x10000000000;
  param_2[0x13] = 0x10000000000;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0x18] = 0x10000000000;
  FUN_1476983f6(param_2,param_2 + 3);
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_1447c44f6(param_2 + 3);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147662db4 FUN_147662db4 body=71 status=ok
// SIG undefined FUN_147662db4(void)

longlong FUN_147662db4(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = param_1 + -0x208;
  *(undefined ***)(param_1 + -0x208) = &PTR_FUN_14a493f70;
  FUN_140bb7e7c(param_1 + -0x108);
  FUN_1404db908(lVar1);
  if (param_2 != 0) {
    FUN_1400020a8(lVar1);
  }
  return lVar1;
}



// FUNCTION 147662e24 FUN_147662e24 body=49 status=ok
// SIG undefined FUN_147662e24(void)

undefined8 * FUN_147662e24(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4d5d50;
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147662e56 FUN_147662e56 body=78 status=ok
// SIG undefined FUN_147662e56(void)

undefined8 FUN_147662e56(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_147662f02();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147662ea6 FUN_147662ea6 body=69 status=ok
// SIG undefined FUN_147662ea6(void)

void FUN_147662ea6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  FUN_140dba9e6(param_3,*(undefined2 *)(param_1 + 8));
  FUN_140dba9e6(param_3,*(undefined2 *)(param_1 + 10));
  FUN_140dba9e6(param_3,*(undefined2 *)(param_1 + 0x10));
  if (*(char *)(param_1 + 0x28) == '\x01') {
    *param_4 = 1;
  }
  return;
}



// FUNCTION 147662f02 FUN_147662f02 body=277 status=ok
// SIG undefined FUN_147662f02(void)

undefined2 * FUN_147662f02(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_78;
  undefined4 local_70;
  undefined2 local_68;
  undefined8 local_60;
  char local_51;
  undefined1 local_50 [16];
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_51 = '\0';
  FUN_147662ea6(param_1,param_2,param_4,&local_51);
  local_40 = 0;
  local_38 = 0x200000000;
  local_60 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),local_51 * '\x02' + '\x01',param_4);
  FUN_140560464(param_3,&local_78,param_4);
  if (local_78 == 0) {
    local_78 = 0;
  }
  else {
    FUN_140b5f80c(param_1 + 0x10,local_78,local_70);
  }
  local_80 = local_70;
  local_7c = 1;
  local_88 = local_78;
  FUN_14163869e(local_50,&local_88,&local_60);
  *param_2 = local_68;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147663018 FUN_147663018 body=49 status=ok
// SIG undefined FUN_147663018(void)

undefined8 * FUN_147663018(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4d5d70;
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14766304a FUN_14766304a body=78 status=ok
// SIG undefined FUN_14766304a(void)

undefined8 FUN_14766304a(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_1476630ea();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14766309a FUN_14766309a body=57 status=ok
// SIG undefined FUN_14766309a(void)

void FUN_14766309a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  FUN_140dba9e6(param_3,*(undefined2 *)(param_1 + 8));
  FUN_140dba9e6(param_3,*(undefined2 *)(param_1 + 0x10));
  if (*(char *)(param_1 + 0x28) == '\x01') {
    *param_4 = 1;
  }
  return;
}



// FUNCTION 1476630ea FUN_1476630ea body=281 status=ok
// SIG undefined FUN_1476630ea(void)

undefined2 * FUN_1476630ea(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined4 local_78;
  undefined4 local_74;
  longlong local_70;
  undefined4 local_68;
  undefined2 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140dba9e6(param_4,*(undefined2 *)(param_1 + 8));
  FUN_140dba9e6(param_4,*(undefined2 *)(param_1 + 0x10));
  local_40 = 0;
  local_38 = 0x200000000;
  local_58 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x28) * '\x02' + '\x01',param_4
               );
  FUN_140560464(param_3,&local_70,param_4);
  if (local_70 == 0) {
    local_70 = 0;
  }
  else {
    FUN_14760a028(param_1 + 0x10,local_70,local_68);
  }
  local_78 = local_68;
  local_74 = 1;
  local_80 = local_70;
  FUN_14163869e(local_50,&local_80,&local_58);
  *param_2 = local_60;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14766328a FUN_14766328a body=59 status=ok
// SIG undefined FUN_14766328a(void)

undefined8 FUN_14766328a(longlong *param_1)

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



// FUNCTION 1476632d0 FUN_1476632d0 body=45 status=ok
// SIG undefined FUN_1476632d0(void)

void FUN_1476632d0(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 5) == '\x01') {
    *param_2 = &PTR_LAB_14a4d5ef0;
    FUN_147521a50(param_2 + 2);
    *(undefined1 *)(param_2 + 5) = 0;
  }
  return;
}



// FUNCTION 14766334c FUN_14766334c body=52 status=ok
// SIG undefined FUN_14766334c(void)

undefined8 * FUN_14766334c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a4d5ef0;
  FUN_147521a50(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147663380 FUN_147663380 body=42 status=ok
// SIG undefined FUN_147663380(void)

undefined8 FUN_147663380(void)

{
  FUN_140033559("Runtime\\MovieSceneTracks\\Public\\Sections/MovieSceneVectorSection.h",0x25,
                L"Pure virtual not implemented (%s)",
                L"FMovieSceneFloatVectorKeyStructBase::GetPropertyChannelByIndex");
  return 0;
}



// FUNCTION 147663448 FUN_147663448 body=59 status=ok
// SIG undefined FUN_147663448(void)

undefined8 FUN_147663448(longlong *param_1)

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



// FUNCTION 14766348e FUN_14766348e body=45 status=ok
// SIG undefined FUN_14766348e(void)

void FUN_14766348e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 6) == '\x01') {
    *param_2 = &PTR_LAB_14a4d5ef0;
    FUN_147521a50(param_2 + 2);
    *(undefined1 *)(param_2 + 6) = 0;
  }
  return;
}



// FUNCTION 14766350a FUN_14766350a body=52 status=ok
// SIG undefined FUN_14766350a(void)

undefined8 * FUN_14766350a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a4d5ef0;
  FUN_147521a50(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147663602 FUN_147663602 body=59 status=ok
// SIG undefined FUN_147663602(void)

undefined8 FUN_147663602(longlong *param_1)

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



// FUNCTION 147663648 FUN_147663648 body=45 status=ok
// SIG undefined FUN_147663648(void)

void FUN_147663648(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 7) == '\x01') {
    *param_2 = &PTR_LAB_14a4d5ef0;
    FUN_147521a50(param_2 + 2);
    *(undefined1 *)(param_2 + 7) = 0;
  }
  return;
}



// FUNCTION 1476636c4 FUN_1476636c4 body=52 status=ok
// SIG undefined FUN_1476636c4(void)

undefined8 * FUN_1476636c4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a4d5ef0;
  FUN_147521a50(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476637ec FUN_1476637ec body=59 status=ok
// SIG undefined FUN_1476637ec(void)

undefined8 FUN_1476637ec(longlong *param_1)

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



// FUNCTION 147663832 FUN_147663832 body=45 status=ok
// SIG undefined FUN_147663832(void)

void FUN_147663832(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 8) == '\x01') {
    *param_2 = &PTR_LAB_14a4d5ef0;
    FUN_147521a50(param_2 + 2);
    *(undefined1 *)(param_2 + 8) = 0;
  }
  return;
}



// FUNCTION 1476638ae FUN_1476638ae body=52 status=ok
// SIG undefined FUN_1476638ae(void)

undefined8 * FUN_1476638ae(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a4d5ef0;
  FUN_147521a50(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147663976 FUN_147663976 body=59 status=ok
// SIG undefined FUN_147663976(void)

undefined8 FUN_147663976(longlong *param_1)

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



// FUNCTION 1476639bc FUN_1476639bc body=45 status=ok
// SIG undefined FUN_1476639bc(void)

void FUN_1476639bc(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 5) == '\x01') {
    *param_2 = &PTR_LAB_14a4d65b0;
    FUN_147521a50(param_2 + 2);
    *(undefined1 *)(param_2 + 5) = 0;
  }
  return;
}



// FUNCTION 147663a38 FUN_147663a38 body=52 status=ok
// SIG undefined FUN_147663a38(void)

undefined8 * FUN_147663a38(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a4d65b0;
  FUN_147521a50(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147663a6c FUN_147663a6c body=42 status=ok
// SIG undefined FUN_147663a6c(void)

undefined8 FUN_147663a6c(void)

{
  FUN_140033559("Runtime\\MovieSceneTracks\\Public\\Sections/MovieSceneVectorSection.h",0x73,
                L"Pure virtual not implemented (%s)",
                L"FMovieSceneDoubleVectorKeyStructBase::GetPropertyChannelByIndex");
  return 0;
}



// FUNCTION 147663b34 FUN_147663b34 body=59 status=ok
// SIG undefined FUN_147663b34(void)

undefined8 FUN_147663b34(longlong *param_1)

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



// FUNCTION 147663b7a FUN_147663b7a body=45 status=ok
// SIG undefined FUN_147663b7a(void)

void FUN_147663b7a(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 7) == '\x01') {
    *param_2 = &PTR_LAB_14a4d65b0;
    FUN_147521a50(param_2 + 2);
    *(undefined1 *)(param_2 + 7) = 0;
  }
  return;
}



// FUNCTION 147663bf6 FUN_147663bf6 body=52 status=ok
// SIG undefined FUN_147663bf6(void)

undefined8 * FUN_147663bf6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a4d65b0;
  FUN_147521a50(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147663cee FUN_147663cee body=59 status=ok
// SIG undefined FUN_147663cee(void)

undefined8 FUN_147663cee(longlong *param_1)

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



// FUNCTION 147663d34 FUN_147663d34 body=45 status=ok
// SIG undefined FUN_147663d34(void)

void FUN_147663d34(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 8) == '\x01') {
    *param_2 = &PTR_LAB_14a4d65b0;
    FUN_147521a50(param_2 + 2);
    *(undefined1 *)(param_2 + 8) = 0;
  }
  return;
}



// FUNCTION 147663db0 FUN_147663db0 body=52 status=ok
// SIG undefined FUN_147663db0(void)

undefined8 * FUN_147663db0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a4d65b0;
  FUN_147521a50(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147663ee4 FUN_147663ee4 body=59 status=ok
// SIG undefined FUN_147663ee4(void)

undefined8 FUN_147663ee4(longlong *param_1)

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



// FUNCTION 147663f2a FUN_147663f2a body=45 status=ok
// SIG undefined FUN_147663f2a(void)

void FUN_147663f2a(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 10) == '\x01') {
    *param_2 = &PTR_LAB_14a4d65b0;
    FUN_147521a50(param_2 + 2);
    *(undefined1 *)(param_2 + 10) = 0;
  }
  return;
}



// FUNCTION 147663fa6 FUN_147663fa6 body=52 status=ok
// SIG undefined FUN_147663fa6(void)

undefined8 * FUN_147663fa6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a4d65b0;
  FUN_147521a50(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147663fe8 FUN_147663fe8 body=69 status=ok
// SIG undefined FUN_147663fe8(void)

undefined8 * FUN_147663fe8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4d6ae0;
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x25) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x25) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14766402e FUN_14766402e body=78 status=ok
// SIG undefined FUN_14766402e(void)

undefined8 FUN_14766402e(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [64];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0x10000000000;
  FUN_14766407e();
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14766407e FUN_14766407e body=266 status=ok
// SIG undefined FUN_14766407e(void)

undefined2 * FUN_14766407e(longlong param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined2 local_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_60[0] = param_4;
  FUN_1410a1536(local_60,param_1 + 8);
  local_50 = 0;
  local_48 = 0x200000000;
  local_68 = *(undefined8 *)(param_3 + 0x248);
  FUN_140dbb7cc(*(undefined8 *)(param_3 + 0x230),*(char *)(param_1 + 0x44) * '\x02' + '\x01',param_4
                ,local_60);
  FUN_140560464(param_3,&local_80,param_4);
  FUN_140e4f284(param_1);
  local_90 = local_80;
  local_88 = local_78;
  local_84 = 1;
  FUN_14163869e(local_60,&local_90,&local_68);
  *param_2 = local_70;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14766418a FUN_14766418a body=29 status=ok
// SIG undefined FUN_14766418a(void)

undefined8 FUN_14766418a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476641c6 FUN_1476641c6 body=29 status=ok
// SIG undefined FUN_1476641c6(void)

undefined8 FUN_1476641c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476641e4 FUN_1476641e4 body=184 status=ok
// SIG undefined FUN_1476641e4(void)

void FUN_1476641e4(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x138) = 0;
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FUN_1400020a8();
  }
  FUN_1401ad17c(param_1 + 0xf0);
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  FUN_140e90ec0(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_140bb2a1a(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_14064e7da(param_1);
  return;
}



// FUNCTION 14766429c FUN_14766429c body=52 status=ok
// SIG undefined FUN_14766429c(void)

void FUN_14766429c(longlong *param_1)

{
  FUN_1476642d0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1476642d0 FUN_1476642d0 body=315 status=ok
// SIG undefined FUN_1476642d0(void)

void FUN_1476642d0(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      if (*(char *)(*local_68 + 0x2c + (longlong)iStack_4c * 0x40) == '\x01') {
        *(undefined1 *)((longlong)iStack_4c * 0x40 + *local_68 + 0x2c) = 0;
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140b7ce44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14766440c FUN_14766440c body=54 status=ok
// SIG undefined FUN_14766440c(void)

void FUN_14766440c(longlong *param_1)

{
  FUN_147664442(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147664442 FUN_147664442 body=128 status=ok
// SIG undefined FUN_147664442(void)

void FUN_147664442(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14474875a(param_1,param_2);
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



// FUNCTION 1476644c4 FUN_1476644c4 body=109 status=ok
// SIG undefined FUN_1476644c4(void)

void FUN_1476644c4(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x2c,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x2c)) {
      uVar2 = uVar1 / 0x2c & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x2c,4);
  }
  return;
}



// FUNCTION 147664532 FUN_147664532 body=91 status=ok
// SIG undefined FUN_147664532(void)

undefined8 * FUN_147664532(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  
  *param_1 = 0;
  lVar1 = *param_2;
  iVar2 = (int)((ulonglong)(param_2[1] - lVar1) >> 3) * 0x3e0f83e1;
  *(int *)(param_1 + 1) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1406d370e(param_1,iVar2,0);
    FUN_1406d33d7(*param_1,lVar1,iVar2);
  }
  return param_1;
}



// FUNCTION 1476645fc FUN_1476645fc body=70 status=ok
// SIG undefined FUN_1476645fc(void)

undefined1 FUN_1476645fc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1475ae880(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x2c);
    uVar2 = *(undefined4 *)(param_3 + 0x30);
    uVar3 = *(undefined4 *)(param_3 + 0x34);
    uVar4 = *(undefined4 *)(param_3 + 0x34);
    uVar5 = *(undefined4 *)(param_3 + 0x38);
    uVar6 = *(undefined4 *)(param_3 + 0x3c);
    uVar7 = *(undefined4 *)(param_3 + 0x40);
    *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_3 + 0x28);
    *(undefined4 *)(param_2 + 0x2c) = uVar1;
    *(undefined4 *)(param_2 + 0x30) = uVar2;
    *(undefined4 *)(param_2 + 0x34) = uVar3;
    *(undefined4 *)(param_2 + 0x34) = uVar4;
    *(undefined4 *)(param_2 + 0x38) = uVar5;
    *(undefined4 *)(param_2 + 0x3c) = uVar6;
    *(undefined4 *)(param_2 + 0x40) = uVar7;
    param_2 = param_2 + 0x48;
    param_3 = param_3 + 0x48;
  }
  return 1;
}



// FUNCTION 14766466a FUN_14766466a body=59 status=ok
// SIG undefined FUN_14766466a(void)

undefined8 FUN_14766466a(longlong *param_1)

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



// FUNCTION 1476646b0 FUN_1476646b0 body=38 status=ok
// SIG undefined FUN_1476646b0(void)

void FUN_1476646b0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 147664726 FUN_147664726 body=29 status=ok
// SIG undefined FUN_147664726(void)

undefined8 FUN_147664726(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147664744 FUN_147664744 body=101 status=ok
// SIG undefined FUN_147664744(void)

void FUN_147664744(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = FUN_14009d2a0();
  uVar1 = *(ushort *)(lVar3 + 0x130);
  if ((uVar1 != 0xffff) &&
     (*(uint *)(param_3 + 0x20) != (uint)uVar1 && (int)(uint)uVar1 <= (int)*(uint *)(param_3 + 0x20)
     )) {
    uVar2 = *(uint *)(param_3 + (ulonglong)(uVar1 >> 5) * 4);
    if ((uVar2 >> (uVar1 & 0x1f) & 1) != 0) {
      *(uint *)(param_3 + (ulonglong)(uVar1 >> 5) * 4) = uVar2 & ~(1 << ((byte)uVar1 & 0x1f));
      goto LAB_147664794;
    }
  }
  FUN_140dba9e6(param_3);
LAB_147664794:
  FUN_140dba9e6(param_3,*(undefined2 *)(lVar3 + 0x11a));
  return;
}



// FUNCTION 1476647aa FUN_1476647aa body=29 status=ok
// SIG undefined FUN_1476647aa(void)

undefined8 FUN_1476647aa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1476647c8 FUN_1476647c8 body=101 status=ok
// SIG undefined FUN_1476647c8(void)

void FUN_1476647c8(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = FUN_14009d2a0();
  uVar1 = *(ushort *)(lVar3 + 0xf2);
  if ((uVar1 != 0xffff) &&
     (*(uint *)(param_3 + 0x20) != (uint)uVar1 && (int)(uint)uVar1 <= (int)*(uint *)(param_3 + 0x20)
     )) {
    uVar2 = *(uint *)(param_3 + (ulonglong)(uVar1 >> 5) * 4);
    if ((uVar2 >> (uVar1 & 0x1f) & 1) != 0) {
      *(uint *)(param_3 + (ulonglong)(uVar1 >> 5) * 4) = uVar2 & ~(1 << ((byte)uVar1 & 0x1f));
      goto LAB_147664818;
    }
  }
  FUN_140dba9e6(param_3);
LAB_147664818:
  FUN_140dba9e6(param_3,*(undefined2 *)(lVar3 + 0x11a));
  return;
}



// FUNCTION 14766482e FUN_14766482e body=336 status=ok
// SIG undefined FUN_14766482e(void)

void FUN_14766482e(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_88 [40];
  longlong local_60;
  ulonglong local_58;
  int local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = FUN_14009d2a0();
  FUN_1414574f6(*param_2,&local_60,*(undefined2 *)(lVar2 + 0xf2),0);
  if (local_48 != 0) {
    lVar6 = *param_2;
    if (*(ushort *)(lVar6 + 0xc) != 0) {
      plVar5 = *(longlong **)(lVar6 + 0x28);
      lVar3 = (ulonglong)*(ushort *)(lVar6 + 0xc) << 5;
      do {
        if (*(short *)((longlong)plVar5 + 0x1e) == *(short *)(lVar2 + 0x58)) goto LAB_1476648a8;
        plVar5 = plVar5 + 4;
        lVar3 = lVar3 + -0x20;
      } while (lVar3 != 0);
    }
    plVar5 = (longlong *)0x0;
LAB_1476648a8:
    iVar1 = *(int *)(lVar6 + 0x14);
    if (iVar1 == 1) {
      AcquireSRWLockShared((PSRWLOCK)(plVar5 + 1));
    }
    LOCK();
    *(int *)(plVar5 + 3) = (int)plVar5[3] + 1;
    UNLOCK();
    if (0 < *(int *)((longlong)param_2 + 0xc)) {
      lVar2 = *plVar5;
      lVar3 = 0;
      lVar6 = 0;
      do {
        FUN_147545218(local_48 + lVar3,
                      (longlong)*(int *)(lVar2 + 4 + ((int)param_2[1] + lVar6) * 0xc) * 0x18 +
                      *(longlong *)(param_1 + 8));
        lVar6 = lVar6 + 1;
        lVar3 = lVar3 + 0x10;
      } while (lVar6 < *(int *)((longlong)param_2 + 0xc));
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 3) = (int)plVar5[3] + -1;
      UNLOCK();
      if (iVar1 == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(plVar5 + 1));
      }
    }
  }
  if (local_60 != 0) {
    uVar4 = *(ulonglong *)(local_60 + 0x10);
    if (*(ulonglong *)(local_60 + 0x10) < local_58) {
      uVar4 = local_58;
    }
    *(ulonglong *)(local_60 + 0x10) = uVar4;
    LOCK();
    *(int *)(local_60 + 0x18) = *(int *)(local_60 + 0x18) + -1;
    UNLOCK();
    if (local_50 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(local_60 + 8));
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147664980 FUN_147664980 body=194 status=ok
// SIG undefined FUN_147664980(void)

undefined8 * FUN_147664980(undefined8 *param_1,undefined8 *param_2,int param_3,ulonglong param_4)

{
  ulonglong uVar1;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  ulonglong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 1;
  param_1[3] = 0;
  local_38 = param_2;
  local_30 = param_4;
  local_28 = param_3;
  if (param_3 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(param_2 + 1));
  }
  LOCK();
  *(int *)(param_2 + 3) = *(int *)(param_2 + 3) + 1;
  UNLOCK();
  FUN_1475493a6(param_1,&local_38);
  if (local_38 != (undefined8 *)0x0) {
    uVar1 = local_38[2];
    if ((ulonglong)local_38[2] < local_30) {
      uVar1 = local_30;
    }
    local_38[2] = uVar1;
    LOCK();
    *(int *)(local_38 + 3) = *(int *)(local_38 + 3) + -1;
    UNLOCK();
    if (local_28 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(local_38 + 1));
    }
  }
  param_1[3] = *param_2;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147664a44 FUN_147664a44 body=110 status=ok
// SIG undefined FUN_147664a44(void)

undefined8 * FUN_147664a44(undefined8 *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = &PTR_FUN_14a4d6d10;
  lVar2 = param_1[1];
  iVar1 = *(int *)(param_1 + 2);
  if ((longlong)iVar1 != 0) {
    lVar3 = 0;
    do {
      (**(code **)(**(longlong **)(lVar2 + 8 + lVar3) + 0x18))();
      lVar3 = lVar3 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar3);
    lVar2 = param_1[1];
  }
  if (lVar2 != 0) {
    FUN_1400020a8(lVar2);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147664ab2 FUN_147664ab2 body=29 status=ok
// SIG undefined FUN_147664ab2(void)

undefined8 FUN_147664ab2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147664ad0 FUN_147664ad0 body=46 status=ok
// SIG undefined FUN_147664ad0(void)

undefined8 * FUN_147664ad0(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(*param_3 + 0x2e0))(param_3);
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 3;
  *param_2 = &PTR_FUN_14a4d6d48;
  *(undefined1 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 147664afe FUN_147664afe body=29 status=ok
// SIG undefined FUN_147664afe(void)

undefined8 FUN_147664afe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147664b1c FUN_147664b1c body=69 status=ok
// SIG undefined FUN_147664b1c(void)

void FUN_147664b1c(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 unaff_RBX;
  
  cVar1 = *(char *)(param_1 + 8);
  FUN_14039914a(param_2,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),cVar1) & 0xffffffff);
  if ((cVar1 == '\x01') && (param_2[0x2f] == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000147664b56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x2c0))(param_2,1);
    return;
  }
  return;
}



// FUNCTION 147664b62 FUN_147664b62 body=117 status=ok
// SIG undefined FUN_147664b62(void)

longlong * FUN_147664b62(longlong *param_1,longlong *param_2,int param_3,int param_4)

{
  int *piVar1;
  
  *param_1 = 0;
  param_1[2] = 0;
  if (param_2 != (longlong *)0x0) {
    if (param_3 == 1) {
      AcquireSRWLockShared((PSRWLOCK)(param_2 + 1));
    }
    LOCK();
    *(int *)(param_2 + 3) = (int)param_2[3] + 1;
    UNLOCK();
    if (*param_1 != 0) {
      LOCK();
      piVar1 = (int *)(*param_1 + 0x18);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if ((int)param_1[1] == 1) {
        ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      }
    }
    *param_1 = (longlong)param_2;
    *(int *)(param_1 + 1) = param_3;
    param_1[2] = (longlong)param_4 * 8 + *param_2;
  }
  return param_1;
}



// FUNCTION 147664bd8 FUN_147664bd8 body=52 status=ok
// SIG undefined FUN_147664bd8(void)

void FUN_147664bd8(longlong *param_1)

{
  FUN_147664c0c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147664c0c FUN_147664c0c body=307 status=ok
// SIG undefined FUN_147664c0c(void)

void FUN_147664c0c(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      FUN_147664d40((longlong)iStack_4c * 0x30 + *local_68);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14494313c(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


