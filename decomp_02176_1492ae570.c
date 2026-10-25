// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1492ae570 FUN_1492ae570 body=29 status=ok
// SIG undefined FUN_1492ae570(void)

undefined8 FUN_1492ae570(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492ae5f2 FUN_1492ae5f2 body=78 status=ok
// SIG undefined FUN_1492ae5f2(void)

undefined8 FUN_1492ae5f2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      *(undefined2 *)(param_2 + -8) = *(undefined2 *)(param_3 + -8);
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      FUN_1444888de(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492ae668 FUN_1492ae668 body=59 status=ok
// SIG undefined FUN_1492ae668(void)

undefined8 FUN_1492ae668(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492ae6ae FUN_1492ae6ae body=48 status=ok
// SIG undefined FUN_1492ae6ae(void)

void FUN_1492ae6ae(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 5) == '\x01') {
    *param_2 = &PTR_FUN_14bbf52d0;
    if (param_2[3] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 5) = 0;
  }
  return;
}



// FUNCTION 1492ae72c FUN_1492ae72c body=57 status=ok
// SIG undefined FUN_1492ae72c(void)

undefined8 * FUN_1492ae72c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbf52d0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492ae7ee FUN_1492ae7ee body=92 status=ok
// SIG undefined FUN_1492ae7ee(void)

undefined8 FUN_1492ae7ee(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      FUN_1406fa324(param_2,param_3);
      uVar1 = *(undefined4 *)(param_3 + 0x14);
      uVar2 = *(undefined4 *)(param_3 + 0x18);
      uVar3 = *(undefined4 *)(param_3 + 0x1c);
      uVar4 = *(undefined4 *)(param_3 + 0x20);
      uVar5 = *(undefined4 *)(param_3 + 0x24);
      uVar6 = *(undefined4 *)(param_3 + 0x28);
      uVar7 = *(undefined4 *)(param_3 + 0x2c);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      *(undefined4 *)(param_2 + 0x14) = uVar1;
      *(undefined4 *)(param_2 + 0x18) = uVar2;
      *(undefined4 *)(param_2 + 0x1c) = uVar3;
      *(undefined4 *)(param_2 + 0x20) = uVar4;
      *(undefined4 *)(param_2 + 0x24) = uVar5;
      *(undefined4 *)(param_2 + 0x28) = uVar6;
      *(undefined4 *)(param_2 + 0x2c) = uVar7;
      param_3 = param_3 + 0x48;
      param_2 = param_2 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492ae872 FUN_1492ae872 body=59 status=ok
// SIG undefined FUN_1492ae872(void)

undefined8 FUN_1492ae872(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492ae8b8 FUN_1492ae8b8 body=48 status=ok
// SIG undefined FUN_1492ae8b8(void)

void FUN_1492ae8b8(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 9) == '\x01') {
    *param_2 = &PTR_FUN_14bbf54c0;
    if (param_2[3] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 9) = 0;
  }
  return;
}



// FUNCTION 1492ae936 FUN_1492ae936 body=57 status=ok
// SIG undefined FUN_1492ae936(void)

undefined8 * FUN_1492ae936(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbf54c0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492ae970 FUN_1492ae970 body=104 status=ok
// SIG undefined FUN_1492ae970(void)

void FUN_1492ae970(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbf56b0;
  *(undefined1 *)(param_2 + 0x3e) = 1;
  *(undefined8 *)((longlong)param_2 + 500) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1fc) = 0;
  *(undefined1 *)((longlong)param_2 + 0x204) = 1;
  *(undefined1 *)(param_2 + 0x41) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20c) = 0;
  *(undefined2 *)((longlong)param_2 + 0x214) = 0xffff;
  *(undefined4 *)(param_2 + 0x43) = 0xffffffff;
  return;
}



// FUNCTION 1492ae9d8 FUN_1492ae9d8 body=104 status=ok
// SIG undefined FUN_1492ae9d8(void)

void FUN_1492ae9d8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbf56b0;
  *(undefined1 *)(param_2 + 0x3e) = 1;
  *(undefined8 *)((longlong)param_2 + 500) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1fc) = 0;
  *(undefined1 *)((longlong)param_2 + 0x204) = 1;
  *(undefined1 *)(param_2 + 0x41) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20c) = 0;
  *(undefined2 *)((longlong)param_2 + 0x214) = 0xffff;
  *(undefined4 *)(param_2 + 0x43) = 0xffffffff;
  return;
}



// FUNCTION 1492aea64 FUN_1492aea64 body=135 status=ok
// SIG undefined FUN_1492aea64(void)

undefined8 FUN_1492aea64(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  longlong lVar14;
  
  if (param_4 != 0) {
    lVar14 = 0;
    do {
      FUN_1491c05d4(param_2 + 0x10 + lVar14,param_3 + 0x10 + lVar14);
      puVar1 = (undefined4 *)(param_3 + 0x1f0 + lVar14);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_3 + 0x200 + lVar14);
      uVar6 = *puVar2;
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      puVar2 = (undefined4 *)(param_3 + 0x210 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      uVar12 = puVar2[2];
      uVar13 = puVar2[3];
      puVar2 = (undefined4 *)(param_2 + 0x1f0 + lVar14);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      puVar1 = (undefined4 *)(param_2 + 0x200 + lVar14);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      puVar1 = (undefined4 *)(param_2 + 0x210 + lVar14);
      *puVar1 = uVar10;
      puVar1[1] = uVar11;
      puVar1[2] = uVar12;
      puVar1[3] = uVar13;
      *(undefined8 *)(param_2 + 0x220 + lVar14) = *(undefined8 *)(param_3 + 0x220 + lVar14);
      lVar14 = lVar14 + 0x230;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492aeb14 FUN_1492aeb14 body=59 status=ok
// SIG undefined FUN_1492aeb14(void)

undefined8 FUN_1492aeb14(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492aeb60 FUN_1492aeb60 body=49 status=ok
// SIG undefined FUN_1492aeb60(void)

void FUN_1492aeb60(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x46) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x46) = 0;
  }
  return;
}



// FUNCTION 1492aebe0 FUN_1492aebe0 body=52 status=ok
// SIG undefined FUN_1492aebe0(void)

undefined8 * FUN_1492aebe0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492aec16 FUN_1492aec16 body=109 status=ok
// SIG undefined FUN_1492aec16(void)

void FUN_1492aec16(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278();
  *param_2 = &PTR_FUN_14bbf58a0;
  *(undefined1 *)(param_2 + 0x3e) = 1;
  *(undefined8 *)((longlong)param_2 + 500) = 0;
  param_2[0x40] = 0;
  param_2[0x41] = 0;
  *(undefined1 *)(param_2 + 0x42) = 1;
  *(undefined1 *)(param_2 + 0x43) = 0;
  *(undefined8 *)((longlong)param_2 + 0x21c) = 0;
  *(undefined2 *)((longlong)param_2 + 0x224) = 0xffff;
  *(undefined4 *)(param_2 + 0x45) = 0xffffffff;
  return;
}



// FUNCTION 1492aec84 FUN_1492aec84 body=109 status=ok
// SIG undefined FUN_1492aec84(void)

void FUN_1492aec84(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278();
  *param_2 = &PTR_FUN_14bbf58a0;
  *(undefined1 *)(param_2 + 0x3e) = 1;
  *(undefined8 *)((longlong)param_2 + 500) = 0;
  param_2[0x40] = 0;
  param_2[0x41] = 0;
  *(undefined1 *)(param_2 + 0x42) = 1;
  *(undefined1 *)(param_2 + 0x43) = 0;
  *(undefined8 *)((longlong)param_2 + 0x21c) = 0;
  *(undefined2 *)((longlong)param_2 + 0x224) = 0xffff;
  *(undefined4 *)(param_2 + 0x45) = 0xffffffff;
  return;
}



// FUNCTION 1492aed16 FUN_1492aed16 body=135 status=ok
// SIG undefined FUN_1492aed16(void)

undefined8 FUN_1492aed16(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  if (param_4 != 0) {
    puVar9 = (undefined4 *)(param_3 + 0x210);
    puVar8 = (undefined4 *)(param_2 + 0x210);
    do {
      FUN_1491c05d4(puVar8 + -0x80,puVar9 + -0x80);
      *(undefined8 *)(puVar8 + -8) = *(undefined8 *)(puVar9 + -8);
      puVar8[-6] = puVar9[-6];
      FUN_1406fa324(puVar8 + -4,puVar9 + -4);
      uVar1 = puVar9[1];
      uVar2 = puVar9[2];
      uVar3 = puVar9[3];
      uVar4 = puVar9[4];
      uVar5 = puVar9[5];
      uVar6 = puVar9[6];
      uVar7 = puVar9[7];
      *puVar8 = *puVar9;
      puVar8[1] = uVar1;
      puVar8[2] = uVar2;
      puVar8[3] = uVar3;
      puVar8[4] = uVar4;
      puVar8[5] = uVar5;
      puVar8[6] = uVar6;
      puVar8[7] = uVar7;
      *(undefined8 *)(puVar8 + 8) = *(undefined8 *)(puVar9 + 8);
      puVar9 = puVar9 + 0x90;
      puVar8 = puVar8 + 0x90;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492aedc6 FUN_1492aedc6 body=59 status=ok
// SIG undefined FUN_1492aedc6(void)

undefined8 FUN_1492aedc6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492aee68 FUN_1492aee68 body=79 status=ok
// SIG undefined FUN_1492aee68(void)

undefined8 * FUN_1492aee68(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbf58a0;
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492aeeb8 FUN_1492aeeb8 body=76 status=ok
// SIG undefined FUN_1492aeeb8(void)

void FUN_1492aeeb8(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x48) == '\x01') {
    *param_1 = &PTR_FUN_14bbf58a0;
    if (param_1[0x40] != 0) {
      FUN_1400020a8();
    }
    *param_1 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_1 + 2);
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  return;
}



// FUNCTION 1492aef04 FUN_1492aef04 body=106 status=ok
// SIG undefined FUN_1492aef04(void)

void FUN_1492aef04(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbf5a90;
  *(undefined1 *)(param_2 + 0x3e) = 1;
  *(undefined8 *)((longlong)param_2 + 500) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1fc) = 0;
  *(undefined2 *)((longlong)param_2 + 0x204) = 1;
  *(undefined1 *)(param_2 + 0x41) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20c) = 0;
  *(undefined2 *)((longlong)param_2 + 0x214) = 0xffff;
  *(undefined4 *)(param_2 + 0x43) = 0xffffffff;
  return;
}



// FUNCTION 1492aef6e FUN_1492aef6e body=106 status=ok
// SIG undefined FUN_1492aef6e(void)

void FUN_1492aef6e(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbf5a90;
  *(undefined1 *)(param_2 + 0x3e) = 1;
  *(undefined8 *)((longlong)param_2 + 500) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1fc) = 0;
  *(undefined2 *)((longlong)param_2 + 0x204) = 1;
  *(undefined1 *)(param_2 + 0x41) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20c) = 0;
  *(undefined2 *)((longlong)param_2 + 0x214) = 0xffff;
  *(undefined4 *)(param_2 + 0x43) = 0xffffffff;
  return;
}



// FUNCTION 1492aeffc FUN_1492aeffc body=135 status=ok
// SIG undefined FUN_1492aeffc(void)

undefined8 FUN_1492aeffc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  longlong lVar14;
  
  if (param_4 != 0) {
    lVar14 = 0;
    do {
      FUN_1491c05d4(param_2 + 0x10 + lVar14,param_3 + 0x10 + lVar14);
      puVar1 = (undefined4 *)(param_3 + 0x1f0 + lVar14);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_3 + 0x200 + lVar14);
      uVar6 = *puVar2;
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      puVar2 = (undefined4 *)(param_3 + 0x210 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      uVar12 = puVar2[2];
      uVar13 = puVar2[3];
      puVar2 = (undefined4 *)(param_2 + 0x1f0 + lVar14);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      puVar1 = (undefined4 *)(param_2 + 0x200 + lVar14);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      puVar1 = (undefined4 *)(param_2 + 0x210 + lVar14);
      *puVar1 = uVar10;
      puVar1[1] = uVar11;
      puVar1[2] = uVar12;
      puVar1[3] = uVar13;
      *(undefined8 *)(param_2 + 0x220 + lVar14) = *(undefined8 *)(param_3 + 0x220 + lVar14);
      lVar14 = lVar14 + 0x230;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492af0ac FUN_1492af0ac body=59 status=ok
// SIG undefined FUN_1492af0ac(void)

undefined8 FUN_1492af0ac(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492af0f8 FUN_1492af0f8 body=49 status=ok
// SIG undefined FUN_1492af0f8(void)

void FUN_1492af0f8(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x46) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x46) = 0;
  }
  return;
}



// FUNCTION 1492af178 FUN_1492af178 body=52 status=ok
// SIG undefined FUN_1492af178(void)

undefined8 * FUN_1492af178(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492af2a6 FUN_1492af2a6 body=59 status=ok
// SIG undefined FUN_1492af2a6(void)

undefined8 FUN_1492af2a6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492af346 FUN_1492af346 body=29 status=ok
// SIG undefined FUN_1492af346(void)

undefined8 FUN_1492af346(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492af3f8 FUN_1492af3f8 body=100 status=ok
// SIG undefined FUN_1492af3f8(void)

undefined8 FUN_1492af3f8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      FUN_1406fa324(param_2,param_3);
      uVar1 = *(undefined4 *)(param_3 + 0x14);
      uVar2 = *(undefined4 *)(param_3 + 0x18);
      uVar3 = *(undefined4 *)(param_3 + 0x1c);
      uVar4 = *(undefined4 *)(param_3 + 0x20);
      uVar5 = *(undefined4 *)(param_3 + 0x24);
      uVar6 = *(undefined4 *)(param_3 + 0x28);
      uVar7 = *(undefined4 *)(param_3 + 0x2c);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      *(undefined4 *)(param_2 + 0x14) = uVar1;
      *(undefined4 *)(param_2 + 0x18) = uVar2;
      *(undefined4 *)(param_2 + 0x1c) = uVar3;
      *(undefined4 *)(param_2 + 0x20) = uVar4;
      *(undefined4 *)(param_2 + 0x24) = uVar5;
      *(undefined4 *)(param_2 + 0x28) = uVar6;
      *(undefined4 *)(param_2 + 0x2c) = uVar7;
      *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_3 + 0x30);
      param_3 = param_3 + 0x50;
      param_2 = param_2 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492af484 FUN_1492af484 body=59 status=ok
// SIG undefined FUN_1492af484(void)

undefined8 FUN_1492af484(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492af4ca FUN_1492af4ca body=48 status=ok
// SIG undefined FUN_1492af4ca(void)

void FUN_1492af4ca(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 10) == '\x01') {
    *param_2 = &PTR_FUN_14bbf5e70;
    if (param_2[3] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 10) = 0;
  }
  return;
}



// FUNCTION 1492af548 FUN_1492af548 body=57 status=ok
// SIG undefined FUN_1492af548(void)

undefined8 * FUN_1492af548(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbf5e70;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492af5e2 FUN_1492af5e2 body=76 status=ok
// SIG undefined FUN_1492af5e2(void)

undefined8 FUN_1492af5e2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10);
      FUN_1444888de(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492af656 FUN_1492af656 body=59 status=ok
// SIG undefined FUN_1492af656(void)

undefined8 FUN_1492af656(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492af69c FUN_1492af69c body=48 status=ok
// SIG undefined FUN_1492af69c(void)

void FUN_1492af69c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 5) == '\x01') {
    *param_2 = &PTR_FUN_14bbf6060;
    if (param_2[3] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 5) = 0;
  }
  return;
}



// FUNCTION 1492af71a FUN_1492af71a body=57 status=ok
// SIG undefined FUN_1492af71a(void)

undefined8 * FUN_1492af71a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbf6060;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492af7ac FUN_1492af7ac body=81 status=ok
// SIG undefined FUN_1492af7ac(void)

undefined1 FUN_1492af7ac(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      FUN_1406fa324(param_2 + -0x18,param_3 + -0x18);
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      FUN_1444888de(param_2,param_3);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492af826 FUN_1492af826 body=59 status=ok
// SIG undefined FUN_1492af826(void)

undefined8 FUN_1492af826(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492af8c2 FUN_1492af8c2 body=71 status=ok
// SIG undefined FUN_1492af8c2(void)

undefined8 * FUN_1492af8c2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbf6250;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492af90a FUN_1492af90a body=62 status=ok
// SIG undefined FUN_1492af90a(void)

void FUN_1492af90a(undefined8 *param_1)

{
  if (*(char *)(param_1 + 6) == '\x01') {
    *param_1 = &PTR_FUN_14bbf6250;
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    if (param_1[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 6) = 0;
  }
  return;
}



// FUNCTION 1492af9b4 FUN_1492af9b4 body=54 status=ok
// SIG undefined FUN_1492af9b4(void)

undefined1 FUN_1492af9b4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1492afb44(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 1492afa12 FUN_1492afa12 body=59 status=ok
// SIG undefined FUN_1492afa12(void)

undefined8 FUN_1492afa12(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492afa58 FUN_1492afa58 body=34 status=ok
// SIG undefined FUN_1492afa58(void)

void FUN_1492afa58(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_1492afaee(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 1492afac8 FUN_1492afac8 body=38 status=ok
// SIG undefined FUN_1492afac8(void)

undefined8 FUN_1492afac8(undefined8 param_1,int param_2)

{
  FUN_1492afaee();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492afaee FUN_1492afaee body=86 status=ok
// SIG undefined FUN_1492afaee(void)

void FUN_1492afaee(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bbf6440;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
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



// FUNCTION 1492afb44 FUN_1492afb44 body=85 status=ok
// SIG undefined FUN_1492afb44(void)

longlong FUN_1492afb44(longlong param_1,longlong param_2)

{
  FUN_1444888de(param_1 + 8,param_2 + 8);
  FUN_1406fa324(param_1 + 0x18,param_2 + 0x18);
  *(undefined2 *)(param_1 + 0x28) = *(undefined2 *)(param_2 + 0x28);
  FUN_1444888de(param_1 + 0x30,param_2 + 0x30);
  FUN_1492ad734(param_1 + 0x40,param_2 + 0x40);
  return param_1;
}



// FUNCTION 1492afb9a FUN_1492afb9a body=32 status=ok
// SIG undefined FUN_1492afb9a(void)

void FUN_1492afb9a(undefined8 param_1,undefined8 *param_2)

{
  FUN_1457efb6c(param_2);
  *param_2 = &PTR_FUN_14bbf6630;
  return;
}



// FUNCTION 1492afbd0 FUN_1492afbd0 body=115 status=ok
// SIG undefined FUN_1492afbd0(void)

undefined8 FUN_1492afbd0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
    do {
      uVar1 = *(undefined4 *)(param_3 + -100);
      uVar2 = *(undefined4 *)(param_3 + -0x60);
      uVar3 = *(undefined4 *)(param_3 + -0x5c);
      *(undefined4 *)(param_2 + -0x68) = *(undefined4 *)(param_3 + -0x68);
      *(undefined4 *)(param_2 + -100) = uVar1;
      *(undefined4 *)(param_2 + -0x60) = uVar2;
      *(undefined4 *)(param_2 + -0x5c) = uVar3;
      FUN_1490e0b30(param_2 + -0x58,param_3 + -0x58);
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_14921c4cc(param_2,param_3);
      uVar5 = *(undefined8 *)(param_3 + 0x18);
      uVar1 = *(undefined4 *)(param_3 + 0x20);
      uVar2 = *(undefined4 *)(param_3 + 0x24);
      uVar3 = *(undefined4 *)(param_3 + 0x28);
      uVar4 = *(undefined4 *)(param_3 + 0x2c);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      *(undefined8 *)(param_2 + 0x18) = uVar5;
      *(undefined4 *)(param_2 + 0x20) = uVar1;
      *(undefined4 *)(param_2 + 0x24) = uVar2;
      *(undefined4 *)(param_2 + 0x28) = uVar3;
      *(undefined4 *)(param_2 + 0x2c) = uVar4;
      param_3 = param_3 + 0xa0;
      param_2 = param_2 + 0xa0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492afc6c FUN_1492afc6c body=59 status=ok
// SIG undefined FUN_1492afc6c(void)

undefined8 FUN_1492afc6c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492afcb8 FUN_1492afcb8 body=40 status=ok
// SIG undefined FUN_1492afcb8(void)

void FUN_1492afcb8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_1457f2e8a(param_2);
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 1492afd30 FUN_1492afd30 body=32 status=ok
// SIG undefined FUN_1492afd30(void)

void FUN_1492afd30(undefined8 param_1,undefined8 *param_2)

{
  FUN_1457efb6c(param_2);
  *param_2 = &PTR_FUN_14bbf6810;
  return;
}



// FUNCTION 1492afd66 FUN_1492afd66 body=115 status=ok
// SIG undefined FUN_1492afd66(void)

undefined8 FUN_1492afd66(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
    do {
      uVar1 = *(undefined4 *)(param_3 + -100);
      uVar2 = *(undefined4 *)(param_3 + -0x60);
      uVar3 = *(undefined4 *)(param_3 + -0x5c);
      *(undefined4 *)(param_2 + -0x68) = *(undefined4 *)(param_3 + -0x68);
      *(undefined4 *)(param_2 + -100) = uVar1;
      *(undefined4 *)(param_2 + -0x60) = uVar2;
      *(undefined4 *)(param_2 + -0x5c) = uVar3;
      FUN_1490e0b30(param_2 + -0x58,param_3 + -0x58);
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_14921c4cc(param_2,param_3);
      uVar5 = *(undefined8 *)(param_3 + 0x18);
      uVar1 = *(undefined4 *)(param_3 + 0x20);
      uVar2 = *(undefined4 *)(param_3 + 0x24);
      uVar3 = *(undefined4 *)(param_3 + 0x28);
      uVar4 = *(undefined4 *)(param_3 + 0x2c);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      *(undefined8 *)(param_2 + 0x18) = uVar5;
      *(undefined4 *)(param_2 + 0x20) = uVar1;
      *(undefined4 *)(param_2 + 0x24) = uVar2;
      *(undefined4 *)(param_2 + 0x28) = uVar3;
      *(undefined4 *)(param_2 + 0x2c) = uVar4;
      param_3 = param_3 + 0xa0;
      param_2 = param_2 + 0xa0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492afe02 FUN_1492afe02 body=59 status=ok
// SIG undefined FUN_1492afe02(void)

undefined8 FUN_1492afe02(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492afe4e FUN_1492afe4e body=40 status=ok
// SIG undefined FUN_1492afe4e(void)

void FUN_1492afe4e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_1457f2e8a(param_2);
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 1492afec6 FUN_1492afec6 body=135 status=ok
// SIG undefined FUN_1492afec6(void)

void FUN_1492afec6(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbedae0;
  *(undefined1 *)(param_2 + 0x3e) = 1;
  *(undefined8 *)((longlong)param_2 + 500) = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x40;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_2 + 0x4c) = 0x3f800000;
  *(undefined1 *)((longlong)param_2 + 0x264) = 1;
  *(undefined1 *)(param_2 + 0x4d) = 0;
  *(undefined8 *)((longlong)param_2 + 0x26c) = 0;
  *(undefined2 *)((longlong)param_2 + 0x274) = 0xffff;
  *(undefined4 *)(param_2 + 0x4f) = 0xffffffff;
  return;
}



// FUNCTION 1492aff4e FUN_1492aff4e body=135 status=ok
// SIG undefined FUN_1492aff4e(void)

void FUN_1492aff4e(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbedae0;
  *(undefined1 *)(param_2 + 0x3e) = 1;
  *(undefined8 *)((longlong)param_2 + 500) = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x40;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_2 + 0x4c) = 0x3f800000;
  *(undefined1 *)((longlong)param_2 + 0x264) = 1;
  *(undefined1 *)(param_2 + 0x4d) = 0;
  *(undefined8 *)((longlong)param_2 + 0x26c) = 0;
  *(undefined2 *)((longlong)param_2 + 0x274) = 0xffff;
  *(undefined4 *)(param_2 + 0x4f) = 0xffffffff;
  return;
}



// FUNCTION 1492afffa FUN_1492afffa body=110 status=ok
// SIG undefined FUN_1492afffa(void)

undefined8 FUN_1492afffa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_1491c05d4(param_2 + 0x10 + lVar1,param_3 + 0x10 + lVar1);
      memcpy((void *)(param_2 + 0x1f0 + lVar1),(void *)(param_3 + 0x1f0 + lVar1),0x98);
      lVar1 = lVar1 + 0x290;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492b0090 FUN_1492b0090 body=59 status=ok
// SIG undefined FUN_1492b0090(void)

undefined8 FUN_1492b0090(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492b00dc FUN_1492b00dc body=49 status=ok
// SIG undefined FUN_1492b00dc(void)

void FUN_1492b00dc(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x52) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x52) = 0;
  }
  return;
}



// FUNCTION 1492b0192 FUN_1492b0192 body=124 status=ok
// SIG undefined FUN_1492b0192(void)

undefined8 FUN_1492b0192(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *_Dst;
  void *_Src;
  
  if (param_4 != 0) {
    _Src = (void *)(param_3 + 0x210);
    _Dst = (void *)(param_2 + 0x210);
    do {
      FUN_1491c05d4((longlong)_Dst + -0x200,(longlong)_Src + -0x200);
      uVar1 = *(undefined4 *)((longlong)_Src + -0x1c);
      uVar2 = *(undefined4 *)((longlong)_Src + -0x18);
      uVar3 = *(undefined4 *)((longlong)_Src + -0x14);
      *(undefined4 *)((longlong)_Dst + -0x20) = *(undefined4 *)((longlong)_Src + -0x20);
      *(undefined4 *)((longlong)_Dst + -0x1c) = uVar1;
      *(undefined4 *)((longlong)_Dst + -0x18) = uVar2;
      *(undefined4 *)((longlong)_Dst + -0x14) = uVar3;
      FUN_1444888de((longlong)_Dst + -0x10,(longlong)_Src + -0x10);
      memcpy(_Dst,_Src,0x180);
      _Src = (void *)((longlong)_Src + 0x390);
      _Dst = (void *)((longlong)_Dst + 0x390);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492b0236 FUN_1492b0236 body=59 status=ok
// SIG undefined FUN_1492b0236(void)

undefined8 FUN_1492b0236(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492b02d8 FUN_1492b02d8 body=300 status=ok
// SIG undefined FUN_1492b02d8(void)

undefined8 * FUN_1492b02d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_1 + 2);
  *param_1 = &PTR_FUN_14bbf6b50;
  *(undefined1 *)(param_1 + 0x3e) = 2;
  *(undefined8 *)((longlong)param_1 + 500) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x204) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20c) = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  *(undefined4 *)((longlong)param_1 + 0x22c) = 0x3ff00000;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0x3ff0000000000000;
  param_1[0x4b] = 0x3ff0000000000000;
  param_1[0x4c] = 0x3ff0000000000000;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0x3f800000;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x52) = 0;
  *(undefined4 *)((longlong)param_1 + 0x294) = 0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  *(undefined4 *)((longlong)param_1 + 0x29c) = 0x3ff00000;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0x3ff0000000000000;
  param_1[0x59] = 0x3ff0000000000000;
  param_1[0x5a] = 0x3ff0000000000000;
  param_1[0x5b] = 0;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  *(undefined1 *)(param_1 + 0x5d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ec) = 0;
  *(undefined2 *)((longlong)param_1 + 0x2f4) = 0xffff;
  *(undefined4 *)(param_1 + 0x5f) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x61) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x314) = 0xffff;
  *(undefined4 *)(param_1 + 99) = 0xffffffff;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x344) = 0;
  *(undefined4 *)(param_1 + 0x69) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34c) = 0x3ff00000;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6e] = 0x3ff0000000000000;
  param_1[0x6f] = 0x3ff0000000000000;
  param_1[0x70] = 0x3ff0000000000000;
  param_1[0x71] = 0;
  return param_1;
}



// FUNCTION 1492b0404 FUN_1492b0404 body=79 status=ok
// SIG undefined FUN_1492b0404(void)

undefined8 * FUN_1492b0404(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbf6b50;
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492b0454 FUN_1492b0454 body=76 status=ok
// SIG undefined FUN_1492b0454(void)

void FUN_1492b0454(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x72) == '\x01') {
    *param_1 = &PTR_FUN_14bbf6b50;
    if (param_1[0x40] != 0) {
      FUN_1400020a8();
    }
    *param_1 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_1 + 2);
    *(undefined1 *)(param_1 + 0x72) = 0;
  }
  return;
}



// FUNCTION 1492b04d4 FUN_1492b04d4 body=124 status=ok
// SIG undefined FUN_1492b04d4(void)

undefined8 FUN_1492b04d4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *_Dst;
  void *_Src;
  
  if (param_4 != 0) {
    _Src = (void *)(param_3 + 0x210);
    _Dst = (void *)(param_2 + 0x210);
    do {
      FUN_1491c05d4((longlong)_Dst + -0x200,(longlong)_Src + -0x200);
      uVar1 = *(undefined4 *)((longlong)_Src + -0x1c);
      uVar2 = *(undefined4 *)((longlong)_Src + -0x18);
      uVar3 = *(undefined4 *)((longlong)_Src + -0x14);
      *(undefined4 *)((longlong)_Dst + -0x20) = *(undefined4 *)((longlong)_Src + -0x20);
      *(undefined4 *)((longlong)_Dst + -0x1c) = uVar1;
      *(undefined4 *)((longlong)_Dst + -0x18) = uVar2;
      *(undefined4 *)((longlong)_Dst + -0x14) = uVar3;
      FUN_1444888de((longlong)_Dst + -0x10,(longlong)_Src + -0x10);
      memcpy(_Dst,_Src,0x180);
      _Src = (void *)((longlong)_Src + 0x390);
      _Dst = (void *)((longlong)_Dst + 0x390);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492b0578 FUN_1492b0578 body=59 status=ok
// SIG undefined FUN_1492b0578(void)

undefined8 FUN_1492b0578(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492b061c FUN_1492b061c body=76 status=ok
// SIG undefined FUN_1492b061c(void)

void FUN_1492b061c(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x72) == '\x01') {
    *param_1 = &PTR_FUN_14bbf6d40;
    if (param_1[0x40] != 0) {
      FUN_1400020a8();
    }
    *param_1 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_1 + 2);
    *(undefined1 *)(param_1 + 0x72) = 0;
  }
  return;
}



// FUNCTION 1492b0668 FUN_1492b0668 body=79 status=ok
// SIG undefined FUN_1492b0668(void)

undefined8 * FUN_1492b0668(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbf6d40;
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492b06ec FUN_1492b06ec body=71 status=ok
// SIG undefined FUN_1492b06ec(void)

undefined8 FUN_1492b06ec(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 8;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0xf8);
      lVar1 = lVar1 + 0x100;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492b075c FUN_1492b075c body=59 status=ok
// SIG undefined FUN_1492b075c(void)

undefined8 FUN_1492b075c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492b08ce FUN_1492b08ce body=29 status=ok
// SIG undefined FUN_1492b08ce(void)

undefined8 FUN_1492b08ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492b08ec FUN_1492b08ec body=106 status=ok
// SIG undefined FUN_1492b08ec(void)

void FUN_1492b08ec(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbf7120;
  *(undefined1 *)(param_2 + 0x3e) = 1;
  *(undefined8 *)((longlong)param_2 + 500) = 0;
  *(undefined2 *)((longlong)param_2 + 0x1fc) = 1;
  *(undefined1 *)((longlong)param_2 + 0x1fe) = 0;
  *(undefined1 *)(param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x204) = 0;
  *(undefined2 *)((longlong)param_2 + 0x20c) = 0xffff;
  *(undefined4 *)(param_2 + 0x42) = 0xffffffff;
  return;
}



// FUNCTION 1492b0956 FUN_1492b0956 body=106 status=ok
// SIG undefined FUN_1492b0956(void)

void FUN_1492b0956(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbf7120;
  *(undefined1 *)(param_2 + 0x3e) = 1;
  *(undefined8 *)((longlong)param_2 + 500) = 0;
  *(undefined2 *)((longlong)param_2 + 0x1fc) = 1;
  *(undefined1 *)((longlong)param_2 + 0x1fe) = 0;
  *(undefined1 *)(param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x204) = 0;
  *(undefined2 *)((longlong)param_2 + 0x20c) = 0xffff;
  *(undefined4 *)(param_2 + 0x42) = 0xffffffff;
  return;
}



// FUNCTION 1492b09e4 FUN_1492b09e4 body=125 status=ok
// SIG undefined FUN_1492b09e4(void)

undefined1 FUN_1492b09e4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  longlong lVar14;
  
  if (param_4 != 0) {
    lVar14 = 0;
    do {
      FUN_1491c05d4(param_2 + 0x10 + lVar14,param_3 + 0x10 + lVar14);
      puVar1 = (undefined4 *)(param_3 + 0x1f0 + lVar14);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_3 + 0x200 + lVar14);
      uVar6 = *puVar2;
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      puVar2 = (undefined4 *)(param_3 + 0x210 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      uVar12 = puVar2[2];
      uVar13 = puVar2[3];
      puVar2 = (undefined4 *)(param_2 + 0x1f0 + lVar14);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      puVar1 = (undefined4 *)(param_2 + 0x200 + lVar14);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      puVar1 = (undefined4 *)(param_2 + 0x210 + lVar14);
      *puVar1 = uVar10;
      puVar1[1] = uVar11;
      puVar1[2] = uVar12;
      puVar1[3] = uVar13;
      lVar14 = lVar14 + 0x220;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492b0a8a FUN_1492b0a8a body=59 status=ok
// SIG undefined FUN_1492b0a8a(void)

undefined8 FUN_1492b0a8a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492b0ad6 FUN_1492b0ad6 body=49 status=ok
// SIG undefined FUN_1492b0ad6(void)

void FUN_1492b0ad6(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x44) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x44) = 0;
  }
  return;
}



// FUNCTION 1492b0b56 FUN_1492b0b56 body=52 status=ok
// SIG undefined FUN_1492b0b56(void)

undefined8 * FUN_1492b0b56(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492b0b8c FUN_1492b0b8c body=87 status=ok
// SIG undefined FUN_1492b0b8c(void)

void FUN_1492b0b8c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbf7310;
  *(undefined1 *)(param_2 + 0x3e) = 1;
  *(undefined1 *)((longlong)param_2 + 500) = 0;
  param_2[0x3f] = 0;
  *(undefined4 *)(param_2 + 0x40) = 0;
  *(undefined2 *)((longlong)param_2 + 0x204) = 0x101;
  return;
}



// FUNCTION 1492b0be4 FUN_1492b0be4 body=87 status=ok
// SIG undefined FUN_1492b0be4(void)

void FUN_1492b0be4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbf7310;
  *(undefined1 *)(param_2 + 0x3e) = 1;
  *(undefined1 *)((longlong)param_2 + 500) = 0;
  param_2[0x3f] = 0;
  *(undefined4 *)(param_2 + 0x40) = 0;
  *(undefined2 *)((longlong)param_2 + 0x204) = 0x101;
  return;
}



// FUNCTION 1492b0c60 FUN_1492b0c60 body=111 status=ok
// SIG undefined FUN_1492b0c60(void)

undefined8 FUN_1492b0c60(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_1491c05d4(param_2 + 0x10 + lVar6,param_3 + 0x10 + lVar6);
      puVar1 = (undefined4 *)(param_3 + 0x1f0 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x1f0 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      *(undefined8 *)(param_2 + 0x1fe + lVar6) = *(undefined8 *)(param_3 + 0x1fe + lVar6);
      lVar6 = lVar6 + 0x210;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492b0cf8 FUN_1492b0cf8 body=59 status=ok
// SIG undefined FUN_1492b0cf8(void)

undefined8 FUN_1492b0cf8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492b0d44 FUN_1492b0d44 body=49 status=ok
// SIG undefined FUN_1492b0d44(void)

void FUN_1492b0d44(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x42) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x42) = 0;
  }
  return;
}



// FUNCTION 1492b0dc4 FUN_1492b0dc4 body=52 status=ok
// SIG undefined FUN_1492b0dc4(void)

undefined8 * FUN_1492b0dc4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492b0dfa FUN_1492b0dfa body=206 status=ok
// SIG undefined FUN_1492b0dfa(void)

void FUN_1492b0dfa(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &DAT_14bbf7500;
  param_2[0x3e] = 0;
  param_2[0x40] = 0;
  param_2[0x41] = 0;
  *(undefined4 *)(param_2 + 0x42) = 0;
  *(undefined4 *)((longlong)param_2 + 0x214) = 0;
  *(undefined4 *)(param_2 + 0x43) = 0;
  *(undefined4 *)((longlong)param_2 + 0x21c) = 0x3ff00000;
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  param_2[0x46] = 0;
  param_2[0x47] = 0;
  param_2[0x48] = 0x3ff0000000000000;
  param_2[0x49] = 0x3ff0000000000000;
  param_2[0x4a] = 0x3ff0000000000000;
  param_2[0x4b] = 0;
  param_2[0x4c] = 0;
  param_2[0x4d] = 0;
  *(undefined4 *)(param_2 + 0x4e) = 0;
  *(undefined4 *)((longlong)param_2 + 0x274) = 0;
  *(undefined4 *)(param_2 + 0x4f) = 0;
  *(undefined4 *)((longlong)param_2 + 0x27c) = 0x3ff00000;
  param_2[0x50] = 0;
  param_2[0x51] = 0;
  param_2[0x52] = 0;
  param_2[0x53] = 0;
  param_2[0x54] = 0x3ff0000000000000;
  param_2[0x55] = 0x3ff0000000000000;
  param_2[0x56] = 0x3ff0000000000000;
  param_2[0x57] = 0;
  *(undefined2 *)(param_2 + 0x58) = 0x101;
  *(undefined1 *)(param_2 + 0x59) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2cc) = 0;
  *(undefined2 *)((longlong)param_2 + 0x2d4) = 0xffff;
  *(undefined4 *)(param_2 + 0x5b) = 0xffffffff;
  return;
}



// FUNCTION 1492b0ec8 FUN_1492b0ec8 body=206 status=ok
// SIG undefined FUN_1492b0ec8(void)

void FUN_1492b0ec8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &DAT_14bbf7500;
  param_2[0x3e] = 0;
  param_2[0x40] = 0;
  param_2[0x41] = 0;
  *(undefined4 *)(param_2 + 0x42) = 0;
  *(undefined4 *)((longlong)param_2 + 0x214) = 0;
  *(undefined4 *)(param_2 + 0x43) = 0;
  *(undefined4 *)((longlong)param_2 + 0x21c) = 0x3ff00000;
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  param_2[0x46] = 0;
  param_2[0x47] = 0;
  param_2[0x48] = 0x3ff0000000000000;
  param_2[0x49] = 0x3ff0000000000000;
  param_2[0x4a] = 0x3ff0000000000000;
  param_2[0x4b] = 0;
  param_2[0x4c] = 0;
  param_2[0x4d] = 0;
  *(undefined4 *)(param_2 + 0x4e) = 0;
  *(undefined4 *)((longlong)param_2 + 0x274) = 0;
  *(undefined4 *)(param_2 + 0x4f) = 0;
  *(undefined4 *)((longlong)param_2 + 0x27c) = 0x3ff00000;
  param_2[0x50] = 0;
  param_2[0x51] = 0;
  param_2[0x52] = 0;
  param_2[0x53] = 0;
  param_2[0x54] = 0x3ff0000000000000;
  param_2[0x55] = 0x3ff0000000000000;
  param_2[0x56] = 0x3ff0000000000000;
  param_2[0x57] = 0;
  *(undefined2 *)(param_2 + 0x58) = 0x101;
  *(undefined1 *)(param_2 + 0x59) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2cc) = 0;
  *(undefined2 *)((longlong)param_2 + 0x2d4) = 0xffff;
  *(undefined4 *)(param_2 + 0x5b) = 0xffffffff;
  return;
}



// FUNCTION 1492b0fba FUN_1492b0fba body=110 status=ok
// SIG undefined FUN_1492b0fba(void)

undefined8 FUN_1492b0fba(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_1491c05d4(param_2 + 0x10 + lVar1,param_3 + 0x10 + lVar1);
      memcpy((void *)(param_2 + 0x1f0 + lVar1),(void *)(param_3 + 0x1f0 + lVar1),0xf8);
      lVar1 = lVar1 + 0x2f0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492b1050 FUN_1492b1050 body=59 status=ok
// SIG undefined FUN_1492b1050(void)

undefined8 FUN_1492b1050(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492b109c FUN_1492b109c body=49 status=ok
// SIG undefined FUN_1492b109c(void)

void FUN_1492b109c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x5e) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x5e) = 0;
  }
  return;
}



// FUNCTION 1492b111c FUN_1492b111c body=52 status=ok
// SIG undefined FUN_1492b111c(void)

undefined8 * FUN_1492b111c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492b1152 FUN_1492b1152 body=52 status=ok
// SIG undefined FUN_1492b1152(void)

undefined8 * FUN_1492b1152(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492b1186 FUN_1492b1186 body=135 status=ok
// SIG undefined FUN_1492b1186(void)

void FUN_1492b1186(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbf7780;
  param_2[0x3e] = 0;
  uVar1 = DAT_14c8463d8;
  param_2[0x40] = DAT_14c8463d0;
  param_2[0x41] = uVar1;
  uVar1 = DAT_14c8463e8;
  param_2[0x42] = DAT_14c8463e0;
  param_2[0x43] = uVar1;
  *(undefined1 *)(param_2 + 0x44) = 0;
  *(undefined4 *)((longlong)param_2 + 0x224) = 0x3f800000;
  *(undefined1 *)(param_2 + 0x45) = 1;
  *(undefined1 *)(param_2 + 0x46) = 0;
  *(undefined8 *)((longlong)param_2 + 0x234) = 0;
  *(undefined2 *)((longlong)param_2 + 0x23c) = 0xffff;
  *(undefined4 *)(param_2 + 0x48) = 0xffffffff;
  return;
}



// FUNCTION 1492b120e FUN_1492b120e body=135 status=ok
// SIG undefined FUN_1492b120e(void)

void FUN_1492b120e(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbf7780;
  param_2[0x3e] = 0;
  uVar1 = DAT_14c8463d8;
  param_2[0x40] = DAT_14c8463d0;
  param_2[0x41] = uVar1;
  uVar1 = DAT_14c8463e8;
  param_2[0x42] = DAT_14c8463e0;
  param_2[0x43] = uVar1;
  *(undefined1 *)(param_2 + 0x44) = 0;
  *(undefined4 *)((longlong)param_2 + 0x224) = 0x3f800000;
  *(undefined1 *)(param_2 + 0x45) = 1;
  *(undefined1 *)(param_2 + 0x46) = 0;
  *(undefined8 *)((longlong)param_2 + 0x234) = 0;
  *(undefined2 *)((longlong)param_2 + 0x23c) = 0xffff;
  *(undefined4 *)(param_2 + 0x48) = 0xffffffff;
  return;
}



// FUNCTION 1492b12ba FUN_1492b12ba body=114 status=ok
// SIG undefined FUN_1492b12ba(void)

undefined1 FUN_1492b12ba(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      FUN_1491c05d4(param_2 + 0x10 + lVar2,param_3 + 0x10 + lVar2);
      puVar3 = (undefined8 *)(param_3 + 0x1f0 + lVar2);
      puVar4 = (undefined8 *)(param_2 + 0x1f0 + lVar2);
      for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar2 = lVar2 + 0x250;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492b1354 FUN_1492b1354 body=59 status=ok
// SIG undefined FUN_1492b1354(void)

undefined8 FUN_1492b1354(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492b13a0 FUN_1492b13a0 body=49 status=ok
// SIG undefined FUN_1492b13a0(void)

void FUN_1492b13a0(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x4a) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x4a) = 0;
  }
  return;
}



// FUNCTION 1492b1420 FUN_1492b1420 body=52 status=ok
// SIG undefined FUN_1492b1420(void)

undefined8 * FUN_1492b1420(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492b1456 FUN_1492b1456 body=52 status=ok
// SIG undefined FUN_1492b1456(void)

undefined8 * FUN_1492b1456(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492b14be FUN_1492b14be body=110 status=ok
// SIG undefined FUN_1492b14be(void)

undefined8 FUN_1492b14be(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_1491c05d4(param_2 + 0x10 + lVar1,param_3 + 0x10 + lVar1);
      memcpy((void *)(param_2 + 0x1f0 + lVar1),(void *)(param_3 + 0x1f0 + lVar1),0x100);
      lVar1 = lVar1 + 0x2f0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492b1554 FUN_1492b1554 body=59 status=ok
// SIG undefined FUN_1492b1554(void)

undefined8 FUN_1492b1554(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492b15a0 FUN_1492b15a0 body=49 status=ok
// SIG undefined FUN_1492b15a0(void)

void FUN_1492b15a0(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x5e) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x5e) = 0;
  }
  return;
}



// FUNCTION 1492b1620 FUN_1492b1620 body=52 status=ok
// SIG undefined FUN_1492b1620(void)

undefined8 * FUN_1492b1620(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492b1656 FUN_1492b1656 body=135 status=ok
// SIG undefined FUN_1492b1656(void)

void FUN_1492b1656(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbf7bf0;
  param_2[0x3e] = 0;
  uVar1 = DAT_14c8464e8;
  param_2[0x3f] = DAT_14c8464e0;
  param_2[0x40] = uVar1;
  param_2[0x41] = DAT_14c8464f0;
  *(undefined1 *)(param_2 + 0x42) = 0;
  *(undefined4 *)((longlong)param_2 + 0x214) = 0x3f800000;
  *(undefined1 *)(param_2 + 0x43) = 1;
  *(undefined1 *)(param_2 + 0x44) = 0;
  *(undefined8 *)((longlong)param_2 + 0x224) = 0;
  *(undefined2 *)((longlong)param_2 + 0x22c) = 0xffff;
  *(undefined4 *)(param_2 + 0x46) = 0xffffffff;
  return;
}



// FUNCTION 1492b16de FUN_1492b16de body=135 status=ok
// SIG undefined FUN_1492b16de(void)

void FUN_1492b16de(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbf7bf0;
  param_2[0x3e] = 0;
  uVar1 = DAT_14c8464e8;
  param_2[0x3f] = DAT_14c8464e0;
  param_2[0x40] = uVar1;
  param_2[0x41] = DAT_14c8464f0;
  *(undefined1 *)(param_2 + 0x42) = 0;
  *(undefined4 *)((longlong)param_2 + 0x214) = 0x3f800000;
  *(undefined1 *)(param_2 + 0x43) = 1;
  *(undefined1 *)(param_2 + 0x44) = 0;
  *(undefined8 *)((longlong)param_2 + 0x224) = 0;
  *(undefined2 *)((longlong)param_2 + 0x22c) = 0xffff;
  *(undefined4 *)(param_2 + 0x46) = 0xffffffff;
  return;
}



// FUNCTION 1492b178a FUN_1492b178a body=114 status=ok
// SIG undefined FUN_1492b178a(void)

undefined1 FUN_1492b178a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      FUN_1491c05d4(param_2 + 0x10 + lVar2,param_3 + 0x10 + lVar2);
      puVar3 = (undefined8 *)(param_3 + 0x1f0 + lVar2);
      puVar4 = (undefined8 *)(param_2 + 0x1f0 + lVar2);
      for (lVar1 = 10; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar2 = lVar2 + 0x240;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492b1824 FUN_1492b1824 body=59 status=ok
// SIG undefined FUN_1492b1824(void)

undefined8 FUN_1492b1824(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492b1870 FUN_1492b1870 body=49 status=ok
// SIG undefined FUN_1492b1870(void)

void FUN_1492b1870(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 1492b18f0 FUN_1492b18f0 body=52 status=ok
// SIG undefined FUN_1492b18f0(void)

undefined8 * FUN_1492b18f0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492b1926 FUN_1492b1926 body=52 status=ok
// SIG undefined FUN_1492b1926(void)

undefined8 * FUN_1492b1926(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492b1a4a FUN_1492b1a4a body=59 status=ok
// SIG undefined FUN_1492b1a4a(void)

undefined8 FUN_1492b1a4a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492b1aea FUN_1492b1aea body=29 status=ok
// SIG undefined FUN_1492b1aea(void)

undefined8 FUN_1492b1aea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492b1b08 FUN_1492b1b08 body=99 status=ok
// SIG undefined FUN_1492b1b08(void)

void FUN_1492b1b08(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbf8060;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  param_2[0x40] = 0x3f80000000000000;
  *(undefined1 *)(param_2 + 0x41) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20c) = 0;
  *(undefined2 *)((longlong)param_2 + 0x214) = 0xffff;
  *(undefined4 *)(param_2 + 0x43) = 0xffffffff;
  return;
}



// FUNCTION 1492b1b6c FUN_1492b1b6c body=99 status=ok
// SIG undefined FUN_1492b1b6c(void)

void FUN_1492b1b6c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbf8060;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  param_2[0x40] = 0x3f80000000000000;
  *(undefined1 *)(param_2 + 0x41) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20c) = 0;
  *(undefined2 *)((longlong)param_2 + 0x214) = 0xffff;
  *(undefined4 *)(param_2 + 0x43) = 0xffffffff;
  return;
}



// FUNCTION 1492b1bf4 FUN_1492b1bf4 body=135 status=ok
// SIG undefined FUN_1492b1bf4(void)

undefined8 FUN_1492b1bf4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  longlong lVar14;
  
  if (param_4 != 0) {
    lVar14 = 0;
    do {
      FUN_1491c05d4(param_2 + 0x10 + lVar14,param_3 + 0x10 + lVar14);
      puVar1 = (undefined4 *)(param_3 + 0x1f0 + lVar14);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_3 + 0x200 + lVar14);
      uVar6 = *puVar2;
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      puVar2 = (undefined4 *)(param_3 + 0x210 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      uVar12 = puVar2[2];
      uVar13 = puVar2[3];
      puVar2 = (undefined4 *)(param_2 + 0x1f0 + lVar14);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      puVar1 = (undefined4 *)(param_2 + 0x200 + lVar14);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      puVar1 = (undefined4 *)(param_2 + 0x210 + lVar14);
      *puVar1 = uVar10;
      puVar1[1] = uVar11;
      puVar1[2] = uVar12;
      puVar1[3] = uVar13;
      *(undefined8 *)(param_2 + 0x220 + lVar14) = *(undefined8 *)(param_3 + 0x220 + lVar14);
      lVar14 = lVar14 + 0x230;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492b1ca4 FUN_1492b1ca4 body=59 status=ok
// SIG undefined FUN_1492b1ca4(void)

undefined8 FUN_1492b1ca4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492b1cf0 FUN_1492b1cf0 body=49 status=ok
// SIG undefined FUN_1492b1cf0(void)

void FUN_1492b1cf0(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x46) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x46) = 0;
  }
  return;
}



// FUNCTION 1492b1d70 FUN_1492b1d70 body=52 status=ok
// SIG undefined FUN_1492b1d70(void)

undefined8 * FUN_1492b1d70(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492b1e22 FUN_1492b1e22 body=86 status=ok
// SIG undefined FUN_1492b1e22(void)

undefined8 FUN_1492b1e22(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_1444888de(param_2,param_3);
      uVar1 = *(undefined4 *)(param_3 + 0x14);
      uVar2 = *(undefined4 *)(param_3 + 0x18);
      uVar3 = *(undefined4 *)(param_3 + 0x1c);
      uVar4 = *(undefined4 *)(param_3 + 0x20);
      uVar5 = *(undefined4 *)(param_3 + 0x24);
      uVar6 = *(undefined4 *)(param_3 + 0x28);
      uVar7 = *(undefined4 *)(param_3 + 0x2c);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      *(undefined4 *)(param_2 + 0x14) = uVar1;
      *(undefined4 *)(param_2 + 0x18) = uVar2;
      *(undefined4 *)(param_2 + 0x1c) = uVar3;
      *(undefined4 *)(param_2 + 0x20) = uVar4;
      *(undefined4 *)(param_2 + 0x24) = uVar5;
      *(undefined4 *)(param_2 + 0x28) = uVar6;
      *(undefined4 *)(param_2 + 0x2c) = uVar7;
      param_3 = param_3 + 0x40;
      param_2 = param_2 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492b1ea0 FUN_1492b1ea0 body=59 status=ok
// SIG undefined FUN_1492b1ea0(void)

undefined8 FUN_1492b1ea0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492b1ee6 FUN_1492b1ee6 body=48 status=ok
// SIG undefined FUN_1492b1ee6(void)

void FUN_1492b1ee6(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 8) == '\x01') {
    *param_2 = &PTR_FUN_14bbf8250;
    if (param_2[2] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 8) = 0;
  }
  return;
}



// FUNCTION 1492b1f64 FUN_1492b1f64 body=57 status=ok
// SIG undefined FUN_1492b1f64(void)

undefined8 * FUN_1492b1f64(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbf8250;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492b1f9e FUN_1492b1f9e body=90 status=ok
// SIG undefined FUN_1492b1f9e(void)

void FUN_1492b1f9e(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbf8440;
  *(undefined8 *)((longlong)param_2 + 0x20c) = 0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  *(undefined8 *)((longlong)param_2 + 0x1f9) = 0;
  *(undefined8 *)((longlong)param_2 + 0x201) = 0;
  *(undefined2 *)((longlong)param_2 + 0x214) = 0xffff;
  *(undefined4 *)(param_2 + 0x43) = 0xffffffff;
  return;
}



// FUNCTION 1492b1ff8 FUN_1492b1ff8 body=90 status=ok
// SIG undefined FUN_1492b1ff8(void)

void FUN_1492b1ff8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbf8440;
  *(undefined8 *)((longlong)param_2 + 0x20c) = 0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  *(undefined8 *)((longlong)param_2 + 0x1f9) = 0;
  *(undefined8 *)((longlong)param_2 + 0x201) = 0;
  *(undefined2 *)((longlong)param_2 + 0x214) = 0xffff;
  *(undefined4 *)(param_2 + 0x43) = 0xffffffff;
  return;
}



// FUNCTION 1492b2076 FUN_1492b2076 body=121 status=ok
// SIG undefined FUN_1492b2076(void)

undefined8 FUN_1492b2076(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  if (param_4 != 0) {
    puVar9 = (undefined8 *)(param_3 + 0x1f0);
    puVar8 = (undefined8 *)(param_2 + 0x1f0);
    do {
      FUN_1491c05d4(puVar8 + -0x3c,puVar9 + -0x3c);
      *puVar8 = *puVar9;
      FUN_1444888de(puVar8 + 1,puVar9 + 1);
      uVar1 = *(undefined4 *)((longlong)puVar9 + 0x1c);
      uVar2 = *(undefined4 *)(puVar9 + 4);
      uVar3 = *(undefined4 *)((longlong)puVar9 + 0x24);
      uVar4 = *(undefined4 *)(puVar9 + 5);
      uVar5 = *(undefined4 *)((longlong)puVar9 + 0x2c);
      uVar6 = *(undefined4 *)(puVar9 + 6);
      uVar7 = *(undefined4 *)((longlong)puVar9 + 0x34);
      *(undefined4 *)(puVar8 + 3) = *(undefined4 *)(puVar9 + 3);
      *(undefined4 *)((longlong)puVar8 + 0x1c) = uVar1;
      *(undefined4 *)(puVar8 + 4) = uVar2;
      *(undefined4 *)((longlong)puVar8 + 0x24) = uVar3;
      *(undefined4 *)(puVar8 + 5) = uVar4;
      *(undefined4 *)((longlong)puVar8 + 0x2c) = uVar5;
      *(undefined4 *)(puVar8 + 6) = uVar6;
      *(undefined4 *)((longlong)puVar8 + 0x34) = uVar7;
      puVar9 = puVar9 + 0x46;
      puVar8 = puVar8 + 0x46;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492b2118 FUN_1492b2118 body=59 status=ok
// SIG undefined FUN_1492b2118(void)

undefined8 FUN_1492b2118(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492b21ba FUN_1492b21ba body=79 status=ok
// SIG undefined FUN_1492b21ba(void)

undefined8 * FUN_1492b21ba(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbf8440;
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492b220a FUN_1492b220a body=76 status=ok
// SIG undefined FUN_1492b220a(void)

void FUN_1492b220a(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x46) == '\x01') {
    *param_1 = &PTR_FUN_14bbf8440;
    if (param_1[0x3f] != 0) {
      FUN_1400020a8();
    }
    *param_1 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_1 + 2);
    *(undefined1 *)(param_1 + 0x46) = 0;
  }
  return;
}



// FUNCTION 1492b2256 FUN_1492b2256 body=162 status=ok
// SIG undefined FUN_1492b2256(void)

void FUN_1492b2256(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbf8630;
  param_2[0x3e] = 0;
  param_2[0x40] = 0;
  param_2[0x41] = 0;
  *(undefined4 *)(param_2 + 0x42) = 0;
  *(undefined4 *)((longlong)param_2 + 0x214) = 0;
  *(undefined4 *)(param_2 + 0x43) = 0;
  *(undefined4 *)((longlong)param_2 + 0x21c) = 0x3ff00000;
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  param_2[0x46] = 0;
  param_2[0x47] = 0;
  param_2[0x48] = 0x3ff0000000000000;
  param_2[0x49] = 0x3ff0000000000000;
  param_2[0x4a] = 0x3ff0000000000000;
  param_2[0x4b] = 0;
  *(undefined1 *)(param_2 + 0x4c) = 1;
  *(undefined1 *)(param_2 + 0x4d) = 0;
  *(undefined8 *)((longlong)param_2 + 0x26c) = 0;
  *(undefined2 *)((longlong)param_2 + 0x274) = 0xffff;
  *(undefined4 *)(param_2 + 0x4f) = 0xffffffff;
  return;
}



// FUNCTION 1492b22f8 FUN_1492b22f8 body=162 status=ok
// SIG undefined FUN_1492b22f8(void)

void FUN_1492b22f8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbf8630;
  param_2[0x3e] = 0;
  param_2[0x40] = 0;
  param_2[0x41] = 0;
  *(undefined4 *)(param_2 + 0x42) = 0;
  *(undefined4 *)((longlong)param_2 + 0x214) = 0;
  *(undefined4 *)(param_2 + 0x43) = 0;
  *(undefined4 *)((longlong)param_2 + 0x21c) = 0x3ff00000;
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  param_2[0x46] = 0;
  param_2[0x47] = 0;
  param_2[0x48] = 0x3ff0000000000000;
  param_2[0x49] = 0x3ff0000000000000;
  param_2[0x4a] = 0x3ff0000000000000;
  param_2[0x4b] = 0;
  *(undefined1 *)(param_2 + 0x4c) = 1;
  *(undefined1 *)(param_2 + 0x4d) = 0;
  *(undefined8 *)((longlong)param_2 + 0x26c) = 0;
  *(undefined2 *)((longlong)param_2 + 0x274) = 0xffff;
  *(undefined4 *)(param_2 + 0x4f) = 0xffffffff;
  return;
}



// FUNCTION 1492b23be FUN_1492b23be body=110 status=ok
// SIG undefined FUN_1492b23be(void)

undefined8 FUN_1492b23be(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_1491c05d4(param_2 + 0x10 + lVar1,param_3 + 0x10 + lVar1);
      memcpy((void *)(param_2 + 0x1f0 + lVar1),(void *)(param_3 + 0x1f0 + lVar1),0x98);
      lVar1 = lVar1 + 0x290;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492b2454 FUN_1492b2454 body=59 status=ok
// SIG undefined FUN_1492b2454(void)

undefined8 FUN_1492b2454(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492b24a0 FUN_1492b24a0 body=49 status=ok
// SIG undefined FUN_1492b24a0(void)

void FUN_1492b24a0(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x52) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x52) = 0;
  }
  return;
}



// FUNCTION 1492b2520 FUN_1492b2520 body=52 status=ok
// SIG undefined FUN_1492b2520(void)

undefined8 * FUN_1492b2520(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492b2556 FUN_1492b2556 body=104 status=ok
// SIG undefined FUN_1492b2556(void)

void FUN_1492b2556(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bbf8820;
  param_2[1] = 0;
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
  *(undefined1 *)(param_2 + 0xe) = 0;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0;
  *(undefined2 *)((longlong)param_2 + 0x7c) = 0xffff;
  *(undefined4 *)(param_2 + 0x10) = 0xffffffff;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 1492b25be FUN_1492b25be body=104 status=ok
// SIG undefined FUN_1492b25be(void)

void FUN_1492b25be(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bbf8820;
  param_2[1] = 0;
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
  *(undefined1 *)(param_2 + 0xe) = 0;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0;
  *(undefined2 *)((longlong)param_2 + 0x7c) = 0xffff;
  *(undefined4 *)(param_2 + 0x10) = 0xffffffff;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 1492b264a FUN_1492b264a body=71 status=ok
// SIG undefined FUN_1492b264a(void)

undefined8 FUN_1492b264a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 8;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x88);
      lVar1 = lVar1 + 0x90;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492b26ba FUN_1492b26ba body=59 status=ok
// SIG undefined FUN_1492b26ba(void)

undefined8 FUN_1492b26ba(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492b2766 FUN_1492b2766 body=29 status=ok
// SIG undefined FUN_1492b2766(void)

undefined8 FUN_1492b2766(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492b2784 FUN_1492b2784 body=109 status=ok
// SIG undefined FUN_1492b2784(void)

void FUN_1492b2784(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbf8a10;
  param_2[0x3e] = 0;
  *(undefined1 *)(param_2 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x264) = 0;
  *(undefined2 *)((longlong)param_2 + 0x26c) = 0xffff;
  *(undefined4 *)(param_2 + 0x4e) = 0xffffffff;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x40;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 1492b27f2 FUN_1492b27f2 body=109 status=ok
// SIG undefined FUN_1492b27f2(void)

void FUN_1492b27f2(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbf8a10;
  param_2[0x3e] = 0;
  *(undefined1 *)(param_2 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x264) = 0;
  *(undefined2 *)((longlong)param_2 + 0x26c) = 0xffff;
  *(undefined4 *)(param_2 + 0x4e) = 0xffffffff;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x40;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 1492b2884 FUN_1492b2884 body=110 status=ok
// SIG undefined FUN_1492b2884(void)

undefined8 FUN_1492b2884(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_1491c05d4(param_2 + 0x10 + lVar1,param_3 + 0x10 + lVar1);
      memcpy((void *)(param_2 + 0x1f0 + lVar1),(void *)(param_3 + 0x1f0 + lVar1),0x90);
      lVar1 = lVar1 + 0x280;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492b291a FUN_1492b291a body=59 status=ok
// SIG undefined FUN_1492b291a(void)

undefined8 FUN_1492b291a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492b2966 FUN_1492b2966 body=49 status=ok
// SIG undefined FUN_1492b2966(void)

void FUN_1492b2966(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 1492b29e6 FUN_1492b29e6 body=52 status=ok
// SIG undefined FUN_1492b29e6(void)

undefined8 * FUN_1492b29e6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492b2a1c FUN_1492b2a1c body=90 status=ok
// SIG undefined FUN_1492b2a1c(void)

void FUN_1492b2a1c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbf8c00;
  *(undefined1 *)(param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x204) = 0;
  param_2[0x3e] = 0;
  *(undefined1 *)(param_2 + 0x3f) = 0;
  *(undefined2 *)((longlong)param_2 + 0x20c) = 0xffff;
  *(undefined4 *)(param_2 + 0x42) = 0xffffffff;
  return;
}



// FUNCTION 1492b2a76 FUN_1492b2a76 body=90 status=ok
// SIG undefined FUN_1492b2a76(void)

void FUN_1492b2a76(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbf8c00;
  *(undefined1 *)(param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x204) = 0;
  param_2[0x3e] = 0;
  *(undefined1 *)(param_2 + 0x3f) = 0;
  *(undefined2 *)((longlong)param_2 + 0x20c) = 0xffff;
  *(undefined4 *)(param_2 + 0x42) = 0xffffffff;
  return;
}



// FUNCTION 1492b2af4 FUN_1492b2af4 body=125 status=ok
// SIG undefined FUN_1492b2af4(void)

undefined1 FUN_1492b2af4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  longlong lVar14;
  
  if (param_4 != 0) {
    lVar14 = 0;
    do {
      FUN_1491c05d4(param_2 + 0x10 + lVar14,param_3 + 0x10 + lVar14);
      puVar1 = (undefined4 *)(param_3 + 0x1f0 + lVar14);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_3 + 0x200 + lVar14);
      uVar6 = *puVar2;
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      puVar2 = (undefined4 *)(param_3 + 0x210 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      uVar12 = puVar2[2];
      uVar13 = puVar2[3];
      puVar2 = (undefined4 *)(param_2 + 0x1f0 + lVar14);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      puVar1 = (undefined4 *)(param_2 + 0x200 + lVar14);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      puVar1 = (undefined4 *)(param_2 + 0x210 + lVar14);
      *puVar1 = uVar10;
      puVar1[1] = uVar11;
      puVar1[2] = uVar12;
      puVar1[3] = uVar13;
      lVar14 = lVar14 + 0x220;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492b2b9a FUN_1492b2b9a body=59 status=ok
// SIG undefined FUN_1492b2b9a(void)

undefined8 FUN_1492b2b9a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492b2be6 FUN_1492b2be6 body=49 status=ok
// SIG undefined FUN_1492b2be6(void)

void FUN_1492b2be6(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x44) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x44) = 0;
  }
  return;
}



// FUNCTION 1492b2c66 FUN_1492b2c66 body=52 status=ok
// SIG undefined FUN_1492b2c66(void)

undefined8 * FUN_1492b2c66(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492b2d18 FUN_1492b2d18 body=59 status=ok
// SIG undefined FUN_1492b2d18(void)

undefined8 FUN_1492b2d18(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492b2dee FUN_1492b2dee body=110 status=ok
// SIG undefined FUN_1492b2dee(void)

undefined8 FUN_1492b2dee(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x200;
    param_2 = param_2 + 0x200;
    do {
      FUN_1491c05d4(param_2 + -0x1f0,param_3 + -0x1f0);
      FUN_1492b2f6c(param_2 + -0x10,param_3 + -0x10);
      FUN_1492ad734(param_2,param_3);
      param_3 = param_3 + 0x210;
      param_2 = param_2 + 0x210;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492b2e84 FUN_1492b2e84 body=59 status=ok
// SIG undefined FUN_1492b2e84(void)

undefined8 FUN_1492b2e84(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492b2ed0 FUN_1492b2ed0 body=40 status=ok
// SIG undefined FUN_1492b2ed0(void)

void FUN_1492b2ed0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x210) == '\x01') {
    FUN_1467130da(param_2);
    *(undefined1 *)(param_2 + 0x210) = 0;
  }
  return;
}



// FUNCTION 1492b2f46 FUN_1492b2f46 body=38 status=ok
// SIG undefined FUN_1492b2f46(void)

undefined8 FUN_1492b2f46(undefined8 param_1,int param_2)

{
  FUN_1467130da();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492b2f6c FUN_1492b2f6c body=89 status=ok
// SIG undefined FUN_1492b2f6c(void)

undefined8 * FUN_1492b2f6c(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1492b2fc6(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 1492b2fc6 FUN_1492b2fc6 body=115 status=ok
// SIG undefined FUN_1492b2fc6(void)

void FUN_1492b2fc6(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc,4);
    iVar2 = (int)(uVar1 / 0xc);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xc,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1492b303a FUN_1492b303a body=94 status=ok
// SIG undefined FUN_1492b303a(void)

void FUN_1492b303a(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbf9140;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0x3f800000;
  *(undefined1 *)(param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x204) = 0;
  *(undefined2 *)((longlong)param_2 + 0x20c) = 0xffff;
  *(undefined4 *)(param_2 + 0x42) = 0xffffffff;
  return;
}



// FUNCTION 1492b3098 FUN_1492b3098 body=94 status=ok
// SIG undefined FUN_1492b3098(void)

void FUN_1492b3098(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbf9140;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0x3f800000;
  *(undefined1 *)(param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x204) = 0;
  *(undefined2 *)((longlong)param_2 + 0x20c) = 0xffff;
  *(undefined4 *)(param_2 + 0x42) = 0xffffffff;
  return;
}



// FUNCTION 1492b311a FUN_1492b311a body=125 status=ok
// SIG undefined FUN_1492b311a(void)

undefined1 FUN_1492b311a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  longlong lVar14;
  
  if (param_4 != 0) {
    lVar14 = 0;
    do {
      FUN_1491c05d4(param_2 + 0x10 + lVar14,param_3 + 0x10 + lVar14);
      puVar1 = (undefined4 *)(param_3 + 0x1f0 + lVar14);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_3 + 0x200 + lVar14);
      uVar6 = *puVar2;
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      puVar2 = (undefined4 *)(param_3 + 0x210 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      uVar12 = puVar2[2];
      uVar13 = puVar2[3];
      puVar2 = (undefined4 *)(param_2 + 0x1f0 + lVar14);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      puVar1 = (undefined4 *)(param_2 + 0x200 + lVar14);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      puVar1 = (undefined4 *)(param_2 + 0x210 + lVar14);
      *puVar1 = uVar10;
      puVar1[1] = uVar11;
      puVar1[2] = uVar12;
      puVar1[3] = uVar13;
      lVar14 = lVar14 + 0x220;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492b31c0 FUN_1492b31c0 body=59 status=ok
// SIG undefined FUN_1492b31c0(void)

undefined8 FUN_1492b31c0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492b320c FUN_1492b320c body=49 status=ok
// SIG undefined FUN_1492b320c(void)

void FUN_1492b320c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x44) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x44) = 0;
  }
  return;
}



// FUNCTION 1492b328c FUN_1492b328c body=52 status=ok
// SIG undefined FUN_1492b328c(void)

undefined8 * FUN_1492b328c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492b3346 FUN_1492b3346 body=59 status=ok
// SIG undefined FUN_1492b3346(void)

undefined8 FUN_1492b3346(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492b341c FUN_1492b341c body=155 status=ok
// SIG undefined FUN_1492b341c(void)

undefined8 FUN_1492b341c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_1491c05d4(param_2 + lVar1 + 0x10,param_3 + lVar1 + 0x10);
      FUN_1492b35c8(param_2 + lVar1 + 0x1f0,param_3 + lVar1 + 0x1f0);
      *(undefined4 *)(param_2 + lVar1 + 0x200) = *(undefined4 *)(param_3 + lVar1 + 0x200);
      FUN_1492ad734(param_2 + lVar1 + 0x208,param_3 + lVar1 + 0x208);
      lVar1 = lVar1 + 0x220;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492b34e0 FUN_1492b34e0 body=59 status=ok
// SIG undefined FUN_1492b34e0(void)

undefined8 FUN_1492b34e0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492b352c FUN_1492b352c body=40 status=ok
// SIG undefined FUN_1492b352c(void)

void FUN_1492b352c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x220) == '\x01') {
    FUN_146713186(param_2);
    *(undefined1 *)(param_2 + 0x220) = 0;
  }
  return;
}



// FUNCTION 1492b35a2 FUN_1492b35a2 body=38 status=ok
// SIG undefined FUN_1492b35a2(void)

undefined8 FUN_1492b35a2(undefined8 param_1,int param_2)

{
  FUN_146713186();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492b35c8 FUN_1492b35c8 body=89 status=ok
// SIG undefined FUN_1492b35c8(void)

undefined8 * FUN_1492b35c8(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1492b3622(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 1492b3622 FUN_1492b3622 body=115 status=ok
// SIG undefined FUN_1492b3622(void)

void FUN_1492b3622(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc,4);
    iVar2 = (int)(uVar1 / 0xc);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xc,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1492b3696 FUN_1492b3696 body=94 status=ok
// SIG undefined FUN_1492b3696(void)

void FUN_1492b3696(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbf9680;
  param_2[0x3e] = 0;
  param_2[0x3f] = 1;
  *(undefined1 *)(param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x204) = 0;
  *(undefined2 *)((longlong)param_2 + 0x20c) = 0xffff;
  *(undefined4 *)(param_2 + 0x42) = 0xffffffff;
  return;
}



// FUNCTION 1492b36f4 FUN_1492b36f4 body=94 status=ok
// SIG undefined FUN_1492b36f4(void)

void FUN_1492b36f4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbf9680;
  param_2[0x3e] = 0;
  param_2[0x3f] = 1;
  *(undefined1 *)(param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x204) = 0;
  *(undefined2 *)((longlong)param_2 + 0x20c) = 0xffff;
  *(undefined4 *)(param_2 + 0x42) = 0xffffffff;
  return;
}



// FUNCTION 1492b3776 FUN_1492b3776 body=125 status=ok
// SIG undefined FUN_1492b3776(void)

undefined1 FUN_1492b3776(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  longlong lVar14;
  
  if (param_4 != 0) {
    lVar14 = 0;
    do {
      FUN_1491c05d4(param_2 + 0x10 + lVar14,param_3 + 0x10 + lVar14);
      puVar1 = (undefined4 *)(param_3 + 0x1f0 + lVar14);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_3 + 0x200 + lVar14);
      uVar6 = *puVar2;
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      puVar2 = (undefined4 *)(param_3 + 0x210 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      uVar12 = puVar2[2];
      uVar13 = puVar2[3];
      puVar2 = (undefined4 *)(param_2 + 0x1f0 + lVar14);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      puVar1 = (undefined4 *)(param_2 + 0x200 + lVar14);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      puVar1 = (undefined4 *)(param_2 + 0x210 + lVar14);
      *puVar1 = uVar10;
      puVar1[1] = uVar11;
      puVar1[2] = uVar12;
      puVar1[3] = uVar13;
      lVar14 = lVar14 + 0x220;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492b381c FUN_1492b381c body=59 status=ok
// SIG undefined FUN_1492b381c(void)

undefined8 FUN_1492b381c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492b3868 FUN_1492b3868 body=49 status=ok
// SIG undefined FUN_1492b3868(void)

void FUN_1492b3868(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x44) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x44) = 0;
  }
  return;
}



// FUNCTION 1492b38e8 FUN_1492b38e8 body=52 status=ok
// SIG undefined FUN_1492b38e8(void)

undefined8 * FUN_1492b38e8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492b39a2 FUN_1492b39a2 body=59 status=ok
// SIG undefined FUN_1492b39a2(void)

undefined8 FUN_1492b39a2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492b3a78 FUN_1492b3a78 body=155 status=ok
// SIG undefined FUN_1492b3a78(void)

undefined8 FUN_1492b3a78(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_1491c05d4(param_2 + lVar1 + 0x10,param_3 + lVar1 + 0x10);
      FUN_1492b3c24(param_2 + lVar1 + 0x1f0,param_3 + lVar1 + 0x1f0);
      *(undefined4 *)(param_2 + lVar1 + 0x200) = *(undefined4 *)(param_3 + lVar1 + 0x200);
      FUN_1492ad734(param_2 + lVar1 + 0x208,param_3 + lVar1 + 0x208);
      lVar1 = lVar1 + 0x220;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492b3b3c FUN_1492b3b3c body=59 status=ok
// SIG undefined FUN_1492b3b3c(void)

undefined8 FUN_1492b3b3c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492b3b88 FUN_1492b3b88 body=40 status=ok
// SIG undefined FUN_1492b3b88(void)

void FUN_1492b3b88(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x220) == '\x01') {
    FUN_146713232(param_2);
    *(undefined1 *)(param_2 + 0x220) = 0;
  }
  return;
}



// FUNCTION 1492b3bfe FUN_1492b3bfe body=38 status=ok
// SIG undefined FUN_1492b3bfe(void)

undefined8 FUN_1492b3bfe(undefined8 param_1,int param_2)

{
  FUN_146713232();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492b3c24 FUN_1492b3c24 body=89 status=ok
// SIG undefined FUN_1492b3c24(void)

undefined8 * FUN_1492b3c24(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1492b3c7e(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 1492b3c7e FUN_1492b3c7e body=115 status=ok
// SIG undefined FUN_1492b3c7e(void)

void FUN_1492b3c7e(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc,4);
    iVar2 = (int)(uVar1 / 0xc);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xc,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1492b3cf2 FUN_1492b3cf2 body=109 status=ok
// SIG undefined FUN_1492b3cf2(void)

void FUN_1492b3cf2(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbf9bc0;
  param_2[0x3e] = 0;
  *(undefined4 *)(param_2 + 0x3f) = 0x3f800000;
  uVar1 = DAT_14c8463f8;
  param_2[0x40] = DAT_14c8463f0;
  param_2[0x41] = uVar1;
  *(undefined1 *)(param_2 + 0x42) = 0;
  *(undefined8 *)((longlong)param_2 + 0x214) = 0;
  *(undefined2 *)((longlong)param_2 + 0x21c) = 0xffff;
  *(undefined4 *)(param_2 + 0x44) = 0xffffffff;
  return;
}



// FUNCTION 1492b3d60 FUN_1492b3d60 body=109 status=ok
// SIG undefined FUN_1492b3d60(void)

void FUN_1492b3d60(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbf9bc0;
  param_2[0x3e] = 0;
  *(undefined4 *)(param_2 + 0x3f) = 0x3f800000;
  uVar1 = DAT_14c8463f8;
  param_2[0x40] = DAT_14c8463f0;
  param_2[0x41] = uVar1;
  *(undefined1 *)(param_2 + 0x42) = 0;
  *(undefined8 *)((longlong)param_2 + 0x214) = 0;
  *(undefined2 *)((longlong)param_2 + 0x21c) = 0xffff;
  *(undefined4 *)(param_2 + 0x44) = 0xffffffff;
  return;
}



// FUNCTION 1492b3df2 FUN_1492b3df2 body=137 status=ok
// SIG undefined FUN_1492b3df2(void)

undefined1 FUN_1492b3df2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  longlong lVar18;
  
  if (param_4 != 0) {
    lVar18 = 0;
    do {
      FUN_1491c05d4(param_2 + 0x10 + lVar18,param_3 + 0x10 + lVar18);
      puVar1 = (undefined4 *)(param_3 + 0x1f0 + lVar18);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_3 + 0x200 + lVar18);
      uVar6 = *puVar2;
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      puVar2 = (undefined4 *)(param_3 + 0x210 + lVar18);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      uVar12 = puVar2[2];
      uVar13 = puVar2[3];
      puVar2 = (undefined4 *)(param_3 + 0x220 + lVar18);
      uVar14 = *puVar2;
      uVar15 = puVar2[1];
      uVar16 = puVar2[2];
      uVar17 = puVar2[3];
      puVar2 = (undefined4 *)(param_2 + 0x1f0 + lVar18);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      puVar1 = (undefined4 *)(param_2 + 0x200 + lVar18);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      puVar1 = (undefined4 *)(param_2 + 0x210 + lVar18);
      *puVar1 = uVar10;
      puVar1[1] = uVar11;
      puVar1[2] = uVar12;
      puVar1[3] = uVar13;
      puVar1 = (undefined4 *)(param_2 + 0x220 + lVar18);
      *puVar1 = uVar14;
      puVar1[1] = uVar15;
      puVar1[2] = uVar16;
      puVar1[3] = uVar17;
      lVar18 = lVar18 + 0x230;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492b3ea4 FUN_1492b3ea4 body=59 status=ok
// SIG undefined FUN_1492b3ea4(void)

undefined8 FUN_1492b3ea4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492b3ef0 FUN_1492b3ef0 body=49 status=ok
// SIG undefined FUN_1492b3ef0(void)

void FUN_1492b3ef0(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x46) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x46) = 0;
  }
  return;
}



// FUNCTION 1492b3f70 FUN_1492b3f70 body=52 status=ok
// SIG undefined FUN_1492b3f70(void)

undefined8 * FUN_1492b3f70(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492b4034 FUN_1492b4034 body=59 status=ok
// SIG undefined FUN_1492b4034(void)

undefined8 FUN_1492b4034(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492b410a FUN_1492b410a body=155 status=ok
// SIG undefined FUN_1492b410a(void)

undefined8 FUN_1492b410a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_1491c05d4(param_2 + lVar1 + 0x10,param_3 + lVar1 + 0x10);
      FUN_1492b42b6(param_2 + lVar1 + 0x1f0,param_3 + lVar1 + 0x1f0);
      *(undefined4 *)(param_2 + lVar1 + 0x200) = *(undefined4 *)(param_3 + lVar1 + 0x200);
      FUN_1492ad734(param_2 + lVar1 + 0x208,param_3 + lVar1 + 0x208);
      lVar1 = lVar1 + 0x220;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492b41ce FUN_1492b41ce body=59 status=ok
// SIG undefined FUN_1492b41ce(void)

undefined8 FUN_1492b41ce(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492b421a FUN_1492b421a body=40 status=ok
// SIG undefined FUN_1492b421a(void)

void FUN_1492b421a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x220) == '\x01') {
    FUN_1467132de(param_2);
    *(undefined1 *)(param_2 + 0x220) = 0;
  }
  return;
}



// FUNCTION 1492b4290 FUN_1492b4290 body=38 status=ok
// SIG undefined FUN_1492b4290(void)

undefined8 FUN_1492b4290(undefined8 param_1,int param_2)

{
  FUN_1467132de();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492b42b6 FUN_1492b42b6 body=89 status=ok
// SIG undefined FUN_1492b42b6(void)

undefined8 * FUN_1492b42b6(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1492b4310(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x18);
      }
    }
  }
  return param_1;
}



// FUNCTION 1492b4310 FUN_1492b4310 body=115 status=ok
// SIG undefined FUN_1492b4310(void)

void FUN_1492b4310(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1492b4384 FUN_1492b4384 body=130 status=ok
// SIG undefined FUN_1492b4384(void)

void FUN_1492b4384(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbfa100;
  param_2[0x3e] = 0;
  *(undefined4 *)(param_2 + 0x3f) = 0x3f800000;
  uVar1 = DAT_14c846518;
  param_2[0x40] = DAT_14c846510;
  param_2[0x41] = uVar1;
  param_2[0x42] = DAT_14c846520;
  *(undefined1 *)(param_2 + 0x43) = 1;
  *(undefined1 *)(param_2 + 0x44) = 0;
  *(undefined8 *)((longlong)param_2 + 0x224) = 0;
  *(undefined2 *)((longlong)param_2 + 0x22c) = 0xffff;
  *(undefined4 *)(param_2 + 0x46) = 0xffffffff;
  return;
}



// FUNCTION 1492b4406 FUN_1492b4406 body=130 status=ok
// SIG undefined FUN_1492b4406(void)

void FUN_1492b4406(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbfa100;
  param_2[0x3e] = 0;
  *(undefined4 *)(param_2 + 0x3f) = 0x3f800000;
  uVar1 = DAT_14c846518;
  param_2[0x40] = DAT_14c846510;
  param_2[0x41] = uVar1;
  param_2[0x42] = DAT_14c846520;
  *(undefined1 *)(param_2 + 0x43) = 1;
  *(undefined1 *)(param_2 + 0x44) = 0;
  *(undefined8 *)((longlong)param_2 + 0x224) = 0;
  *(undefined2 *)((longlong)param_2 + 0x22c) = 0xffff;
  *(undefined4 *)(param_2 + 0x46) = 0xffffffff;
  return;
}



// FUNCTION 1492b44ac FUN_1492b44ac body=114 status=ok
// SIG undefined FUN_1492b44ac(void)

undefined1 FUN_1492b44ac(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      FUN_1491c05d4(param_2 + 0x10 + lVar2,param_3 + 0x10 + lVar2);
      puVar3 = (undefined8 *)(param_3 + 0x1f0 + lVar2);
      puVar4 = (undefined8 *)(param_2 + 0x1f0 + lVar2);
      for (lVar1 = 10; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar2 = lVar2 + 0x240;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492b4546 FUN_1492b4546 body=59 status=ok
// SIG undefined FUN_1492b4546(void)

undefined8 FUN_1492b4546(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492b4592 FUN_1492b4592 body=49 status=ok
// SIG undefined FUN_1492b4592(void)

void FUN_1492b4592(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 1492b4612 FUN_1492b4612 body=52 status=ok
// SIG undefined FUN_1492b4612(void)

undefined8 * FUN_1492b4612(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492b4648 FUN_1492b4648 body=130 status=ok
// SIG undefined FUN_1492b4648(void)

void FUN_1492b4648(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbfa2f0;
  param_2[0x3e] = 0;
  *(undefined4 *)(param_2 + 0x3f) = 0x3f800000;
  uVar1 = DAT_14c846500;
  param_2[0x40] = DAT_14c8464f8;
  param_2[0x41] = uVar1;
  param_2[0x42] = DAT_14c846508;
  *(undefined1 *)(param_2 + 0x43) = 1;
  *(undefined1 *)(param_2 + 0x44) = 0;
  *(undefined8 *)((longlong)param_2 + 0x224) = 0;
  *(undefined2 *)((longlong)param_2 + 0x22c) = 0xffff;
  *(undefined4 *)(param_2 + 0x46) = 0xffffffff;
  return;
}



// FUNCTION 1492b46ca FUN_1492b46ca body=130 status=ok
// SIG undefined FUN_1492b46ca(void)

void FUN_1492b46ca(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbfa2f0;
  param_2[0x3e] = 0;
  *(undefined4 *)(param_2 + 0x3f) = 0x3f800000;
  uVar1 = DAT_14c846500;
  param_2[0x40] = DAT_14c8464f8;
  param_2[0x41] = uVar1;
  param_2[0x42] = DAT_14c846508;
  *(undefined1 *)(param_2 + 0x43) = 1;
  *(undefined1 *)(param_2 + 0x44) = 0;
  *(undefined8 *)((longlong)param_2 + 0x224) = 0;
  *(undefined2 *)((longlong)param_2 + 0x22c) = 0xffff;
  *(undefined4 *)(param_2 + 0x46) = 0xffffffff;
  return;
}



// FUNCTION 1492b4770 FUN_1492b4770 body=114 status=ok
// SIG undefined FUN_1492b4770(void)

undefined1 FUN_1492b4770(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      FUN_1491c05d4(param_2 + 0x10 + lVar2,param_3 + 0x10 + lVar2);
      puVar3 = (undefined8 *)(param_3 + 0x1f0 + lVar2);
      puVar4 = (undefined8 *)(param_2 + 0x1f0 + lVar2);
      for (lVar1 = 10; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar2 = lVar2 + 0x240;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492b480a FUN_1492b480a body=59 status=ok
// SIG undefined FUN_1492b480a(void)

undefined8 FUN_1492b480a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492b4856 FUN_1492b4856 body=49 status=ok
// SIG undefined FUN_1492b4856(void)

void FUN_1492b4856(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 1492b48d6 FUN_1492b48d6 body=52 status=ok
// SIG undefined FUN_1492b48d6(void)

undefined8 * FUN_1492b48d6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492b49c2 FUN_1492b49c2 body=59 status=ok
// SIG undefined FUN_1492b49c2(void)

undefined8 FUN_1492b49c2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492b4a98 FUN_1492b4a98 body=155 status=ok
// SIG undefined FUN_1492b4a98(void)

undefined8 FUN_1492b4a98(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_1491c05d4(param_2 + lVar1 + 0x10,param_3 + lVar1 + 0x10);
      FUN_1492b4c44(param_2 + lVar1 + 0x1f0,param_3 + lVar1 + 0x1f0);
      *(undefined4 *)(param_2 + lVar1 + 0x200) = *(undefined4 *)(param_3 + lVar1 + 0x200);
      FUN_1492ad734(param_2 + lVar1 + 0x208,param_3 + lVar1 + 0x208);
      lVar1 = lVar1 + 0x220;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492b4b5c FUN_1492b4b5c body=59 status=ok
// SIG undefined FUN_1492b4b5c(void)

undefined8 FUN_1492b4b5c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492b4ba8 FUN_1492b4ba8 body=40 status=ok
// SIG undefined FUN_1492b4ba8(void)

void FUN_1492b4ba8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x220) == '\x01') {
    FUN_1467133a8(param_2);
    *(undefined1 *)(param_2 + 0x220) = 0;
  }
  return;
}



// FUNCTION 1492b4c1e FUN_1492b4c1e body=38 status=ok
// SIG undefined FUN_1492b4c1e(void)

undefined8 FUN_1492b4c1e(undefined8 param_1,int param_2)

{
  FUN_1467133a8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492b4c44 FUN_1492b4c44 body=89 status=ok
// SIG undefined FUN_1492b4c44(void)

undefined8 * FUN_1492b4c44(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1492b4c9e(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x28);
      }
    }
  }
  return param_1;
}



// FUNCTION 1492b4c9e FUN_1492b4c9e body=115 status=ok
// SIG undefined FUN_1492b4c9e(void)

void FUN_1492b4c9e(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1492b4d12 FUN_1492b4d12 body=172 status=ok
// SIG undefined FUN_1492b4d12(void)

void FUN_1492b4d12(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbfa830;
  param_2[0x3e] = 0;
  *(undefined4 *)(param_2 + 0x3f) = 0x3f800000;
  param_2[0x40] = 0;
  param_2[0x41] = 0;
  *(undefined4 *)(param_2 + 0x42) = 0;
  *(undefined4 *)((longlong)param_2 + 0x214) = 0;
  *(undefined4 *)(param_2 + 0x43) = 0;
  *(undefined4 *)((longlong)param_2 + 0x21c) = 0x3ff00000;
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  param_2[0x46] = 0;
  param_2[0x47] = 0;
  param_2[0x48] = 0x3ff0000000000000;
  param_2[0x49] = 0x3ff0000000000000;
  param_2[0x4a] = 0x3ff0000000000000;
  param_2[0x4b] = 0;
  *(undefined1 *)(param_2 + 0x4c) = 1;
  *(undefined1 *)(param_2 + 0x4d) = 0;
  *(undefined8 *)((longlong)param_2 + 0x26c) = 0;
  *(undefined2 *)((longlong)param_2 + 0x274) = 0xffff;
  *(undefined4 *)(param_2 + 0x4f) = 0xffffffff;
  return;
}



// FUNCTION 1492b4dbe FUN_1492b4dbe body=172 status=ok
// SIG undefined FUN_1492b4dbe(void)

void FUN_1492b4dbe(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbfa830;
  param_2[0x3e] = 0;
  *(undefined4 *)(param_2 + 0x3f) = 0x3f800000;
  param_2[0x40] = 0;
  param_2[0x41] = 0;
  *(undefined4 *)(param_2 + 0x42) = 0;
  *(undefined4 *)((longlong)param_2 + 0x214) = 0;
  *(undefined4 *)(param_2 + 0x43) = 0;
  *(undefined4 *)((longlong)param_2 + 0x21c) = 0x3ff00000;
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  param_2[0x46] = 0;
  param_2[0x47] = 0;
  param_2[0x48] = 0x3ff0000000000000;
  param_2[0x49] = 0x3ff0000000000000;
  param_2[0x4a] = 0x3ff0000000000000;
  param_2[0x4b] = 0;
  *(undefined1 *)(param_2 + 0x4c) = 1;
  *(undefined1 *)(param_2 + 0x4d) = 0;
  *(undefined8 *)((longlong)param_2 + 0x26c) = 0;
  *(undefined2 *)((longlong)param_2 + 0x274) = 0xffff;
  *(undefined4 *)(param_2 + 0x4f) = 0xffffffff;
  return;
}



// FUNCTION 1492b4e8e FUN_1492b4e8e body=110 status=ok
// SIG undefined FUN_1492b4e8e(void)

undefined8 FUN_1492b4e8e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_1491c05d4(param_2 + 0x10 + lVar1,param_3 + 0x10 + lVar1);
      memcpy((void *)(param_2 + 0x1f0 + lVar1),(void *)(param_3 + 0x1f0 + lVar1),0x98);
      lVar1 = lVar1 + 0x290;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492b4f24 FUN_1492b4f24 body=59 status=ok
// SIG undefined FUN_1492b4f24(void)

undefined8 FUN_1492b4f24(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492b4f70 FUN_1492b4f70 body=49 status=ok
// SIG undefined FUN_1492b4f70(void)

void FUN_1492b4f70(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x52) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x52) = 0;
  }
  return;
}



// FUNCTION 1492b4ff0 FUN_1492b4ff0 body=52 status=ok
// SIG undefined FUN_1492b4ff0(void)

undefined8 * FUN_1492b4ff0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492b5104 FUN_1492b5104 body=59 status=ok
// SIG undefined FUN_1492b5104(void)

undefined8 FUN_1492b5104(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492b51a4 FUN_1492b51a4 body=29 status=ok
// SIG undefined FUN_1492b51a4(void)

undefined8 FUN_1492b51a4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492b51c2 FUN_1492b51c2 body=85 status=ok
// SIG undefined FUN_1492b51c2(void)

void FUN_1492b51c2(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbfac10;
  *(undefined1 *)(param_2 + 0x3e) = 4;
  *(undefined8 *)((longlong)param_2 + 500) = 0;
  param_2[0x40] = 0;
  param_2[0x41] = 0;
  *(undefined1 *)(param_2 + 0x42) = 1;
  param_2[0x43] = 0;
  param_2[0x44] = 0;
  return;
}



// FUNCTION 1492b5218 FUN_1492b5218 body=85 status=ok
// SIG undefined FUN_1492b5218(void)

void FUN_1492b5218(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbfac10;
  *(undefined1 *)(param_2 + 0x3e) = 4;
  *(undefined8 *)((longlong)param_2 + 500) = 0;
  param_2[0x40] = 0;
  param_2[0x41] = 0;
  *(undefined1 *)(param_2 + 0x42) = 1;
  param_2[0x43] = 0;
  param_2[0x44] = 0;
  return;
}



// FUNCTION 1492b5292 FUN_1492b5292 body=183 status=ok
// SIG undefined FUN_1492b5292(void)

undefined8 FUN_1492b5292(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      lVar1 = param_2 + lVar3;
      lVar2 = param_3 + lVar3;
      FUN_1491c05d4(lVar1 + 0x10,lVar2 + 0x10);
      *(undefined8 *)(lVar1 + 0x1f0) = *(undefined8 *)(lVar2 + 0x1f0);
      *(undefined4 *)(lVar1 + 0x1f8) = *(undefined4 *)(lVar2 + 0x1f8);
      FUN_144a787a6(param_2 + lVar3 + 0x200,param_3 + lVar3 + 0x200);
      *(undefined1 *)(lVar1 + 0x210) = *(undefined1 *)(lVar2 + 0x210);
      FUN_1492ad734(param_2 + lVar3 + 0x218,param_3 + lVar3 + 0x218);
      lVar3 = lVar3 + 0x230;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492b5372 FUN_1492b5372 body=59 status=ok
// SIG undefined FUN_1492b5372(void)

undefined8 FUN_1492b5372(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492b53be FUN_1492b53be body=40 status=ok
// SIG undefined FUN_1492b53be(void)

void FUN_1492b53be(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x230) == '\x01') {
    FUN_1492b545a(param_2);
    *(undefined1 *)(param_2 + 0x230) = 0;
  }
  return;
}



// FUNCTION 1492b5434 FUN_1492b5434 body=38 status=ok
// SIG undefined FUN_1492b5434(void)

undefined8 FUN_1492b5434(undefined8 param_1,int param_2)

{
  FUN_1492b545a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492b545a FUN_1492b545a body=79 status=ok
// SIG undefined FUN_1492b545a(void)

void FUN_1492b545a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bbfac10;
  if (param_1[0x43] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  return;
}



// FUNCTION 1492b54aa FUN_1492b54aa body=95 status=ok
// SIG undefined FUN_1492b54aa(void)

void FUN_1492b54aa(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbfae00;
  param_2[0x3e] = 0;
  *(undefined4 *)(param_2 + 0x3f) = 0;
  *(undefined1 *)(param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x204) = 0;
  *(undefined2 *)((longlong)param_2 + 0x20c) = 0xffff;
  *(undefined4 *)(param_2 + 0x42) = 0xffffffff;
  return;
}



// FUNCTION 1492b550a FUN_1492b550a body=95 status=ok
// SIG undefined FUN_1492b550a(void)

void FUN_1492b550a(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbfae00;
  param_2[0x3e] = 0;
  *(undefined4 *)(param_2 + 0x3f) = 0;
  *(undefined1 *)(param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x204) = 0;
  *(undefined2 *)((longlong)param_2 + 0x20c) = 0xffff;
  *(undefined4 *)(param_2 + 0x42) = 0xffffffff;
  return;
}



// FUNCTION 1492b558e FUN_1492b558e body=125 status=ok
// SIG undefined FUN_1492b558e(void)

undefined1 FUN_1492b558e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  longlong lVar14;
  
  if (param_4 != 0) {
    lVar14 = 0;
    do {
      FUN_1491c05d4(param_2 + 0x10 + lVar14,param_3 + 0x10 + lVar14);
      puVar1 = (undefined4 *)(param_3 + 0x1f0 + lVar14);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_3 + 0x200 + lVar14);
      uVar6 = *puVar2;
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      puVar2 = (undefined4 *)(param_3 + 0x210 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      uVar12 = puVar2[2];
      uVar13 = puVar2[3];
      puVar2 = (undefined4 *)(param_2 + 0x1f0 + lVar14);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      puVar1 = (undefined4 *)(param_2 + 0x200 + lVar14);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      puVar1 = (undefined4 *)(param_2 + 0x210 + lVar14);
      *puVar1 = uVar10;
      puVar1[1] = uVar11;
      puVar1[2] = uVar12;
      puVar1[3] = uVar13;
      lVar14 = lVar14 + 0x220;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492b5634 FUN_1492b5634 body=59 status=ok
// SIG undefined FUN_1492b5634(void)

undefined8 FUN_1492b5634(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492b5680 FUN_1492b5680 body=49 status=ok
// SIG undefined FUN_1492b5680(void)

void FUN_1492b5680(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x44) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x44) = 0;
  }
  return;
}



// FUNCTION 1492b5700 FUN_1492b5700 body=52 status=ok
// SIG undefined FUN_1492b5700(void)

undefined8 * FUN_1492b5700(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492b5736 FUN_1492b5736 body=200 status=ok
// SIG undefined FUN_1492b5736(void)

void FUN_1492b5736(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbfaff0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  param_2[0x40] = 0;
  param_2[0x41] = 0;
  *(undefined4 *)(param_2 + 0x42) = 0;
  *(undefined4 *)((longlong)param_2 + 0x214) = 0;
  *(undefined4 *)(param_2 + 0x43) = 0;
  *(undefined4 *)((longlong)param_2 + 0x21c) = 0x3ff00000;
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  param_2[0x46] = 0;
  param_2[0x47] = 0;
  param_2[0x48] = 0x3ff0000000000000;
  param_2[0x49] = 0x3ff0000000000000;
  param_2[0x4a] = 0x3ff0000000000000;
  param_2[0x4b] = 0;
  *(undefined4 *)(param_2 + 0x4c) = 0x3f800000;
  *(undefined1 *)((longlong)param_2 + 0x264) = 1;
  *(undefined1 *)(param_2 + 0x4d) = 0;
  *(undefined8 *)((longlong)param_2 + 0x26c) = 0;
  *(undefined2 *)((longlong)param_2 + 0x274) = 0xffff;
  *(undefined4 *)(param_2 + 0x4f) = 0xffffffff;
  *(undefined1 *)(param_2 + 0x51) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28c) = 0;
  *(undefined2 *)((longlong)param_2 + 0x294) = 0xffff;
  *(undefined4 *)(param_2 + 0x53) = 0xffffffff;
  return;
}



// FUNCTION 1492b57fe FUN_1492b57fe body=200 status=ok
// SIG undefined FUN_1492b57fe(void)

void FUN_1492b57fe(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbfaff0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  param_2[0x40] = 0;
  param_2[0x41] = 0;
  *(undefined4 *)(param_2 + 0x42) = 0;
  *(undefined4 *)((longlong)param_2 + 0x214) = 0;
  *(undefined4 *)(param_2 + 0x43) = 0;
  *(undefined4 *)((longlong)param_2 + 0x21c) = 0x3ff00000;
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  param_2[0x46] = 0;
  param_2[0x47] = 0;
  param_2[0x48] = 0x3ff0000000000000;
  param_2[0x49] = 0x3ff0000000000000;
  param_2[0x4a] = 0x3ff0000000000000;
  param_2[0x4b] = 0;
  *(undefined4 *)(param_2 + 0x4c) = 0x3f800000;
  *(undefined1 *)((longlong)param_2 + 0x264) = 1;
  *(undefined1 *)(param_2 + 0x4d) = 0;
  *(undefined8 *)((longlong)param_2 + 0x26c) = 0;
  *(undefined2 *)((longlong)param_2 + 0x274) = 0xffff;
  *(undefined4 *)(param_2 + 0x4f) = 0xffffffff;
  *(undefined1 *)(param_2 + 0x51) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28c) = 0;
  *(undefined2 *)((longlong)param_2 + 0x294) = 0xffff;
  *(undefined4 *)(param_2 + 0x53) = 0xffffffff;
  return;
}



// FUNCTION 1492b58ea FUN_1492b58ea body=110 status=ok
// SIG undefined FUN_1492b58ea(void)

undefined8 FUN_1492b58ea(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_1491c05d4(param_2 + 0x10 + lVar1,param_3 + 0x10 + lVar1);
      memcpy((void *)(param_2 + 0x1f0 + lVar1),(void *)(param_3 + 0x1f0 + lVar1),0xb8);
      lVar1 = lVar1 + 0x2b0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492b5980 FUN_1492b5980 body=59 status=ok
// SIG undefined FUN_1492b5980(void)

undefined8 FUN_1492b5980(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492b59cc FUN_1492b59cc body=49 status=ok
// SIG undefined FUN_1492b59cc(void)

void FUN_1492b59cc(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x56) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x56) = 0;
  }
  return;
}



// FUNCTION 1492b5a4c FUN_1492b5a4c body=52 status=ok
// SIG undefined FUN_1492b5a4c(void)

undefined8 * FUN_1492b5a4c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492b5a82 FUN_1492b5a82 body=52 status=ok
// SIG undefined FUN_1492b5a82(void)

undefined8 * FUN_1492b5a82(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492b5ab6 FUN_1492b5ab6 body=182 status=ok
// SIG undefined FUN_1492b5ab6(void)

void FUN_1492b5ab6(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbfb080;
  *(undefined1 *)(param_2 + 0x3e) = 1;
  *(undefined8 *)((longlong)param_2 + 500) = 0;
  *(undefined1 *)((longlong)param_2 + 0x1fc) = 1;
  param_2[0x40] = 0;
  *(undefined1 *)(param_2 + 0x41) = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x42;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_2 + 0x4e) = 0x3f800000;
  *(undefined1 *)((longlong)param_2 + 0x274) = 1;
  *(undefined1 *)(param_2 + 0x4f) = 0;
  *(undefined8 *)((longlong)param_2 + 0x27c) = 0;
  *(undefined2 *)((longlong)param_2 + 0x284) = 0xffff;
  *(undefined4 *)(param_2 + 0x51) = 0xffffffff;
  *(undefined1 *)(param_2 + 0x53) = 0;
  *(undefined8 *)((longlong)param_2 + 0x29c) = 0;
  *(undefined2 *)((longlong)param_2 + 0x2a4) = 0xffff;
  *(undefined4 *)(param_2 + 0x55) = 0xffffffff;
  return;
}



// FUNCTION 1492b5b6c FUN_1492b5b6c body=182 status=ok
// SIG undefined FUN_1492b5b6c(void)

void FUN_1492b5b6c(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbfb080;
  *(undefined1 *)(param_2 + 0x3e) = 1;
  *(undefined8 *)((longlong)param_2 + 500) = 0;
  *(undefined1 *)((longlong)param_2 + 0x1fc) = 1;
  param_2[0x40] = 0;
  *(undefined1 *)(param_2 + 0x41) = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x42;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_2 + 0x4e) = 0x3f800000;
  *(undefined1 *)((longlong)param_2 + 0x274) = 1;
  *(undefined1 *)(param_2 + 0x4f) = 0;
  *(undefined8 *)((longlong)param_2 + 0x27c) = 0;
  *(undefined2 *)((longlong)param_2 + 0x284) = 0xffff;
  *(undefined4 *)(param_2 + 0x51) = 0xffffffff;
  *(undefined1 *)(param_2 + 0x53) = 0;
  *(undefined8 *)((longlong)param_2 + 0x29c) = 0;
  *(undefined2 *)((longlong)param_2 + 0x2a4) = 0xffff;
  *(undefined4 *)(param_2 + 0x55) = 0xffffffff;
  return;
}



// FUNCTION 1492b5c46 FUN_1492b5c46 body=110 status=ok
// SIG undefined FUN_1492b5c46(void)

undefined8 FUN_1492b5c46(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_1491c05d4(param_2 + 0x10 + lVar1,param_3 + 0x10 + lVar1);
      memcpy((void *)(param_2 + 0x1f0 + lVar1),(void *)(param_3 + 0x1f0 + lVar1),200);
      lVar1 = lVar1 + 0x2c0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492b5cdc FUN_1492b5cdc body=59 status=ok
// SIG undefined FUN_1492b5cdc(void)

undefined8 FUN_1492b5cdc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492b5d28 FUN_1492b5d28 body=49 status=ok
// SIG undefined FUN_1492b5d28(void)

void FUN_1492b5d28(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 1492b5daa FUN_1492b5daa body=184 status=ok
// SIG undefined FUN_1492b5daa(void)

void FUN_1492b5daa(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278();
  *param_2 = &PTR_FUN_14bbfb3d0;
  *(undefined1 *)(param_2 + 0x3e) = 1;
  *(undefined8 *)((longlong)param_2 + 500) = 0;
  *(undefined1 *)((longlong)param_2 + 0x1fc) = 1;
  param_2[0x40] = 0;
  *(undefined1 *)(param_2 + 0x41) = 0;
  uVar1 = DAT_14c8464e8;
  param_2[0x42] = DAT_14c8464e0;
  param_2[0x43] = uVar1;
  param_2[0x44] = DAT_14c8464f0;
  *(undefined4 *)(param_2 + 0x45) = 0x3f800000;
  *(undefined1 *)((longlong)param_2 + 0x22c) = 1;
  *(undefined1 *)(param_2 + 0x46) = 0;
  *(undefined8 *)((longlong)param_2 + 0x234) = 0;
  *(undefined2 *)((longlong)param_2 + 0x23c) = 0xffff;
  *(undefined4 *)(param_2 + 0x48) = 0xffffffff;
  *(undefined1 *)(param_2 + 0x4a) = 0;
  *(undefined8 *)((longlong)param_2 + 0x254) = 0;
  *(undefined2 *)((longlong)param_2 + 0x25c) = 0xffff;
  *(undefined4 *)(param_2 + 0x4c) = 0xffffffff;
  return;
}



// FUNCTION 1492b5e62 FUN_1492b5e62 body=184 status=ok
// SIG undefined FUN_1492b5e62(void)

void FUN_1492b5e62(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278();
  *param_2 = &PTR_FUN_14bbfb3d0;
  *(undefined1 *)(param_2 + 0x3e) = 1;
  *(undefined8 *)((longlong)param_2 + 500) = 0;
  *(undefined1 *)((longlong)param_2 + 0x1fc) = 1;
  param_2[0x40] = 0;
  *(undefined1 *)(param_2 + 0x41) = 0;
  uVar1 = DAT_14c8464e8;
  param_2[0x42] = DAT_14c8464e0;
  param_2[0x43] = uVar1;
  param_2[0x44] = DAT_14c8464f0;
  *(undefined4 *)(param_2 + 0x45) = 0x3f800000;
  *(undefined1 *)((longlong)param_2 + 0x22c) = 1;
  *(undefined1 *)(param_2 + 0x46) = 0;
  *(undefined8 *)((longlong)param_2 + 0x234) = 0;
  *(undefined2 *)((longlong)param_2 + 0x23c) = 0xffff;
  *(undefined4 *)(param_2 + 0x48) = 0xffffffff;
  *(undefined1 *)(param_2 + 0x4a) = 0;
  *(undefined8 *)((longlong)param_2 + 0x254) = 0;
  *(undefined2 *)((longlong)param_2 + 0x25c) = 0xffff;
  *(undefined4 *)(param_2 + 0x4c) = 0xffffffff;
  return;
}


