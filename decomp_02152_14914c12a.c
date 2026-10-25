// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14914c12a FUN_14914c12a body=29 status=ok
// SIG undefined FUN_14914c12a(void)

undefined8 FUN_14914c12a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14914c148 FUN_14914c148 body=157 status=ok
// SIG undefined FUN_14914c148(void)

void FUN_14914c148(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = 0;
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14bb23340;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0x3ff00000;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0x3ff0000000000000;
  param_2[0xb] = 0x3ff0000000000000;
  param_2[0xc] = 0x3ff0000000000000;
  param_2[0xd] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x1a;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0xe;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  memmove(param_2 + 2,&DAT_14c846480,0x60);
  *param_2 = &PTR_FUN_14bb23e00;
  return;
}



// FUNCTION 14914c1e6 FUN_14914c1e6 body=154 status=ok
// SIG undefined FUN_14914c1e6(void)

void FUN_14914c1e6(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bb23340;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0x3ff00000;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0x3ff0000000000000;
  param_2[0xb] = 0x3ff0000000000000;
  param_2[0xc] = 0x3ff0000000000000;
  param_2[0xd] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x1a;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0xe;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  memmove(param_2 + 2,&DAT_14c846480,0x60);
  *param_2 = &PTR_FUN_14bb23e00;
  return;
}



// FUNCTION 14914c2a4 FUN_14914c2a4 body=71 status=ok
// SIG undefined FUN_14914c2a4(void)

undefined8 FUN_14914c2a4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0x10;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x120);
      lVar1 = lVar1 + 0x130;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14914c314 FUN_14914c314 body=59 status=ok
// SIG undefined FUN_14914c314(void)

undefined8 FUN_14914c314(longlong *param_1)

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



// FUNCTION 14914c3c0 FUN_14914c3c0 body=29 status=ok
// SIG undefined FUN_14914c3c0(void)

undefined8 FUN_14914c3c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14914c3de FUN_14914c3de body=127 status=ok
// SIG undefined FUN_14914c3de(void)

void FUN_14914c3de(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bb23fe0;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0x3ff00000;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0x3ff0000000000000;
  param_2[0xb] = 0x3ff0000000000000;
  param_2[0xc] = 0x3ff0000000000000;
  param_2[0xd] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x1a;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0xe;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  memmove(param_2 + 2,&DAT_14c846480,0x60);
  return;
}



// FUNCTION 14914c45e FUN_14914c45e body=127 status=ok
// SIG undefined FUN_14914c45e(void)

void FUN_14914c45e(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bb23fe0;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0x3ff00000;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0x3ff0000000000000;
  param_2[0xb] = 0x3ff0000000000000;
  param_2[0xc] = 0x3ff0000000000000;
  param_2[0xd] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x1a;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0xe;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  memmove(param_2 + 2,&DAT_14c846480,0x60);
  return;
}



// FUNCTION 14914c502 FUN_14914c502 body=71 status=ok
// SIG undefined FUN_14914c502(void)

undefined8 FUN_14914c502(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0x10;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x120);
      lVar1 = lVar1 + 0x130;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14914c572 FUN_14914c572 body=59 status=ok
// SIG undefined FUN_14914c572(void)

undefined8 FUN_14914c572(longlong *param_1)

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



// FUNCTION 14914c61e FUN_14914c61e body=29 status=ok
// SIG undefined FUN_14914c61e(void)

undefined8 FUN_14914c61e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14914c63c FUN_14914c63c body=116 status=ok
// SIG undefined FUN_14914c63c(void)

void FUN_14914c63c(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bb241c0;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0x3ff00000;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0x3ff0000000000000;
  param_2[0xb] = 0x3ff0000000000000;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0xe;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x1a;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 14914c6b0 FUN_14914c6b0 body=116 status=ok
// SIG undefined FUN_14914c6b0(void)

void FUN_14914c6b0(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bb241c0;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0x3ff00000;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0x3ff0000000000000;
  param_2[0xb] = 0x3ff0000000000000;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0xe;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x1a;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 14914c748 FUN_14914c748 body=71 status=ok
// SIG undefined FUN_14914c748(void)

undefined8 FUN_14914c748(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0x10;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x120);
      lVar1 = lVar1 + 0x130;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14914c7b8 FUN_14914c7b8 body=59 status=ok
// SIG undefined FUN_14914c7b8(void)

undefined8 FUN_14914c7b8(longlong *param_1)

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



// FUNCTION 14914c864 FUN_14914c864 body=29 status=ok
// SIG undefined FUN_14914c864(void)

undefined8 FUN_14914c864(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14914c882 FUN_14914c882 body=190 status=ok
// SIG undefined FUN_14914c882(void)

void FUN_14914c882(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bad5830;
  param_2[2] = &PTR_FUN_14bad5c20;
  param_2[3] = 0;
  param_2[4] = 0;
  *(undefined2 *)(param_2 + 5) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x34) = 0;
  *(undefined4 *)((longlong)param_2 + 0x3c) = 0;
  param_2[8] = 0x3f91111111111111;
  param_2[9] = 0x800;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x10;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  *param_2 = &PTR_FUN_14bb243a0;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  *(undefined1 *)(param_2 + 0x26) = 1;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x28;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 14914c940 FUN_14914c940 body=190 status=ok
// SIG undefined FUN_14914c940(void)

void FUN_14914c940(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bad5830;
  param_2[2] = &PTR_FUN_14bad5c20;
  param_2[3] = 0;
  param_2[4] = 0;
  *(undefined2 *)(param_2 + 5) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x34) = 0;
  *(undefined4 *)((longlong)param_2 + 0x3c) = 0;
  param_2[8] = 0x3f91111111111111;
  param_2[9] = 0x800;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x10;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  *param_2 = &PTR_FUN_14bb243a0;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  *(undefined1 *)(param_2 + 0x26) = 1;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x28;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 14914ca22 FUN_14914ca22 body=63 status=ok
// SIG undefined FUN_14914ca22(void)

undefined1 FUN_14914ca22(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14914cbc2(param_2,param_3);
    param_3 = param_3 + 0x1b0;
    param_2 = param_2 + 0x1b0;
  }
  return 1;
}



// FUNCTION 14914ca8a FUN_14914ca8a body=59 status=ok
// SIG undefined FUN_14914ca8a(void)

undefined8 FUN_14914ca8a(longlong *param_1)

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



// FUNCTION 14914cad6 FUN_14914cad6 body=40 status=ok
// SIG undefined FUN_14914cad6(void)

void FUN_14914cad6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1b0) == '\x01') {
    FUN_14914cb72(param_2);
    *(undefined1 *)(param_2 + 0x1b0) = 0;
  }
  return;
}



// FUNCTION 14914cb4c FUN_14914cb4c body=38 status=ok
// SIG undefined FUN_14914cb4c(void)

undefined8 FUN_14914cb4c(undefined8 param_1,int param_2)

{
  FUN_14914cb72();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14914cb72 FUN_14914cb72 body=79 status=ok
// SIG undefined FUN_14914cb72(void)

void FUN_14914cb72(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bb243a0;
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bad5830;
  FUN_140f8ceac(param_1 + 2);
  return;
}



// FUNCTION 14914cbc2 FUN_14914cbc2 body=189 status=ok
// SIG undefined FUN_14914cbc2(void)

longlong FUN_14914cbc2(longlong param_1,longlong param_2)

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
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
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
  FUN_14591e93c(param_1 + 0x48,param_2 + 0x48);
  memcpy((void *)(param_1 + 0x60),(void *)(param_2 + 0x60),0x98);
  FUN_1490e1992(param_1 + 0xf8,param_2 + 0xf8);
  FUN_145c50a48(param_1 + 0x108,param_2 + 0x108);
  *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_2 + 0x118);
  FUN_144756208(param_1 + 0x120,param_2 + 0x120);
  puVar13 = (undefined8 *)(param_2 + 0x130);
  puVar14 = (undefined8 *)(param_1 + 0x130);
  for (lVar12 = 0xe; lVar12 != 0; lVar12 = lVar12 + -1) {
    *puVar14 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar14 = puVar14 + 1;
  }
  FUN_14054c6c4(param_1 + 0x1a0,param_2 + 0x1a0);
  return param_1;
}



// FUNCTION 14914cc80 FUN_14914cc80 body=121 status=ok
// SIG undefined FUN_14914cc80(void)

void FUN_14914cc80(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = 0;
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14bb22f80;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0x3ff00000;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0x3ff0000000000000;
  param_2[0xb] = 0x3ff0000000000000;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0xe;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  memmove(param_2 + 2,&DAT_14c846480,0x60);
  *param_2 = &PTR_FUN_14bb24580;
  return;
}



// FUNCTION 14914ccfa FUN_14914ccfa body=118 status=ok
// SIG undefined FUN_14914ccfa(void)

void FUN_14914ccfa(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bb22f80;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0x3ff00000;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0x3ff0000000000000;
  param_2[0xb] = 0x3ff0000000000000;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0xe;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  memmove(param_2 + 2,&DAT_14c846480,0x60);
  *param_2 = &PTR_FUN_14bb24580;
  return;
}



// FUNCTION 14914cd94 FUN_14914cd94 body=71 status=ok
// SIG undefined FUN_14914cd94(void)

undefined8 FUN_14914cd94(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0x10;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0xc0);
      lVar1 = lVar1 + 0xd0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14914ce04 FUN_14914ce04 body=59 status=ok
// SIG undefined FUN_14914ce04(void)

undefined8 FUN_14914ce04(longlong *param_1)

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



// FUNCTION 14914ceb0 FUN_14914ceb0 body=29 status=ok
// SIG undefined FUN_14914ceb0(void)

undefined8 FUN_14914ceb0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14914cece FUN_14914cece body=154 status=ok
// SIG undefined FUN_14914cece(void)

void FUN_14914cece(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bb24760;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0x3ff00000;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0x3ff0000000000000;
  param_2[0xb] = 0x3ff0000000000000;
  param_2[0xc] = 0x3ff0000000000000;
  param_2[0xd] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x1c;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0xe;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  memmove(param_2 + 2,&DAT_14c846480,0x60);
  *(undefined4 *)(param_2 + 0x1a) = 0;
  return;
}



// FUNCTION 14914cf68 FUN_14914cf68 body=154 status=ok
// SIG undefined FUN_14914cf68(void)

void FUN_14914cf68(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bb24760;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0x3ff00000;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0x3ff0000000000000;
  param_2[0xb] = 0x3ff0000000000000;
  param_2[0xc] = 0x3ff0000000000000;
  param_2[0xd] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x1c;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0xe;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  memmove(param_2 + 2,&DAT_14c846480,0x60);
  *(undefined4 *)(param_2 + 0x1a) = 0;
  return;
}



// FUNCTION 14914d026 FUN_14914d026 body=71 status=ok
// SIG undefined FUN_14914d026(void)

undefined8 FUN_14914d026(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0x10;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x130);
      lVar1 = lVar1 + 0x140;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14914d096 FUN_14914d096 body=59 status=ok
// SIG undefined FUN_14914d096(void)

undefined8 FUN_14914d096(longlong *param_1)

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



// FUNCTION 14914d142 FUN_14914d142 body=29 status=ok
// SIG undefined FUN_14914d142(void)

undefined8 FUN_14914d142(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14914d160 FUN_14914d160 body=131 status=ok
// SIG undefined FUN_14914d160(void)

void FUN_14914d160(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bb24940;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0x3ff00000;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0x3ff0000000000000;
  param_2[0xb] = 0x3ff0000000000000;
  param_2[0xc] = 0x3ff0000000000000;
  param_2[0xd] = 0;
  *(undefined1 *)(param_2 + 1) = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x1a;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0xe;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  memmove(param_2 + 2,&DAT_14c846480,0x60);
  return;
}



// FUNCTION 14914d1e4 FUN_14914d1e4 body=131 status=ok
// SIG undefined FUN_14914d1e4(void)

void FUN_14914d1e4(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bb24940;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0x3ff00000;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0x3ff0000000000000;
  param_2[0xb] = 0x3ff0000000000000;
  param_2[0xc] = 0x3ff0000000000000;
  param_2[0xd] = 0;
  *(undefined1 *)(param_2 + 1) = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x1a;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0xe;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  memmove(param_2 + 2,&DAT_14c846480,0x60);
  return;
}



// FUNCTION 14914d28c FUN_14914d28c body=71 status=ok
// SIG undefined FUN_14914d28c(void)

undefined8 FUN_14914d28c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 8;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x128);
      lVar1 = lVar1 + 0x130;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14914d2fc FUN_14914d2fc body=59 status=ok
// SIG undefined FUN_14914d2fc(void)

undefined8 FUN_14914d2fc(longlong *param_1)

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



// FUNCTION 14914d3a8 FUN_14914d3a8 body=29 status=ok
// SIG undefined FUN_14914d3a8(void)

undefined8 FUN_14914d3a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14914d3c6 FUN_14914d3c6 body=127 status=ok
// SIG undefined FUN_14914d3c6(void)

void FUN_14914d3c6(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_2 = &PTR_FUN_14bb24b20;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0x3ff00000;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0x3ff0000000000000;
  param_2[0xb] = 0x3ff0000000000000;
  puVar3 = &DAT_14c846480;
  puVar4 = param_2 + 2;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_2[0x13] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_2[0x11] = DAT_14c8464e0;
  param_2[0x12] = uVar1;
  uVar1 = DAT_14c8464e8;
  param_2[0xe] = DAT_14c8464e0;
  param_2[0xf] = uVar1;
  param_2[0x10] = DAT_14c8464f0;
  return;
}



// FUNCTION 14914d446 FUN_14914d446 body=127 status=ok
// SIG undefined FUN_14914d446(void)

void FUN_14914d446(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_2 = &PTR_FUN_14bb24b20;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0x3ff00000;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0x3ff0000000000000;
  param_2[0xb] = 0x3ff0000000000000;
  puVar3 = &DAT_14c846480;
  puVar4 = param_2 + 2;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_2[0x13] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_2[0x11] = DAT_14c8464e0;
  param_2[0x12] = uVar1;
  uVar1 = DAT_14c8464e8;
  param_2[0xe] = DAT_14c8464e0;
  param_2[0xf] = uVar1;
  param_2[0x10] = DAT_14c8464f0;
  return;
}



// FUNCTION 14914d4ea FUN_14914d4ea body=71 status=ok
// SIG undefined FUN_14914d4ea(void)

undefined8 FUN_14914d4ea(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0x10;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x90);
      lVar1 = lVar1 + 0xa0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14914d55a FUN_14914d55a body=59 status=ok
// SIG undefined FUN_14914d55a(void)

undefined8 FUN_14914d55a(longlong *param_1)

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



// FUNCTION 14914d606 FUN_14914d606 body=29 status=ok
// SIG undefined FUN_14914d606(void)

undefined8 FUN_14914d606(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14914d624 FUN_14914d624 body=127 status=ok
// SIG undefined FUN_14914d624(void)

void FUN_14914d624(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_2 = &PTR_FUN_14bb24d00;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0x3ff00000;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0x3ff0000000000000;
  param_2[0xb] = 0x3ff0000000000000;
  puVar3 = &DAT_14c846480;
  puVar4 = param_2 + 2;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_2[0x13] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_2[0x11] = DAT_14c8464e0;
  param_2[0x12] = uVar1;
  uVar1 = DAT_14c8464e8;
  param_2[0xe] = DAT_14c8464e0;
  param_2[0xf] = uVar1;
  param_2[0x10] = DAT_14c8464f0;
  return;
}



// FUNCTION 14914d6a4 FUN_14914d6a4 body=127 status=ok
// SIG undefined FUN_14914d6a4(void)

void FUN_14914d6a4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_2 = &PTR_FUN_14bb24d00;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0x3ff00000;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0x3ff0000000000000;
  param_2[0xb] = 0x3ff0000000000000;
  puVar3 = &DAT_14c846480;
  puVar4 = param_2 + 2;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_2[0x13] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_2[0x11] = DAT_14c8464e0;
  param_2[0x12] = uVar1;
  uVar1 = DAT_14c8464e8;
  param_2[0xe] = DAT_14c8464e0;
  param_2[0xf] = uVar1;
  param_2[0x10] = DAT_14c8464f0;
  return;
}



// FUNCTION 14914d748 FUN_14914d748 body=71 status=ok
// SIG undefined FUN_14914d748(void)

undefined8 FUN_14914d748(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0x10;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x90);
      lVar1 = lVar1 + 0xa0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14914d7b8 FUN_14914d7b8 body=59 status=ok
// SIG undefined FUN_14914d7b8(void)

undefined8 FUN_14914d7b8(longlong *param_1)

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



// FUNCTION 14914d864 FUN_14914d864 body=29 status=ok
// SIG undefined FUN_14914d864(void)

undefined8 FUN_14914d864(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14914d882 FUN_14914d882 body=129 status=ok
// SIG undefined FUN_14914d882(void)

void FUN_14914d882(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_2 = &PTR_FUN_14bb24ee0;
  uVar1 = DAT_14c8464e8;
  param_2[1] = DAT_14c8464e0;
  param_2[2] = uVar1;
  param_2[3] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_2[4] = DAT_14c8464e0;
  param_2[5] = uVar1;
  param_2[6] = DAT_14c8464f0;
  *(undefined1 *)(param_2 + 7) = 0;
  uVar1 = DAT_14c846518;
  param_2[8] = DAT_14c846510;
  param_2[9] = uVar1;
  param_2[10] = DAT_14c846520;
  puVar3 = &DAT_14c846480;
  puVar4 = param_2 + 0xc;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = &DAT_14c964b40;
  puVar4 = param_2 + 0x18;
  for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return;
}



// FUNCTION 14914d904 FUN_14914d904 body=129 status=ok
// SIG undefined FUN_14914d904(void)

void FUN_14914d904(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_2 = &PTR_FUN_14bb24ee0;
  uVar1 = DAT_14c8464e8;
  param_2[1] = DAT_14c8464e0;
  param_2[2] = uVar1;
  param_2[3] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_2[4] = DAT_14c8464e0;
  param_2[5] = uVar1;
  param_2[6] = DAT_14c8464f0;
  *(undefined1 *)(param_2 + 7) = 0;
  uVar1 = DAT_14c846518;
  param_2[8] = DAT_14c846510;
  param_2[9] = uVar1;
  param_2[10] = DAT_14c846520;
  puVar3 = &DAT_14c846480;
  puVar4 = param_2 + 0xc;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = &DAT_14c964b40;
  puVar4 = param_2 + 0x18;
  for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return;
}



// FUNCTION 14914d9aa FUN_14914d9aa body=71 status=ok
// SIG undefined FUN_14914d9aa(void)

undefined8 FUN_14914d9aa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 8;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x100);
      lVar1 = lVar1 + 0x110;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14914da1a FUN_14914da1a body=59 status=ok
// SIG undefined FUN_14914da1a(void)

undefined8 FUN_14914da1a(longlong *param_1)

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



// FUNCTION 14914dac6 FUN_14914dac6 body=29 status=ok
// SIG undefined FUN_14914dac6(void)

undefined8 FUN_14914dac6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14914db44 FUN_14914db44 body=54 status=ok
// SIG undefined FUN_14914db44(void)

undefined1 FUN_14914db44(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14914dcd4(param_2,param_3);
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return 1;
}



// FUNCTION 14914dba2 FUN_14914dba2 body=59 status=ok
// SIG undefined FUN_14914dba2(void)

undefined8 FUN_14914dba2(longlong *param_1)

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



// FUNCTION 14914dbe8 FUN_14914dbe8 body=34 status=ok
// SIG undefined FUN_14914dbe8(void)

void FUN_14914dbe8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_14914dc7e(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 14914dc58 FUN_14914dc58 body=38 status=ok
// SIG undefined FUN_14914dc58(void)

undefined8 FUN_14914dc58(undefined8 param_1,int param_2)

{
  FUN_14914dc7e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14914dc7e FUN_14914dc7e body=86 status=ok
// SIG undefined FUN_14914dc7e(void)

void FUN_14914dc7e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bb250c0;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14914dcd4 FUN_14914dcd4 body=77 status=ok
// SIG undefined FUN_14914dcd4(void)

longlong FUN_14914dcd4(longlong param_1,longlong param_2)

{
  FUN_144756208(param_1 + 8,param_2 + 8);
  FUN_1405b70a4(param_1 + 0x18,param_2 + 0x18);
  FUN_140472d9a(param_1 + 0x28,param_2 + 0x28);
  FUN_1405b70a4(param_1 + 0x38,param_2 + 0x38);
  return param_1;
}



// FUNCTION 14914dd22 FUN_14914dd22 body=194 status=ok
// SIG undefined FUN_14914dd22(void)

void FUN_14914dd22(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bb252a0;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0x3ff00000;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0x3ff0000000000000;
  param_2[0xb] = 0x3ff0000000000000;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x20;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  memmove(param_2 + 2,&DAT_14c846480,0x60);
  *(undefined2 *)(param_2 + 0xe) = 1;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0x42c8000000000000;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x10;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0xe4) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0xec) = 0x3f80000000000000;
  *(undefined4 *)((longlong)param_2 + 0xf4) = 0x3f800000;
  return;
}



// FUNCTION 14914dde4 FUN_14914dde4 body=194 status=ok
// SIG undefined FUN_14914dde4(void)

void FUN_14914dde4(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bb252a0;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0x3ff00000;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0x3ff0000000000000;
  param_2[0xb] = 0x3ff0000000000000;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x20;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  memmove(param_2 + 2,&DAT_14c846480,0x60);
  *(undefined2 *)(param_2 + 0xe) = 1;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0x42c8000000000000;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x10;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0xe4) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0xec) = 0x3f80000000000000;
  *(undefined4 *)((longlong)param_2 + 0xf4) = 0x3f800000;
  return;
}



// FUNCTION 14914deca FUN_14914deca body=71 status=ok
// SIG undefined FUN_14914deca(void)

undefined8 FUN_14914deca(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0x10;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x150);
      lVar1 = lVar1 + 0x160;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14914df3a FUN_14914df3a body=59 status=ok
// SIG undefined FUN_14914df3a(void)

undefined8 FUN_14914df3a(longlong *param_1)

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



// FUNCTION 14914dfe6 FUN_14914dfe6 body=29 status=ok
// SIG undefined FUN_14914dfe6(void)

undefined8 FUN_14914dfe6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14914e004 FUN_14914e004 body=149 status=ok
// SIG undefined FUN_14914e004(void)

void FUN_14914e004(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bb25480;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0x3ff00000;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0x3ff0000000000000;
  param_2[0xb] = 0x3ff0000000000000;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x1c;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  memmove(param_2 + 2,&DAT_14c846480,0x60);
  *(undefined2 *)(param_2 + 0xe) = 0x301;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x10;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 14914e09a FUN_14914e09a body=149 status=ok
// SIG undefined FUN_14914e09a(void)

void FUN_14914e09a(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bb25480;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0x3ff00000;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0x3ff0000000000000;
  param_2[0xb] = 0x3ff0000000000000;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x1c;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  memmove(param_2 + 2,&DAT_14c846480,0x60);
  *(undefined2 *)(param_2 + 0xe) = 0x301;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x10;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 14914e154 FUN_14914e154 body=71 status=ok
// SIG undefined FUN_14914e154(void)

undefined8 FUN_14914e154(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0x10;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x130);
      lVar1 = lVar1 + 0x140;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14914e1c4 FUN_14914e1c4 body=59 status=ok
// SIG undefined FUN_14914e1c4(void)

undefined8 FUN_14914e1c4(longlong *param_1)

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



// FUNCTION 14914e270 FUN_14914e270 body=29 status=ok
// SIG undefined FUN_14914e270(void)

undefined8 FUN_14914e270(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14914e28e FUN_14914e28e body=29 status=ok
// SIG undefined FUN_14914e28e(void)

undefined8 FUN_14914e28e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14914e314 FUN_14914e314 body=59 status=ok
// SIG undefined FUN_14914e314(void)

undefined8 FUN_14914e314(longlong *param_1)

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



// FUNCTION 14914e3b4 FUN_14914e3b4 body=29 status=ok
// SIG undefined FUN_14914e3b4(void)

undefined8 FUN_14914e3b4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14914e4c4 FUN_14914e4c4 body=59 status=ok
// SIG undefined FUN_14914e4c4(void)

undefined8 FUN_14914e4c4(longlong *param_1)

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



// FUNCTION 14914e564 FUN_14914e564 body=29 status=ok
// SIG undefined FUN_14914e564(void)

undefined8 FUN_14914e564(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14914e642 FUN_14914e642 body=42 status=ok
// SIG undefined FUN_14914e642(void)

undefined8 FUN_14914e642(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 8;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
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



// FUNCTION 14914e694 FUN_14914e694 body=59 status=ok
// SIG undefined FUN_14914e694(void)

undefined8 FUN_14914e694(longlong *param_1)

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



// FUNCTION 14914e734 FUN_14914e734 body=29 status=ok
// SIG undefined FUN_14914e734(void)

undefined8 FUN_14914e734(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14914e812 FUN_14914e812 body=42 status=ok
// SIG undefined FUN_14914e812(void)

undefined8 FUN_14914e812(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 8;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
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



// FUNCTION 14914e864 FUN_14914e864 body=59 status=ok
// SIG undefined FUN_14914e864(void)

undefined8 FUN_14914e864(longlong *param_1)

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



// FUNCTION 14914e904 FUN_14914e904 body=29 status=ok
// SIG undefined FUN_14914e904(void)

undefined8 FUN_14914e904(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14914ea02 FUN_14914ea02 body=59 status=ok
// SIG undefined FUN_14914ea02(void)

undefined8 FUN_14914ea02(longlong *param_1)

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



// FUNCTION 14914eaa2 FUN_14914eaa2 body=29 status=ok
// SIG undefined FUN_14914eaa2(void)

undefined8 FUN_14914eaa2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14914eb86 FUN_14914eb86 body=59 status=ok
// SIG undefined FUN_14914eb86(void)

undefined8 FUN_14914eb86(longlong *param_1)

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



// FUNCTION 14914ec26 FUN_14914ec26 body=29 status=ok
// SIG undefined FUN_14914ec26(void)

undefined8 FUN_14914ec26(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14914ed0e FUN_14914ed0e body=59 status=ok
// SIG undefined FUN_14914ed0e(void)

undefined8 FUN_14914ed0e(longlong *param_1)

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



// FUNCTION 14914edae FUN_14914edae body=29 status=ok
// SIG undefined FUN_14914edae(void)

undefined8 FUN_14914edae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14914eeae FUN_14914eeae body=42 status=ok
// SIG undefined FUN_14914eeae(void)

undefined8 FUN_14914eeae(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 8;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
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



// FUNCTION 14914ef00 FUN_14914ef00 body=59 status=ok
// SIG undefined FUN_14914ef00(void)

undefined8 FUN_14914ef00(longlong *param_1)

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



// FUNCTION 14914efa0 FUN_14914efa0 body=29 status=ok
// SIG undefined FUN_14914efa0(void)

undefined8 FUN_14914efa0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14914f0a0 FUN_14914f0a0 body=42 status=ok
// SIG undefined FUN_14914f0a0(void)

undefined8 FUN_14914f0a0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 8;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
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



// FUNCTION 14914f0f2 FUN_14914f0f2 body=59 status=ok
// SIG undefined FUN_14914f0f2(void)

undefined8 FUN_14914f0f2(longlong *param_1)

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



// FUNCTION 14914f192 FUN_14914f192 body=29 status=ok
// SIG undefined FUN_14914f192(void)

undefined8 FUN_14914f192(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14914f2b0 FUN_14914f2b0 body=42 status=ok
// SIG undefined FUN_14914f2b0(void)

undefined8 FUN_14914f2b0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 8;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
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



// FUNCTION 14914f302 FUN_14914f302 body=59 status=ok
// SIG undefined FUN_14914f302(void)

undefined8 FUN_14914f302(longlong *param_1)

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



// FUNCTION 14914f3a2 FUN_14914f3a2 body=29 status=ok
// SIG undefined FUN_14914f3a2(void)

undefined8 FUN_14914f3a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14914f4c8 FUN_14914f4c8 body=59 status=ok
// SIG undefined FUN_14914f4c8(void)

undefined8 FUN_14914f4c8(longlong *param_1)

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



// FUNCTION 14914f568 FUN_14914f568 body=29 status=ok
// SIG undefined FUN_14914f568(void)

undefined8 FUN_14914f568(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14914f65a FUN_14914f65a body=42 status=ok
// SIG undefined FUN_14914f65a(void)

undefined8 FUN_14914f65a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 8;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
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



// FUNCTION 14914f6ac FUN_14914f6ac body=59 status=ok
// SIG undefined FUN_14914f6ac(void)

undefined8 FUN_14914f6ac(longlong *param_1)

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



// FUNCTION 14914f74c FUN_14914f74c body=29 status=ok
// SIG undefined FUN_14914f74c(void)

undefined8 FUN_14914f74c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14914f86a FUN_14914f86a body=42 status=ok
// SIG undefined FUN_14914f86a(void)

undefined8 FUN_14914f86a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 8;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
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



// FUNCTION 14914f8bc FUN_14914f8bc body=59 status=ok
// SIG undefined FUN_14914f8bc(void)

undefined8 FUN_14914f8bc(longlong *param_1)

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



// FUNCTION 14914f95c FUN_14914f95c body=29 status=ok
// SIG undefined FUN_14914f95c(void)

undefined8 FUN_14914f95c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14914fa5c FUN_14914fa5c body=42 status=ok
// SIG undefined FUN_14914fa5c(void)

undefined8 FUN_14914fa5c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 8;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
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



// FUNCTION 14914faae FUN_14914faae body=59 status=ok
// SIG undefined FUN_14914faae(void)

undefined8 FUN_14914faae(longlong *param_1)

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



// FUNCTION 14914fb4e FUN_14914fb4e body=29 status=ok
// SIG undefined FUN_14914fb4e(void)

undefined8 FUN_14914fb4e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14914fc4e FUN_14914fc4e body=42 status=ok
// SIG undefined FUN_14914fc4e(void)

undefined8 FUN_14914fc4e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 8;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
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



// FUNCTION 14914fca0 FUN_14914fca0 body=59 status=ok
// SIG undefined FUN_14914fca0(void)

undefined8 FUN_14914fca0(longlong *param_1)

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



// FUNCTION 14914fd40 FUN_14914fd40 body=29 status=ok
// SIG undefined FUN_14914fd40(void)

undefined8 FUN_14914fd40(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14914fe64 FUN_14914fe64 body=59 status=ok
// SIG undefined FUN_14914fe64(void)

undefined8 FUN_14914fe64(longlong *param_1)

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



// FUNCTION 14914ff04 FUN_14914ff04 body=29 status=ok
// SIG undefined FUN_14914ff04(void)

undefined8 FUN_14914ff04(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149150028 FUN_149150028 body=59 status=ok
// SIG undefined FUN_149150028(void)

undefined8 FUN_149150028(longlong *param_1)

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



// FUNCTION 1491500c8 FUN_1491500c8 body=29 status=ok
// SIG undefined FUN_1491500c8(void)

undefined8 FUN_1491500c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491501ec FUN_1491501ec body=59 status=ok
// SIG undefined FUN_1491501ec(void)

undefined8 FUN_1491501ec(longlong *param_1)

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



// FUNCTION 14915028c FUN_14915028c body=29 status=ok
// SIG undefined FUN_14915028c(void)

undefined8 FUN_14915028c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491503b0 FUN_1491503b0 body=59 status=ok
// SIG undefined FUN_1491503b0(void)

undefined8 FUN_1491503b0(longlong *param_1)

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



// FUNCTION 149150450 FUN_149150450 body=29 status=ok
// SIG undefined FUN_149150450(void)

undefined8 FUN_149150450(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149150574 FUN_149150574 body=59 status=ok
// SIG undefined FUN_149150574(void)

undefined8 FUN_149150574(longlong *param_1)

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



// FUNCTION 149150614 FUN_149150614 body=29 status=ok
// SIG undefined FUN_149150614(void)

undefined8 FUN_149150614(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149150738 FUN_149150738 body=59 status=ok
// SIG undefined FUN_149150738(void)

undefined8 FUN_149150738(longlong *param_1)

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



// FUNCTION 1491507d8 FUN_1491507d8 body=29 status=ok
// SIG undefined FUN_1491507d8(void)

undefined8 FUN_1491507d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491508e2 FUN_1491508e2 body=42 status=ok
// SIG undefined FUN_1491508e2(void)

undefined8 FUN_1491508e2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 8;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x68;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149150934 FUN_149150934 body=59 status=ok
// SIG undefined FUN_149150934(void)

undefined8 FUN_149150934(longlong *param_1)

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



// FUNCTION 1491509d4 FUN_1491509d4 body=29 status=ok
// SIG undefined FUN_1491509d4(void)

undefined8 FUN_1491509d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149150abe FUN_149150abe body=42 status=ok
// SIG undefined FUN_149150abe(void)

undefined8 FUN_149150abe(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 8;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149150b10 FUN_149150b10 body=59 status=ok
// SIG undefined FUN_149150b10(void)

undefined8 FUN_149150b10(longlong *param_1)

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



// FUNCTION 149150bb0 FUN_149150bb0 body=29 status=ok
// SIG undefined FUN_149150bb0(void)

undefined8 FUN_149150bb0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149150d2a FUN_149150d2a body=71 status=ok
// SIG undefined FUN_149150d2a(void)

undefined8 FUN_149150d2a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 8;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x98);
      lVar1 = lVar1 + 0xa0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149150d9a FUN_149150d9a body=59 status=ok
// SIG undefined FUN_149150d9a(void)

undefined8 FUN_149150d9a(longlong *param_1)

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



// FUNCTION 149150e46 FUN_149150e46 body=29 status=ok
// SIG undefined FUN_149150e46(void)

undefined8 FUN_149150e46(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149150f66 FUN_149150f66 body=59 status=ok
// SIG undefined FUN_149150f66(void)

undefined8 FUN_149150f66(longlong *param_1)

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



// FUNCTION 149151006 FUN_149151006 body=29 status=ok
// SIG undefined FUN_149151006(void)

undefined8 FUN_149151006(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149151126 FUN_149151126 body=59 status=ok
// SIG undefined FUN_149151126(void)

undefined8 FUN_149151126(longlong *param_1)

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



// FUNCTION 1491511c6 FUN_1491511c6 body=29 status=ok
// SIG undefined FUN_1491511c6(void)

undefined8 FUN_1491511c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491512b2 FUN_1491512b2 body=59 status=ok
// SIG undefined FUN_1491512b2(void)

undefined8 FUN_1491512b2(longlong *param_1)

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



// FUNCTION 149151352 FUN_149151352 body=29 status=ok
// SIG undefined FUN_149151352(void)

undefined8 FUN_149151352(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149151480 FUN_149151480 body=59 status=ok
// SIG undefined FUN_149151480(void)

undefined8 FUN_149151480(longlong *param_1)

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



// FUNCTION 149151520 FUN_149151520 body=29 status=ok
// SIG undefined FUN_149151520(void)

undefined8 FUN_149151520(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149151606 FUN_149151606 body=42 status=ok
// SIG undefined FUN_149151606(void)

undefined8 FUN_149151606(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 8;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149151658 FUN_149151658 body=59 status=ok
// SIG undefined FUN_149151658(void)

undefined8 FUN_149151658(longlong *param_1)

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



// FUNCTION 1491516f8 FUN_1491516f8 body=29 status=ok
// SIG undefined FUN_1491516f8(void)

undefined8 FUN_1491516f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14915181c FUN_14915181c body=59 status=ok
// SIG undefined FUN_14915181c(void)

undefined8 FUN_14915181c(longlong *param_1)

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



// FUNCTION 1491518bc FUN_1491518bc body=29 status=ok
// SIG undefined FUN_1491518bc(void)

undefined8 FUN_1491518bc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491519e0 FUN_1491519e0 body=59 status=ok
// SIG undefined FUN_1491519e0(void)

undefined8 FUN_1491519e0(longlong *param_1)

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



// FUNCTION 149151a80 FUN_149151a80 body=29 status=ok
// SIG undefined FUN_149151a80(void)

undefined8 FUN_149151a80(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149151b64 FUN_149151b64 body=59 status=ok
// SIG undefined FUN_149151b64(void)

undefined8 FUN_149151b64(longlong *param_1)

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



// FUNCTION 149151c04 FUN_149151c04 body=29 status=ok
// SIG undefined FUN_149151c04(void)

undefined8 FUN_149151c04(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149151ce8 FUN_149151ce8 body=59 status=ok
// SIG undefined FUN_149151ce8(void)

undefined8 FUN_149151ce8(longlong *param_1)

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



// FUNCTION 149151d88 FUN_149151d88 body=29 status=ok
// SIG undefined FUN_149151d88(void)

undefined8 FUN_149151d88(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149151eac FUN_149151eac body=59 status=ok
// SIG undefined FUN_149151eac(void)

undefined8 FUN_149151eac(longlong *param_1)

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



// FUNCTION 149151f4c FUN_149151f4c body=29 status=ok
// SIG undefined FUN_149151f4c(void)

undefined8 FUN_149151f4c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14915204c FUN_14915204c body=42 status=ok
// SIG undefined FUN_14915204c(void)

undefined8 FUN_14915204c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 8;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
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



// FUNCTION 14915209e FUN_14915209e body=59 status=ok
// SIG undefined FUN_14915209e(void)

undefined8 FUN_14915209e(longlong *param_1)

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



// FUNCTION 14915213e FUN_14915213e body=29 status=ok
// SIG undefined FUN_14915213e(void)

undefined8 FUN_14915213e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149152262 FUN_149152262 body=59 status=ok
// SIG undefined FUN_149152262(void)

undefined8 FUN_149152262(longlong *param_1)

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



// FUNCTION 149152302 FUN_149152302 body=29 status=ok
// SIG undefined FUN_149152302(void)

undefined8 FUN_149152302(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149152426 FUN_149152426 body=59 status=ok
// SIG undefined FUN_149152426(void)

undefined8 FUN_149152426(longlong *param_1)

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



// FUNCTION 1491524c6 FUN_1491524c6 body=29 status=ok
// SIG undefined FUN_1491524c6(void)

undefined8 FUN_1491524c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491525f0 FUN_1491525f0 body=59 status=ok
// SIG undefined FUN_1491525f0(void)

undefined8 FUN_1491525f0(longlong *param_1)

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



// FUNCTION 149152690 FUN_149152690 body=29 status=ok
// SIG undefined FUN_149152690(void)

undefined8 FUN_149152690(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491527c6 FUN_1491527c6 body=59 status=ok
// SIG undefined FUN_1491527c6(void)

undefined8 FUN_1491527c6(longlong *param_1)

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



// FUNCTION 149152866 FUN_149152866 body=29 status=ok
// SIG undefined FUN_149152866(void)

undefined8 FUN_149152866(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149152940 FUN_149152940 body=42 status=ok
// SIG undefined FUN_149152940(void)

undefined8 FUN_149152940(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 8;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
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



// FUNCTION 149152992 FUN_149152992 body=59 status=ok
// SIG undefined FUN_149152992(void)

undefined8 FUN_149152992(longlong *param_1)

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



// FUNCTION 149152a32 FUN_149152a32 body=29 status=ok
// SIG undefined FUN_149152a32(void)

undefined8 FUN_149152a32(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149152b56 FUN_149152b56 body=59 status=ok
// SIG undefined FUN_149152b56(void)

undefined8 FUN_149152b56(longlong *param_1)

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



// FUNCTION 149152bf6 FUN_149152bf6 body=29 status=ok
// SIG undefined FUN_149152bf6(void)

undefined8 FUN_149152bf6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149152d16 FUN_149152d16 body=59 status=ok
// SIG undefined FUN_149152d16(void)

undefined8 FUN_149152d16(longlong *param_1)

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



// FUNCTION 149152db6 FUN_149152db6 body=29 status=ok
// SIG undefined FUN_149152db6(void)

undefined8 FUN_149152db6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149152ec2 FUN_149152ec2 body=59 status=ok
// SIG undefined FUN_149152ec2(void)

undefined8 FUN_149152ec2(longlong *param_1)

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



// FUNCTION 149152f62 FUN_149152f62 body=29 status=ok
// SIG undefined FUN_149152f62(void)

undefined8 FUN_149152f62(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149152f80 FUN_149152f80 body=256 status=ok
// SIG undefined FUN_149152f80(void)

void FUN_149152f80(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_2 = &PTR_FUN_14bb2a780;
  uVar1 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uVar2 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_2[3] = DAT_14c8464f0;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  uVar1 = DAT_14c8464f0;
  local_58 = DAT_14c8464f0;
  local_68 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_60 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_38 = DAT_14c8464f0;
  local_18 = DAT_14c8464f0;
  param_2[3] = DAT_14c8464f0;
  param_2[1] = local_68;
  param_2[2] = uStack_60;
  param_2[6] = uVar1;
  param_2[4] = local_68;
  param_2[5] = uStack_60;
  param_2[7] = local_68;
  param_2[8] = uStack_60;
  param_2[9] = uVar1;
  param_2[10] = local_68;
  param_2[0xb] = uStack_60;
  param_2[0xc] = uVar1;
  *(undefined4 *)(param_2 + 0xd) = 0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_2[0x11] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_2[0x12] = uVar1;
  param_2[0x13] = DAT_14c8464f0;
  uVar5 = DAT_14c8464e8._4_4_;
  uVar4 = (undefined4)DAT_14c8464e8;
  uVar3 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_2 + 0xe) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_2 + 0x74) = uVar3;
  *(undefined4 *)(param_2 + 0xf) = uVar4;
  *(undefined4 *)((longlong)param_2 + 0x7c) = uVar5;
  param_2[0x10] = DAT_14c8464f0;
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
  local_48 = local_68;
  uStack_40 = uStack_60;
  local_28 = local_68;
  uStack_20 = uStack_60;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149153082 FUN_149153082 body=256 status=ok
// SIG undefined FUN_149153082(void)

void FUN_149153082(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_2 = &PTR_FUN_14bb2a780;
  uVar1 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uVar2 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_2[3] = DAT_14c8464f0;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  uVar1 = DAT_14c8464f0;
  local_58 = DAT_14c8464f0;
  local_68 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_60 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_38 = DAT_14c8464f0;
  local_18 = DAT_14c8464f0;
  param_2[3] = DAT_14c8464f0;
  param_2[1] = local_68;
  param_2[2] = uStack_60;
  param_2[6] = uVar1;
  param_2[4] = local_68;
  param_2[5] = uStack_60;
  param_2[7] = local_68;
  param_2[8] = uStack_60;
  param_2[9] = uVar1;
  param_2[10] = local_68;
  param_2[0xb] = uStack_60;
  param_2[0xc] = uVar1;
  *(undefined4 *)(param_2 + 0xd) = 0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_2[0x11] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_2[0x12] = uVar1;
  param_2[0x13] = DAT_14c8464f0;
  uVar5 = DAT_14c8464e8._4_4_;
  uVar4 = (undefined4)DAT_14c8464e8;
  uVar3 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_2 + 0xe) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_2 + 0x74) = uVar3;
  *(undefined4 *)(param_2 + 0xf) = uVar4;
  *(undefined4 *)((longlong)param_2 + 0x7c) = uVar5;
  param_2[0x10] = DAT_14c8464f0;
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
  local_48 = local_68;
  uStack_40 = uStack_60;
  local_28 = local_68;
  uStack_20 = uStack_60;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491531a8 FUN_1491531a8 body=71 status=ok
// SIG undefined FUN_1491531a8(void)

undefined8 FUN_1491531a8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 8;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x98);
      lVar1 = lVar1 + 0xa0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149153218 FUN_149153218 body=59 status=ok
// SIG undefined FUN_149153218(void)

undefined8 FUN_149153218(longlong *param_1)

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



// FUNCTION 1491532c4 FUN_1491532c4 body=29 status=ok
// SIG undefined FUN_1491532c4(void)

undefined8 FUN_1491532c4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491532e2 FUN_1491532e2 body=196 status=ok
// SIG undefined FUN_1491532e2(void)

void FUN_1491532e2(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_2 = &PTR_FUN_14bb2a960;
  uVar2 = DAT_14c8464e8;
  uVar1 = DAT_14c8464e0;
  param_2[3] = DAT_14c8464f0;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  uVar3 = DAT_14c8464f0;
  uVar2 = DAT_14c8464e8;
  uVar1 = DAT_14c8464e0;
  local_58 = DAT_14c8464f0;
  local_68 = DAT_14c8464e0;
  uStack_60 = DAT_14c8464e8;
  local_38 = DAT_14c8464f0;
  local_48 = DAT_14c8464e0;
  uStack_40 = DAT_14c8464e8;
  local_28 = DAT_14c8464e0;
  uStack_20 = DAT_14c8464e8;
  local_18 = DAT_14c8464f0;
  param_2[3] = DAT_14c8464f0;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[6] = uVar3;
  param_2[4] = uVar1;
  param_2[5] = uVar2;
  param_2[7] = uVar1;
  param_2[8] = uVar2;
  param_2[9] = uVar3;
  local_68._0_4_ = (undefined4)uVar1;
  local_68._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_60._0_4_ = (undefined4)uVar2;
  uStack_60._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  *(undefined4 *)(param_2 + 10) = (undefined4)local_68;
  *(undefined4 *)((longlong)param_2 + 0x54) = local_68._4_4_;
  *(undefined4 *)(param_2 + 0xb) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)param_2 + 0x5c) = uStack_60._4_4_;
  param_2[0xc] = uVar3;
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
  local_68 = uVar1;
  uStack_60 = uVar2;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491533a8 FUN_1491533a8 body=196 status=ok
// SIG undefined FUN_1491533a8(void)

void FUN_1491533a8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_2 = &PTR_FUN_14bb2a960;
  uVar2 = DAT_14c8464e8;
  uVar1 = DAT_14c8464e0;
  param_2[3] = DAT_14c8464f0;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  uVar3 = DAT_14c8464f0;
  uVar2 = DAT_14c8464e8;
  uVar1 = DAT_14c8464e0;
  local_58 = DAT_14c8464f0;
  local_68 = DAT_14c8464e0;
  uStack_60 = DAT_14c8464e8;
  local_38 = DAT_14c8464f0;
  local_48 = DAT_14c8464e0;
  uStack_40 = DAT_14c8464e8;
  local_28 = DAT_14c8464e0;
  uStack_20 = DAT_14c8464e8;
  local_18 = DAT_14c8464f0;
  param_2[3] = DAT_14c8464f0;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[6] = uVar3;
  param_2[4] = uVar1;
  param_2[5] = uVar2;
  param_2[7] = uVar1;
  param_2[8] = uVar2;
  param_2[9] = uVar3;
  local_68._0_4_ = (undefined4)uVar1;
  local_68._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_60._0_4_ = (undefined4)uVar2;
  uStack_60._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  *(undefined4 *)(param_2 + 10) = (undefined4)local_68;
  *(undefined4 *)((longlong)param_2 + 0x54) = local_68._4_4_;
  *(undefined4 *)(param_2 + 0xb) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)param_2 + 0x5c) = uStack_60._4_4_;
  param_2[0xc] = uVar3;
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
  local_68 = uVar1;
  uStack_60 = uVar2;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149153492 FUN_149153492 body=42 status=ok
// SIG undefined FUN_149153492(void)

undefined8 FUN_149153492(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 8;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x68;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1491534e4 FUN_1491534e4 body=59 status=ok
// SIG undefined FUN_1491534e4(void)

undefined8 FUN_1491534e4(longlong *param_1)

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



// FUNCTION 149153584 FUN_149153584 body=29 status=ok
// SIG undefined FUN_149153584(void)

undefined8 FUN_149153584(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491535a2 FUN_1491535a2 body=164 status=ok
// SIG undefined FUN_1491535a2(void)

void FUN_1491535a2(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  *param_2 = &PTR_FUN_14bb2ab40;
  param_2[6] = 0;
  param_2[7] = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)((longlong)param_2 + 0x44) = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  *(undefined4 *)((longlong)param_2 + 0x4c) = 0x3ff00000;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  uVar1 = DAT_14c8464e8;
  param_2[0x15] = DAT_14c8464e0;
  param_2[0x16] = uVar1;
  param_2[0x17] = DAT_14c8464f0;
  uVar2 = DAT_14c8464e8;
  uVar1 = DAT_14c8464e0;
  param_2[3] = DAT_14c8464f0;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  *(undefined2 *)(param_2 + 4) = 1;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0x42c8000000000000;
  puVar4 = &DAT_14c846480;
  puVar5 = param_2 + 6;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined1 *)(param_2 + 0x12) = 0;
  *(undefined8 *)((longlong)param_2 + 0x94) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0x9c) = 0x3f80000000000000;
  *(undefined4 *)((longlong)param_2 + 0xa4) = 0x3f800000;
  return;
}



// FUNCTION 149153646 FUN_149153646 body=164 status=ok
// SIG undefined FUN_149153646(void)

void FUN_149153646(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  *param_2 = &PTR_FUN_14bb2ab40;
  param_2[6] = 0;
  param_2[7] = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)((longlong)param_2 + 0x44) = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  *(undefined4 *)((longlong)param_2 + 0x4c) = 0x3ff00000;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  uVar1 = DAT_14c8464e8;
  param_2[0x15] = DAT_14c8464e0;
  param_2[0x16] = uVar1;
  param_2[0x17] = DAT_14c8464f0;
  uVar2 = DAT_14c8464e8;
  uVar1 = DAT_14c8464e0;
  param_2[3] = DAT_14c8464f0;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  *(undefined2 *)(param_2 + 4) = 1;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0x42c8000000000000;
  puVar4 = &DAT_14c846480;
  puVar5 = param_2 + 6;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined1 *)(param_2 + 0x12) = 0;
  *(undefined8 *)((longlong)param_2 + 0x94) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0x9c) = 0x3f80000000000000;
  *(undefined4 *)((longlong)param_2 + 0xa4) = 0x3f800000;
  return;
}



// FUNCTION 14915370e FUN_14915370e body=71 status=ok
// SIG undefined FUN_14915370e(void)

undefined8 FUN_14915370e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 8;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0xb8);
      lVar1 = lVar1 + 0xc0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14915377e FUN_14915377e body=59 status=ok
// SIG undefined FUN_14915377e(void)

undefined8 FUN_14915377e(longlong *param_1)

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



// FUNCTION 14915382a FUN_14915382a body=29 status=ok
// SIG undefined FUN_14915382a(void)

undefined8 FUN_14915382a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149153954 FUN_149153954 body=53 status=ok
// SIG undefined FUN_149153954(void)

undefined8 FUN_149153954(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 8;
    do {
      *(undefined4 *)(param_2 + 0x78 + lVar1) = *(undefined4 *)(param_3 + 0x78 + lVar1);
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 0xf; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x88;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1491539b2 FUN_1491539b2 body=59 status=ok
// SIG undefined FUN_1491539b2(void)

undefined8 FUN_1491539b2(longlong *param_1)

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



// FUNCTION 149153a5e FUN_149153a5e body=29 status=ok
// SIG undefined FUN_149153a5e(void)

undefined8 FUN_149153a5e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149153b74 FUN_149153b74 body=51 status=ok
// SIG undefined FUN_149153b74(void)

undefined8 FUN_149153b74(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 8;
    do {
      *(undefined4 *)(param_2 + 0x60 + lVar1) = *(undefined4 *)(param_3 + 0x60 + lVar1);
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
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



// FUNCTION 149153bd0 FUN_149153bd0 body=59 status=ok
// SIG undefined FUN_149153bd0(void)

undefined8 FUN_149153bd0(longlong *param_1)

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



// FUNCTION 149153c70 FUN_149153c70 body=29 status=ok
// SIG undefined FUN_149153c70(void)

undefined8 FUN_149153c70(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149153d4e FUN_149153d4e body=42 status=ok
// SIG undefined FUN_149153d4e(void)

undefined8 FUN_149153d4e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 8;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
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



// FUNCTION 149153da0 FUN_149153da0 body=59 status=ok
// SIG undefined FUN_149153da0(void)

undefined8 FUN_149153da0(longlong *param_1)

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



// FUNCTION 149153e40 FUN_149153e40 body=29 status=ok
// SIG undefined FUN_149153e40(void)

undefined8 FUN_149153e40(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149153f1e FUN_149153f1e body=42 status=ok
// SIG undefined FUN_149153f1e(void)

undefined8 FUN_149153f1e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 8;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
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



// FUNCTION 149153f70 FUN_149153f70 body=59 status=ok
// SIG undefined FUN_149153f70(void)

undefined8 FUN_149153f70(longlong *param_1)

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



// FUNCTION 149154010 FUN_149154010 body=29 status=ok
// SIG undefined FUN_149154010(void)

undefined8 FUN_149154010(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14915402e FUN_14915402e body=119 status=ok
// SIG undefined FUN_14915402e(void)

void FUN_14915402e(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  *param_2 = &PTR_FUN_14bb2b4a0;
  param_2[6] = 0;
  param_2[7] = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)((longlong)param_2 + 0x44) = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  *(undefined4 *)((longlong)param_2 + 0x4c) = 0x3ff00000;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  uVar1 = DAT_14c8464e8;
  param_2[0x12] = DAT_14c8464e0;
  param_2[0x13] = uVar1;
  param_2[0x14] = DAT_14c8464f0;
  uVar2 = DAT_14c8464e8;
  uVar1 = DAT_14c8464e0;
  param_2[3] = DAT_14c8464f0;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  *(undefined2 *)(param_2 + 4) = 0x301;
  puVar4 = &DAT_14c846480;
  puVar5 = param_2 + 6;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  return;
}



// FUNCTION 1491540a6 FUN_1491540a6 body=119 status=ok
// SIG undefined FUN_1491540a6(void)

void FUN_1491540a6(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  *param_2 = &PTR_FUN_14bb2b4a0;
  param_2[6] = 0;
  param_2[7] = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)((longlong)param_2 + 0x44) = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  *(undefined4 *)((longlong)param_2 + 0x4c) = 0x3ff00000;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  uVar1 = DAT_14c8464e8;
  param_2[0x12] = DAT_14c8464e0;
  param_2[0x13] = uVar1;
  param_2[0x14] = DAT_14c8464f0;
  uVar2 = DAT_14c8464e8;
  uVar1 = DAT_14c8464e0;
  param_2[3] = DAT_14c8464f0;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  *(undefined2 *)(param_2 + 4) = 0x301;
  puVar4 = &DAT_14c846480;
  puVar5 = param_2 + 6;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  return;
}



// FUNCTION 149154142 FUN_149154142 body=71 status=ok
// SIG undefined FUN_149154142(void)

undefined8 FUN_149154142(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 8;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0xa0);
      lVar1 = lVar1 + 0xb0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1491541b2 FUN_1491541b2 body=59 status=ok
// SIG undefined FUN_1491541b2(void)

undefined8 FUN_1491541b2(longlong *param_1)

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



// FUNCTION 14915425e FUN_14915425e body=29 status=ok
// SIG undefined FUN_14915425e(void)

undefined8 FUN_14915425e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491542f0 FUN_1491542f0 body=103 status=ok
// SIG undefined FUN_1491542f0(void)

undefined8 FUN_1491542f0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_1405b70a4(param_2 + 8 + lVar6,param_3 + 8 + lVar6);
      puVar1 = (undefined4 *)(param_3 + 0x18 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x18 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      *(undefined8 *)(param_2 + 0x28 + lVar6) = *(undefined8 *)(param_3 + 0x28 + lVar6);
      lVar6 = lVar6 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149154380 FUN_149154380 body=59 status=ok
// SIG undefined FUN_149154380(void)

undefined8 FUN_149154380(longlong *param_1)

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



// FUNCTION 1491543c6 FUN_1491543c6 body=48 status=ok
// SIG undefined FUN_1491543c6(void)

void FUN_1491543c6(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 6) == '\x01') {
    *param_2 = &PTR_FUN_14bb2b680;
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 6) = 0;
  }
  return;
}



// FUNCTION 149154444 FUN_149154444 body=57 status=ok
// SIG undefined FUN_149154444(void)

undefined8 * FUN_149154444(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb2b680;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491544f2 FUN_1491544f2 body=103 status=ok
// SIG undefined FUN_1491544f2(void)

undefined8 FUN_1491544f2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_1405b70a4(param_2 + 8 + lVar6,param_3 + 8 + lVar6);
      puVar1 = (undefined4 *)(param_3 + 0x18 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x18 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      *(undefined8 *)(param_2 + 0x28 + lVar6) = *(undefined8 *)(param_3 + 0x28 + lVar6);
      lVar6 = lVar6 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149154582 FUN_149154582 body=59 status=ok
// SIG undefined FUN_149154582(void)

undefined8 FUN_149154582(longlong *param_1)

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



// FUNCTION 1491545c8 FUN_1491545c8 body=48 status=ok
// SIG undefined FUN_1491545c8(void)

void FUN_1491545c8(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 6) == '\x01') {
    *param_2 = &PTR_FUN_14bb2b870;
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 6) = 0;
  }
  return;
}



// FUNCTION 149154646 FUN_149154646 body=57 status=ok
// SIG undefined FUN_149154646(void)

undefined8 * FUN_149154646(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb2b870;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149154680 FUN_149154680 body=38 status=ok
// SIG undefined FUN_149154680(void)

void FUN_149154680(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1490f8fc6(param_1);
    param_1 = param_1 + 0x60;
  }
  return;
}



// FUNCTION 1491546a6 FUN_1491546a6 body=57 status=ok
// SIG undefined FUN_1491546a6(void)

void FUN_1491546a6(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1[7] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 9;
  }
  return;
}



// FUNCTION 1491546e0 FUN_1491546e0 body=147 status=ok
// SIG undefined FUN_1491546e0(void)

void FUN_1491546e0(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x24,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x24)) {
      uVar5 = uVar4 / 0x24 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x24,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 149154774 FUN_149154774 body=47 status=ok
// SIG undefined FUN_149154774(void)

void FUN_149154774(longlong param_1,longlong param_2,int param_3)

{
  do {
    FUN_149154838(param_1,param_2);
    param_1 = param_1 + 0x48;
    param_2 = param_2 + 0x48;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 1491547a4 FUN_1491547a4 body=147 status=ok
// SIG undefined FUN_1491547a4(void)

void FUN_1491547a4(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x48,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x48)) {
      uVar5 = uVar4 / 0x48 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x48,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 149154838 FUN_149154838 body=266 status=ok
// SIG undefined FUN_149154838(void)

undefined8 * FUN_149154838(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  byte bVar4;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_144a06ca8(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 << 2);
  }
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  param_1[2] = param_2[2];
  lVar3 = param_2[4];
  param_1[4] = lVar3;
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar4 = DAT_14c950c29;
  lVar3 = param_2[5];
  param_1[5] = lVar3;
  if ((lVar3 != 0 & bVar4) == 1) {
    FUN_1456cec3c();
  }
  *(undefined2 *)((longlong)param_1 + 0x34) = *(undefined2 *)((longlong)param_2 + 0x34);
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
  return param_1;
}



// FUNCTION 149154942 FUN_149154942 body=377 status=ok
// SIG undefined FUN_149154942(void)

longlong * FUN_149154942(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x24,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x24);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_149154cfc(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x71c71 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_1490f3f70(*param_2 + lVar5,param_1);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x24;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_149154cfc(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_149154abc(param_2);
        FUN_1490f3f70(uVar3,param_1);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 149154abc FUN_149154abc body=63 status=ok
// SIG undefined FUN_149154abc(void)

longlong FUN_149154abc(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1491546e0(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x24 + *param_1;
  FUN_149154afb(lVar2);
  return lVar2;
}



// FUNCTION 149154afb FUN_149154afb body=48 status=ok
// SIG undefined FUN_149154afb(void)

void FUN_149154afb(undefined1 *param_1)

{
  *param_1 = 4;
  *(undefined8 *)(param_1 + 4) = 0xffffffff;
  *(undefined2 *)(param_1 + 0xc) = 1;
  param_1[0xe] = 0;
  *(undefined2 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x20) = 0;
  return;
}



// FUNCTION 149154b2c FUN_149154b2c body=371 status=ok
// SIG undefined FUN_149154b2c(void)

longlong * FUN_149154b2c(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x48,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x48);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_1491546a6(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_149154d6c(param_2,0);
      }
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x38e38 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_1490f44da(*param_2 + lVar5,param_1);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x48;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    FUN_1490f5794(param_2);
    if (0 < (int)local_2c) {
      iVar4 = 0;
      do {
        uVar3 = FUN_149154ca0(param_2);
        FUN_1490f44da(uVar3,param_1);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 149154ca0 FUN_149154ca0 body=63 status=ok
// SIG undefined FUN_149154ca0(void)

longlong FUN_149154ca0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1491547a4(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x48 + *param_1;
  FUN_149154cdf(lVar2);
  return lVar2;
}



// FUNCTION 149154cdf FUN_149154cdf body=29 status=ok
// SIG undefined FUN_149154cdf(void)

void FUN_149154cdf(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 4;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return;
}



// FUNCTION 149154cfc FUN_149154cfc body=112 status=ok
// SIG undefined FUN_149154cfc(void)

void FUN_149154cfc(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x24,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x24)) {
      uVar2 = uVar1 / 0x24 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x24,4);
  }
  return;
}



// FUNCTION 149154d6c FUN_149154d6c body=112 status=ok
// SIG undefined FUN_149154d6c(void)

void FUN_149154d6c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x48,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x48)) {
      uVar2 = uVar1 / 0x48 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x48,8);
  }
  return;
}



// FUNCTION 149154ddc FUN_149154ddc body=113 status=ok
// SIG undefined FUN_149154ddc(void)

int FUN_149154ddc(longlong *param_1,uint param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar3 = *param_1;
      do {
        lVar5 = (longlong)iVar2 * 0x20;
        if ((((*(char *)(lVar3 + 0xc + lVar5) == (char)param_3[3]) &&
             (piVar1 = (int *)(lVar3 + lVar5), *piVar1 == *param_3)) && (piVar1[1] == param_3[1]))
           && (piVar1[2] == param_3[2])) {
          return iVar2;
        }
        iVar2 = *(int *)(lVar3 + 0x18 + lVar5);
      } while (iVar2 != -1);
    }
  }
  return -1;
}



// FUNCTION 149154e4e FUN_149154e4e body=322 status=ok
// SIG undefined FUN_149154e4e(void)

undefined4 * FUN_149154e4e(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined4 uVar6;
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
  FUN_149154f92(param_1,local_48);
  puVar1 = (undefined4 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  uVar6 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *local_40 = *puVar1;
  local_40[1] = uVar6;
  local_40[2] = uVar3;
  local_40[3] = uVar4;
  *(undefined8 *)(local_40 + 4) = *puVar2;
  local_40[6] = 0xffffffff;
  local_4c = local_48[0];
  uVar6 = FUN_144a78877(local_40[2],*(undefined1 *)(local_40 + 3));
  uVar6 = FUN_144a78877(local_40[1],uVar6);
  uVar7 = FUN_144a78877(*local_40,uVar6);
  cVar5 = FUN_149155078(param_1,uVar7,local_40,&local_4c);
  uVar6 = local_4c;
  if (cVar5 == '\0') {
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
      local_40[7] = uVar7;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      local_40[6] = *(undefined4 *)
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
      FUN_149155148(param_1);
    }
  }
  *param_2 = uVar6;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149154f92 FUN_149154f92 body=229 status=ok
// SIG undefined FUN_149154f92(void)

int * FUN_149154f92(longlong *param_1,int *param_2)

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
      FUN_1405b363e(param_1,iVar6);
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



// FUNCTION 149155078 FUN_149155078 body=93 status=ok
// SIG undefined FUN_149155078(void)

undefined8 FUN_149155078(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar7 = FUN_149154ddc(), iVar7 != -1)) {
    lVar2 = *param_1;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    *(undefined8 *)(lVar2 + 0x10 + (longlong)iVar7 * 0x20) = *(undefined8 *)(param_3 + 4);
    puVar1 = (undefined4 *)(lVar2 + (longlong)iVar7 * 0x20);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_1491550d6(param_1,*param_4);
    *param_4 = iVar7;
    return 1;
  }
  return 0;
}



// FUNCTION 1491550d6 FUN_1491550d6 body=114 status=ok
// SIG undefined FUN_1491550d6(void)

void FUN_1491550d6(longlong *param_1,int param_2)

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



// FUNCTION 149155148 FUN_149155148 body=474 status=ok
// SIG undefined FUN_149155148(void)

void FUN_149155148(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar11 = (longlong)iVar5 * 0x20;
        uVar6 = FUN_144a78877(*(undefined4 *)(lVar3 + 8 + lVar11),
                              *(undefined1 *)(lVar3 + 0xc + lVar11));
        uVar6 = FUN_144a78877(*(undefined4 *)(lVar3 + 4 + lVar11),uVar6);
        iVar7 = FUN_144a78877(*(undefined4 *)(lVar3 + lVar11),uVar6);
        uVar8 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar8;
        *(int *)(lVar3 + 0x1c + lVar11) = iVar7;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar11) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149155324 FUN_149155324 body=120 status=ok
// SIG undefined FUN_149155324(void)

int FUN_149155324(longlong *param_1,uint param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar3 = *param_1;
      do {
        lVar4 = (longlong)iVar2 * 0x1c;
        if ((((*(char *)(lVar3 + 0xc + lVar4) == (char)param_3[3]) &&
             (piVar1 = (int *)(lVar3 + lVar4), *piVar1 == *param_3)) && (piVar1[1] == param_3[1]))
           && (piVar1[2] == param_3[2])) {
          return iVar2;
        }
        iVar2 = *(int *)(lVar3 + 0x14 + lVar4);
      } while (iVar2 != -1);
    }
  }
  return -1;
}



// FUNCTION 14915539c FUN_14915539c body=320 status=ok
// SIG undefined FUN_14915539c(void)

undefined4 * FUN_14915539c(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined4 uVar6;
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
  FUN_1491554de(param_1,local_48);
  puVar1 = (undefined4 *)*param_3;
  puVar2 = (undefined1 *)param_3[1];
  uVar6 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *local_40 = *puVar1;
  local_40[1] = uVar6;
  local_40[2] = uVar3;
  local_40[3] = uVar4;
  *(undefined1 *)(local_40 + 4) = *puVar2;
  local_40[5] = 0xffffffff;
  local_4c = local_48[0];
  uVar6 = FUN_144a78877(local_40[2],*(undefined1 *)(local_40 + 3));
  uVar6 = FUN_144a78877(local_40[1],uVar6);
  uVar7 = FUN_144a78877(*local_40,uVar6);
  cVar5 = FUN_1491555da(param_1,uVar7,local_40,&local_4c);
  uVar6 = local_4c;
  if (cVar5 == '\0') {
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
      local_40[6] = uVar7;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      local_40[5] = *(undefined4 *)
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
      FUN_1491556bc(param_1);
    }
  }
  *param_2 = uVar6;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491554de FUN_1491554de body=251 status=ok
// SIG undefined FUN_1491554de(void)

int * FUN_1491554de(longlong *param_1,int *param_2)

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
      FUN_1406245f8(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x1c);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x1c) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x1c + *param_1;
  return param_2;
}



// FUNCTION 1491555da FUN_1491555da body=98 status=ok
// SIG undefined FUN_1491555da(void)

undefined8 FUN_1491555da(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar7 = FUN_149155324(), iVar7 != -1)) {
    lVar2 = *param_1;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    *(undefined4 *)(lVar2 + 0x10 + (longlong)iVar7 * 0x1c) = param_3[4];
    puVar1 = (undefined4 *)(lVar2 + (longlong)iVar7 * 0x1c);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_14915563c(param_1,*param_4);
    *param_4 = iVar7;
    return 1;
  }
  return 0;
}



// FUNCTION 14915563c FUN_14915563c body=128 status=ok
// SIG undefined FUN_14915563c(void)

void FUN_14915563c(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x1c) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1c) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1c + 4) = uVar4;
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



// FUNCTION 1491556bc FUN_1491556bc body=478 status=ok
// SIG undefined FUN_1491556bc(void)

void FUN_1491556bc(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong *plVar10;
  uint uVar11;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar5 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)((longlong)plVar10 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar2 != uVar11);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar5 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar6 = local_70._4_4_;
      local_70 = uVar5;
      do {
        lVar3 = *local_88;
        lVar4 = (longlong)iVar6 * 0x1c;
        uVar7 = FUN_144a78877(*(undefined4 *)(lVar3 + 8 + lVar4),
                              *(undefined1 *)(lVar3 + 0xc + lVar4));
        uVar7 = FUN_144a78877(*(undefined4 *)(lVar3 + 4 + lVar4),uVar7);
        iVar8 = FUN_144a78877(*(undefined4 *)(lVar3 + lVar4),uVar7);
        uVar9 = (longlong)iVar8 & (longlong)(int)param_1[9] - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar3 + 0x18 + lVar4) = iVar8;
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x14 + lVar4) =
             *(undefined4 *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & uVar9) * 4);
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(int *)((longlong)plVar10 + ((longlong)iVar8 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar6 = local_70._4_4_;
        uVar5 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar5;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14915589b FUN_14915589b body=38 status=ok
// SIG undefined FUN_14915589b(void)

void FUN_14915589b(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14598baf4(param_1);
    param_1 = param_1 + 0x58;
  }
  return;
}



// FUNCTION 1491558c2 FUN_1491558c2 body=140 status=ok
// SIG undefined FUN_1491558c2(void)

void FUN_1491558c2(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = 0xb0;
  do {
    *(undefined4 *)(param_1 + -0xb0 + lVar2) = 0xffffffff;
    *(undefined8 *)(param_1 + -0xac + lVar2) = 0;
    *(undefined8 *)(param_1 + -0x50 + lVar2) = 0;
    *(undefined4 *)(param_1 + -0x48 + lVar2) = 0;
    puVar1 = (undefined8 *)(param_1 + -0xa0 + lVar2);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(param_1 + -0x90 + lVar2);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(param_1 + -0x80 + lVar2);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(param_1 + -0x70 + lVar2);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)(param_1 + -0x44 + lVar2) = 0xffffffff00000080;
    *(undefined4 *)(param_1 + -0x3c + lVar2) = 0;
    *(undefined8 *)(param_1 + -0x30 + lVar2) = 0;
    *(undefined4 *)(param_1 + -0x28 + lVar2) = 0;
    *(undefined4 *)(param_1 + -0x20 + lVar2) = 0xffffffff;
    *(undefined8 *)(param_1 + -0x18 + lVar2) = 0;
    *(undefined4 *)(param_1 + -0x10 + lVar2) = 0;
    *(undefined8 *)(param_1 + -8 + lVar2) = 0;
    *(undefined4 *)(param_1 + lVar2) = 0;
    lVar2 = lVar2 + 0xb8;
  } while (lVar2 != 0x40a8);
  return;
}



// FUNCTION 14915594e FUN_14915594e body=48 status=ok
// SIG undefined FUN_14915594e(void)

void FUN_14915594e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 14915597e FUN_14915597e body=322 status=ok
// SIG undefined FUN_14915597e(void)

void FUN_14915597e(longlong *param_1)

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



// FUNCTION 149155ac2 FUN_149155ac2 body=307 status=ok
// SIG undefined FUN_149155ac2(void)

void FUN_149155ac2(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_40 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      lVar1 = *local_70;
      lVar2 = (longlong)iStack_54 * 0x20;
      FUN_149154680(*(undefined8 *)(lVar1 + 8 + lVar2),*(undefined4 *)(lVar1 + 0x10 + lVar2));
      if (*(longlong *)(lVar1 + 8 + lVar2) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149155bf6 FUN_149155bf6 body=322 status=ok
// SIG undefined FUN_149155bf6(void)

void FUN_149155bf6(longlong *param_1)

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



// FUNCTION 149155d3a FUN_149155d3a body=285 status=ok
// SIG undefined FUN_149155d3a(void)

void FUN_149155d3a(longlong *param_1)

{
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = param_1 + 2;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_38);
  }
  local_58 = local_38;
  local_50 = local_30;
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  local_60 = param_1;
  if (iStack_24 < (int)local_30[3]) {
    do {
      if (*(longlong *)(*local_60 + 8 + (longlong)iStack_44 * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149155e58 FUN_149155e58 body=322 status=ok
// SIG undefined FUN_149155e58(void)

void FUN_149155e58(longlong *param_1)

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



// FUNCTION 149155f9c FUN_149155f9c body=114 status=ok
// SIG undefined FUN_149155f9c(void)

void FUN_149155f9c(longlong *param_1,int param_2)

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



// FUNCTION 14915600e FUN_14915600e body=181 status=ok
// SIG undefined FUN_14915600e(void)

longlong FUN_14915600e(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar3 != 0) goto LAB_1491560a6;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_1491560c4(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_1491560a6:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 1491560c4 FUN_1491560c4 body=286 status=ok
// SIG undefined FUN_1491560c4(void)

undefined4 * FUN_1491560c4(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1491561e4(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  local_40[2] = 0;
  FUN_149154680(0,0);
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  cVar1 = FUN_1491562ca(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_40 + 0x1c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_1491563ea(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491561e4 FUN_1491561e4 body=229 status=ok
// SIG undefined FUN_1491561e4(void)

int * FUN_1491561e4(longlong *param_1,int *param_2)

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


