// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14912f33c FUN_14912f33c body=225 status=ok
// SIG undefined FUN_14912f33c(void)

void FUN_14912f33c(undefined8 param_1,undefined8 *param_2)

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
  *param_2 = &PTR_FUN_14bb04980;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  param_2[0x26] = 0;
  param_2[0x27] = 0;
  param_2[0x28] = 0;
  param_2[0x29] = 0;
  *(undefined1 *)(param_2 + 0x2a) = 0;
  param_2[0x2b] = 0x3f800000;
  param_2[0x2c] = 0x3f80000000000000;
  *(undefined4 *)(param_2 + 0x2d) = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x2e;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_2 + 0x3a) = 1;
  return;
}



// FUNCTION 14912f41e FUN_14912f41e body=225 status=ok
// SIG undefined FUN_14912f41e(void)

void FUN_14912f41e(undefined8 param_1,undefined8 *param_2)

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
  *param_2 = &PTR_FUN_14bb04980;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  param_2[0x26] = 0;
  param_2[0x27] = 0;
  param_2[0x28] = 0;
  param_2[0x29] = 0;
  *(undefined1 *)(param_2 + 0x2a) = 0;
  param_2[0x2b] = 0x3f800000;
  param_2[0x2c] = 0x3f80000000000000;
  *(undefined4 *)(param_2 + 0x2d) = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x2e;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_2 + 0x3a) = 1;
  return;
}



// FUNCTION 14912f524 FUN_14912f524 body=229 status=ok
// SIG undefined FUN_14912f524(void)

undefined8 FUN_14912f524(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  void *_Src;
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
  longlong lVar16;
  
  if (param_4 != 0) {
    lVar16 = 0;
    do {
      lVar1 = param_2 + lVar16;
      lVar2 = param_3 + lVar16;
      lVar3 = param_3 + lVar16;
      uVar5 = *(undefined4 *)(lVar3 + 0x18);
      uVar6 = *(undefined4 *)(lVar3 + 0x1c);
      uVar7 = *(undefined4 *)(lVar3 + 0x20);
      uVar8 = *(undefined4 *)(lVar3 + 0x24);
      uVar9 = *(undefined4 *)(lVar3 + 0x28);
      uVar10 = *(undefined4 *)(lVar3 + 0x2c);
      uVar11 = *(undefined4 *)(lVar3 + 0x30);
      uVar12 = *(undefined4 *)(lVar3 + 0x34);
      uVar13 = *(undefined4 *)(lVar3 + 0x3c);
      uVar14 = *(undefined4 *)(lVar3 + 0x40);
      uVar15 = *(undefined4 *)(lVar3 + 0x44);
      lVar4 = param_2 + 0x48 + lVar16;
      *(undefined4 *)(lVar4 + -0x10) = *(undefined4 *)(lVar3 + 0x38);
      *(undefined4 *)(lVar4 + -0xc) = uVar13;
      *(undefined4 *)(lVar4 + -8) = uVar14;
      *(undefined4 *)(lVar4 + -4) = uVar15;
      *(undefined4 *)(lVar4 + -0x20) = uVar9;
      *(undefined4 *)(lVar4 + -0x1c) = uVar10;
      *(undefined4 *)(lVar4 + -0x18) = uVar11;
      *(undefined4 *)(lVar4 + -0x14) = uVar12;
      *(undefined4 *)(lVar4 + -0x30) = uVar5;
      *(undefined4 *)(lVar4 + -0x2c) = uVar6;
      *(undefined4 *)(lVar4 + -0x28) = uVar7;
      *(undefined4 *)(lVar4 + -0x24) = uVar8;
      FUN_14591e93c();
      _Src = (void *)(param_3 + 0x60 + lVar16);
      memcpy((void *)(param_2 + lVar16 + 0x60),_Src,0x98);
      FUN_1490e1992(lVar1 + 0xf8,lVar2 + 0xf8);
      FUN_145c50a48(lVar1 + 0x108,lVar2 + 0x108);
      *(undefined8 *)(param_2 + lVar16 + 0x118) = *(undefined8 *)((longlong)_Src + 0xb8);
      memcpy((void *)(lVar1 + 0x120),(void *)(lVar2 + 0x120),0xb1);
      lVar16 = lVar16 + 0x1e0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14912f632 FUN_14912f632 body=59 status=ok
// SIG undefined FUN_14912f632(void)

undefined8 FUN_14912f632(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14912f67e FUN_14912f67e body=49 status=ok
// SIG undefined FUN_14912f67e(void)

void FUN_14912f67e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x3c) == '\x01') {
    *param_2 = &PTR_FUN_14bad5830;
    FUN_140f8ceac(param_2 + 2);
    *(undefined1 *)(param_2 + 0x3c) = 0;
  }
  return;
}



// FUNCTION 14912f6fe FUN_14912f6fe body=52 status=ok
// SIG undefined FUN_14912f6fe(void)

undefined8 * FUN_14912f6fe(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bad5830;
  FUN_140f8ceac(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14912f734 FUN_14912f734 body=52 status=ok
// SIG undefined FUN_14912f734(void)

undefined8 * FUN_14912f734(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bad5830;
  FUN_140f8ceac(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14912f768 FUN_14912f768 body=52 status=ok
// SIG undefined FUN_14912f768(void)

undefined8 * FUN_14912f768(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bad5830;
  FUN_140f8ceac(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14912f7d0 FUN_14912f7d0 body=229 status=ok
// SIG undefined FUN_14912f7d0(void)

undefined8 FUN_14912f7d0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  void *_Src;
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
  longlong lVar16;
  
  if (param_4 != 0) {
    lVar16 = 0;
    do {
      lVar1 = param_2 + lVar16;
      lVar2 = param_3 + lVar16;
      lVar3 = param_3 + lVar16;
      uVar5 = *(undefined4 *)(lVar3 + 0x18);
      uVar6 = *(undefined4 *)(lVar3 + 0x1c);
      uVar7 = *(undefined4 *)(lVar3 + 0x20);
      uVar8 = *(undefined4 *)(lVar3 + 0x24);
      uVar9 = *(undefined4 *)(lVar3 + 0x28);
      uVar10 = *(undefined4 *)(lVar3 + 0x2c);
      uVar11 = *(undefined4 *)(lVar3 + 0x30);
      uVar12 = *(undefined4 *)(lVar3 + 0x34);
      uVar13 = *(undefined4 *)(lVar3 + 0x3c);
      uVar14 = *(undefined4 *)(lVar3 + 0x40);
      uVar15 = *(undefined4 *)(lVar3 + 0x44);
      lVar4 = param_2 + 0x48 + lVar16;
      *(undefined4 *)(lVar4 + -0x10) = *(undefined4 *)(lVar3 + 0x38);
      *(undefined4 *)(lVar4 + -0xc) = uVar13;
      *(undefined4 *)(lVar4 + -8) = uVar14;
      *(undefined4 *)(lVar4 + -4) = uVar15;
      *(undefined4 *)(lVar4 + -0x20) = uVar9;
      *(undefined4 *)(lVar4 + -0x1c) = uVar10;
      *(undefined4 *)(lVar4 + -0x18) = uVar11;
      *(undefined4 *)(lVar4 + -0x14) = uVar12;
      *(undefined4 *)(lVar4 + -0x30) = uVar5;
      *(undefined4 *)(lVar4 + -0x2c) = uVar6;
      *(undefined4 *)(lVar4 + -0x28) = uVar7;
      *(undefined4 *)(lVar4 + -0x24) = uVar8;
      FUN_14591e93c();
      _Src = (void *)(param_3 + 0x60 + lVar16);
      memcpy((void *)(param_2 + lVar16 + 0x60),_Src,0x98);
      FUN_1490e1992(lVar1 + 0xf8,lVar2 + 0xf8);
      FUN_145c50a48(lVar1 + 0x108,lVar2 + 0x108);
      *(undefined8 *)(param_2 + lVar16 + 0x118) = *(undefined8 *)((longlong)_Src + 0xb8);
      memcpy((void *)(lVar1 + 0x120),(void *)(lVar2 + 0x120),0xe1);
      lVar16 = lVar16 + 0x210;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14912f8de FUN_14912f8de body=59 status=ok
// SIG undefined FUN_14912f8de(void)

undefined8 FUN_14912f8de(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14912f92a FUN_14912f92a body=49 status=ok
// SIG undefined FUN_14912f92a(void)

void FUN_14912f92a(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x42) == '\x01') {
    *param_2 = &PTR_FUN_14bad5830;
    FUN_140f8ceac(param_2 + 2);
    *(undefined1 *)(param_2 + 0x42) = 0;
  }
  return;
}



// FUNCTION 14912f9aa FUN_14912f9aa body=238 status=ok
// SIG undefined FUN_14912f9aa(void)

void FUN_14912f9aa(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
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
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x10;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *param_1 = &PTR_FUN_14bb04ce0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x34;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x24;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x18c) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_1 + 0x194) = 0x4120000000000000;
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}



// FUNCTION 14912fa98 FUN_14912fa98 body=52 status=ok
// SIG undefined FUN_14912fa98(void)

undefined8 * FUN_14912fa98(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bad5830;
  FUN_140f8ceac(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14912fb02 FUN_14912fb02 body=54 status=ok
// SIG undefined FUN_14912fb02(void)

undefined1 FUN_14912fb02(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144756208(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 14912fb60 FUN_14912fb60 body=59 status=ok
// SIG undefined FUN_14912fb60(void)

undefined8 FUN_14912fb60(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14912fba6 FUN_14912fba6 body=37 status=ok
// SIG undefined FUN_14912fba6(void)

void FUN_14912fba6(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 14912fc50 FUN_14912fc50 body=63 status=ok
// SIG undefined FUN_14912fc50(void)

undefined1 FUN_14912fc50(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14912fed8(param_2,param_3);
    param_3 = param_3 + 0x1d0;
    param_2 = param_2 + 0x1d0;
  }
  return 1;
}



// FUNCTION 14912fcb8 FUN_14912fcb8 body=59 status=ok
// SIG undefined FUN_14912fcb8(void)

undefined8 FUN_14912fcb8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14912fd04 FUN_14912fd04 body=40 status=ok
// SIG undefined FUN_14912fd04(void)

void FUN_14912fd04(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1d0) == '\x01') {
    FUN_14912fe88(param_2);
    *(undefined1 *)(param_2 + 0x1d0) = 0;
  }
  return;
}



// FUNCTION 14912fd7a FUN_14912fd7a body=231 status=ok
// SIG undefined FUN_14912fd7a(void)

void FUN_14912fd7a(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
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
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x10;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *param_1 = &PTR_FUN_14bb05020;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x2c;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_1 + 0x28) = 1;
  *(undefined1 **)((longlong)param_1 + 0x144) = &DAT_3f8000003f800000;
  *(undefined1 **)((longlong)param_1 + 0x14c) = &DAT_3f8000003f800000;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0x4120000000000000;
  *(undefined1 *)(param_1 + 0x38) = 1;
  return;
}



// FUNCTION 14912fe62 FUN_14912fe62 body=38 status=ok
// SIG undefined FUN_14912fe62(void)

undefined8 FUN_14912fe62(undefined8 param_1,int param_2)

{
  FUN_14912fe88();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14912fe88 FUN_14912fe88 body=79 status=ok
// SIG undefined FUN_14912fe88(void)

void FUN_14912fe88(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bb05020;
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



// FUNCTION 14912fed8 FUN_14912fed8 body=186 status=ok
// SIG undefined FUN_14912fed8(void)

longlong FUN_14912fed8(longlong param_1,longlong param_2)

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
  FUN_144756208(param_1 + 0x120,param_2 + 0x120);
  FUN_14054c6c4(param_1 + 0x130,param_2 + 0x130);
  memcpy((void *)(param_1 + 0x140),(void *)(param_2 + 0x140),0x81);
  return param_1;
}



// FUNCTION 1491300b0 FUN_1491300b0 body=59 status=ok
// SIG undefined FUN_1491300b0(void)

undefined8 FUN_1491300b0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913025c FUN_14913025c body=59 status=ok
// SIG undefined FUN_14913025c(void)

undefined8 FUN_14913025c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149130400 FUN_149130400 body=59 status=ok
// SIG undefined FUN_149130400(void)

undefined8 FUN_149130400(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491304a0 FUN_1491304a0 body=29 status=ok
// SIG undefined FUN_1491304a0(void)

undefined8 FUN_1491304a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491305a8 FUN_1491305a8 body=59 status=ok
// SIG undefined FUN_1491305a8(void)

undefined8 FUN_1491305a8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913064a FUN_14913064a body=100 status=ok
// SIG undefined FUN_14913064a(void)

void FUN_14913064a(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bb05870;
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
  *(undefined1 *)(param_2 + 0xe) = 1;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0x4120000000000000;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0;
  return;
}



// FUNCTION 1491306ae FUN_1491306ae body=100 status=ok
// SIG undefined FUN_1491306ae(void)

void FUN_1491306ae(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bb05870;
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
  *(undefined1 *)(param_2 + 0xe) = 1;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0x4120000000000000;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0;
  return;
}



// FUNCTION 149130736 FUN_149130736 body=53 status=ok
// SIG undefined FUN_149130736(void)

undefined8 FUN_149130736(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0x10;
    do {
      *(undefined4 *)(param_2 + 0x70 + lVar1) = *(undefined4 *)(param_3 + 0x70 + lVar1);
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 0xe; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x90;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149130794 FUN_149130794 body=59 status=ok
// SIG undefined FUN_149130794(void)

undefined8 FUN_149130794(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149130840 FUN_149130840 body=29 status=ok
// SIG undefined FUN_149130840(void)

undefined8 FUN_149130840(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913085e FUN_14913085e body=92 status=ok
// SIG undefined FUN_14913085e(void)

void FUN_14913085e(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bb05b50;
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
  *(undefined1 *)(param_2 + 0xe) = 1;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0x4120000000000000;
  return;
}



// FUNCTION 1491308ba FUN_1491308ba body=92 status=ok
// SIG undefined FUN_1491308ba(void)

void FUN_1491308ba(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bb05b50;
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
  *(undefined1 *)(param_2 + 0xe) = 1;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0x4120000000000000;
  return;
}



// FUNCTION 14913093a FUN_14913093a body=51 status=ok
// SIG undefined FUN_14913093a(void)

undefined8 FUN_14913093a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0x10;
    do {
      *(undefined4 *)(param_2 + 0x68 + lVar1) = *(undefined4 *)(param_3 + 0x68 + lVar1);
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 0xd; lVar2 != 0; lVar2 = lVar2 + -1) {
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



// FUNCTION 149130996 FUN_149130996 body=59 status=ok
// SIG undefined FUN_149130996(void)

undefined8 FUN_149130996(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149130a44 FUN_149130a44 body=29 status=ok
// SIG undefined FUN_149130a44(void)

undefined8 FUN_149130a44(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149130a62 FUN_149130a62 body=29 status=ok
// SIG undefined FUN_149130a62(void)

undefined8 FUN_149130a62(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149130a80 FUN_149130a80 body=29 status=ok
// SIG undefined FUN_149130a80(void)

undefined8 FUN_149130a80(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149130ad2 FUN_149130ad2 body=63 status=ok
// SIG undefined FUN_149130ad2(void)

undefined1 FUN_149130ad2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149130e8c(param_2,param_3);
    param_3 = param_3 + 0x250;
    param_2 = param_2 + 0x250;
  }
  return 1;
}



// FUNCTION 149130b3a FUN_149130b3a body=59 status=ok
// SIG undefined FUN_149130b3a(void)

undefined8 FUN_149130b3a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149130b86 FUN_149130b86 body=71 status=ok
// SIG undefined FUN_149130b86(void)

void FUN_149130b86(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x4a) == '\x01') {
    *param_2 = &PTR_FUN_14bb05d30;
    FUN_140f8ceac(param_2 + 0x28);
    *param_2 = &PTR_FUN_14bad5830;
    FUN_140f8ceac(param_2 + 2);
    *(undefined1 *)(param_2 + 0x4a) = 0;
  }
  return;
}



// FUNCTION 149130c1c FUN_149130c1c body=293 status=ok
// SIG undefined FUN_149130c1c(void)

void FUN_149130c1c(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
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
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x10;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *param_1 = &PTR_FUN_14bb05d30;
  param_1[0x28] = &PTR_FUN_14bad5c20;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined2 *)(param_1 + 0x2b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 0;
  param_1[0x2e] = 0x3f91111111111111;
  param_1[0x2f] = 0x800;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x36;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x24] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x25] = 1;
  *(undefined4 *)(param_1 + 0x26) = 0;
  return;
}



// FUNCTION 149130d42 FUN_149130d42 body=74 status=ok
// SIG undefined FUN_149130d42(void)

undefined8 * FUN_149130d42(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb05d30;
  FUN_140f8ceac(param_1 + 0x28);
  *param_1 = &PTR_FUN_14bad5830;
  FUN_140f8ceac(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149130da4 FUN_149130da4 body=230 status=ok
// SIG undefined FUN_149130da4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_149130da4(void)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc041d8) {
    FUN_144b3d300(&DAT_14cc041d8);
    if (DAT_14cc041d8 == -1) {
      FUN_1446f57c6(&DAT_14cc00d40,&local_20);
      FUN_1446f57c6(&DAT_14cc00d70,&uStack_18);
      DAT_14cc041c8 = (undefined8 *)0x0;
      _DAT_14cc041d0 = 2;
      FUN_1401b309e(&DAT_14cc041c8,2,0);
      puVar1 = DAT_14cc041c8;
      *DAT_14cc041c8 = local_20;
      puVar1[1] = uStack_18;
      atexit((_func_5014 *)&LAB_14447be5c);
      _Init_thread_footer(&DAT_14cc041d8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return &DAT_14cc041c8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149130e8c FUN_149130e8c body=282 status=ok
// SIG undefined FUN_149130e8c(void)

longlong FUN_149130e8c(longlong param_1,longlong param_2)

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
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x130);
  uVar12 = *(undefined8 *)(param_2 + 0x128);
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_2 + 0x120);
  *(undefined8 *)(param_1 + 0x128) = uVar12;
  uVar1 = *(undefined4 *)(param_2 + 0x14c);
  uVar2 = *(undefined4 *)(param_2 + 0x150);
  uVar3 = *(undefined4 *)(param_2 + 0x154);
  uVar4 = *(undefined4 *)(param_2 + 0x158);
  uVar5 = *(undefined4 *)(param_2 + 0x15c);
  uVar6 = *(undefined4 *)(param_2 + 0x160);
  uVar7 = *(undefined4 *)(param_2 + 0x164);
  uVar8 = *(undefined4 *)(param_2 + 0x168);
  uVar9 = *(undefined4 *)(param_2 + 0x16c);
  uVar10 = *(undefined4 *)(param_2 + 0x170);
  uVar11 = *(undefined4 *)(param_2 + 0x174);
  *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_2 + 0x148);
  *(undefined4 *)(param_1 + 0x14c) = uVar1;
  *(undefined4 *)(param_1 + 0x150) = uVar2;
  *(undefined4 *)(param_1 + 0x154) = uVar3;
  *(undefined4 *)(param_1 + 0x158) = uVar4;
  *(undefined4 *)(param_1 + 0x15c) = uVar5;
  *(undefined4 *)(param_1 + 0x160) = uVar6;
  *(undefined4 *)(param_1 + 0x164) = uVar7;
  *(undefined4 *)(param_1 + 0x168) = uVar8;
  *(undefined4 *)(param_1 + 0x16c) = uVar9;
  *(undefined4 *)(param_1 + 0x170) = uVar10;
  *(undefined4 *)(param_1 + 0x174) = uVar11;
  FUN_14591e93c(param_1 + 0x178,param_2 + 0x178);
  memcpy((void *)(param_1 + 400),(void *)(param_2 + 400),0x98);
  FUN_1490e1992(param_1 + 0x228,param_2 + 0x228);
  FUN_145c50a48(param_1 + 0x238,param_2 + 0x238);
  *(undefined8 *)(param_1 + 0x248) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 149130fdc FUN_149130fdc body=220 status=ok
// SIG undefined FUN_149130fdc(void)

undefined8 FUN_149130fdc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  void *_Src;
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
      lVar1 = param_3 + lVar14;
      uVar3 = *(undefined4 *)(lVar1 + 0x18);
      uVar4 = *(undefined4 *)(lVar1 + 0x1c);
      uVar5 = *(undefined4 *)(lVar1 + 0x20);
      uVar6 = *(undefined4 *)(lVar1 + 0x24);
      uVar7 = *(undefined4 *)(lVar1 + 0x28);
      uVar8 = *(undefined4 *)(lVar1 + 0x2c);
      uVar9 = *(undefined4 *)(lVar1 + 0x30);
      uVar10 = *(undefined4 *)(lVar1 + 0x34);
      uVar11 = *(undefined4 *)(lVar1 + 0x3c);
      uVar12 = *(undefined4 *)(lVar1 + 0x40);
      uVar13 = *(undefined4 *)(lVar1 + 0x44);
      lVar2 = param_2 + 0x48 + lVar14;
      *(undefined4 *)(lVar2 + -0x10) = *(undefined4 *)(lVar1 + 0x38);
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
      FUN_14591e93c();
      lVar1 = param_2 + lVar14;
      _Src = (void *)(param_3 + 0x60 + lVar14);
      memcpy((void *)(lVar1 + 0x60),_Src,0x98);
      FUN_1490e1992(param_2 + lVar14 + 0xf8,param_3 + lVar14 + 0xf8);
      FUN_145c50a48(param_2 + lVar14 + 0x108,param_3 + lVar14 + 0x108);
      *(undefined8 *)(lVar1 + 0x118) = *(undefined8 *)((longlong)_Src + 0xb8);
      *(undefined8 *)(lVar1 + 0x120) = *(undefined8 *)((longlong)_Src + 0xc0);
      lVar14 = lVar14 + 0x130;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1491310e0 FUN_1491310e0 body=59 status=ok
// SIG undefined FUN_1491310e0(void)

undefined8 FUN_1491310e0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913112c FUN_14913112c body=49 status=ok
// SIG undefined FUN_14913112c(void)

void FUN_14913112c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x26) == '\x01') {
    *param_2 = &PTR_FUN_14bb05f10;
    FUN_140f8ceac(param_2 + 2);
    *(undefined1 *)(param_2 + 0x26) = 0;
  }
  return;
}



// FUNCTION 1491311ac FUN_1491311ac body=232 status=ok
// SIG undefined FUN_1491311ac(void)

undefined8 * FUN_1491311ac(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_14bb05f10;
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
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x10;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x24] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  FUN_1446f470e(&local_28,L"My Event",1);
  param_1[0x24] = local_28;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149131296 FUN_149131296 body=52 status=ok
// SIG undefined FUN_149131296(void)

undefined8 * FUN_149131296(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb05f10;
  FUN_140f8ceac(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149131344 FUN_149131344 body=59 status=ok
// SIG undefined FUN_149131344(void)

undefined8 FUN_149131344(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491313e4 FUN_1491313e4 body=29 status=ok
// SIG undefined FUN_1491313e4(void)

undefined8 FUN_1491313e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913148c FUN_14913148c body=59 status=ok
// SIG undefined FUN_14913148c(void)

undefined8 FUN_14913148c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913152c FUN_14913152c body=29 status=ok
// SIG undefined FUN_14913152c(void)

undefined8 FUN_14913152c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491315da FUN_1491315da body=59 status=ok
// SIG undefined FUN_1491315da(void)

undefined8 FUN_1491315da(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913167a FUN_14913167a body=29 status=ok
// SIG undefined FUN_14913167a(void)

undefined8 FUN_14913167a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149131738 FUN_149131738 body=59 status=ok
// SIG undefined FUN_149131738(void)

undefined8 FUN_149131738(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491317d8 FUN_1491317d8 body=29 status=ok
// SIG undefined FUN_1491317d8(void)

undefined8 FUN_1491317d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149131896 FUN_149131896 body=59 status=ok
// SIG undefined FUN_149131896(void)

undefined8 FUN_149131896(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149131936 FUN_149131936 body=29 status=ok
// SIG undefined FUN_149131936(void)

undefined8 FUN_149131936(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491319de FUN_1491319de body=59 status=ok
// SIG undefined FUN_1491319de(void)

undefined8 FUN_1491319de(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149131a7e FUN_149131a7e body=29 status=ok
// SIG undefined FUN_149131a7e(void)

undefined8 FUN_149131a7e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149131b26 FUN_149131b26 body=59 status=ok
// SIG undefined FUN_149131b26(void)

undefined8 FUN_149131b26(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149131bc6 FUN_149131bc6 body=29 status=ok
// SIG undefined FUN_149131bc6(void)

undefined8 FUN_149131bc6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149131c6e FUN_149131c6e body=59 status=ok
// SIG undefined FUN_149131c6e(void)

undefined8 FUN_149131c6e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149131d0e FUN_149131d0e body=29 status=ok
// SIG undefined FUN_149131d0e(void)

undefined8 FUN_149131d0e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149131dbe FUN_149131dbe body=59 status=ok
// SIG undefined FUN_149131dbe(void)

undefined8 FUN_149131dbe(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149131e5e FUN_149131e5e body=29 status=ok
// SIG undefined FUN_149131e5e(void)

undefined8 FUN_149131e5e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149131f1a FUN_149131f1a body=59 status=ok
// SIG undefined FUN_149131f1a(void)

undefined8 FUN_149131f1a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149131fba FUN_149131fba body=29 status=ok
// SIG undefined FUN_149131fba(void)

undefined8 FUN_149131fba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149132076 FUN_149132076 body=59 status=ok
// SIG undefined FUN_149132076(void)

undefined8 FUN_149132076(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149132116 FUN_149132116 body=29 status=ok
// SIG undefined FUN_149132116(void)

undefined8 FUN_149132116(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491321d2 FUN_1491321d2 body=59 status=ok
// SIG undefined FUN_1491321d2(void)

undefined8 FUN_1491321d2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149132312 FUN_149132312 body=59 status=ok
// SIG undefined FUN_149132312(void)

undefined8 FUN_149132312(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491323b2 FUN_1491323b2 body=29 status=ok
// SIG undefined FUN_1491323b2(void)

undefined8 FUN_1491323b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149132470 FUN_149132470 body=59 status=ok
// SIG undefined FUN_149132470(void)

undefined8 FUN_149132470(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149132510 FUN_149132510 body=29 status=ok
// SIG undefined FUN_149132510(void)

undefined8 FUN_149132510(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491325ce FUN_1491325ce body=59 status=ok
// SIG undefined FUN_1491325ce(void)

undefined8 FUN_1491325ce(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913266e FUN_14913266e body=29 status=ok
// SIG undefined FUN_14913266e(void)

undefined8 FUN_14913266e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913271a FUN_14913271a body=59 status=ok
// SIG undefined FUN_14913271a(void)

undefined8 FUN_14913271a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491327ba FUN_1491327ba body=29 status=ok
// SIG undefined FUN_1491327ba(void)

undefined8 FUN_1491327ba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149132880 FUN_149132880 body=59 status=ok
// SIG undefined FUN_149132880(void)

undefined8 FUN_149132880(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149132920 FUN_149132920 body=29 status=ok
// SIG undefined FUN_149132920(void)

undefined8 FUN_149132920(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491329e6 FUN_1491329e6 body=59 status=ok
// SIG undefined FUN_1491329e6(void)

undefined8 FUN_1491329e6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149132a86 FUN_149132a86 body=29 status=ok
// SIG undefined FUN_149132a86(void)

undefined8 FUN_149132a86(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149132b3a FUN_149132b3a body=59 status=ok
// SIG undefined FUN_149132b3a(void)

undefined8 FUN_149132b3a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149132bda FUN_149132bda body=29 status=ok
// SIG undefined FUN_149132bda(void)

undefined8 FUN_149132bda(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149132c8e FUN_149132c8e body=59 status=ok
// SIG undefined FUN_149132c8e(void)

undefined8 FUN_149132c8e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149132d2e FUN_149132d2e body=29 status=ok
// SIG undefined FUN_149132d2e(void)

undefined8 FUN_149132d2e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149132d4c FUN_149132d4c body=29 status=ok
// SIG undefined FUN_149132d4c(void)

undefined8 FUN_149132d4c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149132dd2 FUN_149132dd2 body=59 status=ok
// SIG undefined FUN_149132dd2(void)

undefined8 FUN_149132dd2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149132e72 FUN_149132e72 body=29 status=ok
// SIG undefined FUN_149132e72(void)

undefined8 FUN_149132e72(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149132fc0 FUN_149132fc0 body=105 status=ok
// SIG undefined FUN_149132fc0(void)

undefined8 FUN_149132fc0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_1405b70a4(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      memcpy((void *)(param_2 + 0x18 + lVar1),(void *)(param_3 + 0x18 + lVar1),0x98);
      lVar1 = lVar1 + 0xb0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149133052 FUN_149133052 body=59 status=ok
// SIG undefined FUN_149133052(void)

undefined8 FUN_149133052(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913309e FUN_14913309e body=54 status=ok
// SIG undefined FUN_14913309e(void)

void FUN_14913309e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x16) == '\x01') {
    *param_2 = &PTR_FUN_14bb08860;
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x16) = 0;
  }
  return;
}



// FUNCTION 149133122 FUN_149133122 body=57 status=ok
// SIG undefined FUN_149133122(void)

undefined8 * FUN_149133122(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb08860;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913322c FUN_14913322c body=59 status=ok
// SIG undefined FUN_14913322c(void)

undefined8 FUN_14913322c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491332cc FUN_1491332cc body=29 status=ok
// SIG undefined FUN_1491332cc(void)

undefined8 FUN_1491332cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149133376 FUN_149133376 body=42 status=ok
// SIG undefined FUN_149133376(void)

undefined8 FUN_149133376(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 1491333c8 FUN_1491333c8 body=59 status=ok
// SIG undefined FUN_1491333c8(void)

undefined8 FUN_1491333c8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149133468 FUN_149133468 body=29 status=ok
// SIG undefined FUN_149133468(void)

undefined8 FUN_149133468(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913353e FUN_14913353e body=42 status=ok
// SIG undefined FUN_14913353e(void)

undefined8 FUN_14913353e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      for (lVar2 = 0xd; lVar2 != 0; lVar2 = lVar2 + -1) {
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



// FUNCTION 149133590 FUN_149133590 body=59 status=ok
// SIG undefined FUN_149133590(void)

undefined8 FUN_149133590(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149133630 FUN_149133630 body=29 status=ok
// SIG undefined FUN_149133630(void)

undefined8 FUN_149133630(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913370e FUN_14913370e body=71 status=ok
// SIG undefined FUN_14913370e(void)

undefined8 FUN_14913370e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 14913377e FUN_14913377e body=59 status=ok
// SIG undefined FUN_14913377e(void)

undefined8 FUN_14913377e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913382a FUN_14913382a body=29 status=ok
// SIG undefined FUN_14913382a(void)

undefined8 FUN_14913382a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149133908 FUN_149133908 body=71 status=ok
// SIG undefined FUN_149133908(void)

undefined8 FUN_149133908(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 149133978 FUN_149133978 body=59 status=ok
// SIG undefined FUN_149133978(void)

undefined8 FUN_149133978(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149133a24 FUN_149133a24 body=29 status=ok
// SIG undefined FUN_149133a24(void)

undefined8 FUN_149133a24(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149133b02 FUN_149133b02 body=71 status=ok
// SIG undefined FUN_149133b02(void)

undefined8 FUN_149133b02(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 149133b72 FUN_149133b72 body=59 status=ok
// SIG undefined FUN_149133b72(void)

undefined8 FUN_149133b72(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149133c1e FUN_149133c1e body=29 status=ok
// SIG undefined FUN_149133c1e(void)

undefined8 FUN_149133c1e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149133c3c FUN_149133c3c body=106 status=ok
// SIG undefined FUN_149133c3c(void)

void FUN_149133c3c(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bb09580;
  param_2[8] = 0;
  param_2[9] = 0;
  *(undefined4 *)(param_2 + 10) = 0;
  *(undefined4 *)((longlong)param_2 + 0x54) = 0;
  *(undefined4 *)(param_2 + 0xb) = 0;
  *(undefined4 *)((longlong)param_2 + 0x5c) = 0x3ff00000;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  *(undefined1 *)(param_2 + 0x1a) = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = param_2[0x1a];
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 149133ca6 FUN_149133ca6 body=106 status=ok
// SIG undefined FUN_149133ca6(void)

void FUN_149133ca6(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bb09580;
  param_2[8] = 0;
  param_2[9] = 0;
  *(undefined4 *)(param_2 + 10) = 0;
  *(undefined4 *)((longlong)param_2 + 0x54) = 0;
  *(undefined4 *)(param_2 + 0xb) = 0;
  *(undefined4 *)((longlong)param_2 + 0x5c) = 0x3ff00000;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  *(undefined1 *)(param_2 + 0x1a) = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = param_2[0x1a];
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 149133d34 FUN_149133d34 body=71 status=ok
// SIG undefined FUN_149133d34(void)

undefined8 FUN_149133d34(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 8;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0xd0);
      lVar1 = lVar1 + 0xe0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149133da4 FUN_149133da4 body=59 status=ok
// SIG undefined FUN_149133da4(void)

undefined8 FUN_149133da4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149133e50 FUN_149133e50 body=29 status=ok
// SIG undefined FUN_149133e50(void)

undefined8 FUN_149133e50(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149133f16 FUN_149133f16 body=42 status=ok
// SIG undefined FUN_149133f16(void)

undefined8 FUN_149133f16(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      for (lVar2 = 0xb; lVar2 != 0; lVar2 = lVar2 + -1) {
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



// FUNCTION 149133f68 FUN_149133f68 body=59 status=ok
// SIG undefined FUN_149133f68(void)

undefined8 FUN_149133f68(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149134008 FUN_149134008 body=29 status=ok
// SIG undefined FUN_149134008(void)

undefined8 FUN_149134008(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491340ba FUN_1491340ba body=51 status=ok
// SIG undefined FUN_1491340ba(void)

undefined8 FUN_1491340ba(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 8;
    do {
      *(undefined1 *)(param_2 + 0x50 + lVar1) = *(undefined1 *)(param_3 + 0x50 + lVar1);
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
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



// FUNCTION 149134116 FUN_149134116 body=59 status=ok
// SIG undefined FUN_149134116(void)

undefined8 FUN_149134116(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491341b6 FUN_1491341b6 body=29 status=ok
// SIG undefined FUN_1491341b6(void)

undefined8 FUN_1491341b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491342ac FUN_1491342ac body=59 status=ok
// SIG undefined FUN_1491342ac(void)

undefined8 FUN_1491342ac(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913434c FUN_14913434c body=29 status=ok
// SIG undefined FUN_14913434c(void)

undefined8 FUN_14913434c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491343d2 FUN_1491343d2 body=59 status=ok
// SIG undefined FUN_1491343d2(void)

undefined8 FUN_1491343d2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149134472 FUN_149134472 body=29 status=ok
// SIG undefined FUN_149134472(void)

undefined8 FUN_149134472(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913454e FUN_14913454e body=59 status=ok
// SIG undefined FUN_14913454e(void)

undefined8 FUN_14913454e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491345ee FUN_1491345ee body=29 status=ok
// SIG undefined FUN_1491345ee(void)

undefined8 FUN_1491345ee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491346ca FUN_1491346ca body=59 status=ok
// SIG undefined FUN_1491346ca(void)

undefined8 FUN_1491346ca(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913476a FUN_14913476a body=29 status=ok
// SIG undefined FUN_14913476a(void)

undefined8 FUN_14913476a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149134856 FUN_149134856 body=59 status=ok
// SIG undefined FUN_149134856(void)

undefined8 FUN_149134856(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491348f6 FUN_1491348f6 body=29 status=ok
// SIG undefined FUN_1491348f6(void)

undefined8 FUN_1491348f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491349c4 FUN_1491349c4 body=59 status=ok
// SIG undefined FUN_1491349c4(void)

undefined8 FUN_1491349c4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149134a64 FUN_149134a64 body=29 status=ok
// SIG undefined FUN_149134a64(void)

undefined8 FUN_149134a64(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149134b34 FUN_149134b34 body=59 status=ok
// SIG undefined FUN_149134b34(void)

undefined8 FUN_149134b34(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149134bd4 FUN_149134bd4 body=29 status=ok
// SIG undefined FUN_149134bd4(void)

undefined8 FUN_149134bd4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149134cb0 FUN_149134cb0 body=59 status=ok
// SIG undefined FUN_149134cb0(void)

undefined8 FUN_149134cb0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149134d50 FUN_149134d50 body=29 status=ok
// SIG undefined FUN_149134d50(void)

undefined8 FUN_149134d50(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149134e2c FUN_149134e2c body=59 status=ok
// SIG undefined FUN_149134e2c(void)

undefined8 FUN_149134e2c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149134ecc FUN_149134ecc body=29 status=ok
// SIG undefined FUN_149134ecc(void)

undefined8 FUN_149134ecc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149134fb8 FUN_149134fb8 body=59 status=ok
// SIG undefined FUN_149134fb8(void)

undefined8 FUN_149134fb8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149135058 FUN_149135058 body=29 status=ok
// SIG undefined FUN_149135058(void)

undefined8 FUN_149135058(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149135158 FUN_149135158 body=59 status=ok
// SIG undefined FUN_149135158(void)

undefined8 FUN_149135158(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491351f8 FUN_1491351f8 body=29 status=ok
// SIG undefined FUN_1491351f8(void)

undefined8 FUN_1491351f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913527e FUN_14913527e body=59 status=ok
// SIG undefined FUN_14913527e(void)

undefined8 FUN_14913527e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913531e FUN_14913531e body=29 status=ok
// SIG undefined FUN_14913531e(void)

undefined8 FUN_14913531e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491353d2 FUN_1491353d2 body=59 status=ok
// SIG undefined FUN_1491353d2(void)

undefined8 FUN_1491353d2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149135472 FUN_149135472 body=29 status=ok
// SIG undefined FUN_149135472(void)

undefined8 FUN_149135472(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149135520 FUN_149135520 body=59 status=ok
// SIG undefined FUN_149135520(void)

undefined8 FUN_149135520(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491355c0 FUN_1491355c0 body=29 status=ok
// SIG undefined FUN_1491355c0(void)

undefined8 FUN_1491355c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149135688 FUN_149135688 body=59 status=ok
// SIG undefined FUN_149135688(void)

undefined8 FUN_149135688(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149135728 FUN_149135728 body=29 status=ok
// SIG undefined FUN_149135728(void)

undefined8 FUN_149135728(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491357f0 FUN_1491357f0 body=59 status=ok
// SIG undefined FUN_1491357f0(void)

undefined8 FUN_1491357f0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149135890 FUN_149135890 body=29 status=ok
// SIG undefined FUN_149135890(void)

undefined8 FUN_149135890(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149135944 FUN_149135944 body=59 status=ok
// SIG undefined FUN_149135944(void)

undefined8 FUN_149135944(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491359e4 FUN_1491359e4 body=29 status=ok
// SIG undefined FUN_1491359e4(void)

undefined8 FUN_1491359e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149135a98 FUN_149135a98 body=59 status=ok
// SIG undefined FUN_149135a98(void)

undefined8 FUN_149135a98(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149135b38 FUN_149135b38 body=29 status=ok
// SIG undefined FUN_149135b38(void)

undefined8 FUN_149135b38(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149135bec FUN_149135bec body=59 status=ok
// SIG undefined FUN_149135bec(void)

undefined8 FUN_149135bec(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149135c8c FUN_149135c8c body=29 status=ok
// SIG undefined FUN_149135c8c(void)

undefined8 FUN_149135c8c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149135d40 FUN_149135d40 body=59 status=ok
// SIG undefined FUN_149135d40(void)

undefined8 FUN_149135d40(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149135de0 FUN_149135de0 body=29 status=ok
// SIG undefined FUN_149135de0(void)

undefined8 FUN_149135de0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149135e94 FUN_149135e94 body=59 status=ok
// SIG undefined FUN_149135e94(void)

undefined8 FUN_149135e94(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149135f34 FUN_149135f34 body=29 status=ok
// SIG undefined FUN_149135f34(void)

undefined8 FUN_149135f34(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149135ffc FUN_149135ffc body=59 status=ok
// SIG undefined FUN_149135ffc(void)

undefined8 FUN_149135ffc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913609c FUN_14913609c body=29 status=ok
// SIG undefined FUN_14913609c(void)

undefined8 FUN_14913609c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149136164 FUN_149136164 body=59 status=ok
// SIG undefined FUN_149136164(void)

undefined8 FUN_149136164(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149136204 FUN_149136204 body=29 status=ok
// SIG undefined FUN_149136204(void)

undefined8 FUN_149136204(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491362e4 FUN_1491362e4 body=59 status=ok
// SIG undefined FUN_1491362e4(void)

undefined8 FUN_1491362e4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149136384 FUN_149136384 body=29 status=ok
// SIG undefined FUN_149136384(void)

undefined8 FUN_149136384(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149136468 FUN_149136468 body=59 status=ok
// SIG undefined FUN_149136468(void)

undefined8 FUN_149136468(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149136508 FUN_149136508 body=29 status=ok
// SIG undefined FUN_149136508(void)

undefined8 FUN_149136508(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491365e4 FUN_1491365e4 body=59 status=ok
// SIG undefined FUN_1491365e4(void)

undefined8 FUN_1491365e4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149136684 FUN_149136684 body=29 status=ok
// SIG undefined FUN_149136684(void)

undefined8 FUN_149136684(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913674c FUN_14913674c body=59 status=ok
// SIG undefined FUN_14913674c(void)

undefined8 FUN_14913674c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491367ec FUN_1491367ec body=29 status=ok
// SIG undefined FUN_1491367ec(void)

undefined8 FUN_1491367ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491368b4 FUN_1491368b4 body=59 status=ok
// SIG undefined FUN_1491368b4(void)

undefined8 FUN_1491368b4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149136954 FUN_149136954 body=29 status=ok
// SIG undefined FUN_149136954(void)

undefined8 FUN_149136954(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149136a34 FUN_149136a34 body=59 status=ok
// SIG undefined FUN_149136a34(void)

undefined8 FUN_149136a34(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149136ad4 FUN_149136ad4 body=29 status=ok
// SIG undefined FUN_149136ad4(void)

undefined8 FUN_149136ad4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149136b82 FUN_149136b82 body=59 status=ok
// SIG undefined FUN_149136b82(void)

undefined8 FUN_149136b82(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149136c22 FUN_149136c22 body=29 status=ok
// SIG undefined FUN_149136c22(void)

undefined8 FUN_149136c22(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149136cd0 FUN_149136cd0 body=59 status=ok
// SIG undefined FUN_149136cd0(void)

undefined8 FUN_149136cd0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149136d70 FUN_149136d70 body=29 status=ok
// SIG undefined FUN_149136d70(void)

undefined8 FUN_149136d70(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149136e1e FUN_149136e1e body=59 status=ok
// SIG undefined FUN_149136e1e(void)

undefined8 FUN_149136e1e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149136ebe FUN_149136ebe body=29 status=ok
// SIG undefined FUN_149136ebe(void)

undefined8 FUN_149136ebe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149136f84 FUN_149136f84 body=59 status=ok
// SIG undefined FUN_149136f84(void)

undefined8 FUN_149136f84(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149137024 FUN_149137024 body=29 status=ok
// SIG undefined FUN_149137024(void)

undefined8 FUN_149137024(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491370ea FUN_1491370ea body=59 status=ok
// SIG undefined FUN_1491370ea(void)

undefined8 FUN_1491370ea(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913718a FUN_14913718a body=29 status=ok
// SIG undefined FUN_14913718a(void)

undefined8 FUN_14913718a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149137250 FUN_149137250 body=59 status=ok
// SIG undefined FUN_149137250(void)

undefined8 FUN_149137250(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491372f0 FUN_1491372f0 body=29 status=ok
// SIG undefined FUN_1491372f0(void)

undefined8 FUN_1491372f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491373b6 FUN_1491373b6 body=59 status=ok
// SIG undefined FUN_1491373b6(void)

undefined8 FUN_1491373b6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149137456 FUN_149137456 body=29 status=ok
// SIG undefined FUN_149137456(void)

undefined8 FUN_149137456(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913751c FUN_14913751c body=59 status=ok
// SIG undefined FUN_14913751c(void)

undefined8 FUN_14913751c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491375bc FUN_1491375bc body=29 status=ok
// SIG undefined FUN_1491375bc(void)

undefined8 FUN_1491375bc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913766a FUN_14913766a body=59 status=ok
// SIG undefined FUN_14913766a(void)

undefined8 FUN_14913766a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913770a FUN_14913770a body=29 status=ok
// SIG undefined FUN_14913770a(void)

undefined8 FUN_14913770a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491377ca FUN_1491377ca body=59 status=ok
// SIG undefined FUN_1491377ca(void)

undefined8 FUN_1491377ca(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913786a FUN_14913786a body=29 status=ok
// SIG undefined FUN_14913786a(void)

undefined8 FUN_14913786a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149137946 FUN_149137946 body=59 status=ok
// SIG undefined FUN_149137946(void)

undefined8 FUN_149137946(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491379e6 FUN_1491379e6 body=29 status=ok
// SIG undefined FUN_1491379e6(void)

undefined8 FUN_1491379e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149137af4 FUN_149137af4 body=59 status=ok
// SIG undefined FUN_149137af4(void)

undefined8 FUN_149137af4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149137b94 FUN_149137b94 body=29 status=ok
// SIG undefined FUN_149137b94(void)

undefined8 FUN_149137b94(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149137c52 FUN_149137c52 body=59 status=ok
// SIG undefined FUN_149137c52(void)

undefined8 FUN_149137c52(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149137cf2 FUN_149137cf2 body=29 status=ok
// SIG undefined FUN_149137cf2(void)

undefined8 FUN_149137cf2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149137db0 FUN_149137db0 body=59 status=ok
// SIG undefined FUN_149137db0(void)

undefined8 FUN_149137db0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149137e50 FUN_149137e50 body=29 status=ok
// SIG undefined FUN_149137e50(void)

undefined8 FUN_149137e50(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149137f0e FUN_149137f0e body=59 status=ok
// SIG undefined FUN_149137f0e(void)

undefined8 FUN_149137f0e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149137fae FUN_149137fae body=29 status=ok
// SIG undefined FUN_149137fae(void)

undefined8 FUN_149137fae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14913806c FUN_14913806c body=59 status=ok
// SIG undefined FUN_14913806c(void)

undefined8 FUN_14913806c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913810c FUN_14913810c body=29 status=ok
// SIG undefined FUN_14913810c(void)

undefined8 FUN_14913810c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491381ca FUN_1491381ca body=59 status=ok
// SIG undefined FUN_1491381ca(void)

undefined8 FUN_1491381ca(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913826a FUN_14913826a body=29 status=ok
// SIG undefined FUN_14913826a(void)

undefined8 FUN_14913826a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149138328 FUN_149138328 body=59 status=ok
// SIG undefined FUN_149138328(void)

undefined8 FUN_149138328(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491383c8 FUN_1491383c8 body=29 status=ok
// SIG undefined FUN_1491383c8(void)

undefined8 FUN_1491383c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149138486 FUN_149138486 body=59 status=ok
// SIG undefined FUN_149138486(void)

undefined8 FUN_149138486(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149138526 FUN_149138526 body=29 status=ok
// SIG undefined FUN_149138526(void)

undefined8 FUN_149138526(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491385f6 FUN_1491385f6 body=59 status=ok
// SIG undefined FUN_1491385f6(void)

undefined8 FUN_1491385f6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149138696 FUN_149138696 body=29 status=ok
// SIG undefined FUN_149138696(void)

undefined8 FUN_149138696(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149138744 FUN_149138744 body=59 status=ok
// SIG undefined FUN_149138744(void)

undefined8 FUN_149138744(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491387e4 FUN_1491387e4 body=29 status=ok
// SIG undefined FUN_1491387e4(void)

undefined8 FUN_1491387e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149138892 FUN_149138892 body=59 status=ok
// SIG undefined FUN_149138892(void)

undefined8 FUN_149138892(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149138932 FUN_149138932 body=29 status=ok
// SIG undefined FUN_149138932(void)

undefined8 FUN_149138932(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491389e0 FUN_1491389e0 body=59 status=ok
// SIG undefined FUN_1491389e0(void)

undefined8 FUN_1491389e0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149138a80 FUN_149138a80 body=29 status=ok
// SIG undefined FUN_149138a80(void)

undefined8 FUN_149138a80(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149138b2e FUN_149138b2e body=59 status=ok
// SIG undefined FUN_149138b2e(void)

undefined8 FUN_149138b2e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149138bce FUN_149138bce body=29 status=ok
// SIG undefined FUN_149138bce(void)

undefined8 FUN_149138bce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149138c7c FUN_149138c7c body=59 status=ok
// SIG undefined FUN_149138c7c(void)

undefined8 FUN_149138c7c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149138d1c FUN_149138d1c body=29 status=ok
// SIG undefined FUN_149138d1c(void)

undefined8 FUN_149138d1c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149138dca FUN_149138dca body=59 status=ok
// SIG undefined FUN_149138dca(void)

undefined8 FUN_149138dca(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149138e6a FUN_149138e6a body=29 status=ok
// SIG undefined FUN_149138e6a(void)

undefined8 FUN_149138e6a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149138f18 FUN_149138f18 body=59 status=ok
// SIG undefined FUN_149138f18(void)

undefined8 FUN_149138f18(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149138fb8 FUN_149138fb8 body=29 status=ok
// SIG undefined FUN_149138fb8(void)

undefined8 FUN_149138fb8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149139066 FUN_149139066 body=59 status=ok
// SIG undefined FUN_149139066(void)

undefined8 FUN_149139066(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149139106 FUN_149139106 body=29 status=ok
// SIG undefined FUN_149139106(void)

undefined8 FUN_149139106(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491391ce FUN_1491391ce body=59 status=ok
// SIG undefined FUN_1491391ce(void)

undefined8 FUN_1491391ce(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913926e FUN_14913926e body=29 status=ok
// SIG undefined FUN_14913926e(void)

undefined8 FUN_14913926e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149139352 FUN_149139352 body=59 status=ok
// SIG undefined FUN_149139352(void)

undefined8 FUN_149139352(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491393f2 FUN_1491393f2 body=29 status=ok
// SIG undefined FUN_1491393f2(void)

undefined8 FUN_1491393f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491394a0 FUN_1491394a0 body=59 status=ok
// SIG undefined FUN_1491394a0(void)

undefined8 FUN_1491394a0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149139540 FUN_149139540 body=29 status=ok
// SIG undefined FUN_149139540(void)

undefined8 FUN_149139540(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491395b6 FUN_1491395b6 body=89 status=ok
// SIG undefined FUN_1491395b6(void)

undefined1 FUN_1491395b6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_1408fdf38(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      *(undefined8 *)(param_2 + 0x18 + lVar1) = *(undefined8 *)(param_3 + 0x18 + lVar1);
      lVar1 = lVar1 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149139638 FUN_149139638 body=59 status=ok
// SIG undefined FUN_149139638(void)

undefined8 FUN_149139638(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14913967e FUN_14913967e body=48 status=ok
// SIG undefined FUN_14913967e(void)

void FUN_14913967e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 4) == '\x01') {
    *param_2 = &PTR_FUN_14bb10ba0;
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 4) = 0;
  }
  return;
}



// FUNCTION 1491396fc FUN_1491396fc body=57 status=ok
// SIG undefined FUN_1491396fc(void)

undefined8 * FUN_1491396fc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb10ba0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


