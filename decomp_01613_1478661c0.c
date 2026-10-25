// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1478661c0 FUN_1478661c0 body=78 status=ok
// SIG undefined FUN_1478661c0(void)

void FUN_1478661c0(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3 * 8);
      *(longlong *)(param_1 + lVar3 * 8) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_14689c22e();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 14786620e FUN_14786620e body=98 status=ok
// SIG undefined FUN_14786620e(void)

void FUN_14786620e(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,4);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147866270 FUN_147866270 body=98 status=ok
// SIG undefined FUN_147866270(void)

void FUN_147866270(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,8);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1478662d2 FUN_1478662d2 body=92 status=ok
// SIG undefined FUN_1478662d2(void)

void FUN_1478662d2(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3);
      *(longlong *)(param_1 + lVar3) = lVar1;
      if ((lVar1 != 0 & bVar2) == 1) {
        FUN_14689c22e();
        bVar2 = DAT_14c950c29;
      }
      *(undefined8 *)(param_1 + 8 + lVar3) = *(undefined8 *)(param_2 + 8 + lVar3);
      lVar3 = lVar3 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14786632e FUN_14786632e body=117 status=ok
// SIG undefined FUN_14786632e(void)

undefined8 * FUN_14786632e(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14584f328(param_1,uVar1);
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



// FUNCTION 1478663a4 FUN_1478663a4 body=98 status=ok
// SIG undefined FUN_1478663a4(void)

void FUN_1478663a4(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,8);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14786646c FUN_14786646c body=59 status=ok
// SIG undefined FUN_14786646c(void)

undefined8 FUN_14786646c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786655c FUN_14786655c body=59 status=ok
// SIG undefined FUN_14786655c(void)

undefined8 FUN_14786655c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478665fa FUN_1478665fa body=51 status=ok
// SIG undefined FUN_1478665fa(void)

void FUN_1478665fa(longlong *param_1)

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



// FUNCTION 14786667a FUN_14786667a body=88 status=ok
// SIG undefined FUN_14786667a(void)

undefined1 FUN_14786667a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
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
      puVar1 = (undefined4 *)(param_3 + lVar14);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      uVar7 = puVar1[4];
      uVar8 = puVar1[5];
      uVar9 = puVar1[6];
      uVar10 = puVar1[7];
      uVar11 = puVar1[9];
      uVar12 = puVar1[10];
      uVar13 = puVar1[0xb];
      lVar2 = param_2 + 0x30 + lVar14;
      *(undefined4 *)(lVar2 + -0x10) = puVar1[8];
      *(undefined4 *)(lVar2 + -0xc) = uVar11;
      *(undefined4 *)(lVar2 + -8) = uVar12;
      *(undefined4 *)(lVar2 + -4) = uVar13;
      *(undefined4 *)(lVar2 + -0x20) = uVar7;
      *(undefined4 *)(lVar2 + -0x1c) = uVar8;
      *(undefined4 *)(lVar2 + -0x18) = uVar9;
      *(undefined4 *)(lVar2 + -0x14) = uVar10;
      *(undefined4 *)(lVar2 + -0x30) = uVar3;
      *(undefined4 *)(lVar2 + -0x2c) = uVar4;
      *(undefined4 *)(lVar2 + -0x28) = uVar5;
      *(undefined4 *)(lVar2 + -0x24) = uVar6;
      FUN_144a787a6();
      lVar14 = lVar14 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1478666fa FUN_1478666fa body=59 status=ok
// SIG undefined FUN_1478666fa(void)

undefined8 FUN_1478666fa(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147866740 FUN_147866740 body=38 status=ok
// SIG undefined FUN_147866740(void)

void FUN_147866740(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    if (*(longlong *)(param_2 + 0x30) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 147866806 FUN_147866806 body=106 status=ok
// SIG undefined FUN_147866806(void)

undefined8 FUN_147866806(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      lVar2 = param_2 + 8 + lVar10;
      *(undefined8 *)(lVar2 + -8) = *puVar1;
      FUN_144a787a6(lVar2,puVar1 + 1);
      uVar3 = *(undefined4 *)((longlong)puVar1 + 0x1c);
      uVar4 = *(undefined4 *)(puVar1 + 4);
      uVar5 = *(undefined4 *)((longlong)puVar1 + 0x24);
      uVar6 = *(undefined4 *)(puVar1 + 5);
      uVar7 = *(undefined4 *)((longlong)puVar1 + 0x2c);
      uVar8 = *(undefined4 *)(puVar1 + 6);
      uVar9 = *(undefined4 *)((longlong)puVar1 + 0x34);
      *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(puVar1 + 3);
      *(undefined4 *)(lVar2 + 0x14) = uVar3;
      *(undefined4 *)(lVar2 + 0x18) = uVar4;
      *(undefined4 *)(lVar2 + 0x1c) = uVar5;
      *(undefined4 *)(lVar2 + 0x20) = uVar6;
      *(undefined4 *)(lVar2 + 0x24) = uVar7;
      *(undefined4 *)(lVar2 + 0x28) = uVar8;
      *(undefined4 *)(lVar2 + 0x2c) = uVar9;
      lVar10 = lVar10 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147866898 FUN_147866898 body=59 status=ok
// SIG undefined FUN_147866898(void)

undefined8 FUN_147866898(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478668de FUN_1478668de body=38 status=ok
// SIG undefined FUN_1478668de(void)

void FUN_1478668de(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 1478669c0 FUN_1478669c0 body=59 status=ok
// SIG undefined FUN_1478669c0(void)

undefined8 FUN_1478669c0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147866b08 FUN_147866b08 body=59 status=ok
// SIG undefined FUN_147866b08(void)

undefined8 FUN_147866b08(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147866c16 FUN_147866c16 body=59 status=ok
// SIG undefined FUN_147866c16(void)

undefined8 FUN_147866c16(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147866cd0 FUN_147866cd0 body=47 status=ok
// SIG undefined FUN_147866cd0(void)

void FUN_147866cd0(undefined8 param_1,longlong *param_2)

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



// FUNCTION 147866d16 FUN_147866d16 body=67 status=ok
// SIG undefined FUN_147866d16(void)

undefined1 FUN_147866d16(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 147866d82 FUN_147866d82 body=59 status=ok
// SIG undefined FUN_147866d82(void)

undefined8 FUN_147866d82(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147866e20 FUN_147866e20 body=51 status=ok
// SIG undefined FUN_147866e20(void)

void FUN_147866e20(longlong *param_1)

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



// FUNCTION 147866ec0 FUN_147866ec0 body=59 status=ok
// SIG undefined FUN_147866ec0(void)

undefined8 FUN_147866ec0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147866fc2 FUN_147866fc2 body=59 status=ok
// SIG undefined FUN_147866fc2(void)

undefined8 FUN_147866fc2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147867008 FUN_147867008 body=32 status=ok
// SIG undefined FUN_147867008(void)

void FUN_147867008(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_144760f98(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 147867078 FUN_147867078 body=46 status=ok
// SIG undefined FUN_147867078(void)

void FUN_147867078(undefined8 param_1,undefined8 *param_2)

{
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_141067f4a(param_2);
  *param_2 = &PTR_FUN_14a5f7830;
  return;
}



// FUNCTION 1478670a6 FUN_1478670a6 body=32 status=ok
// SIG undefined FUN_1478670a6(void)

void FUN_1478670a6(undefined8 param_1,undefined8 *param_2)

{
  FUN_141067f4a(param_2);
  *param_2 = &PTR_FUN_14a5f7830;
  return;
}



// FUNCTION 147867116 FUN_147867116 body=59 status=ok
// SIG undefined FUN_147867116(void)

undefined8 FUN_147867116(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786715c FUN_14786715c body=32 status=ok
// SIG undefined FUN_14786715c(void)

void FUN_14786715c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_144760f98(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 1478671ca FUN_1478671ca body=43 status=ok
// SIG undefined FUN_1478671ca(void)

undefined8 FUN_1478671ca(undefined8 param_1,int param_2)

{
  FUN_144760f98();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1478671f6 FUN_1478671f6 body=46 status=ok
// SIG undefined FUN_1478671f6(void)

void FUN_1478671f6(undefined8 param_1,undefined8 *param_2)

{
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_141067f4a(param_2);
  *param_2 = &PTR_FUN_14a5f79d0;
  return;
}



// FUNCTION 147867224 FUN_147867224 body=32 status=ok
// SIG undefined FUN_147867224(void)

void FUN_147867224(undefined8 param_1,undefined8 *param_2)

{
  FUN_141067f4a(param_2);
  *param_2 = &PTR_FUN_14a5f79d0;
  return;
}



// FUNCTION 147867294 FUN_147867294 body=59 status=ok
// SIG undefined FUN_147867294(void)

undefined8 FUN_147867294(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478672da FUN_1478672da body=32 status=ok
// SIG undefined FUN_1478672da(void)

void FUN_1478672da(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_144760f98(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 147867348 FUN_147867348 body=43 status=ok
// SIG undefined FUN_147867348(void)

undefined8 FUN_147867348(undefined8 param_1,int param_2)

{
  FUN_144760f98();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1478673a6 FUN_1478673a6 body=54 status=ok
// SIG undefined FUN_1478673a6(void)

undefined1 FUN_1478673a6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1405f35b2(param_2,param_3);
    param_3 = param_3 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return 1;
}



// FUNCTION 147867404 FUN_147867404 body=59 status=ok
// SIG undefined FUN_147867404(void)

undefined8 FUN_147867404(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786744a FUN_14786744a body=32 status=ok
// SIG undefined FUN_14786744a(void)

void FUN_14786744a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_141238aee(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 14786752e FUN_14786752e body=59 status=ok
// SIG undefined FUN_14786752e(void)

undefined8 FUN_14786752e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478675d0 FUN_1478675d0 body=43 status=ok
// SIG undefined FUN_1478675d0(void)

undefined8 FUN_1478675d0(undefined8 param_1,int param_2)

{
  FUN_14079057a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 1478675fb FUN_1478675fb body=63 status=ok
// SIG undefined FUN_1478675fb(void)

void FUN_1478675fb(longlong param_1,int param_2)

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
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14786763a FUN_14786763a body=49 status=ok
// SIG undefined FUN_14786763a(void)

void FUN_14786763a(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x30);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14786766b FUN_14786766b body=49 status=ok
// SIG undefined FUN_14786766b(void)

void FUN_14786766b(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14786769c FUN_14786769c body=77 status=ok
// SIG undefined FUN_14786769c(void)

void FUN_14786769c(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1478676e9 FUN_1478676e9 body=49 status=ok
// SIG undefined FUN_1478676e9(void)

void FUN_1478676e9(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14786771a FUN_14786771a body=108 status=ok
// SIG undefined FUN_14786771a(void)

longlong FUN_14786771a(longlong param_1,undefined1 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140056680(local_30,param_3);
  FUN_140233b1a(param_1,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  *(undefined1 *)(param_1 + 0x10) = param_2;
  *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) & 0xfe;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147867794 FUN_147867794 body=55 status=ok
// SIG undefined FUN_147867794(void)

void FUN_147867794(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac05f0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac05f0 = FUN_14171c317(FUN_146374b47,uVar1,L"EMaterialShadingModel");
  }
  return;
}



// FUNCTION 1478677cb FUN_1478677cb body=57 status=ok
// SIG undefined FUN_1478677cb(void)

void FUN_1478677cb(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac06e0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac06e0 = FUN_14171c317(FUN_1417ace28,uVar1,L"EObjectTypeQuery");
  }
  return;
}



// FUNCTION 147867804 FUN_147867804 body=57 status=ok
// SIG undefined FUN_147867804(void)

void FUN_147867804(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac06f8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac06f8 = FUN_14171c317(FUN_146374d54,uVar1,L"ETraceTypeQuery");
  }
  return;
}



// FUNCTION 147867946 FUN_147867946 body=55 status=ok
// SIG undefined FUN_147867946(void)

void FUN_147867946(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac0a28 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac0a28 = FUN_14171c317(FUN_146375cbf,uVar1,L"ENetRole");
  }
  return;
}



// FUNCTION 147867982 FUN_147867982 body=61 status=ok
// SIG undefined FUN_147867982(void)

void FUN_147867982(undefined8 param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_1447cd2ec(param_1,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478679c0 FUN_1478679c0 body=61 status=ok
// SIG undefined FUN_1478679c0(void)

void FUN_1478679c0(undefined8 param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_1447cd2ec(param_1,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147867a64 FUN_147867a64 body=59 status=ok
// SIG undefined FUN_147867a64(void)

undefined8 FUN_147867a64(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147867b70 FUN_147867b70 body=59 status=ok
// SIG undefined FUN_147867b70(void)

undefined8 FUN_147867b70(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147867c82 FUN_147867c82 body=59 status=ok
// SIG undefined FUN_147867c82(void)

undefined8 FUN_147867c82(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147867d9c FUN_147867d9c body=59 status=ok
// SIG undefined FUN_147867d9c(void)

undefined8 FUN_147867d9c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147867f0a FUN_147867f0a body=59 status=ok
// SIG undefined FUN_147867f0a(void)

undefined8 FUN_147867f0a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147867ffc FUN_147867ffc body=149 status=ok
// SIG undefined FUN_147867ffc(void)

undefined1 FUN_147867ffc(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  byte bVar9;
  longlong lVar10;
  bool bVar11;
  longlong lVar12;
  
  bVar9 = DAT_14c950c29;
  for (; param_4 != 0; param_4 = param_4 + -1) {
    *(undefined8 *)((longlong)param_2 + 0x2d) = *(undefined8 *)((longlong)param_3 + 0x2d);
    uVar1 = *param_3;
    uVar2 = param_3[1];
    uVar3 = param_3[2];
    uVar4 = param_3[3];
    uVar5 = *(undefined8 *)(param_3 + 4);
    uVar6 = *(undefined8 *)(param_3 + 6);
    uVar7 = *(undefined8 *)(param_3 + 10);
    *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)(param_2 + 10) = uVar7;
    *(undefined8 *)(param_2 + 4) = uVar5;
    *(undefined8 *)(param_2 + 6) = uVar6;
    *param_2 = uVar1;
    param_2[1] = uVar2;
    param_2[2] = uVar3;
    param_2[3] = uVar4;
    bVar11 = false;
    lVar12 = 0;
    do {
      lVar10 = *(longlong *)(param_3 + lVar12 * 2 + 0xe);
      if ((bVar9 & 1) != 0) {
        if (lVar10 == 0) {
          lVar10 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar10 = *(longlong *)(param_3 + lVar12 * 2 + 0xe);
          bVar9 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar12 * 2 + 0xe) = lVar10;
      lVar12 = 1;
      bVar8 = !bVar11;
      bVar11 = true;
    } while (bVar8);
    param_3 = param_3 + 0x12;
    param_2 = param_2 + 0x12;
  }
  return 1;
}



// FUNCTION 1478680ba FUN_1478680ba body=59 status=ok
// SIG undefined FUN_1478680ba(void)

undefined8 FUN_1478680ba(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478681b0 FUN_1478681b0 body=98 status=ok
// SIG undefined FUN_1478681b0(void)

undefined1 FUN_1478681b0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1478682f4(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x14);
    uVar2 = *(undefined4 *)(param_3 + 0x18);
    uVar3 = *(undefined4 *)(param_3 + 0x1c);
    uVar4 = *(undefined4 *)(param_3 + 0x20);
    uVar5 = *(undefined4 *)(param_3 + 0x24);
    uVar6 = *(undefined4 *)(param_3 + 0x28);
    uVar7 = *(undefined4 *)(param_3 + 0x2c);
    uVar8 = *(undefined4 *)(param_3 + 0x30);
    uVar9 = *(undefined4 *)(param_3 + 0x34);
    uVar10 = *(undefined4 *)(param_3 + 0x38);
    uVar11 = *(undefined4 *)(param_3 + 0x3c);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
    *(undefined4 *)(param_2 + 0x14) = uVar1;
    *(undefined4 *)(param_2 + 0x18) = uVar2;
    *(undefined4 *)(param_2 + 0x1c) = uVar3;
    *(undefined4 *)(param_2 + 0x20) = uVar4;
    *(undefined4 *)(param_2 + 0x24) = uVar5;
    *(undefined4 *)(param_2 + 0x28) = uVar6;
    *(undefined4 *)(param_2 + 0x2c) = uVar7;
    *(undefined4 *)(param_2 + 0x30) = uVar8;
    *(undefined4 *)(param_2 + 0x34) = uVar9;
    *(undefined4 *)(param_2 + 0x38) = uVar10;
    *(undefined4 *)(param_2 + 0x3c) = uVar11;
    *(undefined1 *)(param_2 + 0x40) = *(undefined1 *)(param_3 + 0x40);
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return 1;
}



// FUNCTION 14786823a FUN_14786823a body=59 status=ok
// SIG undefined FUN_14786823a(void)

undefined8 FUN_14786823a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147868280 FUN_147868280 body=37 status=ok
// SIG undefined FUN_147868280(void)

void FUN_147868280(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[9] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 9) = 0;
  }
  return;
}



// FUNCTION 1478682f4 FUN_1478682f4 body=79 status=ok
// SIG undefined FUN_1478682f4(void)

undefined8 * FUN_1478682f4(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147868344(param_1,iVar1);
      FUN_1478683b7(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147868344 FUN_147868344 body=115 status=ok
// SIG undefined FUN_147868344(void)

void FUN_147868344(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1478683b7 FUN_1478683b7 body=134 status=ok
// SIG undefined FUN_1478683b7(void)

void FUN_1478683b7(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  byte bVar10;
  longlong lVar11;
  bool bVar12;
  
  bVar10 = DAT_14c950c29;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)param_1 + 0x2d) = *(undefined8 *)((longlong)param_2 + 0x2d);
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    uVar6 = *(undefined8 *)(param_2 + 4);
    uVar7 = *(undefined8 *)(param_2 + 6);
    uVar8 = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 10) = uVar8;
    *(undefined8 *)(param_1 + 4) = uVar6;
    *(undefined8 *)(param_1 + 6) = uVar7;
    *param_1 = uVar2;
    param_1[1] = uVar3;
    param_1[2] = uVar4;
    param_1[3] = uVar5;
    bVar12 = false;
    lVar11 = 0;
    do {
      lVar1 = *(longlong *)(param_2 + lVar11 * 2 + 0xe);
      *(longlong *)(param_1 + lVar11 * 2 + 0xe) = lVar1;
      if (((bVar10 & 1) != 0) && (lVar1 != 0)) {
        FUN_1456cec3c();
        bVar10 = DAT_14c950c29;
      }
      lVar11 = 1;
      bVar9 = !bVar12;
      bVar12 = true;
    } while (bVar9);
    param_1 = param_1 + 0x12;
    param_2 = param_2 + 0x12;
  }
  return;
}



// FUNCTION 147868466 FUN_147868466 body=54 status=ok
// SIG undefined FUN_147868466(void)

undefined1 FUN_147868466(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147868564(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1478684c4 FUN_1478684c4 body=59 status=ok
// SIG undefined FUN_1478684c4(void)

undefined8 FUN_1478684c4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147868564 FUN_147868564 body=91 status=ok
// SIG undefined FUN_147868564(void)

longlong * FUN_147868564(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *param_2;
    }
  }
  bVar1 = DAT_14c950c29;
  *param_1 = lVar2;
  lVar2 = param_2[1];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[1];
    }
  }
  param_1[1] = lVar2;
  return param_1;
}



// FUNCTION 1478685e8 FUN_1478685e8 body=173 status=ok
// SIG undefined FUN_1478685e8(void)

undefined1 FUN_1478685e8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  longlong lVar8;
  longlong lVar9;
  
  if (param_4 != 0) {
    lVar9 = 0;
    bVar7 = DAT_14c950c29;
    do {
      lVar8 = *(longlong *)(param_3 + lVar9);
      if ((bVar7 & 1) != 0) {
        if (lVar8 == 0) {
          lVar8 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar8 = *(longlong *)(param_3 + lVar9);
          bVar7 = DAT_14c950c29;
        }
      }
      plVar1 = (longlong *)(param_2 + lVar9);
      *plVar1 = lVar8;
      plVar1[3] = *(longlong *)(param_3 + 0x18 + lVar9);
      plVar2 = (longlong *)(param_3 + 8 + lVar9);
      lVar8 = plVar2[1];
      plVar1[1] = *plVar2;
      plVar1[2] = lVar8;
      plVar1[6] = *(longlong *)(param_3 + 0x30 + lVar9);
      plVar2 = (longlong *)(param_3 + 0x20 + lVar9);
      lVar8 = plVar2[1];
      plVar1[4] = *plVar2;
      plVar1[5] = lVar8;
      plVar1[9] = *(longlong *)(param_3 + 0x48 + lVar9);
      plVar2 = (longlong *)(param_3 + 0x38 + lVar9);
      lVar8 = plVar2[1];
      plVar1[7] = *plVar2;
      plVar1[8] = lVar8;
      puVar3 = (undefined4 *)(param_3 + 0x50 + lVar9);
      uVar4 = puVar3[1];
      uVar5 = puVar3[2];
      uVar6 = puVar3[3];
      *(undefined4 *)(plVar1 + 10) = *puVar3;
      *(undefined4 *)((longlong)plVar1 + 0x54) = uVar4;
      *(undefined4 *)(plVar1 + 0xb) = uVar5;
      *(undefined4 *)((longlong)plVar1 + 0x5c) = uVar6;
      plVar1[0xc] = *(longlong *)(param_3 + 0x60 + lVar9);
      lVar9 = lVar9 + 0x68;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1478686be FUN_1478686be body=59 status=ok
// SIG undefined FUN_1478686be(void)

undefined8 FUN_1478686be(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147868760 FUN_147868760 body=29 status=ok
// SIG undefined FUN_147868760(void)

void FUN_147868760(undefined8 param_1,longlong param_2)

{
  FUN_144a5dc74(param_2);
  *(undefined4 *)(param_2 + 0x10) = 0;
  return;
}



// FUNCTION 14786877e FUN_14786877e body=29 status=ok
// SIG undefined FUN_14786877e(void)

void FUN_14786877e(undefined8 param_1,longlong param_2)

{
  FUN_144a5dc74(param_2);
  *(undefined4 *)(param_2 + 0x10) = 0;
  return;
}



// FUNCTION 1478687c2 FUN_1478687c2 body=116 status=ok
// SIG undefined FUN_1478687c2(void)

undefined8 FUN_1478687c2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
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
      *(undefined4 *)(param_2 + 0x10 + lVar3) = *(undefined4 *)(param_3 + 0x10 + lVar3);
      lVar3 = lVar3 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14786885e FUN_14786885e body=59 status=ok
// SIG undefined FUN_14786885e(void)

undefined8 FUN_14786885e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478688a4 FUN_1478688a4 body=38 status=ok
// SIG undefined FUN_1478688a4(void)

void FUN_1478688a4(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[3] == '\x01') {
    if ((longlong *)*param_2 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_2 + 0x10))();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 1478689a2 FUN_1478689a2 body=59 status=ok
// SIG undefined FUN_1478689a2(void)

undefined8 FUN_1478689a2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147868ad0 FUN_147868ad0 body=59 status=ok
// SIG undefined FUN_147868ad0(void)

undefined8 FUN_147868ad0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147868c02 FUN_147868c02 body=59 status=ok
// SIG undefined FUN_147868c02(void)

undefined8 FUN_147868c02(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147868d10 FUN_147868d10 body=59 status=ok
// SIG undefined FUN_147868d10(void)

undefined8 FUN_147868d10(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147868e1e FUN_147868e1e body=59 status=ok
// SIG undefined FUN_147868e1e(void)

undefined8 FUN_147868e1e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147868f30 FUN_147868f30 body=59 status=ok
// SIG undefined FUN_147868f30(void)

undefined8 FUN_147868f30(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147869052 FUN_147869052 body=59 status=ok
// SIG undefined FUN_147869052(void)

undefined8 FUN_147869052(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147869178 FUN_147869178 body=59 status=ok
// SIG undefined FUN_147869178(void)

undefined8 FUN_147869178(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147869248 FUN_147869248 body=129 status=ok
// SIG undefined FUN_147869248(void)

undefined8 FUN_147869248(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      puVar1 = (undefined4 *)(param_3 + lVar10);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      uVar7 = puVar1[5];
      uVar8 = puVar1[6];
      uVar9 = puVar1[7];
      puVar2 = (undefined4 *)(param_2 + lVar10);
      puVar2[4] = puVar1[4];
      puVar2[5] = uVar7;
      puVar2[6] = uVar8;
      puVar2[7] = uVar9;
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      FUN_144a67f5c();
      FUN_140cae46a(param_2 + lVar10 + 0x30,param_3 + lVar10 + 0x30);
      *(undefined8 *)(param_2 + lVar10 + 0x80) = *(undefined8 *)(param_3 + lVar10 + 0x80);
      lVar10 = lVar10 + 0x88;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1478692f2 FUN_1478692f2 body=59 status=ok
// SIG undefined FUN_1478692f2(void)

undefined8 FUN_1478692f2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786933e FUN_14786933e body=38 status=ok
// SIG undefined FUN_14786933e(void)

void FUN_14786933e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_1417acf74(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 14786945c FUN_14786945c body=59 status=ok
// SIG undefined FUN_14786945c(void)

undefined8 FUN_14786945c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478695a2 FUN_1478695a2 body=152 status=ok
// SIG undefined FUN_1478695a2(void)

undefined1 FUN_1478695a2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  byte bVar14;
  longlong lVar15;
  longlong lVar16;
  
  if (param_4 != 0) {
    lVar16 = 0;
    bVar14 = DAT_14c950c29;
    do {
      *(undefined4 *)(param_2 + 0x30 + lVar16) = *(undefined4 *)(param_3 + 0x30 + lVar16);
      puVar1 = (undefined4 *)(param_3 + lVar16);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar1 = (undefined4 *)(param_3 + 0x10 + lVar16);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      uVar9 = puVar1[2];
      uVar10 = puVar1[3];
      puVar1 = (undefined4 *)(param_3 + 0x20 + lVar16);
      uVar11 = puVar1[1];
      uVar12 = puVar1[2];
      uVar13 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x20 + lVar16);
      *puVar2 = *puVar1;
      puVar2[1] = uVar11;
      puVar2[2] = uVar12;
      puVar2[3] = uVar13;
      puVar1 = (undefined4 *)(param_2 + 0x10 + lVar16);
      *puVar1 = uVar7;
      puVar1[1] = uVar8;
      puVar1[2] = uVar9;
      puVar1[3] = uVar10;
      puVar1 = (undefined4 *)(param_2 + lVar16);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      lVar15 = *(longlong *)(param_3 + 0x38 + lVar16);
      if ((bVar14 & 1) != 0) {
        if (lVar15 == 0) {
          lVar15 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar15 = *(longlong *)(param_3 + 0x38 + lVar16);
          bVar14 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar16 + 0x38) = lVar15;
      *(undefined4 *)(param_2 + lVar16 + 0x40) = *(undefined4 *)(param_3 + 0x40 + lVar16);
      lVar16 = lVar16 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147869662 FUN_147869662 body=59 status=ok
// SIG undefined FUN_147869662(void)

undefined8 FUN_147869662(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786979e FUN_14786979e body=59 status=ok
// SIG undefined FUN_14786979e(void)

undefined8 FUN_14786979e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147869868 FUN_147869868 body=100 status=ok
// SIG undefined FUN_147869868(void)

undefined1 FUN_147869868(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3) = lVar2;
      *(undefined8 *)(param_2 + 8 + lVar3) = *(undefined8 *)(param_3 + 8 + lVar3);
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1478698f4 FUN_1478698f4 body=59 status=ok
// SIG undefined FUN_1478698f4(void)

undefined8 FUN_1478698f4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147869a1e FUN_147869a1e body=59 status=ok
// SIG undefined FUN_147869a1e(void)

undefined8 FUN_147869a1e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147869a64 FUN_147869a64 body=38 status=ok
// SIG undefined FUN_147869a64(void)

void FUN_147869a64(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    if (*(longlong *)(param_2 + 0x30) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 147869ad8 FUN_147869ad8 body=98 status=ok
// SIG undefined FUN_147869ad8(void)

void FUN_147869ad8(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,8);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147869b3a FUN_147869b3a body=96 status=ok
// SIG undefined FUN_147869b3a(void)

void FUN_147869b3a(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3);
      *(longlong *)(param_1 + lVar3) = lVar1;
      if ((lVar1 != 0 & bVar2) == 1) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      *(undefined8 *)(param_1 + 8 + lVar3) = *(undefined8 *)(param_2 + 8 + lVar3);
      lVar3 = lVar3 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147869c14 FUN_147869c14 body=59 status=ok
// SIG undefined FUN_147869c14(void)

undefined8 FUN_147869c14(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147869d2e FUN_147869d2e body=59 status=ok
// SIG undefined FUN_147869d2e(void)

undefined8 FUN_147869d2e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147869e3c FUN_147869e3c body=59 status=ok
// SIG undefined FUN_147869e3c(void)

undefined8 FUN_147869e3c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147869f4a FUN_147869f4a body=59 status=ok
// SIG undefined FUN_147869f4a(void)

undefined8 FUN_147869f4a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786a028 FUN_14786a028 body=94 status=ok
// SIG undefined FUN_14786a028(void)

undefined8 FUN_14786a028(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar3);
      lVar2 = param_2 + 8 + lVar3;
      *(undefined8 *)(lVar2 + -8) = *puVar1;
      FUN_144a787a6(lVar2,puVar1 + 1);
      *(undefined8 *)(lVar2 + 0x10) = puVar1[3];
      lVar3 = lVar3 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14786a0ae FUN_14786a0ae body=70 status=ok
// SIG undefined FUN_14786a0ae(void)

void FUN_14786a0ae(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_14786a175(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786a100 FUN_14786a100 body=38 status=ok
// SIG undefined FUN_14786a100(void)

void FUN_14786a100(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 14786a175 FUN_14786a175 body=150 status=ok
// SIG undefined FUN_14786a175(void)

uint FUN_14786a175(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined2 *puVar7;
  uint uVar8;
  
  iVar5 = *(int *)(param_1 + 2);
  uVar1 = *(uint *)((longlong)param_1 + 0x1c);
  uVar2 = *(uint *)(param_1 + 3);
  if (iVar5 == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = (undefined2 *)param_1[1];
  }
  iVar4 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar4 = 0;
  }
  iVar5 = FUN_144a49b4a(iVar4,puVar7);
  uVar3 = *param_1;
  uVar6 = (uint)((ulonglong)uVar3 >> 0x10);
  uVar8 = (uint)uVar3 & 0xffff;
  uVar6 = ((uint)uVar3 << 0x10 | uVar8) + (int)((ulonglong)uVar3 >> 0x20) +
          (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar8 >> 4);
  uVar6 = iVar5 + (uVar6 >> 2) + uVar6 * 0x40 + -0x61c88647 ^ uVar6;
  return uVar6 ^ (uVar6 >> 2) + 0x9e3779b9 + (uVar1 ^ uVar2) + uVar6 * 0x40;
}



// FUNCTION 14786a26c FUN_14786a26c body=102 status=ok
// SIG undefined FUN_14786a26c(void)

undefined8 FUN_14786a26c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar3);
      lVar2 = param_2 + 8 + lVar3;
      *(undefined8 *)(lVar2 + -8) = *puVar1;
      FUN_144a787a6(lVar2,puVar1 + 1);
      *(undefined8 *)(lVar2 + 0x10) = puVar1[3];
      *(undefined8 *)(lVar2 + 0x18) = puVar1[4];
      lVar3 = lVar3 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14786a2fa FUN_14786a2fa body=70 status=ok
// SIG undefined FUN_14786a2fa(void)

void FUN_14786a2fa(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_14786a175(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786a34c FUN_14786a34c body=38 status=ok
// SIG undefined FUN_14786a34c(void)

void FUN_14786a34c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14786a3fa FUN_14786a3fa body=48 status=ok
// SIG undefined FUN_14786a3fa(void)

void FUN_14786a3fa(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14786a440 FUN_14786a440 body=133 status=ok
// SIG undefined FUN_14786a440(void)

undefined8 FUN_14786a440(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar6);
      lVar2 = param_2 + 8 + lVar6;
      *(undefined8 *)(lVar2 + -8) = *puVar1;
      FUN_144a787a6(lVar2,puVar1 + 1);
      *(undefined8 *)(lVar2 + 0x10) = puVar1[3];
      *(undefined8 *)(lVar2 + 0x18) = puVar1[4];
      uVar3 = *(undefined4 *)((longlong)puVar1 + 0x2c);
      uVar4 = *(undefined4 *)(puVar1 + 6);
      uVar5 = *(undefined4 *)((longlong)puVar1 + 0x34);
      *(undefined4 *)(lVar2 + 0x20) = *(undefined4 *)(puVar1 + 5);
      *(undefined4 *)(lVar2 + 0x24) = uVar3;
      *(undefined4 *)(lVar2 + 0x28) = uVar4;
      *(undefined4 *)(lVar2 + 0x2c) = uVar5;
      FUN_144a787a6(param_2 + lVar6 + 0x38,param_3 + lVar6 + 0x38);
      lVar6 = lVar6 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14786a4f2 FUN_14786a4f2 body=70 status=ok
// SIG undefined FUN_14786a4f2(void)

void FUN_14786a4f2(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_14786a175(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786a59c FUN_14786a59c body=52 status=ok
// SIG undefined FUN_14786a59c(void)

void FUN_14786a59c(longlong param_1)

{
  if (*(char *)(param_1 + 0x48) == '\x01') {
    if (*(longlong *)(param_1 + 0x38) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  return;
}



// FUNCTION 14786a63c FUN_14786a63c body=59 status=ok
// SIG undefined FUN_14786a63c(void)

undefined8 FUN_14786a63c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786a74a FUN_14786a74a body=59 status=ok
// SIG undefined FUN_14786a74a(void)

undefined8 FUN_14786a74a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786a844 FUN_14786a844 body=70 status=ok
// SIG undefined FUN_14786a844(void)

undefined8 FUN_14786a844(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a67f5c(param_2,param_3);
    uVar1 = *(undefined8 *)(param_3 + 0x15);
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(param_2 + 0x15) = uVar1;
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 14786a8b2 FUN_14786a8b2 body=59 status=ok
// SIG undefined FUN_14786a8b2(void)

undefined8 FUN_14786a8b2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786a8f8 FUN_14786a8f8 body=37 status=ok
// SIG undefined FUN_14786a8f8(void)

void FUN_14786a8f8(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[4] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 4) = 0;
  }
  return;
}



// FUNCTION 14786aa12 FUN_14786aa12 body=59 status=ok
// SIG undefined FUN_14786aa12(void)

undefined8 FUN_14786aa12(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786ab62 FUN_14786ab62 body=59 status=ok
// SIG undefined FUN_14786ab62(void)

undefined8 FUN_14786ab62(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786ac3c FUN_14786ac3c body=68 status=ok
// SIG undefined FUN_14786ac3c(void)

undefined8 FUN_14786ac3c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x90);
      lVar1 = lVar1 + 0x90;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14786aca8 FUN_14786aca8 body=59 status=ok
// SIG undefined FUN_14786aca8(void)

undefined8 FUN_14786aca8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786ad92 FUN_14786ad92 body=60 status=ok
// SIG undefined FUN_14786ad92(void)

undefined1 FUN_14786ad92(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_3 + 0x10);
    param_2 = param_2 + 0x18;
    param_3 = param_3 + 0x18;
  }
  return 1;
}



// FUNCTION 14786adf6 FUN_14786adf6 body=59 status=ok
// SIG undefined FUN_14786adf6(void)

undefined8 FUN_14786adf6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786ae3c FUN_14786ae3c body=37 status=ok
// SIG undefined FUN_14786ae3c(void)

void FUN_14786ae3c(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[3] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 14786af6c FUN_14786af6c body=59 status=ok
// SIG undefined FUN_14786af6c(void)

undefined8 FUN_14786af6c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786b034 FUN_14786b034 body=104 status=ok
// SIG undefined FUN_14786b034(void)

void FUN_14786b034(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cac0cc8) {
    FUN_144b3d300(&DAT_14cac0cc8);
    if (DAT_14cac0cc8 == -1) {
      FUN_1446f470e(&DAT_14cac0cc0,L"bEnabled",1);
      _Init_thread_footer(&DAT_14cac0cc8);
      return;
    }
  }
  return;
}



// FUNCTION 14786b09c FUN_14786b09c body=155 status=ok
// SIG undefined FUN_14786b09c(void)

void FUN_14786b09c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_28;
  uStack_34 = uStack_24;
  uStack_30 = uStack_20;
  uStack_2c = uStack_1c;
  FUN_1479dded4(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786b138 FUN_14786b138 body=156 status=ok
// SIG undefined FUN_14786b138(void)

void FUN_14786b138(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479dde98(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786b1d6 FUN_14786b1d6 body=156 status=ok
// SIG undefined FUN_14786b1d6(void)

void FUN_14786b1d6(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479ddeb6(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786b274 FUN_14786b274 body=156 status=ok
// SIG undefined FUN_14786b274(void)

void FUN_14786b274(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479ddfbc(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786b312 FUN_14786b312 body=156 status=ok
// SIG undefined FUN_14786b312(void)

void FUN_14786b312(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479ddfda(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786b3b0 FUN_14786b3b0 body=156 status=ok
// SIG undefined FUN_14786b3b0(void)

void FUN_14786b3b0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479ddd14(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786b44e FUN_14786b44e body=156 status=ok
// SIG undefined FUN_14786b44e(void)

void FUN_14786b44e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479ddf44(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786b4ec FUN_14786b4ec body=155 status=ok
// SIG undefined FUN_14786b4ec(void)

void FUN_14786b4ec(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_28;
  uStack_34 = uStack_24;
  uStack_30 = uStack_20;
  uStack_2c = uStack_1c;
  FUN_1479ddd50(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786b588 FUN_14786b588 body=156 status=ok
// SIG undefined FUN_14786b588(void)

void FUN_14786b588(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479ddf80(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786b626 FUN_14786b626 body=156 status=ok
// SIG undefined FUN_14786b626(void)

void FUN_14786b626(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479dde0a(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786b6c8 FUN_14786b6c8 body=158 status=ok
// SIG undefined FUN_14786b6c8(void)

void FUN_14786b6c8(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_1479de152(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786b768 FUN_14786b768 body=156 status=ok
// SIG undefined FUN_14786b768(void)

void FUN_14786b768(undefined8 param_1,longlong param_2)

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
  FUN_1479ddda2(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786b806 FUN_14786b806 body=156 status=ok
// SIG undefined FUN_14786b806(void)

void FUN_14786b806(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479dddec(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786b8a4 FUN_14786b8a4 body=155 status=ok
// SIG undefined FUN_14786b8a4(void)

void FUN_14786b8a4(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_28;
  uStack_34 = uStack_24;
  uStack_30 = uStack_20;
  uStack_2c = uStack_1c;
  FUN_1479dde46(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786b940 FUN_14786b940 body=156 status=ok
// SIG undefined FUN_14786b940(void)

void FUN_14786b940(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479dde28(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786b9e2 FUN_14786b9e2 body=158 status=ok
// SIG undefined FUN_14786b9e2(void)

void FUN_14786b9e2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_1479de174(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786ba82 FUN_14786ba82 body=185 status=ok
// SIG undefined FUN_14786ba82(void)

void FUN_14786ba82(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_24 = 0x3e4ccccd3ca3d70a;
  local_1c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = local_1c;
  local_30 = local_24;
  FUN_1479de108(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786bb3c FUN_14786bb3c body=156 status=ok
// SIG undefined FUN_14786bb3c(void)

void FUN_14786bb3c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479ddd32(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786bbda FUN_14786bbda body=156 status=ok
// SIG undefined FUN_14786bbda(void)

void FUN_14786bbda(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479ddf62(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786bc78 FUN_14786bc78 body=156 status=ok
// SIG undefined FUN_14786bc78(void)

void FUN_14786bc78(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479ddf26(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786bd16 FUN_14786bd16 body=156 status=ok
// SIG undefined FUN_14786bd16(void)

void FUN_14786bd16(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479ddf9e(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786bdb8 FUN_14786bdb8 body=158 status=ok
// SIG undefined FUN_14786bdb8(void)

void FUN_14786bdb8(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_1479ddff8(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786be58 FUN_14786be58 body=146 status=ok
// SIG undefined FUN_14786be58(void)

void FUN_14786be58(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_1479de048(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786beec FUN_14786beec body=156 status=ok
// SIG undefined FUN_14786beec(void)

void FUN_14786beec(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479de0ae(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786bf8a FUN_14786bf8a body=155 status=ok
// SIG undefined FUN_14786bf8a(void)

void FUN_14786bf8a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_28;
  uStack_34 = uStack_24;
  uStack_30 = uStack_20;
  uStack_2c = uStack_1c;
  FUN_1479de05c(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786c026 FUN_14786c026 body=156 status=ok
// SIG undefined FUN_14786c026(void)

void FUN_14786c026(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479de02a(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786c0c4 FUN_14786c0c4 body=156 status=ok
// SIG undefined FUN_14786c0c4(void)

void FUN_14786c0c4(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479de0ea(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786c162 FUN_14786c162 body=156 status=ok
// SIG undefined FUN_14786c162(void)

void FUN_14786c162(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479de00c(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786c200 FUN_14786c200 body=156 status=ok
// SIG undefined FUN_14786c200(void)

void FUN_14786c200(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1479de0cc(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786c2c8 FUN_14786c2c8 body=75 status=ok
// SIG undefined FUN_14786c2c8(void)

void FUN_14786c2c8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_1463b75d2(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786c31a FUN_14786c31a body=155 status=ok
// SIG undefined FUN_14786c31a(void)

void FUN_14786c31a(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_14376b4c8(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786c3bc FUN_14786c3bc body=179 status=ok
// SIG undefined FUN_14786c3bc(void)

void FUN_14786c3bc(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147d89baa(plVar2);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786c470 FUN_14786c470 body=99 status=ok
// SIG undefined FUN_14786c470(void)

undefined1 FUN_14786c470(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  local_28 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cac0df8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786c4ee FUN_14786c4ee body=75 status=ok
// SIG undefined FUN_14786c4ee(void)

void FUN_14786c4ee(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_147d89222(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786c54e FUN_14786c54e body=75 status=ok
// SIG undefined FUN_14786c54e(void)

void FUN_14786c54e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_147db6ab8(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786c59a FUN_14786c59a body=334 status=ok
// SIG undefined FUN_14786c59a(void)

void FUN_14786c59a(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  void *local_38;
  ulonglong uStack_30;
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
  local_38 = (void *)0x0;
  uStack_30 = 0;
  FUN_1446e6bbc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  _Src = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = (void *)0x0;
  lVar1 = (longlong)(int)uStack_30;
  local_40 = (int)uStack_30;
  if (lVar1 == 0) {
    local_3c = 0;
  }
  else {
    FUN_14786ee86(&local_48,uStack_30 & 0xffffffff);
    memcpy(local_48,_Src,lVar1 << 3);
  }
  FUN_147a965e4(local_28,&local_48);
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786c6ea FUN_14786c6ea body=230 status=ok
// SIG undefined FUN_14786c6ea(void)

void FUN_14786c6ea(undefined8 param_1,longlong param_2)

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
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147a964ea(local_18,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786c8ee FUN_14786c8ee body=45 status=ok
// SIG undefined FUN_14786c8ee(void)

longlong FUN_14786c8ee(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e79a(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14786c92e FUN_14786c92e body=28 status=ok
// SIG undefined FUN_14786c92e(void)

undefined8
FUN_14786c92e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140056680(param_2,param_4);
  return param_2;
}



// FUNCTION 14786c950 FUN_14786c950 body=45 status=ok
// SIG undefined FUN_14786c950(void)

longlong FUN_14786c950(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_145c26a9a(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14786c9e6 FUN_14786c9e6 body=45 status=ok
// SIG undefined FUN_14786c9e6(void)

longlong FUN_14786c9e6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_145811b14(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14786caaa FUN_14786caaa body=59 status=ok
// SIG undefined FUN_14786caaa(void)

undefined8 FUN_14786caaa(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786cb4c FUN_14786cb4c body=83 status=ok
// SIG undefined FUN_14786cb4c(void)

void FUN_14786cb4c(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_14584f2f0(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_14584f2f0(param_1);
  return;
}



// FUNCTION 14786cc0c FUN_14786cc0c body=64 status=ok
// SIG undefined FUN_14786cc0c(void)

undefined4 FUN_14786cc0c(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return *param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786cd20 FUN_14786cd20 body=70 status=ok
// SIG undefined FUN_14786cd20(void)

void FUN_14786cd20(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_147c69fa7(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786ce24 FUN_14786ce24 body=59 status=ok
// SIG undefined FUN_14786ce24(void)

undefined8 FUN_14786ce24(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786ce70 FUN_14786ce70 body=40 status=ok
// SIG undefined FUN_14786ce70(void)

void FUN_14786ce70(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    FUN_1457f55d6(param_2);
    *(undefined1 *)(param_2 + 0xb0) = 0;
  }
  return;
}



// FUNCTION 14786cee8 FUN_14786cee8 body=48 status=ok
// SIG undefined FUN_14786cee8(void)

void FUN_14786cee8(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0xc0);
  FUN_1458d7a8c(param_2);
  *param_2 = &PTR_FUN_14a616350;
  return;
}



// FUNCTION 14786cf18 FUN_14786cf18 body=32 status=ok
// SIG undefined FUN_14786cf18(void)

void FUN_14786cf18(undefined8 param_1,undefined8 *param_2)

{
  FUN_1458d7a8c(param_2);
  *param_2 = &PTR_FUN_14a616350;
  return;
}



// FUNCTION 14786cf5c FUN_14786cf5c body=94 status=ok
// SIG undefined FUN_14786cf5c(void)

undefined1 FUN_14786cf5c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x30);
      uVar2 = *(undefined4 *)(param_3 + -0x2c);
      uVar3 = *(undefined4 *)(param_3 + -0x28);
      uVar4 = *(undefined4 *)(param_3 + -0x24);
      uVar5 = *(undefined4 *)(param_3 + -0x20);
      uVar6 = *(undefined4 *)(param_3 + -0x1c);
      uVar7 = *(undefined4 *)(param_3 + -0x18);
      uVar8 = *(undefined4 *)(param_3 + -0x14);
      uVar9 = *(undefined4 *)(param_3 + -0xc);
      uVar10 = *(undefined4 *)(param_3 + -8);
      uVar11 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar9;
      *(undefined4 *)(param_2 + -8) = uVar10;
      *(undefined4 *)(param_2 + -4) = uVar11;
      *(undefined4 *)(param_2 + -0x20) = uVar5;
      *(undefined4 *)(param_2 + -0x1c) = uVar6;
      *(undefined4 *)(param_2 + -0x18) = uVar7;
      *(undefined4 *)(param_2 + -0x14) = uVar8;
      *(undefined4 *)(param_2 + -0x30) = uVar1;
      *(undefined4 *)(param_2 + -0x2c) = uVar2;
      *(undefined4 *)(param_2 + -0x28) = uVar3;
      *(undefined4 *)(param_2 + -0x24) = uVar4;
      FUN_14115e0ba(param_2,param_3);
      param_3 = param_3 + 0xc0;
      param_2 = param_2 + 0xc0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14786cfe2 FUN_14786cfe2 body=59 status=ok
// SIG undefined FUN_14786cfe2(void)

undefined8 FUN_14786cfe2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786d02e FUN_14786d02e body=38 status=ok
// SIG undefined FUN_14786d02e(void)

void FUN_14786d02e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xc0) == '\x01') {
    FUN_145821ae8(param_2);
    *(undefined1 *)(param_2 + 0xc0) = 0;
  }
  return;
}



// FUNCTION 14786d0a4 FUN_14786d0a4 body=43 status=ok
// SIG undefined FUN_14786d0a4(void)

undefined8 FUN_14786d0a4(undefined8 param_1,int param_2)

{
  FUN_145821ae8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 14786d154 FUN_14786d154 body=59 status=ok
// SIG undefined FUN_14786d154(void)

undefined8 FUN_14786d154(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786d1f6 FUN_14786d1f6 body=166 status=ok
// SIG undefined FUN_14786d1f6(void)

void FUN_14786d1f6(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  uVar5 = DAT_14c8464e8;
  uVar4 = DAT_14c8464e0;
  uVar3 = DAT_14c8462e8;
  uVar2 = DAT_14c8462e0;
  uVar1 = DAT_14c8462d8;
  local_18 = DAT_14c8462e8;
  local_28 = DAT_14c8462d8;
  uStack_20 = DAT_14c8462e0;
  param_2[2] = DAT_14c8464f0;
  *param_2 = uVar4;
  param_2[1] = uVar5;
  local_28._0_4_ = (undefined4)uVar1;
  local_28._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_20._0_4_ = (undefined4)uVar2;
  uStack_20._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  *(undefined4 *)(param_2 + 3) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x1c) = local_28._4_4_;
  *(undefined4 *)(param_2 + 4) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x24) = uStack_20._4_4_;
  param_2[5] = uVar3;
  *(undefined1 *)(param_2 + 6) = 0;
  *(undefined8 *)((longlong)param_2 + 0x34) = 0x3f80000000000000;
  param_2[0xc] = 0x41a00000;
  *(undefined4 *)((longlong)param_2 + 0x6c) = 0x3f800000;
  *(undefined2 *)((longlong)param_2 + 0x3c) = 1;
  *(undefined1 *)(param_2 + 0xd) = 0;
  *(undefined1 *)(param_2 + 0xe) = 0;
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
  local_28 = uVar1;
  uStack_20 = uVar2;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786d29e FUN_14786d29e body=166 status=ok
// SIG undefined FUN_14786d29e(void)

void FUN_14786d29e(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  uVar5 = DAT_14c8464e8;
  uVar4 = DAT_14c8464e0;
  uVar3 = DAT_14c8462e8;
  uVar2 = DAT_14c8462e0;
  uVar1 = DAT_14c8462d8;
  local_18 = DAT_14c8462e8;
  local_28 = DAT_14c8462d8;
  uStack_20 = DAT_14c8462e0;
  param_2[2] = DAT_14c8464f0;
  *param_2 = uVar4;
  param_2[1] = uVar5;
  local_28._0_4_ = (undefined4)uVar1;
  local_28._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_20._0_4_ = (undefined4)uVar2;
  uStack_20._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  *(undefined4 *)(param_2 + 3) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x1c) = local_28._4_4_;
  *(undefined4 *)(param_2 + 4) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x24) = uStack_20._4_4_;
  param_2[5] = uVar3;
  *(undefined1 *)(param_2 + 6) = 0;
  *(undefined8 *)((longlong)param_2 + 0x34) = 0x3f80000000000000;
  param_2[0xc] = 0x41a00000;
  *(undefined4 *)((longlong)param_2 + 0x6c) = 0x3f800000;
  *(undefined2 *)((longlong)param_2 + 0x3c) = 1;
  *(undefined1 *)(param_2 + 0xd) = 0;
  *(undefined1 *)(param_2 + 0xe) = 0;
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
  local_28 = uVar1;
  uStack_20 = uVar2;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786d346 FUN_14786d346 body=48 status=ok
// SIG undefined FUN_14786d346(void)

void FUN_14786d346(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14786d38c FUN_14786d38c body=149 status=ok
// SIG undefined FUN_14786d38c(void)

undefined1 FUN_14786d38c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  longlong lVar20;
  
  if (param_4 != 0) {
    lVar20 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar20);
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
      uVar15 = puVar1[0xb];
      uVar16 = *(undefined4 *)((longlong)puVar1 + 0x32);
      uVar17 = *(undefined4 *)((longlong)puVar1 + 0x36);
      uVar18 = *(undefined4 *)((longlong)puVar1 + 0x3a);
      lVar3 = param_2 + 0x40 + lVar20;
      *(undefined4 *)(lVar3 + -0x12) = *(undefined4 *)((longlong)puVar1 + 0x2e);
      *(undefined4 *)(lVar3 + -0xe) = uVar16;
      *(undefined4 *)(lVar3 + -10) = uVar17;
      *(undefined4 *)(lVar3 + -6) = uVar18;
      *(undefined4 *)(lVar3 + -0x20) = uVar12;
      *(undefined4 *)(lVar3 + -0x1c) = uVar13;
      *(undefined4 *)(lVar3 + -0x18) = uVar14;
      *(undefined4 *)(lVar3 + -0x14) = uVar15;
      *(undefined4 *)(lVar3 + -0x30) = uVar8;
      *(undefined4 *)(lVar3 + -0x2c) = uVar9;
      *(undefined4 *)(lVar3 + -0x28) = uVar10;
      *(undefined4 *)(lVar3 + -0x24) = uVar11;
      *(undefined4 *)(lVar3 + -0x40) = uVar4;
      *(undefined4 *)(lVar3 + -0x3c) = uVar5;
      *(undefined4 *)(lVar3 + -0x38) = uVar6;
      *(undefined4 *)(lVar3 + -0x34) = uVar7;
      FUN_14786d4e6();
      lVar3 = param_2 + lVar20;
      lVar2 = param_3 + lVar20;
      FUN_1407f1ff6(lVar3 + 0x50,lVar2 + 0x50);
      uVar19 = *(undefined8 *)(lVar2 + 0x68);
      *(undefined8 *)(lVar3 + 0x60) = *(undefined8 *)(lVar2 + 0x60);
      *(undefined8 *)(lVar3 + 0x68) = uVar19;
      *(undefined1 *)(lVar3 + 0x70) = *(undefined1 *)(lVar2 + 0x70);
      lVar20 = lVar20 + 0x78;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14786d44a FUN_14786d44a body=59 status=ok
// SIG undefined FUN_14786d44a(void)

undefined8 FUN_14786d44a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786d4e6 FUN_14786d4e6 body=84 status=ok
// SIG undefined FUN_14786d4e6(void)

undefined8 * FUN_14786d4e6(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1463787fe(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1);
      }
    }
  }
  return param_1;
}



// FUNCTION 14786d53c FUN_14786d53c body=52 status=ok
// SIG undefined FUN_14786d53c(void)

void FUN_14786d53c(longlong param_1)

{
  if (*(char *)(param_1 + 0x78) == '\x01') {
    if (*(longlong *)(param_1 + 0x50) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x78) = 0;
  }
  return;
}



// FUNCTION 14786d618 FUN_14786d618 body=59 status=ok
// SIG undefined FUN_14786d618(void)

undefined8 FUN_14786d618(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786d6ba FUN_14786d6ba body=54 status=ok
// SIG undefined FUN_14786d6ba(void)

void FUN_14786d6ba(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x148);
  *(undefined4 *)((longlong)param_2 + 0x118) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x4c) = 0x3f800000;
  *(undefined4 *)((longlong)param_2 + 0xec) = 0xffffffff;
  return;
}



// FUNCTION 14786d6f0 FUN_14786d6f0 body=80 status=ok
// SIG undefined FUN_14786d6f0(void)

void FUN_14786d6f0(undefined8 param_1,undefined8 *param_2)

{
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  memset(param_2 + 9,0,0x100);
  *(undefined4 *)(param_2 + 0x23) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x4c) = 0x3f800000;
  *(undefined4 *)((longlong)param_2 + 0xec) = 0xffffffff;
  return;
}



// FUNCTION 14786d764 FUN_14786d764 body=103 status=ok
// SIG undefined FUN_14786d764(void)

undefined8 FUN_14786d764(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14786d8ba(param_2,param_3);
    memcpy((void *)(param_2 + 0x10),(void *)(param_3 + 0x10),0x138);
    param_3 = param_3 + 0x148;
    param_2 = param_2 + 0x148;
  }
  return 1;
}



// FUNCTION 14786d7f4 FUN_14786d7f4 body=59 status=ok
// SIG undefined FUN_14786d7f4(void)

undefined8 FUN_14786d7f4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786d840 FUN_14786d840 body=43 status=ok
// SIG undefined FUN_14786d840(void)

void FUN_14786d840(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[0x29] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x29) = 0;
  }
  return;
}



// FUNCTION 14786d8ba FUN_14786d8ba body=85 status=ok
// SIG undefined FUN_14786d8ba(void)

undefined8 * FUN_14786d8ba(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14786d910(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x38);
      }
    }
  }
  return param_1;
}



// FUNCTION 14786d910 FUN_14786d910 body=111 status=ok
// SIG undefined FUN_14786d910(void)

void FUN_14786d910(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14786d9ea FUN_14786d9ea body=59 status=ok
// SIG undefined FUN_14786d9ea(void)

undefined8 FUN_14786d9ea(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786dab4 FUN_14786dab4 body=54 status=ok
// SIG undefined FUN_14786dab4(void)

undefined1 FUN_14786dab4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140e78ece(param_2,param_3);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 14786db12 FUN_14786db12 body=59 status=ok
// SIG undefined FUN_14786db12(void)

undefined8 FUN_14786db12(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786dbe8 FUN_14786dbe8 body=54 status=ok
// SIG undefined FUN_14786dbe8(void)

undefined1 FUN_14786dbe8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14786dd00(param_2,param_3);
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return 1;
}



// FUNCTION 14786dc46 FUN_14786dc46 body=59 status=ok
// SIG undefined FUN_14786dc46(void)

undefined8 FUN_14786dc46(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786dc8c FUN_14786dc8c body=38 status=ok
// SIG undefined FUN_14786dc8c(void)

void FUN_14786dc8c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    if (*(longlong *)(param_2 + 0x28) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 14786dd00 FUN_14786dd00 body=242 status=ok
// SIG undefined FUN_14786dd00(void)

longlong * FUN_14786dd00(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  if ((*param_1 != *param_2) || ((int)param_1[1] != (int)param_2[1])) {
    *param_1 = *param_2;
    *(int *)(param_1 + 1) = (int)param_2[1];
    param_1[2] = 0;
  }
  plVar1 = param_2 + 3;
  lVar3 = FUN_1446ddbd2();
  if (param_2[3] == 0) {
    if ((int)param_2[6] != 0) goto LAB_14786dd56;
  }
  else {
    cVar2 = FUN_144729dda(param_2 + 4);
    if ((cVar2 != '\0') || ((int)param_2[6] == 0)) {
      lVar4 = *plVar1;
      goto LAB_14786ddc9;
    }
LAB_14786dd56:
    lVar4 = FUN_14007daa4(plVar1,0,0);
    if (lVar4 != 0) {
      lVar5 = *(longlong *)(lVar4 + 8);
      if (*(ulonglong *)(lVar3 + 8) == 0) {
        bVar6 = lVar5 != 0;
        if (lVar5 != lVar3 && bVar6) {
          do {
            lVar5 = *(longlong *)(lVar5 + 0x30);
            bVar6 = lVar5 != 0;
            if (lVar5 == lVar3) break;
          } while (lVar5 != 0);
        }
        if (bVar6) goto LAB_14786dd7b;
      }
      else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) {
LAB_14786dd7b:
        *plVar1 = lVar4;
        goto LAB_14786ddc9;
      }
    }
    if (*plVar1 != 0) {
      *plVar1 = 0;
      param_2[4] = 0;
    }
  }
  lVar4 = 0;
LAB_14786ddc9:
  param_1[3] = lVar4;
  param_1[4] = param_2[4];
  FUN_1406fa324(param_1 + 5,param_2 + 5);
  return param_1;
}



// FUNCTION 14786de04 FUN_14786de04 body=44 status=ok
// SIG undefined FUN_14786de04(void)

void FUN_14786de04(undefined8 param_1,longlong *param_2)

{
  FUN_140e6d382(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14786de46 FUN_14786de46 body=54 status=ok
// SIG undefined FUN_14786de46(void)

undefined1 FUN_14786de46(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14786df40(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 14786dea4 FUN_14786dea4 body=59 status=ok
// SIG undefined FUN_14786dea4(void)

undefined8 FUN_14786dea4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786df40 FUN_14786df40 body=93 status=ok
// SIG undefined FUN_14786df40(void)

undefined8 * FUN_14786df40(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140e6d382(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14786df9e(param_1,iVar1);
      FUN_14786e00d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14786df9e FUN_14786df9e body=111 status=ok
// SIG undefined FUN_14786df9e(void)

void FUN_14786df9e(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14786e00d FUN_14786e00d body=52 status=ok
// SIG undefined FUN_14786e00d(void)

void FUN_14786e00d(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14786e042(param_1,param_2);
    param_1 = param_1 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return;
}



// FUNCTION 14786e042 FUN_14786e042 body=240 status=ok
// SIG undefined FUN_14786e042(void)

undefined8 * FUN_14786e042(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  plVar1 = param_2 + 3;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  lVar3 = FUN_1446ddbd2();
  if (param_2[3] == 0) {
    if (*(int *)(param_2 + 6) != 0) goto LAB_14786e096;
  }
  else {
    cVar2 = FUN_144729dda(param_2 + 4);
    if ((cVar2 != '\0') || (*(int *)(param_2 + 6) == 0)) {
      lVar4 = *plVar1;
      goto LAB_14786e109;
    }
LAB_14786e096:
    lVar4 = FUN_14007daa4(plVar1,0,0);
    if (lVar4 != 0) {
      lVar5 = *(longlong *)(lVar4 + 8);
      if (*(ulonglong *)(lVar3 + 8) == 0) {
        bVar6 = lVar5 != 0;
        if (lVar5 != lVar3 && bVar6) {
          do {
            lVar5 = *(longlong *)(lVar5 + 0x30);
            bVar6 = lVar5 != 0;
            if (lVar5 == lVar3) break;
          } while (lVar5 != 0);
        }
        if (bVar6) goto LAB_14786e0bb;
      }
      else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) {
LAB_14786e0bb:
        *plVar1 = lVar4;
        goto LAB_14786e109;
      }
    }
    if (*plVar1 != 0) {
      *plVar1 = 0;
      param_2[4] = 0;
    }
  }
  lVar4 = 0;
LAB_14786e109:
  param_1[3] = lVar4;
  param_1[4] = param_2[4];
  FUN_1406fa324(param_1 + 5,param_2 + 5);
  return param_1;
}



// FUNCTION 14786e134 FUN_14786e134 body=48 status=ok
// SIG undefined FUN_14786e134(void)

void FUN_14786e134(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_140e6d382(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 14786e164 FUN_14786e164 body=107 status=ok
// SIG undefined FUN_14786e164(void)

void FUN_14786e164(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0x3f800000;
  FUN_140e78e14(param_2 + 3);
  FUN_140e78e14(param_2 + 7);
  *(undefined1 *)(param_2 + 0xb) = 0;
  param_2[0xc] = 0;
  uVar1 = DAT_14c8464e8;
  param_2[0xd] = DAT_14c8464e0;
  param_2[0xe] = uVar1;
  param_2[0xf] = DAT_14c8464f0;
  return;
}



// FUNCTION 14786e1d0 FUN_14786e1d0 body=80 status=ok
// SIG undefined FUN_14786e1d0(void)

void FUN_14786e1d0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0x3f800000;
  FUN_140e78e14(param_2 + 3);
  FUN_140e78e14(param_2 + 7);
  *(undefined1 *)(param_2 + 0xb) = 0;
  param_2[0xc] = 0;
  uVar1 = DAT_14c8464e8;
  param_2[0xd] = DAT_14c8464e0;
  param_2[0xe] = uVar1;
  param_2[0xf] = DAT_14c8464f0;
  return;
}



// FUNCTION 14786e238 FUN_14786e238 body=63 status=ok
// SIG undefined FUN_14786e238(void)

undefined1 FUN_14786e238(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1432aaf46(param_2,param_3);
    param_3 = param_3 + 0x80;
    param_2 = param_2 + 0x80;
  }
  return 1;
}



// FUNCTION 14786e2a0 FUN_14786e2a0 body=59 status=ok
// SIG undefined FUN_14786e2a0(void)

undefined8 FUN_14786e2a0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786e34e FUN_14786e34e body=106 status=ok
// SIG undefined FUN_14786e34e(void)

void FUN_14786e34e(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x118);
  *(undefined1 *)(param_2 + 3) = 1;
  param_2[4] = 0;
  param_2[5] = 0;
  *(undefined1 *)(param_2 + 6) = 0;
  param_2[7] = 0xffffffffffffffff;
  *(undefined2 *)(param_2 + 8) = 0xffff;
  param_2[0x24] = 0;
  param_2[0x25] = 0x800000000;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *param_2 = &PTR_FUN_14a614ac0;
  return;
}



// FUNCTION 14786e446 FUN_14786e446 body=63 status=ok
// SIG undefined FUN_14786e446(void)

undefined1 FUN_14786e446(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14043063a(param_2,param_3);
    param_3 = param_3 + 0x130;
    param_2 = param_2 + 0x130;
  }
  return 1;
}



// FUNCTION 14786e4ae FUN_14786e4ae body=59 status=ok
// SIG undefined FUN_14786e4ae(void)

undefined8 FUN_14786e4ae(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786e4fa FUN_14786e4fa body=38 status=ok
// SIG undefined FUN_14786e4fa(void)

void FUN_14786e4fa(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x130) == '\x01') {
    FUN_141798144(param_2);
    *(undefined1 *)(param_2 + 0x130) = 0;
  }
  return;
}



// FUNCTION 14786e56e FUN_14786e56e body=43 status=ok
// SIG undefined FUN_14786e56e(void)

undefined8 FUN_14786e56e(undefined8 param_1,int param_2)

{
  FUN_141798144();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x130);
  }
  return param_1;
}



// FUNCTION 14786e59a FUN_14786e59a body=55 status=ok
// SIG undefined FUN_14786e59a(void)

void FUN_14786e59a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac1100 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac1100 = FUN_140002ddd(FUN_14637804d,uVar1,L"GbxAnimNode_SlotBase");
  }
  return;
}



// FUNCTION 14786e600 FUN_14786e600 body=106 status=ok
// SIG undefined FUN_14786e600(void)

void FUN_14786e600(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x118);
  *param_2 = &PTR_FUN_14a42e670;
  *(undefined1 *)(param_2 + 3) = 1;
  param_2[4] = 0;
  param_2[5] = 0;
  *(undefined1 *)(param_2 + 6) = 0;
  param_2[7] = 0xffffffffffffffff;
  *(undefined2 *)(param_2 + 8) = 0xffff;
  param_2[0x24] = 0;
  param_2[0x25] = 0x800000000;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  return;
}



// FUNCTION 14786e6f4 FUN_14786e6f4 body=63 status=ok
// SIG undefined FUN_14786e6f4(void)

undefined1 FUN_14786e6f4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14043063a(param_2,param_3);
    param_3 = param_3 + 0x130;
    param_2 = param_2 + 0x130;
  }
  return 1;
}



// FUNCTION 14786e75c FUN_14786e75c body=59 status=ok
// SIG undefined FUN_14786e75c(void)

undefined8 FUN_14786e75c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786e7a8 FUN_14786e7a8 body=38 status=ok
// SIG undefined FUN_14786e7a8(void)

void FUN_14786e7a8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x130) == '\x01') {
    FUN_141798144(param_2);
    *(undefined1 *)(param_2 + 0x130) = 0;
  }
  return;
}



// FUNCTION 14786e8a0 FUN_14786e8a0 body=59 status=ok
// SIG undefined FUN_14786e8a0(void)

undefined8 FUN_14786e8a0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786e9c6 FUN_14786e9c6 body=59 status=ok
// SIG undefined FUN_14786e9c6(void)

undefined8 FUN_14786e9c6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786eab8 FUN_14786eab8 body=62 status=ok
// SIG undefined FUN_14786eab8(void)

undefined8 FUN_14786eab8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1406fa324(param_2,param_3);
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
    param_2 = param_2 + 0x18;
    param_3 = param_3 + 0x18;
  }
  return 1;
}



// FUNCTION 14786eb1e FUN_14786eb1e body=59 status=ok
// SIG undefined FUN_14786eb1e(void)

undefined8 FUN_14786eb1e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786eb64 FUN_14786eb64 body=37 status=ok
// SIG undefined FUN_14786eb64(void)

void FUN_14786eb64(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[3] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 14786ec42 FUN_14786ec42 body=118 status=ok
// SIG undefined FUN_14786ec42(void)

undefined8 FUN_14786ec42(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
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
      puVar1 = (undefined4 *)(param_3 + lVar10);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      uVar7 = puVar1[5];
      uVar8 = puVar1[6];
      uVar9 = puVar1[7];
      lVar2 = param_2 + 0x20 + lVar10;
      *(undefined4 *)(lVar2 + -0x10) = puVar1[4];
      *(undefined4 *)(lVar2 + -0xc) = uVar7;
      *(undefined4 *)(lVar2 + -8) = uVar8;
      *(undefined4 *)(lVar2 + -4) = uVar9;
      *(undefined4 *)(lVar2 + -0x20) = uVar3;
      *(undefined4 *)(lVar2 + -0x1c) = uVar4;
      *(undefined4 *)(lVar2 + -0x18) = uVar5;
      *(undefined4 *)(lVar2 + -0x14) = uVar6;
      FUN_1406fa324(lVar2,puVar1 + 8);
      *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(puVar1 + 0xc);
      *(undefined4 *)(lVar2 + 0x18) = puVar1[0xe];
      lVar10 = lVar10 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14786ece0 FUN_14786ece0 body=59 status=ok
// SIG undefined FUN_14786ece0(void)

undefined8 FUN_14786ece0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786ed26 FUN_14786ed26 body=38 status=ok
// SIG undefined FUN_14786ed26(void)

void FUN_14786ed26(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    if (*(longlong *)(param_2 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 14786ede4 FUN_14786ede4 body=59 status=ok
// SIG undefined FUN_14786ede4(void)

undefined8 FUN_14786ede4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786ee86 FUN_14786ee86 body=89 status=ok
// SIG undefined FUN_14786ee86(void)

void FUN_14786ee86(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 * 8,4);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 3)) {
    uVar3 = uVar1 >> 3 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,8,4);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 14786eef0 FUN_14786eef0 body=420 status=ok
// SIG undefined FUN_14786eef0(void)

void FUN_14786eef0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  int local_3c;
  undefined8 local_38;
  undefined1 local_29;
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
  local_29 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  local_38 = 0;
  FUN_144a63fc8();
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_3c != 0;
  uVar1 = FUN_1411ac9e8(param_1,local_28,local_29,local_38);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786f0a2 FUN_14786f0a2 body=420 status=ok
// SIG undefined FUN_14786f0a2(void)

void FUN_14786f0a2(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  int local_3c;
  undefined8 local_38;
  undefined1 local_29;
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
  local_29 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  local_38 = 0;
  FUN_144a63fc8();
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_3c != 0;
  uVar1 = FUN_1411ac4f8(param_1,local_28,local_29,local_38);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786f4b4 FUN_14786f4b4 body=164 status=ok
// SIG undefined FUN_14786f4b4(void)

void FUN_14786f4b4(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_20;
  local_48 = local_30;
  uStack_44 = uStack_2c;
  uStack_40 = uStack_28;
  uStack_3c = uStack_24;
  FUN_147ad4fe2(param_1);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786f55a FUN_14786f55a body=164 status=ok
// SIG undefined FUN_14786f55a(void)

void FUN_14786f55a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_20;
  local_48 = local_30;
  uStack_44 = uStack_2c;
  uStack_40 = uStack_28;
  uStack_3c = uStack_24;
  FUN_147ad505a(param_1);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786f65a FUN_14786f65a body=45 status=ok
// SIG undefined FUN_14786f65a(void)

longlong FUN_14786f65a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_145e093f8(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14786f68e FUN_14786f68e body=45 status=ok
// SIG undefined FUN_14786f68e(void)

longlong FUN_14786f68e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140e5ef98(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14786f6bc FUN_14786f6bc body=45 status=ok
// SIG undefined FUN_14786f6bc(void)

longlong FUN_14786f6bc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_145d70ef6(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14786f734 FUN_14786f734 body=75 status=ok
// SIG undefined FUN_14786f734(void)

undefined8 FUN_14786f734(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_2 + lVar1) = *(undefined8 *)(param_3 + lVar1);
      FUN_14112f30a();
      lVar1 = lVar1 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14786f7a8 FUN_14786f7a8 body=59 status=ok
// SIG undefined FUN_14786f7a8(void)

undefined8 FUN_14786f7a8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786f7ee FUN_14786f7ee body=38 status=ok
// SIG undefined FUN_14786f7ee(void)

void FUN_14786f7ee(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 14786f88c FUN_14786f88c body=112 status=ok
// SIG undefined FUN_14786f88c(void)

undefined1 FUN_14786f88c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  bVar1 = DAT_14c950c29;
  for (; param_4 != 0; param_4 = param_4 + -1) {
    *param_2 = *param_3;
    lVar3 = 1;
    do {
      lVar2 = param_3[lVar3];
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_14689c22e();
          lVar2 = param_3[lVar3];
          bVar1 = DAT_14c950c29;
        }
      }
      param_2[lVar3] = lVar2;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 5);
    param_3 = param_3 + 5;
    param_2 = param_2 + 5;
  }
  return 1;
}



// FUNCTION 14786f924 FUN_14786f924 body=59 status=ok
// SIG undefined FUN_14786f924(void)

undefined8 FUN_14786f924(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786fa44 FUN_14786fa44 body=59 status=ok
// SIG undefined FUN_14786fa44(void)

undefined8 FUN_14786fa44(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14786fa8a FUN_14786fa8a body=32 status=ok
// SIG undefined FUN_14786fa8a(void)

void FUN_14786fa8a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_140cbe2d4(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 14786faf8 FUN_14786faf8 body=115 status=ok
// SIG undefined FUN_14786faf8(void)

void FUN_14786faf8(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14786fb6b FUN_14786fb6b body=100 status=ok
// SIG undefined FUN_14786fb6b(void)

void FUN_14786fb6b(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  bVar2 = DAT_14c950c29;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = *param_2;
    lVar3 = 1;
    do {
      lVar1 = param_2[lVar3];
      param_1[lVar3] = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_14689c22e();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != 5);
    param_1 = param_1 + 5;
    param_2 = param_2 + 5;
  }
  return;
}



// FUNCTION 14786fbd0 FUN_14786fbd0 body=115 status=ok
// SIG undefined FUN_14786fbd0(void)

void FUN_14786fbd0(longlong param_1,int param_2,int param_3)

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


