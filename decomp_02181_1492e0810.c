// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1492e0810 FUN_1492e0810 body=192 status=ok
// SIG undefined FUN_1492e0810(void)

undefined8 FUN_1492e0810(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
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
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      lVar8 = param_2 + 0x10 + lVar9;
      *(undefined4 *)(lVar8 + -0x10) = *puVar1;
      *(undefined4 *)(lVar8 + -0xc) = uVar3;
      *(undefined4 *)(lVar8 + -8) = uVar4;
      *(undefined4 *)(lVar8 + -4) = uVar5;
      FUN_140bb2e20(lVar8,puVar1 + 4);
      uVar3 = puVar1[0x19];
      uVar4 = puVar1[0x1a];
      uVar5 = puVar1[0x1b];
      *(undefined4 *)(lVar8 + 0x50) = puVar1[0x18];
      *(undefined4 *)(lVar8 + 0x54) = uVar3;
      *(undefined4 *)(lVar8 + 0x58) = uVar4;
      *(undefined4 *)(lVar8 + 0x5c) = uVar5;
      lVar8 = param_2 + lVar9;
      lVar2 = param_3 + lVar9;
      FUN_144a67f5c(lVar8 + 0x70,lVar2 + 0x70);
      uVar7 = *(undefined8 *)(lVar2 + 0x88);
      uVar3 = *(undefined4 *)(lVar2 + 0x8c);
      uVar4 = *(undefined4 *)(lVar2 + 0x90);
      uVar5 = *(undefined4 *)(lVar2 + 0x94);
      uVar6 = *(undefined4 *)(lVar2 + 0x98);
      *(undefined8 *)(lVar8 + 0x80) = *(undefined8 *)(lVar2 + 0x80);
      *(undefined8 *)(lVar8 + 0x88) = uVar7;
      *(undefined4 *)(lVar8 + 0x8c) = uVar3;
      *(undefined4 *)(lVar8 + 0x90) = uVar4;
      *(undefined4 *)(lVar8 + 0x94) = uVar5;
      *(undefined4 *)(lVar8 + 0x98) = uVar6;
      puVar10 = (undefined8 *)(param_3 + lVar9 + 0xa0);
      puVar11 = (undefined8 *)(param_2 + lVar9 + 0xa0);
      for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      }
      lVar9 = lVar9 + 0x120;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492e08f8 FUN_1492e08f8 body=59 status=ok
// SIG undefined FUN_1492e08f8(void)

undefined8 FUN_1492e08f8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492e0944 FUN_1492e0944 body=40 status=ok
// SIG undefined FUN_1492e0944(void)

void FUN_1492e0944(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x120) == '\x01') {
    FUN_1492e11ae(param_2);
    *(undefined1 *)(param_2 + 0x120) = 0;
  }
  return;
}



// FUNCTION 1492e09bc FUN_1492e09bc body=127 status=ok
// SIG undefined FUN_1492e09bc(void)

void FUN_1492e09bc(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 3,0,0x120);
  *param_2 = &PTR_FUN_14bc19a10;
  param_2[1] = 0;
  param_2[2] = 0;
  FUN_1492dfcaa(param_2 + 3);
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  param_2[0x26] = 0;
  return;
}



// FUNCTION 1492e0a3c FUN_1492e0a3c body=106 status=ok
// SIG undefined FUN_1492e0a3c(void)

void FUN_1492e0a3c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bc19a10;
  param_2[1] = 0;
  param_2[2] = 0;
  FUN_1492dfcaa(param_2 + 3);
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  param_2[0x26] = 0;
  return;
}



// FUNCTION 1492e0aca FUN_1492e0aca body=213 status=ok
// SIG undefined FUN_1492e0aca(void)

undefined8 FUN_1492e0aca(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  if (param_4 != 0) {
    lVar10 = 0;
    do {
      lVar9 = param_2 + lVar10;
      lVar1 = param_3 + lVar10;
      FUN_1406fa324(lVar9 + 8,lVar1 + 8);
      uVar2 = *(undefined4 *)(lVar1 + 0x1c);
      uVar3 = *(undefined4 *)(lVar1 + 0x20);
      uVar4 = *(undefined4 *)(lVar1 + 0x24);
      *(undefined4 *)(lVar9 + 0x18) = *(undefined4 *)(lVar1 + 0x18);
      *(undefined4 *)(lVar9 + 0x1c) = uVar2;
      *(undefined4 *)(lVar9 + 0x20) = uVar3;
      *(undefined4 *)(lVar9 + 0x24) = uVar4;
      lVar9 = param_2 + lVar10;
      lVar1 = param_3 + lVar10;
      FUN_140bb2e20(lVar9 + 0x28,lVar1 + 0x28);
      uVar2 = *(undefined4 *)(lVar1 + 0x7c);
      uVar3 = *(undefined4 *)(lVar1 + 0x80);
      uVar4 = *(undefined4 *)(lVar1 + 0x84);
      *(undefined4 *)(lVar9 + 0x78) = *(undefined4 *)(lVar1 + 0x78);
      *(undefined4 *)(lVar9 + 0x7c) = uVar2;
      *(undefined4 *)(lVar9 + 0x80) = uVar3;
      *(undefined4 *)(lVar9 + 0x84) = uVar4;
      FUN_144a67f5c(param_2 + lVar10 + 0x88,param_3 + lVar10 + 0x88);
      uVar2 = *(undefined4 *)(lVar1 + 0x9c);
      uVar3 = *(undefined4 *)(lVar1 + 0xa0);
      uVar4 = *(undefined4 *)(lVar1 + 0xa4);
      uVar5 = *(undefined4 *)(lVar1 + 0xa4);
      uVar6 = *(undefined4 *)(lVar1 + 0xa8);
      uVar7 = *(undefined4 *)(lVar1 + 0xac);
      uVar8 = *(undefined4 *)(lVar1 + 0xb0);
      *(undefined4 *)(lVar9 + 0x98) = *(undefined4 *)(lVar1 + 0x98);
      *(undefined4 *)(lVar9 + 0x9c) = uVar2;
      *(undefined4 *)(lVar9 + 0xa0) = uVar3;
      *(undefined4 *)(lVar9 + 0xa4) = uVar4;
      *(undefined4 *)(lVar9 + 0xa4) = uVar5;
      *(undefined4 *)(lVar9 + 0xa8) = uVar6;
      *(undefined4 *)(lVar9 + 0xac) = uVar7;
      *(undefined4 *)(lVar9 + 0xb0) = uVar8;
      puVar11 = (undefined8 *)(param_3 + lVar10 + 0xb8);
      puVar12 = (undefined8 *)(param_2 + lVar10 + 0xb8);
      for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
        *puVar12 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar12 = puVar12 + 1;
      }
      lVar10 = lVar10 + 0x138;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492e0bc8 FUN_1492e0bc8 body=59 status=ok
// SIG undefined FUN_1492e0bc8(void)

undefined8 FUN_1492e0bc8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492e0c14 FUN_1492e0c14 body=65 status=ok
// SIG undefined FUN_1492e0c14(void)

void FUN_1492e0c14(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x27) == '\x01') {
    *param_2 = &PTR_FUN_14bc19a10;
    FUN_1492e11ae(param_2 + 3);
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x27) = 0;
  }
  return;
}



// FUNCTION 1492e0ca4 FUN_1492e0ca4 body=71 status=ok
// SIG undefined FUN_1492e0ca4(void)

undefined8 * FUN_1492e0ca4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bc19a10;
  FUN_1492e11ae(param_1 + 3);
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x138);
  }
  return param_1;
}



// FUNCTION 1492e0d4e FUN_1492e0d4e body=82 status=ok
// SIG undefined FUN_1492e0d4e(void)

undefined8 FUN_1492e0d4e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1406fa324(param_2,param_3);
    *(undefined2 *)(param_2 + 0x10) = *(undefined2 *)(param_3 + 0x10);
    *(undefined1 *)(param_2 + 0x12) = *(undefined1 *)(param_3 + 0x12);
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_3 + 0x18);
    *(undefined1 *)(param_2 + 0x20) = *(undefined1 *)(param_3 + 0x20);
    param_2 = param_2 + 0x28;
    param_3 = param_3 + 0x28;
  }
  return 1;
}



// FUNCTION 1492e0dc8 FUN_1492e0dc8 body=59 status=ok
// SIG undefined FUN_1492e0dc8(void)

undefined8 FUN_1492e0dc8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492e0e0e FUN_1492e0e0e body=37 status=ok
// SIG undefined FUN_1492e0e0e(void)

void FUN_1492e0e0e(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[5] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 5) = 0;
  }
  return;
}



// FUNCTION 1492e0e84 FUN_1492e0e84 body=160 status=ok
// SIG undefined FUN_1492e0e84(void)

void FUN_1492e0e84(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x130);
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
  *(undefined8 *)((longlong)param_2 + 0x100) = 0x40490fdb45cb2000;
  *(undefined4 *)((longlong)param_2 + 0x108) = 0xffffffff;
  *(undefined8 *)((longlong)param_2 + 0x10c) = 0x4230000000000000;
  *(undefined8 *)((longlong)param_2 + 0x114) = 0x447a0000;
  *(undefined8 *)((longlong)param_2 + 0x11c) = 0;
  return;
}



// FUNCTION 1492e0f24 FUN_1492e0f24 body=144 status=ok
// SIG undefined FUN_1492e0f24(void)

void FUN_1492e0f24(undefined8 param_1,longlong param_2)

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
  *(undefined8 *)(param_2 + 0x100) = 0x40490fdb45cb2000;
  *(undefined4 *)(param_2 + 0x108) = 0xffffffff;
  *(undefined8 *)(param_2 + 0x10c) = 0x4230000000000000;
  *(undefined8 *)(param_2 + 0x114) = 0x447a0000;
  *(undefined8 *)(param_2 + 0x11c) = 0;
  return;
}



// FUNCTION 1492e0fd2 FUN_1492e0fd2 body=241 status=ok
// SIG undefined FUN_1492e0fd2(void)

undefined8 FUN_1492e0fd2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  if (param_4 != 0) {
    lVar10 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar10);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      lVar3 = param_2 + 0x10 + lVar10;
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
      lVar3 = param_2 + lVar10;
      lVar2 = param_3 + lVar10;
      FUN_144a67f5c(lVar3 + 0x70,lVar2 + 0x70);
      uVar7 = *(undefined8 *)(lVar2 + 0x88);
      *(undefined8 *)(lVar3 + 0x80) = *(undefined8 *)(lVar2 + 0x80);
      *(undefined8 *)(lVar3 + 0x88) = uVar7;
      uVar7 = *(undefined8 *)(lVar2 + 0x94);
      *(undefined8 *)(lVar3 + 0x8c) = *(undefined8 *)(lVar2 + 0x8c);
      *(undefined8 *)(lVar3 + 0x94) = uVar7;
      puVar11 = (undefined8 *)(param_3 + lVar10 + 0xa0);
      puVar12 = (undefined8 *)(param_2 + lVar10 + 0xa0);
      for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
        *puVar12 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar12 = puVar12 + 1;
      }
      *(undefined4 *)(lVar3 + 0x120) = *(undefined4 *)(lVar2 + 0x120);
      uVar7 = *(undefined8 *)(lVar2 + 0x100);
      uVar8 = *(undefined8 *)(lVar2 + 0x108);
      uVar4 = *(undefined4 *)(lVar2 + 0x114);
      uVar5 = *(undefined4 *)(lVar2 + 0x118);
      uVar6 = *(undefined4 *)(lVar2 + 0x11c);
      *(undefined4 *)(lVar3 + 0x110) = *(undefined4 *)(lVar2 + 0x110);
      *(undefined4 *)(lVar3 + 0x114) = uVar4;
      *(undefined4 *)(lVar3 + 0x118) = uVar5;
      *(undefined4 *)(lVar3 + 0x11c) = uVar6;
      *(undefined8 *)(lVar3 + 0x100) = uVar7;
      *(undefined8 *)(lVar3 + 0x108) = uVar8;
      lVar10 = lVar10 + 0x130;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492e10ec FUN_1492e10ec body=59 status=ok
// SIG undefined FUN_1492e10ec(void)

undefined8 FUN_1492e10ec(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492e1138 FUN_1492e1138 body=40 status=ok
// SIG undefined FUN_1492e1138(void)

void FUN_1492e1138(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x130) == '\x01') {
    FUN_1492e11ae(param_2);
    *(undefined1 *)(param_2 + 0x130) = 0;
  }
  return;
}



// FUNCTION 1492e11ae FUN_1492e11ae body=60 status=ok
// SIG undefined FUN_1492e11ae(void)

void FUN_1492e11ae(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_140bb2a1a(param_1 + 0x10);
  return;
}



// FUNCTION 1492e11ec FUN_1492e11ec body=37 status=ok
// SIG undefined FUN_1492e11ec(void)

void FUN_1492e11ec(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x160);
  FUN_1492e1382(param_2);
  return;
}



// FUNCTION 1492e123e FUN_1492e123e body=63 status=ok
// SIG undefined FUN_1492e123e(void)

undefined1 FUN_1492e123e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1492e1488(param_2,param_3);
    param_3 = param_3 + 0x160;
    param_2 = param_2 + 0x160;
  }
  return 1;
}



// FUNCTION 1492e12a6 FUN_1492e12a6 body=59 status=ok
// SIG undefined FUN_1492e12a6(void)

undefined8 FUN_1492e12a6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492e12f2 FUN_1492e12f2 body=65 status=ok
// SIG undefined FUN_1492e12f2(void)

void FUN_1492e12f2(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x2c) == '\x01') {
    *param_2 = &PTR_FUN_14bc19e40;
    FUN_1492e11ae(param_2 + 6);
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x2c) = 0;
  }
  return;
}



// FUNCTION 1492e1382 FUN_1492e1382 body=190 status=ok
// SIG undefined FUN_1492e1382(void)

undefined8 * FUN_1492e1382(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc19e40;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
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
  param_1[0x26] = 0x40490fdb45cb2000;
  *(undefined4 *)(param_1 + 0x27) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0x4230000000000000;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0x447a0000;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0;
  return param_1;
}



// FUNCTION 1492e1440 FUN_1492e1440 body=71 status=ok
// SIG undefined FUN_1492e1440(void)

undefined8 * FUN_1492e1440(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bc19e40;
  FUN_1492e11ae(param_1 + 6);
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x160);
  }
  return param_1;
}



// FUNCTION 1492e1488 FUN_1492e1488 body=219 status=ok
// SIG undefined FUN_1492e1488(void)

longlong FUN_1492e1488(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  FUN_1406fa324(param_1 + 8,param_2 + 8);
  *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(param_2 + 0x18);
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_2 + 0x1a);
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined4 *)(param_2 + 0x34);
  uVar2 = *(undefined4 *)(param_2 + 0x38);
  uVar3 = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  FUN_140bb2e20(param_1 + 0x40,param_2 + 0x40);
  uVar1 = *(undefined4 *)(param_2 + 0x94);
  uVar2 = *(undefined4 *)(param_2 + 0x98);
  uVar3 = *(undefined4 *)(param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 0x94) = uVar1;
  *(undefined4 *)(param_1 + 0x98) = uVar2;
  *(undefined4 *)(param_1 + 0x9c) = uVar3;
  FUN_144a67f5c(param_1 + 0xa0,param_2 + 0xa0);
  uVar4 = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xb8) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0xc4);
  *(undefined8 *)(param_1 + 0xbc) = *(undefined8 *)(param_2 + 0xbc);
  *(undefined8 *)(param_1 + 0xc4) = uVar4;
  puVar8 = (undefined8 *)(param_2 + 0xd0);
  puVar9 = (undefined8 *)(param_1 + 0xd0);
  for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_2 + 0x150);
  uVar4 = *(undefined8 *)(param_2 + 0x130);
  uVar5 = *(undefined8 *)(param_2 + 0x138);
  uVar6 = *(undefined8 *)(param_2 + 0x148);
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x140);
  *(undefined8 *)(param_1 + 0x148) = uVar6;
  *(undefined8 *)(param_1 + 0x130) = uVar4;
  *(undefined8 *)(param_1 + 0x138) = uVar5;
  return param_1;
}



// FUNCTION 1492e15c0 FUN_1492e15c0 body=54 status=ok
// SIG undefined FUN_1492e15c0(void)

undefined1 FUN_1492e15c0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1492e16da(param_2,param_3);
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return 1;
}



// FUNCTION 1492e161e FUN_1492e161e body=59 status=ok
// SIG undefined FUN_1492e161e(void)

undefined8 FUN_1492e161e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492e1664 FUN_1492e1664 body=39 status=ok
// SIG undefined FUN_1492e1664(void)

void FUN_1492e1664(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    if (*(longlong **)(param_2 + 0x18) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_2 + 0x18) + 0x10))();
    }
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1492e16da FUN_1492e16da body=113 status=ok
// SIG undefined FUN_1492e16da(void)

undefined4 * FUN_1492e16da(undefined4 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  lVar6 = *(longlong *)(param_2 + 4);
  if (DAT_14c950c29 == '\x01') {
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      FUN_14689c22e();
      lVar6 = *(longlong *)(param_2 + 4);
    }
  }
  *(longlong *)(param_1 + 4) = lVar6;
  plVar1 = *(longlong **)(param_2 + 6);
  plVar2 = *(longlong **)(param_1 + 6);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 6) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  param_1[8] = param_2[8];
  return param_1;
}



// FUNCTION 1492e1790 FUN_1492e1790 body=54 status=ok
// SIG undefined FUN_1492e1790(void)

undefined1 FUN_1492e1790(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1492e188e(param_2,param_3);
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return 1;
}



// FUNCTION 1492e17ee FUN_1492e17ee body=59 status=ok
// SIG undefined FUN_1492e17ee(void)

undefined8 FUN_1492e17ee(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492e188e FUN_1492e188e body=150 status=ok
// SIG undefined FUN_1492e188e(void)

undefined4 * FUN_1492e188e(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong lVar5;
  
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  lVar5 = *(longlong *)(param_2 + 6);
  if (DAT_14c950c29 == 1) {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_14689c22e();
      lVar5 = *(longlong *)(param_2 + 6);
    }
  }
  bVar4 = DAT_14c950c29;
  *(longlong *)(param_1 + 6) = lVar5;
  lVar5 = *(longlong *)(param_2 + 8);
  if ((bVar4 & 1) != 0) {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_14689c22e();
      lVar5 = *(longlong *)(param_2 + 8);
      bVar4 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 8) = lVar5;
  lVar5 = *(longlong *)(param_2 + 10);
  if ((bVar4 & 1) != 0) {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_14689c22e();
      lVar5 = *(longlong *)(param_2 + 10);
    }
  }
  *(longlong *)(param_1 + 10) = lVar5;
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  return param_1;
}



// FUNCTION 1492e193e FUN_1492e193e body=47 status=ok
// SIG undefined FUN_1492e193e(void)

void FUN_1492e193e(undefined8 param_1,longlong *param_2)

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



// FUNCTION 1492e1984 FUN_1492e1984 body=67 status=ok
// SIG undefined FUN_1492e1984(void)

undefined1 FUN_1492e1984(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1406fa324(param_2,param_3);
    FUN_14054c6c4(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 1492e19f0 FUN_1492e19f0 body=59 status=ok
// SIG undefined FUN_1492e19f0(void)

undefined8 FUN_1492e19f0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492e1a8e FUN_1492e1a8e body=51 status=ok
// SIG undefined FUN_1492e1a8e(void)

void FUN_1492e1a8e(longlong *param_1)

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



// FUNCTION 1492e1aea FUN_1492e1aea body=101 status=ok
// SIG undefined FUN_1492e1aea(void)

undefined1 FUN_1492e1aea(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      *(undefined8 *)(param_2 + lVar3) = *(undefined8 *)(param_3 + lVar3);
      lVar2 = *(longlong *)(param_3 + 8 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_14689c22e();
          lVar2 = *(longlong *)(param_3 + 8 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + 8 + lVar3) = lVar2;
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492e1b78 FUN_1492e1b78 body=59 status=ok
// SIG undefined FUN_1492e1b78(void)

undefined8 FUN_1492e1b78(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492e1c66 FUN_1492e1c66 body=68 status=ok
// SIG undefined FUN_1492e1c66(void)

undefined8 FUN_1492e1c66(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1406fa324(param_2,param_3);
    *(undefined2 *)(param_2 + 0x10) = *(undefined2 *)(param_3 + 0x10);
    *(undefined1 *)(param_2 + 0x12) = *(undefined1 *)(param_3 + 0x12);
    param_2 = param_2 + 0x18;
    param_3 = param_3 + 0x18;
  }
  return 1;
}



// FUNCTION 1492e1cd2 FUN_1492e1cd2 body=59 status=ok
// SIG undefined FUN_1492e1cd2(void)

undefined8 FUN_1492e1cd2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492e1d18 FUN_1492e1d18 body=37 status=ok
// SIG undefined FUN_1492e1d18(void)

void FUN_1492e1d18(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[3] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 1492e1d8e FUN_1492e1d8e body=108 status=ok
// SIG undefined FUN_1492e1d8e(void)

void FUN_1492e1d8e(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x100);
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
  return;
}



// FUNCTION 1492e1dfa FUN_1492e1dfa body=92 status=ok
// SIG undefined FUN_1492e1dfa(void)

void FUN_1492e1dfa(undefined8 param_1,longlong param_2)

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
  return;
}



// FUNCTION 1492e1e74 FUN_1492e1e74 body=192 status=ok
// SIG undefined FUN_1492e1e74(void)

undefined8 FUN_1492e1e74(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  if (param_4 != 0) {
    lVar8 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar8);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      lVar7 = param_2 + 0x10 + lVar8;
      *(undefined4 *)(lVar7 + -0x10) = *puVar1;
      *(undefined4 *)(lVar7 + -0xc) = uVar3;
      *(undefined4 *)(lVar7 + -8) = uVar4;
      *(undefined4 *)(lVar7 + -4) = uVar5;
      FUN_140bb2e20(lVar7,puVar1 + 4);
      uVar3 = puVar1[0x19];
      uVar4 = puVar1[0x1a];
      uVar5 = puVar1[0x1b];
      *(undefined4 *)(lVar7 + 0x50) = puVar1[0x18];
      *(undefined4 *)(lVar7 + 0x54) = uVar3;
      *(undefined4 *)(lVar7 + 0x58) = uVar4;
      *(undefined4 *)(lVar7 + 0x5c) = uVar5;
      lVar7 = param_2 + lVar8;
      lVar2 = param_3 + lVar8;
      FUN_144a67f5c(lVar7 + 0x70,lVar2 + 0x70);
      uVar6 = *(undefined8 *)(lVar2 + 0x88);
      *(undefined8 *)(lVar7 + 0x80) = *(undefined8 *)(lVar2 + 0x80);
      *(undefined8 *)(lVar7 + 0x88) = uVar6;
      uVar6 = *(undefined8 *)(lVar2 + 0x94);
      *(undefined8 *)(lVar7 + 0x8c) = *(undefined8 *)(lVar2 + 0x8c);
      *(undefined8 *)(lVar7 + 0x94) = uVar6;
      puVar9 = (undefined8 *)(param_3 + lVar8 + 0xa0);
      puVar10 = (undefined8 *)(param_2 + lVar8 + 0xa0);
      for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      lVar8 = lVar8 + 0x100;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492e1f5c FUN_1492e1f5c body=59 status=ok
// SIG undefined FUN_1492e1f5c(void)

undefined8 FUN_1492e1f5c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492e1fa8 FUN_1492e1fa8 body=40 status=ok
// SIG undefined FUN_1492e1fa8(void)

void FUN_1492e1fa8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x100) == '\x01') {
    FUN_1492e11ae(param_2);
    *(undefined1 *)(param_2 + 0x100) = 0;
  }
  return;
}



// FUNCTION 1492e2020 FUN_1492e2020 body=140 status=ok
// SIG undefined FUN_1492e2020(void)

void FUN_1492e2020(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 2,0,0x110);
  *param_2 = &PTR_FUN_14bc1a7f0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined2 *)(param_2 + 3) = 0x101;
  FUN_1492dfcaa(param_2 + 4);
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  *(undefined4 *)(param_2 + 0x1a) = 0;
  *(undefined4 *)((longlong)param_2 + 0xd4) = 0;
  *(undefined4 *)(param_2 + 0x1b) = 0;
  *(undefined4 *)((longlong)param_2 + 0xdc) = 0x3ff00000;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x20] = 0x3ff0000000000000;
  param_2[0x21] = 0x3ff0000000000000;
  param_2[0x22] = 0x3ff0000000000000;
  param_2[0x23] = 0;
  return;
}



// FUNCTION 1492e20ac FUN_1492e20ac body=127 status=ok
// SIG undefined FUN_1492e20ac(void)

void FUN_1492e20ac(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bc1a7f0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined2 *)(param_2 + 3) = 0x101;
  *(undefined1 *)((longlong)param_2 + 0x1a) = 0;
  FUN_1492dfcaa(param_2 + 4);
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  *(undefined4 *)(param_2 + 0x1a) = 0;
  *(undefined4 *)((longlong)param_2 + 0xd4) = 0;
  *(undefined4 *)(param_2 + 0x1b) = 0;
  *(undefined4 *)((longlong)param_2 + 0xdc) = 0x3ff00000;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x20] = 0x3ff0000000000000;
  param_2[0x21] = 0x3ff0000000000000;
  param_2[0x22] = 0x3ff0000000000000;
  param_2[0x23] = 0;
  return;
}



// FUNCTION 1492e2150 FUN_1492e2150 body=230 status=ok
// SIG undefined FUN_1492e2150(void)

undefined8 FUN_1492e2150(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  if (param_4 != 0) {
    lVar7 = 0;
    do {
      lVar6 = param_2 + lVar7;
      lVar1 = param_3 + lVar7;
      FUN_1406fa324(lVar6 + 8,lVar1 + 8);
      *(undefined2 *)(lVar6 + 0x18) = *(undefined2 *)(lVar1 + 0x18);
      *(undefined1 *)(lVar6 + 0x1a) = *(undefined1 *)(lVar1 + 0x1a);
      uVar2 = *(undefined4 *)(lVar1 + 0x24);
      uVar3 = *(undefined4 *)(lVar1 + 0x28);
      uVar4 = *(undefined4 *)(lVar1 + 0x2c);
      *(undefined4 *)(lVar6 + 0x20) = *(undefined4 *)(lVar1 + 0x20);
      *(undefined4 *)(lVar6 + 0x24) = uVar2;
      *(undefined4 *)(lVar6 + 0x28) = uVar3;
      *(undefined4 *)(lVar6 + 0x2c) = uVar4;
      lVar1 = param_2 + 0x30 + lVar7;
      lVar6 = param_3 + lVar7;
      FUN_140bb2e20(lVar1,lVar6 + 0x30);
      uVar2 = *(undefined4 *)(lVar6 + 0x84);
      uVar3 = *(undefined4 *)(lVar6 + 0x88);
      uVar4 = *(undefined4 *)(lVar6 + 0x8c);
      *(undefined4 *)(lVar1 + 0x50) = *(undefined4 *)(lVar6 + 0x80);
      *(undefined4 *)(lVar1 + 0x54) = uVar2;
      *(undefined4 *)(lVar1 + 0x58) = uVar3;
      *(undefined4 *)(lVar1 + 0x5c) = uVar4;
      FUN_144a67f5c(param_2 + lVar7 + 0x90,param_3 + lVar7 + 0x90);
      uVar5 = *(undefined8 *)(lVar6 + 0xa8);
      *(undefined8 *)(lVar1 + 0x70) = *(undefined8 *)(lVar6 + 0xa0);
      *(undefined8 *)(lVar1 + 0x78) = uVar5;
      uVar2 = *(undefined4 *)(lVar6 + 0xb0);
      uVar3 = *(undefined4 *)(lVar6 + 0xb4);
      uVar4 = *(undefined4 *)(lVar6 + 0xb8);
      *(undefined4 *)(lVar1 + 0x7c) = *(undefined4 *)(lVar6 + 0xac);
      *(undefined4 *)(lVar1 + 0x80) = uVar2;
      *(undefined4 *)(lVar1 + 0x84) = uVar3;
      *(undefined4 *)(lVar1 + 0x88) = uVar4;
      puVar8 = (undefined8 *)(param_3 + lVar7 + 0xc0);
      puVar9 = (undefined8 *)(param_2 + lVar7 + 0xc0);
      for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      lVar7 = lVar7 + 0x120;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492e225e FUN_1492e225e body=59 status=ok
// SIG undefined FUN_1492e225e(void)

undefined8 FUN_1492e225e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492e22aa FUN_1492e22aa body=65 status=ok
// SIG undefined FUN_1492e22aa(void)

void FUN_1492e22aa(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x24) == '\x01') {
    *param_2 = &PTR_FUN_14bc1a7f0;
    FUN_1492e11ae(param_2 + 4);
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x24) = 0;
  }
  return;
}



// FUNCTION 1492e233a FUN_1492e233a body=71 status=ok
// SIG undefined FUN_1492e233a(void)

undefined8 * FUN_1492e233a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bc1a7f0;
  FUN_1492e11ae(param_1 + 4);
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x120);
  }
  return param_1;
}



// FUNCTION 1492e23d0 FUN_1492e23d0 body=42 status=ok
// SIG undefined FUN_1492e23d0(void)

void FUN_1492e23d0(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_140ba05b6(param_2);
  return;
}



// FUNCTION 1492e2410 FUN_1492e2410 body=54 status=ok
// SIG undefined FUN_1492e2410(void)

undefined1 FUN_1492e2410(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1490cd0b6(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 1492e246e FUN_1492e246e body=59 status=ok
// SIG undefined FUN_1492e246e(void)

undefined8 FUN_1492e246e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492e24b4 FUN_1492e24b4 body=53 status=ok
// SIG undefined FUN_1492e24b4(void)

void FUN_1492e24b4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    *(undefined4 *)(param_2 + 0x48) = 0;
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_140ba05b6(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 1492e25ee FUN_1492e25ee body=39 status=ok
// SIG undefined FUN_1492e25ee(void)

undefined8 FUN_1492e25ee(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x60;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492e263e FUN_1492e263e body=59 status=ok
// SIG undefined FUN_1492e263e(void)

undefined8 FUN_1492e263e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492e274c FUN_1492e274c body=59 status=ok
// SIG undefined FUN_1492e274c(void)

undefined8 FUN_1492e274c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492e287e FUN_1492e287e body=59 status=ok
// SIG undefined FUN_1492e287e(void)

undefined8 FUN_1492e287e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492e2994 FUN_1492e2994 body=59 status=ok
// SIG undefined FUN_1492e2994(void)

undefined8 FUN_1492e2994(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492e2aa2 FUN_1492e2aa2 body=109 status=ok
// SIG undefined FUN_1492e2aa2(void)

int FUN_1492e2aa2(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  uVar1 = *param_2;
  uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar3 = (uint)uVar1 & 0xffff;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return ((uint)uVar1 << 0x10 | uVar3) + (int)((ulonglong)uVar1 >> 0x20) +
           (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar3 >> 4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492e2bfc FUN_1492e2bfc body=135 status=ok
// SIG undefined FUN_1492e2bfc(void)

int FUN_1492e2bfc(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  iVar3 = FUN_1447addd0(param_2,0x10);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return (((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
            (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) * 0xd + iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492e2cea FUN_1492e2cea body=99 status=ok
// SIG undefined FUN_1492e2cea(void)

void FUN_1492e2cea(undefined8 param_1,double *param_2)

{
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_2[1] = 0.0;
  QueryPerformanceCounter(&local_20);
  *param_2 = (double)local_20.QuadPart * DAT_14c83f420 + 16777216.0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492e2d4e FUN_1492e2d4e body=99 status=ok
// SIG undefined FUN_1492e2d4e(void)

void FUN_1492e2d4e(undefined8 param_1,double *param_2)

{
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_2[1] = 0.0;
  QueryPerformanceCounter(&local_20);
  *param_2 = (double)local_20.QuadPart * DAT_14c83f420 + 16777216.0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492e2e0e FUN_1492e2e0e body=59 status=ok
// SIG undefined FUN_1492e2e0e(void)

undefined8 FUN_1492e2e0e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492e2f42 FUN_1492e2f42 body=59 status=ok
// SIG undefined FUN_1492e2f42(void)

undefined8 FUN_1492e2f42(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492e3048 FUN_1492e3048 body=42 status=ok
// SIG undefined FUN_1492e3048(void)

void FUN_1492e3048(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_140bb2a1a(param_2);
  return;
}



// FUNCTION 1492e3088 FUN_1492e3088 body=62 status=ok
// SIG undefined FUN_1492e3088(void)

undefined1 FUN_1492e3088(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140bb2e20(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x54);
    uVar2 = *(undefined4 *)(param_3 + 0x58);
    uVar3 = *(undefined4 *)(param_3 + 0x5c);
    *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_3 + 0x50);
    *(undefined4 *)(param_2 + 0x54) = uVar1;
    *(undefined4 *)(param_2 + 0x58) = uVar2;
    *(undefined4 *)(param_2 + 0x5c) = uVar3;
    param_2 = param_2 + 0x60;
    param_3 = param_3 + 0x60;
  }
  return 1;
}



// FUNCTION 1492e30ee FUN_1492e30ee body=59 status=ok
// SIG undefined FUN_1492e30ee(void)

undefined8 FUN_1492e30ee(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492e3134 FUN_1492e3134 body=53 status=ok
// SIG undefined FUN_1492e3134(void)

void FUN_1492e3134(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    *(undefined4 *)(param_2 + 0x48) = 0;
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_140bb2a1a(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 1492e31ba FUN_1492e31ba body=37 status=ok
// SIG undefined FUN_1492e31ba(void)

void FUN_1492e31ba(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xa0);
  FUN_1492dfcaa(param_2);
  return;
}



// FUNCTION 1492e3206 FUN_1492e3206 body=148 status=ok
// SIG undefined FUN_1492e3206(void)

undefined1 FUN_1492e3206(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  
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
      uVar8 = *(undefined8 *)(lVar2 + 0x88);
      uVar4 = *(undefined4 *)(lVar2 + 0x8c);
      uVar5 = *(undefined4 *)(lVar2 + 0x90);
      uVar6 = *(undefined4 *)(lVar2 + 0x94);
      uVar7 = *(undefined4 *)(lVar2 + 0x98);
      *(undefined8 *)(lVar3 + 0x80) = *(undefined8 *)(lVar2 + 0x80);
      *(undefined8 *)(lVar3 + 0x88) = uVar8;
      *(undefined4 *)(lVar3 + 0x8c) = uVar4;
      *(undefined4 *)(lVar3 + 0x90) = uVar5;
      *(undefined4 *)(lVar3 + 0x94) = uVar6;
      *(undefined4 *)(lVar3 + 0x98) = uVar7;
      lVar9 = lVar9 + 0xa0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492e32c2 FUN_1492e32c2 body=59 status=ok
// SIG undefined FUN_1492e32c2(void)

undefined8 FUN_1492e32c2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492e330e FUN_1492e330e body=40 status=ok
// SIG undefined FUN_1492e330e(void)

void FUN_1492e330e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_1492e11ae(param_2);
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 1492e33ba FUN_1492e33ba body=54 status=ok
// SIG undefined FUN_1492e33ba(void)

undefined1 FUN_1492e33ba(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1406fa324(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1492e3418 FUN_1492e3418 body=59 status=ok
// SIG undefined FUN_1492e3418(void)

undefined8 FUN_1492e3418(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492e345e FUN_1492e345e body=37 status=ok
// SIG undefined FUN_1492e345e(void)

void FUN_1492e345e(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 1492e353c FUN_1492e353c body=59 status=ok
// SIG undefined FUN_1492e353c(void)

undefined8 FUN_1492e353c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492e3656 FUN_1492e3656 body=72 status=ok
// SIG undefined FUN_1492e3656(void)

void FUN_1492e3656(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_144a78877(*param_2,param_2[1]);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492e378e FUN_1492e378e body=59 status=ok
// SIG undefined FUN_1492e378e(void)

undefined8 FUN_1492e378e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492e38b8 FUN_1492e38b8 body=59 status=ok
// SIG undefined FUN_1492e38b8(void)

undefined8 FUN_1492e38b8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492e39de FUN_1492e39de body=59 status=ok
// SIG undefined FUN_1492e39de(void)

undefined8 FUN_1492e39de(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492e3a80 FUN_1492e3a80 body=37 status=ok
// SIG undefined FUN_1492e3a80(void)

void FUN_1492e3a80(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x90);
  FUN_145dc3b56(param_2);
  return;
}



// FUNCTION 1492e3acc FUN_1492e3acc body=110 status=ok
// SIG undefined FUN_1492e3acc(void)

undefined1 FUN_1492e3acc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144756208(param_2,param_3);
    FUN_1492e3c24(param_2 + 0x10,param_3 + 0x10);
    uVar1 = *(undefined4 *)(param_3 + 0x24);
    uVar2 = *(undefined4 *)(param_3 + 0x28);
    uVar3 = *(undefined4 *)(param_3 + 0x2c);
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_3 + 0x20);
    *(undefined4 *)(param_2 + 0x24) = uVar1;
    *(undefined4 *)(param_2 + 0x28) = uVar2;
    *(undefined4 *)(param_2 + 0x2c) = uVar3;
    FUN_140bb2e20(param_2 + 0x30,param_3 + 0x30);
    uVar1 = *(undefined4 *)(param_3 + 0x84);
    uVar2 = *(undefined4 *)(param_3 + 0x88);
    uVar3 = *(undefined4 *)(param_3 + 0x8c);
    *(undefined4 *)(param_2 + 0x80) = *(undefined4 *)(param_3 + 0x80);
    *(undefined4 *)(param_2 + 0x84) = uVar1;
    *(undefined4 *)(param_2 + 0x88) = uVar2;
    *(undefined4 *)(param_2 + 0x8c) = uVar3;
    param_2 = param_2 + 0x90;
    param_3 = param_3 + 0x90;
  }
  return 1;
}



// FUNCTION 1492e3b62 FUN_1492e3b62 body=59 status=ok
// SIG undefined FUN_1492e3b62(void)

undefined8 FUN_1492e3b62(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492e3bae FUN_1492e3bae body=40 status=ok
// SIG undefined FUN_1492e3bae(void)

void FUN_1492e3bae(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x90) == '\x01') {
    FUN_145cd390c(param_2);
    *(undefined1 *)(param_2 + 0x90) = 0;
  }
  return;
}



// FUNCTION 1492e3c24 FUN_1492e3c24 body=89 status=ok
// SIG undefined FUN_1492e3c24(void)

undefined8 * FUN_1492e3c24(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1492e3c7e(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 1492e3c7e FUN_1492e3c7e body=115 status=ok
// SIG undefined FUN_1492e3c7e(void)

void FUN_1492e3c7e(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1492e3d72 FUN_1492e3d72 body=42 status=ok
// SIG undefined FUN_1492e3d72(void)

void FUN_1492e3d72(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_140bb2a1a(param_2);
  return;
}



// FUNCTION 1492e3db2 FUN_1492e3db2 body=70 status=ok
// SIG undefined FUN_1492e3db2(void)

undefined1 FUN_1492e3db2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140bb2e20(param_2,param_3);
    uVar1 = *(undefined4 *)(param_3 + 0x54);
    uVar2 = *(undefined4 *)(param_3 + 0x58);
    uVar3 = *(undefined4 *)(param_3 + 0x5c);
    uVar4 = *(undefined4 *)(param_3 + 0x60);
    uVar5 = *(undefined4 *)(param_3 + 100);
    uVar6 = *(undefined4 *)(param_3 + 0x68);
    uVar7 = *(undefined4 *)(param_3 + 0x6c);
    *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_3 + 0x50);
    *(undefined4 *)(param_2 + 0x54) = uVar1;
    *(undefined4 *)(param_2 + 0x58) = uVar2;
    *(undefined4 *)(param_2 + 0x5c) = uVar3;
    *(undefined4 *)(param_2 + 0x60) = uVar4;
    *(undefined4 *)(param_2 + 100) = uVar5;
    *(undefined4 *)(param_2 + 0x68) = uVar6;
    *(undefined4 *)(param_2 + 0x6c) = uVar7;
    param_2 = param_2 + 0x70;
    param_3 = param_3 + 0x70;
  }
  return 1;
}



// FUNCTION 1492e3e20 FUN_1492e3e20 body=59 status=ok
// SIG undefined FUN_1492e3e20(void)

undefined8 FUN_1492e3e20(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492e3e66 FUN_1492e3e66 body=53 status=ok
// SIG undefined FUN_1492e3e66(void)

void FUN_1492e3e66(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    *(undefined4 *)(param_2 + 0x48) = 0;
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_140bb2a1a(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 1492e3f20 FUN_1492e3f20 body=63 status=ok
// SIG undefined FUN_1492e3f20(void)

undefined1 FUN_1492e3f20(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1492e404a(param_2,param_3);
    param_3 = param_3 + 0x160;
    param_2 = param_2 + 0x160;
  }
  return 1;
}



// FUNCTION 1492e3f88 FUN_1492e3f88 body=59 status=ok
// SIG undefined FUN_1492e3f88(void)

undefined8 FUN_1492e3f88(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492e3fd4 FUN_1492e3fd4 body=40 status=ok
// SIG undefined FUN_1492e3fd4(void)

void FUN_1492e3fd4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x160) == '\x01') {
    FUN_1492e4382(param_2);
    *(undefined1 *)(param_2 + 0x160) = 0;
  }
  return;
}



// FUNCTION 1492e404a FUN_1492e404a body=221 status=ok
// SIG undefined FUN_1492e404a(void)

longlong FUN_1492e404a(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  FUN_1406fa324(param_1 + 8,param_2 + 8);
  FUN_1406fa324(param_1 + 0x18,param_2 + 0x18);
  FUN_14054c6c4(param_1 + 0x28,param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x3c);
  uVar2 = *(undefined4 *)(param_2 + 0x40);
  uVar3 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  FUN_140bb2e20(param_1 + 0x48,param_2 + 0x48);
  uVar1 = *(undefined4 *)(param_2 + 0x9c);
  uVar2 = *(undefined4 *)(param_2 + 0xa0);
  uVar3 = *(undefined4 *)(param_2 + 0xa4);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  *(undefined4 *)(param_1 + 0x9c) = uVar1;
  *(undefined4 *)(param_1 + 0xa0) = uVar2;
  *(undefined4 *)(param_1 + 0xa4) = uVar3;
  FUN_144a67f5c(param_1 + 0xa8,param_2 + 0xa8);
  uVar1 = *(undefined4 *)(param_2 + 0xbc);
  uVar2 = *(undefined4 *)(param_2 + 0xc0);
  uVar3 = *(undefined4 *)(param_2 + 0xc4);
  uVar4 = *(undefined4 *)(param_2 + 0xc4);
  uVar5 = *(undefined4 *)(param_2 + 200);
  uVar6 = *(undefined4 *)(param_2 + 0xcc);
  uVar7 = *(undefined4 *)(param_2 + 0xd0);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
  *(undefined4 *)(param_1 + 0xbc) = uVar1;
  *(undefined4 *)(param_1 + 0xc0) = uVar2;
  *(undefined4 *)(param_1 + 0xc4) = uVar3;
  *(undefined4 *)(param_1 + 0xc4) = uVar4;
  *(undefined4 *)(param_1 + 200) = uVar5;
  *(undefined4 *)(param_1 + 0xcc) = uVar6;
  *(undefined4 *)(param_1 + 0xd0) = uVar7;
  FUN_144756208(param_1 + 0xd8,param_2 + 0xd8);
  FUN_1492e4128(param_1 + 0xe8,param_2 + 0xe8);
  FUN_1492e417e(param_1 + 0xf8,param_2 + 0xf8);
  FUN_140d188f2(param_1 + 0x108,param_2 + 0x108);
  *(undefined1 *)(param_1 + 0x158) = *(undefined1 *)(param_2 + 0x158);
  return param_1;
}



// FUNCTION 1492e4128 FUN_1492e4128 body=85 status=ok
// SIG undefined FUN_1492e4128(void)

undefined8 * FUN_1492e4128(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1492e41de(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x70);
      }
    }
  }
  return param_1;
}



// FUNCTION 1492e417e FUN_1492e417e body=95 status=ok
// SIG undefined FUN_1492e417e(void)

undefined8 * FUN_1492e417e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1492e424d(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1492e427c(param_1,iVar1);
      FUN_1492e42ef(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1492e41de FUN_1492e41de body=111 status=ok
// SIG undefined FUN_1492e41de(void)

void FUN_1492e41de(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x70,0x10);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 4;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x70,0x10);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1492e424d FUN_1492e424d body=47 status=ok
// SIG undefined FUN_1492e424d(void)

void FUN_1492e424d(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1492e427c FUN_1492e427c body=115 status=ok
// SIG undefined FUN_1492e427c(void)

void FUN_1492e427c(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1492e42ef FUN_1492e42ef body=145 status=ok
// SIG undefined FUN_1492e42ef(void)

void FUN_1492e42ef(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined1 *)(param_1 + lVar2) = *(undefined1 *)(param_2 + lVar2);
      *(undefined8 *)(param_1 + 8 + lVar2) = 0;
      iVar1 = *(int *)(param_2 + 0x10 + lVar2);
      _Src = *(void **)(param_2 + 8 + lVar2);
      *(int *)(param_1 + 0x10 + lVar2) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x14 + lVar2) = 0;
      }
      else {
        FUN_144a06ca8(param_1 + 8 + lVar2,iVar1,0);
        memcpy(*(void **)(param_1 + 8 + lVar2),_Src,(longlong)iVar1 << 2);
      }
      lVar2 = lVar2 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1492e4382 FUN_1492e4382 body=157 status=ok
// SIG undefined FUN_1492e4382(void)

void FUN_1492e4382(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc17770;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  FUN_14064e7da(param_1 + 0x21);
  FUN_1492e424d(param_1[0x1f],*(undefined4 *)(param_1 + 0x20));
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_1492e11ae(param_1 + 7);
  FUN_1492df7de(param_1 + 1);
  return;
}



// FUNCTION 1492e4478 FUN_1492e4478 body=54 status=ok
// SIG undefined FUN_1492e4478(void)

undefined1 FUN_1492e4478(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1492e45b4(param_2,param_3);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 1492e44d6 FUN_1492e44d6 body=59 status=ok
// SIG undefined FUN_1492e44d6(void)

undefined8 FUN_1492e44d6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492e451c FUN_1492e451c body=74 status=ok
// SIG undefined FUN_1492e451c(void)

void FUN_1492e451c(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 4) == '\x01') {
    *param_2 = &PTR_FUN_14bc17778;
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
    *(undefined1 *)(param_2 + 4) = 0;
  }
  return;
}



// FUNCTION 1492e45b4 FUN_1492e45b4 body=93 status=ok
// SIG undefined FUN_1492e45b4(void)

longlong FUN_1492e45b4(longlong param_1,longlong param_2)

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
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  return param_1;
}



// FUNCTION 1492e465a FUN_1492e465a body=54 status=ok
// SIG undefined FUN_1492e465a(void)

undefined1 FUN_1492e465a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1492e47ee(param_2,param_3);
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return 1;
}



// FUNCTION 1492e46b8 FUN_1492e46b8 body=59 status=ok
// SIG undefined FUN_1492e46b8(void)

undefined8 FUN_1492e46b8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492e46fe FUN_1492e46fe body=74 status=ok
// SIG undefined FUN_1492e46fe(void)

void FUN_1492e46fe(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 3) == '\x01') {
    *param_2 = &PTR_FUN_14bc1c700;
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



// FUNCTION 1492e4796 FUN_1492e4796 body=88 status=ok
// SIG undefined FUN_1492e4796(void)

undefined8 * FUN_1492e4796(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bc1c700;
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



// FUNCTION 1492e47ee FUN_1492e47ee body=82 status=ok
// SIG undefined FUN_1492e47ee(void)

longlong FUN_1492e47ee(longlong param_1,longlong param_2)

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



// FUNCTION 1492e4842 FUN_1492e4842 body=29 status=ok
// SIG undefined FUN_1492e4842(void)

void FUN_1492e4842(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = &PTR_FUN_14bc1c780;
  return;
}



// FUNCTION 1492e4860 FUN_1492e4860 body=36 status=ok
// SIG undefined FUN_1492e4860(void)

undefined8 FUN_1492e4860(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1492e48a0 FUN_1492e48a0 body=93 status=ok
// SIG undefined FUN_1492e48a0(void)

void FUN_1492e48a0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bc1c710;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1492e48fe FUN_1492e48fe body=123 status=ok
// SIG undefined FUN_1492e48fe(void)

void FUN_1492e48fe(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bc1c710;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1492e4986 FUN_1492e4986 body=21 status=ok
// SIG undefined FUN_1492e4986(void)

undefined8 FUN_1492e4986(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1492e499c FUN_1492e499c body=34 status=ok
// SIG undefined FUN_1492e499c(void)

undefined8 FUN_1492e499c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1492e49c2 FUN_1492e49c2 body=132 status=ok
// SIG undefined FUN_1492e49c2(void)

void FUN_1492e49c2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1492e4a48 FUN_1492e4a48 body=147 status=ok
// SIG undefined FUN_1492e4a48(void)

void FUN_1492e4a48(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1492e4adc FUN_1492e4adc body=96 status=ok
// SIG undefined FUN_1492e4adc(void)

void FUN_1492e4adc(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 1492e4b3c FUN_1492e4b3c body=132 status=ok
// SIG undefined FUN_1492e4b3c(void)

void FUN_1492e4b3c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1492e4bc1 FUN_1492e4bc1 body=68 status=ok
// SIG undefined FUN_1492e4bc1(void)

void FUN_1492e4bc1(undefined1 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0x3ff00000;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0x3ff0000000000000;
    *(undefined8 *)(param_1 + 0x58) = 0x3ff0000000000000;
    *(undefined8 *)(param_1 + 0x60) = 0x3ff0000000000000;
    *(undefined8 *)(param_1 + 0x68) = 0;
    param_1 = param_1 + 0x70;
  }
  return;
}



// FUNCTION 1492e4c06 FUN_1492e4c06 body=143 status=ok
// SIG undefined FUN_1492e4c06(void)

void FUN_1492e4c06(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = FUN_144a3809e(lVar4 * 0x70,0x10);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x70,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1492e4c96 FUN_1492e4c96 body=62 status=ok
// SIG undefined FUN_1492e4c96(void)

void FUN_1492e4c96(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1492e4cd4(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x70,0x10);
  }
  return;
}



// FUNCTION 1492e4cd4 FUN_1492e4cd4 body=104 status=ok
// SIG undefined FUN_1492e4cd4(void)

ulonglong FUN_1492e4cd4(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x70) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1492e4d0a;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x70,0x10);
      param_2 = param_2 / 0x70;
    }
  }
LAB_1492e4d0a:
  return param_2 & 0xffffffff;
}



// FUNCTION 1492e4d3c FUN_1492e4d3c body=23 status=ok
// SIG undefined FUN_1492e4d3c(void)

void FUN_1492e4d3c(undefined1 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    param_1 = param_1 + 0x18;
  }
  return;
}



// FUNCTION 1492e4d54 FUN_1492e4d54 body=147 status=ok
// SIG undefined FUN_1492e4d54(void)

void FUN_1492e4d54(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1492e4de8 FUN_1492e4de8 body=98 status=ok
// SIG undefined FUN_1492e4de8(void)

void FUN_1492e4de8(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x18 + *param_1);
  FUN_1492e424d(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x18),(longlong)iVar2 * 0x18);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1492e4e4a FUN_1492e4e4a body=62 status=ok
// SIG undefined FUN_1492e4e4a(void)

void FUN_1492e4e4a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1492e4e88(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 1492e4e88 FUN_1492e4e88 body=112 status=ok
// SIG undefined FUN_1492e4e88(void)

ulonglong FUN_1492e4e88(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1492e4ec2;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x18,8);
      param_2 = param_2 / 0x18;
    }
  }
LAB_1492e4ec2:
  return param_2 & 0xffffffff;
}



// FUNCTION 1492e4ef8 FUN_1492e4ef8 body=84 status=ok
// SIG undefined FUN_1492e4ef8(void)

void FUN_1492e4ef8(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
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
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 1492e4f4c FUN_1492e4f4c body=48 status=ok
// SIG undefined FUN_1492e4f4c(void)

void FUN_1492e4f4c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x20,8);
  }
  return;
}



// FUNCTION 1492e4f7c FUN_1492e4f7c body=25 status=ok
// SIG undefined FUN_1492e4f7c(void)

void FUN_1492e4f7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc17778;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  return;
}



// FUNCTION 1492e4f96 FUN_1492e4f96 body=132 status=ok
// SIG undefined FUN_1492e4f96(void)

void FUN_1492e4f96(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1492e501c FUN_1492e501c body=111 status=ok
// SIG undefined FUN_1492e501c(void)

undefined8 FUN_1492e501c(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    if (DAT_14cc0b848 == 0) {
      uVar1 = FUN_140e1278a();
      DAT_14cc0b848 = FUN_140002ddd(FUN_141907317,uVar1,L"SubjectFrameHandle");
      if (DAT_14cc0b848 == 0) {
        return 0;
      }
    }
    if (*(int *)(DAT_14cc0b848 + 0x38) <= *(int *)(param_1 + 0x38)) {
      if (*(longlong *)
           (*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(DAT_14cc0b848 + 0x38) * 8) ==
          DAT_14cc0b848 + 0x30) {
        return param_2;
      }
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1492e508c FUN_1492e508c body=65 status=ok
// SIG undefined FUN_1492e508c(void)

longlong FUN_1492e508c(longlong param_1)

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



// FUNCTION 1492e50ce FUN_1492e50ce body=111 status=ok
// SIG undefined FUN_1492e50ce(void)

undefined8 FUN_1492e50ce(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    if (DAT_14cc0b230 == 0) {
      uVar1 = FUN_140e1278a();
      DAT_14cc0b230 = FUN_140002ddd(FUN_1467194fb,uVar1,L"LiveLinkSkeletonStaticData");
      if (DAT_14cc0b230 == 0) {
        return 0;
      }
    }
    if (*(int *)(DAT_14cc0b230 + 0x38) <= *(int *)(param_1 + 0x38)) {
      if (*(longlong *)
           (*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(DAT_14cc0b230 + 0x38) * 8) ==
          DAT_14cc0b230 + 0x30) {
        return param_2;
      }
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1492e513e FUN_1492e513e body=111 status=ok
// SIG undefined FUN_1492e513e(void)

undefined8 FUN_1492e513e(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    if (DAT_14cc0b248 == 0) {
      uVar1 = FUN_140e1278a();
      DAT_14cc0b248 = FUN_140002ddd(FUN_1467195bf,uVar1,L"LiveLinkAnimationFrameData");
      if (DAT_14cc0b248 == 0) {
        return 0;
      }
    }
    if (*(int *)(DAT_14cc0b248 + 0x38) <= *(int *)(param_1 + 0x38)) {
      if (*(longlong *)
           (*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(DAT_14cc0b248 + 0x38) * 8) ==
          DAT_14cc0b248 + 0x30) {
        return param_2;
      }
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1492e51ae FUN_1492e51ae body=9 status=ok
// SIG undefined FUN_1492e51ae(void)

void FUN_1492e51ae(longlong param_1)

{
  FUN_1492e4382(param_1 + 0x10);
  return;
}



// FUNCTION 1492e51b8 FUN_1492e51b8 body=34 status=ok
// SIG undefined FUN_1492e51b8(void)

undefined8 FUN_1492e51b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x170);
  }
  return param_1;
}



// FUNCTION 1492e51da FUN_1492e51da body=111 status=ok
// SIG undefined FUN_1492e51da(void)

undefined8 FUN_1492e51da(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    if (DAT_14cc0b260 == 0) {
      uVar1 = FUN_140e1278a();
      DAT_14cc0b260 = FUN_140002ddd(FUN_146719683,uVar1,L"LiveLinkBasicBlueprintData");
      if (DAT_14cc0b260 == 0) {
        return 0;
      }
    }
    if (*(int *)(DAT_14cc0b260 + 0x38) <= *(int *)(param_1 + 0x38)) {
      if (*(longlong *)
           (*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(DAT_14cc0b260 + 0x38) * 8) ==
          DAT_14cc0b260 + 0x30) {
        return param_2;
      }
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1492e524a FUN_1492e524a body=111 status=ok
// SIG undefined FUN_1492e524a(void)

undefined8 FUN_1492e524a(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    if (DAT_14cc0b2c0 == 0) {
      uVar1 = FUN_140e1278a();
      DAT_14cc0b2c0 = FUN_140002ddd(FUN_1467198ff,uVar1,L"LiveLinkCameraBlueprintData");
      if (DAT_14cc0b2c0 == 0) {
        return 0;
      }
    }
    if (*(int *)(DAT_14cc0b2c0 + 0x38) <= *(int *)(param_1 + 0x38)) {
      if (*(longlong *)
           (*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(DAT_14cc0b2c0 + 0x38) * 8) ==
          DAT_14cc0b2c0 + 0x30) {
        return param_2;
      }
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1492e52ba FUN_1492e52ba body=111 status=ok
// SIG undefined FUN_1492e52ba(void)

undefined8 FUN_1492e52ba(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    if (DAT_14cc0b290 == 0) {
      uVar1 = FUN_140e1278a();
      DAT_14cc0b290 = FUN_140002ddd(FUN_146719777,uVar1,L"LiveLinkCameraStaticData");
      if (DAT_14cc0b290 == 0) {
        return 0;
      }
    }
    if (*(int *)(DAT_14cc0b290 + 0x38) <= *(int *)(param_1 + 0x38)) {
      if (*(longlong *)
           (*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(DAT_14cc0b290 + 0x38) * 8) ==
          DAT_14cc0b290 + 0x30) {
        return param_2;
      }
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1492e532a FUN_1492e532a body=111 status=ok
// SIG undefined FUN_1492e532a(void)

undefined8 FUN_1492e532a(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    if (DAT_14cc0b2a8 == 0) {
      uVar1 = FUN_140e1278a();
      DAT_14cc0b2a8 = FUN_140002ddd(FUN_14671983b,uVar1,L"LiveLinkCameraFrameData");
      if (DAT_14cc0b2a8 == 0) {
        return 0;
      }
    }
    if (*(int *)(DAT_14cc0b2a8 + 0x38) <= *(int *)(param_1 + 0x38)) {
      if (*(longlong *)
           (*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(DAT_14cc0b2a8 + 0x38) * 8) ==
          DAT_14cc0b2a8 + 0x30) {
        return param_2;
      }
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1492e539a FUN_1492e539a body=111 status=ok
// SIG undefined FUN_1492e539a(void)

undefined8 FUN_1492e539a(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    if (DAT_14cc0b368 == 0) {
      uVar1 = FUN_140e1278a();
      DAT_14cc0b368 = FUN_140002ddd(FUN_146719c37,uVar1,L"LiveLinkGamepadInputDeviceBlueprintData");
      if (DAT_14cc0b368 == 0) {
        return 0;
      }
    }
    if (*(int *)(DAT_14cc0b368 + 0x38) <= *(int *)(param_1 + 0x38)) {
      if (*(longlong *)
           (*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(DAT_14cc0b368 + 0x38) * 8) ==
          DAT_14cc0b368 + 0x30) {
        return param_2;
      }
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1492e540a FUN_1492e540a body=111 status=ok
// SIG undefined FUN_1492e540a(void)

undefined8 FUN_1492e540a(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    if (DAT_14cc0b338 == 0) {
      uVar1 = FUN_140e1278a();
      DAT_14cc0b338 = FUN_140002ddd(FUN_146719b13,uVar1,L"LiveLinkGamepadInputDeviceStaticData");
      if (DAT_14cc0b338 == 0) {
        return 0;
      }
    }
    if (*(int *)(DAT_14cc0b338 + 0x38) <= *(int *)(param_1 + 0x38)) {
      if (*(longlong *)
           (*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(DAT_14cc0b338 + 0x38) * 8) ==
          DAT_14cc0b338 + 0x30) {
        return param_2;
      }
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1492e547a FUN_1492e547a body=111 status=ok
// SIG undefined FUN_1492e547a(void)

undefined8 FUN_1492e547a(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    if (DAT_14cc0b350 == 0) {
      uVar1 = FUN_140e1278a();
      DAT_14cc0b350 = FUN_140002ddd(FUN_146719ba5,uVar1,L"LiveLinkGamepadInputDeviceFrameData");
      if (DAT_14cc0b350 == 0) {
        return 0;
      }
    }
    if (*(int *)(DAT_14cc0b350 + 0x38) <= *(int *)(param_1 + 0x38)) {
      if (*(longlong *)
           (*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(DAT_14cc0b350 + 0x38) * 8) ==
          DAT_14cc0b350 + 0x30) {
        return param_2;
      }
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1492e54ea FUN_1492e54ea body=111 status=ok
// SIG undefined FUN_1492e54ea(void)

undefined8 FUN_1492e54ea(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    if (DAT_14cc0b3c8 == 0) {
      uVar1 = FUN_140e1278a();
      DAT_14cc0b3c8 = FUN_140002ddd(FUN_146719ded,uVar1,L"LiveLinkLightBlueprintData");
      if (DAT_14cc0b3c8 == 0) {
        return 0;
      }
    }
    if (*(int *)(DAT_14cc0b3c8 + 0x38) <= *(int *)(param_1 + 0x38)) {
      if (*(longlong *)
           (*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(DAT_14cc0b3c8 + 0x38) * 8) ==
          DAT_14cc0b3c8 + 0x30) {
        return param_2;
      }
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1492e555a FUN_1492e555a body=111 status=ok
// SIG undefined FUN_1492e555a(void)

undefined8 FUN_1492e555a(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    if (DAT_14cc0b398 == 0) {
      uVar1 = FUN_140e1278a();
      DAT_14cc0b398 = FUN_140002ddd(FUN_146719cc9,uVar1,L"LiveLinkLightStaticData");
      if (DAT_14cc0b398 == 0) {
        return 0;
      }
    }
    if (*(int *)(DAT_14cc0b398 + 0x38) <= *(int *)(param_1 + 0x38)) {
      if (*(longlong *)
           (*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(DAT_14cc0b398 + 0x38) * 8) ==
          DAT_14cc0b398 + 0x30) {
        return param_2;
      }
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1492e55ca FUN_1492e55ca body=111 status=ok
// SIG undefined FUN_1492e55ca(void)

undefined8 FUN_1492e55ca(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    if (DAT_14cc0b3b0 == 0) {
      uVar1 = FUN_140e1278a();
      DAT_14cc0b3b0 = FUN_140002ddd(FUN_146719d5b,uVar1,L"LiveLinkLightFrameData");
      if (DAT_14cc0b3b0 == 0) {
        return 0;
      }
    }
    if (*(int *)(DAT_14cc0b3b0 + 0x38) <= *(int *)(param_1 + 0x38)) {
      if (*(longlong *)
           (*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(DAT_14cc0b3b0 + 0x38) * 8) ==
          DAT_14cc0b3b0 + 0x30) {
        return param_2;
      }
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1492e563a FUN_1492e563a body=111 status=ok
// SIG undefined FUN_1492e563a(void)

undefined8 FUN_1492e563a(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    if (DAT_14cc0b4a0 == 0) {
      uVar1 = FUN_140e1278a();
      DAT_14cc0b4a0 = FUN_140002ddd(FUN_14671a279,uVar1,L"LiveLinkTransformBlueprintData");
      if (DAT_14cc0b4a0 == 0) {
        return 0;
      }
    }
    if (*(int *)(DAT_14cc0b4a0 + 0x38) <= *(int *)(param_1 + 0x38)) {
      if (*(longlong *)
           (*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(DAT_14cc0b4a0 + 0x38) * 8) ==
          DAT_14cc0b4a0 + 0x30) {
        return param_2;
      }
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1492e56aa FUN_1492e56aa body=111 status=ok
// SIG undefined FUN_1492e56aa(void)

undefined8 FUN_1492e56aa(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    if (DAT_14cc0b470 == 0) {
      uVar1 = FUN_140e1278a();
      DAT_14cc0b470 = FUN_140002ddd(FUN_1467197a6,uVar1,L"LiveLinkTransformStaticData");
      if (DAT_14cc0b470 == 0) {
        return 0;
      }
    }
    if (*(int *)(DAT_14cc0b470 + 0x38) <= *(int *)(param_1 + 0x38)) {
      if (*(longlong *)
           (*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(DAT_14cc0b470 + 0x38) * 8) ==
          DAT_14cc0b470 + 0x30) {
        return param_2;
      }
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1492e571a FUN_1492e571a body=111 status=ok
// SIG undefined FUN_1492e571a(void)

undefined8 FUN_1492e571a(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    if (DAT_14cc0b488 == 0) {
      uVar1 = FUN_140e1278a();
      DAT_14cc0b488 = FUN_140002ddd(FUN_14671986a,uVar1,L"LiveLinkTransformFrameData");
      if (DAT_14cc0b488 == 0) {
        return 0;
      }
    }
    if (*(int *)(DAT_14cc0b488 + 0x38) <= *(int *)(param_1 + 0x38)) {
      if (*(longlong *)
           (*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(DAT_14cc0b488 + 0x38) * 8) ==
          DAT_14cc0b488 + 0x30) {
        return param_2;
      }
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1492e578a FUN_1492e578a body=98 status=ok
// SIG undefined FUN_1492e578a(void)

void FUN_1492e578a(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1492e57ec FUN_1492e57ec body=45 status=ok
// SIG undefined FUN_1492e57ec(void)

void FUN_1492e57ec(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      lVar1 = *(longlong *)(param_2 + 8 + lVar2);
      *(longlong *)(param_1 + 8 + lVar2) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      lVar2 = lVar2 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1492e5828 FUN_1492e5828 body=565 status=ok
// SIG undefined FUN_1492e5828(void)

void FUN_1492e5828(longlong param_1,undefined8 param_2,longlong param_3)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  float local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = FUN_1492e5a5e(param_3);
  lVar3 = FUN_1492e5aa8(param_3 + 0x28);
  if (lVar3 != 0 && lVar2 != 0) {
    uVar4 = FUN_1492e5fce(param_1);
    lVar5 = FUN_147a90604(param_1 + 0x28,uVar4);
    if (lVar5 != 0) {
      lVar6 = FUN_140c8105a();
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8
           ) == lVar6 + 0x30)) {
        bVar1 = *(byte *)(lVar2 + 0x18);
        if ((*(uint *)(lVar5 + 0x2fc) & 1) != (uint)bVar1) {
          FUN_1479e3ca4(lVar5);
          bVar1 = *(byte *)(lVar2 + 0x18);
        }
        if ((bVar1 & 1) != 0) {
          FUN_1479e37a0(lVar5,*(undefined4 *)(lVar3 + 0x100));
        }
        if (*(char *)(lVar2 + 0x19) == '\x01') {
          FUN_1406f9290(lVar5,*(undefined4 *)(lVar3 + 0x104));
        }
        if (*(char *)(lVar2 + 0x1a) == '\x01') {
          local_38 = (&DAT_14c758c60)[*(byte *)(lVar3 + 0x10a)];
          local_34 = (&DAT_14c758c60)[*(byte *)(lVar3 + 0x109)];
          local_30 = (&DAT_14c758c60)[*(byte *)(lVar3 + 0x108)];
          local_2c = (float)*(byte *)(lVar3 + 0x10b) * 0.003921569;
          FUN_140802a50(lVar5,&local_38,1);
        }
        lVar6 = FUN_140e3ec56();
        if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
          if (*(char *)(lVar2 + 0x1d) == '\x01') {
            FUN_1479e5038(lVar5,*(undefined4 *)(lVar3 + 0x114));
          }
          if (*(char *)(lVar2 + 0x1f) == '\x01') {
            FUN_1479eab48(lVar5,*(undefined4 *)(lVar3 + 0x118));
          }
          if (*(char *)(lVar2 + 0x20) == '\x01') {
            FUN_1479ea988(lVar5,*(undefined4 *)(lVar3 + 0x11c));
          }
          if (*(char *)(lVar2 + 0x1e) == '\x01') {
            FUN_1479eaa68(lVar5,*(undefined4 *)(lVar3 + 0x120));
          }
          lVar6 = FUN_140c81140();
          if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
            if (*(char *)(lVar2 + 0x1b) == '\x01') {
              FUN_147a2e8a6(lVar5,*(undefined4 *)(lVar3 + 0x10c));
            }
            if (*(char *)(lVar2 + 0x1c) == '\x01') {
              FUN_147a2e986(lVar5,*(undefined4 *)(lVar3 + 0x110));
            }
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492e5a5e FUN_1492e5a5e body=74 status=ok
// SIG undefined FUN_1492e5a5e(void)

undefined8 FUN_1492e5a5e(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  lVar2 = FUN_1492dc406();
  if (((lVar2 == 0) || (lVar3 = FUN_146719c92(), lVar3 == 0)) ||
     (*(int *)(lVar2 + 0x38) < *(int *)(lVar3 + 0x38))) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30) {
      uVar4 = uVar1;
    }
  }
  return uVar4;
}



// FUNCTION 1492e5aa8 FUN_1492e5aa8 body=74 status=ok
// SIG undefined FUN_1492e5aa8(void)

undefined8 FUN_1492e5aa8(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  lVar2 = FUN_1492dc4d4();
  if (((lVar2 == 0) || (lVar3 = FUN_146719d24(), lVar3 == 0)) ||
     (*(int *)(lVar2 + 0x38) < *(int *)(lVar3 + 0x38))) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30) {
      uVar4 = uVar1;
    }
  }
  return uVar4;
}



// FUNCTION 1492e5af2 FUN_1492e5af2 body=75 status=ok
// SIG undefined FUN_1492e5af2(void)

bool FUN_1492e5af2(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_1411f0380();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1492e5b2b;
    }
  }
  lVar2 = 0;
LAB_1492e5b2b:
  lVar1 = FUN_145b9f6d2();
  return lVar2 == lVar1;
}



// FUNCTION 1492e5b3e FUN_1492e5b3e body=49 status=ok
// SIG undefined FUN_1492e5b3e(void)

longlong * FUN_1492e5b3e(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140c8105a();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_2;
}



// FUNCTION 1492e5b76 FUN_1492e5b76 body=58 status=ok
// SIG undefined FUN_1492e5b76(void)

void FUN_1492e5b76(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_1446e0b6e();
  uVar1 = FUN_1492e5fce(param_1);
  uVar1 = FUN_147a90604(param_1 + 0x28,uVar1);
  FUN_14485c47a(param_1 + 0x50,uVar1);
  return;
}



// FUNCTION 1492e5bd6 FUN_1492e5bd6 body=952 status=ok
// SIG undefined FUN_1492e5bd6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1492e5bd6(char *param_1,longlong *param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong lVar1;
  char cVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 unaff_RBP;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auStack_158 [32];
  undefined8 local_138;
  char local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  longlong lStack_a0;
  longlong local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_158;
  uVar12 = param_4;
  if ((param_1[1] != '\x01') || (*(char *)(param_4 + 0x10) != '\x01')) goto LAB_1492e5e0b;
  uVar11 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_1[4]);
  cVar2 = param_1[5];
  if (*param_1 == '\x01') {
    local_e8 = param_3[4];
    uStack_e0 = param_3[5];
    local_d8 = param_3[6];
    local_138 = CONCAT71(local_138._1_7_,'\x02' - cVar2);
    uVar12 = 0;
    FUN_140d93b16(param_2,&local_e8,uVar11 & 0xffffffff,0);
    goto LAB_1492e5e0b;
  }
  lVar7 = param_3[4];
  lVar8 = param_3[5];
  lVar1 = param_3[6];
  auVar13 = *(undefined1 (*) [16])(param_2 + 0x36);
  dVar5 = auVar13._0_8_;
  dVar6 = auVar13._8_8_;
  dVar18 = (double)param_2[0x38];
  puVar10 = (undefined8 *)param_2[0x46];
  if (puVar10 == (undefined8 *)0x0) {
    puVar10 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    uVar9 = DAT_14c8463d8;
    *puVar10 = DAT_14c8463d0;
    puVar10[1] = uVar9;
    uVar9 = DAT_14c8463e8;
    puVar10[2] = DAT_14c8463e0;
    puVar10[3] = uVar9;
    uVar9 = DAT_14c846500;
    puVar10[4] = DAT_14c8464f8;
    puVar10[5] = uVar9;
    puVar10[6] = DAT_14c846508;
    param_2[0x46] = (longlong)puVar10;
  }
  if (((((double)puVar10[4] != dVar5) || (NAN((double)puVar10[4]) || NAN(dVar5))) ||
      ((double)puVar10[5] != dVar6)) || (NAN((double)puVar10[5]) || NAN(dVar6))) {
LAB_1492e5ce3:
    auVar21._8_8_ = 0;
    auVar21._0_8_ = dVar18;
    dVar3 = (double)DAT_1499387d0;
    dVar4 = DAT_1499387d0._8_8_;
    auVar13 = divpd(auVar13,_DAT_1499387d0);
    auVar16 = divpd(auVar21,_DAT_1499387d0);
    auVar13 = roundpd(auVar13,auVar13,3);
    auVar16 = roundpd(auVar16,auVar16,3);
    dVar5 = dVar5 - auVar13._0_8_ * dVar3;
    dVar6 = dVar6 - auVar13._8_8_ * dVar4;
    auVar22._0_8_ = dVar18 - auVar16._0_8_ * dVar3;
    auVar22._8_8_ = 0.0 - auVar16._8_8_ * dVar4;
    auVar20._0_8_ = dVar5 + dVar3;
    auVar20._8_8_ = dVar6 + dVar4;
    auVar19._0_8_ = dVar3 + auVar22._0_8_;
    auVar19._8_8_ = dVar4 + auVar22._8_8_;
    auVar16._8_8_ = -(ulonglong)(0.0 <= dVar6);
    auVar16._0_8_ = -(ulonglong)(0.0 <= dVar5);
    auVar13._8_4_ = SUB84(dVar6,0);
    auVar13._0_8_ = dVar5;
    auVar13._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    auVar16 = blendvpd(auVar20,auVar13,auVar16);
    auVar14._8_8_ = -(ulonglong)(0.0 <= auVar22._8_8_);
    auVar14._0_8_ = -(ulonglong)(0.0 <= auVar22._0_8_);
    auVar13 = blendvpd(auVar19,auVar22,auVar14);
    auVar17._0_8_ = auVar16._0_8_ + -360.0;
    auVar17._8_8_ = auVar16._8_8_ + -360.0;
    auVar15._8_8_ = -(ulonglong)(180.0 < auVar16._8_8_);
    auVar15._0_8_ = -(ulonglong)(180.0 < auVar16._0_8_);
    auVar16 = blendvpd(auVar16,auVar17,auVar15);
    dVar18 = auVar13._0_8_;
    *(undefined1 (*) [16])(puVar10 + 4) = auVar16;
    puVar10[6] = ~-(ulonglong)(180.0 < dVar18) & (ulonglong)dVar18 |
                 (ulonglong)(dVar18 + -360.0) & -(ulonglong)(180.0 < dVar18);
    FUN_144a7484c(puVar10 + 4,&local_c8);
    puVar10[2] = local_b8;
    puVar10[3] = uStack_b0;
    *puVar10 = local_c8;
    puVar10[1] = uStack_c0;
  }
  else if (((double)puVar10[6] != dVar18) || (NAN((double)puVar10[6]) || NAN(dVar18)))
  goto LAB_1492e5ce3;
  local_c8 = *puVar10;
  uStack_c0 = puVar10[1];
  local_b8 = puVar10[2];
  uStack_b0 = puVar10[3];
  local_138 = 0;
  uVar12 = uVar11 & 0xffffffff;
  local_130 = '\x02' - cVar2;
  local_a8 = lVar7;
  lStack_a0 = lVar8;
  local_98 = lVar1;
  FUN_144927ad4(param_2,&local_a8,&local_c8,uVar12);
LAB_1492e5e0b:
  if ((param_1[2] == '\x01') && (*(char *)(param_4 + 0x11) == '\x01')) {
    if (*param_1 == '\x01') {
      local_c8 = *param_3;
      uStack_c0 = param_3[1];
      local_b8 = param_3[2];
      uStack_b0 = param_3[3];
      local_138 = CONCAT71(local_138._1_7_,'\x02' - param_1[5]);
      FUN_145927ad6(param_2,&local_c8,CONCAT71((int7)(uVar12 >> 8),param_1[4]) & 0xffffffff,0);
    }
    else {
      local_c8 = *param_3;
      uStack_c0 = param_3[1];
      local_b8 = param_3[2];
      uStack_b0 = param_3[3];
      local_98 = param_2[0x35];
      local_a8 = param_2[0x33];
      lStack_a0 = param_2[0x34];
      local_138 = 0;
      local_130 = '\x02' - param_1[5];
      FUN_144927ad4(param_2);
    }
  }
  if ((param_1[3] == '\x01') && (*(char *)(param_4 + 0x12) == '\x01')) {
    if (*param_1 == '\x01') {
      local_108 = param_3[8];
      uStack_100 = param_3[9];
      local_f8 = param_3[10];
      FUN_141226a1c(param_2);
    }
    else {
      local_128 = param_3[8];
      uStack_120 = param_3[9];
      local_118 = param_3[10];
      (**(code **)(*param_2 + 0x478))(param_2);
    }
  }
  if ((local_90 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492e5f90 FUN_1492e5f90 body=61 status=ok
// SIG undefined FUN_1492e5f90(void)

void FUN_1492e5f90(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_1492e5fce();
  uVar1 = FUN_1492e5fce(param_1);
  lVar2 = FUN_147a90604(param_1 + 0x28,uVar1);
  if (lVar2 != 0) {
    FUN_144a799b0();
    return;
  }
  return;
}



// FUNCTION 1492e5fce FUN_1492e5fce body=104 status=ok
// SIG undefined FUN_1492e5fce(void)

longlong FUN_1492e5fce(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  while( true ) {
    if (lVar2 == 0) {
      return 0;
    }
    lVar1 = FUN_144a6c4d8();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) break;
    lVar1 = FUN_144a78d6a();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) {
      return *(longlong *)(lVar2 + 0xa8);
    }
    lVar2 = *(longlong *)(lVar2 + 0x20);
  }
  return lVar2;
}



// FUNCTION 1492e6036 FUN_1492e6036 body=2050 status=ok
// SIG undefined FUN_1492e6036(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1492e6036(longlong param_1,undefined8 param_2,longlong param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  int iVar21;
  longlong lVar22;
  longlong lVar23;
  undefined8 uVar24;
  longlong lVar25;
  longlong lVar26;
  uint uVar27;
  ulonglong uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar34;
  double dVar35;
  undefined1 auVar36 [16];
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auStack_298 [32];
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  undefined1 local_238 [16];
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_d0;
  double dVar3;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_298;
  lVar22 = FUN_1492e683a(param_3);
  lVar23 = FUN_1492e6884(param_3 + 0x28);
  if (lVar23 != 0 && lVar22 != 0) {
    uVar24 = FUN_1492e5fce(param_1);
    lVar25 = FUN_147a90604(param_1 + 0x28,uVar24);
    if (lVar25 != 0) {
      lVar26 = FUN_144a799b0();
      auVar42 = _DAT_149934d80;
      if (*(int *)(lVar26 + 0x38) <= *(int *)(*(longlong *)(lVar25 + 0x10) + 0x38)) {
        lVar6 = *(longlong *)(*(longlong *)(lVar25 + 0x10) + 0x30);
        if (*(longlong *)(lVar6 + (longlong)*(int *)(lVar26 + 0x38) * 8) == lVar26 + 0x30) {
          auVar32 = *(undefined1 (*) [16])(lVar23 + 0xe0);
          dVar7 = auVar32._0_8_;
          dVar11 = auVar32._8_8_;
          auVar4 = *(undefined1 (*) [16])(lVar23 + 0xf0);
          dVar8 = auVar4._0_8_;
          auVar33 = *(undefined1 (*) [16])(param_1 + 0xb0);
          dVar9 = auVar33._0_8_;
          dVar12 = auVar33._8_8_;
          auVar5 = *(undefined1 (*) [16])(param_1 + 0xc0);
          dVar10 = auVar5._0_8_;
          auVar32 = minpd(auVar33,auVar32);
          auVar36 = minpd(auVar5,auVar4);
          auVar33._8_8_ = -(ulonglong)(auVar32._8_8_ < 0.0);
          auVar33._0_8_ = -(ulonglong)(auVar32._0_8_ < 0.0);
          iVar21 = movmskpd((int)(lVar26 + 0x30),auVar33);
          auVar32._8_8_ = -(ulonglong)(auVar36._8_8_ < 0.0);
          auVar32._0_8_ = -(ulonglong)(auVar36._0_8_ < 0.0);
          uVar27 = movmskpd((int)lVar6,auVar32);
          if ((uVar27 & 0x3fffffff) == 0 && iVar21 == 0) {
            dVar41 = *(double *)(param_1 + 0x70);
            dVar14 = *(double *)(param_1 + 0x78);
            dVar15 = *(double *)(param_1 + 0x80);
            dVar16 = *(double *)(param_1 + 0x88);
            dVar17 = *(double *)(lVar23 + 0xa0);
            dVar18 = *(double *)(lVar23 + 0xa8);
            dVar19 = *(double *)(lVar23 + 0xb0);
            dVar20 = *(double *)(lVar23 + 0xb8);
            dVar1 = *(double *)(lVar23 + 0xb8);
            dVar40 = *(double *)(lVar23 + 0xb8);
            dVar2 = *(double *)(lVar23 + 0xa0);
            dVar3 = *(double *)(lVar23 + 0xa0);
            dVar37 = *(double *)(lVar23 + 0xa8);
            dVar35 = *(double *)(lVar23 + 0xa8);
            dVar38 = *(double *)(lVar23 + 0xb0);
            dVar39 = *(double *)(lVar23 + 0xb0);
            dVar31 = dVar14 * dVar38 * -1.0 +
                     dVar15 * dVar37 + dVar16 * dVar2 * 1.0 + dVar41 * dVar1;
            dVar34 = dVar41 * dVar39 * 1.0 +
                     dVar16 * dVar35 + dVar15 * dVar3 * -1.0 + dVar14 * dVar40;
            auVar42._0_8_ =
                 dVar16 * dVar38 * 1.0 + ((dVar2 * dVar14 * 1.0 + dVar15 * dVar1) - dVar41 * dVar37)
            ;
            auVar42._8_8_ =
                 dVar15 * dVar39 * -1.0 +
                 ((dVar3 * dVar41 * -1.0 + dVar16 * dVar40) - dVar14 * dVar35);
            dVar35 = *(double *)(param_1 + 0x90) * dVar7;
            dVar38 = *(double *)(param_1 + 0x98) * dVar11;
            dVar39 = *(double *)(param_1 + 0xa0) * dVar8;
            dVar41 = *(double *)(param_1 + 0xa8) * auVar4._8_8_;
            dVar2 = dVar38 * dVar17 - dVar18 * dVar35;
            dVar3 = dVar39 * dVar18 - dVar19 * dVar38;
            dVar37 = dVar35 * dVar19 - dVar17 * dVar39;
            dVar14 = dVar41 * dVar20 - dVar20 * dVar41;
            dVar3 = dVar3 + dVar3;
            dVar37 = dVar37 + dVar37;
            dVar2 = dVar2 + dVar2;
            dVar14 = dVar14 + dVar14;
            local_f8 = (dVar2 * dVar18 - dVar19 * dVar37) + dVar1 * dVar3 + dVar35 +
                       *(double *)(lVar23 + 0xc0);
            dStack_f0 = (dVar3 * dVar19 - dVar2 * dVar17) + dVar40 * dVar37 + dVar38 +
                        *(double *)(lVar23 + 200);
            local_e8 = (dVar37 * dVar17 - dVar18 * dVar3) + dVar1 * dVar2 + dVar39 +
                       *(double *)(lVar23 + 0xd0);
            dVar40 = (dVar14 * dVar20 - dVar14 * dVar20) + dVar40 * dVar14 + dVar41 +
                     *(double *)(lVar23 + 0xd8);
          }
          else {
            dVar2 = *(double *)(lVar23 + 0xa0);
            dVar3 = *(double *)(lVar23 + 0xa8);
            dVar37 = *(double *)(lVar23 + 0xb0);
            dVar35 = dVar3 + dVar3;
            dVar38 = dVar37 + dVar37;
            dVar34 = dVar2 * (dVar2 + dVar2);
            local_188 = (1.0 - (dVar34 + dVar3 * dVar35)) * dVar8;
            dVar1 = *(double *)(lVar23 + 0xa0) * dVar38;
            dVar31 = *(double *)(lVar23 + 0xb8);
            dVar39 = dVar38 * dVar31;
            dVar41 = (dVar2 + dVar2) * *(double *)(lVar23 + 0xb8);
            dVar31 = dVar35 * dVar31;
            local_198 = (dVar31 + dVar1) * dVar8;
            dVar34 = (DAT_149934d80._8_8_ - (dVar37 * dVar38 + dVar34)) * dVar11;
            dVar40 = (dVar35 * dVar2 + dVar39) * dVar7;
            local_1a8 = (dVar38 * dVar3 + dVar41) * dVar11;
            dStack_190 = (dVar38 * dVar3 - dVar41) * dVar8;
            local_1c8 = (dVar1 - dVar31) * dVar7;
            local_1d8._8_4_ = SUB84(dVar40,0);
            local_1d8._0_8_ = ((double)DAT_149934d80 - (dVar37 * dVar38 + dVar3 * dVar35)) * dVar7;
            local_1d8._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
            uStack_1c0 = 0;
            local_1b8._8_4_ = SUB84(dVar34,0);
            local_1b8._0_8_ = (dVar35 * dVar2 - dVar39) * dVar11;
            local_1b8._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
            uStack_1a0 = 0;
            uStack_180 = 0;
            local_178 = *(undefined8 *)(lVar23 + 0xc0);
            uStack_170 = *(undefined8 *)(lVar23 + 200);
            local_168 = *(undefined8 *)(lVar23 + 0xd0);
            uStack_160 = 0x3ff0000000000000;
            dVar1 = *(double *)(param_1 + 0x70);
            dVar2 = *(double *)(param_1 + 0x78);
            dVar3 = *(double *)(param_1 + 0x80);
            dVar37 = dVar2 + dVar2;
            dVar35 = dVar3 + dVar3;
            dVar34 = dVar1 * (dVar1 + dVar1);
            local_208 = (1.0 - (dVar34 + dVar2 * dVar37)) * dVar10;
            dVar40 = *(double *)(param_1 + 0x70) * dVar35;
            dVar31 = *(double *)(param_1 + 0x88);
            dVar38 = dVar35 * dVar31;
            dVar39 = (dVar1 + dVar1) * *(double *)(param_1 + 0x88);
            dVar31 = dVar37 * dVar31;
            local_218 = (dVar31 + dVar40) * dVar10;
            dStack_210 = (dVar35 * dVar2 - dVar39) * dVar10;
            local_258 = ((double)DAT_149934d80 - (dVar3 * dVar35 + dVar2 * dVar37)) * dVar9;
            dVar34 = (DAT_149934d80._8_8_ - (dVar3 * dVar35 + dVar34)) * dVar12;
            dStack_250 = (dVar37 * dVar1 + dVar38) * dVar9;
            local_228 = (dVar35 * dVar2 + dVar39) * dVar12;
            local_248 = (dVar40 - dVar31) * dVar9;
            uStack_240 = 0;
            local_238._8_4_ = SUB84(dVar34,0);
            local_238._0_8_ = (dVar37 * dVar1 - dVar38) * dVar12;
            local_238._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
            uStack_220 = 0;
            uStack_200 = 0;
            local_1f8 = *(undefined8 *)(param_1 + 0x90);
            uStack_1f0 = *(undefined8 *)(param_1 + 0x98);
            local_1e8 = *(undefined8 *)(param_1 + 0xa0);
            uStack_1e0 = 0x3ff0000000000000;
            FUN_1447fea8d(&local_158);
            FUN_144a1c686(&local_158,0x3e45798ee0000000);
            auVar36._8_8_ = -(ulonglong)(0.0 <= dVar11 * dVar12);
            auVar36._0_8_ = -(ulonglong)(0.0 <= dVar7 * dVar9);
            auVar32 = blendvpd(_DAT_149936790,auVar42,auVar36);
            uVar28 = -(ulonglong)(0.0 <= dVar8 * dVar10);
            dVar31 = (double)(~uVar28 & 0xbff0000000000000 | uVar28 & 0x3ff0000000000000);
            dVar34 = auVar32._0_8_;
            local_148 = local_148 * dVar34;
            local_150 = local_150 * dVar34;
            local_158 = local_158 * dVar34;
            dVar34 = auVar32._8_8_;
            local_128 = local_128 * dVar34;
            local_130 = local_130 * dVar34;
            local_138 = dVar34 * local_138;
            local_108 = local_108 * dVar31;
            local_110 = local_110 * dVar31;
            local_118 = dVar31 * local_118;
            FUN_14481fd10(&local_278,&local_158);
            dVar31 = local_268 * local_268 + local_278 * local_278;
            dVar34 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
            auVar30._0_8_ = dVar31 + dVar34;
            auVar30._8_8_ = dVar31 + dVar34;
            auVar29._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar30._8_8_);
            auVar29._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar30._0_8_);
            auVar32 = sqrtpd(auVar30,auVar30);
            auVar42 = divpd(auVar42,auVar32);
            auVar43._0_8_ = auVar42._0_8_ * local_268;
            auVar43._8_8_ = auVar42._8_8_ * dStack_260;
            dVar31 = (double)((ulonglong)(local_278 * auVar42._0_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar30._0_8_));
            dVar34 = (double)((ulonglong)(dStack_270 * auVar42._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar30._8_8_));
            auVar42 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar43,auVar29);
            dVar40 = 0.0;
          }
          dVar1 = auVar5._8_8_ * auVar4._8_8_;
          *(double *)(param_1 + 0xd0) = dVar31;
          *(double *)(param_1 + 0xd8) = dVar34;
          *(undefined1 (*) [16])(param_1 + 0xe0) = auVar42;
          auVar5._8_4_ = SUB84(dStack_f0,0);
          auVar5._0_8_ = local_f8;
          auVar5._12_4_ = (int)((ulonglong)dStack_f0 >> 0x20);
          *(undefined1 (*) [16])(param_1 + 0xf0) = auVar5;
          *(double *)(param_1 + 0x100) = local_e8;
          *(double *)(param_1 + 0x108) = dVar40;
          auVar13._8_4_ = SUB84(dVar12 * dVar11,0);
          auVar13._0_8_ = dVar9 * dVar7;
          auVar13._12_4_ = (int)((ulonglong)(dVar12 * dVar11) >> 0x20);
          *(undefined1 (*) [16])(param_1 + 0x110) = auVar13;
          auVar4._8_4_ = SUB84(dVar1,0);
          auVar4._0_8_ = dVar10 * dVar8;
          auVar4._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
          *(undefined1 (*) [16])(param_1 + 0x120) = auVar4;
          FUN_1492e5bd6(param_1 + 0x68,lVar25,param_1 + 0xd0,lVar22);
        }
      }
    }
  }
  if ((local_d0 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492e683a FUN_1492e683a body=74 status=ok
// SIG undefined FUN_1492e683a(void)

undefined8 FUN_1492e683a(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  lVar2 = FUN_1492dc406();
  if (((lVar2 == 0) || (lVar3 = FUN_14671a17a(), lVar3 == 0)) ||
     (*(int *)(lVar2 + 0x38) < *(int *)(lVar3 + 0x38))) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30) {
      uVar4 = uVar1;
    }
  }
  return uVar4;
}



// FUNCTION 1492e6884 FUN_1492e6884 body=74 status=ok
// SIG undefined FUN_1492e6884(void)

undefined8 FUN_1492e6884(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  lVar2 = FUN_1492dc4d4();
  if (((lVar2 == 0) || (lVar3 = FUN_14671a1de(), lVar3 == 0)) ||
     (*(int *)(lVar2 + 0x38) < *(int *)(lVar3 + 0x38))) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30) {
      uVar4 = uVar1;
    }
  }
  return uVar4;
}



// FUNCTION 1492e68ce FUN_1492e68ce body=75 status=ok
// SIG undefined FUN_1492e68ce(void)

bool FUN_1492e68ce(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_1411f0380();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1492e6907;
    }
  }
  lVar2 = 0;
LAB_1492e6907:
  lVar1 = FUN_1459f61fe();
  return lVar2 == lVar1;
}



// FUNCTION 1492e691a FUN_1492e691a body=49 status=ok
// SIG undefined FUN_1492e691a(void)

longlong * FUN_1492e691a(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_144a799b0();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_2;
}



// FUNCTION 1492e694c FUN_1492e694c body=73 status=ok
// SIG undefined FUN_1492e694c(void)

void FUN_1492e694c(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_14485c47a(param_1 + 0x50);
  FUN_1492e5fce(param_1);
  uVar1 = FUN_1492e5fce(param_1);
  lVar2 = FUN_147a90604(param_1 + 0x28,uVar1);
  if (lVar2 != 0) {
    FUN_144a799b0();
    return;
  }
  return;
}



// FUNCTION 1492e69a6 FUN_1492e69a6 body=193 status=ok
// SIG undefined FUN_1492e69a6(void)

void FUN_1492e69a6(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_30 = local_28;
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  uVar1 = FUN_1492e6a68(param_1,&local_30);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492e6a68 FUN_1492e6a68 body=323 status=ok
// SIG undefined FUN_1492e6a68(void)

undefined8 FUN_1492e6a68(longlong param_1,ulonglong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = *param_2;
  if ((uVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(uVar2);
  }
  if ((uVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(uVar2);
  }
  local_20 = uVar2;
  if ((uVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(uVar2);
  }
  if ((uVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(uVar2);
  }
  uVar3 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  iVar4 = FUN_1492e8d50((longlong *)(param_1 + 0x120),uVar3 >> 0x10 ^ uVar3,&local_20);
  if ((iVar4 != -1) &&
     (lVar1 = *(longlong *)(param_1 + 0x120) + (longlong)iVar4 * 0x18,
     plVar5 = (longlong *)(lVar1 + 8), plVar5 != (longlong *)0x0 && lVar1 != 0)) {
    lVar1 = *plVar5;
    if ((DAT_14c950c29 == 1) && (lVar1 != 0)) {
      FUN_1456cec3c(lVar1);
    }
    else if (lVar1 == 0) goto LAB_1492e6b50;
    FUN_1492e5fce(lVar1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
LAB_1492e6b50:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 1492e6bbe FUN_1492e6bbe body=113 status=ok
// SIG undefined FUN_1492e6bbe(void)

void FUN_1492e6bbe(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  byte bVar3;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = *(undefined8 *)(param_1 + 0x110);
  lVar2 = *(longlong *)(param_1 + 0x118);
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar2);
  }
  bVar3 = DAT_14c950c29;
  *param_3 = uVar1;
  if ((lVar2 != 0 & bVar3) == 1) {
    FUN_1456cec3c(lVar2);
  }
  param_3[1] = lVar2;
  return;
}



// FUNCTION 1492e6c30 FUN_1492e6c30 body=264 status=ok
// SIG undefined FUN_1492e6c30(void)

void FUN_1492e6c30(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 local_28;
  longlong local_20;
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
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  uVar1 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_30 = local_20;
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  FUN_1492e6d3a(param_1,&local_30,uVar1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492e6d3a FUN_1492e6d3a body=294 status=ok
// SIG undefined FUN_1492e6d3a(void)

void FUN_1492e6d3a(longlong param_1,ulonglong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = *param_2;
  if ((uVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(uVar2);
  }
  local_28 = uVar2;
  if ((uVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(uVar2);
  }
  if ((uVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(uVar2);
  }
  uVar3 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  iVar4 = FUN_1492e8d50((longlong *)(param_1 + 0x120),uVar3 >> 0x10 ^ uVar3,&local_28);
  if (iVar4 != -1) {
    lVar1 = *(longlong *)(param_1 + 0x120) + (longlong)iVar4 * 0x18;
    plVar5 = (longlong *)(lVar1 + 8);
    if (plVar5 != (longlong *)0x0 && lVar1 != 0) {
      lVar1 = *plVar5;
      if ((DAT_14c950c29 == 1) && (lVar1 != 0)) {
        FUN_1456cec3c(lVar1);
      }
      else if (lVar1 == 0) goto LAB_1492e6e0b;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
    }
  }
LAB_1492e6e0b:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492e6e74 FUN_1492e6e74 body=196 status=ok
// SIG undefined FUN_1492e6e74(void)

void FUN_1492e6e74(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  longlong lStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  lStack_20 = 0;
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
  local_30 = lStack_20;
  if ((lStack_20 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_1492e6f3a(param_1,&local_38);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492e6f3a FUN_1492e6f3a body=93 status=ok
// SIG undefined FUN_1492e6f3a(void)

void FUN_1492e6f3a(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  
  *(undefined8 *)(param_1 + 0x110) = *param_2;
  lVar2 = param_2[1];
  if (DAT_14c950c29 == '\x01') {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[1];
    }
  }
  *(longlong *)(param_1 + 0x118) = lVar2;
  cVar1 = FUN_1492e7902(param_1);
  if (cVar1 == '\0') {
    return;
  }
  FUN_1492e700c(param_1);
  return;
}



// FUNCTION 1492e6fba FUN_1492e6fba body=75 status=ok
// SIG undefined FUN_1492e6fba(void)

void FUN_1492e6fba(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_14482855a(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492e700c FUN_1492e700c body=561 status=ok
// SIG undefined FUN_1492e700c(void)

void FUN_1492e700c(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong *puVar4;
  longlong lVar5;
  undefined1 auStack_a8 [40];
  ulonglong local_80;
  longlong local_78;
  ulonglong local_70;
  longlong local_68;
  longlong local_60;
  ulonglong *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1492e723e();
  lVar5 = *(longlong *)(param_1 + 0x118);
  if ((((lVar5 == 0) || (lVar3 = FUN_1411f0380(), lVar3 == 0)) ||
      (*(int *)(lVar5 + 0x38) < *(int *)(lVar3 + 0x38))) ||
     ((*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
       lVar3 + 0x30 || (lVar5 = *(longlong *)(param_1 + 0x118), lVar5 == 0)))) {
    FUN_1492e8506(param_1 + 0x120,0);
  }
  else {
    local_60 = lVar5;
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c();
    }
    FUN_1492e734e(&local_58,&local_60);
    FUN_1492e8506(param_1 + 0x120,local_50);
    if ((longlong)local_50 != 0) {
      lVar5 = (longlong)local_50 << 3;
      puVar4 = local_58;
      do {
        uVar1 = *puVar4;
        if (((uVar1 != 0) && (lVar3 = FUN_1411f0380(), lVar3 != 0)) &&
           ((*(int *)(lVar3 + 0x38) <= *(int *)(uVar1 + 0x38) &&
            ((*(longlong *)(*(longlong *)(uVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
              lVar3 + 0x30 && (uVar1 = *puVar4, uVar1 != 0)))))) {
          if (DAT_14c950c29 == 1) {
            FUN_1456cec3c(uVar1);
          }
          uVar2 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
          uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
          FUN_1492e88b8(param_1 + 0x120,uVar2 >> 0x10 ^ uVar2,puVar4);
          local_70 = *puVar4;
          if ((local_70 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c();
          }
          FUN_1492e74f0(&local_68,&local_70);
          local_78 = local_68;
          if ((local_68 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c();
          }
          local_80 = *puVar4;
          if ((local_80 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c();
          }
          FUN_1492e76c4(param_1,&local_80,&local_78);
        }
        puVar4 = puVar4 + 1;
        lVar5 = lVar5 + -8;
      } while (lVar5 != 0);
    }
    if (local_58 != (ulonglong *)0x0) {
      FUN_1400020a8(local_58);
    }
  }
  if (0 < *(int *)(param_1 + 400)) {
    FUN_1428255e4(&local_58);
    FUN_1447cd2ec(param_1 + 0x188,0);
    FUN_1428255f8(&local_58);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1492e723e FUN_1492e723e body=271 status=ok
// SIG undefined FUN_1492e723e(void)

void FUN_1492e723e(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
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
  plVar1 = (longlong *)(param_1 + 0x120);
  lVar2 = param_1 + 0x130;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  uStack_30 = 0;
  uStack_40 = lVar2;
  if (*(int *)(param_1 + 0x148) == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_48);
    iVar4 = *(int *)(param_1 + 0x148);
  }
  uStack_50 = CONCAT44(uStack_2c,uStack_30);
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_68 = (undefined4)local_48;
  uStack_64 = local_48._4_4_;
  uStack_60 = (undefined4)uStack_40;
  uStack_5c = uStack_40._4_4_;
  local_70 = plVar1;
  if ((iStack_34 != iVar4) || (uStack_40 != lVar2)) {
    do {
      plVar3 = *(longlong **)(*local_70 + 8 + (longlong)iStack_54 * 0x18);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x2d8))();
      }
      local_58 = local_58 & ~uStack_64;
      FUN_1449c0562(&local_68);
    } while (local_70 != plVar1 || (CONCAT44(uStack_5c,uStack_60) != lVar2 || iStack_54 != iVar4));
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492e734e FUN_1492e734e body=417 status=ok
// SIG undefined FUN_1492e734e(void)

undefined8 * FUN_1492e734e(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  int local_38;
  uint local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  lVar3 = *param_2;
  if ((((lVar3 != 0) && (lVar2 = FUN_1411f0380(), lVar2 != 0)) &&
      (*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
     ((*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
       lVar2 + 0x30 && (*param_2 != 0)))) {
    FUN_1457a9e34(&local_40,0x10,1,0);
    uVar5 = (ulonglong)local_30;
    lVar3 = local_40;
    if ((-1 < (int)local_30) && ((int)local_30 < local_38)) {
      do {
        uVar4 = (uint)uVar5;
        if ((*(uint *)(*(longlong *)(lVar3 + (uVar5 & 0xffffffff) * 8) + 0xd4) & 0x2000001) == 0) {
          lVar3 = *param_2;
          if (((lVar3 == 0) || (lVar2 = FUN_1411f0380(), lVar2 == 0)) ||
             ((*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38) ||
              (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
               lVar2 + 0x30)))) {
            lVar2 = 0;
          }
          else {
            lVar2 = *param_2;
          }
          lVar1 = *(longlong *)(local_40 + (longlong)(int)local_30 * 8);
          lVar3 = local_40;
          uVar4 = local_30;
          if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
              lVar1 + 0x30)) {
            local_48 = lVar1;
            if (DAT_14c950c29 == '\x01') {
              FUN_1456cec3c(lVar1);
            }
            FUN_1492e9026(param_1,&local_48);
            lVar3 = local_40;
            uVar4 = local_30;
          }
        }
        uVar5 = (longlong)(int)uVar4;
        do {
          uVar6 = uVar5;
          uVar5 = uVar6 + 1;
          local_30 = (uint)uVar5;
          if ((longlong)local_38 <= (longlong)uVar5) break;
        } while (*(longlong *)(lVar3 + uVar5 * 8) == 0);
      } while ((-2 < (longlong)uVar6) && ((int)local_30 < local_38));
    }
    if (lVar3 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1492e74f0 FUN_1492e74f0 body=466 status=ok
// SIG undefined FUN_1492e74f0(void)

longlong * FUN_1492e74f0(longlong *param_1,ulonglong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  longlong *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  lVar3 = FUN_145b147d0();
  lVar4 = *(longlong *)(lVar3 + 0x110);
  if (lVar4 == 0) {
    FUN_140aa6c08(lVar3);
    lVar4 = *(longlong *)(lVar3 + 0x110);
  }
  plVar5 = (longlong *)*param_2;
  if ((plVar5 != (longlong *)0x0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(plVar5);
  }
  if ((plVar5 != (longlong *)0x0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(plVar5);
  }
  local_38 = plVar5;
  if ((plVar5 != (longlong *)0x0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(plVar5);
  }
  if ((plVar5 != (longlong *)0x0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(plVar5);
  }
  uVar1 = ((uint)((ulonglong)plVar5 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar5 >> 4)) *
          -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  iVar2 = FUN_1492e9140((longlong *)(lVar4 + 0x28),uVar1 >> 0x10 ^ uVar1,&local_38);
  if (iVar2 != -1) {
    lVar4 = *(longlong *)(lVar4 + 0x28) + (longlong)iVar2 * 0x18;
    plVar5 = (longlong *)(lVar4 + 8);
    if ((plVar5 != (longlong *)0x0 && lVar4 != 0) && (lVar4 = *plVar5, lVar4 != 0)) {
      lVar3 = FUN_14590a7f8();
      if ((lVar3 != 0) &&
         (((*(int *)(lVar3 + 0x38) <= *(int *)(lVar4 + 0x38) &&
           (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30)) && (lVar4 = *plVar5, lVar4 != 0)))) {
        if (DAT_14c950c29 == 1) {
          FUN_1456cec3c();
          lVar4 = *plVar5;
        }
        *param_1 = lVar4;
        goto LAB_1492e764b;
      }
    }
  }
  FUN_1492e8128(&local_38,param_2);
  plVar5 = local_38;
  if (0 < local_30) {
    lVar4 = *local_38;
    if (DAT_14c950c29 == 1) {
      if (lVar4 == 0) {
        lVar4 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar4 = *plVar5;
      }
    }
    *param_1 = lVar4;
  }
  if (plVar5 != (longlong *)0x0) {
    FUN_1400020a8(plVar5);
  }
LAB_1492e764b:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492e76c4 FUN_1492e76c4 body=573 status=ok
// SIG undefined FUN_1492e76c4(void)

void FUN_1492e76c4(longlong param_1,ulonglong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_68 [40];
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *param_2;
  if ((uVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(uVar1);
  }
  local_40 = uVar1;
  if ((uVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(uVar1);
  }
  if ((uVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(uVar1);
  }
  uVar2 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  iVar3 = FUN_1492e8d50(param_1 + 0x120,uVar2 >> 0x10 ^ uVar2,&local_40);
  if (iVar3 == -1) goto LAB_1492e7781;
  uVar1 = *param_2;
  if ((uVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(uVar1);
  }
  uVar2 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  plVar4 = (longlong *)FUN_1492e88b8(param_1 + 0x120,uVar2 >> 0x10 ^ uVar2,param_2);
  if (*plVar4 != 0) {
    lVar7 = *(longlong *)(*plVar4 + 0x10);
    lVar5 = *param_3;
    if (lVar5 == 0) {
LAB_1492e7814:
      lVar5 = 0;
    }
    else {
      lVar6 = FUN_14590a7f8();
      if (((lVar6 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar6 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
          lVar6 + 0x30)) goto LAB_1492e7814;
      lVar5 = *param_3;
    }
    if (lVar7 == lVar5) goto LAB_1492e7781;
    if ((longlong *)*plVar4 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar4 + 0x2d8))();
    }
  }
  lVar7 = *param_3;
  if (lVar7 == 0) {
LAB_1492e7838:
    lVar7 = 0;
  }
  else {
    lVar5 = FUN_14590a7f8();
    if (((lVar5 == 0) || (*(int *)(lVar7 + 0x38) < *(int *)(lVar5 + 0x38))) ||
       ((*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
         lVar5 + 0x30 || (lVar7 = *param_3, lVar7 == 0)))) goto LAB_1492e7838;
    uVar2 = *(uint *)(param_1 + 8);
    lVar5 = FUN_14590a7f8();
    if (((lVar5 == 0) || (*(int *)(lVar7 + 0x38) < *(int *)(lVar5 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
        lVar5 + 0x30)) {
      lVar7 = 0;
    }
    else {
      lVar7 = *param_3;
    }
    lVar7 = FUN_1492e7abc(param_1,lVar7,uVar2 & 0x29);
    if ((lVar7 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(lVar7);
    }
  }
  *plVar4 = lVar7;
LAB_1492e7781:
  *(undefined1 *)(param_1 + 0x19b) = 1;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492e7902 FUN_1492e7902 body=441 status=ok
// SIG undefined FUN_1492e7902(void)

ulonglong FUN_1492e7902(longlong param_1)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  undefined8 unaff_RBP;
  ulonglong uVar7;
  undefined7 uVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = *(longlong *)(param_1 + 0x118);
  if ((local_60 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_1492e734e(&local_58,&local_60);
  lVar4 = local_58;
  iVar1 = *(int *)(param_1 + 0x128);
  iVar2 = *(int *)(param_1 + 0x154);
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  if (iVar1 - iVar2 == local_50) {
    if (iVar1 == iVar2) {
      uVar7 = 0;
    }
    else {
      lVar9 = 0;
      while( true ) {
        uVar3 = *(ulonglong *)(lVar4 + lVar9);
        if ((uVar3 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(uVar3);
        }
        if ((uVar3 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(uVar3);
        }
        local_48 = uVar3;
        if ((uVar3 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(uVar3);
        }
        if ((uVar3 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(uVar3);
        }
        uVar5 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        iVar6 = FUN_1492e8d50((longlong *)(param_1 + 0x120),uVar5 >> 0x10 ^ uVar5,&local_48);
        uVar8 = (undefined7)(uVar7 >> 8);
        if (iVar6 == -1) break;
        bVar10 = (*(longlong *)(param_1 + 0x120) + (longlong)iVar6 * 0x18 + 8U & 0xfffffffffffffff7)
                 == 0;
        uVar7 = CONCAT71(uVar8,bVar10);
        if ((bVar10) ||
           (bVar10 = (longlong)iVar1 * 8 + (longlong)iVar2 * -8 + -8 == lVar9, lVar9 = lVar9 + 8,
           bVar10)) goto LAB_1492e7a82;
      }
      uVar7 = CONCAT71(uVar8,1);
    }
  }
LAB_1492e7a82:
  if (local_58 != 0) {
    FUN_1400020a8(local_58);
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 1492e7abc FUN_1492e7abc body=181 status=ok
// SIG undefined FUN_1492e7abc(void)

undefined8 FUN_1492e7abc(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  FUN_144a5c54a(local_b8,param_2);
  local_a8 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = param_1;
  local_a0 = param_3;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492e7b72 FUN_1492e7b72 body=185 status=ok
// SIG undefined FUN_1492e7b72(void)

void FUN_1492e7b72(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144a3ee64();
  *(undefined1 *)(param_1 + 0x19b) = 1;
  FUN_1446f470e(local_20,L"LiveLinkComponents",1);
  uVar1 = FUN_144a52528();
  plVar2 = (longlong *)FUN_1401e3324(uVar1);
  plVar3 = (longlong *)(**(code **)(*plVar2 + 0x40))(plVar2);
  if ((longlong)(int)plVar3[1] != 0) {
    lVar4 = 0;
    do {
      if ((*(int *)(*plVar3 + 8 + lVar4) != 0) && (*(longlong *)(*plVar3 + lVar4) != 0)) {
        uVar1 = (**(code **)(*plVar2 + 0x40))(plVar2);
        FUN_1492e8ed2(uVar1,param_1);
        break;
      }
      lVar4 = lVar4 + 0x10;
    } while ((longlong)(int)plVar3[1] * 0x10 != lVar4);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492e7c2c FUN_1492e7c2c body=32 status=ok
// SIG undefined FUN_1492e7c2c(void)

void FUN_1492e7c2c(undefined8 param_1,undefined4 param_2)

{
  FUN_1492e723e();
  FUN_140674d22(param_1,param_2);
  return;
}



// FUNCTION 1492e7c4c FUN_1492e7c4c body=1220 status=ok
// SIG undefined FUN_1492e7c4c(void)

void FUN_1492e7c4c(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong *plVar1;
  bool bVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 local_110;
  longlong local_108;
  longlong *local_100;
  undefined8 local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  longlong local_d8;
  undefined1 local_d0 [40];
  undefined1 local_a8 [40];
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar8 = *(longlong *)(param_1 + 0xb0);
  if ((lVar8 == 0) && (lVar8 = FUN_1448abda6(param_1), lVar8 == 0)) {
    bVar2 = true;
    lVar8 = 0;
  }
  else {
    if ((*(char *)(lVar8 + 0x152) == '\x04') && (*(char *)(param_1 + 0x19a) == '\0'))
    goto LAB_1492e802a;
    bVar2 = false;
  }
  local_118 = param_4;
  if ((*(char *)(param_1 + 0x19b) != '\0') || (*(char *)(param_1 + 0x19d) == '\0')) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cc0b9b0) && (FUN_144b3d300(&DAT_14cc0b9b0), DAT_14cc0b9b0 == -1)) {
      FUN_1446f470e(&DAT_14cc0b9a8,L"SequencerActor");
      _Init_thread_footer(&DAT_14cc0b9b0);
    }
    if (*(longlong *)(param_1 + 0xa8) == 0) {
      *(undefined2 *)(param_1 + 0x19c) = 0x100;
    }
    else {
      cVar4 = FUN_1433b7f28(*(longlong *)(param_1 + 0xa8),DAT_14cc0b9a8);
      *(char *)(param_1 + 0x19c) = cVar4;
      *(undefined1 *)(param_1 + 0x19d) = 1;
      if ((cVar4 != '\0') && (*(char *)(param_1 + 0x198) == '\x01')) {
        *(undefined1 *)(param_1 + 0x199) = 0;
      }
    }
  }
  plVar6 = (longlong *)FUN_1448c2e86();
  lVar7 = (**(code **)(*plVar6 + 0x20))(plVar6,DAT_14cc0b540);
  plVar6 = (longlong *)(lVar7 + -8);
  if ((!bVar2) && (*(char *)(lVar8 + 0x152) == '\x03')) {
    lVar7 = FUN_145b147d0();
    lVar8 = *(longlong *)(lVar7 + 0x110);
    if (lVar8 == 0) {
      FUN_140aa6c08(lVar7);
      lVar8 = *(longlong *)(lVar7 + 0x110);
    }
    if ((*(char *)(lVar8 + 0x78) == '\x01') &&
       (cVar4 = (**(code **)(*plVar6 + 0x268))(plVar6), cVar4 != '\0')) {
      (**(code **)(*plVar6 + 0x260))(plVar6);
    }
  }
  FUN_144a7c084(local_d0);
  FUN_144a7c084(local_a8);
  iVar9 = 0;
  cVar4 = '\0';
  if (*(char *)(param_1 + 0x199) == '\x01') {
    if (*DAT_14cc0b9a0 == '\x01') {
      local_d8 = *(longlong *)(param_1 + 0x118);
      if ((local_d8 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      cVar4 = (**(code **)(*plVar6 + 0x238))
                        (plVar6,*(undefined8 *)(param_1 + 0x110),&local_d8,local_d0);
    }
    else {
      cVar4 = '\0';
    }
  }
  plVar6 = (longlong *)(param_1 + 0x120);
  lVar8 = param_1 + 0x130;
  local_80 = 0x100000000;
  local_70 = 0xffffffff;
  local_68 = 0;
  local_78 = lVar8;
  if (*(int *)(param_1 + 0x148) != 0) {
    FUN_1449c0562(&local_80);
    iVar9 = *(int *)(param_1 + 0x148);
  }
  local_e8 = local_70;
  uVar3 = local_e8;
  local_e0 = local_68;
  local_dc = local_64;
  local_f8 = local_80;
  local_f0 = local_78;
  local_e8._4_4_ = (int)((ulonglong)local_70 >> 0x20);
  iVar5 = local_e8._4_4_;
  local_100 = plVar6;
  if ((local_e8._4_4_ != iVar9) || (local_e8 = uVar3, local_78 != lVar8)) {
    do {
      local_e8 = uVar3;
      plVar1 = *(longlong **)(*local_100 + 8 + (longlong)iVar5 * 0x18);
      if (plVar1 != (longlong *)0x0) {
        if (*(char *)(param_1 + 0x19b) == '\x01') {
          local_110 = *(undefined8 *)(param_1 + 0x110);
          local_108 = *(longlong *)(param_1 + 0x118);
          if ((local_108 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c();
          }
          (**(code **)(*plVar1 + 0x2d0))(plVar1,&local_110);
          (**(code **)(*plVar1 + 0x2a0))(plVar1);
        }
        if (cVar4 != '\0') {
          (**(code **)(*plVar1 + 0x2a8))(plVar1,param_2,local_d0);
        }
      }
      local_e8 = CONCAT44(local_e8._4_4_,(uint)local_e8 & ~local_f8._4_4_);
      FUN_1449c0562(&local_f8);
      iVar5 = local_e8._4_4_;
      uVar3 = local_e8;
    } while (local_100 != plVar6 || (local_f0 != lVar8 || local_e8._4_4_ != iVar9));
  }
  if (0 < *(int *)(param_1 + 0x180)) {
    FUN_1428255e4(&local_80);
    local_100 = (longlong *)CONCAT44(local_100._4_4_,param_2);
    FUN_1447cd2ec(param_1 + 0x178);
    FUN_1428255f8(&local_80);
  }
  uVar3 = local_118;
  if ((cVar4 != '\0') && ((longlong)*(int *)(param_1 + 0x1a8) != 0)) {
    lVar8 = 0;
    do {
      if ((*(int *)(*(longlong *)(param_1 + 0x1a0) + 8 + lVar8) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x1a0) + lVar8) != 0)) {
        FUN_1492e8f76(param_1 + 0x1a0,param_1,local_d0);
        break;
      }
      lVar8 = lVar8 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x1a8) * 0x10 != lVar8);
  }
  *(undefined1 *)(param_1 + 0x19b) = 0;
  FUN_144a7e84a(param_1,param_2,param_3,uVar3);
  FUN_1448eac94(local_a8);
  FUN_1448eac94(local_d0);
LAB_1492e802a:
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1492e8112 FUN_1492e8112 body=22 status=ok
// SIG undefined FUN_1492e8112(void)

undefined4 FUN_1492e8112(longlong param_1)

{
  FUN_140136774();
  return *(undefined4 *)(param_1 + 8);
}



// FUNCTION 1492e8128 FUN_1492e8128 body=466 status=ok
// SIG undefined FUN_1492e8128(void)

longlong * FUN_1492e8128(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_88 [40];
  longlong local_60;
  int local_58;
  uint local_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1457a9e34(&local_60,0x10,1,0);
  uVar6 = (ulonglong)local_50;
  if ((-1 < (int)local_50) && ((int)local_50 < local_58)) {
    do {
      lVar1 = *(longlong *)(local_60 + (uVar6 & 0xffffffff) * 8);
      lVar4 = FUN_14590a7f8();
      if ((((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
          (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
           lVar4 + 0x30)) &&
         (lVar1 = *(longlong *)(local_60 + (longlong)(int)local_50 * 8),
         (*(uint *)(lVar1 + 0xd4) & 0x2000001) == 0)) {
        plVar5 = *(longlong **)(lVar1 + 0x110);
        if (plVar5 == (longlong *)0x0) {
          FUN_140aa6c08(lVar1);
          plVar5 = *(longlong **)(lVar1 + 0x110);
        }
        cVar2 = (**(code **)(*plVar5 + 0x2b8))(plVar5,param_2);
        if (cVar2 != '\0') {
          lVar1 = *(longlong *)(local_60 + (longlong)(int)local_50 * 8);
          if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar1);
          }
          uVar6 = uStack_40;
          lVar4 = (longlong)(int)uStack_40;
          uVar3 = (int)uStack_40 + 1;
          uStack_40 = CONCAT44(uStack_40._4_4_,uVar3);
          if (uStack_40._4_4_ < uVar3) {
            FUN_1492e9386(&local_48,uVar6 & 0xffffffff);
          }
          *(longlong *)(local_48 + lVar4 * 8) = lVar1;
          if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar1);
          }
        }
      }
      uVar6 = (longlong)(int)local_50;
      do {
        uVar7 = uVar6;
        uVar6 = uVar7 + 1;
        local_50 = (uint)uVar6;
        if ((longlong)local_58 <= (longlong)uVar6) break;
      } while (*(longlong *)(local_60 + uVar6 * 8) == 0);
    } while ((-2 < (longlong)uVar7) && ((int)local_50 < local_58));
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  *param_1 = local_48;
  *(int *)(param_1 + 1) = (int)uStack_40;
  *(uint *)((longlong)param_1 + 0xc) = uStack_40._4_4_;
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1492e8300 FUN_1492e8300 body=61 status=ok
// SIG undefined FUN_1492e8300(void)

void FUN_1492e8300(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *(undefined8 *)(param_1 + 0x58) = *param_2;
  lVar1 = param_2[1];
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = param_2[1];
    }
  }
  *(longlong *)(param_1 + 0x60) = lVar1;
  return;
}



// FUNCTION 1492e8344 FUN_1492e8344 body=55 status=ok
// SIG undefined FUN_1492e8344(void)

undefined8 * FUN_1492e8344(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_2 = *(undefined8 *)(param_1 + 0x58);
  lVar1 = *(longlong *)(param_1 + 0x60);
  param_2[1] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_2;
}



// FUNCTION 1492e837c FUN_1492e837c body=45 status=ok
// SIG undefined FUN_1492e837c(void)

longlong FUN_1492e837c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145cf0f52(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492e83b0 FUN_1492e83b0 body=49 status=ok
// SIG undefined FUN_1492e83b0(void)

longlong * FUN_1492e83b0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_144a78d6a();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_2;
}



// FUNCTION 1492e8464 FUN_1492e8464 body=59 status=ok
// SIG undefined FUN_1492e8464(void)

undefined8 FUN_1492e8464(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492e8506 FUN_1492e8506 body=110 status=ok
// SIG undefined FUN_1492e8506(void)

void FUN_1492e8506(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if (*(int *)(param_1 + 0x48) < iVar3 && 0 < (int)param_2 || iVar3 < *(int *)(param_1 + 0x48)) {
    FUN_145cf1046(param_1,param_2);
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_1492e86b8(param_1);
    return;
  }
  FUN_1492e8574(param_1);
  FUN_145cf1046(param_1,param_2);
  return;
}



// FUNCTION 1492e8574 FUN_1492e8574 body=322 status=ok
// SIG undefined FUN_1492e8574(void)

void FUN_1492e8574(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
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



// FUNCTION 1492e86b8 FUN_1492e86b8 body=510 status=ok
// SIG undefined FUN_1492e86b8(void)

void FUN_1492e86b8(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
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
  uVar5 = *(uint *)(param_1 + 9);
  uVar3 = local_70;
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      do {
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)((longlong)plVar4 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar5 != uVar8);
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
    uVar3 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar9 = local_70._4_4_;
      local_70 = uVar3;
      do {
        lVar2 = *local_88;
        uVar7 = *(ulonglong *)(lVar2 + (longlong)iVar9 * 0x18);
        if ((DAT_14c950c29 == '\x01') && (uVar7 != 0)) {
          FUN_1456cec3c(uVar7);
        }
        lVar2 = lVar2 + (longlong)iVar9 * 0x18;
        uVar5 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        uVar7 = (longlong)(int)(uVar5 >> 0x10 ^ uVar5) & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x14) = iVar6;
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10) =
             *(undefined4 *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = plVar1;
        }
        *(int *)((longlong)plVar4 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar9;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar9 = local_70._4_4_;
        uVar3 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1492e88b8 FUN_1492e88b8 body=135 status=ok
// SIG undefined FUN_1492e88b8(void)

longlong FUN_1492e88b8(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_1492e8940();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1;
    if (lVar3 + lVar2 * 0x18 != 0) goto LAB_1492e88f2;
  }
  local_30 = param_3;
  FUN_1492e8a50(param_1,&local_24,param_2);
  lVar2 = (longlong)local_24;
  lVar3 = *param_1;
LAB_1492e88f2:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar3 + lVar2 * 0x18 + 8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492e8940 FUN_1492e8940 body=271 status=ok
// SIG undefined FUN_1492e8940(void)

int FUN_1492e8940(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    for (iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 0x10 + (longlong)iVar1 * 0x18)) {
      lVar4 = *param_3;
      if ((lVar4 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar4);
      }
      lVar5 = *(longlong *)(*param_1 + (longlong)iVar1 * 0x18);
      if (((DAT_14c950c29 & 1) == 0) || (lVar5 == 0)) {
        if (lVar5 != 0) goto LAB_1492e89c4;
LAB_1492e89e6:
        lVar5 = 0;
      }
      else {
        FUN_1456cec3c(lVar5);
LAB_1492e89c4:
        lVar3 = FUN_1411f0380();
        if (((lVar3 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar3 + 0x38))) ||
           (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
            lVar3 + 0x30)) goto LAB_1492e89e6;
      }
      if (((lVar4 == 0) || (lVar3 = FUN_1411f0380(), lVar3 == 0)) ||
         ((*(int *)(lVar4 + 0x38) < *(int *)(lVar3 + 0x38) ||
          (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
           lVar3 + 0x30)))) {
        lVar4 = 0;
      }
      if (lVar5 == lVar4) {
        return iVar1;
      }
    }
  }
  return -1;
}



// FUNCTION 1492e8a50 FUN_1492e8a50 body=284 status=ok
// SIG undefined FUN_1492e8a50(void)

undefined4 * FUN_1492e8a50(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  undefined4 local_50 [2];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1492e8b6e(param_1,local_50);
  local_40 = 0;
  FUN_1492e8cf8(local_48,*param_4);
  *(undefined4 *)(local_48 + 0x10) = 0xffffffff;
  cVar1 = FUN_1492e8c54(param_1,param_3,local_48,local_50);
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
      *(uint *)(local_48 + 0x14) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 0x10) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_50[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_1492e86b8(param_1);
    }
  }
  *param_2 = local_50[0];
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492e8b6e FUN_1492e8b6e body=230 status=ok
// SIG undefined FUN_1492e8b6e(void)

int * FUN_1492e8b6e(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_14482b872(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 1492e8c54 FUN_1492e8c54 body=162 status=ok
// SIG undefined FUN_1492e8c54(void)

undefined8 FUN_1492e8c54(longlong *param_1,undefined4 param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_30 = *param_3;
    if ((local_30 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    iVar5 = FUN_1492e8d50(param_1,param_2,&local_30);
    if (iVar5 != -1) {
      uVar2 = *(undefined4 *)((longlong)param_3 + 4);
      lVar4 = param_3[1];
      uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar5 * 0x18);
      *puVar1 = (int)*param_3;
      puVar1[1] = uVar2;
      puVar1[2] = (int)lVar4;
      puVar1[3] = uVar3;
      FUN_1492e8e60(param_1,*param_4);
      *param_4 = iVar5;
      uVar6 = 1;
      goto LAB_1492e8c78;
    }
  }
  uVar6 = 0;
LAB_1492e8c78:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492e8cf8 FUN_1492e8cf8 body=87 status=ok
// SIG undefined FUN_1492e8cf8(void)

longlong * FUN_1492e8cf8(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  byte bVar2;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar2 = DAT_14c950c29;
  lVar1 = *param_3;
  param_1[1] = lVar1;
  if ((lVar1 != 0 & bVar2) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 1492e8d50 FUN_1492e8d50 body=271 status=ok
// SIG undefined FUN_1492e8d50(void)

int FUN_1492e8d50(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    for (iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 0x10 + (longlong)iVar1 * 0x18)) {
      lVar4 = *param_3;
      if ((lVar4 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar4);
      }
      lVar5 = *(longlong *)(*param_1 + (longlong)iVar1 * 0x18);
      if (((DAT_14c950c29 & 1) == 0) || (lVar5 == 0)) {
        if (lVar5 != 0) goto LAB_1492e8dd4;
LAB_1492e8df6:
        lVar5 = 0;
      }
      else {
        FUN_1456cec3c(lVar5);
LAB_1492e8dd4:
        lVar3 = FUN_1411f0380();
        if (((lVar3 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar3 + 0x38))) ||
           (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
            lVar3 + 0x30)) goto LAB_1492e8df6;
      }
      if (((lVar4 == 0) || (lVar3 = FUN_1411f0380(), lVar3 == 0)) ||
         ((*(int *)(lVar4 + 0x38) < *(int *)(lVar3 + 0x38) ||
          (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
           lVar3 + 0x30)))) {
        lVar4 = 0;
      }
      if (lVar5 == lVar4) {
        return iVar1;
      }
    }
  }
  return -1;
}



// FUNCTION 1492e8e60 FUN_1492e8e60 body=114 status=ok
// SIG undefined FUN_1492e8e60(void)

void FUN_1492e8e60(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 1492e8ed2 FUN_1492e8ed2 body=164 status=ok
// SIG undefined FUN_1492e8ed2(void)

void FUN_1492e8ed2(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1492e8f52;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1492e8f52:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1492e8f76 FUN_1492e8f76 body=175 status=ok
// SIG undefined FUN_1492e8f76(void)

void FUN_1492e8f76(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1492e8fff;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1492e8fff:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1492e9026 FUN_1492e9026 body=96 status=ok
// SIG undefined FUN_1492e9026(void)

void FUN_1492e9026(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = FUN_1492e9086();
  if (iVar2 == -1) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
      FUN_1492e49c2(param_1,iVar2);
    }
    lVar1 = *param_2;
    *(longlong *)(*param_1 + (longlong)iVar2 * 8) = lVar1;
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
      return;
    }
  }
  return;
}



// FUNCTION 1492e9086 FUN_1492e9086 body=186 status=ok
// SIG undefined FUN_1492e9086(void)

ulonglong FUN_1492e9086(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar1 = *param_1;
    lVar4 = (longlong)(int)param_1[1] << 3;
    uVar6 = 0;
    do {
      lVar5 = *(longlong *)(lVar1 + uVar6 * 8);
      if ((((lVar5 == 0) || (lVar2 = FUN_1411f0380(), lVar2 == 0)) ||
          (*(int *)(lVar5 + 0x38) < *(int *)(lVar2 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30)) {
        lVar5 = 0;
      }
      else {
        lVar5 = *(longlong *)(lVar1 + uVar6 * 8);
      }
      lVar2 = *param_2;
      if (((lVar2 == 0) || (lVar3 = FUN_1411f0380(), lVar3 == 0)) ||
         ((*(int *)(lVar2 + 0x38) < *(int *)(lVar3 + 0x38) ||
          (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
           lVar3 + 0x30)))) {
        lVar2 = 0;
      }
      else {
        lVar2 = *param_2;
      }
      if (lVar5 == lVar2) {
        return uVar6 & 0xffffffff;
      }
      uVar6 = uVar6 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  return 0xffffffff;
}



// FUNCTION 1492e9140 FUN_1492e9140 body=271 status=ok
// SIG undefined FUN_1492e9140(void)

int FUN_1492e9140(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    for (iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 0x10 + (longlong)iVar1 * 0x18)) {
      lVar4 = *param_3;
      if ((lVar4 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar4);
      }
      lVar5 = *(longlong *)(*param_1 + (longlong)iVar1 * 0x18);
      if (((DAT_14c950c29 & 1) == 0) || (lVar5 == 0)) {
        if (lVar5 != 0) goto LAB_1492e91c4;
LAB_1492e91e6:
        lVar5 = 0;
      }
      else {
        FUN_1456cec3c(lVar5);
LAB_1492e91c4:
        lVar3 = FUN_1411f0380();
        if (((lVar3 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar3 + 0x38))) ||
           (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
            lVar3 + 0x30)) goto LAB_1492e91e6;
      }
      if (((lVar4 == 0) || (lVar3 = FUN_1411f0380(), lVar3 == 0)) ||
         ((*(int *)(lVar4 + 0x38) < *(int *)(lVar3 + 0x38) ||
          (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
           lVar3 + 0x30)))) {
        lVar4 = 0;
      }
      if (lVar5 == lVar4) {
        return iVar1;
      }
    }
  }
  return -1;
}



// FUNCTION 1492e9250 FUN_1492e9250 body=36 status=ok
// SIG undefined FUN_1492e9250(void)

undefined8 FUN_1492e9250(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1492e9290 FUN_1492e9290 body=93 status=ok
// SIG undefined FUN_1492e9290(void)

void FUN_1492e9290(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bc1f450;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1492e92ee FUN_1492e92ee body=123 status=ok
// SIG undefined FUN_1492e92ee(void)

void FUN_1492e92ee(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bc1f450;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1492e936a FUN_1492e936a body=21 status=ok
// SIG undefined FUN_1492e936a(void)

undefined8 FUN_1492e936a(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1492e9386 FUN_1492e9386 body=132 status=ok
// SIG undefined FUN_1492e9386(void)

void FUN_1492e9386(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1492e940c FUN_1492e940c body=62 status=ok
// SIG undefined FUN_1492e940c(void)

void FUN_1492e940c(void)

{
  if (DAT_14cc0b9f8 == '\x01') {
    FUN_145ec7255(DAT_14cc0b9e8,DAT_14cc0b9f0);
    if (DAT_14cc0b9e8 != 0) {
      FUN_1400020a8();
    }
    DAT_14cc0b9f8 = '\0';
  }
  return;
}



// FUNCTION 1492e944a FUN_1492e944a body=38 status=ok
// SIG undefined FUN_1492e944a(void)

void FUN_1492e944a(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1490d6c70(param_1);
    param_1 = param_1 + 8;
  }
  return;
}



// FUNCTION 1492e9470 FUN_1492e9470 body=132 status=ok
// SIG undefined FUN_1492e9470(void)

void FUN_1492e9470(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1492e94f5 FUN_1492e94f5 body=335 status=ok
// SIG undefined FUN_1492e94f5(void)

longlong * FUN_1492e94f5(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1492e9e5a();
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x10),4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x10) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  piVar2 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar2 + 1) {
    local_24 = (uint)*(byte *)(param_2 + 0x14);
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    *(bool *)(param_2 + 0x14) = local_24 != 0;
  }
  else {
    *(bool *)(param_2 + 0x14) = *piVar2 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  piVar2 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar2 + 1) {
    local_24 = (uint)*(byte *)(param_2 + 0x15);
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    *(bool *)(param_2 + 0x15) = local_24 != 0;
  }
  else {
    *(bool *)(param_2 + 0x15) = *piVar2 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492e9645 FUN_1492e9645 body=1758 status=ok
// SIG undefined FUN_1492e9645(void)

longlong * FUN_1492e9645(longlong *param_1,ulonglong *param_2)

{
  uint *puVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  int *piVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  longlong lVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1 + 5) & 4) == 0) {
    plVar3 = (longlong *)param_1[1];
    if ((undefined8 *)plVar3[1] < (undefined8 *)*plVar3 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_28,8);
      }
      else {
        thunk_FUN_146821949(param_1,&local_28);
      }
    }
    else {
      local_28 = *(undefined8 *)*plVar3;
      *plVar3 = *plVar3 + 8;
    }
    switch(local_28) {
    case 0:
      puVar6 = (ulonglong *)param_1[1];
      puVar1 = (uint *)*puVar6 + 1;
      if ((uint *)puVar6[1] < puVar1) {
        local_38 = (ulonglong)local_38._4_4_ << 0x20;
        (**(code **)(*param_1 + 0x170))(param_1,&local_38,4);
        uVar10 = (uint)local_38;
        if (1 < (uint)local_38) {
          FUN_14572541c(param_1);
          uVar10 = (uint)local_38;
        }
      }
      else {
        uVar10 = *(uint *)*puVar6;
        *puVar6 = (ulonglong)puVar1;
      }
      (*(code *)(&PTR_caseD_3_14bc1fa90)[(byte)param_2[2]])(param_2);
      *(bool *)param_2 = uVar10 != 0;
      *(byte *)(param_2 + 2) = 0;
      break;
    case 1:
      puVar6 = (ulonglong *)param_1[1];
      puVar2 = (undefined1 *)*puVar6 + 1;
      if ((undefined1 *)puVar6[1] < puVar2) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_38,1);
      }
      else {
        local_38 = CONCAT71(local_38._1_7_,*(undefined1 *)*puVar6);
        *puVar6 = (ulonglong)puVar2;
      }
      (*(code *)(&PTR_caseD_3_14bc1fa90)[(byte)param_2[2]])(param_2);
      *(byte *)param_2 = (byte)local_38;
      *(byte *)(param_2 + 2) = 1;
      break;
    case 2:
      puVar6 = (ulonglong *)param_1[1];
      puVar8 = (undefined4 *)*puVar6 + 1;
      if ((undefined4 *)puVar6[1] < puVar8) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,&local_38,4);
        }
        else {
          thunk_FUN_14572512c(param_1,&local_38);
        }
      }
      else {
        local_38 = CONCAT44(local_38._4_4_,*(undefined4 *)*puVar6);
        *puVar6 = (ulonglong)puVar8;
      }
      (*(code *)(&PTR_caseD_3_14bc1fa90)[(byte)param_2[2]])(param_2);
      *(uint *)param_2 = (uint)local_38;
      *(byte *)(param_2 + 2) = 2;
      break;
    case 3:
      puVar6 = (ulonglong *)param_1[1];
      puVar8 = (undefined4 *)*puVar6 + 1;
      if ((undefined4 *)puVar6[1] < puVar8) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,&local_38,4);
        }
        else {
          thunk_FUN_14572512c(param_1,&local_38);
        }
      }
      else {
        local_38 = CONCAT44(local_38._4_4_,*(undefined4 *)*puVar6);
        *puVar6 = (ulonglong)puVar8;
      }
      (*(code *)(&PTR_caseD_3_14bc1fa90)[(byte)param_2[2]])(param_2);
      *(uint *)param_2 = (uint)local_38;
      *(byte *)(param_2 + 2) = 3;
      break;
    case 4:
      FUN_1408383eb(param_1,&local_38);
      (*(code *)(&PTR_caseD_3_14bc1fa90)[(byte)param_2[2]])(param_2);
      *param_2 = local_38;
      *(byte *)(param_2 + 2) = 4;
      break;
    case 5:
      puVar5 = (ulonglong *)param_1[1];
      puVar6 = (ulonglong *)*puVar5 + 1;
      if ((ulonglong *)puVar5[1] < puVar6) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,&local_38,8);
        }
        else {
          thunk_FUN_146821949(param_1,&local_38);
        }
      }
      else {
        local_38 = *(ulonglong *)*puVar5;
        *puVar5 = (ulonglong)puVar6;
      }
      (*(code *)(&PTR_caseD_3_14bc1fa90)[(byte)param_2[2]])(param_2);
      *param_2 = local_38;
      *(byte *)(param_2 + 2) = 5;
      break;
    case 6:
      puVar6 = (ulonglong *)param_1[1];
      puVar8 = (undefined4 *)*puVar6 + 1;
      if ((undefined4 *)puVar6[1] < puVar8) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,&local_38,4);
        }
        else {
          thunk_FUN_14572512c(param_1,&local_38);
        }
      }
      else {
        local_38 = CONCAT44(local_38._4_4_,*(undefined4 *)*puVar6);
        *puVar6 = (ulonglong)puVar8;
      }
      (*(code *)(&PTR_caseD_3_14bc1fa90)[(byte)param_2[2]])(param_2);
      *(uint *)param_2 = (uint)local_38;
      *(byte *)(param_2 + 2) = 6;
      break;
    case 7:
      puVar5 = (ulonglong *)param_1[1];
      puVar6 = (ulonglong *)*puVar5 + 1;
      if ((ulonglong *)puVar5[1] < puVar6) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,&local_38,8);
        }
        else {
          thunk_FUN_146821949(param_1,&local_38);
        }
      }
      else {
        local_38 = *(ulonglong *)*puVar5;
        *puVar5 = (ulonglong)puVar6;
      }
      (*(code *)(&PTR_caseD_3_14bc1fa90)[(byte)param_2[2]])(param_2);
      *param_2 = local_38;
      *(byte *)(param_2 + 2) = 7;
      break;
    case 8:
      local_38 = 0;
      uStack_30 = 0;
      FUN_14021219d(param_1,&local_38);
      FUN_1492ea466(param_2,&local_38);
      if (local_38 != 0) {
        FUN_1400020a8();
      }
      break;
    default:
      (*(code *)(&PTR_caseD_3_14bc1fa90)[(byte)param_2[2]])(param_2);
      *(byte *)param_2 = 0;
      *(byte *)(param_2 + 2) = 0;
    }
    goto switchD_1492e9784_default;
  }
  local_38 = (ulonglong)(byte)param_2[2];
  plVar3 = (longlong *)param_1[1];
  if ((ulonglong *)plVar3[1] < (ulonglong *)*plVar3 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_38,8);
    }
    else {
      thunk_FUN_146821949(param_1,&local_38);
    }
  }
  else {
    local_38 = *(ulonglong *)*plVar3;
    *plVar3 = *plVar3 + 8;
  }
  switch(local_38) {
  case 0:
    if ((param_2 == (ulonglong *)0x0) || ((byte)param_2[2] != 0)) goto switchD_1492e9784_default;
    piVar4 = *(int **)param_1[1];
    if ((int *)((undefined8 *)param_1[1])[1] < piVar4 + 1) {
      local_28 = CONCAT44(local_28._4_4_,(uint)(byte)*param_2);
      (**(code **)(*param_1 + 0x170))(param_1,&local_28,4);
      if (1 < (uint)local_28) {
        FUN_14572541c(param_1);
      }
      *(bool *)param_2 = (uint)local_28 != 0;
      goto switchD_1492e9784_default;
    }
    *(bool *)param_2 = *piVar4 != 0;
    goto LAB_1492e9af1;
  case 1:
    if ((param_2 == (ulonglong *)0x0) || ((byte)param_2[2] != 1)) goto switchD_1492e9784_default;
    pbVar7 = *(byte **)param_1[1];
    if (pbVar7 + 1 <= (byte *)((undefined8 *)param_1[1])[1]) {
      *(byte *)param_2 = *pbVar7;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
      goto switchD_1492e9784_default;
    }
    lVar9 = *param_1;
    uVar11 = 1;
    goto LAB_1492e9ab9;
  case 2:
    if ((param_2 == (ulonglong *)0x0) || ((byte)param_2[2] != 2)) goto switchD_1492e9784_default;
    break;
  case 3:
    if ((param_2 == (ulonglong *)0x0) || ((byte)param_2[2] != 3)) goto switchD_1492e9784_default;
    break;
  case 4:
    if ((param_2 != (ulonglong *)0x0) && ((byte)param_2[2] == 4)) {
      FUN_1408383eb(param_1,param_2);
    }
    goto switchD_1492e9784_default;
  case 5:
    if ((param_2 == (ulonglong *)0x0) || ((byte)param_2[2] != 5)) goto switchD_1492e9784_default;
    goto LAB_1492e9a58;
  case 6:
    if ((param_2 == (ulonglong *)0x0) || ((byte)param_2[2] != 6)) goto switchD_1492e9784_default;
    break;
  case 7:
    if ((param_2 == (ulonglong *)0x0) || ((byte)param_2[2] != 7)) goto switchD_1492e9784_default;
LAB_1492e9a58:
    puVar6 = *(ulonglong **)param_1[1];
    if (puVar6 + 1 <= (ulonglong *)((longlong *)param_1[1])[1]) {
      *param_2 = *puVar6;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
      goto switchD_1492e9784_default;
    }
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) != 0) {
      thunk_FUN_146821949(param_1,param_2);
      goto switchD_1492e9784_default;
    }
    lVar9 = *param_1;
    uVar11 = 8;
    goto LAB_1492e9ab9;
  case 8:
    if ((param_2 != (ulonglong *)0x0) && ((byte)param_2[2] == 8)) {
      FUN_14021219d(param_1,param_2);
    }
  default:
    goto switchD_1492e9784_default;
  }
  puVar8 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar8 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      lVar9 = *param_1;
      uVar11 = 4;
LAB_1492e9ab9:
      (**(code **)(lVar9 + 0x170))(param_1,param_2,uVar11);
    }
    else {
      thunk_FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *(undefined4 *)param_2 = *puVar8;
LAB_1492e9af1:
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
switchD_1492e9784_default:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1492e9d24 FUN_1492e9d24 body=36 status=ok
// SIG undefined FUN_1492e9d24(void)

undefined8 FUN_1492e9d24(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1492e9d48 FUN_1492e9d48 body=3 status=ok
// SIG undefined FUN_1492e9d48(void)

undefined8 FUN_1492e9d48(void)

{
  return 0;
}



// FUNCTION 1492e9d4c FUN_1492e9d4c body=5 status=ok
// SIG undefined FUN_1492e9d4c(void)

undefined8 FUN_1492e9d4c(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// FUNCTION 1492e9d52 FUN_1492e9d52 body=5 status=ok
// SIG undefined FUN_1492e9d52(void)

undefined8 FUN_1492e9d52(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// FUNCTION 1492e9d58 FUN_1492e9d58 body=8 status=ok
// SIG undefined FUN_1492e9d58(void)

bool FUN_1492e9d58(longlong param_1,longlong param_2)

{
  return *(longlong *)(param_1 + 0x18) == param_2;
}



// FUNCTION 1492e9d60 FUN_1492e9d60 body=3 status=ok
// SIG undefined FUN_1492e9d60(void)

undefined1 FUN_1492e9d60(void)

{
  return 1;
}



// FUNCTION 1492e9d64 FUN_1492e9d64 body=93 status=ok
// SIG undefined FUN_1492e9d64(void)

void FUN_1492e9d64(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FUsdUtilitiesModule>,class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1492e9dc2 FUN_1492e9dc2 body=126 status=ok
// SIG undefined FUN_1492e9dc2(void)

void FUN_1492e9dc2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 =
       TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FUsdUtilitiesModule>,class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001492e9e31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1492e9e40 FUN_1492e9e40 body=21 status=ok
// SIG undefined FUN_1492e9e40(void)

undefined8 FUN_1492e9e40(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1492e9e56 FUN_1492e9e56 body=1 status=ok
// SIG undefined FUN_1492e9e56(void)

void FUN_1492e9e56(void)

{
  return;
}



// FUNCTION 1492e9e58 FUN_1492e9e58 body=1 status=ok
// SIG undefined FUN_1492e9e58(void)

void FUN_1492e9e58(void)

{
  return;
}



// FUNCTION 1492e9e5a FUN_1492e9e5a body=407 status=ok
// SIG undefined FUN_1492e9e5a(void)

longlong * FUN_1492e9e5a(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulonglong *puVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_68 [36];
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  local_44 = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_44 = *(uint *)(param_2 + 1);
  }
  puVar4 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_44,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_44);
    }
  }
  else {
    local_44 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar1;
  }
  if (local_44 == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_1492ea02b(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_1492ea062(param_2,0);
      }
    }
  }
  else if ((((int)local_44 < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x100000 < local_44 && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_44;
    lVar5 = 0;
    lVar7 = 0;
    do {
      FUN_1492ea0f4(param_1,*param_2 + lVar5);
      lVar7 = lVar7 + 1;
      lVar5 = lVar5 + 0x10;
    } while (lVar7 < (int)param_2[1]);
  }
  else {
    FUN_1492e9ff2(param_2);
    if (0 < (int)local_44) {
      iVar6 = 0;
      do {
        iVar3 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
          FUN_1492ea3e0(param_2,iVar3);
        }
        lVar5 = *param_2;
        puVar2 = (undefined8 *)(lVar5 + (longlong)iVar3 * 0x10);
        *puVar2 = 0;
        puVar2[1] = 0;
        FUN_1492ea0f4(param_1,lVar5 + (longlong)iVar3 * 0x10);
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)local_44);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1492e9ff2 FUN_1492e9ff2 body=57 status=ok
// SIG undefined FUN_1492e9ff2(void)

void FUN_1492e9ff2(undefined8 *param_1,int param_2)

{
  FUN_1492ea02b(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_1492ea062(param_1,param_2);
  return;
}



// FUNCTION 1492ea02b FUN_1492ea02b body=54 status=ok
// SIG undefined FUN_1492ea02b(void)

void FUN_1492ea02b(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1492ea0c1(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 1492ea062 FUN_1492ea062 body=95 status=ok
// SIG undefined FUN_1492ea062(void)

void FUN_1492ea062(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 1492ea0c1 FUN_1492ea0c1 body=49 status=ok
// SIG undefined FUN_1492ea0c1(void)

void FUN_1492ea0c1(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    (*(code *)(&PTR_caseD_3_14bc1fa90)[*(byte *)(param_1 + 0x10)])(param_1);
    param_1 = param_1 + 0x18;
  }
  return;
}



// FUNCTION 1492ea0f4 FUN_1492ea0f4 body=357 status=ok
// SIG undefined FUN_1492ea0f4(void)

longlong * FUN_1492ea0f4(longlong *param_1,longlong *param_2)

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
            (param_1,(longlong)(int)param_2[1] * 0x18,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x18);
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
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_1492ea0c1(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_1492ea2d4(param_2,0);
      }
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0xaaaaa < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_1492e9645(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x18;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    FUN_1492ea25a(param_2);
    if (0 < (int)local_2c) {
      iVar4 = 0;
      do {
        uVar3 = FUN_1492ea294(param_2);
        FUN_1492e9645(param_1,uVar3);
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



// FUNCTION 1492ea25a FUN_1492ea25a body=57 status=ok
// SIG undefined FUN_1492ea25a(void)

void FUN_1492ea25a(undefined8 *param_1,int param_2)

{
  FUN_1492ea0c1(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_1492ea2d4(param_1,param_2);
  return;
}



// FUNCTION 1492ea294 FUN_1492ea294 body=63 status=ok
// SIG undefined FUN_1492ea294(void)

longlong FUN_1492ea294(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1492ea34c(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x18 + *param_1;
  FUN_1492ea344(lVar2);
  return lVar2;
}



// FUNCTION 1492ea2d4 FUN_1492ea2d4 body=112 status=ok
// SIG undefined FUN_1492ea2d4(void)

void FUN_1492ea2d4(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x18,8);
  }
  return;
}



// FUNCTION 1492ea344 FUN_1492ea344 body=8 status=ok
// SIG undefined FUN_1492ea344(void)

void FUN_1492ea344(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x10] = 0;
  return;
}



// FUNCTION 1492ea34c FUN_1492ea34c body=147 status=ok
// SIG undefined FUN_1492ea34c(void)

void FUN_1492ea34c(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1492ea3e0 FUN_1492ea3e0 body=132 status=ok
// SIG undefined FUN_1492ea3e0(void)

void FUN_1492ea3e0(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1492ea466 FUN_1492ea466 body=100 status=ok
// SIG undefined FUN_1492ea466(void)

void FUN_1492ea466(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  (*(code *)(&PTR_caseD_3_14bc1fa90)[*(byte *)(param_1 + 2)])();
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
  *(undefined1 *)(param_1 + 2) = 8;
  return;
}



// FUNCTION 1492ea4ca FUN_1492ea4ca body=42 status=ok
// SIG undefined FUN_1492ea4ca(void)

void FUN_1492ea4ca(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2a0))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1492ea4f8 FUN_1492ea4f8 body=208 status=ok
// SIG undefined FUN_1492ea4f8(void)

void FUN_1492ea4f8(longlong param_1,longlong param_2,void **param_3)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_1 + 0x30);
  lVar1 = (longlong)local_30;
  _Src = *(void **)(param_1 + 0x28);
  if (lVar1 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar1 * 2);
  }
  if (&local_38 == param_3) {
    if (local_38 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != (void *)0x0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    *(int *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492ea5d0 FUN_1492ea5d0 body=276 status=ok
// SIG undefined FUN_1492ea5d0(void)

void FUN_1492ea5d0(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1401aea18(&local_30,local_48);
  if ((longlong *)(param_1 + 0x28) == &local_30) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x28) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x28) = local_30;
    local_30 = 0;
    *(undefined4 *)(param_1 + 0x30) = local_28;
    *(undefined4 *)(param_1 + 0x34) = local_24;
  }
  if (*(char *)(param_1 + 0x49) == '\x01') {
    *(undefined1 *)(param_1 + 0x49) = 0;
  }
  *param_3 = 1;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


