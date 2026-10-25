// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14947b996 FUN_14947b996 body=34 status=ok
// SIG undefined FUN_14947b996(void)

void FUN_14947b996(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_14947ba08(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 14947ba08 FUN_14947ba08 body=68 status=ok
// SIG undefined FUN_14947ba08(void)

void FUN_14947ba08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bcfe530;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bce9c00;
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14947ba9c FUN_14947ba9c body=93 status=ok
// SIG undefined FUN_14947ba9c(void)

undefined1 FUN_14947ba9c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_144a787a6(param_2 + 8 + lVar6,param_3 + 8 + lVar6);
      puVar1 = (undefined4 *)(param_3 + 0x18 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x18 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      lVar6 = lVar6 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14947bb22 FUN_14947bb22 body=59 status=ok
// SIG undefined FUN_14947bb22(void)

undefined8 FUN_14947bb22(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14947bb68 FUN_14947bb68 body=48 status=ok
// SIG undefined FUN_14947bb68(void)

void FUN_14947bb68(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 5) == '\x01') {
    *param_2 = &PTR_FUN_14bce9c00;
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 5) = 0;
  }
  return;
}



// FUNCTION 14947bc50 FUN_14947bc50 body=115 status=ok
// SIG undefined FUN_14947bc50(void)

undefined8 FUN_14947bc50(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_144a787a6(param_2 + 8 + lVar10,param_3 + 8 + lVar10);
      puVar1 = (undefined4 *)(param_3 + 0x18 + lVar10);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_3 + 0x28 + lVar10);
      uVar6 = *puVar2;
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      puVar2 = (undefined4 *)(param_2 + 0x18 + lVar10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      puVar1 = (undefined4 *)(param_2 + 0x28 + lVar10);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      *(undefined8 *)(param_2 + 0x38 + lVar10) = *(undefined8 *)(param_3 + 0x38 + lVar10);
      lVar10 = lVar10 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14947bcec FUN_14947bcec body=59 status=ok
// SIG undefined FUN_14947bcec(void)

undefined8 FUN_14947bcec(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14947bd32 FUN_14947bd32 body=48 status=ok
// SIG undefined FUN_14947bd32(void)

void FUN_14947bd32(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 8) == '\x01') {
    *param_2 = &PTR_FUN_14bce9c00;
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 8) = 0;
  }
  return;
}



// FUNCTION 14947bdb2 FUN_14947bdb2 body=63 status=ok
// SIG undefined FUN_14947bdb2(void)

void FUN_14947bdb2(undefined8 param_1,undefined8 *param_2)

{
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = &PTR_FUN_14bcfe550;
  param_2[3] = 0;
  param_2[4] = 0;
  FUN_144a5dc74(param_2 + 5);
  FUN_144a5dc74(param_2 + 7);
  return;
}



// FUNCTION 14947bdf2 FUN_14947bdf2 body=55 status=ok
// SIG undefined FUN_14947bdf2(void)

void FUN_14947bdf2(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = &PTR_FUN_14bcfe550;
  param_2[3] = 0;
  param_2[4] = 0;
  FUN_144a5dc74(param_2 + 5);
  FUN_144a5dc74(param_2 + 7);
  return;
}



// FUNCTION 14947be4e FUN_14947be4e body=54 status=ok
// SIG undefined FUN_14947be4e(void)

undefined1 FUN_14947be4e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14947bf62(param_2,param_3);
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return 1;
}



// FUNCTION 14947beac FUN_14947beac body=59 status=ok
// SIG undefined FUN_14947beac(void)

undefined8 FUN_14947beac(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14947bef2 FUN_14947bef2 body=34 status=ok
// SIG undefined FUN_14947bef2(void)

void FUN_14947bef2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_14947bff6(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 14947bf62 FUN_14947bf62 body=146 status=ok
// SIG undefined FUN_14947bf62(void)

longlong FUN_14947bf62(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  FUN_144a787a6(param_1 + 0x18,param_2 + 0x18);
  plVar1 = *(longlong **)(param_2 + 0x28);
  plVar2 = *(longlong **)(param_1 + 0x28);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x28) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  plVar1 = *(longlong **)(param_2 + 0x38);
  plVar2 = *(longlong **)(param_1 + 0x38);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x38) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  return param_1;
}



// FUNCTION 14947bff6 FUN_14947bff6 body=98 status=ok
// SIG undefined FUN_14947bff6(void)

void FUN_14947bff6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bcfe550;
  if ((longlong *)param_1[7] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[7] + 0x10))();
  }
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[5] + 0x10))();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bce9c00;
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14947c0b0 FUN_14947c0b0 body=91 status=ok
// SIG undefined FUN_14947c0b0(void)

undefined1 FUN_14947c0b0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_144a787a6(param_2 + -0x10,param_3 + -0x10);
      FUN_144a787a6(param_2,param_3);
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



// FUNCTION 14947c134 FUN_14947c134 body=59 status=ok
// SIG undefined FUN_14947c134(void)

undefined8 FUN_14947c134(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14947c17a FUN_14947c17a body=34 status=ok
// SIG undefined FUN_14947c17a(void)

void FUN_14947c17a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_14947c1ec(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 14947c1ec FUN_14947c1ec body=68 status=ok
// SIG undefined FUN_14947c1ec(void)

void FUN_14947c1ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bcfe590;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bce9c00;
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14947c290 FUN_14947c290 body=54 status=ok
// SIG undefined FUN_14947c290(void)

undefined1 FUN_14947c290(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14947c3a4(param_2,param_3);
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return 1;
}



// FUNCTION 14947c2ee FUN_14947c2ee body=59 status=ok
// SIG undefined FUN_14947c2ee(void)

undefined8 FUN_14947c2ee(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14947c334 FUN_14947c334 body=34 status=ok
// SIG undefined FUN_14947c334(void)

void FUN_14947c334(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_14947c3f2(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 14947c3a4 FUN_14947c3a4 body=77 status=ok
// SIG undefined FUN_14947c3a4(void)

longlong FUN_14947c3a4(longlong param_1,longlong param_2)

{
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  FUN_144a787a6(param_1 + 0x18,param_2 + 0x18);
  FUN_144a787a6(param_1 + 0x28,param_2 + 0x28);
  FUN_144a787a6(param_1 + 0x38,param_2 + 0x38);
  return param_1;
}



// FUNCTION 14947c3f2 FUN_14947c3f2 body=96 status=ok
// SIG undefined FUN_14947c3f2(void)

void FUN_14947c3f2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bcfe740;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bce9c00;
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14947c4aa FUN_14947c4aa body=83 status=ok
// SIG undefined FUN_14947c4aa(void)

undefined1 FUN_14947c4aa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      FUN_144a787a6(param_2 + -0x10,param_3 + -0x10);
      FUN_144a787a6(param_2,param_3);
      uVar1 = *(undefined4 *)(param_3 + 0x14);
      uVar2 = *(undefined4 *)(param_3 + 0x18);
      uVar3 = *(undefined4 *)(param_3 + 0x1c);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      *(undefined4 *)(param_2 + 0x14) = uVar1;
      *(undefined4 *)(param_2 + 0x18) = uVar2;
      *(undefined4 *)(param_2 + 0x1c) = uVar3;
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14947c526 FUN_14947c526 body=59 status=ok
// SIG undefined FUN_14947c526(void)

undefined8 FUN_14947c526(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14947c56c FUN_14947c56c body=34 status=ok
// SIG undefined FUN_14947c56c(void)

void FUN_14947c56c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_14947c5de(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 14947c5de FUN_14947c5de body=68 status=ok
// SIG undefined FUN_14947c5de(void)

void FUN_14947c5de(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bcfe430;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bce9c00;
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14947c67a FUN_14947c67a body=83 status=ok
// SIG undefined FUN_14947c67a(void)

undefined1 FUN_14947c67a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      FUN_144a787a6(param_2 + -0x10,param_3 + -0x10);
      FUN_144a787a6(param_2,param_3);
      uVar1 = *(undefined4 *)(param_3 + 0x14);
      uVar2 = *(undefined4 *)(param_3 + 0x18);
      uVar3 = *(undefined4 *)(param_3 + 0x1c);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      *(undefined4 *)(param_2 + 0x14) = uVar1;
      *(undefined4 *)(param_2 + 0x18) = uVar2;
      *(undefined4 *)(param_2 + 0x1c) = uVar3;
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14947c6f6 FUN_14947c6f6 body=59 status=ok
// SIG undefined FUN_14947c6f6(void)

undefined8 FUN_14947c6f6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14947c73c FUN_14947c73c body=34 status=ok
// SIG undefined FUN_14947c73c(void)

void FUN_14947c73c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_14947c7ae(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 14947c7ae FUN_14947c7ae body=68 status=ok
// SIG undefined FUN_14947c7ae(void)

void FUN_14947c7ae(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bcfe450;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bce9c00;
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14947c7f2 FUN_14947c7f2 body=93 status=ok
// SIG undefined FUN_14947c7f2(void)

void FUN_14947c7f2(undefined8 param_1,undefined8 *param_2)

{
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = &PTR_FUN_14bcfe4f0;
  param_2[3] = 0;
  param_2[4] = 0;
  FUN_140e6507e(param_2 + 5);
  FUN_140e6507e(param_2 + 0xd);
  return;
}



// FUNCTION 14947c850 FUN_14947c850 body=55 status=ok
// SIG undefined FUN_14947c850(void)

void FUN_14947c850(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = &PTR_FUN_14bcfe4f0;
  param_2[3] = 0;
  param_2[4] = 0;
  FUN_140e6507e(param_2 + 5);
  FUN_140e6507e(param_2 + 0xd);
  return;
}



// FUNCTION 14947c8ac FUN_14947c8ac body=63 status=ok
// SIG undefined FUN_14947c8ac(void)

undefined1 FUN_14947c8ac(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14947c9d6(param_2,param_3);
    param_3 = param_3 + 0xa8;
    param_2 = param_2 + 0xa8;
  }
  return 1;
}



// FUNCTION 14947c914 FUN_14947c914 body=59 status=ok
// SIG undefined FUN_14947c914(void)

undefined8 FUN_14947c914(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14947c960 FUN_14947c960 body=40 status=ok
// SIG undefined FUN_14947c960(void)

void FUN_14947c960(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa8) == '\x01') {
    FUN_14947ca7e(param_2);
    *(undefined1 *)(param_2 + 0xa8) = 0;
  }
  return;
}



// FUNCTION 14947c9d6 FUN_14947c9d6 body=167 status=ok
// SIG undefined FUN_14947c9d6(void)

longlong FUN_14947c9d6(longlong param_1,longlong param_2)

{
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  FUN_144a787a6(param_1 + 0x18,param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  FUN_1406fa324(param_1 + 0x30,param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  FUN_144a787a6(param_1 + 0x48,param_2 + 0x48);
  FUN_1406fa324(param_1 + 0x58,param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  FUN_1406fa324(param_1 + 0x70,param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  FUN_144a787a6(param_1 + 0x88,param_2 + 0x88);
  FUN_1406fa324(param_1 + 0x98,param_2 + 0x98);
  return param_1;
}



// FUNCTION 14947ca7e FUN_14947ca7e body=86 status=ok
// SIG undefined FUN_14947ca7e(void)

void FUN_14947ca7e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bcfe4f0;
  FUN_14121c54c(param_1 + 0xd);
  FUN_14121c54c(param_1 + 5);
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bce9c00;
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14947cad4 FUN_14947cad4 body=100 status=ok
// SIG undefined FUN_14947cad4(void)

void FUN_14947cad4(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 6,0,0x88);
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = &PTR_FUN_14bcfe120;
  param_2[3] = 0;
  param_2[4] = 0;
  *(undefined8 *)((longlong)param_2 + 0x22) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2a) = 0;
  FUN_140e6507e(param_2 + 7);
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  *(undefined8 *)((longlong)param_2 + 0xa1) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa9) = 0;
  return;
}



// FUNCTION 14947cb38 FUN_14947cb38 body=83 status=ok
// SIG undefined FUN_14947cb38(void)

void FUN_14947cb38(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = &PTR_FUN_14bcfe120;
  param_2[3] = 0;
  param_2[4] = 0;
  *(undefined8 *)((longlong)param_2 + 0x22) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2a) = 0;
  FUN_140e6507e(param_2 + 7);
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  *(undefined8 *)((longlong)param_2 + 0xa1) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa9) = 0;
  return;
}



// FUNCTION 14947cbb0 FUN_14947cbb0 body=63 status=ok
// SIG undefined FUN_14947cbb0(void)

undefined1 FUN_14947cbb0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14947ccda(param_2,param_3);
    param_3 = param_3 + 0xb8;
    param_2 = param_2 + 0xb8;
  }
  return 1;
}



// FUNCTION 14947cc18 FUN_14947cc18 body=59 status=ok
// SIG undefined FUN_14947cc18(void)

undefined8 FUN_14947cc18(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14947cc64 FUN_14947cc64 body=40 status=ok
// SIG undefined FUN_14947cc64(void)

void FUN_14947cc64(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb8) == '\x01') {
    FUN_14947d522(param_2);
    *(undefined1 *)(param_2 + 0xb8) = 0;
  }
  return;
}



// FUNCTION 14947ccda FUN_14947ccda body=186 status=ok
// SIG undefined FUN_14947ccda(void)

longlong FUN_14947ccda(longlong param_1,longlong param_2)

{
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  FUN_144a787a6(param_1 + 0x18,param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined2 *)(param_1 + 0x30) = *(undefined2 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  FUN_1406fa324(param_1 + 0x40,param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  FUN_144a787a6(param_1 + 0x58,param_2 + 0x58);
  FUN_1406fa324(param_1 + 0x68,param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  FUN_144a787a6(param_1 + 0x80,param_2 + 0x80);
  FUN_144a787a6(param_1 + 0x90,param_2 + 0x90);
  FUN_144a787a6(param_1 + 0xa0,param_2 + 0xa0);
  *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(param_2 + 0xb0);
  return param_1;
}



// FUNCTION 14947cd96 FUN_14947cd96 body=106 status=ok
// SIG undefined FUN_14947cd96(void)

void FUN_14947cd96(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0xb0);
  *param_2 = &PTR_FUN_14bcfe120;
  param_2[3] = 0;
  param_2[4] = 0;
  *(undefined8 *)((longlong)param_2 + 0x22) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2a) = 0;
  FUN_140e6507e(param_2 + 7);
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  *(undefined8 *)((longlong)param_2 + 0xa1) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa9) = 0;
  *param_2 = &PTR_FUN_14bcfe100;
  return;
}



// FUNCTION 14947ce00 FUN_14947ce00 body=93 status=ok
// SIG undefined FUN_14947ce00(void)

void FUN_14947ce00(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = &PTR_FUN_14bcfe120;
  param_2[3] = 0;
  param_2[4] = 0;
  *(undefined8 *)((longlong)param_2 + 0x22) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2a) = 0;
  FUN_140e6507e(param_2 + 7);
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  *(undefined8 *)((longlong)param_2 + 0xa1) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa9) = 0;
  *param_2 = &PTR_FUN_14bcfe100;
  return;
}



// FUNCTION 14947ce82 FUN_14947ce82 body=63 status=ok
// SIG undefined FUN_14947ce82(void)

undefined1 FUN_14947ce82(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14947ccda(param_2,param_3);
    param_3 = param_3 + 0xb8;
    param_2 = param_2 + 0xb8;
  }
  return 1;
}



// FUNCTION 14947ceea FUN_14947ceea body=59 status=ok
// SIG undefined FUN_14947ceea(void)

undefined8 FUN_14947ceea(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14947cf36 FUN_14947cf36 body=40 status=ok
// SIG undefined FUN_14947cf36(void)

void FUN_14947cf36(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb8) == '\x01') {
    FUN_14947d522(param_2);
    *(undefined1 *)(param_2 + 0xb8) = 0;
  }
  return;
}



// FUNCTION 14947cfac FUN_14947cfac body=38 status=ok
// SIG undefined FUN_14947cfac(void)

undefined8 FUN_14947cfac(undefined8 param_1,int param_2)

{
  FUN_14947d522();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14947cfd8 FUN_14947cfd8 body=65 status=ok
// SIG undefined FUN_14947cfd8(void)

undefined8 FUN_14947cfd8(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0xa0);
  if (lVar1 != 0) {
    uVar2 = FUN_1494e64f0(lVar1);
    uVar2 = FUN_144529b4e(uVar2,lVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 14947d01a FUN_14947d01a body=106 status=ok
// SIG undefined FUN_14947d01a(void)

void FUN_14947d01a(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0xb0);
  *param_2 = &PTR_FUN_14bcfe120;
  param_2[3] = 0;
  param_2[4] = 0;
  *(undefined8 *)((longlong)param_2 + 0x22) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2a) = 0;
  FUN_140e6507e(param_2 + 7);
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  *(undefined8 *)((longlong)param_2 + 0xa1) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa9) = 0;
  *param_2 = &PTR_FUN_14bcfe190;
  return;
}



// FUNCTION 14947d084 FUN_14947d084 body=93 status=ok
// SIG undefined FUN_14947d084(void)

void FUN_14947d084(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = &PTR_FUN_14bcfe120;
  param_2[3] = 0;
  param_2[4] = 0;
  *(undefined8 *)((longlong)param_2 + 0x22) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2a) = 0;
  FUN_140e6507e(param_2 + 7);
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  *(undefined8 *)((longlong)param_2 + 0xa1) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa9) = 0;
  *param_2 = &PTR_FUN_14bcfe190;
  return;
}



// FUNCTION 14947d106 FUN_14947d106 body=63 status=ok
// SIG undefined FUN_14947d106(void)

undefined1 FUN_14947d106(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14947ccda(param_2,param_3);
    param_3 = param_3 + 0xb8;
    param_2 = param_2 + 0xb8;
  }
  return 1;
}



// FUNCTION 14947d16e FUN_14947d16e body=59 status=ok
// SIG undefined FUN_14947d16e(void)

undefined8 FUN_14947d16e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14947d1ba FUN_14947d1ba body=40 status=ok
// SIG undefined FUN_14947d1ba(void)

void FUN_14947d1ba(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb8) == '\x01') {
    FUN_14947d522(param_2);
    *(undefined1 *)(param_2 + 0xb8) = 0;
  }
  return;
}



// FUNCTION 14947d230 FUN_14947d230 body=38 status=ok
// SIG undefined FUN_14947d230(void)

undefined8 FUN_14947d230(undefined8 param_1,int param_2)

{
  FUN_14947d522();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14947d25c FUN_14947d25c body=65 status=ok
// SIG undefined FUN_14947d25c(void)

undefined8 FUN_14947d25c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0xa0);
  if (lVar1 != 0) {
    uVar2 = FUN_1494e64f0(lVar1);
    uVar2 = FUN_144529b4e(uVar2,lVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 14947d29e FUN_14947d29e body=106 status=ok
// SIG undefined FUN_14947d29e(void)

void FUN_14947d29e(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0xb0);
  *param_2 = &PTR_FUN_14bcfe120;
  param_2[3] = 0;
  param_2[4] = 0;
  *(undefined8 *)((longlong)param_2 + 0x22) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2a) = 0;
  FUN_140e6507e(param_2 + 7);
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  *(undefined8 *)((longlong)param_2 + 0xa1) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa9) = 0;
  *param_2 = &PTR_FUN_14bcfe5b0;
  return;
}



// FUNCTION 14947d308 FUN_14947d308 body=93 status=ok
// SIG undefined FUN_14947d308(void)

void FUN_14947d308(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = &PTR_FUN_14bcfe120;
  param_2[3] = 0;
  param_2[4] = 0;
  *(undefined8 *)((longlong)param_2 + 0x22) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2a) = 0;
  FUN_140e6507e(param_2 + 7);
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  *(undefined8 *)((longlong)param_2 + 0xa1) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa9) = 0;
  *param_2 = &PTR_FUN_14bcfe5b0;
  return;
}



// FUNCTION 14947d38a FUN_14947d38a body=63 status=ok
// SIG undefined FUN_14947d38a(void)

undefined1 FUN_14947d38a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14947ccda(param_2,param_3);
    param_3 = param_3 + 0xb8;
    param_2 = param_2 + 0xb8;
  }
  return 1;
}



// FUNCTION 14947d3f2 FUN_14947d3f2 body=59 status=ok
// SIG undefined FUN_14947d3f2(void)

undefined8 FUN_14947d3f2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14947d43e FUN_14947d43e body=40 status=ok
// SIG undefined FUN_14947d43e(void)

void FUN_14947d43e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb8) == '\x01') {
    FUN_14947d522(param_2);
    *(undefined1 *)(param_2 + 0xb8) = 0;
  }
  return;
}



// FUNCTION 14947d4b4 FUN_14947d4b4 body=38 status=ok
// SIG undefined FUN_14947d4b4(void)

undefined8 FUN_14947d4b4(undefined8 param_1,int param_2)

{
  FUN_14947d522();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14947d4da FUN_14947d4da body=65 status=ok
// SIG undefined FUN_14947d4da(void)

undefined8 FUN_14947d4da(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_2 + 0x28))(param_2,param_1 + 0xa0);
  if (lVar1 != 0) {
    uVar2 = FUN_1494e64f0(lVar1);
    uVar2 = FUN_144529b4e(uVar2,lVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 14947d522 FUN_14947d522 body=128 status=ok
// SIG undefined FUN_14947d522(void)

void FUN_14947d522(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bcfe120;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_14121c54c(param_1 + 7);
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bce9c00;
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14947d604 FUN_14947d604 body=54 status=ok
// SIG undefined FUN_14947d604(void)

undefined1 FUN_14947d604(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14947d718(param_2,param_3);
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return 1;
}



// FUNCTION 14947d662 FUN_14947d662 body=59 status=ok
// SIG undefined FUN_14947d662(void)

undefined8 FUN_14947d662(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14947d6a8 FUN_14947d6a8 body=34 status=ok
// SIG undefined FUN_14947d6a8(void)

void FUN_14947d6a8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_14947d766(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 14947d718 FUN_14947d718 body=77 status=ok
// SIG undefined FUN_14947d718(void)

longlong FUN_14947d718(longlong param_1,longlong param_2)

{
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  FUN_144a787a6(param_1 + 0x18,param_2 + 0x18);
  FUN_144a787a6(param_1 + 0x28,param_2 + 0x28);
  FUN_144a787a6(param_1 + 0x38,param_2 + 0x38);
  return param_1;
}



// FUNCTION 14947d766 FUN_14947d766 body=96 status=ok
// SIG undefined FUN_14947d766(void)

void FUN_14947d766(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bcfe5d0;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bce9c00;
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14947d856 FUN_14947d856 body=63 status=ok
// SIG undefined FUN_14947d856(void)

undefined1 FUN_14947d856(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14947d980(param_2,param_3);
    param_3 = param_3 + 0x90;
    param_2 = param_2 + 0x90;
  }
  return 1;
}



// FUNCTION 14947d8be FUN_14947d8be body=59 status=ok
// SIG undefined FUN_14947d8be(void)

undefined8 FUN_14947d8be(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14947d90a FUN_14947d90a body=40 status=ok
// SIG undefined FUN_14947d90a(void)

void FUN_14947d90a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x90) == '\x01') {
    FUN_14947d9e4(param_2);
    *(undefined1 *)(param_2 + 0x90) = 0;
  }
  return;
}



// FUNCTION 14947d980 FUN_14947d980 body=98 status=ok
// SIG undefined FUN_14947d980(void)

longlong FUN_14947d980(longlong param_1,longlong param_2)

{
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  FUN_144a787a6(param_1 + 0x20,param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  FUN_14945ff1c(param_1 + 0x40,param_2 + 0x40);
  FUN_144a787a6(param_1 + 0x80,param_2 + 0x80);
  return param_1;
}



// FUNCTION 14947d9e4 FUN_14947d9e4 body=113 status=ok
// SIG undefined FUN_14947d9e4(void)

void FUN_14947d9e4(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14bcfe5f0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    plVar1 = param_1 + 0xc;
    if ((longlong *)param_1[10] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[10];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bce9c00;
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14947dac2 FUN_14947dac2 body=54 status=ok
// SIG undefined FUN_14947dac2(void)

undefined1 FUN_14947dac2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14947dbd6(param_2,param_3);
    param_3 = param_3 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return 1;
}



// FUNCTION 14947db20 FUN_14947db20 body=59 status=ok
// SIG undefined FUN_14947db20(void)

undefined8 FUN_14947db20(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14947db66 FUN_14947db66 body=34 status=ok
// SIG undefined FUN_14947db66(void)

void FUN_14947db66(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_14947dc2c(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 14947dbd6 FUN_14947dbd6 body=85 status=ok
// SIG undefined FUN_14947dbd6(void)

longlong FUN_14947dbd6(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  FUN_144a787a6(param_1 + 0x18,param_2 + 0x18);
  FUN_144a787a6(param_1 + 0x28,param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x3c);
  uVar2 = *(undefined4 *)(param_2 + 0x40);
  uVar3 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  FUN_1447a122a(param_1 + 0x48,param_2 + 0x48);
  return param_1;
}



// FUNCTION 14947dc2c FUN_14947dc2c body=96 status=ok
// SIG undefined FUN_14947dc2c(void)

void FUN_14947dc2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bcfe3f0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bce9c00;
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14947dcec FUN_14947dcec body=133 status=ok
// SIG undefined FUN_14947dcec(void)

undefined1 FUN_14947dcec(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_144a787a6(param_2 + lVar6 + 8,param_3 + lVar6 + 8);
      FUN_144a787a6(param_2 + lVar6 + 0x18,param_3 + lVar6 + 0x18);
      lVar1 = param_2 + lVar6;
      lVar2 = param_3 + lVar6;
      FUN_144a787a6(lVar1 + 0x28,lVar2 + 0x28);
      uVar3 = *(undefined4 *)(lVar2 + 0x3c);
      uVar4 = *(undefined4 *)(lVar2 + 0x40);
      uVar5 = *(undefined4 *)(lVar2 + 0x44);
      *(undefined4 *)(lVar1 + 0x38) = *(undefined4 *)(lVar2 + 0x38);
      *(undefined4 *)(lVar1 + 0x3c) = uVar3;
      *(undefined4 *)(lVar1 + 0x40) = uVar4;
      *(undefined4 *)(lVar1 + 0x44) = uVar5;
      lVar6 = lVar6 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14947dd9a FUN_14947dd9a body=59 status=ok
// SIG undefined FUN_14947dd9a(void)

undefined8 FUN_14947dd9a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14947dde0 FUN_14947dde0 body=34 status=ok
// SIG undefined FUN_14947dde0(void)

void FUN_14947dde0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_14947de52(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 14947de52 FUN_14947de52 body=82 status=ok
// SIG undefined FUN_14947de52(void)

void FUN_14947de52(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bcfe570;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bce9c00;
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14947df42 FUN_14947df42 body=63 status=ok
// SIG undefined FUN_14947df42(void)

undefined1 FUN_14947df42(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14947e06c(param_2,param_3);
    param_3 = param_3 + 0xa0;
    param_2 = param_2 + 0xa0;
  }
  return 1;
}



// FUNCTION 14947dfaa FUN_14947dfaa body=59 status=ok
// SIG undefined FUN_14947dfaa(void)

undefined8 FUN_14947dfaa(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14947dff6 FUN_14947dff6 body=40 status=ok
// SIG undefined FUN_14947dff6(void)

void FUN_14947dff6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_14947e0d6(param_2);
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 14947e06c FUN_14947e06c body=105 status=ok
// SIG undefined FUN_14947e06c(void)

longlong FUN_14947e06c(longlong param_1,longlong param_2)

{
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  FUN_144a787a6(param_1 + 0x18,param_2 + 0x18);
  FUN_144a787a6(param_1 + 0x28,param_2 + 0x28);
  FUN_149460bd8(param_1 + 0x40,param_2 + 0x40);
  FUN_144a787a6(param_1 + 0x80,param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  return param_1;
}



// FUNCTION 14947e0d6 FUN_14947e0d6 body=127 status=ok
// SIG undefined FUN_14947e0d6(void)

void FUN_14947e0d6(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14bcfe610;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    plVar1 = param_1 + 0xc;
    if ((longlong *)param_1[10] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[10];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bce9c00;
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14947e1f6 FUN_14947e1f6 body=63 status=ok
// SIG undefined FUN_14947e1f6(void)

undefined1 FUN_14947e1f6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14947e320(param_2,param_3);
    param_3 = param_3 + 0xb0;
    param_2 = param_2 + 0xb0;
  }
  return 1;
}



// FUNCTION 14947e25e FUN_14947e25e body=59 status=ok
// SIG undefined FUN_14947e25e(void)

undefined8 FUN_14947e25e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14947e2aa FUN_14947e2aa body=40 status=ok
// SIG undefined FUN_14947e2aa(void)

void FUN_14947e2aa(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    FUN_14947e3a6(param_2);
    *(undefined1 *)(param_2 + 0xb0) = 0;
  }
  return;
}



// FUNCTION 14947e320 FUN_14947e320 body=132 status=ok
// SIG undefined FUN_14947e320(void)

longlong FUN_14947e320(longlong param_1,longlong param_2)

{
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  FUN_144a787a6(param_1 + 0x18,param_2 + 0x18);
  FUN_144a787a6(param_1 + 0x28,param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  FUN_144a787a6(param_1 + 0x40,param_2 + 0x40);
  FUN_149460bd8(param_1 + 0x50,param_2 + 0x50);
  FUN_1447a122a(param_1 + 0x90,param_2 + 0x90);
  FUN_144a787a6(param_1 + 0xa0,param_2 + 0xa0);
  return param_1;
}



// FUNCTION 14947e3a6 FUN_14947e3a6 body=158 status=ok
// SIG undefined FUN_14947e3a6(void)

void FUN_14947e3a6(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14bcfe630;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bce9c00;
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14947e4bc FUN_14947e4bc body=54 status=ok
// SIG undefined FUN_14947e4bc(void)

undefined1 FUN_14947e4bc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14947e5d0(param_2,param_3);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 14947e51a FUN_14947e51a body=59 status=ok
// SIG undefined FUN_14947e51a(void)

undefined8 FUN_14947e51a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14947e560 FUN_14947e560 body=34 status=ok
// SIG undefined FUN_14947e560(void)

void FUN_14947e560(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_14947e634(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 14947e5d0 FUN_14947e5d0 body=98 status=ok
// SIG undefined FUN_14947e5d0(void)

longlong FUN_14947e5d0(longlong param_1,longlong param_2)

{
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  FUN_144a787a6(param_1 + 0x18,param_2 + 0x18);
  FUN_144a787a6(param_1 + 0x28,param_2 + 0x28);
  FUN_144a787a6(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  FUN_1447a122a(param_1 + 0x50,param_2 + 0x50);
  return param_1;
}



// FUNCTION 14947e634 FUN_14947e634 body=110 status=ok
// SIG undefined FUN_14947e634(void)

void FUN_14947e634(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bcfe690;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bce9c00;
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14947e6fa FUN_14947e6fa body=88 status=ok
// SIG undefined FUN_14947e6fa(void)

undefined1 FUN_14947e6fa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      FUN_144a787a6(param_2 + -0x20,param_3 + -0x20);
      FUN_144a787a6(param_2 + -0x10,param_3 + -0x10);
      FUN_144a787a6(param_2,param_3);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14947e77a FUN_14947e77a body=59 status=ok
// SIG undefined FUN_14947e77a(void)

undefined8 FUN_14947e77a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14947e7c0 FUN_14947e7c0 body=34 status=ok
// SIG undefined FUN_14947e7c0(void)

void FUN_14947e7c0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_14947ec22(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 14947e89a FUN_14947e89a body=54 status=ok
// SIG undefined FUN_14947e89a(void)

undefined1 FUN_14947e89a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14947e9ae(param_2,param_3);
    param_3 = param_3 + 0x58;
    param_2 = param_2 + 0x58;
  }
  return 1;
}



// FUNCTION 14947e8f8 FUN_14947e8f8 body=59 status=ok
// SIG undefined FUN_14947e8f8(void)

undefined8 FUN_14947e8f8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14947e93e FUN_14947e93e body=34 status=ok
// SIG undefined FUN_14947e93e(void)

void FUN_14947e93e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_14947ea48(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 14947e9ae FUN_14947e9ae body=153 status=ok
// SIG undefined FUN_14947e9ae(void)

longlong FUN_14947e9ae(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  FUN_144a787a6(param_1 + 0x18,param_2 + 0x18);
  FUN_144a787a6(param_1 + 0x28,param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  lVar3 = *(longlong *)(param_2 + 0x40);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  *(longlong *)(param_1 + 0x40) = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  lVar3 = *(longlong *)(param_2 + 0x50);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  *(longlong *)(param_1 + 0x50) = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  return param_1;
}



// FUNCTION 14947ea48 FUN_14947ea48 body=73 status=ok
// SIG undefined FUN_14947ea48(void)

void FUN_14947ea48(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14bcfe650;
  plVar2 = (longlong *)param_1[10];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  plVar2 = (longlong *)param_1[8];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_14947ec22(param_1);
  return;
}



// FUNCTION 14947eaea FUN_14947eaea body=88 status=ok
// SIG undefined FUN_14947eaea(void)

undefined1 FUN_14947eaea(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      FUN_144a787a6(param_2 + -0x20,param_3 + -0x20);
      FUN_144a787a6(param_2 + -0x10,param_3 + -0x10);
      FUN_144a787a6(param_2,param_3);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14947eb6a FUN_14947eb6a body=59 status=ok
// SIG undefined FUN_14947eb6a(void)

undefined8 FUN_14947eb6a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14947ebb0 FUN_14947ebb0 body=34 status=ok
// SIG undefined FUN_14947ebb0(void)

void FUN_14947ebb0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_14947ec22(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 14947ec22 FUN_14947ec22 body=82 status=ok
// SIG undefined FUN_14947ec22(void)

void FUN_14947ec22(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bcfe670;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bce9c00;
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14947ecdc FUN_14947ecdc body=131 status=ok
// SIG undefined FUN_14947ecdc(void)

undefined1 FUN_14947ecdc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_144a787a6(param_2 + lVar1 + 8,param_3 + lVar1 + 8);
      FUN_144a787a6(param_2 + lVar1 + 0x18,param_3 + lVar1 + 0x18);
      FUN_144a787a6(param_2 + lVar1 + 0x28,param_3 + lVar1 + 0x28);
      *(undefined1 *)(param_2 + lVar1 + 0x38) = *(undefined1 *)(param_3 + lVar1 + 0x38);
      lVar1 = lVar1 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14947ed88 FUN_14947ed88 body=59 status=ok
// SIG undefined FUN_14947ed88(void)

undefined8 FUN_14947ed88(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14947edce FUN_14947edce body=34 status=ok
// SIG undefined FUN_14947edce(void)

void FUN_14947edce(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_14947f1d0(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 14947eea4 FUN_14947eea4 body=131 status=ok
// SIG undefined FUN_14947eea4(void)

undefined1 FUN_14947eea4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_144a787a6(param_2 + lVar1 + 8,param_3 + lVar1 + 8);
      FUN_144a787a6(param_2 + lVar1 + 0x18,param_3 + lVar1 + 0x18);
      FUN_144a787a6(param_2 + lVar1 + 0x28,param_3 + lVar1 + 0x28);
      *(undefined1 *)(param_2 + lVar1 + 0x38) = *(undefined1 *)(param_3 + lVar1 + 0x38);
      lVar1 = lVar1 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14947ef50 FUN_14947ef50 body=59 status=ok
// SIG undefined FUN_14947ef50(void)

undefined8 FUN_14947ef50(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14947ef96 FUN_14947ef96 body=34 status=ok
// SIG undefined FUN_14947ef96(void)

void FUN_14947ef96(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_14947f1d0(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 14947f06c FUN_14947f06c body=131 status=ok
// SIG undefined FUN_14947f06c(void)

undefined1 FUN_14947f06c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_144a787a6(param_2 + lVar1 + 8,param_3 + lVar1 + 8);
      FUN_144a787a6(param_2 + lVar1 + 0x18,param_3 + lVar1 + 0x18);
      FUN_144a787a6(param_2 + lVar1 + 0x28,param_3 + lVar1 + 0x28);
      *(undefined1 *)(param_2 + lVar1 + 0x38) = *(undefined1 *)(param_3 + lVar1 + 0x38);
      lVar1 = lVar1 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14947f118 FUN_14947f118 body=59 status=ok
// SIG undefined FUN_14947f118(void)

undefined8 FUN_14947f118(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14947f15e FUN_14947f15e body=34 status=ok
// SIG undefined FUN_14947f15e(void)

void FUN_14947f15e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_14947f1d0(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 14947f1d0 FUN_14947f1d0 body=82 status=ok
// SIG undefined FUN_14947f1d0(void)

void FUN_14947f1d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bcfe470;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bce9c00;
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14947f222 FUN_14947f222 body=93 status=ok
// SIG undefined FUN_14947f222(void)

void FUN_14947f222(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x98);
  *param_2 = &PTR_FUN_14bcfe6b0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  FUN_144a5dc74(param_2 + 0xd);
  *(undefined1 *)(param_2 + 0xf) = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  return;
}



// FUNCTION 14947f280 FUN_14947f280 body=96 status=ok
// SIG undefined FUN_14947f280(void)

void FUN_14947f280(undefined8 param_1,undefined8 *param_2)

{
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 7) = 0;
  *param_2 = &PTR_FUN_14bcfe6b0;
  *(undefined8 *)((longlong)param_2 + 0x5c) = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  FUN_144a5dc74(param_2 + 0xd);
  *(undefined1 *)(param_2 + 0xf) = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  return;
}



// FUNCTION 14947f304 FUN_14947f304 body=63 status=ok
// SIG undefined FUN_14947f304(void)

undefined1 FUN_14947f304(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14947f42e(param_2,param_3);
    param_3 = param_3 + 0xa0;
    param_2 = param_2 + 0xa0;
  }
  return 1;
}



// FUNCTION 14947f36c FUN_14947f36c body=59 status=ok
// SIG undefined FUN_14947f36c(void)

undefined8 FUN_14947f36c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14947f3b8 FUN_14947f3b8 body=40 status=ok
// SIG undefined FUN_14947f3b8(void)

void FUN_14947f3b8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_14947f4ea(param_2);
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 14947f42e FUN_14947f42e body=187 status=ok
// SIG undefined FUN_14947f42e(void)

longlong FUN_14947f42e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  FUN_144a787a6(param_1 + 0x18,param_2 + 0x18);
  FUN_144a787a6(param_1 + 0x28,param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  FUN_144a787a6(param_1 + 0x40,param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  uVar3 = *(undefined4 *)(param_2 + 0x54);
  uVar4 = *(undefined4 *)(param_2 + 0x58);
  uVar5 = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = uVar3;
  *(undefined4 *)(param_1 + 0x58) = uVar4;
  *(undefined4 *)(param_1 + 0x5c) = uVar5;
  plVar1 = *(longlong **)(param_2 + 0x68);
  plVar2 = *(longlong **)(param_1 + 0x68);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x68) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined1 *)(param_1 + 0x78) = *(undefined1 *)(param_2 + 0x78);
  FUN_144a787a6(param_1 + 0x80,param_2 + 0x80);
  FUN_140bee9ec(param_1 + 0x90,param_2 + 0x90);
  return param_1;
}



// FUNCTION 14947f4ea FUN_14947f4ea body=112 status=ok
// SIG undefined FUN_14947f4ea(void)

void FUN_14947f4ea(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bcfe6b0;
  FUN_1447a1747(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0xd] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xd] + 0x10))();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_14947f1d0(param_1);
  return;
}



// FUNCTION 14947f606 FUN_14947f606 body=63 status=ok
// SIG undefined FUN_14947f606(void)

undefined1 FUN_14947f606(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14947f730(param_2,param_3);
    param_3 = param_3 + 0xb0;
    param_2 = param_2 + 0xb0;
  }
  return 1;
}



// FUNCTION 14947f66e FUN_14947f66e body=59 status=ok
// SIG undefined FUN_14947f66e(void)

undefined8 FUN_14947f66e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14947f6ba FUN_14947f6ba body=40 status=ok
// SIG undefined FUN_14947f6ba(void)

void FUN_14947f6ba(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    FUN_14947f7d0(param_2);
    *(undefined1 *)(param_2 + 0xb0) = 0;
  }
  return;
}



// FUNCTION 14947f730 FUN_14947f730 body=158 status=ok
// SIG undefined FUN_14947f730(void)

longlong FUN_14947f730(longlong param_1,longlong param_2)

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
  
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  FUN_144a787a6(param_1 + 0x18,param_2 + 0x18);
  uVar1 = *(undefined4 *)(param_2 + 0x2c);
  uVar2 = *(undefined4 *)(param_2 + 0x30);
  uVar3 = *(undefined4 *)(param_2 + 0x34);
  uVar4 = *(undefined4 *)(param_2 + 0x38);
  uVar5 = *(undefined4 *)(param_2 + 0x3c);
  uVar6 = *(undefined4 *)(param_2 + 0x40);
  uVar7 = *(undefined4 *)(param_2 + 0x44);
  uVar8 = *(undefined4 *)(param_2 + 0x48);
  uVar9 = *(undefined4 *)(param_2 + 0x4c);
  uVar10 = *(undefined4 *)(param_2 + 0x50);
  uVar11 = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  *(undefined4 *)(param_1 + 0x34) = uVar3;
  *(undefined4 *)(param_1 + 0x38) = uVar4;
  *(undefined4 *)(param_1 + 0x3c) = uVar5;
  *(undefined4 *)(param_1 + 0x40) = uVar6;
  *(undefined4 *)(param_1 + 0x44) = uVar7;
  *(undefined4 *)(param_1 + 0x48) = uVar8;
  *(undefined4 *)(param_1 + 0x4c) = uVar9;
  *(undefined4 *)(param_1 + 0x50) = uVar10;
  *(undefined4 *)(param_1 + 0x54) = uVar11;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  FUN_145ebd534(param_1 + 0x60,param_2 + 0x60);
  FUN_145ebd534(param_1 + 0x70,param_2 + 0x70);
  FUN_144a787a6(param_1 + 0x80,param_2 + 0x80);
  FUN_144a787a6(param_1 + 0x90,param_2 + 0x90);
  FUN_144a787a6(param_1 + 0xa0,param_2 + 0xa0);
  return param_1;
}



// FUNCTION 14947f7d0 FUN_14947f7d0 body=171 status=ok
// SIG undefined FUN_14947f7d0(void)

void FUN_14947f7d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bceb5b0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_141239a12(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_141239a12(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bce9c00;
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14947f8f0 FUN_14947f8f0 body=54 status=ok
// SIG undefined FUN_14947f8f0(void)

undefined1 FUN_14947f8f0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14947fa04(param_2,param_3);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 14947f94e FUN_14947f94e body=59 status=ok
// SIG undefined FUN_14947f94e(void)

undefined8 FUN_14947f94e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14947f994 FUN_14947f994 body=34 status=ok
// SIG undefined FUN_14947f994(void)

void FUN_14947f994(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_14947fa62(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 14947fa04 FUN_14947fa04 body=93 status=ok
// SIG undefined FUN_14947fa04(void)

longlong FUN_14947fa04(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  FUN_144a787a6(param_1 + 0x18,param_2 + 0x18);
  FUN_144a787a6(param_1 + 0x28,param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x3c);
  uVar2 = *(undefined4 *)(param_2 + 0x40);
  uVar3 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  FUN_144a787a6(param_1 + 0x50,param_2 + 0x50);
  return param_1;
}



// FUNCTION 14947fa62 FUN_14947fa62 body=96 status=ok
// SIG undefined FUN_14947fa62(void)

void FUN_14947fa62(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bceb5d0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bce9c00;
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14947fac2 FUN_14947fac2 body=38 status=ok
// SIG undefined FUN_14947fac2(void)

undefined8 FUN_14947fac2(undefined8 param_1,int param_2)

{
  FUN_144a7fc42();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14947fae8 FUN_14947fae8 body=38 status=ok
// SIG undefined FUN_14947fae8(void)

undefined8 FUN_14947fae8(undefined8 param_1,int param_2)

{
  FUN_144a7fc42();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14947fb0e FUN_14947fb0e body=135 status=ok
// SIG undefined FUN_14947fb0e(void)

void FUN_14947fb0e(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
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
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = &PTR_FUN_14bcfe3b0;
  param_2[3] = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140e6511c(param_2 + 4);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_140e6507e(param_2 + 10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14947fb96 FUN_14947fb96 body=104 status=ok
// SIG undefined FUN_14947fb96(void)

void FUN_14947fb96(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = &PTR_FUN_14bcfe3b0;
  param_2[3] = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_140e6511c(param_2 + 4);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_140e6507e(param_2 + 10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14947fc24 FUN_14947fc24 body=63 status=ok
// SIG undefined FUN_14947fc24(void)

undefined1 FUN_14947fc24(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14947fd4e(param_2,param_3);
    param_3 = param_3 + 0x90;
    param_2 = param_2 + 0x90;
  }
  return 1;
}



// FUNCTION 14947fc8c FUN_14947fc8c body=59 status=ok
// SIG undefined FUN_14947fc8c(void)

undefined8 FUN_14947fc8c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14947fcd8 FUN_14947fcd8 body=40 status=ok
// SIG undefined FUN_14947fcd8(void)

void FUN_14947fcd8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x90) == '\x01') {
    FUN_14947fdd6(param_2);
    *(undefined1 *)(param_2 + 0x90) = 0;
  }
  return;
}



// FUNCTION 14947fd4e FUN_14947fd4e body=135 status=ok
// SIG undefined FUN_14947fd4e(void)

longlong FUN_14947fd4e(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x34);
  uVar2 = *(undefined4 *)(param_2 + 0x38);
  uVar3 = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  FUN_144a787a6(param_1 + 0x40,param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  FUN_1406fa324(param_1 + 0x58,param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  FUN_144a787a6(param_1 + 0x70,param_2 + 0x70);
  FUN_1406fa324(param_1 + 0x80,param_2 + 0x80);
  return param_1;
}



// FUNCTION 14947fdd6 FUN_14947fdd6 body=77 status=ok
// SIG undefined FUN_14947fdd6(void)

void FUN_14947fdd6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bcfe3b0;
  FUN_14121c54c(param_1 + 10);
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bce9c00;
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14947fe24 FUN_14947fe24 body=132 status=ok
// SIG undefined FUN_14947fe24(void)

void FUN_14947fe24(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_2[0xc] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = &PTR_FUN_14bcfe4b0;
  param_2[3] = 0;
  local_38 = 0;
  uStack_30 = 0;
  FUN_140e6511c(param_2 + 4);
  *(undefined4 *)(param_2 + 10) = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14947feaa FUN_14947feaa body=114 status=ok
// SIG undefined FUN_14947feaa(void)

void FUN_14947feaa(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = &PTR_FUN_14bcfe4b0;
  param_2[3] = 0;
  local_38 = 0;
  uStack_30 = 0;
  FUN_140e6511c(param_2 + 4);
  *(undefined4 *)(param_2 + 10) = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14947ff42 FUN_14947ff42 body=54 status=ok
// SIG undefined FUN_14947ff42(void)

undefined1 FUN_14947ff42(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149480056(param_2,param_3);
    param_3 = param_3 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return 1;
}



// FUNCTION 14947ffa0 FUN_14947ffa0 body=59 status=ok
// SIG undefined FUN_14947ffa0(void)

undefined8 FUN_14947ffa0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14947ffe6 FUN_14947ffe6 body=34 status=ok
// SIG undefined FUN_14947ffe6(void)

void FUN_14947ffe6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_1494800be(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 149480056 FUN_149480056 body=102 status=ok
// SIG undefined FUN_149480056(void)

longlong FUN_149480056(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x34);
  uVar2 = *(undefined4 *)(param_2 + 0x38);
  uVar3 = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  FUN_144a787a6(param_1 + 0x40,param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  FUN_1447a122a(param_1 + 0x58,param_2 + 0x58);
  return param_1;
}



// FUNCTION 1494800be FUN_1494800be body=82 status=ok
// SIG undefined FUN_1494800be(void)

void FUN_1494800be(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bcfe4b0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bce9c00;
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149480160 FUN_149480160 body=93 status=ok
// SIG undefined FUN_149480160(void)

undefined1 FUN_149480160(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_144a787a6(param_2 + 8 + lVar6,param_3 + 8 + lVar6);
      puVar1 = (undefined4 *)(param_3 + 0x18 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x18 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      lVar6 = lVar6 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1494801e6 FUN_1494801e6 body=59 status=ok
// SIG undefined FUN_1494801e6(void)

undefined8 FUN_1494801e6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14948022c FUN_14948022c body=48 status=ok
// SIG undefined FUN_14948022c(void)

void FUN_14948022c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 5) == '\x01') {
    *param_2 = &PTR_FUN_14bce9c00;
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 5) = 0;
  }
  return;
}



// FUNCTION 1494802ac FUN_1494802ac body=147 status=ok
// SIG undefined FUN_1494802ac(void)

void FUN_1494802ac(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = &PTR_FUN_14bcfe4d0;
  param_2[3] = 0;
  local_38 = 0;
  uStack_30 = 0;
  FUN_140e6511c(param_2 + 4);
  local_48 = 0;
  uStack_40 = 0;
  FUN_140e6511c(param_2 + 10);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149480340 FUN_149480340 body=123 status=ok
// SIG undefined FUN_149480340(void)

void FUN_149480340(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = &PTR_FUN_14bcfe4d0;
  param_2[3] = 0;
  local_38 = 0;
  uStack_30 = 0;
  FUN_140e6511c(param_2 + 4);
  local_48 = 0;
  uStack_40 = 0;
  FUN_140e6511c(param_2 + 10);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494803e0 FUN_1494803e0 body=63 status=ok
// SIG undefined FUN_1494803e0(void)

undefined1 FUN_1494803e0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14948050a(param_2,param_3);
    param_3 = param_3 + 0x80;
    param_2 = param_2 + 0x80;
  }
  return 1;
}



// FUNCTION 149480448 FUN_149480448 body=59 status=ok
// SIG undefined FUN_149480448(void)

undefined8 FUN_149480448(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149480494 FUN_149480494 body=40 status=ok
// SIG undefined FUN_149480494(void)

void FUN_149480494(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x80) == '\x01') {
    FUN_149480584(param_2);
    *(undefined1 *)(param_2 + 0x80) = 0;
  }
  return;
}



// FUNCTION 14948050a FUN_14948050a body=120 status=ok
// SIG undefined FUN_14948050a(void)

longlong FUN_14948050a(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x34);
  uVar2 = *(undefined4 *)(param_2 + 0x38);
  uVar3 = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  FUN_144a787a6(param_1 + 0x40,param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  uVar1 = *(undefined4 *)(param_2 + 100);
  uVar2 = *(undefined4 *)(param_2 + 0x68);
  uVar3 = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 100) = uVar1;
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  *(undefined4 *)(param_1 + 0x6c) = uVar3;
  FUN_144a787a6(param_1 + 0x70,param_2 + 0x70);
  return param_1;
}



// FUNCTION 149480584 FUN_149480584 body=82 status=ok
// SIG undefined FUN_149480584(void)

void FUN_149480584(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bcfe4d0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bce9c00;
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1494805d6 FUN_1494805d6 body=97 status=ok
// SIG undefined FUN_1494805d6(void)

void FUN_1494805d6(undefined8 param_1,undefined8 *param_2)

{
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
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
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = &PTR_FUN_14bcfe510;
  param_2[3] = 0;
  FUN_140e6507e(param_2 + 4);
  FUN_140e6507e(param_2 + 0xc);
  return;
}



// FUNCTION 149480638 FUN_149480638 body=59 status=ok
// SIG undefined FUN_149480638(void)

void FUN_149480638(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = &PTR_FUN_14bcfe510;
  param_2[3] = 0;
  FUN_140e6507e(param_2 + 4);
  FUN_140e6507e(param_2 + 0xc);
  return;
}



// FUNCTION 149480698 FUN_149480698 body=63 status=ok
// SIG undefined FUN_149480698(void)

undefined1 FUN_149480698(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1494807c2(param_2,param_3);
    param_3 = param_3 + 0xa0;
    param_2 = param_2 + 0xa0;
  }
  return 1;
}



// FUNCTION 149480700 FUN_149480700 body=59 status=ok
// SIG undefined FUN_149480700(void)

undefined8 FUN_149480700(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14948074c FUN_14948074c body=40 status=ok
// SIG undefined FUN_14948074c(void)

void FUN_14948074c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_149480860(param_2);
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 1494807c2 FUN_1494807c2 body=156 status=ok
// SIG undefined FUN_1494807c2(void)

longlong FUN_1494807c2(longlong param_1,longlong param_2)

{
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  FUN_1406fa324(param_1 + 0x28,param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  FUN_144a787a6(param_1 + 0x40,param_2 + 0x40);
  FUN_1406fa324(param_1 + 0x50,param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  FUN_1406fa324(param_1 + 0x68,param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  FUN_144a787a6(param_1 + 0x80,param_2 + 0x80);
  FUN_1406fa324(param_1 + 0x90,param_2 + 0x90);
  return param_1;
}



// FUNCTION 149480860 FUN_149480860 body=72 status=ok
// SIG undefined FUN_149480860(void)

void FUN_149480860(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bcfe510;
  FUN_14121c54c(param_1 + 0xc);
  FUN_14121c54c(param_1 + 4);
  *param_1 = &PTR_FUN_14bce9c00;
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1494808a8 FUN_1494808a8 body=100 status=ok
// SIG undefined FUN_1494808a8(void)

void FUN_1494808a8(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = &PTR_FUN_14bcfe390;
  param_2[3] = 0;
  local_18 = 0;
  uStack_10 = 0;
  FUN_140e6511c(param_2 + 4);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14948090e FUN_14948090e body=88 status=ok
// SIG undefined FUN_14948090e(void)

void FUN_14948090e(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = &PTR_FUN_14bcfe390;
  param_2[3] = 0;
  local_18 = 0;
  uStack_10 = 0;
  FUN_140e6511c(param_2 + 4);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14948098c FUN_14948098c body=107 status=ok
// SIG undefined FUN_14948098c(void)

undefined8 FUN_14948098c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
    do {
      FUN_144a787a6(param_2 + -0x38,param_3 + -0x38);
      *(undefined8 *)(param_2 + -0x28) = *(undefined8 *)(param_3 + -0x28);
      *(undefined8 *)(param_2 + -0x20) = *(undefined8 *)(param_3 + -0x20);
      *(undefined8 *)(param_2 + -0x18) = *(undefined8 *)(param_3 + -0x18);
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_144a787a6(param_2,param_3);
      param_3 = param_3 + 0x50;
      param_2 = param_2 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149480a20 FUN_149480a20 body=59 status=ok
// SIG undefined FUN_149480a20(void)

undefined8 FUN_149480a20(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149480a66 FUN_149480a66 body=34 status=ok
// SIG undefined FUN_149480a66(void)

void FUN_149480a66(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_149480ad8(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 149480ad8 FUN_149480ad8 body=68 status=ok
// SIG undefined FUN_149480ad8(void)

void FUN_149480ad8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bcfe390;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bce9c00;
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149480b1c FUN_149480b1c body=140 status=ok
// SIG undefined FUN_149480b1c(void)

void FUN_149480b1c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_2[0xe] = 0;
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
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = &PTR_FUN_14bcfe410;
  param_2[3] = 0;
  local_38 = 0;
  uStack_30 = 0;
  FUN_140e6511c(param_2 + 4);
  *(undefined4 *)(param_2 + 10) = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149480baa FUN_149480baa body=118 status=ok
// SIG undefined FUN_149480baa(void)

void FUN_149480baa(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = &PTR_FUN_14bcfe410;
  param_2[3] = 0;
  local_38 = 0;
  uStack_30 = 0;
  FUN_140e6511c(param_2 + 4);
  *(undefined4 *)(param_2 + 10) = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149480c46 FUN_149480c46 body=54 status=ok
// SIG undefined FUN_149480c46(void)

undefined1 FUN_149480c46(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149480d5a(param_2,param_3);
    param_3 = param_3 + 0x78;
    param_2 = param_2 + 0x78;
  }
  return 1;
}



// FUNCTION 149480ca4 FUN_149480ca4 body=59 status=ok
// SIG undefined FUN_149480ca4(void)

undefined8 FUN_149480ca4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149480cea FUN_149480cea body=34 status=ok
// SIG undefined FUN_149480cea(void)

void FUN_149480cea(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_149480dce(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 149480d5a FUN_149480d5a body=115 status=ok
// SIG undefined FUN_149480d5a(void)

longlong FUN_149480d5a(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x34);
  uVar2 = *(undefined4 *)(param_2 + 0x38);
  uVar3 = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  FUN_144a787a6(param_1 + 0x40,param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  FUN_1447a122a(param_1 + 0x58,param_2 + 0x58);
  FUN_1447a122a(param_1 + 0x68,param_2 + 0x68);
  return param_1;
}



// FUNCTION 149480dce FUN_149480dce body=96 status=ok
// SIG undefined FUN_149480dce(void)

void FUN_149480dce(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bcfe410;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bce9c00;
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149480e7e FUN_149480e7e body=93 status=ok
// SIG undefined FUN_149480e7e(void)

undefined1 FUN_149480e7e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      FUN_144a787a6(param_2 + 8 + lVar6,param_3 + 8 + lVar6);
      puVar1 = (undefined4 *)(param_3 + 0x18 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x18 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      lVar6 = lVar6 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149480f04 FUN_149480f04 body=59 status=ok
// SIG undefined FUN_149480f04(void)

undefined8 FUN_149480f04(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149480f4a FUN_149480f4a body=48 status=ok
// SIG undefined FUN_149480f4a(void)

void FUN_149480f4a(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 5) == '\x01') {
    *param_2 = &PTR_FUN_14bce9c00;
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 5) = 0;
  }
  return;
}



// FUNCTION 149480fca FUN_149480fca body=24 status=ok
// SIG undefined FUN_149480fca(void)

void FUN_149480fca(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14bce9c00;
  lVar1 = param_1[1];
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    return;
  }
  return;
}



// FUNCTION 149480fe2 FUN_149480fe2 body=147 status=ok
// SIG undefined FUN_149480fe2(void)

void FUN_149480fe2(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = &PTR_FUN_14bcfe490;
  param_2[3] = 0;
  local_38 = 0;
  uStack_30 = 0;
  FUN_140e6511c(param_2 + 4);
  local_48 = 0;
  uStack_40 = 0;
  FUN_140e6511c(param_2 + 10);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149481076 FUN_149481076 body=123 status=ok
// SIG undefined FUN_149481076(void)

void FUN_149481076(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = &PTR_FUN_14bcfe490;
  param_2[3] = 0;
  local_38 = 0;
  uStack_30 = 0;
  FUN_140e6511c(param_2 + 4);
  local_48 = 0;
  uStack_40 = 0;
  FUN_140e6511c(param_2 + 10);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149481116 FUN_149481116 body=63 status=ok
// SIG undefined FUN_149481116(void)

undefined1 FUN_149481116(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149481240(param_2,param_3);
    param_3 = param_3 + 0x80;
    param_2 = param_2 + 0x80;
  }
  return 1;
}



// FUNCTION 14948117e FUN_14948117e body=59 status=ok
// SIG undefined FUN_14948117e(void)

undefined8 FUN_14948117e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494811ca FUN_1494811ca body=40 status=ok
// SIG undefined FUN_1494811ca(void)

void FUN_1494811ca(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x80) == '\x01') {
    FUN_1494812ba(param_2);
    *(undefined1 *)(param_2 + 0x80) = 0;
  }
  return;
}



// FUNCTION 149481240 FUN_149481240 body=120 status=ok
// SIG undefined FUN_149481240(void)

longlong FUN_149481240(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x34);
  uVar2 = *(undefined4 *)(param_2 + 0x38);
  uVar3 = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  FUN_144a787a6(param_1 + 0x40,param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  uVar1 = *(undefined4 *)(param_2 + 100);
  uVar2 = *(undefined4 *)(param_2 + 0x68);
  uVar3 = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 100) = uVar1;
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  *(undefined4 *)(param_1 + 0x6c) = uVar3;
  FUN_144a787a6(param_1 + 0x70,param_2 + 0x70);
  return param_1;
}



// FUNCTION 1494812ba FUN_1494812ba body=82 status=ok
// SIG undefined FUN_1494812ba(void)

void FUN_1494812ba(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bcfe490;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bce9c00;
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14948130c FUN_14948130c body=138 status=ok
// SIG undefined FUN_14948130c(void)

void FUN_14948130c(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar2 = 8;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar2 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841e01];
  }
  else {
    uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,8,8);
  }
  iVar1 = (int)(uVar2 >> 3);
  iVar3 = 0x7fffffff;
  if (0 < iVar1) {
    iVar3 = iVar1;
  }
  FUN_1446f8d3c(param_1,0,iVar3,8,8);
  *(int *)(param_1 + 0xc) = iVar3;
  return;
}



// FUNCTION 149481396 FUN_149481396 body=129 status=ok
// SIG undefined FUN_149481396(void)

void FUN_149481396(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_2[0xc] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_140e6511c(param_2 + 2);
  FUN_141215e22(param_2 + 8);
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149481418 FUN_149481418 body=105 status=ok
// SIG undefined FUN_149481418(void)

void FUN_149481418(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  local_38 = 0;
  uStack_30 = 0;
  FUN_140e6511c(param_2 + 2);
  FUN_141215e22(param_2 + 8);
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494814a0 FUN_1494814a0 body=54 status=ok
// SIG undefined FUN_1494814a0(void)

undefined1 FUN_1494814a0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1494815b4(param_2,param_3);
    param_3 = param_3 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return 1;
}



// FUNCTION 1494814fe FUN_1494814fe body=59 status=ok
// SIG undefined FUN_1494814fe(void)

undefined8 FUN_1494814fe(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149481544 FUN_149481544 body=34 status=ok
// SIG undefined FUN_149481544(void)

void FUN_149481544(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_1494677f4(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 1494815b4 FUN_1494815b4 body=107 status=ok
// SIG undefined FUN_1494815b4(void)

longlong FUN_1494815b4(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_144a787a6();
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined4 *)(param_2 + 0x24);
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  uVar3 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  FUN_144a787a6(param_1 + 0x30,param_2 + 0x30);
  if (param_1 != param_2) {
    FUN_1401fa0f0(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_2 + 0x48));
  }
  FUN_144a787a6(param_1 + 0x50,param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  return param_1;
}



// FUNCTION 149481630 FUN_149481630 body=44 status=ok
// SIG undefined FUN_149481630(void)

void FUN_149481630(undefined8 param_1,longlong *param_2)

{
  FUN_145bebbc4(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149481672 FUN_149481672 body=54 status=ok
// SIG undefined FUN_149481672(void)

undefined1 FUN_149481672(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14948176c(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1494816d0 FUN_1494816d0 body=59 status=ok
// SIG undefined FUN_1494816d0(void)

undefined8 FUN_1494816d0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14948176c FUN_14948176c body=95 status=ok
// SIG undefined FUN_14948176c(void)

undefined8 * FUN_14948176c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145bebbc4(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1494817cc(param_1,iVar1);
      FUN_14948183b(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1494817cc FUN_1494817cc body=111 status=ok
// SIG undefined FUN_1494817cc(void)

void FUN_1494817cc(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14948183b FUN_14948183b body=52 status=ok
// SIG undefined FUN_14948183b(void)

void FUN_14948183b(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_149467726(param_1,param_2);
    param_1 = param_1 + 0x68;
    param_2 = param_2 + 0x68;
  }
  return;
}



// FUNCTION 149481870 FUN_149481870 body=50 status=ok
// SIG undefined FUN_149481870(void)

void FUN_149481870(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_145bebbc4(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 1494818a2 FUN_1494818a2 body=91 status=ok
// SIG undefined FUN_1494818a2(void)

undefined8 * FUN_1494818a2(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  
  *param_1 = 0;
  lVar1 = *param_2;
  iVar2 = (int)((ulonglong)(param_2[1] - lVar1) >> 3) * -0x55555555;
  *(int *)(param_1 + 1) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1494818fe(param_1,iVar2,0);
    FUN_149481971(*param_1,lVar1,iVar2);
  }
  return param_1;
}



// FUNCTION 1494818fe FUN_1494818fe body=115 status=ok
// SIG undefined FUN_1494818fe(void)

void FUN_1494818fe(longlong param_1,int param_2,int param_3)

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



// FUNCTION 149481971 FUN_149481971 body=144 status=ok
// SIG undefined FUN_149481971(void)

void FUN_149481971(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      *(undefined8 *)(param_1 + 8 + lVar2) = 0;
      iVar1 = *(int *)(param_2 + 0x10 + lVar2);
      _Src = *(void **)(param_2 + 8 + lVar2);
      *(int *)(param_1 + 0x10 + lVar2) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x14 + lVar2) = 0;
      }
      else {
        FUN_1446dd670(param_1 + 8 + lVar2,iVar1,0);
        memcpy(*(void **)(param_1 + 8 + lVar2),_Src,(longlong)iVar1 * 2);
      }
      lVar2 = lVar2 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 149481a01 FUN_149481a01 body=47 status=ok
// SIG undefined FUN_149481a01(void)

void FUN_149481a01(longlong param_1,int param_2)

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



// FUNCTION 149481a30 FUN_149481a30 body=147 status=ok
// SIG undefined FUN_149481a30(void)

void FUN_149481a30(longlong param_1,int param_2)

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



// FUNCTION 149481ac4 FUN_149481ac4 body=80 status=ok
// SIG undefined FUN_149481ac4(void)

longlong * FUN_149481ac4(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_145b26c9a(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 149481b14 FUN_149481b14 body=133 status=ok
// SIG undefined FUN_149481b14(void)

void FUN_149481b14(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  local_38 = 0;
  uStack_30 = 0;
  FUN_140e6511c(param_2 + 3);
  FUN_141215e22(param_2 + 9);
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149481b9a FUN_149481b9a body=109 status=ok
// SIG undefined FUN_149481b9a(void)

void FUN_149481b9a(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  local_38 = 0;
  uStack_30 = 0;
  FUN_140e6511c(param_2 + 3);
  FUN_141215e22(param_2 + 9);
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149481c26 FUN_149481c26 body=54 status=ok
// SIG undefined FUN_149481c26(void)

undefined1 FUN_149481c26(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149481d80(param_2,param_3);
    param_3 = param_3 + 0x78;
    param_2 = param_2 + 0x78;
  }
  return 1;
}



// FUNCTION 149481c84 FUN_149481c84 body=59 status=ok
// SIG undefined FUN_149481c84(void)

undefined8 FUN_149481c84(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149481cca FUN_149481cca body=34 status=ok
// SIG undefined FUN_149481cca(void)

void FUN_149481cca(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_149481d3a(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 149481d3a FUN_149481d3a body=70 status=ok
// SIG undefined FUN_149481d3a(void)

void FUN_149481d3a(longlong *param_1)

{
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_1401f9f5c(param_1 + 9);
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149481d80 FUN_149481d80 body=150 status=ok
// SIG undefined FUN_149481d80(void)

longlong FUN_149481d80(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  FUN_144a787a6();
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined4 *)(param_2 + 0x2c);
  uVar2 = *(undefined4 *)(param_2 + 0x30);
  uVar3 = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  *(undefined4 *)(param_1 + 0x34) = uVar3;
  FUN_144a787a6(param_1 + 0x38,param_2 + 0x38);
  if (param_1 != param_2) {
    FUN_1401fa0f0(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),*(undefined8 *)(param_2 + 0x50));
  }
  FUN_144a787a6(param_1 + 0x58,param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  lVar4 = *(longlong *)(param_2 + 0x70);
  if (DAT_14c950c29 == '\x01') {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = *(longlong *)(param_2 + 0x70);
    }
  }
  *(longlong *)(param_1 + 0x70) = lVar4;
  return param_1;
}



// FUNCTION 149481e28 FUN_149481e28 body=44 status=ok
// SIG undefined FUN_149481e28(void)

void FUN_149481e28(undefined8 param_1,longlong *param_2)

{
  FUN_145bcab05(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149481e6a FUN_149481e6a body=54 status=ok
// SIG undefined FUN_149481e6a(void)

undefined1 FUN_149481e6a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149481f64(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 149481ec8 FUN_149481ec8 body=59 status=ok
// SIG undefined FUN_149481ec8(void)

undefined8 FUN_149481ec8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149481f64 FUN_149481f64 body=95 status=ok
// SIG undefined FUN_149481f64(void)

undefined8 * FUN_149481f64(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145bcab05(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_149481fc4(param_1,iVar1);
      FUN_149482033(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 149481fc4 FUN_149481fc4 body=111 status=ok
// SIG undefined FUN_149481fc4(void)

void FUN_149481fc4(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x78,8);
    iVar2 = (int)(uVar1 / 0x78);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x78,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 149482033 FUN_149482033 body=52 status=ok
// SIG undefined FUN_149482033(void)

void FUN_149482033(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_149482068(param_1,param_2);
    param_1 = param_1 + 0x78;
    param_2 = param_2 + 0x78;
  }
  return;
}



// FUNCTION 149482068 FUN_149482068 body=244 status=ok
// SIG undefined FUN_149482068(void)

undefined8 * FUN_149482068(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  
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
  param_1[2] = param_2[2];
  FUN_14945f130(param_1 + 3,param_2 + 3);
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_1401fa0f0(param_1 + 9,param_2[9],param_2[10]);
  param_1[0xb] = 0;
  iVar1 = *(int *)(param_2 + 0xc);
  pvVar2 = (void *)param_2[0xb];
  *(int *)(param_1 + 0xc) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xb,iVar1,0);
    memcpy((void *)param_1[0xb],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0xd] = param_2[0xd];
  lVar3 = param_2[0xe];
  param_1[0xe] = lVar3;
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 14948215e FUN_14948215e body=50 status=ok
// SIG undefined FUN_14948215e(void)

void FUN_14948215e(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_145bcab05(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 149482190 FUN_149482190 body=146 status=ok
// SIG undefined FUN_149482190(void)

longlong FUN_149482190(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = FUN_149482224();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1;
    if (lVar3 + lVar2 * 0x28 != 0) goto LAB_1494821cf;
  }
  local_40 = param_3;
  local_38 = param_4;
  FUN_1494822a8(param_1,&local_2c,param_2);
  lVar2 = (longlong)local_2c;
  lVar3 = *param_1;
LAB_1494821cf:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar3 + lVar2 * 0x28 + 0x18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149482224 FUN_149482224 body=131 status=ok
// SIG undefined FUN_149482224(void)

int FUN_149482224(longlong *param_1,uint param_2,double *param_3)

{
  longlong lVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar4 = *param_1;
      do {
        lVar6 = (longlong)iVar3;
        dVar2 = *(double *)(lVar4 + lVar6 * 0x28);
        if ((dVar2 == *param_3) && (!NAN(dVar2) && !NAN(*param_3))) {
          lVar1 = lVar4 + lVar6 * 0x28;
          dVar2 = *(double *)(lVar1 + 8);
          if ((dVar2 == param_3[1]) && (!NAN(dVar2) && !NAN(param_3[1]))) {
            dVar2 = *(double *)(lVar1 + 0x10);
            if ((dVar2 == param_3[2]) && (!NAN(dVar2) && !NAN(param_3[2]))) {
              return iVar3;
            }
          }
        }
        iVar3 = *(int *)(lVar4 + 0x20 + lVar6 * 0x28);
      } while (iVar3 != -1);
    }
  }
  return -1;
}



// FUNCTION 1494822a8 FUN_1494822a8 body=287 status=ok
// SIG undefined FUN_1494822a8(void)

undefined4 * FUN_1494822a8(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1494823c8(param_1,local_48);
  puVar1 = (undefined4 *)*param_4;
  puVar2 = (undefined4 *)param_4[1];
  *(undefined8 *)(local_40 + 4) = *(undefined8 *)(puVar1 + 4);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *local_40 = *puVar1;
  local_40[1] = uVar3;
  local_40[2] = uVar4;
  local_40[3] = uVar5;
  local_40[6] = *puVar2;
  local_40[8] = 0xffffffff;
  cVar6 = FUN_1494824ae(param_1,param_3,local_40,local_48);
  if (cVar6 == '\0') {
    uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar7) {
      uVar8 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      local_40[9] = param_3;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      local_40[8] = *(undefined4 *)
                     (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) *
                               4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_14948257e(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494823c8 FUN_1494823c8 body=230 status=ok
// SIG undefined FUN_1494823c8(void)

int * FUN_1494823c8(longlong *param_1,int *param_2)

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
      FUN_140549c28(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 1494824ae FUN_1494824ae body=93 status=ok
// SIG undefined FUN_1494824ae(void)

undefined8 FUN_1494824ae(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

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
  int iVar10;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar10 = FUN_149482224(), iVar10 != -1)) {
    lVar2 = *param_1;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    uVar7 = param_3[5];
    uVar8 = param_3[6];
    uVar9 = param_3[7];
    puVar1 = (undefined4 *)(lVar2 + 0x10 + (longlong)iVar10 * 0x28);
    *puVar1 = param_3[4];
    puVar1[1] = uVar7;
    puVar1[2] = uVar8;
    puVar1[3] = uVar9;
    puVar1 = (undefined4 *)(lVar2 + (longlong)iVar10 * 0x28);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_14948250c(param_1,*param_4);
    *param_4 = iVar10;
    return 1;
  }
  return 0;
}



// FUNCTION 14948250c FUN_14948250c body=114 status=ok
// SIG undefined FUN_14948250c(void)

void FUN_14948250c(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
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



// FUNCTION 14948257e FUN_14948257e body=446 status=ok
// SIG undefined FUN_14948257e(void)

void FUN_14948257e(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar4 = local_68;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar3 != uVar9);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_58);
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar4 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar5 = local_68._4_4_;
      local_68 = uVar4;
      do {
        lVar2 = *local_80 + (longlong)iVar5 * 0x28;
        iVar6 = FUN_1448eb174(lVar2,0x18,0);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x24) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x20) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar5 = local_68._4_4_;
        uVar4 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14948273e FUN_14948273e body=52 status=ok
// SIG undefined FUN_14948273e(void)

void FUN_14948273e(longlong *param_1)

{
  FUN_149482772();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149482772 FUN_149482772 body=89 status=ok
// SIG undefined FUN_149482772(void)

void FUN_149482772(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 149482870 FUN_149482870 body=59 status=ok
// SIG undefined FUN_149482870(void)

undefined8 FUN_149482870(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14948296e FUN_14948296e body=63 status=ok
// SIG undefined FUN_14948296e(void)

undefined1 FUN_14948296e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149482ade(param_2,param_3);
    param_3 = param_3 + 0x88;
    param_2 = param_2 + 0x88;
  }
  return 1;
}



// FUNCTION 1494829d6 FUN_1494829d6 body=59 status=ok
// SIG undefined FUN_1494829d6(void)

undefined8 FUN_1494829d6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149482a22 FUN_149482a22 body=40 status=ok
// SIG undefined FUN_149482a22(void)

void FUN_149482a22(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_149482a98(param_2);
    *(undefined1 *)(param_2 + 0x88) = 0;
  }
  return;
}



// FUNCTION 149482a98 FUN_149482a98 body=70 status=ok
// SIG undefined FUN_149482a98(void)

void FUN_149482a98(longlong *param_1)

{
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_145b26c5e(param_1 + 8);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149482ade FUN_149482ade body=114 status=ok
// SIG undefined FUN_149482ade(void)

longlong FUN_149482ade(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  FUN_144a787a6();
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 0x1c);
  uVar4 = *(undefined4 *)(param_2 + 0x1c);
  uVar5 = *(undefined4 *)(param_2 + 0x20);
  uVar6 = *(undefined4 *)(param_2 + 0x24);
  uVar7 = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  *(undefined4 *)(param_1 + 0x1c) = uVar4;
  *(undefined4 *)(param_1 + 0x20) = uVar5;
  *(undefined4 *)(param_1 + 0x24) = uVar6;
  *(undefined4 *)(param_1 + 0x28) = uVar7;
  FUN_1447a122a(param_1 + 0x30,param_2 + 0x30);
  FUN_1447a122a(param_1 + 0x40,param_2 + 0x40);
  FUN_14945acde(param_1 + 0x50,param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  uVar1 = *(undefined4 *)(param_2 + 0x6c);
  uVar2 = *(undefined4 *)(param_2 + 0x70);
  uVar3 = *(undefined4 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  *(undefined4 *)(param_1 + 0x70) = uVar2;
  *(undefined4 *)(param_1 + 0x74) = uVar3;
  FUN_144a787a6(param_1 + 0x78,param_2 + 0x78);
  return param_1;
}



// FUNCTION 149482b51 FUN_149482b51 body=19 status=ok
// SIG undefined FUN_149482b51(void)

void FUN_149482b51(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 4);
    return;
  }
  return;
}



// FUNCTION 149482b64 FUN_149482b64 body=132 status=ok
// SIG undefined FUN_149482b64(void)

void FUN_149482b64(longlong param_1,int param_2)

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



// FUNCTION 149482bea FUN_149482bea body=98 status=ok
// SIG undefined FUN_149482bea(void)

void FUN_149482bea(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 7,8);
    iVar1 = (int)(uVar2 >> 7);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x80,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}


