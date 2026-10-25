// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1492d7f2a FUN_1492d7f2a body=38 status=ok
// SIG undefined FUN_1492d7f2a(void)

undefined8 FUN_1492d7f2a(undefined8 param_1,int param_2)

{
  FUN_1492d7f50();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492d7f50 FUN_1492d7f50 body=74 status=ok
// SIG undefined FUN_1492d7f50(void)

void FUN_1492d7f50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc0bfd0;
  FUN_1492d79fc(param_1 + 0x48);
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  return;
}



// FUNCTION 1492d7f9a FUN_1492d7f9a body=162 status=ok
// SIG undefined FUN_1492d7f9a(void)

longlong FUN_1492d7f9a(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  FUN_1491c05d4(param_1 + 0x10,param_2 + 0x10);
  FUN_1444888de(param_1 + 0x1f0,param_2 + 0x1f0);
  uVar9 = *(undefined8 *)(param_2 + 0x208);
  uVar1 = *(undefined4 *)(param_2 + 0x210);
  uVar2 = *(undefined4 *)(param_2 + 0x214);
  uVar3 = *(undefined4 *)(param_2 + 0x218);
  uVar4 = *(undefined4 *)(param_2 + 0x21c);
  uVar5 = *(undefined4 *)(param_2 + 0x220);
  uVar6 = *(undefined4 *)(param_2 + 0x224);
  uVar7 = *(undefined4 *)(param_2 + 0x228);
  uVar8 = *(undefined4 *)(param_2 + 0x22c);
  *(undefined8 *)(param_1 + 0x200) = *(undefined8 *)(param_2 + 0x200);
  *(undefined8 *)(param_1 + 0x208) = uVar9;
  *(undefined4 *)(param_1 + 0x210) = uVar1;
  *(undefined4 *)(param_1 + 0x214) = uVar2;
  *(undefined4 *)(param_1 + 0x218) = uVar3;
  *(undefined4 *)(param_1 + 0x21c) = uVar4;
  *(undefined4 *)(param_1 + 0x220) = uVar5;
  *(undefined4 *)(param_1 + 0x224) = uVar6;
  *(undefined4 *)(param_1 + 0x228) = uVar7;
  *(undefined4 *)(param_1 + 0x22c) = uVar8;
  uVar1 = *(undefined4 *)(param_2 + 0x22d);
  uVar2 = *(undefined4 *)(param_2 + 0x231);
  uVar3 = *(undefined4 *)(param_2 + 0x235);
  *(undefined4 *)(param_1 + 0x229) = *(undefined4 *)(param_2 + 0x229);
  *(undefined4 *)(param_1 + 0x22d) = uVar1;
  *(undefined4 *)(param_1 + 0x231) = uVar2;
  *(undefined4 *)(param_1 + 0x235) = uVar3;
  FUN_1492ad734(param_1 + 0x240,param_2 + 0x240);
  FUN_144a67f5c(param_1 + 0x250,param_2 + 0x250);
  FUN_144756208(param_1 + 0x260,param_2 + 0x260);
  return param_1;
}



// FUNCTION 1492d803e FUN_1492d803e body=74 status=ok
// SIG undefined FUN_1492d803e(void)

void FUN_1492d803e(undefined8 param_1,undefined1 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_2 + 0x20) = 0;
  *(undefined4 *)(param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 0x28) = 0;
  *(undefined4 *)(param_2 + 0x2c) = 0x3ff00000;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0x3ff0000000000000;
  *(undefined8 *)(param_2 + 0x58) = 0x3ff0000000000000;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 4) = 0x41200000;
  puVar2 = &DAT_14c846480;
  puVar3 = (undefined8 *)(param_2 + 0x10);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 1492d8088 FUN_1492d8088 body=74 status=ok
// SIG undefined FUN_1492d8088(void)

void FUN_1492d8088(undefined8 param_1,undefined1 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_2 + 0x20) = 0;
  *(undefined4 *)(param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 0x28) = 0;
  *(undefined4 *)(param_2 + 0x2c) = 0x3ff00000;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0x3ff0000000000000;
  *(undefined8 *)(param_2 + 0x58) = 0x3ff0000000000000;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 4) = 0x41200000;
  puVar2 = &DAT_14c846480;
  puVar3 = (undefined8 *)(param_2 + 0x10);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 1492d80ea FUN_1492d80ea body=39 status=ok
// SIG undefined FUN_1492d80ea(void)

undefined8 FUN_1492d80ea(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 1492d813a FUN_1492d813a body=59 status=ok
// SIG undefined FUN_1492d813a(void)

undefined8 FUN_1492d813a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492d8210 FUN_1492d8210 body=110 status=ok
// SIG undefined FUN_1492d8210(void)

undefined8 FUN_1492d8210(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_1491c05d4(param_2 + 0x10 + lVar1,param_3 + 0x10 + lVar1);
      memcpy((void *)(param_2 + 0x1f0 + lVar1),(void *)(param_3 + 0x1f0 + lVar1),0x1f0);
      lVar1 = lVar1 + 0x3e0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492d82a6 FUN_1492d82a6 body=59 status=ok
// SIG undefined FUN_1492d82a6(void)

undefined8 FUN_1492d82a6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492d82f2 FUN_1492d82f2 body=49 status=ok
// SIG undefined FUN_1492d82f2(void)

void FUN_1492d82f2(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x7c) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x7c) = 0;
  }
  return;
}



// FUNCTION 1492d8372 FUN_1492d8372 body=437 status=ok
// SIG undefined FUN_1492d8372(void)

undefined8 * FUN_1492d8372(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_1 + 2);
  *param_1 = &PTR_FUN_14bc0c320;
  *(undefined8 *)((longlong)param_1 + 0x2c4) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  puVar14 = &DAT_14c846480;
  puVar15 = param_1 + 0x42;
  for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
    *puVar15 = *puVar14;
    puVar14 = puVar14 + 1;
    puVar15 = puVar15 + 1;
  }
  param_1[0x4e] = 0x3ff0000000000000;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0x3ff0000000000000;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0x3f800000;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0x3ff0000000000000;
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2cc) = 0;
  param_1[0x5a] = 0x3fa000003f400000;
  param_1[0x5b] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2e4) = 1;
  uVar12 = uRam000000014c8464d8;
  uVar11 = DAT_14c8464d0;
  uVar10 = DAT_14c8464c8;
  uVar9 = DAT_14c8464c0;
  uVar8 = DAT_14c8464b8;
  uVar7 = DAT_14c8464b0;
  uVar6 = DAT_14c8464a8;
  uVar5 = DAT_14c8464a0;
  uVar4 = DAT_14c846498;
  uVar3 = DAT_14c846490;
  uVar2 = DAT_14c846488;
  uVar1 = DAT_14c846480;
  *(undefined1 *)(param_1 + 0x5e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2f4) = 0x41200000;
  param_1[0x60] = uVar1;
  param_1[0x61] = uVar2;
  param_1[0x62] = uVar3;
  param_1[99] = uVar4;
  param_1[100] = uVar5;
  param_1[0x65] = uVar6;
  param_1[0x66] = uVar7;
  param_1[0x67] = uVar8;
  param_1[0x68] = uVar9;
  param_1[0x69] = uVar10;
  param_1[0x6a] = uVar11;
  param_1[0x6b] = uVar12;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x364) = 0;
  *(undefined2 *)((longlong)param_1 + 0x36c) = 0xffff;
  *(undefined4 *)(param_1 + 0x6e) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 900) = 0;
  *(undefined2 *)((longlong)param_1 + 0x38c) = 0xffff;
  *(undefined4 *)(param_1 + 0x72) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3a4) = 0;
  *(undefined2 *)((longlong)param_1 + 0x3ac) = 0xffff;
  *(undefined4 *)(param_1 + 0x76) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c4) = 0;
  *(undefined2 *)((longlong)param_1 + 0x3cc) = 0xffff;
  *(undefined4 *)(param_1 + 0x7a) = 0xffffffff;
  return param_1;
}



// FUNCTION 1492d8528 FUN_1492d8528 body=52 status=ok
// SIG undefined FUN_1492d8528(void)

undefined8 * FUN_1492d8528(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492d8592 FUN_1492d8592 body=110 status=ok
// SIG undefined FUN_1492d8592(void)

undefined8 FUN_1492d8592(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_1491c05d4(param_2 + 0x10 + lVar1,param_3 + 0x10 + lVar1);
      memcpy((void *)(param_2 + 0x1f0 + lVar1),(void *)(param_3 + 0x1f0 + lVar1),0x200);
      lVar1 = lVar1 + 0x3f0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492d8628 FUN_1492d8628 body=59 status=ok
// SIG undefined FUN_1492d8628(void)

undefined8 FUN_1492d8628(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492d8674 FUN_1492d8674 body=49 status=ok
// SIG undefined FUN_1492d8674(void)

void FUN_1492d8674(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x7e) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x7e) = 0;
  }
  return;
}



// FUNCTION 1492d8822 FUN_1492d8822 body=42 status=ok
// SIG undefined FUN_1492d8822(void)

undefined8 FUN_1492d8822(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      for (lVar2 = 0xf; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492d8874 FUN_1492d8874 body=59 status=ok
// SIG undefined FUN_1492d8874(void)

undefined8 FUN_1492d8874(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492d8920 FUN_1492d8920 body=29 status=ok
// SIG undefined FUN_1492d8920(void)

undefined8 FUN_1492d8920(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492d8972 FUN_1492d8972 body=71 status=ok
// SIG undefined FUN_1492d8972(void)

undefined8 FUN_1492d8972(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0x10;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),400);
      lVar1 = lVar1 + 0x1a0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492d89e2 FUN_1492d89e2 body=59 status=ok
// SIG undefined FUN_1492d89e2(void)

undefined8 FUN_1492d89e2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492d8a8e FUN_1492d8a8e body=283 status=ok
// SIG undefined FUN_1492d8a8e(void)

undefined8 * FUN_1492d8a8e(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14bc0c860;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3ff00000;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0x3ff0000000000000;
  param_1[0xb] = 0x3ff0000000000000;
  param_1[0xc] = 0x3ff0000000000000;
  param_1[0xd] = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = param_1 + 0x28;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = &DAT_14c846480;
  puVar4 = param_1 + 0x12;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  memmove(param_1 + 2,&DAT_14c846480,0x60);
  uVar1 = DAT_14c8464e8;
  param_1[0xe] = DAT_14c8464e0;
  param_1[0xf] = uVar1;
  param_1[0x10] = DAT_14c8464f0;
  param_1[0x1e] = 0x3ff0000000000000;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0x3ff0000000000000;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x25] = 0x3fa000003f400000;
  param_1[0x26] = &DAT_3f8000003f800000;
  return param_1;
}



// FUNCTION 1492d8baa FUN_1492d8baa body=29 status=ok
// SIG undefined FUN_1492d8baa(void)

undefined8 FUN_1492d8baa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492d8bc8 FUN_1492d8bc8 body=52 status=ok
// SIG undefined FUN_1492d8bc8(void)

undefined8 * FUN_1492d8bc8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492d8c54 FUN_1492d8c54 body=76 status=ok
// SIG undefined FUN_1492d8c54(void)

undefined8 FUN_1492d8c54(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      FUN_1444888de(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492d8cc8 FUN_1492d8cc8 body=59 status=ok
// SIG undefined FUN_1492d8cc8(void)

undefined8 FUN_1492d8cc8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492d8d0e FUN_1492d8d0e body=48 status=ok
// SIG undefined FUN_1492d8d0e(void)

void FUN_1492d8d0e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 5) == '\x01') {
    *param_2 = &PTR_FUN_14bc0cae0;
    if (param_2[3] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 5) = 0;
  }
  return;
}



// FUNCTION 1492d8d8c FUN_1492d8d8c body=57 status=ok
// SIG undefined FUN_1492d8d8c(void)

undefined8 * FUN_1492d8d8c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bc0cae0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492d8dc6 FUN_1492d8dc6 body=76 status=ok
// SIG undefined FUN_1492d8dc6(void)

void FUN_1492d8dc6(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x210);
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bc0ccd0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  param_2[0x40] = 0;
  param_2[0x41] = 0;
  return;
}



// FUNCTION 1492d8e12 FUN_1492d8e12 body=60 status=ok
// SIG undefined FUN_1492d8e12(void)

void FUN_1492d8e12(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bc0ccd0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  param_2[0x40] = 0;
  param_2[0x41] = 0;
  return;
}



// FUNCTION 1492d8e72 FUN_1492d8e72 body=110 status=ok
// SIG undefined FUN_1492d8e72(void)

undefined8 FUN_1492d8e72(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x200;
    param_2 = param_2 + 0x200;
    do {
      FUN_1491c05d4(param_2 + -0x1f0,param_3 + -0x1f0);
      FUN_1444888de(param_2 + -0x10,param_3 + -0x10);
      FUN_144a787a6(param_2,param_3);
      param_3 = param_3 + 0x210;
      param_2 = param_2 + 0x210;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492d8f08 FUN_1492d8f08 body=59 status=ok
// SIG undefined FUN_1492d8f08(void)

undefined8 FUN_1492d8f08(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492d8f54 FUN_1492d8f54 body=40 status=ok
// SIG undefined FUN_1492d8f54(void)

void FUN_1492d8f54(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x210) == '\x01') {
    FUN_1492d8ff0(param_2);
    *(undefined1 *)(param_2 + 0x210) = 0;
  }
  return;
}



// FUNCTION 1492d8fca FUN_1492d8fca body=38 status=ok
// SIG undefined FUN_1492d8fca(void)

undefined8 FUN_1492d8fca(undefined8 param_1,int param_2)

{
  FUN_1492d8ff0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492d8ff0 FUN_1492d8ff0 body=79 status=ok
// SIG undefined FUN_1492d8ff0(void)

void FUN_1492d8ff0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc0ccd0;
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  return;
}



// FUNCTION 1492d9040 FUN_1492d9040 body=77 status=ok
// SIG undefined FUN_1492d9040(void)

void FUN_1492d9040(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x200);
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bc0cec0;
  *(undefined1 *)(param_2 + 0x3e) = 0;
  *(undefined8 *)((longlong)param_2 + 500) = 0;
  return;
}



// FUNCTION 1492d908e FUN_1492d908e body=61 status=ok
// SIG undefined FUN_1492d908e(void)

void FUN_1492d908e(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bc0cec0;
  *(undefined1 *)(param_2 + 0x3e) = 0;
  *(undefined8 *)((longlong)param_2 + 500) = 0;
  return;
}



// FUNCTION 1492d90f0 FUN_1492d90f0 body=109 status=ok
// SIG undefined FUN_1492d90f0(void)

undefined8 FUN_1492d90f0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_1491c05d4(param_2 + 0x10 + lVar1,param_3 + 0x10 + lVar1);
      *(undefined8 *)(param_2 + 0x1f0 + lVar1) = *(undefined8 *)(param_3 + 0x1f0 + lVar1);
      *(undefined4 *)(param_2 + 0x1f8 + lVar1) = *(undefined4 *)(param_3 + 0x1f8 + lVar1);
      lVar1 = lVar1 + 0x200;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492d9186 FUN_1492d9186 body=59 status=ok
// SIG undefined FUN_1492d9186(void)

undefined8 FUN_1492d9186(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492d91d2 FUN_1492d91d2 body=49 status=ok
// SIG undefined FUN_1492d91d2(void)

void FUN_1492d91d2(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1492d9252 FUN_1492d9252 body=52 status=ok
// SIG undefined FUN_1492d9252(void)

undefined8 * FUN_1492d9252(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492d9288 FUN_1492d9288 body=51 status=ok
// SIG undefined FUN_1492d9288(void)

void FUN_1492d9288(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x1f0);
  *param_2 = &PTR_FUN_14bc0d0b0;
  FUN_1412ca278(param_2 + 2);
  return;
}



// FUNCTION 1492d92f4 FUN_1492d92f4 body=70 status=ok
// SIG undefined FUN_1492d92f4(void)

undefined1 FUN_1492d92f4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      FUN_1491c05d4(param_2,param_3);
      param_3 = param_3 + 0x1f0;
      param_2 = param_2 + 0x1f0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492d9362 FUN_1492d9362 body=59 status=ok
// SIG undefined FUN_1492d9362(void)

undefined8 FUN_1492d9362(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492d93ae FUN_1492d93ae body=49 status=ok
// SIG undefined FUN_1492d93ae(void)

void FUN_1492d93ae(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x3e) == '\x01') {
    *param_2 = &PTR_FUN_14bc0d0b0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x3e) = 0;
  }
  return;
}



// FUNCTION 1492d942e FUN_1492d942e body=52 status=ok
// SIG undefined FUN_1492d942e(void)

undefined8 * FUN_1492d942e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bc0d0b0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492d9462 FUN_1492d9462 body=29 status=ok
// SIG undefined FUN_1492d9462(void)

undefined8 FUN_1492d9462(undefined8 param_1,undefined8 param_2)

{
  FUN_1446f57c6(&DAT_14cc074c8);
  return param_2;
}



// FUNCTION 1492d9480 FUN_1492d9480 body=32 status=ok
// SIG undefined FUN_1492d9480(void)

void FUN_1492d9480(undefined8 param_1,undefined8 *param_2)

{
  FUN_141094b14(param_2);
  *param_2 = &PTR_FUN_14bc0d2a0;
  return;
}



// FUNCTION 1492d94b6 FUN_1492d94b6 body=103 status=ok
// SIG undefined FUN_1492d94b6(void)

undefined8 FUN_1492d94b6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      puVar1 = (undefined4 *)(param_3 + 8 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 8 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      FUN_1490e0b30(param_2 + 0x18 + lVar6,param_3 + 0x18 + lVar6);
      *(undefined8 *)(param_2 + 0x68 + lVar6) = *(undefined8 *)(param_3 + 0x68 + lVar6);
      lVar6 = lVar6 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492d9546 FUN_1492d9546 body=59 status=ok
// SIG undefined FUN_1492d9546(void)

undefined8 FUN_1492d9546(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492d958c FUN_1492d958c body=32 status=ok
// SIG undefined FUN_1492d958c(void)

void FUN_1492d958c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_1410a12b0(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 1492d9664 FUN_1492d9664 body=59 status=ok
// SIG undefined FUN_1492d9664(void)

undefined8 FUN_1492d9664(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492d9752 FUN_1492d9752 body=70 status=ok
// SIG undefined FUN_1492d9752(void)

undefined1 FUN_1492d9752(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      FUN_1491c05d4(param_2,param_3);
      param_3 = param_3 + 0x1f0;
      param_2 = param_2 + 0x1f0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492d97c0 FUN_1492d97c0 body=59 status=ok
// SIG undefined FUN_1492d97c0(void)

undefined8 FUN_1492d97c0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492d980c FUN_1492d980c body=49 status=ok
// SIG undefined FUN_1492d980c(void)

void FUN_1492d980c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x3e) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x3e) = 0;
  }
  return;
}



// FUNCTION 1492d98fa FUN_1492d98fa body=59 status=ok
// SIG undefined FUN_1492d98fa(void)

undefined8 FUN_1492d98fa(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492d99c8 FUN_1492d99c8 body=63 status=ok
// SIG undefined FUN_1492d99c8(void)

undefined1 FUN_1492d99c8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1491c05d4(param_2,param_3);
    param_3 = param_3 + 0x1e0;
    param_2 = param_2 + 0x1e0;
  }
  return 1;
}



// FUNCTION 1492d9a30 FUN_1492d9a30 body=59 status=ok
// SIG undefined FUN_1492d9a30(void)

undefined8 FUN_1492d9a30(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492d9a7c FUN_1492d9a7c body=38 status=ok
// SIG undefined FUN_1492d9a7c(void)

void FUN_1492d9a7c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1e0) == '\x01') {
    FUN_140f8ccfc(param_2);
    *(undefined1 *)(param_2 + 0x1e0) = 0;
  }
  return;
}



// FUNCTION 1492d9af2 FUN_1492d9af2 body=85 status=ok
// SIG undefined FUN_1492d9af2(void)

void FUN_1492d9af2(undefined8 param_1,undefined1 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined4 *)(param_2 + 0x30) = 0;
  *(undefined4 *)(param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0x3ff00000;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *param_2 = 0;
  *(undefined8 *)(param_2 + 4) = 0x424800003f800000;
  param_2[0xc] = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined1 **)(param_2 + 0x18) = &DAT_3f8000003f800000;
  puVar2 = &DAT_14c846480;
  puVar3 = (undefined8 *)(param_2 + 0x20);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 1492d9b48 FUN_1492d9b48 body=85 status=ok
// SIG undefined FUN_1492d9b48(void)

void FUN_1492d9b48(undefined8 param_1,undefined1 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined4 *)(param_2 + 0x30) = 0;
  *(undefined4 *)(param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0x3ff00000;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *param_2 = 0;
  *(undefined8 *)(param_2 + 4) = 0x424800003f800000;
  param_2[0xc] = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined1 **)(param_2 + 0x18) = &DAT_3f8000003f800000;
  puVar2 = &DAT_14c846480;
  puVar3 = (undefined8 *)(param_2 + 0x20);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 1492d9bb6 FUN_1492d9bb6 body=39 status=ok
// SIG undefined FUN_1492d9bb6(void)

undefined8 FUN_1492d9bb6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492d9c06 FUN_1492d9c06 body=59 status=ok
// SIG undefined FUN_1492d9c06(void)

undefined8 FUN_1492d9c06(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492d9d4a FUN_1492d9d4a body=59 status=ok
// SIG undefined FUN_1492d9d4a(void)

undefined8 FUN_1492d9d4a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492d9e60 FUN_1492d9e60 body=35 status=ok
// SIG undefined FUN_1492d9e60(void)

void FUN_1492d9e60(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x78) != 0) {
    FUN_1400020a8();
  }
  FUN_1491c48cc(param_2);
  return;
}



// FUNCTION 1492d9e9a FUN_1492d9e9a body=75 status=ok
// SIG undefined FUN_1492d9e9a(void)

undefined1 FUN_1492d9e9a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1491c493e(param_2,param_3);
    FUN_1492ad734(param_2 + 0x78,param_3 + 0x78);
    param_2 = param_2 + 0x88;
    param_3 = param_3 + 0x88;
  }
  return 1;
}



// FUNCTION 1492d9f0e FUN_1492d9f0e body=59 status=ok
// SIG undefined FUN_1492d9f0e(void)

undefined8 FUN_1492d9f0e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492d9f5a FUN_1492d9f5a body=54 status=ok
// SIG undefined FUN_1492d9f5a(void)

void FUN_1492d9f5a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    if (*(longlong *)(param_2 + 0x78) != 0) {
      FUN_1400020a8();
    }
    FUN_1491c48cc(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 1492da014 FUN_1492da014 body=63 status=ok
// SIG undefined FUN_1492da014(void)

undefined1 FUN_1492da014(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1492da498(param_2,param_3);
    param_3 = param_3 + 0x330;
    param_2 = param_2 + 0x330;
  }
  return 1;
}



// FUNCTION 1492da07c FUN_1492da07c body=59 status=ok
// SIG undefined FUN_1492da07c(void)

undefined8 FUN_1492da07c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492da0c8 FUN_1492da0c8 body=40 status=ok
// SIG undefined FUN_1492da0c8(void)

void FUN_1492da0c8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x330) == '\x01') {
    FUN_1492da3f4(param_2);
    *(undefined1 *)(param_2 + 0x330) = 0;
  }
  return;
}



// FUNCTION 1492da13e FUN_1492da13e body=654 status=ok
// SIG undefined FUN_1492da13e(void)

void FUN_1492da13e(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
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
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  longlong lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined1 auStack_68 [37];
  uint3 uStack_43;
  undefined5 local_40;
  undefined3 uStack_3b;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = &PTR_FUN_14bad5830;
  param_1[2] = &PTR_FUN_14bad5c20;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[8] = 0x3f91111111111111;
  param_1[9] = 0x800;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  puVar20 = &DAT_14c846480;
  puVar21 = param_1 + 0x10;
  for (lVar19 = 0xc; lVar19 != 0; lVar19 = lVar19 + -1) {
    *puVar21 = *puVar20;
    puVar20 = puVar20 + 1;
    puVar21 = puVar21 + 1;
  }
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *param_1 = &PTR_FUN_14bc0df90;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x55] = 0x3c888889;
  *(undefined4 *)(param_1 + 0x56) = 0;
  param_1[0x54] = &PTR_FUN_14bb77670;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0x42700000;
  *(undefined1 *)((longlong)param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0x40800000;
  *(undefined2 *)(param_1 + 0x30) = 0x101;
  param_1[0x31] = 0x3ff0000000000000;
  param_1[0x34] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x35] = 0x3ff0000000000000;
  param_1[0x36] = 0;
  uVar18 = uRam000000014c8464d8;
  uVar17 = DAT_14c8464d0;
  uVar16 = DAT_14c8464c8;
  uVar15 = DAT_14c8464c0;
  uVar14 = DAT_14c8464b8._4_4_;
  uVar13 = (undefined4)DAT_14c8464b8;
  uVar12 = DAT_14c8464b0._4_4_;
  uVar11 = (undefined4)DAT_14c8464b0;
  uVar10 = DAT_14c8464a8._4_4_;
  uVar9 = (undefined4)DAT_14c8464a8;
  uVar8 = DAT_14c8464a0._4_4_;
  uVar7 = (undefined4)DAT_14c8464a0;
  uVar6 = DAT_14c846498._4_4_;
  uVar5 = (undefined4)DAT_14c846498;
  uVar4 = DAT_14c846490._4_4_;
  uVar3 = (undefined4)DAT_14c846490;
  uVar2 = DAT_14c846488;
  uVar1 = DAT_14c846480;
  local_40 = 0;
  uStack_3b = 0;
  uStack_38 = 0x3f800000;
  uStack_34 = 0x3f800000;
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0x424800003f800000;
  *(undefined1 *)((longlong)param_1 + 0x1cc) = 0;
  *(ulonglong *)((longlong)param_1 + 0x1cd) = (ulonglong)uStack_43;
  *(undefined8 *)((longlong)param_1 + 0x1d5) = 0x3f800000000000;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0x3f800000;
  param_1[0x3c] = uVar1;
  param_1[0x3d] = uVar2;
  *(undefined4 *)(param_1 + 0x3e) = uVar3;
  *(undefined4 *)((longlong)param_1 + 500) = uVar4;
  *(undefined4 *)(param_1 + 0x3f) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = uVar6;
  *(undefined4 *)(param_1 + 0x40) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x204) = uVar8;
  *(undefined4 *)(param_1 + 0x41) = uVar9;
  *(undefined4 *)((longlong)param_1 + 0x20c) = uVar10;
  *(undefined4 *)(param_1 + 0x42) = uVar11;
  *(undefined4 *)((longlong)param_1 + 0x214) = uVar12;
  *(undefined4 *)(param_1 + 0x43) = uVar13;
  *(undefined4 *)((longlong)param_1 + 0x21c) = uVar14;
  param_1[0x44] = uVar15;
  param_1[0x45] = uVar16;
  param_1[0x46] = uVar17;
  param_1[0x47] = uVar18;
  param_1[0x4a] = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x48] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x49] = uVar1;
  param_1[0x4d] = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x4b] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x4c] = uVar1;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x4e] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x4f] = uVar1;
  param_1[0x50] = DAT_14c8464f0;
  uVar5 = DAT_14c8464e8._4_4_;
  uVar4 = (undefined4)DAT_14c8464e8;
  uVar3 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x51) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x28c) = uVar3;
  *(undefined4 *)(param_1 + 0x52) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x294) = uVar5;
  param_1[0x53] = DAT_14c8464f0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492da3ce FUN_1492da3ce body=38 status=ok
// SIG undefined FUN_1492da3ce(void)

undefined8 FUN_1492da3ce(undefined8 param_1,int param_2)

{
  FUN_1492da3f4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492da3f4 FUN_1492da3f4 body=164 status=ok
// SIG undefined FUN_1492da3f4(void)

void FUN_1492da3f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc0df90;
  if (param_1[99] != 0) {
    FUN_1400020a8();
  }
  FUN_1491c48cc(param_1 + 0x54);
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bad5830;
  FUN_140f8ceac(param_1 + 2);
  return;
}



// FUNCTION 1492da498 FUN_1492da498 body=298 status=ok
// SIG undefined FUN_1492da498(void)

longlong FUN_1492da498(longlong param_1,longlong param_2)

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
  FUN_1491b18e8(param_1 + 0x120,param_2 + 0x120);
  FUN_1491c49b4(param_1 + 0x130,param_2 + 0x130);
  FUN_1491c4a0c(param_1 + 0x140,param_2 + 0x140);
  FUN_1491c4a66(param_1 + 0x150,param_2 + 0x150);
  *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_2 + 0x160);
  *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_2 + 0x168);
  FUN_1492da5c2(param_1 + 0x170,param_2 + 0x170);
  memcpy((void *)(param_1 + 0x180),(void *)(param_2 + 0x180),0x120);
  FUN_1491c493e(param_1 + 0x2a0,param_2 + 0x2a0);
  FUN_1492ad734(param_1 + 0x318,param_2 + 0x318);
  return param_1;
}



// FUNCTION 1492da5c2 FUN_1492da5c2 body=89 status=ok
// SIG undefined FUN_1492da5c2(void)

undefined8 * FUN_1492da5c2(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1492da61c(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x14);
      }
    }
  }
  return param_1;
}



// FUNCTION 1492da61c FUN_1492da61c body=115 status=ok
// SIG undefined FUN_1492da61c(void)

void FUN_1492da61c(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x14,4);
    iVar2 = (int)(uVar1 / 0x14);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x14,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1492da770 FUN_1492da770 body=59 status=ok
// SIG undefined FUN_1492da770(void)

undefined8 FUN_1492da770(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492da810 FUN_1492da810 body=29 status=ok
// SIG undefined FUN_1492da810(void)

undefined8 FUN_1492da810(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492da82e FUN_1492da82e body=230 status=ok
// SIG undefined FUN_1492da82e(void)

void FUN_1492da82e(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = &PTR_FUN_14bc0e350;
  param_2[0xb] = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_2[9] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_2[10] = uVar1;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_2[4] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_2[5] = uVar1;
  param_2[6] = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uVar2 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_2[3] = DAT_14c8464f0;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[7] = 0x4000000041200000;
  *(undefined4 *)(param_2 + 8) = 0x41200000;
  uVar1 = DAT_14c8464f0;
  uVar6 = DAT_14c8464e8._4_4_;
  uVar5 = (undefined4)DAT_14c8464e8;
  uVar4 = DAT_14c8464e0._4_4_;
  uVar3 = (undefined4)DAT_14c8464e0;
  local_28 = DAT_14c8464f0;
  local_38 = (undefined4)DAT_14c8464e0;
  uStack_34 = DAT_14c8464e0._4_4_;
  uStack_30 = (undefined4)DAT_14c8464e8;
  uStack_2c = DAT_14c8464e8._4_4_;
  local_10 = DAT_14c8464f0;
  local_20 = (undefined4)DAT_14c8464e0;
  uStack_1c = DAT_14c8464e0._4_4_;
  uStack_18 = (undefined4)DAT_14c8464e8;
  uStack_14 = DAT_14c8464e8._4_4_;
  *(undefined4 *)(param_2 + 0xc) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_2 + 100) = uVar4;
  *(undefined4 *)(param_2 + 0xd) = uVar5;
  *(undefined4 *)((longlong)param_2 + 0x6c) = uVar6;
  param_2[0xe] = uVar1;
  param_2[0xf] = CONCAT44(uVar4,uVar3);
  param_2[0x10] = CONCAT44(uVar6,uVar5);
  param_2[0x11] = uVar1;
  *(undefined1 *)(param_2 + 0x12) = 0;
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492da916 FUN_1492da916 body=230 status=ok
// SIG undefined FUN_1492da916(void)

void FUN_1492da916(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = &PTR_FUN_14bc0e350;
  param_2[0xb] = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_2[9] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_2[10] = uVar1;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_2[4] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_2[5] = uVar1;
  param_2[6] = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uVar2 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_2[3] = DAT_14c8464f0;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[7] = 0x4000000041200000;
  *(undefined4 *)(param_2 + 8) = 0x41200000;
  uVar1 = DAT_14c8464f0;
  uVar6 = DAT_14c8464e8._4_4_;
  uVar5 = (undefined4)DAT_14c8464e8;
  uVar4 = DAT_14c8464e0._4_4_;
  uVar3 = (undefined4)DAT_14c8464e0;
  local_28 = DAT_14c8464f0;
  local_38 = (undefined4)DAT_14c8464e0;
  uStack_34 = DAT_14c8464e0._4_4_;
  uStack_30 = (undefined4)DAT_14c8464e8;
  uStack_2c = DAT_14c8464e8._4_4_;
  local_10 = DAT_14c8464f0;
  local_20 = (undefined4)DAT_14c8464e0;
  uStack_1c = DAT_14c8464e0._4_4_;
  uStack_18 = (undefined4)DAT_14c8464e8;
  uStack_14 = DAT_14c8464e8._4_4_;
  *(undefined4 *)(param_2 + 0xc) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_2 + 100) = uVar4;
  *(undefined4 *)(param_2 + 0xd) = uVar5;
  *(undefined4 *)((longlong)param_2 + 0x6c) = uVar6;
  param_2[0xe] = uVar1;
  param_2[0xf] = CONCAT44(uVar4,uVar3);
  param_2[0x10] = CONCAT44(uVar6,uVar5);
  param_2[0x11] = uVar1;
  *(undefined1 *)(param_2 + 0x12) = 0;
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492daa22 FUN_1492daa22 body=71 status=ok
// SIG undefined FUN_1492daa22(void)

undefined8 FUN_1492daa22(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 8;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x90);
      lVar1 = lVar1 + 0x98;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492daa92 FUN_1492daa92 body=59 status=ok
// SIG undefined FUN_1492daa92(void)

undefined8 FUN_1492daa92(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492dab3e FUN_1492dab3e body=29 status=ok
// SIG undefined FUN_1492dab3e(void)

undefined8 FUN_1492dab3e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492dac5c FUN_1492dac5c body=59 status=ok
// SIG undefined FUN_1492dac5c(void)

undefined8 FUN_1492dac5c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492dacfc FUN_1492dacfc body=29 status=ok
// SIG undefined FUN_1492dacfc(void)

undefined8 FUN_1492dacfc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492dad1a FUN_1492dad1a body=318 status=ok
// SIG undefined FUN_1492dad1a(void)

void FUN_1492dad1a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = &PTR_FUN_14bc0e710;
  *(undefined1 *)(param_2 + 8) = 0;
  param_2[0x15] = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_2[0x13] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_2[0x14] = uVar1;
  param_2[0xf] = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_2[0xd] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_2[0xe] = uVar1;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_2[0x10] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_2[0x11] = uVar1;
  param_2[0x12] = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uVar2 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_2[3] = DAT_14c8464f0;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[0xb] = param_2[3];
  param_2[9] = param_2[1];
  param_2[10] = param_2[2];
  param_2[4] = 0x3f80000040800000;
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined1 *)((longlong)param_2 + 100) = 0;
  param_2[7] = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_2[5] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_2[6] = uVar1;
  uVar1 = DAT_14c8464f0;
  uVar6 = DAT_14c8464e8._4_4_;
  uVar5 = (undefined4)DAT_14c8464e8;
  uVar4 = DAT_14c8464e0._4_4_;
  uVar3 = (undefined4)DAT_14c8464e0;
  local_28 = DAT_14c8464f0;
  local_38 = (undefined4)DAT_14c8464e0;
  uStack_34 = DAT_14c8464e0._4_4_;
  uStack_30 = (undefined4)DAT_14c8464e8;
  uStack_2c = DAT_14c8464e8._4_4_;
  local_10 = DAT_14c8464f0;
  local_20 = (undefined4)DAT_14c8464e0;
  uStack_1c = DAT_14c8464e0._4_4_;
  uStack_18 = (undefined4)DAT_14c8464e8;
  uStack_14 = DAT_14c8464e8._4_4_;
  *(undefined4 *)(param_2 + 0x16) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_2 + 0xb4) = uVar4;
  *(undefined4 *)(param_2 + 0x17) = uVar5;
  *(undefined4 *)((longlong)param_2 + 0xbc) = uVar6;
  param_2[0x1a] = CONCAT44(uVar6,uVar5);
  param_2[0x1b] = uVar1;
  param_2[0x18] = uVar1;
  param_2[0x19] = CONCAT44(uVar4,uVar3);
  *(undefined1 *)(param_2 + 0x1c) = 0;
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492dae5a FUN_1492dae5a body=318 status=ok
// SIG undefined FUN_1492dae5a(void)

void FUN_1492dae5a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = &PTR_FUN_14bc0e710;
  *(undefined1 *)(param_2 + 8) = 0;
  param_2[0x15] = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_2[0x13] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_2[0x14] = uVar1;
  param_2[0xf] = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_2[0xd] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_2[0xe] = uVar1;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_2[0x10] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_2[0x11] = uVar1;
  param_2[0x12] = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uVar2 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_2[3] = DAT_14c8464f0;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[0xb] = param_2[3];
  param_2[9] = param_2[1];
  param_2[10] = param_2[2];
  param_2[4] = 0x3f80000040800000;
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined1 *)((longlong)param_2 + 100) = 0;
  param_2[7] = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_2[5] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_2[6] = uVar1;
  uVar1 = DAT_14c8464f0;
  uVar6 = DAT_14c8464e8._4_4_;
  uVar5 = (undefined4)DAT_14c8464e8;
  uVar4 = DAT_14c8464e0._4_4_;
  uVar3 = (undefined4)DAT_14c8464e0;
  local_28 = DAT_14c8464f0;
  local_38 = (undefined4)DAT_14c8464e0;
  uStack_34 = DAT_14c8464e0._4_4_;
  uStack_30 = (undefined4)DAT_14c8464e8;
  uStack_2c = DAT_14c8464e8._4_4_;
  local_10 = DAT_14c8464f0;
  local_20 = (undefined4)DAT_14c8464e0;
  uStack_1c = DAT_14c8464e0._4_4_;
  uStack_18 = (undefined4)DAT_14c8464e8;
  uStack_14 = DAT_14c8464e8._4_4_;
  *(undefined4 *)(param_2 + 0x16) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_2 + 0xb4) = uVar4;
  *(undefined4 *)(param_2 + 0x17) = uVar5;
  *(undefined4 *)((longlong)param_2 + 0xbc) = uVar6;
  param_2[0x1a] = CONCAT44(uVar6,uVar5);
  param_2[0x1b] = uVar1;
  param_2[0x18] = uVar1;
  param_2[0x19] = CONCAT44(uVar4,uVar3);
  *(undefined1 *)(param_2 + 0x1c) = 0;
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492dafbe FUN_1492dafbe body=71 status=ok
// SIG undefined FUN_1492dafbe(void)

undefined8 FUN_1492dafbe(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 8;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0xe0);
      lVar1 = lVar1 + 0xe8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492db02e FUN_1492db02e body=59 status=ok
// SIG undefined FUN_1492db02e(void)

undefined8 FUN_1492db02e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492db0da FUN_1492db0da body=29 status=ok
// SIG undefined FUN_1492db0da(void)

undefined8 FUN_1492db0da(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492db0f8 FUN_1492db0f8 body=309 status=ok
// SIG undefined FUN_1492db0f8(void)

void FUN_1492db0f8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  undefined4 uVar16;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = &PTR_FUN_14bc0e900;
  *(undefined1 *)(param_2 + 10) = 0;
  uVar1 = CONCAT44(DAT_14c8463e8._4_4_,(undefined4)DAT_14c8463e8);
  param_2[0x1c] = CONCAT44(DAT_14c8463e0._4_4_,(undefined4)DAT_14c8463e0);
  param_2[0x1d] = uVar1;
  uVar1 = CONCAT44(DAT_14c8463d8._4_4_,(undefined4)DAT_14c8463d8);
  param_2[0x1a] = CONCAT44(DAT_14c8463d0._4_4_,(undefined4)DAT_14c8463d0);
  param_2[0x1b] = uVar1;
  uVar1 = CONCAT44(DAT_14c8463d8._4_4_,(undefined4)DAT_14c8463d8);
  param_2[0x12] = CONCAT44(DAT_14c8463d0._4_4_,(undefined4)DAT_14c8463d0);
  param_2[0x13] = uVar1;
  uVar1 = CONCAT44(DAT_14c8463e8._4_4_,(undefined4)DAT_14c8463e8);
  param_2[0x14] = CONCAT44(DAT_14c8463e0._4_4_,(undefined4)DAT_14c8463e0);
  param_2[0x15] = uVar1;
  uVar1 = CONCAT44(DAT_14c8463d0._4_4_,(undefined4)DAT_14c8463d0);
  uVar2 = CONCAT44(DAT_14c8463d8._4_4_,(undefined4)DAT_14c8463d8);
  uVar3 = CONCAT44(DAT_14c8463e0._4_4_,(undefined4)DAT_14c8463e0);
  uVar4 = CONCAT44(DAT_14c8463e8._4_4_,(undefined4)DAT_14c8463e8);
  param_2[4] = uVar3;
  param_2[5] = uVar4;
  param_2[2] = uVar1;
  param_2[3] = uVar2;
  param_2[0xc] = uVar1;
  param_2[0xd] = uVar2;
  param_2[0xe] = uVar3;
  param_2[0xf] = uVar4;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_2[0x16] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_2[0x17] = uVar1;
  param_2[0x18] = DAT_14c8464f0;
  param_2[6] = 0x3f80000040800000;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined1 *)((longlong)param_2 + 0x84) = 0;
  param_2[9] = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_2[7] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_2[8] = uVar1;
  uVar16 = DAT_14c8464e8._4_4_;
  uVar15 = (undefined4)DAT_14c8464e8;
  uVar14 = DAT_14c8464e0._4_4_;
  uVar13 = (undefined4)DAT_14c8464e0;
  uVar12 = DAT_14c8463e8._4_4_;
  uVar11 = (undefined4)DAT_14c8463e8;
  uVar10 = DAT_14c8463e0._4_4_;
  uVar9 = (undefined4)DAT_14c8463e0;
  uVar8 = DAT_14c8463d8._4_4_;
  uVar7 = (undefined4)DAT_14c8463d8;
  uVar6 = DAT_14c8463d0._4_4_;
  uVar5 = (undefined4)DAT_14c8463d0;
  local_38 = (undefined4)DAT_14c8463e0;
  uStack_34 = DAT_14c8463e0._4_4_;
  uStack_30 = (undefined4)DAT_14c8463e8;
  uStack_2c = DAT_14c8463e8._4_4_;
  local_48 = (undefined4)DAT_14c8463d0;
  uStack_44 = DAT_14c8463d0._4_4_;
  uStack_40 = (undefined4)DAT_14c8463d8;
  uStack_3c = DAT_14c8463d8._4_4_;
  local_28 = (undefined4)DAT_14c8464e0;
  uStack_24 = DAT_14c8464e0._4_4_;
  uStack_20 = (undefined4)DAT_14c8464e8;
  uStack_1c = DAT_14c8464e8._4_4_;
  local_18 = DAT_14c8464f0;
  param_2[0x24] = DAT_14c8464f0;
  *(undefined4 *)(param_2 + 0x22) = uVar13;
  *(undefined4 *)((longlong)param_2 + 0x114) = uVar14;
  *(undefined4 *)(param_2 + 0x23) = uVar15;
  *(undefined4 *)((longlong)param_2 + 0x11c) = uVar16;
  *(undefined4 *)(param_2 + 0x20) = uVar9;
  *(undefined4 *)((longlong)param_2 + 0x104) = uVar10;
  *(undefined4 *)(param_2 + 0x21) = uVar11;
  *(undefined4 *)((longlong)param_2 + 0x10c) = uVar12;
  *(undefined4 *)(param_2 + 0x1e) = uVar5;
  *(undefined4 *)((longlong)param_2 + 0xf4) = uVar6;
  *(undefined4 *)(param_2 + 0x1f) = uVar7;
  *(undefined4 *)((longlong)param_2 + 0xfc) = uVar8;
  *(undefined1 *)(param_2 + 0x25) = 0;
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492db22e FUN_1492db22e body=309 status=ok
// SIG undefined FUN_1492db22e(void)

void FUN_1492db22e(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  undefined4 uVar16;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = &PTR_FUN_14bc0e900;
  *(undefined1 *)(param_2 + 10) = 0;
  uVar1 = CONCAT44(DAT_14c8463e8._4_4_,(undefined4)DAT_14c8463e8);
  param_2[0x1c] = CONCAT44(DAT_14c8463e0._4_4_,(undefined4)DAT_14c8463e0);
  param_2[0x1d] = uVar1;
  uVar1 = CONCAT44(DAT_14c8463d8._4_4_,(undefined4)DAT_14c8463d8);
  param_2[0x1a] = CONCAT44(DAT_14c8463d0._4_4_,(undefined4)DAT_14c8463d0);
  param_2[0x1b] = uVar1;
  uVar1 = CONCAT44(DAT_14c8463d8._4_4_,(undefined4)DAT_14c8463d8);
  param_2[0x12] = CONCAT44(DAT_14c8463d0._4_4_,(undefined4)DAT_14c8463d0);
  param_2[0x13] = uVar1;
  uVar1 = CONCAT44(DAT_14c8463e8._4_4_,(undefined4)DAT_14c8463e8);
  param_2[0x14] = CONCAT44(DAT_14c8463e0._4_4_,(undefined4)DAT_14c8463e0);
  param_2[0x15] = uVar1;
  uVar1 = CONCAT44(DAT_14c8463d0._4_4_,(undefined4)DAT_14c8463d0);
  uVar2 = CONCAT44(DAT_14c8463d8._4_4_,(undefined4)DAT_14c8463d8);
  uVar3 = CONCAT44(DAT_14c8463e0._4_4_,(undefined4)DAT_14c8463e0);
  uVar4 = CONCAT44(DAT_14c8463e8._4_4_,(undefined4)DAT_14c8463e8);
  param_2[4] = uVar3;
  param_2[5] = uVar4;
  param_2[2] = uVar1;
  param_2[3] = uVar2;
  param_2[0xc] = uVar1;
  param_2[0xd] = uVar2;
  param_2[0xe] = uVar3;
  param_2[0xf] = uVar4;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_2[0x16] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_2[0x17] = uVar1;
  param_2[0x18] = DAT_14c8464f0;
  param_2[6] = 0x3f80000040800000;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined1 *)((longlong)param_2 + 0x84) = 0;
  param_2[9] = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_2[7] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_2[8] = uVar1;
  uVar16 = DAT_14c8464e8._4_4_;
  uVar15 = (undefined4)DAT_14c8464e8;
  uVar14 = DAT_14c8464e0._4_4_;
  uVar13 = (undefined4)DAT_14c8464e0;
  uVar12 = DAT_14c8463e8._4_4_;
  uVar11 = (undefined4)DAT_14c8463e8;
  uVar10 = DAT_14c8463e0._4_4_;
  uVar9 = (undefined4)DAT_14c8463e0;
  uVar8 = DAT_14c8463d8._4_4_;
  uVar7 = (undefined4)DAT_14c8463d8;
  uVar6 = DAT_14c8463d0._4_4_;
  uVar5 = (undefined4)DAT_14c8463d0;
  local_38 = (undefined4)DAT_14c8463e0;
  uStack_34 = DAT_14c8463e0._4_4_;
  uStack_30 = (undefined4)DAT_14c8463e8;
  uStack_2c = DAT_14c8463e8._4_4_;
  local_48 = (undefined4)DAT_14c8463d0;
  uStack_44 = DAT_14c8463d0._4_4_;
  uStack_40 = (undefined4)DAT_14c8463d8;
  uStack_3c = DAT_14c8463d8._4_4_;
  local_28 = (undefined4)DAT_14c8464e0;
  uStack_24 = DAT_14c8464e0._4_4_;
  uStack_20 = (undefined4)DAT_14c8464e8;
  uStack_1c = DAT_14c8464e8._4_4_;
  local_18 = DAT_14c8464f0;
  param_2[0x24] = DAT_14c8464f0;
  *(undefined4 *)(param_2 + 0x22) = uVar13;
  *(undefined4 *)((longlong)param_2 + 0x114) = uVar14;
  *(undefined4 *)(param_2 + 0x23) = uVar15;
  *(undefined4 *)((longlong)param_2 + 0x11c) = uVar16;
  *(undefined4 *)(param_2 + 0x20) = uVar9;
  *(undefined4 *)((longlong)param_2 + 0x104) = uVar10;
  *(undefined4 *)(param_2 + 0x21) = uVar11;
  *(undefined4 *)((longlong)param_2 + 0x10c) = uVar12;
  *(undefined4 *)(param_2 + 0x1e) = uVar5;
  *(undefined4 *)((longlong)param_2 + 0xf4) = uVar6;
  *(undefined4 *)(param_2 + 0x1f) = uVar7;
  *(undefined4 *)((longlong)param_2 + 0xfc) = uVar8;
  *(undefined1 *)(param_2 + 0x25) = 0;
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492db388 FUN_1492db388 body=71 status=ok
// SIG undefined FUN_1492db388(void)

undefined8 FUN_1492db388(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 1492db3f8 FUN_1492db3f8 body=59 status=ok
// SIG undefined FUN_1492db3f8(void)

undefined8 FUN_1492db3f8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492db4a4 FUN_1492db4a4 body=29 status=ok
// SIG undefined FUN_1492db4a4(void)

undefined8 FUN_1492db4a4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492db552 FUN_1492db552 body=1348 status=ok
// SIG undefined FUN_1492db552(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1492db552(longlong *param_1,longlong *param_2,longlong param_3)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90 [2];
  longlong local_80;
  undefined1 local_78 [24];
  undefined8 local_60 [2];
  undefined1 local_50 [8];
  longlong local_48 [2];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  (**(code **)(*param_1 + 0x30))(param_1,&local_38);
  lVar5 = local_38;
  if ((((local_38 == 0) || (lVar3 = FUN_1411f0380(), lVar3 == 0)) ||
      (*(int *)(lVar5 + 0x38) < *(int *)(lVar3 + 0x38))) ||
     ((*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
       lVar3 + 0x30 || (local_38 == 0)))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cc0b4b8) && (FUN_144b3d300(&DAT_14cc0b4b8), DAT_14cc0b4b8 == -1)) {
      FUN_1446ddc76(&DAT_14cc0b4b0,"ILiveLinkSubject_InvalidRole",1);
      puVar6 = &DAT_14cc0b4b8;
LAB_1492dba4a:
      _Init_thread_footer(puVar6);
    }
LAB_1492db5d1:
    (**(code **)(*param_1 + 0x28))(param_1,local_60);
    FUN_1400021e4(local_50,local_48);
    (**(code **)(*param_1 + 0x28))(param_1,local_78);
  }
  else {
    lVar5 = *param_2;
    if (((lVar5 == 0) || (lVar3 = FUN_1411f0380(), lVar3 == 0)) ||
       ((*(int *)(lVar5 + 0x38) < *(int *)(lVar3 + 0x38) ||
        ((*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
          lVar3 + 0x30 || (*param_2 == 0)))))) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cc0b4c4) && (FUN_144b3d300(&DAT_14cc0b4c4), DAT_14cc0b4c4 == -1))
      {
        FUN_1446ddc76(&DAT_14cc0b4bc,"ILiveLinkSubject_InvalidRequestedRole",1);
        puVar6 = &DAT_14cc0b4c4;
        goto LAB_1492dba4a;
      }
      goto LAB_1492db5d1;
    }
    cVar2 = (**(code **)(*param_1 + 0x40))(param_1);
    lVar5 = local_38;
    if (cVar2 == '\0') {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cc0b4d0) && (FUN_144b3d300(&DAT_14cc0b4d0), DAT_14cc0b4d0 == -1))
      {
        FUN_1446ddc76(&DAT_14cc0b4c8,"ILiveLinkSubject_HasValidFrameSnapshot",1);
        puVar6 = &DAT_14cc0b4d0;
        goto LAB_1492dba4a;
      }
      goto LAB_1492db5d1;
    }
    if ((((local_38 == 0) || (lVar3 = FUN_1411f0380(), lVar3 == 0)) ||
        (*(int *)(lVar5 + 0x38) < *(int *)(lVar3 + 0x38))) ||
       (lVar8 = local_38,
       *(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
       lVar3 + 0x30)) {
      lVar8 = 0;
    }
    lVar5 = *param_2;
    if (((lVar5 == 0) || (lVar3 = FUN_1411f0380(), lVar3 == 0)) ||
       ((*(int *)(lVar5 + 0x38) < *(int *)(lVar3 + 0x38) ||
        (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
         lVar3 + 0x30)))) {
      lVar5 = 0;
    }
    else {
      lVar5 = *param_2;
    }
    lVar3 = local_38;
    if (lVar8 == lVar5) {
LAB_1492db7cd:
      uVar4 = (**(code **)(*param_1 + 0x98))(param_1);
      FUN_1492dba98(param_3,uVar4);
      lVar5 = (**(code **)(*param_1 + 0x98))(param_1);
      FUN_1492dbb32(param_3 + 0x28,lVar5 + 0x28);
      uVar4 = 1;
      goto LAB_1492db60e;
    }
    if (((local_38 == 0) || (lVar5 = FUN_1411f0380(), lVar5 == 0)) ||
       ((*(int *)(lVar3 + 0x38) < *(int *)(lVar5 + 0x38) ||
        (lVar8 = local_38,
        *(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
        lVar5 + 0x30)))) {
      lVar8 = 0;
    }
    lVar5 = *param_2;
    if ((((lVar5 != 0) && (lVar3 = FUN_1411f0380(), lVar3 != 0)) &&
        (*(int *)(lVar3 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
       (((*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30 && (lVar5 = *param_2, lVar5 != 0)) &&
        ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar8 + 0x38) &&
         (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
          lVar5 + 0x30)))))) goto LAB_1492db7cd;
    lVar5 = (**(code **)(*param_1 + 0x98))(param_1);
    uVar4 = (**(code **)(*param_1 + 0x98))(param_1);
    local_80 = *param_2;
    if ((local_80 != 0 & DAT_14c950c29) == 1) {
      FUN_14689c22e();
    }
    local_98 = param_3;
    cVar2 = FUN_1492dbbcc(param_1,&local_80,uVar4,lVar5 + 0x28);
    uVar4 = 1;
    if (cVar2 != '\0') goto LAB_1492db60e;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cc0b4dc) && (FUN_144b3d300(&DAT_14cc0b4dc), DAT_14cc0b4dc == -1)) {
      FUN_1446ddc76(&DAT_14cc0b4d4,"ILiveLinkSubject_CantTranslate",1);
      _Init_thread_footer(&DAT_14cc0b4dc);
    }
    lVar5 = *param_2;
    if ((((lVar5 == 0) || (lVar3 = FUN_1411f0380(), lVar3 == 0)) ||
        (*(int *)(lVar5 + 0x38) < *(int *)(lVar3 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
        lVar3 + 0x30)) {
      lVar5 = 0;
    }
    else {
      lVar5 = *param_2;
    }
    uVar4 = *(undefined8 *)(lVar5 + 0x18);
    uVar1 = (uint)((ulonglong)uVar4 >> 0x10);
    uVar7 = (uint)uVar4 & 0xffff;
    _DAT_14cc0b4d8 =
         ((uint)uVar4 << 0x10 | uVar7) + (int)((ulonglong)uVar4 >> 0x20) +
         (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar7 >> 4);
    lVar5 = *param_2;
    if (((lVar5 == 0) || (lVar3 = FUN_1411f0380(), lVar3 == 0)) ||
       ((*(int *)(lVar5 + 0x38) < *(int *)(lVar3 + 0x38) ||
        (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
         lVar3 + 0x30)))) {
      lVar5 = 0;
    }
    else {
      lVar5 = *param_2;
    }
    local_60[0] = *(undefined8 *)(lVar5 + 0x18);
    FUN_1400021e4(local_60,local_48);
    (**(code **)(*param_1 + 0x28))(param_1,local_60);
    FUN_1400021e4(local_50,local_90);
    (**(code **)(*param_1 + 0x28))(param_1,local_78);
    if (local_90[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  uVar4 = 0;
LAB_1492db60e:
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1492dba98 FUN_1492dba98 body=152 status=ok
// SIG undefined FUN_1492dba98(void)

void FUN_1492dba98(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = FUN_1492dc406(param_2);
  local_28 = 0;
  FUN_14485c47a(&local_28,uVar2);
  lVar1 = local_28;
  (**(code **)(*param_1 + 0x40))(param_1);
  param_1[1] = lVar1;
  (**(code **)*param_1)(param_1);
  if (*(longlong *)(param_2 + 0x10) != 0) {
    uVar2 = FUN_1492dc406(param_1);
    FUN_1449b16b6(uVar2,param_1[2],*(undefined8 *)(param_2 + 0x10),1);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492dbb32 FUN_1492dbb32 body=152 status=ok
// SIG undefined FUN_1492dbb32(void)

void FUN_1492dbb32(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = FUN_1492dc4d4(param_2);
  local_28 = 0;
  FUN_14485c47a(&local_28,uVar2);
  lVar1 = local_28;
  (**(code **)(*param_1 + 0x40))(param_1);
  param_1[1] = lVar1;
  (**(code **)*param_1)(param_1);
  if (*(longlong *)(param_2 + 0x10) != 0) {
    uVar2 = FUN_1492dc4d4(param_1);
    FUN_1449b16b6(uVar2,param_1[2],*(undefined8 *)(param_2 + 0x10),1);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492dbbcc FUN_1492dbbcc body=669 status=ok
// SIG undefined FUN_1492dbbcc(void)

ulonglong FUN_1492dbbcc(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  byte bVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong *local_70;
  longlong local_68;
  longlong local_60;
  undefined8 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80 = param_3;
  local_78 = param_4;
  (**(code **)(*param_1 + 0x60))(param_1,&local_58);
  if ((longlong)local_50 == 0) {
    uVar11 = 0;
    iVar8 = 0;
  }
  else {
    puVar9 = local_58 + (longlong)local_50 * 2;
    local_88 = 0;
    puVar12 = local_58;
    local_70 = param_1;
    do {
      plVar2 = (longlong *)*puVar12;
      plVar3 = (longlong *)puVar12[1];
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      (**(code **)(*plVar2 + 8))(plVar2,&local_60);
      lVar13 = local_60;
      if ((((local_60 == 0) || (lVar5 = FUN_1411f0380(), lVar5 == 0)) ||
          (*(int *)(lVar13 + 0x38) < *(int *)(lVar5 + 0x38))) ||
         (lVar10 = local_60,
         *(longlong *)(*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
         lVar5 + 0x30)) {
        lVar10 = 0;
      }
      lVar13 = *param_2;
      if (((lVar13 == 0) || (lVar5 = FUN_1411f0380(), lVar5 == 0)) ||
         ((*(int *)(lVar13 + 0x38) < *(int *)(lVar5 + 0x38) ||
          (*(longlong *)(*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
           lVar5 + 0x30)))) {
        lVar13 = 0;
      }
      else {
        lVar13 = *param_2;
      }
      if (lVar10 == lVar13) {
        uVar6 = (**(code **)(*plVar2 + 0x10))(plVar2,local_80,local_78,param_5);
        local_88 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
      }
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar3 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      uVar11 = local_88;
      param_1 = local_70;
      iVar8 = local_50;
    } while ((lVar10 != lVar13) && (puVar12 = puVar12 + 2, puVar12 != puVar9));
  }
  uVar6 = FUN_145a4972a(local_58,iVar8);
  if (local_58 != (undefined8 *)0x0) {
    uVar6 = FUN_1400020a8();
  }
  uVar7 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
  if ((uVar11 & 1) == 0) {
    (**(code **)(*param_1 + 0x60))(param_1,&local_58);
    iVar8 = 0;
    if ((longlong)local_50 != 0) {
      puVar9 = local_58 + (longlong)local_50 * 2;
      puVar12 = local_58;
      do {
        plVar2 = (longlong *)*puVar12;
        plVar3 = (longlong *)puVar12[1];
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
        }
        local_68 = *param_2;
        if ((local_68 != 0 & DAT_14c950c29) == 1) {
          FUN_14689c22e();
        }
        bVar4 = FUN_1492dc090(plVar2,&local_68);
        if (bVar4 != 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2,local_80,local_78,param_5);
          uVar11 = CONCAT71((int7)(uVar11 >> 8),1);
        }
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar3 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
        puVar12 = puVar12 + 2;
        iVar8 = local_50;
      } while ((bVar4 | puVar12 == puVar9) != 1);
    }
    FUN_145a4972a(local_58,iVar8);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    uVar7 = uVar11 & 0xffffffff;
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffffffffff01;
}



// FUNCTION 1492dbe6a FUN_1492dbe6a body=549 status=ok
// SIG undefined FUN_1492dbe6a(void)

ulonglong FUN_1492dbe6a(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 *local_50;
  int local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_1 + 0x30))(param_1,&local_50);
  puVar8 = local_50;
  if ((((local_50 == (undefined8 *)0x0) || (lVar6 = FUN_1411f0380(), lVar6 == 0)) ||
      (*(int *)(puVar8 + 7) < *(int *)(lVar6 + 0x38))) ||
     (puVar9 = local_50,
     *(longlong *)(puVar8[6] + (longlong)*(int *)(lVar6 + 0x38) * 8) != lVar6 + 0x30)) {
    puVar9 = (undefined8 *)0x0;
  }
  lVar6 = *param_2;
  if (((lVar6 == 0) || (lVar7 = FUN_1411f0380(), lVar7 == 0)) ||
     ((*(int *)(lVar6 + 0x38) < *(int *)(lVar7 + 0x38) ||
      (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
       lVar7 + 0x30)))) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    puVar8 = (undefined8 *)*param_2;
  }
  if (puVar9 == puVar8) {
    uVar11 = CONCAT71((int7)((ulonglong)puVar9 >> 8),1);
  }
  else {
    (**(code **)(*param_1 + 0x30))(param_1,&local_40);
    lVar6 = local_40;
    if (((local_40 == 0) || (lVar7 = FUN_1411f0380(), lVar7 == 0)) ||
       ((*(int *)(lVar6 + 0x38) < *(int *)(lVar7 + 0x38) ||
        (lVar10 = local_40,
        *(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
        lVar7 + 0x30)))) {
      lVar10 = 0;
    }
    lVar6 = *param_2;
    if (((((lVar6 == 0) || (lVar7 = FUN_1411f0380(), lVar7 == 0)) ||
         (*(int *)(lVar6 + 0x38) < *(int *)(lVar7 + 0x38))) ||
        ((*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
          lVar7 + 0x30 || (lVar6 = *param_2, lVar6 == 0)))) ||
       ((*(int *)(lVar10 + 0x38) < *(int *)(lVar6 + 0x38) ||
        (uVar11 = CONCAT71((int7)((ulonglong)lVar10 >> 8),1),
        *(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
        lVar6 + 0x30)))) {
      (**(code **)(*param_1 + 0x60))(param_1,&local_50);
      if ((longlong)local_48 == 0) {
        uVar11 = 0;
        local_48 = 0;
      }
      else {
        puVar9 = local_50 + (longlong)local_48 * 2;
        puVar8 = local_50;
        do {
          uVar3 = *puVar8;
          plVar4 = (longlong *)puVar8[1];
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
          }
          local_58 = *param_2;
          if ((local_58 != 0 & DAT_14c950c29) == 1) {
            FUN_14689c22e();
          }
          uVar5 = FUN_1492dc090(uVar3,&local_58);
          uVar11 = (ulonglong)uVar5;
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
          puVar8 = puVar8 + 2;
        } while ((byte)(puVar8 == puVar9 | (byte)uVar5) != 1);
      }
      FUN_145a4972a(local_50,local_48);
      if (local_50 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11 & 0xffffffff;
}



// FUNCTION 1492dc090 FUN_1492dc090 body=318 status=ok
// SIG undefined FUN_1492dc090(void)

undefined8 FUN_1492dc090(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,&local_28);
  lVar1 = *param_2;
  if ((((((lVar1 != 0) && (lVar2 = FUN_1411f0380(), lVar3 = local_28, lVar2 != 0)) &&
        (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       ((*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
         lVar2 + 0x30 && (*param_2 != 0)))) &&
      ((local_28 != 0 &&
       ((lVar2 = FUN_1411f0380(), lVar1 = local_28, lVar2 != 0 &&
        (*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38))))))) &&
     (local_28 != 0 &&
      *(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
      lVar2 + 0x30)) {
    lVar3 = FUN_1411f0380();
    if (((lVar3 == 0) || (*(int *)(lVar1 + 0x38) < *(int *)(lVar3 + 0x38))) ||
       (lVar2 = local_28,
       *(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
       lVar3 + 0x30)) {
      lVar2 = 0;
    }
    lVar1 = *param_2;
    if ((((lVar1 != 0) && (lVar3 = FUN_1411f0380(), lVar3 != 0)) &&
        ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38) &&
         ((*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
           lVar3 + 0x30 && (lVar1 = *param_2, lVar1 != 0)))))) &&
       (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      uVar4 = CONCAT71((int7)((ulonglong)(lVar1 + 0x30) >> 8),
                       *(longlong *)
                        (*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
                       lVar1 + 0x30);
      goto LAB_1492dc0df;
    }
  }
  uVar4 = 0;
LAB_1492dc0df:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1492dc1d8 FUN_1492dc1d8 body=78 status=ok
// SIG undefined FUN_1492dc1d8(void)

undefined8 FUN_1492dc1d8(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18);
  FUN_145715fae(param_2);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492dc228 FUN_1492dc228 body=337 status=ok
// SIG undefined FUN_1492dc228(void)

longlong * FUN_1492dc228(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  uint local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1457a9e34(&local_38,0x10,1,0);
  uVar4 = (ulonglong)local_28;
  if ((-1 < (int)local_28) && ((int)local_28 < local_30)) {
    do {
      lVar2 = *(longlong *)(local_38 + (uVar4 & 0xffffffff) * 8);
      lVar3 = FUN_1411f0380();
      if ((lVar3 != 0) &&
         (((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
           (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30)) &&
          (lVar2 = *(longlong *)(local_38 + (longlong)(int)local_28 * 8),
          (*(uint *)(lVar2 + 0xd4) & 0x2000001) == 0)))) {
        if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_14689c22e(lVar2);
        }
        iVar1 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
          FUN_1492e49c2(param_1,iVar1);
        }
        *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar2;
        if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_14689c22e(lVar2);
        }
      }
      uVar4 = (longlong)(int)local_28;
      do {
        uVar5 = uVar4;
        uVar4 = uVar5 + 1;
        local_28 = (uint)uVar4;
        if ((longlong)local_30 <= (longlong)uVar4) break;
      } while (*(longlong *)(local_38 + uVar4 * 8) == 0);
    } while ((-2 < (longlong)uVar5) && ((int)local_28 < local_30));
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1492dc37a FUN_1492dc37a body=140 status=ok
// SIG undefined FUN_1492dc37a(void)

bool FUN_1492dc37a(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = *param_1;
  if ((((lVar2 != 0) && (lVar1 = FUN_1411f0380(), lVar1 != 0)) &&
      (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
     (((*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30 && (lVar2 = *param_1, lVar2 != 0)) &&
      (lVar1 = FUN_1492dc406(param_2), lVar1 != 0)))) {
    lVar1 = FUN_1492dc406(param_2);
    plVar3 = *(longlong **)(lVar2 + 0x110);
    if (plVar3 == (longlong *)0x0) {
      FUN_140aa6c08(lVar2);
      plVar3 = *(longlong **)(lVar2 + 0x110);
    }
    lVar2 = (**(code **)(*plVar3 + 0x2a0))();
    return lVar1 == lVar2;
  }
  return false;
}



// FUNCTION 1492dc406 FUN_1492dc406 body=65 status=ok
// SIG undefined FUN_1492dc406(void)

longlong FUN_1492dc406(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_14479d2ce(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = FUN_1446f4bba();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1492dc448 FUN_1492dc448 body=140 status=ok
// SIG undefined FUN_1492dc448(void)

bool FUN_1492dc448(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = *param_1;
  if ((((lVar2 != 0) && (lVar1 = FUN_1411f0380(), lVar1 != 0)) &&
      (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
     (((*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30 && (lVar2 = *param_1, lVar2 != 0)) &&
      (lVar1 = FUN_1492dc4d4(param_2), lVar1 != 0)))) {
    lVar1 = FUN_1492dc4d4(param_2);
    plVar3 = *(longlong **)(lVar2 + 0x110);
    if (plVar3 == (longlong *)0x0) {
      FUN_140aa6c08(lVar2);
      plVar3 = *(longlong **)(lVar2 + 0x110);
    }
    lVar2 = (**(code **)(*plVar3 + 0x2a8))();
    return lVar1 == lVar2;
  }
  return false;
}



// FUNCTION 1492dc4d4 FUN_1492dc4d4 body=65 status=ok
// SIG undefined FUN_1492dc4d4(void)

longlong FUN_1492dc4d4(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_14479d2ce(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = FUN_1446f4bba();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1492dc51a FUN_1492dc51a body=31 status=ok
// SIG undefined FUN_1492dc51a(void)

undefined8 * FUN_1492dc51a(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1449db362(param_3);
  return param_2;
}



// FUNCTION 1492dc572 FUN_1492dc572 body=99 status=ok
// SIG undefined FUN_1492dc572(void)

void FUN_1492dc572(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  plVar1 = (longlong *)FUN_144aff0e0();
  switchD_143c3d4dc::caseD_21(param_1,plVar1);
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_149e39238);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492dc5d6 FUN_1492dc5d6 body=41 status=ok
// SIG undefined FUN_1492dc5d6(void)

void FUN_1492dc5d6(undefined8 param_1,longlong *param_2)

{
  switchD_143c3d4dc::caseD_21();
                    /* WARNING: Could not recover jumptable at 0x0001492dc5fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e39238);
  return;
}



// FUNCTION 1492dc62e FUN_1492dc62e body=26 status=ok
// SIG undefined FUN_1492dc62e(void)

void FUN_1492dc62e(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0xa0) = param_2[2];
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x90) = *param_2;
  *(undefined8 *)(param_1 + 0x98) = uVar1;
  *(undefined8 *)(param_1 + 0x38) = param_4;
  return;
}



// FUNCTION 1492dc648 FUN_1492dc648 body=41 status=ok
// SIG undefined FUN_1492dc648(void)

void FUN_1492dc648(longlong param_1)

{
  param_1 = param_1 + -0x28;
  FUN_1492dc672(param_1);
  FUN_1492dc704(param_1);
  FUN_1492dc796(param_1);
  return;
}



// FUNCTION 1492dc672 FUN_1492dc672 body=144 status=ok
// SIG undefined FUN_1492dc672(void)

void FUN_1492dc672(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd8));
  (**(code **)(*(longlong *)(param_1 + 0x120) + 0x40))(param_1 + 0x120);
  local_30 = 0;
  FUN_14485c47a(&local_30,0);
  *(undefined8 *)(param_1 + 0x128) = local_30;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd8));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492dc704 FUN_1492dc704 body=144 status=ok
// SIG undefined FUN_1492dc704(void)

void FUN_1492dc704(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd8));
  (**(code **)(*(longlong *)(param_1 + 0x148) + 0x40))(param_1 + 0x148);
  local_30 = 0;
  FUN_14485c47a(&local_30,0);
  *(undefined8 *)(param_1 + 0x150) = local_30;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined1 *)(param_1 + 0x168) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd8));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492dc796 FUN_1492dc796 body=333 status=ok
// SIG undefined FUN_1492dc796(void)

void FUN_1492dc796(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar3 = (longlong *)(param_1 + 0x100);
  iVar4 = *(int *)(param_1 + 0x10c);
  FUN_145a4972a(*(undefined8 *)(param_1 + 0x100),*(undefined4 *)(param_1 + 0x108));
  *(undefined4 *)(param_1 + 0x108) = 0;
  if ((iVar4 < 0) && (*(int *)(param_1 + 0x10c) != 0)) {
    FUN_1492e4adc(plVar3,0);
  }
  iVar4 = *(int *)(param_1 + 0x50);
  if ((longlong)iVar4 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x48);
    lVar9 = 0;
    do {
      plVar7 = *(longlong **)(lVar6 + lVar9);
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x2b0))(plVar7,&local_50);
        if (local_50 != 0) {
          iVar5 = *(int *)(param_1 + 0x108);
          *(uint *)(param_1 + 0x108) = iVar5 + 1U;
          if (*(uint *)(param_1 + 0x10c) < iVar5 + 1U) {
            FUN_1492e4b3c(plVar3,iVar5);
          }
          lVar8 = *plVar3;
          *(longlong *)(lVar8 + (longlong)iVar5 * 0x10) = local_50;
          *(longlong **)(lVar8 + 8 + (longlong)iVar5 * 0x10) = local_48;
          if (local_48 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_48 + 1) = (int)local_48[1] + 1;
            UNLOCK();
          }
        }
        plVar7 = local_48;
        if (local_48 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_48 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_48)(local_48);
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
      lVar9 = lVar9 + 8;
    } while ((longlong)iVar4 * 8 != lVar9);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1492dc8e4 FUN_1492dc8e4 body=137 status=ok
// SIG undefined FUN_1492dc8e4(void)

undefined4 FUN_1492dc8e4(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb0));
  local_30 = *param_2;
  if ((local_30 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  uVar1 = FUN_1492db552(param_1,&local_30,param_3);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb0));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492dc96e FUN_1492dc96e body=144 status=ok
// SIG undefined FUN_1492dc96e(void)

void FUN_1492dc96e(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb0));
  (**(code **)(*(longlong *)(param_1 + 0xf8) + 0x40))(param_1 + 0xf8);
  local_30 = 0;
  FUN_14485c47a(&local_30,0);
  *(undefined8 *)(param_1 + 0x100) = local_30;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined1 *)(param_1 + 0x118) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb0));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492dca1a FUN_1492dca1a body=102 status=ok
// SIG undefined FUN_1492dca1a(void)

longlong * FUN_1492dca1a(longlong *param_1,longlong *param_2)

{
  double dVar1;
  double dVar2;
  double *pdVar3;
  double *pdVar4;
  char cVar5;
  
  cVar5 = (**(code **)(*param_1 + 0x40))();
  if (cVar5 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    pdVar3 = (double *)param_1[0x26];
    dVar1 = *pdVar3;
    dVar2 = pdVar3[1];
    *(undefined4 *)(param_2 + 1) = 1;
    FUN_1492e4a48(param_2,0);
    pdVar4 = (double *)*param_2;
    *pdVar4 = dVar1 + dVar2;
    dVar1 = pdVar3[0xd];
    pdVar4[1] = pdVar3[0xc];
    pdVar4[2] = dVar1;
  }
  return param_2;
}



// FUNCTION 1492dca80 FUN_1492dca80 body=12 status=ok
// SIG undefined FUN_1492dca80(void)

bool FUN_1492dca80(longlong param_1)

{
  return *(longlong *)(param_1 + 0x130) != 0;
}



// FUNCTION 1492dca8c FUN_1492dca8c body=12 status=ok
// SIG undefined FUN_1492dca8c(void)

bool FUN_1492dca8c(longlong param_1)

{
  return *(longlong *)(param_1 + 0x158) != 0;
}



// FUNCTION 1492dcaca FUN_1492dcaca body=109 status=ok
// SIG undefined FUN_1492dcaca(void)

void FUN_1492dcaca(longlong param_1,longlong *param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd8));
  if ((longlong *)(param_1 + 0x120) != param_2) {
    (**(code **)(*(longlong *)(param_1 + 0x120) + 0x48))();
    *(longlong *)(param_1 + 0x128) = param_2[1];
    *(longlong *)(param_1 + 0x130) = param_2[2];
    *(char *)(param_1 + 0x140) = (char)param_2[4];
    *(undefined1 *)(param_2 + 4) = 0;
    (**(code **)(*param_2 + 0x48))(param_2);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd8));
  return;
}



// FUNCTION 1492dcb38 FUN_1492dcb38 body=109 status=ok
// SIG undefined FUN_1492dcb38(void)

void FUN_1492dcb38(longlong param_1,longlong *param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd8));
  if ((longlong *)(param_1 + 0x148) != param_2) {
    (**(code **)(*(longlong *)(param_1 + 0x148) + 0x48))();
    *(longlong *)(param_1 + 0x150) = param_2[1];
    *(longlong *)(param_1 + 0x158) = param_2[2];
    *(char *)(param_1 + 0x168) = (char)param_2[4];
    *(undefined1 *)(param_2 + 4) = 0;
    (**(code **)(*param_2 + 0x48))(param_2);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd8));
  return;
}



// FUNCTION 1492dcba6 FUN_1492dcba6 body=147 status=ok
// SIG undefined FUN_1492dcba6(void)

undefined8 * FUN_1492dcba6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc17770;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_1492dfcaa(param_1 + 7);
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  return param_1;
}



// FUNCTION 1492dcc3a FUN_1492dcc3a body=420 status=ok
// SIG undefined FUN_1492dcc3a(void)

undefined8 * FUN_1492dcc3a(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  
  *param_1 = &PTR_FUN_14bc17770;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_1492dfcaa(param_1 + 7);
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  FUN_1406fa324(param_1 + 1,param_2);
  FUN_1406fa324(param_1 + 3,param_2 + 0x10);
  FUN_14054c6c4(param_1 + 5,param_2 + 0x20);
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  *(undefined4 *)(param_1 + 7) = *param_3;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar2;
  *(undefined4 *)(param_1 + 8) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar4;
  FUN_140bb2e20(param_1 + 9,param_3 + 4);
  uVar2 = param_3[0x19];
  uVar3 = param_3[0x1a];
  uVar4 = param_3[0x1b];
  *(undefined4 *)(param_1 + 0x13) = param_3[0x18];
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar2;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xa4) = uVar4;
  FUN_144a67f5c(param_1 + 0x15,param_3 + 0x1c);
  uVar2 = param_3[0x21];
  uVar3 = param_3[0x22];
  uVar4 = param_3[0x23];
  uVar5 = param_3[0x23];
  uVar6 = param_3[0x24];
  uVar7 = param_3[0x25];
  uVar8 = param_3[0x26];
  *(undefined4 *)(param_1 + 0x17) = param_3[0x20];
  *(undefined4 *)((longlong)param_1 + 0xbc) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xc4) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0xc4) = uVar5;
  *(undefined4 *)(param_1 + 0x19) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0xcc) = uVar7;
  *(undefined4 *)(param_1 + 0x1a) = uVar8;
  FUN_144756208(param_1 + 0x1b,param_3 + 0x28);
  iVar1 = param_3[0x2a];
  FUN_1492dcdde(param_1 + 0x1d,iVar1);
  FUN_1492dce4a();
  if (0 < (longlong)iVar1) {
    lVar9 = 0;
    lVar10 = 0;
    do {
      *(undefined1 *)(param_1[0x1d] + lVar10) = 0;
      *(undefined1 *)(param_1[0x1f] + lVar9) = 0;
      lVar10 = lVar10 + 0x70;
      lVar9 = lVar9 + 0x18;
    } while ((longlong)iVar1 * 0x70 - lVar10 != 0);
  }
  return param_1;
}



// FUNCTION 1492dcdde FUN_1492dcdde body=106 status=ok
// SIG undefined FUN_1492dcdde(void)

void FUN_1492dcdde(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1492e4c06(param_1,iVar1);
    }
    FUN_1492e4bc1((longlong)iVar1 * 0x70 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_1492e4c96(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1492dce4a FUN_1492dce4a body=122 status=ok
// SIG undefined FUN_1492dce4a(void)

void FUN_1492dce4a(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1492e4d54(param_1,iVar1);
    }
    FUN_1492e4d3c((longlong)iVar1 * 0x18 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_1492e4de8(param_1,param_2,iVar1 - param_2);
    FUN_1492e4e4a(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1492dcec6 FUN_1492dcec6 body=301 status=ok
// SIG undefined FUN_1492dcec6(void)

void FUN_1492dcec6(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined1 *)(param_1 + 0x158) = 0;
  lVar1 = param_1 + 0x108;
  FUN_145bd9614(lVar1);
  uVar3 = *(uint *)(param_1 + 0x10);
  if (uVar3 == *(uint *)(param_1 + 0xb0)) {
    if ((uint)(*(int *)(param_1 + 0x110) - *(int *)(param_1 + 0x13c)) < uVar3) {
      if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456acd4b((longlong)(int)uVar3);
      }
      FUN_147508cda(lVar1,uVar3);
      iVar2 = 1;
      if (3 < uVar3) {
        uVar3 = (uVar3 | 1) + 0xe;
        iVar2 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
          }
        }
        iVar2 = 1 << ((byte)iVar2 & 0x1f);
      }
      if ((*(int *)(param_1 + 0x150) == 0) || (*(int *)(param_1 + 0x150) < iVar2)) {
        *(int *)(param_1 + 0x150) = iVar2;
        FUN_1408cb1a2(lVar1);
      }
    }
    if (0 < *(int *)(param_1 + 0x10)) {
      lVar6 = 0;
      lVar4 = 0;
      lVar5 = 0;
      do {
        local_50 = *(longlong *)(param_1 + 0xa8) + lVar6;
        local_58 = *(longlong *)(param_1 + 8) + lVar4;
        FUN_144a405ac(lVar1,local_44,&local_58,0);
        lVar5 = lVar5 + 1;
        lVar4 = lVar4 + 8;
        lVar6 = lVar6 + 4;
      } while (lVar5 < *(int *)(param_1 + 0x10));
    }
    *(undefined1 *)(param_1 + 0x158) = 1;
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492dcff6 FUN_1492dcff6 body=221 status=ok
// SIG undefined FUN_1492dcff6(void)

void FUN_1492dcff6(longlong param_1,uint param_2,longlong param_3)

{
  char *pcVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *(undefined4 *)(param_3 + 8) = 0;
  if (*(int *)(param_3 + 0xc) < 0) {
    FUN_14481578e(param_3,0);
  }
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0xe0))) {
    pcVar1 = (char *)(*(longlong *)(param_1 + 0xf8) + (ulonglong)param_2 * 0x18);
    plVar5 = (longlong *)(pcVar1 + 8);
    if (*pcVar1 == '\0') {
      puVar2 = (undefined1 *)(*(longlong *)(param_1 + 0xf8) + (ulonglong)param_2 * 0x18);
      iVar3 = *(int *)(param_1 + 0x30);
      if (0 < iVar3) {
        lVar4 = 0;
        do {
          if (*(uint *)(*(longlong *)(param_1 + 0x28) + lVar4 * 4) == param_2) {
            iVar3 = *(int *)(puVar2 + 0x10);
            *(uint *)(puVar2 + 0x10) = iVar3 + 1U;
            if (*(uint *)(puVar2 + 0x14) < iVar3 + 1U) {
              FUN_1446f48e2(plVar5,iVar3);
            }
            *(int *)(*plVar5 + (longlong)iVar3 * 4) = (int)lVar4;
            iVar3 = *(int *)(param_1 + 0x30);
          }
          lVar4 = lVar4 + 1;
        } while (lVar4 < iVar3);
      }
      *puVar2 = 1;
    }
    FUN_14054c6c4(param_3,plVar5);
    return;
  }
  return;
}



// FUNCTION 1492dd0d4 FUN_1492dd0d4 body=2007 status=ok
// SIG undefined FUN_1492dd0d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1492dd0d4(longlong param_1,uint param_2,double *param_3)

{
  undefined1 *puVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  double *pdVar18;
  double *pdVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  double dVar26;
  undefined1 auVar25 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  double dVar30;
  undefined1 auVar31 [16];
  double dVar32;
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  undefined1 auStack_308 [32];
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  undefined8 local_2b8;
  double dStack_2b0;
  undefined1 local_2a8 [16];
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  undefined8 uStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  undefined8 uStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8 [16];
  double local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  double local_168;
  double local_160;
  double local_158;
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_308;
  pdVar18 = (double *)&DAT_14c846480;
  pdVar19 = param_3;
  for (lVar17 = 0xc; auVar34 = _DAT_149934d80, lVar17 != 0; lVar17 = lVar17 + -1) {
    *pdVar19 = *pdVar18;
    pdVar18 = pdVar18 + 1;
    pdVar19 = pdVar19 + 1;
  }
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0xe0))) {
    uVar21 = (ulonglong)param_2;
    puVar1 = (undefined1 *)(*(longlong *)(param_1 + 0xe8) + uVar21 * 0x70);
    if (*(char *)(*(longlong *)(param_1 + 0xe8) + uVar21 * 0x70) == '\x01') {
      pdVar18 = (double *)(puVar1 + 0x10);
      for (lVar17 = 0xc; lVar17 != 0; lVar17 = lVar17 + -1) {
        *param_3 = *pdVar18;
        pdVar18 = pdVar18 + 1;
        param_3 = param_3 + 1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_e0 ^ (ulonglong)auStack_308);
    }
    lVar17 = *(longlong *)(param_1 + 0xd8);
    lVar20 = uVar21 * 0x60;
    pdVar18 = (double *)(lVar17 + lVar20);
    local_2e8 = 0.0;
    dStack_2e0 = 0.0;
    local_2d8 = 0.0;
    dStack_2d0 = 1.0;
    local_2c8 = 0.0;
    dStack_2c0 = 0.0;
    local_2b8 = 0.0;
    dStack_2b0 = 0.0;
    dVar24 = (double)DAT_149934d80;
    dVar26 = DAT_149934d80._8_8_;
    local_2a8 = _DAT_149934d80;
    local_298 = 1.0;
    dStack_290 = 0.0;
    uVar14 = FUN_1492dd0d4(param_1,*(undefined4 *)(*(longlong *)(param_1 + 0x28) + uVar21 * 4),
                           &local_2e8);
    dVar11 = dStack_290;
    dVar13 = local_298;
    dVar3 = local_2a8._0_8_;
    dVar6 = local_2a8._8_8_;
    auVar31._8_8_ = dStack_290;
    auVar31._0_8_ = local_298;
    auVar27 = *(undefined1 (*) [16])(lVar17 + 0x40 + lVar20);
    dVar4 = auVar27._0_8_;
    dVar7 = auVar27._8_8_;
    auVar2 = *(undefined1 (*) [16])(lVar17 + 0x50 + lVar20);
    dVar5 = auVar2._0_8_;
    auVar27 = minpd(auVar27,local_2a8);
    auVar31 = minpd(auVar2,auVar31);
    auVar28._8_8_ = -(ulonglong)(auVar27._8_8_ < 0.0);
    auVar28._0_8_ = -(ulonglong)(auVar27._0_8_ < 0.0);
    iVar15 = movmskpd(uVar14,auVar28);
    auVar27._8_8_ = -(ulonglong)(auVar31._8_8_ < 0.0);
    auVar27._0_8_ = -(ulonglong)(auVar31._0_8_ < 0.0);
    uVar16 = movmskpd((int)param_1,auVar27);
    if ((uVar16 & 0x3fffffff) == 0 && iVar15 == 0) {
      dVar24 = *pdVar18;
      dVar26 = pdVar18[1];
      dVar30 = pdVar18[2];
      dVar8 = pdVar18[3];
      dVar32 = dVar26 * local_2d8 * -1.0 +
               dVar30 * dStack_2e0 + dVar8 * local_2e8 * 1.0 + dVar24 * dStack_2d0;
      dVar29 = dVar24 * local_2d8 * 1.0 +
               dVar8 * dStack_2e0 + dVar30 * local_2e8 * -1.0 + dVar26 * dStack_2d0;
      auVar34._0_8_ =
           dVar8 * local_2d8 * 1.0 +
           ((local_2e8 * dVar26 * 1.0 + dVar30 * dStack_2d0) - dVar24 * dStack_2e0);
      auVar34._8_8_ =
           dVar30 * local_2d8 * -1.0 +
           ((local_2e8 * dVar24 * -1.0 + dVar8 * dStack_2d0) - dVar26 * dStack_2e0);
      dVar38 = pdVar18[4] * dVar3;
      dVar39 = pdVar18[5] * dVar6;
      dVar24 = pdVar18[6] * local_298;
      dVar26 = pdVar18[7] * dStack_290;
      dVar37 = dVar39 * local_2e8 - dStack_2e0 * dVar38;
      dVar36 = dVar24 * dStack_2e0 - local_2d8 * dVar39;
      dVar30 = dVar38 * local_2d8 - local_2e8 * dVar24;
      dVar8 = dVar26 * dStack_2d0 - dStack_2d0 * dVar26;
      dVar36 = dVar36 + dVar36;
      dVar30 = dVar30 + dVar30;
      dVar37 = dVar37 + dVar37;
      dVar8 = dVar8 + dVar8;
      local_108 = (dVar37 * dStack_2e0 - local_2d8 * dVar30) + dStack_2d0 * dVar36 + dVar38 +
                  local_2c8;
      dStack_100 = (dVar36 * local_2d8 - dVar37 * local_2e8) + dStack_2d0 * dVar30 + dVar39 +
                   dStack_2c0;
      local_f8 = (dVar30 * local_2e8 - dStack_2e0 * dVar36) + dStack_2d0 * dVar37 + dVar24 +
                 local_2b8;
      dVar24 = (dVar8 * dStack_2d0 - dVar8 * dStack_2d0) + dStack_2d0 * dVar8 + dVar26 + dStack_2b0;
    }
    else {
      dVar32 = dStack_2e0 + dStack_2e0;
      dVar30 = local_2d8 + local_2d8;
      dVar37 = local_2e8 * (local_2e8 + local_2e8);
      local_198 = (1.0 - (dVar37 + dStack_2e0 * dVar32)) * local_298;
      dVar8 = (local_2e8 + local_2e8) * dStack_2d0;
      local_1a8 = (dVar32 * dStack_2d0 + local_2e8 * dVar30) * local_298;
      dVar29 = local_298 * dVar5;
      dStack_1a0 = (dVar30 * dStack_2e0 - dVar8) * local_298;
      local_1e8 = (dVar24 - (local_2d8 * dVar30 + dStack_2e0 * dVar32)) * dVar3;
      dVar37 = (dVar26 - (local_2d8 * dVar30 + dVar37)) * dVar6;
      dStack_1e0 = (dVar32 * local_2e8 + dVar30 * dStack_2d0) * dVar3;
      local_1b8 = (dVar30 * dStack_2e0 + dVar8) * dVar6;
      local_1d8 = (local_2e8 * dVar30 - dVar32 * dStack_2d0) * dVar3;
      uStack_1d0 = 0;
      local_1c8._8_4_ = SUB84(dVar37,0);
      local_1c8._0_8_ = (dVar32 * local_2e8 - dVar30 * dStack_2d0) * dVar6;
      local_1c8._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
      uStack_1b0 = 0;
      uStack_190 = 0;
      local_188 = local_2c8;
      dStack_180 = dStack_2c0;
      local_178 = (undefined4)local_2b8;
      uStack_174 = local_2b8._4_4_;
      uStack_170 = 0;
      uStack_16c = 0x3ff00000;
      dVar38 = *pdVar18;
      dVar39 = pdVar18[1];
      dVar12 = pdVar18[2];
      dVar33 = dVar39 + dVar39;
      dVar8 = dVar12 + dVar12;
      dVar36 = dVar38 * (dVar38 + dVar38);
      local_218 = (1.0 - (dVar36 + dVar39 * dVar33)) * dVar5;
      dVar30 = pdVar18[3];
      dVar37 = dVar8 * dVar30;
      dVar32 = (dVar38 + dVar38) * pdVar18[3];
      dVar30 = dVar33 * dVar30;
      local_228 = (dVar30 + *pdVar18 * dVar8) * dVar5;
      local_248 = (dVar33 * dVar38 - dVar37) * dVar7;
      dStack_220 = (dVar8 * dVar39 - dVar32) * dVar5;
      local_268 = (dVar24 - (dVar12 * dVar8 + dVar39 * dVar33)) * dVar4;
      dStack_240 = (dVar26 - (dVar12 * dVar8 + dVar36)) * dVar7;
      dStack_260 = (dVar33 * dVar38 + dVar37) * dVar4;
      local_238 = (dVar8 * dVar39 + dVar32) * dVar7;
      local_258 = (*pdVar18 * dVar8 - dVar30) * dVar4;
      uStack_250 = 0;
      uStack_230 = 0;
      uStack_210 = 0;
      local_208 = pdVar18[4];
      dStack_200 = pdVar18[5];
      local_1f8 = pdVar18[6];
      uStack_1f0 = 0x3ff0000000000000;
      FUN_1447fea8d(&local_168);
      FUN_144a1c686(&local_168,0x3e45798ee0000000);
      auVar22._8_8_ = -(ulonglong)(0.0 <= dVar6 * dVar7);
      auVar22._0_8_ = -(ulonglong)(0.0 <= dVar3 * dVar4);
      auVar27 = blendvpd(_DAT_149936790,auVar34,auVar22);
      uVar21 = -(ulonglong)(0.0 <= dVar29);
      dVar24 = (double)(~uVar21 & 0xbff0000000000000 | uVar21 & 0x3ff0000000000000);
      dVar26 = auVar27._0_8_;
      local_158 = local_158 * dVar26;
      local_160 = local_160 * dVar26;
      local_168 = local_168 * dVar26;
      dVar26 = auVar27._8_8_;
      local_138 = local_138 * dVar26;
      local_140 = local_140 * dVar26;
      local_148 = dVar26 * local_148;
      local_118 = local_118 * dVar24;
      local_120 = local_120 * dVar24;
      local_128 = dVar24 * local_128;
      FUN_14481fd10(&local_288,&local_168);
      dVar24 = local_278 * local_278 + local_288 * local_288;
      dVar26 = dStack_270 * dStack_270 + dStack_280 * dStack_280;
      auVar25._0_8_ = dVar24 + dVar26;
      auVar25._8_8_ = dVar24 + dVar26;
      auVar23._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar25._8_8_);
      auVar23._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar25._0_8_);
      auVar27 = sqrtpd(auVar25,auVar25);
      auVar34 = divpd(auVar34,auVar27);
      auVar35._0_8_ = auVar34._0_8_ * local_278;
      auVar35._8_8_ = auVar34._8_8_ * dStack_270;
      dVar32 = (double)((ulonglong)(local_288 * auVar34._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar25._0_8_));
      dVar29 = (double)((ulonglong)(dStack_280 * auVar34._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar25._8_8_));
      auVar34 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar35,auVar23);
      dVar24 = 0.0;
    }
    dVar11 = dVar11 * auVar2._8_8_;
    *param_3 = dVar32;
    param_3[1] = dVar29;
    *(undefined1 (*) [16])(param_3 + 2) = auVar34;
    param_3[4] = local_108;
    param_3[5] = dStack_100;
    auVar2._8_4_ = SUB84(dVar24,0);
    auVar2._0_8_ = local_f8;
    auVar2._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
    *(undefined1 (*) [16])(param_3 + 6) = auVar2;
    auVar10._8_4_ = SUB84(dVar6 * dVar7,0);
    auVar10._0_8_ = dVar3 * dVar4;
    auVar10._12_4_ = (int)((ulonglong)(dVar6 * dVar7) >> 0x20);
    *(undefined1 (*) [16])(param_3 + 8) = auVar10;
    auVar9._8_4_ = SUB84(dVar11,0);
    auVar9._0_8_ = dVar13 * dVar5;
    auVar9._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    *(undefined1 (*) [16])(param_3 + 10) = auVar9;
    *puVar1 = 1;
    pdVar18 = (double *)(puVar1 + 0x10);
    for (lVar17 = 0xc; lVar17 != 0; lVar17 = lVar17 + -1) {
      *pdVar18 = *param_3;
      param_3 = param_3 + 1;
      pdVar18 = pdVar18 + 1;
    }
  }
  if ((local_e0 ^ (ulonglong)auStack_308) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492dd8b2 FUN_1492dd8b2 body=28 status=ok
// SIG undefined FUN_1492dd8b2(void)

void FUN_1492dd8b2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc17778;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  return;
}



// FUNCTION 1492dd8ce FUN_1492dd8ce body=121 status=ok
// SIG undefined FUN_1492dd8ce(void)

void FUN_1492dd8ce(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 != 0) {
    iVar1 = *(int *)(param_1 + 0x18);
    if (((longlong)iVar1 < 0) || (*(int *)(lVar2 + 0xe0) <= iVar1)) {
      FUN_1446f470e(&local_20,&DAT_149e01fe8,1);
    }
    else {
      local_20 = *(undefined8 *)(*(longlong *)(lVar2 + 0x18) + (longlong)iVar1 * 8);
    }
    *param_2 = local_20;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492dd948 FUN_1492dd948 body=76 status=ok
// SIG undefined FUN_1492dd948(void)

void FUN_1492dd948(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 != 0) {
    iVar1 = *(int *)(param_1 + 0x18);
    puVar4 = &DAT_14c846480;
    puVar5 = param_2;
    for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    if ((-1 < (longlong)iVar1) && (iVar1 < *(int *)(lVar2 + 0xe0))) {
      puVar4 = (undefined8 *)((longlong)iVar1 * 0x60 + *(longlong *)(lVar2 + 0xd8));
      for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
        *param_2 = *puVar4;
        puVar4 = puVar4 + 1;
        param_2 = param_2 + 1;
      }
    }
  }
  return;
}



// FUNCTION 1492dd994 FUN_1492dd994 body=24 status=ok
// SIG undefined FUN_1492dd994(void)

void FUN_1492dd994(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1492dd0d4(*(longlong *)(param_1 + 8),*(undefined4 *)(param_1 + 0x18),param_2);
  return;
}



// FUNCTION 1492dd9ac FUN_1492dd9ac body=42 status=ok
// SIG undefined FUN_1492dd9ac(void)

undefined8 FUN_1492dd9ac(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 != 0) {
    iVar1 = *(int *)(param_1 + 0x18);
    if ((-1 < (longlong)iVar1) && (iVar1 < *(int *)(lVar2 + 0xe0))) {
      return CONCAT71((int7)((ulonglong)*(longlong *)(lVar2 + 0x28) >> 8),
                      -1 < *(int *)(*(longlong *)(lVar2 + 0x28) + (longlong)iVar1 * 4));
    }
  }
  return 0;
}



// FUNCTION 1492dd9d6 FUN_1492dd9d6 body=133 status=ok
// SIG undefined FUN_1492dd9d6(void)

void FUN_1492dd9d6(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 != 0) {
    iVar1 = *(int *)(param_1 + 0x18);
    uVar3 = 0xffffffff;
    if ((-1 < (longlong)iVar1) && (iVar1 < *(int *)(lVar2 + 0xe0))) {
      uVar3 = *(undefined4 *)(*(longlong *)(lVar2 + 0x28) + (longlong)iVar1 * 4);
    }
    local_20 = *(longlong *)(param_1 + 0x10);
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    local_28 = lVar2;
    FUN_1492dda5c(param_2,&local_28);
    *(undefined4 *)(param_2 + 0x18) = uVar3;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492dda5c FUN_1492dda5c body=124 status=ok
// SIG undefined FUN_1492dda5c(void)

void FUN_1492dda5c(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(longlong *)(param_1 + 0x10) = lVar4;
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
  plVar5 = (longlong *)param_2[1];
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
                    /* WARNING: Could not recover jumptable at 0x0001492ddacc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1492ddad8 FUN_1492ddad8 body=106 status=ok
// SIG undefined FUN_1492ddad8(void)

ulonglong FUN_1492ddad8(longlong param_1)

{
  ulonglong uVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    local_28 = 0;
    uStack_20 = 0;
    FUN_1492dcff6(*(longlong *)(param_1 + 8),*(undefined4 *)(param_1 + 0x18),&local_28);
    uVar1 = uStack_20 & 0xffffffff;
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492ddb44 FUN_1492ddb44 body=277 status=ok
// SIG undefined FUN_1492ddb44(void)

void FUN_1492ddb44(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar4 = *(int *)((longlong)param_2 + 0xc);
  FUN_1492e4ef8(*param_2,(int)param_2[1]);
  *(undefined4 *)(param_2 + 1) = 0;
  if ((iVar4 < 0) && (*(int *)((longlong)param_2 + 0xc) != 0)) {
    FUN_1492e4f4c(param_2);
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    local_58 = 0;
    uStack_50 = 0;
    FUN_1492dcff6(*(longlong *)(param_1 + 8),*(undefined4 *)(param_1 + 0x18),&local_58);
    lVar3 = local_58;
    lVar6 = (longlong)(int)uStack_50;
    if (lVar6 != 0) {
      lVar5 = 0;
      do {
        uVar1 = *(undefined4 *)(lVar3 + lVar5);
        iVar4 = FUN_1492ddc5a(param_2);
        lVar2 = *param_2;
        local_68 = *(undefined8 *)(param_1 + 8);
        local_60 = *(longlong *)(param_1 + 0x10);
        if (local_60 != 0) {
          LOCK();
          *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
          UNLOCK();
        }
        FUN_1492dda5c(lVar2 + (longlong)iVar4 * 0x20,&local_68);
        *(undefined4 *)(*param_2 + 0x18 + (longlong)iVar4 * 0x20) = uVar1;
        lVar5 = lVar5 + 4;
      } while (lVar6 * 4 != lVar5);
    }
    if (local_58 != 0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1492ddc5a FUN_1492ddc5a body=58 status=ok
// SIG undefined FUN_1492ddc5a(void)

int FUN_1492ddc5a(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1492e4f96(param_1,iVar1);
  }
  FUN_1492e4f7c((longlong)iVar1 * 0x20 + *param_1);
  return iVar1;
}



// FUNCTION 1492ddc94 FUN_1492ddc94 body=69 status=ok
// SIG undefined FUN_1492ddc94(void)

void FUN_1492ddc94(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x158) == '\0') {
      FUN_1492dcec6(lVar1);
    }
    FUN_140d188f2(param_2,lVar1 + 0x108);
    return;
  }
  return;
}



// FUNCTION 1492ddcda FUN_1492ddcda body=142 status=ok
// SIG undefined FUN_1492ddcda(void)

void FUN_1492ddcda(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_140bb2e20(param_2,lVar1 + 0x48);
    local_38 = *(undefined4 *)(lVar1 + 0x98);
    uStack_34 = *(undefined4 *)(lVar1 + 0x9c);
    uStack_30 = *(undefined4 *)(lVar1 + 0xa0);
    uStack_2c = *(undefined4 *)(lVar1 + 0xa4);
    FUN_146805de4(&local_50,&local_38,&uStack_30,0);
    *(undefined8 *)(param_2 + 0x60) = local_40;
    *(undefined4 *)(param_2 + 0x50) = local_50;
    *(undefined4 *)(param_2 + 0x54) = uStack_4c;
    *(undefined4 *)(param_2 + 0x58) = uStack_48;
    *(undefined4 *)(param_2 + 0x5c) = uStack_44;
    *(ulonglong *)(param_2 + 0x68) = CONCAT44(uStack_2c,uStack_30);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492ddd6a FUN_1492ddd6a body=19 status=ok
// SIG undefined FUN_1492ddd6a(void)

undefined4 FUN_1492ddd6a(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    return *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xe0);
  }
  return 0;
}



// FUNCTION 1492ddd7e FUN_1492ddd7e body=25 status=ok
// SIG undefined FUN_1492ddd7e(void)

void FUN_1492ddd7e(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1406fa324(param_2,*(longlong *)(param_1 + 8) + 0x18);
    return;
  }
  return;
}



// FUNCTION 1492ddd98 FUN_1492ddd98 body=154 status=ok
// SIG undefined FUN_1492ddd98(void)

void FUN_1492ddd98(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *(undefined8 *)(param_1 + 8);
  local_20 = *(longlong *)(param_1 + 0x10);
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_1492dda5c(param_2,&local_28);
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    uVar2 = 0xffffffff;
    if ((longlong)*(int *)(lVar1 + 0x30) != 0) {
      lVar3 = (longlong)*(int *)(lVar1 + 0x30) << 2;
      lVar4 = 0;
      do {
        if (*(int *)(*(longlong *)(lVar1 + 0x28) + lVar4 * 4) < 0) {
          uVar2 = (undefined4)lVar4;
          break;
        }
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + -4;
      } while (lVar3 != 0);
    }
    *(undefined4 *)(param_2 + 0x18) = uVar2;
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1492dde34 FUN_1492dde34 body=150 status=ok
// SIG undefined FUN_1492dde34(void)

void FUN_1492dde34(longlong param_1,undefined4 param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = *(undefined8 *)(param_1 + 8);
  local_28 = *(longlong *)(param_1 + 0x10);
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  FUN_1492dda5c(param_3,&local_30);
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    local_38 = *(longlong *)(param_1 + 0x10);
    if (local_38 != 0) {
      LOCK();
      *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
      UNLOCK();
    }
    local_40 = lVar1;
    FUN_1492dda5c(param_3,&local_40);
    *(undefined4 *)(param_3 + 0x18) = param_2;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492ddecc FUN_1492ddecc body=200 status=ok
// SIG undefined FUN_1492ddecc(void)

void FUN_1492ddecc(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *(undefined8 *)(param_1 + 8);
  local_30 = *(longlong *)(param_1 + 0x10);
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  FUN_1492dda5c(param_3,&local_38);
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    uVar3 = 0xffffffff;
    if ((longlong)*(int *)(lVar1 + 0x20) != 0) {
      lVar2 = (longlong)*(int *)(lVar1 + 0x20) << 3;
      lVar4 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar1 + 0x18) + lVar4 * 8) == param_2) {
          uVar3 = (undefined4)lVar4;
          break;
        }
        lVar4 = lVar4 + 1;
        lVar2 = lVar2 + -8;
      } while (lVar2 != 0);
    }
    local_40 = *(longlong *)(param_1 + 0x10);
    if (local_40 != 0) {
      LOCK();
      *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
      UNLOCK();
    }
    local_48 = lVar1;
    FUN_1492dda5c(param_3,&local_48);
    *(undefined4 *)(param_3 + 0x18) = uVar3;
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1492ddf96 FUN_1492ddf96 body=16 status=ok
// SIG undefined FUN_1492ddf96(void)

longlong FUN_1492ddf96(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8) + 8;
  if (*(longlong *)(param_1 + 8) == 0) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 1492ddfa6 FUN_1492ddfa6 body=16 status=ok
// SIG undefined FUN_1492ddfa6(void)

longlong FUN_1492ddfa6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8) + 0x38;
  if (*(longlong *)(param_1 + 8) == 0) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 1492ddfb6 FUN_1492ddfb6 body=124 status=ok
// SIG undefined FUN_1492ddfb6(void)

void FUN_1492ddfb6(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(longlong *)(param_1 + 0x10) = lVar4;
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
  plVar5 = (longlong *)param_2[1];
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
                    /* WARNING: Could not recover jumptable at 0x0001492de026. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1492de036 FUN_1492de036 body=55 status=ok
// SIG undefined FUN_1492de036(void)

void FUN_1492de036(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0b230 == 0) {
    uVar1 = FUN_140e1278a();
    DAT_14cc0b230 = FUN_140002ddd(FUN_1467194fb,uVar1,L"LiveLinkSkeletonStaticData");
  }
  return;
}



// FUNCTION 1492de06e FUN_1492de06e body=55 status=ok
// SIG undefined FUN_1492de06e(void)

void FUN_1492de06e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0b248 == 0) {
    uVar1 = FUN_140e1278a();
    DAT_14cc0b248 = FUN_140002ddd(FUN_1467195bf,uVar1,L"LiveLinkAnimationFrameData");
  }
  return;
}



// FUNCTION 1492de0a6 FUN_1492de0a6 body=55 status=ok
// SIG undefined FUN_1492de0a6(void)

void FUN_1492de0a6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0b848 == 0) {
    uVar1 = FUN_140e1278a();
    DAT_14cc0b848 = FUN_140002ddd(FUN_141907317,uVar1,L"SubjectFrameHandle");
  }
  return;
}



// FUNCTION 1492de0de FUN_1492de0de body=325 status=ok
// SIG undefined FUN_1492de0de(void)

ulonglong FUN_1492de0de(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = *(undefined8 *)(param_3 + 0x10);
  uVar4 = FUN_1492e508c(param_3);
  lVar5 = FUN_1492e501c(uVar4,uVar3);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  uVar4 = FUN_1492dc406(param_2);
  lVar6 = FUN_1492e50ce(uVar4,uVar3);
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  uVar4 = FUN_1492dc4d4(param_2 + 0x28);
  lVar7 = FUN_1492e513e(uVar4,uVar3);
  bVar9 = lVar7 != 0 && (lVar6 != 0 && lVar5 != 0);
  if (bVar9) {
    plVar8 = (longlong *)FUN_14494321d(0x170);
    plVar8[1] = (longlong)&DAT_100000001;
    *plVar8 = (longlong)&PTR_FUN_14bc1c7c0;
    plVar1 = plVar8 + 2;
    FUN_1492dcc3a(plVar1,lVar6,lVar7);
    local_48 = plVar1;
    local_40 = plVar8;
    if (plVar8 == (longlong *)0x0) {
      FUN_1492ddfb6(lVar5,&local_48);
    }
    else {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      FUN_1492ddfb6(lVar5,&local_48);
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
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)(param_2 + 0x28) >> 8),bVar9) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492de224 FUN_1492de224 body=152 status=ok
// SIG undefined FUN_1492de224(void)

undefined8 FUN_1492de224(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = L"AnimationRole";
  local_28 = 0xd;
  FUN_1446e940c(local_34,&local_30);
  local_30 = L"LiveLinkRole";
  local_28 = 0xc;
  FUN_1446e940c(local_38,&local_30);
  FUN_140208bae(param_2,local_38,local_34,L"Animation");
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492de2be FUN_1492de2be body=52 status=ok
// SIG undefined FUN_1492de2be(void)

bool FUN_1492de2be(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  bool bVar4;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = FUN_1492dc406(param_2);
  lVar3 = FUN_1492e50ce(uVar2,uVar1);
  if (lVar3 == 0) {
    bVar4 = false;
  }
  else {
    bVar4 = *(int *)(lVar3 + 0x28) == *(int *)(lVar3 + 0x18);
  }
  return bVar4;
}



// FUNCTION 1492de2f6 FUN_1492de2f6 body=155 status=ok
// SIG undefined FUN_1492de2f6(void)

bool FUN_1492de2f6(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_2 + 0x10);
  FUN_1492dc406(param_2);
  lVar4 = *(longlong *)(param_3 + 0x10);
  FUN_1492dc4d4(param_3);
  if ((lVar4 != 0 && lVar3 != 0) && (*(int *)(lVar3 + 8) == *(int *)(lVar4 + 0x78))) {
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    uVar2 = FUN_1492dc406(param_2);
    lVar3 = FUN_1492e50ce(uVar2,uVar1);
    uVar1 = *(undefined8 *)(param_3 + 0x10);
    uVar2 = FUN_1492dc4d4(param_3);
    lVar4 = FUN_1492e513e(uVar2,uVar1);
    if (lVar4 != 0 && lVar3 != 0) {
      return *(int *)(lVar3 + 0x18) == *(int *)(lVar4 + 0xa8);
    }
  }
  return false;
}



// FUNCTION 1492de392 FUN_1492de392 body=71 status=ok
// SIG undefined FUN_1492de392(void)

undefined4 FUN_1492de392(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  lVar2 = *(longlong *)(param_2 + 0x10);
  FUN_1492dc406(param_2);
  lVar3 = *(longlong *)(param_3 + 0x10);
  FUN_1492dc4d4(param_3);
  if (lVar3 == 0 || lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    iVar1 = *(int *)(lVar2 + 8);
    uVar4 = CONCAT31((int3)((uint)iVar1 >> 8),iVar1 == *(int *)(lVar3 + 0x78));
  }
  return uVar4;
}



// FUNCTION 1492de3de FUN_1492de3de body=55 status=ok
// SIG undefined FUN_1492de3de(void)

void FUN_1492de3de(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0b6d8 == 0) {
    uVar1 = FUN_140e1278a();
    DAT_14cc0b6d8 = FUN_140002ddd(FUN_14671952a,uVar1,L"LiveLinkBaseStaticData");
  }
  return;
}



// FUNCTION 1492de416 FUN_1492de416 body=55 status=ok
// SIG undefined FUN_1492de416(void)

void FUN_1492de416(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0b6c0 == 0) {
    uVar1 = FUN_140e1278a();
    DAT_14cc0b6c0 = FUN_140002ddd(FUN_1467195ee,uVar1,L"LiveLinkBaseFrameData");
  }
  return;
}



// FUNCTION 1492de44e FUN_1492de44e body=55 status=ok
// SIG undefined FUN_1492de44e(void)

void FUN_1492de44e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0b260 == 0) {
    uVar1 = FUN_140e1278a();
    DAT_14cc0b260 = FUN_140002ddd(FUN_146719683,uVar1,L"LiveLinkBasicBlueprintData");
  }
  return;
}



// FUNCTION 1492de486 FUN_1492de486 body=187 status=ok
// SIG undefined FUN_1492de486(void)

ulonglong FUN_1492de486(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 unaff_RBP;
  
  uVar5 = *(undefined8 *)(param_3 + 0x10);
  uVar3 = FUN_1492e508c(param_3);
  lVar4 = FUN_1492e51da(uVar3,uVar5);
  lVar1 = *(longlong *)(param_2 + 0x10);
  FUN_1492dc406(param_2);
  lVar2 = *(longlong *)(param_2 + 0x38);
  FUN_1492dc4d4(param_2 + 0x28);
  if ((lVar2 != 0 && lVar1 != 0) && lVar4 != 0) {
    uVar5 = (**(code **)(*param_1 + 0x2a0))(param_1);
    FUN_1449b16b6(uVar5,lVar4 + 8,lVar1,1);
    uVar5 = (**(code **)(*param_1 + 0x2a8))(param_1);
    FUN_1449b16b6(uVar5,lVar4 + 0x18,lVar2,1);
  }
  return CONCAT71((int7)((ulonglong)unaff_RBP >> 8),(lVar2 != 0 && lVar1 != 0) && lVar4 != 0) &
         0xffffffff;
}



// FUNCTION 1492de542 FUN_1492de542 body=152 status=ok
// SIG undefined FUN_1492de542(void)

undefined8 FUN_1492de542(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = L"BasicRole";
  local_28 = 9;
  FUN_1446e940c(local_34,&local_30);
  local_30 = L"LiveLinkRole";
  local_28 = 0xc;
  FUN_1446e940c(local_38,&local_30);
  FUN_140208bae(param_2,local_38,local_34,L"Basic");
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492de5e4 FUN_1492de5e4 body=55 status=ok
// SIG undefined FUN_1492de5e4(void)

void FUN_1492de5e4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0b290 == 0) {
    uVar1 = FUN_140e1278a();
    DAT_14cc0b290 = FUN_140002ddd(FUN_146719777,uVar1,L"LiveLinkCameraStaticData");
  }
  return;
}



// FUNCTION 1492de61c FUN_1492de61c body=55 status=ok
// SIG undefined FUN_1492de61c(void)

void FUN_1492de61c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0b2a8 == 0) {
    uVar1 = FUN_140e1278a();
    DAT_14cc0b2a8 = FUN_140002ddd(FUN_14671983b,uVar1,L"LiveLinkCameraFrameData");
  }
  return;
}



// FUNCTION 1492de654 FUN_1492de654 body=55 status=ok
// SIG undefined FUN_1492de654(void)

void FUN_1492de654(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0b2c0 == 0) {
    uVar1 = FUN_140e1278a();
    DAT_14cc0b2c0 = FUN_140002ddd(FUN_1467198ff,uVar1,L"LiveLinkCameraBlueprintData");
  }
  return;
}



// FUNCTION 1492de68c FUN_1492de68c body=214 status=ok
// SIG undefined FUN_1492de68c(void)

ulonglong FUN_1492de68c(longlong *param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 unaff_RBP;
  
  uVar5 = *(undefined8 *)(param_3 + 0x10);
  uVar1 = FUN_1492e508c(param_3);
  lVar2 = FUN_1492e524a(uVar1,uVar5);
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = FUN_1492dc406(param_2);
  lVar3 = FUN_1492e52ba(uVar1,uVar5);
  uVar5 = *(undefined8 *)(param_2 + 0x38);
  uVar1 = FUN_1492dc4d4(param_2 + 0x28);
  lVar4 = FUN_1492e532a(uVar1,uVar5);
  if (lVar4 != 0 && (lVar3 != 0 && lVar2 != 0)) {
    uVar5 = (**(code **)(*param_1 + 0x2a0))(param_1);
    FUN_1449b16b6(uVar5,lVar2 + 8,lVar3,1);
    uVar5 = (**(code **)(*param_1 + 0x2a8))(param_1);
    FUN_1449b16b6(uVar5,lVar2 + 0x30,lVar4,1);
  }
  return CONCAT71((int7)((ulonglong)unaff_RBP >> 8),lVar4 != 0 && (lVar3 != 0 && lVar2 != 0)) &
         0xffffffff;
}



// FUNCTION 1492de762 FUN_1492de762 body=152 status=ok
// SIG undefined FUN_1492de762(void)

undefined8 FUN_1492de762(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = L"CameraRole";
  local_28 = 10;
  FUN_1446e940c(local_34,&local_30);
  local_30 = L"LiveLinkRole";
  local_28 = 0xc;
  FUN_1446e940c(local_38,&local_30);
  FUN_140208bae(param_2,local_38,local_34,L"Camera");
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492de7fc FUN_1492de7fc body=55 status=ok
// SIG undefined FUN_1492de7fc(void)

void FUN_1492de7fc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0b338 == 0) {
    uVar1 = FUN_140e1278a();
    DAT_14cc0b338 = FUN_140002ddd(FUN_146719b13,uVar1,L"LiveLinkGamepadInputDeviceStaticData");
  }
  return;
}



// FUNCTION 1492de834 FUN_1492de834 body=55 status=ok
// SIG undefined FUN_1492de834(void)

void FUN_1492de834(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0b350 == 0) {
    uVar1 = FUN_140e1278a();
    DAT_14cc0b350 = FUN_140002ddd(FUN_146719ba5,uVar1,L"LiveLinkGamepadInputDeviceFrameData");
  }
  return;
}



// FUNCTION 1492de86c FUN_1492de86c body=55 status=ok
// SIG undefined FUN_1492de86c(void)

void FUN_1492de86c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0b368 == 0) {
    uVar1 = FUN_140e1278a();
    DAT_14cc0b368 = FUN_140002ddd(FUN_146719c37,uVar1,L"LiveLinkGamepadInputDeviceBlueprintData");
  }
  return;
}



// FUNCTION 1492de8a4 FUN_1492de8a4 body=214 status=ok
// SIG undefined FUN_1492de8a4(void)

ulonglong FUN_1492de8a4(longlong *param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 unaff_RBP;
  
  uVar5 = *(undefined8 *)(param_3 + 0x10);
  uVar1 = FUN_1492e508c(param_3);
  lVar2 = FUN_1492e539a(uVar1,uVar5);
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = FUN_1492dc406(param_2);
  lVar3 = FUN_1492e540a(uVar1,uVar5);
  uVar5 = *(undefined8 *)(param_2 + 0x38);
  uVar1 = FUN_1492dc4d4(param_2 + 0x28);
  lVar4 = FUN_1492e547a(uVar1,uVar5);
  if (lVar4 != 0 && (lVar3 != 0 && lVar2 != 0)) {
    uVar5 = (**(code **)(*param_1 + 0x2a0))(param_1);
    FUN_1449b16b6(uVar5,lVar2 + 8,lVar3,1);
    uVar5 = (**(code **)(*param_1 + 0x2a8))(param_1);
    FUN_1449b16b6(uVar5,lVar2 + 0x18,lVar4,1);
  }
  return CONCAT71((int7)((ulonglong)unaff_RBP >> 8),lVar4 != 0 && (lVar3 != 0 && lVar2 != 0)) &
         0xffffffff;
}



// FUNCTION 1492de97a FUN_1492de97a body=152 status=ok
// SIG undefined FUN_1492de97a(void)

undefined8 FUN_1492de97a(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = L"LiveLinkInputDevice";
  local_28 = 0x13;
  FUN_1446e940c(local_34,&local_30);
  local_30 = L"LiveLinkInputDeviceRole";
  local_28 = 0x17;
  FUN_1446e940c(local_38,&local_30);
  FUN_140208bae(param_2,local_38,local_34,L"Live Link Input Device");
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492dea18 FUN_1492dea18 body=55 status=ok
// SIG undefined FUN_1492dea18(void)

void FUN_1492dea18(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0b398 == 0) {
    uVar1 = FUN_140e1278a();
    DAT_14cc0b398 = FUN_140002ddd(FUN_146719cc9,uVar1,L"LiveLinkLightStaticData");
  }
  return;
}



// FUNCTION 1492dea50 FUN_1492dea50 body=55 status=ok
// SIG undefined FUN_1492dea50(void)

void FUN_1492dea50(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0b3b0 == 0) {
    uVar1 = FUN_140e1278a();
    DAT_14cc0b3b0 = FUN_140002ddd(FUN_146719d5b,uVar1,L"LiveLinkLightFrameData");
  }
  return;
}



// FUNCTION 1492dea88 FUN_1492dea88 body=55 status=ok
// SIG undefined FUN_1492dea88(void)

void FUN_1492dea88(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0b3c8 == 0) {
    uVar1 = FUN_140e1278a();
    DAT_14cc0b3c8 = FUN_140002ddd(FUN_146719ded,uVar1,L"LiveLinkLightBlueprintData");
  }
  return;
}



// FUNCTION 1492deac0 FUN_1492deac0 body=214 status=ok
// SIG undefined FUN_1492deac0(void)

ulonglong FUN_1492deac0(longlong *param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 unaff_RBP;
  
  uVar5 = *(undefined8 *)(param_3 + 0x10);
  uVar1 = FUN_1492e508c(param_3);
  lVar2 = FUN_1492e54ea(uVar1,uVar5);
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = FUN_1492dc406(param_2);
  lVar3 = FUN_1492e555a(uVar1,uVar5);
  uVar5 = *(undefined8 *)(param_2 + 0x38);
  uVar1 = FUN_1492dc4d4(param_2 + 0x28);
  lVar4 = FUN_1492e55ca(uVar1,uVar5);
  if (lVar4 != 0 && (lVar3 != 0 && lVar2 != 0)) {
    uVar5 = (**(code **)(*param_1 + 0x2a0))(param_1);
    FUN_1449b16b6(uVar5,lVar2 + 8,lVar3,1);
    uVar5 = (**(code **)(*param_1 + 0x2a8))(param_1);
    FUN_1449b16b6(uVar5,lVar2 + 0x30,lVar4,1);
  }
  return CONCAT71((int7)((ulonglong)unaff_RBP >> 8),lVar4 != 0 && (lVar3 != 0 && lVar2 != 0)) &
         0xffffffff;
}



// FUNCTION 1492deb96 FUN_1492deb96 body=152 status=ok
// SIG undefined FUN_1492deb96(void)

undefined8 FUN_1492deb96(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = L"LightRole";
  local_28 = 9;
  FUN_1446e940c(local_34,&local_30);
  local_30 = L"LiveLinkRole";
  local_28 = 0xc;
  FUN_1446e940c(local_38,&local_30);
  FUN_140208bae(param_2,local_38,local_34,L"Light");
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492dec34 FUN_1492dec34 body=55 status=ok
// SIG undefined FUN_1492dec34(void)

void FUN_1492dec34(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0b470 == 0) {
    uVar1 = FUN_140e1278a();
    DAT_14cc0b470 = FUN_140002ddd(FUN_1467197a6,uVar1,L"LiveLinkTransformStaticData");
  }
  return;
}



// FUNCTION 1492dec6c FUN_1492dec6c body=55 status=ok
// SIG undefined FUN_1492dec6c(void)

void FUN_1492dec6c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0b488 == 0) {
    uVar1 = FUN_140e1278a();
    DAT_14cc0b488 = FUN_140002ddd(FUN_14671986a,uVar1,L"LiveLinkTransformFrameData");
  }
  return;
}



// FUNCTION 1492deca4 FUN_1492deca4 body=55 status=ok
// SIG undefined FUN_1492deca4(void)

void FUN_1492deca4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0b4a0 == 0) {
    uVar1 = FUN_140e1278a();
    DAT_14cc0b4a0 = FUN_140002ddd(FUN_14671a279,uVar1,L"LiveLinkTransformBlueprintData");
  }
  return;
}



// FUNCTION 1492decdc FUN_1492decdc body=214 status=ok
// SIG undefined FUN_1492decdc(void)

ulonglong FUN_1492decdc(longlong *param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 unaff_RBP;
  
  uVar5 = *(undefined8 *)(param_3 + 0x10);
  uVar1 = FUN_1492e508c(param_3);
  lVar2 = FUN_1492e563a(uVar1,uVar5);
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = FUN_1492dc406(param_2);
  lVar3 = FUN_1492e56aa(uVar1,uVar5);
  uVar5 = *(undefined8 *)(param_2 + 0x38);
  uVar1 = FUN_1492dc4d4(param_2 + 0x28);
  lVar4 = FUN_1492e571a(uVar1,uVar5);
  if (lVar4 != 0 && (lVar3 != 0 && lVar2 != 0)) {
    uVar5 = (**(code **)(*param_1 + 0x2a0))(param_1);
    FUN_1449b16b6(uVar5,lVar2 + 8,lVar3,1);
    uVar5 = (**(code **)(*param_1 + 0x2a8))(param_1);
    FUN_1449b16b6(uVar5,lVar2 + 0x20,lVar4,1);
  }
  return CONCAT71((int7)((ulonglong)unaff_RBP >> 8),lVar4 != 0 && (lVar3 != 0 && lVar2 != 0)) &
         0xffffffff;
}



// FUNCTION 1492dedb2 FUN_1492dedb2 body=152 status=ok
// SIG undefined FUN_1492dedb2(void)

undefined8 FUN_1492dedb2(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = L"TransformRole";
  local_28 = 0xd;
  FUN_1446e940c(local_34,&local_30);
  local_30 = L"LiveLinkRole";
  local_28 = 0xc;
  FUN_1446e940c(local_38,&local_30);
  FUN_140208bae(param_2,local_38,local_34,L"Transform");
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492dee4c FUN_1492dee4c body=55 status=ok
// SIG undefined FUN_1492dee4c(void)

undefined8 * FUN_1492dee4c(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559(".\\Runtime/LiveLinkInterface/Public/LiveLinkController.h",0x1a,
                L"Pure virtual not implemented (%s)",L"ULiveLinkController::GetRole");
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1492dee88 FUN_1492dee88 body=55 status=ok
// SIG undefined FUN_1492dee88(void)

undefined8 * FUN_1492dee88(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559(".\\Runtime/LiveLinkInterface/Public/LiveLinkFrameInterpolationProcessor.h",0x44,
                L"Pure virtual not implemented (%s)",
                L"ULiveLinkFrameInterpolationProcessor::GetFromRole");
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1492deec0 FUN_1492deec0 body=54 status=ok
// SIG undefined FUN_1492deec0(void)

undefined8 * FUN_1492deec0(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559(".\\Runtime/LiveLinkInterface/Public/LiveLinkFrameInterpolationProcessor.h",0x45,
                L"Pure virtual not implemented (%s)",
                L"ULiveLinkFrameInterpolationProcessor::FetchWorker");
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1492deef6 FUN_1492deef6 body=55 status=ok
// SIG undefined FUN_1492deef6(void)

undefined8 * FUN_1492deef6(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559(".\\Runtime/LiveLinkInterface/Public/LiveLinkFramePreProcessor.h",0x2a,
                L"Pure virtual not implemented (%s)",L"ULiveLinkFramePreProcessor::GetFromRole");
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1492def2e FUN_1492def2e body=54 status=ok
// SIG undefined FUN_1492def2e(void)

undefined8 * FUN_1492def2e(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559(".\\Runtime/LiveLinkInterface/Public/LiveLinkFramePreProcessor.h",0x2b,
                L"Pure virtual not implemented (%s)",L"ULiveLinkFramePreProcessor::FetchWorker");
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1492def64 FUN_1492def64 body=42 status=ok
// SIG undefined FUN_1492def64(void)

undefined8 FUN_1492def64(void)

{
  FUN_140033559(".\\Runtime/LiveLinkInterface/Public\\LiveLinkRole.h",0x16,
                L"Pure virtual not implemented (%s)",L"ULiveLinkRole::GetStaticDataStruct");
  return 0;
}



// FUNCTION 1492def8e FUN_1492def8e body=42 status=ok
// SIG undefined FUN_1492def8e(void)

undefined8 FUN_1492def8e(void)

{
  FUN_140033559(".\\Runtime/LiveLinkInterface/Public\\LiveLinkRole.h",0x17,
                L"Pure virtual not implemented (%s)",L"ULiveLinkRole::GetFrameDataStruct");
  return 0;
}



// FUNCTION 1492defb8 FUN_1492defb8 body=42 status=ok
// SIG undefined FUN_1492defb8(void)

undefined8 FUN_1492defb8(void)

{
  FUN_140033559(".\\Runtime/LiveLinkInterface/Public\\LiveLinkRole.h",0x18,
                L"Pure virtual not implemented (%s)",L"ULiveLinkRole::GetBlueprintDataStruct");
  return 0;
}



// FUNCTION 1492defe2 FUN_1492defe2 body=42 status=ok
// SIG undefined FUN_1492defe2(void)

undefined8 FUN_1492defe2(void)

{
  FUN_140033559(".\\Runtime/LiveLinkInterface/Public\\LiveLinkRole.h",0x1a,
                L"Pure virtual not implemented (%s)",L"ULiveLinkRole::InitializeBlueprintData");
  return 0;
}



// FUNCTION 1492df00c FUN_1492df00c body=54 status=ok
// SIG undefined FUN_1492df00c(void)

undefined8 * FUN_1492df00c(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559(".\\Runtime/LiveLinkInterface/Public/LiveLinkSubjectRemapper.h",0x29,
                L"Pure virtual not implemented (%s)",L"ULiveLinkSubjectRemapper::CreateWorker");
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1492df042 FUN_1492df042 body=54 status=ok
// SIG undefined FUN_1492df042(void)

undefined8 * FUN_1492df042(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559(".\\Runtime/LiveLinkInterface/Public/LiveLinkSubjectRemapper.h",0x2f,
                L"Pure virtual not implemented (%s)",L"ULiveLinkSubjectRemapper::GetWorker");
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1492df07a FUN_1492df07a body=55 status=ok
// SIG undefined FUN_1492df07a(void)

undefined8 * FUN_1492df07a(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559(".\\Runtime/LiveLinkInterface/Public/LiveLinkSubjectRemapper.h",0x37,
                L"Pure virtual not implemented (%s)",L"ULiveLinkSubjectRemapper::GetSupportedRole");
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1492df0b2 FUN_1492df0b2 body=42 status=ok
// SIG undefined FUN_1492df0b2(void)

undefined8 FUN_1492df0b2(void)

{
  FUN_140033559(".\\Runtime/LiveLinkInterface/Public/LiveLinkSubjectRemapper.h",0x3a,
                L"Pure virtual not implemented (%s)",L"ULiveLinkSubjectRemapper::IsValid");
  return 0;
}



// FUNCTION 1492df0dc FUN_1492df0dc body=55 status=ok
// SIG undefined FUN_1492df0dc(void)

undefined8 * FUN_1492df0dc(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("Runtime\\LiveLinkInterface\\Public\\LiveLinkFrameTranslator.h",0x31,
                L"Pure virtual not implemented (%s)",L"ULiveLinkFrameTranslator::GetFromRole");
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1492df114 FUN_1492df114 body=55 status=ok
// SIG undefined FUN_1492df114(void)

undefined8 * FUN_1492df114(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("Runtime\\LiveLinkInterface\\Public\\LiveLinkFrameTranslator.h",0x32,
                L"Pure virtual not implemented (%s)",L"ULiveLinkFrameTranslator::GetToRole");
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1492df14c FUN_1492df14c body=54 status=ok
// SIG undefined FUN_1492df14c(void)

undefined8 * FUN_1492df14c(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("Runtime\\LiveLinkInterface\\Public\\LiveLinkFrameTranslator.h",0x33,
                L"Pure virtual not implemented (%s)",L"ULiveLinkFrameTranslator::FetchWorker");
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1492df182 FUN_1492df182 body=56 status=ok
// SIG undefined FUN_1492df182(void)

undefined8 FUN_1492df182(undefined8 param_1,undefined8 param_2)

{
  FUN_140033559(".\\Runtime/LiveLinkInterface/Public\\LiveLinkSourceFactory.h",0x20,
                L"Pure virtual not implemented (%s)",L"ULiveLinkSourceFactory::GetSourceDisplayName"
               );
  FUN_144a5dc74(param_2);
  return param_2;
}



// FUNCTION 1492df1ba FUN_1492df1ba body=56 status=ok
// SIG undefined FUN_1492df1ba(void)

undefined8 FUN_1492df1ba(undefined8 param_1,undefined8 param_2)

{
  FUN_140033559(".\\Runtime/LiveLinkInterface/Public\\LiveLinkSourceFactory.h",0x23,
                L"Pure virtual not implemented (%s)",L"ULiveLinkSourceFactory::GetSourceTooltip");
  FUN_144a5dc74(param_2);
  return param_2;
}



// FUNCTION 1492df1f8 FUN_1492df1f8 body=54 status=ok
// SIG undefined FUN_1492df1f8(void)

undefined8 * FUN_1492df1f8(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559(".\\Runtime/LiveLinkInterface/Public\\LiveLinkSourceFactory.h",0x42,
                L"Pure virtual not implemented (%s)",L"ULiveLinkSourceFactory::CreateSource");
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1492df254 FUN_1492df254 body=32 status=ok
// SIG undefined FUN_1492df254(void)

undefined8 FUN_1492df254(longlong param_1,undefined8 param_2)

{
  FUN_145715fae(param_2,param_1 + 0x84);
  return param_2;
}



// FUNCTION 1492df274 FUN_1492df274 body=32 status=ok
// SIG undefined FUN_1492df274(void)

undefined8 FUN_1492df274(longlong param_1,undefined8 param_2)

{
  FUN_145715fae(param_2,param_1 + 200);
  return param_2;
}



// FUNCTION 1492df2a2 FUN_1492df2a2 body=45 status=ok
// SIG undefined FUN_1492df2a2(void)

longlong FUN_1492df2a2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145a4964c(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492df2ea FUN_1492df2ea body=45 status=ok
// SIG undefined FUN_1492df2ea(void)

longlong * FUN_1492df2ea(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  *param_2 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  return param_2;
}



// FUNCTION 1492df328 FUN_1492df328 body=84 status=ok
// SIG undefined FUN_1492df328(void)

undefined8 * FUN_1492df328(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0xe0);
  uVar2 = *(undefined8 *)(param_1 + 0xd8);
  *(int *)(param_2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1492e578a(param_2,iVar1,0);
    FUN_1492e57ec(*param_2,uVar2,iVar1);
  }
  return param_2;
}



// FUNCTION 1492df3be FUN_1492df3be body=43 status=ok
// SIG undefined FUN_1492df3be(void)

undefined8 FUN_1492df3be(undefined8 param_1,int param_2)

{
  FUN_1492e4382();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x160);
  }
  return param_1;
}



// FUNCTION 1492df3ea FUN_1492df3ea body=88 status=ok
// SIG undefined FUN_1492df3ea(void)

undefined8 * FUN_1492df3ea(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bc17778;
  plVar3 = (longlong *)param_1[2];
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
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1492df48a FUN_1492df48a body=54 status=ok
// SIG undefined FUN_1492df48a(void)

undefined1 FUN_1492df48a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1492df61e(param_2,param_3);
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return 1;
}



// FUNCTION 1492df4e8 FUN_1492df4e8 body=59 status=ok
// SIG undefined FUN_1492df4e8(void)

undefined8 FUN_1492df4e8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492df52e FUN_1492df52e body=74 status=ok
// SIG undefined FUN_1492df52e(void)

void FUN_1492df52e(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 3) == '\x01') {
    *param_2 = &PTR_FUN_14bc18ce0;
    plVar3 = (longlong *)param_2[2];
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
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 1492df5c6 FUN_1492df5c6 body=88 status=ok
// SIG undefined FUN_1492df5c6(void)

undefined8 * FUN_1492df5c6(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bc18ce0;
  plVar3 = (longlong *)param_1[2];
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
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1492df61e FUN_1492df61e body=82 status=ok
// SIG undefined FUN_1492df61e(void)

longlong FUN_1492df61e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *(undefined8 *)(param_2 + 8);
  lVar4 = *(longlong *)(param_2 + 0x10);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(longlong *)(param_1 + 0x10) = lVar4;
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



// FUNCTION 1492df6b0 FUN_1492df6b0 body=80 status=ok
// SIG undefined FUN_1492df6b0(void)

undefined1 FUN_1492df6b0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1406fa324(param_2,param_3);
    FUN_1406fa324(param_2 + 0x10,param_3 + 0x10);
    FUN_14054c6c4(param_2 + 0x20,param_3 + 0x20);
    param_2 = param_2 + 0x30;
    param_3 = param_3 + 0x30;
  }
  return 1;
}



// FUNCTION 1492df728 FUN_1492df728 body=59 status=ok
// SIG undefined FUN_1492df728(void)

undefined8 FUN_1492df728(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492df76e FUN_1492df76e body=34 status=ok
// SIG undefined FUN_1492df76e(void)

void FUN_1492df76e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_1492df7de(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 1492df7de FUN_1492df7de body=61 status=ok
// SIG undefined FUN_1492df7de(void)

void FUN_1492df7de(longlong *param_1)

{
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



// FUNCTION 1492df81c FUN_1492df81c body=48 status=ok
// SIG undefined FUN_1492df81c(void)

void FUN_1492df81c(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xb0);
  FUN_1492dfcaa(param_2);
  *(undefined8 *)((longlong)param_2 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa8) = 0;
  return;
}



// FUNCTION 1492df84c FUN_1492df84c body=32 status=ok
// SIG undefined FUN_1492df84c(void)

void FUN_1492df84c(undefined8 param_1,longlong param_2)

{
  FUN_1492dfcaa(param_2);
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  return;
}



// FUNCTION 1492df86c FUN_1492df86c body=38 status=ok
// SIG undefined FUN_1492df86c(void)

void FUN_1492df86c(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  FUN_1492e11ae(param_2);
  return;
}



// FUNCTION 1492df8a8 FUN_1492df8a8 body=195 status=ok
// SIG undefined FUN_1492df8a8(void)

undefined8 FUN_1492df8a8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  longlong lVar11;
  
  if (param_4 != 0) {
    lVar11 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar11);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      lVar3 = param_2 + 0x10 + lVar11;
      *(undefined4 *)(lVar3 + -0x10) = *puVar1;
      *(undefined4 *)(lVar3 + -0xc) = uVar4;
      *(undefined4 *)(lVar3 + -8) = uVar5;
      *(undefined4 *)(lVar3 + -4) = uVar6;
      FUN_140bb2e20(lVar3,puVar1 + 4);
      uVar4 = puVar1[0x19];
      uVar5 = puVar1[0x1a];
      uVar6 = puVar1[0x1b];
      *(undefined4 *)(lVar3 + 0x50) = puVar1[0x18];
      *(undefined4 *)(lVar3 + 0x54) = uVar4;
      *(undefined4 *)(lVar3 + 0x58) = uVar5;
      *(undefined4 *)(lVar3 + 0x5c) = uVar6;
      lVar3 = param_2 + lVar11;
      lVar2 = param_3 + lVar11;
      FUN_144a67f5c(lVar3 + 0x70,lVar2 + 0x70);
      uVar4 = *(undefined4 *)(lVar2 + 0x84);
      uVar5 = *(undefined4 *)(lVar2 + 0x88);
      uVar6 = *(undefined4 *)(lVar2 + 0x8c);
      uVar7 = *(undefined4 *)(lVar2 + 0x8c);
      uVar8 = *(undefined4 *)(lVar2 + 0x90);
      uVar9 = *(undefined4 *)(lVar2 + 0x94);
      uVar10 = *(undefined4 *)(lVar2 + 0x98);
      *(undefined4 *)(lVar3 + 0x80) = *(undefined4 *)(lVar2 + 0x80);
      *(undefined4 *)(lVar3 + 0x84) = uVar4;
      *(undefined4 *)(lVar3 + 0x88) = uVar5;
      *(undefined4 *)(lVar3 + 0x8c) = uVar6;
      *(undefined4 *)(lVar3 + 0x8c) = uVar7;
      *(undefined4 *)(lVar3 + 0x90) = uVar8;
      *(undefined4 *)(lVar3 + 0x94) = uVar9;
      *(undefined4 *)(lVar3 + 0x98) = uVar10;
      FUN_144756208(param_2 + lVar11 + 0xa0,param_3 + lVar11 + 0xa0);
      lVar11 = lVar11 + 0xb0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492df994 FUN_1492df994 body=59 status=ok
// SIG undefined FUN_1492df994(void)

undefined8 FUN_1492df994(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492df9e0 FUN_1492df9e0 body=57 status=ok
// SIG undefined FUN_1492df9e0(void)

void FUN_1492df9e0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    if (*(longlong *)(param_2 + 0xa0) != 0) {
      FUN_1400020a8();
    }
    FUN_1492e11ae(param_2);
    *(undefined1 *)(param_2 + 0xb0) = 0;
  }
  return;
}



// FUNCTION 1492dfa6a FUN_1492dfa6a body=60 status=ok
// SIG undefined FUN_1492dfa6a(void)

void FUN_1492dfa6a(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 3,0,0xa0);
  *param_2 = &PTR_FUN_14bc19110;
  param_2[1] = 0;
  param_2[2] = 0;
  FUN_1492dfcaa(param_2 + 3);
  return;
}



// FUNCTION 1492dfae4 FUN_1492dfae4 body=194 status=ok
// SIG undefined FUN_1492dfae4(void)

undefined8 FUN_1492dfae4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
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
      lVar1 = param_2 + lVar10;
      lVar2 = param_3 + lVar10;
      FUN_1406fa324(lVar1 + 8,lVar2 + 8);
      uVar3 = *(undefined4 *)(lVar2 + 0x1c);
      uVar4 = *(undefined4 *)(lVar2 + 0x20);
      uVar5 = *(undefined4 *)(lVar2 + 0x24);
      *(undefined4 *)(lVar1 + 0x18) = *(undefined4 *)(lVar2 + 0x18);
      *(undefined4 *)(lVar1 + 0x1c) = uVar3;
      *(undefined4 *)(lVar1 + 0x20) = uVar4;
      *(undefined4 *)(lVar1 + 0x24) = uVar5;
      lVar1 = param_2 + lVar10;
      lVar2 = param_3 + lVar10;
      FUN_140bb2e20(lVar1 + 0x28,lVar2 + 0x28);
      uVar3 = *(undefined4 *)(lVar2 + 0x7c);
      uVar4 = *(undefined4 *)(lVar2 + 0x80);
      uVar5 = *(undefined4 *)(lVar2 + 0x84);
      *(undefined4 *)(lVar1 + 0x78) = *(undefined4 *)(lVar2 + 0x78);
      *(undefined4 *)(lVar1 + 0x7c) = uVar3;
      *(undefined4 *)(lVar1 + 0x80) = uVar4;
      *(undefined4 *)(lVar1 + 0x84) = uVar5;
      FUN_144a67f5c(param_2 + lVar10 + 0x88,param_3 + lVar10 + 0x88);
      uVar3 = *(undefined4 *)(lVar2 + 0x9c);
      uVar4 = *(undefined4 *)(lVar2 + 0xa0);
      uVar5 = *(undefined4 *)(lVar2 + 0xa4);
      uVar6 = *(undefined4 *)(lVar2 + 0xa4);
      uVar7 = *(undefined4 *)(lVar2 + 0xa8);
      uVar8 = *(undefined4 *)(lVar2 + 0xac);
      uVar9 = *(undefined4 *)(lVar2 + 0xb0);
      *(undefined4 *)(lVar1 + 0x98) = *(undefined4 *)(lVar2 + 0x98);
      *(undefined4 *)(lVar1 + 0x9c) = uVar3;
      *(undefined4 *)(lVar1 + 0xa0) = uVar4;
      *(undefined4 *)(lVar1 + 0xa4) = uVar5;
      *(undefined4 *)(lVar1 + 0xa4) = uVar6;
      *(undefined4 *)(lVar1 + 0xa8) = uVar7;
      *(undefined4 *)(lVar1 + 0xac) = uVar8;
      *(undefined4 *)(lVar1 + 0xb0) = uVar9;
      lVar10 = lVar10 + 0xb8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492dfbce FUN_1492dfbce body=59 status=ok
// SIG undefined FUN_1492dfbce(void)

undefined8 FUN_1492dfbce(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492dfc1a FUN_1492dfc1a body=65 status=ok
// SIG undefined FUN_1492dfc1a(void)

void FUN_1492dfc1a(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x17) == '\x01') {
    *param_2 = &PTR_FUN_14bc19110;
    FUN_1492e11ae(param_2 + 3);
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x17) = 0;
  }
  return;
}



// FUNCTION 1492dfcaa FUN_1492dfcaa body=193 status=ok
// SIG undefined FUN_1492dfcaa(void)

double * FUN_1492dfcaa(double *param_1)

{
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_1[1] = 0.0;
  QueryPerformanceCounter(&local_28);
  *param_1 = (double)local_28.QuadPart * DAT_14c83f420 + 16777216.0;
  param_1[6] = 0.0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0.0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x18;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 1;
  param_1[0xe] = 0.0;
  param_1[0xf] = 0.0;
  param_1[0x10] = 0.0;
  param_1[0x11] = 0.0;
  param_1[0x12] = (double)&DAT_100000018;
  *(undefined4 *)(param_1 + 0x13) = 0xffffffff;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492dfd6c FUN_1492dfd6c body=71 status=ok
// SIG undefined FUN_1492dfd6c(void)

undefined8 * FUN_1492dfd6c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bc19110;
  FUN_1492e11ae(param_1 + 3);
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 1492dfdb4 FUN_1492dfdb4 body=34 status=ok
// SIG undefined FUN_1492dfdb4(void)

undefined8 FUN_1492dfdb4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1492dfe54 FUN_1492dfe54 body=84 status=ok
// SIG undefined FUN_1492dfe54(void)

undefined8 FUN_1492dfe54(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1406fa324(param_2,param_3);
    *(undefined2 *)(param_2 + 0x10) = *(undefined2 *)(param_3 + 0x10);
    *(undefined1 *)(param_2 + 0x12) = *(undefined1 *)(param_3 + 0x12);
    uVar1 = *(undefined8 *)(param_3 + 0x1f);
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_3 + 0x18);
    *(undefined8 *)(param_2 + 0x1f) = uVar1;
    param_2 = param_2 + 0x28;
    param_3 = param_3 + 0x28;
  }
  return 1;
}



// FUNCTION 1492dfed0 FUN_1492dfed0 body=59 status=ok
// SIG undefined FUN_1492dfed0(void)

undefined8 FUN_1492dfed0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492dff16 FUN_1492dff16 body=37 status=ok
// SIG undefined FUN_1492dff16(void)

void FUN_1492dff16(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[5] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 5) = 0;
  }
  return;
}



// FUNCTION 1492dff8c FUN_1492dff8c body=139 status=ok
// SIG undefined FUN_1492dff8c(void)

void FUN_1492dff8c(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x120);
  FUN_1492dfcaa(param_2);
  *(undefined8 *)((longlong)param_2 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa8) = 0;
  *(undefined4 *)((longlong)param_2 + 0xb0) = 0;
  *(undefined4 *)((longlong)param_2 + 0xb4) = 0;
  *(undefined4 *)((longlong)param_2 + 0xb8) = 0;
  *(undefined4 *)((longlong)param_2 + 0xbc) = 0x3ff00000;
  *(undefined8 *)((longlong)param_2 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_2 + 200) = 0;
  *(undefined8 *)((longlong)param_2 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xe0) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_2 + 0xe8) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_2 + 0xf0) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_2 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_2 + 0x100) = 0x3fe38e3b42b40000;
  *(undefined8 *)((longlong)param_2 + 0x108) = 0x4033333342480000;
  *(undefined4 *)((longlong)param_2 + 0x110) = 0x47c35000;
  *(undefined1 *)((longlong)param_2 + 0x114) = 0;
  return;
}



// FUNCTION 1492e0018 FUN_1492e0018 body=123 status=ok
// SIG undefined FUN_1492e0018(void)

void FUN_1492e0018(undefined8 param_1,longlong param_2)

{
  FUN_1492dfcaa(param_2);
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(undefined4 *)(param_2 + 0xb0) = 0;
  *(undefined4 *)(param_2 + 0xb4) = 0;
  *(undefined4 *)(param_2 + 0xb8) = 0;
  *(undefined4 *)(param_2 + 0xbc) = 0x3ff00000;
  *(undefined8 *)(param_2 + 0xc0) = 0;
  *(undefined8 *)(param_2 + 200) = 0;
  *(undefined8 *)(param_2 + 0xd0) = 0;
  *(undefined8 *)(param_2 + 0xd8) = 0;
  *(undefined8 *)(param_2 + 0xe0) = 0x3ff0000000000000;
  *(undefined8 *)(param_2 + 0xe8) = 0x3ff0000000000000;
  *(undefined8 *)(param_2 + 0xf0) = 0x3ff0000000000000;
  *(undefined8 *)(param_2 + 0xf8) = 0;
  *(undefined8 *)(param_2 + 0x100) = 0x3fe38e3b42b40000;
  *(undefined8 *)(param_2 + 0x108) = 0x4033333342480000;
  *(undefined4 *)(param_2 + 0x110) = 0x47c35000;
  *(undefined1 *)(param_2 + 0x114) = 0;
  return;
}



// FUNCTION 1492e00b2 FUN_1492e00b2 body=224 status=ok
// SIG undefined FUN_1492e00b2(void)

undefined8 FUN_1492e00b2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  if (param_4 != 0) {
    lVar9 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar9);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      lVar3 = param_2 + 0x10 + lVar9;
      *(undefined4 *)(lVar3 + -0x10) = *puVar1;
      *(undefined4 *)(lVar3 + -0xc) = uVar4;
      *(undefined4 *)(lVar3 + -8) = uVar5;
      *(undefined4 *)(lVar3 + -4) = uVar6;
      FUN_140bb2e20(lVar3,puVar1 + 4);
      uVar4 = puVar1[0x19];
      uVar5 = puVar1[0x1a];
      uVar6 = puVar1[0x1b];
      *(undefined4 *)(lVar3 + 0x50) = puVar1[0x18];
      *(undefined4 *)(lVar3 + 0x54) = uVar4;
      *(undefined4 *)(lVar3 + 0x58) = uVar5;
      *(undefined4 *)(lVar3 + 0x5c) = uVar6;
      lVar3 = param_2 + lVar9;
      lVar2 = param_3 + lVar9;
      FUN_144a67f5c(lVar3 + 0x70,lVar2 + 0x70);
      uVar7 = *(undefined8 *)(lVar2 + 0x88);
      *(undefined8 *)(lVar3 + 0x80) = *(undefined8 *)(lVar2 + 0x80);
      *(undefined8 *)(lVar3 + 0x88) = uVar7;
      uVar7 = *(undefined8 *)(lVar2 + 0x94);
      *(undefined8 *)(lVar3 + 0x8c) = *(undefined8 *)(lVar2 + 0x8c);
      *(undefined8 *)(lVar3 + 0x94) = uVar7;
      puVar10 = (undefined8 *)(param_3 + lVar9 + 0xa0);
      puVar11 = (undefined8 *)(param_2 + lVar9 + 0xa0);
      for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      }
      *(undefined8 *)(lVar3 + 0x10d) = *(undefined8 *)(lVar2 + 0x10d);
      uVar7 = *(undefined8 *)(lVar2 + 0x108);
      *(undefined8 *)(lVar3 + 0x100) = *(undefined8 *)(lVar2 + 0x100);
      *(undefined8 *)(lVar3 + 0x108) = uVar7;
      lVar9 = lVar9 + 0x120;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492e01ba FUN_1492e01ba body=59 status=ok
// SIG undefined FUN_1492e01ba(void)

undefined8 FUN_1492e01ba(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492e0206 FUN_1492e0206 body=40 status=ok
// SIG undefined FUN_1492e0206(void)

void FUN_1492e0206(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x120) == '\x01') {
    FUN_1492e11ae(param_2);
    *(undefined1 *)(param_2 + 0x120) = 0;
  }
  return;
}



// FUNCTION 1492e027e FUN_1492e027e body=37 status=ok
// SIG undefined FUN_1492e027e(void)

void FUN_1492e027e(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x150);
  FUN_1492e0414(param_2);
  return;
}



// FUNCTION 1492e02d0 FUN_1492e02d0 body=63 status=ok
// SIG undefined FUN_1492e02d0(void)

undefined1 FUN_1492e02d0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1492e0520(param_2,param_3);
    param_3 = param_3 + 0x150;
    param_2 = param_2 + 0x150;
  }
  return 1;
}



// FUNCTION 1492e0338 FUN_1492e0338 body=59 status=ok
// SIG undefined FUN_1492e0338(void)

undefined8 FUN_1492e0338(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492e0384 FUN_1492e0384 body=65 status=ok
// SIG undefined FUN_1492e0384(void)

void FUN_1492e0384(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x2a) == '\x01') {
    *param_2 = &PTR_FUN_14bc195e0;
    FUN_1492e11ae(param_2 + 6);
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x2a) = 0;
  }
  return;
}



// FUNCTION 1492e0414 FUN_1492e0414 body=196 status=ok
// SIG undefined FUN_1492e0414(void)

undefined8 * FUN_1492e0414(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc195e0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0xbf800000bf800000;
  *(undefined2 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2e) = 1;
  FUN_1492dfcaa(param_1 + 6);
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0x3ff00000;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0x3ff0000000000000;
  param_1[0x23] = 0x3ff0000000000000;
  param_1[0x24] = 0x3ff0000000000000;
  param_1[0x25] = 0;
  param_1[0x26] = 0x3fe38e3b42b40000;
  param_1[0x27] = 0x4033333342480000;
  *(undefined4 *)(param_1 + 0x28) = 0x47c35000;
  *(undefined1 *)((longlong)param_1 + 0x144) = 0;
  return param_1;
}



// FUNCTION 1492e04d8 FUN_1492e04d8 body=71 status=ok
// SIG undefined FUN_1492e04d8(void)

undefined8 * FUN_1492e04d8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bc195e0;
  FUN_1492e11ae(param_1 + 6);
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x150);
  }
  return param_1;
}



// FUNCTION 1492e0520 FUN_1492e0520 body=206 status=ok
// SIG undefined FUN_1492e0520(void)

longlong FUN_1492e0520(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  FUN_1406fa324(param_1 + 8,param_2 + 8);
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_2 + 0x1a);
  *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_2 + 0x27);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x27) = uVar1;
  uVar2 = *(undefined4 *)(param_2 + 0x34);
  uVar3 = *(undefined4 *)(param_2 + 0x38);
  uVar4 = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  *(undefined4 *)(param_1 + 0x38) = uVar3;
  *(undefined4 *)(param_1 + 0x3c) = uVar4;
  FUN_140bb2e20(param_1 + 0x40,param_2 + 0x40);
  uVar2 = *(undefined4 *)(param_2 + 0x94);
  uVar3 = *(undefined4 *)(param_2 + 0x98);
  uVar4 = *(undefined4 *)(param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 0x94) = uVar2;
  *(undefined4 *)(param_1 + 0x98) = uVar3;
  *(undefined4 *)(param_1 + 0x9c) = uVar4;
  FUN_144a67f5c(param_1 + 0xa0,param_2 + 0xa0);
  uVar1 = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xb8) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0xc4);
  *(undefined8 *)(param_1 + 0xbc) = *(undefined8 *)(param_2 + 0xbc);
  *(undefined8 *)(param_1 + 0xc4) = uVar1;
  puVar6 = (undefined8 *)(param_2 + 0xd0);
  puVar7 = (undefined8 *)(param_1 + 0xd0);
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  *(undefined8 *)(param_1 + 0x13d) = *(undefined8 *)(param_2 + 0x13d);
  uVar1 = *(undefined8 *)(param_2 + 0x138);
  *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_2 + 0x130);
  *(undefined8 *)(param_1 + 0x138) = uVar1;
  return param_1;
}



// FUNCTION 1492e0624 FUN_1492e0624 body=54 status=ok
// SIG undefined FUN_1492e0624(void)

undefined1 FUN_1492e0624(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1406fa324(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1492e0682 FUN_1492e0682 body=59 status=ok
// SIG undefined FUN_1492e0682(void)

undefined8 FUN_1492e0682(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492e06c8 FUN_1492e06c8 body=37 status=ok
// SIG undefined FUN_1492e06c8(void)

void FUN_1492e06c8(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 1492e073e FUN_1492e073e body=97 status=ok
// SIG undefined FUN_1492e073e(void)

void FUN_1492e073e(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x120);
  FUN_1492dfcaa(param_2);
  *(undefined8 *)((longlong)param_2 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_2 + 200) = 0;
  *(undefined8 *)((longlong)param_2 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_2 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_2 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_2 + 0x100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x108) = 0;
  *(undefined8 *)((longlong)param_2 + 0x110) = 0;
  *(undefined8 *)((longlong)param_2 + 0x118) = 0;
  return;
}



// FUNCTION 1492e07a0 FUN_1492e07a0 body=81 status=ok
// SIG undefined FUN_1492e07a0(void)

void FUN_1492e07a0(undefined8 param_1,longlong param_2)

{
  FUN_1492dfcaa(param_2);
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(undefined8 *)(param_2 + 0xb0) = 0;
  *(undefined8 *)(param_2 + 0xb8) = 0;
  *(undefined8 *)(param_2 + 0xc0) = 0;
  *(undefined8 *)(param_2 + 200) = 0;
  *(undefined8 *)(param_2 + 0xd0) = 0;
  *(undefined8 *)(param_2 + 0xd8) = 0;
  *(undefined8 *)(param_2 + 0xe0) = 0;
  *(undefined8 *)(param_2 + 0xe8) = 0;
  *(undefined8 *)(param_2 + 0xf0) = 0;
  *(undefined8 *)(param_2 + 0xf8) = 0;
  *(undefined8 *)(param_2 + 0x100) = 0;
  *(undefined8 *)(param_2 + 0x108) = 0;
  *(undefined8 *)(param_2 + 0x110) = 0;
  *(undefined8 *)(param_2 + 0x118) = 0;
  return;
}


