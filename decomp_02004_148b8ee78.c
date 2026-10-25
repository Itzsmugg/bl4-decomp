// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148b8ee78 FUN_148b8ee78 body=40 status=ok
// SIG undefined FUN_148b8ee78(void)

void FUN_148b8ee78(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2e0) == '\x01') {
    FUN_14582a9ec(param_2);
    *(undefined1 *)(param_2 + 0x2e0) = 0;
  }
  return;
}



// FUNCTION 148b8eee0 FUN_148b8eee0 body=270 status=ok
// SIG undefined FUN_148b8eee0(void)

longlong FUN_148b8eee0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_147e1a790();
  memcpy((void *)(param_1 + 0x90),(void *)(param_2 + 0x90),0xdc);
  *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_2 + 0x170);
  uVar1 = *(undefined4 *)(param_2 + 0x17c);
  uVar2 = *(undefined4 *)(param_2 + 0x180);
  uVar3 = *(undefined4 *)(param_2 + 0x184);
  *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_2 + 0x178);
  *(undefined4 *)(param_1 + 0x17c) = uVar1;
  *(undefined4 *)(param_1 + 0x180) = uVar2;
  *(undefined4 *)(param_1 + 0x184) = uVar3;
  FUN_144a787a6(param_1 + 0x188,param_2 + 0x188);
  *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_2 + 0x198);
  uVar1 = *(undefined4 *)(param_2 + 0x1a4);
  uVar2 = *(undefined4 *)(param_2 + 0x1a8);
  uVar3 = *(undefined4 *)(param_2 + 0x1ac);
  *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_2 + 0x1a0);
  *(undefined4 *)(param_1 + 0x1a4) = uVar1;
  *(undefined4 *)(param_1 + 0x1a8) = uVar2;
  *(undefined4 *)(param_1 + 0x1ac) = uVar3;
  FUN_144a787a6(param_1 + 0x1b0,param_2 + 0x1b0);
  FUN_14054d9c0(param_1 + 0x1c0,param_2 + 0x1c0);
  uVar1 = *(undefined4 *)(param_2 + 0x214);
  uVar2 = *(undefined4 *)(param_2 + 0x218);
  uVar3 = *(undefined4 *)(param_2 + 0x21c);
  *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(param_2 + 0x210);
  *(undefined4 *)(param_1 + 0x214) = uVar1;
  *(undefined4 *)(param_1 + 0x218) = uVar2;
  *(undefined4 *)(param_1 + 0x21c) = uVar3;
  FUN_14117b026(param_1 + 0x220,param_2 + 0x220);
  FUN_140d02432(param_1 + 600,param_2 + 600);
  *(undefined8 *)(param_1 + 0x2a8) = *(undefined8 *)(param_2 + 0x2a8);
  uVar1 = *(undefined4 *)(param_2 + 0x2b4);
  uVar2 = *(undefined4 *)(param_2 + 0x2b8);
  uVar3 = *(undefined4 *)(param_2 + 700);
  *(undefined4 *)(param_1 + 0x2b0) = *(undefined4 *)(param_2 + 0x2b0);
  *(undefined4 *)(param_1 + 0x2b4) = uVar1;
  *(undefined4 *)(param_1 + 0x2b8) = uVar2;
  *(undefined4 *)(param_1 + 700) = uVar3;
  FUN_144a787a6(param_1 + 0x2c0,param_2 + 0x2c0);
  FUN_148615fc0(param_1 + 0x2d0,param_2 + 0x2d0);
  return param_1;
}



// FUNCTION 148b8eff0 FUN_148b8eff0 body=28 status=ok
// SIG undefined FUN_148b8eff0(void)

undefined8 FUN_148b8eff0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 148b8f048 FUN_148b8f048 body=80 status=ok
// SIG undefined FUN_148b8f048(void)

undefined8 FUN_148b8f048(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      lVar2 = param_2 + 0x18 + lVar6;
      *(undefined8 *)(lVar2 + -0x18) = *puVar1;
      uVar3 = *(undefined4 *)((longlong)puVar1 + 0xc);
      uVar4 = *(undefined4 *)(puVar1 + 2);
      uVar5 = *(undefined4 *)((longlong)puVar1 + 0x14);
      *(undefined4 *)(lVar2 + -0x10) = *(undefined4 *)(puVar1 + 1);
      *(undefined4 *)(lVar2 + -0xc) = uVar3;
      *(undefined4 *)(lVar2 + -8) = uVar4;
      *(undefined4 *)(lVar2 + -4) = uVar5;
      FUN_144a787a6();
      lVar6 = lVar6 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148b8f0c0 FUN_148b8f0c0 body=59 status=ok
// SIG undefined FUN_148b8f0c0(void)

undefined8 FUN_148b8f0c0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b8f106 FUN_148b8f106 body=38 status=ok
// SIG undefined FUN_148b8f106(void)

void FUN_148b8f106(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 148b8f170 FUN_148b8f170 body=62 status=ok
// SIG undefined FUN_148b8f170(void)

void FUN_148b8f170(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_2 + 1);
  *param_2 = &PTR_FUN_14b5ebab0;
  memset(param_2 + 3,0,0x98);
  return;
}



// FUNCTION 148b8f1c4 FUN_148b8f1c4 body=63 status=ok
// SIG undefined FUN_148b8f1c4(void)

undefined1 FUN_148b8f1c4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b8f2ec(param_2,param_3);
    param_3 = param_3 + 0xb0;
    param_2 = param_2 + 0xb0;
  }
  return 1;
}



// FUNCTION 148b8f22c FUN_148b8f22c body=59 status=ok
// SIG undefined FUN_148b8f22c(void)

undefined8 FUN_148b8f22c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b8f278 FUN_148b8f278 body=38 status=ok
// SIG undefined FUN_148b8f278(void)

void FUN_148b8f278(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    FUN_141116ac4(param_2);
    *(undefined1 *)(param_2 + 0xb0) = 0;
  }
  return;
}



// FUNCTION 148b8f2ec FUN_148b8f2ec body=113 status=ok
// SIG undefined FUN_148b8f2ec(void)

longlong FUN_148b8f2ec(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(char *)(param_2 + 0x10) == '\0') {
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  }
  FUN_1403de7ba(param_1 + 0x18,param_2 + 0x18);
  param_2 = param_2 + 0x50;
  lVar4 = param_1 + 0x50;
  lVar5 = 3;
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



// FUNCTION 148b8f3e8 FUN_148b8f3e8 body=59 status=ok
// SIG undefined FUN_148b8f3e8(void)

undefined8 FUN_148b8f3e8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b8f488 FUN_148b8f488 body=55 status=ok
// SIG undefined FUN_148b8f488(void)

void FUN_148b8f488(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba02a0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba02a0 = FUN_140002ddd(FUN_1465a8caf,uVar1,L"GbxCondition_ShouldPickupShowEquipPrompt");
  }
  return;
}



// FUNCTION 148b8f540 FUN_148b8f540 body=59 status=ok
// SIG undefined FUN_148b8f540(void)

undefined8 FUN_148b8f540(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b8f5e0 FUN_148b8f5e0 body=55 status=ok
// SIG undefined FUN_148b8f5e0(void)

void FUN_148b8f5e0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba02b8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba02b8 = FUN_140002ddd(FUN_1465a8d45,uVar1,L"GbxCondition_ShouldPickupShowSwapPrompt");
  }
  return;
}



// FUNCTION 148b8f698 FUN_148b8f698 body=59 status=ok
// SIG undefined FUN_148b8f698(void)

undefined8 FUN_148b8f698(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b8f738 FUN_148b8f738 body=55 status=ok
// SIG undefined FUN_148b8f738(void)

void FUN_148b8f738(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba02d0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba02d0 = FUN_140002ddd(FUN_1465a8ddb,uVar1,L"GbxCondition_ShouldPickupShowTakePrompt");
  }
  return;
}



// FUNCTION 148b8f7f0 FUN_148b8f7f0 body=59 status=ok
// SIG undefined FUN_148b8f7f0(void)

undefined8 FUN_148b8f7f0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b8f890 FUN_148b8f890 body=55 status=ok
// SIG undefined FUN_148b8f890(void)

void FUN_148b8f890(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba02e8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba02e8 = FUN_140002ddd(FUN_1465a8e71,uVar1,L"GbxCondition_OnlyOwnerCanPickupPrompt");
  }
  return;
}



// FUNCTION 148b8f948 FUN_148b8f948 body=59 status=ok
// SIG undefined FUN_148b8f948(void)

undefined8 FUN_148b8f948(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b8f9e8 FUN_148b8f9e8 body=55 status=ok
// SIG undefined FUN_148b8f9e8(void)

void FUN_148b8f9e8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0300 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0300 =
         FUN_140002ddd(FUN_1465a8f07,uVar1,L"GbxCondition_ShouldPickupShowInventoryFullPrompt");
  }
  return;
}



// FUNCTION 148b8faa0 FUN_148b8faa0 body=59 status=ok
// SIG undefined FUN_148b8faa0(void)

undefined8 FUN_148b8faa0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b8fb40 FUN_148b8fb40 body=55 status=ok
// SIG undefined FUN_148b8fb40(void)

void FUN_148b8fb40(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0318 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0318 =
         FUN_140002ddd(FUN_1465a8f9d,uVar1,L"GbxCondition_ShouldPickupShowTakeAsJunkPrompt");
  }
  return;
}



// FUNCTION 148b8fb9a FUN_148b8fb9a body=73 status=ok
// SIG undefined FUN_148b8fb9a(void)

undefined1 FUN_148b8fb9a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined1 *)(param_2 + lVar1) = *(undefined1 *)(param_3 + lVar1);
      FUN_146a6959c();
      lVar1 = lVar1 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148b8fc0c FUN_148b8fc0c body=59 status=ok
// SIG undefined FUN_148b8fc0c(void)

undefined8 FUN_148b8fc0c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b8fcaa FUN_148b8fcaa body=50 status=ok
// SIG undefined FUN_148b8fcaa(void)

void FUN_148b8fcaa(longlong param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_144a65a1e(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 148b8fd24 FUN_148b8fd24 body=140 status=ok
// SIG undefined FUN_148b8fd24(void)

undefined8 FUN_148b8fd24(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 148b8fdd8 FUN_148b8fdd8 body=59 status=ok
// SIG undefined FUN_148b8fdd8(void)

undefined8 FUN_148b8fdd8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b8fef5 FUN_148b8fef5 body=55 status=ok
// SIG undefined FUN_148b8fef5(void)

void FUN_148b8fef5(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0530 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0530 = FUN_14171c317(FUN_1465a9ec4,uVar1,L"EDownState");
  }
  return;
}



// FUNCTION 148b8ff2c FUN_148b8ff2c body=57 status=ok
// SIG undefined FUN_148b8ff2c(void)

void FUN_148b8ff2c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0548 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0548 = FUN_14171c317(FUN_1465a9caf,uVar1,L"EExitDownStateReason");
  }
  return;
}



// FUNCTION 148b8ff85 FUN_148b8ff85 body=55 status=ok
// SIG undefined FUN_148b8ff85(void)

void FUN_148b8ff85(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0758 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0758 = FUN_14171c317(FUN_1465aa818,uVar1,L"EEridiumEncasingState");
  }
  return;
}



// FUNCTION 148b8ffbc FUN_148b8ffbc body=66 status=ok
// SIG undefined FUN_148b8ffbc(void)

void FUN_148b8ffbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_10 = param_3;
  FUN_1447cd2ec(param_1,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b90018 FUN_148b90018 body=104 status=ok
// SIG undefined FUN_148b90018(void)

void FUN_148b90018(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cba0798) {
    FUN_144b3d300(&DAT_14cba0798);
    if (DAT_14cba0798 == -1) {
      FUN_1446f470e(&DAT_14cba0790,L"EridiumEncasingState",1);
      _Init_thread_footer(&DAT_14cba0798);
      return;
    }
  }
  return;
}



// FUNCTION 148b90092 FUN_148b90092 body=45 status=ok
// SIG undefined FUN_148b90092(void)

longlong FUN_148b90092(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145b2242a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b900d0 FUN_148b900d0 body=45 status=ok
// SIG undefined FUN_148b900d0(void)

longlong FUN_148b900d0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_145b2242a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b9010e FUN_148b9010e body=48 status=ok
// SIG undefined FUN_148b9010e(void)

longlong FUN_148b9010e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_145aa994e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b90146 FUN_148b90146 body=48 status=ok
// SIG undefined FUN_148b90146(void)

longlong FUN_148b90146(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_145aa994e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b9017e FUN_148b9017e body=48 status=ok
// SIG undefined FUN_148b9017e(void)

longlong FUN_148b9017e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_145aa994e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b901c6 FUN_148b901c6 body=48 status=ok
// SIG undefined FUN_148b901c6(void)

longlong FUN_148b901c6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x530;
  FUN_145aa994e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b901fe FUN_148b901fe body=48 status=ok
// SIG undefined FUN_148b901fe(void)

longlong FUN_148b901fe(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x538;
  FUN_145aa994e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b90236 FUN_148b90236 body=48 status=ok
// SIG undefined FUN_148b90236(void)

longlong FUN_148b90236(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x540;
  FUN_145aa994e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b9026e FUN_148b9026e body=48 status=ok
// SIG undefined FUN_148b9026e(void)

longlong FUN_148b9026e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x8c0;
  FUN_145aa994e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b902aa FUN_148b902aa body=48 status=ok
// SIG undefined FUN_148b902aa(void)

longlong FUN_148b902aa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x8c8;
  FUN_145aa994e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b902e8 FUN_148b902e8 body=48 status=ok
// SIG undefined FUN_148b902e8(void)

longlong FUN_148b902e8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x8d0;
  FUN_145aa994e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b90358 FUN_148b90358 body=48 status=ok
// SIG undefined FUN_148b90358(void)

longlong FUN_148b90358(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_1412bd704(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b90390 FUN_148b90390 body=48 status=ok
// SIG undefined FUN_148b90390(void)

longlong FUN_148b90390(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_1412bd704(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b903c8 FUN_148b903c8 body=48 status=ok
// SIG undefined FUN_148b903c8(void)

longlong FUN_148b903c8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_1412bd704(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b90400 FUN_148b90400 body=48 status=ok
// SIG undefined FUN_148b90400(void)

longlong FUN_148b90400(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b8;
  FUN_1412bd704(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b90430 FUN_148b90430 body=48 status=ok
// SIG undefined FUN_148b90430(void)

longlong FUN_148b90430(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c0;
  FUN_1412bd704(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b90460 FUN_148b90460 body=48 status=ok
// SIG undefined FUN_148b90460(void)

longlong FUN_148b90460(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x408;
  FUN_1412bd704(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b90490 FUN_148b90490 body=48 status=ok
// SIG undefined FUN_148b90490(void)

longlong FUN_148b90490(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x410;
  FUN_1412bd704(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b904c8 FUN_148b904c8 body=48 status=ok
// SIG undefined FUN_148b904c8(void)

longlong FUN_148b904c8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x418;
  FUN_1412bd704(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b904f8 FUN_148b904f8 body=48 status=ok
// SIG undefined FUN_148b904f8(void)

longlong FUN_148b904f8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x420;
  FUN_1412bd704(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b90530 FUN_148b90530 body=48 status=ok
// SIG undefined FUN_148b90530(void)

longlong FUN_148b90530(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x428;
  FUN_1412bd704(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b90578 FUN_148b90578 body=48 status=ok
// SIG undefined FUN_148b90578(void)

longlong FUN_148b90578(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x458;
  FUN_1412bd704(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b905a8 FUN_148b905a8 body=48 status=ok
// SIG undefined FUN_148b905a8(void)

longlong FUN_148b905a8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x460;
  FUN_1412bd704(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b905d8 FUN_148b905d8 body=48 status=ok
// SIG undefined FUN_148b905d8(void)

longlong FUN_148b905d8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x468;
  FUN_1412bd704(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b90610 FUN_148b90610 body=48 status=ok
// SIG undefined FUN_148b90610(void)

longlong FUN_148b90610(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x470;
  FUN_1412bd704(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b90648 FUN_148b90648 body=48 status=ok
// SIG undefined FUN_148b90648(void)

longlong FUN_148b90648(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x478;
  FUN_1412bd704(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b90680 FUN_148b90680 body=48 status=ok
// SIG undefined FUN_148b90680(void)

longlong FUN_148b90680(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x480;
  FUN_1412bd704(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b906b8 FUN_148b906b8 body=48 status=ok
// SIG undefined FUN_148b906b8(void)

longlong FUN_148b906b8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x488;
  FUN_1412bd704(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b906f0 FUN_148b906f0 body=48 status=ok
// SIG undefined FUN_148b906f0(void)

longlong FUN_148b906f0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x490;
  FUN_1412bd704(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b90728 FUN_148b90728 body=48 status=ok
// SIG undefined FUN_148b90728(void)

longlong FUN_148b90728(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x498;
  FUN_1412bd704(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b90760 FUN_148b90760 body=48 status=ok
// SIG undefined FUN_148b90760(void)

longlong FUN_148b90760(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a0;
  FUN_1412bd704(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b90798 FUN_148b90798 body=48 status=ok
// SIG undefined FUN_148b90798(void)

longlong FUN_148b90798(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a8;
  FUN_1412bd704(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b907d0 FUN_148b907d0 body=48 status=ok
// SIG undefined FUN_148b907d0(void)

longlong FUN_148b907d0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4b0;
  FUN_1412bd704(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b90818 FUN_148b90818 body=48 status=ok
// SIG undefined FUN_148b90818(void)

longlong FUN_148b90818(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a98;
  FUN_1412bd704(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b90850 FUN_148b90850 body=48 status=ok
// SIG undefined FUN_148b90850(void)

longlong FUN_148b90850(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1aa0;
  FUN_1412bd704(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b90880 FUN_148b90880 body=48 status=ok
// SIG undefined FUN_148b90880(void)

longlong FUN_148b90880(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1aa8;
  FUN_1412bd704(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b908b8 FUN_148b908b8 body=48 status=ok
// SIG undefined FUN_148b908b8(void)

longlong FUN_148b908b8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ab0;
  FUN_1412bd704(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b908f0 FUN_148b908f0 body=48 status=ok
// SIG undefined FUN_148b908f0(void)

longlong FUN_148b908f0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ad0;
  FUN_1412bd704(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b90928 FUN_148b90928 body=48 status=ok
// SIG undefined FUN_148b90928(void)

longlong FUN_148b90928(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ad8;
  FUN_1412bd704(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b90958 FUN_148b90958 body=48 status=ok
// SIG undefined FUN_148b90958(void)

longlong FUN_148b90958(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ae0;
  FUN_1412bd704(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b90988 FUN_148b90988 body=48 status=ok
// SIG undefined FUN_148b90988(void)

longlong FUN_148b90988(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x25f8;
  FUN_1412bd704(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b909b8 FUN_148b909b8 body=45 status=ok
// SIG undefined FUN_148b909b8(void)

longlong FUN_148b909b8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_141001552(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b909e6 FUN_148b909e6 body=45 status=ok
// SIG undefined FUN_148b909e6(void)

longlong FUN_148b909e6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x50;
  FUN_141001552(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b90a14 FUN_148b90a14 body=45 status=ok
// SIG undefined FUN_148b90a14(void)

longlong FUN_148b90a14(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x58;
  FUN_141001552(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b90aea FUN_148b90aea body=59 status=ok
// SIG undefined FUN_148b90aea(void)

undefined8 FUN_148b90aea(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b90bc2 FUN_148b90bc2 body=88 status=ok
// SIG undefined FUN_148b90bc2(void)

undefined8 FUN_148b90bc2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1418c3a72(param_2,param_3);
    FUN_148b90cd6(param_2 + 0x18,param_3 + 0x18);
    *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_3 + 0x30);
    FUN_144a787a6(param_2 + 0x38,param_3 + 0x38);
    param_2 = param_2 + 0x48;
    param_3 = param_3 + 0x48;
  }
  return 1;
}



// FUNCTION 148b90c42 FUN_148b90c42 body=59 status=ok
// SIG undefined FUN_148b90c42(void)

undefined8 FUN_148b90c42(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b90cd6 FUN_148b90cd6 body=84 status=ok
// SIG undefined FUN_148b90cd6(void)

longlong * FUN_148b90cd6(longlong *param_1,longlong *param_2)

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



// FUNCTION 148b90d4a FUN_148b90d4a body=63 status=ok
// SIG undefined FUN_148b90d4a(void)

undefined1 FUN_148b90d4a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b90e76(param_2,param_3);
    param_3 = param_3 + 0x218;
    param_2 = param_2 + 0x218;
  }
  return 1;
}



// FUNCTION 148b90db2 FUN_148b90db2 body=59 status=ok
// SIG undefined FUN_148b90db2(void)

undefined8 FUN_148b90db2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b90dfe FUN_148b90dfe body=38 status=ok
// SIG undefined FUN_148b90dfe(void)

void FUN_148b90dfe(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x218) == '\x01') {
    FUN_141251140(param_2);
    *(undefined1 *)(param_2 + 0x218) = 0;
  }
  return;
}



// FUNCTION 148b90e76 FUN_148b90e76 body=631 status=ok
// SIG undefined FUN_148b90e76(void)

longlong FUN_148b90e76(longlong param_1,longlong param_2)

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
  plVar1 = *(longlong **)(param_2 + 0x18);
  plVar2 = *(longlong **)(param_1 + 0x18);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x18) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
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
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  uVar3 = *(undefined4 *)(param_2 + 0x4c);
  uVar4 = *(undefined4 *)(param_2 + 0x50);
  uVar5 = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  *(undefined4 *)(param_1 + 0x50) = uVar4;
  *(undefined4 *)(param_1 + 0x54) = uVar5;
  FUN_144a787a6(param_1 + 0x58,param_2 + 0x58);
  FUN_145bfea70(param_1 + 0x68,param_2 + 0x68);
  FUN_144a787a6(param_1 + 0x80,param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  FUN_1447715ec(param_1 + 0xa0,param_2 + 0xa0);
  FUN_144a787a6(param_1 + 200,param_2 + 200);
  FUN_144a787a6(param_1 + 0xd8,param_2 + 0xd8);
  FUN_144a787a6(param_1 + 0xe8,param_2 + 0xe8);
  FUN_144a787a6(param_1 + 0xf8,param_2 + 0xf8);
  FUN_144a787a6(param_1 + 0x108,param_2 + 0x108);
  FUN_144a787a6(param_1 + 0x118,param_2 + 0x118);
  *(undefined1 *)(param_1 + 0x128) = *(undefined1 *)(param_2 + 0x128);
  FUN_1406fa324(param_1 + 0x130,param_2 + 0x130);
  *(undefined1 *)(param_1 + 0x140) = *(undefined1 *)(param_2 + 0x140);
  FUN_148b910ee(param_1 + 0x148,param_2 + 0x148);
  FUN_14400c5a8(param_1 + 0x158,param_2 + 0x158);
  FUN_148b9114c(param_1 + 0x170,param_2 + 0x170);
  FUN_148b911aa(param_1 + 0x180,param_2 + 0x180);
  FUN_148b91208(param_1 + 400,param_2 + 400);
  FUN_148728da4(param_1 + 0x1a0,param_2 + 0x1a0);
  FUN_148728da4(param_1 + 0x1b0,param_2 + 0x1b0);
  FUN_148728da4(param_1 + 0x1c0,param_2 + 0x1c0);
  FUN_14173baee(param_1 + 0x1d0,param_2 + 0x1d0);
  *(undefined1 *)(param_1 + 0x1e8) = *(undefined1 *)(param_2 + 0x1e8);
  FUN_144a787a6(param_1 + 0x1f0,param_2 + 0x1f0);
  *(undefined1 *)(param_1 + 0x200) = *(undefined1 *)(param_2 + 0x200);
  FUN_14400c5fc(param_1 + 0x208,param_2 + 0x208);
  return param_1;
}



// FUNCTION 148b910ee FUN_148b910ee body=93 status=ok
// SIG undefined FUN_148b910ee(void)

undefined8 * FUN_148b910ee(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14400c573(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148b91266(param_1,iVar1);
      FUN_148b912d8(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148b9114c FUN_148b9114c body=93 status=ok
// SIG undefined FUN_148b9114c(void)

undefined8 * FUN_148b9114c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14400c544(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148b91314(param_1,iVar1);
      FUN_148b91387(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148b911aa FUN_148b911aa body=93 status=ok
// SIG undefined FUN_148b911aa(void)

undefined8 * FUN_148b911aa(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14096d17b(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148b91404(param_1,iVar1);
      FUN_148b91477(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148b91208 FUN_148b91208 body=93 status=ok
// SIG undefined FUN_148b91208(void)

undefined8 * FUN_148b91208(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140d01cbe(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148b914fe(param_1,iVar1);
      FUN_148b91571(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 148b91266 FUN_148b91266 body=114 status=ok
// SIG undefined FUN_148b91266(void)

void FUN_148b91266(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xb0,0x10);
    iVar2 = (int)(uVar1 / 0xb0);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xb0,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 148b912d8 FUN_148b912d8 body=60 status=ok
// SIG undefined FUN_148b912d8(void)

void FUN_148b912d8(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14400c65a(param_1,param_2);
    param_1 = param_1 + 0xb0;
    param_2 = param_2 + 0xb0;
  }
  return;
}



// FUNCTION 148b91314 FUN_148b91314 body=115 status=ok
// SIG undefined FUN_148b91314(void)

void FUN_148b91314(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148b91387 FUN_148b91387 body=52 status=ok
// SIG undefined FUN_148b91387(void)

void FUN_148b91387(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14400c6fe(param_1,param_2);
    param_1 = param_1 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return;
}



// FUNCTION 148b913bc FUN_148b913bc body=71 status=ok
// SIG undefined FUN_148b913bc(void)

undefined8 * FUN_148b913bc(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 148b91404 FUN_148b91404 body=115 status=ok
// SIG undefined FUN_148b91404(void)

void FUN_148b91404(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148b91477 FUN_148b91477 body=134 status=ok
// SIG undefined FUN_148b91477(void)

void FUN_148b91477(longlong param_1,undefined8 *param_2,int param_3)

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



// FUNCTION 148b914fe FUN_148b914fe body=115 status=ok
// SIG undefined FUN_148b914fe(void)

void FUN_148b914fe(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148b91571 FUN_148b91571 body=134 status=ok
// SIG undefined FUN_148b91571(void)

void FUN_148b91571(longlong param_1,undefined8 *param_2,int param_3)

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



// FUNCTION 148b915f8 FUN_148b915f8 body=28 status=ok
// SIG undefined FUN_148b915f8(void)

undefined8 FUN_148b915f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 148b916d4 FUN_148b916d4 body=59 status=ok
// SIG undefined FUN_148b916d4(void)

undefined8 FUN_148b916d4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b91768 FUN_148b91768 body=55 status=ok
// SIG undefined FUN_148b91768(void)

void FUN_148b91768(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0410 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0410 = FUN_140002ddd(FUN_1465a9887,uVar1,L"DLCEntitlementValueResolver");
  }
  return;
}



// FUNCTION 148b9182a FUN_148b9182a body=63 status=ok
// SIG undefined FUN_148b9182a(void)

undefined1 FUN_148b9182a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b919b0(param_2,param_3);
    param_3 = param_3 + 0x98;
    param_2 = param_2 + 0x98;
  }
  return 1;
}



// FUNCTION 148b91892 FUN_148b91892 body=59 status=ok
// SIG undefined FUN_148b91892(void)

undefined8 FUN_148b91892(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b918de FUN_148b918de body=40 status=ok
// SIG undefined FUN_148b918de(void)

void FUN_148b918de(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x98) == '\x01') {
    FUN_148b91954(param_2);
    *(undefined1 *)(param_2 + 0x98) = 0;
  }
  return;
}



// FUNCTION 148b91954 FUN_148b91954 body=92 status=ok
// SIG undefined FUN_148b91954(void)

void FUN_148b91954(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 148b919b0 FUN_148b919b0 body=124 status=ok
// SIG undefined FUN_148b919b0(void)

undefined8 * FUN_148b919b0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  FUN_1458595d0(param_1 + 1,param_2 + 1);
  param_1[4] = param_2[4];
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  FUN_1447715ec(param_1 + 6,param_2 + 6);
  FUN_144a787a6(param_1 + 0xb,param_2 + 0xb);
  FUN_144a787a6(param_1 + 0xd,param_2 + 0xd);
  FUN_144a787a6(param_1 + 0xf,param_2 + 0xf);
  FUN_144a787a6(param_1 + 0x11,param_2 + 0x11);
  return param_1;
}



// FUNCTION 148b91aa2 FUN_148b91aa2 body=100 status=ok
// SIG undefined FUN_148b91aa2(void)

undefined8 FUN_148b91aa2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      if (*(char *)(param_3 + -0x10) == '\0') {
        *(undefined1 *)(param_2 + -0x10) = 0;
        *(undefined8 *)(param_2 + -0x18) = *(undefined8 *)(param_3 + -0x18);
      }
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -8);
      FUN_148b91c1e(param_2,param_3);
      *(undefined2 *)(param_2 + 0x10) = *(undefined2 *)(param_3 + 0x10);
      *(undefined1 *)(param_2 + 0x12) = *(undefined1 *)(param_3 + 0x12);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148b91b2e FUN_148b91b2e body=59 status=ok
// SIG undefined FUN_148b91b2e(void)

undefined8 FUN_148b91b2e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b91b74 FUN_148b91b74 body=34 status=ok
// SIG undefined FUN_148b91b74(void)

void FUN_148b91b74(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_1459a035a(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 148b91be4 FUN_148b91be4 body=57 status=ok
// SIG undefined FUN_148b91be4(void)

void FUN_148b91be4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0470 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0470 = FUN_140002ddd(FUN_1465a9a35,uVar1,L"DLCGlobals");
  }
  return;
}



// FUNCTION 148b91c1e FUN_148b91c1e body=88 status=ok
// SIG undefined FUN_148b91c1e(void)

undefined8 * FUN_148b91c1e(undefined8 *param_1,undefined8 *param_2)

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
      FUN_141208f94(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 148b91d32 FUN_148b91d32 body=59 status=ok
// SIG undefined FUN_148b91d32(void)

undefined8 FUN_148b91d32(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b91dd2 FUN_148b91dd2 body=55 status=ok
// SIG undefined FUN_148b91dd2(void)

void FUN_148b91dd2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0488 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0488 = FUN_140002ddd(FUN_1465a9acb,uVar1,L"DLCInstalledValueResolver");
  }
  return;
}



// FUNCTION 148b91e68 FUN_148b91e68 body=59 status=ok
// SIG undefined FUN_148b91e68(void)

undefined8 FUN_148b91e68(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b91f38 FUN_148b91f38 body=63 status=ok
// SIG undefined FUN_148b91f38(void)

undefined1 FUN_148b91f38(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b92060(param_2,param_3);
    param_3 = param_3 + 0x3b0;
    param_2 = param_2 + 0x3b0;
  }
  return 1;
}



// FUNCTION 148b91fa0 FUN_148b91fa0 body=59 status=ok
// SIG undefined FUN_148b91fa0(void)

undefined8 FUN_148b91fa0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b91fec FUN_148b91fec body=38 status=ok
// SIG undefined FUN_148b91fec(void)

void FUN_148b91fec(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x3b0) == '\x01') {
    FUN_1418c3aca(param_2);
    *(undefined1 *)(param_2 + 0x3b0) = 0;
  }
  return;
}



// FUNCTION 148b92060 FUN_148b92060 body=842 status=ok
// SIG undefined FUN_148b92060(void)

longlong FUN_148b92060(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  FUN_140311eb6();
  if (param_2 == param_1) {
    FUN_140311eb6(param_1 + 0x40,param_2 + 0x40);
    FUN_140311eb6(param_1 + 0x68,param_2 + 0x68);
    FUN_140311eb6(param_1 + 0x90,param_2 + 0x90);
    FUN_140311eb6(param_1 + 0xb8,param_2 + 0xb8);
  }
  else {
    FUN_148b92402(param_1 + 0x10,param_2 + 0x10);
    FUN_148b92534(param_1 + 0x28,param_2 + 0x28);
    FUN_140311eb6(param_1 + 0x40,param_2 + 0x40);
    FUN_148b92666(param_1 + 0x50,param_2 + 0x50);
    FUN_140311eb6(param_1 + 0x68,param_2 + 0x68);
    FUN_148b92666(param_1 + 0x78,param_2 + 0x78);
    FUN_140311eb6(param_1 + 0x90,param_2 + 0x90);
    FUN_148b92402(param_1 + 0xa0,param_2 + 0xa0);
    FUN_140311eb6(param_1 + 0xb8,param_2 + 0xb8);
    FUN_148b92798(param_1 + 200,param_2 + 200);
  }
  FUN_140311eb6(param_1 + 0xe0,param_2 + 0xe0);
  FUN_140311eb6(param_1 + 0xf0,param_2 + 0xf0);
  FUN_140311eb6(param_1 + 0x100,param_2 + 0x100);
  FUN_140311eb6(param_1 + 0x110,param_2 + 0x110);
  if (param_2 != param_1) {
    FUN_148b92402(param_1 + 0x120,param_2 + 0x120);
  }
  FUN_140311eb6(param_1 + 0x138,param_2 + 0x138);
  FUN_140311eb6(param_1 + 0x148,param_2 + 0x148);
  FUN_140311eb6(param_1 + 0x158,param_2 + 0x158);
  FUN_140311eb6(param_1 + 0x168,param_2 + 0x168);
  FUN_140311eb6(param_1 + 0x178,param_2 + 0x178);
  FUN_140311eb6(param_1 + 0x188,param_2 + 0x188);
  FUN_140311eb6(param_1 + 0x198,param_2 + 0x198);
  if (param_2 != param_1) {
    FUN_148b928ca(param_1 + 0x1a8,param_2 + 0x1a8);
    FUN_148b928ca(param_1 + 0x1c0,param_2 + 0x1c0);
    FUN_1401b31d8(param_1 + 0x1d8,param_2 + 0x1d8);
  }
  FUN_14117bcd8(param_1 + 0x1f0,param_2 + 0x1f0);
  FUN_14117bcd8(param_1 + 0x1fc,param_2 + 0x1fc);
  FUN_14117bcd8(param_1 + 0x208,param_2 + 0x208);
  FUN_14117bcd8(param_1 + 0x214,param_2 + 0x214);
  FUN_140841e06(param_1 + 0x220,param_2 + 0x220);
  uVar1 = *(undefined4 *)(param_2 + 0x230);
  uVar2 = *(undefined4 *)(param_2 + 0x234);
  uVar3 = *(undefined4 *)(param_2 + 0x238);
  uVar4 = *(undefined4 *)(param_2 + 0x23c);
  uVar5 = *(undefined4 *)(param_2 + 0x244);
  uVar6 = *(undefined4 *)(param_2 + 0x248);
  uVar7 = *(undefined4 *)(param_2 + 0x24c);
  *(undefined4 *)(param_1 + 0x240) = *(undefined4 *)(param_2 + 0x240);
  *(undefined4 *)(param_1 + 0x244) = uVar5;
  *(undefined4 *)(param_1 + 0x248) = uVar6;
  *(undefined4 *)(param_1 + 0x24c) = uVar7;
  *(undefined4 *)(param_1 + 0x230) = uVar1;
  *(undefined4 *)(param_1 + 0x234) = uVar2;
  *(undefined4 *)(param_1 + 0x238) = uVar3;
  *(undefined4 *)(param_1 + 0x23c) = uVar4;
  *(undefined1 *)(param_1 + 0x250) = *(undefined1 *)(param_2 + 0x250);
  FUN_140b177d4(param_1 + 600,param_2 + 600);
  *(undefined1 *)(param_1 + 0x278) = *(undefined1 *)(param_2 + 0x278);
  FUN_140b177d4(param_1 + 0x280,param_2 + 0x280);
  puVar10 = (undefined8 *)(param_2 + 0x2a0);
  puVar11 = (undefined8 *)(param_1 + 0x2a0);
  for (lVar9 = 0xb; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  FUN_148b923aa(param_1 + 0x2f8,param_2 + 0x2f8);
  memcpy((void *)(param_1 + 0x308),(void *)(param_2 + 0x308),0x98);
  lVar9 = *(longlong *)(param_2 + 0x3a0);
  if (DAT_14c950c29 == '\x01') {
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar9 = *(longlong *)(param_2 + 0x3a0);
    }
  }
  *(longlong *)(param_1 + 0x3a0) = lVar9;
  if (param_2 != param_1) {
    if (*(char *)(param_2 + 0x3ac) == '\x01') {
      *(undefined4 *)(param_1 + 0x3a8) = *(undefined4 *)(param_2 + 0x3a8);
      uVar8 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x3ac) != '\x01') {
        return param_1;
      }
      uVar8 = 0;
    }
    *(undefined1 *)(param_1 + 0x3ac) = uVar8;
  }
  return param_1;
}



// FUNCTION 148b923aa FUN_148b923aa body=88 status=ok
// SIG undefined FUN_148b923aa(void)

undefined8 * FUN_148b923aa(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148b929fc(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 148b92402 FUN_148b92402 body=304 status=ok
// SIG undefined FUN_148b92402(void)

void FUN_148b92402(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      if ((*(int *)(lVar1 + 8 + lVar6) != 0) &&
         (plVar2 = *(longlong **)(lVar1 + lVar6), plVar2 != (longlong *)0x0)) {
        local_68 = 0;
        local_60 = 0;
        (**(code **)(*plVar2 + 0x40))(plVar2,&local_68);
        uVar4 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar5 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
        if (uStack_50._4_4_ < uVar5) {
          FUN_1447a71f6(&local_58,uVar4 & 0xffffffff);
        }
        lVar7 = lVar7 * 0x10;
        *(undefined8 *)(local_58 + lVar7) = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = 0;
        *(undefined8 *)(local_58 + lVar7) = local_68;
        local_68 = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = local_60;
        local_60 = 0;
        FUN_1449db362(&local_68);
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  FUN_1448a8284(param_1);
  FUN_144a3e8f2(param_1,&local_58);
  FUN_144760e21(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b92534 FUN_148b92534 body=304 status=ok
// SIG undefined FUN_148b92534(void)

void FUN_148b92534(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      if ((*(int *)(lVar1 + 8 + lVar6) != 0) &&
         (plVar2 = *(longlong **)(lVar1 + lVar6), plVar2 != (longlong *)0x0)) {
        local_68 = 0;
        local_60 = 0;
        (**(code **)(*plVar2 + 0x40))(plVar2,&local_68);
        uVar4 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar5 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
        if (uStack_50._4_4_ < uVar5) {
          FUN_1447a71f6(&local_58,uVar4 & 0xffffffff);
        }
        lVar7 = lVar7 * 0x10;
        *(undefined8 *)(local_58 + lVar7) = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = 0;
        *(undefined8 *)(local_58 + lVar7) = local_68;
        local_68 = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = local_60;
        local_60 = 0;
        FUN_1449db362(&local_68);
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  FUN_1448a8284(param_1);
  FUN_144a3e8f2(param_1,&local_58);
  FUN_144760e21(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b92666 FUN_148b92666 body=304 status=ok
// SIG undefined FUN_148b92666(void)

void FUN_148b92666(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      if ((*(int *)(lVar1 + 8 + lVar6) != 0) &&
         (plVar2 = *(longlong **)(lVar1 + lVar6), plVar2 != (longlong *)0x0)) {
        local_68 = 0;
        local_60 = 0;
        (**(code **)(*plVar2 + 0x40))(plVar2,&local_68);
        uVar4 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar5 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
        if (uStack_50._4_4_ < uVar5) {
          FUN_1447a71f6(&local_58,uVar4 & 0xffffffff);
        }
        lVar7 = lVar7 * 0x10;
        *(undefined8 *)(local_58 + lVar7) = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = 0;
        *(undefined8 *)(local_58 + lVar7) = local_68;
        local_68 = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = local_60;
        local_60 = 0;
        FUN_1449db362(&local_68);
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  FUN_1448a8284(param_1);
  FUN_144a3e8f2(param_1,&local_58);
  FUN_144760e21(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b92798 FUN_148b92798 body=304 status=ok
// SIG undefined FUN_148b92798(void)

void FUN_148b92798(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      if ((*(int *)(lVar1 + 8 + lVar6) != 0) &&
         (plVar2 = *(longlong **)(lVar1 + lVar6), plVar2 != (longlong *)0x0)) {
        local_68 = 0;
        local_60 = 0;
        (**(code **)(*plVar2 + 0x40))(plVar2,&local_68);
        uVar4 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar5 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
        if (uStack_50._4_4_ < uVar5) {
          FUN_1447a71f6(&local_58,uVar4 & 0xffffffff);
        }
        lVar7 = lVar7 * 0x10;
        *(undefined8 *)(local_58 + lVar7) = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = 0;
        *(undefined8 *)(local_58 + lVar7) = local_68;
        local_68 = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = local_60;
        local_60 = 0;
        FUN_1449db362(&local_68);
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  FUN_1448a8284(param_1);
  FUN_144a3e8f2(param_1,&local_58);
  FUN_144760e21(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b928ca FUN_148b928ca body=304 status=ok
// SIG undefined FUN_148b928ca(void)

void FUN_148b928ca(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      if ((*(int *)(lVar1 + 8 + lVar6) != 0) &&
         (plVar2 = *(longlong **)(lVar1 + lVar6), plVar2 != (longlong *)0x0)) {
        local_68 = 0;
        local_60 = 0;
        (**(code **)(*plVar2 + 0x40))(plVar2,&local_68);
        uVar4 = uStack_50;
        lVar7 = (longlong)(int)uStack_50;
        uVar5 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
        if (uStack_50._4_4_ < uVar5) {
          FUN_1447a71f6(&local_58,uVar4 & 0xffffffff);
        }
        lVar7 = lVar7 * 0x10;
        *(undefined8 *)(local_58 + lVar7) = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = 0;
        *(undefined8 *)(local_58 + lVar7) = local_68;
        local_68 = 0;
        *(undefined4 *)(local_58 + 8 + lVar7) = local_60;
        local_60 = 0;
        FUN_1449db362(&local_68);
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  FUN_1448a8284(param_1);
  FUN_144a3e8f2(param_1,&local_58);
  FUN_144760e21(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b929fc FUN_148b929fc body=98 status=ok
// SIG undefined FUN_148b929fc(void)

void FUN_148b929fc(longlong param_1,int param_2,int param_3)

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



// FUNCTION 148b92ac8 FUN_148b92ac8 body=59 status=ok
// SIG undefined FUN_148b92ac8(void)

undefined8 FUN_148b92ac8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b92b68 FUN_148b92b68 body=34 status=ok
// SIG undefined FUN_148b92b68(void)

undefined8 FUN_148b92b68(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 148b92b8a FUN_148b92b8a body=55 status=ok
// SIG undefined FUN_148b92b8a(void)

void FUN_148b92b8a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0590 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0590 = FUN_140002ddd(FUN_1465a9f89,uVar1,L"EchoHackObjectiveGameplayStyle");
  }
  return;
}



// FUNCTION 148b92c0e FUN_148b92c0e body=78 status=ok
// SIG undefined FUN_148b92c0e(void)

undefined8 FUN_148b92c0e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      uVar1 = *(undefined4 *)(param_3 + -0x14);
      uVar2 = *(undefined4 *)(param_3 + -0x10);
      uVar3 = *(undefined4 *)(param_3 + -0xc);
      *(undefined4 *)(param_2 + -0x18) = *(undefined4 *)(param_3 + -0x18);
      *(undefined4 *)(param_2 + -0x14) = uVar1;
      *(undefined4 *)(param_2 + -0x10) = uVar2;
      *(undefined4 *)(param_2 + -0xc) = uVar3;
      FUN_1401f3db8(param_2,param_3);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148b92c84 FUN_148b92c84 body=59 status=ok
// SIG undefined FUN_148b92c84(void)

undefined8 FUN_148b92c84(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b92cca FUN_148b92cca body=34 status=ok
// SIG undefined FUN_148b92cca(void)

void FUN_148b92cca(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_14580b7f6(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 148b92d36 FUN_148b92d36 body=55 status=ok
// SIG undefined FUN_148b92d36(void)

void FUN_148b92d36(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba05a8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba05a8 = FUN_140002ddd(FUN_1465aa021,uVar1,L"EchoHackObjectiveGameplayStyle_Encounter");
  }
  return;
}



// FUNCTION 148b92df2 FUN_148b92df2 body=70 status=ok
// SIG undefined FUN_148b92df2(void)

undefined1 FUN_148b92df2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_143c87d12(param_2,param_3);
      param_3 = param_3 + 0xb8;
      param_2 = param_2 + 0xb8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148b92e60 FUN_148b92e60 body=59 status=ok
// SIG undefined FUN_148b92e60(void)

undefined8 FUN_148b92e60(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b92eac FUN_148b92eac body=49 status=ok
// SIG undefined FUN_148b92eac(void)

void FUN_148b92eac(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x17) == '\x01') {
    *param_2 = &PTR_FUN_14b5f6480;
    FUN_1414282c8(param_2 + 1);
    *(undefined1 *)(param_2 + 0x17) = 0;
  }
  return;
}



// FUNCTION 148b92f20 FUN_148b92f20 body=55 status=ok
// SIG undefined FUN_148b92f20(void)

void FUN_148b92f20(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba05c0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba05c0 = FUN_140002ddd(FUN_1465aa0b7,uVar1,L"EchoHackObjectiveGameplayStyle_Timer");
  }
  return;
}



// FUNCTION 148b92f58 FUN_148b92f58 body=61 status=ok
// SIG undefined FUN_148b92f58(void)

void FUN_148b92f58(undefined8 param_1,undefined8 *param_2)

{
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
  param_2[0xc] = 0;
  FUN_144a6ccf8(param_2 + 9);
  *(undefined1 *)(param_2 + 0xc) = 0;
  return;
}



// FUNCTION 148b92f96 FUN_148b92f96 body=52 status=ok
// SIG undefined FUN_148b92f96(void)

void FUN_148b92f96(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined8 *)(param_2 + 0xe) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  FUN_144a6ccf8(param_2 + 0x12);
  *(undefined1 *)(param_2 + 0x18) = 0;
  return;
}



// FUNCTION 148b92fe8 FUN_148b92fe8 body=118 status=ok
// SIG undefined FUN_148b92fe8(void)

undefined8 FUN_148b92fe8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
    do {
      *(undefined8 *)(param_2 + -0x20) = *(undefined8 *)(param_3 + -0x20);
      uVar1 = *(undefined4 *)(param_3 + -0x2c);
      uVar2 = *(undefined4 *)(param_3 + -0x28);
      uVar3 = *(undefined4 *)(param_3 + -0x24);
      *(undefined4 *)(param_2 + -0x30) = *(undefined4 *)(param_3 + -0x30);
      *(undefined4 *)(param_2 + -0x2c) = uVar1;
      *(undefined4 *)(param_2 + -0x28) = uVar2;
      *(undefined4 *)(param_2 + -0x24) = uVar3;
      FUN_14583b696(param_2 + -0x18,param_3 + -0x18);
      FUN_1401f3db8(param_2,param_3);
      FUN_1411f346e(param_2 + 0x18,param_3 + 0x18);
      *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_3 + 0x28);
      *(undefined1 *)(param_2 + 0x30) = *(undefined1 *)(param_3 + 0x30);
      param_3 = param_3 + 0x68;
      param_2 = param_2 + 0x68;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148b93086 FUN_148b93086 body=59 status=ok
// SIG undefined FUN_148b93086(void)

undefined8 FUN_148b93086(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b930cc FUN_148b930cc body=34 status=ok
// SIG undefined FUN_148b930cc(void)

void FUN_148b930cc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x68) == '\x01') {
    FUN_14583d64e(param_2);
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  return;
}



// FUNCTION 148b93172 FUN_148b93172 body=101 status=ok
// SIG undefined FUN_148b93172(void)

undefined8 FUN_148b93172(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      lVar2 = param_2 + 0x18 + lVar6;
      *(undefined8 *)(lVar2 + -0x18) = *puVar1;
      uVar3 = *(undefined4 *)((longlong)puVar1 + 0xc);
      uVar4 = *(undefined4 *)(puVar1 + 2);
      uVar5 = *(undefined4 *)((longlong)puVar1 + 0x14);
      *(undefined4 *)(lVar2 + -0x10) = *(undefined4 *)(puVar1 + 1);
      *(undefined4 *)(lVar2 + -0xc) = uVar3;
      *(undefined4 *)(lVar2 + -8) = uVar4;
      *(undefined4 *)(lVar2 + -4) = uVar5;
      FUN_144a787a6();
      FUN_14065c7a4(param_2 + lVar6 + 0x28,param_3 + lVar6 + 0x28);
      lVar6 = lVar6 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148b93200 FUN_148b93200 body=59 status=ok
// SIG undefined FUN_148b93200(void)

undefined8 FUN_148b93200(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b9328e FUN_148b9328e body=52 status=ok
// SIG undefined FUN_148b9328e(void)

void FUN_148b9328e(longlong param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    if (*(longlong *)(param_1 + 0x28) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  return;
}



// FUNCTION 148b93306 FUN_148b93306 body=63 status=ok
// SIG undefined FUN_148b93306(void)

undefined1 FUN_148b93306(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b93426(param_2,param_3);
    param_3 = param_3 + 0x170;
    param_2 = param_2 + 0x170;
  }
  return 1;
}



// FUNCTION 148b9336e FUN_148b9336e body=59 status=ok
// SIG undefined FUN_148b9336e(void)

undefined8 FUN_148b9336e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b933ba FUN_148b933ba body=38 status=ok
// SIG undefined FUN_148b933ba(void)

void FUN_148b933ba(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x170) == '\x01') {
    FUN_140aeb72e(param_2);
    *(undefined1 *)(param_2 + 0x170) = 0;
  }
  return;
}



// FUNCTION 148b93426 FUN_148b93426 body=120 status=ok
// SIG undefined FUN_148b93426(void)

longlong FUN_148b93426(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (*(char *)(param_2 + 0x10) == '\0') {
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  }
  *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(param_2 + 0x18);
  lVar6 = 0;
  do {
    lVar1 = param_2 + lVar6;
    lVar2 = param_1 + 0x38 + lVar6;
    *(undefined8 *)(lVar2 + -0x18) = *(undefined8 *)(lVar1 + 0x20);
    uVar3 = *(undefined4 *)(lVar1 + 0x2c);
    uVar4 = *(undefined4 *)(lVar1 + 0x30);
    uVar5 = *(undefined4 *)(lVar1 + 0x34);
    *(undefined4 *)(lVar2 + -0x10) = *(undefined4 *)(lVar1 + 0x28);
    *(undefined4 *)(lVar2 + -0xc) = uVar3;
    *(undefined4 *)(lVar2 + -8) = uVar4;
    *(undefined4 *)(lVar2 + -4) = uVar5;
    FUN_144a787a6();
    FUN_14065c7a4(param_1 + lVar6 + 0x48,param_2 + lVar6 + 0x48);
    lVar6 = lVar6 + 0x38;
  } while (lVar6 != 0x150);
  return param_1;
}



// FUNCTION 148b934a0 FUN_148b934a0 body=80 status=ok
// SIG undefined FUN_148b934a0(void)

void FUN_148b934a0(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x3f0);
  *param_2 = &PTR_FUN_14b5f6b80;
  FUN_1406d2124(param_2 + 1);
  FUN_1406d2124(param_2 + 0x2b);
  FUN_1406d2124(param_2 + 0x55);
  return;
}



// FUNCTION 148b934f0 FUN_148b934f0 body=59 status=ok
// SIG undefined FUN_148b934f0(void)

void FUN_148b934f0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14b5f6b80;
  FUN_1406d2124(param_2 + 1);
  FUN_1406d2124(param_2 + 0x2b);
  FUN_1406d2124(param_2 + 0x55);
  return;
}



// FUNCTION 148b93550 FUN_148b93550 body=121 status=ok
// SIG undefined FUN_148b93550(void)

undefined8 FUN_148b93550(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x2a8;
    param_2 = param_2 + 0x2a8;
    do {
      FUN_141251a4c(param_2 + -0x2a0,param_3 + -0x2a0);
      FUN_141251a4c(param_2 + -0x150,param_3 + -0x150);
      FUN_141251a4c(param_2,param_3);
      param_3 = param_3 + 0x3f8;
      param_2 = param_2 + 0x3f8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148b935f2 FUN_148b935f2 body=59 status=ok
// SIG undefined FUN_148b935f2(void)

undefined8 FUN_148b935f2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b93694 FUN_148b93694 body=81 status=ok
// SIG undefined FUN_148b93694(void)

undefined8 * FUN_148b93694(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b5f6b80;
  FUN_14079c464(param_1 + 0x55);
  FUN_14079c464(param_1 + 0x2b);
  FUN_14079c464(param_1 + 1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x3f8);
  }
  return param_1;
}



// FUNCTION 148b936e6 FUN_148b936e6 body=55 status=ok
// SIG undefined FUN_148b936e6(void)

void FUN_148b936e6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0668 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0668 = FUN_140002ddd(FUN_1465aa3a5,uVar1,L"ElementalHitReaction_AnimBase");
  }
  return;
}



// FUNCTION 148b9371e FUN_148b9371e body=54 status=ok
// SIG undefined FUN_148b9371e(void)

undefined8 * FUN_148b9371e(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("D:\\Oak2\\OakGame\\Source\\OakGame\\StatusEffects/Tricks/GbxTrick_ElementalHitReaction.h"
                ,0x17,L"Pure virtual not implemented (%s)",L"FElementalHitReaction::NewInstance");
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 148b9375a FUN_148b9375a body=73 status=ok
// SIG undefined FUN_148b9375a(void)

void FUN_148b9375a(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x7f) == '\x01') {
    *param_1 = &PTR_FUN_14b5f6b80;
    FUN_14079c464(param_1 + 0x55);
    FUN_14079c464(param_1 + 0x2b);
    FUN_14079c464(param_1 + 1);
    *(undefined1 *)(param_1 + 0x7f) = 0;
  }
  return;
}



// FUNCTION 148b937a4 FUN_148b937a4 body=88 status=ok
// SIG undefined FUN_148b937a4(void)

void FUN_148b937a4(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x3f0);
  *param_2 = &PTR_FUN_14b5f6b80;
  FUN_1406d2124(param_2 + 1);
  FUN_1406d2124(param_2 + 0x2b);
  FUN_1406d2124(param_2 + 0x55);
  *param_2 = &PTR_FUN_14b5f6db0;
  return;
}



// FUNCTION 148b937fc FUN_148b937fc body=67 status=ok
// SIG undefined FUN_148b937fc(void)

void FUN_148b937fc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14b5f6b80;
  FUN_1406d2124(param_2 + 1);
  FUN_1406d2124(param_2 + 0x2b);
  FUN_1406d2124(param_2 + 0x55);
  *param_2 = &PTR_FUN_14b5f6db0;
  return;
}



// FUNCTION 148b93864 FUN_148b93864 body=121 status=ok
// SIG undefined FUN_148b93864(void)

undefined8 FUN_148b93864(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x2a8;
    param_2 = param_2 + 0x2a8;
    do {
      FUN_141251a4c(param_2 + -0x2a0,param_3 + -0x2a0);
      FUN_141251a4c(param_2 + -0x150,param_3 + -0x150);
      FUN_141251a4c(param_2,param_3);
      param_3 = param_3 + 0x3f8;
      param_2 = param_2 + 0x3f8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148b93906 FUN_148b93906 body=59 status=ok
// SIG undefined FUN_148b93906(void)

undefined8 FUN_148b93906(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b939a8 FUN_148b939a8 body=81 status=ok
// SIG undefined FUN_148b939a8(void)

undefined8 * FUN_148b939a8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b5f6b80;
  FUN_14079c464(param_1 + 0x55);
  FUN_14079c464(param_1 + 0x2b);
  FUN_14079c464(param_1 + 1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x3f8);
  }
  return param_1;
}



// FUNCTION 148b939fa FUN_148b939fa body=55 status=ok
// SIG undefined FUN_148b939fa(void)

void FUN_148b939fa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0680 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0680 = FUN_140002ddd(FUN_1465aa43b,uVar1,L"ElementalHitReaction_Concussed");
  }
  return;
}



// FUNCTION 148b93a32 FUN_148b93a32 body=73 status=ok
// SIG undefined FUN_148b93a32(void)

void FUN_148b93a32(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x7f) == '\x01') {
    *param_1 = &PTR_FUN_14b5f6b80;
    FUN_14079c464(param_1 + 0x55);
    FUN_14079c464(param_1 + 0x2b);
    FUN_14079c464(param_1 + 1);
    *(undefined1 *)(param_1 + 0x7f) = 0;
  }
  return;
}



// FUNCTION 148b93ae4 FUN_148b93ae4 body=59 status=ok
// SIG undefined FUN_148b93ae4(void)

undefined8 FUN_148b93ae4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b93b84 FUN_148b93b84 body=34 status=ok
// SIG undefined FUN_148b93b84(void)

undefined8 FUN_148b93b84(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 148b93ba6 FUN_148b93ba6 body=55 status=ok
// SIG undefined FUN_148b93ba6(void)

void FUN_148b93ba6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0698 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0698 = FUN_140002ddd(FUN_1465aa4d1,uVar1,L"ElementalHitReaction_Freeze");
  }
  return;
}



// FUNCTION 148b93bde FUN_148b93bde body=88 status=ok
// SIG undefined FUN_148b93bde(void)

void FUN_148b93bde(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x3f0);
  *param_2 = &PTR_FUN_14b5f6b80;
  FUN_1406d2124(param_2 + 1);
  FUN_1406d2124(param_2 + 0x2b);
  FUN_1406d2124(param_2 + 0x55);
  *param_2 = &PTR_FUN_14b5f70d0;
  return;
}



// FUNCTION 148b93c36 FUN_148b93c36 body=67 status=ok
// SIG undefined FUN_148b93c36(void)

void FUN_148b93c36(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14b5f6b80;
  FUN_1406d2124(param_2 + 1);
  FUN_1406d2124(param_2 + 0x2b);
  FUN_1406d2124(param_2 + 0x55);
  *param_2 = &PTR_FUN_14b5f70d0;
  return;
}



// FUNCTION 148b93c9e FUN_148b93c9e body=121 status=ok
// SIG undefined FUN_148b93c9e(void)

undefined8 FUN_148b93c9e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x2a8;
    param_2 = param_2 + 0x2a8;
    do {
      FUN_141251a4c(param_2 + -0x2a0,param_3 + -0x2a0);
      FUN_141251a4c(param_2 + -0x150,param_3 + -0x150);
      FUN_141251a4c(param_2,param_3);
      param_3 = param_3 + 0x3f8;
      param_2 = param_2 + 0x3f8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148b93d40 FUN_148b93d40 body=59 status=ok
// SIG undefined FUN_148b93d40(void)

undefined8 FUN_148b93d40(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b93de2 FUN_148b93de2 body=81 status=ok
// SIG undefined FUN_148b93de2(void)

undefined8 * FUN_148b93de2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b5f6b80;
  FUN_14079c464(param_1 + 0x55);
  FUN_14079c464(param_1 + 0x2b);
  FUN_14079c464(param_1 + 1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x3f8);
  }
  return param_1;
}



// FUNCTION 148b93e34 FUN_148b93e34 body=55 status=ok
// SIG undefined FUN_148b93e34(void)

void FUN_148b93e34(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba06b0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba06b0 = FUN_140002ddd(FUN_1465aa567,uVar1,L"ElementalHitReaction_Stunned");
  }
  return;
}



// FUNCTION 148b93e6c FUN_148b93e6c body=73 status=ok
// SIG undefined FUN_148b93e6c(void)

void FUN_148b93e6c(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x7f) == '\x01') {
    *param_1 = &PTR_FUN_14b5f6b80;
    FUN_14079c464(param_1 + 0x55);
    FUN_14079c464(param_1 + 0x2b);
    FUN_14079c464(param_1 + 1);
    *(undefined1 *)(param_1 + 0x7f) = 0;
  }
  return;
}



// FUNCTION 148b93f04 FUN_148b93f04 body=59 status=ok
// SIG undefined FUN_148b93f04(void)

undefined8 FUN_148b93f04(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b93f98 FUN_148b93f98 body=55 status=ok
// SIG undefined FUN_148b93f98(void)

void FUN_148b93f98(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba06e0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba06e0 = FUN_140002ddd(FUN_1465aa62d,uVar1,L"EnhancementContextResolver");
  }
  return;
}



// FUNCTION 148b9403c FUN_148b9403c body=59 status=ok
// SIG undefined FUN_148b9403c(void)

undefined8 FUN_148b9403c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b940d0 FUN_148b940d0 body=55 status=ok
// SIG undefined FUN_148b940d0(void)

void FUN_148b940d0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0728 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0728 = FUN_140002ddd(FUN_1465aa721,uVar1,L"EquippedInventoryContextResolver");
  }
  return;
}



// FUNCTION 148b94178 FUN_148b94178 body=103 status=ok
// SIG undefined FUN_148b94178(void)

undefined1 FUN_148b94178(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (param_4 != 0) {
    lVar8 = 0;
    bVar6 = DAT_14c950c29;
    do {
      lVar7 = *(longlong *)(param_3 + lVar8);
      if ((bVar6 & 1) != 0) {
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar7 = *(longlong *)(param_3 + lVar8);
          bVar6 = DAT_14c950c29;
        }
      }
      plVar1 = (longlong *)(param_2 + lVar8);
      *plVar1 = lVar7;
      puVar2 = (undefined4 *)(param_3 + 8 + lVar8);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      *(undefined4 *)(plVar1 + 1) = *puVar2;
      *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
      *(undefined4 *)(plVar1 + 2) = uVar4;
      *(undefined4 *)((longlong)plVar1 + 0x14) = uVar5;
      lVar8 = lVar8 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148b94208 FUN_148b94208 body=59 status=ok
// SIG undefined FUN_148b94208(void)

undefined8 FUN_148b94208(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b94370 FUN_148b94370 body=59 status=ok
// SIG undefined FUN_148b94370(void)

undefined8 FUN_148b94370(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b94492 FUN_148b94492 body=59 status=ok
// SIG undefined FUN_148b94492(void)

undefined8 FUN_148b94492(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b94532 FUN_148b94532 body=55 status=ok
// SIG undefined FUN_148b94532(void)

void FUN_148b94532(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba07d8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba07d8 = FUN_140002ddd(FUN_1465aa9ef,uVar1,L"FactEvaluator_PlayerHasGearOfTypeEquipped");
  }
  return;
}



// FUNCTION 148b945c0 FUN_148b945c0 body=59 status=ok
// SIG undefined FUN_148b945c0(void)

undefined8 FUN_148b945c0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b94606 FUN_148b94606 body=48 status=ok
// SIG undefined FUN_148b94606(void)

void FUN_148b94606(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 4) == '\x01') {
    *param_2 = &PTR_FUN_14b5f8130;
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 4) = 0;
  }
  return;
}



// FUNCTION 148b94680 FUN_148b94680 body=55 status=ok
// SIG undefined FUN_148b94680(void)

void FUN_148b94680(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0808 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0808 = FUN_140002ddd(FUN_1465aaab5,uVar1,L"FactEvaluator_PlayersHaveDied");
  }
  return;
}



// FUNCTION 148b946b8 FUN_148b946b8 body=43 status=ok
// SIG undefined FUN_148b946b8(void)

undefined8 FUN_148b946b8(undefined8 param_1,int param_2)

{
  FUN_1412bd952();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x220);
  }
  return param_1;
}



// FUNCTION 148b946e4 FUN_148b946e4 body=55 status=ok
// SIG undefined FUN_148b946e4(void)

void FUN_148b946e4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0878 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0878 = FUN_140002ddd(FUN_1465aac15,uVar1,L"FastTravelStationObjectBodyState");
  }
  return;
}



// FUNCTION 148b9471c FUN_148b9471c body=57 status=ok
// SIG undefined FUN_148b9471c(void)

void FUN_148b9471c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0848 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0848 = FUN_140002ddd(FUN_1465aab4e,uVar1,L"FastTravelStationObjectBodySettings");
  }
  return;
}



// FUNCTION 148b947a4 FUN_148b947a4 body=63 status=ok
// SIG undefined FUN_148b947a4(void)

undefined1 FUN_148b947a4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14862f10e(param_2,param_3);
    param_3 = param_3 + 0x228;
    param_2 = param_2 + 0x228;
  }
  return 1;
}



// FUNCTION 148b9480c FUN_148b9480c body=59 status=ok
// SIG undefined FUN_148b9480c(void)

undefined8 FUN_148b9480c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b94858 FUN_148b94858 body=38 status=ok
// SIG undefined FUN_148b94858(void)

void FUN_148b94858(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x228) == '\x01') {
    FUN_140d2194c(param_2);
    *(undefined1 *)(param_2 + 0x228) = 0;
  }
  return;
}



// FUNCTION 148b948d6 FUN_148b948d6 body=48 status=ok
// SIG undefined FUN_148b948d6(void)

void FUN_148b948d6(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x220);
  FUN_1411c3dfa(param_2);
  *param_2 = &PTR_FUN_14b5f8150;
  return;
}



// FUNCTION 148b94906 FUN_148b94906 body=32 status=ok
// SIG undefined FUN_148b94906(void)

void FUN_148b94906(undefined8 param_1,undefined8 *param_2)

{
  FUN_1411c3dfa(param_2);
  *param_2 = &PTR_FUN_14b5f8150;
  return;
}



// FUNCTION 148b94980 FUN_148b94980 body=59 status=ok
// SIG undefined FUN_148b94980(void)

undefined8 FUN_148b94980(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b949cc FUN_148b949cc body=38 status=ok
// SIG undefined FUN_148b949cc(void)

void FUN_148b949cc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x220) == '\x01') {
    FUN_1412bd952(param_2);
    *(undefined1 *)(param_2 + 0x220) = 0;
  }
  return;
}



// FUNCTION 148b94a42 FUN_148b94a42 body=32 status=ok
// SIG undefined FUN_148b94a42(void)

void FUN_148b94a42(undefined8 param_1,undefined8 *param_2)

{
  FUN_141021b94(param_2);
  *param_2 = &PTR_FUN_14b5f8650;
  return;
}



// FUNCTION 148b94a78 FUN_148b94a78 body=139 status=ok
// SIG undefined FUN_148b94a78(void)

undefined8 FUN_148b94a78(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b897b2(param_2,param_3);
    *(undefined1 *)(param_2 + 0x458) = *(undefined1 *)(param_3 + 0x458);
    *(undefined8 *)(param_2 + 0x460) = *(undefined8 *)(param_3 + 0x460);
    uVar1 = *(undefined4 *)(param_3 + 0x46c);
    uVar2 = *(undefined4 *)(param_3 + 0x470);
    uVar3 = *(undefined4 *)(param_3 + 0x474);
    *(undefined4 *)(param_2 + 0x468) = *(undefined4 *)(param_3 + 0x468);
    *(undefined4 *)(param_2 + 0x46c) = uVar1;
    *(undefined4 *)(param_2 + 0x470) = uVar2;
    *(undefined4 *)(param_2 + 0x474) = uVar3;
    FUN_144a787a6(param_2 + 0x478,param_3 + 0x478);
    *(undefined8 *)(param_2 + 0x488) = *(undefined8 *)(param_3 + 0x488);
    param_2 = param_2 + 0x490;
    param_3 = param_3 + 0x490;
  }
  return 1;
}



// FUNCTION 148b94b2c FUN_148b94b2c body=59 status=ok
// SIG undefined FUN_148b94b2c(void)

undefined8 FUN_148b94b2c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b94b78 FUN_148b94b78 body=65 status=ok
// SIG undefined FUN_148b94b78(void)

void FUN_148b94b78(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x92) == '\x01') {
    *param_2 = &PTR_FUN_14b5ecae0;
    if (param_2[0x8f] != 0) {
      FUN_1400020a8();
    }
    FUN_14075380c(param_2);
    *(undefined1 *)(param_2 + 0x92) = 0;
  }
  return;
}



// FUNCTION 148b94c30 FUN_148b94c30 body=532 status=ok
// SIG undefined FUN_148b94c30(void)

void FUN_148b94c30(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_38 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 0;
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
  local_48 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar3 = &local_40;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  local_58 = &local_48;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    local_58 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_14416a09a(local_30,local_34,local_38,puVar3);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b94e4e FUN_148b94e4e body=556 status=ok
// SIG undefined FUN_148b94e4e(void)

void FUN_148b94e4e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_104;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined2 local_38;
  undefined8 local_34;
  undefined8 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_100);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_100);
  }
  local_104 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_104);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_104);
  }
  local_108 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_108);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_108);
  }
  local_98 = 0;
  local_90 = 0x8000000000;
  uStack_88 = 0xffffffff;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 0xf;
  local_38 = 1;
  local_34 = 0;
  uStack_2c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_f8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_f8);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar2 = &local_f8;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14416af0c(local_100,local_104,local_108,puVar2);
  *param_3 = uVar1;
  FUN_140368b56(&local_f8);
  if ((local_20 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b95082 FUN_148b95082 body=325 status=ok
// SIG undefined FUN_148b95082(void)

void FUN_148b95082(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
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
  local_24 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0xffffffff;
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
  uVar1 = FUN_144169656(local_20,local_24,local_28);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b951cb FUN_148b951cb body=62 status=ok
// SIG undefined FUN_148b951cb(void)

void FUN_148b951cb(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1447cd2ec(param_1,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b9520a FUN_148b9520a body=62 status=ok
// SIG undefined FUN_148b9520a(void)

void FUN_148b9520a(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1447cd2ec(param_1,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b9524e FUN_148b9524e body=339 status=ok
// SIG undefined FUN_148b9524e(void)

void FUN_148b9524e(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_98 [32];
  longlong local_78;
  int local_70;
  undefined8 local_60;
  undefined8 local_58 [4];
  undefined2 local_38;
  undefined1 local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58[0] = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  puVar1 = local_58;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  local_60 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148d3f208(&local_78,puVar1,local_60);
  if ((*param_3 != local_78) || ((int)param_3[1] != local_70)) {
    *param_3 = local_78;
    *(int *)(param_3 + 1) = local_70;
    param_3[2] = 0;
  }
  FUN_144a2da94(local_58);
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148b953a2 FUN_148b953a2 body=339 status=ok
// SIG undefined FUN_148b953a2(void)

void FUN_148b953a2(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_98 [32];
  longlong local_78;
  int local_70;
  undefined8 local_60;
  undefined8 local_58 [4];
  undefined2 local_38;
  undefined1 local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58[0] = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  puVar1 = local_58;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  local_60 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148d3ee18(&local_78,puVar1,local_60);
  if ((*param_3 != local_78) || ((int)param_3[1] != local_70)) {
    *param_3 = local_78;
    *(int *)(param_3 + 1) = local_70;
    param_3[2] = 0;
  }
  FUN_144a2da94(local_58);
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148b954f6 FUN_148b954f6 body=339 status=ok
// SIG undefined FUN_148b954f6(void)

void FUN_148b954f6(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_98 [32];
  longlong local_78;
  int local_70;
  undefined8 local_60;
  undefined8 local_58 [4];
  undefined2 local_38;
  undefined1 local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58[0] = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  puVar1 = local_58;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  local_60 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148d3f010(&local_78,puVar1,local_60);
  if ((*param_3 != local_78) || ((int)param_3[1] != local_70)) {
    *param_3 = local_78;
    *(int *)(param_3 + 1) = local_70;
    param_3[2] = 0;
  }
  FUN_144a2da94(local_58);
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148b95752 FUN_148b95752 body=48 status=ok
// SIG undefined FUN_148b95752(void)

longlong FUN_148b95752(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a0;
  FUN_146069fee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b95782 FUN_148b95782 body=48 status=ok
// SIG undefined FUN_148b95782(void)

longlong FUN_148b95782(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3a8;
  FUN_146069fee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b957b2 FUN_148b957b2 body=48 status=ok
// SIG undefined FUN_148b957b2(void)

longlong FUN_148b957b2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_146069fee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b957e2 FUN_148b957e2 body=48 status=ok
// SIG undefined FUN_148b957e2(void)

longlong FUN_148b957e2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b8;
  FUN_146069fee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b95812 FUN_148b95812 body=48 status=ok
// SIG undefined FUN_148b95812(void)

longlong FUN_148b95812(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3c0;
  FUN_146069fee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b95842 FUN_148b95842 body=48 status=ok
// SIG undefined FUN_148b95842(void)

longlong FUN_148b95842(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x408;
  FUN_146069fee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b95872 FUN_148b95872 body=48 status=ok
// SIG undefined FUN_148b95872(void)

longlong FUN_148b95872(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x410;
  FUN_146069fee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b958a2 FUN_148b958a2 body=48 status=ok
// SIG undefined FUN_148b958a2(void)

longlong FUN_148b958a2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x418;
  FUN_146069fee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b958d2 FUN_148b958d2 body=48 status=ok
// SIG undefined FUN_148b958d2(void)

longlong FUN_148b958d2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x420;
  FUN_146069fee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b95902 FUN_148b95902 body=48 status=ok
// SIG undefined FUN_148b95902(void)

longlong FUN_148b95902(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x428;
  FUN_146069fee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b95932 FUN_148b95932 body=48 status=ok
// SIG undefined FUN_148b95932(void)

longlong FUN_148b95932(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x458;
  FUN_146069fee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b95962 FUN_148b95962 body=48 status=ok
// SIG undefined FUN_148b95962(void)

longlong FUN_148b95962(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x460;
  FUN_146069fee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b95992 FUN_148b95992 body=48 status=ok
// SIG undefined FUN_148b95992(void)

longlong FUN_148b95992(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x468;
  FUN_146069fee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b959c2 FUN_148b959c2 body=48 status=ok
// SIG undefined FUN_148b959c2(void)

longlong FUN_148b959c2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x470;
  FUN_146069fee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b959f2 FUN_148b959f2 body=48 status=ok
// SIG undefined FUN_148b959f2(void)

longlong FUN_148b959f2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x478;
  FUN_146069fee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b95a22 FUN_148b95a22 body=48 status=ok
// SIG undefined FUN_148b95a22(void)

longlong FUN_148b95a22(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x480;
  FUN_146069fee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b95a52 FUN_148b95a52 body=48 status=ok
// SIG undefined FUN_148b95a52(void)

longlong FUN_148b95a52(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x488;
  FUN_146069fee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b95a82 FUN_148b95a82 body=48 status=ok
// SIG undefined FUN_148b95a82(void)

longlong FUN_148b95a82(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x490;
  FUN_146069fee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b95ab2 FUN_148b95ab2 body=48 status=ok
// SIG undefined FUN_148b95ab2(void)

longlong FUN_148b95ab2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x498;
  FUN_146069fee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b95ae2 FUN_148b95ae2 body=48 status=ok
// SIG undefined FUN_148b95ae2(void)

longlong FUN_148b95ae2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a0;
  FUN_146069fee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b95b12 FUN_148b95b12 body=48 status=ok
// SIG undefined FUN_148b95b12(void)

longlong FUN_148b95b12(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4a8;
  FUN_146069fee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b95b42 FUN_148b95b42 body=48 status=ok
// SIG undefined FUN_148b95b42(void)

longlong FUN_148b95b42(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x4b0;
  FUN_146069fee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b95b72 FUN_148b95b72 body=48 status=ok
// SIG undefined FUN_148b95b72(void)

longlong FUN_148b95b72(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1a98;
  FUN_146069fee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b95ba2 FUN_148b95ba2 body=48 status=ok
// SIG undefined FUN_148b95ba2(void)

longlong FUN_148b95ba2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1aa0;
  FUN_146069fee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b95bd2 FUN_148b95bd2 body=48 status=ok
// SIG undefined FUN_148b95bd2(void)

longlong FUN_148b95bd2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1aa8;
  FUN_146069fee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b95c02 FUN_148b95c02 body=48 status=ok
// SIG undefined FUN_148b95c02(void)

longlong FUN_148b95c02(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ab0;
  FUN_146069fee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b95c32 FUN_148b95c32 body=48 status=ok
// SIG undefined FUN_148b95c32(void)

longlong FUN_148b95c32(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ad0;
  FUN_146069fee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b95c62 FUN_148b95c62 body=48 status=ok
// SIG undefined FUN_148b95c62(void)

longlong FUN_148b95c62(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ad8;
  FUN_146069fee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b95c92 FUN_148b95c92 body=48 status=ok
// SIG undefined FUN_148b95c92(void)

longlong FUN_148b95c92(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1ae0;
  FUN_146069fee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148b95ce0 FUN_148b95ce0 body=63 status=ok
// SIG undefined FUN_148b95ce0(void)

undefined1 FUN_148b95ce0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b95e02(param_2,param_3);
    param_3 = param_3 + 0x270;
    param_2 = param_2 + 0x270;
  }
  return 1;
}



// FUNCTION 148b95d48 FUN_148b95d48 body=59 status=ok
// SIG undefined FUN_148b95d48(void)

undefined8 FUN_148b95d48(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b95d94 FUN_148b95d94 body=40 status=ok
// SIG undefined FUN_148b95d94(void)

void FUN_148b95d94(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x270) == '\x01') {
    FUN_1459b2ee8(param_2);
    *(undefined1 *)(param_2 + 0x270) = 0;
  }
  return;
}



// FUNCTION 148b95e02 FUN_148b95e02 body=398 status=ok
// SIG undefined FUN_148b95e02(void)

longlong FUN_148b95e02(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(char *)(param_2 + 0x10) == '\0') {
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  }
  if ((*(longlong *)(param_1 + 0x18) != *(longlong *)(param_2 + 0x18)) ||
     (*(int *)(param_1 + 0x20) != *(int *)(param_2 + 0x20))) {
    *(longlong *)(param_1 + 0x18) = *(longlong *)(param_2 + 0x18);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x35) = *(undefined8 *)(param_2 + 0x35);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  if ((*(longlong *)(param_1 + 0x40) != *(longlong *)(param_2 + 0x40)) ||
     (*(int *)(param_1 + 0x48) != *(int *)(param_2 + 0x48))) {
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_2 + 0x40);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  uVar2 = *(undefined4 *)(param_2 + 0x5c);
  uVar3 = *(undefined4 *)(param_2 + 0x60);
  uVar4 = *(undefined4 *)(param_2 + 100);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x5c) = uVar2;
  *(undefined4 *)(param_1 + 0x60) = uVar3;
  *(undefined4 *)(param_1 + 100) = uVar4;
  FUN_147e321ae(param_1 + 0x70,param_2 + 0x70);
  FUN_1401f3db8(param_1 + 0x88,param_2 + 0x88);
  FUN_140d02432(param_1 + 0xa0,param_2 + 0xa0);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
  FUN_140d02432(param_1 + 0xf8,param_2 + 0xf8);
  FUN_1418c418a(param_1 + 0x148,param_2 + 0x148);
  *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_2 + 0x160);
  FUN_140d02432(param_1 + 0x168,param_2 + 0x168);
  FUN_140d02432(param_1 + 0x1b8,param_2 + 0x1b8);
  *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_2 + 0x208);
  *(undefined8 *)(param_1 + 0x210) = *(undefined8 *)(param_2 + 0x210);
  uVar2 = *(undefined4 *)(param_2 + 0x21c);
  uVar3 = *(undefined4 *)(param_2 + 0x220);
  uVar4 = *(undefined4 *)(param_2 + 0x224);
  *(undefined4 *)(param_1 + 0x218) = *(undefined4 *)(param_2 + 0x218);
  *(undefined4 *)(param_1 + 0x21c) = uVar2;
  *(undefined4 *)(param_1 + 0x220) = uVar3;
  *(undefined4 *)(param_1 + 0x224) = uVar4;
  FUN_144a787a6(param_1 + 0x228,param_2 + 0x228);
  FUN_14185cc4c(param_1 + 0x238,param_2 + 0x238);
  FUN_14185cc4c(param_1 + 0x250,param_2 + 0x250);
  *(undefined8 *)(param_1 + 0x268) = *(undefined8 *)(param_2 + 0x268);
  return param_1;
}



// FUNCTION 148b95f92 FUN_148b95f92 body=57 status=ok
// SIG undefined FUN_148b95f92(void)

void FUN_148b95f92(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba08c8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba08c8 = FUN_140002ddd(FUN_1465ab34f,uVar1,L"FFYLDef");
  }
  return;
}



// FUNCTION 148b95fcc FUN_148b95fcc body=28 status=ok
// SIG undefined FUN_148b95fcc(void)

undefined8 FUN_148b95fcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a79b68(param_2,param_3);
  return param_2;
}



// FUNCTION 148b96042 FUN_148b96042 body=140 status=ok
// SIG undefined FUN_148b96042(void)

undefined8 FUN_148b96042(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 148b960f6 FUN_148b960f6 body=59 status=ok
// SIG undefined FUN_148b960f6(void)

undefined8 FUN_148b960f6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b961ba FUN_148b961ba body=73 status=ok
// SIG undefined FUN_148b961ba(void)

undefined1 FUN_148b961ba(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14615ccfc(param_2,param_3);
    FUN_148b962bc(param_2 + 0x10,param_3 + 0x10);
    *(undefined1 *)(param_2 + 0x28) = *(undefined1 *)(param_3 + 0x28);
    param_2 = param_2 + 0x30;
    param_3 = param_3 + 0x30;
  }
  return 1;
}



// FUNCTION 148b9622c FUN_148b9622c body=59 status=ok
// SIG undefined FUN_148b9622c(void)

undefined8 FUN_148b9622c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148b962bc FUN_148b962bc body=84 status=ok
// SIG undefined FUN_148b962bc(void)

longlong * FUN_148b962bc(longlong *param_1,longlong *param_2)

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



// FUNCTION 148b96312 FUN_148b96312 body=48 status=ok
// SIG undefined FUN_148b96312(void)

void FUN_148b96312(longlong *param_1)

{
  if ((char)param_1[6] == '\x01') {
    FUN_140d587e5(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 6) = 0;
  }
  return;
}



// FUNCTION 148b96360 FUN_148b96360 body=54 status=ok
// SIG undefined FUN_148b96360(void)

undefined1 FUN_148b96360(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148b96466(param_2,param_3);
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return 1;
}



// FUNCTION 148b963be FUN_148b963be body=59 status=ok
// SIG undefined FUN_148b963be(void)

undefined8 FUN_148b963be(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


