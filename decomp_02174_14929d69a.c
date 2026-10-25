// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14929d69a FUN_14929d69a body=38 status=ok
// SIG undefined FUN_14929d69a(void)

undefined8 FUN_14929d69a(undefined8 param_1,int param_2)

{
  FUN_14929d6c4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14929d6c4 FUN_14929d6c4 body=93 status=ok
// SIG undefined FUN_14929d6c4(void)

void FUN_14929d6c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bbe6070;
  param_1[0x5c] = &PTR_FUN_14bbe5ef0;
  if (param_1[0x8a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x87] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  return;
}



// FUNCTION 14929d722 FUN_14929d722 body=224 status=ok
// SIG undefined FUN_14929d722(void)

longlong FUN_14929d722(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  FUN_1491c05d4(param_1 + 0x10,param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 0x1f8);
  uVar2 = *(undefined8 *)(param_2 + 0x200);
  uVar3 = *(undefined8 *)(param_2 + 0x208);
  *(undefined8 *)(param_1 + 0x1f0) = *(undefined8 *)(param_2 + 0x1f0);
  *(undefined8 *)(param_1 + 0x1f8) = uVar1;
  *(undefined8 *)(param_1 + 0x200) = uVar2;
  *(undefined8 *)(param_1 + 0x208) = uVar3;
  puVar5 = (undefined8 *)(param_2 + 0x210);
  puVar6 = (undefined8 *)(param_1 + 0x210);
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined1 *)(param_1 + 0x270) = *(undefined1 *)(param_2 + 0x270);
  puVar5 = (undefined8 *)(param_2 + 0x280);
  puVar6 = (undefined8 *)(param_1 + 0x280);
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined8 *)(param_1 + 0x2e8) = *(undefined8 *)(param_2 + 0x2e8);
  memcpy((void *)(param_1 + 0x2f0),(void *)(param_2 + 0x2f0),0x140);
  *(undefined1 *)(param_1 + 0x430) = *(undefined1 *)(param_2 + 0x430);
  FUN_1444888de(param_1 + 0x438,param_2 + 0x438);
  *(undefined1 *)(param_1 + 0x448) = *(undefined1 *)(param_2 + 0x448);
  FUN_1491920d2(param_1 + 0x450,param_2 + 0x450);
  return param_1;
}



// FUNCTION 14929d84c FUN_14929d84c body=59 status=ok
// SIG undefined FUN_14929d84c(void)

undefined8 FUN_14929d84c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14929d922 FUN_14929d922 body=135 status=ok
// SIG undefined FUN_14929d922(void)

undefined8 FUN_14929d922(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  
  if (param_4 != 0) {
    lVar10 = 0;
    do {
      FUN_1491c05d4(param_2 + 0x10 + lVar10,param_3 + 0x10 + lVar10);
      puVar1 = (undefined4 *)(param_3 + 0x1f0 + lVar10);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_3 + 0x200 + lVar10);
      uVar6 = *puVar2;
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      puVar2 = (undefined4 *)(param_2 + 0x1f0 + lVar10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      puVar1 = (undefined4 *)(param_2 + 0x200 + lVar10);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      *(undefined2 *)(param_2 + 0x210 + lVar10) = *(undefined2 *)(param_3 + 0x210 + lVar10);
      *(undefined1 *)(param_2 + 0x212 + lVar10) = *(undefined1 *)(param_3 + 0x212 + lVar10);
      lVar10 = lVar10 + 0x220;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14929d9d2 FUN_14929d9d2 body=59 status=ok
// SIG undefined FUN_14929d9d2(void)

undefined8 FUN_14929d9d2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14929da1e FUN_14929da1e body=49 status=ok
// SIG undefined FUN_14929da1e(void)

void FUN_14929da1e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x44) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x44) = 0;
  }
  return;
}



// FUNCTION 14929da9e FUN_14929da9e body=188 status=ok
// SIG undefined FUN_14929da9e(void)

undefined8 * FUN_14929da9e(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_1 + 2);
  *(undefined1 *)((longlong)param_1 + 0x204) = 1;
  param_1[0x41] = 0;
  param_1[0x3e] = *(undefined8 *)((longlong)param_1 + 0x204);
  *(undefined4 *)(param_1 + 0x3f) = *(undefined4 *)((longlong)param_1 + 0x20c);
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0;
  *param_1 = &PTR_FUN_14bbe63d0;
  FUN_1446f470e(&local_28,L"NewChannel",1);
  *(undefined8 *)((longlong)param_1 + 0x1fc) = local_28;
  *(undefined2 *)(param_1 + 0x42) = 0;
  *(undefined1 *)((longlong)param_1 + 0x212) = 1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14929db5c FUN_14929db5c body=52 status=ok
// SIG undefined FUN_14929db5c(void)

undefined8 * FUN_14929db5c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14929dbfc FUN_14929dbfc body=59 status=ok
// SIG undefined FUN_14929dbfc(void)

undefined8 FUN_14929dbfc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14929dcd2 FUN_14929dcd2 body=133 status=ok
// SIG undefined FUN_14929dcd2(void)

undefined8 FUN_14929dcd2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
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
      FUN_1491c05d4(param_2 + 0x10 + lVar11,param_3 + 0x10 + lVar11);
      puVar1 = (undefined4 *)(param_3 + 0x1f0 + lVar11);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar2 = (undefined4 *)(param_3 + 0x200 + lVar11);
      uVar7 = *puVar2;
      uVar8 = puVar2[1];
      uVar9 = puVar2[2];
      uVar10 = puVar2[3];
      puVar2 = (undefined4 *)(param_2 + 0x1f0 + lVar11);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      puVar1 = (undefined4 *)(param_2 + 0x200 + lVar11);
      *puVar1 = uVar7;
      puVar1[1] = uVar8;
      puVar1[2] = uVar9;
      puVar1[3] = uVar10;
      uVar3 = *(undefined8 *)(param_3 + 0x216 + lVar11);
      *(undefined8 *)(param_2 + 0x210 + lVar11) = *(undefined8 *)(param_3 + 0x210 + lVar11);
      *(undefined8 *)(param_2 + 0x216 + lVar11) = uVar3;
      lVar11 = lVar11 + 0x220;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14929dd80 FUN_14929dd80 body=59 status=ok
// SIG undefined FUN_14929dd80(void)

undefined8 FUN_14929dd80(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14929ddcc FUN_14929ddcc body=49 status=ok
// SIG undefined FUN_14929ddcc(void)

void FUN_14929ddcc(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x44) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x44) = 0;
  }
  return;
}



// FUNCTION 14929de4c FUN_14929de4c body=198 status=ok
// SIG undefined FUN_14929de4c(void)

undefined8 * FUN_14929de4c(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_1 + 2);
  *(undefined1 *)((longlong)param_1 + 0x204) = 1;
  param_1[0x41] = 0;
  param_1[0x3e] = *(undefined8 *)((longlong)param_1 + 0x204);
  *(undefined4 *)(param_1 + 0x3f) = *(undefined4 *)((longlong)param_1 + 0x20c);
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0;
  *param_1 = &PTR_FUN_14bbe6740;
  *(undefined2 *)((longlong)param_1 + 0x21c) = 0x101;
  FUN_1446f470e(&local_28,L"NewChannel",1);
  *(undefined8 *)((longlong)param_1 + 0x1fc) = local_28;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0x3f800000;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14929df14 FUN_14929df14 body=52 status=ok
// SIG undefined FUN_14929df14(void)

undefined8 * FUN_14929df14(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14929df7e FUN_14929df7e body=133 status=ok
// SIG undefined FUN_14929df7e(void)

undefined8 FUN_14929df7e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
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
      FUN_1491c05d4(param_2 + 0x10 + lVar11,param_3 + 0x10 + lVar11);
      puVar1 = (undefined4 *)(param_3 + 0x1f0 + lVar11);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar2 = (undefined4 *)(param_3 + 0x200 + lVar11);
      uVar7 = *puVar2;
      uVar8 = puVar2[1];
      uVar9 = puVar2[2];
      uVar10 = puVar2[3];
      puVar2 = (undefined4 *)(param_2 + 0x1f0 + lVar11);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      puVar1 = (undefined4 *)(param_2 + 0x200 + lVar11);
      *puVar1 = uVar7;
      puVar1[1] = uVar8;
      puVar1[2] = uVar9;
      puVar1[3] = uVar10;
      uVar3 = *(undefined8 *)(param_3 + 0x216 + lVar11);
      *(undefined8 *)(param_2 + 0x210 + lVar11) = *(undefined8 *)(param_3 + 0x210 + lVar11);
      *(undefined8 *)(param_2 + 0x216 + lVar11) = uVar3;
      lVar11 = lVar11 + 0x220;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14929e02c FUN_14929e02c body=59 status=ok
// SIG undefined FUN_14929e02c(void)

undefined8 FUN_14929e02c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14929e078 FUN_14929e078 body=49 status=ok
// SIG undefined FUN_14929e078(void)

void FUN_14929e078(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x44) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x44) = 0;
  }
  return;
}



// FUNCTION 14929e0f8 FUN_14929e0f8 body=200 status=ok
// SIG undefined FUN_14929e0f8(void)

undefined8 * FUN_14929e0f8(undefined8 *param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_1 + 2);
  *(undefined1 *)((longlong)param_1 + 0x204) = 1;
  param_1[0x41] = 0;
  param_1[0x3e] = *(undefined8 *)((longlong)param_1 + 0x204);
  *(undefined4 *)(param_1 + 0x3f) = *(undefined4 *)((longlong)param_1 + 0x20c);
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0;
  *param_1 = &PTR_FUN_14bbe6930;
  *(undefined2 *)((longlong)param_1 + 0x21c) = 0x101;
  FUN_1446f470e(&local_20,L"NewChannel",1);
  *(undefined8 *)((longlong)param_1 + 0x1fc) = local_20;
  param_1[0x42] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x43) = 0x41200000;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14929e1c2 FUN_14929e1c2 body=52 status=ok
// SIG undefined FUN_14929e1c2(void)

undefined8 * FUN_14929e1c2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14929e22c FUN_14929e22c body=63 status=ok
// SIG undefined FUN_14929e22c(void)

undefined1 FUN_14929e22c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14929e462(param_2,param_3);
    param_3 = param_3 + 0x230;
    param_2 = param_2 + 0x230;
  }
  return 1;
}



// FUNCTION 14929e294 FUN_14929e294 body=59 status=ok
// SIG undefined FUN_14929e294(void)

undefined8 FUN_14929e294(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14929e2e0 FUN_14929e2e0 body=49 status=ok
// SIG undefined FUN_14929e2e0(void)

void FUN_14929e2e0(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x46) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x46) = 0;
  }
  return;
}



// FUNCTION 14929e360 FUN_14929e360 body=205 status=ok
// SIG undefined FUN_14929e360(void)

undefined8 * FUN_14929e360(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_1 + 2);
  *(undefined1 *)((longlong)param_1 + 0x204) = 1;
  param_1[0x41] = 0;
  param_1[0x3e] = *(undefined8 *)((longlong)param_1 + 0x204);
  *(undefined4 *)(param_1 + 0x3f) = *(undefined4 *)((longlong)param_1 + 0x20c);
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0;
  *param_1 = &PTR_FUN_14bbe6b20;
  *(undefined2 *)((longlong)param_1 + 0x21c) = 0x101;
  param_1[0x44] = 0;
  FUN_1446f470e(&local_28,L"NewChannel",1);
  *(undefined8 *)((longlong)param_1 + 0x1fc) = local_28;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 100;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14929e42e FUN_14929e42e body=52 status=ok
// SIG undefined FUN_14929e42e(void)

undefined8 * FUN_14929e42e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14929e462 FUN_14929e462 body=135 status=ok
// SIG undefined FUN_14929e462(void)

longlong FUN_14929e462(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  
  FUN_1491c05d4(param_1 + 0x10,param_2 + 0x10);
  uVar2 = *(undefined4 *)(param_2 + 0x1f0);
  uVar3 = *(undefined4 *)(param_2 + 500);
  uVar4 = *(undefined4 *)(param_2 + 0x1f8);
  uVar5 = *(undefined4 *)(param_2 + 0x1fc);
  uVar6 = *(undefined4 *)(param_2 + 0x204);
  uVar7 = *(undefined4 *)(param_2 + 0x208);
  uVar8 = *(undefined4 *)(param_2 + 0x20c);
  *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(param_2 + 0x200);
  *(undefined4 *)(param_1 + 0x204) = uVar6;
  *(undefined4 *)(param_1 + 0x208) = uVar7;
  *(undefined4 *)(param_1 + 0x20c) = uVar8;
  *(undefined4 *)(param_1 + 0x1f0) = uVar2;
  *(undefined4 *)(param_1 + 500) = uVar3;
  *(undefined4 *)(param_1 + 0x1f8) = uVar4;
  *(undefined4 *)(param_1 + 0x1fc) = uVar5;
  uVar1 = *(undefined8 *)(param_2 + 0x210);
  *(undefined8 *)(param_1 + 0x216) = *(undefined8 *)(param_2 + 0x216);
  *(undefined8 *)(param_1 + 0x210) = uVar1;
  lVar9 = *(longlong *)(param_2 + 0x220);
  if (DAT_14c950c29 == '\x01') {
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar9 = *(longlong *)(param_2 + 0x220);
    }
  }
  *(longlong *)(param_1 + 0x220) = lVar9;
  return param_1;
}



// FUNCTION 14929e556 FUN_14929e556 body=59 status=ok
// SIG undefined FUN_14929e556(void)

undefined8 FUN_14929e556(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14929e62c FUN_14929e62c body=159 status=ok
// SIG undefined FUN_14929e62c(void)

undefined8 FUN_14929e62c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
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
  undefined8 uVar18;
  longlong lVar19;
  
  if (param_4 != 0) {
    lVar19 = 0;
    do {
      FUN_1491c05d4(param_2 + 0x10 + lVar19,param_3 + 0x10 + lVar19);
      puVar2 = (undefined8 *)(param_3 + 0x1f0 + lVar19);
      uVar16 = puVar2[1];
      puVar3 = (undefined8 *)(param_3 + 0x200 + lVar19);
      uVar17 = *puVar3;
      uVar18 = puVar3[1];
      puVar3 = (undefined8 *)(param_2 + 0x1f0 + lVar19);
      *puVar3 = *puVar2;
      puVar3[1] = uVar16;
      puVar2 = (undefined8 *)(param_2 + 0x200 + lVar19);
      *puVar2 = uVar17;
      puVar2[1] = uVar18;
      puVar1 = (undefined4 *)(param_3 + 0x210 + lVar19);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar4 = (undefined4 *)(param_3 + 0x220 + lVar19);
      uVar8 = *puVar4;
      uVar9 = puVar4[1];
      uVar10 = puVar4[2];
      uVar11 = puVar4[3];
      puVar4 = (undefined4 *)(param_3 + 0x230 + lVar19);
      uVar12 = *puVar4;
      uVar13 = puVar4[1];
      uVar14 = puVar4[2];
      uVar15 = puVar4[3];
      puVar4 = (undefined4 *)(param_2 + 0x210 + lVar19);
      *puVar4 = *puVar1;
      puVar4[1] = uVar5;
      puVar4[2] = uVar6;
      puVar4[3] = uVar7;
      puVar1 = (undefined4 *)(param_2 + 0x220 + lVar19);
      *puVar1 = uVar8;
      puVar1[1] = uVar9;
      puVar1[2] = uVar10;
      puVar1[3] = uVar11;
      puVar1 = (undefined4 *)(param_2 + 0x230 + lVar19);
      *puVar1 = uVar12;
      puVar1[1] = uVar13;
      puVar1[2] = uVar14;
      puVar1[3] = uVar15;
      *(undefined4 *)(param_2 + 0x240 + lVar19) = *(undefined4 *)(param_3 + 0x240 + lVar19);
      lVar19 = lVar19 + 0x250;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14929e6f4 FUN_14929e6f4 body=59 status=ok
// SIG undefined FUN_14929e6f4(void)

undefined8 FUN_14929e6f4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14929e740 FUN_14929e740 body=49 status=ok
// SIG undefined FUN_14929e740(void)

void FUN_14929e740(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x4a) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x4a) = 0;
  }
  return;
}



// FUNCTION 14929e7c0 FUN_14929e7c0 body=232 status=ok
// SIG undefined FUN_14929e7c0(void)

undefined8 * FUN_14929e7c0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_1 + 2);
  *(undefined1 *)((longlong)param_1 + 0x204) = 1;
  param_1[0x41] = 0;
  param_1[0x3e] = *(undefined8 *)((longlong)param_1 + 0x204);
  *(undefined4 *)(param_1 + 0x3f) = *(undefined4 *)((longlong)param_1 + 0x20c);
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0;
  *param_1 = &PTR_FUN_14bbe6e70;
  *(undefined4 *)(param_1 + 0x48) = 0x1010101;
  FUN_1446f470e(&local_20,L"NewChannel",1);
  *(undefined8 *)((longlong)param_1 + 0x1fc) = local_20;
  uVar1 = CONCAT44(DAT_14c8463f8._4_4_,(undefined4)DAT_14c8463f8);
  param_1[0x42] = CONCAT44(DAT_14c8463f0._4_4_,(undefined4)DAT_14c8463f0);
  param_1[0x43] = uVar1;
  uVar4 = DAT_14c8463f8._4_4_;
  uVar3 = (undefined4)DAT_14c8463f8;
  uVar2 = DAT_14c8463f0._4_4_;
  *(undefined4 *)(param_1 + 0x44) = (undefined4)DAT_14c8463f0;
  *(undefined4 *)((longlong)param_1 + 0x224) = uVar2;
  *(undefined4 *)(param_1 + 0x45) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x22c) = uVar4;
  param_1[0x46] = 0x3ff0000000000000;
  param_1[0x47] = 0x3ff0000000000000;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14929e8aa FUN_14929e8aa body=52 status=ok
// SIG undefined FUN_14929e8aa(void)

undefined8 * FUN_14929e8aa(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14929e962 FUN_14929e962 body=59 status=ok
// SIG undefined FUN_14929e962(void)

undefined8 FUN_14929e962(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14929ea38 FUN_14929ea38 body=160 status=ok
// SIG undefined FUN_14929ea38(void)

undefined8 FUN_14929ea38(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_1491c05d4(param_2 + 0x10 + lVar11,param_3 + 0x10 + lVar11);
      puVar1 = (undefined4 *)(param_3 + 0x1f0 + lVar11);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_3 + 0x200 + lVar11);
      uVar6 = *puVar2;
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      puVar2 = (undefined4 *)(param_2 + 0x1f0 + lVar11);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      puVar1 = (undefined4 *)(param_2 + 0x200 + lVar11);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      puVar12 = (undefined8 *)(param_3 + 0x210 + lVar11);
      puVar13 = (undefined8 *)(param_2 + 0x210 + lVar11);
      for (lVar10 = 9; lVar10 != 0; lVar10 = lVar10 + -1) {
        *puVar13 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar13 = puVar13 + 1;
      }
      *(undefined4 *)(param_2 + 600 + lVar11) = *(undefined4 *)(param_3 + 600 + lVar11);
      *(undefined2 *)(param_2 + 0x25c + lVar11) = *(undefined2 *)(param_3 + 0x25c + lVar11);
      lVar11 = lVar11 + 0x260;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14929eb00 FUN_14929eb00 body=59 status=ok
// SIG undefined FUN_14929eb00(void)

undefined8 FUN_14929eb00(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14929eb4c FUN_14929eb4c body=49 status=ok
// SIG undefined FUN_14929eb4c(void)

void FUN_14929eb4c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x4c) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x4c) = 0;
  }
  return;
}



// FUNCTION 14929ebcc FUN_14929ebcc body=276 status=ok
// SIG undefined FUN_14929ebcc(void)

undefined8 * FUN_14929ebcc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_1 + 2);
  *(undefined1 *)((longlong)param_1 + 0x204) = 1;
  param_1[0x41] = 0;
  param_1[0x3e] = *(undefined8 *)((longlong)param_1 + 0x204);
  *(undefined4 *)(param_1 + 0x3f) = *(undefined4 *)((longlong)param_1 + 0x20c);
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0;
  *param_1 = &PTR_FUN_14bbe71c0;
  *(undefined4 *)(param_1 + 0x4b) = 0x1010101;
  *(undefined2 *)((longlong)param_1 + 0x25c) = 0x101;
  FUN_1446f470e(&local_20,L"NewChannel",1);
  *(undefined8 *)((longlong)param_1 + 0x1fc) = local_20;
  param_1[0x44] = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x42] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x43] = uVar1;
  param_1[0x47] = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x45) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x22c) = uVar2;
  *(undefined4 *)(param_1 + 0x46) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x234) = uVar4;
  param_1[0x48] = 0x3ff0000000000000;
  param_1[0x49] = 0x3ff0000000000000;
  param_1[0x4a] = 0x3ff0000000000000;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14929ece2 FUN_14929ece2 body=52 status=ok
// SIG undefined FUN_14929ece2(void)

undefined8 * FUN_14929ece2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14929ed4c FUN_14929ed4c body=160 status=ok
// SIG undefined FUN_14929ed4c(void)

undefined8 FUN_14929ed4c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_1491c05d4(param_2 + 0x10 + lVar11,param_3 + 0x10 + lVar11);
      puVar1 = (undefined4 *)(param_3 + 0x1f0 + lVar11);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_3 + 0x200 + lVar11);
      uVar6 = *puVar2;
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      puVar2 = (undefined4 *)(param_2 + 0x1f0 + lVar11);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      puVar1 = (undefined4 *)(param_2 + 0x200 + lVar11);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      puVar12 = (undefined8 *)(param_3 + 0x210 + lVar11);
      puVar13 = (undefined8 *)(param_2 + 0x210 + lVar11);
      for (lVar10 = 9; lVar10 != 0; lVar10 = lVar10 + -1) {
        *puVar13 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar13 = puVar13 + 1;
      }
      *(undefined4 *)(param_2 + 600 + lVar11) = *(undefined4 *)(param_3 + 600 + lVar11);
      *(undefined2 *)(param_2 + 0x25c + lVar11) = *(undefined2 *)(param_3 + 0x25c + lVar11);
      lVar11 = lVar11 + 0x260;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14929ee14 FUN_14929ee14 body=59 status=ok
// SIG undefined FUN_14929ee14(void)

undefined8 FUN_14929ee14(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14929ee60 FUN_14929ee60 body=49 status=ok
// SIG undefined FUN_14929ee60(void)

void FUN_14929ee60(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x4c) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x4c) = 0;
  }
  return;
}



// FUNCTION 14929eee0 FUN_14929eee0 body=276 status=ok
// SIG undefined FUN_14929eee0(void)

undefined8 * FUN_14929eee0(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_1 + 2);
  *(undefined1 *)((longlong)param_1 + 0x204) = 1;
  param_1[0x41] = 0;
  param_1[0x3e] = *(undefined8 *)((longlong)param_1 + 0x204);
  *(undefined4 *)(param_1 + 0x3f) = *(undefined4 *)((longlong)param_1 + 0x20c);
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0;
  *param_1 = &PTR_FUN_14bbe73b0;
  *(undefined4 *)(param_1 + 0x4b) = 0x1010101;
  *(undefined2 *)((longlong)param_1 + 0x25c) = 0x101;
  FUN_1446f470e(&local_20,L"NewChannel",1);
  *(undefined8 *)((longlong)param_1 + 0x1fc) = local_20;
  param_1[0x44] = DAT_14c846520;
  uVar4 = DAT_14c846518;
  param_1[0x42] = DAT_14c846510;
  param_1[0x43] = uVar4;
  param_1[0x47] = DAT_14c8464f0;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x45) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x22c) = uVar1;
  *(undefined4 *)(param_1 + 0x46) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x234) = uVar3;
  param_1[0x48] = 0x4024000000000000;
  param_1[0x49] = 0x4024000000000000;
  param_1[0x4a] = 0x4024000000000000;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14929eff6 FUN_14929eff6 body=52 status=ok
// SIG undefined FUN_14929eff6(void)

undefined8 * FUN_14929eff6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14929f0ae FUN_14929f0ae body=59 status=ok
// SIG undefined FUN_14929f0ae(void)

undefined8 FUN_14929f0ae(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14929f184 FUN_14929f184 body=160 status=ok
// SIG undefined FUN_14929f184(void)

undefined8 FUN_14929f184(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_1491c05d4(param_2 + 0x10 + lVar11,param_3 + 0x10 + lVar11);
      puVar1 = (undefined4 *)(param_3 + 0x1f0 + lVar11);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_3 + 0x200 + lVar11);
      uVar6 = *puVar2;
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      puVar2 = (undefined4 *)(param_2 + 0x1f0 + lVar11);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      puVar1 = (undefined4 *)(param_2 + 0x200 + lVar11);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      puVar12 = (undefined8 *)(param_3 + 0x210 + lVar11);
      puVar13 = (undefined8 *)(param_2 + 0x210 + lVar11);
      for (lVar10 = 9; lVar10 != 0; lVar10 = lVar10 + -1) {
        *puVar13 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar13 = puVar13 + 1;
      }
      *(undefined4 *)(param_2 + 600 + lVar11) = *(undefined4 *)(param_3 + 600 + lVar11);
      *(undefined2 *)(param_2 + 0x25c + lVar11) = *(undefined2 *)(param_3 + 0x25c + lVar11);
      lVar11 = lVar11 + 0x260;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14929f24c FUN_14929f24c body=59 status=ok
// SIG undefined FUN_14929f24c(void)

undefined8 FUN_14929f24c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14929f298 FUN_14929f298 body=49 status=ok
// SIG undefined FUN_14929f298(void)

void FUN_14929f298(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x4c) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x4c) = 0;
  }
  return;
}



// FUNCTION 14929f318 FUN_14929f318 body=279 status=ok
// SIG undefined FUN_14929f318(void)

undefined8 * FUN_14929f318(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_1 + 2);
  *(undefined1 *)((longlong)param_1 + 0x204) = 1;
  param_1[0x41] = 0;
  param_1[0x3e] = *(undefined8 *)((longlong)param_1 + 0x204);
  *(undefined4 *)(param_1 + 0x3f) = *(undefined4 *)((longlong)param_1 + 0x20c);
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0;
  *param_1 = &PTR_FUN_14bbe7700;
  *(undefined4 *)(param_1 + 0x4b) = 0x1010101;
  *(undefined2 *)((longlong)param_1 + 0x25c) = 0x101;
  FUN_1446f470e(&local_20,L"NewChannel",1);
  *(undefined8 *)((longlong)param_1 + 0x1fc) = local_20;
  param_1[0x44] = DAT_14c846508;
  uVar3 = DAT_14c846500._4_4_;
  uVar2 = (undefined4)DAT_14c846500;
  uVar1 = DAT_14c8464f8._4_4_;
  *(undefined4 *)(param_1 + 0x42) = (undefined4)DAT_14c8464f8;
  *(undefined4 *)((longlong)param_1 + 0x214) = uVar1;
  *(undefined4 *)(param_1 + 0x43) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x21c) = uVar3;
  param_1[0x45] = 0xc066800000000000;
  param_1[0x46] = 0xc066800000000000;
  param_1[0x47] = 0xc066800000000000;
  param_1[0x48] = 0x4066800000000000;
  param_1[0x49] = 0x4066800000000000;
  param_1[0x4a] = 0x4066800000000000;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14929f430 FUN_14929f430 body=52 status=ok
// SIG undefined FUN_14929f430(void)

undefined8 * FUN_14929f430(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14929f466 FUN_14929f466 body=107 status=ok
// SIG undefined FUN_14929f466(void)

void FUN_14929f466(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bbe78f0;
  *(undefined1 *)(param_2 + 1) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  *(undefined1 *)(param_2 + 4) = 1;
  FUN_1446f470e((longlong)param_2 + 0x24,L"Default",1);
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0x34) = 0x3f80000000000000;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_2 + 1) = 4;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  return;
}



// FUNCTION 14929f4d2 FUN_14929f4d2 body=107 status=ok
// SIG undefined FUN_14929f4d2(void)

void FUN_14929f4d2(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bbe78f0;
  *(undefined1 *)(param_2 + 1) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  *(undefined1 *)(param_2 + 4) = 1;
  FUN_1446f470e((longlong)param_2 + 0x24,L"Default",1);
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0x34) = 0x3f80000000000000;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_2 + 1) = 4;
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  return;
}



// FUNCTION 14929f562 FUN_14929f562 body=71 status=ok
// SIG undefined FUN_14929f562(void)

undefined8 FUN_14929f562(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 14929f5d2 FUN_14929f5d2 body=59 status=ok
// SIG undefined FUN_14929f5d2(void)

undefined8 FUN_14929f5d2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14929f67e FUN_14929f67e body=29 status=ok
// SIG undefined FUN_14929f67e(void)

undefined8 FUN_14929f67e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14929f69c FUN_14929f69c body=150 status=ok
// SIG undefined FUN_14929f69c(void)

void FUN_14929f69c(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbe7ae0;
  *(undefined1 *)(param_2 + 0x3e) = 0;
  *(undefined8 *)((longlong)param_2 + 500) = 0;
  *(undefined1 *)(param_2 + 0x40) = 1;
  FUN_1446f470e((longlong)param_2 + 0x204,L"Default",1);
  *(undefined8 *)((longlong)param_2 + 0x20c) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0x214) = 0x3f80000000000000;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x44;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_2 + 0x3e) = 4;
  *(undefined8 *)((longlong)param_2 + 500) = 0;
  return;
}



// FUNCTION 14929f732 FUN_14929f732 body=150 status=ok
// SIG undefined FUN_14929f732(void)

void FUN_14929f732(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbe7ae0;
  *(undefined1 *)(param_2 + 0x3e) = 0;
  *(undefined8 *)((longlong)param_2 + 500) = 0;
  *(undefined1 *)(param_2 + 0x40) = 1;
  FUN_1446f470e((longlong)param_2 + 0x204,L"Default",1);
  *(undefined8 *)((longlong)param_2 + 0x20c) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0x214) = 0x3f80000000000000;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x44;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_2 + 0x3e) = 4;
  *(undefined8 *)((longlong)param_2 + 500) = 0;
  return;
}



// FUNCTION 14929f7ec FUN_14929f7ec body=110 status=ok
// SIG undefined FUN_14929f7ec(void)

undefined8 FUN_14929f7ec(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 14929f882 FUN_14929f882 body=59 status=ok
// SIG undefined FUN_14929f882(void)

undefined8 FUN_14929f882(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14929f8ce FUN_14929f8ce body=49 status=ok
// SIG undefined FUN_14929f8ce(void)

void FUN_14929f8ce(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 14929f94e FUN_14929f94e body=52 status=ok
// SIG undefined FUN_14929f94e(void)

undefined8 * FUN_14929f94e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14929f9b8 FUN_14929f9b8 body=161 status=ok
// SIG undefined FUN_14929f9b8(void)

undefined8 FUN_14929f9b8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x288;
    param_2 = param_2 + 0x288;
    do {
      FUN_1491c05d4(param_2 + -0x278,param_3 + -0x278);
      uVar1 = *(undefined4 *)(param_3 + -0x94);
      uVar2 = *(undefined4 *)(param_3 + -0x90);
      uVar3 = *(undefined4 *)(param_3 + -0x8c);
      uVar4 = *(undefined4 *)(param_3 + -0x88);
      uVar5 = *(undefined4 *)(param_3 + -0x84);
      uVar6 = *(undefined4 *)(param_3 + -0x80);
      uVar7 = *(undefined4 *)(param_3 + -0x7c);
      *(undefined4 *)(param_2 + -0x98) = *(undefined4 *)(param_3 + -0x98);
      *(undefined4 *)(param_2 + -0x94) = uVar1;
      *(undefined4 *)(param_2 + -0x90) = uVar2;
      *(undefined4 *)(param_2 + -0x8c) = uVar3;
      *(undefined4 *)(param_2 + -0x88) = uVar4;
      *(undefined4 *)(param_2 + -0x84) = uVar5;
      *(undefined4 *)(param_2 + -0x80) = uVar6;
      *(undefined4 *)(param_2 + -0x7c) = uVar7;
      puVar9 = (undefined8 *)(param_3 + -0x78);
      puVar10 = (undefined8 *)(param_2 + -0x78);
      for (lVar8 = 0xe; lVar8 != 0; lVar8 = lVar8 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      FUN_144a787a6(param_2,param_3);
      param_3 = param_3 + 0x2a0;
      param_2 = param_2 + 0x2a0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14929fa82 FUN_14929fa82 body=59 status=ok
// SIG undefined FUN_14929fa82(void)

undefined8 FUN_14929fa82(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14929fb24 FUN_14929fb24 body=334 status=ok
// SIG undefined FUN_14929fb24(void)

undefined8 * FUN_14929fb24(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_1 + 2);
  *(undefined1 *)((longlong)param_1 + 0x204) = 1;
  param_1[0x41] = 0;
  param_1[0x3e] = *(undefined8 *)((longlong)param_1 + 0x204);
  *(undefined4 *)(param_1 + 0x3f) = *(undefined4 *)((longlong)param_1 + 0x20c);
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0;
  *param_1 = &PTR_FUN_14bbe7cd0;
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
  *(undefined4 *)(param_1 + 0x4a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x254) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x25c) = 0x3ff00000;
  param_1[0x4c] = 0x3ff0000000000000;
  param_1[0x4d] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  FUN_1446f470e(&local_48,L"NewSocket",1);
  *(undefined8 *)((longlong)param_1 + 0x1fc) = local_48;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x42;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_1 + 0x4e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x274) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x4f) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x27c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x50) = 0x3f800000;
  if (param_1[0x51] != 0) {
    FUN_1400020a8();
  }
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14929fc74 FUN_14929fc74 body=79 status=ok
// SIG undefined FUN_14929fc74(void)

undefined8 * FUN_14929fc74(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbe7cd0;
  if (param_1[0x51] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14929fcc8 FUN_14929fcc8 body=76 status=ok
// SIG undefined FUN_14929fcc8(void)

void FUN_14929fcc8(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x54) == '\x01') {
    *param_1 = &PTR_FUN_14bbe7cd0;
    if (param_1[0x51] != 0) {
      FUN_1400020a8();
    }
    *param_1 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_1 + 2);
    *(undefined1 *)(param_1 + 0x54) = 0;
  }
  return;
}



// FUNCTION 14929fd14 FUN_14929fd14 body=71 status=ok
// SIG undefined FUN_14929fd14(void)

undefined8 * FUN_14929fd14(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbe7d80;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14929fdc4 FUN_14929fdc4 body=59 status=ok
// SIG undefined FUN_14929fdc4(void)

undefined8 FUN_14929fdc4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14929fe66 FUN_14929fe66 body=59 status=ok
// SIG undefined FUN_14929fe66(void)

void FUN_14929fe66(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x1f0);
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbe80d0;
  return;
}



// FUNCTION 14929fea2 FUN_14929fea2 body=43 status=ok
// SIG undefined FUN_14929fea2(void)

void FUN_14929fea2(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbe80d0;
  return;
}



// FUNCTION 14929fef2 FUN_14929fef2 body=70 status=ok
// SIG undefined FUN_14929fef2(void)

undefined1 FUN_14929fef2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 14929ff60 FUN_14929ff60 body=59 status=ok
// SIG undefined FUN_14929ff60(void)

undefined8 FUN_14929ff60(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14929ffac FUN_14929ffac body=49 status=ok
// SIG undefined FUN_14929ffac(void)

void FUN_14929ffac(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x3e) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x3e) = 0;
  }
  return;
}



// FUNCTION 1492a002c FUN_1492a002c body=52 status=ok
// SIG undefined FUN_1492a002c(void)

undefined8 * FUN_1492a002c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a0182 FUN_1492a0182 body=42 status=ok
// SIG undefined FUN_1492a0182(void)

undefined8 FUN_1492a0182(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 1492a01d4 FUN_1492a01d4 body=59 status=ok
// SIG undefined FUN_1492a01d4(void)

undefined8 FUN_1492a01d4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492a0274 FUN_1492a0274 body=29 status=ok
// SIG undefined FUN_1492a0274(void)

undefined8 FUN_1492a0274(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a032e FUN_1492a032e body=107 status=ok
// SIG undefined FUN_1492a032e(void)

undefined8 FUN_1492a032e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
    do {
      uVar1 = *(undefined8 *)(param_3 + -0x40);
      *(undefined8 *)(param_2 + -0x3a) = *(undefined8 *)(param_3 + -0x3a);
      *(undefined8 *)(param_2 + -0x40) = uVar1;
      FUN_1444888de(param_2 + -0x30,param_3 + -0x30);
      uVar2 = *(undefined4 *)(param_3 + -0x1c);
      uVar3 = *(undefined4 *)(param_3 + -0x18);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0x10);
      uVar6 = *(undefined4 *)(param_3 + -0xc);
      uVar7 = *(undefined4 *)(param_3 + -8);
      uVar8 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x20) = *(undefined4 *)(param_3 + -0x20);
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      *(undefined4 *)(param_2 + -0x10) = uVar5;
      *(undefined4 *)(param_2 + -0xc) = uVar6;
      *(undefined4 *)(param_2 + -8) = uVar7;
      *(undefined4 *)(param_2 + -4) = uVar8;
      FUN_1444888de(param_2,param_3);
      param_3 = param_3 + 0x58;
      param_2 = param_2 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492a03c2 FUN_1492a03c2 body=59 status=ok
// SIG undefined FUN_1492a03c2(void)

undefined8 FUN_1492a03c2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492a045e FUN_1492a045e body=71 status=ok
// SIG undefined FUN_1492a045e(void)

undefined8 * FUN_1492a045e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbe84b0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a04a6 FUN_1492a04a6 body=62 status=ok
// SIG undefined FUN_1492a04a6(void)

void FUN_1492a04a6(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0xb) == '\x01') {
    *param_1 = &PTR_FUN_14bbe84b0;
    if (param_1[9] != 0) {
      FUN_1400020a8();
    }
    if (param_1[3] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0xb) = 0;
  }
  return;
}



// FUNCTION 1492a0588 FUN_1492a0588 body=107 status=ok
// SIG undefined FUN_1492a0588(void)

undefined8 FUN_1492a0588(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
    do {
      uVar1 = *(undefined8 *)(param_3 + -0x40);
      *(undefined8 *)(param_2 + -0x39) = *(undefined8 *)(param_3 + -0x39);
      *(undefined8 *)(param_2 + -0x40) = uVar1;
      FUN_1444888de(param_2 + -0x30,param_3 + -0x30);
      uVar2 = *(undefined4 *)(param_3 + -0x1c);
      uVar3 = *(undefined4 *)(param_3 + -0x18);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0x10);
      uVar6 = *(undefined4 *)(param_3 + -0xc);
      uVar7 = *(undefined4 *)(param_3 + -8);
      uVar8 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x20) = *(undefined4 *)(param_3 + -0x20);
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      *(undefined4 *)(param_2 + -0x10) = uVar5;
      *(undefined4 *)(param_2 + -0xc) = uVar6;
      *(undefined4 *)(param_2 + -8) = uVar7;
      *(undefined4 *)(param_2 + -4) = uVar8;
      FUN_1444888de(param_2,param_3);
      param_3 = param_3 + 0x58;
      param_2 = param_2 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492a061c FUN_1492a061c body=59 status=ok
// SIG undefined FUN_1492a061c(void)

undefined8 FUN_1492a061c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492a06ba FUN_1492a06ba body=62 status=ok
// SIG undefined FUN_1492a06ba(void)

void FUN_1492a06ba(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0xb) == '\x01') {
    *param_1 = &PTR_FUN_14bbea620;
    if (param_1[9] != 0) {
      FUN_1400020a8();
    }
    if (param_1[3] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0xb) = 0;
  }
  return;
}



// FUNCTION 1492a0794 FUN_1492a0794 body=107 status=ok
// SIG undefined FUN_1492a0794(void)

undefined8 FUN_1492a0794(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
    do {
      uVar1 = *(undefined8 *)(param_3 + -0x40);
      *(undefined8 *)(param_2 + -0x3a) = *(undefined8 *)(param_3 + -0x3a);
      *(undefined8 *)(param_2 + -0x40) = uVar1;
      FUN_1444888de(param_2 + -0x30,param_3 + -0x30);
      uVar2 = *(undefined4 *)(param_3 + -0x1c);
      uVar3 = *(undefined4 *)(param_3 + -0x18);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0x10);
      uVar6 = *(undefined4 *)(param_3 + -0xc);
      uVar7 = *(undefined4 *)(param_3 + -8);
      uVar8 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x20) = *(undefined4 *)(param_3 + -0x20);
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      *(undefined4 *)(param_2 + -0x10) = uVar5;
      *(undefined4 *)(param_2 + -0xc) = uVar6;
      *(undefined4 *)(param_2 + -8) = uVar7;
      *(undefined4 *)(param_2 + -4) = uVar8;
      FUN_1444888de(param_2,param_3);
      param_3 = param_3 + 0x58;
      param_2 = param_2 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492a0828 FUN_1492a0828 body=59 status=ok
// SIG undefined FUN_1492a0828(void)

undefined8 FUN_1492a0828(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492a08c4 FUN_1492a08c4 body=71 status=ok
// SIG undefined FUN_1492a08c4(void)

undefined8 * FUN_1492a08c4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbe8800;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a090c FUN_1492a090c body=62 status=ok
// SIG undefined FUN_1492a090c(void)

void FUN_1492a090c(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0xb) == '\x01') {
    *param_1 = &PTR_FUN_14bbe8800;
    if (param_1[9] != 0) {
      FUN_1400020a8();
    }
    if (param_1[3] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0xb) = 0;
  }
  return;
}



// FUNCTION 1492a09de FUN_1492a09de body=107 status=ok
// SIG undefined FUN_1492a09de(void)

undefined8 FUN_1492a09de(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
    do {
      uVar1 = *(undefined8 *)(param_3 + -0x40);
      *(undefined8 *)(param_2 + -0x3b) = *(undefined8 *)(param_3 + -0x3b);
      *(undefined8 *)(param_2 + -0x40) = uVar1;
      FUN_1444888de(param_2 + -0x30,param_3 + -0x30);
      uVar2 = *(undefined4 *)(param_3 + -0x1c);
      uVar3 = *(undefined4 *)(param_3 + -0x18);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0x10);
      uVar6 = *(undefined4 *)(param_3 + -0xc);
      uVar7 = *(undefined4 *)(param_3 + -8);
      uVar8 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x20) = *(undefined4 *)(param_3 + -0x20);
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      *(undefined4 *)(param_2 + -0x10) = uVar5;
      *(undefined4 *)(param_2 + -0xc) = uVar6;
      *(undefined4 *)(param_2 + -8) = uVar7;
      *(undefined4 *)(param_2 + -4) = uVar8;
      FUN_1444888de(param_2,param_3);
      param_3 = param_3 + 0x58;
      param_2 = param_2 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492a0a72 FUN_1492a0a72 body=59 status=ok
// SIG undefined FUN_1492a0a72(void)

undefined8 FUN_1492a0a72(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492a0b0e FUN_1492a0b0e body=71 status=ok
// SIG undefined FUN_1492a0b0e(void)

undefined8 * FUN_1492a0b0e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbe89f0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a0b56 FUN_1492a0b56 body=62 status=ok
// SIG undefined FUN_1492a0b56(void)

void FUN_1492a0b56(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0xb) == '\x01') {
    *param_1 = &PTR_FUN_14bbe89f0;
    if (param_1[9] != 0) {
      FUN_1400020a8();
    }
    if (param_1[3] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0xb) = 0;
  }
  return;
}



// FUNCTION 1492a0c30 FUN_1492a0c30 body=107 status=ok
// SIG undefined FUN_1492a0c30(void)

undefined8 FUN_1492a0c30(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
    do {
      uVar1 = *(undefined8 *)(param_3 + -0x40);
      *(undefined8 *)(param_2 + -0x3a) = *(undefined8 *)(param_3 + -0x3a);
      *(undefined8 *)(param_2 + -0x40) = uVar1;
      FUN_1444888de(param_2 + -0x30,param_3 + -0x30);
      uVar2 = *(undefined4 *)(param_3 + -0x1c);
      uVar3 = *(undefined4 *)(param_3 + -0x18);
      uVar4 = *(undefined4 *)(param_3 + -0x14);
      uVar5 = *(undefined4 *)(param_3 + -0x10);
      uVar6 = *(undefined4 *)(param_3 + -0xc);
      uVar7 = *(undefined4 *)(param_3 + -8);
      uVar8 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x20) = *(undefined4 *)(param_3 + -0x20);
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      *(undefined4 *)(param_2 + -0x10) = uVar5;
      *(undefined4 *)(param_2 + -0xc) = uVar6;
      *(undefined4 *)(param_2 + -8) = uVar7;
      *(undefined4 *)(param_2 + -4) = uVar8;
      FUN_1444888de(param_2,param_3);
      param_3 = param_3 + 0x58;
      param_2 = param_2 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492a0cc4 FUN_1492a0cc4 body=59 status=ok
// SIG undefined FUN_1492a0cc4(void)

undefined8 FUN_1492a0cc4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492a0d62 FUN_1492a0d62 body=62 status=ok
// SIG undefined FUN_1492a0d62(void)

void FUN_1492a0d62(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0xb) == '\x01') {
    *param_1 = &PTR_FUN_14bbea6b0;
    if (param_1[9] != 0) {
      FUN_1400020a8();
    }
    if (param_1[3] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0xb) = 0;
  }
  return;
}



// FUNCTION 1492a0efc FUN_1492a0efc body=131 status=ok
// SIG undefined FUN_1492a0efc(void)

undefined1 FUN_1492a0efc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x78;
    param_2 = param_2 + 0x78;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x70);
      uVar2 = *(undefined4 *)(param_3 + -0x6c);
      uVar3 = *(undefined4 *)(param_3 + -0x68);
      uVar4 = *(undefined4 *)(param_3 + -100);
      uVar5 = *(undefined4 *)(param_3 + -0x61);
      uVar6 = *(undefined4 *)(param_3 + -0x5d);
      uVar7 = *(undefined4 *)(param_3 + -0x59);
      *(undefined4 *)(param_2 + -0x65) = *(undefined4 *)(param_3 + -0x65);
      *(undefined4 *)(param_2 + -0x61) = uVar5;
      *(undefined4 *)(param_2 + -0x5d) = uVar6;
      *(undefined4 *)(param_2 + -0x59) = uVar7;
      *(undefined4 *)(param_2 + -0x70) = uVar1;
      *(undefined4 *)(param_2 + -0x6c) = uVar2;
      *(undefined4 *)(param_2 + -0x68) = uVar3;
      *(undefined4 *)(param_2 + -100) = uVar4;
      FUN_1444888de(param_2 + -0x50,param_3 + -0x50);
      uVar1 = *(undefined4 *)(param_3 + -0x3c);
      uVar2 = *(undefined4 *)(param_3 + -0x38);
      uVar3 = *(undefined4 *)(param_3 + -0x34);
      uVar4 = *(undefined4 *)(param_3 + -0x30);
      uVar5 = *(undefined4 *)(param_3 + -0x2c);
      uVar6 = *(undefined4 *)(param_3 + -0x28);
      uVar7 = *(undefined4 *)(param_3 + -0x24);
      uVar8 = *(undefined4 *)(param_3 + -0x20);
      uVar9 = *(undefined4 *)(param_3 + -0x1c);
      uVar10 = *(undefined4 *)(param_3 + -0x18);
      uVar11 = *(undefined4 *)(param_3 + -0x14);
      uVar12 = *(undefined4 *)(param_3 + -0x10);
      uVar13 = *(undefined4 *)(param_3 + -0xc);
      uVar14 = *(undefined4 *)(param_3 + -8);
      uVar15 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x40) = *(undefined4 *)(param_3 + -0x40);
      *(undefined4 *)(param_2 + -0x3c) = uVar1;
      *(undefined4 *)(param_2 + -0x38) = uVar2;
      *(undefined4 *)(param_2 + -0x34) = uVar3;
      *(undefined4 *)(param_2 + -0x30) = uVar4;
      *(undefined4 *)(param_2 + -0x2c) = uVar5;
      *(undefined4 *)(param_2 + -0x28) = uVar6;
      *(undefined4 *)(param_2 + -0x24) = uVar7;
      *(undefined4 *)(param_2 + -0x20) = uVar8;
      *(undefined4 *)(param_2 + -0x1c) = uVar9;
      *(undefined4 *)(param_2 + -0x18) = uVar10;
      *(undefined4 *)(param_2 + -0x14) = uVar11;
      *(undefined4 *)(param_2 + -0x10) = uVar12;
      *(undefined4 *)(param_2 + -0xc) = uVar13;
      *(undefined4 *)(param_2 + -8) = uVar14;
      *(undefined4 *)(param_2 + -4) = uVar15;
      FUN_1444888de(param_2,param_3);
      param_3 = param_3 + 0x88;
      param_2 = param_2 + 0x88;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492a0fa8 FUN_1492a0fa8 body=59 status=ok
// SIG undefined FUN_1492a0fa8(void)

undefined8 FUN_1492a0fa8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492a104c FUN_1492a104c body=68 status=ok
// SIG undefined FUN_1492a104c(void)

void FUN_1492a104c(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x11) == '\x01') {
    *param_1 = &PTR_FUN_14bbe1d20;
    if (param_1[0xf] != 0) {
      FUN_1400020a8();
    }
    if (param_1[5] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x11) = 0;
  }
  return;
}



// FUNCTION 1492a10c4 FUN_1492a10c4 body=150 status=ok
// SIG undefined FUN_1492a10c4(void)

undefined8 FUN_1492a10c4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      *(undefined2 *)(param_2 + lVar3 + 8) = *(undefined2 *)(param_3 + lVar3 + 8);
      FUN_1444888de();
      lVar1 = param_2 + lVar3;
      lVar2 = param_3 + lVar3;
      FUN_1491c4070(lVar1 + 0x20,lVar2 + 0x20);
      *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)(lVar2 + 0x30);
      *(undefined4 *)(lVar1 + 0x38) = *(undefined4 *)(lVar2 + 0x38);
      FUN_1459a7e20(param_2 + lVar3 + 0x40,param_3 + lVar3 + 0x40);
      lVar3 = lVar3 + 0x90;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492a1182 FUN_1492a1182 body=59 status=ok
// SIG undefined FUN_1492a1182(void)

undefined8 FUN_1492a1182(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492a11ce FUN_1492a11ce body=63 status=ok
// SIG undefined FUN_1492a11ce(void)

void FUN_1492a11ce(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x12) == '\x01') {
    *param_2 = &PTR_FUN_14bbe8ea0;
    FUN_1401f95f4(param_2 + 4);
    if (param_2[2] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x12) = 0;
  }
  return;
}



// FUNCTION 1492a125c FUN_1492a125c body=224 status=ok
// SIG undefined FUN_1492a125c(void)

undefined8 * FUN_1492a125c(undefined8 *param_1)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_1 = &PTR_FUN_14bbe8ea0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined2 *)(param_1 + 1) = 0xff00;
  param_1[2] = 0;
  param_1[3] = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0xffffffffffffffff;
  local_70 = 0xffffffff;
  local_48 = 0;
  local_40 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_3c = 0xffffffff00000080;
  local_34 = 0;
  local_28 = 0;
  local_20 = 0;
  FUN_149185768(param_1 + 4,&local_88);
  FUN_1401f95f4(&local_88);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492a133e FUN_1492a133e body=66 status=ok
// SIG undefined FUN_1492a133e(void)

undefined8 * FUN_1492a133e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbe8ea0;
  FUN_1401f95f4(param_1 + 4);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a13b6 FUN_1492a13b6 body=150 status=ok
// SIG undefined FUN_1492a13b6(void)

undefined8 FUN_1492a13b6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      *(undefined2 *)(param_2 + lVar3 + 8) = *(undefined2 *)(param_3 + lVar3 + 8);
      FUN_1444888de();
      lVar1 = param_2 + lVar3;
      lVar2 = param_3 + lVar3;
      FUN_1491c4070(lVar1 + 0x20,lVar2 + 0x20);
      *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)(lVar2 + 0x30);
      *(undefined4 *)(lVar1 + 0x38) = *(undefined4 *)(lVar2 + 0x38);
      FUN_1459a7e20(param_2 + lVar3 + 0x40,param_3 + lVar3 + 0x40);
      lVar3 = lVar3 + 0x90;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492a1474 FUN_1492a1474 body=59 status=ok
// SIG undefined FUN_1492a1474(void)

undefined8 FUN_1492a1474(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492a14c0 FUN_1492a14c0 body=63 status=ok
// SIG undefined FUN_1492a14c0(void)

void FUN_1492a14c0(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x12) == '\x01') {
    *param_2 = &PTR_FUN_14bbea740;
    FUN_1401f95f4(param_2 + 4);
    if (param_2[2] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x12) = 0;
  }
  return;
}



// FUNCTION 1492a1584 FUN_1492a1584 body=63 status=ok
// SIG undefined FUN_1492a1584(void)

undefined1 FUN_1492a1584(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1492a186a(param_2,param_3);
    param_3 = param_3 + 0x280;
    param_2 = param_2 + 0x280;
  }
  return 1;
}



// FUNCTION 1492a15ec FUN_1492a15ec body=59 status=ok
// SIG undefined FUN_1492a15ec(void)

undefined8 FUN_1492a15ec(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492a1638 FUN_1492a1638 body=40 status=ok
// SIG undefined FUN_1492a1638(void)

void FUN_1492a1638(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x280) == '\x01') {
    FUN_1492a1820(param_2);
    *(undefined1 *)(param_2 + 0x280) = 0;
  }
  return;
}



// FUNCTION 1492a16ae FUN_1492a16ae body=331 status=ok
// SIG undefined FUN_1492a16ae(void)

undefined8 * FUN_1492a16ae(undefined8 *param_1)

{
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_1 + 2);
  *param_1 = &PTR_FUN_14bbe91f0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x41) = 0xffffffff;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined8 *)((longlong)param_1 + 0x23c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x244) = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0xffffffffffffffff;
  local_90 = 0xffffffff;
  local_68 = 0;
  local_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  FUN_149185768(param_1 + 0x3e,&local_a8);
  FUN_1401f95f4(&local_a8);
  *(undefined2 *)(param_1 + 0x4c) = 0xff;
  if (param_1[0x4d] != 0) {
    FUN_1400020a8();
  }
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0x3f800000;
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492a17fa FUN_1492a17fa body=38 status=ok
// SIG undefined FUN_1492a17fa(void)

undefined8 FUN_1492a17fa(undefined8 param_1,int param_2)

{
  FUN_1492a1820();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a1820 FUN_1492a1820 body=74 status=ok
// SIG undefined FUN_1492a1820(void)

void FUN_1492a1820(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bbe91f0;
  if (param_1[0x4d] != 0) {
    FUN_1400020a8();
  }
  FUN_1401f95f4(param_1 + 0x3e);
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  return;
}



// FUNCTION 1492a186a FUN_1492a186a body=142 status=ok
// SIG undefined FUN_1492a186a(void)

longlong FUN_1492a186a(longlong param_1,longlong param_2)

{
  FUN_1491c05d4(param_1 + 0x10,param_2 + 0x10);
  FUN_1491c4070(param_1 + 0x1f0,param_2 + 0x1f0);
  *(undefined8 *)(param_1 + 0x200) = *(undefined8 *)(param_2 + 0x200);
  *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_2 + 0x208);
  FUN_1459a7e20(param_1 + 0x210,param_2 + 0x210);
  *(undefined2 *)(param_1 + 0x260) = *(undefined2 *)(param_2 + 0x260);
  FUN_1444888de(param_1 + 0x268,param_2 + 0x268);
  *(undefined4 *)(param_1 + 0x278) = *(undefined4 *)(param_2 + 0x278);
  return param_1;
}



// FUNCTION 1492a192e FUN_1492a192e body=63 status=ok
// SIG undefined FUN_1492a192e(void)

undefined1 FUN_1492a192e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1492a1a58(param_2,param_3);
    param_3 = param_3 + 0x280;
    param_2 = param_2 + 0x280;
  }
  return 1;
}



// FUNCTION 1492a1996 FUN_1492a1996 body=59 status=ok
// SIG undefined FUN_1492a1996(void)

undefined8 FUN_1492a1996(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492a19e2 FUN_1492a19e2 body=40 status=ok
// SIG undefined FUN_1492a19e2(void)

void FUN_1492a19e2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x280) == '\x01') {
    FUN_149241a38(param_2);
    *(undefined1 *)(param_2 + 0x280) = 0;
  }
  return;
}



// FUNCTION 1492a1a58 FUN_1492a1a58 body=142 status=ok
// SIG undefined FUN_1492a1a58(void)

longlong FUN_1492a1a58(longlong param_1,longlong param_2)

{
  FUN_1491c05d4(param_1 + 0x10,param_2 + 0x10);
  FUN_1491c4070(param_1 + 0x1f0,param_2 + 0x1f0);
  *(undefined8 *)(param_1 + 0x200) = *(undefined8 *)(param_2 + 0x200);
  *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_2 + 0x208);
  FUN_1459a7e20(param_1 + 0x210,param_2 + 0x210);
  *(undefined2 *)(param_1 + 0x260) = *(undefined2 *)(param_2 + 0x260);
  FUN_1444888de(param_1 + 0x268,param_2 + 0x268);
  *(undefined4 *)(param_1 + 0x278) = *(undefined4 *)(param_2 + 0x278);
  return param_1;
}



// FUNCTION 1492a1b1c FUN_1492a1b1c body=139 status=ok
// SIG undefined FUN_1492a1b1c(void)

undefined8 FUN_1492a1b1c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_1491c4070(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      *(undefined8 *)(param_2 + 0x18 + lVar1) = *(undefined8 *)(param_3 + 0x18 + lVar1);
      *(undefined4 *)(param_2 + 0x20 + lVar1) = *(undefined4 *)(param_3 + 0x20 + lVar1);
      FUN_1459a7e20(param_2 + 0x28 + lVar1,param_3 + 0x28 + lVar1);
      *(undefined1 *)(param_2 + 0x78 + lVar1) = *(undefined1 *)(param_3 + 0x78 + lVar1);
      lVar1 = lVar1 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492a1bd0 FUN_1492a1bd0 body=59 status=ok
// SIG undefined FUN_1492a1bd0(void)

undefined8 FUN_1492a1bd0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492a1c1c FUN_1492a1c1c body=49 status=ok
// SIG undefined FUN_1492a1c1c(void)

void FUN_1492a1c1c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *param_2 = &PTR_FUN_14bbe9540;
    FUN_1401f95f4(param_2 + 1);
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 1492a1c9c FUN_1492a1c9c body=212 status=ok
// SIG undefined FUN_1492a1c9c(void)

undefined8 * FUN_1492a1c9c(undefined8 *param_1)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_1 = &PTR_FUN_14bbe9540;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0xffffffffffffffff;
  local_70 = 0xffffffff;
  local_48 = 0;
  local_40 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_3c = 0xffffffff00000080;
  local_34 = 0;
  local_28 = 0;
  local_20 = 0;
  FUN_149185768(param_1 + 1,&local_88);
  FUN_1401f95f4(&local_88);
  *(undefined1 *)(param_1 + 0xf) = 1;
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492a1d72 FUN_1492a1d72 body=52 status=ok
// SIG undefined FUN_1492a1d72(void)

undefined8 * FUN_1492a1d72(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbe9540;
  FUN_1401f95f4(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a1ddc FUN_1492a1ddc body=167 status=ok
// SIG undefined FUN_1492a1ddc(void)

undefined8 FUN_1492a1ddc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      lVar1 = param_2 + lVar3;
      lVar2 = param_3 + lVar3;
      FUN_1491c4070(lVar1 + 8,lVar2 + 8);
      *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
      *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)(lVar2 + 0x20);
      lVar1 = param_2 + 0x28 + lVar3;
      FUN_1459a7e20(lVar1,param_3 + lVar3 + 0x28);
      *(undefined1 *)(lVar1 + 0x50) = *(undefined1 *)(param_3 + lVar3 + 0x78);
      FUN_1444888de(param_2 + lVar3 + 0x80,param_3 + lVar3 + 0x80);
      lVar3 = lVar3 + 0x90;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492a1eac FUN_1492a1eac body=59 status=ok
// SIG undefined FUN_1492a1eac(void)

undefined8 FUN_1492a1eac(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492a1ef8 FUN_1492a1ef8 body=66 status=ok
// SIG undefined FUN_1492a1ef8(void)

void FUN_1492a1ef8(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x12) == '\x01') {
    *param_2 = &PTR_FUN_14bbe9730;
    if (param_2[0x10] != 0) {
      FUN_1400020a8();
    }
    FUN_1401f95f4(param_2 + 1);
    *(undefined1 *)(param_2 + 0x12) = 0;
  }
  return;
}



// FUNCTION 1492a1f88 FUN_1492a1f88 body=264 status=ok
// SIG undefined FUN_1492a1f88(void)

undefined8 * FUN_1492a1f88(undefined8 *param_1)

{
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *param_1 = &PTR_FUN_14bbe9730;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0xffffffffffffffff;
  local_90 = 0xffffffff;
  local_68 = 0;
  local_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  FUN_149185768(param_1 + 1,&local_a8);
  FUN_1401f95f4(&local_a8);
  *(undefined1 *)(param_1 + 0xf) = 0xff;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492a2092 FUN_1492a2092 body=69 status=ok
// SIG undefined FUN_1492a2092(void)

undefined8 * FUN_1492a2092(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbe9730;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_1401f95f4(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a210c FUN_1492a210c body=167 status=ok
// SIG undefined FUN_1492a210c(void)

undefined8 FUN_1492a210c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      lVar1 = param_2 + lVar3;
      lVar2 = param_3 + lVar3;
      FUN_1491c4070(lVar1 + 8,lVar2 + 8);
      *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
      *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)(lVar2 + 0x20);
      lVar1 = param_2 + 0x28 + lVar3;
      FUN_1459a7e20(lVar1,param_3 + lVar3 + 0x28);
      *(undefined1 *)(lVar1 + 0x50) = *(undefined1 *)(param_3 + lVar3 + 0x78);
      FUN_1444888de(param_2 + lVar3 + 0x80,param_3 + lVar3 + 0x80);
      lVar3 = lVar3 + 0x90;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492a21dc FUN_1492a21dc body=59 status=ok
// SIG undefined FUN_1492a21dc(void)

undefined8 FUN_1492a21dc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492a2228 FUN_1492a2228 body=66 status=ok
// SIG undefined FUN_1492a2228(void)

void FUN_1492a2228(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x12) == '\x01') {
    *param_2 = &PTR_FUN_14bbea860;
    if (param_2[0x10] != 0) {
      FUN_1400020a8();
    }
    FUN_1401f95f4(param_2 + 1);
    *(undefined1 *)(param_2 + 0x12) = 0;
  }
  return;
}



// FUNCTION 1492a22ee FUN_1492a22ee body=63 status=ok
// SIG undefined FUN_1492a22ee(void)

undefined1 FUN_1492a22ee(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1492a2668(param_2,param_3);
    param_3 = param_3 + 0x128;
    param_2 = param_2 + 0x128;
  }
  return 1;
}



// FUNCTION 1492a2356 FUN_1492a2356 body=59 status=ok
// SIG undefined FUN_1492a2356(void)

undefined8 FUN_1492a2356(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492a23a2 FUN_1492a23a2 body=40 status=ok
// SIG undefined FUN_1492a23a2(void)

void FUN_1492a23a2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x128) == '\x01') {
    FUN_1492a261a(param_2);
    *(undefined1 *)(param_2 + 0x128) = 0;
  }
  return;
}



// FUNCTION 1492a2418 FUN_1492a2418 body=474 status=ok
// SIG undefined FUN_1492a2418(void)

undefined8 * FUN_1492a2418(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_68;
  undefined4 local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *param_1 = &PTR_FUN_14bbe9a80;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0xffffffffffffffff;
  local_b0 = 0xffffffff;
  local_88 = 0;
  local_80 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_7c = 0xffffffff00000080;
  local_74 = 0;
  local_68 = 0;
  local_60 = 0;
  lVar1 = FUN_149185768(param_1 + 0xf,&local_c8);
  FUN_1491c4070(param_1 + 1,lVar1);
  param_1[3] = *(undefined8 *)(lVar1 + 0x10);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(lVar1 + 0x18);
  FUN_1459a7e20(param_1 + 5,lVar1 + 0x20);
  FUN_1401f95f4(&local_c8);
  *(undefined2 *)(param_1 + 0x1f) = 0xff;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  if (*(int *)((longlong)param_1 + 0x10c) != 0) {
    FUN_149192186(param_1 + 0x20,0);
  }
  param_1[0x1d] = 0x3dcccccd;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492a25f4 FUN_1492a25f4 body=38 status=ok
// SIG undefined FUN_1492a25f4(void)

undefined8 FUN_1492a25f4(undefined8 param_1,int param_2)

{
  FUN_1492a261a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a261a FUN_1492a261a body=78 status=ok
// SIG undefined FUN_1492a261a(void)

void FUN_1492a261a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bbe9a80;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  FUN_1401f95f4(param_1 + 0xf);
  FUN_1401f95f4(param_1 + 1);
  return;
}



// FUNCTION 1492a2668 FUN_1492a2668 body=195 status=ok
// SIG undefined FUN_1492a2668(void)

longlong FUN_1492a2668(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_1491c4070(param_1 + 8,param_2 + 8);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  FUN_1459a7e20(param_1 + 0x28,param_2 + 0x28);
  FUN_1491c4070(param_1 + 0x78,param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  FUN_1459a7e20(param_1 + 0x98,param_2 + 0x98);
  uVar1 = *(undefined4 *)(param_2 + 0xec);
  uVar2 = *(undefined4 *)(param_2 + 0xf0);
  uVar3 = *(undefined4 *)(param_2 + 0xf4);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
  *(undefined4 *)(param_1 + 0xec) = uVar1;
  *(undefined4 *)(param_1 + 0xf0) = uVar2;
  *(undefined4 *)(param_1 + 0xf4) = uVar3;
  *(undefined2 *)(param_1 + 0xf8) = *(undefined2 *)(param_2 + 0xf8);
  FUN_1444888de(param_1 + 0x100,param_2 + 0x100);
  *(undefined1 *)(param_1 + 0x110) = *(undefined1 *)(param_2 + 0x110);
  FUN_1444888de(param_1 + 0x118,param_2 + 0x118);
  return param_1;
}



// FUNCTION 1492a2760 FUN_1492a2760 body=183 status=ok
// SIG undefined FUN_1492a2760(void)

undefined8 FUN_1492a2760(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  void *_Dst;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      FUN_1491c4070(param_2 + 8 + lVar2,param_3 + 8 + lVar2);
      puVar1 = (undefined8 *)(param_3 + 0x18 + lVar2);
      _Dst = (void *)(param_2 + 0x78 + lVar2);
      *(undefined8 *)((longlong)_Dst + -0x60) = *puVar1;
      *(undefined4 *)((longlong)_Dst + -0x58) = *(undefined4 *)(puVar1 + 1);
      FUN_1459a7e20(param_2 + 0x28 + lVar2,param_3 + 0x28 + lVar2);
      memcpy(_Dst,puVar1 + 0xc,0x84);
      lVar2 = lVar2 + 0x100;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492a2840 FUN_1492a2840 body=59 status=ok
// SIG undefined FUN_1492a2840(void)

undefined8 FUN_1492a2840(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492a288c FUN_1492a288c body=49 status=ok
// SIG undefined FUN_1492a288c(void)

void FUN_1492a288c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    *param_2 = &PTR_FUN_14bbe9c70;
    FUN_1401f95f4(param_2 + 1);
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 1492a290c FUN_1492a290c body=353 status=ok
// SIG undefined FUN_1492a290c(void)

undefined8 * FUN_1492a290c(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *param_1 = &PTR_FUN_14bbe9c70;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0x3ff00000;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0x3ff00000;
  param_1[0x1c] = 0x3ff0000000000000;
  param_1[0x1d] = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0xffffffffffffffff;
  local_90 = 0xffffffff;
  local_68 = 0;
  local_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  FUN_149185768(param_1 + 1,&local_a8);
  FUN_1401f95f4(&local_a8);
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x84) = 1;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x12;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x1e] = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 0x1f) = 0xffffffff;
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492a2a6e FUN_1492a2a6e body=52 status=ok
// SIG undefined FUN_1492a2a6e(void)

undefined8 * FUN_1492a2a6e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbe9c70;
  FUN_1401f95f4(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a2ad8 FUN_1492a2ad8 body=173 status=ok
// SIG undefined FUN_1492a2ad8(void)

undefined8 FUN_1492a2ad8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      lVar1 = param_2 + lVar3;
      lVar2 = param_3 + lVar3;
      FUN_1491c4070(lVar1 + 8,lVar2 + 8);
      *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
      *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)(lVar2 + 0x20);
      lVar1 = param_2 + 0x28 + lVar3;
      FUN_1459a7e20(lVar1,param_3 + lVar3 + 0x28);
      *(undefined2 *)(lVar1 + 0x50) = *(undefined2 *)(param_3 + lVar3 + 0x78);
      FUN_144756208(param_2 + lVar3 + 0x80,param_3 + lVar3 + 0x80);
      lVar3 = lVar3 + 0x90;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492a2bae FUN_1492a2bae body=59 status=ok
// SIG undefined FUN_1492a2bae(void)

undefined8 FUN_1492a2bae(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492a2bfa FUN_1492a2bfa body=66 status=ok
// SIG undefined FUN_1492a2bfa(void)

void FUN_1492a2bfa(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x12) == '\x01') {
    *param_2 = &PTR_FUN_14bbe9e60;
    if (param_2[0x10] != 0) {
      FUN_1400020a8();
    }
    FUN_1401f95f4(param_2 + 1);
    *(undefined1 *)(param_2 + 0x12) = 0;
  }
  return;
}



// FUNCTION 1492a2c8a FUN_1492a2c8a body=244 status=ok
// SIG undefined FUN_1492a2c8a(void)

undefined8 * FUN_1492a2c8a(undefined8 *param_1)

{
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = &PTR_FUN_14bbe9e60;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0xffffffffffffffff;
  local_80 = 0xffffffff;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  FUN_149185768(param_1 + 1,&local_98);
  FUN_1401f95f4(&local_98);
  *(undefined2 *)(param_1 + 0xf) = 1;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (*(int *)((longlong)param_1 + 0x8c) < 0) {
    FUN_1401a2688(param_1 + 0x10,0);
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492a2d80 FUN_1492a2d80 body=69 status=ok
// SIG undefined FUN_1492a2d80(void)

undefined8 * FUN_1492a2d80(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbe9e60;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_1401f95f4(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a2dfa FUN_1492a2dfa body=154 status=ok
// SIG undefined FUN_1492a2dfa(void)

undefined8 FUN_1492a2dfa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_1491c4070(param_2 + 8 + lVar6,param_3 + 8 + lVar6);
      *(undefined8 *)(param_2 + 0x18 + lVar6) = *(undefined8 *)(param_3 + 0x18 + lVar6);
      *(undefined4 *)(param_2 + 0x20 + lVar6) = *(undefined4 *)(param_3 + 0x20 + lVar6);
      FUN_1459a7e20(param_2 + 0x28 + lVar6,param_3 + 0x28 + lVar6);
      puVar1 = (undefined4 *)(param_3 + 0x78 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x78 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      *(undefined8 *)(param_2 + 0x88 + lVar6) = *(undefined8 *)(param_3 + 0x88 + lVar6);
      lVar6 = lVar6 + 0x90;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492a2ebc FUN_1492a2ebc body=59 status=ok
// SIG undefined FUN_1492a2ebc(void)

undefined8 FUN_1492a2ebc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492a2f08 FUN_1492a2f08 body=49 status=ok
// SIG undefined FUN_1492a2f08(void)

void FUN_1492a2f08(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x12) == '\x01') {
    *param_2 = &PTR_FUN_14bbea050;
    FUN_1401f95f4(param_2 + 1);
    *(undefined1 *)(param_2 + 0x12) = 0;
  }
  return;
}



// FUNCTION 1492a2f88 FUN_1492a2f88 body=252 status=ok
// SIG undefined FUN_1492a2f88(void)

undefined8 * FUN_1492a2f88(undefined8 *param_1)

{
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = &PTR_FUN_14bbea050;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0xffffffffffffffff;
  local_80 = 0xffffffff;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  FUN_149185768(param_1 + 1,&local_98);
  FUN_1401f95f4(&local_98);
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000000;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0xffffffff;
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492a3086 FUN_1492a3086 body=52 status=ok
// SIG undefined FUN_1492a3086(void)

undefined8 * FUN_1492a3086(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbea050;
  FUN_1401f95f4(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a30f0 FUN_1492a30f0 body=63 status=ok
// SIG undefined FUN_1492a30f0(void)

undefined1 FUN_1492a30f0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1492a355e(param_2,param_3);
    param_3 = param_3 + 0x530;
    param_2 = param_2 + 0x530;
  }
  return 1;
}



// FUNCTION 1492a3158 FUN_1492a3158 body=59 status=ok
// SIG undefined FUN_1492a3158(void)

undefined8 FUN_1492a3158(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492a31fa FUN_1492a31fa body=525 status=ok
// SIG undefined FUN_1492a31fa(void)

undefined8 * FUN_1492a31fa(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_1 + 2);
  *param_1 = &PTR_FUN_14bbea240;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x42) = 0xffffffff;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined8 *)((longlong)param_1 + 0x244) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x24c) = 0;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x26c) = 0;
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
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c4) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x59) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2cc) = 0x3ff00000;
  param_1[0x5a] = 0x3ff0000000000000;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2f4) = 0;
  *(undefined4 *)(param_1 + 0x5f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2fc) = 0x3ff00000;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)((longlong)param_1 + 0x324) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x65) = 0;
  *(undefined4 *)((longlong)param_1 + 0x32c) = 0x3ff00000;
  param_1[0x66] = 0x3ff0000000000000;
  param_1[0x67] = 0;
  FUN_1412ca278(param_1 + 0x6a);
  param_1[0x3e] = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0xffffffffffffffff;
  local_c0 = 0xffffffff;
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  FUN_149185768(param_1 + 0x3f,&local_d8);
  FUN_1401f95f4(&local_d8);
  *(undefined1 *)(param_1 + 0x4d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x26c) = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x5c;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x50;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492a3408 FUN_1492a3408 body=86 status=ok
// SIG undefined FUN_1492a3408(void)

undefined8 * FUN_1492a3408(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbea240;
  FUN_140f8ccfc(param_1 + 0x6a);
  FUN_1401f95f4(param_1 + 0x3f);
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a3476 FUN_1492a3476 body=230 status=ok
// SIG undefined FUN_1492a3476(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1492a3476(void)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc0aef0) {
    FUN_144b3d300(&DAT_14cc0aef0);
    if (DAT_14cc0aef0 == -1) {
      FUN_1446f57c6(&DAT_14cc00d40,&local_20);
      FUN_1446f57c6(&DAT_14cc00d70,&uStack_18);
      DAT_14cc0aee0 = (undefined8 *)0x0;
      _DAT_14cc0aee8 = 2;
      FUN_1401b309e(&DAT_14cc0aee0,2,0);
      puVar1 = DAT_14cc0aee0;
      *DAT_14cc0aee0 = local_20;
      puVar1[1] = uStack_18;
      atexit((_func_5014 *)&LAB_1444b407a);
      _Init_thread_footer(&DAT_14cc0aef0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return &DAT_14cc0aee0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492a355e FUN_1492a355e body=152 status=ok
// SIG undefined FUN_1492a355e(void)

longlong FUN_1492a355e(longlong param_1,longlong param_2)

{
  FUN_1491c05d4(param_1 + 0x10,param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x1f0) = *(undefined8 *)(param_2 + 0x1f0);
  FUN_1491c4070(param_1 + 0x1f8,param_2 + 0x1f8);
  *(undefined8 *)(param_1 + 0x208) = *(undefined8 *)(param_2 + 0x208);
  *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(param_2 + 0x210);
  FUN_1459a7e20(param_1 + 0x218,param_2 + 0x218);
  memcpy((void *)(param_1 + 0x268),(void *)(param_2 + 0x268),0xe8);
  FUN_1491c05d4(param_1 + 0x350,param_2 + 0x350);
  return param_1;
}



// FUNCTION 1492a35f8 FUN_1492a35f8 body=83 status=ok
// SIG undefined FUN_1492a35f8(void)

void FUN_1492a35f8(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0xa6) == '\x01') {
    *param_1 = &PTR_FUN_14bbea240;
    FUN_140f8ccfc(param_1 + 0x6a);
    FUN_1401f95f4(param_1 + 0x3f);
    *param_1 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_1 + 2);
    *(undefined1 *)(param_1 + 0xa6) = 0;
  }
  return;
}



// FUNCTION 1492a364c FUN_1492a364c body=98 status=ok
// SIG undefined FUN_1492a364c(void)

void FUN_1492a364c(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_2 = 1;
  *(undefined8 *)(param_2 + 4) = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = (undefined8 *)(param_2 + 0x10);
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = &DAT_14c846480;
  puVar4 = (undefined8 *)(param_2 + 0x70);
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_2[0xd0] = 0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)(param_2 + 0xd8) = DAT_14c8464e0;
  *(undefined8 *)(param_2 + 0xe0) = uVar1;
  *(undefined8 *)(param_2 + 0xe8) = DAT_14c8464f0;
  *(undefined4 *)(param_2 + 0xf0) = 0;
  return;
}



// FUNCTION 1492a36ae FUN_1492a36ae body=98 status=ok
// SIG undefined FUN_1492a36ae(void)

void FUN_1492a36ae(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_2 = 1;
  *(undefined8 *)(param_2 + 4) = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = (undefined8 *)(param_2 + 0x10);
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = &DAT_14c846480;
  puVar4 = (undefined8 *)(param_2 + 0x70);
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_2[0xd0] = 0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)(param_2 + 0xd8) = DAT_14c8464e0;
  *(undefined8 *)(param_2 + 0xe0) = uVar1;
  *(undefined8 *)(param_2 + 0xe8) = DAT_14c8464f0;
  *(undefined4 *)(param_2 + 0xf0) = 0;
  return;
}



// FUNCTION 1492a3728 FUN_1492a3728 body=68 status=ok
// SIG undefined FUN_1492a3728(void)

undefined8 FUN_1492a3728(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0xf8);
      lVar1 = lVar1 + 0x100;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492a3794 FUN_1492a3794 body=59 status=ok
// SIG undefined FUN_1492a3794(void)

undefined8 FUN_1492a3794(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492a3876 FUN_1492a3876 body=142 status=ok
// SIG undefined FUN_1492a3876(void)

undefined8 FUN_1492a3876(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      FUN_1492a3b20(param_2 + lVar3 + 8,param_3 + lVar3 + 8);
      lVar1 = param_2 + lVar3;
      lVar2 = param_3 + lVar3;
      FUN_1491c4070(lVar1 + 0x18,lVar2 + 0x18);
      *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(lVar2 + 0x28);
      *(undefined4 *)(lVar1 + 0x30) = *(undefined4 *)(lVar2 + 0x30);
      FUN_1459a7e20(param_2 + lVar3 + 0x38,param_3 + lVar3 + 0x38);
      lVar3 = lVar3 + 0x88;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492a392c FUN_1492a392c body=59 status=ok
// SIG undefined FUN_1492a392c(void)

undefined8 FUN_1492a392c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492a3978 FUN_1492a3978 body=63 status=ok
// SIG undefined FUN_1492a3978(void)

void FUN_1492a3978(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x11) == '\x01') {
    *param_2 = &PTR_FUN_14bbea590;
    FUN_1401f95f4(param_2 + 3);
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x11) = 0;
  }
  return;
}



// FUNCTION 1492a3a06 FUN_1492a3a06 body=215 status=ok
// SIG undefined FUN_1492a3a06(void)

undefined8 * FUN_1492a3a06(undefined8 *param_1)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_1 = &PTR_FUN_14bbea590;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0xffffffffffffffff;
  local_70 = 0xffffffff;
  local_48 = 0;
  local_40 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_3c = 0xffffffff00000080;
  local_34 = 0;
  local_28 = 0;
  local_20 = 0;
  FUN_149185768(param_1 + 3,&local_88);
  FUN_1401f95f4(&local_88);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492a3ade FUN_1492a3ade body=66 status=ok
// SIG undefined FUN_1492a3ade(void)

undefined8 * FUN_1492a3ade(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbea590;
  FUN_1401f95f4(param_1 + 3);
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a3b20 FUN_1492a3b20 body=88 status=ok
// SIG undefined FUN_1492a3b20(void)

undefined8 * FUN_1492a3b20(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1492a3b78(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 8);
      }
    }
  }
  return param_1;
}



// FUNCTION 1492a3b78 FUN_1492a3b78 body=98 status=ok
// SIG undefined FUN_1492a3b78(void)

void FUN_1492a3b78(longlong param_1,int param_2,int param_3)

{
  int extraout_var;
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = 0;
  }
  else {
    FUN_144a3809e((longlong)param_2 << 8,0x10);
    iVar1 = 0x7fffffff;
    if (param_2 <= extraout_var) {
      iVar1 = extraout_var;
    }
  }
  if (param_3 < iVar1) {
    FUN_1446f8d3c(param_1,0,iVar1,0x100,0x10);
    param_3 = iVar1;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1492a3bdc FUN_1492a3bdc body=71 status=ok
// SIG undefined FUN_1492a3bdc(void)

undefined8 * FUN_1492a3bdc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbea620;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a3c24 FUN_1492a3c24 body=71 status=ok
// SIG undefined FUN_1492a3c24(void)

undefined8 * FUN_1492a3c24(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbea6b0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a3c6c FUN_1492a3c6c body=66 status=ok
// SIG undefined FUN_1492a3c6c(void)

undefined8 * FUN_1492a3c6c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbea740;
  FUN_1401f95f4(param_1 + 4);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a3cae FUN_1492a3cae body=38 status=ok
// SIG undefined FUN_1492a3cae(void)

undefined8 FUN_1492a3cae(undefined8 param_1,int param_2)

{
  FUN_149241a38();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a3cd4 FUN_1492a3cd4 body=69 status=ok
// SIG undefined FUN_1492a3cd4(void)

undefined8 * FUN_1492a3cd4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbea860;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_1401f95f4(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a3d1a FUN_1492a3d1a body=51 status=ok
// SIG undefined FUN_1492a3d1a(void)

void FUN_1492a3d1a(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x1f0);
  *param_2 = &PTR_FUN_14bbeaa50;
  FUN_1412ca278(param_2 + 2);
  return;
}



// FUNCTION 1492a3d86 FUN_1492a3d86 body=70 status=ok
// SIG undefined FUN_1492a3d86(void)

undefined1 FUN_1492a3d86(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 1492a3df4 FUN_1492a3df4 body=59 status=ok
// SIG undefined FUN_1492a3df4(void)

undefined8 FUN_1492a3df4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492a3e40 FUN_1492a3e40 body=49 status=ok
// SIG undefined FUN_1492a3e40(void)

void FUN_1492a3e40(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x3e) == '\x01') {
    *param_2 = &PTR_FUN_14bbeaa50;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x3e) = 0;
  }
  return;
}



// FUNCTION 1492a3ec0 FUN_1492a3ec0 body=52 status=ok
// SIG undefined FUN_1492a3ec0(void)

undefined8 * FUN_1492a3ec0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbeaa50;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a3ef4 FUN_1492a3ef4 body=29 status=ok
// SIG undefined FUN_1492a3ef4(void)

undefined8 FUN_1492a3ef4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446f57c6(&DAT_14cc06a40);
  return param_2;
}



// FUNCTION 1492a3f12 FUN_1492a3f12 body=51 status=ok
// SIG undefined FUN_1492a3f12(void)

void FUN_1492a3f12(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x1f0);
  *param_2 = &PTR_FUN_14bbeac40;
  FUN_1412ca278(param_2 + 2);
  return;
}



// FUNCTION 1492a3f7e FUN_1492a3f7e body=70 status=ok
// SIG undefined FUN_1492a3f7e(void)

undefined1 FUN_1492a3f7e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 1492a3fec FUN_1492a3fec body=59 status=ok
// SIG undefined FUN_1492a3fec(void)

undefined8 FUN_1492a3fec(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492a4038 FUN_1492a4038 body=49 status=ok
// SIG undefined FUN_1492a4038(void)

void FUN_1492a4038(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x3e) == '\x01') {
    *param_2 = &PTR_FUN_14bbeac40;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x3e) = 0;
  }
  return;
}



// FUNCTION 1492a40b8 FUN_1492a40b8 body=52 status=ok
// SIG undefined FUN_1492a40b8(void)

undefined8 * FUN_1492a40b8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbeac40;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a40ec FUN_1492a40ec body=29 status=ok
// SIG undefined FUN_1492a40ec(void)

undefined8 FUN_1492a40ec(undefined8 param_1,undefined8 param_2)

{
  FUN_1446f57c6(&DAT_14cc074b8);
  return param_2;
}



// FUNCTION 1492a4166 FUN_1492a4166 body=68 status=ok
// SIG undefined FUN_1492a4166(void)

undefined8 FUN_1492a4166(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      FUN_1444888de(param_2,param_3);
      param_3 = param_3 + 0x20;
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492a41d2 FUN_1492a41d2 body=59 status=ok
// SIG undefined FUN_1492a41d2(void)

undefined8 FUN_1492a41d2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492a4218 FUN_1492a4218 body=48 status=ok
// SIG undefined FUN_1492a4218(void)

void FUN_1492a4218(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 4) == '\x01') {
    *param_2 = &PTR_FUN_14bbeae30;
    if (param_2[2] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 4) = 0;
  }
  return;
}



// FUNCTION 1492a4296 FUN_1492a4296 body=57 status=ok
// SIG undefined FUN_1492a4296(void)

undefined8 * FUN_1492a4296(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbeae30;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a4338 FUN_1492a4338 body=59 status=ok
// SIG undefined FUN_1492a4338(void)

undefined8 FUN_1492a4338(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492a43d8 FUN_1492a43d8 body=29 status=ok
// SIG undefined FUN_1492a43d8(void)

undefined8 FUN_1492a43d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a43f6 FUN_1492a43f6 body=59 status=ok
// SIG undefined FUN_1492a43f6(void)

void FUN_1492a43f6(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x1f0);
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbeb210;
  return;
}



// FUNCTION 1492a4432 FUN_1492a4432 body=43 status=ok
// SIG undefined FUN_1492a4432(void)

void FUN_1492a4432(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbeb210;
  return;
}



// FUNCTION 1492a4482 FUN_1492a4482 body=70 status=ok
// SIG undefined FUN_1492a4482(void)

undefined1 FUN_1492a4482(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 1492a44f0 FUN_1492a44f0 body=59 status=ok
// SIG undefined FUN_1492a44f0(void)

undefined8 FUN_1492a44f0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492a453c FUN_1492a453c body=49 status=ok
// SIG undefined FUN_1492a453c(void)

void FUN_1492a453c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x3e) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x3e) = 0;
  }
  return;
}



// FUNCTION 1492a45bc FUN_1492a45bc body=52 status=ok
// SIG undefined FUN_1492a45bc(void)

undefined8 * FUN_1492a45bc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a46cc FUN_1492a46cc body=59 status=ok
// SIG undefined FUN_1492a46cc(void)

undefined8 FUN_1492a46cc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492a476c FUN_1492a476c body=29 status=ok
// SIG undefined FUN_1492a476c(void)

undefined8 FUN_1492a476c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a4872 FUN_1492a4872 body=59 status=ok
// SIG undefined FUN_1492a4872(void)

undefined8 FUN_1492a4872(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492a4912 FUN_1492a4912 body=29 status=ok
// SIG undefined FUN_1492a4912(void)

undefined8 FUN_1492a4912(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a49fa FUN_1492a49fa body=59 status=ok
// SIG undefined FUN_1492a49fa(void)

undefined8 FUN_1492a49fa(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492a4a9a FUN_1492a4a9a body=29 status=ok
// SIG undefined FUN_1492a4a9a(void)

undefined8 FUN_1492a4a9a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a4b82 FUN_1492a4b82 body=59 status=ok
// SIG undefined FUN_1492a4b82(void)

undefined8 FUN_1492a4b82(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492a4c22 FUN_1492a4c22 body=29 status=ok
// SIG undefined FUN_1492a4c22(void)

undefined8 FUN_1492a4c22(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a4d0a FUN_1492a4d0a body=59 status=ok
// SIG undefined FUN_1492a4d0a(void)

undefined8 FUN_1492a4d0a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492a4daa FUN_1492a4daa body=29 status=ok
// SIG undefined FUN_1492a4daa(void)

undefined8 FUN_1492a4daa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a4e92 FUN_1492a4e92 body=59 status=ok
// SIG undefined FUN_1492a4e92(void)

undefined8 FUN_1492a4e92(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492a4f32 FUN_1492a4f32 body=29 status=ok
// SIG undefined FUN_1492a4f32(void)

undefined8 FUN_1492a4f32(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a4ff0 FUN_1492a4ff0 body=59 status=ok
// SIG undefined FUN_1492a4ff0(void)

undefined8 FUN_1492a4ff0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492a5090 FUN_1492a5090 body=29 status=ok
// SIG undefined FUN_1492a5090(void)

undefined8 FUN_1492a5090(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a50e2 FUN_1492a50e2 body=111 status=ok
// SIG undefined FUN_1492a50e2(void)

undefined8 FUN_1492a50e2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      *(undefined8 *)(param_2 + 0x200 + lVar6) = *(undefined8 *)(param_3 + 0x200 + lVar6);
      lVar6 = lVar6 + 0x210;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492a517a FUN_1492a517a body=59 status=ok
// SIG undefined FUN_1492a517a(void)

undefined8 FUN_1492a517a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492a51c6 FUN_1492a51c6 body=49 status=ok
// SIG undefined FUN_1492a51c6(void)

void FUN_1492a51c6(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x42) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x42) = 0;
  }
  return;
}



// FUNCTION 1492a5246 FUN_1492a5246 body=159 status=ok
// SIG undefined FUN_1492a5246(void)

undefined8 * FUN_1492a5246(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_1 + 2);
  *param_1 = &PTR_FUN_14bbec190;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  FUN_1446f470e(&local_38,L"Solver",1);
  param_1[0x3e] = local_38;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492a52e6 FUN_1492a52e6 body=52 status=ok
// SIG undefined FUN_1492a52e6(void)

undefined8 * FUN_1492a52e6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a5350 FUN_1492a5350 body=148 status=ok
// SIG undefined FUN_1492a5350(void)

undefined8 FUN_1492a5350(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_1491c05d4(param_2 + 0x10 + lVar11,param_3 + 0x10 + lVar11);
      puVar1 = (undefined4 *)(param_3 + 0x1f0 + lVar11);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_3 + 0x200 + lVar11);
      uVar6 = *puVar2;
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      puVar2 = (undefined4 *)(param_2 + 0x1f0 + lVar11);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      puVar1 = (undefined4 *)(param_2 + 0x200 + lVar11);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      puVar12 = (undefined8 *)(param_3 + 0x210 + lVar11);
      puVar13 = (undefined8 *)(param_2 + 0x210 + lVar11);
      for (lVar10 = 0xe; lVar10 != 0; lVar10 = lVar10 + -1) {
        *puVar13 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar13 = puVar13 + 1;
      }
      *(undefined4 *)(param_2 + 0x280 + lVar11) = *(undefined4 *)(param_3 + 0x280 + lVar11);
      lVar11 = lVar11 + 0x290;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492a540c FUN_1492a540c body=59 status=ok
// SIG undefined FUN_1492a540c(void)

undefined8 FUN_1492a540c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492a5458 FUN_1492a5458 body=49 status=ok
// SIG undefined FUN_1492a5458(void)

void FUN_1492a5458(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x52) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x52) = 0;
  }
  return;
}



// FUNCTION 1492a54d8 FUN_1492a54d8 body=324 status=ok
// SIG undefined FUN_1492a54d8(void)

undefined8 * FUN_1492a54d8(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_1 + 2);
  *(undefined1 *)((longlong)param_1 + 0x204) = 1;
  param_1[0x41] = 0;
  param_1[0x3e] = *(undefined8 *)((longlong)param_1 + 0x204);
  *(undefined4 *)(param_1 + 0x3f) = *(undefined4 *)((longlong)param_1 + 0x20c);
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0;
  *param_1 = &PTR_FUN_14bbec380;
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
  *(undefined4 *)(param_1 + 0x4a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x254) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x25c) = 0x3ff00000;
  param_1[0x4c] = 0x3ff0000000000000;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  FUN_1491e4d3a(param_1 + 0x50);
  FUN_1446f470e(&local_48,L"NewPhysicsJoint",1);
  *(undefined8 *)((longlong)param_1 + 0x1fc) = local_48;
  *(undefined1 *)(param_1 + 0x3e) = 1;
  *(undefined8 *)((longlong)param_1 + 500) = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x42;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492a561e FUN_1492a561e body=52 status=ok
// SIG undefined FUN_1492a561e(void)

undefined8 * FUN_1492a561e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a5656 FUN_1492a5656 body=51 status=ok
// SIG undefined FUN_1492a5656(void)

void FUN_1492a5656(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x1f0);
  *param_2 = &PTR_FUN_14bbec590;
  FUN_1412ca278(param_2 + 2);
  return;
}



// FUNCTION 1492a56c2 FUN_1492a56c2 body=70 status=ok
// SIG undefined FUN_1492a56c2(void)

undefined1 FUN_1492a56c2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 1492a5730 FUN_1492a5730 body=59 status=ok
// SIG undefined FUN_1492a5730(void)

undefined8 FUN_1492a5730(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492a577c FUN_1492a577c body=49 status=ok
// SIG undefined FUN_1492a577c(void)

void FUN_1492a577c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x3e) == '\x01') {
    *param_2 = &PTR_FUN_14bbec590;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x3e) = 0;
  }
  return;
}



// FUNCTION 1492a57fc FUN_1492a57fc body=52 status=ok
// SIG undefined FUN_1492a57fc(void)

undefined8 * FUN_1492a57fc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbec590;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a5830 FUN_1492a5830 body=29 status=ok
// SIG undefined FUN_1492a5830(void)

undefined8 FUN_1492a5830(undefined8 param_1,undefined8 param_2)

{
  FUN_1446f57c6(&DAT_14cc074d8);
  return param_2;
}



// FUNCTION 1492a5852 FUN_1492a5852 body=51 status=ok
// SIG undefined FUN_1492a5852(void)

void FUN_1492a5852(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x1f0);
  *param_2 = &PTR_FUN_14bbec780;
  FUN_1412ca278(param_2 + 2);
  return;
}



// FUNCTION 1492a58be FUN_1492a58be body=70 status=ok
// SIG undefined FUN_1492a58be(void)

undefined1 FUN_1492a58be(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 1492a592c FUN_1492a592c body=59 status=ok
// SIG undefined FUN_1492a592c(void)

undefined8 FUN_1492a592c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492a5978 FUN_1492a5978 body=49 status=ok
// SIG undefined FUN_1492a5978(void)

void FUN_1492a5978(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x3e) == '\x01') {
    *param_2 = &PTR_FUN_14bbec780;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x3e) = 0;
  }
  return;
}



// FUNCTION 1492a59f8 FUN_1492a59f8 body=52 status=ok
// SIG undefined FUN_1492a59f8(void)

undefined8 * FUN_1492a59f8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbec780;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a5a2c FUN_1492a5a2c body=29 status=ok
// SIG undefined FUN_1492a5a2c(void)

undefined8 FUN_1492a5a2c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446f57c6(&DAT_14cc074e8);
  return param_2;
}



// FUNCTION 1492a5ab6 FUN_1492a5ab6 body=59 status=ok
// SIG undefined FUN_1492a5ab6(void)

undefined8 FUN_1492a5ab6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492a5b56 FUN_1492a5b56 body=29 status=ok
// SIG undefined FUN_1492a5b56(void)

undefined8 FUN_1492a5b56(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a5b74 FUN_1492a5b74 body=59 status=ok
// SIG undefined FUN_1492a5b74(void)

void FUN_1492a5b74(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x1f0);
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbecb60;
  return;
}



// FUNCTION 1492a5bb0 FUN_1492a5bb0 body=43 status=ok
// SIG undefined FUN_1492a5bb0(void)

void FUN_1492a5bb0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbecb60;
  return;
}



// FUNCTION 1492a5c00 FUN_1492a5c00 body=70 status=ok
// SIG undefined FUN_1492a5c00(void)

undefined1 FUN_1492a5c00(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 1492a5c6e FUN_1492a5c6e body=59 status=ok
// SIG undefined FUN_1492a5c6e(void)

undefined8 FUN_1492a5c6e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492a5cba FUN_1492a5cba body=49 status=ok
// SIG undefined FUN_1492a5cba(void)

void FUN_1492a5cba(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x3e) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x3e) = 0;
  }
  return;
}



// FUNCTION 1492a5d3a FUN_1492a5d3a body=52 status=ok
// SIG undefined FUN_1492a5d3a(void)

undefined8 * FUN_1492a5d3a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a5e42 FUN_1492a5e42 body=59 status=ok
// SIG undefined FUN_1492a5e42(void)

undefined8 FUN_1492a5e42(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492a5ee2 FUN_1492a5ee2 body=29 status=ok
// SIG undefined FUN_1492a5ee2(void)

undefined8 FUN_1492a5ee2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a5f48 FUN_1492a5f48 body=62 status=ok
// SIG undefined FUN_1492a5f48(void)

undefined1 FUN_1492a5f48(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_144a787a6(param_2,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492a5fae FUN_1492a5fae body=59 status=ok
// SIG undefined FUN_1492a5fae(void)

undefined8 FUN_1492a5fae(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492a5ff4 FUN_1492a5ff4 body=48 status=ok
// SIG undefined FUN_1492a5ff4(void)

void FUN_1492a5ff4(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 3) == '\x01') {
    *param_2 = &PTR_FUN_14bbecf40;
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 1492a6072 FUN_1492a6072 body=57 status=ok
// SIG undefined FUN_1492a6072(void)

undefined8 * FUN_1492a6072(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbecf40;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492a614c FUN_1492a614c body=59 status=ok
// SIG undefined FUN_1492a614c(void)

undefined8 FUN_1492a614c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492a61ec FUN_1492a61ec body=29 status=ok
// SIG undefined FUN_1492a61ec(void)

undefined8 FUN_1492a61ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


